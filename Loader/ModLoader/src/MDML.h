#pragma once
// Forwarding header, kept only for source compatibility; include the real headers instead. It goes away once nothing
// includes it any more (Wave 3 round 2, the orchestrator removes it after the merge).
//   UE4::ELevelTick                     -> Engine/UE4/Engine/EngineBaseTypes.h (also pulled in by UE4.h)
//   UE4::InitSDK / InitEngineGlobals    -> Engine/EngineInit.h (MDML-internal)
//   ClassDefFinder                      -> Runtime/EngineDefFinder.h
// What became of the old static class MDML (dissolved in Wave 3A, see docs/reports/wave3/3A-runtime.md):
//   MDML::Start/ShutDown                -> mdml::runtime::Start/ShutDown             (Bootstrap/Startup.h)
//   MDML::InitGameState/BeginPlay/Tick  -> mdml::runtime game hooks                 (Runtime/GameHooks.h)
//   MDML::InitCoreMods                  -> mdml::mods::InitCoreMods                 (Mods/CoreModLoader.h)
//   MDML::CreateMod/CleanUpMods/...     -> mdml::mods                               (Mods/LogicMods.h)
//   MDML::FormatPath/GetDataFolder      -> mdml::runtime::FormatPath/GetDataFolder  (Runtime/Paths.h)
#include "Runtime/EngineDefFinder.h"
#include "EngineInit.h"
#include "UE4/Engine/EngineBaseTypes.h"
