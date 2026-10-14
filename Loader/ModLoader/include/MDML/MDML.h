#pragma once
// Umbrella header of the public MDML mod API (Wave 4). Mods include this (or single headers from include/MDML) and
// link MDML.lib; nothing else of the loader (Loader/ModLoader/src) is visible to mods.
//
//   MDML/Core.h          export macros, Ref, LogLevel, standard + Windows headers
//   MDML/Version.h       MODLOADER_VERSION, MEDIEVAL_VERSION
//   MDML/Log.h           Logger, Log
//   MDML/Mod.h           class Mod (events), EventsEnabled presets
//   MDML/Mods.h          the core mod list (ForEachMod, FindMod, MoveToFront), REGISTER_FUNCTION
//   MDML/Hooks.h         function hooks (mdml::platform::Hooks)
//   MDML/IniFile.h       INI files (mdml::platform::IniFile)
//   MDML/GameThread.h    run code on the game thread (mdml::runtime::GameThread)
//   MDML/Paths.h         loader / game / config folders
//   MDML/Notices.h       notices in the F1 window
//   MDML/UI.h            D3D11 objects, F1 menu state, themes (mdml::ui)
//   MDML/UI/Widgets.h    labelled ImGui widgets (mdml::ui::widgets)
//   MDML/UI/TextEditor.h ImGuiColorTextEdit (exported from MDML.dll)
//   MDML/Math.h          glm + UE math constants
//   MDML/Engine.h        the engine core (UE4.h); game/engine classes: the generated SDK ("Engine.hpp", ...)
//   MDML/GameMod.h       class GameMod (Medieval Dynasty game states, player, managers, mod.ini helpers)
#include "MDML/Core.h"
#include "MDML/Log.h"
#include "MDML/Mod.h"
#include "MDML/Mods.h"
#include "MDML/Hooks.h"
#include "MDML/IniFile.h"
#include "MDML/GameThread.h"
#include "MDML/Paths.h"
#include "MDML/Notices.h"
#include "MDML/UI.h"
#include "MDML/UI/Widgets.h"
#include "MDML/Engine.h"
#include "MDML/GameMod.h"
