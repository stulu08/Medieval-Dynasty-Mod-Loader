# Mod components, phase 1 ("Mod model") - report

Date: 2026-10-15, branch `modernize` (base 825cc12), **working tree only: not committed, not deployed, game never started.**
Design: `docs/design/mod-components.md` (phase 1 row of section 10; deviations in its section 12, owner questions in section 11).

## What changed
**Public API (`Loader/ModLoader/include/MDML`)**
- `CoreMod.h` (new): the old DLL base class `Mod`, renamed `CoreMod`. `OnLoad(ModContext&)`, `OnUnload()` (called at engine exit, see the follow-ups at the end), `OnModMenuButtonPressed()`,
  the old event virtuals and `SetupHooks`/`EventsEnabled` unchanged. Metadata members (`ModName`, `ModVersion`, `ModAuthors`, `ModDescription`,
  `ModLoaderVersion`, ..., `CreateLogger`, `LogToFile`, `IsFinishedCreating`) and `CompleteModCreation()` are gone; `GetMod()`, `GetName()`, `GetFolder()` (now the mod folder),
  `UseMenuButton` (from `[Core] MenuButton`), `logger` (from `[Core] Logger`). `MDML_MOD(Class)` exports `MDML_CreateMod` + `MDML_ModLoaderVersion` + `MDML_MedievalVersion`.
- `Mod.h` (rewritten): `Mod` container (`Info()`, `Core()`, `Blueprint()`, `Overwrite()`), `ModInfo`, `BlueprintMod`, `OverwriteMod`/`OverwriteFile`, `ModContext`.
- `GameMod.h`: derives from `CoreMod`, constructor without handle. `Mods.h`: `ForEachMod(fn(Mod&))`, `FindMod` -> `Mod*`, `MoveToFront(CoreMod*)`. `MDML.h`, `Version.h`, `Paths.h`, `Log.h` comments/includes.

**Loader (`Loader/ModLoader/src`)**
- `Mods/Registry.{h,cpp}`: one `std::vector<std::unique_ptr<Mod>>`, `LoadPhase`, friend helper `ModAccess`; the old `ModInfoList`/`OverwriteMods`/logic-mod structs are gone.
- `Mods/ModLoading.{h,cpp}` (was `CoreModLoader`): phase 0 `ScanMods`, phase 1 `LoadCoreMods` (LoadLibrary, `MDML_CreateMod`, version stamps, logger, `OnLoad`), `InitCoreMods` (phase 4).
- `Mods/CoreMod.cpp` (was `Mod.cpp`), `Mods/ModContext.cpp` (new: `Mod` ctor/dtor, `ModContext`), `ModStack` now holds `CoreMod*`.
- `Mods/OverwriteMods.cpp`: `CreateSysLinks` (phase 2) links the final `OverwriteMod::Files` lists; link/backup logic untouched. `Mods/LogicMods.cpp`: `RegisterBlueprintMods` (phase 3), spawn/cleanup/PostBeginPlay on `BlueprintMod`; BP metadata variables no longer read.
- `Bootstrap/Startup.cpp`: order is now scan -> cores -> overwrite links -> pak hooks -> Blueprint registration. `UI/LoaderWindow.cpp`: one "Mods" list with Core/Blueprint/Overwrite sub-nodes. `Mods/LoadOrder.cpp`: only folders with a `mod.ini` are listed.

**Mods**
- DevTools, PresetMod, TimeWeatherChanger ported (no `DllMain`, `MDML_MOD(...)`, metadata in `mod.ini`, new `mod.ini` format). DevTools stays off by default (its `[Core]` and `[Overwrite]` are commented out).
- New test mod `Tests/OverwriteTest` (first in `Mods/Examples`, moved to `Tests/` after the owner answers; premake project in group "Tests", `Dependencies.lua` `ProjectDir`, deploys to `Output/Tests/OverwriteTest`): Core + Overwrite; `OnLoad` adds `Extra/AddedByCore.txt` as `MDMLTest/AddedByCore.txt`, `[Overwrite] Folder=Files` gives `MDMLTest/FromFolder.txt`; `InitializeMod` logs whether both exist in `Content` ("linked" / "MISSING") and how many files the loader linked.
- `Tests/OverwriteBackupTest/mod.ini` converted to the new format.

**Docs:** `docs/design/mod-components.md` (status, sections 11 + 12), `docs/MODERNIZATION_PLAN.md`, `docs/ARCHITECTURE.md`, `docs/guides/Modding.md`, `CLAUDE.md`.

## Build
`MSBuild.exe MDML.slnx -m -p:Configuration=Release -p:Platform=x64` (VS 2026 / v145, as in `CLAUDE.md`; after `premake5.exe vs2026` for the new project):
**0 warnings, 0 errors.** `Tools/RE/check_layout.py`: 165 constants, 0 mismatches (engine layout untouched). Exports of the four mod DLLs checked
(`MDML_CreateMod`, `MDML_ModLoaderVersion`, `MDML_MedievalVersion`). Nothing was run in the game.

## Deploying for the owner test (nothing was copied by me)
From `Output/ModLoader/` (do **not** copy the stale `Output/ModLoader/Mods/BaseMod`, it is an old build leftover):
- `MDML.dll`, `MDML.pdb` (next to the game exe, as before). `xinput1_3.dll` is unchanged.
- `Mods/DevTools/` (`DevTools.dll/.pdb` + the **new `mod.ini`**; the installed one has the old `[Mod] DLLPath` and would be skipped as "no component"). To enable DevTools remove the `;` before `[Core]`, `Dll`, `MenuButton`.
- `Mods/TimeWeatherChanger/` (dll + **new `mod.ini`**: it keeps your `[Config]` values; copy them over if you changed them), `Mods/PresetMod/` (dll + new `mod.ini`), `Mods/OverwriteTest/` (copy the whole `Output/Tests/OverwriteTest` folder; it is no longer in `Output/ModLoader/Mods`).
- `Config/` is untouched (`LoadOrder.ini` gets `OverwriteTest` appended automatically).
Back up the game state first as usual.

## In-game test checklist
1. Startup log (`MDML` log): "Scanned N mod(s)", one `Mod <name> <version> (<folder>): Core ...` line per mod, then `Loading mod ...` / `Loaded mod ...` per core, `Loaded N core mod(s)`, then `Created N hard links` (phase 2), then "Registered Mod Actor ..." lines only for Blueprint mods. No errors or warnings.
2. `OverwriteTest`: `Logs/OverwriteTest-log.txt` says `OnLoad: AddOverwriteFile(...) = true, 2 overwrite file(s) now`; in the main-menu/first InitGameState it says `MDMLTest/FromFolder.txt: linked`, `MDMLTest/AddedByCore.txt: linked`, `Linked by the loader: 2`; both files exist in `Medieval_Dynasty/Content/MDMLTest/` while the game runs and the folder is empty/removed files are gone after a clean exit (`Deleted 2/2 file links`).
3. TimeWeatherChanger: loads, its F1 button and window work, log `Logs/TimeWeatherChanger-log.txt` exists, settings from `mod.ini [Config]` apply in a loaded save (weather/fog/wind).
4. PresetMod: loaded, `Logs/Your Mod-log.txt` shows "Your Mod loaded, N mod(s) in the list", "Hello World" window via its F1 button.
5. DevTools (after enabling `[Core]` in the installed `mod.ini`): window opens, object browser, INI browser, player tools, Generate SDK still work; log `Logs/DevTools-log.txt`.
6. F1 window: one "Mods" header, each mod with Created By / Description / Version and Core (button) / Blueprint / Overwrite nodes; OverwriteTest lists its 2 linked files. A Blueprint mod (if you have one) still spawns, its buttons work, `PostBeginPlay` fires.
7. Break test (optional): put `Foo/mod.ini` with only `[Mod]` -> log line "declares no [Core], [Blueprint] or [Overwrite] section, skipped"; set `Dll=Missing.dll` in a copy -> error line, game still starts.
8. **Quit the game normally -> each core logs OnUnload**: `MDML` log shows "Engine exit: calling OnUnload on the core mods (reverse load order)", then one `OnUnload: <mod>` line per core, last-loaded mod first (the reverse of the "Loaded mod" lines), then "OnUnload finished for N core mod(s)"; no `OnUnload threw`; no warning "FEngineLoop::Exit not found"; the game still exits cleanly (hook runs before `GEngine->PreExit()`). Also check that a level change/load does NOT log OnUnload.
9. Failed mod (optional): in a copy of a mod set `Dll=Missing.dll` -> log "Mod X FAILED, the whole mod is dropped ...", the copy's Overwrite/Blueprint parts are not linked/registered, F1 lists it as `[FAILED]` with the reason.
10. Clean quit; `OverwriteBackupTest` fixture still works with its new `mod.ini` (`Tests/OverwriteBackupTest/README.md`) if you use it.

## Deviations
See `docs/design/mod-components.md` section 12 (stable `unique_ptr` list instead of `vector<Mod>`; public component structs; Content-relative overwrite paths; per-component freeze; `OnUnload` hook added later; startup order; defaults). Also:
- The owner experiment in `Mods/Examples/TimeWeatherChanger/TimeWeatherChanger.cpp` (`BP_HoldableItem_Longbow.hpp` include and `UE4::ABP_HoldableItem_Longbow_C bw;`) was **not in the file** when I started (`git diff` was empty although `git status` listed it as modified; only stale stat info). Nothing was removed; if you still have the lines elsewhere, re-add them (the port touched only the constructor, `UseMenuButton` line and `dllmain.cpp`).
- `git mv` was used for three renames (`Mod.cpp` -> `CoreMod.cpp`, `CoreModLoader.{cpp,h}` -> `ModLoading.{cpp,h}`), so those are staged; nothing is committed.

## Owner answers and follow-ups (2026-10-15)
The 7 questions of design section 11 are answered; all follow-ups are implemented (section 12 of the design doc): `OnUnload` through a hook on `FEngineLoop::Exit`
(reverse load order, exception-safe, once; missing symbol = warning), a failed core drops the whole mod (F1 shows `[FAILED]`), test mod moved to
`Tests/OverwriteTest` (`Output/Tests/OverwriteTest`), `Tools/ModManager` (`ModScanner` + tests) reads the new sections. Kept as is: `OnLoad` order (later cores are
null during an earlier `OnLoad`, documented in `docs/guides/Modding.md`), Blueprint metadata/`ActorPath` removal, `Enable=` removal.
Rebuild after the follow-ups: full solution Release x64, 0 warnings, 0 errors (full `-t:Rebuild`); `ModManagerTests.exe` all passed (run it from PowerShell/cmd,
not from Git Bash: its zip test shells out to `tar`, and Git's GNU tar fails on `C:\` paths).
