# PDB lookup timing (startup regression, 2026-10-12 run)

## Problem
Latest in-game run logged `Profile setup took 18938 ms` (earlier runs: 375 ms); each of the 17 symbol lookups took 1-3 s.

## Method
`tests/pdb-timing/pdb_timing.cpp` (build with `build.bat`, cl.exe from VS 2026). Copies `LookupByName`/`DecoratedNameAt`
from `SymbolResolver.cpp`, loads the game EXE + PDB via `SymLoadModuleExW` at fake base 0x140000000 (no game process), and
times the 17 names from `EngineAddresses.cpp` split into: plain-name hash lookup, decorated-name check, slow fallback.

## Results (build 9D604CE5..., PDB 794 MB)
- dbghelp: `C:\WINDOWS\SYSTEM32\dbghelp.dll` 6.2.26100.9444 (system copy; no dbghelp.dll in the game folder).
- All 17 lookups take the **fast hash path**; the slow fallback was taken 0 times in 3 runs. RVAs match the game log exactly.
- Run 1 (partly cold file cache, right after build): `SymLoadModuleEx` 1247 ms, lookups total **3715 ms**
  (20-470 ms each; plain lookup alone up to 380 ms, the decorated-name check 50-250 ms) - page-fault/disk cost.
- Runs 2 and 3 (warm): `SymLoadModuleEx` ~147 ms, lookups total **50.6 ms** (0.2-9 ms each).

## Cause
Hypothesis (a) is ruled out: the fast path works with the current dbghelp, no silent fallback. The code did not regress
(SymbolResolver.cpp unchanged since 55f58e4). The time is I/O: dbghelp memory-maps the PDB and touches its hash/publics
pages lazily, so a cold file cache (first launch after reboot / PDB evicted, plus in-game disk contention and Defender
scanning the mapped file) turns every lookup into disk reads. My partly-cold run already showed ~70x slowdown vs warm;
a truly cold 794 MB PDB on the game drive plausibly reaches the observed 1-3 s per lookup. I could not force a fully
cold cache (needs an admin standby-list flush), so this is the best-supported explanation, not a proven one.

## Change
`SymbolResolver::Find` now measures each lookup and logs at Info level when it took the slow full scan or more than
500 ms: `PDB lookup of <name> took N ms (slow full scan | hash lookup, slow disk?)`. The next in-game run will show
directly which of the two it is. (Syntax-checked with `cl /Zs`; not built as part of MDML.)

## Open questions / recommendations for the owner
- Was the 18.9 s run the first launch after reboot or after a long idle? Run the game twice in a row; the second should be fast again.
- If cold starts matter: (1) cache the 17 resolved RVAs keyed by the build id (GUID+age, already computed by `GetBuildId`),
  skipping the PDB on later launches - needs your OK as it adds a cache file; (2) prefetch the PDB with a sequential read on
  a background thread at DLL load, turning random page faults into one sequential read.
- Symbols are resolved sequentially on the loader thread, which blocks game startup. Moving that off-thread is a bigger change - ask first.
