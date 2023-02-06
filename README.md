# Medieval Dynasty Mod Loader
Medieval Dynasty Mod Loader (MDML) is a fork of the [Unreal Engine Mod Loader](https://github.com/RussellJerome/UnrealModLoader), I customized it, so it works better with the game medieval dynasty. The Nexusmods mod can be found [here](https://www.nexusmods.com/medievaldynasty/mods/30)!

# Requirements
- The mod loader only supports the 64-Bit Windows version of the game
- You need to use DirectX11, otherwise the GUI will crash. Go to ```Settings>Graphics>Rendering Mode``` and switch to DirectX11

# Installation 
- Download the latest [Release](https://github.com/stulu08/Medieval-Dynasty-Mod-Loader/releases/latest) as a zip file
- Unzip the file
- Copy ```MDML.dll```, ```xinput1_3.dll``` and the ```Config``` folder into your medieval dynasty binaries folder, it is normally located at ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Binaries/Win64``` and there should be a file called ```Medieval_Dynasty-Win64-Shipping.exe```
- Now start the game, if you did everything correct a GUI will pop up by pressing F1 and you should be able to find a Log folder inside the binaries folder
- Additionally put the BaseMod folder inside ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```, create the folder if it is not there or start the game to automatically create it

# Building it
- There are Visual Studio 17+ project files, but you should use premake to generate the project files
- Premake scripts are located in the scripts folder and are ready for execution on Windows 10 and 11

# Bugs
- When you get a DirectX error you may have started in DirectX12 Rendering Mode, switch it to DirectX11 in ```Settings>Graphics>Rendering Mode```
- Dont start using the ```Medieval_Dynasty-Win64-Shipping.exe``` executable, use steam

# Installing Mods
- Mods are place inside the Mods folder ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
- To install a mod, put the folder of the mod inside the mods folder and make sure the mod has a ```mod.ini```

# About Mods
- There are 3 types of mods: Core, Logic, Overwrite
- Core mods are DLL's which will get loaded with the mod loader automatically, they are used to adding features for the mod loader and do stuff that you can't do with Logic mods
- Logic mods are Unreal Engine actor files, the actor file will get loaded by mdml using StaticLoadObject if setup correctly, you can create a mod inside UE4 and use most of the features from UE4
- Overwrite mods, they overwrite the game files. On startup the mod loader will generate hard links from the mod files to the game files and on application exit or next start they will get removed. It's basically the same as Vortex
- [Here](Modding.md) is very simple tutorial on how to create mods

# DISCLAIMER
This software is provided by the author "as is". In no event shall the author be liable for any direct, indirect, incidental, special, exemplary, or consequential damages (including, but not limited to procurement of substitute goods or services; loss of use, data, or profits; or business interruption) however caused and on any 
theory of liability, whether in contract, strict liability, or tort (including negligence or otherwise) arising in any way out of the use of this software, even if advised of the possibility of such damage.


# 3rd Party Software
  * [UnrealModLoader](https://github.com/RussellJerome/UnrealModLoader)
  * [feather-ini-parser](https://github.com/Turbine1991/cpp-feather-ini-parser)
  * [Minhook](https://github.com/TsudaKageyu/minhook)
  * [ImGui](https://github.com/ocornut/imgui)
  * [GLM](https://github.com/g-truc/glm)
  * [spdlog](https://github.com/gabime/spdlog)
