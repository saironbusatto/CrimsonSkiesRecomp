# Crimson Skies: High Road to Revenge — Native PC Port (Static Recompilation)

[![Platform](https://img.shields.io/badge/platform-Linux%20%7C%20Windows-blue.svg)](#)
[![Language](https://img.shields.io/badge/language-C11-orange.svg)](#)
[![Architecture](https://img.shields.io/badge/arch-x86__64-brightgreen.svg)](#)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](#)

A high-performance, standalone native PC recompilation of **Crimson Skies: High Road to Revenge** (Original Xbox, 2003, Title ID `0x4D530021`).

Rather than running through traditional hardware virtualization or heavy emulation layers, this project translates the original Xbox x86 machine code into portable C ahead-of-time (static recompilation) and links it directly against modern native platform graphics, audio, and kernel abstractions.

---

## Highlights & Features

- **Dual-Platform Native Support:** Standalone 64-bit native binaries for **Linux** (`crimsonskies` ELF) and **Windows** (`crimsonskies.exe` PE).
- **Zero Third-Party Runtime DLLs:** The Windows binary is statically linked against the C/POSIX runtime (`-static -static-libgcc`), depending exclusively on standard Windows system DLLs (`d3d11.dll`, `dxgi.dll`, `XINPUT1_4.dll`, `MFPlat.dll`, `msvcrt.dll`).
- **High-Fidelity Graphics Pipeline:**
  - **Windows:** Native Direct3D 11 backend with complete NV2A push buffer decoding and hardware vertex shader support.
  - **Linux:** Native OpenGL / Epoxy rendering pipeline.
  - Dynamic FVF (Flexible Vertex Format) decoding with real-time stride resolution and vertex buffer cache synchronization.
- **Low-Latency Audio:** Emulated MCPX APU voice processor and DirectSound software mixer driving XAudio2 (Windows) and SDL2 Audio (Linux).
- **Modern Controller Support:** Full analog gamepad support via standard XInput 1.4 on Windows and SDL2 GameController on Linux.
- **Robust Memory Management:**
  - 128 MB physical contiguous memory aperture for seamless NV2A push buffer allocation.
  - Hardware-accurate Xbox memory mirroring and TIB emulation.
  - Structured Exception Handling (SEH) and POSIX signal trampolines for fault recovery.
- **Automatic English Asset Detection:** Automatically detects and loads `English.xbe` or `default.xbe` from the current working directory or designated game folder.

---

## Project Structure

```
├── CMakeLists.txt              # Cross-platform CMake build system
├── mingw-toolchain.cmake       # MinGW-w64 cross-compilation toolchain file
├── README.md                   # Project documentation
├── src/
│   ├── main.c                  # Unified cross-platform entry point (Linux & Win32)
│   ├── recomp_manual.c         # Hardware overrides, FVF parser, and static initializers
│   └── recomp/
│       ├── recomp_dispatch.h   # Binary-search ICALL function dispatcher
│       └── gen/                # Statically recompiled x86 C translation units
│           ├── recomp_0000.c .. recomp_0011.c
│           ├── recomp_dispatch.c
│           ├── recomp_funcs.h
│           └── recomp_types.h  # Register model (EAX..EDI, XMM, EFLAGS) and memory macros
└── xboxrecomp/                 # Embedded Xbox runtime toolkit
    ├── CMakeLists.txt
    ├── include/                # Public headers
    └── src/
        ├── apu/                # MCPX APU hardware voice emulation
        ├── audio/              # DirectSound translation & WMA decoding
        ├── d3d/                # D3D8 -> D3D11 / OpenGL compatibility
        ├── input/              # Xbox Pad -> XInput / SDL2 translation
        ├── kernel/             # Xbox kernel replacement (147 system thunks, memory layout)
        ├── nv2a/               # NV2A register handlers & push buffer execution
        ├── platform/           # Platform abstraction (threading, synchronization, timing)
        ├── usb/                # MCPX OHCI host controller emulation
        └── video/              # Bink & Media Foundation video playback
```

---

## Building from Source

### Prerequisites

#### Linux (Debian / Ubuntu / Fedora / Nobara / Arch)
- CMake 3.20 or newer
- GCC or Clang with C11 support
- `libsdl2-dev`
- `libepoxy-dev`
- `pkg-config`

```bash
# On Fedora / RHEL / Nobara:
sudo dnf install -y gcc gcc-c++ cmake SDL2-devel libepoxy-devel pkgconfig

# On Ubuntu / Debian:
sudo apt install -y build-essential cmake libsdl2-dev libepoxy-dev pkg-config
```

#### Windows (Native MSVC or MinGW)
- Visual Studio 2022 (with "Desktop development with C++") OR MinGW-w64 toolchain.

---

### Build Instructions

#### 1. Building Native Linux Binary

```bash
cmake -B build-linux -DCMAKE_BUILD_TYPE=Release
cmake --build build-linux -j$(nproc)
```
The compiled binary will be located at `build-linux/crimsonskies`.

#### 2. Cross-Compiling Windows Binary on Linux (MinGW-w64)

```bash
cmake -B build-windows \
      -DCMAKE_TOOLCHAIN_FILE=mingw-toolchain.cmake \
      -DCMAKE_BUILD_TYPE=Release
cmake --build build-windows -j$(nproc)
```
The standalone executable will be located at `build-windows/crimsonskies.exe`.

---

## Running the Game

### Game Assets

This repository contains only the statically recompiled source code and runtime engine. **No copyrighted assets or game files are included.**

To run the game, obtain a legally dumped copy of *Crimson Skies: High Road to Revenge* (USA / World English edition) from your original Xbox disc. Extract the disc filesystem (containing `English.xbe` or `default.xbe`, sound banks, textures, and mission archives) into your game data directory.

### Launching

#### Linux
```bash
./crimsonskies /path/to/English.xbe /path/to/game_data_directory/
```
If you place `crimsonskies` directly in your game data folder containing `English.xbe`, simply run:
```bash
./crimsonskies
```

#### Windows
```cmd
crimsonskies.exe English.xbe .
```
Or place `crimsonskies.exe` inside your game data directory and double-click to launch.

---

## Controls

The game automatically maps standard Xbox controllers:
- **Left Stick:** Pitch & Roll / Flight Steering
- **Right Stick:** Free Look / Camera
- **Right Trigger (RT):** Primary Fire / Machine Guns
- **Left Trigger (LT):** Secondary Fire / Heavy Weapons
- **A Button:** Action / Stunt execution
- **B Button:** Air Brake
- **X Button:** Target Selection
- **Y Button:** Weapon Selection
- **Start:** Pause / Options Menu
- **Back:** Mission Briefing / Objectives

---

## Technical Architecture & Fixes

1. **NV2A Contiguous Physical Memory Expansion:**
   - Standard Xbox titles require significant contiguous memory for push buffer DMA. The memory management subsystem has been configured with an expanded 128 MB physical window (`0x80000000`), completely resolving out-of-memory faults during complex mesh streaming.
2. **Dynamic Flexible Vertex Format (FVF) Decoding:**
   - A dedicated parser (`manual_sub_00201910` and `manual_sub_00202590`) reconstructs Xbox vertex format descriptors (`D3DFVF_XYZ`, `D3DFVF_NORMAL`, `D3DFVF_DIFFUSE`, `D3DFVF_TEX1`..`4`) into modern input element layouts on the fly, preserving non-volatile CPU registers across shader transitions.
3. **Stdcall ABI Alignment:**
   - Direct and indirect method dispatchers handle accurate callee stack cleanup (`ret N` emitting `esp += N + 4`) to ensure perfect stack consistency across millions of recompiled function calls.
4. **Input Boundary Sanitization:**
   - `XInputGetState` safely validates device handles against guest memory boundaries via `xbox_is_valid_ram()`, returning clean `ERROR_DEVICE_NOT_CONNECTED` codes for inactive ports without host memory corruption.

---

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details. Xbox is a registered trademark of Microsoft Corporation. This project is an independent clean-room re-engineering effort and is not affiliated with or endorsed by Microsoft.
