# Core Mods
-  Download the example project in the download tab
-  There should be vs22 project files but you can generate your own using premake in the scripts folder, no need to install anything
-  Use the ExampleMod project to start
-  The entire source code of mdml is in the project so you can browse to search or add functions 
-  The hand-written engine core (UObject, FName, containers, math) is in Loader/ModLoader/src/Engine/UE4; every game and engine class (AActor, BP_PlayerCharacter_C, ...) is in the generated SDK in Loader/SDK/Generated (see "Game classes" below)
-  The mod.ini files will be moved in the build dir, the original mod.ini is located at Mods/Examples/<YourMod>/Config (see Mods/Examples), put all your mod files into this folder so they get copied at build
### Core mod API (since Wave 3)
- Derive from `GameMod` (`MDML/GameMod.h`, part of MDML.dll since Wave 4 step B; BaseMod is gone) and override `OnModInitialize()`
  (was misspelled `OnModInitilize`; renamed without alias, so old mods must be updated).
  `Tick(ELevelTick, float DeltaTime)`, `GameTick`, `DrawImGui` etc. are unchanged.
- **Game classes (Wave 4 step B):** the old `SDK.lib` is gone. The generated SDK is header-only, one header per game/engine
  package in `Loader/SDK/Generated` (premake `%{IncludeDir.SDK}`): `#include "Engine.hpp"` for `AActor`, `UGameplayStatics`, ...,
  `#include "BP_WeatherManager.hpp"` for `ABP_WeatherManager_C` and so on; nothing to link. Members are properties resolved by
  name at runtime (`weather->CloudDensity = 0.0f;`), functions call the game through ProcessEvent (`weather->UpdateTime(time);`).
  Details: `docs/SDK_GENERATOR.md`. Engine helpers that are not reflected live in the core: `UE4::GetWorld()`,
  `UE4::SpawnActor(Class, Transform)`, `UE4::GetDataTableRowMap(Table)`, `UE4::GetUserDefinedEnumDisplayNames(Enum)`.
- `GameMod` getters (`getPlayerCharacter()`, `getWeatherManager()`, `getTimeManager()`, ...) return the generated Blueprint
  classes, only forward-declared in `MDML/GameMod.h`: include the package header to use them (`BP_PlayerCharacter.hpp`, ...).
  `getMDGameState()` returns `UE4::EMD_GameState` (`Medieval_Dynasty.hpp`), now with the generated names `Init`, `Menu`,
  `Loading`, `InGame`, ... (were `MD_GameState__Init`, ...). `getCameraManager()` (which returned the animals manager) is now
  `getAnimalsManager()`. `Utils::ValidateBPObject<T>(obj, name)` is `GameMod::CastByName<T>(obj, name)`.
- **Breaking changes of step B:** `Utils.h`, `MDML/Memory.h` (`Read<T>`/`Write<T>`; use the generated members or
  `mdml::mem::LoadField`/`StoreField` from `EngineMemory.h`), the hand-written `UE4::UWorld`/`ULevel`/`UGameInstance`/
  `UUserDefinedEnum` classes (now generated; `UWorld::GetWorld()` -> `UE4::GetWorld()`), the old SDK's `M_Get...`/`M_Set...`
  accessors and the `BaseMod` link are gone. The "BaseMod is always loaded first" rule of `LoadOrder.ini` is gone too.
- **Public API (Wave 4):** mods only see `Loader/ModLoader/include` (premake `%{IncludeDir.MDML}`) plus the engine core
  (`%{IncludeDir.Engine}`, `%{IncludeDir.EngineUE4}`), never the loader's `src`. Include `"MDML/MDML.h"` (everything) or single headers:
  `MDML/Mod.h`, `MDML/Mods.h`, `MDML/Log.h`, `MDML/Hooks.h`, `MDML/IniFile.h`, `MDML/GameThread.h`, `MDML/Paths.h`, `MDML/Notices.h`,
  `MDML/UI.h`, `MDML/UI/Widgets.h`, `MDML/UI/TextEditor.h`, `MDML/Engine.h`, `MDML/GameMod.h` (list with one line each in `MDML/MDML.h`).
  Namespaces: `mdml::platform` (`Hooks`, `IniFile`), `mdml::runtime` (`GameThread`, `Notices`, `FormatPath`, `GetLoaderFolder`, `GetConfigFolder`, `GetDataFolder`),
  `mdml::mods` (`ForEachMod`, `FindMod`, `GetModCount`, `MoveToFront`, `RegisterBPFunction`), `mdml::ui` (`GetDevice`, `GetContext`,
  `GetRenderTargetView`, `IsRenderingReady`, `IsMenuOpen`, `SetTheme(ColorTheme)`), `mdml::ui::widgets` (`Combo`, `Vector3`, `Bool`, `Float`, ...).
  `Mod::ModRef` is gone: do not set it in your constructor, `CompleteModCreation()` registers the mod.
- **Breaking changes in Wave 4:** `ImGui::MDML_Combo` etc. -> `mdml::ui::widgets::Combo` etc.; the `LoaderUI` class is gone
  (`LoaderUI::GetUI()->pDevice` -> `mdml::ui::GetDevice()`, `LoaderUI::setColorTheme(ImGuiColorTheme::X)` -> `mdml::ui::SetTheme(mdml::ui::ColorTheme::X)`);
  `Global` is loader-internal (`Global::GetGlobals()->CoreMods` -> `mdml::mods::ForEachMod` / `MoveToFront`; `REGISTER_FUNCTION` now lives in `MDML/Mods.h`);
  `mdml::runtime::Config` is no longer visible to mods (use the `MDML/Paths.h` functions). Old include paths (`Mods/Mod.h`, `Platform/...`, `Runtime/...`, `UI/LoaderUI.h`) are gone.
- **Threading:** `DrawImGui` and button callbacks run on the render thread. Do not call into the engine (ProcessEvent, GObjects scans, `StaticFindObject`,
  actor functions) from there: use `mdml::runtime::GameThread::Enqueue([]{ ... });` (runs later on the game thread, in the Tick hook). `GameTick`/`BeginPlay`/`InitGameState` already run on the game thread.
- Reflection: `UStruct::GetChildProperties()` returns the `FField*` chain (members); loops over all objects use `UE4::UObject::ForEachObject(fn)` and `UE4::UObject::GetAllObjectsOfType`.
- Config: `GameMod::GetINIConfig<T>(key, section = "Config", default)` / `SetINIConfig(key, value, section)` read/write your `mod.ini` through `mdml::platform::IniFile`
  (T: bool, integers, float, `std::string`). Use `IniFile` directly for other files.
- **INI format:** comments are only whole lines whose first non-blank character is `;`. `#` and `//` are not comments, and a `;` after a value belongs to the value
  (`DLLPath=Foo.dll ; my mod` means the file `Foo.dll ; my mod`). Section/key names match exactly first, then case-insensitively. The key is spelled `PersistentObjectFile` (the old typo `PeristentObjectFile` is not read any more).
- Developer tools (object browser, INI browser/editor, SDK generator, dev-build flag swap) are in the DevTools mod (off by default, see its `mod.ini`).

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
