# MDML SDK generator — design draft

Status: **draft, not implemented** (2026-10-09). Decisions are in `docs/MODERNIZATION_PLAN.md` → decisions log.

## Why
The old generator (`BaseMod/src/Utils.h` → `Utils::Export`) wrote one `.h` + `.cpp` per class with getters/setters at
**fixed offsets** (`Read<T>(this + 1440)`). Two problems:
1. Size: every generated `.cpp` includes the whole SDK → `SDK.lib` ≈ 2.7 GB.
2. **Offsets go stale with game patches.** Confirmed crash (game 2.7.0.4): `BP_BaseCharacter_C::InventoryComponent`
   moved 1440 → 1456, BaseMod read the stats component instead and corrupted memory. The GI `Cheats` flag that BaseMod
   wrote at a fixed offset no longer exists at all.

## Goals
- Run **inside the game** from the MDML ImGui menu (DevTools mod); pick packages via **export lists**.
- Output **header-only** code per package (no `.cpp`, nothing to link) that targets the owner's **hand-written core**
  (`UE4::UObject`, `TArray`, `FString`, `FName`, math, … in `ModLoader/src/Engine/UE4/{CoreUObject,Containers,Math}`, exported from MDML.dll).
- **Survive game patches**: members resolved by name at runtime; function calls validated before calling.
- Generated output is not committed; mods regenerate/ship what they need.

## Reflection source: Dumper-7
Dumper-7 (`C:\dev\MDML\tools\Dumper-7`, built with `-p:PlatformToolset=v143`) provides the analysis we reuse:
object array/name pool access, `StructManager`/`MemberManager`/`EnumManager`/`DependencyManager`/`CollisionManager`/
`PackageManager`. Generators are pluggable (`Generator::Generate<T>()`, see `Generator/Public/Generators/*.h`) — we add
an **`MDMLGenerator`** next to `CppGenerator`. License: no license file, maintainer allows use in open-source projects
with proper attribution (issue #416) → credit in README, file headers, `THIRD_PARTY_LICENSES`.

Reference dump of the unmodified Dumper-7 CppGenerator: `C:\dev\MDML\dumps\4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\`
(2477 packages, how-to in `docs/REVERSE_ENGINEERING.md`).

## Output shape (proposal)
```cpp
// Medieval_Dynasty/BP_BaseCharacter.hpp  (generated, header-only)
namespace UE4 {
class ABP_BaseCharacter_C : public ACharacter {
public:
    static UClass* StaticClass() { MDML_STATIC_CLASS("BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C"); }

    // Member: offset resolved by property name on first use (reflection walk incl. super classes),
    // the dump-time offset 0x5B0 is only a fallback (logged) if the property is missing.
    MDML_MEMBER(class UInventoryComponent_C*, InventoryComponent, 0x5B0);   // -> __declspec(property) + cached offset
    MDML_BITFIELD_MEMBER(bIsDead, 0x5C1, 0x01);

    // Function: UFunction looked up by name once; ParamsSize and every param offset are checked against the
    // live UFunction on first call. Mismatch -> MDML log error, call is skipped (no memory corruption).
    void AddItemToInventory(FName ItemId, int32 Count, /*...*/);   // inline body via MDML_CALL helper
};
}
```
- `__declspec(property(get=…, put=…))` keeps call sites field-like: `player->InventoryComponent->...`.
- ScriptStructs (pure data such as `FST_InventoryItemsArray`) need a real layout to be used by value; plan: emit real
  layout + `static_assert(sizeof)` **and** a runtime size check against `UScriptStruct::PropertiesSize` at first use.
- Enums: plain `enum class` with the underlying type from reflection.
- Name collisions/dependency order: reuse Dumper-7's managers.

## Runtime helpers needed in the core (to be written)
- `FindPropertyByName(UStruct*, name)` — exists now in `UnrealType.h` (walks super classes; used by `GetVariable`).
- Offset cache per (class, property) — static local per accessor is enough.
- `MDML_CALL`: find UFunction, validate `ParamsSize`/param offsets/`ReturnValueOffset`, `ProcessEvent`, copy outs.
- Direct memory access instead of `Read/WriteProcessMemory` (decided; see code inventory C-findings).

## Open points for the implementation session
- Exact macro design and whether `MDML_MEMBER` resolves eagerly at module init or lazily.
- How mods declare which packages they need (export list file next to `mod.ini`?).
- Where the DevTools mod lives (new project `DevTools/`, off by default).
