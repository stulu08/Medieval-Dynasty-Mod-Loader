# Design: one Mod with components (Core / Blueprint / Overwrite) and a subscription event bus

Status: **phase 1 (Mod model) implemented in the working tree 2026-10-15 incl. the owner-answer follow-ups (OnUnload hook, failed mod drops all components, test mod in Tests/, ModManager), pending owner test** (report `docs/reports/mod-components-phase1.md`; phases 2-5 not started; deviations in section 12). Originally a design draft (2026-10-15). Written from a discussion with the owner; the decisions in section 9 are
the owner's, everything else is a proposal (the phase 1 questions of section 11 are answered). Items marked **[verify]** must be
checked in code or in-game before implementation.

Related: `docs/design/ufunction-hooks.md` (replaces `REGISTER_FUNCTION`, BP -> C++ calls), `docs/design/lua-scripting.md` (a
later `[Lua]` component), `docs/design/hot-reload.md` (ownership of subscriptions/hooks), `docs/design/pak-mods.md`,
`docs/reports/loadorder-and-dump-notices.md`.

## 1. Current state (branch `modernize`, 2026-10-15)
Three mod kinds, three unrelated data structures, discovered separately from the same `mod.ini`:

| Kind | Data | Discovered by | Notes |
|---|---|---|---|
| Core mod (DLL) | `class Mod` (`include/MDML/Mod.h`), base of `GameMod` | `CoreModLoader::LoadCoreMods`: `LoadLibrary` in `LoadOrder.ini` order; the mod constructs itself in its `DllMain` and calls `CompleteModCreation` | metadata as string members set in the constructor (`ModName`, `ModVersion`, ...) |
| Logic mod (Blueprint) | `struct ModInfo` in `Registry::ModInfoList` | `LogicMods::RegisterLogicMods`: `[LogicMod]` section | actor spawned on **every** `InitGameState`; `PreBeginPlay`/`PostBeginPlay`/`ModCleanUp`/`ModMenuButtonPressed` called **by name**; `ModAuthor`/`ModDescription`/`ModVersion`/`ModButtons` read as **BP variables by name**; optional `PersistentObject` (outer = GameInstance) |
| Overwrite mod | `struct OverwriteMod` in `Registry::OverwriteMods` | `OverwriteMods::CreateSysLinks`: `[Overwrites]`/`[Overrides]` | loose files linked into `Content/` + pak hooks |

Events (`Mod.h` / `Mods/Mod.cpp` / `Mods/ModStack.h`):
- `EventsEnabled::EnabledEvents` (8 bools) + 12 static presets select which virtuals of `Mod` get registered.
- `Mod::SetupHooks(preset)` runs `REGISTER_EVENT(name, args...)` per enabled event: a heap `ModEvent<args...>` keyed by the
  **string** name in `ModStack::m_eventList` (`std::map<std::string, std::vector<Event*>>`).
- `ModStack::callEvent("Tick", ...)`: map lookup by string + `dynamic_cast` per handler on every dispatch; `return true` from a
  handler stops the others; an exception pops the whole mod. Game thread and render thread dispatch concurrently (shared lock).
- Separate mechanism for BP -> C++: `REGISTER_FUNCTION` / `BPFUNCTION`, a string compare on **every** Blueprint call in the game,
  only installed once a logic-mod actor exists (`ufunction-hooks.md` section 1).

## 2. Goals / non-goals
Goals:
1. **One `Mod` per mod folder**, one `mod.ini`, one enable switch, one load-order entry. A mod is any non-empty combination of
   components; the `mod.ini` sections declare which.
2. A mod's parts know each other: the DLL can reach its own Blueprint actor and overwrite files, and the other way round.
3. **Core first**: a core mod runs before the other components are applied and may change them (add/remove overwrite files,
   change Blueprint settings) for itself and for other mods.
4. **Events: simple, straightforward, lightweight, performant** (owner). One mechanism: subscriptions. Mods can **define and
   publish their own events** that other mods subscribe to.
5. Blueprint mods become first-class: optional actor, configurable spawn, a real base class instead of naming conventions.

Non-goals: backward compatibility with existing mods / `mod.ini` files (owner: not needed); a C-only ABI (mods keep using the
exported C++ engine core and the generated C++ SDK, so they are built with the same toolchain as MDML).

## 3. The mod model
```cpp
// include/MDML/Mod.h (public, read-mostly). One per enabled mod folder, owned by the loader.
class LOADER_API Mod {
public:
    const ModInfo& Info() const;          // from [Mod]: Name, Version, Author, Description, Folder
    CoreMod*      Core()      const;      // nullptr = no [Core]
    BlueprintMod* Blueprint() const;      // nullptr = no [Blueprint]
    OverwriteMod* Overwrite() const;      // nullptr = no [Overwrite]
    // later: ScriptMod* Lua() const;     // lua-scripting.md
};
```
- Components are plain **pointers, `nullptr` = absent**. `CoreMod` lives in the DLL (polymorphic, created by the DLL);
  `BlueprintMod` and `OverwriteMod` are loader-owned data. No `std::optional`, no inheritance between components.
- The old `class Mod` (DLL base class) is **renamed `CoreMod`**; `GameMod` derives from `CoreMod`. `CoreMod::GetMod()` returns the
  owning `Mod`, so a DLL reaches `GetMod().Blueprint()->Actor()` etc.
- `Registry::ModInfoList` / `OverwriteMods` / the mod list in `ModStack` become one `std::vector<Mod>` in load order.
- A folder whose `mod.ini` declares no component is logged and skipped.

### `mod.ini` (stays INI; key names accepted, decision 16)
```ini
[Mod]
Name=My Mod
Version=1.0.0
Author=Someone
Description=Does things

[Core]                       ; native DLL
Dll=MyMod.dll                ; default: <Folder>.dll
Logger=File                  ; None | Console | File
MenuButton=1

[Blueprint]                  ; cooked assets under /Game/Mods/<Folder>/
Actor=MyActor.uasset         ; optional: no Actor = asset-only mod
SpawnIn=Game                 ; Game (default) | Menu | Always | Never
Persistent=MyData.uasset     ; optional, survives level changes
Events=Tick,PostBeginPlay    ; events forwarded to the actor (section 7)

[Overwrite]                  ; replace existing game files
Folder=Content
```
Metadata comes **only** from `[Mod]` (no more `ModName` strings in C++ constructors, no `ModAuthor` BP variables).
Old section names (`[LogicMod]`, `[Overwrites]`, `[Overrides]`) are dropped (no compatibility).

## 4. Load phases
Phases are global (all mods finish a phase before the next starts), mods within a phase run in `LoadOrder.ini` order.

| # | Thread | Phase | What happens |
|---|---|---|---|
| 0 | init | **Scan** | `LoadOrder::Resolve`, parse `mod.ini` of every enabled folder, build the `Mod` list with components |
| 1 | init | **Core** | `LoadLibrary` + entry export (5.1) per `[Core]`, then `CoreMod::OnLoad(ModContext&)`. The mod list is **mutable** in this phase: add/remove overwrite files, change Blueprint settings (actor, `SpawnIn`, `Events`, disable), subscribe, define events. The engine is not ready (no UObjects) |
| 2 | init | **Overwrite** | links + pak hooks over the final file lists (incl. files added in phase 1) |
| 3 | init | **Blueprint** | register actors/persistent objects from the final settings. After this the mod list is **frozen** (component changes log an error) |
| 4 | game | **EngineReady** | first `InitGameState`: `UE4::InitSDK`, then event `MDML.EngineReady` (today's `InitializeMod`) |
| 5 | game | **per level** | `InitGameState` -> game-state events, Blueprint cleanup + spawn per `SpawnIn`, `PostBeginPlay` |

## 5. Core mods
### 5.1 Entry point
The DLL no longer constructs itself in `DllMain`. It exports one function, generated by a macro:
```cpp
class MyMod : public CoreMod {
    void OnLoad(ModContext& ctx) override;   // phase 1
    void OnUnload() override;                // game quits (hook on FEngineLoop::Exit); later also hot reload
};
MDML_MOD(MyMod)   // extern "C" __declspec(dllexport) CoreMod* MDML_CreateMod(); + exported MDML version stamp
```
The loader calls `MDML_CreateMod`, attaches the `Mod`, creates the logger from `[Core] Logger=`, checks the version stamp
(replaces the `ModLoaderVersion`/`MedievalModLoaderVersion` strings), then calls `OnLoad`.
`CoreMod` keeps only `OnLoad`, `OnUnload`, `OnModMenuButtonPressed` as virtuals; **everything else is an event**.

### 5.2 `ModContext` (phase 1)
```cpp
Mod&  Self();
void  ForEachMod(fn);  Mod* FindMod(name);                 // all mods, components mutable in phase 1
void  AddOverwriteFile(Mod&, srcPath, gameRelativePath);  // an existing file on disk (generated files: dropped, decision 17)
void  RemoveOverwriteFile(Mod&, gameRelativePath);
BlueprintMod& EditBlueprint(Mod&);                         // actor, SpawnIn, Events, enable
```

## 6. Event bus
### 6.1 Model: subscriptions, not broadcast
The owner's SEngine model (`Stulu/Events/Event.h`: every receiver gets every event through one `OnEvent(Event&)`, an
`EventDispatcher` compares the type) was considered and **not** chosen for delivery, because here every mod would receive
`Tick`/`DX11Present` every frame whether it wants them or not, game-thread and render-thread events would share one handler, and
the loader could never tell whether anybody needs an event. Kept from SEngine: events are identified by an id (array index), not
a string.

```cpp
// subscribe (any time; normally in OnLoad). Owner = this mod, removed automatically on unload.
Subscribe(Events::Tick,      [this](const TickArgs& e) { ... });
Subscribe(Events::DrawImGui, [this] { ... });              // events without payload take no argument
```

### 6.2 Built-in events (first set)
| Event | Thread | Payload | Replaces |
|---|---|---|---|
| `MDML.EngineReady` | game | — | `InitializeMod` |
| `MDML.InitGameState` | game | — | `InitGameState` |
| `MDML.BeginPlay` | game | `AActor*` | `BeginPlay` (every actor) |
| `MDML.PostBeginPlay` | game | mod, `AActor*` | `PostBeginPlay` |
| `MDML.Tick` | game | `ELevelTick`, `float dt` | `Tick` |
| `MDML.SetupImGui` | render | `ImGuiIO&` | `SetupImGui` |
| `MDML.DrawImGui` | render | — | `DrawImGui` |
| `MDML.DX11Present` | render | device, context, RTV | `DX11Present` |
| `MDML.DX11ResizeBuffers` | render | device, context, w, h, format, flags | `DX11ResizeBuffers` |
| game events (`MD.MenuInit`, `MD.GameInit`, `MD.MenuTick`, `MD.GameTick`, `MD.GameStateChanged`, ...) | game | — / `dt` / `AActor*` | `GameMod` virtuals (decision 12; `GameMod` stays a helper class) |

Deleted: `EventsEnabled` + presets, `SetupHooks`, `REGISTER_EVENT`, the event virtuals, `ModStack`'s string map / `ModEvent<>` /
`dynamic_cast`, `return true` propagation stop.

### 6.3 Mod-defined events (define, publish, subscribe)
```cpp
// MyMod/Events.h  -- shipped by the publishing mod for others to include
struct HarvestedArgs { UE4::AActor* Field; int Amount; };
inline mdml::Event<HarvestedArgs> Harvested{ "MyMod.Harvested" };   // resolves its id once, in MDML.dll

// publisher
Publish(Harvested, HarvestedArgs{ field, 3 });

// subscriber (another mod)
Subscribe(MyModEvents::Harvested, [](const HarvestedArgs& e) { ... });
// or without the header: auto ev = mdml::Events::Find<HarvestedArgs>("MyMod.Harvested");
```
- Built-in and mod events are the **same mechanism**; built-ins are just events MDML defines.
- The name -> id lookup happens once (registration/`Find`); dispatch never touches strings.
- No payload type check across DLLs (decision 15): publisher and subscriber must agree on the payload type (the publisher's header).
- Names are namespaced by the mod (`<Mod>.<Event>`); `MDML.` and `MD.` are reserved.

### 6.4 Implementation sketch (lightweight)
- Handler lists live **in MDML.dll** (an `inline static` in a header would give every mod DLL its own copy), indexed by event id:
  `std::vector<Slot>`; `Slot` = copy-on-write `std::shared_ptr<const std::vector<Handler>>` behind an atomic.
- `Publish` = index + one atomic load + loop. Zero subscribers = one load and an empty check. No locks on dispatch.
  Subscribing/unsubscribing (also from inside a handler) swaps the vector; a running dispatch keeps its snapshot.
- `Handler` = `{ Mod* owner; std::function<void(const void*)> fn; }`, the typed wrapper casts the payload.
- Handlers run in load order of their owner (stable), then subscription order. **Handlers cannot cancel** (owner decision);
  cancelling is only for pre-hooks on functions (`ufunction-hooks.md`).
- A handler that throws is caught; **only that subscription** is removed and logged once, the mod keeps its other subscriptions
  (owner decision; today `ModStack` pops the whole mod).
- Each event fires on one documented thread; the bus does not marshal between threads.
- The loader installs engine/DX hooks only when an event they feed has subscribers (decision 14). Subscribing later (after
  phase 1) installs the hook then; a hook is not removed when the last subscriber goes.

## 7. Blueprint mods (was: logic mods)
Main value of Blueprint mods = **new cooked assets** (widgets, meshes, Blueprints deriving from game classes); pure logic is better
in C++ or later Lua. Changes:
1. **Actor optional**: a `[Blueprint]` section without `Actor` = asset-only mod (assets used by its own core or other mods).
2. **Metadata only from `mod.ini`**; no `ModAuthor`/`ModDescription`/`ModVersion` BP variables.
3. **Lifecycle through the event bus**: the actor receives the built-in events listed in `Events=` (same names as section 6.2;
   mod-defined events later, decision 13), instead of the
   loader calling fixed function names on every actor. Mapping event -> BP function: via the base class (point 5).
4. **Core <-> Blueprint of the same mod**: C++ uses `GetMod().Blueprint()->Actor()` / `->PersistentObject()`. BP -> C++ calls go
   through UFunction hooks (`ufunction-hooks.md`) instead of `REGISTER_FUNCTION` and the per-call string compare.
5. **MDML base-class asset** `/Game/MDML/MDMLModActor` (owner: yes): ships cooked with MDML; modders get the uncooked asset for
   their UE 4.27 project and derive from it. Provides the event functions (`OnTick`, `OnPostBeginPlay`, ...), `ModButtons`,
   `OnModMenuButtonPressed`, `Print`, `GetPersistentObject`, so the contract is visible in the editor instead of magic names.
   Own sub-project (needs a UE 4.27 project that cooks for this game), scheduled after the core rework.

`SpawnIn` (owner: "perfekt"): `Game` (default), `Menu`, `Always`, `Never` (asset-only, or the core spawns it itself).
Decided from the game state the loader already reads in `GameMod` (`EMD_GameState` on the GameInstance: Init/Menu/Loading/InGame).
**[verify]** which `EMD_GameState` value is set when `InitGameState` fires for the main menu and for a loaded save.
An actor never survives a level change in UE; data that must survive goes into `Persistent=`.

## 8. Overwrite mods
Mechanism unchanged (`CreateSysLinks`, pak hooks, `NoOverwrite.ini`, backups). New: the file list is assembled in phase 0 and can
be changed by cores in phase 1 before it is applied in phase 2.

## 9. Owner decisions (2026-10-15)
1. One `Mod` with optional components instead of separate mod kinds; the manifest declares the components.
2. No backward compatibility (old mods, old `mod.ini` sections).
3. Core components = native DLLs; core loads first and may create overwrites / change other components before they load.
4. Manifest stays `mod.ini`.
5. Notification events cannot cancel; only function pre-hooks can.
6. `Mod` (DLL base class) -> `CoreMod`.
7. Logic mods -> **Blueprint mods**, with the 5 changes of section 7, incl. the base-class asset.
8. `SpawnIn = Game | Menu | Always | Never`.
9. Events: subscription bus (section 6) instead of `EventsEnabled`/`REGISTER_EVENT`; per-event payload structs are not important to
   the owner; **mods must be able to define and publish their own events**.

## 10. Phased plan
| Phase | Scope | Exit criterion |
|---|---|---|
| 1 Mod model **(done 2026-10-15, owner test pending)** | `Mod` container, `mod.ini` sections, `CoreMod` rename + `MDML_MOD` entry, load phases 0–3, `ModContext`; port DevTools + examples | DevTools and examples load through the new path; a test mod with Core + Overwrite adds a file in `OnLoad` that gets linked |
| 2 Event bus | built-in events, `Subscribe`/`Publish`/`Event<T>`/`Find`, owner cleanup; delete `EventsEnabled`, `REGISTER_EVENT`, the `ModStack` event code | all former events work via subscriptions; a mod publishes an event another mod receives |
| 3 Blueprint rework | `[Blueprint]`, optional actor, `SpawnIn`, `Persistent`, `Events=` forwarding, metadata from `mod.ini` | an asset-only mod and an actor mod with `SpawnIn=Menu` work in-game (owner tests) |
| 4 UFunction hooks | `ufunction-hooks.md` phases 0–3; replaces `REGISTER_FUNCTION`, built-ins `Print`/`GetPersistentObject` | BP actor calls into its own core mod |
| 5 Base-class asset | UE 4.27 project, cooked `MDMLModActor`, uncooked copy for modders, `docs/guides/Modding.md` | a Blueprint mod derived from `MDMLModActor` receives `OnTick` |
| later | `[Lua]` component (`lua-scripting.md`) on the same model and bus | — |

Answered 2026-10-15 (were open questions 1, 2, 3, 7):
10. **Handler exceptions** disable only the throwing **subscription** (logged once), not the whole mod.
11. **No dependencies** (`Requires=`): not needed; load order stays `LoadOrder.ini` only.
12. **`GameMod`** stays as a helper class (game state, player, managers); its `MenuInit`/`GameInit`/`MenuBeginPlay`/
    `GameBeginPlay`/`MenuTick`/`GameTick`/... virtuals are replaced by `MD.*` events that MDML publishes.
13. **Blueprint actors receive built-in events only** for now. Mod-defined events to Blueprints can be added later without
    changing the bus: the Blueprint forwarder is just another subscriber. The work is only the payload mapping (a C++ struct has
    no reflection, a BP function needs typed parameters), e.g. payload-less mod events as `OnModEvent(FName)` first, or mod events
    that describe their fields.

14. **Lazy engine hooks**: the Tick/DX hooks are installed only when an event they feed has a subscriber.
15. **No payload type check** for mod-defined events (`sizeof`/type name dropped).
16. **`mod.ini` key names** of section 3 accepted.

17. **Generated overwrite files dropped for now**: a core can add/remove existing files in phase 1, but there is no API to
    create files from bytes (was: MDML writes them to `<ModFolder>/Generated/`). Can be added later without changing the model.

Answered 2026-10-15, second round (phase 2 scope):
18. **Order of the next work: event bus (phase 2) -> Lua (`[Lua]` component on the bus) -> modding tools.**
19. **Unsubscribe**: `Subscribe` returns a handle (`handle.Unsubscribe()`, copyable, not RAII: dropping it does *not* unsubscribe);
    all subscriptions of a mod are removed automatically when it unloads.
20. **`MD.*` events**: keep all of today's `GameMod` virtuals as events (`MD.MenuInit`, `MD.GameInit`, `MD.MenuBeginPlay`,
    `MD.GameLoadingBeginPlay`, `MD.GameBeginPlay`, `MD.MenuTick`, `MD.GameTick`) **plus** `MD.GameStateChanged` (old + new
    `EMD_GameState`), `MD.LevelEnd` (before a level is unloaded; menu -> game, game -> menu) and `MD.SaveGame` / `MD.LoadGame`
    (**[verify]** the game functions via PDB/SDK first; if none fits, report instead of guessing).
21. **Bus debug view in DevTools** (tab: events, subscribers per mod, call counts, time per handler); later part of Live View.
    The F1 loader window stays as it is.

## 11. Phase 1 questions (all answered 2026-10-15)
Raised by the phase 1 implementation, answered by the owner; the follow-ups are implemented (section 12).
1. **`CoreMod::OnUnload()`: shutdown point.** Answer: do **not** call it from `DllMain`/`DLL_PROCESS_DETACH` (loader lock, engine already
   torn down). Hook a clean engine-exit point resolved by name from the PDB instead. Implemented as a hook on **`FEngineLoop::Exit`**
   (`?Exit@FEngineLoop@@QEAAXXZ`, see section 12): every loaded core gets `OnUnload` in **reverse load order**, exception-safe (log and
   continue), exactly once; a missing symbol is a logged warning, no crash. Level end / world change is **not** unload: that becomes an
   `MD.*` world event in phase 2 (with the other `GameMod` events, decision 12).
2. **`ModContext` visibility of later cores.** Answer: keep as is (one pass). During the `OnLoad` of mod A the `Core()` of a mod that
   loads later is still null (its other components are there). Documented in `docs/guides/Modding.md`.
3. **A core that fails to load** (missing DLL, no `MDML_CreateMod`, exception in constructor/`OnLoad`). Answer: the **whole mod is
   dropped**, not only the Core component: its Overwrite and Blueprint components are not registered either (no links, no actor), the
   error is logged once clearly ("Mod X FAILED, the whole mod is dropped ...") and the F1 mod list shows the mod as `[FAILED]` with the
   reason (`Mod::Failed()` / `FailReason()`). `ModContext` refuses to add files to / edit the Blueprint component of a failed mod.
4. **`[Blueprint]` in phase 1.** Answer: keep. It stores `SpawnIn`/`Persistent`/`Events`; the `ActorPath`/`PersistentObjectPath`
   overrides and the `ModAuthor` & co. Blueprint variables stay removed (metadata only from `[Mod]`).
5. **Overwrite `Enable=`.** Answer: keep it removed (DevTools' cheat-menu override is off by commenting out its `[Overwrite]` section).
6. **Test mod location.** Answer: move it out of the shipped examples. `Mods/Examples/OverwriteTest` is now **`Tests/OverwriteTest`**
   (premake project in group "Tests", builds to `Output/Tests/OverwriteTest`, not into `Output/ModLoader/Mods`; copy that folder to
   `Content/Mods/OverwriteTest` for the in-game test).
7. **`Tools/ModManager`.** Answer: update it now. `ModScanner` and its tests use `[Mod]`/`[Core]`/`[Blueprint]`/`[Overwrite]`
   (a mod = folder with a `mod.ini` that has at least one component section; loose DLLs and `<Folder>/<Folder>.dll` guessing are gone;
   BaseMod sort special cases removed in `LoadOrder`/`Installer`).

## 12. Phase 1 status and deviations (2026-10-15)
Implemented: `Mod` + `ModInfo`/`BlueprintMod`/`OverwriteMod` (`include/MDML/Mod.h`), `CoreMod` (`include/MDML/CoreMod.h`, old `Mod`; `GameMod`
derives), `MDML_MOD`, `ModContext`, phases 0-3 (`Mods/ModLoading.cpp`, `OverwriteMods.cpp`, `LogicMods.cpp`, `Bootstrap/Startup.cpp`), UI
with one mod list, DevTools + PresetMod + TimeWeatherChanger ported, test mod `Tests/OverwriteTest`. Not done on purpose: event bus,
Blueprint rework (`SpawnIn`/`Events=` stored only), UFunction hooks, base-class asset.

Deviations from the sketch above:
- `Registry::Mods` is `std::vector<std::unique_ptr<Mod>>`, not `std::vector<Mod>`: `CoreMod::m_mod` and the UI keep `Mod*`, so addresses must be stable.
- The component structs are plain structs with public settings and loader-owned state (`BlueprintMod`, `OverwriteMod`), not classes with
  accessors only; only `Mod` hides its fields (friend `mdml::mods::ModAccess`, the one place that builds mods).
- `ModContext::AddOverwriteFile` takes a path relative to the game's **Content** folder (that is where overwrite files go); `RemoveOverwriteFile` the same. Targets are compared case-insensitively.
- `ModContext` mutability is per component: overwrite files until phase 2 starts, the Blueprint component until phase 3 starts (design: "frozen after phase 3"); `OnLoad` only runs in phase 1 anyway.
- Phase 0 reads `[Core] Dll/Logger/MenuButton` into a loader-private list; `Mod::Core()` is null until that core has loaded (phase 1).
- `[Overwrite] Folder` is scanned in phase 0 (into `OverwriteMod::Files`), linking happens in phase 2 from that list; `OverwriteMod::Linked` records what phase 2 linked (shown in the F1 window).
- Logger default is `File` when `[Core] Logger=` is missing (old `GameMod` default). `[Core] MenuButton` sets `CoreMod::UseMenuButton` before `OnLoad`.
- Loose DLLs in `Content/Mods` and folders without a `mod.ini` are no longer mods (no compatibility); `LoadOrder.ini` only lists folders with a `mod.ini`.
- `OnUnload` is called from a hook on `FEngineLoop::Exit` (follow-up of question 1), see below. The version stamps are exported data (`MDML_ModLoaderVersion`, `MDML_MedievalVersion`) next to `MDML_CreateMod`.
- Startup order changed: scan + cores (incl. `OnLoad`) now run **before** the overwrite links and pak hooks (design phases 0, 1, 2, 3).
- Public `mdml::mods::ForEachMod`/`FindMod` now work on `Mod` (all mods), `MoveToFront` takes a `CoreMod*`.

Follow-ups after the owner's answers (2026-10-15):
- **`OnUnload` hook: `FEngineLoop::Exit`** (`?Exit@FEngineLoop@@QEAAXXZ`, rva 0x7966d0 in the current build; `Addresses.EngineExit`, PDB/RVA cache only,
  no ini pattern; hook in `Runtime/GameHooks.cpp`, dispatch `mods::UnloadCoreMods` in `Mods/ModLoading.cpp`). Chosen from the candidates by
  disassembling the game: `UEngine::PreExit`/`UGameEngine::PreExit` are virtual and reached through `GEngine->PreExit()`, which `FEngineLoop::Exit`
  calls itself (vtable slot of `UGameEngine::PreExit` = the `call [rax+0x2a0]` in `Exit`), and `FEngineLoop::AppPreExit` comes after it in `Exit`.
  So `Exit` is the earliest named exit function, runs on the game thread, is non-virtual (works for any `GEngine` subclass) and runs before the engine
  tears anything down (UObjects, `GEngine`, loader hooks and logger still work). `FEngineLoop::PreExit` does not exist in this build.
  `UnloadCoreMods` walks `Registry::Mods` in reverse load order (not the `ModStack`, which `MoveToFront` may reorder), calls `OnUnload` of every
  mod that still has a core, catches everything (logs `Mod X: OnUnload threw`, continues), and is guarded by an atomic flag (exactly once). If the symbol
  is missing: warning "FEngineLoop::Exit not found ... OnUnload will not be called" at resolve time and "No FEngineLoop::Exit hook" at hook time.
  Not called when the process is killed/crashes, or from `DllMain`. Level end / world change is NOT unload: that becomes an `MD.*` world event in phase 2.
- **Failed mod** (`ModAccess::Fail`): `Mod::Failed()`/`FailReason()` added to the public `Mod`; all three components are reset, the core is popped from the
  `ModStack` (its DLL stays loaded, hooks it installed in its constructor are not undone), the mod stays in `Registry::Mods` so the F1 list can show it
  (`[FAILED]` + reason, no component nodes). Phases 2 and 3 skip it naturally because `Overwrite()`/`Blueprint()` are null. A failure of mod B's `OnLoad` does
  not undo files that mod A added to B earlier (B's whole mod is dropped anyway, its overwrite component is gone).
- Old `ModAccess::ClearCore` removed (replaced by `Fail`).
- Test mod moved to `Tests/OverwriteTest` (it was untracked, so plain move, not `git mv`); premake file, `ProjectDir`, root `premake5.lua` (group "Tests"), output path
  `Output/Tests/OverwriteTest`.
- `Dependencies/SDG/src/Stulu/SDG/Application.{h,cpp}`: `#ifndef` guard around `#define IMGUI_DEFINE_MATH_OPERATORS` (also set on the SDG command line; C4005
  showed up only on a full rebuild, never on the incremental builds that were reported as warning-free).
