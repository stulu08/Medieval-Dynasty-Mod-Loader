# Wave 3C: Mods (BaseMod/DevTools split, typos, 3A/3D follow-ups)

Based on `modernize` @ 91f8e85. Full solution builds **warning-free** (the C4715 in PresetMod is fixed, so the expected
warning count is now 0). `bin/Release-windows-x86_64` file list identical to the baseline (37 files). **Not tested in-game.**

## What moved BaseMod -> DevTools

| Feature | Now in |
|---|---|
| Object browser (actors, classes, blueprints, data tables, packages), class/function info | `DevTools/src/ObjectBrowser.*` |
| Old SDK exporter `Utils::Export` + its UI (export selected, BP structs/enums, `.export` profile save/load) | `LegacyExporter.*` (code), UI inside the Object Browser "Packages" section |
| `GetAllClassFunctions`, `DumpClassInfo` | `LegacyExporter.*` |
| `Utils::Gui` (FilterSearch, ClassInfo, ActorTransformEdit) | `ObjectBrowser.*` (`devtools::gui`) |
| INI browser + INI editor (TextEditor) | `IniBrowser.*` |
| Dev-build flag swap, "Hooks" panel, player transform, components, items data table | `PlayerTools.*` |
| Give-item / inventory list (stale, disabled) | `ItemTools.cpp` (old code under `#if 0`, placeholder text) |
| `M_SetCheats`/`EnableCheatsMenu` | warning only (`PlayerTools::OnGameState`), key now in DevTools' `mod.ini [Config]` |

BaseMod keeps `GameMod` (+ managers, `GetINIConfig/SetINIConfig`), `Utils.h` (ValidateBPObject, FindDataTable, ...) and the
move-to-front of `CoreMods`. It has no UI and no events any more (`EventsEnabled::None`), version 1.2.0.
`DevTools.dll` now links `SDK` (AActor/UDataTable/UGameplayStatics are hybrid old-SDK classes); the build output has no new files.

Shared helpers: `Gui::UE4ActorTransformEdit` is not used by any other mod, so it moved. The few helpers the tools need
(`SaveString`, ...) are copied into `DevTools/src/Util.h` (BaseMod cannot be included).

Config changes: BaseMod `mod.ini` loses `[Config] EnableCheatsMenu`; DevTools `mod.ini` gets `[Config] DevBuildFlags=1`
(default 1 = old behaviour, also when the key is missing from an installed mod.ini) and `EnableCheatsMenu=0`.

## Renamed API / removed old names (hard, no aliases)
`OnModInitilize` -> `OnModInitialize` (GameMod, BaseMod, both examples), `GetAllClasssFunctions` -> `GetAllClassFunctions`,
`PresetMod` `DelatTime` -> `DeltaTime`, generated exporter text `uknownData_` -> `unknownData_`, `Defenition` -> `Definition`.
Removed from `Mods/`: `TUObjectArray`, `GetAsTUArray`, `IsChunkedArray`, `GetAsChunckArray`, every `GetChildren()` (now
`GetChildProperties()`), `INI.h`, `IncludeDir.INI` (all four premake files). `git grep` over `Mods/` is clean.
`INI` (Dependencies) is still used by ModLoader/ModManager, so it is not removed.

## 3A/3D follow-ups
- `GetINIConfig/SetINIConfig` use `mdml::platform::IniFile` with explicit sections; `GameMod.h` includes `Platform/IniFile.h`. A missing file still logs a warning and returns the default.
- GObjects loops use `UObject::ForEachObject` (object scan, `GetAllClassFunctions`, BP enums/structs).
- `Modding.md` updated (INI comment rule, `OnModInitialize`, `PersistentObjectFile`, namespaces, threading, DevTools).

## Threading audit
Render thread (`DrawImGui`) work in DevTools, per tool:
- Object scan, class-function scan, dump, "count objects in package", all exports, actor transform read/write, player lookup,
  components (`K2_GetComponentsByClass`), build-flag query (`ProcessEvent`), DT_ListOfItems read, dev-build swap (`StaticFindObject`, Func writes):
  all via `GameThread::Enqueue`; results come back through mutex-protected snapshots.
- Still on the render thread: read-only reflection browsing of objects held in the snapshot (names, class members, DataTable rows). The snapshot is dropped on `InitGameState`; a stale pointer between a GC and the next level change is a residual risk (as before).
- The old exporter ran in `std::async` threads next to the game (and a parallel `for_each` with a racy counter). It now runs sequentially on the game thread: **the game freezes during an export** (like the new generator).
- The SDK generator (Dumper-7) already ran on the game thread.
- Examples (not changed beyond renames): `TimeWeatherChanger::DrawImGui` calls weather manager functions and writes memory from the render thread; `PresetMod` has no UE calls. Follow-up: route TWC's buttons through `GameThread::Enqueue`.

## Behaviour changes (in-game test)
1. Dev-build flag swap happens only while **DevTools is enabled** (was always on via BaseMod). With DevTools disabled the game is no longer "development build".
2. Object Browser starts empty: press "Scan objects". Class functions: press "Load functions" in a class's Functions header. Transform editor refreshes ~2x/s.
3. Exports write to `<MDML.dll folder>/Export`, `/Dump` and `<profile>.export` (explicit path; same place as before because the engine cwd is Binaries/Win64).
4. INI browser lists files once (button "Rescan").
Test: enable DevTools, F1 -> DevTools window; Views menu -> Object Browser -> Scan; open an actor -> Transform, change a value; Packages -> Generate C++ files on a small package; INI Browser open/save a file; "Player and cheats" -> Find player character, List components, Query build flags; log shows "Dev-build flags swapped". With DevTools disabled: BaseMod loads, TimeWeatherChanger works (INI values load, checkboxes save).

## Small fixes
PresetMod `DrawImGui` (C4715, `End` pairing); `FindDataTable` double lookup and caching of misses; INI browser Begin/End/EndMenuBar mismatches (C28); data tables not cleared on reload (C27); `ImGui::Text(var)` format issues (C29) and `%d` of pointers; null checks for `StaticFindObject` results (B13), `(DWORD64)0` casts; `ScriptStruct` null `super`; `GetAllClassFunctions` now checks `IsA(UFunction)` (the old cast of every object with that outer caused the `_GEN_VARIABLE` crash workaround); inverted "Num Parms" text in function info.

## Follow-ups for the orchestrator
- CLAUDE.md layout rows for BaseMod/DevTools (BaseMod no longer contains the exporter; DevTools hosts the tools) and expected warnings (now 0).
- Plan 2.5: tick the split; Wave 4/2.4: port ItemTools to the new SDK and drop `SDK` from DevTools links.
- `Runtime/Dumper.*` (F1 window dumps) was not touched.
- TWC render-thread UE calls (above).

## Open questions
1. `UI_CheatMenu` override asset + `[Overrides]` stayed in `BaseMod/Config` to keep the bin list and installed `mod.ini` valid. Move to DevTools (changes bin paths, needs the game copy's mod.ini touched)?
2. Should `DevBuildFlags` default to 1 (old behaviour) or 0?
3. BaseMod now has no events at all; keep it as a library-only mod or fold `GameMod` into the loader's public API later?
