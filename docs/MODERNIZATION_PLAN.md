# MDML modernization plan

Owner decisions (2026-10-09):
- MDML stays a **standalone loader** (own core). UE4SS = inspiration only. Open-source libraries are welcome.
- No backwards compatibility with old MDML mods required.
- Order: **1) make it run again → 2) clean up / restructure → 3) new features.** No new features before 2 is done.
- Ask the owner rather than deciding alone. Keep these docs current.

Status legend: ☐ todo · ◐ in progress · ☑ done

---

## Phase 0 — Groundwork
- ☑ Branch `modernize` created from `main` (ef78da9).
- ☑ Tools: Python RE libs, `tools/pdbsym.py`, `tools/check_patterns.py`, UE4SS + Dumper-7 sources in `C:\dev\MDML\tools`.
- ☑ Baseline build: all 7 projects build clean on VS2022/v143 (1 warning). `SDK.lib` = 2.5 GB.
- ☑ Docs: `CLAUDE.md`, `docs/REVERSE_ENGINEERING.md`, this file.

## Phase 1 — Make it run on the current build (25776186) ☑
Goal: every hook/function resolves correctly, loader runs in-game, Core + Logic + Overwrite mods work.

1. ☑ **Symbol resolver** (new module in ModLoader): resolve functions/globals by name.
   - Source A: game PDB via DbgHelp, decorated names, exact GUID match. Plain-name lookup + decorated verification: ~0.05 s for all symbols → no cache needed.
   - Source B (fallback when no PDB/cache): AOB patterns from `Config/ModLoaderInfo.ini`.
   - Every resolved address is logged with its source; ambiguous pattern hits are an error, not "first hit wins".
2. ☑ **Pattern fixes**: replace the 6 failing patterns + SCOI with PDB-generated ones (`check_patterns.py --gen`), delete the stale root `ModLoaderInfo.ini`.
3. ☑ **Bug fixes** from `docs/REVERSE_ENGINEERING.md` → "Known loader bugs" (GInfo section, SCOI chain + null deref, `Pattern::Find` restricted to executable sections + uniqueness, null guards before hooking).
4. ☑ Bump version constants in `ModLoader/src/Core.h` (loader 3.0.0-dev, game 2.7.0.4).
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

## Phase 2 — Clean up & restructure ("sortieren")
Planned as parallel agent work packages (worktrees off `modernize`), each with its own doc update. Order/assignment to be confirmed with the owner.

- **2.1 Repo hygiene + CI** ☑ (2026-10-09) — done:
  - MinHook: prebuilt `libMinHook-x64-v141-mtd.lib` removed; MinHook **v1.3.4** sources vendored in `ModLoader/vendor/MinHook` (`include/MinHook.h` path unchanged) and built as premake `StaticLib` `MinHook` (Release, `staticruntime "off"`, i.e. dynamic CRT like all other projects — the old lib was /MTd). ModLoader, BaseMod and ExampleMods link `"MinHook"`. In-game smoke test 2026-10-09: all hooks installed, clean shutdown.
  - `ModManager/MDML.zip` removed: stale release-2.3.1 package (DLLs/PDB inside); ModManager does not read it from the repo, it downloads `MDML.zip` at runtime (`HomeView.cpp`). Now in `.gitignore`.
  - premake: first kept tracked, then (owner request) replaced by an SEngine-style setup script that downloads pinned 5.0.0-beta7. No other tracked build outputs, `.vs/` or `*.user` found; `.gitignore` already covered them.
  - CI rewritten: windows-latest, `premake5 vs2022` → msbuild Release x64 → upload `bin/Release-windows-x86_64` minus `*.lib/*.pdb/*.exp`. Not runnable here (YAML syntax checked locally only). Caveat: SDK.lib (~2.5 GB) may hit runner disk/time limits; goes away with 2.4.
- **2.0 Code inventory** ☑ (`docs/reports/code-inventory.md`) — basis for 2.2/2.3.
- **2.2 Architecture/module split** — clear layers: Bootstrap (proxy DLL) → Platform (symbols, memory, hooks) → Engine (hand-written UE core types/reflection) → Mod system (core/logic/overwrite mods) → UI. Remove UML leftovers/dead code, consistent naming, C++20.
- **2.3 Engine core cleanup** — the hand-written SDK core (see below) gets refactored, not regenerated. `EngineDefFinder` (runtime offset scanning) can be validated/simplified with PDB type info (e.g. `UObjectBase` member offsets).
- **2.4 New SDK generator** — replace the per-class `.h`+`.cpp` getter/setter generator (→ 2.5 GB lib). Target: run against the live game, choose packages via **export lists**, emit header-centric output (real member layout + padding + `static_assert` offsets/sizes, like Dumper-7), function wrappers in one `.cpp` per package, generated output not committed. Mods link only the packages they need.
- **2.5 BaseMod split** — separate dev tools (object browser, SDK exporter) from the game API helpers.
- **2.6 Vendor updates** (research ☑ `docs/reports/libraries.md`) — spdlog, ImGui, MinHook, glm, INI parser, `JSON.h` in ModManager.
- **2.7 ModManager** — decide fate (see open decisions).
- **2.8 Documentation** — README, Modding.md, architecture overview, how to update after a game patch.

### Hand-written SDK core (preserve!) — heuristic list, owner to confirm
Files without generator markers: `SDK/src/UE4.h`, `SDK/src/NameValidator.*`, `SDK/src/UE4/SDK.h`, `UE_LOG.h`,
`UE4/CoreUObject/*` (Object, Class, UnrealType, NamePool, ObjectsArray, CoreTypes, Stack, Interface),
`UE4/Containers/*`, `UE4/Math/*`, and likely `UE4/Engine/{World,GameplayStatics(.h),StringTable,UserDefinedEnum,UserDefinedStruct,Level,GameInstance,GameState,BlueprintFunctionLibrary,BlueprintGeneratedClass}`,
`Medieval_Dynasty/SDK.h`, `Medieval_Dynasty/Medieval_Dynasty/Structs.h`, `Medieval_Dynasty/GenInclude.ps1`.
Generated: most other files under `UE4/<Package>/` and `Medieval_Dynasty/<BP_…>/`, plus big `Structs.h`/`BP_Enums.h`/`BP_Structs.h` dumps.

## Phase 3 — New features (after Phase 2; ideas, inspired by UE4SS)
Lua scripting for mods · live object viewer/editor in ImGui · hot reload · hook arbitrary UFunctions · improved Blueprint mod loading with load order · pak mod loading (old AES key available, see `CLAUDE.md`) · maybe D3D12 UI support.

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
| 2026-10-09 | License check | Dumper-7 has no license file, but the maintainer (Fischsalat) wrote in [issue #416](https://github.com/Encryqed/Dumper-7/issues/416): *"Usage of the Dumper-7 code for your open source project with proper attribution is not an issue at all."* (rights retained, see #492; commercial use only by arrangement). MDML is open source and non-commercial → OK **with clear attribution** (credit in README, file headers of adapted code, THIRD_PARTY_LICENSES). UE4SS is MIT. |

## Open decisions (ask the owner)
- Library decisions from `docs/reports/libraries.md` (INI → mINI wrapper?, ImGui 1.92 docking, spdlog 1.17 with C++20, exported hook API for core mods, THIRD_PARTY_LICENSES) — to be presented together with the code inventory.
