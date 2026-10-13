# Lua scripting spike

Standalone proof of the binding style proposed in `docs/design/lua-scripting.md`. The spike embeds Lua 5.4.9 and sol2 v3.3.0
(both vendored, see `vendor/VENDORED.txt`) in a console test program. The program binds a **mock** UE reflection model shaped
like MDML's engine core. It is **not** part of the MDML solution, and the root `premake5.lua` does not include it.
Results and findings: `docs/reports/lua-scripting-spike.md`.

## Build (from the repo root)

```bat
scripts\premake\premake5.exe --file=Scripting/premake5.lua vs2026
"C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\amd64\MSBuild.exe" Scripting\build\MDMLScriptingSpike.slnx -m -p:Configuration=Release -p:Platform=x64
```

- Premake 5.0.0 is required. `scripts/setup.bat` downloads it (use `nogen` to only download it). `vs2022` works as an action too and produces `MDMLScriptingSpike.sln`.
- Output goes to `Scripting/bin/Release/ScriptingSpike.exe`. Project files go to `Scripting/build/`. Both folders are ignored by git.

## Run

```bat
Scripting\bin\Release\ScriptingSpike.exe            :: mods dir defaults to <exe>\..\..\test
Scripting\bin\Release\ScriptingSpike.exe <modsDir>
```

Exit code `0` means every harness expectation and every Lua `Check()` passed, and the last line reads `[harness] ALL PASSED`. If the program crashes, it prints a symbolized stack trace using DbgHelp and the PDB next to the exe.

## Layout

| Path | What |
|---|---|
| `src/MockReflection.*` | Stand-in for the engine. It models `UObject` + `GObjects` (index and serial number), `UClass`/`UStruct` with a super chain and `FProperty` list, `UFunction` with `ParamsSize`/`ReturnValueOffset`/parameter flags, the `FName` pool, `FString` on a counting `FMemory`, and `ProcessEvent` with an observer used as the hook point |
| `src/LuaRuntime.h` | Public runtime interface. It contains no sol2 types (pimpl) |
| `src/LuaRuntime.cpp` | The binding, and the only file that includes sol2 |
| `src/main.cpp` | Test harness: it builds the mock world, starts the mods, drives ticks, calls hooked functions from the game thread and from another thread, destroys an object, reloads a mod, and checks for leaks |
| `test/<Mod>/Scripts/main.lua` | Test mods: `GoodMod` (API checks), `RuntimeErrorMod` (errors every tick), `SyntaxErrorMod` (does not compile) |
