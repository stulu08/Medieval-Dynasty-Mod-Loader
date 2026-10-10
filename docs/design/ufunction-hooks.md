# Design: UFunction hooks (pre/post hooks on arbitrary UFunctions and Blueprint functions)

Status: **design draft, not implemented** (2026-10-10). Phase 3 feature. Nothing here is decided until the owner answers
the questions in the last section. Items marked **[verify]** are from knowledge of UE 4.27 source and must be confirmed
against the shipped binary (IDA/PDB) before implementation; phase 0 is exactly that.

Related: `docs/design/hot-reload.md` (hook ownership), `docs/design/live-view.md` (function watches),
`docs/reports/code-inventory.md` sections 2.2 and 4.4, `docs/reports/wave2/gamethread-queue.md`.

## 1. Current state (as of 158ba5e)
- `HooksManager.cpp`: one MinHook detour `hookProcessFunction` on the symbol **`ProcessLocalScriptFunction`**
  (RVA `0x0129b300`, size `0xae`, resolved from the PDB; stored in `mdml::Addresses.ProcessInternals`, the name is historical).
  `UObject::ProcessInternal` is `0x0129b1f0`, `UObject::ProcessEvent` is `0x0129ae40` (PDB lookup, 2026-10-10).
- Per call it does `Frame->Node->GetName()` which builds a **`std::string` for every Blueprint function call in the game**
  (and compares it against `PrintToModLoader`, `GetPersistentObject`, then `unordered_map<string,void*> BPFunctionWrappers`).
- `BPFUNCTION(f)` = `void f(UObject* ContextObject, FFrame* stack, void* const ret)`; `REGISTER_FUNCTION(f)` /
  `REGISTER_FUNCTION_NAMED(f, "Name")` put the pointer into `Global::BPFunctionWrappers` **by function name only** (any class).
  If a wrapper matches, the original is **not called** (replace semantics); the wrapper reads parameters with
  `Frame->GetInputParams<T>()` and writes outputs with `Frame->SetOutput`.
- The hook is installed lazily by `MDML::CreateMod` after the **first logic-mod actor is spawned** (`IsProcessInternalsHooked`).
  Consequence (already in the code inventory): `REGISTER_FUNCTION` from a pure core mod silently does nothing without a logic mod.
- It is skipped while `MDML::GameStateClassInitNotRan` is true. Hooks are never removed individually; `HooksManager::ShutDown`
  disables all MinHook hooks of MDML's own MinHook state. Mods that call `MinHook::Add` have their *own* MinHook state (header-static), which conflicts when two DLLs hook the same address.
- Generated SDK wrappers and the hand-written core call UFunctions through `UObject::ProcessEvent` (`ProcessEvent_Save` validates size/class).
- No pre/post concept, no per-function API, no removal.

## 2. Goals
1. Hook **any** `UFunction` (native, BP, event, interface, delegate target) by name, with `pre` and `post` callbacks, from C++ mods; later from Lua with the same semantics.
2. Pre can **inspect and modify parameters**, **cancel** the original call and supply a return value. Post can read/modify out and return values.
3. **Zero cost for unhooked functions** (no string building, no map lookup on the common path) and a few ns for hooked ones.
4. Hooks are **owned** (by mod handle) and individually removable: needed for hot reload and mod disable.
5. Works for functions of classes that are not loaded yet (resolve later, re-resolve after class unload/reload).
6. Keep (re-implement on top) `BPFUNCTION`/`REGISTER_FUNCTION` for logic mods and the builtins `PrintToModLoader`, `GetPersistentObject`.

Non-goals: patching arbitrary native engine code (that is the exported MinHook API of Wave 4), hooking non-UFunction C++ methods, changing function signatures.

## 3. How a UFunction is invoked in UE 4.27 (and where we can intercept)
`UFunction::Func` (a `FNativeFuncPtr`, `void(UObject* Context, FFrame& Stack, void* Result)`, offset in `mdml::Layout.UFunction.Func`,
accessors `GetFunction/SetFunction` already exist) is how every call ends: `UFunction::Invoke(Obj, Stack, Result)` calls `(*Func)(Obj, Stack, Result)`.
- Native `UFUNCTION`s: `Func` = the generated `execFoo` thunk. Thunks read parameters from the `FFrame` (either from `Stack.Code`, the bytecode stream, or from the
  parameter buffer, see below) and call the C++ implementation.
- Blueprint functions: `Func` = `UObject::ProcessInternal` **[verify]**, which sets up/continues the frame and runs the bytecode through
  `ProcessLocalScriptFunction` (the function we hook today). Event-graph events are stubs that call `ExecuteUbergraph_<BP>`.
- Callers: (a) C++/engine code via `UObject::ProcessEvent` (allocates an `FFrame`, copies params, calls `Invoke`); (b) the Blueprint VM (`UObject::CallFunction` /
  `EX_*Call` opcodes) which builds the callee frame from the bytecode and calls `Invoke`; (c) **direct C++ calls to the native implementation**, which never touch any of the above.

| Interception point | Sees | Misses | Params visible as | Cost |
|---|---|---|---|---|
| **A. `ProcessEvent` detour** (global) | all calls that come through `ProcessEvent`: event dispatch from C++, delegates, anim notifies, most engine to BP calls, our own SDK calls | BP to BP and BP to native calls inside the VM; direct C++ calls | `Parms` buffer (flat struct, the layout of the function's params) in a known place | every `ProcessEvent` call in the game pays a check; keyed by `UFunction*` it is one hash probe |
| **B. `ProcessLocalScriptFunction` detour** (what we have) | every Blueprint **bytecode** function execution (via event or VM) | native functions; BP functions running through other entry points | `Frame->Locals` (params at their property offsets, outputs via `OutParms`) | every BP call in the game pays the check (today: a string) |
| **C. `UFunction::Func` swap** (per function) | every call through `Invoke`, i.e. A and B and the VM native-call path, for **exactly the hooked functions** | direct C++ calls; a function whose `Func` is cached elsewhere | see below; depends on caller kind | zero for unhooked functions |

Parameter access caveat for C **[verify]**: for *native* functions called from the VM, the exec thunk reads arguments from the bytecode stream (`Stack.Code`),
so a `Func` wrapper that runs before the thunk cannot see them without consuming the stream. For native functions called through `ProcessEvent`, and for all
*Blueprint script* functions (their params are in `Stack.Locals`), parameters are readable up front. UE4SS solves the native-VM case by doing the work inside the
hooked path (`ProcessEvent`/`ProcessLocalScriptFunction` callbacks, see below). Phase 0 must decompile `ProcessEvent`, `ProcessInternal`, `UObject::CallFunction`
(`GNatives` path) and one exec thunk of this build to pin down: where params live per path, what `Stack.Node` holds, whether `Result` is valid before the call.

How UE4SS does it (read from `UE4SS/src/Mod/LuaMod.cpp`, the `Unreal` submodule that holds `UFunction::RegisterPreHook` is not in the local checkout): per-`UFunction`
callback lists keyed by callback id, `RegisterHook(name, pre, post)` returns `PreId, PostId`, `UnregisterHook` removes both, one global `ProcessEvent` pre callback plus
`ProcessLocalScriptFunction` pre/post callbacks dispatch into the lists, and Lua hooks run on the thread of the caller (with delayed game-thread actions processed from the
`ProcessEvent` hook). Their middleware EventViewer lists three hot points exactly like the table above (`ProcessEvent`, `ProcessInternal`, `ProcessLocalScriptFunction`).

### Recommended mechanism (subject to phase 0 and owner questions)
Hybrid with **one shared dispatcher keyed by `Stack.Node`**:
1. **C (Func swap) as the primary mechanism** for script (Blueprint) functions: replace `UFunction::Func` with a single exported `HookedFuncThunk`. On entry it finds the
   registry entry for `Stack.Node` (one pointer-keyed lookup), runs pre hooks, calls the saved original `Func` unless cancelled, runs post hooks. No per-function code stubs needed because the
   frame tells us which function runs. Unhooked functions cost nothing. Restoration on unhook = write the original pointer back (needs the entry to have saved it; refcount when several mods hook the same function: the *registry* swaps once, mods only add callbacks).
2. **A (ProcessEvent detour) for native functions**, installed only when at least one native function hook exists (or always, with a very cheap bloom/flag test on `Function->FunctionFlags`
   plus pointer-set lookup). Parameters are in `Parms`. For native functions called from the VM only a "called" notification without parameters is possible (documented limitation), unless phase 0 finds a safe way.
3. **B (existing `ProcessLocalScriptFunction` detour) is retired**, or kept only as a debug trace mode ("log every BP call") used by Live View's global call log. The string compare disappears.
4. Everything above runs through one **`HookRegistry`** in MDML.dll; the `BPFUNCTION` mechanism becomes a client of it (section 6).

Alternative if phase 0 shows `Func` swapping is unsafe (e.g. `Func` shared/read-only pages, or `ProcessInternal` needs the original pointer for the `UFunction*` in a way that breaks): a pure
A+B design with a pointer-keyed hash set in both detours. It is simpler and uses only the two already-proven detours, but unhooked BP calls still pay one hash probe each.

## 4. API for C++ mods (proposal)
Exported from MDML.dll (namespace `mdml::hooks`, header `Hooks/FunctionHooks.h`); mods link MDML.lib as today.

```cpp
struct HookContext {
    UE4::UObject*   Self;            // 'this' of the call (Context)
    UE4::UFunction* Function;
    UE4::FFrame*    Frame;           // raw access
    void*           Params;          // parameter block (Locals or Parms; see Params access)
    void*           Result;          // return slot (may be null)
    bool            Cancelled;       // pre: set by Cancel(); post: read-only info
    template<class T> T&  Param(const char* name);   // resolved by property name, cached offset per UFunction
    template<class T> T&  Param(FName name);
    template<class T> T&  ReturnValue();
    void Cancel();                                    // pre only: skip the original (and post-of-others? see Q)
    void CancelWith(const T& returnValue);
};
using HookCallback = void(*)(HookContext&, void* user);   // std::function overload for lambdas

struct HookDesc {
    const char* Function;      // "ClassPath:Func", "BP_Foo_C:Bar", "Class /Script/Engine.Actor:ReceiveBeginPlay"
    HookCallback Pre, Post;  void* User;
    int          Priority = 0; // lower runs first; ties by load order
    HookOwner    Owner;        // implicit: the calling mod (see hot-reload.md); explicit for Lua/tools
    HookFlags    Flags;        // e.g. OnlyGameThread, InstancesOnly(filter by class), CallOnceOnLoad
};
HookId Register(const HookDesc&);           // returns immediately even if the function is not loaded yet
bool   Unregister(HookId);
void   UnregisterAll(HookOwner);            // called by the loader on unload/disable
HookState Query(HookId);                    // Pending (unresolved), Active, Failed(reason)
```
- **Function addressing**: full path `"/Game/Blueprints/BP_Foo.BP_Foo_C:ReceiveBeginPlay"` or the reflection "full name" form already used by `FindObject`
  (`Function /Script/Engine.Actor.ReceiveBeginPlay`). Short forms resolve through the class lookup; ambiguous = error, not first match.
- **Lazy resolution**: unresolved hooks are `Pending` and re-tried on class load. Triggers: `InitGameState`, level change, and a cheap poll (every N ticks) over pending entries only.
  A weak handle `{index, serial}` of the `UFunction` is stored; when the object is destroyed (BP class GC/unload) the entry goes back to `Pending` and the `Func` swap is dropped.
- **Object filter**: optional `Self` class/instance filter evaluated before the callback.
- **Exceptions**: callbacks are wrapped (C++ exceptions and optionally SEH); a throwing hook is disabled and logged (current `ModStack` pops the whole mod on an exception; per-hook disable is gentler; owner decision).
- **Re-entrancy**: a hook calling the hooked function again (via `ProcessEvent`) recurses; per-thread guard flag `InHook` prevents infinite recursion by default (flag to allow).
- **Modification semantics**: pre callbacks run in priority order; each sees changes of the previous; `Cancel` stops the original and later pre hooks of lower priority are still told (`Cancelled == true`) unless the first canceller sets `Exclusive` (question 5). Post callbacks run in reverse order.
- **Params access**: typed accessors validate size/type once per (UFunction, name) against the reflection data (same safety philosophy as the generated wrapper validation: mismatch means the callback is skipped with one log line, never memory corruption).
- Compatibility sugar kept: `BPFUNCTION(f)` / `REGISTER_FUNCTION(f)` stay as macros that register a **replace-style hook** (pre + cancel) by function name, see section 6.

### 4.1 Lua API (later, same engine)
Mirrors UE4SS enough to make examples portable: `RegisterHook("/Script/...:Func", function(self, ...) end [, post])` returns `(preId, postId)`; `UnregisterHook(name, preId, postId)`.
Lua callbacks are executed on the **game thread** (Lua states are not thread-safe): if a hook fires on another thread, either lock the Lua state per mod or marshal (question 4).
Parameters are exposed as typed wrappers over `HookContext::Param`. Ownership = the Lua mod, so reloading a script unregisters its hooks automatically (`hot-reload.md`).

## 5. Threading
- Hooks run on **the thread that makes the call**. Almost always the game thread, but Blueprint functions can execute elsewhere too (animation worker threads for AnimBP `Update` functions,
  async loading callbacks, the render thread via delegates); some UObject functions are called from the render thread. The `HookContext` carries `bool OnGameThread` (via `mdml::GameThread::IsInGameThread()`).
- Hook callbacks that need UE state beyond their own call must either be `OnlyGameThread` (loader skips the hook on other threads, counted in stats) or enqueue with `mdml::GameThread::Enqueue`.
- The registry is read on the hot path and written rarely: use an immutable snapshot (copy-on-write `shared_ptr<const Table>` in an atomic, or an RCU-like epoch) so dispatch is one atomic load and
  **unregistering from inside a callback is safe**. Hooks removed during a call still finish the current invocation.
- Unload safety (hot reload): the loader must know that no thread is inside a mod's callback before `FreeLibrary`. Use an in-flight counter per owner; `UnregisterAll(owner)` returns once it reached zero (spin/yield with timeout; abort the unload on timeout).
- Do not take engine locks or call blocking APIs from callbacks; keep them short (they run inside the game's call).

## 6. Performance
- **Today**: one `std::string` allocation (small-string optimization hides most of it for names <16 chars, but BP function names such as `ReceiveBeginPlay` and `ExecuteUbergraph_BP_*` frequently exceed it)
  plus `Read<>` syscalls inside `GetName` (`Memory.h` still uses `ReadProcessMemory`, code inventory 4.4) **on every BP call in the game**, i.e. likely hundreds of thousands per second. Magnitude is [M]; measure before/after.
- **Target**: unhooked function = 0 (Func swap) or one pointer-keyed probe (A/B fallback). Hooked = lookup + callback vector iteration. Keys are `UFunction*` plus serial, never strings; names are resolved to `UFunction*` once at registration.
  If the string-compare fallback is ever needed, compare `FName::ComparisonIndex` integers, not `std::string`.
- Avoid per-call heap allocation: `HookContext` on the stack, small-vector for callbacks, `Param<T>()` offsets cached in the registry entry.
- Provide **stats** (calls per hook, cumulative time, last-call time) behind a debug flag; exposed in DevTools. Optional per-hook time budget warning.
- The `Read<>`/`Write<>` syscall cost in `Frame->GetInputParams`/`SetOutput` disappears with the planned direct-memory access change (already a decision).

### Relation to `BPFUNCTION` / `REGISTER_FUNCTION`
- Today's semantics: by-name, any class, replace the call, installed only after a logic actor exists, wrapper gets the raw frame.
- Proposal: keep the macros (no backward-compat obligation for old mods, but the logic-mod Blueprint side uses these names, e.g. `PrintToModLoader`), re-implemented as
  `Register({.Function = "*:Name" (name-only match), .Pre = wrapper, .Flags = ReplaceOriginal})`. Name-only registration resolves **all** `UFunction`s with that name (loaded and future), which is what the wrapper table implicitly did.
- The built-ins `PrintToModLoader` and `GetPersistentObject` become ordinary hooks registered by the loader at startup (installed **unconditionally**, no more dependency on the first logic mod, which also fixes the silent no-op for core mods).
- `Global::BPFunctionWrappers` and the string path in `HooksManager.cpp` are deleted when the new registry lands.
- `MDML::GameStateClassInitNotRan` guard: the new registry can register at any time (pending entries), so the guard is not needed.

## 7. Risks
| Risk | Mitigation |
|---|---|
| `Func` swapping on a shared/const page, or `Func` copied elsewhere (e.g. cached in native tables) | Phase 0 verifies on this build; fall back to A+B design |
| Parameters unreadable for native-from-VM calls | Document limitation; notification-only for those; evaluate hooking at `CallFunction` level in phase 0 |
| UFunction destroyed (BP class unload) while hooked | Weak handle with serial; periodic validation at InitGameState/level change; drop swap on destroy |
| Hook runs on a non-game thread (AnimBP worker) and touches UObjects | `OnlyGameThread` flag, context carries thread info, docs |
| Recursion / reentrancy | Per-thread guard |
| Two owners hook one function | One swap, many callbacks, refcounted restore |
| Unload while callback in flight | In-flight counter; unload waits/aborts (`hot-reload.md`) |
| Exceptions in callbacks | try/catch (+optional SEH); disable hook, not the mod |
| MinHook ownership conflict (mods with their own MinHook state) | Wave 4 exported hook API; this design uses Func swap, not MinHook, for UFunctions |
| ParamsSize / layout changes after a game patch | Name-based param resolution + size validation, same as the SDK generator decisions |
| Cancel misuse corrupts state (skipped out params not initialised) | `CancelWith` requires return value; zero-initialise outputs on cancel |

## 8. Phased plan
| Phase | Scope | Exit criterion |
|---|---|---|
| **0 RE spike** | In IDA/PDB: decompile `ProcessEvent`, `ProcessInternal`, `ProcessLocalScriptFunction`, `CallFunction`, one exec thunk; confirm `Func` of a BP function, where params live per path, `Stack.Node`. Add temporary trace-only hooks (log function name once per new UFunction, counts). Measure cost of today's string hook with a counter | written findings appended to this doc; mechanism chosen with the owner |
| **1 Registry + script functions** | `HookRegistry`, pointer-keyed table, Func swap thunk, pre/post for BP functions, lazy resolve, ownership, `Unregister*`, stats | hook a BP function (e.g. a logic mod's `PostBeginPlay`), cancel it, modify a param, unhook; no cost on unhooked functions |
| **2 Native functions** | ProcessEvent detour path for native functions, `GameThread` flag, SEH option | hook an engine `UFunction` called from C++ (e.g. `ReceiveBeginPlay`) |
| **3 Port `BPFUNCTION`** | Re-implement macros on the registry, built-ins unconditional, delete string path | existing logic-mod flow (PrintToModLoader, GetPersistentObject, mod buttons) works as before |
| **4 DevTools integration** | Function watches/call log in Live View, global call trace | watch a function in Live View, see call count |
| **5 Lua binding** | `RegisterHook`/`UnregisterHook` with auto-ownership | a Lua script hooks and unloads cleanly (with hot reload) |

## 9. Open questions for the owner
(Nothing here is decided; bracketed text is only the author's suggestion.)
1. **Mechanism:** go with the Func-swap-primary design after the phase-0 spike, or prefer the simpler A+B (two detours with a hash set) from the start? [spike first, then decide together]
2. **Retire the `ProcessLocalScriptFunction` detour** (keep only as an optional trace mode) once the registry exists?
3. **Installation:** always install the hook infrastructure at startup (fixes core-mod `REGISTER_FUNCTION`)? Any reason to keep it lazy?
4. **Threading of hooks:** run every hook on the calling thread (author's default) and let mods use `OnlyGameThread`, or force marshalling to the game thread? For Lua: per-mod lock or marshal-to-game-thread? [calling thread for C++, game thread for Lua]
5. **Cancel semantics:** may a pre hook cancel the original for everyone (later hooks still see `Cancelled`), or should there be an exclusive/first-wins rule? Conflicts between mods hooking the same function: priority only, or load order only?
6. **Error policy:** a throwing callback disables just that hook (author's proposal) or the whole mod as `ModStack` does today?
7. **Name-only registration** (`REGISTER_FUNCTION("Name")` matching any class): keep as compat sugar, or require qualified names for new API?
8. **API surface:** per-function `pre/post` callbacks with a context object (proposal), or UE4SS-style `(self, params...)` signatures generated per hook? Should C++ mods get a typed variant using generated SDK types?
9. **Performance goal:** is a measurable-in-ms benchmark (BP call counter before/after) a gate for merging phase 1?
10. **Scope:** are hooks on pure native C++ engine functions (non-UFunction) part of this feature, or only through the Wave 4 exported MinHook API?
