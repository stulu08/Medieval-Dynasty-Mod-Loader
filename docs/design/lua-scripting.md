# Lua scripting for MDML mods — design

Status: **proposal, nothing decided** (2026-10-10; spike results added 2026-10-13, see §13). Phase 3 feature from `docs/MODERNIZATION_PLAN.md`.
Every choice marked **(OQ-n)** is an open question for the owner, listed again in §14. Where the spike had to pick
something to compile at all, it is marked *spike default* and can be changed.

Inputs read for this proposal: `CLAUDE.md`, `docs/MODERNIZATION_PLAN.md` (decisions log), `docs/SDK_GENERATOR.md`
(reflection-by-name direction), `docs/reports/wave2/*` (engine core exported from `MDML.dll`, init thread,
`mdml::GameThread`), `docs/reports/loadorder-and-dump-notices.md` (`Config/LoadOrder.ini`), the current engine core in
`ModLoader/src/Engine/UE4/CoreUObject/*`, `HooksManager.cpp`, and UE4SS's Lua implementation and docs
(`C:\dev\MDML\tools\RE-UE4SS-src`, MIT; used as inspiration only, no code taken).

---

## 1. Goals and non-goals

Goals
- Mods written as plain `.lua` files: no Visual Studio, no SDK build, no `SDK.lib`. Drop a folder into `Content/Mods`.
- **Patch-proof by design**, like the SDK generator decision: everything is resolved **by name through UE reflection at
  runtime** (properties, functions, classes). A game update that moves members does not break a script, a missing
  member is a Lua error with a clear message, never memory corruption.
- Safe by default: a broken script must not crash the game. Errors are caught, logged with mod name + traceback, and
  only that mod is affected.
- Fits the existing loader: load order from `Config/LoadOrder.ini`, game-thread rule via `mdml::GameThread`, logging via
  the MDML logger, later UI in the F1 window.
- Familiar for people who know UE4SS Lua (similar concepts: find objects, property access by name, hooks on UFunctions,
  run in game thread, key binds), but MDML's own API and implementation.

Non-goals (for now)
- Compatibility with UE4SS Lua mods (see OQ-6 for the question whether a thin shim is wanted).
- Defining new UClasses / Blueprint-visible types from Lua.
- Multiplayer/network concerns (Medieval Dynasty co-op exists, but MDML does not handle replication today).
- Lua ImGui in the first phases (planned later, §9).

## 2. Runtime choice (OQ-1, OQ-2)

### 2.1 Lua implementation

| | **Lua 5.4.9** (PUC) | Lua 5.5.1 (PUC) | LuaJIT 2.1 (rolling) |
|---|---|---|---|
| Release | 2026-08-10, mature 5.4 line | 2026-07-24, new major (5.5.0 earlier) | no tagged releases, rolling branch (last commit 2026-09) |
| License | MIT | MIT | MIT |
| Language | 5.4: integers (int64) + floats, `<close>`, `<const>`, generational GC | 5.5: + `global` declarations, compact arrays, incremental major GC; small C-API changes (`lua_newstate` seed, …) | Lua 5.1 + some 5.2 extensions; no native int64 (needs FFI `cdata`) |
| Speed | interpreter, good enough | similar to 5.4 | much faster (JIT), FFI |
| Build | ~35 `.c` files, trivial in premake (C or C++) | same | own build script (`msbuild.bat`/DynASM), x64 needs GC64 mode; does not compile as C++ |
| Binding-lib support | sol2 ✓, LuaBridge3 ✓ | sol2 ✗ (open issues "Support Lua 5.5"), LuaBridge3 ✓ | sol2 ✓ (some known LuaJIT issues), LuaBridge3 ✓ |
| UE4SS uses | 5.4.7 | — | — |

Recommendation: **Lua 5.4.9** (*spike default*).
- UE `int64`/`uint64` properties and IDs map to native Lua integers; with LuaJIT they would be `cdata` and awkward.
- The hot path of this system is reflection (name lookup, property marshalling, `ProcessEvent`), not Lua bytecode, so the
  JIT speed gain is mostly irrelevant. Typical scripts run a few callbacks per frame.
- Can be compiled **as C++** (see 2.3); LuaJIT cannot.
- Lua 5.5 is attractive but brand new and the most popular binding (sol2) does not support it yet. Upgrading 5.4 → 5.5
  later is a small change for scripts (5.5 is mostly compatible) as long as the binding library supports it.

### 2.2 Binding library

Most of MDML's binding is **dynamic** (a `UObject` userdata whose `__index`/`__newindex` resolve names through reflection),
so the binding library only has to do the static parts (wrapper types, free functions, protected calls, error handlers).

| | **sol2 v3.3.0** | LuaBridge3 (3.0-rc12) | Raw Lua C API (own thin layer) |
|---|---|---|---|
| License | MIT | MIT | — (Lua MIT) |
| C++ | C++17; builds as C++20 with VS 2026 / v145, 0 warnings (spike, §13) | C++17/20/23 | any |
| Maintenance | last release 2022-06, last commit 2025-03; no Lua 5.5 support | active (commits 2026-09), supports 5.1–5.5, LuaJIT, Luau | us |
| Size | header-only, `sol.hpp` single header ≈ 1 MB (+ `config.hpp`, `forward.hpp`); noticeable compile time per TU that includes it | header-only, smaller | none |
| Ergonomics | best in class: usertypes, overloads, `sol::protected_function` with error handlers, `sol::variadic_args`, automatic C++ exception → Lua error | good, a bit more manual; also exception → Lua error | verbose stack code; full control (UE4SS wrote its own "LuaMadeSimple" layer) |
| Lua as C++ | `SOL_USING_CXX_LUA=1` | supported | n/a |

Recommendation (weak): **sol2 v3.3.0** for now (*spike default*), because it keeps the binding code short and readable
(owner's learning project), and the spike shows it builds warning-free with VS 2026/v145 in C++20 (VS 2022 is no longer installed; nothing in it is v145-specific). Risks: no Lua 5.5, slow upstream.
Mitigation: keep sol2 confined to the `LuaScripting` project's binding `.cpp` files (never in public headers), so a later
swap to LuaBridge3 or a raw layer only touches those files. **LuaBridge3 is a serious alternative** if the owner prefers
an actively maintained library or wants Lua 5.5 from the start.

### 2.3 Build details (defaults, owner may veto)
- Lua vendored as source (`vendor/lua-5.4.9/src`, without `lua.c`/`luac.c`), built as a premake `StaticLib`, like MinHook.
- **Compiled as C++** (`compileas "C++"`, `SOL_USING_CXX_LUA=1`): `lua_error` then throws a C++ exception instead of
  `longjmp`, so C++ destructors (RAII in our bindings, `std::string`s) always run on Lua errors. The `Lua` project must
  use `/EHsc`, not the repo-wide `exceptionhandling "SEH"` (`/EHa`): under `/EHa`, Lua's internal `catch (...)` would
  also swallow access violations (spike finding, see the spike report §3.3).
- Dynamic CRT (`staticruntime "off"`), Release x64, same as every other project.
- Lua is linked **only** into the `LuaScripting` DLL (not into `MDML.dll`), so there is one copy of the Lua runtime and
  each `lua_State` lives and dies inside that DLL (no cross-DLL `lua_State` passing).

## 3. Where it lives (OQ-3)

| Option | Pros | Cons |
|---|---|---|
| **A. `LuaScripting` core mod** (`Content/Mods/LuaScripting/LuaScripting.dll`, new premake project) — *recommended* | MDML stays lean; Lua is optional and can be disabled with one line in `LoadOrder.ini`; dogfoods the exported MDML API (engine core, `mdml::GameThread`, hook API) and so pushes that API to be good enough for third-party C++ mods too; can be rebuilt/redeployed alone | needs a few new exports from MDML (hook API — ☑ exists as `mdml::Hooks` —, load-order query, a "mod discovered" list, logger access); Lua mods depend on LuaScripting being enabled |
| B. Inside `MDML.dll` | direct access to internals, no new exports; one DLL to deploy | MDML grows (+Lua runtime, +sol2 compile time); harder to disable; mixes "loader" and "feature" again, against the Wave 2 layering |

With option A, LuaScripting is a normal core mod: loaded by `ModLoader::LoadMods` (BaseMod first, then load order), gets
the usual `Mod` events (`InitializeMod`, `InitGameState`, `BeginPlay`, `Tick`, `DrawImGui`). It then discovers and
starts the Lua mods itself, in load-order order.

Required MDML changes for option A (small, all in the spirit of decisions already taken):
1. **Exported hook API** (decided 2026-10-10; ☑ already implemented and merged as `mdml::Hooks`, see `docs/reports/hook-api.md`): `mdml::Hooks::Add(target, detour, &orig, name)` etc.
2. **Exported load-order query**: `LoadOrder` is not exported today. Add e.g.
   `LOADER_API std::vector<LoadOrder::Entry> mdml::GetModOrder()` (enabled flag + name + folder path).
3. **Lua-mod discovery in `LoadOrder::ScanMods`**: today a folder is a mod if it has `mod.ini` or `<Folder>/<Folder>.dll`.
   Add: or `Scripts/main.lua` (OQ-8), so Lua-only mods get a `Name = 1` line and can be disabled/ordered.
4. Shared UFunction hook infrastructure (§7), useful for C++ mods too ("hook arbitrary UFunctions" is its own Phase 3
   item) — better in MDML than in LuaScripting.
5. Engine helpers that any by-name scripting needs (§6.6): `FMemory::Malloc/Free` (PDB symbols), FName creation,
   weak object validation (index + serial number).

## 4. Mod layout and load order (OQ-8)

```
Content/Mods/
  LuaScripting/                 <- the runtime (core mod, DLL)
    LuaScripting.dll
    mod.ini
  MyLuaMod/
    mod.ini                     <- optional? (OQ-8) name/version/author, [Lua] settings
    Scripts/
      main.lua                  <- entry point, run once at startup
      util.lua                  <- require("util") resolves inside Scripts/
```

- A folder with `Scripts/main.lua` is a Lua mod. Its name in `LoadOrder.ini` is the folder name (same rule as other mods).
- `LoadOrder.ini` `= 0` disables it (consistent with "disabled = whole folder"). A folder can be a Lua mod **and** a
  logic/overwrite mod at the same time (e.g. a Lua script that drives a Blueprint `ModActor`).
- Start order = `LoadOrder.ini` order. All `main.lua` files run in `InitializeMod` order (early, before a world exists,
  so `main.lua` should register callbacks rather than touch the world; see §8.1). Proposal: run them on the game thread
  at the first `Tick` (safer, UE fully up) — OQ-8b.
- Suggested `mod.ini` keys (all optional):
  ```ini
  [Lua]
  Entry=Scripts/main.lua        ; default
  ; AllowUnsafe=0               ; see §11, only if the owner wants a per-mod switch
  ```

## 5. Architecture inside LuaScripting

```
LuaScripting.dll
 ├─ LuaRuntime        one per process: list of LuaMods, start/stop/reload, F1 status, owns hook registrations
 ├─ LuaMod            one per Lua mod: its own lua_State (OQ-5), env, owned callbacks/hooks/keybinds/timers, error state
 ├─ Bindings/
 │   ├─ ObjectBinding    UObject userdata: __index/__newindex/__eq/__tostring/methods, weak handle
 │   ├─ PropertyMarshal  FProperty <-> Lua value conversion (table-driven by FProperty class)
 │   ├─ FunctionCall     UFunction call via ProcessEvent with parameter validation
 │   ├─ StructView/ArrayView  (phase S3)
 │   ├─ Globals          Log, FindObject, FindFirstOf, ..., GameThread, Timer, Keys, Events, Hooks
 │   └─ Reflection cache (UClass*, name) -> FProperty*/UFunction*  (lazy, invalidated on reload/level change)
 └─ uses MDML exports: engine core (UObject, UClass, FProperty, FName, ProcessEvent), mdml::GameThread, hook API, logger
```

The spike implements `ObjectBinding`, `PropertyMarshal` (scalar/bool/string/object), `FunctionCall` (with validation),
per-mod states, error isolation, a mock game-thread queue and mock hooks, against a **mock reflection** model shaped like
the engine core (`UClass` → `FProperty` chain with name/offset/type, `UFunction` with params/`ParamsSize`/return offset).

## 6. Proposed Lua API (draft, OQ-6 for naming)

Naming proposal: a few small global tables (`Log`, `Hooks`, `Events`, `GameThread`, `Timer`, `Keys`, `Mod`) plus a
handful of global functions for objects. All names are a proposal.

### 6.1 Mod info and logging
```lua
Mod.Name        -- "MyLuaMod" (folder name)
Mod.Dir         -- absolute path of the mod folder
Log.Info("Player has {} hp", hp)   -- fmt-style {} placeholders, or plain strings
Log.Warn(...) ; Log.Error(...) ; Log.Debug(...)
print(...)      -- = Log.Info with tab-joined tostring() args
```
Lines go to the MDML log with a `[Lua:MyLuaMod]` prefix (and optionally to a per-mod log file, like `CreateLogger`).

### 6.2 Finding objects
```lua
local pc   = FindObject("PlayerController /Game/Maps/World.World:PersistentLevel.BP_PlayerController_C_0") -- full name
local cls  = FindClass("Class /Script/Engine.Actor")         -- or "BlueprintGeneratedClass /Game/....BP_X_C"
local char = FindFirstOf("BP_BaseCharacter_C")               -- first live, non-default instance by class name
local all  = FindAllOf("BP_Animal_C")                        -- array table (empty table, never nil)
local obj  = StaticFindObject("/Script/Engine.Default__GameplayStatics")   -- engine StaticFindObject (fast)
local a    = LoadObject("/Game/Mods/MyMod/Content/BP_Thing.BP_Thing_C")    -- StaticLoadObject (game thread)
```
Notes: `FindFirstOf`/`FindAllOf` walk `GObjects` (as `GetAllObjectsOfType` does today) — expensive; documented as "not
every frame". A class-name → `UClass*` cache makes repeated calls cheaper. `NotifyOnNewObject` (§7.4) is the cheap way
to track instances.

### 6.3 UObject wrapper
```lua
obj:IsValid()           -- false once the object was garbage collected / pending kill (weak handle, §6.6)
obj:GetName() ; obj:GetFullName() ; obj:GetClass() ; obj:GetOuter()
obj:IsA("Actor")        -- class short name, full name or a UClass wrapper
obj.Health              -- property read by name (reflection, super classes included)
obj.Health = 100        -- property write; type-checked: obj.Health = "x" -> Lua error "Health is FloatProperty, got string"
obj:GetPropertyType("Health") --> "FloatProperty"  (debug helper)
obj:K2_GetActorLocation()         -- UFunction call by name via ProcessEvent (§6.4)
obj:Call("K2_GetActorLocation")   -- explicit form, for names that clash with wrapper methods
obj == other                       -- same UObject
tostring(obj)                      -- "UObject(BP_BaseCharacter_C_0 : BP_BaseCharacter_C)"
```
Lookup order for `obj.Name`: wrapper method (`IsValid`, `GetName`, …) → reflected property → reflected UFunction (returns
a bound callable). Unknown name → **Lua error** (not `nil`), because silent `nil` hides typos and patch breakage
(OQ-6b: UE4SS returns an "invalid object" instead; error vs. nil is a style decision). `obj:Has("Name")` checks without
raising.

Resolution is **lazy and cached** per `(UClass*, name)` → `FProperty*`/`UFunction*`, matching the SDK generator decision
("offsets resolved by property name lazily on first use and cached").

### 6.4 Calling UFunctions
`obj:FunctionName(a, b, ...)` →
1. find `UFunction` by name on the object's class chain (cached);
2. walk its parameter `FProperty` children (`CPF_Parm`), split into input / out / return (`CPF_OutParm`, `CPF_ReturnParm`);
3. **validate**: argument count = number of input params (missing → error; extra → error), each Lua value convertible to
   the param's property type, every param `offset + size <= ParamsSize`;
4. allocate a zeroed, 16-byte aligned buffer of `ParamsSize`, write inputs with the same marshaller as property writes;
5. `ProcessEvent(obj, func, buffer)` (game thread only, §8);
6. return the return value first, then out params in declaration order (`local ok, outHit = obj:LineTrace(...)`);
7. destroy params that own memory (`FString`/`TArray` buffers allocated by the engine → `FMemory::Free`).

This is the Lua twin of the decided "generated ProcessEvent wrappers validate ParamsSize/param offsets and abort with a
log error on mismatch" — except here there is no stale layout at all, the layout *is* the live reflection data.

### 6.5 Type mapping (FProperty → Lua)

| FProperty | Lua read | Lua write | Phase |
|---|---|---|---|
| Bool (incl. bitfield: `FieldMask`/`ByteOffset`) | boolean | boolean | S2 |
| Int8/16/32/64, UInt16/32/64, Byte | integer | integer (range-checked) | S2 |
| Float, Double | number | number | S2 |
| Enum / Byte with `UEnum` | integer (+ `obj:GetEnumName("Prop")`) | integer or enum name string | S2 / S3 |
| Name | string | string (needs FName creation, §6.6) | S2 |
| Str (FString) | string (UTF-8) | string (needs `FMemory` alloc) | S2 |
| Text | string (read-only) | — | S3 |
| Object, Class, Interface | UObject wrapper / nil | wrapper / nil, class-checked | S2 |
| WeakObject, SoftObject, LazyObject | UObject wrapper / nil (resolve) | later | S3 |
| Struct | `StructView` (by-reference into owner memory, field access by name) + `:Copy()` to a table; common math structs (`FVector`, `FRotator`, …) maybe as value tables `{X=,Y=,Z=}` | assign table or StructView | S3 |
| Array | `ArrayView` (`#arr`, `arr[i]` 1-based, `ipairs`), elements via the inner property | element writes; resizing later | S3 |
| Map, Set | read-only views | later | S4 |
| Delegate / MulticastDelegate | — (maybe `:Broadcast` later) | — | later |

Strings: Lua strings are UTF-8, UE uses UTF-16 `wchar_t` → convert both ways with `WideCharToMultiByte`/`MultiByteToWideChar`
(today's `FString::ToString` narrows through the C locale, lossy).

### 6.6 Engine-side prerequisites (MDML core, hand-written code)
- **Weak handle**: the wrapper stores `UObject*` + `InternalIndex` + `FUObjectItem::SerialNumber` (like `FWeakObjectPtr`)
  and validates on **every** access: `GObjects[index].Object == ptr`, same serial, not `PendingKill`/`Unreachable`.
  Note that a serial number of 0 means "never weak-referenced" — the engine assigns one lazily
  (`FUObjectArray::AllocateSerialNumber`, PDB symbol); without it, fall back to pointer + index + class check.
- **FMemory**: resolve `FMemory::Malloc`/`Realloc`/`Free` (PDB) so `FString`/`TArray` contents we create can be freed
  by the engine and vice versa. Today `UE4::FString(const wchar_t*)` only *borrows* a pointer (fine for input params
  that the engine copies, wrong for property writes).
- **FName from string**: today `FName(const char*)` only finds existing names by scanning the name pool (slow, and cannot
  create names). Resolve the engine's `FName::FName(const TCHAR*, EFindName)` (PDB) for find-or-add.
- **Faster object lookup**: `StaticFindObject` is already resolved; prefer it over `GObjects` scans where a path is known.

### 6.7 Game thread, timers, key binds
```lua
GameThread.Run(function() ... end)        -- = mdml::GameThread::Enqueue (next tick; never inline)
GameThread.IsInGameThread()
Timer.After(500, function() ... end)       -- ms, runs on game thread; returns id
Timer.Every(1000, function() ... end)      -- return false from the callback to stop; Timer.Cancel(id)
Keys.Register("F6", function() ... end)                    -- callback runs on the game thread
Keys.Register("F6", {Ctrl=true}, function() ... end)
Keys.Unregister(id)
```
Key binds only fire when the game window has focus and the F1 UI does not capture the keyboard (OQ-11: poll with
`GetAsyncKeyState` on the UI logic thread vs. the window-proc hook LoaderUI already has; either way the callback is
queued to the game thread).

### 6.8 Events (loader events re-exposed)
```lua
Events.OnInitGameState(function(gameMode) end)
Events.OnBeginPlay(function(actor) end)              -- every actor's BeginPlay: keep it cheap
Events.OnTick(function(deltaSeconds) end)
Events.OnModActorBeginPlay("MyMod", function(actor) end)   -- PostBeginPlay of logic-mod actors
```
Backed by the `Mod` virtuals LuaScripting already receives as a core mod.

### 6.9 Blueprint ↔ Lua bridge (uses an existing MDML feature)
MDML already lets C++ mods implement Blueprint functions by name (`Global::FindBPfunctionWrapper`, dispatched in
`hookProcessFunction`). Lua can use the same: `Blueprint.Register("MyMod_DoThing", function(self, params) ... end)` so a
logic mod's Blueprint can call into Lua. Cheap to add once §7.3 exists.

## 7. Hooks on UFunctions (shared MDML infrastructure)

```lua
local id = Hooks.Register("/Script/Engine.PlayerController:ClientRestart",
    function(self, params)          -- pre
        Log.Info("restart, pawn = {}", params.NewPawn)
    end,
    function(self, params, ret)     -- post (optional)
    end)
Hooks.Unregister(id)
```
`params` is a view on the live parameter buffer, accessed by name (same marshaller as properties); writable in the pre
callback (changes the inputs) and in the post callback for out params / return value (OQ-9: `params` view vs. UE4SS-style
positional `(self, p1, p2, ...)`; whether a pre hook may **skip** the original call).

Mechanisms (same split as UE4SS uses, because UE executes the two kinds differently):

### 7.1 Native UFunctions (`FUNC_Native`)
Replace `UFunction::Func` (the exec thunk pointer, `UFunction::SetFunction` exists in the core) with an MDML thunk that
runs pre callbacks, calls the original thunk, runs post callbacks. Catches calls from Blueprints **and** via
`ProcessEvent`. Does **not** catch native C++ → native C++ calls (those never touch reflection; would need a MinHook on
the C++ function itself, resolvable by PDB symbol — a possible later extension for C++ mods).

### 7.2 `ProcessEvent` hook (optional)
A MinHook on `UObject::ProcessEvent` (address already resolved) sees every reflected call that enters through
`ProcessEvent` (C++ → BP events like `ReceiveBeginPlay`, `ReceiveTick`, input events). Good for "BP event" hooks.

### 7.3 Blueprint (script) functions
BP → BP calls go through `ProcessLocalScriptFunction`/`ProcessInternal`; MDML already hooks `ProcessInternals`
(`hookProcessFunction`). That hook today calls `Frame->Node->GetName()` (FName → `std::string`) **on every BP call** —
too slow to grow further. Proposal: a lock-free `unordered_set<UFunction*>` (or a flag bit) of hooked functions checked
first, name resolution only at registration time. Note: the existing hook only runs after `GameStateClassInitNotRan` is
cleared.

### 7.4 NotifyOnNewObject
`Events.OnNewObject("BP_Animal_C", function(obj) end)` via a hook on `StaticConstructObject_Internal` (address already
resolved). Callback runs **after** construction; must stay cheap (called for every UObject). Return `true` to unregister.

### 7.5 Ownership and lifetime
Every registration (hook, timer, key bind, event, BP function) is recorded with its owning `LuaMod`. Unloading/reloading a
mod removes all of them first, then `lua_close`. Native thunks stay installed (shared, per UFunction) with an empty
callback list → no unhooking races. Registration requires the UFunction to exist (BP classes that are not loaded yet:
register later, e.g. from `OnInitGameState`, or a "deferred by name" registration — OQ-9b).

## 8. Threading rules

- **All Lua runs on the game thread.** A `lua_State` is not thread-safe. LuaScripting holds one mutex per `LuaMod`
  anyway (cheap; protects reload vs. callbacks), but the rule is: callbacks are only entered on the game thread.
- `main.lua` start, events, timers, `GameThread.Run`, key binds: executed from the Tick drain or loader game-thread events.
- Hooks (§7) can fire on other threads (async loading, audio, worker threads calling `ProcessEvent`). Proposal: on a
  non-game thread the Lua callbacks are **skipped** and a warning is logged once per hook (OQ-10; alternative: queue a
  copy of the params to the game thread, post-only, read-only).
- `DrawImGui` runs on the render thread → no Lua there until the Lua ImGui phase (§9) decides a model.
- Long work: Lua has no threads to the engine. Coroutines are fine (they run on the game thread). A
  `Timer.After`/coroutine helper (`Wait(ms)` inside a coroutine started by `Async.Run`) can come in S4.

## 9. ImGui (later, OQ-13)
Not in the first phases. Options: (a) each mod gets a `DrawImGui` callback executed on the render thread with the mod's
`lua_State` locked (game-thread callbacks block meanwhile — risk of frame hitches/deadlock); (b) a separate UI
`lua_State` per mod that only exchanges plain values with the game state through a queue (safe, more complex for authors);
(c) declarative widgets (buttons/sliders/checkboxes bound to mod variables, drawn by C++) — simplest and safest, less
flexible. Recommendation: start with (c) (mod settings window in the F1 UI), consider (b) later.

## 10. Error isolation
- Every C++ → Lua call is a **protected call** with a message handler that appends `debug.traceback` (sol2:
  `sol::protected_function` + error handler). Errors are logged as
  `[Lua:MyMod] error in hook /Script/Engine.Actor:ReceiveTick: Scripts/main.lua:12: attempt to ...` + traceback.
- Every Lua → C++ binding converts C++ exceptions into Lua errors (sol2 does this by default), so engine-side failures
  (missing property, wrong type, failed validation) surface in the script, not as crashes.
- Lua compiled as C++ (§2.3) → Lua errors unwind C++ frames correctly.
- **Per-mod failure state**: after N errors in a short window (e.g. 10 per second) or an error in `main.lua`, the mod is
  marked *faulted*: its callbacks are no longer called, F1 shows it red with the last error, a reload button revives it.
- **Access violations** from bad pointers (e.g. an object freed between validation and use) are not Lua errors. Option
  (OQ-14): guard property reads/writes and `ProcessEvent` with SEH (`__try/__except` around the raw memory access; the repo
  compiles with `/EHa`) and turn an AV into a Lua error + fault the mod. Pro: fewer game crashes from scripts. Con: can mask
  real corruption; continuing after an AV in engine code (inside `ProcessEvent`) is unsafe. Proposal: SEH only around our
  own raw reads/writes, never around `ProcessEvent`.
- **Runaway scripts** (OQ-15): `lua_sethook(L, hook, LUA_MASKCOUNT, 1'000'000)` instruction budget per callback (e.g.
  abort after ~100 ms of pure Lua work), configurable, off for trusted dev builds.
- Memory: per-state allocator (`lua_newstate` with own `lua_Alloc`) to report per-mod memory in F1 and enforce an optional
  limit.

## 11. Security (OQ-7)
A Lua mod is code from the internet, exactly like a DLL core mod — DLLs already have full system access, so Lua does not
open a new hole. But users may *think* scripts are safer, and Lua's stdlib makes escalation trivial:
`package.loadlib` (loads any DLL), `package.cpath` searcher, `os.execute`, `io.popen`, `io.open` anywhere, `debug.*`.

| Policy | Content |
|---|---|
| Full (UE4SS style) | all standard libs |
| **Restricted (proposal)** | `base` (without `dofile`/`loadfile` outside the mod dir), `string`, `table`, `math`, `utf8`, `coroutine`, `os.time/clock/date`, `require` limited to the mod's `Scripts/` (+ an optional shared `Content/Mods/LuaScripting/lib/`), `io` replaced by a small `Files` API restricted to the mod folder (and maybe `Saved/`), `debug.traceback` only. No `package.loadlib`, no C module searcher, no `os.execute`/`io.popen`/`os.remove` outside the mod folder |
| Restricted + opt-in | as above, plus `AllowUnsafe=1` in `LuaScripting/mod.ini` (global) or per mod to get the full stdlib |

Also: never load precompiled bytecode (`load(..., "t")` text mode only — Lua bytecode is not verified and can crash/escape
the VM); scripts can read game memory through reflection by design.

## 12. Hot reload (OQ-12)
- Per mod: `Reload(mod)` on the game thread = unregister everything the mod owns (§7.5) → `lua_close` → new state →
  run `main.lua`. Script-level state is lost unless the mod opts in: `Events.OnUnload(function() return state end)` /
  `Events.OnReload(function(state) end)` with plain-data state.
- Triggers: F1 window button per mod ("Reload") — always; file watcher on `Scripts/` (`ReadDirectoryChangesW` on a
  background thread, debounced ~300 ms, reload queued to the game thread) — dev setting, off by default.
- Objects held in Lua are weak handles, so a reload never leaks engine references; nothing keeps UObjects alive from Lua
  (we never add to root set). Caveat: hooks that are running at the moment of reload — reload only runs from the Tick
  drain, never from inside a hook callback.

## 13. Spike (proof of binding style)

`Scripting/` (standalone, **not** in the root `premake5.lua`):
- `Scripting/premake5.lua`: own workspace `MDMLScriptingSpike` with two projects: `Lua` (StaticLib, Lua 5.4.9 compiled as
  C++) and `ScriptingSpike` (ConsoleApp, C++20, sol2).
- `Scripting/vendor/`: `lua-5.4.9/` (sources + license), `sol2-3.3.0/` (release single header + license), `VENDORED.txt`.
- `Scripting/src/`: mock reflection (`MockReflection.*`: `UObject`/`UClass`/`FProperty`/`UFunction` with names, offsets,
  `ParamsSize`, `ProcessEvent`), the binding (`LuaBinding.*`), a mock game-thread queue + hook registry, and `main.cpp`
  that runs Lua test scripts and checks results.
- `Scripting/test/`: Lua mods used by the test (a good mod, a mod with a runtime error, a mod with a syntax error).
Build/run instructions: `Scripting/README.md`. Results, findings (e.g. sol2 pushes lvalue `T&` as pointers; Lua-as-C++ under `/EHa` would catch access violations) and gaps: `docs/reports/lua-scripting-spike.md`.

## 14. Open questions for the owner

| # | Question | Recommendation |
|---|---|---|
| OQ-1 | Lua runtime: 5.4.9, 5.5.1 or LuaJIT? | 5.4.9 now; 5.5 when the binding lib supports it |
| OQ-2 | Binding library: sol2 3.3.0, LuaBridge3, or own raw C-API layer? | sol2 (spike) — weak preference; LuaBridge3 if active maintenance / Lua 5.5 matters more |
| OQ-3 | `LuaScripting` as a core mod, or inside `MDML.dll`? | core mod |
| OQ-4 | Lua compiled as C++ (exceptions instead of longjmp)? | yes |
| OQ-5 | One `lua_State` per mod (isolation, per-mod reload) or one shared state with per-mod environments (cheaper, easy cross-mod calls)? | per mod; cross-mod messaging via an explicit `Events.Send/Listen` API later |
| OQ-6 | API naming: own tables (`Hooks.Register`, `Log.Info`) or UE4SS-like globals (`RegisterHook`, `FindFirstOf`, `ExecuteInGameThread`, `RegisterKeyBind`)? Optional UE4SS compatibility shim? | own tables + keep UE4SS-like names for object lookup (`FindFirstOf`/`FindAllOf`); no shim |
| OQ-6b | Unknown property/function name: Lua error or `nil`/invalid object? | error (+ `obj:Has(name)`) |
| OQ-7 | Stdlib/sandbox policy (full / restricted / restricted + opt-in) | restricted + opt-in |
| OQ-8 | Is `mod.ini` required for Lua mods or is `Scripts/main.lua` enough? Should `LoadOrder.ini` list Lua-only folders (needs MDML change)? | `main.lua` is enough, `mod.ini` optional; yes, list them |
| OQ-8b | When does `main.lua` run: at `InitializeMod` (early, no world) or at the first game-thread Tick? | first Tick |
| OQ-9 | Hook callback shape: `(self, params)` name-indexed view vs. UE4SS positional `(self, p1, p2, …)`; may a pre hook skip the original? | `params` view; no skipping in S3 (maybe later, explicit `params:SkipOriginal()`) |
| OQ-9b | Deferred hook registration for not-yet-loaded BP functions (by name, applied when the class loads)? | later (S4), via the `OnNewObject` hook |
| OQ-10 | Hooks fired on non-game threads: skip (warn once) or queue a post-only copy? | skip |
| OQ-11 | Key binds: `GetAsyncKeyState` polling vs. existing WndProc hook | WndProc (focus-aware), if LoaderUI's hook covers it |
| OQ-12 | Hot reload: button only, or file watcher too (dev setting)? | both, watcher off by default |
| OQ-13 | Lua ImGui model (see §9) | declarative settings first |
| OQ-14 | SEH guards around raw memory access from Lua bindings? | only around our own reads/writes |
| OQ-15 | Instruction-budget watchdog for runaway scripts? | yes, configurable |
| OQ-16 | Should the SDK generator also emit LuaLS type stubs (`---@class ABP_BaseCharacter_C`, fields, functions) for editor autocomplete? | yes, later (cheap once the generator exists) |
| OQ-17 | Order vs. the plan: Lua is Phase 3, Phase 2 (Wave 3/4: C++20, libraries, exported hook API) is not finished. Start S1 now or after Wave 4? | S1 prerequisites after the exported hook API (Wave 4); S2 can start in parallel against the existing core |

## 15. Phased plan

| Phase | Content | Depends on |
|---|---|---|
| **S0** (this) | design doc, offline spike with mock reflection | — |
| **S1** MDML prerequisites | ~~exported hook API~~ (☑ done, `mdml::Hooks`); exported load-order query + Lua-mod discovery; FMemory/FName-create/AllocateSerialNumber via PDB; weak-handle helper; faster `hookProcessFunction` (pointer set) | owner answers OQ-3, OQ-8 |
| **S2** LuaScripting MVP | new premake project + vendored Lua/binding; per-mod states; `Log`, `Mod`, `FindObject`/`FindClass`/`FindFirstOf`/`FindAllOf`/`StaticFindObject`/`LoadObject`; UObject wrapper with scalar/bool/name/string/object properties; UFunction calls (same types) with validation; `Events`, `GameThread`, `Timer`, `Keys`; error isolation + faulted state; F1 list of Lua mods with status and last error; reload button; example mod in `ExampleMods/` | S1, OQ-1/2/5/6/7 |
| **S3** Hooks + data | `Hooks.Register` (native thunk + BP via `ProcessInternal`), `Events.OnNewObject`, StructView/ArrayView, enums by name, Text read, soft/weak object read, `Blueprint.Register` bridge | S2, OQ-9/10 |
| **S4** Comfort | file-watcher hot reload, reload state hand-over, coroutine helpers (`Async.Run`/`Wait`), cross-mod events, Map/Set views, LuaLS stubs from the SDK generator, deferred hooks | S3, generator |
| **S5** UI + hardening | declarative settings UI / Lua ImGui, instruction budget, per-mod memory stats/limit, sandbox options, mod-author docs in `Modding.md` | S4, OQ-13/14/15 |

Each phase ends with an in-game test by the owner (agents never launch the game).
