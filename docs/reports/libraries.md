# MDML third-party library review (research only, 2026-10-09)

Scope: everything vendored in `ModLoader/vendor/`, plus `ModManager/src/JSON.h` and `ModLoader/src/UI/ImGuiColorTextEdit`.
No code was changed. "Latest" values come from the GitHub API on 2026-10-09. Items I could not verify are marked **(unverified)**.
Note: `.claude/worktrees/` copies of the repo exist and were excluded from all counts.

## Summary

| Library | Vendored | Latest upstream | Effort | Recommendation |
|---|---|---|---|---|
| spdlog (+ bundled fmt) | 1.8.5 (fmt 8.0.0) | 1.17.0 (2026-01-04, fmt 12.1.0) | Medium | Upgrade, together with the C++20 switch; fix the Logger wrappers first |
| Dear ImGui (docking) | 1.89.2 WIP (docking branch snapshot, IMGUI_VERSION_NUM 18916) | 1.92.9b (2026-07-31), tag `v1.92.9b-docking` exists | Medium | Upgrade to `v1.92.9b-docking`; move the `IMGUI_API` patch out of imgui.h |
| ImGui backends (dx11 + win32) | same snapshot as above | same release | Low | Upgrade with ImGui, same tag |
| MinHook | 1.3.3-era prebuilt `libMinHook-x64-v141-mtd.lib` (header copyright 2009-2017) | 1.3.4 (2025-03-28), active commits through 2026-09 | Medium | Migrate to SafetyHook (fallback: MinHook 1.3.4 built from source) |
| glm | "0.9.9.9" (master snapshot, not a tag) | 1.0.3 (2025-12-31) | Low | Keep for now; update opportunistically |
| INI (cpp-feather-ini-parser) | 2.0 (unmaintained; repo moved, fork last push 2024-07) | no releases | Low-Med | Replace with mINI 0.9.20 behind a thin wrapper that takes explicit sections |
| nlohmann/json (`ModManager/src/JSON.h`) | 3.11.3 macros, develop snapshot with 2013-2025 SPDX header | 3.12.0 (2025-04-11) | Low | Optional bump, 1 call site |
| ImGuiColorTextEdit | BalazsJako master at `0a88824f` (2019-06-15) plus 4 local patches | BalazsJako master `ca2f9f14` (2025-11-24), fixed for ImGui 1.92 | Low-Med | Take upstream master and re-apply the local patches |

## Repo license and compatibility

- `LICENSE` is the GNU LGPL v2.1 text (inherited from UnrealModLoader). It contains no copyright holder line.
- MIT, BSD, BSL-1.0 and zlib-style libraries (all libraries below) are compatible with LGPL-2.1 distribution. Keep their copyright notices (a `THIRD_PARTY_LICENSES` file is advisable).
- Per-library licenses:
  - spdlog: MIT. The bundled fmt is MIT, and the `LICENSE` file is in the vendor folder.
  - ImGui: MIT.
  - MinHook: BSD-2-Clause (includes HDE64, also BSD).
  - glm: MIT / "Happy Bunny" **(unverified)**. There is no license file in `vendor/glm`, so add upstream's `copying.txt`.
  - nlohmann/json: MIT.
  - ImGuiColorTextEdit: MIT (`LICENSE` is in the folder).
  - Feather INI: the header says "free to use however you wish", which is not a standard license. The c-ridgway fork lists MIT.
  - mINI: MIT.
  - SafetyHook: BSL-1.0 (uses xbyak, BSD-3, and Zydis, MIT).
  - Zydis: MIT.
- **UE4SS reference code**:
  - The brief says LGPL-2.1, but the local copy `C:\dev\MDML\tools\RE-UE4SS-src\LICENSE` is **MIT** (Narknon, 2022), and so is `UVTD/LICENSE`. GitHub's API also reports MIT for UE4SS-RE/RE-UE4SS.
  - A repo-wide grep for "LGPL" or "Lesser General Public" in license, markdown, txt and lua files found nothing. Bundled deps may have their own licenses; check any subfolder before copying from it.
  - Copying MIT code into an LGPL-2.1 project is fine if you keep the MIT notice and copyright line.
  - If some part really is LGPL-2.1, it is the same license as ours, so it is also fine. Keep the notice, and modified copies stay LGPL.
- **Dumper-7**: the local `tools/Dumper-7` has no LICENSE file, and I could not resolve the upstream repo via the API. I could not verify the MIT claim. MIT code can be copied with its notice retained. Confirm the license in upstream before copying.

---

## spdlog

- **Vendored**: 1.8.5 (`spdlog/version.h`), with bundled fmt 8.0.0 (`FMT_VERSION 80000`). Header-only use, no `SPDLOG_COMPILED_LIB` define found.
- **Latest**: 1.17.0 (2026-01-04), bundled fmt 12.1.0.
- **What matters**:
  - 1.8.5 is from 2021. It works with C++17, but fmt 8 under /std:c++20 enables consteval-checked format strings.
  - Later releases carry many bug fixes: `%z` fixes, safer file sinks, etc.
  - fmt 9+ removed the implicit `operator<<` fallback. Types need `fmt::ostream_formatter`.
- **Usage**:
  - Direct spdlog use is limited to `ModLoader/src/Utilities/Logger.{h,cpp}`, `GameInfo.h` (`Ref<spdlog::logger> UnrealLogger`) and `SDK/src/UE4/UE_LOG.h`.
  - About 35 `spdlog::` references; roughly 188 `Log::*` call sites plus 10 `UE_LOG(...)` uses go through the wrappers.
  - `Logger.h` includes `<spdlog/fmt/ostr.h>`. `Mod.h:112-116` defines `operator<<` for `FQuat`, `FVector4`, `FVector`, `FRotator`, `FVector2D`. These need `ostream_formatter` specializations on fmt 9+.
- **Risks (concrete)**:
  1. `Log::Trace_UML(const std::string& format, ...)` and `Logger::Info(const FormatString& fmt, ...)` forward runtime strings into `m_logger->info(fmt, args...)`. Under C++20, `fmt::format_string` is consteval, so this will not compile. It needs `fmt::runtime(fmt)` or `spdlog::format_string_t<Args...>` in the wrappers. `UE_LOG` has the same problem (`->log(level, Format, __VA_ARGS__)`).
  2. `Logger.h` calls `m_logger->trace<T>(msg)` with an explicit template argument. This can become ambiguous against the newer `(format_string_t<Args...>, Args&&...)` overloads.
  3. `Logger.cpp:75` uses the internal `spdlog::details::registry::instance().initialize_logger()`. It still exists in 1.17 **(unverified)**; check it.
  4. Existing bug, independent of the upgrade: `~Logger()` calls `delete(m_logger.get())` on pointers owned by `shared_ptr` (also for the sinks). That is a double delete.
- **Effort**: Medium. Mechanical, but it touches the central logging path. Do it in one commit: fix the wrappers and the ostream formatters, then bump.
- **Recommendation**: upgrade with the C++20 switch. Alternative, if C++20 is adopted: drop fmt and set `SPDLOG_USE_STD_FORMAT`, but `std::format` has no ostream fallback either.

## Dear ImGui (docking) and backends

- **Vendored**: `IMGUI_VERSION "1.89.2 WIP"`, `IMGUI_VERSION_NUM 18916`. It is the **docking branch**:
  - `imgui.h` contains `ImGuiConfigFlags_DockingEnable` and `ImGuiCol_DockingPreview`.
  - Both `LoaderUI.cpp` and `ModManager/Renderer.cpp` set `ImGuiConfigFlags_DockingEnable`.
  - ModManager also sets `ViewportsEnable`.
  - So `master` cannot be used; take the `-docking` tag.
- **Latest**: v1.92.9b (2026-07-31). Docking tags exist: `v1.92.9b-docking`, `v1.92.9-docking`.
- **Backends used**: `imgui_impl_dx11` and `imgui_impl_win32`. The vendored copies are the 1.89.2-era files.
- **Local patch in vendored code**: `imgui.h:77` is `#define IMGUI_API LOADER_API`. The ModLoader DLL exports ImGui and mod DLLs import it (`IMGUI_IMPL_API` is also `LOADER_API`). Move this into `imconfig.h` (`#define IMGUI_API LOADER_API`) so future upgrades are drop-in. Core mods use ImGui via this export; since old-mod compatibility is not needed, the ABI break is not a concern.
- **Usage** (ImGui:: call sites, TextEditor excluded):
  - `ModLoader/src` about 289 (all in `UI/LoaderUI.cpp`).
  - `BaseMod/src` about 163.
  - `ModManager/src` about 48.
  - `ExampleMods` about 40.
  - The distinct API surface is small (about 120 functions). Backend calls (`Init`, `NewFrame`, `RenderDrawData`, `Shutdown`) are in `LoaderUI.cpp:355-395` and `ModManager/Renderer.cpp:36-91`.
- **Concrete breaks vs. vendored version** (checked against the `v1.92.9b-docking` headers):
  - `ImGuiColumnsFlags_NoResize` / `NoBorder` (14 BeginColumns sites in `LoaderUI.cpp`, the `MDML_*` helper widgets): the old names are commented out in `imgui_internal.h`. Rename to `ImGuiOldColumnFlags_*`.
  - `ImGui::BeginColumns(...)` and `PushMultiItemsWidths(...)` (14 sites in `LoaderUI.cpp`, e.g. line 829) exist only in `imgui_internal.h`. They still exist, but the file must include `<imgui_internal.h>`.
  - `ImGuiSliderFlags_ReadOnly` (19 uses) is in `imgui_internal.h` and is still there.
  - TextEditor: `ImGui::GetKeyIndex()` (25 calls) was removed, and `PushAllowKeyboardFocus` / `PopAllowKeyboardFocus` and `CaptureKeyboardFromApp` are now commented out. See the TextEditor section.
  - Renamed but still available through the obsolete shims (compile today, warn nowhere, break if `IMGUI_DISABLE_OBSOLETE_FUNCTIONS` is set):
    - `ImGuiCol_TabActive` -> `TabSelected`
    - `ImGuiCol_TabUnfocused` -> `TabDimmed`
    - `ImGuiCol_TabUnfocusedActive` -> `TabDimmedSelected`
    - `ImGuiCol_NavHighlight` -> `ImGuiCol_NavCursor`
    - These appear 4 times each in the theme code in `LoaderUI.cpp`.
  - `ModManager/src/Application.cpp:54`: `ImGui::BeginChild(name, size, true)`. The third parameter is now `ImGuiChildFlags`. `true` still converts to 1, which equals `ImGuiChildFlags_Borders`, but change it to the flag.
  - `ImGui_ImplWin32_WndProcHandler` is declared by hand (`LoaderUI.h:20`, `ModManager/Renderer.h:12`). Upstream still hides it behind `#if 0`, so the manual declaration stays valid.
  - ImGui 1.92 introduced dynamic fonts and `ImTextureRef` (backends changed; the font atlas is now managed by the backend). MDML does not load custom fonts or textures in the files I grepped, so impact looks low. `ImGui::GetFont()->CalcTextSizeA(...)` (TextEditor, 8 sites) still exists **(unverified at compile level)**.
- **Hooking-specific risk**: the Present hook calls `NewFrame`/`Render` inside the game's frame. In 1.92 the DX11 backend updates textures during `RenderDrawData`, so the device/context must be valid there. This is already the case.
- **Effort**: Medium. About 1 day of mechanical fixes, then in-game testing (the owner tests; do not launch the game).
- **Recommendation**: take `v1.92.9b-docking` (or the next docking tag at that time) for both the ModLoader and ModManager, replacing the whole `imgui` folder, then re-add the `IMGUI_API` define in `imconfig.h`. Do the upgrade after the C++20 switch and the spdlog bump, as its own commit.

## MinHook and hooking alternatives

- **Vendored**: prebuilt `ModLoader/vendor/MinHook/lib/libMinHook-x64-v141-mtd.lib` plus `include/MinHook.h`. The header copyright is 2009-2017 and the status enum matches v1.3.3. The `.lib` is a **v141 / static debug runtime (`/MTd`)** build, linked into Release DLLs that use `staticruntime "off"` (/MD). This is a CRT mismatch (debug CRT inside a release module), and there is no source to rebuild from.
- **Latest**: v1.3.4 (2025-03-28: better thread enumeration/suspension error handling, VS2022 support, CMake). Master still gets commits (HDE updates 2026-09-07, VS2026 support 2026-05).
- **Usage** (`ModLoader/src/Utilities/MinHook.h` wrapper):
  - `MinHook::Init` (`HooksManager.cpp:163`, `BaseMod.cpp:34`).
  - `MinHook::Add(target, detour, &orig, name)`: 10 call sites. Six are in `HooksManager.cpp` (FindFileInPakFiles, IsNonPakFilenameAllowed, InitGameState, BeginPlay, Tick, ProcessInternals), two in `LoaderUI.cpp:481-482` (DX11 ResizeBuffers and Present) and two in `BaseMod.cpp`.
  - Direct `MH_*` calls only in `HooksManager.cpp:203-204` (`MH_DisableHook(MH_ALL_HOOKS)`, `MH_Uninitialize`).
  - The wrapper is header-only and statically links MinHook into **each DLL** that includes it (ModLoader, BaseMod and example mods each link the `.lib` themselves in premake). Every mod therefore has its own MinHook instance and its own state. Exposing a hook API from `MDML.dll` would fix this.
  - `LoaderUI.cpp:468-482` creates a dummy device and swapchain, reads vtable slots 8 (Present) and 13 (ResizeBuffers), and inline-hooks the function bodies. The `VirtualProtect` calls afterwards (`PAGE_EXECUTE_READWRITE` on the first 2 bytes) look redundant.
- **Thread safety**: MinHook already suspends all other threads (and fixes their IPs) inside `MH_EnableHook` / `MH_DisableHook` / `MH_ApplyQueued`. `MH_QueueEnableHook` + `MH_ApplyQueued` batch the freeze; MDML calls `MH_EnableHook` per hook, so it freezes threads once per hook. Not a differentiator: SafetyHook does the same (`trap_threads` in `inline_hook.cpp`).

| Aspect | MinHook 1.3.4 | SafetyHook 0.7.0 | Detours (Microsoft) | PolyHook 2 |
|---|---|---|---|---|
| Maintenance | Slow but alive (6k stars) | Active, frequent releases (2026-06), pre-1.0 so API can change | Active (6.4k stars, MIT) | Active (1.9k stars, MIT) |
| Language | C API, any C++ | **C++23** (`std::expected`) | C API | C++ (heavier) |
| Disassembler | HDE64 (old) | Zydis (modern) | built-in | Zydis or capstone |
| Inline hook | yes | yes, widens short branches, fixes RIP-relative code | yes | yes |
| Mid-function hook (register context) | no | **yes** (`MidHook`, `Context&`) | no | limited |
| VMT hook | no | **yes** (`VmHook`, `VmtHook`) | no | yes |
| Thread freeze on install | yes | yes | caller must call `DetourUpdateThread` | yes |
| Objects / RAII | no (global state, manual enable/disable) | yes (`SafetyHookInline`, unhook on destruction) | no | yes |
| License | BSD-2 | BSL-1.0 (+Zydis MIT) | MIT | MIT |
| Build integration | trivial (about 8 files) | amalgamated zip (see below) | few files | CMake, heavy |

- **SafetyHook details**:
  - Requires C++23 in any TU that includes `safetyhook.hpp`.
  - Release zips: `safetyhook-amalgamated-zydis.zip` (412 KB, includes Zydis) and `safetyhook-amalgamated.zip` (17 KB, no Zydis). With the Zydis variant define `ZYDIS_STATIC_BUILD`. Zydis 4.1.x is C code; premake must compile `.c` files.
  - `safetyhook.hpp` is not usable from a C++17 or C++20 TU. Keep it behind one new `Hooks.cpp`/`Hooks.h` pair (compiled with `cppdialect "C++latest"`, i.e. `/std:c++latest`, which VS2022 v143 supports for `<expected>`) and expose a plain C++17-compatible API to the rest of the code. UE4SS (our reference) uses PolyHook2 rather than SafetyHook.
  - SafetyHook's `VmHook` can replace the "inline-hook the DXGI function body" approach with a vtable slot swap, if we hook the vtable of a real swapchain instead of a dummy one. `VmtHook` clones the vtable for **one object**, so it is not suitable for the dummy-swapchain trick. Use `VmHook` (single slot) or keep inline hooks for Present. **(unverified in practice; test it.)**
  - RAII objects unhook on destruction. During DLL unload or `FreeLibrary`, run the destructors in a defined order so hooks are removed before the module's code goes away (there was an upstream fix for "access violation calling disable in atexit", v0.6.10).
- **Migration touches**:
  - `Utilities/MinHook.h` (replace by a `Hooks::Add` with the same signature, keeping `orig` function pointers where possible, or switch to `SafetyHookInline::call<>`).
  - 10 `MinHook::Add` call sites.
  - `HooksManager.cpp:203-204` shutdown.
  - Both `Init` calls.
  - The `libMinHook-*.lib` entries in 4 premake files (ModLoader, BaseMod, 2 example mods) and `IncludeDir.MinHook`.
  - Detour pointer storage: `hookXxx` functions would call the stored `SafetyHookInline` object, or keep raw `orig` pointers via `hook.original<T>()`.
- **Recommendation**: **SafetyHook** via the amalgamated-with-Zydis zip, isolated in one C++23 TU. Reasons:
  1. It removes the opaque debug-CRT `.lib`.
  2. It gives mid-function hooks and VMT hooks, which the loader will need (e.g. patching inside engine functions, or hooking D3D vtables).
  3. Better instruction decoding (Zydis) than HDE64.
  4. A cleaner API with error values via `std::expected`.
  - Costs: C++23 only in one TU, and a pre-1.0 API.
  - If the owner prefers minimal change: build MinHook 1.3.4 from source as a premake static lib (small effort, removes the CRT mismatch, no new capabilities). Both options remove the prebuilt `.lib`.

## glm

- **Vendored**: `GLM_VERSION_MESSAGE "GLM: version 0.9.9.9"` (macro 999). This is not a release tag (the last 0.9.x tag is 0.9.9.8), so it is a master snapshot from between 2020 and 1.0.0.
- **Latest**: 1.0.3 (2025-12-31). 1.0.x is C++17-ready and drops legacy workarounds.
- **Usage**: about 94 `glm::` references: `vec2/3/4`, `quat`, `mat4`, `to_string`, `translate/scale/toMat4`. Includes: `gtc/type_ptr`, `gtc/constants`, `gtx/quaternion`, `gtx/string_cast`, `gtx/compatibility`, `gtx/matrix_decompose`, `gtc/matrix_transform`, `gtx/hash`. Files: `Mod/Mod.h`, `Utilities/Math.h`, `UI/LoaderUI.*`, `BaseMod/BaseMod.cpp`, `BaseMod/Utils.h`, and `SDK/src/UE4/Math/{Quat,Rotator,Transform,Vector}.h`. `GLM_ENABLE_EXPERIMENTAL` is defined and is still required for the gtx headers in 1.0.x.
- **Effort**: Low, but gains are small. 1.0.x changed some defaults (e.g. quaternion/constexpr handling); check the SDK math conversions if bumping **(unverified)**.
- **Recommendation**: keep. Bump only if a compile problem appears under C++20. Add upstream `copying.txt` to the vendor folder.

## INI parser (cpp-feather-ini-parser 2.0)

- **Vendored**: header `ModLoader/vendor/INI/INI.h`, "Feather INI Parser - 2.0", by Turbine1991. The original repo has moved; the active fork is `c-ridgway/cpp-feather-ini-parser` (last push 2024-07-26, MIT). No releases.
- **The quirk** (`INI.h:268-285`):
  - `get(section, key, def)` and `getAs<T>(section, key, def)` simply call `get(key, def)` / `getAs<T>(key, def)`. The `section` argument is ignored and the **last `select()`ed** section is read.
  - `current` is never initialised or null-checked. A `get(key, def)` before any `select()` dereferences null.
  - `select(missing, noCreate=false)` silently **creates** the section and returns `false`.
  - `create()` throws `-1` on a duplicate section, and `keys_t` objects are `new`ed and never freed.
  - Parse/save flags are static globals.
- **Call-site audit** (script over `ModLoader/src/MDML.cpp`, `ModLoader/src/Mod/ModLoader.cpp`, `BaseMod/src/GameMod.h`, `ModManager/src/Application.h`, tracking the last `select()` per file):
  - 54 calls that pass an explicit section: 52 in `MDML.cpp`, 1 in `GameMod.h:78`, 1 in `ModManager/Application.h:~47`.
  - **0 mismatches**: every call passes the same section that was selected just before it. Best effort, textual tracking; I did not execute the code.
  - About 15 two-argument calls (`get(key, def)`) rely entirely on the selected section (`ModLoader.cpp:144,198-202`, `MDML.cpp:309,332,343-344,635,652-653` and others). These are correct as long as `select()` precedes them.
  - Fixing the wrapper (make the 3-argument form do `select(section, true)` then lookup) is therefore behavior-neutral for all existing code.
- **Where INI is used**: the loader config `Config/ModLoaderInfo.ini` (patterns, offsets, flags, 53 lines, only `;` comments), mod `mod.ini` files (3 shipped), UE's `GameUserSettings.ini` (`MDML.cpp:18-23`), ModManager `settings.ini`, and `BaseMod` / `GameMod` get/set helpers.
- **Replacement options**:

| Option | Format | Maintenance | Pros | Cons |
|---|---|---|---|---|
| Fix wrapper in place | INI | none upstream | 3-line change, zero risk, no API churn | keeps the null-deref / leak / `throw -1` issues |
| mINI 0.9.20 (MIT, header-only, C++11) | INI | active (2026-06) | `ini["Section"]["Key"]` model, read + write, lazy write that preserves comments/format | `;` comments only (matches our files, but we pass `PARSE_COMMENTS_HASH/SLASH` today), no typed getters (add a 10-line `getAs<T>`), names are case-insensitive unless `MINI_CASE_SENSITIVE`, no trailing comments on key lines, `operator[]` creates entries |
| inih r62 (BSD-3) | INI | active (2025-09) | tiny, battle-tested, supports `#`/`;` and inline comments | **read-only**; writing needs custom code; callback or `INIReader` API |
| toml++ 3.4.0 (MIT) | TOML | last release 2023-10 | typed values, real arrays/tables, hex ints | heavy header, strings must be quoted (every AOB pattern line changes), format change for all configs and mods. UE's own `GameUserSettings.ini` still needs an INI reader, so this does not remove INI |

- **Recommendation**: **mINI**, but introduce a small `Config::IniFile` wrapper first with an explicit-section API (`get<T>(section, key, default)`, `has`, `set`, `save`). Do the wrapper (with the fixed semantics) before swapping the backend, so the swap is invisible to callers. Define `MINI_CASE_SENSITIVE` to match current behavior, and keep `;` as the comment character (document it for mod authors). If the owner does not want a dependency swap at all, the minimal fix is to make the 3-argument `get`/`getAs` honour the section; since all 54 call sites already match, this is safe.

## nlohmann/json (`ModManager/src/JSON.h`)

- **Identified**: nlohmann/json, single header, `NLOHMANN_JSON_VERSION 3.11.3` (macros at `JSON.h:68-70`), 25,509 lines. The SPDX header says 2013-2025, so this is a develop-branch snapshot from between 3.11.3 (2023-11) and 3.12.0 (2025-04). Exact commit **(unverified)**.
- **Latest**: 3.12.0 (2025-04-11).
- **Usage**: one include (`Downloader.cpp:8`) and one call (`nlohmann::json::parse(response)`, `Downloader.cpp:118`). ModManager only.
- **Effort**: Low. Drop-in replacement of the single header is possible, but gains are minimal.
- **Recommendation**: optional. Replace with the official 3.12.0 `json.hpp` when ModManager is touched next. Consider moving it to `ModManager/vendor/` to match the other libs.

## ImGuiColorTextEdit (`ModLoader/src/UI/ImGuiColorTextEdit`)

- **Vendored**: BalazsJako/ImGuiColorTextEdit master as of `0a88824f` (2019-06-15), the last upstream commit until 2025. I diffed it against upstream master. Local changes:
  1. `LOADER_API` on the classes plus `#include "Core.h"` instead of the std headers.
  2. A new `LanguageDefinition::INI()` (used by `BaseMod.cpp:546`).
  3. `ImGuiWindowFlags_NoScrollWithMouse` on the child window.
  4. `IMGUI_DEFINE_MATH_OPERATORS` / `<imgui/imgui.h>` include.
- **Latest upstream**: master `ca2f9f14` (2025-11-24). The maintainer merged "fix for 1.92" PRs (#166): `GetKeyIndex()` removed, `PushAllowKeyboardFocus` replaced by `PushItemFlag(ImGuiItemFlags_NoTabStop, ...)`, warning fixes.
- **Forks** (**unverified**):
  - goossens/ImGuiColorTextEdit is actively maintained (commits through 2026-10-07), but it is a different API from the 2019 widget.
  - santaclose: last push 2025-10.
  - Neither is a drop-in.
- **Usage**: `BaseMod.cpp:542-640` (INI editor and INI browser). About 25 `GetKeyIndex` calls inside `TextEditor.cpp`.
- **Known limit**: syntax highlighting uses `std::regex` (slow for non-C/C++ languages; the README says so). This is fine for small INI files.
- **Effort**: Low-Med. Replace the two files with upstream master, then re-apply the INI language definition, `LOADER_API` and the `Core.h` include.
- **Recommendation**: do this together with the ImGui upgrade, because the current copy will not compile against 1.92.

---

## Decisions needed from the owner

1. **Hooking library**: SafetyHook (C++23 in one isolated TU, Zydis amalgamated into the repo, mid-function and VMT hooks) or stay on MinHook rebuilt from source as v1.3.4 (no new features)? My recommendation is SafetyHook.
2. **Mod hook API**: should `MDML.dll` export a hook function so core mods share one hook instance, instead of every mod linking its own copy? (Today BaseMod and the example mods each statically link MinHook.)
3. **INI**: switch to mINI behind an explicit-section wrapper (recommended), or just fix the 3-argument `get`/`getAs` in the vendored header (3 lines, safe because the 54 audited call sites all match)? Also: do we keep `#` and `//` comment support for mod authors (mINI only supports `;`)?
4. **ImGui**: confirm moving to `v1.92.9b-docking` for both ModLoader and ModManager, and moving the `IMGUI_API LOADER_API` patch into `imconfig.h`.
5. **spdlog**: upgrade to 1.17.0 (fmt 12.1.0) together with the C++20 switch? This needs `fmt::runtime` in the Logger wrappers and `ostream_formatter` for the glm-based operators.
6. **TextEditor**: take upstream BalazsJako master (patched again) now, or evaluate the goossens fork later?
7. **C++ standard**: all 7 premake projects are `cppdialect "C++17"` today. Moving to C++20 is a precondition for the spdlog consteval fix; confirm the target (C++20 everywhere, with C++23 only for the SafetyHook TU).
8. **Licensing housekeeping**: add a `THIRD_PARTY_LICENSES` file (glm `copying.txt` is currently missing; Feather INI has no standard license)? Also confirm the UE4SS and Dumper-7 license status above before copying any code (the local UE4SS copy is MIT, not LGPL).
9. **JSON.h**: bump to 3.12.0 and move it to a `vendor/` folder, or leave it?
