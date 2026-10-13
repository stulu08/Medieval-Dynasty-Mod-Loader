# Wave 3A: runtime split, layer namespaces, event bus (C8), INI wrapper

Branch `worktree-agent-ae844638d843530df`, based on `modernize` @ 1fed9d6. Package scope: `Loader/ModLoader/src`
except `src/Engine`, `Runtime/Dumper.*`, `Runtime/EngineDefFinder.*`, `src/UI` (mechanical renames only).
Status: full solution builds (only the expected C4715 in PresetMod), `bin/Release-windows-x86_64` file list identical
(37 files). **Not tested in-game** (startup and hooks were reorganized, see "In-game test").

Commits (in order):

| Commit | What |
|---|---|
| `a636db5` | vendor mINI 0.9.20 (`Dependencies/mINI`, `VENDORED.txt`, `IncludeDir.mINI`, THIRD_PARTY_LICENSES §6) |
| `34f11cb` | pure moves: `src/Mod` → `src/Mods`, `dllmain.cpp` → `Bootstrap/DllMain.cpp` (+ include paths in mods) |
| `9d3ba28` | layer namespaces for the existing APIs (`mdml::platform/runtime/mods`) + round-1 shims for `src/Engine` |
| `91e9d66` | `mdml::platform::IniFile` wrapper (not used yet) |
| `66607e5` | runtime split: `MDML.cpp`, `HooksManager.*`, `Mod/ModLoader.*` dissolved; INI reads through `IniFile` |
| `f89ea96` | dead UML-era code removed, typo renames, empty-key bugs |
| `e881481` | event bus binds the mod pointer (C8), `Mod::ModRef` removed |
| (this file) | report |

## 1. File map (old → new)

| Old | New |
|---|---|
| `src/dllmain.cpp` | `Bootstrap/DllMain.cpp` (calls `mdml::runtime::Start/ShutDown`) |
| `Core.h` version macros (`UML_VERSION`, `MODLOADER_VERSION`, `MEDIEVAL_VERSION`) | `Bootstrap/Version.h` (included by `Core.h`, so mods see them unchanged) |
| `MDML.cpp` `MDML::Start/ShutDown`, init thread, `GetModuleFilePath`, order of `SetupProfile` | `Bootstrap/Startup.cpp` |
| `MDML.cpp` `SetupProfile`: `[General]`/`[DEBUG]`, console, `Log::Init`, version lines, UE_LOG logger, `IsDirectX11`, profile path, game root | `Runtime/LoaderConfig.cpp` `LoadLoaderConfig` |
| `MDML.cpp` `SetupProfile`: profile `[Overwrites]/[Overrides]`, `[GameInfo] DelayGUISpawn/BeginPlayOverwrite`, `[PakOverwrite] bPakOverwrite` | `Runtime/LoaderConfig.cpp` `LoadProfileConfig` |
| `MDML.cpp` `SetupProfile`: `[Symbols]`, `[GameInfo]` engine flags, `mdml::Resolve*` calls, `SymbolResolver::Shutdown`, `StringToDWord` | `Runtime/EngineSetup.cpp` `ResolveEngine` (+ global `StringToDWord`, which `src/Engine` declares) |
| `MDML.cpp` `SetupProfile`: NoOverwrite.ini generation + parsing | `Mods/OverwriteMods.cpp` `LoadNoOverwriteList` |
| `MDML.cpp` `InitGameState/BeginPlay/Tick` | `Runtime/GameHooks.cpp` (`OnInitGameState/OnBeginPlay/OnTick`, file-local) |
| `MDML.cpp` `InitCoreMods` | `Mods/CoreModLoader.cpp` `InitCoreMods` |
| `MDML.cpp` `CreateMod/CleanUpMods/SpawnActor`, logic-mod part of `BeginPlay` | `Mods/LogicMods.cpp` (`CreateMod`, `CleanUpMods`, `SpawnActor`, `SpawnLogicMods`, `PostBeginPlayLogicMods`) |
| `MDML.cpp` `FormatPath/GetDataFolder` | `Runtime/Paths.cpp` |
| `MDML.h` class `MDML` | dissolved; `MDML.h` keeps only `UE4::ELevelTick`, `UE4::InitSDK/InitEngineGlobals` and the `EngineDefFinder.h` include, because `src/Engine/EngineInit.cpp`, `Runtime/Dumper.cpp` and `Mods/Mod.h` include it |
| `Platform/HooksManager.cpp` `SetupHooks/ShutDown`, `MsSinceProcessStart`, `GetUObjectCount` | `Bootstrap/Startup.cpp` (`InstallHooks`, `ShutDown`) |
| `Platform/HooksManager.cpp` InitGameState/BeginPlay/Tick/ProcessFunction detours, `AddProcessInternalHook` | `Runtime/GameHooks.cpp` (`InstallGameHooks`, `InstallScriptFunctionHook`) |
| `Platform/HooksManager.cpp` ProcessFunction body (PrintToModLoader, GetPersistentObject, BP wrappers) | `Mods/LogicMods.cpp` `HandleScriptFunction` |
| `Platform/HooksManager.cpp` pak detours, `isPakOverridePathValid` | `Mods/OverwriteMods.cpp` (`InstallPakHooks`) |
| `Mod/ModLoader.cpp` `Mod::GetModsFolder/GetContentFolder` | `Mods/Mod.cpp` |
| `Mod/ModLoader.cpp` `LoadMods` (DLL part), `ResolveLoadOrder` | `Mods/CoreModLoader.cpp` `LoadCoreMods`, `ResolveLoadOrder` |
| `Mod/ModLoader.cpp` `LoadMods` (`[LogicMod]` part), `LoadLogicMod` | `Mods/LogicMods.cpp` `RegisterLogicMods` |
| `Mod/ModLoader.cpp` link-ops block, `CreateSysLinks/DeleteSysLinks` | `Mods/OverwriteMods.cpp` (block kept verbatim between `// BEGIN link-ops` / `// END link-ops`) |
| `Mod/{Mod,ModStack,LoadOrder}.*` | `Mods/…` (same files) |
| – | new `Platform/IniFile.*`, `Runtime/Paths.*`, `Runtime/EngineSetup.*`, `Runtime/GameHooks.*` |

Startup order is unchanged: init thread → loader ini + logs → profile check → NoOverwrite list → "Profile Detected"
→ profile switches → symbols/engine flags/address resolution → "Setup …" → MinHook → overwrite links → pak hooks →
core mod DLLs (load order, BaseMod first) → logic-mod registration → game hooks → UI logic thread (→ DX hook if
`DelayGUISpawn=0`). Log lines are the same apart from the typo fixes listed in §6.

## 2. Namespace map

| Old | New | Notes |
|---|---|---|
| class `MDML` (static members) | dissolved into `mdml::runtime` / `mdml::mods` (see §1) | `MDML::Start/ShutDown/SpawnActor/...` were exported; only `FormatPath`/`GetDataFolder` stay exported |
| `mdml::Hooks`, `mdml::HookStatus`, `mdml::ToString(HookStatus)` | `mdml::platform::…` | |
| `SymbolResolver` (global namespace) | `mdml::platform::SymbolResolver` | shim `namespace SymbolResolver = mdml::platform::SymbolResolver;` for `src/Engine/EngineAddresses.cpp` |
| `mdml::GameThread` | `mdml::runtime::GameThread` | shim `mdml::GameThread` (type alias) for `src/Engine/MDML/GeneratedSupport.cpp` |
| `mdml::Config`, `mdml::LoaderConfig` | `mdml::runtime::Config`, `mdml::runtime::LoaderConfig` | |
| `LoadOrder` | `mdml::mods::LoadOrder` | |
| `HooksManager`, `ModLoader` (namespaces) | gone | |
| new | `mdml::platform::IniFile`, `mdml::runtime::{Start, ShutDown, FormatPath, GetDataFolder, LoadLoaderConfig, LoadProfileConfig, ResolveEngine, InstallGameHooks, ...}`, `mdml::mods::{LoadCoreMods, InitCoreMods, RegisterLogicMods, CreateMod, ..., CreateSysLinks, InstallPakHooks, LoadNoOverwriteList}` | |
| unchanged | `Mod`, `ModStack`, `ModEvent`, `Event`, `EventsEnabled`, `Global`, `ModInfo`, `OverwriteMod`, `Logger`, `Log`, `LoaderUI`, `MEM`, `Pattern`, `UE4::`, everything declared in `src/Engine` (`mdml::Addresses/Layout/LayoutStatus/UnrealLogger/Resolve*`) | public mod types keep their names (§7.4); `MEM`/`Pattern`/`Math.h` are used by `src/Engine` |

The `Bootstrap/` folder uses `mdml::runtime` (no fifth namespace; see open question Q4).

## 3. API changes visible to mods

All in-repo callers (BaseMod, DevTools, PresetMod, TimeWeatherChanger, UI) were updated mechanically.

- `#include "Mod/Mod.h"` → `#include "Mods/Mod.h"`.
- `mdml::Hooks::…` → `mdml::platform::Hooks::…`; `mdml::GameThread::…` → `mdml::runtime::GameThread::…`;
  `mdml::Config` → `mdml::runtime::Config`. (`mdml::GameThread` still compiles through the engine shim; don't use it.)
- `MDML::FormatPath` / `MDML::GetDataFolder` → `mdml::runtime::FormatPath` / `GetDataFolder` (`Runtime/Paths.h`, included by `Mods/Mod.h`).
- **`Mod::ModRef` is gone.** Mod constructors must not set it any more (`ModRef = this;` removed from `GameMod` and
  `DevTools`); `CompleteModCreation()` registers `this`.
- Removed (unused, code inventory §3.3): `Log::ModLogger()` (both overloads), `Log::SetupErrorMessage`,
  `Logger::getLoggerRaw`, `Global::GameName`, `Global::GetBPFunctionWrappers()`, `MEM::GetAddressPTR`.
- `Mods/Mod.h` no longer includes the old `INI.h`. New: `mdml::platform::IniFile` (`Platform/IniFile.h`, exported).
  BaseMod's `GameMod.h` includes `INI.h` itself for now (its `GetINIConfig/SetINIConfig`).
- mod.ini key **`PeristentObjectFile` → `PersistentObjectFile`** (no alias, owner decision 2026-10-13).
- `Mod::Tick` parameter renamed `DelatTime` → `DeltaTime` (name only).

## 4. Event bus: C8 fix

Before: every `ModEvent` held a free function (`CallBackHandler::CallBackTick` …) that called `Mod::ModRef->Tick(...)`;
`ModStack::callEvent` set the process-wide `Mod::ModRef` before each dispatch. The game thread (Tick, BeginPlay,
InitGameState, PostBeginPlay) and the render thread (DrawImGui, SetupImGui, DX11Present, DX11ResizeBuffers) dispatch
concurrently, so a callback could run on the wrong mod.

Now (`Mods/Mod.cpp`, `REGISTER_EVENT`): each event stores a lambda that captures its own mod,
`[mod = this](auto&&... args) { return mod->name(std::forward<decltype(args)>(args)...); }`. No global state is
touched during dispatch. `ModStack::setCurrentMod` is replaced by `ModStack::contains(mod)`, which skips mods that were
popped after an exception (this also fixes C6, which compared against the wrong end iterator).
Semantics kept: events run in registration order, **returning `true` stops propagation** (decision 2026-10-09), a
throwing mod is popped from the stack.
Also fixed in the same file: `clearModEvents` erased from the vector it range-iterated (C5, UB); it uses
erase/remove_if now. Removed events are still not deleted (registration is not synchronized with dispatch, see Q7).

## 5. INI wrapper (`mdml::platform::IniFile`)

Backend: mINI 0.9.20, header-only, included only by `Platform/IniFile.cpp` (pimpl), compiled with
`MINI_CASE_SENSITIVE`. Exported with `LOADER_API`; mods need no extra include directory.

```cpp
mdml::platform::IniFile ini(path);           // or IniFile ini; ini.Load(path);  (missing file: IsLoaded() == false)
ini.HasSection("Mod");  ini.Has("Mod", "DLLPath");
ini.Get("Mod", "DLLPath", "Default.dll");    // std::string, trimmed
ini.GetInt(s, k, 0);  ini.GetBool(s, k, false);  ini.GetFloat(s, k, 0.0f);
ini.Set(s, k, "v");  ini.SetInt / SetBool ("1"/"0") / SetFloat;  ini.Remove(s, k);  ini.RemoveSection(s);
ini.Sections();  ini.Keys(s);                // names as written, file order
ini.Save();  ini.SaveAs(otherPath);          // nothing is written before Save()
```

Behaviour (also documented in `IniFile.h`):
- **Sections are explicit in every call**; there is no selected section any more.
- **Case**: exact match first, then the first case-insensitive (ASCII) match. `Set` on an existing name keeps the
  spelling in the file; new names are written as given. (The old parser was case-sensitive; mINI's default would have
  lower-cased every name on save. See Q1.)
- **No exceptions escape.** Unreadable/unwritable files and values that do not parse are logged
  (`Log::*_MDML`, or `OutputDebugString` before `Log::Init`), getters return the default. A missing file is not logged.
- **Typed getters** read the first word of the value (up to whitespace or `;`). Extra text is ignored with a warning,
  so `UseConsole=1 ; comment` still reads 1. `GetInt`: decimal with optional sign (the old `getAs<int>` returned 0 for
  garbage, now the default + warning). `GetBool`: 1/0, any other integer (≠ 0 = true), true/false, yes/no, on/off.
  `GetFloat`: locale-independent (`from_chars`).
- **Save** is mINI's lazy write: comments, blank lines and the order of untouched lines are kept, removed keys and
  sections disappear, new keys are appended to their section, new sections at the end, UTF-8 BOM kept. Two mINI quirks:
  key lines before the first section are dropped on save, and with duplicate `[Section]` blocks every block gets the
  updated/new keys.
- Duplicate sections are merged, a repeated key keeps the last value (same as the patched old parser).
- Not thread-safe per instance; separate instances on separate threads are fine (the old parser had static parse
  flags shared by all threads).

Offline test (scratch harness, not committed): BOM, comment styles, duplicates, case, typed getters, Set/Remove/Save
round trip, missing file + Save — all pass.

### For mod authors (mod.ini, ModLoaderInfo.ini)

- Comments are **whole lines starting with `;`** only. `#` and `//` are no longer comments, and a `;` **after a value
  belongs to the value** (`DLLPath=Foo.dll ; my mod` now means the file `Foo.dll ; my mod`). The old parser cut the
  line at any `;`, `#` or `//` (which also broke values containing `//` or `#`). A comment after a section header is
  fine: `[Mod] ; comment`.
- Keys must be inside a section. Section/key names are case-insensitive (exact spelling preferred).
- Values may contain `=`; surrounding whitespace is ignored.
- The logic-mod key is `PersistentObjectFile` (was the misspelled `PeristentObjectFile`).
- All in-repo ini files already follow these rules (checked: `Config/ModLoaderInfo.ini`, all `Mods/**/mod.ini`,
  `Tests/OverwriteBackupTest/mod.ini`).

### Old INI section quirk (code inventory §4.6): what each caller reads now

| Caller | Reads | Explicit behaviour |
|---|---|---|
| `LoaderConfig.cpp` `IsDirectX11` | `GameUserSettings.ini [D3DRHIPreference] bUseD3D12InGame` | only if the section exists (as before) |
| `LoadLoaderConfig` | `[General] LogDir`, `[DEBUG] UseConsole`, `[DEBUG] UseDebugUI`, `[General] Profile` | `LogDir` only if `[General]` exists (as before); `UseDebugUI` relied on `DEBUG` still being selected → now named |
| `LoadProfileConfig` | `[Overwrites]` else `[Overrides]`: `Enabled`, `UseHardLinks`; `[GameInfo] DelayGUISpawn, BeginPlayOverwrite`; `[PakOverwrite] bPakOverwrite` | same precedence as `select("Overwrites") \|\| select("Overrides")`; pak flag only if the section exists |
| `EngineSetup.cpp` | `[Symbols] UsePdb` (default 1), `[GameInfo] UsesFNamePool, IsUsingFChunkedFixedUObjectArray` | the `src/Engine` `Resolve*` functions still get the **old `INI` object** of the same profile and select their own sections; `ResolvePakFunctions` does not, so `EngineSetup` selects `[PakOverwrite]` before calling it (exactly what the old caller left selected) |
| `CoreModLoader.cpp` | mod.ini `[Mod] DLLPath` | only folders with a `[Mod]` section have a DLL (as before) |
| `LogicMods.cpp` | mod.ini `[LogicMod] ModName, ActorFile, ActorPath, PersistentObjectFile, PersistentObjectPath` | |
| `OverwriteMods.cpp` | mod.ini `[Overwrites]` else `[Overrides]`: `Enable, Name, Author, Description, Folder` | same precedence (note: mod.ini uses `Enable`, the profile `Enabled`) |
| `LoadOrder.cpp`, NoOverwrite.ini parser | own line parsers, unchanged | `LoadOrder.ini` is sectionless (mINI ignores keys outside sections); NoOverwrite.ini is a large path → bool list read into a map |

Still on the old parser (not 3A files): `src/Engine/EngineAddresses.cpp` (incl. its `[ProcessInternalFunction]`
section that never exists), BaseMod `GameMod.h` `GetINIConfig/SetINIConfig`, `Tools/ModManager`. `Dependencies/INI`
stays until they move.

## 6. Dead code removed, small fixes

Removed (UML-era multi-game paths, owner decision 2026-10-09; code inventory §3.1/§3.3):
- `SpawnActor`'s deferred-spawn branch (`IsUsingDeferedSpawn` → `BeginDeferredActorSpawnFromClass`); key removed from
  `Config/ModLoaderInfo.ini`.
- `CreateMod`'s ProcessInternals fallback through the mod actor's `PostBeginPlay`/`ModMenuButtonPressed` `Func`
  (`IsUsing4_22`). ProcessInternals comes from the PDB or the profile pattern.
- Profile reads of `IsUsingDeferedSpawn`, `IsUsing4_22`, `IsDefaultObjectArrayed` (fields stay false in `src/Engine`).
- The manual offset sections `[UObjectDef] [UFieldDef] [UStructDef] [UEnumDef] [UFunctionDef] [Property] [FField]
  [FFieldClass]` (never in the shipped profile; incl. C2). `LayoutStatus.IsPropertyMissing = true` is now set
  unconditionally — the same value the old code set when `[Property]` was absent.
- `std::ifstream file("Profile")` no-op, `CallBackHandler`, `Log::ModLogger`, `Log::SetupErrorMessage`,
  `Logger::getLoggerRaw`, `Global::GameName`, `Global::GetBPFunctionWrappers`, `MEM::GetAddressPTR`.

Typos (hard rename, no aliases): mod.ini key `PeristentObjectFile` → `PersistentObjectFile` (also in
`Mods/Examples/PresetMod/Config/mod.ini` and `docs/guides/Modding.md`), `PeristentObject`/`PersintentObjectPath`
parameters, default `"Uknown"` → `"Unknown"` (overwrite mod name/author/description), log text `Sucessfully` →
`Successfully`, `Could not deleted` → `Could not delete`, generated NoOverwrite.ini header (`disbale`, `overwriding`,
`insted`), comments in `Mod.h`.

Small fixes (listed bugs in my files, behaviour only differs in the broken case):
- B8: default `LogDir` was an absolute path that got the MDML folder prepended again.
- B9: `StringToDWord` read out of range for strings shorter than 2 characters.
- C3: `"Mod {0} wasnt setup in time"` lost the mod name (comma operator).
- C24: `SHGetKnownFolderPath` result unchecked/never freed.
- C5/C6: see §4.
- New, found while porting: an empty `[LogicMod] ActorFile`/`PersistentObjectFile` became `<mod folder>/` (exists), so
  a bogus actor/persistent object was registered for the folder itself; an empty/missing overwrite `Folder` linked
  **every file of the mod folder** (mod.ini, DLL, …) into `Content`. Both now count as "not set".
- `std::string::_Starts_with` (MSVC internal) → `rfind(x, 0) == 0` in my files.

## 7. Deliberately left

- `Global` (mod registry singleton: `ModInfoList`, `CoreMods`, `BPFunctionWrappers`, `OverwriteMods`, `bIsMenuOpen`)
  keeps its name and global namespace: mods and the UI use it (`REGISTER_FUNCTION`, BaseMod's load-order check). Q3.
- `Logger`/`Log` unchanged (public names). B5/B6/B7 (Logger ownership bugs) and the `*_UML` aliases (used by
  `src/Engine`) belong to the logger rework (plan 2.6/Wave 4).
- `Platform/Memory.h`, `Pattern.h`, `Math.h` keep `MEM::`, `Pattern::` and the `std` operator overloads: `src/Engine` uses them.
- `UsesFNamePool` / `IsUsingFChunkedFixedUObjectArray` are still read from the profile: the core branches on them until 3D removes the non-pool/non-chunked paths.
- `[General] Profile` indirection (separate profile file) and `BeginPlayOverwrite`/`ACustomClass` (Q5, Q8).
- Event registration is not synchronized with dispatch (Q7); C7 (silent drop on argument-type mismatch, `/EHa`
  catching access violations) and C4 (`EnabledEvents` never sets `PostBeginPlay`, Q6).
- `Core.h` still pulls in `<regex>`, `<execution>`, `<xhash>` … (PCH; C++20 wave).
- UI: only mechanical renames; `LoaderUI.cpp` still includes `MDML.h` and `Globals.h`.
- `GameThread`/`Hooks` code itself unchanged apart from the namespace.

## 8. Follow-ups for the orchestrator (cross-package)

**Merge with 3D (`src/Engine`)**, the 3A side touches these engine names and must be adapted if 3D renames/removes them:
`Runtime/EngineSetup.cpp` (`mdml::Addresses.UsesFNamePool`, `.IsUsingFChunkedFixedUObjectArray`,
`mdml::LayoutStatus.IsPropertyMissing`, `mdml::Resolve{EngineGlobals,EngineFunctions,PakFunctions}(INI&)`),
`Bootstrap/Startup.cpp` `ShutDown` (assigns `mdml::Addresses/Layout/LayoutStatus/UnrealLogger`) and `GetUObjectCount`,
`Mods/LogicMods.cpp` (`mdml::Addresses.StaticLoadObject/ProcessInternals`), `Runtime/GameHooks.cpp` (hook targets,
`UE4::ACustomClass`).

For 3D / the engine owner:
1. `EngineAddresses.cpp`: take `const mdml::platform::IniFile&` instead of `INI&`; then delete the legacy `INI`
   object in `Runtime/EngineSetup.cpp` and `"%{IncludeDir.INI}"` in `ModLoader.lua`. Drop the raw-offset mode and with
   it the global `StringToDWord` (declared in `EngineAddresses.cpp`, defined in `Runtime/EngineSetup.cpp`). The
   `[ProcessInternalFunction] ProcessInternal` read there always uses its default (section never exists).
2. Shims to remove once `src/Engine` uses the new names: `namespace SymbolResolver = mdml::platform::SymbolResolver;`
   (`Platform/SymbolResolver.h`, used by `EngineAddresses.cpp`) and `mdml::GameThread` alias (`Runtime/GameThread.h`,
   used by `Engine/MDML/GeneratedSupport.cpp`, whose warning text also says `mdml::GameThread::Enqueue`).
3. Remove the now unused fields `IsUsingDeferedSpawn`, `IsUsing4_22`, `bIsDefaultObjectArrayed` (+ the `Class.h`
   branch) and `LayoutStatus.IsPropertyMissing` handling; hard-code or drop `UsesFNamePool`/`IsUsingFChunkedFixedUObjectArray`
   (then remove their reads in `EngineSetup.cpp` and the keys in `Config/ModLoaderInfo.ini`).
4. Move `UE4::ELevelTick` and the `InitSDK/InitEngineGlobals` declarations from `MDML.h` into `src/Engine`, then
   delete `MDML.h` (includers: `Engine/EngineInit.cpp`, `Runtime/Dumper.cpp`, `Mods/Mod.h`, `UI/LoaderUI.cpp`).
5. Stale comments in `src/Engine` mentioning `SetupProfile`, `MDML.cpp` or `HooksManager`: `EngineAddresses.h/.cpp`,
   `EngineLayout.h`, `UE4/UE_LOG.h` (the code moved to `Bootstrap/Startup.cpp` / `Runtime/EngineSetup.cpp`).

For 3C (Mods/DevTools/Dumper): BaseMod `GameMod::GetINIConfig/SetINIConfig` → `IniFile` and drop the `#include "INI.h"`
added to `GameMod.h`; `Runtime/Dumper.cpp` `DumpEngineInfo` writes the manual offset format nobody reads any more;
`Dumper.cpp` includes `MDML.h`/`Globals.h` without using them. `Tools/ModManager/src/Application.h` still uses `INI.h`.
When all are gone: remove `Dependencies/INI` and its THIRD_PARTY_LICENSES entry.

For 3B (UI): `mdml::ui` namespace; `LoaderUI` still uses `Global` directly and includes `MDML.h`.

Docs (orchestrator-owned): `CLAUDE.md` layout rows (bootstrap is `src/Bootstrap/`, `HooksManager` and `src/Mod/` are
gone, `Runtime/` lists GameHooks/EngineSetup/Paths, `Dependencies/` list gains `mINI`); `MODERNIZATION_PLAN.md`
says `Config::IniFile` — the wrapper is `mdml::platform::IniFile` as specified for this package; `docs/guides/Modding.md`
could get the comment rules from §5 and the new namespaces (I only fixed the `PersistentObjectFile` key there).
Already updated mechanically: `Tests/OverwriteBackupTest/README.md` (link-ops now in `Mods/OverwriteMods.cpp`),
`Tools/RE/check_patterns.py` (read `namespace Symbols` from `MDML.cpp`, broken since Wave 2.4 → now
`Engine/EngineAddresses.cpp`).

### In-game test (one test with 3D)

Before deploying, check the **game's** `Binaries/Win64/Config/ModLoaderInfo.ini` and the installed mods' `mod.ini`
(the deploy never overwrites them) for `#`/`//` comments or comments after a value, and for `PeristentObjectFile`.
Then check: log shows the same startup sequence (version lines, symbols, "Enabled Mod overwrites", "Pak overwrites
loaded", BaseMod loaded first, "Loader setup finished"); F1 UI opens (UseDebugUI read from `[DEBUG]`); BaseMod and
DevTools events fire (Tick/DrawImGui on the right mod); overwrite links created and removed on exit; logic-mod spawn
(if any installed) and `PrintToModLoader`.

## 9. Open questions for the owner (with recommendation)

- **Q1 INI name case.** Implemented: exact match, then case-insensitive; names keep their spelling on save.
  Alternatives: strictly case-sensitive (old behaviour) or mINI's default (lower-cases names on save).
  Recommendation: keep the implemented variant (INI/UE convention, no surprises when saving).
- **Q2 Comments after values.** mINI keeps `; …` as part of the value (decision: only `;` lines). Typed getters
  already ignore trailing text with a warning, `Get()` does not. Recommendation: keep it strict and documented;
  optionally warn in `Get()` when a value contains ` ;`.
- **Q3 `Global`.** Keep as the public registry type, or move it to `mdml::mods` (e.g. `mdml::mods::Registry`) with the
  public mod API (`include/MDML`)? Recommendation: keep until the public API header split, then rename once.
- **Q4 `Bootstrap/` namespace.** Uses `mdml::runtime` (the four decided namespaces). Alternative `mdml::bootstrap`.
  Recommendation: keep `mdml::runtime`.
- **Q5 `[General] Profile`.** The profile is a second ini (today the same file). Drop the indirection and read
  everything from `ModLoaderInfo.ini`? Recommendation: yes, together with 3D's removal of the pattern sections.
- **Q6 C4 `EnabledEvents::PostBeginPlay`.** The 8-argument constructor never sets it, so every preset registers
  PostBeginPlay. Tie it to `BeginPlay`, add a 9th argument, or leave? Recommendation: tie it to `BeginPlay`.
- **Q7 Event-bus thread safety.** `SetupHooks`/`clearModEvents` (game thread) can run while the render thread
  dispatches. Add a shared lock (dispatch shared, registration exclusive, pops deferred)? Recommendation: yes, before
  hot reload; removed events can then be deleted safely.
- **Q8 `BeginPlayOverwrite`.** UML option, always `PlayerController`. Hard-code `APlayerController::StaticClass()` and
  drop the key + `ACustomClass`? Recommendation: yes (with 3D).
