# MDML SDK generator

Status: **part 1 implemented, not yet run in-game** (2026-10-10). Report: `docs/reports/sdk-generator-part1.md`.
Decisions: `docs/MODERNIZATION_PLAN.md` → decisions log ("SDK generator", "SDK member access", "SDK function calls",
2026-10-10 "SDK generator members" / "SDK package selection").

## Why
The old generator (`Mods/BaseMod/src/Utils.h` → `Utils::Export`) wrote one `.h` + `.cpp` per class with getters/setters at
**fixed offsets** (`Read<T>(this + 1440)`). Two problems:
1. Size: every generated `.cpp` includes the whole SDK → `SDK.lib` ≈ 2.7 GB.
2. **Offsets go stale with game patches.** Confirmed crash (game 2.7.0.4): `BP_BaseCharacter_C::InventoryComponent`
   moved 1440 → 1456, BaseMod read the stats component instead and corrupted memory.

## Pieces
| Piece | Where | What |
|---|---|---|
| Dumper-7 (vendored, unmodified) | `Dependencies/Dumper-7/` (`VENDORED.txt`: commit, file list, license note) | engine-core discovery (GObjects/GNames/offsets) + analysis managers (packages, structs, enums, members, name collisions, dependencies) |
| `MDMLGenerator` | `Mods/DevTools/src/Generator/MDMLGenerator.*` | our backend: plugs into `Generator::Generate<T>()`, emits one header per package |
| `SdkGenerator` facade | `Mods/DevTools/src/Generator/SdkGenerator.*` | analysis once per session, SEH guard, Dumper-7 `std::cerr` → our log; std-types-only API for the mod |
| `DevTools.Generator` | premake project (static lib, **C++latest**) | the three above; Dumper-7 needs C++20/23. No MDML headers in it |
| `DevTools` mod | `Mods/DevTools/src/DevTools.*`, `Mods/DevTools/Config/mod.ini` | C++17 mod DLL, **disabled by default**; ImGui window, export lists, game-thread scheduling |
| Runtime support | `Loader/ModLoader/src/Engine/MDML/GeneratedSupport.{h,cpp}`, `SDKPrologue.inl`, `SDKEpilogue.inl` | hand-written core used by the generated headers, exported from MDML.dll (`MDML_ENGINE_API`) |
| Offline proof | `Tests/SDKCompileTest/` | hand-written sample of the output (`Sample/`), compile-test DLL project, `compile_generated.py` |

Attribution: Dumper-7 by Encryqed/Fischsalat and contributors, used with the maintainer's permission for open-source
projects (issue #416). Credited in `VENDORED.txt`, in the file headers of `MDMLGenerator.*`/`SdkGenerator.cpp`
(adapted code) and in the banner of every generated header. README / `THIRD_PARTY_LICENSES` entry: see the report.

## Running it (in-game)
1. Enable DevTools: in `Content/Mods/DevTools/mod.ini` remove the `;` before `[Mod]` and `DLLPath=DevTools.dll`
   (and keep `DevTools = 1` in `Config/LoadOrder.ini`).
2. Start the game, **load a save** (Blueprint classes such as `BP_BaseCharacter` are only loaded in the world).
3. F1 → window "DevTools" → "SDK generator":
   - tick export lists (`Content/Mods/<Mod>/*.export`), and/or type package names in "Extra packages", and/or
     "Package picker" → "Analyze" → tick packages (can be saved as `<DevTools folder>/<name>.export`);
   - "Generate SDK". The game **freezes** while it runs (game thread). First run: Dumper-7 analysis + object dump.
4. Output: `<MDML.dll dir>/SDK-Out/<EngineVersion>-<GameName>/MDML-SDK/` (i.e. `Binaries/Win64/SDK-Out/...`), never
   inside `Content`, never in the repo. Dumper-7 rotates an existing folder to `*_OLD`. Also written there:
   `GObjects-Dump*.txt` (Dumper-7) one level up, `GenerationReport.txt` (packages, missing packages, skipped functions,
   opaque members) in `MDML-SDK/`.
5. Check: `python Tests/SDKCompileTest/compile_generated.py "<...>/MDML-SDK"` (every header in its own TU).

The analysis snapshot is taken once per game session (Dumper-7's managers initialize once); classes loaded later
need a game restart.

## Threading
Dumper-7 reads GObjects/GNames and calls `ProcessEvent` (game name/version, text offsets). Upstream runs that on its
own thread; inside MDML everything runs as **one task on the game thread** via `mdml::GameThread::Enqueue` (drained
in the UWorld::Tick hook), so GC and level streaming cannot run concurrently. The ImGui code (render thread) only
sets state and enqueues; the job writes progress/log lines under a mutex. Cost: the game freezes for the duration.

## Export lists
Each mod declares the packages it needs in `*.export` files next to its `mod.ini` (decision 2026-10-10). Format
(superset of BaseMod's old `.export` profiles, which were one package name per line):
```
; comment (# works too, also at line end)
BP_BaseCharacter
InventoryComponent, ST_InventoryItemsArray   ; several per line: space/tab/comma separated
```
Names are UPackage short names as shown in the picker (`Engine`, `CoreUObject`, `BP_BaseCharacter`, ...); matching
is exact first, then case-insensitive. Dependencies are added automatically (transitive closure over Dumper-7's
struct/class/parameter package dependencies). Example: `Mods/DevTools/Config/Example.export`.

## Output shape
One header per package, header-only, `namespace UE4`, against the core only (no old `Loader/SDK/` headers):
```
MDML-SDK/
  <Package>.hpp         one per package (requested + dependencies)
  NameCollisions.hpp    forward declarations of names that exist in several packages (UE4::<Package>::FName)
  MDML_SDK.hpp          includes all headers of this run (convenience; prefer single packages)
  GenerationReport.txt
```
Each `<Package>.hpp`: banner (Dumper-7 credit, game version) → `#include "MDML/GeneratedSupport.h"`,
`"NameCollisions.hpp"`, the dependency packages → `#include "MDML/SDKPrologue.inl"` (saves and undefines windows.h
value macros such as `ERROR`, `DELETE`, `IN`, `OUT`, `TRUE`, `small`, `interface`; `SDKEpilogue.inl` restores them)
→ enums → structs (dependency order) → classes (dependency order). Verbatim example: `Tests/SDKCompileTest/Sample/`.

**Enums**: `enum class E_Ownership : uint8_t { ... }`, underlying type from Dumper-7's EnumManager (size found from
properties using the enum, signedness). The underlying type is never widened (must match the in-struct layout); entries whose value does not fit (the synthetic `_MAX = 256` of uint8 enums such as `ESkinCacheUsage`) are replaced by a `// NAME = N dropped` comment and listed in the GenerationReport notes.

**ScriptStructs** (used by value): real layout with explicit `_mdml_Pad_*` bytes and bit paddings (logic adapted from
Dumper-7's CppGenerator), followed by `static_assert(sizeof/alignof/offsetof)` against the dump. `MDML_STRUCT(...)` adds
only static members: `StaticStruct()` (by path) and `ValidateLayout()` (live `PropertiesSize` vs `sizeof`).

**UClasses** are offset-free views (no data members; `std::is_empty` holds), first line `MDML_CLASS(RawName, Path)`
(`StaticClass()` via `StaticFindObject(path)`, cached once found). Members:
```cpp
MDML_MEMBER(InventoryComponent, "InventoryComponent", 0x05B0, class UInventoryComponent_C*)  // __declspec(property)
MDML_MEMBER_ARRAY(Name, "Raw", 0x0100, 4, float)                                             // Obj->Name[i]
MDML_BITFIELD(bHidden, "bHidden", 0x0058, 0x20)                                              // byte offset + mask
```
Accessors read like fields (`Char->InventoryComponent`, `Char->bHidden = true`, `Char->Tags.Num()`). On first use per
accessor the offset is **resolved by property name** (`ResolveMemberSlot`): the object's class chain is walked to the
declaring class (raw UE name), its own property with that raw name is taken (falls back to any class in the chain).
Results, cached per accessor (function-local static slot, per mod DLL):
- found, same size → live offset (an `Info` log line if it moved since generation);
- not found → **dump offset as fallback, `Warn` log** (owner decision);
- found but `ElementSize`/`ArrayDim` differ → accessor **disabled**, `Error` log once, reads/writes go to a zeroed sink
  (no memory corruption);
- null object → error log once, sink, nothing cached.
Types the core has no C++ type for (FieldPath, sparse delegates, ...) become `::mdml::sdk::TOpaque<Size, Align>`.
Class properties become `class UClass*` (the core's `TSubclassOf` is not default-constructible), soft class pointers
`TSoftObjectPtr<UClass>` (same layout).

**Functions** become inline member functions (static for `FUNC_Static`):
```cpp
void AddItemToInventory_BPI(bool Server, FName ItemId, /*...*/ int32_t* AddedAtIndex) {
	struct _mdml_FParams { /* params only, dump layout + padding */ };
	static_assert(offsetof(_mdml_FParams, ItemId) == 0x0004, "...");
	static constexpr ::mdml::sdk::FParamDesc _mdml_p[] = { { "Server", 0x0000, 0x0001 }, /*...*/ };
	static constexpr ::mdml::sdk::FFunctionDesc _mdml_f{ _mdml_OwnerName, "AddItemToInventory_BPI", 0x0030, sizeof(_mdml_FParams), _mdml_p, 14, ::mdml::sdk::FunctionDesc_None };
	static ::mdml::sdk::FFunctionSlot _mdml_s;
	_mdml_FParams _mdml_Parms{}; /* copy-in */
	if (!::mdml::sdk::CallFunction(this, _mdml_s, _mdml_f, &_mdml_Parms)) return;
	/* copy-out of out-pointer / non-const reference params, return value */
}
```
`CallFunction` looks the UFunction up once (`StaticFindObject(nullptr, DeclaringClass, Name)`, declaring class found in
the object's chain; interface functions are looked up on the object's class at every call), then **validates on first
call**: live `ParmsSize` ≤ generated buffer, every live parameter (`CPF_Parm`) exists in the descriptor with the same
offset and size, same parameter count. Mismatch → `Error` log with details, slot disabled, call skipped, the function
returns a value-initialized result. Calls run raw `ProcessEvent` (the core's `ProcessEvent_Save_impl` without its
checks); a warning is logged once if called off the game thread. Static functions run on the class default object.
Parameter typing (const/ref/out-pointer rules) follows Dumper-7's CppGenerator.
Const pointer parameters (`const T*`, `const T*&`) stay const in the public signature; the copy-in into the params struct (whose fields are never const) emits `_mdml_Parms.X = const_cast<T*>(X);`.

**Predefined (hand-written) types win**: reflected types whose unique name the core already defines are not emitted
(`UObject`, `UClass`, `UFunction`, ..., `FVector`, `FRotator`, `FTransform`, `FGuid`, `FKey`, the CoreTypes.h structs
and enums; list in `MDMLGenerator.cpp`). Instead the header gets `MDML_PREDEFINED_CHECK(FVector, 0x000C, 0x04)` (a
`static_assert` of the core type against the live layout; math/containers always, the old CoreTypes.h structs only with
`MDML_SDK_STRICT_PREDEFINED_CHECKS`). Engine stubs that drag in the old SDK (`World.h`, `GameState.h`, ...) are **not**
predefined: `UWorld`, `ULevel`, ... are generated. Do not include old `Loader/SDK/` headers and new generated headers in the
same translation unit (same names in `namespace UE4`).

## Offline proof
- `DevTools.SDKCompileTest` (built with the solution, output `bin/.../Tests/SDKCompileTest.dll`, never deployed): compiles
  `Sample/` (trimmed BP_BaseCharacter, InventoryComponent, ST_* structs, E_Ownership, Engine/CoreUObject/Medieval_Dynasty
  parts, a name collision, a static array, an opaque member, bitfields, static/const/out-param functions) with only the
  core include dirs and links MDML.lib, so every exported helper resolves.
- `compile_generated.py <folder>`: compiles each `<Package>.hpp` of a folder in its own TU (MSVC via vswhere, C++17,
  core include dirs, same disabled warnings as the solution). Sample: 9/9, 0 warnings.

## Open points / next parts
See the report (`docs/reports/sdk-generator-part1.md`): first in-game run, migrating BaseMod/examples to the new
headers, deleting the old SDK, DevTools validation report, moving BaseMod's dev tools into DevTools.
