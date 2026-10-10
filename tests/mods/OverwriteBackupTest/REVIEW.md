# Code review: overwrite links, backup and restore (commit f9acdc2)

Scope: `ModLoader/src/Mod/ModLoader.cpp` (`CreateSysLinks`, `DeleteSysLinks`, `RestoreBackup`, `GetBackupPath`),
callers in `ModLoader/src/Utilities/HooksManager.cpp` (`InitHooks` line ~167, `ShutDown` line ~200), `dllmain.cpp`,
`MDML.cpp` (NoOverwrite.ini parsing, profile `[Overwrites]`). Nothing was run; findings are from reading the code.
Line numbers refer to `ModLoader.cpp` unless stated.

## ModLinks.bin format
Not binary: a UTF-8/ANSI text file, one absolute target path per line (CRLF line endings because the stream is opened
in text mode on Windows), at `<exe dir>\Config\ModLinks.bin`. Truncated and re-created by every `CreateSysLinks`
(line 238), deleted at the end of every `DeleteSysLinks` (line 359). Each line is written (flushed by `std::endl`)
only after the link was created (lines 295-303). Paths contain a doubled backslash before the relative part
(`Content\` + `\` + rel, line 273), harmless for the filesystem but means string comparisons (line 276) depend on
identical construction.

## Findings (severity ranked)

### 1. HIGH - link creation throws after the original was already moved away: original lost, game process terminated
Lines 284 (rename) -> 295-298 (`create_hard_link` / `create_symlink`, throwing overloads, no `error_code`).
Failure scenario: `UseHardLinks=0` without Developer Mode/admin (symlink creation needs a privilege on Windows), a
hard link across volumes (Mods folder on another drive than Content is unlikely but possible), a sharing/permission
error, or antivirus. The rename to `.mdml-backup` already happened, the exception propagates out of
`CreateSysLinks` -> `InitHooks` (a raw `CreateThread` proc, no try/catch) -> `std::terminate`, the game dies on start.
The target path was never written to `ModLinks.bin` (written at line 303 only after success), so the next start's
`DeleteSysLinks(true)` does not know about it and never restores `<file>.mdml-backup`. Result: original file missing
until Steam verify. Same hole exists for any crash between line 284 and line 303 (small window).
Fix direction: use the `error_code` overloads; on failure rename the backup back immediately; write the path to
`ModLinks.bin` (and flush) before renaming, and make restore tolerant of "entry listed but link never created".

### 2. HIGH - `std::filesystem::remove` / `exists` throwing overloads in cleanup: exception out of `DLL_PROCESS_DETACH` or `InitHooks`
Lines 330, 342, 359 (and 316, 220, 337) use the throwing overloads. `remove(line)` throws `filesystem_error` when
deletion fails (e.g. the game still holds the hard-linked file open without FILE_SHARE_DELETE at shutdown, antivirus
lock, read-only attribute); it only returns false for "did not exist". So the `else` branch at 350-355 ("Could not
deleted file link") is dead code, and the error escapes `MDML::ShutDown()` (dllmain, process detach under loader
lock -> terminate/hang at exit) or, for `DeleteSysLinks(true)` in `CreateSysLinks`/`InitHooks`, kills the game at start.
Consequence: link + backup stay, `ModLinks.bin` stays only because the line-359 remove was skipped (so next start recovers),
but the game crashes on every start while the condition persists. Fix direction: `error_code` overloads everywhere.

### 3. HIGH - stale link whose record is lost makes the backup step destroy the real original
Lines 274-290. If a link from a previous run is still in the game folder but is not listed in the current `paths`
(`ModLinks.bin` deleted by the user/AV, Config folder wiped, or finding 6 below), `exists(target)` is true and
`target` is not in `paths`, so the code treats the stale link as "a loose original file" and
`rename(target, target + ".mdml-backup")`. On Windows `std::filesystem::rename` replaces an existing destination, so the
existing `.mdml-backup` (the genuine original) is overwritten with the stale link/mod file. On the next cleanup the
"restored original" is the mod file. Fix direction: never overwrite an existing backup (if the backup exists, keep it and
just remove the stale target); skip backing up when `target` is a symlink or `equivalent(target, source)`.

### 4. MEDIUM - cleanup deletes `ModLinks.bin` even when entries failed or were skipped: backups become unrecoverable
Lines 337-340 (symlink mode, entry is not a symlink: `continue`), 350-355 (remove failed, once finding 2 is fixed) and
359 (unconditional remove). Entries that could not be processed are dropped together with the file, so the leftover
link/backup is never retried on a later start. Also in the "not a symlink" case the backup is not restored (the file at
`target` may be a real file that replaced our link, e.g. after a Steam verify, and the stale `.mdml-backup` lingers
forever). Fix direction: rewrite `ModLinks.bin` with the remaining entries instead of deleting it; keep `.mdml-backup`.

### 5. MEDIUM - dangling symlink is not removed and blocks the restore
Lines 330-335 use `exists()` (follows links). In symlink mode, if the mod folder/file is gone (mod deleted before the
crash recovery runs), `exists(line)` is false, the dangling symlink stays, and `RestoreBackup` then returns early or tries
to rename onto the dangling link. Use `symlink_status`/`directory_entry::is_symlink` first. Not an issue in hard-link mode
(a hard link keeps the data alive). Current profile uses hard links, so low practical impact today.

### 6. MEDIUM - case-sensitive duplicate detection
Line 276 compares `std::string` paths case-sensitively while NTFS is case-insensitive. Two overwrite mods shipping
`Foo.txt` and `foo.txt` for the same game file: the second mod's `exists(target)` is true, the path string differs, so the
first mod's link is renamed to `.mdml-backup` (not the original; that is overwritten, see finding 3) and later restored as a link to
the mod file. Fix direction: compare with a case-folded / `equivalent()`-based key, and detect "target is one of our links" by
membership of a normalized set.

### 7. MEDIUM - `ModLinks.bin` stream is never checked
Line 238: no `is_open()` check. If `Config\` does not exist or the file is locked, all links are created but nothing is
recorded; backups and links then survive every crash. At shutdown line 318 reports "Cant find Links File" and the
links remain. Fix direction: abort linking (or skip the mod) when the record file cannot be opened.

### 8. LOW - restore never happens if the game dir changed / link target equals backup logic leaves stale backups
`RestoreBackup` (218-228) returns silently when `target` exists, so a `.mdml-backup` next to a file that Steam re-downloaded
stays forever (no log line). Add a Warn log so the owner can see it.

### 9. LOW - failure path inconsistencies
- Line 279: duplicate-path branch `remove(target)` is throwing (see 2) and leaves `oMod.Files` of the first mod pointing at a
  link that now belongs to the second mod.
- Line 262: `continue` on a missing `Folder` inside the directory loop silently skips the mod without a log line (BaseMod
  with `Enable=True` but no `OverrideContent` just vanishes from the log).
- `recursive_directory_iterator` (264) uses the throwing constructor/increment: an unreadable subfolder aborts the whole
  linking with an exception (same termination as finding 1).
- Hard links share content with the mod source: if the game ever writes to a replaced loose file, the mod's own source
  changes too (and the backup is the only intact copy). Document, or prefer symlinks for writable files.
- `ShutDown` runs from `DLL_PROCESS_DETACH` (dllmain.cpp:20) under the loader lock and only on orderly exit; file system
  and logging work there is fragile (and exceptions, see 2). On a hard kill nothing runs, which is exactly what the crash
  test in the README exercises.

### Not a bug, but worth knowing
- NoOverwrite.ini semantics are inverted by name: `=true` means "do not override this file in the pak hooks" (engine default
  path), unlisted files default to "override allowed" (`HooksManager.cpp` `isPakOverridePathValid`). The linking code
  itself ignores NoOverwrite.ini entirely; it only matters for how the engine then opens the replaced file. The
  generator (MDML.cpp ~416-450) runs only when the file is missing, so loose files added by mods later are never listed.
  `isPakOverridePathValid` and the generator both depend on `FormatPath` being relative to `rootGameDir = current_path()`;
  if the game is ever started with another working directory, every key lookup silently misses.
- Pak assets (BaseMod's cheat menu) never go through the backup path (no loose original, so `exists(target)` is false at
  line 274); this review covers only loose-file replacement.
