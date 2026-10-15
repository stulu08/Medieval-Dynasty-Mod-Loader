# ModManager: architecture and handoff

Status 2026-10-14: builds with VS 2026 (v145) Release inside the MDML solution, core tests pass, app starts.
Not yet tested end to end against the real game folder (install, reorder, launch).

## Layout
```
Tools/ModManager/
  ModManager.lua        the SDG app (WindowedApp, target "MDML Mod Manager")
  src/App.cpp, src/UI/  entry (SDG), State (actions + worker thread), MainPanel (tabs), Dialogs (IFileDialog)
  Core/ModManagerCore.lua   static lib without GUI + ModManagerTests (Core/Tests/Main.cpp)
  Core/src/ModManager/  Ini, LoadOrder, ModScanner, GameInstall, Installer, Archive, Http, Settings, Util
  Resources/            SDG fonts, copied next to the exe
Dependencies/ (shared with the loader, vendored, no submodules; static libs in the solution group "Dependencies"; see each VENDORED.txt)
  ImGui/imgui           the same 1.92.9b copy MDML.dll links (project ImGuiLoader); backends/ = GLFW + OpenGL3 backends,
                        ImGui.lua = project "ImGui" (standalone, config/standalone/Core.h) + "ImGuiLoader" (config/loader/Core.h)
  SDG, GLFW, Glad, stb_image, glm, nlohmann-json
```
`Dependencies/Dependencies.lua` has the IncludeDir entries (block "GUI libraries of Tools/ModManager"). ImGui's `imconfig.h` MDML block
needs `LOADER_API` defined: SDG and the app define it empty (`LOADER_API=`), the ImGui static lib gets it from `Dependencies/ImGui/config/standalone/Core.h`.
The GLFW fork's header claims 3.4 but lacks `glfwGetPlatform`; `imgui_impl_glfw_compat.cpp` wraps the upstream backend.
Old standalone layout (own workspace, SDG's imgui fork): `C:\dev\MDML\backup\2026-10-14_ModManager_standalone-layout`.
## Core rules (mirror MDML, see the loader repo docs)
- INI dialect: whole-line `;`/`#` comments, `;` after a value belongs to the value, case-insensitive fallback lookup. `IniDocument` keeps
  every line untouched except the edited value.
- `Config/LoadOrder.ini`: `Name = 1/0`, top = first, trailing `; comment` allowed; `LoadOrder` keeps header/footer comments.
  New mods are appended in memory (alphabetical) and written only when the user changes something.
- Mod discovery = `ModLoader::ScanMods`: folder with a `mod.ini` that has at least one `[Core]`, `[Blueprint]` or `[Overwrite]` section (loose DLLs and folders without a `mod.ini` are no longer mods).
- Loader package = a directory (up to 2 levels deep) containing `MDML.dll`; mods are `Mods/<name>` (build output) or `<name>/mod.ini`
  (release zip). `*.pdb/*.exp/*.lib` are never installed. `Config/` files are only copied when missing.
- Zip I/O uses Windows' `tar.exe` (no zip library); it rejects `..` entries.
- Never deletes: replaced files/folders are copied to `%LOCALAPPDATA%\MDML ModManager\backups\<timestamp>\`, removed mods go to the recycle bin.
- Install/remove refuse while the game process runs.

## Release packages
Two zips are made from the repo build output (`Output/ModLoader`, found relative to the exe; `Output/ModManager` and the repo sources are
read too). Code: `Installer.cpp` (`StageRelease`/`CreateReleaseZip`, `ReleaseKind`), tests in `ModManagerTests` (`TestReleasePackages`).
- **How:** UI (Loader tab, local build): "Create release zip..." and "Create development kit..." (Windows `tar.exe`, no zip library);
  or without the UI after a build: `scripts\package.bat [outDir]` runs `Output/Tools/MDMLPackager.exe` (project `MDMLPackager`,
  `Packager/Main.cpp`) and writes both zips to `Output/Packages` (git-ignored). Names: `MDML-<version>.zip`, `MDML-DevKit-<version>.zip`
  (version = file version of MDML.dll; "dev" while the dll has no version resource, as now).
- **End user** (`MDML-<v>.zip`, ~17 MB): `MDML.dll`, `xinput1_3.dll`, `Config/` (shipped `ModLoaderInfo.ini`, `NoOverwrite.ini`; never
  `LoadOrder.ini`/`SymbolCache.txt`/`WindowConfig.ini`), `ModManager/` (exe + `Resources/`, no pdb, no `*-config.ini`), `docs/Installation.md` +
  images, `README.md`, `LICENSE`, `THIRD_PARTY_LICENSES.md`. No mods, no pdb, no headers. The root is a loader package, so the manager's
  "Zip file" source installs it (and a mod list of zero).
- **Development kit** (`MDML-DevKit-<v>.zip`, ~37 MB, ~3200 files): everything above + `MDML.pdb`, `xinput1_3.pdb`, `Mods/DevTools/` (with pdb, its
  shipped `mod.ini` keeps it disabled) + `DevKit/` (own README = `docs/guides/DevKit.md`): `include/MDML` (public API), `include/Engine`
  (engine core headers only), `include/SDK` (generated SDK), `include/ThirdParty` (spdlog, glm, imgui headers + licenses), `lib/MDML.lib`,
  `examples/` (PresetMod, TimeWeatherChanger sources + `Config/mod.ini` + premake files, no vcxproj/bin), `docs/` (Modding, ARCHITECTURE,
  SDK_GENERATOR, mod-components, public-api, hook-api, GamePatch). Only DevTools is taken from `Mods/` (stale folders in `Output` are ignored).
- The dev kit needs the repo (it reads sources and `Loader/ModLoader/bin/Release-windows-x86_64/MDML.lib`); a package that is not the repo build
  output (zip/GitHub source) can only be re-zipped as the end-user package (loader + Config).
- No mod is special-cased any more (BaseMod removal): no default mod selection when installing, mods are opt-in.

## Why not the GitHub release
The only published release is v2.3.1 (2025-01); MDML was rewritten locally since. The default source is therefore the local build
(`Output/ModLoader` of the MDML repo, auto-detected relative to the exe). "Create release zip" produces a package the
GitHub source and the zip source understand (see "Release packages"); publishing it is a manual decision of the owner.

## Open / ideas
- Pak mods (`docs/design/pak-mods.md` in the loader repo) once designed: a `[Pak]` section and priority direction are needed.
- Show loader log (`Binaries/Win64/Logs`) in the Log tab; conflict view for overwrite mods.
- Self update of the manager, mod metadata (`[Info]` Name/Description/Author/Version is read if present).
- Old ImGui/D3D implementation (pre-2026-10-14) is kept in `C:\dev\MDML\backup\2026-10-14_ModManager_old`.

