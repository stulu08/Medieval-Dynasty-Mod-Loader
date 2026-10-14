# MDML – agent onboarding

Medieval Dynasty Mod Loader (MDML): a standalone C++ mod loader for the UE 4.27 game *Medieval Dynasty*
(Steam appid 1129580), originally forked from RussellJerome/UnrealModLoader. This is the owner's personal
hobby/learning project — **it stays a standalone loader**. UE4SS is used only as inspiration/reference, never as a base.

Read before doing anything:
- `docs/MODERNIZATION_PLAN.md` — start with its "Current state" section (the one handoff), then phase status, decisions log,
  open decisions. Keep that section current at the end of a session; move superseded handoffs to `docs/HISTORY.md`.
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
Grouped like the owner's SEngine project: third-party code in `Dependencies/`, one folder per concern, each premake project file is
named `<Project>.lua` (not `premake5.lua`); the root `premake5.lua` includes them. Folder move history: `docs/reports/repo-restructure.md`.
| Path | What |
|---|---|
| `Dependencies/` | **all third-party code, unmodified** (exceptions: see `docs/reports/repo-restructure.md`): `spdlog` (1.17.0, fmt 12.1; needs `/utf-8`, set workspace-wide; log format strings are compile-time checked), `ImGui`, `mINI` (behind `mdml::platform::IniFile`), `INI` (old parser, only `Tools/ModManager` still uses it), `glm`, `MinHook` (own project `MinHook.lua`), `Dumper-7`, `lua-5.4.9`, `sol2-3.3.0`, `nlohmann-json` (3.12.0, `nlohmann/json.hpp`, ModManager only), `premake/` (tracked `premake_customization`; `premake5.exe` is downloaded here). `Dependencies/Dependencies.lua` holds the `IncludeDir`/`ProjectDir` tables |
| `Loader/ModLoader/` | `MDML.dll` (premake project `ModLoader`, file `ModLoader.lua`). Layers and namespaces since Wave 3 (`docs/reports/wave3/`): `src/Bootstrap/` (DllMain, Startup, Version; `mdml::runtime`), `src/Platform/` (`mdml::platform`: Hooks, SymbolResolver, IniFile, Pattern, Memory, Logger, Math), `src/Runtime/` (`mdml::runtime`: GameThread, LoaderConfig, EngineSetup, GameHooks, Paths, Notices, EngineDefFinder, Dumper), `src/Mods/` (`mdml::mods`: Mod/ModStack event bus, LoadOrder, CoreModLoader, LogicMods, OverwriteMods), `src/UI/` (`mdml::ui`: D3D11Hook, ImGuiHost, LoaderWindow, Widgets, Themes, forwarding `LoaderUI.h`; plus the locally modified `ImGuiColorTextEdit`: `LOADER_API`, includes `Core.h`), and the **hand-written UE engine core** (`src/Engine/`, see next row). No `MDML.cpp`/`MDML.h`/static class `MDML` any more |
| `Loader/ModLoader/src/Engine/` | hand-written engine core, compiled into MDML.dll and exported (`MDML_ENGINE_API`): `UE4.h` umbrella, `NameValidator`, `UE4/CoreUObject`, `UE4/Containers`, `UE4/Math`, `UE4/UE_LOG.h`, hand-written `UE4/Engine/*` (World, UserDefinedEnum, …), `EngineInit.h/.cpp` (one `UE4::InitSDK()`), `EngineLayout.h` (PDB-checked `constexpr` offsets, verified by `Tools/RE/check_layout.py`; `EngineDefFinder` only checks them at startup), `EngineAddresses` (resolved functions/globals), `EngineMemory` (direct access, SEH-safe reads only for scanning), `UE4::UObject::ForEachObject`. Precious: refactor, never regenerate. Same relative paths as the old `SDK/src` (include dirs `Engine`, `EngineUE4`) |
| `Loader/ModLoader/Config/` | `ModLoaderInfo.ini` (patterns/offsets the loader reads at runtime) and `NoOverwrite.ini`; the post-build step copies the folder to `bin/.../Config` next to the DLL. (the stale repo-root duplicate was removed) |
| `Loader/Proxy/` | `xinput1_3.dll` proxy that loads `MDML.dll` into the game (premake project `Proxy`, file `Proxy.lua`) |
| `Loader/SDK/` | static lib, **generated** game/engine classes only (`src/UE4/<Package>/*`, `src/Medieval_Dynasty/*`) + aggregators (`src/UE4/SDK.h`, `src/Medieval_Dynasty/SDK.h`) + hybrids `GamePlayStatics`/`DataTable`/`StringTable`. Imports the core from MDML.dll: whoever links `SDK` must also link `ModLoader`. MDML itself does not link SDK (it compiles `Actor`/`GamePlayStatics`/`KismetSystemLibrary.cpp` directly) |
| `Loader/Scripting/` | standalone Lua scripting spike workspace (`Scripting.lua`, **not** included from the root premake; see its `README.md`) |
| `Mods/BaseMod/` | core mod shipped with the loader, library-only since Wave 3C: `GameMod` (+ `IniFile`-based `GetINIConfig`/`SetINIConfig`), `Utils.h` helpers; no UI, no events |
| `Mods/DevTools/` | developer mod (off by default): MDML SDK generator on vendored Dumper-7 (`DevTools.Generator` static lib), object browser, legacy SDK exporter, INI browser/editor, player/item tools, dev-build flag swap (`DevBuildFlags`, default 0), cheat menu override asset (`[Overrides]`, off). Links `SDK` (old hybrid classes) |
| `Mods/Examples/` | sample core mods (`PresetMod`, `TimeWeatherChanger`) |
| `Tools/ModManager/` | standalone ImGui mod manager app (WIP) |
| `Tools/RE/` | Python RE scripts (`pdbsym.py`, `check_patterns.py` = ini/hardcoded AOBs vs EXE+PDB, `check_layout.py` = `src/Engine/EngineLayout.h` constants vs PDB) |
| `Tests/` | `SDKCompileTest/` (offline compile test of generator output, `compile_generated.py`), `OverwriteBackupTest/` (pak-overwrite fixture + `check.py`), `PdbTiming/` (PDB lookup timing tool) |
| `docs/` | plan, RE notes, design docs, reports; `docs/guides/` has `Installation.md` (+ images) and `Modding.md` |
| `scripts/` | `setup.bat`, `generateProjects - *.bat`, `python/` (premake download + project generation) |

## Build
- Local toolchain since 2026-10-13: **VS 2026 (v145) only** (VS 2022 is no longer installed), x64 Release only:
  `"C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\amd64\MSBuild.exe" MDML.slnx -m -p:Configuration=Release -p:Platform=x64`.
  Expected warnings: none (the old C4715 in PresetMod was fixed in Wave 3C).
- Project files come from premake (root `premake5.lua` + `Dependencies/Dependencies.lua` + one `<Project>.lua` per project, `scripts/generateProjects - vs2026.bat` → `MDML.slnx`;
  the vs2022 action still works for CI and generates the untracked `MDML.sln`). `MDML.slnx` and all `*.vcxproj(.filters)` are tracked; regenerate them after every premake change. Premake is **not tracked**: `scripts/setup.bat` (→ `scripts/python/setup.py [--yes] [vs2022|vs2026|gmake2|nogen]`)
  downloads the pinned **premake 5.0.0** to `Dependencies/premake/premake5.exe`. 5.0.0 removed `flags {}`: use `enablepch "Off"`,
  `multiprocessorcompile "On"` etc. (old beta7 binary kept at `C:\dev\MDML\backup\tools\`).
- MinHook v1.3.4 is vendored as **source** (`Dependencies/MinHook`, `VENDORED.txt`) and built as the premake static-lib project `MinHook`; there is no prebuilt `.lib` any more.
- CI: `.github/workflows/msbuild.yml` (push/PR on `main`, `modernize`): premake vs2022 (runner has VS 2022) → msbuild Release x64 → artifact without `*.lib`/`*.pdb`. The 2.5 GB SDK.lib may exceed runner limits until the SDK is replaced (plan 2.4).
- Output: `bin/Release-windows-x86_64/` (`MDML.dll`, `xinput1_3.dll`, `Mods/…`). SDK.lib ~222 MB since LTCG was disabled for the SDK project (was 2.7 GB); replaced by the new generator later (plan 2.4).

## Game / RE environment (this machine)
- Game: `E:\SteamLibrary\steamapps\common\Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\`
- **The game ships a full matching PDB** (`Medieval_Dynasty-Win64-Shipping.pdb`, Steam depot 1129581, GUID matches the EXE). Prefer resolving by symbol name over AOB guessing.
- IDA Pro 7.5 SP3: `C:\Program Files\IDA Pro 7.5 SP3` (use `idat64.exe -A -S<script>` headless; MCP plugins need IDA ≥ 8.3).
- Reference sources in `C:\dev\MDML\tools\`: `RE-UE4SS-src` (MIT), `Dumper-7` (no license file; maintainer allows use in open-source projects **with proper attribution**, issue #416 — always credit when adapting code), UE4SS binaries. MDML itself is LGPL-2.1.
- Python 3.13 with pefile, capstone, keystone, lief.
