#pragma once
#include "Structs.h"
#include "UMG/UserListEntry.h"
/////////////////////////////////////////////
// Class UMG.UserObjectListEntry
// Super: Class UMG.UserListEntry
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UUserObjectListEntry : public UUserListEntry {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}

#pragma region Functions
	void OnListItemObjectSet(class UObject* ListItemObject);

#pragma endregion
};
};