# MDML development kit

`MDML-DevKit-<version>.zip` is everything in the player package (`MDML-<version>.zip`) plus what you need to write and debug mods.
This file is the `README.md` inside `DevKit/` of the kit. How the zips are made: `Tools/ModManager/docs/ModManager.md`, "Release packages".

## Layout of the zip
```
MDML.dll  xinput1_3.dll  MDML.pdb  xinput1_3.pdb     loader (copy the dlls next to Medieval_Dynasty-Win64-Shipping.exe)
Config/                  default ModLoaderInfo.ini, NoOverwrite.ini (no LoadOrder.ini: the loader creates it)
Mods/DevTools/           the DevTools mod incl. pdb. DISABLED: remove the ';' in its mod.ini ([Core], Dll, MenuButton)
ModManager/              Mod Manager app (can install this package into the game and manage mods)
docs/                    Installation.md (+ images)
README.md  LICENSE  THIRD_PARTY_LICENSES.md
DevKit/                  this folder - only needed for building mods, never copy it into the game
  README.md              this file
  include/MDML/          public mod API (umbrella MDML/MDML.h)
  include/Engine/        hand-written engine core headers (UE4.h, CoreUObject, Containers, Math, ...)
  include/SDK/           generated game SDK, header-only (Engine.hpp, BP_PlayerCharacter.hpp, ...); never edit by hand
  include/ThirdParty/    headers the public API includes: spdlog/, glm/, ImGui/ (+ licenses)
  lib/MDML.lib           import library of MDML.dll (link it; the engine core is exported from the dll)
  examples/              PresetMod, TimeWeatherChanger: sources, Config/mod.ini, premake files (Examples.lua, <Mod>.lua)
  docs/                  Modding.md (start here), ARCHITECTURE.md, SDK_GENERATOR.md, mod-components.md, public-api.md, hook-api.md, GamePatch.md
```
The loader part of the kit has the same layout as the player package, so the Mod Manager's "Zip file" source installs either one.

## Building a mod against the kit
Release x64, C++20, `/utf-8`, dynamic CRT (`/MD`), define `NDEBUG`. Include directories (relative to `DevKit/`):
`include`, `include/Engine`, `include/Engine/UE4`, `include/SDK`, `include/ThirdParty/spdlog`, `include/ThirdParty/glm`, `include/ThirdParty/ImGui`.
Link `lib/MDML.lib`. The mod is a DLL with one `MDML_MOD(YourClass)` (see `docs/Modding.md`); put it with its `mod.ini` into
`Content/Mods/<Name>/`. `examples/*/<Mod>.lua` are the premake projects the repo uses (they refer to the repo's `IncludeDir` table
and `links "ModLoader"`; replace those by the directories and `MDML.lib` above).
The kit is built from the same tree as `MDML.dll`: mods must be rebuilt against the kit of the MDML version they run with.
