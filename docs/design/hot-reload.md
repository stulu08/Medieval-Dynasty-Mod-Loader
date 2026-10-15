# Design: Hot reload (reload mod DLLs, later Lua scripts, without restarting the game)

Status: **design draft, not implemented** (2026-10-10). Phase 3 feature. Nothing here is decided until the owner answers
the questions in the last section.

Related: `docs/design/ufunction-hooks.md` (hook ownership), `docs/design/live-view.md` (DevTools state),
`docs/reports/loadorder-and-dump-notices.md` (load order, disabled mods), `docs/reports/wave2/2.2-startup.md` (sequential mod loading),
`docs/reports/wave2/gamethread-queue.md`, `docs/reports/code-inventory.md` sections 2 and 4.

## 1. Goals
1. Edit a core mod's C++ code, rebuild, and have the running game pick up the new DLL **without restarting** (iteration time from minutes to seconds). Primary user: the owner developing DevTools, BaseMod helpers and own mods.
2. Manual trigger (button in the F1 window / hotkey) first; automatic reload on file change second.
3. Same lifecycle for Lua scripts once Lua exists (much easier: new Lua state).
4. A failed reload must leave the game running (old version stays, or the mod stays unloaded with a clear log line).
5. The same unload path serves "disable mod at runtime" (LoadOrder `0` toggled live) and clean shutdown.

Non-goals: reloading `MDML.dll` itself, reloading engine/SDK code, reloading logic-mod Blueprints, patching code of running mod threads, supporting mods that were not written for it (they stay "not reloadable").

Inspiration: UE4SS. Lua mods are reloaded by `reinstall_mods` (hotkey Ctrl+R) and by an auto-reload `FilesystemWatcher`
on `Scripts/`; for C++ mods the UE4SS source says (`UE4SSProgram.cpp`, `update()`): *"TODO: To reload C++ mods, we need to add a way to
unregister hooks, and then C++ mods need to unregister when they get notified that they're getting unloaded."* That sentence is exactly the
requirement list of this design: **ownership of hooks/events + an unload notification**. UE4SS pauses event processing while it swaps the mod object and tracks all Lua hooks internally so they can be removed automatically.

## 2. Current mod lifecycle (what makes reload hard today)
From the code at 158ba5e:

1. `ModLoader::LoadMods` calls `LoadLibraryW` sequentially on MDML's init thread (BaseMod first, then `LoadOrder.ini` order).
2. The mod DLL's `DllMain` constructs the mod object (`new GameMod`) which sets the global `Mod::ModRef`, calls `CompleteModCreation` (pushes into
   `Global::CoreMods` (a `ModStack`), creates a logger). Construction therefore runs **under the loader lock**.
3. On the first `InitGameState`, `InitCoreMods` calls `InitializeMod()` on each finished mod, which calls `SetupHooks(events)`:
   `REGISTER_EVENT` creates **`new ModEvent<...>`** per event and adds it to `ModStack::m_eventList` (`map<string, vector<Event*>>`).
   Event objects are never deleted. `clearModEvents` erases while iterating a range-for (undefined behaviour) and does not `delete`.
4. `ModStack::callEvent` is used from the game thread (Tick, BeginPlay, InitGameState) **and the render thread** (DrawImGui, DX11Present) without locking. It dispatches by `dynamic_cast` and sets the global `Mod::ModRef` before each call
   (wrong-mod race, code inventory 2.4).
5. Mods may: own threads, install their own MinHook hooks (header-static `MinHook::Add`, one MinHook state per DLL), register `REGISTER_FUNCTION` wrappers
   (`Global::BPFunctionWrappers`, raw function pointers into the DLL), hold ImGui state in statics, import symbols from other mod DLLs (`BaseMod.dll` exports `GameMod`; mods link `BaseMod.lib`), cache `UObject*`.
6. There is **no unload path**: mods stay loaded until process exit; shutdown only deletes links and disables MinHook hooks. Nothing is freed.

## 3. Requirements for a safe unload
Everything that can still point into the DLL's code or data after `FreeLibrary` must be gone, and no thread may be running inside it.

| Thing that can reference the DLL | Today | Needed |
|---|---|---|
| Event bus entries (`ModEvent` + `std::function`/function pointers) | leaked, no per-mod removal except buggy `clearModEvents` | `ModStack::RemoveMod(owner)` under the dispatch lock; `delete` the events |
| `Mod` object (vtable in the DLL) | never destroyed | `delete` via a DLL-exported destroy function, **before** `FreeLibrary` |
| MinHook hooks created by the mod | per-DLL MinHook state, untracked | exported hook API (approved in Wave 4) with owner tag; registry removes all hooks of the owner; or mod must call `Unhook` in its shutdown (verified by loader) |
| UFunction hooks (`REGISTER_FUNCTION`, new pre/post hooks) | raw pointers in `BPFunctionWrappers` | owner-tagged registry (`ufunction-hooks.md`), `UnregisterAll(owner)` incl. restoring swapped `UFunction::Func` |
| Threads created by the mod | untracked | mod stops them in its shutdown hook; loader waits on the module with a timeout; refuse the unload if a thread of the module is still alive (cannot be detected generically; convention + timeout, see risks) |
| ImGui callbacks / fonts / textures / `ImGuiIO` hooks | statics in the DLL; ImGui context is exported from MDML.dll | window functions only run via `DrawImGui` (removed with events); mod frees fonts/textures in its shutdown; `ImGuiSettingsHandler`s or `ImDrawList::AddCallback` pointers must be removed (documented rule) |
| `GameThread::Enqueue`d lambdas | live in the queue, code in the DLL | tag tasks with an owner, drop the owner's tasks on unload; **drain** the queue once before `FreeLibrary` |
| Loader log sinks / `Logger` objects created by the mod | `Logger::Create` (spdlog registry in MDML.dll) | owner-tagged loggers dropped with the mod |
| `UObject`s created by the mod (spawned actors, `StaticConstructObject`) with vtables in the DLL | n/a for pure data mods; native `UClass`es defined in a mod DLL would be a problem | not supported: mods must not define native UObject subclasses (they do not today) |
| Static destructors / `atexit` of the DLL | run at `DLL_PROCESS_DETACH` | `FreeLibrary` runs them; they must not touch the engine (document) |
| Imports from other mod DLLs (`BaseMod.dll`) | load order | dependency graph: unload dependents first; reload of a dependency reloads dependents (or is refused) |
| TLS, COM, windows/WndProc subclasses | LoaderUI subclasses WndProc in MDML.dll | mods must not subclass windows themselves |

### Proposed mod ABI (new, replaces "construct in DllMain")
No old-mod compatibility is required (owner decision 2026-10-09), so the DLL contract can change:

```cpp
extern "C" __declspec(dllexport) mdml::ModApiVersion MDML_ModApiVersion();
extern "C" __declspec(dllexport) mdml::Mod* MDML_CreateMod(const mdml::ModContext& ctx);   // called by the loader, NOT from DllMain
extern "C" __declspec(dllexport) void       MDML_DestroyMod(mdml::Mod* mod);               // called before FreeLibrary
```
- `DllMain` does nothing (no loader-lock work, fixes code-inventory 2.4 for mods too).
- `ModContext` gives the owner handle used for every registration (events, hooks, tasks, loggers, ImGui windows), so the loader can clean up even if the mod forgets.
- `Mod::OnUnload(UnloadReason)` virtual (reload, disable, shutdown) where the mod stops threads and frees UI resources; `Mod::OnReloaded(state)` optional.
- Optional state hand-over: `SaveState(IStateWriter&)` / `LoadState(IStateReader&)` with a small versioned blob (JSON or binary) kept by the loader between old and new instance, for things like DevTools window layout, watches, toggles.
- Old-style mods (construct in `DllMain`) are marked **not reloadable** (and, if the owner agrees, eventually rejected).

## 4. Unload / reload sequence (all on the game thread, in a `GameThread::Enqueue`d task, never from `DrawImGui`)

```
request(modName, reason)                      (UI click / hotkey / file watcher -> Enqueue)
 1. [game thread, next Tick] check reloadable, dependents, state: Loaded -> Unloading
 2. freeze dispatch: take the ModStack write lock (render thread callbacks finish first, then wait)
 3. mod->OnUnload(reason); optional SaveState -> blob
 4. remove owner's events from ModStack, delete them (also from the m_mods list)
 5. UnregisterAll(owner): UFunction hooks (restore Func), MinHook hooks, BPFunctionWrappers, loggers, tasks
 6. wait until in-flight callbacks of the owner == 0 (timeout -> abort, mod stays Loaded but with hooks restored? see below)
 7. MDML_DestroyMod(mod)
 8. drain GameThread queue once (tasks tagged with the owner are discarded)
 9. FreeLibrary(hModule)  (verify refcount reached 0 via GetModuleHandle -> NULL; else log "module still referenced" and mark the mod Zombie)
10. copy new DLL to shadow path (see 5), LoadLibraryW, resolve exports, check ApiVersion, MDML_CreateMod(ctx)
11. LoadState(blob), InitializeMod(), re-run the lifecycle events the mod missed (InitGameState if the game state exists, SetupImGui)
12. release write lock; state Loaded. On any error in 10-11: log, destroy partially created mod, state Failed (old DLL stays unloaded; button "Retry")
```
Step 2 note: the render thread takes a **shared** lock per event dispatch (cheap, uncontended 99.9% of frames). The unload task on the game thread takes the exclusive lock. A callback must never request a synchronous unload (always `Enqueue`). `OnUnload` runs under the exclusive lock, so it must not wait for the render thread.
Step 6 failure policy is an open question (rollback vs. zombie vs. refuse earlier: the cheapest safe policy is to check in-flight == 0 *before* destroying anything and abort the whole reload otherwise).

Step 11 "missed events": a reloaded mod usually starts late (game state exists). The loader replays the minimal set: `SetupImGui` (new fonts), `InitGameState` (if a world is running), optionally `BeginPlay` for existing actors only if the mod asks (flag).

## 5. DLL file handling
- Windows locks a loaded DLL (and its PDB): rebuilding fails with "cannot open output file". Options:
  1. **Shadow copy (recommended):** loader loads `Content/Mods/<Mod>/<Mod>.dll` from a copy `<Mod>/.mdml-shadow/<n>/<Mod>.dll` (+ `.pdb` copy and renamed PDB path so the debugger finds it). The original stays unlocked, the build output overwrites it freely, `n` increments each reload; old shadow directories are deleted on next start (like the `.mdml-backup` recovery idea).
  2. Rename trick (rename the loaded DLL, copy the new one in, unlock by `FreeLibrary` of the renamed one): works on NTFS but leaves a rename dance after crashes.
  3. Rebuild into a different folder via the post-build step (a developer-only convention; not usable from file watching).
- Shadow loading changes `GetModuleFileName(hModule)`-based path logic (`Mod::GetFolder`): `ModContext` must provide the *logical* mod folder; mods stop deriving folders from their module path.
- Dependencies (`BaseMod.dll`): imports are resolved by name from already loaded modules; a shadow copy of a dependency would still be found by name; reloading `BaseMod` means unloading all mods that import it first (loader knows from the PE import table or from a `Depends=` entry in `mod.ini`).

## 6. File watching
- A watcher thread (own thread in MDML.dll, `ReadDirectoryChangesW` on the mod DLL folders, 300-500 ms debounce, wait until the file size is stable and the file can be opened exclusively, since the linker writes in several steps).
- The watcher only **enqueues a reload request**; all work happens on the game thread. Disabled by default; a per-mod `HotReload=1` in `mod.ini` or a global flag in the loader config.
- UE4SS reference: `FilesystemWatcher` (polling, per-mod directory) with `m_pause_events_processing`. MDML uses the game-thread queue instead of pausing.
- Lua scripts: watch `Scripts/` of the mod; same request path.

## 7. Lua scripts (later)
A Lua mod owns one `lua_State`, its registered hooks/keybinds/ImGui callbacks (all owner-tagged via the same `ModContext`).
Reload = `OnUnload` (call script's optional shutdown), `UnregisterAll(owner)`, close the state, create a new state, run the main script. There is no code unloading problem, so this is the safest reload and the first one worth shipping; the C++ part only needs steps 2, 4, 5 and the owner concept.

## 8. What cannot (or should not) be reloaded
- `MDML.dll`, the engine core, the loader hooks (pak hooks, Tick/BeginPlay/InitGameState hooks).
- **BaseMod** and any DLL that other loaded DLLs import (unless dependents are unloaded too; refuse by default).
- Mods with native threads that do not stop on request, mods that patch game code with their own MinHook state (pre-API mods), mods that hold raw `UObject*`/function pointers inside engine structures (e.g. a swapped `UFunction::Func` not registered with the registry).
- Logic mods (Blueprint): the asset is loaded from the game pak/overwrite; the spawned actor can be destroyed and respawned (`CreateMod`), but changed BP assets cannot be re-read (UE keeps loaded packages). Possible later: "respawn logic mod actor" button. Not hot reload of content.
- **Overwrite / pak mods**: links and mounted paks are applied at startup (`CreateSysLinks`, `pak-mods.md`); assets already loaded stay loaded. Changing them needs a restart.
- Data layout changes in shared structs between old and new DLL: the state blob is versioned; mismatches fall back to defaults.
- Changes to exported headers used by other DLLs (ABI): rebuilding BaseMod without its dependents is unsupported.

## 9. Changes required in the loader (summary)
1. `Mod` ABI: `MDML_CreateMod/DestroyMod`, `ModContext`, `OnUnload` (new mod base in the Wave 3/4 restructuring).
2. `ModStack`: owner-aware API (`RemoveOwner`), delete events, shared/exclusive lock, in-flight counter, remove the global `Mod::ModRef` hack (dispatch passes the mod explicitly), fix `clearModEvents`.
3. Hook ownership: exported hook API + `HookRegistry` owner tags (`ufunction-hooks.md`, Wave 4 hook API).
4. `GameThread::Enqueue(owner, task)` overload and owner purge.
5. `ModManagerCore`/`ModRuntime` state machine: Discovered, Loading, Loaded, Unloading, Failed, Zombie; used by the F1 window (buttons Reload/Unload/Load, state column) and `LoadOrder.ini` toggles at runtime.
6. Shadow-copy loader + PDB handling.
7. Optional file watcher.
8. Resource tracking: loggers, textures/fonts registered through loader APIs (owner-tagged).

## 10. Risks
| Risk | Mitigation |
|---|---|
| `FreeLibrary` while a thread/callback is still in the DLL, then crash | Exclusive lock + in-flight counter before destroy; mods must stop their threads in `OnUnload`; unload aborts on timeout; module-handle refcount check after |
| Leaked registrations dangling after unload (event, hook, task, ImGui callback) | Owner-tagged registries are the only registration path; debug build asserts that no entry of the owner is left (walk registries after unload) |
| Hook removal races with a call running on the game thread (hooked function currently executing) | In-flight counter per owner; `Func` swap restore only after in-flight is zero; unload happens in the game-thread task, so no *game-thread* call can be mid-flight, only other threads |
| Memory growth (leaked events today, shadow DLLs) | Delete events; shadow dirs cleaned at startup; warn after N reloads |
| Static state in the DLL assumed single-initialized (singletons with `new`) | Documentation + ModContext-based state; old singletons (`Global::GetGlobals()`) stay in MDML.dll |
| CRT/heap crossing the DLL boundary (objects allocated in the mod freed in MDML or reverse) | Already the case today (shared dynamic CRT); keep dynamic CRT everywhere; free via the creating module (`MDML_DestroyMod`) |
| Debugging reloaded modules (PDB lock, breakpoints) | PDB copies per shadow; document |
| Complexity vs. benefit | Phase 1 is deliberately small (manual, one mod, DevTools-only) and has a go/no-go |
| Loader-lock hazards when `LoadLibrary` is called from the wrong place | All loads happen on the game thread in a Tick task, never from `DllMain` or the render thread |
| Reloaded DevTools with open windows loses state | `SaveState/LoadState` blob + JSON files |

## 11. Phased plan
| Phase | Scope | Exit criterion |
|---|---|---|
| **0 Prerequisites** | Owner-tagged registries: `ModStack` owner API + lock + `delete`, `GameThread` owner tasks, exported hook API (Wave 4), new mod ABI (`MDML_CreateMod`) without DllMain construction | existing mods load through the new ABI; a debug "unload all at shutdown" walk leaves no owner entries |
| **1 Manual unload/reload of one mod** | State machine, shadow copy, steps 1-12, button in the F1 window, DevTools as the first reloadable mod | edit DevTools, rebuild, click Reload: new code runs; repeat 20 times without crash or leaked entries; failed reload keeps the game running |
| **2 Safety net** | in-flight counters, timeouts, zombie handling, dependency graph, state blob | reload with a window open keeps its state; refuses to reload BaseMod |
| **3 File watching** | Watcher thread, debounce, per-mod opt-in | save-build-see loop without clicking |
| **4 Lua reload** | after Lua lands: owner-tagged Lua registrations | Ctrl+R-like reload of a script |
| **5 Runtime enable/disable** | Live `LoadOrder.ini` toggles in the F1 window use the same unload path | toggle a mod off/on in-game |

## 12. Open questions for the owner
(Nothing here is decided; bracketed text is only the author's suggestion.)
1. **Scope:** is hot reload wanted mainly for DevTools/own mods during development (then dev-only, off by default), or also as a user feature (enable/disable mods at runtime)? [dev-first, runtime toggle later]
2. **New mod ABI:** OK to replace "construct in DllMain" with exported `MDML_CreateMod/DestroyMod` (breaks all current mods, incl. BaseMod and ExampleMods; they need a mechanical port)? Old-style mods become "not reloadable" or are rejected?
3. **Prerequisite order:** the owner-tagged hook API (Wave 4) and ModStack rework come first; is Phase 3 allowed to pull them forward?
4. **Shadow copy** vs. rename trick vs. requiring a separate build output folder? [shadow copy]
5. **Failure policy** when an unload cannot complete (callback in flight, module still referenced): refuse the reload before touching anything (author's preference), roll back, or leave a zombie?
6. **Thread rule for mods:** mandatory rule "stop all your threads in `OnUnload`" acceptable? Should the loader offer a managed thread helper that it can join?
7. **Dependencies:** should BaseMod become reloadable (all dependents reload with it), or stay permanently non-reloadable?
8. **State hand-over** (`SaveState/LoadState`): worth the API, or reloaded mods always start fresh (simpler)?
9. **File watcher:** automatic reload on every rebuild ok (opt-in per mod), or manual button only?
10. **Logic mods:** is "respawn the logic-mod actor" worth offering as part of this feature, given Blueprint assets cannot be re-read?
11. **Debug builds:** only Release x64 exists today; is a Debug configuration for reload development acceptable (premake change)?
