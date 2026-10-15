# Wave 4 step B: generated SDK everywhere, BaseMod and the old SDK removed (2026-10-15)

Decisions: `docs/MODERNIZATION_PLAN.md`, decisions log 2026-10-14 "Wave 4 step B" and 2026-10-15 "Generated names",
"Wave 4 step B, details taken by default". Step A (public API split): `docs/reports/public-api.md`.

## Generator fixes (found by the owner while looking at the full output)
| What | Before | After | Commit |
|---|---|---|---|
| Blueprint enum entries (`UserDefinedEnum`) | `NewEnumerator0`, `NewEnumerator1`, ... | display names: `EBP_Enum_AIState::Inactive`, `Part_of_Group`, ... | ed3be76 |
| Blueprint struct members (`UserDefinedStruct`) | `Hour_3_AEEFB5B84DEEE8C12F6A3182DE467E7D` | `Hour` (full name kept when the short one collides) | 98b6730 |

The old legacy exporter did both; the Dumper-7 based generator did not. Details in `docs/SDK_GENERATOR.md` (Enums,
ScriptStructs). The display names come from the core (`UE4::GetUserDefinedEnumDisplayNameText`) through a callback,
since the generator library has no MDML headers.

## What changed
### Generated SDK in the repo
- `Loader/SDK/Generated/`: the complete "All packages" output (header-only, ~2500 `<Package>.hpp`), include dir
  `%{IncludeDir.SDK}`. The old `Loader/SDK/src` (809 files), `SDK.lua` and `SDK.lib` (222 MB) are gone, and so are
  `IncludeDir.UE4` / `IncludeDir.MedievalDynasty` / `IncludeDir.BaseMod`.

### Loader core (MDML.dll)
- `src/Engine/UE4.h`: only the hand-written core + forward declarations of `AActor`, `APawn`, `APlayerController`,
  `UWorld`, `ULevel`. Code that needs a generated class includes its package (`GameHooks`, `LogicMods`, `Dumper`,
  `LoaderWindow`, `GameMod` include `"Engine.hpp"`).
- Deleted hand-written engine stubs (they clash with the generated classes): `World.h/.cpp`, `Level.h`, `GameState.h`,
  `GameInstance.h`, `BlueprintFunctionLibrary.h`, `BlueprintGeneratedClass.h`, `UserDefinedStruct.h`,
  `UserDefinedEnum.h/.cpp`. Replaced by `src/Engine/UE4/Engine/EngineHelpers.h/.cpp` (exported):
  `UE4::GetWorld()` (reads GWorld), `UE4::SpawnActor(Class, Transform, Params)`, `UE4::FActorSpawnParameters`,
  `UE4::IsUserDefinedEnum`, `GetUserDefinedEnumDisplayNameText`, `GetUserDefinedEnumDisplayNames`,
  `UE4::GetDataTableRowMap`.
- `FActorSpawnParameters` now has the UE 4.27 layout from the PDB (0x30 bytes: `SpawnCollisionHandlingOverride` at
  0x28, bit flags at 0x29, `NameMode` 0x2A, `ObjectFlags` 0x2C). The old struct still had the pre-4.20
  `bNoCollisionFail` bit; harmless so far because every flag was 0.
- The three old SDK `.cpp` files MDML.dll compiled (`Actor`, `GamePlayStatics`, `KismetSystemLibrary`) are gone. Calls:
  `UGameplayStatics::GetGameInstance(UE4::GetWorld())`, `GetCurrentLevelName(UE4::GetWorld(), false)`,
  `UKismetSystemLibrary::ExecuteConsoleCommand(UE4::GetWorld(), FString, nullptr)` (F1 console),
  `AActor::K2_GetActorLocation/K2_GetActorRotation/GetActorScale3D` (world actor dump).
- `MDML/Memory.h` deleted (`MEM::FindWindow` → private helper in `ImGuiHost.cpp`; `Read`/`Write` → generated members or
  `mdml::mem::LoadField/StoreField`).
- `LoadOrder`: the "BaseMod is always loaded first" rule and its warnings are gone; new mods are appended alphabetically.

### GameMod in the loader API
- `include/MDML/GameMod.h` (in `MDML/MDML.h`) + `src/Mods/GameMod.cpp`, class exported from MDML.dll. Same virtuals and
  `GetINIConfig`/`SetINIConfig` as before. Getters return the generated BP classes, forward-declared (mods include e.g.
  `"BP_WeatherManager.hpp"`); MDML.dll finds the objects by class name (`CastByName`) and the managers by property
  name, so GameMod itself needs no BP header and survives member moves.
- `getMDGameState()` returns the generated `UE4::EMD_GameState` (`Init`, `InitialScreen`, `Menu`, `Loading`, `InGame`,
  `Paused`; were `MD_GameState__*`).
- Renamed: `getCameraManager()` (returned the animals manager) → `getAnimalsManager()`;
  `Utils::ValidateBPObject<T>` → `GameMod::CastByName<T>`. Dropped: the rest of `Utils.h`.

### BaseMod, DevTools, examples
- `Mods/BaseMod` deleted (premake include, project, sources, `ProjectDir.BaseMod`).
- DevTools: `LegacyExporter.*` deleted; its class-function cache/dump moved to `ClassFunctions.h/.cpp`
  (`devtools::classinfo`). Object browser and player tools on `Engine.hpp` (`K2_SetActorLocation/K2_SetActorRotation/
  SetActorScale3D`, `UDataTable::RowStruct` + `UE4::GetDataTableRowMap`, `UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)`).
  The package list of the object browser keeps ticking packages and saving them as `<name>.export`; the legacy "Export",
  "Generate C++ files", "Export BP Structs/Enums" buttons are gone (use the generator: "Rescan" export lists, generate).
  **Give item is back** (player tools → Player Character → Items): item list from `DT_ListOfItems`, ownership names
  from the `E_Ownership` display names at runtime, `UInventoryComponent_C::AddItemToInventory` on the game thread
  (generated: member by name, parameter layout validated against the live UFunction). The inventory list stays off.
- PresetMod: only include changes. TimeWeatherChanger: rewritten on `BP_WeatherManager.hpp` (`weather->CloudDensity = 0`
  instead of searching property offsets, `weather->Time` instead of `M_GetTime()`), and its "Update" buttons now run the
  game functions through `GameThread::Enqueue` (they used to call ProcessEvent from the render thread).

## Checks
- Build (VS 2026, Release x64): MDML.dll, DevTools, PresetMod 0 warnings, 0 errors. Full solution: see the plan.
- `dumpbin /exports MDML.dll`: `GameMod` (class, vtable, getters), `UE4::GetWorld`, `UE4::SpawnActor`,
  `UE4::GetDataTableRowMap`, `UE4::IsUserDefinedEnum`, `UE4::GetUserDefinedEnumDisplayName*`.
- `check_layout.py`: 165 constants, 0 mismatches.
- `compile_generated.py` on the first full output (before the name fixes): 940 of 2523 headers checked, 0 errors,
  0 warnings (run stopped because the output was going to be regenerated).
- `compile_generated.py` on the committed output (`Loader/SDK/Generated`, 01:41-02:5x, 16 jobs): **2518/2524**, 0 warnings.
  The 6 failures had two causes, both fixed afterwards:
  - `BTService_SetNPCAIState.hpp`, `UI_Slot_StoreType.hpp` (+ `MDML_SDK.hpp`): a Blueprint member named like its enum
    type (`E_DailyCycle E_DailyCycle`, `E_ShopType E_ShopType`) hides the type in the class → generator renames such
    members `<Name>_0`. Needs a regeneration.
  - `MediaUtils.hpp`, `ImgMedia.hpp`, `MediaAssets.hpp`: `FMediaPlayerOptions` alignment 4 instead of 8 because the core's
    `FTimespan`/`FDateTime` were `unsigned char[8]` → now `int64_t Ticks` like UE (PDB-checked), and their predefined
    layout check is always on. Rechecked: the three headers compile.

## Deploy notes
- The game's `Content/Mods/BaseMod` must go (move to the backup, owner decision): BaseMod.dll imports symbols that
  MDML.dll no longer exports, so it would fail to load. Its `LoadOrder.ini` entry stays as "not installed" (info only).
- Deploy MDML.dll/.pdb, xinput1_3.dll, DevTools.dll/.pdb; configs untouched.

## In-game test (owner)
1. Start: log as before ("Hooks initialized", "Engine layout verified", core mods DevTools (+ examples if installed)
   initialized), **no** "BaseMod" lines, no load error.
2. F1 opens/closes; Core Mods list; F1 console: `stat fps` executes (UKismetSystemLibrary path).
3. F1 dumps: "World actors" dump has sensible locations (generated `K2_GetActorLocation`).
4. Load a save: logic mods still spawn (`UE4::SpawnActor`, new `FActorSpawnParameters`) and get PostBeginPlay.
5. DevTools: object browser scan, actor transform edit (position/rotation/scale), class "Load functions", data table
   rows (DT_ListOfItems); player tools "Find player character" + "List components"; package list: tick a few, "Save
   selected to file", "Rescan" in the DevTools window shows the list. Player tools → Items: "Load items", pick an item,
   "Add" → it is in the inventory (log line "Added ...").
6. Generate SDK once more: Blueprint enums have real names (`BP_Enum_AIState.hpp`: `Inactive`, ...), `ST_Time.hpp` has
   `Hour`, `Minute`, ...
7. TimeWeatherChanger (only if installed): toggles work, "Update" in Instant Updater changes the time without a crash.
8. Quit cleanly, logs written.

## Owner test 2026-10-15
Everything worked except: the cheat menu button (see above) and one "Missing End()" from ImGui after
"Exception thrown in DrawImGui from mod DevTools" (most likely an access violation reading a destroyed object of the
object browser snapshot on the render thread). Fixed: `UE4::IsLiveObject` (core, exported; SEH-safe GObjects slot +
PendingKill/Unreachable check) guards the object browser lists and every queued actor call in DevTools, and the F1
host wraps the DrawImGui dispatch in ImGui's error recovery (`ErrorRecoveryStoreState`/`TryToRecoverState`), so a mod
that throws mid-window cannot leave ImGui unbalanced.

## Open points
- `Tools/ModManager` (separate session) still special-cases BaseMod (load order sort, release zip, install defaults).
- Done later on 2026-10-15 (DevTools, needs the owner's test): inventory list (player tools → Player Character →
  Inventory → "Read inventory", reads `UInventoryComponent_C::Inventory_New` in place on the game thread);
  `EnableCheatsMenu=1` shows "Cheat menu" → "Open cheat menu", which calls the game's `PC_Player_C::CheatMenu()`
  (experimental; **owner test: called, but no menu appears**, probably the game checks for a cheat build or the widget class is missing in this version); generator shortens Blueprint timeline member names (needs a regeneration).
- `Config/NoOverwrite.ini` still lists the old BaseMod files (harmless).
- The per-header compile check of the full output takes 1-2 h (idea: PCH mode in `compile_generated.py`).
