@echo off
pushd %~dp0\..\
call Dependencies\premake\premake5.exe vs2022
popd
PAUSE