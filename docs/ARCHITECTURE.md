# MDML architecture

How the Medieval Dynasty Mod Loader is put together (state: Wave 4 step B + mod-components phase 1, 2026-10-15). For the folder table and
build commands see `CLAUDE.md`; for the history of each part, `docs/MODERNIZATION_PLAN.md` and `docs/reports/`.

## Processes and binaries
```
Medieval_Dynasty-Win64-Shipping.exe
 └─ xinput1_3.dll   (Loader/Proxy)       proxy DLL the game loads itself; forwards XInput, loads MDML.dll
     └─ MDML.dll    (Loader/ModLoader)   the loader: hooks, engine core, mod host, F1 window, GameMod
         └─ Content/Mods/<Mod>/mod.ini   ONE mod per folder, up to three components declared in the mod.ini:
              [Core]       <Mod>.dll       native DLL (C++), e.g. DevTools, examples
              [Blueprint]  *.uasset        Blueprint actor spawned by MDML (was "logic mod")
              [Overwrite]  <Folder>        hard links over loose game files
```
`Tools/ModManager` is a separate desktop app (install/enable mods, load order); it does not run inside the game.

## Layers inside MDML.dll (`Loader/ModLoader/src`, namespaces `mdml::*`)
| Layer | Folder | Job |
|---|---|---|
| Bootstrap | `Bootstrap/` | `DllMain`, startup thread: config, log, symbols, hooks, mods, UI (`mdml::runtime::Startup`) |
| Platform | `Platform/` | OS-level helpers: MinHook wrapper (`Hooks`), `IniFile` (mINI), logger, PDB `SymbolResolver`, AOB `Pattern` |
| Engine core | `Engine/` | hand-written UE 4.27 core: `UObject`, `UClass`, `FProperty`, `FName`, containers, math, `UE_LOG`; `EngineAddresses` (functions/globals from PDB or patterns), `EngineLayout` (PDB-checked offsets), `EngineHelpers` (`GetWorld`, `SpawnActor`, ...), `MDML/GeneratedSupport` (runtime for the generated SDK). Exported (`MDML_ENGINE_API`) |
| Runtime | `Runtime/` | game hooks (`InitGameState`, `BeginPlay`, `UWorld::Tick`), `GameThread` queue (drained in the Tick hook), loader config, paths, notices, dumps, engine layout verification |
| Mods | `Mods/` | the mod model and its load phases (`ModLoading`: scan + core, `Registry` = one `Mod` per folder, `ModContext`), the core event stack (`ModStack`), Blueprint components (`LogicMods`: registration, spawn, Blueprint function bridge), overwrite links (`OverwriteMods`), `GameMod`, `LoadOrder` |
| UI | `UI/` | D3D11 Present hook, ImGui host, the F1 window, widgets, themes |

The public mod API is `Loader/ModLoader/include/MDML/` (umbrella `MDML/MDML.h`). Mods get only that, the engine core
include dirs and the generated SDK; never `src/`.

## Engine access: three tiers
1. **Engine core** (hand-written, `src/Engine`): reflection itself (objects, classes, properties, names). Offsets are
   `constexpr` values checked against the game PDB (`Tools/RE/check_layout.py`) and verified on live objects at the first
   InitGameState.
2. **Generated SDK** (`Loader/SDK/Generated`, header-only, one `<Package>.hpp` per package): every game and engine
   class, struct and enum. Made in-game by the DevTools generator (Dumper-7 analysis + MDML backend). Class members are
   resolved **by property name** at first use and functions validate their parameter layout against the live UFunction,
   so a game patch that moves members does not corrupt memory. `docs/SDK_GENERATOR.md`.
3. **Addresses** (`EngineAddresses`): native functions and globals (`ProcessEvent`, `StaticLoadObject`, `GWorld`, ...)
   by decorated PDB symbol name, AOB patterns from `Config/ModLoaderInfo.ini` as fallback. `docs/REVERSE_ENGINEERING.md`.

## Threads
| Thread | Runs | Rule |
|---|---|---|
| Game thread | game hooks, mod events `InitGameState`/`BeginPlay`/`Tick`/`GameTick`, everything queued with `mdml::runtime::GameThread::Enqueue` | the only thread that may call into the engine (ProcessEvent, GObjects scans, `StaticFindObject`, actor functions) |
| Render thread | D3D11 Present hook: ImGui, `DrawImGui`, menu buttons | UI only; enqueue engine work to the game thread |
| Startup thread | config, PDB load, loading core mod DLLs | before the game state exists |
| Hotkey thread | F1 toggle | sets the menu state only |

## The mod model (mod-components phase 1)
`docs/design/mod-components.md` is the design; phase 1 (mod container, `mod.ini` sections, `CoreMod`, load phases 0-3,
`ModContext`) is implemented, the event bus (phase 2) and the Blueprint rework (phase 3) are not.
- **`Mod`** (`include/MDML/Mod.h`): one per mod folder, owned by `mods::Registry::Mods` (`std::vector<std::unique_ptr<Mod>>`, stable
  addresses). `Info()` from `[Mod]`; component pointers `Core()` (`CoreMod`, created by the DLL), `Blueprint()` (`BlueprintMod`), `Overwrite()`
  (`OverwriteMod`), null = absent. `mods::ModAccess` is the only friend that creates mods and fills components.
- **`CoreMod`** (`include/MDML/CoreMod.h`, was `Mod`; `GameMod` derives from it): `OnLoad(ModContext&)`, `OnUnload()` (called at engine exit via the `FEngineLoop::Exit` hook, reverse load order), `OnModMenuButtonPressed()`,
  and the old event virtuals (`InitializeMod`, `Tick`, `DrawImGui`, ... via `SetupHooks`/`ModStack`, unchanged until phase 2).
  Entry point: `MDML_MOD(Class)` exports `MDML_CreateMod` + version stamps; no `DllMain`.

### Load phases (`Bootstrap/Startup.cpp` `InstallHooks`, `Mods/ModLoading.cpp`)
Global per phase, `LoadOrder.ini` order within a phase. Phases 0-3 run on the init thread, `Registry::Phase` records the current one (checked by `ModContext`).
| # | Function | What happens |
|---|---|---|
| 0 | `mods::ScanMods` | `LoadOrder::Resolve`; every enabled folder with a `mod.ini` is parsed; `Mod` + components are built (`[Overwrite] Folder` is scanned into the file list). A folder with no `[Core]`/`[Blueprint]`/`[Overwrite]` is skipped |
| 1 | `mods::LoadCoreMods` | per `[Core]`: `LoadLibrary`, `MDML_CreateMod`, version stamp check, logger from `Logger=`, `CoreMod::OnLoad(ModContext&)`. Components are mutable here. A failing/throwing core drops the whole mod (all components, `Mod::Failed()`; shown as [FAILED] in F1) |
| 2 | `mods::CreateSysLinks` (+ `InstallPakHooks`) | hard links over the *final* overwrite file lists (a later mod wins), originals backed up, `Config/ModLinks.bin` |
| 3 | `mods::RegisterBlueprintMods` | asset paths from the final `[Blueprint]` settings; then `Phase = Loaded` (frozen, so the UI and game thread read the list without locks) |
| 4 | `mods::InitCoreMods` | first InitGameState (game thread): engine globals bound, layout verified, every core's `InitializeMod()` (GameMod: `OnModInitialize`) |
| 5 | game hooks | per InitGameState: Blueprint cleanup + spawn, core events as enabled (`EventsEnabled`): InitGameState → BeginPlay/PostBeginPlay → Tick, plus DrawImGui/DX11 events on the render thread. `GameMod` splits them by the game's state (menu / loading / in game) |

## Blueprint components (were logic mods)
`[Blueprint] Actor=` names a Blueprint actor (and optional `Persistent=` object). On every InitGameState MDML
loads the class (`StaticLoadObject`), spawns it (`UE4::SpawnActor`) and calls `PreBeginPlay`/`PostBeginPlay`; Blueprint
calls to `PrintToModLoader`, `GetPersistentObject` and functions registered with `REGISTER_FUNCTION` are handled in the
ProcessLocalScriptFunction hook. `SpawnIn`, `Persistent` rules and `Events=` are parsed and stored but only applied in phase 3 of the redesign.

## Overwrite components
`[Overwrite]` files (the folder scan from phase 0, plus whatever cores add through `ModContext::AddOverwriteFile`) are mirrored over the game's loose files with hard links at startup (originals backed up) and
removed on exit; `Config/NoOverwrite.ini` lists game files that must never be replaced. Pak files are not mods yet
(`docs/design/pak-mods.md`).
