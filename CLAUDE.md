# MDML – agent onboarding

Medieval Dynasty Mod Loader (MDML): a standalone C++ mod loader for the UE 4.27 game *Medieval Dynasty*
(Steam appid 1129580), originally forked from RussellJerome/UnrealModLoader. This is the owner's personal
hobby/learning project — **it stays a standalone loader**. UE4SS is used only as inspiration/reference, never as a base.

Read before doing anything:
- `docs/MODERNIZATION_PLAN.md` — current plan, phase status, work packages, open decisions.
- `docs/REVERSE_ENGINEERING.md` — PDB workflow, tools, pattern status per game build.

## Working rules
- **Ask the owner instead of deciding alone** on design choices, removals, dependency swaps, anything non-obvious.
  Write down open questions in `docs/MODERNIZATION_PLAN.md` → "Open decisions" if you cannot ask directly.
- **Document what you change** (update the docs above) so the next agent has context.
- Work on branch `modernize` (or a worktree branched from it). Never push or commit to `main` without being asked.
- Never touch the game install except when a task explicitly says so. Never launch the game yourself — the owner tests in-game.
- Never derive paths from the process working directory (the engine switches it to `Binaries/Win64`); use the MDML.dll / EXE location.
- `C:\dev\MDML\Key.txt` (outside the repo) holds the old pak AES key. Never print it into logs/docs, never commit it.
- Do not edit generated SDK files by hand (see "SDK" below); hand-written engine core files are precious — keep and refactor them, don't regenerate them.

## Layout
| Path | What |
|---|---|
| `LoaderAutoInjector/` | `xinput1_3.dll` proxy that loads `MDML.dll` into the game |
| `ModLoader/` | `MDML.dll`: bootstrap (`src/MDML.cpp`), hooks (`Utilities/HooksManager.cpp`), runtime offset finder (`Utilities/EngineDefFinder.cpp`), mod system (`src/Mod/`), ImGui UI (`src/UI/`), and the **hand-written UE engine core** (`src/Engine/`, see next row) |
| `ModLoader/src/Engine/` | hand-written engine core, compiled into MDML.dll and exported (`MDML_ENGINE_API`): `UE4.h` umbrella, `NameValidator`, `UE4/CoreUObject`, `UE4/Containers`, `UE4/Math`, `UE4/UE_LOG.h`, hand-written `UE4/Engine/*` (World, UserDefinedEnum, …), `EngineInit.cpp` (one `UE4::InitSDK()`). Precious: refactor, never regenerate. Same relative paths as the old `SDK/src` (include dirs `Engine`, `EngineUE4`) |
| `SDK/` | static lib, **generated** game/engine classes only (`src/UE4/<Package>/*`, `src/Medieval_Dynasty/*`) + aggregators (`src/UE4/SDK.h`, `src/Medieval_Dynasty/SDK.h`) + hybrids `GamePlayStatics`/`DataTable`/`StringTable`. Imports the core from MDML.dll: whoever links `SDK` must also link `MedievalDynastyModLoader`. MDML itself does not link SDK (it compiles `Actor`/`GamePlayStatics`/`KismetSystemLibrary.cpp` directly) |
| `BaseMod/` | core mod shipped with the loader; also contains the in-game **SDK exporter** (`src/Utils.h` → `Utils::Export`, UI in `src/BaseMod.cpp`) |
| `ModManager/` | standalone ImGui mod manager app (WIP) |
| `ExampleMods/` | sample core mods |
| `Config/ModLoaderInfo.ini` | patterns/offsets the loader reads at runtime (copied next to the DLL). (the stale repo-root duplicate was removed). |
| `tools/` | Python RE scripts (`pdbsym.py`, `check_patterns.py`) |

## Build
- VS2022 (v143), x64 Release only. Baseline (2026-10-09) builds clean: `MSBuild.exe MDML.sln -m -p:Configuration=Release -p:Platform=x64`
  (`C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\amd64\MSBuild.exe`).
- Project files come from premake (`premake5.lua`, `scripts/generateProjects - vs2022.bat`). Premake is **not tracked**: `scripts/setup.bat` (→ `scripts/python/setup.py [--yes] [vs2022|vs2026|gmake2|nogen]`, same layout as the owner's SEngine project) downloads the pinned premake 5.0.0-beta7 to `scripts/premake/premake5.exe` and generates the projects. Afterwards `scripts/generateProjects - vs2022.bat` works too.
- MinHook v1.3.4 is vendored as **source** (`ModLoader/vendor/MinHook`, `VENDORED.txt`) and built as the premake static-lib project `MinHook`; there is no prebuilt `.lib` any more.
- CI: `.github/workflows/msbuild.yml` (push/PR on `main`, `modernize`): premake vs2022 → msbuild Release x64 → artifact without `*.lib`/`*.pdb`. The 2.5 GB SDK.lib may exceed runner limits until the SDK is replaced (plan 2.4).
- Output: `bin/Release-windows-x86_64/` (`MDML.dll`, `xinput1_3.dll`, `Mods/…`). SDK.lib ~222 MB since LTCG was disabled for the SDK project (was 2.7 GB); replaced by the new generator later (plan 2.4).

## Game / RE environment (this machine)
- Game: `E:\SteamLibrary\steamapps\common\Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\`
- **The game ships a full matching PDB** (`Medieval_Dynasty-Win64-Shipping.pdb`, Steam depot 1129581, GUID matches the EXE). Prefer resolving by symbol name over AOB guessing.
- IDA Pro 7.5 SP3: `C:\Program Files\IDA Pro 7.5 SP3` (use `idat64.exe -A -S<script>` headless; MCP plugins need IDA ≥ 8.3).
- Reference sources in `C:\dev\MDML\tools\`: `RE-UE4SS-src` (MIT), `Dumper-7` (no license file; maintainer allows use in open-source projects **with proper attribution**, issue #416 — always credit when adapting code), UE4SS binaries. MDML itself is LGPL-2.1.
- Python 3.13 with pefile, capstone, keystone, lief.
