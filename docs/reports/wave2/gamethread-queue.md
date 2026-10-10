# Game-thread task queue (work package D)

## API (`ModLoader/src/Utilities/GameThread.h`, namespace `mdml`, exported with `LOADER_API`)

```cpp
mdml::GameThread::Enqueue(std::function<void()> task);  // thread-safe, any thread
mdml::GameThread::IsInGameThread();                      // false until the first Tick drain
mdml::GameThread::RunPending();                          // loader only, called from MDML::Tick
```

`RunPending` is the first statement of `MDML::Tick` (the `UWorld::Tick` hook). It captures the game thread id on its first call, then does a single atomic load when the queue is empty. Otherwise it swaps the pending vector out under the mutex and runs the tasks outside the lock. Each task is wrapped in try/catch and failures are logged with `Log::Error_MDML`, so no exception reaches the engine.

## Threading rules for mod authors

- UE (UObjects, `ProcessEvent`, console commands, spawning, ...) may only be touched on the game thread. `Tick`, `BeginPlay`, `InitGameState` etc. already run there.
- `DrawImGui`, `DX11Present` and any thread you create yourself are NOT the game thread. Wrap UE calls in `mdml::GameThread::Enqueue([...]{ ... })`.
- Capture data by value (strings, ints). Do not capture pointers to ImGui/UI-local buffers, and re-validate UObject pointers inside the task (the object may be gone by the next tick).
- Tasks run on the next Tick, never inline, even when `Enqueue` is called from the game thread. A task may enqueue more tasks; they run on the following tick.
- Do not block waiting for a task from the game thread (deadlock risk) and keep tasks short.

## Routed through the queue (loader)

All in `ModLoader/src/UI/LoaderUI.cpp`:
- `UILogicTick` (UI-logic thread): `DumpObjectArray`, `DumpEngineInfo`, `DumpWorldActors`, and `UGameplayStatics::ExecuteConsoleCommand`. The command string is copied into the lambda.
- Mod buttons (render thread): `CallFunctionByNameWithArguments("ModMenuButtonPressed N")`. The lambda captures only the mod index and button index. It re-checks bounds, `IsEnabled` and `CurrentModActor` on the game thread.

## Follow-ups (not migrated)

BaseMod `DrawImGui` (`BaseMod/src/BaseMod.cpp`, runs on the render thread) calls UE directly, for example:
- `td_Blueprint_Library->ProcessEvent(IsDevelopmentBuild/IsShippingBuild)` and `UObject::FindClass` every frame in the "Hooks" header.
- `Utils::Gui::UE4ActorTransformEdit(PlayerCharacter)` (reads/writes actor transform).
- Item list, "Add Item" and the object browser (`Utils::Export`, GObjects walking) read UObjects while drawing.
- Also check `ExampleMods/PresetMod` and `ExampleMods/TimeWeatherChanger` `DrawImGui` (not inspected in detail).

Suggested pattern: snapshot UE data into plain structs on the game thread (Tick or an enqueued task), and have DrawImGui draw only the snapshot and enqueue edits. This belongs to the later BaseMod/DevTools split.

## Decisions taken (owner may veto)

- `Enqueue` never runs inline, even on the game thread. This gives one predictable ordering and avoids re-entrancy. The cost is one tick of latency.
- The game thread id is captured at the first `RunPending` (first Tick), not at InitGameState. `IsInGameThread()` is false before that.
- Dumps are also routed through the queue, although they are not strictly UE-mutating. They walk GObjects, which the game thread can modify concurrently. A long dump now blocks one game frame (hitch) instead of running in parallel. Alternative if the hitch is unwanted: keep them on the UI thread.
- Mod buttons run one frame later than before.
- No size cap or backpressure on the queue.

## In-game test steps

1. Start the game with the loader and open the F1 window.
2. Use the console-command box to run a command, for example `stat fps` or `showdebug`. Expected: the command takes effect, no crash.
3. Click Dump Objects / Engine Info / World Actors. Expected: dump files appear as before, with a short hitch in the game.
4. Enable a mod that has buttons and click one. Expected: the mod's `ModMenuButtonPressed` event fires. Disable the mod and click again: nothing happens, no crash.
5. Failure check: a thrown exception inside a task would show up in the log as `GameThread task threw an exception: ...`. There are no new log lines on the normal path.
6. The build has no new warnings from these files. A `LNK4098` (LIBCMTD conflict) was seen in the ModLoader link. It was not checked against the baseline.
