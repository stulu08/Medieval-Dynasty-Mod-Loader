#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.FoliageCollisionActor
// Super: Class Engine.Actor
// Size: 552
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AFoliageCollisionActor : public AActor {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.FoliageCollisionActor");
		return ptr;
	}

#pragma region Functions
	void ClearAssignedFoliageInstanceIndex();

	int32_t GetAssignedFoliageInstanceIndex()/* const*/;

	bool HasAssignedFoliageInstanceIndex()/* const*/;

#pragma endregion
};
};