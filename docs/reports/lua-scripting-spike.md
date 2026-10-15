# Lua scripting: spike report

Date: 2026-10-13.
Design: `docs/design/lua-scripting.md`.
Code: `Scripting/` (standalone; the root premake does not include it).
Status: offline spike. It builds and all checks pass. Nothing touches MDML, the game, or the root build.

## 1. What was built

- **`Scripting/premake5.lua`**: its own workspace `MDMLScriptingSpike`, written for premake 5.0.0 (no `flags`). It has two projects:
  - `Lua`: a StaticLib with Lua 5.4.9 compiled **as C++**.
  - `ScriptingSpike`: a C++20 ConsoleApp using sol2 v3.3.0, with `SOL_USING_CXX_LUA=1` and `SOL_ALL_SAFETIES_ON=1`.
- **Vendored sources**: `Scripting/vendor/` holds unmodified upstream files. `VENDORED.txt` lists the source URLs and SHA-256 hashes, and the Lua tarball hash matches lua.org.
- **Mock engine** (`src/MockReflection.*`): it mirrors the shape of the engine core, so the binding code reads memory exactly as the real one will (`(uint8_t*)obj + prop->Offset`). It covers:
  - `GObjects` with serial numbers
  - a super chain
  - an `FProperty` list (with name, offset, size, flags and bool field mask)
  - `UFunction` params with `CPF_Parm/OutParm/ReturnParm/ReferenceParm`, `ParamsSize` and `ReturnValueOffset`
  - an FName pool
  - `FString` on a counting `FMemory`
  - `ProcessEvent` with an observer as the hook point
- **Binding** (`src/LuaRuntime.cpp`, the only file that includes sol2; `LuaRuntime.h` is a pimpl): implements the S2/S3 subset of the proposed API (see §2).
- **Harness + test mods** (`src/main.cpp`, `test/*/Scripts/main.lua`): 13 harness expectations and 121 Lua `Check()` calls. The Lua count covers the first run plus the run after a reload.

Build/run: `Scripting/README.md`. The build uses VS 2026 / v145 (VS 2022 is no longer installed here), Release x64:
- **0 warnings.**
- Full rebuild of both projects: about 11.5 s.
- `ScriptingSpike.exe` (Lua runtime, bindings and harness): 736 KB.
- `Lua.lib`: 2.0 MB.

## 2. What the spike proves (all pass)

| Area | Checked behaviour |
|---|---|
| Per-mod states | One `sol::state` per mod. Start order equals the given order. A name without `Scripts/main.lua` is skipped. |
| Error isolation | A syntax error in `main.lua` faults only that mod. A runtime error in a callback is logged with a **Lua traceback**. After 3 errors the mod is *faulted* and not called again. Other mods keep running. |
| Restricted stdlib | `package`, `io`, `dofile`, `loadfile`, `os.execute` and `os.remove` are gone. `debug` keeps only `traceback`. `load()` accepts text only, so bytecode is refused. `require` resolves only inside `Scripts/` and rejects `../`. |
| UObject wrapper | Weak handle (pointer + `InternalIndex` + serial). After `DestroyObject`, `obj:IsValid()` is false, any access raises a clear Lua error, and `tostring` returns `UObject(invalid)`. Also covered: `GetName/GetFullName/GetClass/IsA/Has/GetPropertyType`, `__eq`, `__tostring`. |
| Properties by name | Covers super-class members, float, int32 (integral check and range check), int64 at full precision (2^53+1), double, bitfield bools sharing a byte, FName (find-or-add), FString (UTF-8 ↔ UTF-16, engine-allocated, old buffer freed), and object properties (nil, class check against `PropertyClass`). Wrong types and unknown names are **Lua errors** with readable messages. |
| UFunction calls | `obj:Func(...)`, `obj:Call("Func", ...)`, and inherited functions all work. Results come back as the return value first, then out params. The call is **validated** before `ProcessEvent`: argument count (the message shows the signature), argument types, each param's `offset+size <= ParamsSize`, and `ReturnValueOffset`. A function with a broken layout is refused and its native never runs. Calling `obj.Func()` without `:` gives an explanatory error. |
| Param ownership | The parameter buffer is zeroed and 16-byte aligned. After the call, all string params are freed, including the out string the engine allocated. The `FMemory` live-allocation count is 0 at exit. |
| Hooks | Pre and post callbacks get `(self, params)`, and post also gets `ret`. `params` is a name-indexed view: a pre hook can **change inputs** (DeltaSeconds 0.5 → 1.0 seen by the native), and a post hook sees the return value. Using the view after the callback is an error. `Unregister` works. Hooking a missing UFunction is an error. |
| Threading | A hooked function called from another `std::thread` runs the native but **skips Lua**, with one warning per function (the proposal in OQ-10). `GameThread.Run` runs on the next tick, never inline. `Events.OnTick` gets the delta. |
| Reload | Everything the mod owns is unregistered **before** its state is closed, then `main.lua` runs in a fresh state. The hook count is unchanged (no duplicates). The reloaded mod runs clean. |

## 3. Findings worth knowing before the real implementation

1. **sol2 pushes lvalue references as pointers.**
   - Passing a stack object `T&` to a `sol::protected_function` gives Lua a *pointer* (reference semantics), not a copy. The first version crashed this way: a hook-params view escaped its callback and pointed into a dead stack frame.
   - Rule for the real code: pass usertypes into Lua as prvalues (`T(x)`) or `std::move`, and keep lifetimes explicit (the spike's `Alive` flag).
2. **sol2's exception handler is stored as a Lua global** (`"sol.☢☢"`, a light userdata). sol2's default handler also prints every caught exception to `std::cerr`. The spike installs a quiet handler, and errors are reported once through our own `ReportError`. A script can see or clear that global. That is harmless (it falls back to the default handler), but it is a small leak in the restricted environment.
3. **Lua as C++ and `/EHa`.**
   - Lua compiled as C++ uses `try { } catch (...)` in `luaD_rawrunprotected`.
   - Under MDML's current `exceptionhandling "SEH"` (`/EHa`), that `catch (...)` would also catch **access violations**. A crash inside a Lua call (for example in `ProcessEvent`) would then turn silently into a Lua error and the game would keep running in an unknown state.
   - The spike builds Lua with `/EHsc`, so only C++ exceptions are caught.
   - The real `Lua` project should do the same unless the owner explicitly wants that behaviour (ties into OQ-14).
4. **`std::erase_if` and other C++20 features are used.** The binding needs C++20, which MDML has already decided on (Wave 4). `ModLoader` is still `cppdialect "C++17"` today. sol2 itself also works with C++17, but the spike code would need small changes.
5. **Compile cost** is fine: sol2 is in one TU only, and the full spike rebuild takes about 11 s. Keep sol2 out of headers (pimpl), as the spike does.
6. **Allocation per method access.** `obj.Func` creates a new closure each time. The real version should cache one closure per `UFunction` (noted in code).
7. **Reflection cache keyed by `(UStruct*, name)`.** It must be invalidated when classes go away (BP class unload, level change), or be keyed by a validated class handle. Not modelled in the mock.
8. **`os.date` and the rest of `os.*`.** The spike keeps `time`, `clock` and `date`. `os.getenv` and `os.tmpname` are dropped as well; adjust if the owner prefers.

## 4. What the spike does not cover

- Real engine memory, the real `ProcessEvent`, and real hook mechanisms: the native-thunk swap, a `ProcessInternal` filter, and `StaticConstructObject_Internal` for `OnNewObject`. The mock observer stands in for all of them.
- The engine-side prerequisites from design §6.6: `FMemory`, FName creation, and serial number allocation.
- Structs, arrays, maps, enums by name, text, soft/weak object properties, delegates.
- Key binds, timers, ImGui, file-watcher hot reload, instruction-budget watchdog, per-mod memory accounting.
- Integration as the `LuaScripting` core mod: `LoadOrder` discovery of `Scripts/main.lua` folders, the exported hook API, and F1 status UI.
- LuaBridge3 as an alternative (OQ-2). Only sol2 was tried. The pimpl keeps a swap confined to `LuaRuntime.cpp`.

## 5. Open questions for the owner

All are from design doc §14 and still open. The spike settled none of them. It only picked defaults so the code could compile.

| # | Question | Spike default / note |
|---|---|---|
| OQ-1 | Lua 5.4.9, 5.5.1 or LuaJIT? | 5.4.9 |
| OQ-2 | sol2 3.3.0, LuaBridge3, or a raw C-API layer? | sol2. It works, but watch the lvalue-reference pitfall (§3.1); upstream is slow and has no Lua 5.5 support |
| OQ-3 | `LuaScripting` as a core mod, or inside `MDML.dll`? | core mod (not exercised by the spike) |
| OQ-4 | Lua compiled as C++? | yes, with `/EHsc` for the Lua project (§3.3) |
| OQ-5 | One `lua_State` per mod, or a shared state? | per mod |
| OQ-6 / 6b | API naming (own tables vs. UE4SS-like globals); unknown member → error or nil? | own tables + `FindFirstOf/FindAllOf`; error |
| OQ-7 | Stdlib policy (full / restricted / restricted + opt-in) | restricted (§2) |
| OQ-8 / 8b | Is `mod.ini` required for Lua mods? Should LoadOrder list Lua-only folders? Does `main.lua` run at InitializeMod or at the first Tick? | not modelled |
| OQ-9 / 9b | Hook callback shape `(self, params)` vs. positional args; may a pre hook skip the original? Deferred hooks? | `(self, params[, ret])`, no skipping |
| OQ-10 | Hooks fired off the game thread: skip, or queue? | skip + warn once |
| OQ-11 … OQ-16 | Key binds source, hot-reload triggers, Lua ImGui model, SEH guards, instruction budget, LuaLS stubs from the generator | not covered |
| OQ-17 | When to start S1: after Wave 4 (exported hook API, C++20), or now? | — |
| new | Should the spike stay in the repo as a regression test for the binding layer, for example as a CI step, or be removed once the real `LuaScripting` project exists? | keep it until S2 replaces it |
