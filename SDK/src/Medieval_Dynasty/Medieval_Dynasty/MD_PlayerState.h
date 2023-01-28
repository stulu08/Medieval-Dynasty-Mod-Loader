#pragma once
#include "Structs.h"
#include "Engine/PlayerState.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MD_PlayerState
// Super: Class Engine.PlayerState
// Size: 800
// Size inherited: 800
/////////////////////////////////////////////
namespace UE4 {
class AMD_PlayerState : public APlayerState {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MD_PlayerState");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};