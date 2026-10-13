# SDK generator — first in-game run (2026-10-13)

Build deployed: `modernize` 6986d4c (hook API + premake 5.0.0/VS 2026 + RVA cache). Owner started the game 3 times; the
last run generated the SDK via DevTools (`DevTools/Example.export` ticked → Generate SDK).

## Startup / hooks (all OK)
- RVA cache works: `Using 17 cached symbol addresses from SymbolCache.txt (build 9D604CE5…-1)`, `Profile setup took 47 ms`
  (was 18938 ms on a cold start), `Pak overwrites loaded (152 ms after process start, 0 UObjects exist)`,
  `Loader setup finished (472 ms …)`. `Config/SymbolCache.txt` holds all 17 entries.
- New hook API in-game: all hooks log `Added hook '<name>' (owner MDML, target <module>+0x… )` — pak hooks, InitGameState,
  BeginPlay, Tick, DX11-ResizeBuffers/Present. Mods (BaseMod, DevTools) loaded, clean shutdown (`Deleted 0/0 file links`).
- "Loaded 2 core mod(s)" with 3 DLLs loaded is expected: Dumper7 is not an MDML mod (no mod object).

## Generation (OK)
- Dumper-7 analysis 1.2 s, generation 2.05 s total: **202 headers, 1724 classes, 1185 structs, 748 enums, 6365 functions
  (0 skipped), 48 opaque members, 0 missing packages**. "Example.export" pulled in 3 packages + dependencies.
- Output: `<Win64>/SDK-Out/4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty/MDML-SDK/*.hpp` (+ `GObjects-Dump*.txt` one level up).
- Note: clicking Generate with nothing ticked logs `Nothing selected: …` (fine).

## Offline compile test (FAILS: 137/203 compiled, 66 failed)
`python DevTools/tests/SDKCompileTest/compile_generated.py "<SDK-Out>/…/MDML-SDK"` (VS 2026). Three bug classes, all in
the generator/core, none in the game data:

1. **Core type alignment mismatch** (`static_assert … has the wrong alignment for this game build`):
   - `UE4::FColor` (CoreUObject.hpp:108) — hand-written core FColor has a different alignment than the game's (UE's FColor
     is a union with a `uint32 AlignmentDummy` → alignof 4). Cascades into every struct containing FColor
     (e.g. `FST_ModuleColors`, `FST_NPCSeasonClothing`, `FST_MontagesSettingsEnum`).
   - `UE4::FKey` (InputCore.hpp:82) — cascades into `FInputChord` (Slate), `FInputActionKeyMapping`,
     `FInputAxisKeyMapping`, `FBlueprintInputKeyDelegateBinding`, `FBlueprintInputAxisKeyDelegateBinding` (Engine).
   - Also `FWorldPSCPool`, `FMeshSectionInfoMap` (Engine) — check whether caused by a core container type (TMap/TArray
     alignment) or by the two above.
   → Fix the core types in `ModLoader/src/Engine/UE4/` (compare against Dumper-7's reported size/alignment), not the
     asserts.
2. **const pointer parameters** (~3800 errors, all Engine.hpp, e.g. `Actor.AddComponent` line ~25552):
   `_mdml_Parms.ComponentTemplateContext = ComponentTemplateContext;` — the wrapper parameter is `const UObject*`, the
   generated params-struct field is `UObject*`. Fix in MDMLGenerator: emit params-struct fields without const or
   `const_cast` in the assignment (UE's ProcessEvent params never are const in memory).
3. **Enum underlying type too small** (warnings C4369/C4309): e.g. `enum class ESkinCacheUsage : uint8_t { …, ESkinCacheUsage_MAX = 256 }`,
   same for `ESoundWaveLoadingBehavior`. Fix: drop/clamp the synthetic `_MAX` entry when it does not fit, or widen the type.

Work folder with per-header logs (temporary): `C:\Users\derst\AppData\Local\Temp\mdml-sdk-compile-gysynjws`.
Re-run the compile test after each fix; the generated headers stay in the game folder (no new in-game run needed for
class 2/3 if the generator can be re-run offline — otherwise owner regenerates in-game).

## Fixes (2026-10-13, ae2a116) — offline 203/203
- **Class 1** (bf5d33e): `alignas(4) FColor` (`Math/Color.h`), `alignas(8) FKey` (`CoreUObject/NamePool.h`), `alignas(8)` on the
  opaque `TMap` blob (`Containers/Map.h`, real TMap = 0x50/align 8). Sizes were already right, only alignment was off.
  `FWorldPSCPool`, `FMeshSectionInfoMap`, `FST_ModuleColors`, `FST_MontagesSettingsEnum`, `FST_NPCSeasonClothing` came from
  the **TMap** alignment, not from FColor/FKey. Old SDK params structs embedding these types now match UE's layout better.
- **Class 2** (ae2a116, `MDMLGenerator.cpp`): wrapper keeps `const T*` / `const T*&`; copy-in emits
  `_mdml_Parms.X = const_cast<FieldType>(X);`. Out-params/return copy-back untouched.
- **Class 3** (ae2a116): enum entries that do not fit the underlying type are dropped (comment in the header + note in
  the generation report), the type is never widened. Hits exactly `ESkinCacheUsage_MAX` and `ESoundWaveLoadingBehavior_MAX`.
- Verification: the generator only runs in-game, so classes 2/3 were simulated on a copy of the generated headers
  (`%TEMP%\mdml-sim\simulate.py` → `%TEMP%\mdml-sim\sdk`: 296 const_casts, 2 dropped entries). With the core fix:
  **`compile_generated.py` 203/203, 0 failed, 0 warnings**. Solution build: only C4715.
- Deployed 2026-10-13 (backup of the previous game-folder state incl. old `SDK-Out`: `C:\dev\MDML\backup\2026-10-13_pre-ae2a116`).
  **Owner to do:** start the game, DevTools → Generate SDK again, then re-run `compile_generated.py` on the real output.
