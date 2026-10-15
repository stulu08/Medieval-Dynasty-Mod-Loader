#include "Core.h"
#include "EngineInit.h"
#include "UE4.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "Runtime/EngineDefFinder.h"

// Engine layout state and the UE_LOG logger handle (Wave 2.4, were fields of SDK::SelectedGameProfile).
// mdml::Layout starts as the PDB-checked constants of EngineLayout.h (Wave 3D).
namespace mdml {
	EngineLayout Layout;
	Ref<spdlog::logger> UnrealLogger = nullptr;
}

// Single engine initialization for the whole process (Wave 2.3).
// Was `static void UE4::InitSDK()` in MDML.h: a header-static function, so every DLL (MDML and each mod) had its own
// copy and set its own copy of the engine globals. The engine core is now compiled into MDML.dll and exported, so there
// is exactly one UObject::GObjects / FName::GNames, bound here.
namespace UE4 {
	void InitEngineGlobals()
	{
		// UE 4.27: GName is the FNamePool itself (NamePoolData), not a pointer to a TNameEntryArray (pre-4.23 path
		// removed in Wave 3D).
		FName::GNames = (DWORD*)mdml::Addresses.GName;
		UObject::GObjects = (FUObjectArray*)mdml::Addresses.GObject;
		// GWorld: UE4::GetWorld() reads mdml::Addresses.GWorld directly (Wave 4 step B, was UWorld::GWorld).
	}

	void InitSDK()
	{
		InitEngineGlobals();

		// Before Wave 3D every offset group was scanned here at runtime (EngineDefFinder) unless the profile had a
		// manual [UObjectDef]/... section. Now the offsets are PDB-checked constants and only verified; a group is
		// scanned only if its check fails (see Runtime/EngineDefFinder.h). A group that cannot be verified is reported
		// as a persistent notice in the F1 window (Wave 3E); mods load anyway.
		ClassDefFinder::VerifyEngineLayout();
		Log::Info_UML("All Engine Classes Found");
	}
}
