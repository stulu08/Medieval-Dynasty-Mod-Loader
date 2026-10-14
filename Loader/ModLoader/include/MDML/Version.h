#pragma once
// Version strings, included by MDML/Core.h (so every mod sees them). Mods store MODLOADER_VERSION / MEDIEVAL_VERSION in
// Mod::ModLoaderVersion / MedievalModLoaderVersion; CompleteModCreation warns when they differ from the loader's.

//The version of unreal mod loader (the project MDML was forked from; only logged)
#define UML_VERSION "2.2.1"
//The version of the medieval dynasty mod loader
#define MODLOADER_VERSION "3.0.0-dev"
//The version of medieval dynasty
#define MEDIEVAL_VERSION "2.7.0.4"
