# MDML code inventory (Phase 2.0)

Analysis only. No code, build file or git state was changed. Basis: branch `modernize` at `17f8992`, which already includes the
Phase 2.1 hygiene commits (MinHook built from source, CI). Date: 2026-10-09.

**Scope.** `LoaderAutoInjector/`, `ModLoader/src/` (without `vendor/` and `UI/ImGuiColorTextEdit`), the hand-written
part of `SDK/src`, `BaseMod/` and `ExampleMods/`. `ModManager/` was only skimmed. Generated SDK files were looked at only
to see what they need from the core.

**How the claims were checked.**
- Reading the code. Line numbers are from `17f8992`.
- The game PDB, read-only: a small dbghelp script in the scratchpad dumped real member offsets via `SymGetTypeInfo` (Appendix A).
- The last in-game `Logs/MDML-log.txt`, read-only: the offsets `EngineDefFinder` found at runtime.
- The export and import tables of the built `bin/` DLLs, read with pefile.

**Confidence labels.**
- **[H]** verified directly: code plus PDB/log/binary where relevant.
- **[M]** strong inference from the code, not exercised.
- **[L]** plausible, needs a check.

A note up front: a lot of this code is good, and much of it works *because* the author understood the engine well.
`EngineDefFinder` found every core offset correctly, except one name mix-up and one unused field (see 3.2). The
reflection core is a sound base. Most problems below are typical leftovers: the generic multi-game UnrealModLoader
design, sharing state across DLLs, and threading. They are not signs of carelessness.

---

## 1. Module map

### 1.1 Projects and link graph (as built)

| Project (premake) | Output | Kind | Links | Include dirs that cross projects |
|---|---|---|---|---|
| `LoaderAutoInjector` | `xinput1_3.dll` | proxy DLL | – | `#include "../../ModLoader/src/GameInfo.h"` (→ `Core.h`) |
| `MedievalDynastyModLoader` | `MDML.dll` | DLL | `SDK`, `LoaderAutoInjector` (xinput1_3.lib), `MinHook` | `SDK/src`, `SDK/src/UE4`, `SDK/src/Medieval_Dynasty` |
| `SDK` | `SDK.lib` (2.69 GB) | static lib, LTCG, no PCH | – | **`ModLoader/src`** (Core.h, GameInfo.h, Utilities/*) |
| `BaseMod` | `Mods/BaseMod/BaseMod.dll` | DLL | `MDML.lib`, `SDK`, `xinput1_3.lib`, `MinHook` | `ModLoader/src` (Mod, UI, TextEditor), SDK dirs |
| `PresetMod`, `TimeWeatherChanger` | `Mods/<name>/<name>.dll` | DLL | `BaseMod.lib`, `MDML.lib`, `SDK`, `xinput1_3.lib`, `MinHook` | same as BaseMod |
| `MinHook` | `MinHook.lib` | static lib | – | – |
| `ModManager` | `UI/MDML Mod Manager.exe` | exe | – | compiles `ModLoader/vendor/ImGui` sources itself, has its own `src/Core.h` |

Verified with pefile [H]:
- `xinput1_3.dll` exports `?SelectedGameProfile@SDK@@2VGameProfile@@A`, plus the class's two `operator=`.
- `MDML.dll`, `BaseMod.dll` and `TimeWeatherChanger.dll` each import exactly that one symbol from `xinput1_3.dll`.
- Mods import loader API, ImGui (exported through `IMGUI_API = LOADER_API`) and `Log::s_mdmlLogger` from `MDML.dll`.

### 1.2 File-by-file

#### LoaderAutoInjector (`xinput1_3.dll`)

| File | Responsibility | Depends on | Used by |
|---|---|---|---|
| `xinput1_3/xinput1_3.cpp` + `.def` + `_asm.asm` | XInput proxy. Loads the system `xinput1_3.dll`, forwards 12 exports through `jmp mProcs[i]`. On the **first `DLL_THREAD_ATTACH`** (`:28-31`) it calls `Loader::LoadModLoader()`. | Win32 | the game (imports xinput1_3) |
| `Loader/Loader.cpp` | `LoadModLoader()` → `InjectDLL("MDML.dll")`, i.e. `OpenProcess(self)` + `VirtualAllocEx` + `WriteProcessMemory` + `CreateRemoteThread(LoadLibraryA)` on its **own** process (`:21-38`). **Also defines and exports `SDK::SelectedGameProfile`** (`:7-9`). | `ModLoader/src/GameInfo.h` → `Core.h` (all STL, windows.h, spdlog forward decl) | MDML.dll, every mod (import) |

#### ModLoader (`MDML.dll`)

| File | Responsibility | Main deps | Used by |
|---|---|---|---|
| `dllmain.cpp` | `DLL_PROCESS_ATTACH` → `MDML::Start()`; `DLL_PROCESS_DETACH` → `MDML::ShutDown()` | MDML.h | – |
| `Core.h` / `Core.cpp` | PCH. Version macros (`UML_VERSION`, `MODLOADER_VERSION`, `MEDIEVAL_VERSION`), `LOADER_API`, `BPFUNCTION`/`REGISTER_FUNCTION`, config switches (`ALWAYS_PROCESS_EVENT_SAVE`, `USE_ONLY_UE4_TMAP`), ~35 STL headers incl. `<regex>`, `<execution>`, `<future>`, `<xhash>`, `Ref<T>` = `shared_ptr`, `LogLevel` | STL, windows.h | **everything**, incl. SDK, the proxy and the vendored `imgui.h` (patched to `#include "Core.h"`) |
| `GameInfo.h` | `Offsets` (all engine member offsets, `defs`), `GameProfile` (config paths and flags, resolved addresses, overwrite map, UE logger), `class SDK { static GameProfile SelectedGameProfile; }` with dllexport/dllimport switch | Core.h | MDML, SDK core (`UE4.h`, `NamePool.h`, `ObjectsArray.h`, `Object.cpp`, …), proxy, mods |
| `Globals.h/.cpp` | `Global` singleton (`new`, never freed): `ModInfoList` (logic mods), `CoreMods` (ModStack), `OverwriteMods`, `BPFunctionWrappers`, `bIsMenuOpen` (uninitialised), `GameName` (unused). Also `ModInfo`, `OverwriteMod`. | UE4.h, Mod.h, ModStack.h | MDML, HooksManager, LoaderUI, ModLoader.cpp, BaseMod |
| `MDML.h/.cpp` | `class MDML` (all static): `Start/ShutDown`, `SetupProfile` (≈330 lines: ini, log, console, NoOverwrite file, PDB/pattern resolution, manual offsets), `InitGameState/BeginPlay/Tick` event entry points, logic-mod lifecycle (`InitCoreMods`, `CreateMod`, `CleanUpMods`, `SpawnActor`), path helpers. `MDML.h` also holds `UE4::InitSDK()`, a **`static` function in a header**, so every DLL gets its own copy. It sets the per-DLL SDK statics and, inside MDML only, runs `EngineDefFinder`. It also holds `UE4::ELevelTick`. | EngineDefFinder, HooksManager, SymbolResolver, INI, UE4.h | dllmain, HooksManager, LoaderUI, Mod.h, BaseMod (`InitSDK`, `FormatPath`, `GetDataFolder`) |
| `Mod/Mod.h/.cpp` | Core-mod base class `Mod` (virtual event callbacks, metadata, logger, `GetModsFolder/GetContentFolder/GetFolder`), `EventsEnabled` presets, `CallBackHandler` trampolines that call through the global `Mod::ModRef`, `SetupHooks` (registers `ModEvent`s), `CompleteModCreation`. Also adds `operator<<` overloads to `namespace std`. | Logger, Math, **UI/LoaderUI.h** (ImGui, d3d11), MDML.h, GameInfo, Globals, INI, UE4.h | all mods, Globals, Logger.cpp |
| `Mod/ModStack.h/.cpp` | Event bus: `map<string, vector<Event*>>`. `callEvent<Args...>` dispatches via `dynamic_cast<ModEvent<Args...>*>`, stops on the first `true`, catches everything and pops the mod. Ordered `m_mods` list. | Logger | Globals, Mod, MDML, LoaderUI, BaseMod |
| `Mod/ModLoader.cpp/.h` | Mod discovery in `Content/Mods`: DLL mods (`mod.ini [Mod] DLLPath` or `<dir>/<dir>.dll` or loose `.dll`), injected one by one through `CreateRemoteThread(LoadLibraryA)` (`:41-58`). Logic mods (`[LogicMod]` → `ModInfo`). Overwrite mods (`[Overwrites]/[Overrides]` → hard/sym links into `Content`, recorded in `ModLinks.bin`; `CreateSysLinks`/`DeleteSysLinks`). Also implements `Mod::GetModsFolder/GetContentFolder`. | INI, Globals, Mod | HooksManager |
| `Utilities/HooksManager.cpp/.h` | Hook bodies: `ProcessLocalScriptFunction` (BP wrappers, `PrintToModLoader`, `GetPersistentObject`), `InitGameState`, `BeginPlay`, `UWorld::Tick`, pak hooks `FindFileInPakFiles`/`IsNonPakFilenameAllowed`. `InitHooks` thread: MinHook init → links → pak hooks → `LoadMods` → game hooks → UI logic thread → DX hook. `ShutDown`. | MDML, Memory, Globals, MinHook, ModLoader, LoaderUI, UE4.h | MDML |
| `Utilities/SymbolResolver.cpp/.h` | Phase 1 PDB resolver (DbgHelp, private session handle, plain-name lookup verified by the decorated name), `GetBuildId`. Clean and self-contained. | DbgHelp, Logger | MDML.cpp |
| `Utilities/Pattern.h` | Strict AOB scanner (executable sections only, uniqueness, RIP resolution). Clean. | windows.h | MDML.cpp; also included by `UE4.h` and `NamePool.h` without being used there |
| `Utilities/EngineDefFinder.cpp/.h` | `ClassDefFinder::*`: runtime offset discovery for UObject, UField, UStruct, UEnum, UFunction, FField, FFieldClass, FProperty and its subclasses, by probing known objects. | UE4.h, MDML.h, Memory (`Read<T>`) | `UE4::InitSDK` (MDML only) |
| `Utilities/Memory.h` | `Read/Write` through `ReadProcessMemory/WriteProcessMemory` on the own process, `OffsetOfClass` (null-pointer UB), `MEM::FindWindow`, `MEM::GetAddressPTR` (unused) | windows.h | **SDK core and all generated code** (`Read<T>`/`Write`), EngineDefFinder, LoaderUI, TimeWeatherChanger |
| `Utilities/Math.h` | glm includes, UE math macros (`PI`, `DELTA`, `THRESH_*`), `uint8..int64` typedefs, `operator<<` in `namespace std` | glm | SDK math (`Vector.h`, `UnrealMathUtility.h`), Mod.h |
| `Utilities/Logger.h/.cpp` | `Logger` (spdlog wrapper, per-name registry `s_loggers`, shared base sink `Log.txt`), `Log::*_MDML`/`*_UML` statics (UML is an alias of MDML), `SetupMessage` (MessageBox) | spdlog | everything |
| `Utilities/MinHook.h` | `MinHook::Init/Add<T>` (header-static, so one instance per DLL) | MinHook, Logger | HooksManager, LoaderUI, Mod.cpp (include only), BaseMod, examples (include only) |
| `Utilities/Dumper.cpp/.h` | Text dumps: object array, "engine info" (writes offsets back in the old manual `[UObjectDef]` ini format), world actors. Singleton via `new`. | UE4.h, Globals | LoaderUI tools |
| `UI/LoaderUI.h/.cpp` | DX11 Present/ResizeBuffers hook (dummy swapchain vtable), WndProc subclass, ImGui context and frame, MDML window (logic, core and overwrite mods, tools, console command), F1 polling thread (`UILogicTick`), 4 themes, `ImGui::MDML_*` widgets (exported). Singleton via `new`. | ImGui, d3d11, Globals, Dumper, MinHook, MDML, UE4.h | HooksManager, Mod.h (included by every mod) |
| `UI/ImGuiColorTextEdit/*` | vendored text editor, exported with `LOADER_API` | ImGui | only BaseMod's INI editor |

#### SDK: hand-written core (to keep)

| File | Responsibility | Notes |
|---|---|---|
| `UE4.h` | umbrella. Includes loader `Utilities/Memory.h`, `Math.h`, `Pattern.h`, `GameInfo.h`, then `UE4/SDK.h`, then `Medieval_Dynasty/SDK.h` (all ~800 generated headers) | every loader and mod TU pulls in the whole SDK |
| `NameValidator.h/.cpp` | identifier sanitising for the exporter (`MakeValidName`, `MakeUniqueCppName`) | generator tooling, not runtime core; includes `Core.h` |
| `UE4/SDK.h` | aggregator for core + Engine + some packages | hand-written, mixes core and generated includes |
| `UE4/UE_LOG.h` | `UE_LOG` macro → `SDK::SelectedGameProfile.UnrealLogger` | depends on the shared profile |
| `CoreUObject/NamePool.h` | `FNamePool` / `FNameEntryAllocator` / entry decoding, `FName` (index, `GetName`, `FName(const char*)` linear search), legacy `TNameEntryArray`, `FKey` | layout matches the PDB (Appendix A) |
| `CoreUObject/ObjectsArray.h` | `FUObjectItem`, `TUObjectArray` (legacy), `FChunkedFixedUObjectArray`, `FUObjectArray` | matches the PDB |
| `CoreUObject/Object.h/.cpp` | `UObject` (no data members, everything goes through `defs` offsets): name/class/outer, `FindObject`, `GetAllObjectsOfType`, `IsA`, `ProcessEvent(_Save)`, `StaticLoadObject`/`StaticFindObject`/`StaticConstructObject_Internal`/`CallFunctionByNameWithArguments` thunks, `UPackage` | `FStaticConstructObjectParameters` matches the PDB |
| `CoreUObject/Class.h/.cpp` | `UField`, `UEnum`, `UStruct`, `UScriptStruct`, `UClass` (`CreateDefaultObject`, `LoadClassFromString`), `TSubclassOf`, `FScriptInterface`, `UFunction` (flags, params, `Func` get/set), `UDynamicClass` | |
| `CoreUObject/UnrealType.h/.cpp` | `FField`, `FFieldClass`, `FFieldVariant`, `FProperty` and 26 typed subclasses with getters and `GetCppType()`, `AsUClass` (FFieldClass → compatibility UClass), `GetVariable/SetVariable<T>` (reflection-based member access) | the most valuable part for tooling |
| `CoreUObject/CoreTypes.h/.cpp` | **hybrid**: hand-written flag enums (`EFunctionFlags`, `EPropertyFlags`, `EObjectFlags`, …) and `StringifyFlags`, plus a **generated** region of CoreUObject structs (`// Size` markers, lines ~510-991) | |
| `CoreUObject/Stack.h` | `FFrame` (layout matches the PDB), `FOutParmRec`, `SetOutput`, `GetInputParams` | used by BP function wrappers |
| `CoreUObject/Interface.h` | `UInterface` stub | |
| `Containers/Array.h` | `TArray<T>` (non-owning, `Add` uses CRT `realloc`), `TSparseArray` | |
| `Containers/String.h`, `Text.h` | `FString` (aliasing ctor, lossy `ToString`), `FText` (opaque, guessed `ITextData` layout) | |
| `Containers/Set.h`, `Map.h` | `TSet`, `TMapBase`, `TMap` (opaque byte blob filled through `WriteProcessMemory`), `NativeTMap` (index access) | sizes match the PDB |
| `Containers/Pointers.h` | `FGuid`, soft/weak/lazy pointers, `TScriptDelegate`, `FMulticastScriptDelegate`, `TSharedRef/Ptr` shells | 2 layout bugs (section 4) |
| `Containers/Templates.h`, `AlignedBytes.h` | `TPair`, `TEnumAsByte`, `TAlignedBytes` | |
| `Math/*` | `FVector`, `FVector2D`, `FVector4`, `FRotator`, `FQuat`, `FTransform`, `FColor`, `FLinearColor`, `FBox`, `FPlane`, and the `UnrealMathUtility.h` port, all with glm conversions | |

#### SDK: hand-written vs generated in `UE4/Engine` (marker scan + reading)

| Class | Files |
|---|---|
| **Hand-written** (no generator markers) | `World.h/.cpp` (`UWorld::GWorld`, `SpawnActor` thunk), `GameInstance.h`, `GameState.h`, `Level.h`, `UserDefinedStruct.h`, `BlueprintGeneratedClass.h`, `BlueprintFunctionLibrary.h` (incl. `ACustomClass`), `UserDefinedEnum.h/.cpp` |
| **Hybrid** (generated plus hand-written additions) | `GamePlayStatics.h` (hand-written world-less convenience overloads + generated declarations), `GamePlayStatics.cpp` (133 generated wrappers + hand-written `ExecuteConsoleCommand`), `DataTable.h/.cpp` (generated + hand-written `GetRowMap` @0x30), `StringTable.h/.cpp` (hand-written `UStringTable` + generated `UKismetStringTableLibrary`), `CoreUObject/CoreTypes.h` (see above) |
| **Generated** | everything else, including the empty stubs `Info.cpp` and `OnlineBlueprintCallProxyBase.cpp`, and `Medieval_Dynasty/Medieval_Dynasty/Structs.h` (46 `// Size` markers) |
| Tooling | `Medieval_Dynasty/GenInclude.ps1` (writes include lists) |

The hybrids need care in 2.3/2.4. Their hand-written parts should move into separate hand-written files before the
generated parts are replaced.

#### BaseMod, ExampleMods, ModManager

See section 6 for BaseMod.
- **ExampleMods** has two projects:
  - `PresetMod`: a template `GameMod` subclass with a menu button and an ImGui window.
  - `TimeWeatherChanger`: finds property offsets by reflection, which is a good pattern, but reaches the weather manager through generated `M_Get…Reference` getters.
- **ModManager** (parked) is a standalone WinHTTP + ImGui (DX) app.
  - It uses its own `Core.h`, `JSON.h` (nlohmann) and the INI parser, and downloads `MDML.zip` at runtime.
  - Coupling to the loader: it compiles the vendored, patched ImGui sources. That `imgui.h` includes `"Core.h"`, which resolves to ModManager's own `Core.h`.
  - Under `/permissive-` it will not compile: `Application.h:23` uses an undeclared `args`.

### 1.3 Include and dependency diagram (current)

```
            ┌───────────────────────── include ModLoader/src/GameInfo.h → Core.h ─────────────────────────┐
            │                                                                                            │
xinput1_3.dll (proxy) ── defines + EXPORTS SDK::SelectedGameProfile ◄──────── import ───────────┐         │
            │                                                                                 │         │
            │ CreateRemoteThread(LoadLibraryA "MDML.dll")                                     │         │
            ▼                                                                                 │         │
MDML.dll  [Core.h, GameInfo, Globals, MDML, Mod/*, Utilities/*, UI/*]  ── links ──►  SDK.lib ─┤ (dllimport ref)
   ▲  ▲                     │ includes UE4.h (whole SDK) everywhere               │            │
   │  │                     └──────────────────────────────────────────────────── │ includes ◄─┘
   │  │                         SDK.lib hand-written core includes ModLoader/src: │ Core.h, GameInfo.h,
   │  │                         Utilities/Memory.h, Math.h, Pattern.h ◄───────────┘ (SDK ⇄ ModLoader header cycle)
   │  │ import (Mod, ModStack, Log, ImGui, Global, MDML::*)
   │  └──── BaseMod.dll ── links SDK.lib (own copy of core + generated code + statics), xinput1_3.lib, MinHook
   │            ▲ import (GameMod)
   └──────── ExampleMods/*.dll ── links BaseMod.lib, MDML.lib, SDK.lib, xinput1_3.lib, MinHook
```

Inside ModLoader the include graph is a dense web:
- `Mod.h` → `LoaderUI.h`, `MDML.h`, `Globals.h`, `INI.h`, `UE4.h`
- `Globals.h` → `Mod.h`, `ModStack.h`, `UE4.h`
- `MDML.h` → `EngineDefFinder.h` → `UE4.h`
- `Logger.cpp` → `Mod.h`

### 1.4 Cycles

1. **SDK ⇄ ModLoader (headers) [H].**
   - The SDK static lib cannot be compiled without `ModLoader/src`: its premake adds `IncludeDir.ModLoader`, and `UE4.h`, `NamePool.h`, `ObjectsArray.h`, `NameValidator.h` and `UserDefinedEnum.cpp` include `Core.h`, `GameInfo.h` and `Utilities/*.h`.
   - ModLoader, in turn, includes `UE4.h` almost everywhere.
2. **Profile ownership (data and link) [H].** `SDK::SelectedGameProfile` is:
   - **written** by MDML (`SetupProfile`, `EngineDefFinder`),
   - **read** by SDK code that is compiled into *every* DLL,
   - **defined** in the proxy, the lowest layer. That makes the proxy depend on loader headers (`GameInfo.h` → `Core.h`).

   **How it is shared, exactly:**
   - `GameInfo.h:170-177` declares `class SDK { static GameProfile SelectedGameProfile; }`. The class is `__declspec(dllimport)` unless `DEFINE_SDK_PROFILE_EXPORT` is defined.
   - `Loader.cpp:7-9` defines the macro and the member, so `xinput1_3.dll` exports it and produces `xinput1_3.lib`.
   - MDML, BaseMod and the examples list `"LoaderAutoInjector"` in `links`. Their SDK.lib objects reference `__imp_?SelectedGameProfile@SDK@@…`.
   - At runtime, MDML's import of `xinput1_3.dll` binds to the already loaded proxy.
     - Two modules with that base name are loaded: the proxy from the game dir and the real one from `System32`.
     - Binding works because the proxy is found first, by base name or search order. **[M]** for the exact loader mechanism. It works in practice, but it is fragile.

   Consequences:
   - `GameProfile` carries `std::string`, `unordered_map` and `shared_ptr<spdlog::logger>` across DLLs, so every module must share CRT and STL ABI (`/MD`, same toolset).
   - The proxy runs `GameProfile`'s constructor and destructor.
   - The class name `SDK` collides conceptually with the SDK project and with `UE4/SDK.h`.
3. **Static-lib duplication [H].**
   - Because the core is a *static* lib, each DLL has its own `UObject::GObjects`, `FName::GNames`, `UWorld::GWorld` and every `static auto ptr = FindClass(...)` cache.
   - That is why each mod must call `UE4::InitSDK()` (`BaseMod/src/GameMod.h:17`), and why only the offsets (in the shared profile) are truly shared.
   - Each mod DLL also links its own copy of whatever SDK code it touches, and its own MinHook instance.
4. **Intra-loader cycles [H]:**
   - `MDML` ⇄ `HooksManager`: hooks call `MDML::InitGameState/BeginPlay/Tick`, and `MDML::CreateMod` calls `HooksManager::AddProcessInternalHook`.
   - `Mod.h` ⇄ `Globals.h` ⇄ `ModStack.h`.
   - `Logger.cpp` → `Mod.h` (for `Mod::ModRef`).
   - `Mod.h` → `LoaderUI.h`, so every mod compiles d3d11 and ImGui headers.

---

## 2. Lifecycle

### 2.1 Startup (threads: **G** = game thread, **R** = render/RHI thread, **Tn** = threads MDML creates)

1. The game imports `xinput1_3.dll`, and the proxy from `Binaries/Win64` loads. In `DLL_PROCESS_ATTACH` it loads the system xinput and fills `mProcs`.
2. On the **first `DLL_THREAD_ATTACH`** (any new thread the game creates), `hooked = true`. The proxy then does a self-"injection" of `MDML.dll` through `CreateRemoteThread(LoadLibraryA)`. This runs under the loader lock, but the new thread **T1** only starts after the lock is released.
3. **T1:** `LoadLibraryA("MDML.dll")`. Its import of `xinput1_3.dll` binds to the proxy (the profile instance). Static initialisers run, then `DllMain(PROCESS_ATTACH)` calls `MDML::Start()`. **All of `SetupProfile` runs inside DllMain, under the loader lock:**
   - INI parse of `Config/ModLoaderInfo.ini`. The profile is the same file.
   - Log dir, `AllocConsole` and `freopen`, spdlog loggers (`MDML-log.txt`, `Log.txt`, `UE_LOG-log.txt`).
   - DX11 check: parses `%LOCALAPPDATA%/Medieval_Dynasty/Saved/Config/WindowsNoEditor/GameUserSettings.ini`.
   - **On first run: a recursive directory walk over `Medieval_Dynasty/Content`** to generate `NoOverwrite.ini`, then parsing it.
   - Overwrite flags.
   - **`SymbolResolver::Init()`: `SymInitialize` + `SymLoadModuleEx` of the ~800 MB PDB.**
   - Resolve 3 globals, 10 functions, `ProcessLocalScriptFunction`, `StaticConstructObject_Internal` and 2 pak functions (PDB, else pattern, else offset).
   - Optional manual offset sections (none in the shipped ini).
   - `SymbolResolver::Shutdown()`.
   - Then `HooksManager::SetupHooks()` → `CreateThread(InitHooks)` (**T2**).
4. **T2 `InitHooks`:**
   - `MH_Initialize`.
   - `CreateSysLinks`: deletes old links, creates hard or sym links for overwrite mods, writes `ModLinks.bin`.
   - Pak hooks (`FindFileInPakFiles`, `IsNonPakFilenameAllowed`), **already live from here on**.
   - `ModLoader::LoadMods()`: scans `Content/Mods`. Each DLL mod is loaded by a separate `CreateRemoteThread(LoadLibraryA)` (**T3..Tn**). T2 **does not wait** for them, and the "BaseMod first" sort is moot because the threads race. Logic mods are registered into `ModInfoList`.
   - Hooks `AGameModeBase::InitGameState`, `AActor::BeginPlay`, `UWorld::Tick`.
   - `CreateUILogicThread()` (**T4**, F1 polling and tool requests, loops forever).
   - If `DelayGUISpawn=0`: `HookDX()` → **T5**. The shipped ini sets `DelayGUISpawn=1`, so the DX hook is created on the first F1.
   - T2 ends.
5. **T3..Tn (each mod DLL), inside the mod's `DllMain` under the loader lock:** `new Mod` → `GameMod` ctor:
   - `ModRef = this`
   - `UE4::InitSDK()` (sets this DLL's copies of `GObjects`, `GNames`, `GWorld`)
   - `CompleteModCreation()`: `Global::CoreMods.push_back(this)`, creates a logger. With `LogToFile`, the logger opens a file.
6. **T5 `InitDX11Hook`:** waits for `dxgi.dll`, creates a hidden window and a dummy D3D11 device and swapchain, and hooks vtable[8] Present and [13] ResizeBuffers with MinHook. It then **sleeps forever** (`while(true) Sleep(10)`, `LoaderUI.cpp:489`). Dummy objects are never released.

### 2.2 Runtime

| Event | Thread | Path |
|---|---|---|
| `AGameModeBase::InitGameState` (every map load) | G | `MDML::InitGameState`. **First time only:** `InitCoreMods` → `UE4::InitSDK()` in MDML, which **runs the `EngineDefFinder` scans** (UObject…FProperty), then calls `InitializeMod()` on each finished core mod (`GameMod` → `SetupHooks(events)` + `OnModInitilize`). Then `CleanUpMods` (BP `ModCleanUp`), `CreateMod` for each logic mod (`StaticLoadObject` → `SpawnActor` with `FTransform(FVector(0,0,0))`, reading author, description and version variables by reflection, `StaticConstructObject_Internal` for the persistent object, BP `PreBeginPlay`), and on the **first spawned logic actor** the `ProcessLocalScriptFunction` hook is installed. Finally the `InitGameState` event goes to the core mods. |
| `AActor::BeginPlay` (every actor) | G | When the actor is a `PlayerController` (`BeginPlayOverwrite`, cached on the first call): collects `ModButtons`, calls BP `PostBeginPlay` and the `PostBeginPlay` event. `BeginPlay` event for all actors. |
| `UWorld::Tick` | G | `Tick` event (BaseMod: menu/game dispatch, item loading). |
| `ProcessLocalScriptFunction` (every BP script call) | G (mostly) | `Frame->Node->GetName()` builds a `std::string` **per BP call** (`HooksManager.cpp:39`). Handles `PrintToModLoader`, `GetPersistentObject` and registered `BPFUNCTION`s. **Only installed if at least one logic mod actor was spawned**, so `REGISTER_FUNCTION` from core mods silently does nothing without a logic mod [H]. |
| Pak `FindFileInPakFiles` / `IsNonPakFilenameAllowed` | G, async loading and IO threads | `std::filesystem::exists` + `relative` (disk syscalls) on **every** file lookup (`HooksManager.cpp:97-159`). |
| D3D11 Present | **R** | Init once (device and context, RTV, ImGui context, WndProc subclass, `SetupImGui` event). Every frame: ImGui frame; when the menu is open, the MDML window plus the `DrawImGui` event, then the `DX11Present` event. **Mods' `DrawImGui` call UE APIs on the render thread** (BaseMod: `ProcessEvent`, `K2_GetComponentsByClass`, DataTable reads, give-item). The loader's mod buttons call `CallFunctionByNameWithArguments` here too (`LoaderUI.cpp:190`). |
| WndProc | G (message pump) | `ImGui_ImplWin32_WndProcHandler` runs concurrently with the ImGui frame on R. |
| UI logic loop | T4 | F1 toggle, `Dumper::*` (walks GObjects while the game runs), **`UGameplayStatics::ExecuteConsoleCommand` → `ProcessEvent` from a non-game thread** (`LoaderUI.cpp:107`). |
| SDK export | `std::async` threads (BaseMod) | Walk GObjects and reflection concurrently with the game and GC. |

### 2.3 Shutdown

`DLL_PROCESS_DETACH` of MDML (process exit). Mods detach before MDML because they depend on it.
1. `MDML::ShutDown` → `HooksManager::ShutDown`:
   - `DeleteSysLinks` (file I/O)
   - `MH_DisableHook(ALL)` (enumerates and suspends threads) and `MH_Uninitialize`, for MDML's own MinHook instance only
2. The flags are reset and `SDK::SelectedGameProfile = GameProfile()`, which releases the UE logger while MDML code is still mapped. That is good.
3. `_fcloseall()` closes every CRT `FILE*`, **including spdlog's file sinks** [M]. The static destructors that follow (`Log::s_mdmlLogger`, `MDML::UnrealEngineLoggerInstance`) run `~Logger`, which `delete`s objects owned by `shared_ptr` (double delete, `Logger.h:45-54`), and flush or close already closed `FILE*`s. So the exit path is UB, even though test 3 looked "clean".
4. Mod objects, `Global`, `LoaderUI` and `Dumper` are never freed. That is acceptable at process exit.

### 2.4 Loader lock and threading concerns (summary)

- **Under the loader lock** [H]:
  - All of `SetupProfile`. Notably the PDB load and, on first run, the recursive Content walk. The PDB load is sub-second for lookups, but the module load itself takes measurable time.
  - Every mod's construction, including file and logger I/O.
  - Self-injection with `OpenProcess(PROCESS_ALL_ACCESS)` / `VirtualAllocEx` / `CreateRemoteThread`. Those are "remote" APIs used locally. A plain `CreateThread(LoadLibraryW)` or `LoadLibraryW` from a worker thread is enough.
- **Async mod loading** [H]: mods load on unsynchronised threads after `LoadMods` has returned. A mod can miss `InitCoreMods` ("wasn't setup in time"), and the load order is not deterministic.
- **Engine calls off the game thread** [H]: T4 (console command, dumps), R (mods' `DrawImGui`, mod buttons), BaseMod exporter threads. UE is not thread-safe for `ProcessEvent`, GObjects iteration during GC, or `StaticLoadObject`.
- **Shared mutable state without synchronisation** [H]:
  - `Mod::ModRef` is a global "current mod" that `callEvent` sets before every dispatch. G (Tick, BeginPlay) and R (DrawImGui, DX11Present) dispatch concurrently, so `CallBackHandler::*` can invoke **the wrong mod's** callback.
  - `Global::bIsMenuOpen` (G, R, T4), `Global::CoreMods` (T3..Tn push vs. G iterate), the `ModStack` event lists, and the static caches in `FName(const char*)` and `FNamePool::GetNext`.
- **Generated wrappers flip `FUNC_Native` on the shared `UFunction`** around `ProcessEvent` (e.g. `StringTable.cpp:23-31`). Another thread calling the same function sees modified flags [M].

---

## 3. Dead code and leftovers

### 3.1 UML-era multi-game paths (not needed for UE 4.27 Medieval Dynasty with a PDB)

| Leftover | Where | Status for MD 4.27 | Suggestion |
|---|---|---|---|
| Raw offset mode for functions/globals (`IsFunctionPatterns=0`, `IsGInfoPatterns=0`), `StringToDWord` | `MDML.cpp:314-317,337-341,682-688` | unused (PDB, else pattern) | drop or keep as a debug override (owner) |
| `IsSimple=0` + `<key>FirstOpCodes/TotalByteInstruction` | `MDML.cpp:342-345` | unused | drop |
| Non-FNamePool path: `GName` pattern, `TNameEntryArray`, `FNameEntry`, `UsesFNamePool` | `MDML.cpp:52-61,520-523`, `NamePool.h:162-199`, `FName::GetTNameArray`, `EngineDefFinder.cpp:51-60` | dead (4.27 uses the pool) | drop |
| `TUObjectArray` path + `IsUsingFChunkedFixedUObjectArray` | `ObjectsArray.h:20-40` plus **~14 duplicated `if (IsChunkedArray()) … else …` blocks** (Object.h ×5, Object.cpp ×2, Dumper, Pointers.h, BaseMod ×2, Utils.h, MDML.h, EngineDefFinder) | dead | one `ForEachObject` iterator |
| `IsUsing4_22`, `ProcessInternals` fallback via a mod actor's `PostBeginPlay`/`ModMenuButtonPressed` `Func` | `MDML.cpp:132-153`, `GameInfo.h:116` | dead (PDB/pattern resolves it) | drop |
| Legacy `StaticConstructObject_Internal` signature (`IsUsingUpdatedStaticConstruct=0`) | `Object.cpp:322-325` | dead (4.26+) | drop |
| UProperty (pre-4.25) mode: `bIsFProperty=false` branches | `EngineDefFinder.cpp:535-566,661-666`, `Stack.h:46-62`, `UnrealType.h:410-428,454-471` | dead (4.27 = FProperty) | drop |
| `IsUsingDeferedSpawn` → `BeginDeferredActorSpawnFromClass` | `MDML.cpp:225-230` | off | drop or keep (owner) |
| `bIsDefaultObjectArrayed` (CDO by array scan) | `Class.h:70-96` | off | drop |
| `BeginPlayOverwrite` + `ACustomClass` | `GameInfo.h:108`, `MDML.cpp:55,507-510`, `BlueprintFunctionLibrary.h:5-12` | constant `PlayerController` | `APlayerController::StaticClass()` |
| Manual offset sections `[UObjectDef] [UFieldDef] [UStructDef] [UEnumDef] [UFunctionDef] [Property] [FField] [FFieldClass]` + `Is*Missing` flags | `MDML.cpp:533-605`, `GameInfo.h:145-151` | not in the shipped ini | replace with PDB constants (3.2) |
| `Dumper::DumpEngineInfo` (writes the manual ini format) | `Dumper.cpp:64-87` | only useful for the manual mode | drop with it |
| Separate `.profile` file (`[General] Profile=`) | `MDML.cpp:408-413` | profile = the same ini | simplify to one config |
| `UML_VERSION`, `Log::*_UML` (alias of `*_MDML`), "Unreal Mod Loader" version warning | `Core.h:3`, `Logger.h:139-158`, `Logger.cpp:9`, `Mod.cpp:66-69` | cosmetic | merge into one logger API |
| `USE_ONLY_UE4_TMAP` branch | `Map.h:45-56` | dead | drop |
| `ALWAYS_PROCESS_EVENT_SAVE` off branch | `Object.h:276-278`, `Object.cpp:243-249` | dead (always on) | pick one |
| `EngineDefFinder` (runtime scanning) | whole file | **works** (all offsets equal the PDB except the 2 points in 3.2) | see 3.2 |

### 3.2 What PDB type info can replace

Read-only `SymGetTypeInfo` on the shipped PDB (Appendix A), compared with `EngineDefFinder`'s results in the last
`MDML-log.txt`:
- **All 30 runtime-scanned offsets match the PDB**, with two exceptions [H].
  1. `UStruct "Children"` was found at **0x50**. In 4.27, 0x48 is `Children` (UField chain = functions) and **0x50 is `ChildProperties`** (FField chain).
     - The scanner lands on 0x50 only because `EngineDefFinder.cpp:305` (`… == "FloatProperty" || "Vector"`) is always true. A `GetClass()` through `ReadProcessMemory` on a null child returns null rather than crashing.
     - Everything in MDML that calls `GetChildren()` actually walks **ChildProperties**. That is correct for properties, but the name lies: there is no access to `Children`, and `GetFunction` falls back to an O(N) GObjects scan.
  2. `FFieldClass::SuperClass` was found at 0x18. The PDB says **0x20** (0x18 is `ClassFlags`). It is unused today (`FFieldClass::SuperClass()` has no caller), so it is a latent bug.
- Everything in `Offsets` (`GameInfo.h:6-97`) is a plain member offset available in the PDB: UObjectBase, UField, UStruct, UEnum, UFunction, FField, FFieldClass, FProperty and all FProperty subclasses (`FBoolProperty` 0x78..0x7b, `FObjectPropertyBase` 0x78, …).
- So are the sizes and layouts used by hand-written structs: `FFrame`, `FUObjectArray`, `FUObjectItem`, `FStaticConstructObjectParameters`, `FText`, `TSparseArray`, `TSet`, `TMap`, `UDataTable::RowMap`, `UUserDefinedEnum::DisplayNameMap`, `FTransform`, `FQuat`.
- Recommended approach (owner decision, section 8):
  - Hard-code these as `constexpr` layout constants and `static_assert`-checked struct definitions.
  - Add an offline checker, e.g. `tools/check_layout.py`, analogous to `check_patterns.py`, that diffs them against the PDB after each patch.
  - Keep a **slim** `EngineDefFinder` as a runtime sanity check or fallback when no PDB is present. Example invariants: `PropertiesSize(Vector)==12`, the name at `NamePrivate` of object #1 is `"Object"`, `ChildProperties(Vector)->Name=="X"`.
- The PDB can also supply functions the core currently emulates:
  - `FName::FName(const wchar_t*, EFindName)`, which would replace the O(N) name search.
  - `FMemory::Malloc/Realloc/Free` or `GMalloc`, for engine-compatible allocation.
  - `FText::ToString`.
  - `UClass::FindFunctionByName`, or the `FuncMap` at UClass+0x130.
  - `StaticFindObject`, which is already resolved and used only by BaseMod.

### 3.3 Unused or dead code

| Item | Where | Status |
|---|---|---|
| `MEM::GetAddressPTR` | `Memory.h:61-63` | unused [H] |
| `Global::GameName`, `GetBPFunctionWrappers()` (returns a copy) | `Globals.h:43,71` | unused [H] |
| `LoaderUI::screenCenterX/Y`, `viewport`, `IMGUI_TREE_CONTINUE` | `LoaderUI.h:15,34-36` | unused [H] |
| `Logger::getLoggerRaw`, `Log::ModLogger()` (both overloads), `Log::SetupErrorMessage` | `Logger.h/.cpp` | unused [H] |
| `FNamePool::GetNext` (with a static cache) | `NamePool.h:98-140` | unused [H] |
| `UObject::CountObjectByTypeAndName` | `Object.h:157-204` | only under `!FAST_CHECK` (dead) [H] |
| `FFieldClass::SuperClass()` (wrong offset anyway) | `UnrealType.cpp:164` | unused [H] |
| `UDynamicClass`, `UInterface` | `Class.h:141`, `Interface.h` | unused [H] |
| `ModLoader.cpp:179-180` `if (…size() >= 1) bool empty = …;` | | no-op [H] |
| `MDML.cpp:476` `std::ifstream file("Profile");` (opens a file literally named "Profile") | | no-op [H] |
| `MinHook.h:218-220` empty `#ifdef` | | no-op |
| `EventsEnabled` presets (12) | `Mod.h:37-48` | most unused; `PostBeginPlay` is never set by the ctor (bug, section 4) |
| `INI` vendored `remove`, `save` with flags | – | only SetINIConfig uses `save` |

### 3.4 Commented-out blocks

- `EngineDefFinder.cpp:182-202`: old `FindUFieldNextDef`.
- `HooksManager.cpp:110-122,140,145,148,156`: old pak signatures and debug logs.
- `UserDefinedEnum.cpp:10-21`: old pattern lookup.
- `GamePlayStatics.cpp:122-134`: old ExecuteConsoleCommand.
- `LoaderUI.cpp` `eventSystem.dispatchEvent` remnants: `:323, :361, :386, :390-391, :404`.
- `BaseMod.cpp:33-45`: `#if 0` MinHook variant.
- `ExampleMods/PresetMod/Mod.cpp:6-21`: BPFUNCTION example.
- `Logger.cpp:7-8,19`, `Pointers.h:76-78,104,117-118,164,169`.

### 3.5 Duplicate helpers

| Helper | Copies |
|---|---|
| `GetModuleFilePath` | `MDML.cpp:689` and `Loader.cpp:11`. Two DLLs, so no clash, but duplicated. |
| `InjectDLL` | `ModLoader.cpp:41` and `Loader.cpp:21` (identical) |
| "wstring → string by truncating each `wchar_t`" | MDML.cpp:124-125, LoaderUI.cpp:164-165 and 211 (`std::string(w.begin(), w.end())`), ModLoader.cpp:77-114 (string→wstring ×4), UserDefinedEnum.cpp, BaseMod `Utils::WStringToString`, `FString::ToString` (`narrow`, `'?'`) |
| "find all objects / filter Default__" loops | `Object.h` ×4, BaseMod object browser, `Utils::GetAllClasssFunctions`, `UPackage::GetAllObjectsInPackage` |
| `GetINIConfig/SetINIConfig` | `GameMod.h:63-104`, `ModManager/src/Application.h` |
| `offsetOfClass` | `Utils.h:6` duplicates `OffsetOfClass` in `Memory.h:32` |
| `Mod::GetModsFolder` / `GetContentFolder` | the same `substr` chain twice |

---

## 4. Bugs and hazards

Severity: **S1** = crash or data loss reachable today, **S2** = wrong behaviour or latent crash, **S3** = quality,
performance or portability.

### 4.1 Crash or data loss

| # | Where | Finding | Conf. |
|---|---|---|---|
| B1 | `ModLoader.cpp:257-267` | **Overwrite mods delete original game files.** If the link target already exists in `Content`, it is `std::filesystem::remove`d (the log prints the *source* path), then linked. `DeleteSysLinks` later removes the link, so the shipped file is gone until a Steam "verify files". `NoOverwrite.ini` is *not* consulted here; it only feeds the pak hooks. | H |
| B2 | `INI.h` `_parseFile` (vendored) | Duplicate sections or duplicate keys → `throw -1`. Callers: `SetupProfile` (in `DllMain`), `IsDirectX11` (parses the *engine's* `GameUserSettings.ini`), `LoadMods`/`CreateSysLinks` (user `mod.ini`, thread T2), `GameMod::GetINIConfig`. None catch it, so one bad `mod.ini` crashes the game at start. | H |
| B3 | `BaseMod.cpp:86,227` | Give-item and item listing call `PlayerCharacter->M_GetInventoryComponent()` (stale generated offset) → BP functions on the wrong object. This is the known Test-1 crash. `GameTick` also dereferences `PlayerCharacter` when only `PlayerController` was checked (`:85-86`). | H |
| B4 | `BaseMod.cpp:73-75` | With `EnableCheatsMenu=1`, `M_SetCheats(true)` **writes** a bool at a stale generated offset into the GameInstance. | H (stale offset), M (effect) |
| B5 | `Logger.h:40-56` | `~Logger` `delete`s the raw pointers of `shared_ptr` members, then `reset()`s them: a double delete. It runs at exit for `Log::s_mdmlLogger` and the UE logger. | H |
| B6 | `Logger.h:24-28`, `Logger.cpp:26,36,46` | `getLogger()` wraps a raw `Logger*` in a **new** `shared_ptr` (second owner). `Logger::Create` with an existing name returns it, so the logger is deleted when that temporary dies. | H |
| B7 | `Logger.cpp:82-83` | `if (m_consoleSink) m_fileSink->set_level(...)` → null deref for console-only loggers (`Mod` with `CreateLogger && !LogToFile`, `Mod.cpp:61`). Not hit today because `GameMod` forces `LogToFile`. | H |
| B8 | `MDML.cpp:364-366` | If `[General] LogDir` is missing, the default is a full path that is prefixed with `Path` again (`<Path>/<Path>/Logs`). `create_directories` then throws inside `DllMain`. Latent: the shipped ini sets it. | H |
| B9 | `MDML.cpp:682-688` | `StringToDWord` reads `&str[2]`. On empty values (`get(...,"")` in the manual-offset sections) that is out of range. It also silently drops 2 digits if there is no `0x` prefix. | H |
| B10 | `ShutDown` `_fcloseall()` (`MDML.cpp:246`) | Closes spdlog's `FILE*`s before the logger destructors flush or close them. | M |
| B11 | `EngineDefFinder.cpp` (all `while` loops) | Unbounded scans with `uint16_t` offsets: an infinite loop or a wrap if an invariant is not found. `FindUObjectNameDefs:40` and `FindFField:456` dereference directly (not `Read`), so a crash is possible on a bad pointer. | H |
| B12 | `Stack.h:31,49` | `SetOutput` walks `OutParms` with `while(true)` and dereferences `CurrentOutParam` without a null check → AV when the name is not found. | H |
| B13 | `BaseMod.cpp:30-31,46-49` | `StaticFindObject` results are used without null checks (`GetFunction`/`SetFunction`). This only "works" on failure because `Read`/`Write` go through RPM/WPM and fail silently. | H |

### 4.2 Wrong behaviour or latent bugs

| # | Where | Finding | Conf. |
|---|---|---|---|
| C1 | `Class.h:94` | `reinterpret_cast<UObject*(*)(UClass*)>(this, SDK::SelectedGameProfile.CreateDefaultObject)(this)`: the comma operator discards `this`. It works by accident. | H |
| C2 | `MDML.cpp:591` | `[FField] ClassPrivate` is read from key `Next` (copy-paste). Only in the manual mode. | H |
| C3 | `MDML.cpp:104` | `Log::Error_UML("Mod {0} wasnt setup in time"), CurrentCoreMod->ModName;`: the comma operator drops the argument, so fmt raises a format error, which spdlog catches. | H |
| C4 | `Mod.h:16-24` | The `EnabledEvents` ctor never assigns `PostBeginPlay`, so it is always `true` (also for `None`, `GuiOnly`, …). | H |
| C5 | `ModStack.cpp:23-28` | `clearModEvents` erases from the vector it range-iterates (UB). Registered `ModEvent`s are leaked. | H |
| C6 | `ModStack.cpp:30-34` | `setCurrentMod` searches `[begin, begin+m_insertIndex)` but compares with `end()`. Correct only because `m_insertIndex == size()` always holds. | H |
| C7 | `ModStack.h:55-96` | `dynamic_cast<ModEvent<Args...>*>`: the event is dropped **silently** if the call-site argument types differ in any way (`float` vs `double`, missing `&`). The first handler returning `true` stops propagation. `catch(...)` under **`/EHa`** (premake `exceptionhandling "SEH"`) also swallows access violations: the mod is popped from `m_mods` but its state may be corrupt, and its events stay registered. | H |
| C8 | `Mod.cpp:8-33` + `ModStack::setCurrentMod` | `Mod::ModRef` is a process-wide "current mod" set per dispatch. G and R dispatch concurrently (Tick/BeginPlay vs. DrawImGui/DX11Present), so a callback can hit the wrong mod. Binding the mod pointer into the `ModEvent` (lambda capture) removes the global. | H (race exists), M (observed) |
| C9 | `Pointers.h:52-61` | `FWeakObjectPtr::GetObjectItem` returns `nullptr` **when the item exists** (`if (ObjectItem) return nullptr;`) and never checks the serial number. Every `TWeakObjectPtr::Get()` (24 generated files) returns null. | H |
| C10 | `Pointers.h:177-193` | `FReferenceControllerBase` lacks the vtable pointer. PDB: counts at +0x8/+0xC. Any reading of `TSharedRef/Ptr` counts is wrong. | H (PDB) |
| C11 | `Quat.h:28,57` | `FQuat::Rotator()` uses `glm::sqrt(Y)+glm::sqrt(Z)` where UE uses `Square` → wrong yaw and roll, and NaN for negative components. | H |
| C12 | `Quat.h:16`, `Transform.h:16-20` | `FQuat()` = (0,0,0,**0**). `FTransform()` and `FTransform(FVector)` therefore carry a zero quaternion, not the identity. Logic-mod actors are spawned with it (`MDML.cpp:129`). | H (value), M (effect) |
| C13 | `UnrealType.cpp:86`, `UnrealType.h:60-67`, `AsUClass` | `FProperty::IsA<T>` compares only the *exact* class. For unknown FField classes (Set, SoftObject, SoftClass, FieldPath, MulticastInline/SparseDelegate…) `AsUClass` returns `nullptr`, and `FAssetObjectProperty::StaticClass()` is also `nullptr` (no such class in 4.27). So `nullptr == nullptr` → **every unknown property is reported as `TAssetPtr<…>`**. Generated proof: `TAssetPtr<class FNone_513> AnimalTypesToDisable; // Size: 80` (a TSet). `GetPropertyClass()` then reads +0x78 of the wrong property type. | H |
| C14 | `NamePool.h:218-281` | `FName(const char*)` iterates `i = 0..AnsiCount` as **comparison indices**. Pool indices are `(block<<16)|(offset/2)`, so it only probes block 0, mostly at mid-entry positions. Names outside block 0 are never found and false positives are possible. It is also O(N), and the static `cache` is iterated linearly and is not thread-safe. | H (encoding per PDB `FNameEntryAllocator`) |
| C15 | `NamePool.h:20,49-52` | Entry header read as signed `int16_t`. `GetName()` always decodes ANSI, so wide names are garbled. | H |
| C16 | `Object.cpp:265` | `ProcessEvent_Save` checks `this->GetClass()->IsA(fOuter->GetClass())`, i.e. "is this object's class a UClass", which is always true. The intended check is `this->IsA((UClass*)fOuter)`. | H |
| C17 | `BlueprintFunctionLibrary.h:7-12` | `ACustomClass::StaticClass(std::string)` caches the **first** result for all arguments, including `nullptr` if called too early. Every `static auto ptr = FindClass(...)` has the same "cache nullptr forever" property. | H |
| C18 | `UnrealType.h:388-474` | `GetVariable/SetVariable` only walk the object's own class `ChildProperties`, not super classes. Inherited BP variables are not found. | H |
| C19 | `Array.h:32-41` | `TArray::Add` uses CRT `realloc` (not GMalloc) on possibly engine-owned memory and bit-copies `T`. `IsValidIndex` has no `i >= 0` check. | H |
| C20 | `String.h:17-24,35-44` | `FString(const wchar_t*)` **aliases** the caller's buffer (no copy, `*other` dereferenced without a null check). `ToString()` calls `wcslen(nullptr)` if invalid, and narrows non-ASCII to `'?'` (Polish and German localisation). | H |
| C21 | `Map.h` / `NativeTMap::GetPair(i)` | Index access ignores the allocation bitmap. With removed elements, `0..Num()` reads holes and misses tail elements. There is no key lookup. BaseMod iterates DataTable `RowMap` this way. | H (code), M (holes in practice) |
| C22 | `Text.h` | `FText::Get()` reads `ITextData* + 0x28` as `wchar_t*`. That is a guessed internal layout and history-type dependent. | M |
| C23 | `UserDefinedEnum.cpp:23` | Calling the engine's `GetDisplayNameTextByIndex` with a hidden return pointer: correct ABI usage, but the FText reference is never released (leak). | M |
| C24 | `MDML.cpp:255-256` | `SHGetKnownFolderPath` result is not checked and not freed (`CoTaskMemFree`). | H |
| C25 | `HooksManager.cpp:127-142` | `OutEntry = nullptr` has no effect (already known). | H |
| C26 | `HooksManager.cpp:54-65` | `GetPersistentObject` copies the full `ModInfo` (strings, vectors) per loop iteration on every such BP call. | H |
| C27 | BaseMod object browser `:272-278` | `dataTables` is not cleared on reload → duplicates. | H |
| C28 | ImGui Begin/End mismatches | `BaseMod.cpp:265/539` (`End` only if `Begin` returned true), `:593-632` (`End` called even when not begun), `:630` (`EndMenuBar` without `BeginMenuBar`), `:633-638`, `ExampleMods/PresetMod/Mod.cpp:72-80` (`End` inside `if(Begin)`, **missing `return`** on one path). | H |
| C29 | `LoaderUI.cpp:171,216,246`, BaseMod `:238`, `Utils.h` (several) | `ImGui::Text(str.c_str())` with non-literal text: `%` in mod metadata is interpreted as a format specifier. | H |
| C30 | `LoaderUI.cpp:332-333` | `GetDevice` is called twice (one leaked reference). The dummy device, swapchain and window from `InitDX11Hook` are never released. `VirtualProtect` after hooking (`:486-487`) is pointless. | H |
| C31 | `BaseMod.cpp:23-51` | **Always** swaps the `Func` pointers of `TDBPL_IsDevelopmentBuild` and `TDBPL_IsShippingBuild`, so the game believes it is a development build. This is not gated by `EnableCheatsMenu`. BaseMod's `mod.ini` also always installs the `UI_CheatMenu` asset override (already noted in REVERSE_ENGINEERING.md). | H |

### 4.3 Threading

Covered in 2.4, plus:
- `INI::PARSE_FLAGS` and `SAVE_FLAGS` are static, mutated before every parse (T2, G, mod threads).
- `Global::GetGlobals()`, `LoaderUI::GetUI()` and `Dumper::GetDumper()` use lazy `new` without synchronisation. First use happens early, so this is mostly benign.
- `MinHook.h` is header-static, so each DLL has its own MinHook state. Two DLLs hooking the same target will conflict.
- `SymSetOptions` is process-global in DbgHelp (startup only).

### 4.4 Performance [H mechanism, M magnitude]

- **`Memory.h:5-30` `Read`/`Write` = one `ReadProcessMemory` or `WriteProcessMemory` syscall per access**, on the own process with a cached `PROCESS_ALL_ACCESS` handle.
  - Used for every `UObject::GetClass/GetOuter/GetIndex`, `UStruct::GetSuperField/GetChildren`, `FField::GetNext`, every FProperty getter, and **every generated member getter or setter**.
  - `FindObject<T>` builds `GetFullName()` (outer chain, so several syscalls plus string allocations) for each of hundreds of thousands of objects. Every first `StaticClass()` and every generated function's first call pays for that.
  - **Semantics to preserve when replacing it:**
    1. RPM returns a zero-initialised `T` on bad addresses instead of crashing. `EngineDefFinder` and several null paths (C13 scan, B13) rely on that "safe read".
    2. WPM writes even to read-only pages (it changes protection temporarily).
    3. Copies are bitwise and shallow (`Read<FString>`, `Read<TMap>`).
  - Proposal: plain loads and stores by default, plus an explicit `SafeRead<T>` (SEH or `VirtualQuery`) only for scanning code.
- `GetFunction` and `DoesObjectContainFunction` scan all GObjects (O(N)) per call (`Object.cpp:150-242`). They are used per spawned logic actor.
- `ProcessLocalScriptFunction` hook: `std::string` for every BP call.
- Pak hooks: filesystem syscalls on every file lookup.
- `Core.h` (the PCH) pulls in `<regex>`, `<execution>`, `<future>`, … for every TU. SDK has **no PCH and LTCG on**. Each of ~350 generated `.cpp` files includes the whole SDK, which is a major cause of the 2.69 GB `SDK.lib`.

### 4.5 C++20 and conformance

`/std:c++20` in MSVC **implies `/permissive-`** unless `/permissive` is added. Premake sets no `conformancemode`. The
following constructs compile today only because of permissive mode:

| Where | Construct | Expected under C++20 | Conf. |
|---|---|---|---|
| `Class.h:72` | `Profile.bIsDefaultObjectArrayed` inside a never-instantiated template (`Profile` is undeclared) | two-phase lookup error | H |
| `Class.cpp:49` | `auto& names = GetNames();` (non-const lvalue ref to a temporary) | error C2440/C4239 | H |
| `Transform.h:16` | `FQuat::FQuat()`, `FVector::FVector(...)` used as expressions (naming the ctor) | error | M-H |
| `Quat.h:24`, `Rotator.h:63,75` | extra qualification `FRotator FQuat::Rotator()` inside the class | C4596 (error in conforming mode, rejected by clang) | M |
| `BaseMod.cpp:30-31` | `(DWORD64)0` passed as `UClass*` (not a null-pointer constant) | error C2664 | M-H |
| `ModManager/src/Application.h:23` | `std::forward<Args>(args)` with no `args` | error | H |
| `MDML.cpp:457`, `ModLoader.cpp:242`, `Utils.h` ×7 | `std::string::_Starts_with`, an MSVC STL internal | replace with C++20 `starts_with` | H |
| `Core.h:37` | `#include <xhash>` (STL internal header) | non-portable | L |
| `Logger.h`, `UE_LOG.h` | runtime `std::string` format strings forwarded to spdlog/fmt | consteval format-string errors with newer fmt (details in `docs/reports/libraries.md`) | H (per that report) |
| `Object.cpp:13` | `if (!this)` | UB; may be optimised away | H |
| `Mod.h:111-117`, `Utilities/Math.h:257-286` | overloads added to `namespace std` | UB per the standard; move them to `UE4`/`glm` for ADL or use fmt formatters | H |
| Math types | non-const member `operator==(const glm::vec3&)` | C++20 reversed-candidate ambiguity warnings with glm templates possible | L |

Not found [H]: `u8""`/`u8string`, `char8_t` issues, `codecvt`/`wstring_convert`, `auto_ptr`, `bind1st`, `result_of`,
`std::iterator` bases, `register`, dynamic exception specs.

### 4.6 The INI section quirk: callers that rely on it

In the vendored feather-ini, `get(section,key,def)` and `getAs(section,key,def)` ignore `section`. Also, `select(name)`
**creates and selects an empty section** when the name is missing (unless `noCreate`). All current callers call
`select()` first, so none is broken, but all rely on it [H]:

- **`MDML.cpp`:**
  - `22-23` (`IsDirectX11`), `308-309` (`ResolveFunction`, commented), `331-344` (`ResolveGlobal`, commented)
  - `363-366` (General), `375-376` and `398` (DEBUG; `398` relies on DEBUG *still* being selected 22 lines later), `408-409`
  - `479-485` (Overwrites/Overrides; a failing `select("Overwrites")` *creates* an empty section first), `494-495` (Symbols), `499-509` (GameInfo), `515-518` (GInfo)
  - `534-597` (manual defs), `609-610` (FunctionInfo)
  - `634-635`: selects `ProcessInternalFunction`, a section that does not exist, then reads key `ProcessInternal`. It always gets the hard-coded default pattern.
  - `651-653`, `661-664`
- **`ModLoader.cpp`:** `143-144`, `196-202`, `234-243`.
- **BaseMod `GameMod.h`:** `GetINIConfig` (`select`, then `getAs(section,…)`) and `SetINIConfig` (`select` + `set`).
- **`ModManager/src/Application.h`:** same pattern.

A thin wrapper with explicit `(section, key)` lookups (or mINI, per libraries.md) plus `try/catch` fixes both the quirk and B2.

---

## 5. Hand-written core quality

### 5.1 Solid, worth keeping as the foundation

- **Reflection walker design.**
  - `UObject` → `UStruct` → `UFunction`/`UClass`, and `FField`/`FProperty` with one accessor per property subclass.
  - `AsUClass` maps FFieldClass to the compatibility UClass. `GetCppTypeName()` and `StringifyFlags`.
  - This is exactly what an in-game object browser and a generator backend need, and it already powers BaseMod's browser and exporter.
- **Engine data structures with verified layouts** (Appendix A):
  - `FNamePool`/`FNameEntryAllocator` (8192 blocks, stride 2), `FUObjectArray`/`FChunkedFixedUObjectArray`/`FUObjectItem`
  - `FFrame`/`FOutParmRec`, `FStaticConstructObjectParameters`
  - `TSparseArray`/`TSet`/`TMap` sizes, `FText` size, `FTransform`/`FQuat`, `UDataTable::RowMap`
- **Thin engine-function thunks** (`StaticLoadObject`, `StaticFindObject`, `StaticConstructObject_Internal`, `CallFunctionByNameWithArguments`, `UWorld::SpawnActor`) with the Phase 1 resolver behind them.
- **`ProcessEvent_Save`** (parameter-size check against `ParmsSize`) is a good safety idea; fix C16.
- **`GetVariable`/`SetVariable`** and the reflection lookup pattern used in TimeWeatherChanger are **immune to stale generated offsets**. They should become a first-class, typed API: walk super classes, cache by `(UClass*, name)`.
- **Math types** with glm interop are ergonomic and correct apart from C11/C12.

### 5.2 Missing or weak

| Area | Gap |
|---|---|
| Memory model | No engine allocator. `TArray`/`FString` have no destructor and no ownership. `Add` uses CRT `realloc`. Strings the engine returns (out-params, return values) are never freed (leaks), and anything MDML grows or frees inside engine memory would corrupt the heap. Needs `FMemory::Malloc/Realloc/Free` (PDB symbols) and owning versus view types. |
| `TArray` | no iterators or range-for, no bounds checks, no `Remove`/`Reserve`, `IsValidIndex` sign bug |
| `FString` | aliasing ctor; no UTF-8↔UTF-16 conversion; no construction from `std::string`/`std::wstring` that copies into GMalloc memory |
| `FText` | opaque; needs `FText::ToString` / `FromString` via engine symbols or `KismetTextLibrary` |
| `FName` | no engine-backed `FName(const wchar_t*)`; wrong pool iteration (C14); no wide names; no hash or `operator<` (cannot key `std::map`/`unordered_map` without care) |
| `TSet`/`TMap` | no lookup by key (hashing), no iteration that honours the allocation bitmap, no add/remove. `TMap` is a byte blob filled with `WriteProcessMemory`; `NativeTMap` adds an index API on top. |
| Pointers | `FWeakObjectPtr` broken (C9); `TSoftObjectPtr` cannot resolve or load; `FReferenceControllerBase` layout wrong (C10); delegates cannot be invoked (`ProcessDelegate`/broadcast); `FFieldPath` missing; `TSubclassOf` unused by the generator |
| `UStruct` | `GetChildren()` actually returns `ChildProperties` (3.2); no accessor for `Children` (functions), `PropertyLink`, `MinAlignment` |
| `UClass` | no `ClassDefaultObject` field accessor (it calls the engine instead), no `FuncMap`/`FindFunctionByName`, no `ClassFlags`/`CastFlags` |
| Object iteration | O(N) string-building `FindObject`/`FindClass`; duplicated chunked/TU loops; no safe iteration while GC runs; no engine `StaticFindObject` use |
| Types | `UObject` has **no data members and no vtable declared**, so `sizeof(UObject)==1`. Today that is fine because everything is offset-based, but a header-centric generator needs layout-true base classes (`vptr` + 0x28 bytes, `UField` 0x30, `UStruct` 0xB0, `UClass` 0x230, `UFunction` 0xE0) with `static_assert`s. |
| Diagnostics | no game-thread assertion, no layout self-test at startup |

### 5.3 What generated code depends on today (API surface)

Count of generated files (outside CoreUObject, Containers and Math) that use each item:

| Core item | Files | Notes |
|---|---|---|
| `Read<T>` / `Write` (Memory.h) | 237 / 235 | every member getter/setter (`M_Get…`, `M_PtrGet…`, `M_Set…` at fixed offsets) |
| `UObject::FindObject<UFunction>("Function …")` | 248 | cached in function-local statics |
| `UObject::FindClass("Class …")` | 360 | `StaticClass()` |
| `UObject::ProcessEvent(fn, &params)` | 248 | via `ALWAYS_PROCESS_EVENT_SAVE`, so `ProcessEvent_Save_impl` |
| `UFunction::Get/SetFunctionFlags` | 214 | temporary `FUNC_Native` flip |
| `UClass::CreateDefaultObject()` | 57 | static functions are called on the CDO |
| `TArray<…>` | 245 | |
| `TEnumAsByte<…>` | 212 | |
| `FName` / `FString` / `FText` | 193 / 138 / 78 | |
| `TAssetPtr<…>` | 170 | mostly mis-typed properties (C13) |
| `TMap<…>` | 76 | opaque |
| `FScriptDelegate` | 44 | |
| `FGuid`, `TWeakObjectPtr`, `TScriptInterface`, `FSoftObjectPath`, `FDateTime`, `FTimespan`, `TLazyObjectPtr` | 43, 24, 14, 6, 8, 4, 1 | |
| `TSet`, `TSubclassOf`, `TSoftObjectPtr`, `TSoftClassPtr`, `FFieldPath`, multicast delegate types | 0 | the old generator emits padding or `TAssetPtr` instead |
| Engine/CoreUObject structs from the hand-written side | many | `FVector`, `FRotator`, `FTransform`, `FQuat`, `FLinearColor`, `FColor`, `FVector2D`, `FKey`, `CoreTypes.h` structs |

### 5.4 Target API surface for the new generator backend (proposal for 2.3/2.4)

The new backend (Dumper-7-style analysis, own emitter; note the Dumper-7 license caveat in `docs/reports/libraries.md`)
should target this hand-written core surface, and nothing else:

1. **Layout-true base classes:**
   - `UObject` (vptr, `ObjectFlags`, `InternalIndex`, `ClassPrivate`, `NamePrivate`, `OuterPrivate`)
   - `UField`, `UStruct`, `UClass`, `UScriptStruct`, `UFunction`, `UEnum`
   - `FField`, `FProperty` (+ subclasses for tooling)
   - `AActor` and the other engine bases come from the generator itself.
   - All of these carry `static_assert(sizeof/offsetof)` derived from the PDB.
2. **Containers:** `TArray<T>`, `FString`, `FName`, `FText`, `TMap<K,V>`, `TSet<T>`, `TPair`, `TEnumAsByte<E>`, `TSubclassOf<T>`, `TWeakObjectPtr<T>`, `TSoftObjectPtr<T>`/`TSoftClassPtr<T>`, `TLazyObjectPtr<T>`, `TScriptInterface<T>`, `FScriptDelegate`, `FMulticastScriptDelegate` (inline/sparse), `FFieldPath`/`TFieldPath<T>`. Each needs the correct size and alignment, even where the API is minimal.
3. **Math:** `FVector`, `FVector2D`, `FVector4`, `FRotator`, `FQuat`, `FTransform`, `FColor`, `FLinearColor`, `FPlane`, `FBox`, `FMatrix`, `FGuid`. Hand-written structs win over generated ones (the generator gets a "predefined struct" list).
4. **Calls:**
   - `UObject::ProcessEvent(UFunction*, void*)` (checked variant optional)
   - one cached function lookup, e.g. `UClass::FindFunction(FName)` through `FuncMap`, or a `StaticFindObject`-backed `FindObject`
   - `StaticClass()` via a cached `StaticFindObject`
   - a `GetDefaultObject<T>()` helper
3. **No `Read`/`Write`**: members are real fields.
4. **One aggregator per package** (export lists), so mods include only what they use.

---

## 6. BaseMod

| Feature | Where | Kind | Uses the generated SDK? | Risk with the stale SDK (game 2.2.0.8 → 2.7.0.4) |
|---|---|---|---|---|
| `GameMod` base class: Menu/Loading/Game dispatch by `EMD_GameState` | `GameMod.h/.cpp` | **game API helper** | yes: `GI_MedievalDynasty_C::M_GetMDGameState` (member offset), `GM_MedievalDynasty_C::M_GetGameInstance` (member offset); `UGameplayStatics::Get*` (engine wrappers called by name, stable); BP classes validated by name (stable) | **High**: wrong state dispatch if the GI layout moved. It is only a read. |
| Manager accessors `getMainGameManager()`, `getWeatherManager()`, `getQuestManager()`, … | `GameMod.h:45-53` | game API helper | yes: `M_GetSystemsManagerReference` + `M_Get…Reference` (member offsets) | **High** (used by TimeWeatherChanger) |
| `GetINIConfig`/`SetINIConfig` | `GameMod.h:63-104` | mod infrastructure | no | INI quirk, B2 |
| Move BaseMod to the front of `CoreMods` | `BaseMod.cpp:56-63` | infrastructure | no | – |
| Dev-build flag swap (`TDBPL_IsDevelopmentBuild` ⇄ `IsShippingBuild`) | `BaseMod.cpp:23-51` | cheat/dev enabler, **always on** | no (reflection + `Func` offset) | behaviour change for every user (C31) |
| `M_SetCheats(true)` if `EnableCheatsMenu=1` | `BaseMod.cpp:73-75` | cheat | yes (member offset, **write**) | **High** (B4) |
| `UI_CheatMenu` asset override | `BaseMod/Config/OverrideContent`, `mod.ini [Overrides] Enable=True` | cheat UI (overwrite mod) | – | old cooked asset, always installed |
| "Hooks" panel showing IsDev/IsShip | `BaseMod.cpp:122-154` | dev tool | no | `ProcessEvent` on the render thread |
| Player transform editor | `BaseMod.cpp:158-161`, `Utils::Gui::UE4ActorTransformEdit` | dev/cheat tool | engine wrappers by name (`GetActorLocation`, `K2_SetActorLocation`, …) | low (engine functions are stable); render thread |
| Inventory list ("Load Items" → `GetInventoryItems_BPI`) | `BaseMod.cpp:82-93,162-184` | cheat tool | yes: `M_GetInventoryComponent` (offset), BP structs `FST_InventoryItemsArray`/`FST_ItemInventorys` | **Crash** (B3) |
| Give item (`AddItemToInventory`) | `BaseMod.cpp:185-229` | cheat tool | yes: `M_GetInventoryComponent` (offset), `E_Ownership`, `DT_ListOfItems` keys | **Crashed in Test 1** (B3) |
| Component list (`K2_GetComponentsByClass`) | `BaseMod.cpp:233-242` | dev tool | engine wrapper | low |
| Items DataTable dump | `BaseMod.cpp:246-254` | dev tool | `UDataTable::GetRowMap` (hand-written 0x30 ✓), `FST_ItemDetails` (key only) | low (C21) |
| **Object browser** (actors, classes, blueprints, data tables, packages; class members and functions) | `BaseMod.cpp:264-540`, `Utils::Gui` | **dev tool** | core only (+ `UDataTable::M_GetRowStruct`, offset 0x28 ✓) | low; O(N) scans; render thread |
| **SDK exporter** (`Utils::Export`: package(s), BP enums, BP structs, `.export` lists) | `Utils.h:221-1007`, UI `BaseMod.cpp:363-481` | **dev tool / generator** | core only | runs in `std::async` threads concurrently with GC; `c++` race in the parallel `for_each` (`Utils.h:980-983`); C13 types |
| INI browser + INI editor (`TextEditor` from ModLoader) | `BaseMod.cpp:541-639` | dev tool | no | ImGui mismatches (C28) |

**Split proposal (2.5).**
- **BaseMod** keeps `GameMod`, the manager accessors and the INI helpers: the "Medieval Dynasty game API". After 2.4 it moves to regenerated, layout-checked headers or to by-name reflection.
- **DevTools** (new mod): object browser, INI browser and editor (+ `TextEditor`), SDK exporter (later the 2.4 generator UI), the loader's dump tools and the console command.
- Cheats (inventory/give-item, dev-build swap, cheat-menu override) become an explicit, opt-in module or a DevTools section. Owner decision.

---

## 7. Proposed target structure

### 7.1 Principles

- Keep the owner's concepts and names: `Mod`/`GameMod`, `ModStack` (event bus), logic mods, core mods, overwrite mods, `LoaderUI`, `SymbolResolver`, `EngineDefFinder`, `UE4::` engine namespace, premake.
- One owner per piece of state:
  - The engine core lives **once**, in `MDML.dll`, and is exported. That removes `InitSDK`-per-mod, the proxy export and the SDK⇄ModLoader header cycle.
  - The proxy depends on nothing.
- Layers only include downward: **Bootstrap → Platform → Engine → Runtime/Mods → UI → (mods: BaseMod, DevTools)**.
- No engine calls off the game thread: add a `GameThread::Enqueue(fn)` executed in the Tick hook.

### 7.2 Layers and folders (minimal-rename variant: top-level project folders stay)

```
LoaderAutoInjector/            → xinput1_3.dll   (Bootstrap; no MDML headers; plain CreateThread+LoadLibraryW)
ModLoader/                     → MDML.dll
  include/MDML/                  public mod API (Mod.h, Events.h, Log.h, Paths.h, UI/Widgets.h, Engine.h umbrella)
  src/
    Bootstrap/                   DllMain.cpp, Startup.cpp (Start/ShutDown, init thread), Version.h
    Platform/                    Memory.h (direct access + SafeRead), Pattern.h, SymbolResolver.*, Hook.h (MinHook),
                                 Config.* (INI wrapper, explicit sections, no throws), Paths.*, GameThread.*, Logger.*
    Engine/                      ← hand-written core moved from SDK/src (exported, MDML_ENGINE_API):
      CoreUObject/ Containers/ Math/   (same relative paths → generated includes keep working)
      Engine/                      World, GameplayStatics (hand part), UserDefinedEnum, UserDefinedStruct, Level, GameInstance,
                                   GameState, BlueprintGeneratedClass, BlueprintFunctionLibrary, DataTable/StringTable hand parts
      EngineLayout.h               offsets (was GameProfile.defs) – PDB-derived constants + static_asserts
      EngineAddresses.*            resolved function/global pointers (was GameProfile fields + Symbols/Resolve* in MDML.cpp)
      LayoutValidator.*            slimmed EngineDefFinder (sanity check / no-PDB fallback)
    Runtime/                     GameHooks.* (InitGameState/BeginPlay/Tick/ProcessLocalScriptFunction), LoaderConfig.*
    Mods/                        Mod.*, ModStack.* (event bus), CoreModLoader.*, LogicMods.* (was MDML::CreateMod/…,
                                 BP function wrappers), OverwriteMods.* (links + NoOverwrite + pak hooks)
    UI/                          D3D11Hook.*, ImGuiHost.*, LoaderWindow.*, Widgets.*, Themes.*
  vendor/                        (+ MinHook project)
SDK/                           → generated only (later produced by 2.4, not committed); UE4/SDK.h aggregator; links MDML.lib
BaseMod/                       → game API helpers (GameMod, managers, config helpers)
DevTools/                      → new mod: object browser, INI browser/editor (+TextEditor), exporter/generator UI, dumps
ExampleMods/                   → PresetMod, TimeWeatherChanger
ModManager/                    → parked, untouched
tools/                         → + check_layout.py (PDB offsets ⇄ EngineLayout.h)
```

The alternative "full-rename" variant (`Bootstrap/`, `Loader/`, `Engine/`, `Mods/BaseMod`, `Mods/DevTools`) is an owner
question. It costs one extra mechanical step.

### 7.3 What moves where

| From | To |
|---|---|
| `GameInfo.h` `Offsets` | `Engine/EngineLayout.h` |
| `GameInfo.h` `GameProfile` addresses | `Engine/EngineAddresses.h` |
| `GameInfo.h` `GameProfile` paths/flags/overwrite map | `Runtime/LoaderConfig.h` |
| `GameInfo.h` `class SDK` | removed (accessor functions exported from MDML) |
| `MDML.cpp` `SetupProfile` | `Runtime/LoaderConfig.cpp` (ini) + `Engine/EngineAddresses.cpp` (Symbols, `Resolve*`) + `Mods/OverwriteMods.cpp` (NoOverwrite) |
| `MDML.cpp` `InitGameState/BeginPlay/Tick` | `Runtime/GameHooks.cpp` |
| `MDML.cpp` `CreateMod/CleanUpMods/SpawnActor` | `Mods/LogicMods.cpp` |
| `MDML.h` `InitSDK` | `Engine/Engine.cpp` (`Engine::Initialize()`, called once) |
| `HooksManager.cpp` game hooks | `Runtime/GameHooks.cpp` |
| `HooksManager.cpp` pak hooks | `Mods/OverwriteMods.cpp` |
| `HooksManager.cpp` `InitHooks` | `Bootstrap/Startup.cpp` |
| `Mod/ModLoader.cpp` | `Mods/CoreModLoader.cpp` + `Mods/LogicMods.cpp` (registration) + `Mods/OverwriteMods.cpp` (links) |
| `Utilities/{Memory,Pattern,SymbolResolver,Logger,MinHook}` | `Platform/` |
| `Utilities/Math.h` | `Engine/Math/MathCommon.h` |
| `Utilities/EngineDefFinder` | `Engine/LayoutValidator` |
| `Utilities/Dumper` | `DevTools/` |
| `UI/LoaderUI` | `UI/{D3D11Hook,ImGuiHost,LoaderWindow,Widgets,Themes}` |
| `UI/ImGuiColorTextEdit` | `DevTools/vendor/` |
| `SDK/src/UE4.h`, `UE4/SDK.h`, `UE_LOG.h`, `CoreUObject/*`, `Containers/*`, `Math/*`, hand-written Engine files and the hand parts of the hybrids | `ModLoader/src/Engine/…` (hybrids are split first) |
| `SDK/src/NameValidator.*` | `DevTools/` (generator) |
| `BaseMod/src/Utils.h` (`Export`, `Gui`) | `DevTools/` (`Gui::UE4ActorTransformEdit` etc. may stay shared in `include/MDML/UI`) |

### 7.4 Naming conventions (proposal)

- `UE4::` stays for engine mirror types, so generated code is unchanged.
- Loader internals go into `mdml::` sub-namespaces (`mdml::platform`, `mdml::runtime`, `mdml::mods`, `mdml::ui`), with the static class `MDML` dissolved into them. Public mod API types keep their current names (`Mod`, `GameMod`, `Log`).
- Typos get fixed when touched, with deprecation aliases if mods use them: `OnModInitilize`, `GetDispalyNames`, `filterDefualts`, `PeristentObjectFile` (an ini key as well!), `GetAllClasssFunctions`, `IsUsingDeferedSpawn`, `Uknown`.

### 7.5 Ordered migration (build stays green after every step)

**Done criteria for every step:**
- full `MSBuild MDML.sln Release x64` succeeds
- no new warnings
- docs updated
- an in-game smoke test (owner) where marked 🎮

**Wave 0 (serial, tiny; makes parallel worktrees affordable)**
- 0.1 Turn off LTCG/`WholeProgramOptimization` for the `SDK` project only (premake filter) and measure `SDK.lib` size and build time. Optionally a premake option to skip building example mods. *(owner OK)*

**Wave 1 (parallel, fix in place, no file moves; packages are file-disjoint by directory)**

| Pkg | Owns (only these files) | Content |
|---|---|---|
| 1A Loader fixes | `ModLoader/src/**` **except** `Utilities/EngineDefFinder.*` and `UI/ImGuiColorTextEdit` | B2 (wrap INI parse), B5-B10, C2-C8, C24, C26, C29-C30, `_Starts_with`, `Mod.h` std-namespace operators; C++20 blockers in these files. B1 only after the owner decides (Q6). |
| 1B Core fixes | `SDK/src/{UE4.h,NameValidator.*,UE4/SDK.h,UE4/UE_LOG.h,UE4/CoreUObject/*,UE4/Containers/*,UE4/Math/*}`, hand-written `UE4/Engine` files, `ModLoader/src/Utilities/EngineDefFinder.*` | B11-B12, C1, C9-C17, C19-C20, `Children`→`ChildProperties` naming, `FFieldClass::SuperClass` 0x20, `\|\| "Vector"`, C++20 blockers (Class.h/.cpp, Transform.h, Quat.h, Rotator.h, Object.cpp `!this`) |
| 1C Mods fixes | `BaseMod/**`, `ExampleMods/**` | B3 guard (disable give-item and inventory until 2.4, or switch to reflection lookup), C27-C29, `(DWORD64)0` casts, `_Starts_with`, null checks. C31/B4 after owner decisions. |

**Wave 2 (serial, one agent: the "spine")**
- 2.1 🎮 **Break the proxy dependency.**
  - Define `SelectedGameProfile` in MDML (`Globals.cpp`) and export it with `LOADER_API`.
  - Drop `LoaderAutoInjector` from all `links`. The proxy stops including `GameInfo.h`.
  - SDK.lib objects linked into MDML will see a dllimport of a local symbol (LNK4217 warning, works). That is acceptable for one step or two, until 2.3.
- 2.2 🎮 **Proxy and mod loading.**
  - Proxy: `CreateThread` → `LoadLibraryW(L"MDML.dll")`, no `PROCESS_ALL_ACCESS`/`VirtualAllocEx`.
  - `LoadMods`: plain `LoadLibraryW`, sequentially, BaseMod first, on the init thread, finished **before** the game hooks are installed.
  - Move `SetupProfile` from `DllMain` into the init thread. The timing of pak-hook installation needs checking (Q8).
- 2.3 🎮 **Move the hand-written core into `ModLoader/src/Engine/`** (`git mv`, hybrids split first) and compile it into MDML.dll with an export macro on classes and static data (`GObjects`, `GNames`, `GWorld`).
  - Add `ModLoader/src/Engine` to the SDK include dirs so generated files compile unchanged.
  - Remove `UE4::InitSDK()` from `GameMod`.
  - `SDK.lib` = generated code + `UE4/SDK.h` aggregator, linking `MDML.lib`.
  - Remove `UE4.h`'s includes of `Pattern.h`/`GameInfo.h`.
- 2.4 Split `GameProfile` into `LoaderConfig` / `EngineAddresses` / `EngineLayout` (mechanical, ~40 call sites; `class SDK` removed).

**Wave 3 (parallel after Wave 2; file ownership by folder)**

| Pkg | Owns | Content | Conflict notes |
|---|---|---|---|
| 3A Runtime split | `ModLoader/src/{Bootstrap,Runtime,Mods,Platform}`, `MDML.*`, `Globals.*`, `Core.h`, `dllmain.cpp`, `Utilities/*` (except Dumper, EngineDefFinder) | 7.3 rows for MDML.cpp, HooksManager, ModLoader.cpp, Utilities; `mdml::` namespaces; event bus binds the mod pointer (C8); `GameThread` queue | only package that edits `Core.h` and `ModLoader/premake5.lua` |
| 3B UI split | `ModLoader/src/UI/**` (except ImGuiColorTextEdit) | LoaderUI → D3D11Hook/ImGuiHost/LoaderWindow/Widgets/Themes; keep a forwarding `UI/LoaderUI.h` so `Mod.h` (3A) is untouched; route mod buttons and console command through `GameThread` (API from 3A: agree the header name up front, or 3B lands after 3A) | |
| 3C Mods split | `BaseMod/**`, new `DevTools/**`, `ExampleMods/**`, `ModLoader/src/UI/ImGuiColorTextEdit` (move out), `Utilities/Dumper.*` (move out), root `premake5.lua` | 2.5 BaseMod/DevTools split | only package that edits the root premake |
| 3D Engine cleanup (= plan 2.3) | `ModLoader/src/Engine/**`, `tools/check_layout.py` | single `ForEachObject`; remove dead UML paths (after Q3); `EngineLayout` constants + `static_assert` + PDB checker; `SafeRead` versus direct access (Q5); `ChildProperties`/`Children` accessors; engine `FName` ctor, `StaticFindObject`, `FMemory`; container fixes (C19-C21); FText via engine; layout-true `UObject`/`UStruct`/`UClass` bases for 2.4 | 3A must not edit `Engine/` |

**Wave 4 (serial)**
- 4.1 C++20: `cppdialect "C++20"` + `conformancemode "On"` in all projects. The spdlog/fmt upgrade and the `Logger`/`UE_LOG` wrapper changes (2.6) come with it. Most blockers were fixed in Wave 1, so this should be small.
- 4.2 Remove ini keys and modes dropped in 3D from `Config/ModLoaderInfo.ini` and `tools/check_patterns.py` (coordinate with the RE docs).

**Then plan 2.4** (generator backend against the 5.4 API surface) and **2.8** (docs).

### 7.6 Risks in the migration

- **Worktree cost:** SDK.lib is 2.69 GB per worktree build until Wave 0 or 2.4; LTCG off should shrink it a lot [M].
- **ABI:** exporting C++ classes with STL members from MDML.dll (already done for `Global`, `Mod`, `Logger`; C4251 is globally suppressed) ties mods to the same MSVC toolset and `/MD`. That is fine for an in-tree ecosystem; document it.
- **Behaviour changes that need 🎮:** 2.1, 2.2 (load order, timing), 2.3 (single statics), and anything touching hooks or the pak path.
- **Hybrids:** splitting `CoreTypes.h`, `GamePlayStatics.*`, `DataTable.*`, `StringTable.*` must not change generated declarations, or the old SDK stops compiling before 2.4 replaces it.

---

## 8. Open questions for the owner

1. **Engine core location.** Compile the hand-written core into `MDML.dll` and export it (recommended: one copy of GObjects/GNames/offsets, no `InitSDK` per mod, no proxy export)? Or a separate `MDML.Engine.dll`? Or keep the static lib?
2. **Names.** Keep the current folder and project names (`LoaderAutoInjector`, `ModLoader`, `SDK`) and only restructure inside `src/`, or rename to `Bootstrap`/`Loader`/`Engine`/`Mods/*`? Use `mdml::` namespaces for loader internals?
3. **Drop the UML multi-game paths** (3.1: raw offset mode, non-FNamePool, TUObjectArray, UProperty mode, `IsUsing4_22`, legacy SCOI signature, deferred spawn, CDO-by-array, manual `[…Def]` sections, `DumpEngineInfo`)?
4. **Offsets:** PDB-verified `constexpr` constants + `static_assert` + an offline `check_layout.py`, with `EngineDefFinder` slimmed to a startup sanity check or no-PDB fallback? Or keep runtime scanning as the primary source?
5. **Memory access:** replace the `ReadProcessMemory`/`WriteProcessMemory` `Read`/`Write` with direct access, plus an explicit `SafeRead` only for scanning code? This changes failure behaviour: some current null paths "work" only because RPM fails softly.
6. **Overwrite mods delete shipped files (B1):** back up and restore the original (e.g. rename to `*.mdml-orig`), refuse to overwrite existing files, or respect `NoOverwrite.ini` for links as well?
7. **BaseMod cheats:** the dev-build flag swap is always on, the `UI_CheatMenu` override is always installed, and `M_SetCheats` writes at a stale offset. Gate them behind `EnableCheatsMenu`, move them to DevTools, or remove them until the SDK is regenerated? Disable give-item and the inventory list now?
8. **Startup timing:** move `SetupProfile` (PDB load, Content walk) out of `DllMain` into the init thread? This may delay pak-hook installation slightly. Test with the owner.
9. **Mod loading:** replace the per-mod `CreateRemoteThread` self-injection with sequential `LoadLibraryW` (BaseMod first), finished before the game hooks?
10. **Threading policy:** introduce a game-thread task queue and require that UI and tools (console command, mod buttons, BaseMod tools, dumps, exporter) only call UE through it?
11. **Event bus semantics:** keep "returning `true` stops propagation to other mods"? Keep the `std::function` + `dynamic_cast` design (silent drop on type mismatch), or switch to typed per-event lists?
12. **DevTools:** a separate mod DLL shipped by default, or only in dev builds? Should the console-command box and dumps move there from the loader window?
13. **Logic-mod BP function wrappers** (`REGISTER_FUNCTION`): today they only work if at least one logic mod exists, because the hook is installed on the first logic-actor spawn. Install the hook unconditionally?
14. **Wave 0:** OK to disable LTCG for the SDK project until 2.4, to make parallel agent worktrees affordable?
15. **Hybrid SDK files** (`CoreTypes.h`, `GamePlayStatics.*`, `DataTable.*`, `StringTable.*`): confirm that the hand-written parts listed in 1.2 are yours and should be preserved.

---

## Appendix A: PDB-verified layouts (game build 25776186) vs. MDML

`EngineDefFinder` values are from the last `Logs/MDML-log.txt`.

| Type.member | PDB | MDML (runtime / hand-written) | |
|---|---|---|---|
| UObjectBase: ObjectFlags / InternalIndex / ClassPrivate / NamePrivate / OuterPrivate, size | 0x8 / 0xC / 0x10 / 0x18 / 0x20, 0x28 | Index 0xC, Class 0x10, Name 0x18, Outer 0x20 | ✓ |
| UField.Next, size | 0x28, 0x30 | 0x28 | ✓ |
| UStruct SuperStruct / Children / ChildProperties / PropertiesSize, size | 0x40 / 0x48 / 0x50 / 0x58, 0xB0 | SuperStruct 0x40, "Children" **0x50**, PropertiesSize 0x58, size 176 | ⚠ name: MDML "Children" = ChildProperties |
| UEnum CppType / Names / CppForm / EnumFlags / EnumDisplayNameFn, size | 0x30 / 0x40 / 0x50 / 0x54 / 0x58, 0x60 | same | ✓ |
| UUserDefinedEnum.DisplayNameMap | 0x60 | 0x60 | ✓ |
| UFunction FunctionFlags / NumParms / ParmsSize / ReturnValueOffset / Func, size | 0xB0 / 0xB4 / 0xB6 / 0xB8 / 0xD8, 0xE0 | same | ✓ |
| UClass ClassFlags / ClassCastFlags / ClassDefaultObject / FuncMap, size | 0xCC / 0xD0 / 0x118 / 0x130, 0x230 | (not modelled) | – |
| FField ClassPrivate / Owner / Next / NamePrivate / FlagsPrivate, size | 0x8 / 0x10 / 0x20 / 0x28 / 0x30, 0x38 | ClassPrivate 0x8, Next 0x20, Name 0x28 | ✓ |
| FFieldClass Name / Id / CastFlags / ClassFlags / SuperClass | 0x0 / 0x8 / 0x10 / 0x18 / **0x20** | SuperClass **0x18** | ✗ (unused) |
| FProperty ArrayDim / ElementSize / PropertyFlags / Offset_Internal, size | 0x38 / 0x3C / 0x40 / 0x4C, 0x78 | same, end 0x78 | ✓ |
| FBoolProperty FieldSize..FieldMask; FObjectPropertyBase.PropertyClass; FStructProperty.Struct | 0x78..0x7B; 0x78; 0x78 | derived from 0x78 | ✓ |
| FFrame Node / Object / Code / Locals / OutParms, size | 0x10 / 0x18 / 0x20 / 0x28 / 0x78, 0x98 | same (`Stack.h`) | ✓ |
| FUObjectArray.ObjObjects; FChunkedFixedUObjectArray; FUObjectItem size | 0x10; Objects 0, PreAlloc 8, Max 0x10, Num 0x14, MaxChunks 0x18, NumChunks 0x1C; 0x18 | same | ✓ |
| FNameEntryAllocator Lock / CurrentBlock / CurrentByteCursor / Blocks | 0x0 / 0x8 / 0xC / 0x10 (8192 ptrs) | same | ✓ |
| FStaticConstructObjectParameters (size 0x40) | Class 0, Outer 8, Name 0x10, SetFlags 0x18, InternalSetFlags 0x1C, 2 bools 0x20/0x21, Template 0x28, InstanceGraph 0x30, ExternalPackage 0x38 | same (`Object.cpp:297-309`) | ✓ |
| SharedPointerInternals::FReferenceControllerBase | **vptr**, counts at 0x8 / 0xC | counts at 0x0 / 0x4 | ✗ (C10) |
| FText | TextData (TSharedRef) 0x0 size 0x10, Flags 0x10, size 0x18 | `Data` 8 + 0x10 opaque | size ✓ |
| TSparseArray (TMap<FName,uint8*>) | Data 0, AllocationFlags 0x10 (0x20), FirstFreeIndex 0x30, NumFreeIndices 0x34, size 0x38 | same | ✓ |
| UDataTable RowStruct / RowMap / ImportKeyField | 0x28 / 0x30 / 0x88 | 40 / 48 / 136 | ✓ |
| FTransform / FQuat | 0x30 (3×`__m128`) / 0x10 | 0x30 with padding / 0x10 | ✓ |
| FWeakObjectPtr | Index 0, Serial 4 | same | ✓ (logic bug C9) |
| FFieldPath | 0x20 (ResolvedField, ResolvedOwner weak ptr, Path TArray<FName>) | missing | – |

The dump script (read-only dbghelp `SymGetTypeFromName` + `TI_FINDCHILDREN`/`TI_GET_OFFSET`) is the basis for the
proposed `tools/check_layout.py`.
