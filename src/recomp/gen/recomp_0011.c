/**
 * Crimson Skies - Recompiled code chunk 11
 * Functions: 212 (0x0023785C - 0x0028E08F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0023785C
 * Original: 0x0023785C - 0x00237884 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023785C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023785C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00237862u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00237862: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00237884(); return; } /* je: equal / zero */

loc_0023786E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023787D; /* je: equal / zero */

loc_00237872: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x0023787Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00237877u); } /* indirect call */
    }

loc_0023787D: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002378AD(); return; /* tail jmp 0x002378AD */

}

/**
 * sub_002378B1
 * Original: 0x002378B1 - 0x002378E8 (55 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002378B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002378B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002378C1u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002378C1: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002378E8(); return; } /* je: equal / zero */

loc_002378CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002378DE; /* je: equal / zero */

loc_002378D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x002378DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002378D8u); } /* indirect call */
    }

loc_002378DE: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0023798E(); return; /* tail jmp 0x0023798E */

}

/**
 * sub_00237993
 * Original: 0x00237993 - 0x002379BB (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00237993(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00237993: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00237999u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00237999: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002379BB(); return; } /* je: equal / zero */

loc_002379A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002379B4; /* je: equal / zero */

loc_002379A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x002379B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002379AEu); } /* indirect call */
    }

loc_002379B4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002379E0(); return; /* tail jmp 0x002379E0 */

}

/**
 * sub_002379E4
 * Original: 0x002379E4 - 0x00237A0C (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002379E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002379E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002379EAu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002379EA: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00237A0C(); return; } /* je: equal / zero */

loc_002379F6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237A05; /* je: equal / zero */

loc_002379FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00237A05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002379FFu); } /* indirect call */
    }

loc_00237A05: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00237A45(); return; /* tail jmp 0x00237A45 */

}

/**
 * sub_00237CE3
 * Original: 0x00237CE3 - 0x00237D0E (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00237CE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00237CE3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00237CECu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00237CEC: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00237D0E(); return; } /* je: equal / zero */

loc_00237CF8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00237D07; /* je: equal / zero */

loc_00237CFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00237D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00237D01u); } /* indirect call */
    }

loc_00237D07: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00237D48(); return; /* tail jmp 0x00237D48 */

}

/**
 * sub_00238079
 * Original: 0x00238079 - 0x002380A1 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238079(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238079: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023807Fu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_0023807F: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002380A1(); return; } /* je: equal / zero */

loc_0023808B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023809A; /* je: equal / zero */

loc_0023808F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x0023809Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238094u); } /* indirect call */
    }

loc_0023809A: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002380C3(); return; /* tail jmp 0x002380C3 */

}

/**
 * sub_002380C7
 * Original: 0x002380C7 - 0x002380EF (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002380C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002380C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002380CDu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002380CD: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002380EF(); return; } /* je: equal / zero */

loc_002380D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002380E8; /* je: equal / zero */

loc_002380DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x002380E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002380E2u); } /* indirect call */
    }

loc_002380E8: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238111(); return; /* tail jmp 0x00238111 */

}

/**
 * sub_00238115
 * Original: 0x00238115 - 0x0023813D (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238115(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238115: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023811Bu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_0023811B: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0023813D(); return; } /* je: equal / zero */

loc_00238127: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238136; /* je: equal / zero */

loc_0023812B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238130u); } /* indirect call */
    }

loc_00238136: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0023815F(); return; /* tail jmp 0x0023815F */

}

/**
 * sub_00238163
 * Original: 0x00238163 - 0x0023818B (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238163: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238169u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238169: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0023818B(); return; } /* je: equal / zero */

loc_00238175: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238184; /* je: equal / zero */

loc_00238179: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023817Eu); } /* indirect call */
    }

loc_00238184: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002381AD(); return; /* tail jmp 0x002381AD */

}

/**
 * sub_002382A3
 * Original: 0x002382A3 - 0x002382CA (39 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002382A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002382A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002382C6u); RECOMP_ABI_CALL(0x0023727Eu, sub_0023727E); /* call 0x0023727E */

loc_002382C6: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002382CA
 * Original: 0x002382CA - 0x002382F4 (42 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002382CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002382CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002382F0u); RECOMP_ABI_CALL(0x002372E2u, sub_002372E2); /* call 0x002372E2 */

loc_002382F0: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_002382F4
 * Original: 0x002382F4 - 0x00238314 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002382F4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002382F4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238311u); RECOMP_ABI_CALL(0x00237344u, sub_00237344); /* call 0x00237344 */

loc_00238311: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00238314
 * Original: 0x00238314 - 0x00238330 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238314(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238314: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0023832Du); RECOMP_ABI_CALL(0x00238079u, sub_00238079); /* call 0x00238079 */

loc_0023832D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00238330
 * Original: 0x00238330 - 0x0023834C (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238330: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238349u); RECOMP_ABI_CALL(0x002380C7u, sub_002380C7); /* call 0x002380C7 */

loc_00238349: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023834C
 * Original: 0x0023834C - 0x00238368 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023834C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0023834C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238365u); RECOMP_ABI_CALL(0x00238115u, sub_00238115); /* call 0x00238115 */

loc_00238365: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00238368
 * Original: 0x00238368 - 0x00238384 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238368(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238368: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238381u); RECOMP_ABI_CALL(0x00238163u, sub_00238163); /* call 0x00238163 */

loc_00238381: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002383A0
 * Original: 0x002383A0 - 0x002383C4 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002383A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002383A0: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002383C1u); RECOMP_ABI_CALL(0x002376E6u, sub_002376E6); /* call 0x002376E6 */

loc_002383C1: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002383C4
 * Original: 0x002383C4 - 0x002383DC (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002383C4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002383C4: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002383D9u); RECOMP_ABI_CALL(0x00237737u, sub_00237737); /* call 0x00237737 */

loc_002383D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002383DC
 * Original: 0x002383DC - 0x002383FC (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002383DC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002383DC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002383F9u); RECOMP_ABI_CALL(0x002377D7u, sub_002377D7); /* call 0x002377D7 */

loc_002383F9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002383FC
 * Original: 0x002383FC - 0x00238418 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002383FC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002383FC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238415u); RECOMP_ABI_CALL(0x00237786u, sub_00237786); /* call 0x00237786 */

loc_00238415: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00238418
 * Original: 0x00238418 - 0x00238438 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238418(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238418: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238435u); RECOMP_ABI_CALL(0x0023785Cu, sub_0023785C); /* call 0x0023785C */

loc_00238435: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00238438
 * Original: 0x00238438 - 0x00238454 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238438(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238438: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238451u); RECOMP_ABI_CALL(0x00237993u, sub_00237993); /* call 0x00237993 */

loc_00238451: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00238454
 * Original: 0x00238454 - 0x00238484 (48 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00238454(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238454: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x1C));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x18));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00238480u); RECOMP_ABI_CALL(0x002378B1u, sub_002378B1); /* call 0x002378B1 */

loc_00238480: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00238484
 * Original: 0x00238484 - 0x002384A4 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238484(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238484: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002384A1u); RECOMP_ABI_CALL(0x002379E4u, sub_002379E4); /* call 0x002379E4 */

loc_002384A1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002384A4
 * Original: 0x002384A4 - 0x002384A9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002384A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002384A4: ;
    g_seh_ebp = ebp; sub_002381FF(); return; /* tail jmp 0x002381FF */

}

/**
 * sub_002384A9
 * Original: 0x002384A9 - 0x002384AE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002384A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002384A9: ;
    g_seh_ebp = ebp; sub_00238251(); return; /* tail jmp 0x00238251 */

}

/**
 * sub_002384AE
 * Original: 0x002384AE - 0x002384C6 (24 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002384AE(void)
{

loc_002384AE: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002384C3u); RECOMP_ABI_CALL(0x00237CE3u, sub_00237CE3); /* call 0x00237CE3 */

loc_002384C3: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002384C6
 * Original: 0x002384C6 - 0x002384EF (41 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002384C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002384C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002384CCu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002384CC: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(0x243558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002384DE; /* je: equal / zero */

loc_002384D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002384DEu); RECOMP_ABI_CALL(0x002373A3u, sub_002373A3); /* call 0x002373A3 */

loc_002384DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002384EE; /* je: equal / zero */

loc_002384E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x002384EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002384E8u); } /* indirect call */
    }

loc_002384EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002389F5
 * Original: 0x002389F5 - 0x00238A1D (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002389F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002389F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002389FBu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002389FB: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238A1D(); return; } /* je: equal / zero */

loc_00238A07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238A16; /* je: equal / zero */

loc_00238A0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238A10u); } /* indirect call */
    }

loc_00238A16: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238A3F(); return; /* tail jmp 0x00238A3F */

}

/**
 * sub_00238A43
 * Original: 0x00238A43 - 0x00238A6B (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238A43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238A43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238A49u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238A49: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238A6B(); return; } /* je: equal / zero */

loc_00238A55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238A64; /* je: equal / zero */

loc_00238A59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238A5Eu); } /* indirect call */
    }

loc_00238A64: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238A95(); return; /* tail jmp 0x00238A95 */

}

/**
 * sub_00238A99
 * Original: 0x00238A99 - 0x00238AC1 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238A99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238A99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238A9Fu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238A9F: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238AC1(); return; } /* je: equal / zero */

loc_00238AAB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238ABA; /* je: equal / zero */

loc_00238AAF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238ABAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238AB4u); } /* indirect call */
    }

loc_00238ABA: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238AEB(); return; /* tail jmp 0x00238AEB */

}

/**
 * sub_00238AEF
 * Original: 0x00238AEF - 0x00238B17 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238AEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238AEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238AF5u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238AF5: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238B17(); return; } /* je: equal / zero */

loc_00238B01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238B10; /* je: equal / zero */

loc_00238B05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238B10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238B0Au); } /* indirect call */
    }

loc_00238B10: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238B3D(); return; /* tail jmp 0x00238B3D */

}

/**
 * sub_00238B41
 * Original: 0x00238B41 - 0x00238B6C (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00238B41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238B41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00238B4Au); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238B4A: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238B6C(); return; } /* je: equal / zero */

loc_00238B56: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238B65; /* je: equal / zero */

loc_00238B5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238B65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238B5Fu); } /* indirect call */
    }

loc_00238B65: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238BA3(); return; /* tail jmp 0x00238BA3 */

}

/**
 * sub_00238BA8
 * Original: 0x00238BA8 - 0x00238BD3 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00238BA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00238BA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00238BB1u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238BB1: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238BD3(); return; } /* je: equal / zero */

loc_00238BBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238BCC; /* je: equal / zero */

loc_00238BC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238BCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238BC6u); } /* indirect call */
    }

loc_00238BCC: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238C0A(); return; /* tail jmp 0x00238C0A */

}

/**
 * sub_00238C0F
 * Original: 0x00238C0F - 0x00238C37 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238C0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238C0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00238C15u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00238C15: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00238C37(); return; } /* je: equal / zero */

loc_00238C21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00238C30; /* je: equal / zero */

loc_00238C25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00238C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00238C2Au); } /* indirect call */
    }

loc_00238C30: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00238C61(); return; /* tail jmp 0x00238C61 */

}

/**
 * sub_00238CD3
 * Original: 0x00238CD3 - 0x00238CEF (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238CD3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238CD3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238CECu); RECOMP_ABI_CALL(0x002389F5u, sub_002389F5); /* call 0x002389F5 */

loc_00238CEC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00238CEF
 * Original: 0x00238CEF - 0x00238D13 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238CEF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00238CEF: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238D10u); RECOMP_ABI_CALL(0x00238A43u, sub_00238A43); /* call 0x00238A43 */

loc_00238D10: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00238D13
 * Original: 0x00238D13 - 0x00238D37 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238D13(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00238D13: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238D34u); RECOMP_ABI_CALL(0x00238A99u, sub_00238A99); /* call 0x00238A99 */

loc_00238D34: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00238D37
 * Original: 0x00238D37 - 0x00238D57 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238D37(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00238D37: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238D54u); RECOMP_ABI_CALL(0x00238AEFu, sub_00238AEF); /* call 0x00238AEF */

loc_00238D54: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00238D57
 * Original: 0x00238D57 - 0x00238D8C (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00238D57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00238D57: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00238D88u); RECOMP_ABI_CALL(0x00238B41u, sub_00238B41); /* call 0x00238B41 */

loc_00238D88: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00238D8C
 * Original: 0x00238D8C - 0x00238DC1 (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00238D8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00238D8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00238DBDu); RECOMP_ABI_CALL(0x00238BA8u, sub_00238BA8); /* call 0x00238BA8 */

loc_00238DBD: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00238DC1
 * Original: 0x00238DC1 - 0x00238DE5 (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238DC1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00238DC1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00238DE2u); RECOMP_ABI_CALL(0x00238C0Fu, sub_00238C0F); /* call 0x00238C0F */

loc_00238DE2: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00238DE5
 * Original: 0x00238DE5 - 0x00238DEA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00238DE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00238DE5: ;
    g_seh_ebp = ebp; sub_00238C65(); return; /* tail jmp 0x00238C65 */

}

/**
 * sub_00239056
 * Original: 0x00239056 - 0x0023909D (71 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239056(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00239056: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023906D; /* jne: not equal / not zero */

loc_00239065: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00239074; /* je: equal / zero */

loc_0023906D: ;
    MEM32(ebp + 0xC) = 1;

loc_00239074: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239079u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239079: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0023909D(); return; } /* je: equal / zero */

loc_00239087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239096; /* je: equal / zero */

loc_0023908B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239096u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239090u); } /* indirect call */
    }

loc_00239096: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002390FE(); return; /* tail jmp 0x002390FE */

}

/**
 * sub_00239369
 * Original: 0x00239369 - 0x00239391 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239369(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239369: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0023936Fu); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_0023936F: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239391(); return; } /* je: equal / zero */

loc_0023937B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023938A; /* je: equal / zero */

loc_0023937F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x0023938Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239384u); } /* indirect call */
    }

loc_0023938A: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_002393B3(); return; /* tail jmp 0x002393B3 */

}

/**
 * sub_002393B7
 * Original: 0x002393B7 - 0x002393D3 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002393B7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002393B7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002393D0u); RECOMP_ABI_CALL(0x00239369u, sub_00239369); /* call 0x00239369 */

loc_002393D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002393D3
 * Original: 0x002393D3 - 0x002393F3 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002393D3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002393D3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002393F0u); RECOMP_ABI_CALL(0x00239056u, sub_00239056); /* call 0x00239056 */

loc_002393F0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023949E
 * Original: 0x0023949E - 0x002394CC (46 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023949E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023949E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002394A7u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002394A7: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002394CC(); return; } /* je: equal / zero */

loc_002394B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002394C5; /* je: equal / zero */

loc_002394BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x002394C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002394BFu); } /* indirect call */
    }

loc_002394C5: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239534(); return; /* tail jmp 0x00239534 */

}

/**
 * sub_002398CA
 * Original: 0x002398CA - 0x002398E2 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002398CA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002398CA: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002398DFu); RECOMP_ABI_CALL(0x0023949Eu, sub_0023949E); /* call 0x0023949E */

loc_002398DF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002398E2
 * Original: 0x002398E2 - 0x0023990C (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002398E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002398E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002398E9u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_002398E9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), edi (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0023990C(); return; } /* je: equal / zero */

loc_002398F6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239905; /* je: equal / zero */

loc_002398FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002398FFu); } /* indirect call */
    }

loc_00239905: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239979(); return; /* tail jmp 0x00239979 */

}

/**
 * sub_0023997E
 * Original: 0x0023997E - 0x002399A8 (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023997E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023997E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00239985u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239985: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), edi (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002399A8(); return; } /* je: equal / zero */

loc_00239992: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002399A1; /* je: equal / zero */

loc_00239996: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x002399A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023999Bu); } /* indirect call */
    }

loc_002399A1: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239A0A(); return; /* tail jmp 0x00239A0A */

}

/**
 * sub_00239A0F
 * Original: 0x00239A0F - 0x00239A37 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239A0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239A0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00239A15u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239A15: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239A37(); return; } /* je: equal / zero */

loc_00239A21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239A30; /* je: equal / zero */

loc_00239A25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239A2Au); } /* indirect call */
    }

loc_00239A30: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239A6A(); return; /* tail jmp 0x00239A6A */

}

/**
 * sub_00239A6E
 * Original: 0x00239A6E - 0x00239A96 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239A6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239A6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00239A74u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239A74: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239A96(); return; } /* je: equal / zero */

loc_00239A80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239A8F; /* je: equal / zero */

loc_00239A84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239A8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239A89u); } /* indirect call */
    }

loc_00239A8F: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239AC9(); return; /* tail jmp 0x00239AC9 */

}

/**
 * sub_00239ACD
 * Original: 0x00239ACD - 0x00239AF8 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239ACD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00239ACD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239AD6u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239AD6: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239AF8(); return; } /* je: equal / zero */

loc_00239AE2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239AF1; /* je: equal / zero */

loc_00239AE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239AF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239AEBu); } /* indirect call */
    }

loc_00239AF1: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239B55(); return; /* tail jmp 0x00239B55 */

}

/**
 * sub_00239B5A
 * Original: 0x00239B5A - 0x00239B85 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239B5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00239B5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239B63u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239B63: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239B85(); return; } /* je: equal / zero */

loc_00239B6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239B7E; /* je: equal / zero */

loc_00239B73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239B7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239B78u); } /* indirect call */
    }

loc_00239B7E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239BC8(); return; /* tail jmp 0x00239BC8 */

}

/**
 * sub_00239BCD
 * Original: 0x00239BCD - 0x00239BF8 (43 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239BCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00239BCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239BD6u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239BD6: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239BF8(); return; } /* je: equal / zero */

loc_00239BE2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239BF1; /* je: equal / zero */

loc_00239BE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239BEBu); } /* indirect call */
    }

loc_00239BF1: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239C3B(); return; /* tail jmp 0x00239C3B */

}

/**
 * sub_00239C40
 * Original: 0x00239C40 - 0x00239C6D (45 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00239C49u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_00239C49: ;
    _fa = (uint32_t)(MEM32(0x242ED8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x242ED8), edi (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239C6D(); return; } /* je: equal / zero */

loc_00239C54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00239C63; /* je: equal / zero */

loc_00239C58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x00239C63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00239C5Du); } /* indirect call */
    }

loc_00239C63: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00239D43(); return; /* tail jmp 0x00239D43 */

}

/**
 * sub_00239D87
 * Original: 0x00239D87 - 0x00239DAB (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239D87(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00239D87: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00239DA8u); RECOMP_ABI_CALL(0x00239A0Fu, sub_00239A0F); /* call 0x00239A0F */

loc_00239DA8: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00239DAB
 * Original: 0x00239DAB - 0x00239DF5 (74 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239DAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00239DAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239DF1u); RECOMP_ABI_CALL(0x00239ACDu, sub_00239ACD); /* call 0x00239ACD */

loc_00239DF1: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00239DF5
 * Original: 0x00239DF5 - 0x00239E2A (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239DF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00239DF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239E26u); RECOMP_ABI_CALL(0x00239B5Au, sub_00239B5A); /* call 0x00239B5A */

loc_00239E26: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00239E2A
 * Original: 0x00239E2A - 0x00239E4E (36 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239E2A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00239E2A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00239E4Bu); RECOMP_ABI_CALL(0x00239A6Eu, sub_00239A6E); /* call 0x00239A6E */

loc_00239E4B: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00239E4E
 * Original: 0x00239E4E - 0x00239E83 (53 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00239E4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00239E4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00239E7Fu); RECOMP_ABI_CALL(0x00239BCDu, sub_00239BCD); /* call 0x00239BCD */

loc_00239E7F: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00239E83
 * Original: 0x00239E83 - 0x00239EA3 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239E83(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00239E83: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00239EA0u); RECOMP_ABI_CALL(0x00239C40u, sub_00239C40); /* call 0x00239C40 */

loc_00239EA0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00239FDC
 * Original: 0x00239FDC - 0x00239FF6 (26 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00239FDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00239FDC: ;
    eax = MEM32(0x243558);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00239FF6(); return; } /* je: equal / zero */

loc_00239FE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00239FEEu); RECOMP_ABI_CALL(0x0023ED71u, sub_0023ED71); /* call 0x0023ED71 */

loc_00239FEE: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_0023A043(); return; /* tail jmp 0x0023A043 */

}

/**
 * sub_0023A049
 * Original: 0x0023A049 - 0x0023A090 (71 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023A049(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0023A049: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A054u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_0023A054: ;
    esi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A060u); RECOMP_ABI_CALL(0x00239FDCu, sub_00239FDC); /* call 0x00239FDC */

loc_0023A060: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0023A079; /* jl: less (signed <) */

loc_0023A066: ;
    eax = MEM32(ebp + -4);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_0023A079: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A088; /* je: equal / zero */

loc_0023A07D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x0023A088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A082u); } /* indirect call */
    }

loc_0023A088: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023A090
 * Original: 0x0023A090 - 0x0023A0E7 (87 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A0A0u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_0023A0A0: ;
    edi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A0ACu); RECOMP_ABI_CALL(0x00239FDCu, sub_00239FDC); /* call 0x00239FDC */

loc_0023A0AC: ;
    esi = MEM32(ebp + -4);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023A0C5; /* jl: less (signed <) */

loc_0023A0B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A0C3u); RECOMP_ABI_CALL(0x002398E2u, sub_002398E2); /* call 0x002398E2 */

loc_0023A0C3: ;
    ebx = eax;

loc_0023A0C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A0CF; /* je: equal / zero */

loc_0023A0C9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0023A0CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A0CCu); } /* indirect call */
    }

loc_0023A0CF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A0DE; /* je: equal / zero */

loc_0023A0D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x0023A0DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A0D8u); } /* indirect call */
    }

loc_0023A0DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023A0E7
 * Original: 0x0023A0E7 - 0x0023A13E (87 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023A0E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023A0E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A0F7u); RECOMP_ABI_CALL(0x002370D5u, sub_002370D5); /* call 0x002370D5 */

loc_0023A0F7: ;
    edi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A103u); RECOMP_ABI_CALL(0x00239FDCu, sub_00239FDC); /* call 0x00239FDC */

loc_0023A103: ;
    esi = MEM32(ebp + -4);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0023A11C; /* jl: less (signed <) */

loc_0023A10C: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A11Au); RECOMP_ABI_CALL(0x0023997Eu, sub_0023997E); /* call 0x0023997E */

loc_0023A11A: ;
    ebx = eax;

loc_0023A11C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A126; /* je: equal / zero */

loc_0023A120: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0023A126u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A123u); } /* indirect call */
    }

loc_0023A126: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A135; /* je: equal / zero */

loc_0023A12A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x242EE4);
    { uint32_t _icall_target = MEM32(0x28E488); PUSH32(esp, 0x0023A135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023A12Fu); } /* indirect call */
    }

loc_0023A135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023A41F
 * Original: 0x0023A41F - 0x0023A446 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A41F(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A41F: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A446
 * Original: 0x0023A446 - 0x0023A47D (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A446(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A446: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E7D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x28e7d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A478; /* jne: not equal / not zero */

loc_0023A457: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x28E890)); /* fadd dword ptr [0x28e890] */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x299CAC)); /* fmul dword ptr [0x299cac] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0023A476u); RECOMP_ABI_CALL(0x0023F3B0u, sub_0023F3B0); /* call 0x0023F3B0 */

loc_0023A476: ;
    goto loc_0023A47A;

loc_0023A478: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023A47A: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A47D
 * Original: 0x0023A47D - 0x0023A4C6 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A47D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A47D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E7D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x28e7d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A495; /* jp: parity */

loc_0023A48E: ;
    eax = 0xFFFFD8F0u;
    goto loc_0023A4C3;

loc_0023A495: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E890)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x28e890] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A4AA; /* jne: not equal / not zero */

loc_0023A4A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0023A4C3;

loc_0023A4AA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28EE18)); /* fmul dword ptr [0x28ee18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0023A4C3u); RECOMP_ABI_CALL(0x0023F3B0u, sub_0023F3B0); /* call 0x0023F3B0 */

loc_0023A4C3: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A503
 * Original: 0x0023A503 - 0x0023A599 (150 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A503(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A503: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A533u); RECOMP_ABI_CALL(0x0023A41Fu, sub_0023A41F); /* call 0x0023A41F */

loc_0023A533: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -12;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A558u); RECOMP_ABI_CALL(0x0023A41Fu, sub_0023A41F); /* call 0x0023A41F */

loc_0023A558: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x10);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A57A; /* jp: parity */

loc_0023A567: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 8)); /* fdiv dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2D8D94)); /* fmul dword ptr [0x2d8d94] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x293F68)); /* fmul dword ptr [0x293f68] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0023A595;

loc_0023A57A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2D8D94)); /* fmul dword ptr [0x2d8d94] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2C0158) - fp_top()); /* fsubr dword ptr [0x2c0158] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x293F68)); /* fmul dword ptr [0x293f68] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0023A595: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A599
 * Original: 0x0023A599 - 0x0023A5E4 (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A599(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A599: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + 8)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_0023A5BC; /* jne: not equal / not zero */

loc_0023A5A8: ;
    ecx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    goto loc_0023A5D9;

loc_0023A5BC: ;
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */

loc_0023A5D9: ;
    eax = MEM32(ebp + 0x18);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A5E4
 * Original: 0x0023A5E4 - 0x0023A6F5 (273 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A5E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A5E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0xc] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A6E9; /* jne: not equal / not zero */

loc_0023A5FC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A61D; /* je: equal / zero */

loc_0023A602: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A61D; /* jne: not equal / not zero */

loc_0023A60F: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = 0xFFFFD8F0u;
    goto loc_0023A6EF;

loc_0023A61D: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A630; /* jne: not equal / not zero */

loc_0023A62A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;

loc_0023A630: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A6CF; /* je: equal / zero */

loc_0023A63B: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A6CF; /* je: equal / zero */

loc_0023A646: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ebp + 0x1C) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0023A660; /* jge: greater or equal (signed >=) */

loc_0023A65A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x28EBCC)); /* fadd dword ptr [0x28ebcc] */

loc_0023A660: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A670u); RECOMP_ABI_CALL(0x001F1A28u, sub_001F1A28); /* call 0x001F1A28 */

loc_0023A670: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0023A677; /* jb: below (unsigned <) */

loc_0023A674: ;
    eax = esi + -1;

loc_0023A677: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023A689; /* jne: not equal / not zero */

loc_0023A67B: ;
    eax = MEM32(edi);
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0023A6AD;

loc_0023A689: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi + eax * 4;
    edx = MEM32(ecx + -4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = eax;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0023A6A7; /* jge: greater or equal (signed >=) */

loc_0023A6A1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x28EBCC)); /* fadd dword ptr [0x28ebcc] */

loc_0023A6A7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */

loc_0023A6AD: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -8)); /* fadd dword ptr [ebp - 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A6C8u); RECOMP_ABI_CALL(0x00236F8Bu, sub_00236F8B); /* call 0x00236F8B */

loc_0023A6C8: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(ecx) = eax;
    goto loc_0023A6EF;

loc_0023A6CF: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x28E890)); /* fsub dword ptr [0x28e890] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A6E7u); RECOMP_ABI_CALL(0x0023A446u, sub_0023A446); /* call 0x0023A446 */

loc_0023A6E7: ;
    goto loc_0023A6C8;

loc_0023A6E9: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0023A6EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A6F5
 * Original: 0x0023A6F5 - 0x0023A785 (144 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A6F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A6F5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023A708; /* jge: greater or equal (signed >=) */

loc_0023A702: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x28EBCC)); /* fadd dword ptr [0x28ebcc] */

loc_0023A708: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A71E; /* jp: parity */

loc_0023A714: ;
    eax = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0023A781;

loc_0023A71E: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0023A74B; /* jae: above or equal (unsigned >=) */

loc_0023A725: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0023A735; /* jge: greater or equal (signed >=) */

loc_0023A72F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x28EBCC)); /* fadd dword ptr [0x28ebcc] */

loc_0023A735: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A74B; /* jp: parity */

loc_0023A73F: ;
    eax = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_0023A781;

loc_0023A74B: ;
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0023A757; /* jae: above or equal (unsigned >=) */

loc_0023A754: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0023A757: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(ebp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ebp + 0x10)); /* fimul dword ptr [ebp + 0x10] */
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0023A76F; /* jge: greater or equal (signed >=) */

loc_0023A769: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x28EBCC)); /* fadd dword ptr [0x28ebcc] */

loc_0023A76F: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A77Cu); RECOMP_ABI_CALL(0x0023F3B0u, sub_0023F3B0); /* call 0x0023F3B0 */

loc_0023A77C: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;

loc_0023A781: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A785
 * Original: 0x0023A785 - 0x0023A7FE (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A785(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A785: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(0x28E7D8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A7AC; /* jp: parity */

loc_0023A7A2: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0023A7FA;

loc_0023A7AC: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x241AAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x241aac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A7C6; /* jne: not equal / not zero */

loc_0023A7B9: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0xFFFF8001u;
    goto loc_0023A7FA;

loc_0023A7C6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2D8DA0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2d8da0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A7E0; /* jp: parity */

loc_0023A7D3: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0x1000;
    goto loc_0023A7FA;

loc_0023A7E0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2D8D9C)); /* fmul dword ptr [0x2d8d9c] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x28E890) - fp_top()); /* fsubr dword ptr [0x28e890] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A7F5u); RECOMP_ABI_CALL(0x0023C937u, sub_0023C937); /* call 0x0023C937 */

loc_0023A7F5: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;

loc_0023A7FA: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A7FE
 * Original: 0x0023A7FE - 0x0023A838 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A7FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A7FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0023A829; /* je: equal / zero */

loc_0023A817: ;
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A829: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A82Fu); RECOMP_ABI_CALL(0x0023C8C0u, sub_0023C8C0); /* call 0x0023C8C0 */

loc_0023A82F: ;
    eax = MEM32(ebp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A838
 * Original: 0x0023A838 - 0x0023A920 (232 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A838(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A838: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A84C; /* je: equal / zero */

loc_0023A844: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0xC);
    goto loc_0023A856;

loc_0023A84C: ;
    ecx = 0x241AB0;
    edx = 0x242BDC;

loc_0023A856: ;
    eax = MEM32(ebp + 0x18);
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ebp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    ecx = MEM32(ebp + 0x20);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x28E7D8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0023A8D5; /* jnp: not parity */

loc_0023A8A2: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A8C4; /* jne: not equal / not zero */

loc_0023A8B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2D8D94)); /* fmul dword ptr [0x2d8d94] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A8C0: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0023A8D9;

loc_0023A8C4: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A90A; /* jp: parity */

loc_0023A8D1: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_0023A8D5: ;
    fp_push(0.0); /* fldz */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A8D9: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A8F0; /* jp: parity */

loc_0023A8E6: ;
    fp_push(MEMF(0x2C5E14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A8F0: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E7D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x28e7d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A906; /* jp: parity */

loc_0023A900: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A906: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

loc_0023A90A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2D8D94)); /* fmul dword ptr [0x2d8d94] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2C0158) - fp_top()); /* fsubr dword ptr [0x2c0158] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0023A8C0;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A920
 * Original: 0x0023A920 - 0x0023A9D7 (183 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023A9C4; /* je: equal / zero */

loc_0023A92D: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x28EC54)); /* fld float */
    fp_push(MEMF(0x28E890)); /* fld float */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2D8D98)); /* fmul dword ptr [0x2d8d98] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(ebp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0023A96A; /* jne: not equal / not zero */

loc_0023A966: ;
    fp_push(1.0); /* fld1 */
    goto loc_0023A97C;

loc_0023A96A: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E7D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x28e7d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A97F; /* jp: parity */

loc_0023A97A: ;
    fp_push(0.0); /* fldz */

loc_0023A97C: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A97F: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023A998; /* jp: parity */

loc_0023A98A: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023A998: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A9ACu); RECOMP_ABI_CALL(0x0023A47Du, sub_0023A47D); /* call 0x0023A47D */

loc_0023A9AC: ;
    ecx = MEM32(ebp + 0x1C);
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A9BDu); RECOMP_ABI_CALL(0x0023A47Du, sub_0023A47D); /* call 0x0023A47D */

loc_0023A9BD: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    goto loc_0023A9D3;

loc_0023A9C4: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = 0xFFFFD8F0u;

loc_0023A9D3: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023A9D7
 * Original: 0x0023A9D7 - 0x0023AA40 (105 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023A9D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023A9D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E7D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x28e7d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0023A9EC; /* je: equal / zero */

loc_0023A9EA: ;
    fp_top() = -fp_top(); /* fchs */

loc_0023A9EC: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023A9F5u); RECOMP_ABI_CALL(0x0023F3B0u, sub_0023F3B0); /* call 0x0023F3B0 */

loc_0023A9F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0023AA2D; /* jge: greater or equal (signed >=) */

loc_0023A9FA: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(esi + 0x241B78)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AA0Fu); RECOMP_ABI_CALL(0x00236F8Bu, sub_00236F8B); /* call 0x00236F8B */

loc_0023AA0F: ;
    ecx = MEM32(ebp + 0x14);
    fp_push(1.0); /* fld1 */
    MEM32(ecx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x241AC0)); /* fsub dword ptr [esi + 0x241ac0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AA25u); RECOMP_ABI_CALL(0x00236F8Bu, sub_00236F8B); /* call 0x00236F8B */

loc_0023AA25: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    goto loc_0023AA3C;

loc_0023AA2D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0xFFFFD8F0u;

loc_0023AA3C: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023AA40
 * Original: 0x0023AA40 - 0x0023AABA (122 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023AA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x296CA0)); /* fadd dword ptr [0x296ca0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023AA57u); RECOMP_ABI_CALL(0x0023F3B0u, sub_0023F3B0); /* call 0x0023F3B0 */

loc_0023AA57: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    ecx = eax + eax * 2;
    eax = 0xB4;
    if (CMP_EQ(_fa, _fb)) goto loc_0023AA76; /* je: equal / zero */

loc_0023AA6B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5A (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023AA76; /* jle: less or equal (signed <=) */

loc_0023AA70: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;

loc_0023AA76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0023AA7C; /* jle: less or equal (signed <=) */

loc_0023AA7A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023AA7C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 8)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x28E7D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x28e7d8] */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + 0x241C30;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = MEM32(ebp + 0x14);
    ecx = ecx + 0x241C50;
    if (TEST_NZ(_fa, _fb)) goto loc_0023AAB1; /* jne: not equal / not zero */

loc_0023AAAA: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    goto loc_0023AAB6;

loc_0023AAB1: ;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;

loc_0023AAB6: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023AABA
 * Original: 0x0023AABA - 0x0023AB29 (111 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023AABA(void)
{

loc_0023AABA: ;
    MEM32(0x243584) = 0x23A7FE;
    MEM32(0x243588) = 0x23A838;
    MEM32(0x24358C) = 0x23A503;
    MEM32(0x243590) = 0x23A599;
    MEM32(0x243594) = 0x23A5E4;
    MEM32(0x243598) = 0x23A6F5;
    MEM32(0x24359C) = 0x23A920;
    MEM32(0x2435A0) = 0x23A9D7;
    MEM32(0x2435A4) = 0x23A785;
    MEM32(0x2435A8) = 0x23AA40;
    MEM32(0x2435AC) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0023B498
 * Original: 0x0023B498 - 0x0023B4BF (39 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0023B498(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023B498: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -8;
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0023B4B7u); RECOMP_ABI_CALL(0x00236ED0u, sub_00236ED0); /* call 0x00236ED0 */

loc_0023B4B7: ;
    edi = esi + 0x4B0;
    g_seh_ebp = ebp; sub_0023B4C9(); return; /* tail jmp 0x0023B4C9 */

}

/**
 * sub_0023C8C0
 * Original: 0x0023C8C0 - 0x0023C937 (119 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023C8C0: ;
    ecx = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x28E7D8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0023C8EA; /* jp: parity */

loc_0023C8DC: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0023C934; /* jnp: not parity */

loc_0023C8EA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2D74CC)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0023C934; /* jnp: not parity */

loc_0023C8FF: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0023C934; /* jnp: not parity */

loc_0023C90D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0023C934: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023C937
 * Original: 0x0023C937 - 0x0023C955 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023C937(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0023C937: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0x45800000;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    SMEM32(ebp + -8) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0023ED71
 * Original: 0x0023ED71 - 0x0023ED86 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023ED71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0023ED71: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023ED80; /* je: equal / zero */

loc_0023ED7A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0023ED80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0023ED7Du); } /* indirect call */
    }

loc_0023ED80: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0023F3B0
 * Original: 0x0023F3B0 - 0x0023F3B9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023F3B0(void)
{

loc_0023F3B0: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00243AC0
 * Original: 0x00243AC0 - 0x00243AE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243AC0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00243ACE; /* jbe: below or equal (unsigned <=) */

loc_00243AC9: ;
    ecx = 8;

loc_00243ACE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x335840) = ecx;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00243B04(); return; } /* jbe: below or equal (unsigned <=) */

loc_00243ADA: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x335844) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x335844;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00243AF0(); return; /* tail jmp 0x00243AF0 */

}

/**
 * sub_00243CE0
 * Original: 0x00243CE0 - 0x00243D05 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00243CFC; /* je: equal / zero */

loc_00243CF4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00243D05(); return; } /* jne: not equal / not zero */

loc_00243CFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_002445A0
 * Original: 0x002445A0 - 0x002445C8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445A0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_002445BE; /* je: equal / zero */

loc_002445B3: ;
    eax = MEM32(ebx + 0x2CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002445C8(); return; } /* jne: not equal / not zero */

loc_002445BE: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00244CE0
 * Original: 0x00244CE0 - 0x00244D10 (48 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00244D07; /* je: equal / zero */

loc_00244CEC: ;
    eax = MEM32(esi + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00244D00; /* jne: not equal / not zero */

loc_00244CF6: ;
    eax = MEM32(esi + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00244D07; /* je: equal / zero */

loc_00244D00: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00244D10(); return; } /* je: equal / zero */

loc_00244D07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00244EF0
 * Original: 0x00244EF0 - 0x00244F03 (19 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00244F03(); return; } /* jne: not equal / not zero */

loc_00244EFC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00244FB0
 * Original: 0x00244FB0 - 0x00244FE5 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00244FB0: ;
    edx = MEM32(ecx + 0x2D0);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00244FDF; /* jle: less or equal (signed <=) */

loc_00244FBE: ;
    esi = MEM32(ecx + 0x248);
    ecx = MEM32(ecx + 0x23C);
    /* nop */

loc_00244FD0: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(esi + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + ebx * 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00244FE2; /* je: equal / zero */

loc_00244FD7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00244FD0; /* jl: less (signed <) */

loc_00244FDF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00244FE2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244FF0
 * Original: 0x00244FF0 - 0x00245036 (70 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00244FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00245032; /* je: equal / zero */

loc_00244FF9: ;
    eax = MEM32(esi + 0x2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00245032; /* je: equal / zero */

loc_00245003: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = esi;
    PUSH32(esp, 0x0024500Fu); RECOMP_ABI_CALL(0x00244FB0u, sub_00244FB0); /* call 0x00244FB0 */

loc_0024500F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00245032; /* je: equal / zero */

loc_00245015: ;
    ecx = MEM32(esi + 0x2D8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x178);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00245032; /* je: equal / zero */

loc_0024502A: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00245032u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00245030u); } /* indirect call */
    }

loc_00245032: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00245240
 * Original: 0x00245240 - 0x002452B2 (114 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245240: ;
    _fb = (uint32_t)(0x3A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3B0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0x4000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x24E3B0;
    if (TEST_NZ(_fa, _fb)) goto loc_00245271; /* jne: not equal / not zero */

loc_0024525D: ;
    MEM32(0x335840) = 1;
    MEM32(0x335844) = 0;

loc_00245271: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD9;
    edi = esp + 0x4C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00245283u); RECOMP_ABI_CALL(0x00247090u, sub_00247090); /* call 0x00247090 */

loc_00245283: ;
    MEM32(esp + 0x2E4) = eax;
    eax = ebp;
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(0x32B938) = 0;
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_002452B2(); return; } /* je: equal / zero */

loc_0024529E: ;
    esi = MEM32(esp + 0x3B4);
    ecx = 0xB;
    edi = esp + 0x20;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    g_seh_ebp = ebp; sub_0024531F(); return; /* tail jmp 0x0024531F */

}

/**
 * sub_00246180
 * Original: 0x00246180 - 0x002461B6 (54 bytes, 22 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246180(void)
{

loc_00246180: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002461B3u); RECOMP_ABI_CALL(0x00243CE0u, sub_00243CE0); /* call 0x00243CE0 */

loc_002461B3: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_002461C0
 * Original: 0x002461C0 - 0x002461F8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002461C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002461C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00246354(); return; } /* je: equal / zero */

loc_002461D3: ;
    eax = MEM32(esi + 0x2D0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x138) = 1;
    MEM32(esi + 0x138) = ebp;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_002462F5(); return; } /* jbe: below or equal (unsigned <=) */

loc_002461F3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    g_seh_ebp = ebp; sub_00246200(); return; /* tail jmp 0x00246200 */

}

/**
 * sub_00246360
 * Original: 0x00246360 - 0x002463C2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246360: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0024650F(); return; } /* je: equal / zero */

loc_0024636D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024637D; /* jne: not equal / not zero */

loc_00246378: ;
    edi = 1;

loc_0024637D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x138) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_00246390; /* jbe: below or equal (unsigned <=) */

loc_0024638E: ;
    edi = eax;

loc_00246390: ;
    ebp = MEM32(esp + 0x1C);
    eax = ebp;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_002463C8(); return; } /* jne: not equal / not zero */

loc_0024639F: ;
    eax = MEM32(esi + 0x2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002463C8(); return; } /* je: equal / zero */

loc_002463A9: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + ecx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_002463C2(); return; } /* jb: below (unsigned <) */

loc_002463BB: ;
    ebx = 1;
    g_seh_ebp = ebp; sub_002463CA(); return; /* tail jmp 0x002463CA */

}

/**
 * sub_00246520
 * Original: 0x00246520 - 0x00246551 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00246520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00246520: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0024663C(); return; } /* je: equal / zero */

loc_00246530: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00246538u); RECOMP_ABI_CALL(0x00244EF0u, sub_00244EF0); /* call 0x00244EF0 */

loc_00246538: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x20), 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00246551(); return; } /* jne: not equal / not zero */

loc_00246541: ;
    _fa = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x108), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00246551(); return; } /* jne: not equal / not zero */

loc_00246549: ;
    ecx = MEM32(0x33582C);
    g_seh_ebp = ebp; sub_00246553(); return; /* tail jmp 0x00246553 */

}

/**
 * sub_00246650
 * Original: 0x00246650 - 0x002466AA (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246650: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2D8F1C);
    SET_LO8(ecx, MEM8(0x2D8F20));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    MEM32(esp + 8) = eax;
    eax = ebx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x14) = LO8(ecx);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0024677A(); return; } /* je: equal / zero */

loc_0024667D: ;
    eax = MEM32(eax * 4 + 0x339268);
    edx = esp + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00246690: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00246690; /* jne: not equal / not zero */

loc_0024669A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002466AA(); return; } /* je: equal / zero */

loc_0024669E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002466A8u); RECOMP_ABI_CALL(0x001C9889u, sub_001C9889); /* call 0x001C9889 */

loc_002466A8: ;
    g_seh_ebp = ebp; sub_002466B4(); return; /* tail jmp 0x002466B4 */

}

/**
 * sub_002467B0
 * Original: 0x002467B0 - 0x002467DA (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00246814(); return; } /* je: equal / zero */

loc_002467B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00246814(); return; } /* je: equal / zero */

loc_002467BE: ;
    eax = MEM32(0x3392A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002467DA(); return; } /* je: equal / zero */

loc_002467C7: ;
    ecx = esi + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002467CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002467CBu); } /* indirect call */
    }

loc_002467CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002467DA(); return; } /* je: equal / zero */

loc_002467D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00246814(); return; } /* je: equal / zero */

loc_002467D6: ;
    SET_LO8(edx, 3);
    g_seh_ebp = ebp; sub_002467EC(); return; /* tail jmp 0x002467EC */

}

/**
 * sub_00246820
 * Original: 0x00246820 - 0x0024683D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00246846(); return; } /* je: equal / zero */

loc_00246828: ;
    _fa = (uint32_t)(MEM8(eax + -2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -2), 3 (8-bit) */
    ecx = ZX8(MEM8(eax + -1));
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0024683D(); return; } /* jne: not equal / not zero */

loc_00246832: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + -8)); return; /* indirect tail jmp */

}

/**
 * sub_00247090
 * Original: 0x00247090 - 0x002470D8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247090: ;
    eax = MEM32(0x3392B0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002470EF(); return; } /* je: equal / zero */

loc_002470A1: ;
    PUSH32(esp, 0x32BB50);
    MEM32(0x3392B0) = esi;
    PUSH32(esp, 0x002470B1u); RECOMP_ABI_CALL(0x001C4FA5u, sub_001C4FA5); /* call 0x001C4FA5 */

loc_002470B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002470D8(); return; } /* je: equal / zero */

loc_002470B5: ;
    PUSH32(esp, 0x32BB48);
    PUSH32(esp, 0x002470BFu); RECOMP_ABI_CALL(0x001C4F94u, sub_001C4F94); /* call 0x001C4F94 */

loc_002470BF: ;
    MEM32(0x32BB40) = esi;
    PUSH32(esp, 0x002470CAu); RECOMP_ABI_CALL(0x001C4A3Au, sub_001C4A3A); /* call 0x001C4A3A */

loc_002470CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x32BB58) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00258FE0
 * Original: 0x00258FE0 - 0x00258FEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258FE0: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00259A5D(); return; /* tail jmp 0x00259A5D */

}

/**
 * sub_00258FEB
 * Original: 0x00258FEB - 0x00258FF6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258FEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258FEB: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00259A72(); return; /* tail jmp 0x00259A72 */

}

/**
 * sub_00258FF6
 * Original: 0x00258FF6 - 0x00259001 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258FF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258FF6: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00259E89(); return; /* tail jmp 0x00259E89 */

}

/**
 * sub_00259001
 * Original: 0x00259001 - 0x00259010 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00259001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00259001: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0025DE81(); return; /* tail jmp 0x0025DE81 */

}

/**
 * sub_00259010
 * Original: 0x00259010 - 0x0025901B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259010: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025A220(); return; /* tail jmp 0x0025A220 */

}

/**
 * sub_0025901B
 * Original: 0x0025901B - 0x00259026 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025901B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025901B: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025E3B5(); return; /* tail jmp 0x0025E3B5 */

}

/**
 * sub_00259026
 * Original: 0x00259026 - 0x00259031 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259026(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259026: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025A235(); return; /* tail jmp 0x0025A235 */

}

/**
 * sub_00259031
 * Original: 0x00259031 - 0x0025903C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259031(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259031: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025A260(); return; /* tail jmp 0x0025A260 */

}

/**
 * sub_0025903C
 * Original: 0x0025903C - 0x00259047 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025903C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025903C: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025A2B4(); return; /* tail jmp 0x0025A2B4 */

}

/**
 * sub_00259047
 * Original: 0x00259047 - 0x00259052 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259047(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259047: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025A34F(); return; /* tail jmp 0x0025A34F */

}

/**
 * sub_00259052
 * Original: 0x00259052 - 0x0025905D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259052(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259052: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_002599F1(); return; /* tail jmp 0x002599F1 */

}

/**
 * sub_0025905D
 * Original: 0x0025905D - 0x00259068 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025905D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025905D: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025EA60(); return; /* tail jmp 0x0025EA60 */

}

/**
 * sub_00259068
 * Original: 0x00259068 - 0x00259077 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00259068(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00259068: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0025F61C(); return; /* tail jmp 0x0025F61C */

}

/**
 * sub_00259077
 * Original: 0x00259077 - 0x002590A7 (48 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00259077(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00259077: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002590A3u); RECOMP_ABI_CALL(0x0025F687u, sub_0025F687); /* call 0x0025F687 */

loc_002590A3: ;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_002590A7
 * Original: 0x002590A7 - 0x002590B2 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002590A7: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025ECE7(); return; /* tail jmp 0x0025ECE7 */

}

/**
 * sub_002590B2
 * Original: 0x002590B2 - 0x002590D0 (30 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590B2(void)
{

loc_002590B2: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002590CDu); RECOMP_ABI_CALL(0x0025F3B9u, sub_0025F3B9); /* call 0x0025F3B9 */

loc_002590CD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002590D0
 * Original: 0x002590D0 - 0x002590DF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002590D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002590D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0025F6DC(); return; /* tail jmp 0x0025F6DC */

}

/**
 * sub_002590DF
 * Original: 0x002590DF - 0x002590EA (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002590DF: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025ED19(); return; /* tail jmp 0x0025ED19 */

}

/**
 * sub_002590EA
 * Original: 0x002590EA - 0x002590F5 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002590EA: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025ED93(); return; /* tail jmp 0x0025ED93 */

}

/**
 * sub_002590F5
 * Original: 0x002590F5 - 0x00259100 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002590F5: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0025EE94(); return; /* tail jmp 0x0025EE94 */

}

/**
 * sub_00259100
 * Original: 0x00259100 - 0x0025910B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259100: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00260255(); return; /* tail jmp 0x00260255 */

}

/**
 * sub_0025910B
 * Original: 0x0025910B - 0x0025912F (36 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025910B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0025910B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025912Bu); RECOMP_ABI_CALL(0x002614FEu, sub_002614FE); /* call 0x002614FE */

loc_0025912B: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0025912F
 * Original: 0x0025912F - 0x0025913A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025912F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025912F: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00260264(); return; /* tail jmp 0x00260264 */

}

/**
 * sub_0025913A
 * Original: 0x0025913A - 0x00259145 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025913A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025913A: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00264596(); return; /* tail jmp 0x00264596 */

}

/**
 * sub_00259145
 * Original: 0x00259145 - 0x00259150 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259145(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259145: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_002645CB(); return; /* tail jmp 0x002645CB */

}

/**
 * sub_00259150
 * Original: 0x00259150 - 0x0025915B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259150: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00260530(); return; /* tail jmp 0x00260530 */

}

/**
 * sub_0025915B
 * Original: 0x0025915B - 0x00259166 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025915B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025915B: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_002621D7(); return; /* tail jmp 0x002621D7 */

}

/**
 * sub_00259166
 * Original: 0x00259166 - 0x00259171 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259166(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259166: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00260553(); return; /* tail jmp 0x00260553 */

}

/**
 * sub_00259171
 * Original: 0x00259171 - 0x0025917C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259171(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259171: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00262818(); return; /* tail jmp 0x00262818 */

}

/**
 * sub_0025917C
 * Original: 0x0025917C - 0x0025919E (34 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025917C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025917C: ;
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x00259199u); RECOMP_ABI_CALL(0x00261753u, sub_00261753); /* call 0x00261753 */

loc_00259199: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025919E
 * Original: 0x0025919E - 0x002591BF (33 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025919E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0025919E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002591BBu); RECOMP_ABI_CALL(0x00262936u, sub_00262936); /* call 0x00262936 */

loc_002591BB: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002591BF
 * Original: 0x002591BF - 0x002591E0 (33 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002591BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002591BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002591DCu); RECOMP_ABI_CALL(0x00262B16u, sub_00262B16); /* call 0x00262B16 */

loc_002591DC: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002591E0
 * Original: 0x002591E0 - 0x002591EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002591E0: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00262D1E(); return; /* tail jmp 0x00262D1E */

}

/**
 * sub_002591EB
 * Original: 0x002591EB - 0x002591F6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002591EB: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00262F1A(); return; /* tail jmp 0x00262F1A */

}

/**
 * sub_002591F6
 * Original: 0x002591F6 - 0x00259201 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002591F6: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00260564(); return; /* tail jmp 0x00260564 */

}

/**
 * sub_00259201
 * Original: 0x00259201 - 0x00259210 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00259201(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00259201: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002648CD(); return; /* tail jmp 0x002648CD */

}

/**
 * sub_00259210
 * Original: 0x00259210 - 0x0025921B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259210: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0026498C(); return; /* tail jmp 0x0026498C */

}

/**
 * sub_0025921B
 * Original: 0x0025921B - 0x0025923D (34 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025921B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025921B: ;
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x00259238u); RECOMP_ABI_CALL(0x0026184Eu, sub_0026184E); /* call 0x0026184E */

loc_00259238: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025923D
 * Original: 0x0025923D - 0x0025925F (34 bytes, 14 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025923D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025923D: ;
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x0025925Au); RECOMP_ABI_CALL(0x0026196Cu, sub_0026196C); /* call 0x0026196C */

loc_0025925A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0025925F
 * Original: 0x0025925F - 0x0025928F (48 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025925F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025925F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, MEM32(ebp + 0x20));
    esi = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259289u); RECOMP_ABI_CALL(0x00264C7Fu, sub_00264C7F); /* call 0x00264C7F */

loc_00259289: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0025928F
 * Original: 0x0025928F - 0x0025929A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025928F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025928F: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_0026694C(); return; /* tail jmp 0x0026694C */

}

/**
 * sub_0025929A
 * Original: 0x0025929A - 0x002592A5 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025929A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025929A: ;
    ecx = MEM32(0x32DBA0);
    g_seh_ebp = ebp; sub_00266B1A(); return; /* tail jmp 0x00266B1A */

}

/**
 * sub_002592A5
 * Original: 0x002592A5 - 0x002592B4 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002592A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002592A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0026604D(); return; /* tail jmp 0x0026604D */

}

/**
 * sub_002592B4
 * Original: 0x002592B4 - 0x002592C3 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002592B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002592B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00266C6B(); return; /* tail jmp 0x00266C6B */

}

/**
 * sub_002592C3
 * Original: 0x002592C3 - 0x002592D2 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002592C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002592C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBA0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002662A6(); return; /* tail jmp 0x002662A6 */

}

/**
 * sub_0025943C
 * Original: 0x0025943C - 0x0025956A (302 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025943C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025943C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6BC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0025945F; /* je: equal / zero */

loc_00259459: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025945Fu); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_0025945F: ;
    eax = MEM32(esi + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259471; /* je: equal / zero */

loc_00259469: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259471u); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_00259471: ;
    eax = MEM32(esi + 0xC40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259483; /* je: equal / zero */

loc_0025947B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259483u); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_00259483: ;
    eax = MEM32(esi + 0x1488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259498; /* je: equal / zero */

loc_0025948D: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259495u); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_00259495: ;
    MEM32(ebp + -4) = ebx;

loc_00259498: ;
    eax = MEM32(esi + 0x1490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002594AD; /* je: equal / zero */

loc_002594A2: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002594AAu); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_002594AA: ;
    MEM32(ebp + -4) = ebx;

loc_002594AD: ;
    eax = MEM32(esi + 0x14E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002594CC; /* je: equal / zero */

loc_002594B7: ;
    eax = MEM32(eax + 0x14D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002594CC; /* je: equal / zero */

loc_002594C1: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002594C9u); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_002594C9: ;
    MEM32(ebp + -4) = ebx;

loc_002594CC: ;
    eax = MEM32(esi + 0x132C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025950E; /* je: equal / zero */

loc_002594D6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1330)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1330), ebx (32-bit) */
    eax = MEM32(eax + 0x154);
    if (CMP_NE(_fa, _fb)) goto loc_002594FF; /* jne: not equal / not zero */

loc_002594E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002594F3; /* je: equal / zero */

loc_002594E8: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002594F0u); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_002594F0: ;
    MEM32(ebp + -4) = ebx;

loc_002594F3: ;
    eax = MEM32(esi + 0x132C);
    eax = MEM32(eax + 0x160);

loc_002594FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025950E; /* je: equal / zero */

loc_00259503: ;
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025950Bu); RECOMP_ABI_CALL(0x00259A72u, sub_00259A72); /* call 0x00259A72 */

loc_0025950B: ;
    MEM32(ebp + -4) = ebx;

loc_0025950E: ;
    edi = esi + 0x14AC;
    MEM32(ebp + -8) = 0xD;

loc_0025951B: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025955A; /* je: equal / zero */

loc_00259521: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259529u); RECOMP_ABI_CALL(0x0026A6A5u, sub_0026A6A5); /* call 0x0026A6A5 */

loc_00259529: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259558; /* jge: greater or equal (signed >=) */

loc_0025952D: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259536u); RECOMP_ABI_CALL(0x00269CCFu, sub_00269CCF); /* call 0x00269CCF */

loc_00259536: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259556; /* je: equal / zero */

loc_0025953C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259546u); RECOMP_ABI_CALL(0x0026B549u, sub_0026B549); /* call 0x0026B549 */

loc_00259546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259556; /* jl: less (signed <) */

loc_0025954A: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259552u); RECOMP_ABI_CALL(0x00259A5Du, sub_00259A5D); /* call 0x00259A5D */

loc_00259552: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025954A; /* je: equal / zero */

loc_00259556: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00259558: ;
    MEM32(edi) = ebx;

loc_0025955A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025951B; /* jne: not equal / not zero */

loc_00259562: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002595DF
 * Original: 0x002595DF - 0x00259607 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002595DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002595DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x190;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002595E8: ;
    eax = 0;
    ecx = 0x32DBA4;
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00259607(); return; } /* je: equal / zero */

loc_002595FE: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259605u); RECOMP_ABI_CALL(0x001C4664u, sub_001C4664); /* call 0x001C4664 */

loc_00259605: ;
    goto loc_002595E8;

}

/**
 * sub_002596CA
 * Original: 0x002596CA - 0x00259971 (679 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002596CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002596CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00259815; /* jne: not equal / not zero */

loc_002596E1: ;
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002597E3; /* je: equal / zero */

loc_002596EF: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002597E3; /* jbe: below or equal (unsigned <=) */

loc_002596FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025970C; /* jb: below (unsigned <) */

loc_00259701: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002597E3; /* jb: below (unsigned <) */

loc_0025970C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2F9;
    edi = ebx + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259738; /* jne: not equal / not zero */

loc_0025971D: ;
    eax = ebx + 0xA0C;
    MEM32(ebx + 0x10) = 0xA0C;
    ecx = MEM32(0x32DBA0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259736u); RECOMP_ABI_CALL(0x0025A2B4u, sub_0025A2B4); /* call 0x0025A2B4 */

loc_00259736: ;
    goto loc_0025973C;

loc_00259738: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0025973C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259748; /* je: equal / zero */

loc_00259742: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259748u); RECOMP_ABI_CALL(0x001C9103u, sub_001C9103); /* call 0x001C9103 */

loc_00259748: ;
    edi = MEM32(0x28E498);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x345050);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00259759u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259757u); } /* indirect call */
    }

loc_00259759: ;
    ebx = MEM32(0x28E50C);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 1);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00259787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259785u); } /* indirect call */
    }

loc_00259787: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259794; /* jl: less (signed <) */

loc_0025978B: ;
    MEM32(ebp + 0x14) = 0x34502C;
    goto loc_002597D2;

loc_00259794: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x345004);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0025979Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025979Du); } /* indirect call */
    }

loc_0025979F: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 1);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002597C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002597C5u); } /* indirect call */
    }

loc_002597C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002597E0; /* jl: less (signed <) */

loc_002597CB: ;
    MEM32(ebp + 0x14) = 0x344FEC;

loc_002597D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = 0x344FDC;
    { uint32_t _icall_target = MEM32(0x28E48C); PUSH32(esp, 0x002597E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002597DAu); } /* indirect call */
    }

loc_002597E0: ;
    ebx = MEM32(ebp + 0xC);

loc_002597E3: ;
    ecx = MEM32(0x32DBA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002597F2; /* je: equal / zero */

loc_002597ED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002597F2u); RECOMP_ABI_CALL(0x0025943Cu, sub_0025943C); /* call 0x0025943C */

loc_002597F2: ;
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + eax + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259810u); RECOMP_ABI_CALL(0x001C71F1u, sub_001C71F1); /* call 0x001C71F1 */

loc_00259810: ;
    goto loc_0025996A;

loc_00259815: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = eax;
    edi = 0x168;
    PUSH32(esp, edi);
    eax = ebp + -748;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259839u); RECOMP_ABI_CALL(0x001C8E6Eu, sub_001C8E6E); /* call 0x001C8E6E */

loc_00259839: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x44 (8-bit) */
    SET_LO8(edx, 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_00259845; /* je: equal / zero */

loc_00259841: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259867; /* jne: not equal / not zero */

loc_00259845: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259867; /* jne: not equal / not zero */

loc_0025984B: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259867; /* jne: not equal / not zero */

loc_00259850: ;
    eax = esi + 3;
    esi = eax;
    ecx = ebp + -748;
    MEM32(ebp + -4) = 1;
    goto loc_002598F5;

loc_00259867: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025986F; /* je: equal / zero */

loc_0025986B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598A0; /* jne: not equal / not zero */

loc_0025986F: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598A0; /* jne: not equal / not zero */

loc_00259875: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598A0; /* jne: not equal / not zero */

loc_0025987A: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598A0; /* jne: not equal / not zero */

loc_00259880: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025988D; /* je: equal / zero */

loc_00259888: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x75 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598A0; /* jne: not equal / not zero */

loc_0025988D: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598A0; /* jne: not equal / not zero */

loc_00259892: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x2F1404);
    goto loc_002598D7;

loc_002598A0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259967; /* je: equal / zero */

loc_002598AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x59 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002598B6; /* je: equal / zero */

loc_002598AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x79 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259967; /* jne: not equal / not zero */

loc_002598B6: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259967; /* jne: not equal / not zero */

loc_002598C0: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259967; /* jne: not equal / not zero */

loc_002598C9: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F13D4);
    PUSH32(esp, 0x2934A8);

loc_002598D7: ;
    eax = ebp + -388;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002598E4u); RECOMP_ABI_CALL(0x0026C0E6u, sub_0026C0E6); /* call 0x0026C0E6 */

loc_002598E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00259967; /* jl: less (signed <) */

loc_002598EB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -388;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002598F5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259900; /* je: equal / zero */

loc_002598FB: ;
    edx = MEM32(ebp + 0x14);
    goto loc_00259903;

loc_00259900: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00259903: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259912u); RECOMP_ABI_CALL(0x001C70ACu, sub_001C70AC); /* call 0x001C70AC */

loc_00259912: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00259920; /* je: equal / zero */

loc_0025991B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025992D; /* je: equal / zero */

loc_00259920: ;
    PUSH32(esp, esi);
    eax = ebp + -748;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025992Du); RECOMP_ABI_CALL(0x001C8F00u, sub_001C8F00); /* call 0x001C8F00 */

loc_0025992D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025995E; /* jl: less (signed <) */

loc_00259931: ;
    ecx = MEM32(0x32DBA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259940; /* je: equal / zero */

loc_0025993B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00259940u); RECOMP_ABI_CALL(0x0025943Cu, sub_0025943C); /* call 0x0025943C */

loc_00259940: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259956; /* je: equal / zero */

loc_00259950: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00259956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259953u); } /* indirect call */
    }

loc_00259956: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x28E568); PUSH32(esp, 0x0025995Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259958u); } /* indirect call */
    }

loc_0025995E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x28E510); PUSH32(esp, 0x00259965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025995Fu); } /* indirect call */
    }

loc_00259965: ;
    goto loc_0025996A;

loc_00259967: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);

loc_0025996A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00259A4C
 * Original: 0x00259A4C - 0x00259A5A (14 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259A4C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259A4C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259A5D
 * Original: 0x00259A5D - 0x00259A72 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259A5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259A5D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259A68; /* jne: not equal / not zero */

loc_00259A61: ;
    eax = 0x80150005u;
    goto loc_00259A6F;

loc_00259A68: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00259A6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259A6Du); } /* indirect call */
    }

loc_00259A6F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00259A72
 * Original: 0x00259A72 - 0x00259A8A (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259A72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259A72: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259A7D; /* jne: not equal / not zero */

loc_00259A76: ;
    eax = 0x80150005u;
    goto loc_00259A87;

loc_00259A7D: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00259A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259A82u); } /* indirect call */
    }

loc_00259A85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00259A87: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025A2B4
 * Original: 0x0025A2B4 - 0x0025A34F (155 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A2B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A2B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A2C8; /* jne: not equal / not zero */

loc_0025A2BE: ;
    eax = 0x80150005u;
    goto loc_0025A34A;

loc_0025A2C8: ;
    _fa = (uint32_t)(MEM32(ebx + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xBC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A2D7; /* jne: not equal / not zero */

loc_0025A2D0: ;
    ebp = 0x80150002u;
    goto loc_0025A348;

loc_0025A2D7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7D);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edx) = 0x4C;
    MEM8(edx + 1) = 1;
    MEM16(edx + 2) = 0x1F4;
    esi = MEM32(ebx + 0xC4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, 0x70);
    edi = edx + 4;
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0025A30F; /* jne: not equal / not zero */

loc_0025A303: ;
    esi = MEM32(ebx + 0xBC);
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xBC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025A30F: ;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    eax = edx + 0x1C4;
    POP32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    POP32(esp, esi);

loc_0025A31D: ;
    eax = MEM32(ebx + 0xBC);
    eax = MEM32(eax + ecx + 0x27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A33D; /* je: equal / zero */

loc_0025A32E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A33D; /* je: equal / zero */

loc_0025A333: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A33D; /* je: equal / zero */

loc_0025A338: ;
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025A33D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025A31D; /* jb: below (unsigned <) */

loc_0025A348: ;
    eax = ebp;

loc_0025A34A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0025F3B9
 * Original: 0x0025F3B9 - 0x0025F3CE (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025F3B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F3B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0025F3CE(); return; } /* jne: not equal / not zero */

loc_0025F3C7: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0025F437(); return; /* tail jmp 0x0025F437 */

}

/**
 * sub_0025F687
 * Original: 0x0025F687 - 0x0025F698 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025F687(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025F687: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0025F698(); return; } /* jne: not equal / not zero */

loc_0025F691: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_0025F6D7(); return; /* tail jmp 0x0025F6D7 */

}

/**
 * sub_002614FE
 * Original: 0x002614FE - 0x00261516 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002614FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002614FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00261516(); return; } /* jne: not equal / not zero */

loc_0026150C: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_002615C3(); return; /* tail jmp 0x002615C3 */

}

/**
 * sub_00261753
 * Original: 0x00261753 - 0x00261768 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00261753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00261753: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00261768(); return; } /* jne: not equal / not zero */

loc_0026175E: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00261849(); return; /* tail jmp 0x00261849 */

}

/**
 * sub_0026184E
 * Original: 0x0026184E - 0x00261863 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0026184E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026184E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00261863(); return; } /* jne: not equal / not zero */

loc_00261859: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00261967(); return; /* tail jmp 0x00261967 */

}

/**
 * sub_0026196C
 * Original: 0x0026196C - 0x00261981 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0026196C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026196C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00261981(); return; } /* jne: not equal / not zero */

loc_00261977: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00261A81(); return; /* tail jmp 0x00261A81 */

}

/**
 * sub_00262936
 * Original: 0x00262936 - 0x00262950 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00262936(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262936: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00262950(); return; } /* jne: not equal / not zero */

loc_00262946: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00262B10(); return; /* tail jmp 0x00262B10 */

}

/**
 * sub_00262B16
 * Original: 0x00262B16 - 0x00262B2F (25 bytes, 9 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00262B16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00262B16: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00262B2F(); return; } /* jne: not equal / not zero */

loc_00262B25: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00262D1A(); return; /* tail jmp 0x00262D1A */

}

/**
 * sub_00264C7F
 * Original: 0x00264C7F - 0x00264C9B (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00264C7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264C7F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00264C9B(); return; } /* jne: not equal / not zero */

loc_00264C91: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_00264DEF(); return; /* tail jmp 0x00264DEF */

}

/**
 * sub_00269CCF
 * Original: 0x00269CCF - 0x00269CDC (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269CCF(void)
{

loc_00269CCF: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x8C4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00269DDE
 * Original: 0x00269DDE - 0x00269E0E (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269DDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269DDE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ecx + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00269E95
 * Original: 0x00269E95 - 0x00269F00 (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269E95(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269E95: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269EA6; /* je: equal / zero */

loc_00269EA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269EA6u); RECOMP_ABI_CALL(0x001C440Bu, sub_001C440B); /* call 0x001C440B */

loc_00269EA6: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269ECC; /* je: equal / zero */

loc_00269EAD: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C0), 0 (32-bit) */
    ecx = MEM32(esi + 0x8BC);
    if (CMP_EQ(_fa, _fb)) goto loc_00269EC4; /* je: equal / zero */

loc_00269EBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269EC2u); RECOMP_ABI_CALL(0x0026CD07u, sub_0026CD07); /* call 0x0026CD07 */

loc_00269EC2: ;
    goto loc_00269ECC;

loc_00269EC4: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00269ECCu); RECOMP_ABI_CALL(0x0026CCCCu, sub_0026CCCC); /* call 0x0026CCCC */

loc_00269ECC: ;
    ecx = MEM32(esi + 0x8BC);
    eax = MEM32(esi);
    MEM32(ecx + eax * 4 + 0x14AC) = MEM32(ecx + eax * 4 + 0x14AC) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x14AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x8C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C0), 0 (32-bit) */
    ecx = MEM32(esi + 0x8BC);
    if (CMP_EQ(_fa, _fb)) goto loc_00269EF3; /* je: equal / zero */

loc_00269EEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269EF1u); RECOMP_ABI_CALL(0x0026CD07u, sub_0026CD07); /* call 0x0026CD07 */

loc_00269EF1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00269EF3: ;
    PUSH32(esp, 0x8012);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00269EFEu); RECOMP_ABI_CALL(0x0026CCCCu, sub_0026CCCC); /* call 0x0026CCCC */

loc_00269EFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A0E8
 * Original: 0x0026A0E8 - 0x0026A142 (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A0E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A0E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026A13E; /* ja: above (unsigned >) */

loc_0026A0F6: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ebx = ebx << 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = eax;

loc_0026A109: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x28E538));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026A124u); RECOMP_ABI_CALL(0x001CDACAu, sub_001CDACA); /* call 0x001CDACA */

loc_0026A124: ;
    edi = ebx + 0x1F4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if ((_fa != 0)) goto loc_0026A109; /* jne: not equal / not zero */

loc_0026A13B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0026A13E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0026A6A5
 * Original: 0x0026A6A5 - 0x0026A6C3 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A6A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A6A5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A6B8; /* je: equal / zero */

loc_0026A6B1: ;
    esi = 0x80004005u;
    goto loc_0026A6BD;

loc_0026A6B8: ;
    PUSH32(esp, 0x0026A6BDu); RECOMP_ABI_CALL(0x00269E95u, sub_00269E95); /* call 0x00269E95 */

loc_0026A6BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026A7BF
 * Original: 0x0026A7BF - 0x0026A84D (142 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A7BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A7BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x84C;
    MEM32(ebx + 0x18) = eax;
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = edi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026A7EAu); RECOMP_ABI_CALL(0x0026A0E8u, sub_0026A0E8); /* call 0x0026A0E8 */

loc_0026A7EA: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edi = edi << 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026A80Cu); RECOMP_ABI_CALL(0x0026CDEFu, sub_0026CDEF); /* call 0x0026CDEF */

loc_0026A80C: ;
    esi = MEM32(esi + 0x8BC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026A81Fu); RECOMP_ABI_CALL(0x0026CD8Fu, sub_0026CD8F); /* call 0x0026CD8F */

loc_0026A81F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A83F; /* jge: greater or equal (signed >=) */

loc_0026A825: ;
    ecx = MEM32(ebx + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026A82Du); RECOMP_ABI_CALL(0x00269E95u, sub_00269E95); /* call 0x00269E95 */

loc_0026A82D: ;
    MEM32(ebx + 0x10) = edi;
    MEM32(ebx + 0x14) = 1;
    MEM32(ebx + 0x2C) = esi;
    MEM32(ebx + 0x18) = edi;
    goto loc_0026A846;

loc_0026A83F: ;
    MEM32(ebx + 0x14) = 3;

loc_0026A846: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B549
 * Original: 0x0026B549 - 0x0026B58C (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B549(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B549: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026B566; /* je: equal / zero */

loc_0026B557: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0x0026B562u); RECOMP_ABI_CALL(0x00259A5Du, sub_00259A5D); /* call 0x00259A5D */

loc_0026B562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B557; /* je: equal / zero */

loc_0026B566: ;
    ecx = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0026B57Bu); RECOMP_ABI_CALL(0x00269DDEu, sub_00269DDE); /* call 0x00269DDE */

loc_0026B57B: ;
    PUSH32(esp, 0x0026B580u); RECOMP_ABI_CALL(0x0026A7BFu, sub_0026A7BF); /* call 0x0026A7BF */

loc_0026B580: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026B587; /* jl: less (signed <) */

loc_0026B584: ;
    MEM32(edi + 8) = ebx;

loc_0026B587: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026C0E6
 * Original: 0x0026C0E6 - 0x0026C10E (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C0E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C0E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026C109; /* jbe: below or equal (unsigned <=) */

loc_0026C0EF: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026C101u); RECOMP_ABI_CALL(0x001F3233u, sub_001F3233); /* call 0x001F3233 */

loc_0026C101: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C10C; /* jne: not equal / not zero */

loc_0026C109: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026C10C: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0026CC6D
 * Original: 0x0026CC6D - 0x0026CC95 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CC6D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CC6D: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC92; /* je: equal / zero */

loc_0026CC74: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC83; /* je: equal / zero */

loc_0026CC7C: ;
    eax = eax | 0x21880000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0026CC88;

loc_0026CC83: ;
    eax = 0x21882000;

loc_0026CC88: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0026CC92u); RECOMP_ABI_CALL(0x001C7E66u, sub_001C7E66); /* call 0x001C7E66 */

loc_0026CC92: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026CCCC
 * Original: 0x0026CCCC - 0x0026CCD1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CCCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026CCCC: ;
    g_seh_ebp = ebp; sub_0026CC6D(); return; /* tail jmp 0x0026CC6D */

}

/**
 * sub_0026CD07
 * Original: 0x0026CD07 - 0x0026CD22 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CD07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CD07: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD1F; /* je: equal / zero */

loc_0026CD0E: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x8C));
    PUSH32(esp, 0x0026CD1Fu); RECOMP_ABI_CALL(0x001C9777u, sub_001C9777); /* call 0x001C9777 */

loc_0026CD1F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026CD22
 * Original: 0x0026CD22 - 0x0026CD7E (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CD22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CD22: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x0026CD39u); RECOMP_ABI_CALL(0x001C583Bu, sub_001C583B); /* call 0x001C583B */

loc_0026CD39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CD6F; /* jne: not equal / not zero */

loc_0026CD3D: ;
    PUSH32(esp, 0x0026CD42u); RECOMP_ABI_CALL(0x001C57CEu, sub_001C57CE); /* call 0x001C57CE */

loc_0026CD42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD67; /* je: equal / zero */

loc_0026CD49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD67; /* je: equal / zero */

loc_0026CD50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026CD5E; /* jle: less or equal (signed <=) */

loc_0026CD54: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026CD5E: ;
    ecx = eax;
    eax = esi + 0xC;
    MEM32(eax) = ecx;
    goto loc_0026CD78;

loc_0026CD67: ;
    eax = esi + 0xC;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0026CD78;

loc_0026CD6F: ;
    eax = esi + 0xC;
    MEM32(eax) = 0x1500F0;

loc_0026CD78: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026CD7E
 * Original: 0x0026CD7E - 0x0026CD8F (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CD7E(void)
{

loc_0026CD7E: ;
    PUSH32(esp, 0x8002);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0026CD8Cu); RECOMP_ABI_CALL(0x0026CCCCu, sub_0026CCCC); /* call 0x0026CCCC */

loc_0026CD8C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026CD8F
 * Original: 0x0026CD8F - 0x0026CDEF (96 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CD8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CD8F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edi (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0x1C));
    if (CMP_EQ(_fa, _fb)) goto loc_0026CDB3; /* je: equal / zero */

loc_0026CDAC: ;
    PUSH32(esp, 0x0026CDB1u); RECOMP_ABI_CALL(0x001C4FB9u, sub_001C4FB9); /* call 0x001C4FB9 */

loc_0026CDB1: ;
    goto loc_0026CDB8;

loc_0026CDB3: ;
    PUSH32(esp, 0x0026CDB8u); RECOMP_ABI_CALL(0x001C50A6u, sub_001C50A6); /* call 0x001C50A6 */

loc_0026CDB8: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0026CDC7; /* je: equal / zero */

loc_0026CDC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026CDC7u); RECOMP_ABI_CALL(0x001C448Au, sub_001C448A); /* call 0x001C448A */

loc_0026CDC7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CDE7; /* jne: not equal / not zero */

loc_0026CDCB: ;
    PUSH32(esp, 0x0026CDD0u); RECOMP_ABI_CALL(0x001C57CEu, sub_001C57CE); /* call 0x001C57CE */

loc_0026CDD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CDE7; /* je: equal / zero */

loc_0026CDD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026CDE5; /* jle: less or equal (signed <=) */

loc_0026CDDB: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026CDE5: ;
    edi = eax;

loc_0026CDE7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026CDEF
 * Original: 0x0026CDEF - 0x0026CE47 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CDEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CDEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x1C);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    ecx = edx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026CE31u); RECOMP_ABI_CALL(0x00259A4Cu, sub_00259A4C); /* call 0x00259A4C */

loc_0026CE31: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x26CD22;
    MEM32(esi + 4) = 0x26CD7E;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_002734EF
 * Original: 0x002734EF - 0x002734FA (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002734EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002734EF: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273453(); return; /* tail jmp 0x00273453 */

}

/**
 * sub_002734FA
 * Original: 0x002734FA - 0x00273505 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002734FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002734FA: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273420(); return; /* tail jmp 0x00273420 */

}

/**
 * sub_00273505
 * Original: 0x00273505 - 0x00273510 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273505(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273505: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273431(); return; /* tail jmp 0x00273431 */

}

/**
 * sub_00273510
 * Original: 0x00273510 - 0x0027351B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273510: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273442(); return; /* tail jmp 0x00273442 */

}

/**
 * sub_0027351B
 * Original: 0x0027351B - 0x0027352D (18 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027351B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027351B: ;
    ecx = MEM32(0x32DBB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0027352D(); return; } /* jne: not equal / not zero */

loc_00273525: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00273554
 * Original: 0x00273554 - 0x00273563 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00273554(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00273554: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBB0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00273490(); return; /* tail jmp 0x00273490 */

}

/**
 * sub_00273563
 * Original: 0x00273563 - 0x00273579 (22 bytes, 8 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00273563(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273563: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00273579(); return; } /* jne: not equal / not zero */

loc_00273570: ;
    eax = 0x276D;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_0027357F
 * Original: 0x0027357F - 0x0027358A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027357F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027357F: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_002734A6(); return; /* tail jmp 0x002734A6 */

}

/**
 * sub_0027358A
 * Original: 0x0027358A - 0x00273595 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027358A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027358A: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273470(); return; /* tail jmp 0x00273470 */

}

/**
 * sub_00273595
 * Original: 0x00273595 - 0x002735A0 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273595(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273595: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_002757B0(); return; /* tail jmp 0x002757B0 */

}

/**
 * sub_002735A0
 * Original: 0x002735A0 - 0x002735AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002735A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002735A0: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_0027569B(); return; /* tail jmp 0x0027569B */

}

/**
 * sub_002735B6
 * Original: 0x002735B6 - 0x002735C1 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002735B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002735B6: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273C92(); return; /* tail jmp 0x00273C92 */

}

/**
 * sub_002735C1
 * Original: 0x002735C1 - 0x002735D0 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002735C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002735C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBB0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00274527(); return; /* tail jmp 0x00274527 */

}

/**
 * sub_002735D0
 * Original: 0x002735D0 - 0x002735DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002735D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002735D0: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00274762(); return; /* tail jmp 0x00274762 */

}

/**
 * sub_0027360F
 * Original: 0x0027360F - 0x0027361A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027360F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027360F: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_0027519E(); return; /* tail jmp 0x0027519E */

}

/**
 * sub_00273638
 * Original: 0x00273638 - 0x00273647 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00273638(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00273638: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x32DBB0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0027572C(); return; /* tail jmp 0x0027572C */

}

/**
 * sub_00273700
 * Original: 0x00273700 - 0x0027370B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273700: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273659(); return; /* tail jmp 0x00273659 */

}

/**
 * sub_0027370B
 * Original: 0x0027370B - 0x00273716 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027370B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027370B: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_0027366A(); return; /* tail jmp 0x0027366A */

}

/**
 * sub_00273716
 * Original: 0x00273716 - 0x00273721 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273716(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273716: ;
    ecx = MEM32(0x32DBB0);
    g_seh_ebp = ebp; sub_00273679(); return; /* tail jmp 0x00273679 */

}

/**
 * sub_00273AA5
 * Original: 0x00273AA5 - 0x00273AAA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273AA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273AA5: ;
    g_seh_ebp = ebp; sub_001C57CE(); return; /* tail jmp 0x001C57CE */

}

/**
 * sub_00274351
 * Original: 0x00274351 - 0x00274360 (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274351(void)
{

loc_00274351: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00286946
 * Original: 0x00286946 - 0x00286982 (60 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286946(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286946: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x28E580); PUSH32(esp, 0x0028694Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00286948u); } /* indirect call */
    }

loc_0028694E: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00286961; /* je: equal / zero */

loc_0028695C: ;
    ecx = MEM32(edx + 8);
    MEM32(edi) = ecx;

loc_00286961: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286973; /* je: equal / zero */

loc_00286969: ;
    ecx = MEM32(edx + 8);
    ecx = ecx & MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;

loc_00286973: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x28E57C); PUSH32(esp, 0x0028697Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00286975u); } /* indirect call */
    }

loc_0028697B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00286982
 * Original: 0x00286982 - 0x00286987 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286982(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286982: ;
    g_seh_ebp = ebp; sub_00285B70(); return; /* tail jmp 0x00285B70 */

}

/**
 * sub_00286987
 * Original: 0x00286987 - 0x002869A1 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00286987(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286987: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002869A1(); return; } /* jne: not equal / not zero */

loc_00286995: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_002869EF(); return; /* tail jmp 0x002869EF */

}

/**
 * sub_00286E9B
 * Original: 0x00286E9B - 0x00286EC2 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286E9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286E9B: ;
    eax = 0x2857E4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x2857EC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00286EBE; /* jae: above or equal (unsigned >=) */

loc_00286EAC: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00286EB7; /* je: equal / zero */

loc_00286EB2: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00286EC2(); return; } /* je: equal / zero */

loc_00286EB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00286EAC; /* jb: below (unsigned <) */

loc_00286EBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00286EC6
 * Original: 0x00286EC6 - 0x00286EE5 (31 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00286EC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00286EC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00286ED6u); RECOMP_ABI_CALL(0x00286E9Bu, sub_00286E9B); /* call 0x00286E9B */

loc_00286ED6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00286EE5(); return; } /* jne: not equal / not zero */

loc_00286EDA: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00286EE1u); RECOMP_ABI_CALL(0x001C57F6u, sub_001C57F6); /* call 0x001C57F6 */

loc_00286EE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00286F18(); return; /* tail jmp 0x00286F18 */

}

/**
 * sub_00286F1C
 * Original: 0x00286F1C - 0x00286F28 (12 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286F1C(void)
{

loc_00286F1C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00286F25u); RECOMP_ABI_CALL(0x00289F50u, sub_00289F50); /* call 0x00289F50 */

loc_00286F25: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00286F28
 * Original: 0x00286F28 - 0x00286F47 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286F28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286F28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x28E580); PUSH32(esp, 0x00286F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00286F2Cu); } /* indirect call */
    }

loc_00286F32: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0xA3);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00286F47(); return; } /* je: equal / zero */

loc_00286F42: ;
    PUSH32(esp, 0x57);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00286F8C(); return; /* tail jmp 0x00286F8C */

}

/**
 * sub_00286F9B
 * Original: 0x00286F9B - 0x00286FB2 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00286F9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00286F9B: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0xA3;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x28), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00286FB2(); return; } /* je: equal / zero */

loc_00286FAD: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_00286FCB(); return; /* tail jmp 0x00286FCB */

}

/**
 * sub_002898E9
 * Original: 0x002898E9 - 0x0028991A (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002898E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002898E9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 2 (8-bit) */
    eax = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0028991A(); return; } /* je: equal / zero */

loc_002898FC: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x2898E9;
    MEM32(eax + 0xC) = esi;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_00289964(); return; /* tail jmp 0x00289964 */

}

/**
 * sub_00289D5D
 * Original: 0x00289D5D - 0x00289D7B (30 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00289D5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289D5D: ;
    edx = ecx + 0xA2;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00289D7A; /* jne: not equal / not zero */

loc_00289D69: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x82) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x82;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, 0x00289D7Au); RECOMP_ABI_CALL(0x002898E9u, sub_002898E9); /* call 0x002898E9 */

loc_00289D7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00289F50
 * Original: 0x00289F50 - 0x00289FBD (109 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00289F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00289F50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x28E580); PUSH32(esp, 0x00289F60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00289F5Au); } /* indirect call */
    }

loc_00289F60: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xA3);
    eax = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00289F76; /* je: equal / zero */

loc_00289F72: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00289F76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00289F74u); } /* indirect call */
    }

loc_00289F76: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00289FBD(); return; } /* je: equal / zero */

loc_00289F7A: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -20;
    ecx = esi;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 0x9E) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00289FA4u); RECOMP_ABI_CALL(0x00289D5Du, sub_00289D5D); /* call 0x00289D5D */

loc_00289FA4: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x28E57C); PUSH32(esp, 0x00289FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00289FA7u); } /* indirect call */
    }

loc_00289FAD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x28E58C); PUSH32(esp, 0x00289FBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00289FB5u); } /* indirect call */
    }

loc_00289FBB: ;
    g_seh_ebp = ebp; sub_00289FC6(); return; /* tail jmp 0x00289FC6 */

}

/**
 * sub_0028DE58
 * Original: 0x0028DE58 - 0x0028DEA6 (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0028DE58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028DE58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -4) = 2;
    SET_LO8(ebx, 0x1F);
    { uint32_t _icall_target = MEM32(0x28E580); PUSH32(esp, 0x0028DE6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028DE68u); } /* indirect call */
    }

loc_0028DE6E: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2859D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2859D4 (32-bit) */
    edi = MEM32(ebp + 0xC);
    MEM8(ebp + -8) = LO8(eax);
    eax = 0x2859EC;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0028DEA6(); return; } /* je: equal / zero */

loc_0028DE84: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0028DEA6(); return; } /* je: equal / zero */

loc_0028DE88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2859E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2859E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0028DEE3(); return; } /* jne: not equal / not zero */

loc_0028DE90: ;
    _fa = (uint32_t)(MEM16(0x2859A8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x2859A8), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0028DEB0(); return; } /* je: equal / zero */

loc_0028DE99: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x32DCC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x32DCC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028DEE3(); return; /* tail jmp 0x0028DEE3 */

}

/**
 * sub_0028E08F
 * Original: 0x0028E08F - 0x0028E0BF (48 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0028E08F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028E08F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028E0A8u); RECOMP_ABI_CALL(0x0028DE58u, sub_0028DE58); /* call 0x0028DE58 */

loc_0028E0A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028E0BA; /* jl: less (signed <) */

loc_0028E0AC: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x10) = edx;

loc_0028E0BA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}
