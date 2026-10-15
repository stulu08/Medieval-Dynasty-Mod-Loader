@echo off
rem Creates MDML-<version>.zip (players) and MDML-DevKit-<version>.zip (modders) from Output/ without the Mod Manager UI.
rem Build the solution first (Release x64). Zips go to Output\Packages (or the folder given as first argument).
rem Layout of both packages: Tools\ModManager\docs\ModManager.md, "Release packages".
"%~dp0..\Output\Tools\MDMLPackager.exe" %*
