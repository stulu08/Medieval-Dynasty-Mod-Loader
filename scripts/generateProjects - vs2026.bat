@echo off
pushd %~dp0\..\ncall scripts\premake\premake5.exe vs2026
popd
PAUSE
