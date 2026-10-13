#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class SlateCore.SlateTypes
// Super: Class CoreUObject.Object
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USlateTypes : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};