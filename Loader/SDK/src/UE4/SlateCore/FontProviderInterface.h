#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class SlateCore.FontProviderInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UFontProviderInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};