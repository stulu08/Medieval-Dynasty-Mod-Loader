#include "Core.h"
#include "MDML.h"
#include "UE4.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"

// Engine layout state and the UE_LOG logger handle (Wave 2.4, were fields of SDK::SelectedGameProfile).
// EngineLayout.h has no .cpp of its own on purpose: the offsets become PDB-derived constants later (plan 3D).
namespace mdml {
	EngineLayout Layout;
	EngineLayoutStatus LayoutStatus;
	Ref<spdlog::logger> UnrealLogger = nullptr;
}

// Single engine initialization for the whole process (Wave 2.3).
// Was `static void UE4::InitSDK()` in MDML.h: a header-static function, so every DLL (MDML and each mod) had its own
// copy and set its own copy of the engine globals. The engine core is now compiled into MDML.dll and exported, so there
// is exactly one UObject::GObjects / FName::GNames / UWorld::GWorld, bound here.
namespace UE4 {
	void InitEngineGlobals()
	{
		DWORD64 Names_offset = NULL;
		if (!FName::IsUsingNamePool())
		{
			Names_offset = (*(DWORD64*)(mdml::Addresses.GName));
			FName::GNames = (DWORD*)Names_offset;
		}
		else
		{
			Names_offset = (DWORD64)(mdml::Addresses.GName);
			FName::GNames = (DWORD*)Names_offset;
		}

		DWORD64   GObjObjects_offset = NULL;
		GObjObjects_offset = (DWORD64)(mdml::Addresses.GObject);
		UObject::GObjects = (FUObjectArray*)GObjObjects_offset;

		DWORD64   GWorldObjects = NULL;
		GWorldObjects = (DWORD64)(mdml::Addresses.GWorld);
		UWorld::GWorld = (UWorld**)GWorldObjects;
	}

	void InitSDK()
	{
		InitEngineGlobals();

		if (mdml::LayoutStatus.IsUObjectMissing)
		{
			Log::Warn_UML("UObject Not Defined. Scanning for def.");
			UE4::UObject* CoreUobjectObject;
			UE4::UObject* UEObject;
			if (mdml::Addresses.IsUsingFChunkedFixedUObjectArray)
			{
				CoreUobjectObject = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(1).Object;
				UEObject = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(2).Object;
			}
			else
			{
				CoreUobjectObject = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(1).Object;
				UEObject = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(2).Object;
			}
			ClassDefFinder::FindUObjectDefs(CoreUobjectObject, UEObject);
			mdml::LayoutStatus.IsUObjectMissing = false;
		}

		if (mdml::LayoutStatus.IsUFieldMissing)
		{
			Log::Warn_UML("UField Not Defined. Scanning for def.");
			ClassDefFinder::FindUFieldDefs();
			mdml::LayoutStatus.IsUFieldMissing = false;
		}
		if (mdml::LayoutStatus.IsUStructMissing)
		{
			Log::Warn_UML("UStruct Not Defined. Scanning for def.");
			ClassDefFinder::FindUStructDefs();
			mdml::LayoutStatus.IsUStructMissing = false;
		}
		if (mdml::LayoutStatus.IsUEnumMissing)
		{
			Log::Warn_MDML("UEnum Not Defined. Scanning for def.");
			ClassDefFinder::FindUEnumDefs();
			mdml::LayoutStatus.IsUEnumMissing = false;
		}
		if (mdml::LayoutStatus.IsUFunctionMissing)
		{
			Log::Warn_UML("UFunction Not Defined. Scanning for def.");
			ClassDefFinder::FindUFunctionDefs();
			mdml::LayoutStatus.IsUFunctionMissing = false;
		}

		if (mdml::LayoutStatus.IsPropertyMissing)
		{
			ClassDefFinder::FindUEProperty();
		}
		Log::Info_UML("All Engine Classes Found");
	}
}
