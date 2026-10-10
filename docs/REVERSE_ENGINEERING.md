# Reverse engineering notes

## The PDB
Since at least Feb 2026 the Steam depot (1129581) ships `Medieval_Dynasty-Win64-Shipping.pdb` next to the EXE and
updates it with every patch. Verified for build 25776186 (EXE linked 2026-09-24): EXE RSDS GUID ==
PDB info-stream GUID `9d604ce5-95bf-4d5c-af3d-d11cad9f2b72`, age 1. Contains full symbols (functions, globals, types).

The developers could drop it in any patch → MDML must keep a pattern fallback.

## Tools
| Tool | Use |
|---|---|
| `tools/pdbsym.py <exe> <mask>...` | dbghelp lookup, prints RVA/size/name. Masks support wildcards (`*FindFileInPakFiles*`). PDB load ≈ 30 s → batch masks in one call. |
| `tools/check_patterns.py [--gen [--write]]` | Checks every fallback pattern in `Config/ModLoaderInfo.ini` like the loader judges it (functions: exactly 1 match; globals/call targets: all matches resolve to the same address) against the PDB address of the **same decorated symbol name the loader uses** (parsed from `namespace Symbols` in `MDML.cpp`, same lookup strategy as the loader). `--gen` builds replacements (capstone-wildcarded, unique), `--write` stores them in the ini. ~2 s. |
| IDA 7.5 headless | `idat64.exe -A -S"script.py" <idb/exe>` for batch IDAPython. Load the PDB via the PDB plugin. |
| Dumper-7 / UE4SS (in `C:\dev\MDML\tools`) | References for engine internals, SDK generation, signatures. |

## How the loader resolves addresses (since 3.0.0-dev)
1. `SymbolResolver` (ModLoader/src/Utilities/SymbolResolver.cpp) loads the game PDB via DbgHelp with
   `SYMOPT_EXACT_SYMBOLS` (GUID/age must match the running EXE) and looks up **decorated** names
   (`namespace Symbols` in `MDML.cpp`). A decorated name looked up directly makes DbgHelp scan all publics
   (~0.6 s each), so the resolver looks up the undecorated name (hash, ~1 ms) and verifies the decorated public
   symbol at that address; only a mismatching overload falls back to the slow path. All 17 symbols: ~0.05 s.
   Disable with `[Symbols] UsePdb=0`.
2. If the PDB is missing/mismatched: the pattern from `Config/ModLoaderInfo.ini`, judged strictly (see tool above).
3. Every address is logged with its source (`pdb` / `pattern` / `offset`) and RVA.

## After a game patch
1. `python tools/check_patterns.py --gen --write` (refreshes fallback patterns; the PDB path needs nothing).
2. If a decorated symbol is reported "not found", the engine signature changed → look it up with
   `python tools/pdbsym.py <exe> "*Name*"` (undecorated) and update `namespace Symbols` + the call sites.

## Pattern status — build 25776186 (2026-10-09)
Expected RVAs from the PDB (ImageBase 0x140000000):

| Name | Symbol | RVA | Old pattern |
|---|---|---|---|
| FPool → GName | `NamePoolData` | 0x04ba2b80 | OK (2 hits, both correct) |
| GObject | `GUObjectArray` | 0x04bdf190 | OK (3 hits, all correct) |
| GWorld | `GWorld` | 0x04d24ac8 | OK |
| GameStateInit | `AGameModeBase::InitGameState` | 0x02a86250 | OK |
| BeginPlay | `AActor::BeginPlay` | 0x027cdcc0 | OK (Config ini variant) |
| Tick | `UWorld::Tick` | 0x02b55550 | **FAIL** |
| StaticLoadObject | `StaticLoadObject` | 0x012a4800 | **FAIL** |
| SpawnActorFTrans | `UWorld::SpawnActor` (UClass*, FTransform const*, params) | 0x02b53a30 | **FAIL** |
| CallFunctionByNameWithArguments | `UObject::CallFunctionByNameWithArguments` | 0x0128b470 | OK |
| ProcessEvent | `UObject::ProcessEvent` | 0x0129ae40 | OK |
| CreateDefaultObject | `UClass::CreateDefaultObject` | 0x01108290 | OK (Config ini variant) |
| StaticFindObject | `StaticFindObject` | 0x012a3c30 | **FAIL** |
| GetDisplayNameTextByIndex | `UUserDefinedEnum::GetDisplayNameTextByIndex` (the override; only caller is `UUserDefinedEnum`) | 0x02ee7770 | **FAIL** (key only in stale root ini) |
| IsNonPakFilenameAllowed | `FPakPlatformFile::IsNonPakFilenameAllowed` | 0x027303c0 | OK |
| FindFileInPakFiles | `FPakPlatformFile::FindFileInPakFiles` (member overload) | 0x0272b130 | **FAIL** |
| ProcessInternals | `ProcessLocalScriptFunction` (call inside `UObject::ProcessInternal`) | 0x0129b300 | OK (hardcoded) |
| StaticConstructObject_Internal | `StaticConstructObject_Internal` | 0x012a2c20 | **WRONG** — hardcoded sig 1 hits an XR plugin function (0x0209c030); chain never reaches the correct sig 4 |

Regenerate replacements with `python tools/check_patterns.py --gen`.

## Known loader bugs found while checking (status: fixed in 3.0.0-dev unless noted)
1. ~~GInfo read from wrong section~~ — not a real bug: the vendored feather-ini `INI::get(section, key, def)` / `getAs(section, …)` **ignore the section argument** and read the section last passed to `select()`. Trap for all callers: always `select()` first. (Fixed in the new resolver helpers; rest of the code still relies on it → Phase 2.)
2. `MDML.cpp:653-683` SCOI fallback chain: a wrong non-null hit stops the chain; ini section name misspelled `StaticConstructObejct_InternalInfo`; `GetAddressPTR(nullptr,…)` dereferences when all sigs fail (line 683).
3. `Pattern::Find` scans the whole `SizeOfImage` (incl. data sections) and returns the first hit, no uniqueness check.
4. Hook targets from `Pattern::Find` are passed to MinHook without null guards (`HooksManager.cpp`).
5. Two diverging `ModLoaderInfo.ini` files (repo root vs `Config/`); only `Config/` is used.

## Last in-game log (old build, MDML 2.3.1, game 2.2.0.8, 2026-02-25)
Not found: StaticLoadObject, SpawnActorFTrans, GetDisplayNameTextByIndex, FindFileInPakFiles (hook creation failed).
Engine defs (offsets) were all found by `EngineDefFinder`; DX11 Present hook worked.

## Other findings (not fixed yet, Phase 2)
- `ModLoader/src/Engine/UE4/CoreUObject/Class.h:94` `reinterpret_cast<…>(this, ptr)` works only through the comma operator.
- `MDML.cpp` `[Property]` ini path reads `FField.ClassPrivate` from key `Next` (copy-paste).
- `MDML::Start()` runs all setup (file I/O, scanning, DbgHelp) inside `DllMain` under the loader lock.
- `hookFindFileInPakFiles` assigns `OutEntry = nullptr` (no effect, parameter is by value).
- Game version string (`MEDIEVAL_VERSION`) is not in the EXE (likely in the pak config); the log now prints the EXE build id instead of guessing.
- BaseMod always installs its `UI_CheatMenu` overwrite (old cooked asset) via `[Overrides] Enable=True`; `[Config] EnableCheatsMenu=0` only hides the menu. Risky with newer game versions.

## Reference dump (Dumper-7, game 2.7.0.4, 2026-10-09)
- Built `C:\dev\MDML	ools\Dumper-7` with `-p:PlatformToolset=v143` (repo targets v142). Loaded as an MDML core mod:
  `Content/Mods/Dumper7/Dumper7.dll` (no mod.ini → `<dir>/<dir>.dll` is LoadLibrary'd). Config: per-game
  `Binaries/Win64/Dumper-7.ini` (`DumpKey=118` = F7, `SDKGenerationPath=C:/dev/MDML/dumps`). Dump after loading a save
  so the player BP classes exist.
- Output: `C:\dev\MDML\dumps.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\` (CppSDK 2477 packages / 102 MB, Mappings, IDAMappings, Dumpspace).
- **Crash cause confirmed:** `BP_BaseCharacter_C` old SDK: StatsComponent +1424, InventoryComponent +1440;
  2.7.0.4: StatsComponent 0x5A0 (=1440), InventoryComponent 0x5B0 (=1456). BaseMod read the inventory at +1440 and got
  the stats component. `AddItemToInventory` signature itself is unchanged.
- `IDAMappings/` can be loaded into IDA to name reflected functions; together with the PDB this covers native + BP.
