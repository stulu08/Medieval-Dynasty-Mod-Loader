# Design: Pak mod loading (mount mod `.pak` files)

Status: **design draft, not implemented** (2026-10-10). Phase 3 feature. Nothing here is decided until the owner answers
the questions in the last section. Items marked **[verify]** come from UE 4.27 source knowledge and must be confirmed in the
shipped binary before implementation; phase 0 is that investigation.

Security note for agents: the old pak AES key lives in `C:\dev\MDML\Key.txt` (outside the repo). This document was written
**without reading that file**. Never print, log, paste or commit the key; the design below keeps it out of the repo (section 6).

Related: `docs/design/hot-reload.md` (paks are not reloadable), `docs/reports/loadorder-and-dump-notices.md` (load order),
`Modding.md` (today: "mdml only supports loose file loading").

## 1. Current state (158ba5e)
- **Overwrite mods** (`[Overwrites]`/`[Overrides]` in `mod.ini`, `Enable=True`, `Folder=...`): loose cooked files are hard-/symlinked
  into `<game>/Medieval_Dynasty/Content/<relative path>` by `ModLoader::CreateSysLinks`; the links are recorded in `ModLinks.bin`,
  originals are backed up as `.mdml-backup` and restored on cleanup/next start (owner-tested, fixture in `tests/mods/OverwriteBackupTest`).
- Two hooks make the engine accept loose files for assets that exist in the game pak:
  `FPakPlatformFile::FindFileInPakFiles` (rva `0x0272b130`) returns "not in pak" for paths that are valid loose overwrites, and
  `FPakPlatformFile::IsNonPakFilenameAllowed` (rva `0x027303c0`) returns true. Validity = file exists, path contains `\Content\`,
  not listed false in `NoOverwrite.ini` (generated on first run from the game's own loose files; those must never be treated as mods). Both hooks run `std::filesystem::exists` on **every** file lookup (known performance finding, code inventory 4.4).
- Logic mods (Blueprint actors) are loaded by path with `StaticLoadClass`/`StaticLoadObject` after the assets are reachable (loose or pak).
- The game ships **one pak and one signature file**: `Content/Paks/Medieval_Dynasty-WindowsNoEditor.pak` (~11.1 GB) and `Medieval_Dynasty-WindowsNoEditor.sig` (~680 KB)
  (directory listing read-only, 2026-10-10). **A `.sig` file means pak signing is in use** (see 6).
- Symbols found in the PDB (2026-10-10, `tools/pdbsym.py`): `FPakPlatformFile::Mount` (rva `0x02733760`, size `0x10ba`), `FPakPlatformFile::Initialize` (`0x0272f8a0`),
  `FPakPlatformFile::RegisterEncryptionKey` (`0x027387b0`), `FPakFile::FPakFile` (`0x0271f2d0`), `FPakPlatformFile::HandleMountPakDelegate` (`0x0272ef70`),
  `FPakPlatformFile::HandleOnMountPakDelegate`, the delegates `FCoreDelegates::MountPak`, `FCoreDelegates::OnMountPak`, `GetPakEncryptionKeyDelegate`, `GetPakSigningKeysDelegate`, `GetRegisterEncryptionKeyMulticastDelegate`,
  `FPakPlatformFile::FindPakFilesInDirectory`'s visitor. So the pak machinery is present and symbolized.

## 2. Goals
1. Users drop a `.pak` (cooked by UnrealPak / UE editor tooling) next to a `mod.ini` and the loader mounts it on startup with a deterministic priority.
2. Pak mods participate in **LoadOrder.ini** (`Name = 1/0`; whether top means lowest or highest priority is open question 3) like every other mod type.
3. No game file is modified; no AES key or signing key ever appears in the repo, logs or docs.
4. Clear interplay with loose overwrites: documented precedence, conflict detection and logging (which mod provided which asset).
5. Works for **replacing existing assets** (asset path exists in the game pak) and for **adding new assets** (new BP/logic mod content).

Non-goals (v1): creating paks from MDML (packaging tool), unmounting at runtime, reading the game's paks, supporting `.utoc/.ucas` (IoStore; not used by 4.27 here), asset-registry merging beyond what the engine does itself.

## 3. How UE 4.27 mounts paks (what the engine does) **[verify against the binary]**
- At startup `FPakPlatformFile::Initialize` finds `*.pak` files recursively under `Content/Paks`, `Saved/Paks`, engine paks and mounts them via `Mount(Filename, PakOrder, ..., bLoadIndex)`.
  Mount constructs `FPakFile` (reads footer/index, uses the AES key from `GetPakEncryptionKeyDelegate` / registered keys, loads the `.sig` file if signing keys are present), and inserts it into the sorted pak list.
- **Priority** is the pak *order*: higher order wins when two paks contain the same path. `GetPakOrderFromPakFilePath`: paks in `Content/Paks/<Project>-*` get the highest base order, other `Content/Paks` lower, `Saved/Paks` lower, engine lowest; names ending in `_P` (patch paks) get an additional bonus (+100 per patch index) so that patches beat base paks. This is why community mods are named `*_P.pak` and placed in `Content/Paks/~mods/`.
  Within equal order, the sort is by the explicit order argument given to `Mount` (later = higher).
- Lookup: `FindFileInPakFiles` walks the pak list from highest order down, so the first pak that contains the path wins.
- Runtime mounting is possible: `FCoreDelegates::MountPak` (Execute(path, order)) and the `OnMountPak` notification, or call `FPakPlatformFile::Mount` directly on the `FPakPlatformFile` instance.
- Assets already **loaded** before a pak is mounted stay as they are. Replacements only apply to assets that are loaded later. New assets are loadable by path (`StaticLoadObject`) without asset-registry entries; things that enumerate via the asset registry will not see them unless the registry data is also provided.

## 4. Mounting strategies
| Option | How | Pro | Contra |
|---|---|---|---|
| **A. Drop-in directory** | Create hard links / copies of the mod pak (and `.sig` if any) into `Content/Paks/~mods/` (same link machinery as overwrites) before the engine scans; naming `Name_P.pak` | Engine does everything incl. order and signing path; no engine calls | Must happen **before** the engine's `FPakPlatformFile::Initialize`; MDML init is at ~536 ms after process start (0 UObjects) and that is probably already after the scan **[verify with a log of the first `Mount`/`FindFileInPakFiles` call time]**; touches the game folder (like overwrites); a pre-start step (the proxy DLL, `xinput1_3.dll`, runs earlier: at its first `DLL_THREAD_ATTACH`) might be early enough for this |
| **B. Explicit runtime mount (recommended)** | After the pak platform file exists, call `FPakPlatformFile::Mount(path, order, ...)` for each mod pak, in load order, on the **game thread** (or the thread that owns pak init) | Full control of order, per-mod logging, no game-folder writes, works with files outside the game folder (`Content/Mods/<Mod>/*.pak`), same folder as other mod files | Needs the `FPakPlatformFile*` instance and exact `Mount` signature/calling convention **[verify]**; must be done early enough (before assets in it are needed) and safely w.r.t. engine pak locks (`PakListCritical`) |
| **C. Delegate** | Invoke `FCoreDelegates::MountPak` / `HandleMountPakDelegate` | Engine path incl. locking and events (`OnPakFileMounted`) | Delegate invocation from outside needs a constructed delegate call; same instance and timing issues |
| **D. Pak directory injection** | Hook `FPakPlatformFile::FindPakFilesInDirectory` / `Initialize` to add `Content/Mods/<Mod>/` to the search roots | Natural early timing; the engine mounts and orders | Hooks inside early init (must be installed before it runs; only the proxy could be early enough); order bonus rules apply by path |

Getting the `FPakPlatformFile*`: the existing hooks `hookFindFileInPakFiles(void* ptrThis, ...)` and `hookIsNonPakFilenameAllowed` already receive it as `ptrThis`. The first call captures it. Alternatively resolve it via `FPlatformFileManager::Get().FindPlatformFile("PakFile")`.

Recommendation (to be confirmed after phase 0): **B**, fed by the existing hook's captured `this`, with D as fallback if mounting turns out to be too late for assets the game loads at start.

### 4.1 Load order and priority
- Pak mods appear in `LoadOrder.ini` under their mod folder name like all mods (`Name = 1/0`). Today the order applies to DLL core mods only; for paks the order defines **mount order = priority**.
- Direction must be stated explicitly in the file header and the UI. Proposal: top = lowest priority (mounted first), later entries override earlier ones, the same rule the overwrite links already use ("later mod wins on a conflict", `loadorder-and-dump-notices.md`). Note this is the *opposite* of the DLL-mod reading "top = first loaded". Owner decision (Q3).
- Priority vs. the game pak: mod paks must beat `Medieval_Dynasty-WindowsNoEditor.pak`. With explicit `Mount(order)` the loader passes `base + index` where `base` is above the game pak's order **[verify actual order value of the game pak in `Mount`]**; with option A the `_P` naming and `~mods` path give the bonus.
- A disabled mod (`0`) mounts nothing. A mod can contain several paks (`A.pak`, `B.pak`): sorted by name, then mounted in sequence.

## 5. Interaction with the overwrite-link system
| Case | Rule (proposal) |
|---|---|
| Same asset path in an overwrite (loose, linked) and in a mod pak | The **hooks make loose overwrite files win over every pak** (`FindFileInPakFiles` returns "not in pak" for loose paths, so the loose file is read). So a loose overwrite always beats a pak mod unless the user removes it. Log a warning at startup when both provide the same path. |
| Same asset in two pak mods | Highest priority pak (later in LoadOrder) wins; log a conflict list per asset (`Asset X: A.pak < B.pak (B wins)`), by reading the pak indices (needs index access: see 7). |
| Pak mod asset equals a file listed `false` in `NoOverwrite.ini` | `NoOverwrite.ini` protects the game's own loose files (movies etc.) from being treated as mods; it applies to the *hook* decision for loose files only, not to pak mounting. |
| Pak mod and DLL/logic mod in one folder | One `mod.ini` with `[Mod]`, `[LogicMod]` and a new `[Pak]` section (`File=...`, optional `Order=`, `Enable=`); one `LoadOrder` entry controls all parts (consistent with "0 disables the whole folder"). |
| `.mdml-backup` / `ModLinks.bin` | Not used for paks (Option B creates no files in the game folder). Option A would need the same backup/recovery rules. |
| Cleanup/crash recovery | B: nothing to clean. A: reuse the link recorder. |
| Performance | The overwrite hooks' per-lookup `std::filesystem::exists` should be replaced by an in-memory set of loose-overwrite paths (built at link time) before pak mods add more lookups; separate finding, already in code inventory 4.4. |

Because the hooks currently apply `isPakOverridePathValid` to **all** lookups, a pak mod asset path that coincidentally exists as a loose game file is not affected as long as `NoOverwrite.ini` marks the loose file `false`.

## 6. Encryption and signing (the hard part)
Known facts: the game ships a `.sig` file next to its pak, the PDB contains `GetPakSigningKeysDelegate` and `GetPakEncryptionKeyDelegate`, and the owner holds an "old" AES key (never read for this document). Unknown (phase 0 must answer):
1. **Is the game pak encrypted** (index and/or content), and with which key? The key is registered at startup (`RegisterEncryptionKey`, 0x027387b0) by the game; the engine therefore **already holds the key in memory**.
2. **Is signature checking enforced?** If the game has pak signing keys registered, `FPakFile` expects a signature file for every mounted pak and a mismatch/missing sig triggers the engine's signature-failure handling (Shipping builds typically terminate or refuse to mount). **[verify]** Mod paks cannot be signed with the developer's private RSA key, so unsigned mod paks may be rejected.

Consequences and options:
| Aspect | Option | Notes |
|---|---|---|
| **Encryption of mod paks** | Mod authors cook **unencrypted** mod paks | Simplest: then the loader needs no key at all; UnrealPak without `-encrypt` |
| | Mod authors encrypt with the game's key | Needs the key on the author's machine (legally and technically unpleasant to distribute); the loader would call `RegisterEncryptionKey`-equivalent with a key it must not ship in the repo |
| | Loader reuses the key the game already registered | The key is already in game memory; reading it at runtime from the engine's key registry means MDML never stores it. Must still not be logged. Only needed if the owner wants encrypted mod paks |
| **Signature** | Bypass/relax the check for MDML-mounted mod paks only | A hook on the sig check (analogous to the existing pak hooks: accept for mod pak paths whitelisted by MDML), or constructing the `FPakFile` so it is treated as unsigned. Needs RE of `FPakFile::FPakFile`/`Initialize`/the signature-check function **[verify]** |
| | Use game-valid signatures | Impossible without the private key |
| | Avoid pak signing entirely by keeping loose overwrites for assets and using paks only for "new content" | Does not remove the signature check for any mounted pak |
| **Key handling in the repo** | `Key.txt` stays outside the repo (CLAUDE.md rule). If a key is ever needed at runtime: read from a user-provided config path outside the repo, from the engine's registry at runtime, or from an environment variable; never logged, never in docs or tests; `.gitignore` entries for `*.key`/`Key*.txt` as a safety net |

Owner-visible policy proposals: (1) v1 supports **unencrypted** mod paks only, (2) signature enforcement is relaxed by a hook only for paths under `Content/Mods`, (3) no key is ever stored or logged by MDML.

## 7. Additional components
- `PakModScanner`: reads `[Pak]` sections, finds `.pak` files, validates (exists, size >0, footer magic `0x5A6F12E1` at end, version byte 8 or 9 for 4.27 **[verify]**), checks LoadOrder, produces the mount list.
- `PakMounter`: owns the captured `FPakPlatformFile*`, performs `Mount` on the game thread (`mdml::GameThread::Enqueue` after the first Tick, or earlier on the init thread if the engine's pak list lock allows it), returns success per pak, logs `Mounted <pak> order=<n> (<ms> after process start)`.
- Conflict report: optional (needs reading the pak index; the engine's `FPakFile` exposes the file list after mount via `GetFilenames`/`FindFilesAtPath` **[verify]**) → DevTools tab "Asset conflicts".
- F1 window: list pak mods with state (Mounted/Failed/Disabled) and their order.
- `Modding.md` update: how to cook and pack a mod (UnrealPak command, naming, folder layout, `[Pak]` section), plus a "not hot-reloadable" note.
- Test fixture like `tests/mods/OverwriteBackupTest`: a tiny unencrypted pak that replaces one harmless asset, with a read-only check script.

## 8. Threading
- `Mount` modifies the engine's pak list under the engine's critical section; call it from one thread only, preferably the game thread or the thread the engine itself uses during startup. The first reliable moment is when the pak platform file exists (captured by our hooks). Calls from MDML's init thread are risky if the engine is concurrently scanning/mounting; measure in phase 0.
- Asset loads run on async loading threads; once a pak is mounted its entries are visible to them. Mount before the first load of any asset it replaces; ordering inside MDML startup: overwrite links, pak hooks, **pak mounts**, mods (BaseMod first), game hooks.
- Hooks that read `NoOverwrite`/overwrite state from IO threads need no change, but any new shared state (mount results, conflict maps) must be immutable after startup or protected.

## 9. Risks
| Risk | Mitigation |
|---|---|
| Signature enforcement terminates the game on an unsigned mod pak | Phase 0 test on a throwaway pak; do not enable pak mounting until the sig question is solved; log and refuse instead of mounting when the check cannot be relaxed |
| Mount happens too late (assets already loaded) or concurrently with engine init | Timestamp logs; fallback options A/D; document that replaced assets must not be loaded before mount |
| Wrong `Mount` signature/ABI (wrong args crash the game) | Phase 0 decompiles `Mount` and its callers (`HandleMountPakDelegate`) and copies the engine's own call pattern; validate with a log-only hook first |
| Key leakage | No key code path in v1; `.gitignore` guard; code review rule; never read `Key.txt` in agents |
| Load-order confusion (direction) | State it in the file header, UI and `Modding.md`; log final mount order |
| Corrupt/foreign pak (index parse) crashing the engine | Validate footer/size before mounting; wrap mount in SEH if the owner agrees (cannot catch all) |
| Pak replaces a core asset and bricks saves | Docs; mods disabled via LoadOrder `0`; no automatic uninstall needed since nothing is written to the game folder (option B) |
| Antivirus / EAC-style detection | None known; game has no anti-cheat on this path (not verified) |
| IoStore (`.utoc/.ucas`) mods | Out of scope; 4.27 game uses classic `.pak` |
| Performance of pak lookups with more paks | Engine-side, negligible compared to 11 GB base pak; our overwrite hook cost addressed separately |

## 10. Phased plan
| Phase | Scope | Exit criterion |
|---|---|---|
| **0 Investigation (RE + log-only)** | IDA/PDB: decompile `FPakPlatformFile::Mount`, `Initialize`, `FPakFile::FPakFile` (signature and key use), `GetPakOrderFromPakFilePath`, `HandleMountPakDelegate`; add temporary log-only hooks on `Mount` (log path, order, caller timing) to see the engine's own mount of the game pak and its timestamp vs. MDML startup; check encryption/signing state without printing keys (only booleans) | written answers to: encrypted? signed/enforced? order value of game pak? `Mount` signature? earliest safe mount time? |
| **1 Prototype mount** | Capture `FPakPlatformFile*`, mount one **unencrypted** test pak (fixture) that replaces one harmless asset, game-thread, behind a config flag | asset replaced in-game, clean shutdown, log shows order and timing |
| **2 Mod format + load order** | `[Pak]` section in `mod.ini`, scanner, LoadOrder integration (direction decided), enable/disable, F1 list | two pak mods ordered by LoadOrder, conflict decided as documented |
| **3 Signing/encryption policy** | Implement the owner's chosen policy (sig relaxation hook, or reuse of the engine's registered key, or none) | decision-dependent |
| **4 Conflict report + docs** | DevTools asset-conflict view, `Modding.md` pak chapter, test fixture + check script | documented workflow end to end |
| **5 Optional** | Option D (inject search directory) for earlier mounting; runtime unmount (`Unmount` symbol check); IoStore | per owner |

## 11. Open questions for the owner
(Nothing here is decided; bracketed text is only the author's suggestion.)
1. **Is the pak feature wanted at all, given overwrite mods already replace assets?** Paks bring: the normal tool pipeline (UnrealPak/editor), many files in one archive, new assets. Overwrites: no signing problem.
2. **Signing:** the game ships a `.sig`. May MDML hook/relax the signature check for mod paks it mounts itself (RE needed)? If it turns out to be enforced and not bypassable, do we stop here?
3. **Load-order direction:** for pak mods, is "later in `LoadOrder.ini` overrides earlier" right (consistent with overwrite links) even though DLL mods read "top = loaded first"?
4. **Encryption:** v1 unencrypted mod paks only (author's suggestion)? If the old AES key should be used: who supplies it to mod authors, and may MDML read the game's already-registered key from memory at runtime? (Key stays out of the repo either way.)
5. **Precedence:** loose overwrite beats a pak mod beats the game pak (author's reading of the current hooks). Acceptable, or should pak mods be able to beat loose files?
6. **Mount strategy:** B (explicit `Mount` at runtime, author's pick) vs. A/D (earlier, via links or search-dir injection) if timing requires; OK to touch the proxy DLL for early work if needed?
7. **Mod layout:** `[Pak]` section in `mod.ini` in the same folder as DLL/logic/overwrite parts, or paks discovered purely by file extension?
8. **Failure policy:** if a pak cannot be mounted (bad file, signature), log and continue (author's suggestion) or abort startup of that mod folder?
9. **Conflict report:** worth the extra RE (reading pak indices) in the first iteration or later?
10. **Packaging tool:** should MDML/ModManager eventually help authors build paks, or is documentation of UnrealPak enough?
