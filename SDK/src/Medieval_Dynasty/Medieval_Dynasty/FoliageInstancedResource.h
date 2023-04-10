#pragma once
#include "Structs.h"
//#include "Foliage/FoliageInstancedStaticMeshComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.FoliageInstancedResource
// Super: Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 1728
// Size inherited: 1712
/////////////////////////////////////////////
namespace UE4 {
class UFoliageInstancedResource  : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.FoliageInstancedResource");
		return ptr;
	}

#pragma region Functions
	class AFoliageCollisionActor* GetFoliageCollisionActor(int32_t foliageInstanceIndex)/* const*/;

#pragma endregion
};
};