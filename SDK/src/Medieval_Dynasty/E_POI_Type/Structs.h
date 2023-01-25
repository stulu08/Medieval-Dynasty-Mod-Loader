#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_POI_Type.E_POI_Type
/////////////////////////////////////////////
enum class E_POI_Type : uint8_t {
	None = 0,
	Misc = 1,
	Accident = 2,
	Vendor = 3,
	Treasure = 4,
	Bandits = 5,
	Animals = 6,
	Quest = 7,
	Resources = 8,
	E_POI_MAX = 9,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}