#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class PhysicsCore.PhysicalMaterialPropertyBase
// Super: Class CoreUObject.Object
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UPhysicalMaterialPropertyBase : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class PhysicsCore.PhysicalMaterialPropertyBase");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};