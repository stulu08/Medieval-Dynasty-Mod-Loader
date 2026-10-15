@echo off
pushd %~dp0\..\
call Dependencies\premake\premake5.exe gmake2
popd
PAUSE