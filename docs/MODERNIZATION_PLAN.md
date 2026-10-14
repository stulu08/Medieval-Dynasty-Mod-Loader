# MDML modernization plan

Owner decisions (2026-10-09):
- MDML stays a **standalone loader** (own core). UE4SS = inspiration only. Open-source libraries are welcome.
- No backwards compatibility with old MDML mods required.
- Order: **1) make it run again → 2) clean up / restructure → 3) new features.** No new features before 2 is done.
- Ask the owner rather than deciding alone. Keep these docs current.

Status legend: ☐ todo · ◐ in progress · ☑ done

---

## Current state — READ THIS FIRST (updated 2026-10-14)
Older handoffs and test logs: `docs/HISTORY.md` (archive, verbatim).

- **Wave 4 in progress** (2026-10-14), libraries done, **in-game test passed** 2026-10-14 (owner; themes not
  checked visually). Logs: "Loader config: …", "Hooks initialized", all 24 symbols from the PDB cache, "Engine layout
  verified", no format errors; BaseMod/DevTools logs written; clean shutdown. Generate SDK: 202 headers in 2.0 s, 0 missing,
  `_OLD` backup removed.
  - 4.1 (7f951ac) all projects C++20 (DevTools.Generator stays C++latest); `compile_generated.py` uses `/std:c++20`.
  - 4.2 (8131d1a) spdlog 1.17.0 / fmt 12.1 (`/utf-8` workspace-wide), log format strings compile-time checked,
    Logger double-free + null-deref + registry ownership fixed; nlohmann/json 3.12.0; 3E-Q4 `[FunctionInfo] ProcessInternal`
    in the shipped ini (no built-in default); 3E-Q5 startup log wording ("Loader config: …", "Hooks initialized").
  - 4.3 (57f619b) Dear ImGui 1.92.9b-docking (export via "MDML" block in `imconfig.h`), ImGuiColorTextEdit upstream
    `ca2f9f14` + MDML patches.
  - Checks: solution 0 warnings, `compile_generated.py` 203/203, `check_patterns.py` 17/17 OK.
  - **Deployed** 2026-10-14 (MDML.dll/.pdb, xinput1_3.dll, BaseMod/DevTools dll+pdb); backup
    `C:\dev\MDML\backup\2026-10-14_pre-57f619b`. Game `Config/ModLoaderInfo.ini` untouched: it has no
    `ProcessInternal` key, fine while the PDB resolves it (add the key with owner approval later).
  - Test checklist: (1) startup log has "Loader config: …", "Hooks initialized", no fmt/format errors, all symbols from
    PDB, "Engine layout verified"; (2) F1 window: opens/closes, themes look right (tab colours renamed), docking works,
    text fields/INI editor (TextEditor: typing, scrolling, INI highlighting); (3) DevTools object browser + transform
    editor, Generate SDK; (4) load a save, logic mods fire; (5) mod logs (`Logs/*-log.txt`) written, quit cleanly.
  - **4.4 Step A ☑ (2026-10-14, build 0 warnings, in-game test passed — owner 2026-10-15)** public API split: `Loader/ModLoader/include/MDML/`
    (umbrella `MDML/MDML.h`), mods see only `include` + engine core; widgets `mdml::ui::widgets`; `LoaderUI` replaced by
    `MDML/UI.h`; `Global` → internal `mdml::mods::Registry`; locked ModStack API (`MDML/Mods.h`: `ForEachMod`/`FindMod`/
    `GetModCount`/`MoveToFront`, 3E-Q3); F1 menu state atomic in `ImGuiHost`. Report: `docs/reports/public-api.md`.
    Checks: `compile_generated.py` 203/203, `check_layout.py` 165/0, exports verified (no `Global`/`ModStack`/`LoaderUI`).
    **Deployed** 2026-10-14 (MDML.dll/.pdb, xinput1_3.dll, BaseMod/DevTools dll+pdb; configs untouched), backup
    `C:\dev\MDML\backup\2026-10-14_pre-5c6e28f`.
  - **Step B progress 2026-10-15** (report `docs/reports/wave4-stepB.md`):
    - Generator fixes (owner noticed the enums): Blueprint enums use their display names (`EBP_Enum_AIState::Inactive`
      instead of `NewEnumerator0`, ed3be76), Blueprint struct members lose the GUID suffix (`FST_Time::Hour` instead of
      `Hour_3_AEEF…`, 98b6730). **Deployed** with the 10257fe build (MDML.dll/.pdb, xinput1_3.dll, BaseMod + DevTools
      dll/pdb; configs untouched), backup `C:\dev\MDML\backup\2026-10-15_pre-ed3be76`; DevTools.dll replaced again with
      98b6730. Owner regenerates "All packages" with it.
    - B2–B5 done in the working tree (build: MDML.dll, DevTools, PresetMod 0 warnings; `check_layout.py` 165/0): core
      on the generated SDK, `EngineHelpers` (GetWorld/SpawnActor/correct 4.27 `FActorSpawnParameters`/user-enum display
      names/`GetDataTableRowMap`) instead of the hand-written engine stubs, `MDML/GameMod.h` in MDML.dll, BaseMod +
      LoadOrder's "BaseMod first" rule + `MDML/Memory.h` + LegacyExporter + `Loader/SDK/src` + `SDK.lua` deleted.
      Regenerated "All packages" (owner, 01:39, with f8a8a52: 2523 headers, 0 skipped, no guard fired; no
      `NewEnumerator*` and no GUID member names left) copied into `Loader/SDK/Generated`; **full solution 0 warnings,
      0 errors** (incl. TimeWeatherChanger on `BP_WeatherManager.hpp`, DevTools give-item). Committed. Per-header
      `compile_generated.py` run of the repo copy: see the report. Open: owner in-game test of step B.
    - The first regeneration with 98b6730 failed after 3 s ("unknown C++ exception"; with /EHa most likely an access
      violation in the new enum/struct name lookups). f8a8a52 guards both per enum/struct (failures are logged as
      "MDMLGenerator: enum ..." and listed in GenerationReport.txt). Because `SDK.lib` was already gone, it was deployed
      **with the whole step B build** (owner OK): MDML.dll/.pdb, xinput1_3.dll, DevTools.dll/.pdb; game
      `Content/Mods/BaseMod` **moved** to the backup `C:\dev\MDML\backup\2026-10-15_pre-stepB` (with the replaced files).
      Owner: step B in-game test (checklist `docs/reports/wave4-stepB.md`) + regenerate.
  - **Step B (prepared 2026-10-14, decisions in the log "Wave 4 step B"):** full generated SDK in the repo (owner:
    "alles im Repo"), loader + DevTools + examples → generated SDK, `GameMod` into the loader API with typed generated
    getters, BaseMod deleted, `SDK.lib` + `MDML/Memory.h` go. Then in-game test. Findings while preparing:
    - The old SDK is wired into the **loader core**: `src/Engine/UE4.h` includes `UE4/SDK.h` + `Medieval_Dynasty/SDK.h`,
      `CoreUObject/Object.cpp` includes `SDK.h`, `ModLoader.lua` compiles `Actor.cpp`/`GamePlayStatics.cpp`/
      `KismetSystemLibrary.cpp` from `Loader/SDK`. 71 uses of old engine types in 19 files (loader: `GameHooks`, `LogicMods`,
      `Dumper`, `LoaderWindow`, `Mods/Mod.cpp`, `Registry.h`, public `MDML/Mod.h`; BaseMod; DevTools `ObjectBrowser`,
      `PlayerTools`, `ItemTools`, `LegacyExporter`; `PresetMod`). `MDML/Memory.h` is used by `UI/ImGuiHost.cpp` and
      `CoreUObject/NamePool.h`.
    - Old and generated headers cannot share a TU (same names in `namespace UE4`) → no partial migration; all consumers
      switch in one step.
    - The last generator output is only 3 requested packages + deps (202 headers). "All packages" exists in the DevTools UI
      (`m_allPackages`) but was **never run** → owner must run it in-game first.
    - **B0 full generation ☑ (owner, 2026-10-14 23:53):** "All packages" output at `E:\SteamLibrary\steamapps\common\
      Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\SDK-Out\4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\MDML-SDK`:
      2523 headers (+ `NameCollisions.hpp`, `MDML_SDK.hpp`), 52 MB, 4196 classes, 2148 structs, 1289 enums, 30901
      functions, 0 skipped, 0 missing, 49 opaque members. Not yet compile-checked (`compile_generated.py`). Step A in-game
      test status: not reported yet (ask the owner). **Resume with B1.**
    - Sub-steps: **B0 (owner)** in-game test of step A (+ build restructure `10257fe`, not deployed yet) and a full
      "All packages" generation; **B1** copy the full output into `Loader/SDK/` (old generated files removed, header-only,
      no `SDK` static-lib project), `compile_generated.py` on every header; **B2** loader core on generated headers (`UE4.h`
      without old aggregators, the 3 compiled old `.cpp` gone; hand-written hybrids `GamePlayStatics`/`DataTable`/
      `StringTable` helpers move to `src/Engine` on top of generated types; check the generator's predefined list covers
      every hand-written core type such as `ELevelTick`); **B3** `GameMod` → `include/MDML/GameMod.h` (typed getters from
      generated BP classes), useful `BaseMod/src/Utils.h` helpers into the loader API, BaseMod + the "BaseMod first"
      load-order rule removed; **B4** DevTools (`LegacyExporter` deleted, `ObjectBrowser`/`PlayerTools` ported, `ItemTools`
      re-enabled if feasible) and examples ported; **B5** delete old `Loader/SDK` sources, `SDK` project, `MDML/Memory.h`,
      `IncludeDir.SDK/UE4/MedievalDynasty`; docs, build 0 warnings, `check_layout.py`, deploy (with backup), owner test.
  - Remaining after that: SDG controls + sortable load-order editor, 2.8 docs, glm license.
- **Wave 3 done** ☑ 2026-10-14 (staged: 3A+3D, then 3B+3C+3E; reports `docs/reports/wave3/3{A,B,C,D,E}-*.md`):
  - **3A** runtime split (`src/Bootstrap`, `src/Runtime/{EngineSetup,GameHooks,Paths}`, `src/Mods/{CoreModLoader,LogicMods,
    OverwriteMods}`), static class `MDML` dissolved into `mdml::platform/runtime/mods/ui`, event bus binds the mod pointer
    (C8), `mdml::platform::IniFile` on mINI 0.9.20.
  - **3D** engine core: 165 PDB-checked `constexpr` offsets (`EngineLayout.h`, `Tools/RE/check_layout.py`), one
    `ForEachObject`, UE 4.27-only paths, direct memory access, engine FName/FMemory/FText, container fixes, startup
    layout check instead of the full offset scan.
  - **3B** UI split (`D3D11Hook`/`ImGuiHost`/`LoaderWindow`/`Widgets`/`Themes`, `mdml::ui`), mod buttons/console/dumps via
    `GameThread`, notices (`mdml::runtime::Notices`) in the F1 window, dummy D3D objects released.
  - **3C** BaseMod library-only, dev tooling (object browser, legacy exporter, INI browser, player/item tools, dev-build
    flags default **off**, cheat menu override) in DevTools; typos renamed hard; `GameMod` INI via `IniFile`.
  - **3E** cross-boundary cleanup: `[General] Profile`, `BeginPlayOverwrite`, dead ini keys/flags removed; event-bus
    `shared_mutex`; PostBeginPlay follows BeginPlay (C4); layout-check failures → persistent F1 notice; dumps under the
    MDML.dll folder; `check_patterns.py` fixed.
  - Orchestrator: round-1/2 shims removed (`MDML.h`, `DumpNotice`, `TUObjectArray`/`GetAsChunckArray`/`IsChunkedArray`,
    `GetChildFields`); `UStruct::GetChildren()` is now UE's `Children` (0x48).
  - Checks: clean solution build **0 warnings**; `bin/` 37 files (the cheat override moved `Mods/BaseMod/OverrideContent` →
    `Mods/DevTools/OverrideContent`); `compile_generated.py` 203/203 on the real output; `check_layout.py` 0 mismatches;
    `check_patterns.py` all OK.
- **Deployed** 2026-10-14: build of 9f93a89 (MDML.dll/.pdb, xinput1_3.dll, BaseMod/DevTools dll+pdb). Backup of the previous
  game state (loader files, `Config/`, `Content/Mods/{BaseMod,DevTools}`): `C:\dev\MDML\backup\2026-10-14_pre-9f93a89`.
  With owner approval the installed mod configs were aligned: BaseMod `mod.ini` = `[Mod]` only, `OverrideContent` moved to
  DevTools, DevTools `mod.ini` = repo version with `[Mod]` active (DevTools enabled in the game copy). Game `Config/` untouched
  (its obsolete keys are ignored). Game folder cleaned afterwards (owner request; everything moved, nothing deleted, to `C:\dev\MDML\backup\2026-10-14_gamefolder-cleanup`): standalone `Content/Mods/Dumper7` + `Dumper-7.ini`, `SDK-Out/..._OLD`, old `Dump/`, BaseMod `.exp/.lib`, empty `Content/Blueprints`; `LoadOrder.ini` without `Dumper7`; game `ModLoaderInfo.ini` replaced by the shipped one (same values, obsolete keys gone). **In-game test passed** 2026-10-14 (owner: everything ran smoothly incl. transform editor and object browser; logs clean: all symbols from PDB, "Engine layout verified (9 groups)", dumps under `Binaries/Win64/Dump`, Generate SDK 202 headers → `compile_generated.py` 203/203). Follow-up the same day (ea80307, DevTools only, deployed; backup `2026-10-14_pre-ea80307`): no `_OLD` SDK copies, `SDKOutputDir`, `Default.export` moved into the DevTools folder; leftovers moved to the cleanup backup. Checklist that was tested:
  1. Startup log: same sequence; 7 new engine symbol lines + "Engine layout verified"; no `ENGINE LAYOUT` error, no red
     notice in F1; PDB loads once (~20 s, new symbols not in `SymbolCache.txt` yet).
  2. F1 window opens/closes repeatedly without hang (event-bus lock, released dummy D3D objects); quit cleanly.
  3. Load a save: logic mods / PostBeginPlay still fire (PlayerController BeginPlay).
  4. F1 dumps (objects, engine info, world actors): fading notice with full path, files in `Binaries/Win64/Dump/`.
  5. DevTools: object browser scan + transform edit + "Load functions"; INI browser/editor; player tools; legacy export of a
     small package (game freezes briefly, output `Binaries/Win64/Export`); Generate SDK still works.
  6. Game is no longer forced into development-build mode (`DevBuildFlags=0`).
- **SDK generator** part 1 ☑ (real in-game output compiles 203/203); next generator step = migrate BaseMod/DevTools to the
  generated headers (then `SDK.lib` can go).
- **C# replaces Lua** for script mods (Phase 3): `docs/design/csharp-scripting.md`. Lua spike in `Loader/Scripting/` = reference.

**Next (in order) — start here in a new session:**
1. Full "All packages" SDK generation done (B0 ☑, path in "Step B" above); owner in-game test of Wave 4 step A still to
   confirm (checklist in `docs/reports/public-api.md`). Next: Wave 4 step B1–B5 (see "Step B" above), then SDG controls incl. a sortable
   load-order editor, license files, 2.8 docs.
2. Phase 3: C# spike (`docs/design/csharp-scripting.md`).

Known follow-ups from Wave 3 (not yet scheduled): TimeWeatherChanger and mods' render-thread `DrawImGui` handlers still
call UE directly (needs a mod-API rule); `ItemTools` (give item/inventory) waits for the new SDK, then DevTools stops
linking `SDK`; locked `ModStack` iteration API (done in Wave 4 step A); `[ProcessInternalFunction]` pattern into the
shipped ini (done in Wave 4); UML-era log wording (done in Wave 4); `UseDebugUI=0` + F1 still shows a MessageBox; `Tools/ModManager`
still on the old `Dependencies/INI` parser.

Orchestration style: parallel agents (Sonnet where fitting) in worktrees — **every agent prompt must start with
`git reset --hard <modernize head>`** (worktrees are created from old `main`); orchestrator merges (cherry-pick), builds
the whole solution, backs up the game folder to `C:\dev\MDML\backup\<date>_pre-<commit>`, deploys (DLL/PDB only, never
overwrite the game's `mod.ini`/`Config`), and asks the owner to test. Never launch the game yourself.

---

## Phase 0 — Groundwork
- ☑ Branch `modernize` created from `main` (ef78da9).
- ☑ Tools: Python RE libs, `Tools/RE/pdbsym.py`, `Tools/RE/check_patterns.py`, UE4SS + Dumper-7 sources in `C:\dev\MDML\tools`.
- ☑ Baseline build: all 7 projects build clean on VS2022/v143 (1 warning). `SDK.lib` = 2.5 GB.
- ☑ Docs: `CLAUDE.md`, `docs/REVERSE_ENGINEERING.md`, this file.


## Phase 1 — Make it run on the current build (25776186) ☑
Goal: every hook/function resolves correctly, loader runs in-game, Core + Logic + Overwrite mods work.

1. ☑ **Symbol resolver** (new module in ModLoader): resolve functions/globals by name.
   - Source A: game PDB via DbgHelp, decorated names, exact GUID match. Plain-name lookup + decorated verification: ~0.05 s for all symbols → no cache needed.
   - Source B (fallback when no PDB/cache): AOB patterns from `Loader/ModLoader/Config/ModLoaderInfo.ini`.
   - Every resolved address is logged with its source; ambiguous pattern hits are an error, not "first hit wins".
2. ☑ **Pattern fixes**: replace the 6 failing patterns + SCOI with PDB-generated ones (`check_patterns.py --gen`), delete the stale root `ModLoaderInfo.ini`.
3. ☑ **Bug fixes** from `docs/REVERSE_ENGINEERING.md` → "Known loader bugs" (GInfo section, SCOI chain + null deref, `Pattern::Find` restricted to executable sections + uniqueness, null guards before hooking).
4. ☑ Bump version constants in `Loader/ModLoader/src/Core.h` (loader 3.0.0-dev, game 2.7.0.4).
   - Test log (3 runs, 2026-10-09): `docs/HISTORY.md`. Not verified in-game yet: Logic mods and a pak overwrite on an asset that is actually loaded.

## Phase 2 — Clean up & restructure ("sortieren")
Work packages (2.x) as planned on 2026-10-09; the "Wave" items come from `docs/reports/code-inventory.md` §7.

| Item | Status | Where |
|---|---|---|
| 2.0 Code inventory | ☑ | `docs/reports/code-inventory.md` |
| 2.1 Repo hygiene + CI (MinHook from source, stale zip removed, premake via setup script, CI rewritten) | ☑ (CI not run yet) | `.github/workflows/msbuild.yml` |
| Wave 2.1 Proxy dependency broken (`SelectedGameProfile` exported) | ☑ tested 2026-10-10 | `docs/HISTORY.md` |
| Wave 2.2 Startup: init thread, sequential mod loading, root dir from MDML.dll path | ☑ tested 2026-10-10 | `docs/reports/wave2/2.2-startup.md` |
| Game-thread queue `mdml::GameThread::Enqueue` | ☑ tested 2026-10-10 | `docs/reports/wave2/gamethread-queue.md` |
| Overwrite backup (`.mdml-backup`) + fixture, 3 HIGH review findings fixed | ☑ tested 2026-10-10 | `Tests/OverwriteBackupTest/` |
| Wave 2.3 Core compiled into MDML.dll and exported | ☑ tested 2026-10-10 | `docs/reports/wave2/2.3-core-into-mdml.md` |
| Wave 2.4 GameProfile split (`mdml::Layout/Addresses/Config/UnrealLogger`) | ☑ tested 2026-10-10 | `docs/reports/wave2/2.4-gameprofile-split.md` |
| Load order `Config/LoadOrder.ini` + dump notices (no MessageBox) | ☑ tested 2026-10-10 | `docs/reports/loadorder-and-dump-notices.md` |
| Exported hook API `mdml::Hooks` | ☑ tested 2026-10-13 | `docs/reports/hook-api.md` |
| PDB cold start: RVA cache `Config/SymbolCache.txt` | ☑ tested 2026-10-13 | `docs/reports/pdb-lookup-timing.md` |
| Toolchain premake 5.0.0 + VS 2026 | ☑ | `CLAUDE.md` → Build |
| 2.4 SDK generator (DevTools + Dumper-7 + MDMLGenerator) | ☑ part 1 + fixes, real output 203/203 (2026-10-13); BaseMod migration ☐ | `docs/SDK_GENERATOR.md`, `docs/reports/sdk-generator-*.md` |
| `THIRD_PARTY_LICENSES.md` + README credits | ☑ (missing upstream license files: Wave 4) | `THIRD_PARTY_LICENSES.md` |
| Repo folder restructure (SEngine-style) | ☑ 2026-10-13 | `docs/reports/repo-restructure.md` |
| Plan cleanup (this file + `docs/HISTORY.md`) | ☑ 2026-10-13 | — |
| INI wrapper `mdml::platform::IniFile` + mINI 0.9.20 | ☑ 2026-10-14 | `docs/reports/wave3/3A-runtime.md` |
| Wave 3 parallel splits (layers inside files, dead code, naming) | ☑ 2026-10-14, in-game test ☑ 2026-10-14 | `docs/reports/wave3/` |
| 2.3 Engine core cleanup (refactor, `EngineDefFinder` vs PDB types) | ☑ 2026-10-14 (Wave 3D/3E) | `docs/reports/wave3/3D-engine.md` |
| 2.5 BaseMod split (dev tools → DevTools) / migrate BaseMod to generated SDK | split ☑ 2026-10-14 (3C); migration ☐ | `docs/reports/wave3/3C-mods.md` |
| Wave 4 / 2.6 Libraries: C++20, ImGui 1.92.9b-docking, spdlog 1.17, nlohmann/json 3.12 | ☑ 2026-10-14, in-game test pending | `docs/reports/libraries.md` |
| 2.7 ModManager | kept for later (decision 2026-10-09) | `Tools/ModManager/` |
| 2.8 Documentation (README, Modding guide, architecture, game-patch how-to) | ☐ | `docs/guides/` |

Target layers (2.2): Bootstrap (`Loader/Proxy`) → Platform (`src/Platform`: symbols, memory, hooks) → Engine
(`src/Engine`: hand-written UE core) → Runtime (`src/Runtime`) → Mod system (`src/Mod`) → UI (`src/UI`).

### Hand-written SDK core (preserve!) — heuristic list, owner to confirm
Since Wave 2.3 (2026-10-10) these live in `Loader/ModLoader/src/Engine/` (same relative paths; hybrids GamePlayStatics/DataTable/StringTable
and `UE4/SDK.h` stayed in `Loader/SDK/src`). Paths below are the old locations (relative to the old `SDK/`, now `Loader/SDK/`).
Files without generator markers: `SDK/src/UE4.h`, `SDK/src/NameValidator.*`, `SDK/src/UE4/SDK.h`, `UE_LOG.h`,
`UE4/CoreUObject/*` (Object, Class, UnrealType, NamePool, ObjectsArray, CoreTypes, Stack, Interface),
`UE4/Containers/*`, `UE4/Math/*`, and likely `UE4/Engine/{World,GameplayStatics(.h),StringTable,UserDefinedEnum,UserDefinedStruct,Level,GameInstance,GameState,BlueprintFunctionLibrary,BlueprintGeneratedClass}`,
`Medieval_Dynasty/SDK.h`, `Medieval_Dynasty/Medieval_Dynasty/Structs.h`, `Medieval_Dynasty/GenInclude.ps1`.
Generated: most other files under `UE4/<Package>/` and `Medieval_Dynasty/<BP_…>/`, plus big `Structs.h`/`BP_Enums.h`/`BP_Structs.h` dumps.


## Phase 3 — New features (after Phase 2; ideas inspired by UE4SS)
Design docs (each ends with owner questions): `docs/design/csharp-scripting.md` (**C# mods, replaces Lua**),
`live-view.md`, `hot-reload.md`, `ufunction-hooks.md`, `pak-mods.md`; Lua (`lua-scripting.md`) is reference only.
Also: improved Blueprint mod loading with load order · pak mod loading (old AES key, see `CLAUDE.md`) · maybe D3D12 UI.

---

## Decisions log
| Date | Topic | Decision |
|---|---|---|
| 2026-10-09 | Architecture | Standalone loader, own core; UE4SS only as inspiration. |
| 2026-10-09 | Compatibility | Old MDML mods need not keep working. |
| 2026-10-09 | Hand-written core | `CoreUObject/*` written by the owner based on UE source, with many helpers; worked well → keep & refactor. Rest of the heuristic list unconfirmed (owner unsure) → treat as hand-written unless proven generated. |
| 2026-10-09 | SDK generator | Use Dumper-7 (MIT). |
| 2026-10-09 | Build system | Stay on premake. |
| 2026-10-09 | Hooking | **Stay on MinHook** (now 1.3.4 from source). SafetyHook evaluated (needs C++23 + Zydis, pre-1.0) — not worth it now. |
| 2026-10-09 | premake binary | Not tracked; downloaded by an SEngine-style `scripts/setup.bat` + `scripts/python/setup.py` (pinned 5.0.0-beta7). CI uses the same script. |
| 2026-10-09 | ModManager | Keep for the future; not part of Phase 1/2 core work. |
| 2026-10-09 | C++ standard | C++20 or newer. |
| 2026-10-09 | D3D12 | Later; fix the core first. |
| 2026-10-09 | Docs language | English. |
| 2026-10-09 | SDK generator design | Use Dumper-7 for reflection analysis (offsets, dependencies, collisions, padding) but write an **own MDML generator backend** that emits headers against the owner's hand-written core (`UE4::UObject`, `TArray`, `FName`, …): real member layout, `static_assert`s, export lists. |
| 2026-10-09 | SDK dump trigger | **Integrated into MDML** as a dev-tool mod: dump started from the ImGui menu, packages chosen there (export lists). |
| 2026-10-09 | SDK member access | Owner's offset-based core stays. Generator emits **one header per package, no .cpp**; members become accessors (MSVC `__declspec(property)` so they read like fields) whose offset is **resolved by property name via reflection on first use**, dump-time offset only as fallback with a warning → mods survive game patches without regenerating. |
| 2026-10-09 | SDK function calls | Generated ProcessEvent wrappers **validate** ParamsSize/param offsets against the live UFunction and abort with a log error on mismatch instead of corrupting memory. |
| 2026-10-09 | Core location | Engine core compiled into **MDML.dll and exported**; mods link MDML.lib (one GObjects/GNames, no per-mod `InitSDK`). Old multi-game paths removed (raw offsets, non-NamePool, non-chunked array, pre-4.25 properties, IsUsing4_22). Engine offsets = PDB-checked constants; `EngineDefFinder` only as no-PDB fallback. |
| 2026-10-09 | Overwrite mods | Back up loose original files before linking (`.mdml-backup`) and restore on cleanup / next start after a crash. |
| 2026-10-09 | BaseMod stale features | Disable give-item, inventory list, GameMod getters until the new SDK ("waiting for new SDK"); cheats (dev-build flag, cheat-menu override, `M_SetCheats`) move to a new DevTools mod, off by default. |
| 2026-10-09 | Startup/threading | `SetupProfile` out of `DllMain` into the init thread; mods loaded sequentially with `LoadLibraryW` (BaseMod first) before hooks; game-thread task queue (Tick hook) for UE calls from UI/tools. |
| 2026-10-09 | Defaults taken (owner may veto) | Keep folder names; `mdml::` namespace for new loader internals; direct memory access instead of Read/WriteProcessMemory (explicit safe read only for scanning); ProcessLocalScriptFunction hook installed unconditionally; disable LTCG for SDK.lib until the new generator; keep event-bus semantics for now (revisit in Phase 3); DevTools shipped but disabled by default; hybrid files (`CoreTypes.h`, `GamePlayStatics.*`, `DataTable.*`, `StringTable.*`) treated as hand-written. |
| 2026-10-09 | License check | Dumper-7 has no license file, but the maintainer (Fischsalat) wrote in [issue #416](https://github.com/Encryqed/Dumper-7/issues/416): *"Usage of the Dumper-7 code for your open source project with proper attribution is not an issue at all."* (rights retained, see #492; commercial use only by arrangement). MDML is open source and non-commercial → OK **with clear attribution** (credit in README, file headers of adapted code, THIRD_PARTY_LICENSES). UE4SS is MIT. |
| 2026-10-10 | SDK generator members | Offsets resolved by property name **lazily on first use** and cached; dump-time offset only as logged fallback. DevTools may offer a full validation report. |
| 2026-10-10 | SDK package selection | Each mod declares the packages it needs in an **export-list file next to `mod.ini`** (format modelled on BaseMod's old `.export` lists). |
| 2026-10-10 | INI | **mINI behind an own `Config::IniFile` wrapper** (explicit-section API first, then swap the backend). Comments only with `;` afterwards — document for mod authors. |
| 2026-10-10 | Libraries (Wave 4, after C++20) | Approved: ImGui 1.92.9b-docking + upstream TextEditor; spdlog 1.17 (fmt 12.1); **MDML exports a hook API** so mods don't each link MinHook; `THIRD_PARTY_LICENSES` (incl. Dumper-7 attribution) + nlohmann/json 3.12 moved to `vendor/`. |
| 2026-10-10 | Agents | Owner wants the work orchestrated across parallel agents (Sonnet where it fits); orchestrator merges, deploys and asks the owner for in-game tests. |
| 2026-10-10 | Mod load order | Central `Config/LoadOrder.ini` next to the loader: one line per mod `Name = 1/0` (enabled/disabled), top = first; new mods appended automatically; BaseMod always first. Later sortable in the F1 window / ModManager. |
| 2026-10-10 | Console window | Leave the console's X button as is (closing it ends the game — accepted). |
| 2026-10-10 | Loader dumps | Running dumps on the game thread is acceptable (noticeable hitch). The `MessageBoxA` after a dump must go (steals fullscreen focus and blocks the game thread) → log line + notice in the F1 window. |
| 2026-10-13 | PDB cold start | RVA cache `Config/SymbolCache.txt` keyed by EXE build id (owner's choice); PDB only on a new build. |
| 2026-10-13 | Toolchain | premake **5.0.0** (no `flags {}`) + VS 2026 v145 locally; CI stays on the vs2022 action. Supersedes the 5.0.0-beta7 pin. |
| 2026-10-13 | SDK generator fixes | Core types get the game's alignment (`alignas`), asserts are never weakened; const pointer params are `const_cast` into the params struct; enum values that do not fit the underlying type are dropped, the type is never widened. |
| 2026-10-13 | Repo layout | Folder layout modelled on the owner's SEngine (`Dependencies/` + `Dependencies.lua`, grouped `Loader/ Mods/ Tools/ Tests/`, `<Project>.lua`). Only paths change; reorganising file *contents* comes later. Supersedes "Keep folder names" (2026-10-09 defaults). |
| 2026-10-13 | VS files | `MDML.sln` untracked; `MDML.slnx` + `*.vcxproj(.filters)` stay tracked and are regenerated with premake after every premake change. |
| 2026-10-13 | Layout details | Projects renamed `ModLoader`/`Proxy` (outputs stay `MDML.dll`/`xinput1_3.dll`); `Dumper`/`EngineDefFinder` in `src/Runtime` (`src/Engine` = exported UE core only); owner-modified `ImGuiColorTextEdit` in `src/UI`; `Tests` premake group; one `VENDORED.txt` per library. |
| 2026-10-13 | Script mods | **C# instead of Lua**, on the owner's **Carbide** (.NET hosting via hostfxr) as **git submodule** `Dependencies/Carbide`; **.NET runtime shipped** with the loader; mods ship **compiled DLLs**; target net10.0 (default, owner may veto); Lua spike kept as reference. |
| 2026-10-13 | Mod kinds | **Native (C++) and managed (.NET) mods are two distinct mod kinds**: explicit `Type = Native/Managed` in `mod.ini`, cross-checked against the DLL, separate load paths, shown separately in UI/logs. |
| 2026-10-13 | UI controls | Copy and adapt the owner's SDG controls (`Skeleton/Dependencies/SDG/.../Controls`) into MDML; SEngine's editor UI as inspiration for a nicer look; together with the ImGui upgrade. |
| 2026-10-13 | Plan doc | One "Current state" section in this file; old handoffs/test logs archived verbatim in `docs/HISTORY.md`. |
| 2026-10-13 | Wave 3 order | Staged: **3A + 3D in parallel first**, merge + build, then **3B + 3C** on top; one in-game test at the end. In round 1 the API across the 3A/3D boundary (`src/Engine` ⇄ rest of the loader) stays source-compatible. |
| 2026-10-13 | Namespaces | Loader internals in layer sub-namespaces `mdml::platform`, `mdml::runtime`, `mdml::mods`, `mdml::ui` (code-inventory §7.4); the static class `MDML` is dissolved into them. `UE4::` stays for engine mirror types. |
| 2026-10-13 | Typos in public names | **Rename hard, no aliases** (`OnModInitilize`, `GetDispalyNames`, `filterDefualts`, `PeristentObjectFile` incl. the ini key, `GetAllClasssFunctions`, `IsUsingDeferedSpawn`, `Uknown`, …); all callers/ini files in the repo are updated in the same package. |
| 2026-10-14 | Wave 3 round 2 | Packages **3B UI**, **3C Mods** and a third package **3E cross-boundary cleanup** (Engine/Runtime/Bootstrap/Platform follow-ups from 3A/3D) in parallel; shims that only become free after 3C are removed by the orchestrator after the merge. Shared F1-window notice API `mdml::runtime::Notices` (`src/Runtime/Notices.h`) written up front: 3E posts, 3B displays. |
| 2026-10-14 | Event bus (3A-Q6/Q7) | `EnabledEvents::PostBeginPlay` is tied to `BeginPlay` (fixes C4). Shared lock on the event bus now (dispatch shared, registration exclusive). |
| 2026-10-14 | Loader ini (3A-Q5/Q8) | `[General] Profile` second-ini indirection dropped (everything from `ModLoaderInfo.ini`). `BeginPlayOverwrite` key + `ACustomClass` removed; logic mods' PostBeginPlay hard-coded to `APlayerController`. |
| 2026-10-14 | INI details (3A-Q1–Q4) | Names: exact match, then case-insensitive, spelling kept on save. `;` after a value stays part of the value; `IniFile::Get` warns when a value contains ` ;`. `Global` keeps its name until the public API header split. `Bootstrap/` code lives in `mdml::runtime`. |
| 2026-10-14 | Engine layout check (3D-Q2) | A layout group that cannot be verified → persistent notice in the F1 window + log error; mods still load. |
| 2026-10-14 | Engine core (3D-Q1/Q3–Q7) | `GetChildren()` becomes UE's real `Children` (UField*, 0x48) once all callers use `GetChildProperties()`; `GetChildFields()` then goes. Deferred: core types deriving from the layout-true `Mirror` structs (with the BaseMod migration to the new generator); `GetName` `_N` suffix fix and `ProcessEvent_Save` class check (when the old SDK is retired); owning string as separate type `FStringOwned` (later); `StaticFindObject` only in the new generator's `StaticClass()`. |
| 2026-10-14 | Mods (3C-Q1/Q2) | `UI_CheatMenu` override asset + `[Overrides]` move from BaseMod to DevTools (still `Enable=False`). DevTools `DevBuildFlags` defaults to **0**. |
| 2026-10-14 | UI / public API (3B-Q1/Q3/Q4, 3C-Q3) | No load-order section in the F1 window now; a sortable editor comes later (Wave 4, with ImGui/SDG controls). `ImGui::MDML_*` widgets namespace, the `LoaderUI` facade and BaseMod-as-library (`GameMod` into the loader API?) are decided with the public API header split (`include/MDML`). |
| 2026-10-14 | DevTools output (after the Wave 3 test) | No `_OLD` copies of the generated SDK: after a successful generation DevTools removes Dumper-7's `<folder>_OLD` backups (kept on failure). SDK output folder configurable via DevTools `[Config] SDKOutputDir` (empty = `Binaries/Win64/SDK-Out`, relative = to the MDML.dll folder). The legacy exporter's `Default.export` lives in the DevTools mod folder (shipped), same format as the generator export lists. |
| 2026-10-14 | Public API split (`include/MDML`) | Widgets move from `ImGui::MDML_*` to **`mdml::ui::widgets`** (e.g. `mdml::ui::widgets::Combo`); the `LoaderUI` facade class is **replaced** by a slim API in `include/MDML/UI.h` (device/context getters, `SetTheme`), BaseMod/DevTools adapted; **`GameMod` moves into the loader API**, so mods depend only on MDML.dll + `include/MDML` and BaseMod becomes an ordinary mod. Breaking for old mod code (accepted). |
| 2026-10-14 | Public API split, part 2 | Generated SDK: **the complete generated SDK goes into the repo** (repo size does not matter). `GameMod` getters stay **typed** (generated BP classes). Done in **two steps** (A: header split/UI/ModStack, B: SDK migration + `GameMod` + `SDK.lib` removal), each with an in-game test. `Global` becomes **loader-internal** (`mdml::mods::Registry`); mods use narrow functions in `MDML/Mods.h`. |
| 2026-10-14 | Public API split, defaults taken (owner may veto) | Include style `"MDML/<Header>.h"` from `Loader/ModLoader/include` (premake `IncludeDir.MDML`); existing namespaces of public types kept (`mdml::platform::Hooks/IniFile`, `mdml::runtime::GameThread/Notices/paths`); `ImGuiColorTheme` → `mdml::ui::ColorTheme`; `MDML/Memory.h` (old `Read`/`Write` helpers) public only until `SDK.lib` goes; DevTools reads the config folder via new `mdml::runtime::GetConfigFolder()` instead of `mdml::runtime::Config`. |
| 2026-10-14 | Wave 4 step B | Full generated SDK **replaces the contents of `Loader/SDK/`** (header-only, no `SDK.lib`). The **loader itself uses the generated headers** (`AActor`, `UWorld`, `UGameplayStatics`, …) — one type system for loader and mods. **BaseMod is deleted**: `GameMod` goes into the loader API, useful `Utils.h` helpers too, the rest is dropped. DevTools' **`LegacyExporter` is removed** (replaced by the new generator). |
| 2026-10-15 | Generated names (owner) | Blueprint enums must have their real names like the old exporter, not `NewEnumerator0..N` → the generator uses the `UUserDefinedEnum` display names. Same treatment taken by default for Blueprint struct members (GUID suffix stripped, like the old exporter). |
| 2026-10-15 | Wave 4 step B, details taken by default (owner may veto) | Generated SDK in **`Loader/SDK/Generated/`** (subfolder, so nothing else mixes with generated files). `GameMod` getters return the generated BP classes **forward-declared** in `MDML/GameMod.h` (mods include the package header they use; MDML.dll finds the objects by class/property name, so it needs no BP headers). `getCameraManager()` (returned the animals manager) renamed `getAnimalsManager()`; `Utils::ValidateBPObject` → `GameMod::CastByName`; other `Utils.h` helpers dropped (string/file one-liners, `FindDataTable` = `FindObject` + core `UE4::GetDataTableRowMap`). Hand-written engine stubs (`UWorld`, `ULevel`, `UUserDefinedEnum`, …) replaced by free functions in `EngineHelpers.h`; `FActorSpawnParameters` now has the 4.27 layout (PDB). The object browser's package list saves `.export` lists for the generator instead of running the legacy exporter. |
| 2026-10-14 | Wave 3E Q1–Q6 | All recommendations accepted: missing layout anchor stays **Error**; scanned offsets → persistent **Warning**; locked `ModStack` API (`ForEachMod`/`MoveToFront`) **in Wave 4** (with the public API split); `ProcessInternal` pattern → `ModLoaderInfo.ini` `[FunctionInfo]` and UML log wording reworded **in Wave 4** (with spdlog); missing `ModLoaderInfo.ini` keeps **disabling** the loader. |

---

## Open decisions (ask the owner)
- SDK generator Q1–Q3: `docs/reports/sdk-generator-part1.md`.
- Load order: pak-only mod folders in `LoadOrder.ini`? Allow `BaseMod = 0`?
- Wave 2.4 naming (`mdml::Layout` / `Addresses` / `Config`), see `docs/reports/wave2/2.4-gameprofile-split.md`.
- Phase 3 design-doc questions: `docs/design/{live-view,hot-reload,ufunction-hooks,pak-mods}.md` (feature priority, pak
  signing/encryption policy, mod ABI for hot reload, hook mechanism/threading, Live View read-only first).
- C#: CS-6 (shared generated `MDML.SDK.dll` vs per-mod packages), CS-9 (assembly/namespace names) in
  `docs/design/csharp-scripting.md`.
- Wave 3B Q2: if the in-game test shows problems with the released dummy D3D objects, go back to keeping the thread alive?
- Lua OQ-1..OQ-17 are **superseded** by the C# decision (only relevant if Lua ever comes back).
