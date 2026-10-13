#pragma once
#include "Structs.h"
#include "Foliage/FoliageInstancedStaticMeshComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.FoliageTest
// Super: Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 1712
// Size inherited: 1712
/////////////////////////////////////////////
namespace UE4 {
class UFoliageTest : public UFoliageInstancedStaticMeshComponent {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.FoliageTest");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};