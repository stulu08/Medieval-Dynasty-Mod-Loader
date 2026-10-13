# C# scripting for MDML mods — design (draft)

Status: **draft, 2026-10-13; runtime decisions taken (see §7).** Owner decision of the same day: mods get **C# instead of Lua**. This document compares the
two runtime options the owner offered, proposes an architecture and ends with open questions (CS-1…). Nothing is
implemented; Phase 2 (cleanup) comes first.

The Lua documents stay as reference: `docs/design/lua-scripting.md` sections 6.6 (engine prerequisites), 7 (UFunction
hooks), 8 (threading) and 10 (error isolation) are language-independent and apply unchanged. The Lua spike
(`Loader/Scripting/`) is not developed further (see CS-7).

## 1. Goals
- Mods written in C#: typed access to game objects, IntelliSense, debugger (attach VS to the game process).
- Typed C# SDK generated from the same reflection data as the C++ SDK (MDMLGenerator gets a second backend).
- Same safety model as the C++ SDK: member offsets resolved by property name at runtime, ProcessEvent wrappers
  validate the live UFunction (decisions log 2026-10-09).
- Per-mod hot reload (unload/reload a mod's assembly without restarting the game).
- C++ core mods keep working; C# is an additional mod type.

Non-goals for the first version: ImGui from C# (later), Blueprint mods written in C#, multiplayer.

## 2. Runtime options (the owner's own libraries)

| | **A: SMMR** (`C:\dev\Skeleton\Dependencies\SMMR`) | **B: Carbide** (`C:\dev\Carbide`) |
|---|---|---|
| Runtime | Mono (embedding API `mono_*`), framework extracted from SEngine's `Scripting/Managed` | .NET (CoreCLR) via `hostfxr` + `nethost` headers (`Calcium/Platform/corehost`) |
| Maturity | Works; used in SEngine and the Skeleton project. ~2000 lines: `AssemblyManager`, `ScriptAssembly`, `Mono::Class/Method`, `MonoObjectInstance`, `ManagedProperty` | **Very early** (owner: "noch am Anfang"). ~970 lines: native side **Calcium** loads hostfxr, initializes the runtime from a `runtimeconfig.json`, gets `[UnmanagedCallersOnly]` function pointers from the managed side **Silicon**; the `Binds/*` headers (Class, Method, Object, …) are empty stubs so far |
| C# version | Mono's C# level (old, ~C# 7–9 depending on the build) | Current C# (12/13/14) |
| Hot reload | Domain unload/reload (Mono domains) | Collectible `AssemblyLoadContext` per mod (managed side) |
| Shipping | Mono runtime folder (`lib`, `etc`) next to the loader, ~15–20 MB | Either a .NET runtime installed by the user (`FindCoreHostDirectory`) or a shipped copy (~70 MB) |
| Future | Mono is effectively only maintained for mobile/WASM upstream | The owner's planned replacement for Mono in SEngine |
| Debugging | Mono soft debugger (needs extra setup) | VS "Attach → Managed (.NET Core)" works out of the box |

Notes found while reviewing:
- Carbide's `Silicon/Carbide.runtimeconfig.json` targets **net8.0**. **.NET 8 support ends 2026-11-10** (in four
  weeks); .NET 10 is the current LTS and is installed on this machine (10.0.3) → target **net10.0**.
- `Carbide/Carbide/Calcium` is an older duplicate of `Carbide/Calcium` (no `Source/`, stray `SiliconRuntime.cpp` in
  `Include/`) — cleanup for the Carbide repo, not for MDML.
- The SMMR premake expects `%{MonoPath}`/`%{MonoLib}` from the including workspace.

### Recommendation: B (Carbide, .NET 10)
The calls MDML needs from C# are few and fixed (find object, read/write property by name, ProcessEvent, hook
registration, log, game-thread enqueue). With .NET hosting the idiomatic way is **function-pointer tables**:
native passes a struct of C function pointers to an `[UnmanagedCallersOnly]` init method, managed code calls them via
`delegate* unmanaged<…>`. That needs only what Carbide already has (hostfxr bootstrap + "get function pointer"), not
the unfinished reflective `Binds/*` layer. So Carbide's early state matters less for MDML, MDML becomes a real
use case that drives Carbide, and the effort is not spent on Mono that SEngine wants to leave anyway.
Fallback if Carbide blocks: SMMR works today; the MDML-side interop design (§4) stays the same, only the bootstrap changes.

## 3. Where it lives
```
Dependencies/Carbide/            ← Carbide (Calcium native + Silicon managed); how it gets here: CS-2
Loader/ModLoader/src/Managed/    ← host glue: start runtime, native function table, mod assembly loading
Loader/Managed/MDML.Core/        ← C# assembly (csproj): interop, UObject wrapper base, mod base class, hooks API
Loader/Managed/MDML.SDK/         ← generated C# SDK (not committed; produced by DevTools like the C++ SDK)
Mods/Examples/HelloCSharp/       ← sample C# mod
```
Runtime output next to the game (`bin/.../Managed/`): `MDML.Core.dll`, `Silicon.dll`, `*.runtimeconfig.json`.

## 4. Architecture
1. **Bootstrap** (init thread, after engine init): Calcium loads hostfxr (installed runtime or shipped copy, CS-3),
   initializes .NET from `MDML.Core.runtimeconfig.json`, gets `MDML.Core.Host.Initialize` (`[UnmanagedCallersOnly]`)
   and calls it with a pointer to the **native API table** (versioned struct of function pointers).
2. **Native API table** (C ABI, exported by MDML.dll, also usable by other languages later):
   `FindObject`, `FindClass`, `GetPropertyOffset(class, name)`, `GetFunction(class, name)`, `ProcessEvent`,
   `GetName/GetClass/GetOuter`, `IsValid` (GObjects index + serial), `Log`, `EnqueueGameThread`, `AddHook/RemoveHook`
   (UFunction hooks from `docs/design/ufunction-hooks.md`).
3. **Managed side** (`MDML.Core`): `UObject` wrapper = handle (pointer + object index + serial number, checked before
   every access, so a destroyed object throws instead of crashing); property access via cached offsets; `ModBase`
   with `OnLoad/OnUnload/OnTick/OnBeginPlay`; exceptions are caught at every native→managed boundary and logged
   with the mod name (a throwing mod is disabled, the game keeps running).
4. **Generated C# SDK**: MDMLGenerator gets a C# backend: one `.cs` per package, classes deriving from `UObject`
   with properties `get => ReadAt<T>(Offset("Health"))`, function wrappers that pack a params struct
   (`[StructLayout(Explicit)]`) and call ProcessEvent after validating ParamsSize — same rules as the C++ output.
5. **Two distinct mod kinds** (owner requirement 2026-10-13): **native mods** (C++ DLL, today's core mods) and
   **managed mods** (.NET assembly) are separate mod types everywhere, never guessed silently:
   - `mod.ini` declares the kind explicitly: `Type = Native` or `Type = Managed` (missing → `Native`, so existing mods
     keep working). The loader cross-checks the DLL (PE CLR header present ⇔ managed) and refuses a mismatch with a
     clear log line instead of loading it the wrong way.
   - Separate loading paths: native → `LoadLibraryW` (as today); managed → its own **collectible
     `AssemblyLoadContext`** (unload = remove hooks, drop handles, unload context). Never `LoadLibraryW` on a managed DLL.
   - Shown separately: F1 window / ModManager list the kind (badge or separate section), logs prefix
     `[native]`/`[managed]`, `Config/LoadOrder.ini` keeps one order for both kinds (a managed mod can depend on load
     order like any other mod).
   - If the .NET runtime fails to start, only managed mods are disabled (with a notice); native mods load normally.
6. **Threading**: managed code that touches UObjects only runs on the game thread (Tick drain, hooks); the GC runs
   concurrently but never touches native memory. Same rules as `lua-scripting.md` §8.

## 5. UI: SDG/Controls (decided CS-8: copy + adapt, SEngine as style inspiration)
`C:\dev\Skeleton\Dependencies\SDG\src\Stulu\SDG\Controls\*.h` (Base/Primitive/Vector/Color controls, DragDrop) are
header-only ImGui helpers. Reuse in MDML's F1 window and DevTools:
- `BaseControls.h` includes `Stulu/SDG/Application.h`, `Style.h`, `Icons.h` but the controls only use ImGui itself →
  the include of `Application.h` can be dropped; `Style`/`Icons` are needed only where icon glyphs are used.
- Needs `magic_enum` (PrimitivControls) and `misc/cpp/imgui_stdlib`.
- ImGui versions differ: SDG 1.91.9, MDML 1.89.2 (Wave 4 plans 1.92.9b-docking) → adopt the controls together with
  the ImGui upgrade to avoid porting twice.
- Later the same controls can back a C# UI API (CS-8).

## 6. Phasing (after Phase 2)
1. Spike (isolated like the Lua spike): Calcium boots .NET 10 inside a test exe, native table, managed mod with
   `OnLoad`, collectible ALC unload/reload, exception isolation. Pass criteria written into the spike report.
2. Loader integration with a mock reflection layer → then real UObjects (needs the engine prerequisites from
   `lua-scripting.md` §6.6).
3. C# backend for MDMLGenerator + sample mod.
4. UFunction hooks from C#; hot reload in-game; ImGui from C#.

## 7. Decisions and open questions
Decided by the owner 2026-10-13:
- **CS-1** ☑ C# instead of Lua, on **Carbide/.NET** (SMMR/Mono only as fallback).
- **CS-2** ☑ Carbide comes in as a **git submodule** at `Dependencies/Carbide`; Carbide itself is developed in its own
  repo (`C:\dev\Carbide`), MDML pulls updates.
- **CS-3** ☑ **Ship a private .NET runtime** next to the loader (no install needed by players, ~70 MB). Calcium's host
  lookup must then point at the shipped folder (`Managed/dotnet/host/fxr/<ver>/hostfxr.dll`), never at a
  system-wide install, and never at the process working directory.
- **CS-5** ☑ C# mods ship **compiled DLLs** (normal C# project); no Roslyn in the game.
- **CS-7** ☑ Lua spike **stays as reference** in `Loader/Scripting/`, not developed further.
- **CS-8** ☑ SDG/Controls are **copied into MDML and adapted** (own code from then on, `Loader/ModLoader/src/UI/Controls/`),
  with SEngine's editor UI as inspiration for a nicer F1 window/DevTools look (style, icon font, layout). Best done
  together with the ImGui upgrade (Wave 4).
- **CS-10** ☑ Native (C++) and managed (.NET) mods are **two distinct mod kinds**, clearly distinguishable (§4.5).

Default taken (owner may veto):
- **CS-4** Target framework **net10.0** (net8.0 support ends 2026-11-10). Carbide's runtimeconfig needs the bump.

Still open:
- **CS-6** Generated C# SDK: one shared `MDML.SDK.dll` built by DevTools for all mods, or each mod compiles the
  packages it needs (export lists, like the C++ SDK)?
- **CS-9** Name of the managed assemblies/namespaces (`MDML.Core`, `MDML.SDK`, `MDML.Mods`)?
