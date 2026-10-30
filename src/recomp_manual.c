/**
 * Manual function overrides and ICALL diagnostics
 *
 * This file provides:
 *   - recomp_lookup_manual()  : intercept specific Xbox VAs with hand-written code
 *   - recomp_icall_fail_log() : log when an indirect call target can't be resolved
 *   - ICALL trace ring buffer  : globals used by the RECOMP_ICALL macro
 *
 * The recomp pipeline generates an auto-dispatch table (recomp_lookup) that
 * resolves most function addresses. recomp_lookup_manual() is called FIRST,
 * giving you a chance to override any function with a custom implementation.
 *
 * Common reasons to add manual overrides:
 *   - Trace a function to understand call flow (wrap the generated version)
 *   - Fix a function the lifter translated incorrectly
 *   - Stub out a function that crashes (return early, set eax to a safe value)
 *   - Redirect a function to a native implementation (e.g., skip CRT init)
 *   - Intercept D3D/audio calls for custom rendering or sound
 */

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>   /* ptrdiff_t */
#include <string.h>
#include "recomp/gen/recomp_types.h"

typedef struct XBOX_GAMEPAD {
    uint16_t wButtons;
    uint8_t  bAnalogButtons[8];
    int16_t  sThumbLX;
    int16_t  sThumbLY;
    int16_t  sThumbRX;
    int16_t  sThumbRY;
} XBOX_GAMEPAD;

typedef struct XBOX_INPUT_STATE {
    uint32_t dwPacketNumber;
    XBOX_GAMEPAD Gamepad;
} XBOX_INPUT_STATE;

extern uint32_t xbox_InputGetState(uint32_t dwPort, XBOX_INPUT_STATE *pState);

static inline int xbox_is_valid_ram(uint32_t va) {
    return (va >= 0x00010000u && va < 0x08000000u) ||
           (va >= 0x80000000u && va < 0x88000000u);
}

/* ── ICALL trace ring buffer ───────────────────────────────── */

/*
 * These globals are written by the RECOMP_ICALL macro (defined in
 * recomp_types.h) every time an indirect call is dispatched. When a
 * crash occurs, the VEH handler or recomp_icall_fail_log() can dump
 * the last 16 call targets to help you trace what happened.
 *
 * The runtime owns them: xbox_kernel defines all three in
 * src/kernel/xbox_memory_layout.c, and recomp_types.h declares them extern.
 * Declare, do not define -- a definition here as well is a duplicate symbol,
 * and a project copied from this template failed to link on all three:
 *
 *   xbox_memory_layout.obj : error LNK2005: g_icall_count already defined
 *                            in recomp_manual.obj
 */
extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;
extern volatile uint64_t g_icall_count;

typedef void (*recomp_func_t)(void);

/* ── Register state (defined in xbox_memory_layout.c) ──────── */

extern RECOMP_TLS uint32_t g_eax;
extern RECOMP_TLS uint32_t g_ecx;
extern RECOMP_TLS uint32_t g_edx;
extern RECOMP_TLS uint32_t g_esp;
extern ptrdiff_t g_xbox_mem_offset;

/* ── Manual function overrides ─────────────────────────────── */

extern void sub_00206430(void);
extern void sub_002064D0(void);
extern void sub_002066B0(void);
extern void sub_00040830(void);

static void manual_sub_00206640(void)
{
    /* Direct3D_CheckDeviceFormat(Adapter, DeviceType, AdapterFormat, Usage, RType, CheckFormat)
     * Stdcall: 6 arguments (24 bytes) popped by callee + 4 ret addr. Returns D3D_OK (0). */
    g_eax = 0;
    g_esp += 28;
}

static void manual_sub_00285B70(void)
{
    /* XPP_Init(pDevices, NumDevices)
     * Stdcall: 2 arguments (8 bytes) popped by callee + 4 ret addr. Returns 0 (STATUS_SUCCESS). */
    g_eax = 0;
    g_esp += 12;
}

static void manual_sub_00214A3D(void)
{
    /* D3DX CreateStateBlock / COM object constructor
     * Arg: [esp + 4] = ppObj. Returns S_OK (0) and pops 4 bytes + 4 ret addr. */
    uint32_t ppObj = MEM32(g_esp + 4);
    static int s_com_idx = 0;
    uint32_t obj = 0x00F82400 + ((s_com_idx++ & 0x7F) * 16);
    MEM32(obj) = 0x002D7404; /* vtable */
    MEM32(obj + 4) = 1;      /* refcount */
    if (ppObj) {
        MEM32(ppObj) = obj;
    }
    MEM32(0x00328244)++;
    g_eax = 0;
    g_esp += 8;
}

static void manual_sub_00214A66(void)
{
    g_eax = 0;
    g_esp += 8;
}

/* COM methods for 0x002D7404 */
static void manual_sub_0021484E(void)
{
    /* IUnknown::AddRef */
    uint32_t obj = MEM32(g_esp + 4);
    MEM32(obj + 4)++;
    g_eax = MEM32(obj + 4);
    g_esp += 8;
}

static void manual_sub_002148ED(void)
{
    /* IUnknown::Release */
    uint32_t obj = MEM32(g_esp + 4);
    if (MEM32(obj + 4) > 0)
        MEM32(obj + 4)--;
    g_eax = MEM32(obj + 4);
    g_esp += 8;
}

static void manual_sub_0021490D(void)
{
    /* IUnknown::QueryInterface */
    uint32_t obj = MEM32(g_esp + 4);
    uint32_t ppv = MEM32(g_esp + 12);
    if (ppv)
        MEM32(ppv) = obj;
    g_eax = 0;
    g_esp += 16;
}

static void manual_sub_0021485B(void)
{
    g_eax = 0x8876086c;
    g_esp += 20;
}

static void manual_sub_00214954(void)
{
    g_eax = 0;
    g_esp += 16;
}

static void manual_sub_002149C3(void)
{
    uint32_t obj = MEM32(g_esp + 4);
    uint32_t ppv = MEM32(g_esp + 12);
    if (ppv)
        MEM32(ppv) = obj;
    g_eax = 0;
    g_esp += 16;
}

static void manual_sub_00214A82(void)
{
    g_eax = 0;
    g_esp += 20;
}

static void manual_sub_002040E0(void)
{
    /* Direct3D_Clear(Count, pRects, Flags, Color, Z, Stencil)
     * Stdcall: 6 arguments (24 bytes) + 4 ret addr. Returns D3D_OK (0). */
    g_eax = 0;
    g_esp += 28;
}

static void manual_sub_002041B5(void)
{
    g_eax = 0;
    g_esp += 28;
}

static void manual_sub_002024A0(void)
{
    g_esp += 4;
}

static void manual_sub_0020258D(void)
{
    g_esp += 4;
}

static void manual_hook_sub_00040830(void)
{
    uint32_t gfx = MEM32(0x3219CC);
    if (gfx) {
        MEM8(gfx + 0x19198) = 0; /* clear frozen flag so texture creation succeeds */
    }
    sub_00040830();
}

/* Static initializers called by _initterm */
static void manual_sub_00271213(void)
{
    MEM32(0x324fb0) = 0x2710fc;
    MEM32(0x324fb4) = 0x271155;
    MEM32(0x324fb8) = 0x271190;
    g_eax = 0;
    g_esp += 4;
}

static void manual_sub_00286E2C(void)
{
    uint32_t val = MEM32(0x28e598);
    MEM32(0x285864) = val;
    MEM32(0x285868) = val;
    MEM32(0x285874) = val;
    MEM32(0x285878) = val;
    MEM32(0x28587c) = val;
    MEM32(0x285880) = val;
    MEM32(0x285884) = val;
    MEM32(0x285888) = val;
    MEM32(0x285894) = val;
    MEM32(0x285898) = val;
    g_esp += 4;
}

static void manual_sub_0023A409(void)
{
    MEM32(0x243580) = 0x242eac;
    g_esp += 4;
}

static void manual_sub_0023A414(void)
{
    MEM32(0x24357c) = 0x242eb0;
    g_esp += 4;
}

static void manual_sub_0023D000(void)
{
    MEM32(0x243624) = 0x242eb4;
    g_esp += 4;
}

static void manual_sub_0023D00B(void)
{
    MEM32(0x243620) = 0x242eb8;
    g_esp += 4;
}

static void manual_sub_0028E25B(void)
{
    uint32_t eax = 0x32dc58;
    for (int i = 0; i < 4; i++) {
        MEM32(eax - 8) = 0x2ddb18;
        MEM32(eax - 4) = 0;
        MEM16(eax) = 0;
        MEM8(eax + 2) = 0;
        MEM8(eax + 3) = 0;
        MEM32(eax + 4) = 0;
        MEM32(eax + 8) = 0;
        MEM32(eax + 0xC) = 0;
        MEM32(eax + 0x10) = 0;
        eax += 0x1C;
    }
    g_esp += 4;
}

static void manual_sub_0028E28B(void)
{
    uint32_t eax = 0x32dcc8;
    for (int i = 0; i < 4; i++) {
        MEM32(eax - 8) = 0x2ddb18;
        MEM32(eax - 4) = 0;
        MEM16(eax) = 0;
        MEM8(eax + 2) = 0;
        MEM8(eax + 3) = 0;
        MEM32(eax + 4) = 0;
        MEM32(eax + 8) = 0;
        MEM32(eax + 0xC) = 0;
        MEM32(eax + 0x10) = 0;
        eax += 0x1C;
    }
    g_esp += 4;
}

static void manual_sub_00286F28(void)
{
    /* XInputGetState(hDevice, pState)
     * Stdcall: 2 arguments (8 bytes) + 4 ret addr = 12 bytes delta.
     * Returns Win32 error code: ERROR_SUCCESS (0), ERROR_DEVICE_NOT_CONNECTED (0x48F), ERROR_INVALID_PARAMETER (0x57)
     */
    static int s_logged_once = 0;
    if (!s_logged_once) {
        s_logged_once = 1;
        fprintf(stderr, "[INPUT] XInputGetState polling active (game main loop reached)\n");
        fflush(stderr);
    }

    uint32_t hDevice = MEM32(g_esp + 4);
    uint32_t pState  = MEM32(g_esp + 8);

    if (!pState || !xbox_is_valid_ram(pState)) {
        g_eax = 0x57; /* ERROR_INVALID_PARAMETER */
        g_esp += 12;
        return;
    }

    if (!hDevice || !xbox_is_valid_ram(hDevice)) {
        memset((void *)((uintptr_t)g_xbox_mem_offset + pState), 0, sizeof(XBOX_INPUT_STATE));
        g_eax = 0x48F; /* ERROR_DEVICE_NOT_CONNECTED */
        g_esp += 12;
        return;
    }

    XBOX_INPUT_STATE st;
    memset(&st, 0, sizeof(st));
    uint32_t err = xbox_InputGetState(0, &st);
    if (err == 0) {
        memcpy((void *)((uintptr_t)g_xbox_mem_offset + pState), &st, sizeof(st));
        g_eax = 0;
    } else {
        memset((void *)((uintptr_t)g_xbox_mem_offset + pState), 0, sizeof(XBOX_INPUT_STATE));
        g_eax = 0x48F;
    }
    g_esp += 12;
}

static void manual_sub_00201910(void)
{
    /* FVF vertex format parser
     * Stdcall: 2 args: [esp+4] = pFormatStruct (e.g. 0x213258), [esp+8] = fvf (e.g. ebx)
     * Callee pops 8 bytes + 4 ret addr = 12 bytes.
     */
    uint32_t eax = MEM32(g_esp + 4);
    uint32_t ebx = MEM32(g_esp + 8);
    uint32_t edi = eax + 0x1C;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x10) = 0;
    uint32_t edx = edi;
    for (int i = 0; i < 16; i++) {
        MEM32(edx) = 2;
        edx += 0x10;
    }
    uint32_t esi = ebx & 0xE;
    edx = 0;
    if (esi == 4) {
        MEM32(eax + 4) |= 2;
        MEM32(edi) = 0x42;
        edx = 0x10;
    } else if (esi != 0) {
        MEM32(edi) = 0x32;
        edx = 0xC;
        if (esi >= 6) {
            uint32_t count = ((esi - 6) >> 1) + 1;
            uint32_t ecx = (count << 4) | 2;
            MEM32(eax + 0x28) = 0xC;
            MEM32(eax + 0x2C) = ecx;
            edx = count * 4 + 0xC;
        }
    }
    if (ebx & 0x10) {
        MEM32(eax + 0x38) = edx;
        MEM32(eax + 0x3C) = 0x32;
        edx += 0xC;
    }
    if (ebx & 0x40) {
        MEM32(eax + 4) |= 0x400;
        MEM32(eax + 0x48) = edx;
        MEM32(eax + 0x4C) = 0x40;
        edx += 4;
    }
    if (ebx & 0x80) {
        MEM32(eax + 4) |= 0x800;
        MEM32(eax + 0x58) = edx;
        MEM32(eax + 0x5C) = 0x40;
        edx += 4;
    }
    uint32_t num_tex = (ebx >> 8) & 0xF;
    uint32_t tex_coords = ebx >> 16;
    if (num_tex > 0) {
        uint32_t ecx_shift = 0;
        edi = eax + 0xAC;
        for (uint32_t t = 0; t < num_tex; t++) {
            uint32_t coord_type = tex_coords & 3;
            uint32_t size = (coord_type < 4) ? MEM32(0x20EAC8 + coord_type * 4) : 2;
            uint32_t val = (size << 4) | 2;
            MEM32(edi) = val;
            MEM32(edi - 4) = edx;
            uint32_t ebp_val = MEM32(eax + 0x10);
            ebp_val |= (size << ecx_shift);
            MEM32(eax + 0x10) = ebp_val;
            edx += size * 4;
            tex_coords >>= 2;
            edi += 0x10;
            ecx_shift += 8;
        }
    }
    g_esp += 12;
}

static void manual_sub_00202590(void)
{
    /* Direct3DDevice_SetVertexShader(Handle)
     * Stdcall: 1 arg at [esp+4] + 4 ret addr. Total = 8.
     */
    uint32_t handle = MEM32(g_esp + 4);
    uint32_t dev = MEM32(0x210BE8);
    if (!dev) {
        g_esp += 8;
        return;
    }

    if (!(handle & 1)) {
        /* FVF path: parse into 0x213258 */
        uint32_t saved_esp = g_esp;
        PUSH32(g_esp, handle);
        PUSH32(g_esp, 0x213258);
        PUSH32(g_esp, 0); /* dummy ret addr */
        manual_sub_00201910();
        g_esp = saved_esp;

        MEM32(0x210748) |= 0x70;
        MEM32(dev + 0x790) = 0x213258;
        MEM32(dev + 0x794) = handle;
        MEM32(dev + 0x798) = 0;
    } else {
        /* Programmable vertex shader object */
        MEM32(dev + 0x790) = handle - 1;
        MEM32(dev + 0x794) = handle;
        MEM32(dev + 0x798) = 0;
    }
    g_esp += 8;
}

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x00206430u) return sub_00206430;
    if (xbox_va == 0x002064D0u) return sub_002064D0;
    if (xbox_va == 0x002066B0u) return sub_002066B0;
    if (xbox_va == 0x00206640u) return manual_sub_00206640;
    if (xbox_va == 0x00285B70u) return manual_sub_00285B70;
    if (xbox_va == 0x00214A3Du) return manual_sub_00214A3D;
    if (xbox_va == 0x00214A66u) return manual_sub_00214A66;
    if (xbox_va == 0x0021484Eu) return manual_sub_0021484E;
    if (xbox_va == 0x002148EDu) return manual_sub_002148ED;
    if (xbox_va == 0x0021490Du) return manual_sub_0021490D;
    if (xbox_va == 0x0021485Bu) return manual_sub_0021485B;
    if (xbox_va == 0x00214954u) return manual_sub_00214954;
    if (xbox_va == 0x002149C3u) return manual_sub_002149C3;
    if (xbox_va == 0x00214A82u) return manual_sub_00214A82;
    if (xbox_va == 0x002040E0u) return manual_sub_002040E0;
    if (xbox_va == 0x002041B5u) return manual_sub_002041B5;
    if (xbox_va == 0x002024A0u) return manual_sub_002024A0;
    if (xbox_va == 0x0020258Du) return manual_sub_0020258D;
    if (xbox_va == 0x00040830u) return manual_hook_sub_00040830;

    /* Missing static initializers in _initterm */
    if (xbox_va == 0x00271213u) return manual_sub_00271213;
    if (xbox_va == 0x00286E2Cu) return manual_sub_00286E2C;
    if (xbox_va == 0x0023A409u) return manual_sub_0023A409;
    if (xbox_va == 0x0023A414u) return manual_sub_0023A414;
    if (xbox_va == 0x0023D000u) return manual_sub_0023D000;
    if (xbox_va == 0x0023D00Bu) return manual_sub_0023D00B;
    if (xbox_va == 0x0028E25Bu) return manual_sub_0028E25B;
    if (xbox_va == 0x0028E28Bu) return manual_sub_0028E28B;

    /* XInputGetState safe wrapper */
    if (xbox_va == 0x00286F28u) return manual_sub_00286F28;

    /* FVF parser and SetVertexShader */
    if (xbox_va == 0x00201910u) return manual_sub_00201910;
    if (xbox_va == 0x00202590u) return manual_sub_00202590;

    (void)xbox_va;
    return (recomp_func_t)0;
}

/* ── ICALL failure logging ─────────────────────────────────── */

/*
 * Called when RECOMP_ICALL cannot resolve a target address.
 * This usually means one of:
 *   - A vtable dispatch to an address not in the dispatch table
 *   - A function pointer loaded from uninitialized or corrupt memory
 *   - A kernel thunk address that the bridge doesn't handle
 *
 * During early bring-up you will see many of these. Most are harmless
 * (the ICALL macro pops the dummy return address and continues).
 * Focus on the ones that cause crashes or incorrect behavior.
 */
void recomp_icall_fail_log(uint32_t va)
{
    uint32_t ret_va = (g_xbox_mem_offset && g_esp) ? *(uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp) : 0;
    fprintf(stderr, "[ICALL] Failed to resolve VA 0x%08X (called from ret=0x%08X, esp=0x%08X, total calls: %llu)\n",
            va, ret_va, g_esp, (unsigned long long)g_icall_count);

    /* Dump last 16 call targets from the ring buffer */
    fprintf(stderr, "  Recent ICALL targets:\n");
    for (int i = 0; i < 16; i++) {
        int idx = (g_icall_trace_idx - 16 + i) & 15;
        if (g_icall_trace[idx])
            fprintf(stderr, "    [%2d] 0x%08X\n", i, g_icall_trace[idx]);
    }
    fflush(stderr);
}

/* An indirect call whose target is not code: a null or wild function pointer.
 *
 * Skipping these is right -- calling a data address is worse -- but skipping
 * them *silently* is not. They almost always arrive inside a loop, so the
 * symptom is a hang with no output rather than a diagnosable null vtable call.
 *
 * Rate-limited per address: a spin can produce millions of these, and the
 * useful information is which addresses occur, not how often.
 */
void recomp_icall_not_code_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    hits[i]++;
    /* Report at 1, 10, 100, 1000 ... rather than once. A single line says a
     * wild pointer was skipped; the progression says it is being skipped in a
     * loop, which is the difference between a curiosity and the reason the
     * title is hung. */
    {
        uint64_t n = hits[i];
        while (n >= 10 && n % 10 == 0)
            n /= 10;
        if (n != 1)
            return;
    }
    uint32_t ret_va = (g_xbox_mem_offset && g_esp) ? *(uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp) : 0;
    fprintf(stderr, "[ICALL] target 0x%08X is not code -- skipped %llu time(s) "
                    "(called from ret=0x%08X, esp=0x%08X, at call #%llu)\n",
            va, (unsigned long long)hits[i],
            ret_va, g_esp, (unsigned long long)g_icall_count);
    fflush(stderr);
}

/* ── Untranslated instructions ───────────────────────────────────────────
 *
 * The lifter emits RECOMP_UNIMPL(text, va) at every instruction it has no
 * translation for, in place of the bare comment it used to leave. The
 * instruction is still a no-op; this only stops the omission being silent.
 * RECOMP_UNIMPL_TRAP=1 aborts at the first hit, at the guest address of the
 * cause rather than wherever the damage surfaces. */
#include <stdlib.h>

void recomp_unimpl(const char *text, uint32_t va)
{
    static int printed;
    const char *trap = getenv("RECOMP_UNIMPL_TRAP");
    int stop = trap && *trap && *trap != '0';

    if (printed < 50 || stop) {
        printed++;
        fprintf(stderr,
                "[UNIMPL] untranslated instruction REACHED: `%s` at 0x%08X"
                " (a no-op; set RECOMP_UNIMPL_TRAP=1 to stop here)\n",
                text, va);
        fflush(stderr);
    }
    if (stop) abort();
}
