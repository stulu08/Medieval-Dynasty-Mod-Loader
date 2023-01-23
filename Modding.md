# Core Mods
-  Download the example project in the download tab
-  There should be vs22 project files but you can generate your own using premake in the scripts folder, no need to install anything
-  Use the ExampleMod project to start
-  The entire source code of mdml is in the project so you can browse to search or add functions 
-  UE4 headers can be found in ModLoader/src/UE4, additionally the BaseMod gives game specific features, not much jet but I am looking forward to adding more
-  The mod.ini files will be moved in the build dir, the original mod.ini is located at ExampleMod/Config, put all your mod files into this folder so they get copied at build
### Here is the mod.ini structure for your mod
```
[Mod]
;The file name of your dll as a relative path from you mod folder
DLLPath=ExampleMod.dll
```

# Logic Mods
- Begin by installing Unreal Engine 4.27.2
- Create a project called ```Medieval_Dynasty```
- The mod content(ModActor.uasset, ...) should be placed inside ```Content/Mods/[Your Mod Name]```
- Here is a [tutorial](https://youtu.be/fB3yT85XhVA?list=PL-dFOLrGFgdwbzcHmZ2ghuN3LXxlazbZP) on how to create a Logic Mod, but keep in mind this is not for mdml, it is for uml, mdml is only based of that and I've made changes
- Dont build your mod as pak, mdml only supports loose file loading. So skip the entire pak section of the video
- You can also create multiple mods in one Unreal Engine Project since only 
- Your final mod should contain a mod.ini and should be placed in the mod folder from mdml ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
### Here is the mod.ini structure for your mod
```
[LogicMod]
;The name you mod has, make it the same as in your core mod, if you have one
ModName=ExampleMod
;The file name of your actor as a relative path from you mod folder
ActorFile=Content/ModActor.uasset
;ActorPath will be build automaticly but you can set you own here, this will need to be same as in your project
;ActorPath=/Game/Mods/ExampleMod/Content/ModActor.ModActor_C
```

# Overwrite Mods
- Use this [this](https://www.gildor.org/en/projects/umodel) to search for assets which you want to replace
- Once you found you assets save them somewhere
- If you do this you will already have a folder structure
- Generate your replacements using the same project as for the Logic Mods and use UE 4.27.2
- You want to replace all files off the assets that were also exported(.uasset, .uexp, .ubulk) otherwise it wont work,
- To generate the files package your uproject and copy the files, if unreal engine wont generate .ubulk files try turning searching for a streaming options for the asset and turn it on
- Once you have your files packaged it is time to create the mod
- Create a folder with a mod.ini file then create a seperate folder (name it whatevery you want here it is OverrideContent) and then put your files inside
- You must always keep the same as in the game, when you want to override a file in ```GFX/Characters/Female/Mature/Materials/BodyMesh.uasset``` you will need to put my asset in ```OverrideContent/GFX/Characters/Female/Mature/Materials/BodyMesh.uasset```
- Once everything is done copy ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
### Here is the mod.ini structure for your mod to 
```
[Overrides]
Enable=True
;The folder where your stuff is located, mdml will recursivly iterate over it and create links for every file and delete if after closing
Folder=OverrideContent
```

# Other
- This is a very bad modding tutorial, so if you have any questions just contact me over github or [discord](https://discord.com/invite/nmZghtJ9AZ)
- A full mod.ini can look like this and yes you are able to put all 3 mod types inside one mod.ini
```
[Mod]
;The file name of your dll as a relative path from you mod folder
DLLPath=ExampleMod.dll

;[LogicMod]
;The name you mod has, make it the same as in your core mod, if you have one
ModName=ExampleMod
;The file name of your actor as a relative path from you mod folder
ActorFile=Content/ModActor.uasset
;ActorPath will be build automaticly but you can set you own here, this will need to be same as in your project
;ActorPath=/Game/Mods/ExampleMod/Content/ModActor.ModActor_C

[Overrides]
Enable=True
;The folder where your stuff is located, mdml will recursivly iterate over it and create links for every file and delete if after closing
Folder=OverrideContent
```
