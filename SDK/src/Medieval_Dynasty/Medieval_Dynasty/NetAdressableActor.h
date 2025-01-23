#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.NetAdressableActor
// Super: Class Engine.Actor
// Size: 544
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ANetAdressableActor : public AActor {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.NetAdressableActor");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};