# 2.4-SDK part 1: new SDK generator (DevTools mod + MDMLGenerator on Dumper-7)

Status: implemented on a worktree branch off `modernize` (d7835a5). Build green. Offline compile test green.
**Not yet run in-game.** Date: 2026-10-10. Design/usage: `docs/SDK_GENERATOR.md`.

## Result
- Dumper-7's analysis (commit dd8fe34) is vendored **unmodified** in `DevTools/vendor/Dumper-7/` and built as the static
  lib `DevTools.Generator` (C++latest) together with our backend `MDMLGenerator` and the `SdkGenerator` facade.
- New mod `DevTools` (C++17, **disabled by default**): ImGui window "DevTools" → "SDK generator" with export lists,
  extra package names, a package picker (after "Analyze") and "Generate SDK". The work runs as one task on the
  **game thread** (`mdml::GameThread::Enqueue`); output goes to `<MDML.dll dir>/SDK-Out/`.
- `MDMLGenerator` writes one header per package against the hand-written core: name-resolved member accessors
  (`__declspec(property)`, lazy + cached, dump offset as logged fallback), bitfields, `enum class` with the reflected
  underlying type, ScriptStructs with real layout + `static_assert`s, functions through a validating call helper,
  hand-written core types win over reflected ones (with layout checks).
- New core files `ModLoader/src/Engine/MDML/GeneratedSupport.{h,cpp}`, `SDKPrologue.inl`, `SDKEpilogue.inl` (exported
  helpers: `ResolveMemberSlot`, `ResolveBitSlot`, `CallFunction`, `CallStaticFunction`, `FindClass`, `FindStruct`,
  `ValidateStructSize`). They use only the public core API (no `mdml::Layout`/`Addresses` access of their own).
- Offline proof: `DevTools.SDKCompileTest` compiles a hand-written sample of the exact output shape against the core
  only and links MDML.lib; `compile_generated.py` compiles any output folder header by header.

## Commits (on top of d7835a5)
| Commit | Content |
|---|---|
| vendor | `DevTools/vendor/Dumper-7/**` + `VENDORED.txt` (unmodified sources) |
| core | `Engine/MDML/GeneratedSupport.*`, prologue/epilogue |
| compile test | `DevTools/tests/SDKCompileTest` (Sample/ + project), root `premake5.lua` group "DevTools", regenerated vcxproj/sln |
| mod + generator | `DevTools/premake5.lua` (2 projects), `src/Generator/*`, `src/DevTools.*`, `src/ExportList.*`, `Config/` |
| script | `compile_generated.py` |
| docs | `docs/SDK_GENERATOR.md` rewritten, stats reset fix |
| report | this file |

## Build
- `premake5 vs2022` + full `MSBuild MDML.sln -t:Rebuild Release x64`: only the baseline 1× C4715 (PresetMod).
- `DevTools.Generator` is C++latest (Dumper-7 needs concepts/`std::format`/ranges). It disables C4244/C4267/C4018/C4305
  for that project only (upstream narrowing warnings; vendored code is not patched; comment in `DevTools/premake5.lua`).
  `DevTools` and the compile test stay C++17. Only std types cross the boundary (`SdkGenerator.h`).
- Files touched outside the new folders: root `premake5.lua` (group "DevTools", `include "DevTools"`), `MDML.sln`,
  `ModLoader/MedievalDynastyModLoader.vcxproj(.filters)` (regenerated: new `Engine/MDML/*` files). No existing core
  source file was edited.

## Offline verification
- `DevTools.SDKCompileTest` (in the solution, `bin/Release-windows-x86_64/Tests/SDKCompileTest.dll`, not deployed):
  builds and links. It exercises accessors (read, write, `+=`, struct member by reference, static array, opaque type,
  bitfield), TArray/TMap members, plain/const/static/out-pointer/out-reference functions, struct by value,
  `ValidateLayout`, `StaticClass`, `mdml::sdk::Cast`, `std::is_empty` of generated classes, a namespaced colliding name.
- `python DevTools/tests/SDKCompileTest/compile_generated.py DevTools/tests/SDKCompileTest/Sample`: 9/9 headers
  compiled, 0 warnings.
- The generator itself cannot run offline (Dumper-7 reads the live process). Its text output was written to match
  `Sample/` (which is "what the generator emits"); the first in-game run plus `compile_generated.py` on the real output
  closes that gap.

## In-game test (owner)
Deploy the whole `bin/Release-windows-x86_64` output (MDML.dll changed: new exports). DevTools lands in
`Content/Mods/DevTools/` with `mod.ini`, `DevTools.dll`, `Example.export`.
1. Enable: in `Content/Mods/DevTools/mod.ini` remove the `;` in front of `[Mod]` and `DLLPath=DevTools.dll`.
   `Config/LoadOrder.ini` must have `DevTools = 1` (the default when the loader appends it).
2. Start the game. Log (`Logs/`): `Mod Created: DevTools`, later `InitializeMod Called For DevTools`, DevTools log
   `DevTools ready. SDK output folder: ...\Binaries\Win64\SDK-Out`.
3. Load a save (BP classes must be loaded). Press F1: window "DevTools" is open (also toggled by its mod button).
4. Tick `DevTools/Example.export (3 packages)` (BP_BaseCharacter, InventoryComponent, ST_InventoryItemsArray), click
   **Generate SDK**. The game freezes for a while (first run: Dumper-7 offset finder + analysis + `GObjects-Dump.txt`).
5. Expected in the DevTools log/window: `[Dumper-7] ...` init lines, `Dumper-7 analysis done in N s. Game:
   Medieval_Dynasty 4.27.2-0+++UE4+Release-4.27`, `MDMLGenerator: generating N package header(s) into ...`, then
   `SDK generated in N s: N header(s), ... -> ...\SDK-Out\4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\MDML-SDK`.
   No `Package not found` lines.
6. Files: `Binaries/Win64/SDK-Out/4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty/` with `GObjects-Dump*.txt` and
   `MDML-SDK/` (`BP_BaseCharacter.hpp`, `InventoryComponent.hpp`, `ST_InventoryItemsArray.hpp`, `Engine.hpp`,
   `CoreUObject.hpp`, ..., `NameCollisions.hpp`, `MDML_SDK.hpp`, `GenerationReport.txt`).
7. Optional: "Package picker" → "Analyze (list packages)" → filter "Engine" → tick → Generate again (second run is fast,
   the analysis is reused; the old `MDML-SDK` folder becomes `MDML-SDK_OLD`).
8. Quit normally. Afterwards set DevTools back to disabled if wanted.
If the game crashes or the analysis fails, send `Logs/` (MDML log + `DevTools-log.txt`).

## Verifying the output (orchestrator)
`python DevTools/tests/SDKCompileTest/compile_generated.py "E:\SteamLibrary\steamapps\common\Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\SDK-Out\4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\MDML-SDK"`
(read-only on that folder; copy it first if preferred). Exit code 0 = every header compiles standalone. Failures list
the first errors per header, full logs stay in a temp folder. Typical expected first-run issues and where to fix them:
a core type with a different 4.27 layout (`MDML_PREDEFINED_CHECK` or a struct `static_assert` fires → fix the core
type or drop it from `PredefinedStructs` in `MDMLGenerator.cpp`), a reflected name colliding with a core name (add it
to the predefined lists), a windows.h macro (add it to `SDKPrologue.inl`/`SDKEpilogue.inl`).

## Decisions taken (owner may veto)
- **D1 Disabled-by-default mechanism**: `DevTools/Config/mod.ini` ships with `[Mod]`/`DLLPath` commented out, so the
  loader does not load the DLL at all. No loader change was needed (ModLoader.cpp is another agent's file). The new
  `Config/LoadOrder.ini` (d7835a5) appends new mods as enabled, so it cannot express "off by default" on its own; with
  the commented `[Mod]`, LoadOrder lists `DevTools = 1` but nothing is loaded until mod.ini is edited. Follow-up: a
  "disabled by default" hint for new mods in LoadOrder (e.g. `[Mod] DefaultEnabled=0` in mod.ini).
- **D2 Threading**: the whole analysis + generation is one game-thread task; the game freezes meanwhile. Safer than
  Dumper-7's usual side thread (GC/streaming cannot interleave). Not chunked.
- **D3 Analysis once per session** (Dumper-7's managers are init-once); later runs reuse it. Restart to see newly
  loaded classes. Dumper-7's own offset finder is used (proven on this game by the reference dump), not MDML's PDB
  addresses.
- **D4 Export-list files**: any `*.export` directly in `Content/Mods/<Mod>/`; one or more names per line, `;`/`#`
  comments; superset of BaseMod's old format. "Save selection" writes into the DevTools folder.
- **D5 Dependencies**: requested packages plus the transitive closure of their struct/class/parameter package
  dependencies are generated (headers must be self-contained).
- **D6 Namespace** `UE4` for generated code (as in the draft). Mixing old `SDK/` headers and new headers in one TU is
  not supported (same names). `UWorld`, `ULevel`, `UGameInstance`, ... are generated (the core stubs drag in the old SDK).
- **D7 Size mismatch on a member** (live `ElementSize`/`ArrayDim` ≠ generated type): accessor disabled, error logged
  once, reads/writes hit a zeroed sink - analogous to the "abort calls on mismatch" decision. Missing property: dump
  offset fallback with warning, as decided.
- **D8 Null object** in an accessor: error once, sink, not cached (avoids a crash, may hide a bug).
- **D9 Function binding**: the declaring class's UFunction (static binding, like Dumper-7 and the old generator);
  interface functions are looked up on the object's class at each call. FUNC_Native flag flipping of the old
  generator is not done.
- **D10 Function validation** compares live params by name/offset/size, count, and `ParmsSize` ≤ buffer (not equality
  with a dump value, so BP locals after the params never matter).
- **D11 Types**: `ClassProperty` → `class UClass*` (core `TSubclassOf` has no default ctor), `SoftClassProperty` →
  `TSoftObjectPtr<UClass>`, unknown property kinds → `TOpaque<Size, Align>`, ByteProperty enums with >1-byte enums →
  `TEnumAsByte<E>`, EnumProperty with a size different from the enum → plain integer.
- **D12 Predefined types**: list in `MDMLGenerator.cpp`; math/containers checked always, CoreTypes.h structs only with
  `MDML_SDK_STRICT_PREDEFINED_CHECKS` (their layouts date from older game builds; struct `static_assert`s still catch
  them when embedded).
- **D13 Windows macros**: pushed/undefined/popped around generated code (`SDKPrologue.inl`/`SDKEpilogue.inl`) instead
  of renaming identifiers.
- **D14 Generated names**: Dumper-7's names unchanged (BP struct members keep their GUID suffix, e.g.
  `Count_5_C53A...`); generator-internal names start with `_mdml_`.
- **D15 C++ standard**: `DevTools.Generator` is C++latest; mod DLL and core stay C++17 until Wave 4.

## Attribution (for README / THIRD_PARTY_LICENSES - not edited here)
Proposed text:
> **Dumper-7** (https://github.com/Encryqed/Dumper-7) by Encryqed/Fischsalat and contributors. Vendored in
> `DevTools/vendor/Dumper-7` (unmodified, see `VENDORED.txt`); MDML's SDK generator (`DevTools/src/Generator`) adapts
> parts of its CppGenerator and main.cpp. Dumper-7 has no license file; the maintainer permits use in open-source
> projects with proper attribution (issue #416). All rights remain with the Dumper-7 authors; commercial use only by
> arrangement with them.

## Follow-ups
- First in-game run + `compile_generated.py` on the real output; fix what it finds (predefined layouts, name clashes).
- DevTools "validation report": resolve every accessor/function of the generated set against the live game and list
  moved/missing/mismatched members (the helpers already log per accessor).
- Migrate BaseMod (GameMod, inventory tools) and the example mods to the new headers; then delete `SDK/` and the old
  exporter; MDML's own uses of generated code (`Actor.cpp`, `GamePlayStatics.cpp`, `KismetSystemLibrary.cpp`) become
  by-name calls.
- Move BaseMod's dev tools (object browser, INI editor, exporter UI, cheats) into DevTools (plan 2.5).
- Loader: "disabled by default" for new mods in LoadOrder.ini instead of the commented `[Mod]` section.
- Split the core's `World.h`/`GameState.h` from the old generated SDK so `UWorld::GWorld` is usable with new headers.
- Core gaps that limit generated code: `TSubclassOf` default ctor, `TSoftClassPtr`, `FFieldPath`, sparse delegates,
  engine allocator for `TArray`/`FString` (out-params returned by the engine are never freed).
- Optional: feed MDML's PDB-resolved GObjects/GNames into Dumper-7 (`ObjectArray::Init(...)`/`FName::Init(...)`
  overrides) instead of its scanners; chunk the job so the game does not freeze.

## Open questions
- Q1: Is freezing the game during generation acceptable, or should the job be chunked / run on a side thread with a GC
  lock (needs `FGCScopeGuard` symbols)?
- Q2: Keep the generated output in `namespace UE4` (mixing with the old SDK impossible) or use a separate namespace
  during the migration?
- Q3: Should generated BP struct member names get friendly aliases without the GUID suffix?
