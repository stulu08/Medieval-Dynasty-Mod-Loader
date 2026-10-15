@echo off
pushd %~dp0

python --version >NUL 2>&1
if errorlevel 1 goto errorNoPython

python python/setup.py %*
popd
PAUSE
exit /b

:errorNoPython
echo Python 3 was not found. Install it (e.g. from the Microsoft Store) and run this file again.
popd
pause
exit /b 1
