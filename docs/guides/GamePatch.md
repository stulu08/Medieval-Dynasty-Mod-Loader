# After a game update

What to check when Medieval Dynasty gets a patch, in this order. Everything except step 5 and 6 runs offline against
the game's EXE and PDB (`Medieval_Dynasty-Win64-Shipping.exe` + `.pdb` in `Medieval_Dynasty/Binaries/Win64`, the Steam
depot ships both). Tools: `docs/REVERSE_ENGINEERING.md`.

1. **PDB still there and matching?** `python Tools/RE/pdbsym.py "<exe>" "*StaticLoadObject*"` must print a symbol.
   No PDB → MDML falls back to the AOB patterns of `Config/ModLoaderInfo.ini`; continue with step 2 anyway.
2. **Functions and globals:** `python Tools/RE/check_patterns.py`. Every entry must be OK.
   - A pattern that no longer matches: `python Tools/RE/check_patterns.py --gen --write` regenerates it (needs the PDB).
   - "symbol not found": the engine signature changed. Find the new decorated name with
     `python Tools/RE/pdbsym.py "<exe>" "*Name*"` and update `namespace Symbols` in
     `Loader/ModLoader/src/Engine/EngineAddresses.cpp` and the call sites.
3. **Engine offsets:** `python Tools/RE/check_layout.py` (165 constants). A mismatch: update the constant in
   `Loader/ModLoader/src/Engine/EngineLayout.h`; rebuild (the core's `static_assert`s follow).
4. **Build** the solution (`CLAUDE.md` → Build). 0 warnings expected.
5. **First start** (game): the log must show every symbol "from pdb", "Engine layout verified", no red notice in the
   F1 window. Existing core mods keep working even if game members moved, because the generated SDK resolves members by
   name; check the log for "dump offset fallback" / "disabled" lines from the generated accessors.
6. **Regenerate the SDK** (in game, DevTools, `docs/SDK_GENERATOR.md` → Running it): load a save first; hold the items
   whose classes you need (Blueprint classes are only in memory once used, e.g. the bow). Then copy the `MDML-SDK`
   folder over `Loader/SDK/Generated` (replace the whole folder), rebuild, and check single headers with
   `Tests/SDKCompileTest/compile_generated.py` (the full folder takes 1-2 h). Commit the new SDK.
7. Update the game version in `docs/REVERSE_ENGINEERING.md` (pattern status) and the plan's current state.
