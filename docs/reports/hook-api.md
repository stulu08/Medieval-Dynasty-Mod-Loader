# Exported hook API (`mdml::Hooks`)

Date: 2026-10-10. Owner decision (decisions log, 2026-10-10 "Libraries"): **MDML exports a hook API so mods don't each link MinHook.**
Code: `ModLoader/src/Utilities/Hooks.{h,cpp}`; callers in `Utilities/HooksManager.cpp`, `UI/LoaderUI.cpp`; mods `BaseMod`, `ExampleMods/*`.

## 1. What changed
- New exported class `mdml::Hooks` in `MDML.dll` (`LOADER_API`). It wraps the process' **single MinHook instance**:
  `MH_Initialize` (`Hooks::Initialize`, called once from `HooksManager::SetupHooks`, before overwrite links, pak hooks and
  mod loading — same place as the old `MinHook::Init()`) and `MH_DisableHook(MH_ALL_HOOKS)` + `MH_Uninitialize`
  (`Hooks::Shutdown`, from `HooksManager::ShutDown`, same sequence as before).
- The old header-only wrapper `ModLoader/src/Utilities/MinHook.h` (`namespace MinHook { Init, Add }`) is **deleted**. It
  compiled MinHook calls into every DLL that included it, so each mod that used it had its own MinHook state.
- All 8 loader hooks (2 pak, InitGameState, BeginPlay, Tick, ProcessInternals, 2 DX11) now go through `mdml::Hooks::Add`
  with the same targets, detours, original pointers, names and order.
- BaseMod, PresetMod, TimeWeatherChanger: `#include "Utilities/MinHook.h"` replaced by `"Utilities/Hooks.h"` (or removed
  where unused); `"MinHook"` removed from `links` **and** `%{IncludeDir.MinHook}` from `includedirs` in their premake
  files (and the regenerated `.vcxproj`). Mods can no longer include MinHook by accident.
- Only `ModLoader` still links the `MinHook` static-lib project.

### Behaviour
Identical in all success paths: same hooks, same order, same `MH_*` call sequence (`MH_CreateHook` + `MH_EnableHook` per
hook). Differences only in logging and failure handling:
- Log lines now go to the MDML logger (was the UML logger) and include owner and target, e.g.
  `Added hook 'UWorld::Tick' (owner MDML, target Medieval_Dynasty-Win64-Shipping+0x1234567 (0x7FF6...))`.
- If `MH_EnableHook` fails right after a successful `MH_CreateHook`, the hook is removed again (`MH_RemoveHook`) and
  `*original` is set to null (before: left created-but-disabled). No runtime difference, the detour was never active.
- MinHook's status text (`MH_StatusToString`) is part of every error line.

### Binary check (pefile + PDB string scan, Release x64)
| Binary | before | after |
|---|---|---|
| `MDML.dll` | 2,128,384 B, MinHook code | 2,141,696 B, MinHook code + 12 new exports (`mdml::Hooks` members incl. compiler-generated `operator=`, `mdml::ToString`); +13.3 KB for `MH_StatusToString`, registry, logging |
| `BaseMod.dll` | 459,264 B, no MinHook code | 459,264 B, no MinHook code, `MH_*` types gone from PDB |
| `PresetMod.dll` | 17,920 B | 17,920 B, `MH_*` gone from PDB |
| `TimeWeatherChanger.dll` | 204,800 B | 204,800 B, `MH_*` gone from PDB |

The mod DLLs do **not** get smaller: they never called MinHook at runtime (BaseMod's hook code is inside `#if 0`, the
example mods only included the header), so the linker had already dropped all MinHook objects. Before this change their
PDBs still contained the `MH_STATUS` type from the header; after a clean rebuild of the mods no `MH_` symbol or
`hde64` code is left. With the `#if 0` block temporarily switched on, BaseMod imported
`mdml::Hooks::CreateHook` from `MDML.dll` and contained no MinHook code (compile/link check of the mod-side template,
reverted afterwards).

## 2. API (`#include "Utilities/Hooks.h"`)
```cpp
namespace mdml {
    enum class HookStatus { Ok, NotInitialized, InvalidArgument, AlreadyHooked, NotHooked, MinHookError };
    const char* ToString(HookStatus);

    class Hooks {
    public:
        template <class Target, class Detour, class Original>
        static HookStatus Add   (Target target, Detour detour, Original** original, const std::string& name); // create + enable
        template <class Target, class Detour, class Original>
        static HookStatus Create(Target target, Detour detour, Original** original, const std::string& name); // create, disabled
        template <class Target> static HookStatus Enable (Target target);
        template <class Target> static HookStatus Disable(Target target);
        template <class Target> static HookStatus Remove (Target target);  // trampoline freed, never call *original afterwards
        static size_t RemoveAll(HMODULE owner);   // all hooks whose detour lives in `owner` (mod unload / hot reload)
        static bool IsHooked(const void* target);
        static bool IsInitialized();
        static bool Initialize();   // loader only
        static void Shutdown();     // loader only
    };
}
```
- **Key = target address** (MinHook allows exactly one hook per target). `target` may be a pointer or an integer address
  (`DWORD64`, `uintptr_t`, `mdml::Addresses.X`). A second hook on the same target fails with `AlreadyHooked` and the log
  names the module that holds the existing hook.
- **Name** is a free display name for the log (`"Class::Function"` recommended), not an identifier.
- **Owner** = the module (DLL) that contains the detour function, found with
  `GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS)`; shown as the file stem (`MDML`, `BaseMod`, …). No extra
  parameter needed, and it is exactly the module whose unloading would leave a dangling detour.
- **Thread safety**: one mutex guards the registry and serializes every MinHook call made through the API. MinHook itself
  suspends all other threads while it patches code (as before). Every call may be made from any thread.
- **Original pointer**: `*original` receives the trampoline as soon as `Add`/`Create` returns `Ok` (also for a disabled
  hook). It stays valid across `Disable`/`Enable`; it is freed by `Remove`, `RemoveAll` and loader shutdown. To pass no
  original pointer use `(void**)nullptr`.
- Calls before the loader initialized MinHook (or after shutdown) fail with `NotInitialized` and an error line. In
  practice mods are loaded after `Hooks::Initialize`, so their constructors / `OnModInitilize` can hook directly.
- Exports: the templates are inline in the header and call the exported private `CreateHook/EnableHook/DisableHook/RemoveHook`
  (`void*` based). The ABI uses `std::string` like the rest of MDML's exports (same toolset + dynamic CRT everywhere).

## 3. Mod-author usage
```cpp
#include "Utilities/Hooks.h"

static bool(__fastcall* origIsShippingBuild)();
static bool __fastcall hookIsShippingBuild() { return true; }

void MyMod::OnModInitilize() {
    auto* fn = (UE4::UFunction*)UE4::UObject::StaticFindObject(0, (UE4::UObject*)-1, L"TDBPL_IsShippingBuild");
    if (fn && mdml::Hooks::Add((DWORD64)fn->GetFunction(), &hookIsShippingBuild, &origIsShippingBuild,
                               "TD_Blueprint_Library::TDBPL_IsShippingBuild") != mdml::HookStatus::Ok)
        getLogger()->Warn("could not hook IsShippingBuild");
}
```
- Do not call `MH_*` or link MinHook in a mod; do not call `Hooks::Initialize/Shutdown`.
- Premake for a mod: no `%{IncludeDir.MinHook}`, no `"MinHook"` in `links`; linking `MedievalDynastyModLoader` is enough.
- A mod's hooks are removed automatically at game shutdown. When a mod gets unloaded in the future (hot reload), the
  loader calls `mdml::Hooks::RemoveAll(modHandle)` before `FreeLibrary`.

## 4. Decisions taken (owner may veto)
1. **Owner detection from the detour address** instead of an explicit owner/mod-name parameter. Simple for mod authors
   and safe for unloading. Limitation: a detour in a shared helper DLL (or generated code) is attributed to that module;
   memory outside any module shows `<unknown module>` and is never matched by `RemoveAll`.
2. **Hooks are keyed by target address**, the name is only a label (not a lookup key). Matches MinHook's model and avoids
   name clashes between mods.
3. **Old `Utilities/MinHook.h` deleted** instead of kept as a forwarding shim (no backwards compatibility required, nothing
   else used it; `DevTools` on `modernize` doesn't include it).
4. **Mods lose the MinHook include dir too**, not just the link, so the API is the only way to hook from a mod.
5. **Enable failure removes the half-created hook** (see "Behaviour").
6. Hook log lines use the **MDML logger** (`Info_MDML`/`Error_MDML`); the `MinHook Setup` line and the init error stay on
   the UML logger as before.
7. No ownership enforcement on `Enable/Disable/Remove`: any module may toggle any hook by target (logged with the real owner).
8. Disabled leftover code in BaseMod (`#if 0` hook variant of the dev/shipping-build swap) migrated to the API; while doing
   that the swapped null checks (it tested `IsDevelopmentBuild` before hooking `IsShippingBuild` and vice versa) were fixed.
   Still `#if 0`, so no behaviour change.

## 5. Open questions / follow-ups
- `DevTools/premake5.lua` (on `modernize`, other agent's area) still lists `%{IncludeDir.MinHook}` in `includedirs`
  (no link, no use) — can be removed by whoever owns DevTools.
- Hot reload (Phase 3) must call `Hooks::RemoveAll(hModule)` and also make sure no thread is still **inside** a detour of
  that module before `FreeLibrary` (MinHook only fixes up threads in the patched prologue, not threads running the detour
  body). Not solved here.
- A hook list in the F1 window (name/owner/target/enabled) would be easy to add on top of the registry (needs a read
  accessor); not done (feature, Phase 3).
- MinHook's batching (`MH_QueueEnableHook` + `MH_ApplyQueued`) is not exposed; each `Add` freezes the threads once, as before.

## 6. In-game test (owner)
Deploy **all** DLLs together (`MDML.dll`, `Mods/BaseMod/BaseMod.dll`, example mods) — the mods import `MDML.dll`.
1. Start the game. In `Logs/` (MDML log) check:
   - `MinHook Setup` appears once, no `Failed to initialize MinHook`.
   - `Added hook 'FPakPlatformFile::FindFileInPakFiles' (owner MDML, target Medieval_Dynasty-Win64-Shipping+0x…)` and
     the same for `IsNonPakFilenameAllowed` (when pak overwrites are enabled), then `AGameModeBase::InitGameState`,
     `AActor::BeginPlay`, `UWorld::Tick`; later `DX11-ResizeBuffers` / `DX11-Present` with targets in `dxgi+0x…`;
     `ProcessBlueprintFunctions` only appears when a Logic mod is installed (added at the first InitGameState). No
     `Failed to …hook` lines.
   - The `+0x…` offsets of the game hooks match the rvas of the resolve lines (same addresses as before).
2. Main menu → load save → F1 UI opens and works (DX11 hooks), BaseMod initialized, a loose-file overwrite still applies.
3. Quit normally → `Shutting down`, clean exit, no crash on exit.
