#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_Effects.E_Effects
/////////////////////////////////////////////
enum class E_Effects : uint8_t {
	Unpoison = 0,
	MoreWeight = 1,
	MoreDamage = 2,
	AnimalRepel = 3,
	BetterTemperature = 4,
	NightVision = 5,
	SlowerWaterDrop = 6,
	SlowerHungerDrop = 7,
	SlowerStaminaDrop = 8,
	MoreHP = 9,
	TimeHeal = 10,
	E_MAX = 11,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}