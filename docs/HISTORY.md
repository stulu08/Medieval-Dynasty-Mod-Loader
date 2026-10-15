# MDML modernization — history archive

Verbatim session handoffs and test logs moved out of `docs/MODERNIZATION_PLAN.md` on 2026-10-13 (plan cleanup).
Kept for context; **not** the current state — read the plan's "Current state" section for that. Paths inside may be
pre-restructure (see `docs/reports/repo-restructure.md` for the old→new mapping).

## Phase 1 — in-game test log (2026-10-09)

5. ☑ **In-game test with the owner**: loader starts, UI opens (DX11), BaseMod loads, a Logic mod (StaticLoadObject/SpawnActor) and an Overwrite mod (pak hooks) work. Collect `Logs/`.
   - Test 1 (2026-10-09, game 2.7.0.4): all 17 addresses resolved correctly **via the pattern fallback**; PDB was
     wrongly rejected (DEFERRED_LOADS → SymType reported as SymDeferred; fixed). Hooks, BaseMod, DX11 UI, overwrite
     hardlinks and shutdown cleanup work. Crash when using BaseMod's give-item tool and then opening the skill tree:
     `Failed to find function UpdateWeightOnAdd in BP_CharacterStatsComponent_C` → access violation in GC.
     Cause (strong hypothesis): the **generated SDK is from game 2.2.0.8**; its fixed member offsets on
     `BP_BaseCharacter_C` (StatsComponent +1424, InventoryComponent +1440) are stale, so BaseMod calls inventory BP
     functions on the stats component. Fix = regenerate SDK (2.4). Until then: don't use BaseMod game tools.
   - Test 2: all 17 resolved via `pdb`, clean shutdown. But lookups took ~12 s total (decorated-name lookups scan
     all publics) → switched to plain-name lookup verified by decorated name (~0.05 s offline).
   - Test 3 (2026-10-09): all 17 via `pdb` within the same second, clean shutdown. **Phase 1 done.**
   - Not verified in-game yet: Logic mods (no Logic mod installed) and the pak overwrite on an asset that is actually loaded.


## Handoff — session 2026-10-13 (start of session; archived)
`modernize` head is this commit. Everything below up to "Next" is merged, built (VS 2026 / premake 5.0.0, see CLAUDE.md
Build) and **tested in-game 2026-10-13** (deployed build = 6986d4c; game-folder state before it backed up in
`C:/dev/MDML/backup/2026-10-13_pre-6903ac3`):
- Exported hook API `mdml::Hooks` ☑ works in-game (all loader hooks registered through it, clean shutdown).
- PDB cold start fixed with the RVA cache `Config/SymbolCache.txt` ☑ (setup 47 ms, pak hooks at 0 UObjects).
  Report `docs/reports/pdb-lookup-timing.md`.
- Toolchain: premake 5.0.0 + VS 2026 (v145); VS 2022 is gone on this machine. Build `MDML.slnx`. Building a single
  vcxproj fails in the post-build Config copy (`$(SolutionDir)`), always build the solution.
- SDK generator part 1 ☑ first in-game generation works (202 headers in 2 s). **Offline compile test fails 66/203** —
  3 bug classes (core FColor/FKey alignment, const pointer params, enum `_MAX` overflow): see
  `docs/reports/sdk-generator-first-ingame-run.md`. ← **next task**.
- Lua scripting design + spike ☑ merged (`docs/design/lua-scripting.md`, `Loader/Scripting/`, report
  `docs/reports/lua-scripting-spike.md`); 17 owner questions OQ-1..OQ-17 open — ask before implementing.
- Agent worktrees of this and earlier sessions were removed (branches `worktree-agent-*` kept; all merged).

**Next (in order):**
1. Fix the 3 SDK generator/core bug classes, re-run `compile_generated.py` until 203/203 (owner may need to regenerate
   in-game if the generator changes; DevTools is enabled in the game copy).
2. Still-open owner questions: Phase 3 design docs (`docs/design/{live-view,hot-reload,ufunction-hooks,pak-mods}.md`),
   generator Q1–Q3 (`docs/reports/sdk-generator-part1.md`), LoadOrder questions (pak-only folders, `BaseMod = 0`),
   Lua OQ-1..17, Wave 2.4 naming.
3. INI wrapper `Config::IniFile` + mINI; Wave 3 (parallel splits); Wave 4 (C++20, spdlog/ImGui upgrades, JSON to Dependencies/ (done in the repo restructure),
   missing upstream license files); migrate BaseMod to the generated SDK headers.
Orchestration style: parallel agents (Sonnet where fitting) in worktrees — **every agent prompt must start with
`git reset --hard <modernize head>`** (worktrees are created from old `main`); orchestrator merges, builds, backs up the
game folder, deploys, and asks the owner to test. Never launch the game yourself.

## Handoff — session 2026-10-10 (older)
`modernize` head: Waves 2.1, 2.2, 2.3 + game-thread queue + overwrite backup fix + root-dir fix merged, built, **all tested
in-game OK** (see Wave 2 status lines below). Game folder has the build of 8f67fe7 (= 2.3).

**In progress when the session ended:**
- **Overwrite fixture Test A running**: `Content/Mods/OverwriteBackupTest/` is deployed in the game. While running,
  `check.py` showed `STATE: LINKED` (correct). Next: after the owner quit normally, run
  `python Tests/OverwriteBackupTest/check.py "E:\SteamLibrary\steamapps\common\Medieval Dynasty"` → expect
  `STATE: ORIGINAL` + log `Restored original file` / `Deleted 1/1 file links`. Then Test B (kill via Task Manager,
  restart, expect recovery) per the fixture README. Afterwards remove `Content/Mods/OverwriteBackupTest/` (README §5).
  Original file copy: `C:\dev\MDML\backup\2026-10-10_chroma-original`.
- **Two agents were running in worktrees** (`.claude/worktrees/agent-*`, branches `worktree-agent-*`); if they did not
  finish, their branches may hold partial commits — check `git log modernize..<branch>` before restarting the work:
  - Wave 2.4 GameProfile split (report would be `docs/reports/wave2/2.4-gameprofile-split.md`).
  - SDK generator part 1: DevTools mod + vendored Dumper-7 + MDMLGenerator + core runtime helpers + offline compile
    test (report would be `docs/reports/sdk-generator-part1.md`).
  Note: agent worktrees were created from old `main` (ef78da9); every agent prompt must start with
  `git reset --hard <modernize head>`.

**Agents started 2026-10-10 ~13:00 (owner asked to use the remaining weekly limit on features; may be cut off —
their worktree branches `worktree-agent-*` hold WIP commits, check `git log 158ba5e..<branch>` and merge/continue):**
- SDK generator part 1 (resumed twice; DevTools + vendored Dumper-7 + GeneratedSupport + compile test committed).
- Exported hook API `mdml::Hooks` ☑ merged cleanly (cherry-picks up to c813afd, `docs/reports/hook-api.md`), but the
  merged state built 2026-10-13 (6903ac3: premake 5.0.0 + VS 2026, only C4715; mods import nothing from MinHook) and
  deployed (backup `C:\dev\MDML\backup\2026-10-13_pre-6903ac3`) → awaiting owner smoke test + first in-game SDK generation.
- 2026-10-13: owner's run of 2026-10-12 logged `Profile setup took 18938 ms` (normally ~375 ms; 1-3 s per PDB symbol, pak
  hooks only live at 2617 UObjects). Sonnet agent investigating offline (report would be `docs/reports/pdb-lookup-timing.md`).
  No `SDK-Out` folder exists yet, so the in-game generation has not produced output so far.
- Lua scripting ☑ merged 2026-10-13 (e6846da..81b917d): design `docs/design/lua-scripting.md` + isolated spike in `Loader/Scripting/`
  (own premake workspace, test passes; report `docs/reports/lua-scripting-spike.md`). 17 owner questions OQ-1..OQ-17 open.
- PDB cold start ☑ fixed 2026-10-13 (6986d4c): RVA cache `Config/SymbolCache.txt` (owner chose it); deployed, awaiting in-game check
  (2nd start must log `Using 17 cached symbol addresses`).
- Phase 3 design docs ☑ merged (a8e11ed..4188591): `docs/design/{live-view,hot-reload,ufunction-hooks,pak-mods}.md` —
  each ends with owner questions (priority of features, pak signing/encryption policy, new mod ABI for hot reload,
  hook mechanism/threading, Live View read-only first). Ask the owner before implementing any of them.
- SDK generator part 1 ☑ merged; THIRD_PARTY_LICENSES ☑ merged. Generator deployed (DevTools enabled in game copy),
  first in-game generation + `compile_generated.py` on the output still pending.
- `THIRD_PARTY_LICENSES.md` + README credits.
Also waiting for the owner: in-game test of the deployed build d7835a5 (2.4 + LoadOrder + dump notice).

**Next after those (owner decisions already taken, see decisions log 2026-10-10):**
1. Merge 2.4 + generator part 1, build, deploy, owner smoke test (+ generate a package in-game via DevTools).
2. One Sonnet agent: `Config/LoadOrder.ini` (Name = 1/0, auto-append new mods, BaseMod first) in `LoadMods`, and
   replace the dumper `MessageBoxA` (`Log::SetupMessage` in `Loader/ModLoader/src/Runtime/Dumper.cpp`) with log line + F1-window notice.
3. INI wrapper (`Config::IniFile`) + mINI swap; then Wave 3 (parallel splits) and Wave 4 (C++20, libraries).
Orchestration style the owner wants: parallel agents (Sonnet where fitting), orchestrator merges/builds/deploys
(back up the game folder state to `C:\dev\MDML\backup\<date>_<commit>-tested` first) and asks the owner to test.

## Handoff — state at end of session 2026-10-09 (older)
Done today: Phase 1 (PDB resolver, verified in-game), 2.0 code inventory, 2.1 hygiene/CI/premake setup, library research,
Dumper-7 reference dump (crash cause confirmed), SDK generator design draft (`docs/SDK_GENERATOR.md`).

**Smoke-tested in-game 2026-10-10** (build of 402802c deployed; previous game-folder state backed up to
`C:\dev\MDML\backup\2026-10-10_pre-smoketest`): main menu → load save → F1 UI → quit. No crash, clean shutdown, all
17 symbols via PDB, BaseMod initialized, owner confirmed the F1 UI looks fine. Game-log errors (missing `Male_Talk*`,
`VolumeToRender` packages, ChromaSDK, Nvidia boost) appear in every earlier run too → not ours.
**Not exercised:** `.mdml-backup` handling (no overwrite mod active; needs a loose-file test mod). Changes covered:
- Overwrite mods back up/restore loose original files (`ModLoader.cpp`); BaseMod's cheat-menu overwrite now `Enable=False`.
  Test: enable it once, check `.mdml-backup` handling only matters for loose files (cheat menu is a pak asset).
- INI parser no longer throws on duplicate sections/keys.
- `GetVariable`/`SetVariable` search super classes; BaseMod uses name-resolved members (game state, managers, inventory
  component); item tools disabled; stale `M_SetCheats` write removed.
- Core fixes: `FWeakObjectPtr` (C9), `FQuat` identity + `Rotator()` math (C11/C12), `FTransform` ctor.
- SDK project built without LTCG: SDK.lib 2.69 GB → 222 MB, full rebuild 134 s.
- Dumper-7 is installed in the game as `Content/Mods/Dumper7/Dumper7.dll` (F7 dumps). Remove the folder when not needed.

**Next steps (in order):**
1. ☑ In-game smoke test of the above (2026-10-10, passed).
2. ◐ Wave 2 (serial, see code inventory §7): core compiled into MDML.dll and exported; `SetupProfile` out of `DllMain`;
   sequential `LoadLibraryW` mod loading; game-thread task queue. Smoke test after each step.
   - 2.1 ◐ Proxy dependency broken: `SDK::SelectedGameProfile` is defined in `Loader/ModLoader/src/Globals.cpp` and exported
     (`LOADER_API`); no project links `Proxy` (formerly `LoaderAutoInjector`) any more, no DLL imports `xinput1_3.dll`. Expected side
     effect: 7× LNK4286 (SDK.lib objects inside MDML.dll import a local symbol) until 2.3. ☑ In-game test passed 2026-10-10.
   - 2.2 ◐ Merged (5271d85, report `docs/reports/wave2/2.2-startup.md`): proxy uses CreateThread+LoadLibraryW; one MDML init
     thread (DllMain only starts it); mods loaded sequentially (BaseMod first, then alphabetical) before game hooks.
     Test 1 (2026-10-10): pak hooks live 536 ms after process start with 0 UObjects; loader setup 665 ms. **Regression:**
     'corrupted game files' popup during intro movies — `rootGameDir` came from `current_path()`, which the engine had
     already switched to `Binaries/Win64`, so NoOverwrite.ini keys stopped matching and loose game files
     (`Content/Movies/MP_Movies.uasset`) were served as mod overwrites. Fixed in aa0f3c0 (root derived from MDML.dll's
     path). Lesson: nothing in the loader may depend on the working directory. Awaiting re-test.
   - Game-thread queue ◐ Merged (8b64c75, `docs/reports/wave2/gamethread-queue.md`): `mdml::GameThread::Enqueue`,
     drained in the Tick hook; loader console command, dumps and mod buttons routed. BaseMod `DrawImGui` calls still
     off-thread (follow-up with the BaseMod/DevTools split). ☑ Console command (`gamma`) works in-game; `stat fps` has no
     effect because stats are compiled out of Shipping builds.
   - Overwrite backup test fixture ☑ (`Tests/OverwriteBackupTest/`, README + read-only `check.py`). Its
     `REVIEW.md` lists 3 HIGH findings in the link/backup code (throwing filesystem calls after the rename, cleanup
     throws in DLL_PROCESS_DETACH, stale link renamed over an existing backup) → fixed in 43fe791 (offline harness, 12
     scenarios OK; symlink mode untested). Fixture Test A ☑ and Test B ☑ 2026-10-10 (kill via Task Manager → next start: `Old file links found`, restore,
     then normal cycle; final state ORIGINAL). Fixture removed from the game.
   - 2.2 re-test ☑ (2026-10-10): popup gone, paths correct. Closing the MDML console window with X kills the whole
     process (Windows behaviour, no clean shutdown) — expected; see open decisions.
   - 2.3 ☑ Merged (e45d084..8f67fe7, report `docs/reports/wave2/2.3-core-into-mdml.md`): hand-written core in
     `Loader/ModLoader/src/Engine/`, exported via `MDML_ENGINE_API` (alias of `LOADER_API`); one engine init
     (`Engine/EngineInit.cpp`), no per-mod `InitSDK`; SDK.lib = generated only and imports the core; MDML compiles
     `Actor`/`GamePlayStatics`/`KismetSystemLibrary.cpp` directly instead of linking SDK (cycle). LNK4286 gone. Awaiting
     in-game test. ☑ Tested 2026-10-10: all engine classes found, BaseMod init, engine-info dump, clean shutdown.
   - 2.4 ◐ Merged (6af6575..0af5e9a, report `docs/reports/wave2/2.4-gameprofile-split.md`): `GameInfo.h`/`class SDK` gone;
     `mdml::Layout` (`Engine/EngineLayout.h`), `mdml::Addresses` (`Engine/EngineAddresses.*`, incl. symbol resolution),
     `mdml::Config` (`Runtime/LoaderConfig.*`), `mdml::UnrealLogger` (`Engine/UE4/UE_LOG.h`). Build green (only C4715).
     ☑ Tested 2026-10-10 (d7835a5) together with load order + dump notices: LoadOrder.ini generated (BaseMod, Dumper7),
     3 dumps logged `… dump written to …`, clean shutdown. First F1 took 16 s (D3D11 hook setup) — most likely CPU
     contention from parallel builds/agents at that moment; re-check timing in a quiet run.
   - Load order + dump notices ◐ Merged (095bc06, report `docs/reports/loadorder-and-dump-notices.md`): `Config/LoadOrder.ini`
     generated on first run (not shipped), `0` disables the whole mod folder (DLL, logic mod, overwrites), BaseMod pinned
     first; dump `MessageBoxA` replaced by log line + fading notice in the F1 window. ☑ Tested with 2.4.
   - SDK generator part 1 ◐ Merged (917e174..3926add as cherry-picks, report `docs/reports/sdk-generator-part1.md`,
     `docs/SDK_GENERATOR.md` rewritten): `Mods/DevTools/` mod (disabled by default via commented `[Mod]` in mod.ini) +
     vendored Dumper-7 (`Dependencies/Dumper-7`, C++latest project `DevTools.Generator`) + MDMLGenerator; core runtime
     support `Loader/ModLoader/src/Engine/MDML/GeneratedSupport.*`; offline compile test `Tests/SDKCompileTest` +
     `compile_generated.py`. Deployed with DevTools enabled in the game copy; awaiting first in-game generation.
   - `THIRD_PARTY_LICENSES.md` + README credits ☑ (2f70981); follow-ups listed at its end (missing upstream license files).
3. 2.4 SDK generator (`docs/SDK_GENERATOR.md`): MDMLGenerator on Dumper-7, DevTools mod with export lists.
4. Remaining library decisions (open decisions below), then C++20 + spdlog/ImGui upgrades (Wave 4).

