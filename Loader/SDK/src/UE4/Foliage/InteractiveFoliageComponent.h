#pragma once
#include "Structs.h"
#include "Engine/StaticMeshComponent.h"
/////////////////////////////////////////////
// Class Foliage.InteractiveFoliageComponent
// Super: Class Engine.StaticMeshComponent
// Size: 1264
// Size inherited: 1248
/////////////////////////////////////////////
namespace UE4 {
class UInteractiveFoliageComponent : public UStaticMeshComponent {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};