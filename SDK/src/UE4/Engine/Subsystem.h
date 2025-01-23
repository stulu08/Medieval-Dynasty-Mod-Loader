#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.Subsystem
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USubsystem : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Subsystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};