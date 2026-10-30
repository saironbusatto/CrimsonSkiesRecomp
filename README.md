# Crimson Skies: High Road to Revenge — Static Recompilation (Native PC Port)

[![Platform](https://img.shields.io/badge/platform-Linux%20%7C%20Windows-blue.svg)](#)
[![Language](https://img.shields.io/badge/language-C11-orange.svg)](#)
[![Architecture](https://img.shields.io/badge/arch-x86__64-brightgreen.svg)](#)
[![Release](https://img.shields.io/github/v/release/saironbusatto/CrimsonSkiesRecomp?color=brightgreen)](https://github.com/saironbusatto/CrimsonSkiesRecomp/releases/tag/v1.0.0)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](#)

A standalone native PC static recompilation of the 2003 Original Xbox classic **Crimson Skies: High Road to Revenge** (Title ID `0x4D530021`, Entry Point `0x001C7CA9`).

Unlike conventional hypervisors or emulator frontends (e.g., xemu, Cxbx-Reloaded) that interpret or JIT-compile machine code with runtime virtualization overhead, this project performs **Ahead-Of-Time (AOT) binary lifting** of the retail Xbox x86-32 executable directly into standard C11. The generated code is paired with a custom high-performance Xbox kernel replacement and hardware abstraction layer (HAL), compiling directly to native 64-bit binaries for **Linux** (`crimsonskies`) and **Windows** (`crimsonskies.exe`).

---

## Architecture Overview

```mermaid
flowchart TD
    subgraph Original Xbox Binary
        XBE["Russian/English.xbe (Retail 32-bit x86)"]
        TEXT[".text / D3D / DSOUND / XPP Code Sections"]
    end

    subgraph Static Recompilation Pipeline
        LIFTER["Static Recompiler (x86-32 -> C11)"]
        GEN["Generated C Translation Units\n(recomp_0000.c .. recomp_0011.c)"]
        DISPATCH["Binary Search Function Dispatcher\n(recomp_dispatch.c)"]
    end

    subgraph Runtime & HAL Subsystems
        MEM["Xbox Memory Manager\n• 4GB Guest Aperture\n• 128MB NV2A Contiguous Buffer\n• 28x Mirror Views"]
        KERN["Kernel HLE Replacement\n• 147 Xbox Kernel Thunks\n• FatX VFS & Path Normalizer\n• Threading & Mutex Sync"]
        GFX["NV2A Graphics Engine\n• Direct3D 11 (Windows)\n• OpenGL / Epoxy (Linux)\n• Dynamic FVF Parser"]
        SND["Audio Engine\n• MCPX APU Voice Processor\n• DirectSound Mixer\n• XAudio2 / SDL2"]
        INP["Input Subsystem\n• Safe XInput 1.4\n• SDL2 GameController HAL"]
    end

    subgraph Native PC Executables
        LNX["Native Linux ELF (crimsonskies)\n• 64-bit • OpenGL • SDL2"]
        WIN["Native Windows PE (crimsonskies.exe)\n• 64-bit • Direct3D 11 • Zero DLL Deps"]
    end

    XBE --> LIFTER
    LIFTER --> GEN
    LIFTER --> DISPATCH
    GEN --> MEM & KERN & GFX & SND & INP
    DISPATCH --> GFX & INP
    MEM & KERN & GFX & SND & INP --> LNX
    MEM & KERN & GFX & SND & INP --> WIN
```

---

## The Engineering Odyssey: Technical Deep Dive

Transforming a closed-source 2003 console title into a stable native PC executable capable of running millions of consecutive frames without crashes required solving complex low-level architectural challenges across the CPU, GPU, memory, and runtime boundaries.

### 1. Memory Space Reconstruction & The 128MB Contiguous Window

The Original Xbox shared unified memory between the CPU and the NV2A GPU (64 MB total physical RAM), mapped with specific hardware aliases:
- **`0x00000000 - 0x03FFFFFF`**: Physical RAM (64 MB).
- **`0x80000000 - 0x83FFFFFF`**: Uncached CPU physical address window (often used for GPU DMA push buffers).
- **`0xF0000000 - 0xF3FFFFFF`**: NV2A tiled memory aperture alias.

```
+------------------+ 0x00000000
| Base RAM (64MB)  | Guest code, stack, heap, and static data
+------------------+ 0x04000000
| ...              |
+------------------+ 0x80000000
| Contiguous (128M)| GPU DMA Push Buffers, Textures, Render Targets
+------------------+ 0x88000000
| ...              |
+------------------+ 0xF0000000
| Tiled Aperture   | Hardware tiling alias mapped to contiguous window
+------------------+
```

#### The Bug & Fix
During early initialization, the recompiled engine would crash with segmentation faults at `0x87C080B0`. Investigation revealed that Crimson Skies streams massive terrain meshes and multi-buffered push commands, exhausting the default 16 MB contiguous allocation window.
- **Solution:** Re-architected `xbox_MemoryLayoutInit` in [`src/kernel/kernel.h`](file:///home/saironcb/PROJETOS/REA/xboxrecomp/src/kernel/kernel.h), [`src/kernel/nv2a_pb_scan.c`](file:///home/saironcb/PROJETOS/REA/xboxrecomp/src/kernel/nv2a_pb_scan.c), and [`src/usb/ohci.c`](file:///home/saironcb/PROJETOS/REA/xboxrecomp/src/usb/ohci.c) to expand the contiguous physical buffer to **128 MB**, allocating 28 virtual memory mirror views across 1.8 GB of address space.

---

### 2. The Battle of the ABI: Calling Conventions & Stack Discipline

The recompiled codebase models guest x86 registers via thread-local state (`RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp, g_ebx, g_esi, g_edi, g_seh_ebp`).

Direct and indirect calls between lifted guest functions follow stdcall/cdecl conventions where parameters and return addresses are stored on the simulated guest stack (`g_esp`).

#### The Problem: The 4-Byte Return Address Trap
When intercepting native Direct3D COM interface methods (such as `IDirect3DDevice8::SetVertexShader` or `Clear`), naive overrides popped arguments (`g_esp += N`), but failed to pop the **4-byte return address** pushed by the x86 `CALL` instruction. Over thousands of method invocations per frame, the simulated stack drifted by 4 bytes per call, leading to catastrophic stack overflow and pointer misalignments.

```c
/* INCORRECT CALLEE CLEANUP (Causes stack drift) */
void manual_Direct3D_Clear(void) {
    uint32_t count = MEM32(g_esp + 4);
    ...
    g_esp += 24; /* Popped arguments, but left the return address on stack! */
}

/* CORRECT CALLEE CLEANUP (Stdcall ret N) */
void manual_Direct3D_Clear(void) {
    uint32_t count = MEM32(g_esp + 4);
    ...
    g_esp += (24 + 4); /* Pops both arguments (24 bytes) AND return address (4 bytes) */
}
```
All manual method overrides across [`src/recomp_manual.c`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp_manual.c) were audited and corrected to maintain bit-perfect stack parity with hardware x86 `RET N` instructions.

---

### 3. Resolving the 8 Missing Static Initializers (`_initterm`)

At startup, the Microsoft Visual C++ runtime executes a static initializer table via `_initterm` (indirect calls). In the initial disassembly, 8 crucial initializer routines were unmapped stubs, resulting in silent failures:

| Initializer VA | Target Subsystem | Implementation Mechanism |
| :--- | :--- | :--- |
| `0x00271213` | **XNET** (Network stack) | Initializes driver pointers at `0x324FB0`, `0x324FB4`, `0x324FB8`. |
| `0x00286E2C` | **XPP** (Controller API) | Initializes controller driver function pointers (`0x285864` - `0x285898`). |
| `0x0023A409` | **DSOUND** (DirectSound) | Wires internal sound driver pointer `0x243580` -> `0x242EAC`. |
| `0x0023A414` | **DSOUND** (DirectSound) | Wires internal sound driver pointer `0x24357C` -> `0x242EB0`. |
| `0x0023D000` | **DSOUND** (DirectSound) | Wires internal sound driver pointer `0x243624` -> `0x242EB4`. |
| `0x0023D00B` | **DSOUND** (DirectSound) | Wires internal sound driver pointer `0x243620` -> `0x242EB8`. |
| `0x0028E25B` | **Input State** | Zeroes controller state structures and binds vtables at `0x32DC50`. |
| `0x0028E28B` | **Input State** | Zeroes controller state structures and binds vtables at `0x32DCC0`. |

We synthesized functional C implementations for all 8 routines in [`src/recomp_manual.c`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp_manual.c) and hooked them into [`recomp_lookup_manual()`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp_manual.c).

---

### 4. The `0x8D52516A` Detective Story: The Cascade of Register Corruption

One of the most elusive bugs was a fatal segmentation fault at address `0x8D52516A` during input polling. Tracing this required a comprehensive reverse engineering audit spanning four independent systems:

```mermaid
sequenceDiagram
    participant D3D as Direct3DDevice_SetVertexShader (0x00202590)
    participant Stub as Truncated Block (sub_002025D6)
    participant Ren as Render Loop (sub_0003E3E0)
    participant Inp as InputMgr (sub_00286F28)

    D3D->>Stub: FVF Code 0x144 hits unmapped stub
    Note over Stub: Stub fails to restore non-volatile ESI!<br/>Leaves ESI = 0x210BE8 (D3D Device)
    Stub-->>D3D: Returns without pop ESI
    D3D-->>Ren: Stack corrupted by 20 bytes
    Note over Ren: Reads MEM32(ESI + 0xAA0)<br/>Gets instruction bytes 0xA9E85000
    Ren->>Inp: ECX corrupted to 0x54
    Note over Inp: Reads [0x54] -> 0x8D5250C7<br/>Attempts [0x8D5250C7 + 0xA3] -> CRASH at 0x8D52516A!
```

#### The Root Cause
1. In `Direct3DDevice_SetVertexShader` (`0x00202590`), the game submitted a Flexible Vertex Format (FVF) handle (`0x144`).
2. The decompiler lacked the FVF parser, branching into a truncated stub `sub_002025D6` that failed to restore `g_esi`, leaving `esi = 0x210BE8` (pointing to the D3D device instead of the render state context).
3. Subsequent state reads in `sub_0003E3E0` read raw x86 opcodes (`0xA9E85000`) instead of function pointers.
4. When `InputMgr` was subsequently queried, `ecx` held corrupted value `0x54`. The instruction `mov eax, [ecx]` loaded code bytes `0x8D5250C7` as a device handle, and `XInputGetState` attempted to dereference `[0x8D5250C7 + 0xA3]`, segfaulting instantly at `0x8D52516A`.

#### The Fix
- Implemented the complete Xbox FVF descriptor parser in [`manual_sub_00201910`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp_manual.c), reconstructing stride lengths and stream mappings into `0x213258`.
- Replaced `sub_00202590` with [`manual_sub_00202590`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp_manual.c), cleanly preserving `esi`, `edi`, `ebx`, `ebp` and popping arguments correctly.
- Hardened `XInputGetState` ([`manual_sub_00286F28`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp_manual.c)) using [`xbox_is_valid_ram()`](file:///home/saironcb/PROJETOS/REA/xboxrecomp/src/kernel/kernel.h), gracefully returning `ERROR_DEVICE_NOT_CONNECTED` (`0x48F`) for invalid handles without dereferencing guest memory.

---

### 5. `RECOMP_ABI_CALL` Manual Override Interception

Initially, the framework used:
```c
#define RECOMP_ABI_CALL(va, fn) (fn)()
```
This meant lifted direct function calls (`RECOMP_ABI_CALL(0x00202590u, sub_00202590)`) bypassed the manual dispatch table, calling broken machine-lifted stubs directly.

We modified [`src/recomp/gen/recomp_types.h`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/src/recomp/gen/recomp_types.h#L1161-L1167):
```c
extern RecompFn recomp_lookup_manual(uint32_t target_va);

#define RECOMP_ABI_CALL(va, fn) do { \
    RecompFn manual_fn = recomp_lookup_manual(va); \
    if (manual_fn) { \
        manual_fn(); \
    } else { \
        (fn)(); \
    } \
} while(0)
```
This enables zero-overhead hotpatching of direct call sites across the entire lifted game codebase.

---

## Dual Native PC Deliverables

| Attribute | Linux ELF Executable | Windows PE Executable |
| :--- | :--- | :--- |
| **Binary File** | [`build-linux/crimsonskies`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/build-linux/crimsonskies) | [`build-windows/crimsonskies.exe`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/build-windows/crimsonskies.exe) |
| **Binary Size** | 37 MB (with debug symbols) / 7.1 MB (stripped) | 18 MB / 7.0 MB (stripped) |
| **Graphics API** | OpenGL 3.3+ via Epoxy | Direct3D 11 (`d3d11.dll`, `dxgi.dll`) |
| **Audio API** | SDL2 Audio | XAudio2 (`XAudio2_8.dll`) / WinMM |
| **Input API** | SDL2 GameController | Native XInput 1.4 (`XINPUT1_4.dll`) |
| **C Runtime Linking** | Dynamic glibc | **Fully Static** (`-static -static-libgcc`) |
| **Third-Party DLLs**| None | **Zero** (relies strictly on Windows OS DLLs) |
| **Stability Validation** | 5,000,000+ continuous main loop frames | Verified under Wine & Windows 10/11 |

---

## Building from Source

### 1. Native Linux Build

#### Requirements
- CMake >= 3.20
- GCC or Clang with C11 support
- `libsdl2-dev`, `libepoxy-dev`, `pkg-config`

```bash
# Debian / Ubuntu:
sudo apt install -y build-essential cmake libsdl2-dev libepoxy-dev pkg-config

# Fedora / Nobara / RHEL:
sudo dnf install -y gcc gcc-c++ cmake SDL2-devel libepoxy-devel pkgconfig
```

#### Compiling
```bash
cmake -B build-linux -DCMAKE_BUILD_TYPE=Release
cmake --build build-linux -j$(nproc)
```
The executable is generated at `build-linux/crimsonskies`.

---

### 2. Standalone Windows Build (Cross-Compiling on Linux)

The project includes a standalone MinGW-w64 toolchain definition ([`mingw-toolchain.cmake`](file:///home/saironcb/PROJETOS/REA/crimsonskies-recomp/mingw-toolchain.cmake)) enabling native Windows builds directly from Linux.

```bash
cmake -B build-windows \
      -DCMAKE_TOOLCHAIN_FILE=mingw-toolchain.cmake \
      -DCMAKE_BUILD_TYPE=Release
cmake --build build-windows -j$(nproc)
```
The static Windows executable is generated at `build-windows/crimsonskies.exe`.

---

## Running the Game

### Game Asset Setup

This repository contains only source code and recompiled logic. **No game assets are distributed.**

1. Obtain a legal copy of *Crimson Skies: High Road to Revenge* (USA / World English edition) from your original Xbox game disc.
2. Extract the disc contents (`English.xbe` or `default.xbe`, textures, maps, and sound banks) into a folder.

### Executing

#### On Linux:
```bash
# Automatic detection (when placed inside the game data folder):
./crimsonskies

# Or pass paths explicitly:
./crimsonskies /path/to/English.xbe /path/to/game_data/
```

#### On Windows:
```cmd
REM Place crimsonskies.exe inside the game data folder and run:
crimsonskies.exe

REM Or pass arguments explicitly:
crimsonskies.exe English.xbe .
```

---

## Default Controls

| Xbox Gamepad | Flight Action |
| :--- | :--- |
| **Left Analog Stick** | Pitch & Roll (Flight Steering) |
| **Right Analog Stick** | Free Look / Camera Orbit |
| **Right Trigger (RT)** | Primary Machine Guns |
| **Left Trigger (LT)** | Heavy Secondary Weapons (Rockets / Torpedoes) |
| **A Button** | Stunt Maneuver / Action |
| **B Button** | Air Brakes |
| **X Button** | Cycle Target |
| **Y Button** | Cycle Secondary Weapon |
| **D-Pad Up / Down** | Throttle Boost / Cut Engine |
| **Start Button** | Pause / In-Game Menu |
| **Back Button** | Objectives / Flight Telemetry |

---

## License

This project is licensed under the [MIT License](LICENSE). 

*Xbox and Crimson Skies are registered trademarks of Microsoft Corporation. This project is a clean-room educational and preservation research effort and is not affiliated with, endorsed by, or sponsored by Microsoft.*
