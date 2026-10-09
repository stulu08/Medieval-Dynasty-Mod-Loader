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
| `tools/check_patterns.py [--gen]` | Scans every pattern in the inis + hardcoded ones in `MDML.cpp`, resolves them the way the loader does (RIP math), compares to PDB RVAs. `--gen` builds new unique patterns from PDB addresses (capstone, wildcards rip-rel/rel32/imm64). ~2 s. |
| IDA 7.5 headless | `idat64.exe -A -S"script.py" <idb/exe>` for batch IDAPython. Load the PDB via the PDB plugin. |
| Dumper-7 / UE4SS (in `C:\dev\MDML\tools`) | References for engine internals, SDK generation, signatures. |

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
| GetDisplayNameTextByIndex | `UEnum::GetDisplayNameTextByIndex` | 0x0112f940 | **FAIL** (key only in stale root ini) |
| IsNonPakFilenameAllowed | `FPakPlatformFile::IsNonPakFilenameAllowed` | 0x027303c0 | OK |
| FindFileInPakFiles | `FPakPlatformFile::FindFileInPakFiles` (member overload) | 0x0272b130 | **FAIL** |
| ProcessInternals | `ProcessLocalScriptFunction` (call inside `UObject::ProcessInternal`) | 0x0129b300 | OK (hardcoded) |
| StaticConstructObject_Internal | `StaticConstructObject_Internal` | 0x012a2c20 | **WRONG** — hardcoded sig 1 hits an XR plugin function (0x0209c030); chain never reaches the correct sig 4 |

Regenerate replacements with `python tools/check_patterns.py --gen`.

## Known loader bugs found while checking (Phase 1 fixes)
1. `MDML.cpp:424-450` reads GInfo patterns from section `"GameInfo"`, but the ini keys live in `[GInfo]` → ini values ignored, compiled-in defaults always used.
2. `MDML.cpp:653-683` SCOI fallback chain: a wrong non-null hit stops the chain; ini section name misspelled `StaticConstructObejct_InternalInfo`; `GetAddressPTR(nullptr,…)` dereferences when all sigs fail (line 683).
3. `Pattern::Find` scans the whole `SizeOfImage` (incl. data sections) and returns the first hit, no uniqueness check.
4. Hook targets from `Pattern::Find` are passed to MinHook without null guards (`HooksManager.cpp`).
5. Two diverging `ModLoaderInfo.ini` files (repo root vs `Config/`); only `Config/` is used.

## Last in-game log (old build, MDML 2.3.1, game 2.2.0.8, 2026-02-25)
Not found: StaticLoadObject, SpawnActorFTrans, GetDisplayNameTextByIndex, FindFileInPakFiles (hook creation failed).
Engine defs (offsets) were all found by `EngineDefFinder`; DX11 Present hook worked.
