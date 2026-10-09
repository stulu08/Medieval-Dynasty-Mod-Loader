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

## Phase 1 — Make it run on the current build (25776186)
Goal: every hook/function resolves correctly, loader runs in-game, Core + Logic + Overwrite mods work.

1. ☐ **Symbol resolver** (new module in ModLoader): resolve functions/globals by name.
   - Source A: game PDB via DbgHelp. Loading takes ~30 s → resolve once per game build and cache results
     (e.g. `Config/SymbolCache.ini`, keyed by EXE PDB-GUID); later starts read the cache instantly.
   - Source B (fallback when no PDB/cache): AOB patterns from `Config/ModLoaderInfo.ini`.
   - Every resolved address is logged with its source; ambiguous pattern hits are an error, not "first hit wins".
2. ☐ **Pattern fixes**: replace the 6 failing patterns + SCOI with PDB-generated ones (`check_patterns.py --gen`), delete the stale root `ModLoaderInfo.ini`.
3. ☐ **Bug fixes** from `docs/REVERSE_ENGINEERING.md` → "Known loader bugs" (GInfo section, SCOI chain + null deref, `Pattern::Find` restricted to executable sections + uniqueness, null guards before hooking).
4. ☐ Bump version constants in `ModLoader/src/Core.h` (game version string, loader version).
5. ☐ **In-game test with the owner**: loader starts, UI opens (DX11), BaseMod loads, a Logic mod (StaticLoadObject/SpawnActor) and an Overwrite mod (pak hooks) work. Collect `Logs/`.

## Phase 2 — Clean up & restructure ("sortieren")
Planned as parallel agent work packages (worktrees off `modernize`), each with its own doc update. Order/assignment to be confirmed with the owner.

- **2.1 Repo hygiene** — remove tracked binaries (`libMinHook…lib`, `ModManager/MDML.zip`, `premake5.exe`), `.vs/`, stale files; fix CI (premake → msbuild, artifacts); consistent `.gitignore`.
- **2.2 Architecture/module split** — clear layers: Bootstrap (proxy DLL) → Platform (symbols, memory, hooks) → Engine (hand-written UE core types/reflection) → Mod system (core/logic/overwrite mods) → UI. Remove UML leftovers/dead code, consistent naming, C++20.
- **2.3 Engine core cleanup** — the hand-written SDK core (see below) gets refactored, not regenerated. `EngineDefFinder` (runtime offset scanning) can be validated/simplified with PDB type info (e.g. `UObjectBase` member offsets).
- **2.4 New SDK generator** — replace the per-class `.h`+`.cpp` getter/setter generator (→ 2.5 GB lib). Target: run against the live game, choose packages via **export lists**, emit header-centric output (real member layout + padding + `static_assert` offsets/sizes, like Dumper-7), function wrappers in one `.cpp` per package, generated output not committed. Mods link only the packages they need.
- **2.5 BaseMod split** — separate dev tools (object browser, SDK exporter) from the game API helpers.
- **2.6 Vendor updates** — spdlog, ImGui, MinHook, glm, INI parser, `JSON.h` in ModManager.
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
| 2026-10-09 | Hooking | MinHook is fine; owner open to a better library → propose one with reasons in Phase 2.6. |
| 2026-10-09 | ModManager | Keep for the future; not part of Phase 1/2 core work. |
| 2026-10-09 | C++ standard | C++20 or newer. |
| 2026-10-09 | D3D12 | Later; fix the core first. |
| 2026-10-09 | Docs language | English. |

## Open decisions (ask the owner)
- (none right now)
