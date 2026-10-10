# Design: Live View (live object viewer/editor)

Status: **design draft, not implemented** (2026-10-10). Phase 3 feature. Nothing here is decided until the owner answers
the questions in the last section. Follows the project rule "order: fix, cleanup, features": do not start before the
Phase 2 DevTools split exists.

Related: `docs/design/ufunction-hooks.md` (function watches), `docs/design/hot-reload.md` (DevTools must be reloadable),
`docs/reports/wave2/gamethread-queue.md` (threading contract), `docs/reports/code-inventory.md` section 6 (BaseMod object browser).

## 1. Goals
1. Find any live `UObject` fast (by name, class, package, outer, flags, "has property X").
2. Inspect it: class chain, all properties (including inherited, structs, arrays, object references), functions.
3. **Edit** property values in place, with undo for the last edit.
4. **Watch** properties (value over time, change highlighting) and functions (call counter, last parameters).
5. **Call** any `UFunction` on a selected object with typed parameter widgets, show return and out values.
6. Navigate: follow object references, class/CDO/outer/package, back/forward history.
7. Be safe on the game: never touch UObjects off the game thread, never keep raw `UObject*` across frames.

Non-goals (v1): editing TMap/TSet, undo history beyond one step, property search over the whole heap, a Blueprint graph
viewer, remote/networked access, picking actors by clicking in the 3D world (see phase 5).

Inspiration: UE4SS `LiveView` (`tools/RE-UE4SS-src/UE4SS/src/GUI/LiveView.cpp`, 3.5k lines, MIT). Worth copying in spirit,
not code: composable search filters (instances-only, CDO-only, class-name list, has-property, max value size), filters and
watches persisted as JSON, a history menu, watches for properties **and** functions, `GUObjectArray` listeners to keep the
result list in sync, a separate `UFunctionCallerWidget`. To avoid: UE4SS runs its GUI on its own thread and touches UObjects
from it; MDML must not.

## 2. UX
One dockable ImGui window group (ImGui 1.92 docking is approved for Wave 4), opened from the F1 loader window ("DevTools"
section) or a hotkey. Windows:

| Window | Content |
|---|---|
| **Search** | Text box (substring, `*` wildcard, `class:`/`pkg:`/`has:` prefixes), preset buttons (Actors, Classes, Blueprints, DataTables, Packages, CDOs, Instances) replacing BaseMod's five lists, filter checkboxes, result table (name, class, package, address; virtualized with `ImGuiListClipper`), "N results of M objects", progress while indexing. |
| **Inspector** (several, pinnable) | Header: full name, address, class, outer, flags, `Index/Serial`. Tabs: Properties, Class (super chain, own functions), Functions, Raw (hex of the first N bytes), References. History arrows. |
| **Watches** | Table of watched properties/functions: object, path, current value, previous value, "changed N ms ago", pause/remove, group. Optional "log on change". |
| **Function caller** | Opened from a function row: parameter widgets (same widgets as the property editor), "Call", output/return values, call log. |

Property editor widgets by `FProperty` type: bool (checkbox, bitfield aware), int/uint/int64 (drag/input), float/double,
`FName` (text, created via `FName(const char*)`), `FString` (text), enum/byte-enum (combo from `UEnum`), `FObjectProperty`
(shows full name, click opens a new inspector, "set to selected", "null"), struct (collapsible, recursive; `FVector`,
`FRotator`, `FLinearColor`, `FTransform` get compact drag widgets, replacing `Utils::Gui::UE4ActorTransformEdit`), `TArray`
(length + collapsible elements, element edit; add/remove in v2), text/map/set/delegate: read-only summary in v1. Edited
values are applied on commit (Enter/focus lost), not per keystroke. Const/`CPF_EditConst` values are greyed but can be
overridden with a "force" toggle.

Safety UI: a "Read-only mode" switch (proposal: on by default) so a stray click cannot write memory; red "unsafe" badge on
pointer/container edits; every write is logged (object, path, old, new).

## 3. Architecture

### 3.1 Placement
- New code lives in the **DevTools** mod (`DevTools/`, off by default per the decisions log). The DevTools project is created
  by the SDK-generator part-1 branch; it does **not** exist on `modernize` at 158ba5e. This doc assumes it exists.
  BaseMod keeps its game-API helpers.
- Only reflection from the engine core exported by MDML.dll is used: `UObject`, `UClass`, `UStruct`, `FField`/`FProperty`
  (+29 subclasses), `UFunction`, `UEnum`, `FName`, `GObjects` (`FChunkedFixedUObjectArray`, `FUObjectItem::SerialNumber`).
  **No dependency on the generated SDK** (BaseMod's browser already works like this, which is why it survived the stale SDK).
- Small core/loader additions: see 3.6.

### 3.2 Threading model (the important part)
Facts from the existing code: `DrawImGui` runs on the **render thread** (D3D11 Present hook); the `UWorld::Tick` hook runs on
the **game thread** and drains `mdml::GameThread` first; UObjects and GC belong to the game thread
(`gamethread-queue.md`). BaseMod's browser breaks this today (static `std::vector<UObject*>` filled and dereferenced while drawing).

Rule: **the UI thread never dereferences a UObject, FProperty or UFunction.** Two halves:

```
 game thread (UWorld::Tick hook)                    render thread (DrawImGui)
 +---------------------------------+  snapshots   +------------------------------+
 | LiveViewService                 | -----------> | LiveViewUI                   |
 |  - object index (time-sliced)   | (immutable,  |  - search box, tables        |
 |  - inspector refresh            |  swapped)    |  - draws snapshots only      |
 |  - watch polling                | <----------- |  - turns clicks into Requests|
 |  - executes Requests            |  requests    +------------------------------+
 +---------------------------------+
```
- **Requests** (UI to game): `Search{filter}`, `Open{ObjectRef}`, `SetProperty{ObjectRef, path, value}`, `Call{ObjectRef, fn, params}`,
  `AddWatch`, `Refresh`. Sent via `mdml::GameThread::Enqueue` plus a mutex-protected mailbox so the same request type can be
  coalesced (only the latest `Open` per inspector). Remember: tasks run on the *next* tick, never inline.
- **Snapshots** (game to UI): plain structs of `std::string`, numbers and `ObjectRef`, published as
  `std::shared_ptr<const T>` swapped under a tiny mutex (or `std::atomic<std::shared_ptr>` with C++20). The UI keeps its shared_ptr for the frame.
- **`ObjectRef`** = `{int32 index, int32 serial}` (from `FUObjectItem`). Resolution to `UObject*` happens only on the game
  thread inside the task that uses it: bounds check, non-null item, equal serial, no pending-kill/unreachable flags. A stale
  ref shows "object no longer exists" instead of crashing.
- Property paths are stored as names plus array indices (`Inventory.Items[3].Count`), not as `FProperty*`, and re-resolved per
  refresh (metadata cached per `UStruct*`).
- A per-tick budget (proposal 1.5 ms) bounds game-thread work. Refresh rate per inspector: every tick / 100 ms / 1 s / manual.
  Only **visible** inspectors and watches refresh.
- GC runs on the game thread, our tasks run inside `UWorld::Tick`, so a task cannot be interrupted by a GC pass; snapshots are
  copies, nothing holds `UObject*` between ticks, so no `AddToRoot` is needed.
- Optional SEH (`__try`) in one helper around reflection walks, so a corrupt object yields "unreadable" (open question).

### 3.3 Object index and search
Problem: hundreds of thousands of objects; BaseMod rebuilt O(N) lists with `GetFullName()` (outer chain, string allocations).

- `ObjectIndex` (built on the game thread): flat `vector<Entry{ObjectRef ref; uint32 nameId; uint32 classNameId; uint32 outerIndex; uint32 flags;}>`.
  Strings are interned once through a `FName ComparisonIndex -> std::string` cache (the name pool is much smaller than the object count).
- Built **time-sliced** over several ticks (cursor into the chunked array), then maintained by scanning new slots (growth of
  `NumElements`) and validating removed ones lazily (serial check). A "Rebuild" button forces a full rescan. UE4SS instead
  registers object-array create/delete listeners; MDML has no such hook yet (open question).
- Search runs on a **worker thread over the index copy** (no engine access); plain substring over lower-cased interned strings
  is a few ms for 400k entries. Full names are built lazily for visible rows only.
- Filters (composable): name text, class-name list (+ "include subclasses" via cached `IsA` over interned ids), package prefix,
  instances / CDOs / both, has-property X, has-function X, flags. Saved filter sets as JSON next to the DevTools config
  (nlohmann/json, approved in Wave 4).

### 3.4 Reflection walk and value formatting
- Property list: walk `UStruct` children (`FField::GetNext`) along `GetSuperStruct()`; record name, type, offset, element size,
  array dim, flags, referenced enum/struct. Cached per `UStruct`, shared by all inspectors.
- Read: `base + FProperty::GetOffset()` through a `PropertyReader` switching on the subclass, bounded (max string length,
  first 64 array elements, `MaxValueSize` like UE4SS). Result is a copied `Value` variant.
- Write: `PropertyWriter` with the same switch: parse and type-check text, size check, write on the game thread; keep the old
  value for one-step undo. `FString`/`TArray` growth needs the engine allocator (3.6).
- Bool/bitfield: `FBoolProperty` byte offset and mask (core already exposes them).

### 3.5 Calling functions
1. Inspector lists functions of the class chain (`UFunction` children; flags, parameters from `CPF_Parm/OutParm/ReturnParm`).
2. Caller window allocates a zeroed buffer of `GetParamsSize()`; widgets edit fields in it with the same `PropertyWriter`.
3. "Call" enqueues a game-thread task: resolve `ObjectRef`, re-check the function belongs to the object's class chain, then
   `UObject::ProcessEvent_Save(function, buffer, checkClass=true, checkParamSize=true)` (existing validating variant, same rule as
   the SDK-generator design). Out/return values are copied into the snapshot.
4. Free allocations made by the call (FString/TArray out params) with the engine allocator, then release the buffer.
5. Native/net/RPC functions get a warning badge; `ExecuteUbergraph_*` and similar internals are blocked by default.

### 3.6 Core / loader additions needed (outside DevTools)
- Exported `UE4::FMemory::Malloc/Realloc/Free` (engine allocator, resolve via PDB, add to `mdml::Addresses`). Until then v1 edits POD only.
- `SafeRead<T>` / `IsReadable(ptr,size)` (`VirtualQuery` or SEH) as the explicit "scanning" variant already proposed in the code inventory section 4.4.
- `IsValidRef(index, serial)` helper in the core (shared with the hook registry and watches).
- Optional: object-array listener (hook `UObjectBase::AddObject/DeleteObject`, or polling).
- Optional: a stable `mdml::dev::ObjectService` (find object, get/set property by path) exported from MDML.dll so Lua and other
  mods reuse it, with only the UI in the reloadable DevTools (see `hot-reload.md`).

### 3.7 Relation to BaseMod's object browser
`BaseMod/src/BaseMod.cpp:264-540` and `Utils::Gui::*`:

| BaseMod feature | Live View replacement |
|---|---|
| Five collapsible lists | Search presets |
| `UE4ClassInfo` | Inspector "Class" tab |
| `UE4ActorTransformEdit` | Struct widget for `FTransform`/`FVector` plus an "Actor" quick bar |
| DataTables rows | Inspector on a `UDataTable`: row list; a selected row is shown as a struct through the table's `RowStruct` (`UDataTable::GetRowMap` exists in the core). Generic, no generated `FST_*` type needed |
| `needObjectReload`, static vectors | Gone (index service) |
| SDK exporter, INI browser/editor | **Not** Live View; remain separate DevTools tools |

Plan: build Live View next to the old browser, reach parity, then delete the browser from BaseMod (owner confirms).

## 4. Risks
| Risk | Mitigation |
|---|---|
| Editing memory corrupts the game | Read-only default, type-checked writer, game thread only, one-step undo, "unsafe" badges, write log |
| Dangling `UObject*` | Only `ObjectRef` outside the game thread; serial check on every resolve |
| Frame hitches from indexing/refresh | Time-sliced with per-tick budget; refresh only visible panels |
| Bad function parameters crash | Zeroed buffer + `ProcessEvent_Save` validation; optional SEH; internals blocked |
| 4.27 `FField` layout assumptions | Uses the PDB-verified core (code inventory Appendix A) |
| Engine allocator needed for FString/TArray | Prerequisite of phase 2b; POD only until then |
| Index memory/CPU (400k entries) | ~40 bytes per entry plus interned strings; measure in phase 1 |
| Another mod changes objects concurrently | Accept; watches show the last observed value |
| DevTools hot reload with open windows | Persist window/watch state to JSON on unload (`hot-reload.md`) |
| Adapting UE4SS code | Inspiration only; if code is adapted: MIT notice + THIRD_PARTY_LICENSES |

## 5. Phased plan
| Phase | Scope | Exit criterion |
|---|---|---|
| **0 Prerequisites** | DevTools project exists, snapshot+request threading adopted, `ObjectRef`/`IsValidRef`, `SafeRead` | builds; in-game: ref goes stale after a level change |
| **1 Read-only browser** | Time-sliced index, search + presets, inspector (Properties/Class/Functions), history, formatting of all property types | replaces BaseMod browser for viewing; no hitch above budget |
| **2a Editing (POD)** | Writer for bool/int/float/enum/FName, read-only switch, undo-1, write log | edit and revert a live value |
| **2b Editing (strings/arrays)** | Engine allocator, FString/TArray element edit | edit a string field |
| **3 Watches** | Property watches (poll), change highlight, JSON persistence | watch survives a level change by re-resolving |
| **4 Function caller + function watches** | Caller window; function watches on `ufunction-hooks.md` phase 1 | call a harmless BP function, see the return value |
| **5 Extras** | Transform quick bar/gizmo, actor picking, DataTable row editor, reference graph, service API for Lua, listener-based index | per owner priority |

## 6. In-game test sketch (implementation session)
Open Live View in a loaded save, search `BP_Player`, open CDO and instance, change a float, watch it, change level and confirm
the watch re-resolves or shows "gone", call a harmless function, rebuild the index, quit: no crash, clean shutdown, frame time
unchanged with the window closed.

## 7. Open questions for the owner
(Nothing below is decided; bracketed text is only the author's suggestion.)
1. **Priority:** is Live View the first Phase 3 feature? Hooks (function watches) and hot reload (faster DevTools iteration) both help it. [hooks API first, Live View next, hot reload alongside]
2. **Where does the logic live?** Stable service (index, property get/set by path) in MDML.dll so Lua/other mods can use it, UI in DevTools, or everything in DevTools? [service in MDML.dll]
3. **Default safety:** start read-only on every launch? Function calls always available or behind a config flag?
4. **SEH wrapping** of reflection walks and `ProcessEvent` calls (survives access violations, engine may be left inconsistent): yes/no, or reads only?
5. **Object lifetime tracking:** poll `NumElements` (no new hooks) or hook `UObjectBase::AddObject/DeleteObject` (exact events, more RE and risk)?
6. **Engine allocator:** OK to resolve `FMemory::Malloc/Free` via PDB and export wrappers from the core? Otherwise no string/array editing.
7. **BaseMod browser:** delete it after Live View reaches parity (author's plan), or keep both for a while?
8. **Persistence:** JSON files for filters/watches next to the DevTools config acceptable?
9. **UX:** own hotkey or only via the F1 window? Dockable multi-window layout or one fixed window?
10. **Actor picking** (click in world) and transform gizmos: wanted, or out of scope?
