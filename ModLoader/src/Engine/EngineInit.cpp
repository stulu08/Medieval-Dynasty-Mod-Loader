#include "Core.h"
#include "MDML.h"
#include "UE4.h"

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
			Names_offset = (*(DWORD64*)(SDK::SelectedGameProfile.GName));
			FName::GNames = (DWORD*)Names_offset;
		}
		else
		{
			Names_offset = (DWORD64)(SDK::SelectedGameProfile.GName);
			FName::GNames = (DWORD*)Names_offset;
		}

		DWORD64   GObjObjects_offset = NULL;
		GObjObjects_offset = (DWORD64)(SDK::SelectedGameProfile.GObject);
		UObject::GObjects = (FUObjectArray*)GObjObjects_offset;

		DWORD64   GWorldObjects = NULL;
		GWorldObjects = (DWORD64)(SDK::SelectedGameProfile.GWorld);
		UWorld::GWorld = (UWorld**)GWorldObjects;
	}

	void InitSDK()
	{
		InitEngineGlobals();

		if (SDK::SelectedGameProfile.IsUObjectMissing)
		{
			Log::Warn_UML("UObject Not Defined. Scanning for def.");
			UE4::UObject* CoreUobjectObject;
			UE4::UObject* UEObject;
			if (SDK::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray)
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
			SDK::SelectedGameProfile.IsUObjectMissing = false;
		}

		if (SDK::SelectedGameProfile.IsUFieldMissing)
		{
			Log::Warn_UML("UField Not Defined. Scanning for def.");
			ClassDefFinder::FindUFieldDefs();
			SDK::SelectedGameProfile.IsUFieldMissing = false;
		}
		if (SDK::SelectedGameProfile.IsUStructMissing)
		{
			Log::Warn_UML("UStruct Not Defined. Scanning for def.");
			ClassDefFinder::FindUStructDefs();
			SDK::SelectedGameProfile.IsUStructMissing = false;
		}
		if (SDK::SelectedGameProfile.IsUEnumMissing)
		{
			Log::Warn_MDML("UEnum Not Defined. Scanning for def.");
			ClassDefFinder::FindUEnumDefs();
			SDK::SelectedGameProfile.IsUEnumMissing = false;
		}
		if (SDK::SelectedGameProfile.IsUFunctionMissing)
		{
			Log::Warn_UML("UFunction Not Defined. Scanning for def.");
			ClassDefFinder::FindUFunctionDefs();
			SDK::SelectedGameProfile.IsUFunctionMissing = false;
		}

		if (SDK::SelectedGameProfile.IsPropertyMissing)
		{
			ClassDefFinder::FindUEProperty();
		}
		Log::Info_UML("All Engine Classes Found");
	}
}
