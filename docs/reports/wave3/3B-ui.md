# Wave 3 round 2 - package 3B: UI split

Date: 2026-10-14. Files: `Loader/ModLoader/src/UI/**` (without `ImGuiColorTextEdit`), regenerated `ModLoader.vcxproj(.filters)`.
Build: full solution Release x64, only the expected C4715 (PresetMod); `bin/Release-windows-x86_64` has the same 37 files as before.

## File map (namespace `mdml::ui`)
| File | Content |
|---|---|
| `UI/D3D11Hook.{h,cpp}` | `D3D11Hook::Install/IsInstalled/Device/Context/RenderTargetView`. Install thread (waits for dxgi.dll, dummy swap chain, MinHook on vtable 8 = Present and 13 = ResizeBuffers via `mdml::platform::Hooks`), the Present/ResizeBuffers detours, device/context/RTV creation on the first Present, `DX11Present` / `DX11ResizeBuffers` events. |
| `UI/ImGuiHost.{h,cpp}` | `ImGuiHost::Init/RenderFrame/StartHotkeyThread/IsInitialized`. ImGui context (ini path `Config.ImGuiFile`, docking, PhotoShop dark theme, `SetupImGui` event), Win32 + DX11 backends, WndProc subclass (input capture), the frame (`NewFrame` ... `RenderDrawData`, `DrawImGui` event) and the F1 polling thread. |
| `UI/LoaderWindow.{h,cpp}` | `LoaderWindow::Draw()`: the F1 window. Notices, version lines, Logic/Core/Overwrite mod lists, Tools (dumps, console command). |
| `UI/Widgets.{h,cpp}` | The exported `ImGui::MDML_*` widgets (still in namespace `ImGui`, mod API), `DEFAULT_TREE_NODE_FLAGS`, `IMGUI_TREE_CONTINUE`, plus `mdml::ui::NarrowTruncating` / `IdLabel` helpers. |
| `UI/Themes.{h,cpp}` | `ImGuiColorTheme` (global scope, as before), `mdml::ui::ApplyTheme` and the four own `StyleColors*`. |
| `UI/LoaderUI.{h,cpp}` | Forwarding facade. `LoaderUI::GetUI/CreateUILogicThread/HookDX/setColorTheme` forward into `mdml::ui`. The header still includes the ImGui/d3d11/UE4 headers and Widgets/Themes, so `Mod.h`, `Startup.cpp`, DevTools, BaseMod compile unchanged. |

No `#include "MDML.h"` left in `src/UI` (version macros come from `Core.h`, config from `Runtime/LoaderConfig.h`).

### Compatibility
`git grep` over `Loader/` and `Mods/`: outside `src/UI` only `LoaderUI::GetUI()->CreateUILogicThread()`, `LoaderUI::HookDX()` (Startup.cpp), the `LoaderUI.h` includes (Mod.h, DevTools) and the `ImGui::MDML_*` widgets (BaseMod) are used. All kept. `LoaderUI` keeps `pDevice`, `pContext`, `pRenderTargetView`, `initRendering`, `IsDXHooked` (mirrors, written by `D3D11Hook`). Removed unused public fields: `phookD3D11Present`, `pSwapChainVtable`, `hGameWindowProc`, `viewport`, `screenCenterX/Y`, `ResizeBuffers`, `LoaderResizeBuffers`, `LoaderD3D11Present`, `hookWndProc` (nobody referenced them; mods compile).

## What goes through GameThread now
Every engine-touching action of the window is queued with `mdml::runtime::GameThread::Enqueue` from the render thread; the window code itself makes no UE call.
| Action | Before | Now |
|---|---|---|
| Logic mod button (`CallFunctionByNameWithArguments`) | already queued (3A) | queued, actor re-resolved inside the task (as before) |
| Core mod menu button (`Mod::OnModMenuButtonPressed`, mod code, usually UE calls) | called **directly on the render thread** | queued; index + range check inside the task |
| Dump Objects / Engine Info / World Actors | flag set in the UI, picked up by the 60 Hz logic thread, which then enqueued | enqueued directly by the button (the flag + polling detour is gone) |
| Console command (`UGameplayStatics::ExecuteConsoleCommand`) | flag + logic thread, then enqueued | enqueued directly |
Reads that stay on the render thread (no engine call): `ModInfoList` fields, the `IsEnabled` checkbox (a plain bool written by the render thread, read by the game thread: benign race, as before), `CurrentModActor` pointer null check, `CoreMods` metadata strings.

Not covered (not the UI's code): the mods' own `DrawImGui` / `DX11Present` / `SetupImGui` event handlers run on the render thread and call into UE (BaseMod: ProcessEvent, component queries, DataTable reads, give-item). See follow-ups.

## Notices
- `DumpNotice::Get` is gone from the UI; `LoaderWindow` reads `mdml::runtime::Notices::Snapshot()` once per frame.
- Persistent notices: at the very top of the window (above the version lines), one wrapped coloured line each (`[Error] `/`[Warning] ` prefix; Error red, Warning yellow, Info green), followed by a separator. Stay for the whole session.
- Transient notices: below the persistent ones, same colours, full alpha for 6 s, fading to 0 at 8 s (the old dump line behaviour, now per severity and for any number of notices).
- `DumpNotice` itself is untouched (Dumper is 3E's). **Until 3E's Dumper posts through `Notices::Post`, the dump status line will not appear in the window.** Make sure the merged Dumper posts `Notices::Post(Info, ...)`.

## Fixes made (code-inventory section 4)
- C29: `ImGui::Text(str.c_str())` with mod metadata (a `%` in an author/description was a format specifier): now `"%s"` / `TextUnformatted` in the window and in `Widgets.cpp` (headers of all `MDML_*` widgets).
- C30: `GetDevice` was called twice (leaked reference); the RTV back buffer was leaked on failure; the dummy device/context/swap chain/window of the hook install were never released and even stored in the singleton (so it was overwritten by the real device on the first Present). Now local, released after hooking; the window and class are destroyed; the install thread ends instead of sleeping forever. The pointless `VirtualProtect` calls are gone.
- `IsDXHooked` race (F1 thread vs. init thread): `D3D11Hook` uses `std::atomic<bool>::exchange`.
- `f1_pressed`/flags `TickVars` globals removed; `eventSystem.dispatchEvent` comment remnants removed.
- `ResizeBuffers`: null checks, RTV pointer reset after release.

## Behaviour changes for the in-game test
1. F1 opens/closes the window as before; with `bDelayGUISpawn` the first F1 still installs the hook (check log "Setting up D3D11Present hook", then window appears).
2. **Dummy objects are released and the install thread exits** (C30). If the UI no longer appears or Present hook breaks after the first frame, this is the first suspect.
3. A `DX11ResizeBuffers` event before the first Present now gets a null device/context (was: the leaked dummy device, wrong anyway).
4. Core mod menu button now runs on the game thread in the next UWorld tick (latency: one tick). Check a mod with `UseMenuButton` (BaseMod has one) and that it still works.
5. Dump buttons / console command: still work, enqueued immediately (before: up to 16 ms later).
6. Persistent notice display: needs an Error notice posted by 3E (engine layout check) to see it.
7. Everything else (ini path, docking, theme, WndProc input capture, Present hook order: device init -> ImGui init -> render -> `DX11Present` event) is unchanged.

## Follow-ups for the orchestrator
- `Dumper.cpp` (3E): post dump results via `Notices::Post` so the status line appears (see above).
- The merged `ModLoader.vcxproj(.filters)` conflicts with 3C/3E (their added/removed files): regenerate with `Dependencies\premake\premake5.exe vs2026` after merging instead of merging by hand.
- Mods' `DrawImGui`/`DX11Present` handlers run on the render thread and call UE (BaseMod). Needs a mod-API decision: e.g. an exported `GameThread::Enqueue` pattern in the BaseMod UI (3C) or a documented rule.
- `Log::SetupMessage("Cant enable MDML UI")` is still a message box, and with `UseDebugUI=0` every F1 press shows it again and sets `bIsMenuOpen` (pre-existing). Could become a transient `Notices::Post(Warning, ...)` once the F1 window can show without the DX hook (it cannot: no hook, no window), so the box stays.
- CLAUDE.md layout table: UI row could list the new files.

## Open questions for the owner
1. The window has no "load order" section (the Core Mods list is in load order; `LoadOrder.ini` has no UI). Add a read-only list with enabled/disabled state, or later an editor?
2. Release the dummy D3D objects (C30) - done here; want it reverted to the old "keep thread alive" behaviour if the test shows problems?
3. `ImGui::MDML_*` stay in namespace `ImGui` for source compatibility. Move to `mdml::ui` with `using` in `ImGui` later?
4. `LoaderUI` facade: keep long-term or deprecate after mods move to `mdml::ui` includes?
