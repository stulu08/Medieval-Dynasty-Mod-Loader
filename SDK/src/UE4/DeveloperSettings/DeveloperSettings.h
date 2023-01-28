#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class DeveloperSettings.DeveloperSettings
// Super: Class CoreUObject.Object
// Size: 56
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UDeveloperSettings : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class DeveloperSettings.DeveloperSettings");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};