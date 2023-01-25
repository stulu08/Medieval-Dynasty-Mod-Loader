#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffect_PlayerType.E_EventEffect_PlayerType
/////////////////////////////////////////////
enum class E_EventEffect_PlayerType : uint8_t {
	Water = 0,
	Food = 1,
	Stamina = 2,
	RunningSpeed = 3,
	FoodValueMultiplier = 4,
	InteractionSpeedMultiplier = 5,
	Coin = 6,
	DynastyReputation = 7,
	Skill = 8,
	RemoveItem = 9,
	AddItem = 10,
	E_EventEffect_MAX = 11,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}