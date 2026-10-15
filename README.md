# Medieval Dynasty Mod Loader
Medieval Dynasty Mod Loader (MDML) is a fork of the [Unreal Engine Mod Loader](https://github.com/RussellJerome/UnrealModLoader), I customized it, so it works better with the game medieval dynasty. The Nexusmods mod can be found [here](https://www.nexusmods.com/medievaldynasty/mods/30)!

# Requirements
- The mod loader only supports the 64-Bit Windows version of the game
- You need to use DirectX11, otherwise the GUI will crash. Go to ```Settings>Graphics>Rendering Mode``` and switch to DirectX11

# [Installation Instruction](https://github.com/stulu08/Medieval-Dynasty-Mod-Loader/blob/main/docs/guides/Installation.md)
- Download the latest [Release](https://github.com/stulu08/Medieval-Dynasty-Mod-Loader/releases/latest) as a zip file

# Building it
- Windows 10/11, Visual Studio 2026 (or 2022) with the C++ workload, Python 3
- `scripts/setup.bat` downloads premake 5.0.0 into `Dependencies/premake` and generates the projects
  (`scripts/generateProjects - vs2026.bat` regenerates them later). Project files are generated, not part of the repo.
- Build `MDML.slnx` (Release, x64). The installable loader is collected in `Output/ModLoader`
  (`MDML.dll`, `xinput1_3.dll`, `Config/`, `Mods/`).
- All third-party code is vendored in `Dependencies/` and built from source.

# Documentation
- [Installation](docs/guides/Installation.md), [Modding guide](docs/guides/Modding.md)
- [Architecture](docs/ARCHITECTURE.md): how the loader, the engine core, the generated SDK and the mods fit together
- [SDK generator](docs/SDK_GENERATOR.md): the generated game headers in `Loader/SDK/Generated`
- [After a game update](docs/guides/GamePatch.md), [Reverse engineering notes](docs/REVERSE_ENGINEERING.md)
- Development status and decisions: [docs/MODERNIZATION_PLAN.md](docs/MODERNIZATION_PLAN.md)

# Bugs
- When you get a DirectX error you may have started in DirectX12 Rendering Mode, switch it to DirectX11 in ```Settings>Graphics>Rendering Mode```
- Dont start using the ```Medieval_Dynasty-Win64-Shipping.exe``` executable, use steam

# Installing Mods
- Mods are place inside the Mods folder ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
- To install a mod, put the folder of the mod inside the mods folder and make sure the mod has a ```mod.ini```

# About Mods
- There are 3 types of mods: Core, Logic, Overwrite
- Core mods are DLL's which will get loaded with the mod loader automatically, they are used to adding features for the mod loader and do stuff that you can't do with Logic mods. They use the generated game headers (every class, struct and enum of the game) and the `GameMod` base class from MDML
- The load order is in `Medieval_Dynasty/Binaries/Win64/Config/LoadOrder.ini` (`Name = 1` enabled, `Name = 0` disabled, top = first)
- Logic mods are Unreal Engine actor files, the actor file will get loaded by mdml using StaticLoadObject if setup correctly, you can create a mod inside UE4 and use most of the features from UE4
- Overwrite mods, they overwrite the game files. On startup the mod loader will generate hard links from the mod files to the game files and on application exit or next start they will get removed. It's basically the same as Vortex
- [Here](docs/guides/Modding.md) is very simple tutorial on how to create mods

# DISCLAIMER
This software is provided by the author "as is". In no event shall the author be liable for any direct, indirect, incidental, special, exemplary, or consequential damages (including, but not limited to procurement of substitute goods or services; loss of use, data, or profits; or business interruption) however caused and on any 
theory of liability, whether in contract, strict liability, or tort (including negligence or otherwise) arising in any way out of the use of this software, even if advised of the possibility of such damage.


# Credits / Third-party
MDML is licensed under the LGPL-2.1 (see [LICENSE](LICENSE)). It is a fork of [UnrealModLoader](https://github.com/RussellJerome/UnrealModLoader) and uses several third-party libraries (spdlog, Dear ImGui, MinHook, GLM, mINI, nlohmann/json, ImGuiColorTextEdit, Feather INI Parser). Their licenses and copyright notices are listed in [THIRD_PARTY_LICENSES.md](THIRD_PARTY_LICENSES.md).
- The SDK generator tooling is based on [Dumper-7](https://github.com/Encryqed/Dumper-7) by Encryqed and Fischsalat, used with the maintainer's permission for open source projects with attribution ([issue #416](https://github.com/Encryqed/Dumper-7/issues/416)).
- [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) (MIT) served as design inspiration.
