# Load order (`Config/LoadOrder.ini`) and dump notices

Date: 2026-10-10. Code: `ModLoader/src/Mod/LoadOrder.{h,cpp}`, `ModLoader/src/Mod/ModLoader.cpp`, `ModLoader/src/Utilities/Dumper.{h,cpp}`, `ModLoader/src/UI/LoaderUI.cpp`.

## 1. Load order

### Behaviour
- File: `<MDML.dll dir>/Config/LoadOrder.ini` (next to `ModLoaderInfo.ini` / `NoOverwrite.ini`; the folder is derived from `mdml::Config.NoOverwriteFile`, never from the working directory).
- It is resolved once, lazily, by the first of `CreateSysLinks()` (runs before `LoadMods`, only when overwrites are enabled) or `LoadMods()`. Both then use the same cached result.
- Mod discovery (names): every folder under `Content/Mods` that has a `mod.ini` or a `<Folder>/<Folder>.dll`, plus loose `*.dll` files directly in `Content/Mods` (name = file stem).
- Mods not yet in the file are appended as `Name = 1` (BaseMod first, then alphabetical case-insensitive) and the file is rewritten (temp file + rename). Existing lines, comments and ordering are never touched; the file is only written when something was added.
- Core DLL mods are loaded in file order (top = first). Several DLLs of one mod keep alphabetical order among themselves. A mod that is somehow not in the list sorts last.
- BaseMod is always loaded first, wherever it stands in the file (warning logged if it is not the first entry).
- Entries of mods that are no longer installed stay in the file untouched; one info line per entry is logged.

### File format
```
; MDML load order (top = first)
; Name = 1 (enabled) / 0 (disabled), Name = mod folder under Content/Mods
BaseMod = 1
TimeWeatherChanger = 1
PresetMod = 0
```
- Comments: lines starting with `;` or `#`, blank lines. A trailing `; comment` after the value is allowed.
- Values: `1/true/yes/on` = enabled, `0/false/no/off` = disabled. Anything else: warning, treated as enabled.
- Names are matched case-insensitively; duplicate names: first wins (warning). Lines without `=` are ignored (warning).
- Not shipped in `Config/` (postbuild copies `Config/` over the deployed one, which would overwrite the user's order); it is generated on first run.

### Interaction with logic and overwrite mods
A `0` entry disables the whole mod folder, consistently in all three code paths:
- DLL core mod: not loaded.
- Logic mod (`[LogicMod]` in `mod.ini`): not registered in `ModInfoList` (log: "Logic mod X is disabled in LoadOrder.ini").
- Overwrite mod (`[Overwrites]`/`[Overrides]`): no links are created in `CreateSysLinks` and it does not show up in the UI list (log: "Overwrite mod X is disabled in LoadOrder.ini, no links created").
The order itself only applies to DLL core mods. Logic mods are registered in directory order as before, overwrite links are created in directory order (later mod wins on a conflict) as before.

### Decisions taken (owner may veto)
1. Name = mod folder name (loose DLLs: file stem), not the `Name=` of `[Overrides]`/`ModName` of `[LogicMod]`.
2. Disabled = whole folder (DLL + logic + overwrites). Order = DLL core mods only.
3. Missing-mod entries are kept as they are in the file (not commented out), info line only.
4. BaseMod is pinned first at load time but the file is not rewritten to move it. `BaseMod = 0` is honoured (with a warning) rather than ignored.
5. Invalid values count as enabled.
6. Folders without `mod.ini` and without `<Folder>/<Folder>.dll` (e.g. pure pak folders) are not listed.
7. The simple parser is self-contained; to be swapped for the `mINI`-backed `Config::IniFile` later (only `LoadOrder::Merge` parses).

### In-game test steps
1. Delete `Config/LoadOrder.ini` next to the deployed `MDML.dll`, start the game. Expect log: `added new mod BaseMod` ..., `Wrote <path>\LoadOrder.ini`; the file lists all mods, BaseMod first; the F1 window lists the same core mods; startup works as before.
2. Set a mod to `0` (e.g. `PresetMod = 0`), restart. Expect `Mod PresetMod is disabled in LoadOrder.ini` and the mod absent from the F1 core/logic/override lists. For an overwrite mod: no links (`Created N links` smaller, no "Created link to" for it).
3. Reorder two mods, restart. Expect `Loading mod ...` lines in that order (BaseMod first).
4. Put BaseMod in the middle: expect warning `BaseMod is not the first entry, it is loaded first anyway`, BaseMod still first.
5. Add a new mod folder: it is appended with `= 1` and an info line is logged; remove a mod folder: `... is not installed, keeping its entry`.

### Offline test (throwaway harness, not committed)
`LoadOrder::Merge` compiled standalone with a stub logger, 5 scenarios, all as expected: missing file (header + BaseMod, then alphabetical), the owner's preview plus a new mod (appended, comments and order kept, `PresetMod = 0` kept), misplaced BaseMod/case differences/missing mod/comments/no trailing newline (file unchanged, BaseMod rotated to front, warning), bad lines (invalid value, no `=`, duplicate, inline comment, disabled BaseMod), and an unchanged file (no rewrite). `Resolve`/`ScanMods` (filesystem) and the sorting in `LoadMods` were only build-tested.

## 2. Dump notices
- `Log::SetupMessage` calls in `Dumper.cpp` (object, engine info, world actors dump) are gone. They now call `DumpNotice::Set(text)` (`Dumper.h`): logs an `Info_MDML` line ("Object dump written to <abs path>") and stores text + timestamp under a mutex (dump runs on the game thread, the UI reads on the render thread).
- `LoaderUI.cpp` `DrawImGui` shows the text in green below the version lines of the F1 window, fully visible for 6 s and fading out over 2 s more. It is outside the collapsible "Tools" header so it is visible without opening it.
- Remaining `SetupMessage` callers, left on purpose (not in this package's files or no alternative): `LoaderUI.cpp:514` ("Cant enable MDML UI": the UI is unavailable, so a message box is the only channel) and `BaseMod/src/Utils.h` (lines ~197 "Actors functions Dump Complete" and ~1002 "Export done", the SDK exporter; BaseMod is another owner/package). `Log::SetupMessage` itself stays in `Logger.h` for them; `SetupErrorMessage` is unchanged. Possible follow-up: route the BaseMod ones through a loader-exported notice API.
- Dump paths are relative to the working directory (`Binaries/Win64`), the notice shows the absolute path.
- Previously the object dump also logged `Info_UML("Object Dump Complete!")`; replaced by the `Info_MDML` line above.

### In-game test steps
Press F1, click "Dump Objects" / "Dump Engine Info" / "Dump World Actors" (Tools). Expect: no message box, focus stays in the game; a green line "... dump written to <...>\Dump\..." in the F1 window for ~8 s; a matching log line; the file exists.

## 3. Open questions
- Should loose/pak-only folders (no `mod.ini`, no DLL) be listed in the file? Currently not.
- Should `BaseMod = 0` be impossible (ignored) instead of honoured with a warning?
- Should logic mods get an order too (currently directory order)? Does anything depend on their registration order?
- Replace the `BaseMod` `SetupMessage` boxes the same way (needs a small exported API or a BaseMod UI line).
