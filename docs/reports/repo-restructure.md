# Repo restructure (folder layout)

Goal: every file where you would expect it, grouped like the owner's SEngine project (`Dependencies/` for all third-party code with
`Dependencies/Dependencies.lua`, one folder per concern, `<Project>.lua` instead of `premake5.lua`). Only paths changed. Code logic, class and
namespace names and identifiers are untouched. All moves were done with `git mv` (history follows `git log --follow`).

## Old -> new

| Old | New |
|---|---|
| `ModLoader/vendor/{spdlog,ImGui,INI,glm,MinHook}` | `Dependencies/{spdlog,ImGui,INI,glm,MinHook}` (`MinHook/premake5.lua` -> `MinHook/MinHook.lua`) |
| `ModLoader/src/UI/ImGuiColorTextEdit` | `Dependencies/ImGuiColorTextEdit` |
| `DevTools/vendor/Dumper-7` | `Dependencies/Dumper-7` (`VENDORED.txt` kept) |
| `Scripting/vendor/{lua-5.4.9,sol2-3.3.0}` | `Dependencies/{lua-5.4.9,sol2-3.3.0}` |
| `Scripting/vendor/VENDORED.txt` | `Dependencies/VENDORED-lua-sol2.txt` |
| `ModManager/src/JSON.h` | `Dependencies/nlohmann-json/JSON.h` |
| `scripts/premake/premake_customization` | `Dependencies/premake/premake_customization` |
| `scripts/premake/premake5.exe` (untracked, downloaded) | `Dependencies/premake/premake5.exe` |
| IncludeDir / ProjectDir tables in root `premake5.lua` | `Dependencies/Dependencies.lua` |
| `ModLoader/` (`premake5.lua`) | `Loader/ModLoader/` (`ModLoader.lua`) |
| `Config/{ModLoaderInfo,NoOverwrite}.ini` | `Loader/ModLoader/Config/` |
| `ModLoader/src/Utilities/{Hooks,HooksManager,SymbolResolver,Pattern,Memory,Logger,Math}.*` | `Loader/ModLoader/src/Platform/` |
| `ModLoader/src/Utilities/{EngineDefFinder,Dumper}.*` | `Loader/ModLoader/src/Engine/` |
| `ModLoader/src/Utilities/GameThread.*` | `Loader/ModLoader/src/Runtime/` |
| `LoaderAutoInjector/` (`premake5.lua`) | `Loader/Proxy/` (`Proxy.lua`, output still `xinput1_3.dll`) |
| `SDK/` (`premake5.lua`) | `Loader/SDK/` (`SDK.lua`) |
| `Scripting/` (`premake5.lua`) | `Loader/Scripting/` (`Scripting.lua`, still standalone) |
| `BaseMod/`, `DevTools/` | `Mods/BaseMod/`, `Mods/DevTools/` (`BaseMod.lua`, `DevTools.lua`) |
| `ExampleMods/{PresetMod,TimeWeatherChanger}` (`ExampleMods/premake5.lua`) | `Mods/Examples/{PresetMod,TimeWeatherChanger}` (`Examples.lua`, `PresetMod.lua`, `TimeWeatherChanger.lua`) |
| `ModManager/` | `Tools/ModManager/` (`ModManager.lua`) |
| `tools/{pdbsym,check_patterns}.py` | `Tools/RE/` |
| `DevTools/tests/SDKCompileTest` | `Tests/SDKCompileTest` (`SDKCompileTest.lua`) |
| `tests/mods/OverwriteBackupTest` | `Tests/OverwriteBackupTest` |
| `tests/pdb-timing` | `Tests/PdbTiming` |
| `Install Instructions/*` | `docs/guides/Installation.md` + the two images |
| `Modding.md` | `docs/guides/Modding.md` |
| `MDML.sln` | deleted (owner decision). `MDML.slnx` and all `*.vcxproj(.filters)` stay tracked and were regenerated with premake `vs2026` |

Unchanged: `scripts/` (setup.bat, generateProjects*.bat, python/), `docs/` (rest), root files (`premake5.lua`, README, LICENSE, THIRD_PARTY_LICENSES, CLAUDE.md, `.github/`, `.gitignore`).

## What had to be edited besides the moves

- `#include` paths: `"Utilities/X.h"` -> `"Platform/X.h"`, `"Engine/EngineDefFinder.h"`, `"Engine/Dumper.h"`, `"Runtime/GameThread.h"` (20 files in ModLoader, BaseMod,
  DevTools, PresetMod); `BaseMod.cpp`: `"UI/ImGuiColorTextEdit/TextEditor.h"` -> `"TextEditor.h"` (include dir `IncludeDir.ImGuiColorTextEdit`). `Downloader.cpp` keeps
  `#include "JSON.h"` (include dir `IncludeDir.nlohmann_json` in `ModManager.lua`). Two comments naming `Utilities/...` were updated.
- One string literal: the header comment that `MDMLGenerator` writes into generated SDK headers pointed at `DevTools/vendor/Dumper-7/VENDORED.txt`; it now says
  `Dependencies/Dumper-7/VENDORED.txt` (comment text only, plus the same path in `MDMLGenerator.h`).
- Premake: root `premake5.lua` (includes, `solution_items`, now `include "Dependencies/Dependencies.lua"`), all project files (renamed to `<Project>.lua`, relative paths),
  `ModLoader.lua`: `vendor/**` and the old glob no longer see ImGui / glm / ImGuiColorTextEdit, so they are listed explicitly (`../../Dependencies/...`) and the PCH-off filter was
  adjusted to the same paths (TextEditor.cpp still uses the PCH as before); `removefiles` of the MinHook sources dropped (no longer under the project).
  `ModLoader.lua` post-build copies `Loader/ModLoader/Config` to `bin/.../Config`. `DevTools.lua` takes the Dumper-7 root from `IncludeDir.Dumper7` and includes
  `Tests/SDKCompileTest/SDKCompileTest.lua`. `BaseMod.lua` got `IncludeDir.ImGuiColorTextEdit`. `Scripting.lua`: Lua/sol2 now come from `../../Dependencies`.
  `include "dir"` only finds a file named `premake5.lua`, so every include names the `<Project>.lua` file explicitly.
- Scripts: `setupPremake.py` (`premakeDirectory = ./Dependencies/premake`), the four `generateProjects*.bat`, `.gitignore` (premake exe/license, `Tools/ModManager/MDML.zip`, `Cache/`).
- `Tests/SDKCompileTest/compile_generated.py`: repo root is `parents[2]`; include dirs point at `Dependencies/...` and `Loader/ModLoader/src/...`.
- `Tools/RE/check_patterns.py`: it resolved `REPO` as the parent of its folder and the ini / `MDML.cpp` below it; now `REPO` is two levels up and the paths are
  `Loader/ModLoader/Config/ModLoaderInfo.ini` and `Loader/ModLoader/src/MDML.cpp`. Docstring paths updated.
- CI `.github/workflows/msbuild.yml`: all commands were already path independent (setup.py generates `MDML.sln` for vs2022, which is not tracked, and msbuild
  builds it; output dir `bin/Release-windows-x86_64` is unchanged), so only the comment was updated. Checked by reading, not run.
- Docs: `CLAUDE.md` (Layout, Build), `README.md`, `THIRD_PARTY_LICENSES.md`, `docs/MODERNIZATION_PLAN.md`, `REVERSE_ENGINEERING.md`, `SDK_GENERATOR.md`, `docs/design/*.md`,
  `Loader/Scripting/README.md`, `Dependencies/*/VENDORED*.txt`, fixture READMEs. Reports in `docs/reports/` keep their historical paths.

## Verification

- Baseline before moving: `find bin/Release-windows-x86_64 -type f | sort` (37 files incl. `.lib/.pdb/.exp`). After the restructure (projects regenerated with premake 5.0.0 `vs2026`, build from an
  empty tree): the file list is identical (also the non-`.lib/.exp/.pdb/.ilk` subset: `MDML.dll`, `xinput1_3.dll`, `Config/{ModLoaderInfo,NoOverwrite}.ini`, `Mods/{BaseMod,DevTools,PresetMod,TimeWeatherChanger}/...`,
  `Tests/SDKCompileTest.dll`, `UI/MDML Mod Manager.exe`).
- `MSBuild.exe MDML.slnx -m -p:Configuration=Release -p:Platform=x64`: success, the only warning is the expected C4715 in `Mods/Examples/PresetMod/Mod.cpp`.
- Scripting spike: `premake5 --file=Loader/Scripting/Scripting.lua vs2026`, MSBuild of `Loader/Scripting/build/MDMLScriptingSpike.slnx`, `ScriptingSpike.exe`: 121 Lua checks passed, `ALL PASSED`.
- `python Tests/SDKCompileTest/compile_generated.py C:/Users/derst/AppData/Local/Temp/mdml-sim/sdk`: 203/203 compiled.
- Not verified: the GitHub workflow itself (cannot run here), the `vs2022` action output, in-game behaviour (not launched).

## Owner decisions on the open questions (applied in the follow-up commit)

1. **Project names**: renamed `MedievalDynastyModLoader` -> `ModLoader` and `LoaderAutoInjector` -> `Proxy` (`ModLoader.vcxproj`, `Proxy.vcxproj`). Output names stay `MDML.dll`
   and `xinput1_3.dll`; `links`/`dependson` and docs updated. (`DevTools.SDKCompileTest` keeps its name.)
2. **ImGuiColorTextEdit** moved back to `Loader/ModLoader/src/UI/ImGuiColorTextEdit/` (owner-modified: `LOADER_API`, `Core.h`), LICENSE alongside. It is no longer in
   `Dependencies/`, so `ModLoader.lua` globs it again and `BaseMod` includes `"UI/ImGuiColorTextEdit/TextEditor.h"` as before; `IncludeDir.ImGuiColorTextEdit` was removed.
3. **`Engine/Dumper.*` and `Engine/EngineDefFinder.*`** moved to `Loader/ModLoader/src/Runtime/`; `Engine/` is the pure exported UE core again
   (includes are now `"Runtime/Dumper.h"`, `"Runtime/EngineDefFinder.h"`).
4. **Tests group**: `Tests/SDKCompileTest` has its own premake group `Tests`, included from the root `premake5.lua` (no longer through `DevTools.lua`).
5. **VENDORED** split: `Dependencies/lua-5.4.9/VENDORED.txt` and `Dependencies/sol2-3.3.0/VENDORED.txt` (the combined `VENDORED-lua-sol2.txt` is gone).

Statements above in this report about `ImGuiColorTextEdit` living in `Dependencies/`, `Engine/Dumper.*`, the old project names and `VENDORED-lua-sol2.txt` describe the first pass and are superseded by this section.

## Remaining notes
- `Dependencies/premake/` holds both the tracked `premake_customization` and the downloaded (ignored) `premake5.exe`.
- The README links `Installation.md` by its GitHub URL (`blob/main/docs/guides/Installation.md`); it only works once this is on `main`.
