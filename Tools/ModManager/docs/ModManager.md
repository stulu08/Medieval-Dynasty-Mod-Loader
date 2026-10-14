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
  New mods are appended in memory (BaseMod first, then alphabetical) and written only when the user changes something.
- Mod discovery = `ModLoader::ScanMods`: folder with `mod.ini` or `<Folder>/<Folder>.dll`, plus loose `*.dll`.
- Loader package = a directory (up to 2 levels deep) containing `MDML.dll`; mods are `Mods/<name>` (build output) or `<name>/mod.ini`
  (release zip). `*.pdb/*.exp/*.lib` are never installed. `Config/` files are only copied when missing.
- Zip I/O uses Windows' `tar.exe` (no zip library); it rejects `..` entries.
- Never deletes: replaced files/folders are copied to `%LOCALAPPDATA%\MDML ModManager\backups\<timestamp>\`, removed mods go to the recycle bin.
- Install/remove refuse while the game process runs.

## Why not the GitHub release
The only published release is v2.3.1 (2025-01); MDML was rewritten locally since. The default source is therefore the local build
(`Output/ModLoader` of the MDML repo, auto-detected relative to the exe). "Create release zip" produces a package the
GitHub source and the zip source understand; publishing it is a manual decision of the owner.

## Open / ideas
- Pak mods (`docs/design/pak-mods.md` in the loader repo) once designed: a `[Pak]` section and priority direction are needed.
- Show loader log (`Binaries/Win64/Logs`) in the Log tab; conflict view for overwrite mods.
- Self update of the manager, mod metadata (`[Info]` Name/Description/Author/Version is read if present).
- Old ImGui/D3D implementation (pre-2026-10-14) is kept in `C:\dev\MDML\backup\2026-10-14_ModManager_old`.

