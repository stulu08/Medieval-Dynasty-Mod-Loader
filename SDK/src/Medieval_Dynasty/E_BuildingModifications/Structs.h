#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingModifications.E_BuildingModifications
/////////////////////////////////////////////
enum class E_BuildingModifications : uint8_t {
	None = 0,
	Building = 1,
	Repair = 2,
	Upgrade = 3,
	Downgrade = 4,
	Destroy = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}