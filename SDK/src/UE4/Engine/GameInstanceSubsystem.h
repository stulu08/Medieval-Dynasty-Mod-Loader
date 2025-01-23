#pragma once
#include "Structs.h"
#include "Engine/Subsystem.h"
/////////////////////////////////////////////
// Class Engine.GameInstanceSubsystem
// Super: Class Engine.Subsystem
// Size: 48
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UGameInstanceSubsystem : public USubsystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.GameInstanceSubsystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};