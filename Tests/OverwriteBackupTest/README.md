# OverwriteBackupTest

Manual test fixture for the overwrite-mod backup feature (`.mdml-backup`, `ModLinks.bin`; code in
`Loader/ModLoader/src/Mod/ModLoader.cpp`, `CreateSysLinks` / `DeleteSysLinks`). Not part of the build, not shipped.

- Test file: `Medieval_Dynasty\Content\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma` (loose, not in a pak, 10118 bytes,
  sha256 `6eae822a...0b159`). It is a Razer Chroma keyboard-lighting animation, only read by the Chroma SDK when Razer
  hardware/Synapse is active. The replacement is a 122-byte text file (sha256 `c739bec5...b2907`), so the swap is
  verifiable by hash/size/content only, not visible in-game. **Owner decision:** if you own Razer hardware, tell us; the
  replacement is not a valid animation (it would only matter for the "damage from cold" keyboard effect).
- The game does not open this file at startup, so renaming it should not hit a sharing violation. It is listed as
  `=true` in `Config\NoOverwrite.ini`, i.e. the pak hooks leave it to the engine's default loose-file handling.
- No DLL: `LoadMods` accepts a mod folder with `mod.ini` and no `[Mod]` section (nothing gets injected), and
  `CreateSysLinks` only needs `[Overrides]` + `Enable=True` + `Folder`.
- Current profile uses hard links (`UseHardLinks=1`). To also test symlinks, set `UseHardLinks=0` (needs Developer Mode or
  admin on Windows, otherwise link creation fails, see REVIEW.md finding 1). Since the fix this no longer loses the original: the log shows
  `Could not create link ... skipping it` followed by `Restored original file ...` and the game starts normally without the mod file.

`GAME` below = `E:\SteamLibrary\steamapps\common\Medieval Dynasty`, `MD` = `%GAME%\Medieval_Dynasty`.

## 0. Preconditions
1. Game not running. `python check.py "%GAME%"` prints `STATE: ORIGINAL`. If not, stop and fix first (section 5).
2. `Content\Mods\BaseMod\mod.ini` has `[Overrides] Enable=False` (otherwise BaseMod's pak assets get linked too, which
   confuses the counts below: expect `Created 1 hard links` only with BaseMod disabled).
3. Optional safety copy: `copy "%MD%\Content\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma" <somewhere outside the game>`.
   Steam "Verify integrity of game files" also restores it at any time.

## 1. Deploy (orchestrator)
Copy this whole folder (excluding `README.md`, `REVIEW.md`, `check.py`, `.gitattributes` is fine to include) to
`%MD%\Content\Mods\OverwriteBackupTest\` so that these exist:
```
Content\Mods\OverwriteBackupTest\mod.ini
Content\Mods\OverwriteBackupTest\OverrideContent\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma
```
Use a binary-safe copy (the file must stay 122 bytes). `python check.py "%GAME%"` must still say `ORIGINAL` and
`Mod dir ... present`.

## 2. Test A: normal run (owner)
Owner: start the game, reach the main menu, wait ~30 s, then quit normally (menu -> Exit). Nothing else.

During the run (orchestrator, game still running), `python check.py "%GAME%"` must show:
- `STATE: LINKED`
- target: size=122, hash `c739bec5..` [mod file], `hard link (nlink=2)` (or SYMLINK in symlink mode), same file as mod source: True
- backup: `Cold_Hit_Keyboard.chroma.mdml-backup`, size=10118, hash `6eae822a..` [original], plain file
- `Config\ModLinks.bin` exists, one entry: the target path (it contains a doubled backslash before `ChromaSDK`, that is expected)

`Logs\MDML-log.txt` (current run) must contain, in this order:
```
[..][MDML]: Enabled Mod overwrites using Hard links
[..][MDML]: Loading Mods
[..][MDML]: Backed up original file Medieval_Dynasty\Content\\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma
[..][MDML]: Created 1 hard links
```
(`Created link to ...` is a Trace line and may not appear in the file; no `Could not back up`, no `Could not create link`, no `Old file links found`.)

After normal exit (`python check.py`): `STATE: ORIGINAL` (hash `6eae822a..`, size 10118, no `.mdml-backup`, no `ModLinks.bin`),
and the log ends with:
```
[..][MDML]: Restored original file Medieval_Dynasty\Content\\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma
[..][MDML]: Deleted 1/1 file links
```
(`Shutting down` precedes them. The log is overwritten on every start, so save a copy of it after each run.)

## 3. Test B: crash simulation (owner + orchestrator)
1. Deploy state as in section 1 (`ORIGINAL`).
2. Owner starts the game and reaches the main menu. Orchestrator confirms `STATE: LINKED` with check.py.
3. Owner kills the process: Task Manager -> `Medieval_Dynasty-Win64-Shipping.exe` -> End task (use "End process tree"
   if a second `Medieval_Dynasty.exe` launcher is listed). Do not close it from the game.
4. Orchestrator runs check.py. Expected (crash state, this is the situation the feature must repair):
   `STATE: LINKED` again (target = mod file, backup holds the original, `ModLinks.bin` still exists) and no
   `Restored`/`Deleted` lines at the end of the log. If the shutdown hook did still run (you see `Shutting down` and
   `Restored original file`), the kill was not hard enough; retry with `taskkill /F /PID <pid>` and note it.
5. Owner starts the game again and waits until the main menu, then quits normally. Expected log of this second run, in order:
```
[..][MDML]: Old file links found, maybe the application exited unexpected
[..][MDML]: Deleted old file link Medieval_Dynasty\Content\\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma
[..][MDML]: Restored original file Medieval_Dynasty\Content\\ChromaSDK\Animations\Cold_Hit_Keyboard.chroma
[..][MDML]: Deleted 1/1 old file links
[..][MDML]: Backed up original file ...Cold_Hit_Keyboard.chroma
[..][MDML]: Created 1 hard links
 ... (run) ...
[..][MDML]: Restored original file ...
[..][MDML]: Deleted 1/1 file links
```
   i.e. recovery first, then the normal link/backup/cleanup cycle again. Final check.py: `STATE: ORIGINAL`.
   Hash of the original must be `6eae822a...` throughout (a backup that itself became the mod file, hash `c739bec5..`, would be a bug).

## 4. Optional extra cases (orchestrator, game not running, no launch needed for the files part)
These need the game start to trigger the code, so batch them into one extra launch each:
- Stale link without ModLinks.bin: while LINKED after a kill (section 3 step 4), delete `Config\ModLinks.bin`, start the
  game. Expected since the fix (REVIEW.md finding 3): the log shows `Stale link ... found, keeping the existing backup`,
  the existing `.mdml-backup` (hash `6eae822a..`) is NOT overwritten, a fresh link is created and recorded, and a normal
  exit restores the original (`STATE: ORIGINAL`). Before the fix this lost the original. Safe to run now, but keep a copy
  of the original anyway (section 0 step 3).
- Mod removed after crash: after a kill, delete `Content\Mods\OverwriteBackupTest`, then start the game. Expected: recovery
  removes the (now orphaned hard link, still a normal file) target and restores the backup.

## 5. Clean up / restore the original state completely
1. Game closed.
2. Delete `%MD%\Content\Mods\OverwriteBackupTest\`.
3. If `Cold_Hit_Keyboard.chroma.mdml-backup` exists: delete the target file (the 122-byte one), rename the backup to
   `Cold_Hit_Keyboard.chroma`. (`ren` in `Content\ChromaSDK\Animations`.)
4. Delete `%MD%\Binaries\Win64\Config\ModLinks.bin` if present.
5. `python check.py "%GAME%"` must say `STATE: ORIGINAL`. If still in doubt: Steam -> Properties -> Installed Files ->
   Verify integrity (restores the file; does not touch `Content\Mods`, `MDML.dll`).

`check.py` is read-only and takes only the game folder (`python check.py "E:\SteamLibrary\steamapps\common\Medieval Dynasty"`).
Exit code 0 means ORIGINAL or LINKED, 1 means a broken/inconsistent state.

## 6. Behaviour added by the link/backup fixes (log lines to look for)
- Every target is written to `ModLinks.bin` (and flushed) before the original is renamed / the link is created. A crash in
  between leaves `ModLinks.bin` with an entry whose link never existed; the next start must end `ORIGINAL`
  (`Deleted 0/1 old file links` or `Restored original file`, plus `Leaving ... alone` if the original was never moved).
- Entries that cannot be resolved (file locked, restore failed) stay in `ModLinks.bin` (`N file links could not be resolved
  and are retried on the next start`); the file is only deleted when everything was resolved.
- If `ModLinks.bin` cannot be opened for writing: `Could not open ... for writing, overwrite links are disabled`, no links are made.
- Case-insensitive duplicates between mods: `Another mod already overwrites ..., the later mod wins`.
- Offline test: the pure filesystem logic sits between `// BEGIN link-ops` and `// END link-ops` in `ModLoader.cpp`; a throwaway
  harness can extract and compile that block against stub `Log`/`FormatPath` (not committed).
