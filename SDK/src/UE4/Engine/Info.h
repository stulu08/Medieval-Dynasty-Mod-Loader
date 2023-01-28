#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.Info
// Super: Class Engine.Actor
// Size: 544
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AInfo : public AActor {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};