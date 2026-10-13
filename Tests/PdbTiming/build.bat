@echo off
rem Builds pdb_timing.exe with cl.exe from the VS 2026 developer environment.
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul || exit /b 1
cd /d "%~dp0"
cl /nologo /EHsc /O2 /std:c++17 pdb_timing.cpp /Fe:pdb_timing.exe /link dbghelp.lib version.lib
