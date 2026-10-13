# Wave 3D: engine core cleanup (plan item 2.3)

Status: done on worktree branch `worktree-agent-ae353a6dc802ac08f` (based on `modernize` 1fed9d6). Build green,
`compile_generated.py` 203/203, `check_layout.py` 165/165. **Needs the in-game test** (startup, see "Behaviour changes").
Date: 2026-10-14. Plan references: `docs/MODERNIZATION_PLAN.md` (Wave 3 / 3D, decisions 2026-10-09 "Core location",
"Hand-written core", defaults "direct memory access"; 2026-10-13 "SDK generator fixes", "Typos"), code inventory §3–§5,
§7 row 3D, Appendix A.

Round-1 rule kept: every symbol of `src/Engine` (+ EngineDefFinder/Dumper) that is used outside them is still
there with the same name/signature. What should go in round 2 is listed under "Follow-ups for the orchestrator".
No file outside the 3D ownership was edited except the regenerated `Loader/ModLoader/ModLoader.vcxproj(.filters)`
(new files under `src/Engine`, picked up by the existing `**.cpp`/`**.h` globs of `ModLoader.lua`).

## Summary

- **Offsets are PDB-checked constants.** `Engine/EngineLayout.h` now holds `mdml::layout::*` `constexpr` constants (165, each
  with a `// pdb:` source comment). The new `Tools/RE/check_layout.py` checks all of them against the game PDB (dbghelp,
  read-only). `mdml::Layout` (the runtime struct the accessors read) defaults to these constants.
- **EngineDefFinder is a startup check + no-PDB fallback.** It no longer scans every offset at every start; it verifies
  9 offset groups against invariants of live objects and scans (bounded, SEH-safe) only for a group whose check fails.
- **One `ForEachObject`**, UE 4.27-only code paths, direct memory access, `ChildProperties`/`Children` accessors,
  engine-backed `FName` lookup / `FMemory` / `FText::ToString`, container fixes, layout-true mirror structs, typo renames.

## Commits

| Commit | Subject |
|---|---|
| 5424851 | Engine: PDB-checked layout constants + Tools/RE/check_layout.py |
| 1bd793e | Engine core: one ForEachObject, UE 4.27-only paths, direct memory access |
| 641b54d | Engine core: engine FName/FMemory/FText, container fixes, Mirror structs (+ regenerated ModLoader vcxproj) |
| d96398a | EngineDefFinder: startup layout check with bounded fallback scan |
| 7a149bd | Engine core: rename uknownData_ padding members to unknownData_ |
| (this) | Docs: Wave 3D report |

The commits are logical slices of one change; only the final state was built (the intermediate ones depend on each
other, e.g. EngineDefFinder on `ForEachObject`/`GetObjects()`). Cherry-pick them together.

## Verification
- Full solution build (VS 2026, Release x64): only the expected 1× C4715 (PresetMod). `bin/Release-windows-x86_64` file
  list identical to the baseline (37 files).
- `compile_generated.py` on the real in-game output (`SDK-Out/…/MDML-SDK`): **203/203, 0 warnings** before and after.
- `check_layout.py`: **165 constants, 0 mismatches**; negative test with a wrong constant fails as expected.
- Not run: the game (owner test, see below).

## Item by item

### 1. One `ForEachObject` (inventory §3.5)
- `FUObjectArray::ForEachObject(Fn)` (ObjectsArray.h) and `UObject::ForEachObject(Fn)` (Object.h, null-safe before the
  globals are bound). `Fn(UObject*)`; if it returns `bool`, `false` stops the walk. Skips empty slots.
- All core loops use it: `FindObject<T>`, `GetAllObjectsOfType`, `UPackage::GetAllObjectsInPackage`, `GetFunction`
  fallback, `Dumper::DumpObjectArray`, EngineDefFinder's anchor search. The 2×-duplicated chunked/TU branches are gone.
- `FChunkedFixedUObjectArray::GetObjectPtr` now bounds-checks (index, chunk count, null chunk) and uses the engine constant
  `NumElementsPerChunk = 64 * 1024` instead of `MaxElements / MaxChunks`; `GetByIndex` returns a zeroed item for an
  invalid index instead of reading out of bounds.
- `FindObject` (full-name lookup, used by every old-SDK `StaticClass()`) now compares the object's short name first and
  only builds `GetFullName()` (outer chain + string concatenation) for matches. Same results, far fewer allocations.
- New `UObject::FindObjectByPath<T>(L"/Script/Engine.Actor")` → engine `StaticFindObject` (hash lookup).
- Not changed (outside 3D): the copies in BaseMod (`BaseMod.cpp:495-530`, `Utils.h:108,797,846`) → follow-up F1.

### 2. Dead UML multi-game paths removed (decision 2026-10-09, inventory §3.1)
| Path | Where it was | Now |
|---|---|---|
| Raw offset mode (`IsGInfoPatterns=0` / `IsFunctionPatterns=0`, `StringToDWord`) | `EngineAddresses.cpp` ResolveFunction/ResolveGlobal | removed; a profile that still sets `=0` gets a warning and its values are treated as patterns. `EngineAddresses.cpp` no longer declares `StringToDWord` |
| `IsSimple=0` (`<key>FirstOpCodes/TotalByteInstruction`) | `ResolveGlobal` | removed |
| Non-FNamePool path (`GName` pattern, `TNameEntryArray`, `FNameEntry`, `GetTNameArray`, `IsUsingNamePool`, `GetGlobalNames`, `FNamePool::GetNext`) | `EngineAddresses.cpp`, `NamePool.h`, `EngineInit.cpp`, EngineDefFinder | removed; `GName` is always `NamePoolData`/`FPool` |
| `TUObjectArray` path + `IsUsingFChunkedFixedUObjectArray` branches | `ObjectsArray.h`, `Object.h` ×5, `Object.cpp` ×2, `Pointers.h`, `Dumper.cpp`, `EngineInit.cpp`, EngineDefFinder | core always uses the chunked array; `TUObjectArray`/`GetAsTUArray()`/`IsChunkedArray()` kept as shims (BaseMod still has the dead branch) → F1 |
| Legacy SCOI signature (`IsUsingUpdatedStaticConstruct=0`) | `Object.cpp`, `EngineAddresses.cpp` | removed; only the 4.26+ `FStaticConstructObjectParameters` call (now `static_assert`ed against the PDB) |
| UProperty (pre-4.25) mode (`bIsFProperty=false`) | `Stack.h`, `UnrealType.h`, `GeneratedSupport.cpp`, EngineDefFinder | removed; `FProperty::IsFProperty()` is `constexpr true` (kept for callers) |
| CDO-by-array (`bIsDefaultObjectArrayed`, `GetDefaultObjectFromArray`) | `Class.h`, `Object.h`, `Dumper.cpp` | removed; `UClass::CreateDefaultObject()` calls the engine (C1 comma-operator cast fixed); new `UClass::GetDefaultObject()` reads `ClassDefaultObject` |
| Manual `[UObjectDef]…[FFieldClass]` sections | read in `MDML.cpp` (3A) | the core ignores `mdml::LayoutStatus`; values written into `mdml::Layout` are still used but verified like the constants. Reading code in `MDML.cpp` → F2 |
| `Dumper::DumpEngineInfo` (manual ini format) | `Dumper.cpp` | kept (LoaderUI calls it) but now writes an informational table: global RVAs and every runtime offset, marked when it differs from the PDB constant |
| `USE_ONLY_UE4_TMAP` branch | `Map.h` | removed |
| `CountObjectByTypeAndName` (dead) | `Object.h` | removed |
| `IsUsing4_22`, `IsUsingDeferedSpawn` | `MDML.cpp` (3A) | fields kept in `EngineAddresses` (round-1 rule), unread by the core → F2 |

The mode flags in `mdml::EngineAddresses` stay (MDML.cpp writes them, HooksManager reads one) with their 4.27 values as
defaults (`UsesFNamePool=1`, chunked array, FProperty, updated SCOI all `true`).

### 3. `EngineLayout` constants, `static_assert`s, `check_layout.py`, EngineDefFinder as check/fallback
**Constants** (`Engine/EngineLayout.h`, namespace `mdml::layout`): see the offsets table below. Engine compile-time
constants that are not members (`NumElementsPerChunk`, name-pool block size/stride, `FNameEntryHeader` shift) are
documented inline without a `// pdb:` comment.

**static_asserts** (compile in MDML.dll, every mod and every generated header that includes the core):
`UE4::Mirror::*` (item 8) against the constants; `FUObjectItem`, `FChunkedFixedUObjectArray`, `FUObjectArray::ObjObjects`,
`FFrame` (Node/Object/Code/Locals/OutParms), `FOutParmRec`, `FStaticConstructObjectParameters`, `FName`, `FKey`, `FString`,
`TArray`, `TMap`/`NativeTMap`/`TSet`/`TSparseArray`/`TSetElement`, `FText`, `FWeakObjectPtr`, `FSoftObjectPath`,
`FSoftObjectPtr`, `FScriptDelegate`, `FReferenceControllerBase`.

**`Tools/RE/check_layout.py`**: parses every `constexpr … = value; // pdb: Type::member` (or `sizeof(Type)`,
`Type::member.nested`) in `EngineLayout.h`, loads the PDB with dbghelp (`SYMOPT_EXACT_SYMBOLS`, same as pdbsym.py),
finds the UDT with `SymEnumTypesByNameW`, walks `TI_FINDCHILDREN` (base classes flattened, vtable reported as
`__vftable`) and compares. Exit code 1 on any mismatch or unknown member. `--dump Type…` prints a type's members (used to
build the table). ~60 s (PDB load). Read-only; writes nothing.
- Result on the current game (build 25776186): **165 constants checked, 0 mismatches.**
- Negative test: a copy of the header with `FFieldClass::SuperClass = 0x18` (the old scanned value) →
  `FAIL … 0x0018, PDB says 0x0020`, exit code 1.

**Runtime (EngineDefFinder, `Runtime/EngineDefFinder.*`):** `ClassDefFinder::VerifyEngineLayout()` replaces the six
`Find*Defs` scans; `UE4::InitSDK()` calls it at the same moment as before (first `InitGameState`).
1. The `UObject` group is checked on `GObjects[0..2]` (index 1/2, name "Object", class "Class", outer = object 0).
2. Anchor objects are found in **one** `ForEachObject` pass (Struct, Field, Function, Actor, Vector,
   Actor.UserConstructionScript, Actor.WasRecentlyRendered, KismetSystemLibrary.ExecuteConsoleCommand, PlayerController,
   enum ESearchCase).
3. 8 more groups are checked: UField (UCS.Next is a sibling), FField (Vector's X → Y, class FloatProperty), UStruct
   (Struct.SuperStruct = Field, Vector.ChildProperties = X, PropertiesSize 12, Actor.Children = an Actor function), UEnum
   (ESearchCase names), UFunction (WasRecentlyRendered flags/NumParms 2/ReturnValueOffset 4/Func), FFieldClass
   (FloatProperty.SuperClass = NumericProperty), FProperty (X/Y/Z offsets 0/4/8, ArrayDim 1, ElementSize 4), property
   subclasses (ExecuteConsoleCommand.SpecificPlayer.PropertyClass = PlayerController).
4. All reads go through `mdml::mem::SafeLoad` (SEH); every scan is bounded to 0x400 (old loops were unbounded, B11).

**What happens on a disagreement** (exactly):
- Check passes → nothing changes; one `Info` line "Engine layout verified against live objects (9 groups, PDB constants)".
- Anchor object missing → `Warn` "… not checked …; keeping the PDB constants" (the group is not touched).
- Check fails → `Error` "ENGINE LAYOUT MISMATCH: <group>: <reason> … Scanning for the offsets (fallback)"; the group is
  scanned on a copy of `mdml::Layout`:
  - scan finds nothing → `Error` "fallback scan found nothing; keeping the PDB constants …";
  - scanned values fail the same check → they are discarded, `Error`, constants kept;
  - scanned values pass → **they replace that group in `mdml::Layout`** and an `Error` says "using SCANNED offsets
    instead of the PDB constants. Update EngineLayout.h". `Dump/EngineInfo.txt` then marks those offsets "SCANNED".
- UObject group still broken after the fallback → `Error` "UObject layout unusable …", the other groups are not checked.
- Mods are not disabled in any case (same as before 3D, where a wrong scan also just continued) → open question Q2.

### 4. Direct memory access instead of ReadProcessMemory
- New `Engine/EngineMemory.h/.cpp` (`mdml::mem`): `Load/Store` (bitwise `memcpy`, like the old Read/Write),
  `LoadField/StoreField` (null base → value-initialized result / no-op: the one soft failure callers relied on),
  `SafeCopy/SafeRead/SafeLoad` (SEH, only for EngineDefFinder and `FFieldClass::GetName`).
- Every `Read<>`/`Write<>` of the core is gone: UObject/UField/UStruct/UEnum/UFunction/FField/FProperty accessors,
  `GetVariable`/`SetVariable`, `FFrame::SetOutput`, `UUserDefinedEnum::GetDisplayNames`, `TMap` ctors (`memcpy`).
- `Platform/Memory.h` is untouched (3A) and still included through `NamePool.h`, because the old generated SDK's
  member getters use `Read/Write`.
- Safety fixes that come with it: C13 (`FProperty::IsA<T>` no longer matches when `T::StaticClass()` is null, so unknown
  property types no longer read `PropertyClass` from the wrong layout), B12 (`FFrame::SetOutput` stops at a null out-param),
  null guards for unresolved `ProcessEvent/StaticLoadObject/StaticFindObject/SpawnActor/CallFunctionByNameWithArguments`.

### 5. `ChildProperties` / `Children`
- `UStruct::GetChildProperties()` → `FField*` at 0x50 (properties), `UStruct::GetChildFields()` → `UField*` at 0x48 (UE's
  `Children`: the struct's UFunctions). `UStruct::GetChildren()` keeps its old meaning (ChildProperties, typed `UField*`)
  for BaseMod/TimeWeatherChanger → F3.
- `mdml::Layout.UStruct.Children` is now the real `Children` (0x48); new field `ChildProperties` (0x50).
- `UObject::GetFunction`/`DoesObjectContainFunction` walk the class's `Children` first (O(#functions)), falling back to
  the old GObjects scan with the same semantics (any object of that name whose outer is the class).
- Core callers (`FindPropertyByName`, `GeneratedSupport` member/parameter lookup) use `GetChildProperties()`.

### 6. Engine-backed `FName`, `StaticFindObject`, `FMemory`, `FText`
New PDB-only addresses in `mdml::EngineAddresses` (appended): `FNameCtorWide`, `FNameCtorAnsi`, `FMemoryMalloc`,
`FMemoryRealloc`, `FMemoryFree`, `FTextToString`, `FTextDestructor`. They are resolved by `mdml::ResolveEngineExtras()`,
which `ResolveEngineFunctions` (already called by `SetupProfile`) calls at its end — **no change in MDML.cpp or the ini
was needed**. Missing symbols are a `Warn`, each has a fallback. Decorated names (verified in the PDB):
`??0FName@@QEAA@PEB_WW4EFindName@@@Z`, `??0FName@@QEAA@PEBDW4EFindName@@@Z`, `?Malloc@FMemory@@SAPEAX_KI@Z`,
`?Realloc@FMemory@@SAPEAXPEAX_KI@Z`, `?Free@FMemory@@SAXPEAX@Z`, `?ToString@FText@@QEBAAEBVFString@@XZ`, `??1FText@@QEAA@XZ`.
- `FName(const char*)`: engine `FName(const ANSICHAR*, FNAME_Find)` (hash lookup; never adds a name, like before).
  Fallback: correct name-pool walk (`FNamePoolFNameEntryAllocator::ForEachEntry`: blocks, stride 2, terminator) with an
  exact compare — fixes C14 (the old loop probed raw indices of block 0 only). New `FName(const wchar_t*, EFindName)`
  with `FNAME_Find`/`FNAME_Add`. Both out of line in the new `NamePool.cpp`.
- `FNamePoolFNameEntry`: header read unsigned, wide entries decoded to UTF-8 (C15).
- `UE4::FMemory::Malloc/Realloc/Free/IsEngineAllocator` (new `Containers/UnrealMemory.h/.cpp`, exported): the engine
  allocator; CRT heap fallback with a one-time warning. `GMalloc` itself is not needed (the engine functions handle it).
- `StaticFindObject`: already resolved; now null-guarded, plus `UObject::FindObjectByPath<T>`.
- `FText::ToWideString()/ToString()` via the engine's `FText::ToString()` (fallback: the old `Get()` layout guess, C22);
  `FText::Release()` via the engine destructor. `UUserDefinedEnum::GetDisplayNamesParsed()` uses both (fixes the C23
  leak).

### 7. Containers and pointer fixes
- **C19** `TArray::Add` grows through `FMemory::Realloc` (geometric), new `Reserve`, `begin/end`; `IsValidIndex` checks `i >= 0`.
- **C20** `FString(const wchar_t*)`: null-safe; still a non-owning view (documented, open question Q4). `ToString()` is
  null-safe and converts to UTF-8 (was: `wcslen(nullptr)`, non-ASCII → `'?'`).
- **C21** `TSparseArray::IsAllocated/GetMaxIndex` read the allocation bit array (inline words or heap words, `NumBits`,
  PDB-checked offsets); `TMapBase::IsValidIndex/GetMaxIndex/ForEach/Find(key)`. `GetPair(i)` is unchanged (sparse index).
- **C10** `FReferenceControllerBase` has its vtable pointer; counts at 0x8/0xC (PDB).
- **C9** `FWeakObjectPtr` was already fixed on `modernize` (serial number check); now uses the bounds-checked chunk lookup
  and is null-safe before the globals are bound.
- **FFieldClass::SuperClass** at 0x20 (was 0x18 = ClassFlags), also in the fallback scan.
- `FAssetObjectProperty`/`FAssetClassProperty` map to 4.27's `SoftObjectProperty`/`SoftClassProperty` (their old
  `StaticClass()` looked up classes that do not exist in 4.27 and was always null).

### 8. Layout-true bases (`UE4::Mirror`, new `CoreUObject/ObjectLayout.h`)
`UObjectBase`, `UField`, `UStruct`, `UScriptStruct`, `UFunction`, `UClass` (full 0x230, incl. `ClassDefaultObject`,
`FuncMap`), `UEnum`, `FField`, `FProperty`, `FFieldClass` with every member, each offset/size `static_assert`ed against
`mdml::layout`. Included at the end of `UnrealType.h`, so the generator backend can use them. The views
(`UE4::UObject` …) are **not** derived from them yet (open question Q1): that changes `sizeof` of every generated class.

### 9. Typos (owner decision: rename hard)
Renamed (no outside users): `UUserDefinedEnum::GetDispalyNames` → `GetDisplayNames`, parameter `filterDefualts` →
`filterDefaults` (×2), `uknownData_*` → `unknownData_*` (CoreTypes.h, `FKey`), `AS_UClASS_CHECK` → `AS_UCLASS_CHECK`,
log text "Offser". Used outside → follow-up F4: `GetAsChunckArray` (BaseMod; new correct accessor `GetObjects()`),
`IsUsingDeferedSpawn` (MDML.cpp).

## Offsets (game build 25776186, all verified by `check_layout.py`)

| Type | Member → offset | Size |
|---|---|---|
| UObjectBase | vptr 0x0, ObjectFlags 0x8, InternalIndex 0xC, ClassPrivate 0x10, NamePrivate 0x18, OuterPrivate 0x20 | 0x28 |
| UField | Next 0x28 | 0x30 |
| UStruct | SuperStruct 0x40, **Children 0x48**, **ChildProperties 0x50**, PropertiesSize 0x58, MinAlignment 0x5C, PropertyLink 0x70 | 0xB0 |
| UScriptStruct | StructFlags 0xB0 | 0xC0 |
| UClass | ClassFlags 0xCC, ClassCastFlags 0xD0, ClassDefaultObject 0x118, FuncMap 0x130 | 0x230 |
| UFunction | FunctionFlags 0xB0, NumParms 0xB4, ParmsSize 0xB6, ReturnValueOffset 0xB8, Func 0xD8 | 0xE0 |
| UEnum | CppType 0x30, Names 0x40, CppForm 0x50, EnumFlags 0x54, EnumDisplayNameFn 0x58 | 0x60 |
| UUserDefinedEnum | DisplayNameMap 0x60 | |
| FField | vptr 0x0, ClassPrivate 0x8, Owner 0x10, Next 0x20, NamePrivate 0x28, FlagsPrivate 0x30 | 0x38 |
| FFieldClass | Name 0x0, Id 0x8, CastFlags 0x10, ClassFlags 0x18, **SuperClass 0x20**, DefaultObject 0x28 | 0x40 |
| FProperty | ArrayDim 0x38, ElementSize 0x3C, PropertyFlags 0x40, Offset_Internal 0x4C | 0x78 |
| FProperty subclasses | FByteProperty.Enum, FObjectPropertyBase.PropertyClass, FInterfaceProperty.InterfaceClass, FStructProperty.Struct, FArrayProperty.Inner, FMapProperty.KeyProp, FSetProperty.ElementProp, F(Multicast)DelegateProperty.SignatureFunction, FEnumProperty.UnderlyingProp 0x78; FBoolProperty FieldSize/ByteOffset/ByteMask/FieldMask 0x78–0x7B; FClassProperty/FSoftClassProperty.MetaClass, FMapProperty.ValueProp, FEnumProperty.Enum 0x80 | |
| FFrame | Node 0x10, Object 0x18, Code 0x20, Locals 0x28, OutParms 0x78 | 0x98 |
| FOutParmRec | Property 0x0, PropAddr 0x8, NextOutParm 0x10 | 0x18 |
| FUObjectArray | ObjObjects 0x10 (NumElements 0x24) | |
| FChunkedFixedUObjectArray | Objects 0x0, PreAllocatedObjects 0x8, MaxElements 0x10, NumElements 0x14, MaxChunks 0x18, NumChunks 0x1C | 0x20 |
| FUObjectItem | Object 0x0, Flags 0x8, ClusterRootIndex 0xC, SerialNumber 0x10 | 0x18 |
| FNamePool / FNameEntryAllocator | Entries 0x0 / Lock 0x0, CurrentBlock 0x8, CurrentByteCursor 0xC, Blocks 0x10 | |
| FNameEntry | Header 0x0, AnsiName/WideName 0x2 | |
| FStaticConstructObjectParameters | Class 0, Outer 8, Name 0x10, SetFlags 0x18, InternalSetFlags 0x1C, bools 0x20/0x21, Template 0x28, InstanceGraph 0x30, ExternalPackage 0x38 | 0x40 |
| FName / FString / TArray | ComparisonIndex 0, Number 4 / – / Data 0, Num 8, Max 0xC | 0x8 / 0x10 / 0x10 |
| FText | TextData 0x0, Flags 0x10 | 0x18 |
| TTextData<FTextHistory_Base> | LocalizedString 0x8, History 0x18 | |
| FReferenceControllerBase | **vptr 0x0**, SharedReferenceCount 0x8, WeakReferenceCount 0xC | 0x10 |
| FWeakObjectPtr | ObjectIndex 0, ObjectSerialNumber 4 | 0x8 |
| TBitArray (default alloc.) | InlineData 0x0, SecondaryData 0x10, NumBits 0x18, MaxBits 0x1C | 0x20 |
| TSparseArray (TMap<FName,uint8*>) | Data 0, AllocationFlags 0x10, FirstFreeIndex 0x30, NumFreeIndices 0x34 | 0x38 |
| TSet / TSetElement | Elements 0, Hash 0x38, HashSize 0x48 / HashNextId 0x10, HashIndex 0x14 | 0x50 / 0x18 |
| UDataTable | RowStruct 0x28, RowMap 0x30, ImportKeyField 0x88 | |
| sizes | FTransform 0x30, FQuat 0x10, FKey 0x18, FSoftObjectPath 0x18, FSoftObjectPtr 0x28, FScriptInterface 0x10, FScriptDelegate 0x10, FFieldPath 0x20, FTextHistory_Base 0x20 | |

Bold = differs from what MDML used before (Children/ChildProperties naming, FFieldClass::SuperClass, the vptr).

## Behaviour changes (what the in-game test must cover)

1. **Startup log**: the old "UObject Not Defined. Scanning for def." … block (≈40 lines) is replaced by the 7 new
   resolve lines (`FName::FName(...)`, `FMemory::*`, `FText::*` with `pdb` and rva) and, at the first InitGameState,
   `Engine layout verified against live objects (9 groups, PDB constants)`. **Any `ENGINE LAYOUT` error line is a
   finding** (send the log). First start after the update: the 7 new symbols are not in `Config/SymbolCache.txt`, so the
   PDB is loaded once (~20 s cold) and the cache is rewritten; the next start uses the cache again.
2. **Direct memory access**: a bad pointer in core code now crashes instead of silently reading zero (the old RPM).
   Watch: F1 tools (object dump, world-actor dump, engine info dump), BaseMod object browser / exporter, logic-mod spawn.
3. `FName("…")` uses the engine: lookups are case-insensitive and "Name_3" resolves to ("Name", Number 4), like UE.
   Before, the lookup was an exact string compare that mostly only found names in block 0.
4. `UObject::GetFunction`/`DoesObjectContainFunction` (logic mods: `PostBeginPlay`, `ModMenuButtonPressed`) walk the
   class's function list first.
5. `UPackage::GetAllObjectsInPackage` compares package pointers instead of full names (packages with the same short name
   in different folders are no longer merged). BaseMod package view.
6. `FString::ToString()` and `FNamePoolFNameEntry::GetName()` return UTF-8 (Polish/German texts no longer `'?'`).
   `UUserDefinedEnum::GetDisplayNamesParsed()` uses the engine's display string and releases the FText.
7. `TArray::Add` allocates with the engine allocator.
8. `Dump/EngineInfo.txt` has a new, informational format.
9. Old exporter (BaseMod `Utils::Export`): soft object/class properties are typed via the 4.27 class names; unknown
   property types (Set, FieldPath, sparse delegates) now give an empty type instead of the bogus `TAssetPtr<…>` (C13).

In-game test (owner): start → main menu; check `Logs/MDML-log.txt` for the lines in (1) and no `ENGINE LAYOUT` errors;
load a save (logic mods spawn, TimeWeatherChanger works); F1 → object dump, engine info dump, world actors dump; BaseMod
object browser (classes, packages, a DataTable's rows, a user-defined enum); DevTools → Generate SDK once and re-run
`compile_generated.py` on the output; quit cleanly.

## Follow-ups for the orchestrator (round 2)

- **F1 (3C, BaseMod):** replace the hand-rolled GObjects loops (`BaseMod.cpp:495-530`, `Utils.h:108-130, 797-830,
  846-880`) with `UE4::UObject::ForEachObject`; drop their dead `GetAsTUArray()` branches. Then remove
  `TUObjectArray`, `FUObjectArray::GetAsTUArray()`, `IsChunkedArray()` (FUObjectArray + UObject) and
  `GetAsChunckArray()` (use `GetObjects()`).
- **F2 (3A, MDML.cpp/SetupProfile):** delete the manual `[UObjectDef]…[FFieldClass]` reading (lines ~469-540 incl.
  the `ClassPrivate`-from-`Next` copy-paste C2), the `[GameInfo]` keys `UsesFNamePool`, `IsUsingFChunkedFixedUObjectArray`,
  `IsUsing4_22`, `IsDefaultObjectArrayed`, the `IsUsing4_22`/`ProcessInternals`-from-mod-actor fallback in
  `MDML::CreateMod`, the deferred-spawn branch (`IsUsingDeferedSpawn`) and `StringToDWord`; reset in `ShutDown` stays.
  Then 3D removes `EngineLayoutStatus`/`mdml::LayoutStatus` and the dead flags of `EngineAddresses`
  (`UsesFNamePool`, `IsUsingFChunkedFixedUObjectArray`, `IsUsing4_22`, `IsUsingDeferedSpawn`,
  `IsUsingUpdatedStaticConstruct`, `bIsFProperty`, `bIsDefaultObjectArrayed`). HooksManager `GetUObjectCount` can drop
  its `IsUsingFChunkedFixedUObjectArray` test.
- **F3 (BaseMod/TimeWeatherChanger/LoaderUI):** switch `GetChildren()` callers (BaseMod `Utils.h` ×8,
  TimeWeatherChanger ×4) to `GetChildProperties()` (returns `FField*`, no cast). Then decide Q5.
- **F4 typos used outside the core:** `GetAsChunckArray` (BaseMod) → `GetObjects()`; `IsUsingDeferedSpawn` (MDML.cpp) →
  removed with F2.
- **F5 (Wave 4.2, ini):** remove `IsGInfoPatterns`, `IsSimple`, `IsFunctionPatterns`, the `[GInfo] GName` pattern and the
  `[GameInfo]` mode keys from `Config/ModLoaderInfo.ini`.
- **F6 (Tools):** `Tools/RE/check_patterns.py` still parses `namespace Symbols` from `Loader/ModLoader/src/MDML.cpp`,
  but it lives in `Loader/ModLoader/src/Engine/EngineAddresses.cpp` since Wave 2.4 → the script fails (`ValueError`)
  until its `MDML_CPP` path is updated. The 7 new symbols are PDB-only (no patterns needed).
- **F7 docs:** `docs/REVERSE_ENGINEERING.md` → add `check_layout.py` to "Tools" and "After a game patch"; `CLAUDE.md`
  layout row for `src/Engine` (EngineLayout/EngineMemory/ObjectLayout/UnrealMemory) and `Tools/RE` (check_layout.py);
  plan "Current state" 3D ☑.
- **F8:** `Dumper` writes to the relative `Dump/` folder (process working directory = `Binaries/Win64`), against the
  CLAUDE.md rule; needs a loader-path helper from 3A (`MDML::…` root dir).

## Open questions for the owner

- **Q1 Layout-true views.** Make `UE4::UObject`/`UField`/`UStruct`/`UClass`… derive from `UE4::Mirror::*` (real members,
  `sizeof(UObject) == 0x28`)? Recommendation: yes, but together with the BaseMod migration to the new generator
  (old generated classes are offset views and gain nothing; the new generator could then emit real members).
- **Q2 Layout check failure.** Today a failing group only logs (and uses scanned offsets if they pass). Should MDML refuse
  to load mods (or show a notice in the F1 window) when a group cannot be verified? Recommendation: F1-window notice +
  keep loading (a wrong check anchor must not lock the owner out).
- **Q3 `UObject::GetName` number suffix.** UE stores "Name_N" as Number = N+1; MDML prints Number itself ("_1" for
  "Name_0"). Kept, because the old generated SDK looks objects up by these (wrong) names. Fix it together with retiring
  the old SDK? Recommendation: yes, then.
- **Q4 Owning FString.** `FString(const wchar_t*)` aliases the caller's buffer. An owning FString on `FMemory` needs a
  destructor/copy semantics, which changes how the old SDK passes strings around. Do it with the new generator?
  Recommendation: add a separate owning type (e.g. `FStringOwned`) first.
- **Q5 `GetChildren()` name.** After F3, should `UStruct::GetChildren()` become UE's `Children` (UField*), with
  `GetChildFields()` removed? Recommendation: yes (UE naming), in the same round.
- **Q6 `ProcessEvent_Save` class check (C16)** is still the always-true comparison; the intended `this->IsA(Outer)`
  would reject interface functions the old SDK calls. Leave until the old SDK is gone? Recommendation: yes.
- **Q7 StaticClass() via StaticFindObject.** The old API's `FindClass("Class X.Y")` stays a GObjects scan (now with the
  short-name prefilter). Switching it to `StaticFindObject(ANY_PACKAGE, …)` + full-name verification would be much
  faster but calls into the engine from any thread (the engine aborts if that happens during GC on the game thread).
  Recommendation: only in the new generator's `StaticClass()` (already path-based).
