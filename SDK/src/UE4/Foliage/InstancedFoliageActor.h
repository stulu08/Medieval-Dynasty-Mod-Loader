#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Foliage.InstancedFoliageActor
// Super: Class Engine.Actor
// Size: 624
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AInstancedFoliageActor : public AActor {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};