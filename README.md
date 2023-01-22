# Medieval Dynasty Mod Loader
Medieval Dynasty Mod Loader (MDML) is a fork of the [Unreal Engine Mod Loader](https://github.com/RussellJerome/UnrealModLoader), I customized it, so it works better with the game medieval dynasty. The Nexuxmods mod can be found [here](https://www.nexusmods.com/medievaldynasty/mods/30)!

# Requirements
- The mod loader only supports the 64-Bit Windows version of the game
- You need to use DirectX11, otherwise the GUI will crash. Go to ```Settings>Graphics>Rendering Mode``` and switch to DirectX11

# Installation 
- Download the latest [Release](https://github.com/stulu08/Medieval-Dynasty-Mod-Loader/releases/latest) as a zip file
- Unzip the file
- Copy ```MDML.dll```, ```xinput1_3.dll``` and the ```Config``` folder into your medieval dynasty binaries folder, it is normally located at ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Binaries/Win64``` and there should be a file called ```Medieval_Dynasty-Win64-Shipping.exe```
- Now start the game, if you did everything correct a GUI will pop up by pressing F1 and you should be able to find a Log folder inside the binaries folder
- Additionally follow the ```Installing Core Mods``` tutorial below with the BaseMod folder

# Building it
- There are Visual Studio 17+ project files, but you should use premake to generate the project files
- Premake scripts are located in the scripts folder and are ready for execution on Windows 10 and 11

# Bugs
- When you get a DirectX error you may have started in DirectX12 Rendering Mode, switch it to DirectX11 in ```Settings>Graphics>Rendering Mode```
- Dont start using the ```Medieval_Dynasty-Win64-Shipping.exe``` executable, use steam
- .Pak mods doesn't work since the game uses signed paks!

# Installing Logic Mods
- ```pak``` or Logic Mods are placed inside ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Paks/LogicMods```
- Here is a [guide](https://youtu.be/i-hp3NS6heQ?list=PL-dFOLrGFgdwbzcHmZ2ghuN3LXxlazbZP) to creating Logic Mods, this does not work since the game uses signed pak files, but I am working on a fix.

# Installing Core Mods
- ```dll``` or Core Mods are placed inside ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
- You can put either a DLL directly inside the folder or you can put a folder with a ```mod.ini``` file, which tells MDML where the mod is, inside it
- Here is a [guide](https://youtu.be/i-hp3NS6heQ?list=PL-dFOLrGFgdwbzcHmZ2ghuN3LXxlazbZP) to creating Core Mods 
- An example CoreMod can be downloaded in the [Release Tab](https://github.com/stulu08/Medieval-Dynasty-Mod-Loader/releases/latest) as SampleModProject.zip

# Unreal Engine Mod Loader
A tool used to load Blueprint and basic SDK based C++ Mods for Unreal Engine 4 games

# DISCLAIMER
This software is provided by the author "as is". In no event shall the author be liable for any direct, indirect, incidental, special, exemplary, or consequential damages (including, but not limited to procurement of substitute goods or services; loss of use, data, or profits; or business interruption) however caused and on any 
theory of liability, whether in contract, strict liability, or tort (including negligence or otherwise) arising in any way out of the use of this software, even if advised of the possibility of such damage.

# Unreal Engine Mod Loader Discord
If you have any problems, or just want to provide feedback click [here](https://discord.gg/xmXUSNvypY)

# Unreal Engine Mod Loader Docs
All video documentation and guides can be found [here](https://www.youtube.com/playlist?list=PL-dFOLrGFgdwbzcHmZ2ghuN3LXxlazbZP).

# Unreal Engine Mod Loader Extra Info
	* You can enable or disable the mod loader output console via the ini (NOTE: This is not related to the UE4 Console.)
	* You can press f1 to open the Mod Loader gui panel.

# 3rd Party Software
  * [feather-ini-parser](https://github.com/Turbine1991/cpp-feather-ini-parser)
  * [Minhook](https://github.com/TsudaKageyu/minhook)
  * [ImGui](https://github.com/ocornut/imgui)
