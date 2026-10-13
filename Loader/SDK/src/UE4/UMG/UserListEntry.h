#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class UMG.UserListEntry
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UUserListEntry : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}

#pragma region Functions
	void BP_OnEntryReleased();

	void BP_OnItemExpansionChanged(bool bIsExpanded);

	void BP_OnItemSelectionChanged(bool bIsSelected);

#pragma endregion
};
};