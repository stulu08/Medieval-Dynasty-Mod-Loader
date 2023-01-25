#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_Ownership.E_Ownership
/////////////////////////////////////////////
enum class E_Ownership : uint8_t {
	Player = 0,
	Ownerless = 1,
	Bandit = 2,
	BlueVillage = 3,
	GreenVillage = 4,
	SkyBlueVillage = 5,
	RedVillage = 6,
	PinkVillage = 7,
	OrangeVillage = 8,
	YellowVillage = 9,
	PurpleVillage = 10,
	NavyBlueVillage = 11,
	BurgundyVillage = 12,
	BrownVillage = 13,
	E_MAX = 14,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}