# The mod model (since mod-components phase 1)
A mod is **one folder** in `Content/Mods` with **one `mod.ini`**. The `mod.ini` declares the mod's components, each by its own
section: `[Core]` (native DLL), `[Blueprint]` (cooked assets, optional actor), `[Overwrite]` (loose files that replace game
files). Any non-empty combination works; a folder whose `mod.ini` has none of the three is skipped (logged). `[Mod]` holds the
metadata (the only place: no `ModName` strings in C++, no `ModAuthor` Blueprint variables). One enable switch per mod:
`Config/LoadOrder.ini`. Design: `docs/design/mod-components.md`. The old sections (`[LogicMod]`, `[Overwrites]`, `[Overrides]`, `DLLPath`,
`Enable=`) and loose DLLs in `Content/Mods` are not read any more.
```ini
[Mod]
Name=My Mod                  ; default: the folder name
Version=1.0.0
Author=Someone
Description=Does things

[Core]                       ; native DLL
Dll=MyMod.dll                ; default: <Folder>.dll
Logger=File                  ; None | Console | File (default File): the logger CoreMod::logger
MenuButton=1                 ; button in the F1 window -> CoreMod::OnModMenuButtonPressed

[Blueprint]                  ; cooked assets under /Game/Mods/<Folder>/
Actor=Content/MyActor.uasset ; optional: no Actor = asset-only mod
Persistent=Content/MyData.uasset  ; optional
SpawnIn=Game                 ; Game | Menu | Always | Never   (stored in phase 1, applied with the Blueprint rework)
Events=Tick,PostBeginPlay    ; stored in phase 1, applied with the Blueprint rework

[Overwrite]                  ; replace existing game files
Folder=Content               ; every file in it is linked to the same relative path in the game's Content folder
```
(In a real `mod.ini` put comments on their own line: a `;` after a value belongs to the value, see "INI format" below.)

**Load phases** (all mods finish a phase before the next starts, mods in `LoadOrder.ini` order): 0 scan (`mod.ini` of every
enabled folder), 1 core (`LoadLibrary`, `MDML_CreateMod`, `CoreMod::OnLoad(ModContext&)`), 2 overwrite (links over the *final* file
lists, incl. files a core added), 3 Blueprint (actors/persistent objects from the final settings), then the mod list is frozen.
During `OnLoad` the engine is not ready (no UObjects). The cores of mods that load later are not there yet
(`FindMod("x")->Core()` is null until `x` has loaded); the components are. This is by design (single pass, owner confirmed):
if you need another mod's core, look it up later (`InitializeMod` or any event), not in `OnLoad`.

# Core Mods
-  Download the example project in the download tab
-  There should be vs22 project files but you can generate your own using premake in the scripts folder, no need to install anything
-  Use the PresetMod project (`Mods/Examples/PresetMod`) to start
-  The entire source code of mdml is in the project so you can browse to search or add functions 
-  The hand-written engine core (UObject, FName, containers, math) is in Loader/ModLoader/src/Engine/UE4; every game and engine class (AActor, BP_PlayerCharacter_C, ...) is in the generated SDK in Loader/SDK/Generated (see "Game classes" below)
-  The mod.ini files will be moved in the build dir, the original mod.ini is located at Mods/Examples/<YourMod>/Config (see Mods/Examples), put all your mod files into this folder so they get copied at build
### Core mod API
- **Entry point (mod-components phase 1):** derive from `CoreMod` (`MDML/CoreMod.h`; the old DLL base class `Mod` was renamed) or from `GameMod`
  (`MDML/GameMod.h`, derives from `CoreMod`), then use `MDML_MOD(YourClass)` once in a `.cpp` file. No `DllMain`, no constructor arguments,
  no `CompleteModCreation()`, no `ModName`/`ModVersion`/... members (they are in `mod.ini`). The macro exports `MDML_CreateMod` and the
  version stamps the loader compares with its own.
  ```cpp
  class MyMod : public GameMod {
  public:
      MyMod() { EnabledModEvents = EventsEnabled::EngineAndGui; }   // events as before (phase 2 replaces this)
      void OnLoad(ModContext& ctx) override { /* phase 1 */ }
      void OnModInitialize() override { /* engine ready, first InitGameState */ }
  };
  MDML_MOD(MyMod)
  ```
  `CoreMod::GetMod()` returns your `Mod` (`Info()`, `Core()`, `Blueprint()`, `Overwrite()`, `MDML/Mod.h`); `GetName()`; `GetFolder()` is the mod folder.
  The loader creates `logger` from `[Core] Logger=` and sets `UseMenuButton` from `[Core] MenuButton=` before `OnLoad`.
- **`ModContext`** (argument of `OnLoad`, `MDML/Mod.h`): `Self()`, `ForEachMod(fn)`, `FindMod(name)`, `AddOverwriteFile(mod, sourceFile, gameRelativePath)`
  (path relative to the game's `Content` folder, e.g. `"MyMod/Texture.uasset"`; replaces an entry for the same target),
  `RemoveOverwriteFile(mod, gameRelativePath)`, `EditBlueprint(mod)` (actor, `SpawnIn`, `Events`, `Enabled`). They work on any mod, not only your own, until the
  phase is over (overwrite files until phase 2, Blueprint settings until phase 3); later calls log an error and change nothing.
  Example: `Tests/OverwriteTest` (Core + Overwrite: adds a file in `OnLoad`, which is then linked; builds to `Output/Tests/OverwriteTest`, not part of the installable package).
- `CoreMod::OnUnload()` is called **when the game quits**, once per loaded core, in **reverse load order**, on the game thread, from a hook on
  `FEngineLoop::Exit` (UObjects are still alive; the engine is not torn down yet). An exception is logged and the next core still gets its call.
  It is not called on level changes (that will be an `MD.*` world event), when the process is killed, or if the loader could not resolve
  `FEngineLoop::Exit` (warning in the log).
- **A mod whose core fails** (missing DLL, no `MDML_CreateMod`, exception in the constructor or `OnLoad`) is dropped **as a whole**: its overwrite and
  Blueprint components are not registered either. The error is in the log ("Mod X FAILED ...") and the F1 mod list shows `[FAILED]` with the reason.
- `GameMod`: override `OnModInitialize()` (was misspelled `OnModInitilize`; renamed without alias, so old mods must be updated).
  `Tick(ELevelTick, float DeltaTime)`, `GameTick`, `DrawImGui` etc. are unchanged (the event mechanism is replaced in phase 2).
- **Game classes (Wave 4 step B):** the old `SDK.lib` is gone. The generated SDK is header-only, one header per game/engine
  package in `Loader/SDK/Generated` (premake `%{IncludeDir.SDK}`): `#include "Engine.hpp"` for `AActor`, `UGameplayStatics`, ...,
  `#include "BP_WeatherManager.hpp"` for `ABP_WeatherManager_C` and so on; nothing to link. Members are properties resolved by
  name at runtime (`weather->CloudDensity = 0.0f;`), functions call the game through ProcessEvent (`weather->UpdateTime(time);`).
  Details: `docs/SDK_GENERATOR.md`. Engine helpers that are not reflected live in the core: `UE4::GetWorld()`,
  `UE4::SpawnActor(Class, Transform)`, `UE4::GetDataTableRowMap(Table)`, `UE4::GetUserDefinedEnumDisplayNames(Enum)`,
  `UE4::IsLiveObject(Obj)` (check object pointers you keep across frames before using them, e.g. in `DrawImGui`).
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
  `MDML/CoreMod.h`, `MDML/Mod.h`, `MDML/Mods.h`, `MDML/Log.h`, `MDML/Hooks.h`, `MDML/IniFile.h`, `MDML/GameThread.h`, `MDML/Paths.h`, `MDML/Notices.h`,
  `MDML/UI.h`, `MDML/UI/Widgets.h`, `MDML/UI/TextEditor.h`, `MDML/Engine.h`, `MDML/GameMod.h` (list with one line each in `MDML/MDML.h`).
  Namespaces: `mdml::platform` (`Hooks`, `IniFile`), `mdml::runtime` (`GameThread`, `Notices`, `FormatPath`, `GetLoaderFolder`, `GetConfigFolder`, `GetDataFolder`),
  `mdml::mods` (`ForEachMod(fn(Mod&))`, `FindMod`, `GetModCount`, `MoveToFront(CoreMod*)`, `RegisterBPFunction`), `mdml::ui` (`GetDevice`, `GetContext`,
  `GetRenderTargetView`, `IsRenderingReady`, `IsMenuOpen`, `SetTheme(ColorTheme)`), `mdml::ui::widgets` (`Combo`, `Vector3`, `Bool`, `Float`, ...).
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
  (`Dll=Foo.dll ; my mod` means the file `Foo.dll ; my mod`). Section/key names match exactly first, then case-insensitively.
- Developer tools (object browser, INI browser/editor, SDK generator, dev-build flag swap) are in the DevTools mod (off by default, see its `mod.ini`).

### Here is the mod.ini structure for your mod
```
[Mod]
Name=ExampleMod
Version=1.0.0
Author=You

[Core]
;The file name of your dll as a relative path from you mod folder (default: <folder name>.dll)
Dll=ExampleMod.dll
```

# Blueprint Mods (were "logic mods")
- Begin by installing Unreal Engine 4.27.2
- Create a project called ```Medieval_Dynasty```
- The mod content(ModActor.uasset, ...) should be placed inside ```Content/Mods/[Your Mod Name]```
- Here is a [tutorial](https://youtu.be/fB3yT85XhVA?list=PL-dFOLrGFgdwbzcHmZ2ghuN3LXxlazbZP) on how to create a Logic Mod, but keep in mind this is not for mdml, it is for uml, mdml is only based of that and I've made changes
- Dont build your mod as pak, mdml only supports loose file loading. So skip the entire pak section of the video
- You can also create multiple mods in one Unreal Engine Project since only 
- Your final mod should contain a mod.ini and should be placed in the mod folder from mdml ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
### Here is the mod.ini structure for your mod
```
[Mod]
Name=ExampleMod

[Blueprint]
;The file name of your actor as a relative path from your mod folder. Leave it out for an asset-only mod.
Actor=Content/ModActor.uasset
;PersistentObject is not needed
;The file name of your persistent object as a relative path from your mod folder
;Persistent=Content/ModInstanceObject.uasset
;SpawnIn=Game
;Events=Tick,PostBeginPlay
```
- In phase 1 of the mod rework the actor is still spawned on every InitGameState like before; `SpawnIn` and `Events` are read and stored, but only applied with the Blueprint rework (`docs/design/mod-components.md` phase 3).
- The class paths are built from the file locations (`/Game/Mods/<Folder>/<sub folders>/ModActor.ModActor_C`); the old `ActorPath`/`PersistentObjectPath` overrides are gone.
- Name, author, description and version come from `[Mod]`; the Blueprint variables `ModAuthor`/`ModDescription`/`ModVersion` are not read any more.
  `ModButtons`, `ModMenuButtonPressed`, `PreBeginPlay`, `PostBeginPlay`, `ModCleanUp` and `PrintToModLoader`/`GetPersistentObject` work as before (the mod name passed to `GetPersistentObject` is `[Mod] Name`).
- Core and Blueprint of one mod: C++ reaches the spawned actor with `GetMod().Blueprint()->Actor()` (null outside a level) and the persistent object with `->PersistentObject()`.

# Overwrite Mods
- Use this [this](https://www.gildor.org/en/projects/umodel) to search for assets which you want to replace
- Once you found you assets save them somewhere
- If you do this you will already have a folder structure
- Generate your replacements using the same project as for the Blueprint Mods and use UE 4.27.2
- You want to replace all files off the assets that were also exported(.uasset, .uexp, .ubulk) otherwise it wont work,
- To generate the files package your uproject and copy the files, if unreal engine wont generate .ubulk files try turning searching for a streaming options for the asset and turn it on
- Once you have your files packaged it is time to create the mod
- Create a folder with a mod.ini file then create a seperate folder (name it whatevery you want here it is OverwriteContent) and then put your files inside
- You must always keep the same as in the game, when you want to Overwrite a file in ```GFX/Characters/Female/Mature/Materials/BodyMesh.uasset``` you will need to put my asset in ```OverwriteContent/GFX/Characters/Female/Mature/Materials/BodyMesh.uasset```
- Once everything is done copy ```[SteamLibraryFolder]/common/Medieval Dynasty/Medieval_Dynasty/Content/Mods```
### Here is the mod.ini structure for your mod
```
[Mod]
Name=My Skin

[Overwrite]
;The folder where your stuff is located, mdml will recursivly iterate over it and create links for every file and delete if after closing
Folder=OverwriteContent
```
- There is no `Enable=` key any more: a mod is switched off in `Config/LoadOrder.ini` (or by commenting out the section). A `Folder` that does not exist logs a warning.
- A core mod can add or remove files in `OnLoad` (`ModContext::AddOverwriteFile` / `RemoveOverwriteFile`), also for other mods.

# Other
- This is a very bad modding tutorial, so if you have any questions just contact me over github or [discord](https://discord.com/invite/nmZghtJ9AZ)
- A full mod.ini can look like this and yes you are able to put all 3 components inside one mod.ini
```
[Mod]
Name=ExampleMod
Version=1.0.0
Author=You
Description=Everything in one mod

[Core]
Dll=ExampleMod.dll
MenuButton=1

[Blueprint]
Actor=Content/ModActor.uasset
;Persistent=Content/ModInstanceObject.uasset

[Overwrite]
;The folder where your stuff is located, mdml will recursivly iterate over it and create links for every file and delete if after closing
Folder=OverwriteContent
```
