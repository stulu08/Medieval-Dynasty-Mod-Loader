# Wave 3E: cross-boundary cleanup (3A/3D follow-ups, owner decisions 2026-10-14)

Branch `worktree-agent-acbbaabaea040e21d`, based on `modernize` @ 91f8e85. Package scope:
`Loader/ModLoader/src/{Engine,Runtime,Bootstrap,Platform,Mods}`, `Globals.*`, `Core.h`, `MDML.h`, `ModLoader.lua`,
`Config/*.ini`, `Dependencies/Dependencies.lua`, `Tools/RE/**`, `docs/REVERSE_ENGINEERING.md`.
Spec: `docs/MODERNIZATION_PLAN.md` decisions 2026-10-14, follow-ups in `3A-runtime.md` §8 and `3D-engine.md` F2/F5/F6/F8.
Status: full solution builds (only the expected C4715 in PresetMod), `bin/Release-windows-x86_64` file list identical
(37 files), `compile_generated.py` 203/203 with 0 warnings, `check_layout.py` 165/165, `check_patterns.py` 17/17 OK.
**Not tested in-game** (see "In-game test").

## Commits

| Commit | What |
|---|---|
| `767fd30` | `IniFile::Get` warns once per file/section/key when a value contains ` ;` |
| `253193b` | one `ModLoaderInfo.ini` read through `IniFile` (EngineAddresses ported, `[General] Profile` dropped), `BeginPlayOverwrite`/`ACustomClass` removed, dead UML keys/flags/`StringToDWord`/`EngineLayoutStatus` removed |
| `a36e534` | `ELevelTick` → `Engine/UE4/Engine/EngineBaseTypes.h`, `InitSDK/InitEngineGlobals` → `Engine/EngineInit.h`, `MDML.h` forwarding only, round-1 shims removed, stale comments |
| `825a2b5` | event bus: `std::shared_mutex` (dispatch shared, changes exclusive or deferred), `PostBeginPlay` follows `BeginPlay` |
| `3e65701` | layout-check notices, dump notices via `Notices`, dumps next to MDML.dll (`GetLoaderFolder`) |
| (last) | `check_patterns.py` ini rules, `REVERSE_ENGINEERING.md` (check_layout.py, ini key table), this report |

## Item by item

### 1. INI: `src/Engine` on `mdml::platform::IniFile`
- `mdml::ResolveEngineGlobals/ResolveEngineFunctions/ResolvePakFunctions` take `const mdml::platform::IniFile&`
  (`Engine/EngineAddresses.h/.cpp`). Every read names its section (`ini.Get("FunctionInfo", key)` …); the
  `select()` dance of the old parser and the `[PakOverwrite]` pre-select in `EngineSetup.cpp` are gone.
- `Runtime/EngineSetup.cpp`: no more `INI` object, no `INI.h`. `ResolveEngine(loaderInfo, mdmlDir)`.
- `ModLoader.lua`: `"%{IncludeDir.INI}"` removed (nothing in MDML.dll includes `INI.h` any more). `IncludeDir.INI`
  stays in `Dependencies.lua` (BaseMod, DevTools, PresetMod, TimeWeatherChanger, ModManager still list it; BaseMod's
  `GameMod.h` and `Tools/ModManager` still include `INI.h`). Comment there updated.
- `IniFile::Get` warns **once per (file, section, key) per process** when the value contains `" ;"` or `"\t;"`:
  `<path>: [S] K = '<value>' contains ' ;': a ';' after a value is part of the value (comments must be on their own
  line)`. The value is still returned unchanged (decision). The typed getters keep their own "text after the value"
  warning (they never call `Get`, so no double warning).

### 2. `[General] Profile` dropped
- `Bootstrap/Startup.cpp` `SetupConfig` (was `SetupProfile`) opens `<MDML dir>/Config/ModLoaderInfo.ini` once and passes
  the same `IniFile` to `LoadLoaderConfig(mdmlDir, ini)`, `LoadFeatureConfig(ini)` (was `LoadProfileConfig`) and
  `ResolveEngine(ini, mdmlDir)`.
- If `ModLoaderInfo.ini` is missing: `"<path> not found, the loader is disabled"` (was: `Profile <path> not found!`
  for the profile file); same outcome as before (loader does not start).
- Log lines `Profile Detected: Config\ModLoaderInfo.ini` / `Setup Config\ModLoaderInfo.ini` kept (same text as before,
  since the shipped profile pointed at the same file).

### 3. `BeginPlayOverwrite` / `ACustomClass`
- Removed: ini key, `LoaderConfig::BeginPlayOverwrite`, `UE4::ACustomClass` (`Engine/UE4/Engine/BlueprintFunctionLibrary.h`).
- `Runtime/GameHooks.cpp` `OnBeginPlay`: `Actor->IsA(UE4::APlayerController::StaticClass())` (the generated SDK class,
  `"Class Engine.PlayerController"` — the same class the old default named). No other user in Loader/Mods/Tools/Tests.

### 4. Dead code (3D F2/F5) and shims
Removed symbols:
- `StringToDWord` (global, `Runtime/EngineSetup.*`).
- `mdml::EngineAddresses`: `UsesFNamePool`, `IsUsingFChunkedFixedUObjectArray`, `IsUsing4_22`, `IsUsingDeferedSpawn`,
  `IsUsingUpdatedStaticConstruct`, `bIsFProperty`, `bIsDefaultObjectArrayed`. `GetUObjectCount` (Startup.cpp) no longer
  tests the chunked flag.
- `mdml::EngineLayoutStatus` / `mdml::LayoutStatus` (`EngineLayout.h`, `EngineInit.cpp`, reset in `ShutDown`). The
  replacement is what EngineDefFinder's startup check reports (item 7).
- `WarnIfRawOffsetMode` in `EngineAddresses.cpp` (it read `IsGInfoPatterns`/`IsFunctionPatterns`).
- Round-1 shims: global `namespace SymbolResolver = mdml::platform::SymbolResolver;` (`Platform/SymbolResolver.h`) and
  `mdml::GameThread` alias (`Runtime/GameThread.h`). `src/Engine` now uses `mdml::platform::SymbolResolver`
  (`EngineAddresses.cpp`) and `mdml::runtime::GameThread` (`Engine/MDML/GeneratedSupport.cpp`, incl. its warning text).
  Checked with `git grep`: neither name is used in `Mods/` or `src/UI` (DevTools/LoaderUI already use
  `mdml::runtime::GameThread`).

`Config/ModLoaderInfo.ini` — removed keys (verified against the code: none is read any more):

| Section | Removed key |
|---|---|
| `[General]` | `Profile` |
| `[GameInfo]` | `UsesFNamePool`, `IsUsingFChunkedFixedUObjectArray` |
| `[GInfo]` | `IsGInfoPatterns`, `IsSimple`, `GName` (pattern; GName is resolved from `FPool`) |
| `[FunctionInfo]` | `IsFunctionPatterns` |
| `[PakOverwrite]` | `IsFunctionPatterns` |

Keys still read: see the table in `docs/REVERSE_ENGINEERING.md` → "`Config/ModLoaderInfo.ini` keys".
`[ProcessInternalFunction] ProcessInternal` is still an optional key with a built-in default (never shipped).

### 5. `MDML.h`
- `UE4::ELevelTick` → new `Engine/UE4/Engine/EngineBaseTypes.h` (UE's header name), included by the `UE4.h` umbrella,
  so everything that sees `UE4::` sees it (Mod.h, GameHooks, mods).
- `UE4::InitSDK/InitEngineGlobals` → new `Engine/EngineInit.h` (included by `EngineInit.cpp`, `Mods/CoreModLoader.cpp`).
- `MDML.h` is a pure forwarding header (`Runtime/EngineDefFinder.h`, `EngineInit.h`, `EngineBaseTypes.h` + a map of where
  the old `MDML::` members went). Not included by any file I own any more (`Mods/Mod.h`, `Runtime/Dumper.cpp`,
  `EngineInit.cpp`, `CoreModLoader.cpp` switched); only `src/UI/LoaderUI.cpp` (3B) still includes it in this worktree.
- Stale comments fixed: `EngineAddresses.h/.cpp`, `EngineLayout.h`, `UE4/UE_LOG.h`, `Containers/UnrealMemory.h`,
  `EngineInit.cpp`, `EngineSetup.h`, `LoaderConfig.h`, `LogicMods.h`. Comments of the form "was X in MDML.cpp /
  HooksManager.cpp" (history) were kept on purpose.

### 6. Event bus (3A-Q6/Q7)
- `EventsEnabled::EnabledEvents(…)`: `PostBeginPlay = BeginPlay` (C4).
- `ModStack` (`Mods/ModStack.h/.cpp`), design:
  - `std::shared_mutex m_mutex`. `callEvent` takes it **shared** for the whole dispatch (RAII `DispatchScope`), so the
    game thread and the render thread still dispatch concurrently.
  - Only the **outermost** dispatch of a thread locks; a nested `callEvent` on the same thread (a handler that causes
    another event, e.g. spawning an actor in `Tick` → `BeginPlay`) reuses it. Re-acquiring a shared SRW lock on the
    same thread can deadlock as soon as another thread waits for the exclusive lock, so this is required. The depth
    is tracked in a `thread_local` inside `ModStack.cpp` (out of line, one copy in MDML.dll; `dllexport` of
    `thread_local` data is not possible).
  - `registerEvent`, `clearModEvents`, `pushMod`, `popMod` take it **exclusive** → when they return, no other thread
    is inside a handler they removed. Therefore removed events are now **deleted** (they leaked); `Event` got a virtual
    destructor for that. `registerEvent` moved out of line (it now owns the event).
  - Called **from inside a handler on the same thread** (a mod calling `SetupHooks` in a callback, or `popMod` after a
    handler threw), a change is **deferred**: queued per thread and applied in order, under the exclusive lock, right
    after that thread's outermost `callEvent` returns. So the vector being iterated is never modified during the
    loop, and there is no shared→exclusive upgrade deadlock.
  - `contains()` locks shared unless the thread is already dispatching.
  - Unchanged: handlers in registration order, **returning `true` stops propagation**, a throwing mod is removed (now
    applied after the current dispatch; within that dispatch it has no other handler anyway, since a mod has at most
    one handler per event name).
  - **Not synchronized** (documented in the header): `begin()/end()/operator[]/size()` — direct access used by
    `src/UI` (mod list) and BaseMod (`std::rotate` for the load-order check in `InitializeMod`). See Q3.
  - Only one stack exists (`Global::CoreMods`); `ModStack` is now non-copyable (it already was in practice).

### 7. Layout-check notice (3D-Q2)
`Runtime/EngineDefFinder.cpp` collects the outcome per group and posts through `mdml::runtime::Notices::Post`
(which also logs):
- **Persistent Error**, one summary: `Engine layout could not be verified: <groups>. Mods that use these engine parts
  may misbehave or crash. Details: Logs/MDML-log.txt` — for groups whose check failed and whose fallback scan found
  nothing / failed again, **and** for groups that could not be checked because their anchor object was missing
  (decision text: "cannot be verified"; see Q1).
- Persistent Error for the two early exits: GObjects/GNames not bound, UObject group unusable.
- **Persistent Warning** when a group failed but the scanned offsets passed and are used:
  `Engine layout differs from the PDB constants, using scanned offsets for: <groups>. …`.
- Mods keep loading in every case (unchanged). The detailed per-group log lines of 3D are unchanged.
- Dumper: `DumpObjectArray/DumpEngineInfo/DumpWorldActors` post a transient Info notice (`… dump written to <path>`)
  through `Notices::Post`. `DumpNotice::Set/Get` stay as deprecated forwarders (`Set` = post + remember; `Get` returns
  the last dump text) — 3B's UI no longer calls `Get`, so they can go after the merge.

### 8. Dumper path (3D F8)
- New `mdml::runtime::GetLoaderFolder()` (`Runtime/Paths.h`, exported): folder of MDML.dll via
  `GetModuleHandleExW(FROM_ADDRESS)` + `GetModuleFileNameW` (long paths handled).
- Dumps go to `<MDML dir>/Dump/` (`CreateDumpDir` uses `create_directories`, files opened with `_wfopen_s`). In the
  installed game this is the same folder as before (`Binaries/Win64/Dump`, = working directory), so no user-visible
  move; it just no longer depends on the CWD.
- Other relative paths in my files: only the mod-logger log line in `Mods/Mod.cpp` printed a CWD-relative path; it now
  uses `FormatPath` (relative to the game root). Everything else (`Config`, logs, NoOverwrite, ModLinks, LoadOrder,
  SymbolCache) was already absolute from the MDML/EXE location.

### 9. `Tools/RE/check_patterns.py` (3D F6) and docs (3D F7)
- It already read `namespace Symbols` from `Engine/EngineAddresses.cpp` (3A fixed it). Run against the game EXE+PDB
  (read-only): **17/17 OK** before and after the ini cleanup.
- `parse_ini` now follows the `IniFile` rules (only `;` lines are comments, `#`/`//` are not; names case-insensitive;
  UTF-8 BOM tolerated). Docstring lists the removed mode keys.
- `docs/REVERSE_ENGINEERING.md`: `check_layout.py` added to "Tools" and "After a game patch"; symbol location fixed
  (`EngineAddresses.cpp`, was `MDML.cpp`); new table of the ini keys still read and the ones no longer read; stale
  "not fixed yet" entries crossed out (C1, C2, DllMain).

### 10. Tests
- `python Tests/SDKCompileTest/compile_generated.py "<game>\Binaries\Win64\SDK-Out\4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\MDML-SDK"`:
  **203/203, 0 warnings** (read-only on the game folder).
- `python Tools/RE/check_layout.py`: **165 constants, 0 mismatches**.
- Full solution build (VS 2026, Release x64): only 1× C4715 (PresetMod). `bin/Release-windows-x86_64`: 37 files,
  list identical before/after. Project files regenerated with premake 5.0.0 `vs2026` (only `ModLoader.vcxproj(.filters)`
  changed: 2 new headers, INI include dir gone).

## Shims left for the orchestrator (remove after merging 3B/3C)
- `MDML.h` (forwarding only) — still included by `src/UI/LoaderUI.cpp` in this worktree.
- `DumpNotice::Set/Get` (`Runtime/Dumper.h`) — nothing in my files calls them; 3B's UI no longer calls `Get`.
- Untouched on purpose (used by 3C's files in this worktree): `TUObjectArray`, `GetAsTUArray`, `IsChunkedArray`,
  `GetAsChunckArray`, `UStruct::GetChildren()` (old meaning) + `GetChildFields()`, `Dependencies/INI` +
  `IncludeDir.INI` in `Dependencies.lua` (BaseMod `GameMod.h`, `Tools/ModManager`, and four mod `.lua` files list it).

## Existing user ini (game folder is never overwritten by deploys)
The game's own `Binaries/Win64/Config/ModLoaderInfo.ini` keeps working unchanged. Keys there that are now
**ignored**: `[General] Profile` (if it points to another file, that file is no longer read — everything must be in
`ModLoaderInfo.ini`), `[GameInfo] UsesFNamePool`, `IsUsingFChunkedFixedUObjectArray`, `BeginPlayOverwrite` (also
`IsUsingDeferedSpawn`, `IsUsing4_22`, `IsDefaultObjectArrayed` from older inis), `[GInfo] IsGInfoPatterns`, `IsSimple`,
`GName`, `[FunctionInfo] IsFunctionPatterns`, `[PakOverwrite] IsFunctionPatterns`, and any `[UObjectDef] …
[FFieldClass]` sections. Before deploying, check that file for `Key = value ; comment` lines: they now produce a
one-time warning per key in the log (and the value includes the comment, as already since 3A).

## Behaviour changes (in-game test)
1. Startup log: no `[...] IsGInfoPatterns=0 …` warnings possible any more; with an old ini that has `Profile=` pointing
   elsewhere, that file is not read. Possible new warning lines: `… contains ' ;' …` for trailing comments.
2. Logic mods: `PostBeginPlay` (actors + the core-mod event) fires on a PlayerController's BeginPlay — same class as
   before, now via `APlayerController::StaticClass()`.
3. Mods whose preset has `BeginPlay = false` (`GuiOnly`, `DXOnly`, `GuiAndDX`, `None`) **no longer get
   `PostBeginPlay`**. In-repo: DevTools (`GuiOnly`, does not override `PostBeginPlay`). BaseMod (`All`),
   TimeWeatherChanger (`EngineAndGui`), PresetMod (`Default`) are unaffected.
4. Event bus: unregistering a handler now deletes it; changes made from inside a handler apply right after the
   current dispatch. Watch for hangs (would point to a lock problem): load a save, open/close F1 repeatedly while the
   game ticks, toggle DevTools/BaseMod windows.
5. A failed/unverifiable engine layout group shows a persistent red notice in the F1 window (3B displays it). Normal
   case: no notice, only the `Engine layout verified …` log line.
6. Dumps (F1 → object/engine info/world actors) show a fading notice `… dump written to <full path>`; files land in
   `Binaries/Win64/Dump/` as before.

## Open questions for the owner (with recommendation)
- **Q1 Unchecked groups = Error?** A group whose anchor object is missing (not a mismatch, just not checkable) is
  included in the persistent **Error** notice ("could not be verified"), as the decision reads. Alternative: Warning.
  Recommendation: keep Error — in 4.27 all anchors (Actor, Vector, ESearchCase, …) always exist, so a missing anchor
  means something is badly off.
- **Q2 Scanned offsets = persistent Warning?** When the fallback scan fixed a group, I post a persistent Warning (the
  game build no longer matches `EngineLayout.h`). Recommendation: keep (it tells you to run `check_layout.py`).
- **Q3 Unsynchronized `ModStack` accessors.** `begin/end/[]/size` are raw; BaseMod `std::rotate`s the mod list in
  `InitializeMod` (game thread) while the render thread may dispatch. Add a locked `ModStack::ForEachMod`/`MoveToFront`
  API and move BaseMod/UI to it (3C/3B files)? Recommendation: yes, in the next round (or with the public API split).
- **Q4 `[ProcessInternalFunction] ProcessInternal`.** The only pattern with a built-in default and no shipped key. Move
  it into `ModLoaderInfo.ini` (e.g. `[FunctionInfo] ProcessInternal`) so all patterns live in one place?
  Recommendation: yes, low risk (check_patterns.py would read it there).
- **Q5 Log wording.** `Profile Detected: …` / `Setup …` lines are UML leftovers (the "profile" concept is gone).
  Reword to `Loader config: Config\ModLoaderInfo.ini`? Recommendation: yes, together with the logger rework (Wave 4).
- **Q6 Missing `ModLoaderInfo.ini`.** Still disables the loader (as before). With the PDB, MDML could run on built-in
  defaults. Recommendation: keep disabling — the ini also carries `UseDebugUI`/overwrite switches the owner expects.
