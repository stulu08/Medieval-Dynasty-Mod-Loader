# Core Mods
-  Download the example project in the download tab
-  There should be vs22 project files but you can generate your own using premake in the scripts folder, no need to install anything
-  Use the ExampleMod project to start
-  The entire source code of mdml is in the project so you can browse to search or add functions 
-  UE4 headers can be found in Loader/ModLoader/src/Engine/UE4, additionally the BaseMod gives game specific features, not much jet but I am looking forward to adding more
-  The mod.ini files will be moved in the build dir, the original mod.ini is located at Mods/Examples/<YourMod>/Config (see Mods/Examples), put all your mod files into this folder so they get copied at build
### Core mod API (since Wave 3)
- Derive from `GameMod` (BaseMod) and override `OnModInitialize()` (was misspelled `OnModInitilize`; renamed without alias, so old mods must be updated).
  `Tick(ELevelTick, float DeltaTime)`, `GameTick`, `DrawImGui` etc. are unchanged.
- Loader API namespaces: `mdml::platform` (`Hooks`, `IniFile`, `SymbolResolver`), `mdml::runtime` (`GameThread`, `Config`, `FormatPath`, `GetDataFolder`),
  `mdml::mods` (loader internals). Includes: `Mods/Mod.h`, `Platform/Hooks.h`, `Platform/IniFile.h`, `Runtime/GameThread.h`.
  `Mod::ModRef` is gone: do not set it in your constructor, `CompleteModCreation()` registers the mod.
- **Threading:** `DrawImGui` and button callbacks run on the render thread. Do not call into the engine (ProcessEvent, GObjects scans, `StaticFindObject`,
  actor functions) from there: use `mdml::runtime::GameThread::Enqueue([]{ ... });` (runs later on the game thread, in the Tick hook). `GameTick`/`BeginPlay`/`InitGameState` already run on the game thread.
- Reflection: `UStruct::GetChildProperties()` returns the `FField*` chain (members); loops over all objects use `UE4::UObject::ForEachObject(fn)` and `UE4::UObject::GetAllObjectsOfType`.
- Config: `GameMod::GetINIConfig<T>(key, section = "Config", default)` / `SetINIConfig(key, value, section)` read/write your `mod.ini` through `mdml::platform::IniFile`
  (T: bool, integers, float, `std::string`). Use `IniFile` directly for other files.
- **INI format:** comments are only whole lines whose first non-blank character is `;`. `#` and `//` are not comments, and a `;` after a value belongs to the value
  (`DLLPath=Foo.dll ; my mod` means the file `Foo.dll ; my mod`). Section/key names match exactly first, then case-insensitively. The key is spelled `PersistentObjectFile` (the old typo `PeristentObjectFile` is not read any more).
- Developer tools (object browser, INI browser/editor, SDK generator/exporter, dev-build flag swap) are in the DevTools mod (off by default, see its `mod.ini`), not in BaseMod.

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
;The name you mod has, make it the same as in your dll, if you have one
ModName=ExampleMod

;The file name of your actor as a relative path from your mod folder
ActorFile=Content/ModActor.uasset
;ActorPath will be build automaticly but you can set your own here
;ActorPath=/Game/Mods/ExampleMod/Content/ModActor.ModActor_C

;PersistentObject is not needed
;The file name of your persistent object as a relative path from your mod folder
;PersistentObjectFile=Content/ModInstanceObject.uasset
;PersistentObjectPath will be build automaticly but you can set your own here
;PersistentObjectPath=/Game/Mods/ExampleMod/Content/ModInstanceObject.ModInstanceObject_C
```

# Overwrite Mods
- Use this [this](https://www.gildor.org/en/projects/umodel) to search for assets which you want to replace
- Once you found you assets save them somewhere
- If you do this you will already have a folder structure
- Generate your replacements using the same project as for the Logic Mods and use UE 4.27.2
- You want to replace all files off the assets that were also exported(.uasset, .uexp, .ubulk) otherwise it wont work,
- To generate the files package your uproject and copy the files, if unreal engine wont generate .ubulk files try turning searching for a streaming options for the asset and turn it on
- Once you have your files packaged it is time to create the mod
- Create a folder with a mod.ini file then create a seperate folder (name it whatevery you want here it is OverwriteContent) and then put your files inside
- You must always keep the same as in the game, when you want to Overwrite a file in ```GFX/Characters/Female/Mature/Materials/BodyMesh.uasset``` you will need to put my asset in ```OverrideContent/GFX/Characters/Female/Mature/Materials/BodyMesh.uasset```
- Once everything is done copy ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
### Here is the mod.ini structure for your mod to 
```
[Overwrites]
Enable=True
;The folder where your stuff is located, mdml will recursivly iterate over it and create links for every file and delete if after closing
Folder=OverwriteContent
```

# Other
- This is a very bad modding tutorial, so if you have any questions just contact me over github or [discord](https://discord.com/invite/nmZghtJ9AZ)
- A full mod.ini can look like this and yes you are able to put all 3 mod types inside one mod.ini
```
[Mod]
;The file name of your dll as a relative path from you mod folder
DLLPath=ExampleMod.dll

[LogicMod]
;The name you mod has, make it the same as in your dll, if you have one
ModName=ExampleMod

;The file name of your actor as a relative path from your mod folder
ActorFile=Content/ModActor.uasset
;ActorPath will be build automaticly but you can set your own here
;ActorPath=/Game/Mods/ExampleMod/Content/ModActor.ModActor_C

;PersistentObject is not needed
;The file name of your persistent object as a relative path from your mod folder
;PersistentObjectFile=Content/ModInstanceObject.uasset
;PersistentObjectPath will be build automaticly but you can set your own here
;PersistentObjectPath=/Game/Mods/ExampleMod/Content/ModInstanceObject.ModInstanceObject_C

[Overwrites]
Enable=True
;The folder where your stuff is located, mdml will recursivly iterate over it and create links for every file and delete if after closing
Folder=OverwriteContent
```
