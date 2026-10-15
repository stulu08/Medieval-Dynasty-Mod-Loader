# MDML architecture

How the Medieval Dynasty Mod Loader is put together (state: Wave 4 step B, 2026-10-15). For the folder table and
build commands see `CLAUDE.md`; for the history of each part, `docs/MODERNIZATION_PLAN.md` and `docs/reports/`.

## Processes and binaries
```
Medieval_Dynasty-Win64-Shipping.exe
 └─ xinput1_3.dll   (Loader/Proxy)       proxy DLL the game loads itself; forwards XInput, loads MDML.dll
     └─ MDML.dll    (Loader/ModLoader)   the loader: hooks, engine core, mod host, F1 window, GameMod
         ├─ Content/Mods/<Mod>/<Mod>.dll core mods (C++), e.g. DevTools, examples
         ├─ Content/Mods/<Mod>/*.uasset  logic mods (Blueprint actors spawned by MDML)
         └─ Content/Mods/<Mod>/<Folder>  overwrite mods (hard links over loose game files)
```
`Tools/ModManager` is a separate desktop app (install/enable mods, load order); it does not run inside the game.

## Layers inside MDML.dll (`Loader/ModLoader/src`, namespaces `mdml::*`)
| Layer | Folder | Job |
|---|---|---|
| Bootstrap | `Bootstrap/` | `DllMain`, startup thread: config, log, symbols, hooks, mods, UI (`mdml::runtime::Startup`) |
| Platform | `Platform/` | OS-level helpers: MinHook wrapper (`Hooks`), `IniFile` (mINI), logger, PDB `SymbolResolver`, AOB `Pattern` |
| Engine core | `Engine/` | hand-written UE 4.27 core: `UObject`, `UClass`, `FProperty`, `FName`, containers, math, `UE_LOG`; `EngineAddresses` (functions/globals from PDB or patterns), `EngineLayout` (PDB-checked offsets), `EngineHelpers` (`GetWorld`, `SpawnActor`, ...), `MDML/GeneratedSupport` (runtime for the generated SDK). Exported (`MDML_ENGINE_API`) |
| Runtime | `Runtime/` | game hooks (`InitGameState`, `BeginPlay`, `UWorld::Tick`), `GameThread` queue (drained in the Tick hook), loader config, paths, notices, dumps, engine layout verification |
| Mods | `Mods/` | core mod loading in `LoadOrder.ini` order, the mod list (`Registry`/`ModStack` event bus), logic mods (spawn, Blueprint function bridge), overwrite mods (hard links), `GameMod` |
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

## Mod lifecycle (core mods)
1. Startup: `LoadOrder.ini` resolved (new mods appended), each enabled mod DLL loaded; its `DllMain` constructs the mod
   object, which registers itself (`CompleteModCreation`).
2. First InitGameState: engine globals bound, layout verified, every mod's `InitializeMod()` (GameMod: `OnModInitialize`).
3. Events as enabled per mod (`EventsEnabled`): InitGameState → BeginPlay/PostBeginPlay → Tick, plus DrawImGui/DX11
   events on the render thread. `GameMod` splits them by the game's state (menu / loading / in game).

## Logic mods
`[LogicMod]` in a mod's `mod.ini` names a Blueprint actor (and optional persistent object). On every InitGameState MDML
loads the class (`StaticLoadObject`), spawns it (`UE4::SpawnActor`) and calls `PreBeginPlay`/`PostBeginPlay`; Blueprint
calls to `PrintToModLoader`, `GetPersistentObject` and functions registered with `REGISTER_FUNCTION` are handled in the
ProcessLocalScriptFunction hook.

## Overwrite mods
`[Overwrites]` folders are mirrored over the game's loose files with hard links at startup (originals backed up) and
removed on exit; `Config/NoOverwrite.ini` lists game files that must never be replaced. Pak files are not mods yet
(`docs/design/pak-mods.md`).
