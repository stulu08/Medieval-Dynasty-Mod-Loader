@echo off
pushd %~dp0\..\
call Dependencies\premake\premake5.exe vs2019
popd
PAUSE