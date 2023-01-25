#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_FieldActivities.E_FieldActivities
/////////////////////////////////////////////
enum class E_FieldActivities : uint8_t {
	Plowing_I = 0,
	Plowing_II = 1,
	Manuring = 2,
	Sowing = 3,
	Harvesting = 4,
	Collecting_Field = 5,
	Collecting_Orchard = 6,
	Nothing = 7,
	E_MAX = 8,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}