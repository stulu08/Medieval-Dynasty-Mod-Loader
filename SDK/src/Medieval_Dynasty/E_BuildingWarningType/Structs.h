#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingWarningType.E_BuildingWarningType
/////////////////////////////////////////////
enum class E_BuildingWarningType : uint8_t {
	None = 0,
	RestrictedArea = 1,
	Obstacle = 2,
	OnTerrain = 3,
	OnWater = 4,
	TooUneven = 5,
	InCave = 6,
	Cost = 7,
	SizeLimit = 8,
	TooShort = 9,
	BuildingUpgrade = 10,
	BeyondTheMap = 11,
	TrapLimit = 12,
	BuildingLimit = 13,
	E_MAX = 14,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}