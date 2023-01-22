#pragma once
#include <Windows.h>
#include <Psapi.h>

#include "Utilities/Math.h"

#include "Utilities/EngineDefFinder.h"
#include "Utilities/Logger.h"
#include "Utilities/Pattern.h"
#include "MDML.h"

#include "UObject/UnrealType.h"
#include "GameFramework/Actor.h"
#include "UObject/Stack.h"
#include "Engine/World.h"

namespace UE4
{
	static void InitSDK()
	{
		DWORD64   Names_offset = NULL;
		if (!FName::IsUsingNamePool())
		{
			Names_offset = (*(DWORD64*)(MDML::SelectedGameProfile.GName));
			FName::GNames = (DWORD*)Names_offset;
		}
		else
		{
			Names_offset = (DWORD64)(MDML::SelectedGameProfile.GName);
			FName::GNames = (DWORD*)Names_offset;
		}

		DWORD64   GObjObjects_offset = NULL;
		GObjObjects_offset = (DWORD64)(MDML::SelectedGameProfile.GObject);
		UObject::GObjects = (FUObjectArray*)GObjObjects_offset;

		DWORD64   GWorldObjects = NULL;
		GWorldObjects = (DWORD64)(MDML::SelectedGameProfile.GWorld);
		UWorld::GWorld = (UWorld**)GWorldObjects;

		#ifdef UNREALENGINEMODLOADER_EXPORTS //Stops dumb errors from the ExampleMod shit
		if (MDML::SelectedGameProfile.IsUObjectMissing)
		{
			Log::Warn_UML("UObject Not Defined. Scanning for def.");
			UE4::UObject* CoreUobjectObject;
			UE4::UObject* UEObject;
			if (MDML::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray)
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
			MDML::SelectedGameProfile.IsUObjectMissing = false;
		}

		if (MDML::SelectedGameProfile.IsUFieldMissing)
		{
			Log::Warn_UML("UField Not Defined. Scanning for def.");
			ClassDefFinder::FindUFieldDefs();
			MDML::SelectedGameProfile.IsUFieldMissing = false;
		}
		if (MDML::SelectedGameProfile.IsUStructMissing)
		{
			Log::Warn_UML("UStruct Not Defined. Scanning for def.");
			ClassDefFinder::FindUStructDefs();
			MDML::SelectedGameProfile.IsUStructMissing = false;
		}
		if (MDML::SelectedGameProfile.IsUEnumMissing)
		{
			Log::Warn_MDML("UEnum Not Defined. Scanning for def.");
			ClassDefFinder::FindUEnumDefs();
			MDML::SelectedGameProfile.IsUEnumMissing = false;
		}
		if (MDML::SelectedGameProfile.IsUFunctionMissing)
		{
			Log::Warn_UML("UFunction Not Defined. Scanning for def.");
			ClassDefFinder::FindUFunctionDefs();
			MDML::SelectedGameProfile.IsUFunctionMissing = false;
		}

		if (MDML::SelectedGameProfile.IsPropertyMissing)
		{
			ClassDefFinder::FindUEProperty();
		}
		Log::Info_UML("All Engine Classes Found");
		#endif

	}
}