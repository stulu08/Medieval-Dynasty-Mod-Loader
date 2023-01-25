#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class UMG.UserObjectListEntryLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}

#pragma region Functions
	static class UObject* GetListItemObject(TScriptInterface<class UUserObjectListEntry> UserObjectListEntry);

#pragma endregion
};
};