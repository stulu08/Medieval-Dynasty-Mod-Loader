#pragma once
#include "Platform/Logger.h"
#include "UE4.h"

// Startup check of the engine layout (Wave 3D). mdml::Layout starts as the PDB-checked constants of EngineLayout.h.
// VerifyEngineLayout() tests every offset group against invariants of live engine objects (object #1 is the class
// "Object", Vector's first property is "X" with offset 0 / Y at 4 / Z at 8, ...). Only a group whose check fails is
// scanned for (the old UML runtime offset scan, kept as the fallback for a game build without a PDB) and replaced by
// the scanned values; every failure, scan result and replacement is logged as an error. See docs/reports/wave3/3D-engine.md.
namespace ClassDefFinder {
	// Returns true if every group holds (with the constants, or after the fallback scan). Needs the engine globals
	// (UE4::InitEngineGlobals) and should run on the game thread once the engine's CoreUObject/Engine classes exist.
	bool VerifyEngineLayout();
};
