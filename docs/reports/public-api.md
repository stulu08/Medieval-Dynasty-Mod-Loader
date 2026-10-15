# Public API split (Wave 4, step A) — 2026-10-14

Owner decisions: `docs/MODERNIZATION_PLAN.md`, decisions log 2026-10-14 ("Public API split", "part 2", "defaults taken").
Step B (generated SDK in the repo, BaseMod/DevTools migration, `GameMod` into the loader, `SDK.lib` removal) is not done yet.

## What changed

### `Loader/ModLoader/include/MDML/` — the public mod API
Mods get only `Loader/ModLoader/include` (premake `%{IncludeDir.MDML}`) plus the engine core dirs (`Engine`, `EngineUE4`)
and the third-party dirs; `Loader/ModLoader/src` (`%{IncludeDir.ModLoader}`) is for MDML.dll only. Include as
`"MDML/<Header>.h"`; `MDML/MDML.h` includes everything and lists every header.

| Header | Was | Content |
|---|---|---|
| `Core.h` | public half of `src/Core.h` | `LOADER_API`, `MDML_ENGINE_API`, `BPFUNCTION`, `Ref`, `LogLevel`, std/Windows headers |
| `Version.h` | `src/Bootstrap/Version.h` | version defines |
| `Log.h` | `src/Platform/Logger.h` | `Logger`, `Log` (`Log::Init` loader-only, no default arg) |
| `Mod.h` | `src/Mods/Mod.h` | `Mod`, `EventsEnabled`; no longer pulls in `Globals.h`/`LoaderUI.h` |
| `Mods.h` | new | `mdml::mods::ForEachMod`, `GetModCount`, `FindMod`, `MoveToFront`, `RegisterBPFunction`; `REGISTER_FUNCTION(_NAMED)` |
| `Hooks.h`, `IniFile.h` | `src/Platform/` | unchanged (`mdml::platform`) |
| `GameThread.h`, `Paths.h`, `Notices.h` | `src/Runtime/` | unchanged (`mdml::runtime`); `Paths.h` + `GetConfigFolder()` |
| `UI.h` | new (replaces `LoaderUI`) | `mdml::ui::GetDevice/GetContext/GetRenderTargetView/IsRenderingReady/IsMenuOpen/SetTheme`, `ColorTheme` |
| `UI/Widgets.h` | `src/UI/Widgets.h` | `mdml::ui::widgets::Combo/Vector2-4/String/Bool/Int/IntSlider/UInt/UIntSlider/Float/FloatSlider/HelpMarker/Button` |
| `UI/TextEditor.h` | `src/UI/ImGuiColorTextEdit/TextEditor.h` | ImGuiColorTextEdit (the `.cpp` stays in `src`) |
| `Math.h`, `Memory.h` | `src/Platform/` | glm + UE constants; legacy `Read`/`Write` (old SDK only, goes with `SDK.lib`) |
| `Engine.h` | new | `UE4.h` |

The engine core headers (`src/Engine/**`) now include `"MDML/Core.h"` instead of the loader pch `"Core.h"`, so they
compile with the public include dir only. `src/Core.h` (pch) = `MDML/Core.h` + `ModLoaderConfigFile`, `DEFAULT_LOG_DIR`,
`BASE_LOG_FILENAME`.

### Internal changes
- `Global` (`Globals.h/.cpp`) → `mdml::mods::Registry` (`src/Mods/Registry.h/.cpp`), not exported. `ModInfo` and
  `OverwriteMod` moved into `mdml::mods`. `bIsMenuOpen` → `std::atomic<bool>` in `ImGuiHost` (`IsMenuOpen/SetMenuOpen`; the
  hotkey thread, the InitGameState hook and the render thread used a plain `bool` before).
- `ModStack` not exported; `begin/end/operator[]` removed, new locked `forEach` (shared lock like a dispatch, changes from
  inside are deferred), `size` (locked), `find`, `moveToFront` (`applyOrDefer`). `InitCoreMods` and the F1 window's core mod
  list iterate with `forEach`; the mod menu button captures the `Mod*` and checks `contains` on the game thread instead of
  an index. BaseMod's load-order fix is `mdml::mods::MoveToFront(this)` (was `std::rotate` on the raw list, 3E-Q3).
- `LoaderUI.h/.cpp` removed; `src/UI/UI.cpp` implements `MDML/UI.h`; `Startup.cpp` calls `ImGuiHost::StartHotkeyThread` /
  `D3D11Hook::Install` directly; the `LoaderUI` field mirroring in `D3D11Hook` is gone.
- `NarrowTruncating` / `IdLabel` (F1 window helpers) → `src/UI/UiText.h`.
- `ImGuiColorTheme` → `mdml::ui::ColorTheme`.
- Premake: `IncludeDir.MDML` in `Dependencies/Dependencies.lua`; every mod/test/SDK project uses it instead of
  `IncludeDir.ModLoader`. `Tests/SDKCompileTest/compile_generated.py` uses `Loader/ModLoader/include` too.

### Mods
- BaseMod: `MDML/MDML.h`; `MoveToFront`.
- DevTools: widgets → `mdml::ui::widgets::*`, `UI/LoaderUI.h` → `MDML/UI/Widgets.h`, config folder via
  `mdml::runtime::GetConfigFolder()`.
- Examples: `MDML/MDML.h`.

## Checks
- Full solution (`MDML.slnx`, Release x64, VS 2026): 0 warnings, 0 errors. (`Tools/ModManager` is a standalone workspace
  now, done in a parallel session; not part of this change.)
- `dumpbin /exports MDML.dll`: new functions exported (`mdml::mods::*`, `mdml::ui::*`, `mdml::ui::widgets::*`,
  `GetConfigFolder`); no `Global`, `ModStack`, `LoaderUI` or `ImGui::MDML_*` exports left.
- `compile_generated.py` on the in-game SDK output of 2026-10-14 22:42: 203/203, 0 warnings (with the public include dir only).
- `check_layout.py`: 165 constants, 0 mismatches.

## In-game test (owner)
1. Start: log as before ("Loader config", "Hooks initialized", "Engine layout verified", "InitializeMod Called For
   BaseMod/DevTools"), BaseMod first in the F1 "Core Mods" list.
2. F1 opens/closes (menu state is atomic now), mouse cursor only while open; theme looks as before.
3. F1 → Core Mods list shows BaseMod and DevTools with author/description/version.
4. DevTools: object browser, transform editor (widgets `Vector3`/`Float`), INI browser lists the `Config` folder
   (`MDML` group) and the editor works, Generate SDK.
5. Load a save, quit cleanly (`Logs/*-log.txt` written).

## Open points
- Step B: see the plan.
- `Log::Init`, `Hooks::Initialize/Shutdown`, `GameThread::RunPending` are still members of public classes (documented as
  loader-only). Moving them out would need internal friend functions; left as is.
