#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class UMG.UserListEntryLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UUserListEntryLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}

#pragma region Functions
	static class UListViewBase* GetOwningListView(TScriptInterface<class UUserListEntry> UserListEntry);

	static bool IsListItemExpanded(TScriptInterface<class UUserListEntry> UserListEntry);

	static bool IsListItemSelected(TScriptInterface<class UUserListEntry> UserListEntry);

#pragma endregion
};
};