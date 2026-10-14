# MDML Mod Manager

Desktop app to install and manage MDML (Medieval Dynasty Mod Loader) and its mods. Part of the MDML solution
(`Tools/ModManager/ModManager.lua`, `Core/ModManagerCore.lua`), independent of the loader at runtime. GUI: **SDG**
(GLFW + OpenGL + ImGui); all libraries live in the shared `Dependencies/` folder (vendored, no submodules).

## Features
- Finds the game through Steam (registry + `libraryfolders.vdf`) or manual folder selection.
- **Install / update MDML** from a local build output folder (default), a zip file, or a GitHub release. Replaced files are backed up,
  existing configs are kept.
- **Create release zip** from the local build (MDML.dll, proxy, Config, BaseMod).
- **Mods**: list `Content/Mods`, enable/disable and reorder (`Config/LoadOrder.ini`, comments preserved), install from zip / folder / dll
  (button or drag & drop), remove (recycle bin).
- **Configs**: graphical editor for the loader's `Config/*.ini` and every mod's `*.ini`.
- Launch the game (Steam or directly).

## Build
Part of `MDML.slnx` (group GUI): `ModManager`, `ModManagerCore`, `ModManagerTests`, its libraries `SDG`, `GLFW`, `Glad`, `ImGui` are in the group Dependencies.
```
premake5 vs2026            (Dependencies\premake\premake5.exe, from the repo root)
msbuild Tools\ModManager\ModManager.vcxproj /p:Configuration=Release /p:Platform=x64
Output\Tests\ModManagerTests.exe     (offline tests of the core)
```
Output: `Output/ModManager/MDML Mod Manager.exe` (+ `Resources/`). Settings and backups:
`%LOCALAPPDATA%\MDML ModManager\`. Details: [docs/ModManager.md](docs/ModManager.md).
