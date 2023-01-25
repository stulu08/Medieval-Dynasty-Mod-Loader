#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_EventRestrictions.E_EventRestrictions
/////////////////////////////////////////////
enum class E_EventRestrictions : uint8_t {
	None = 0,
	CustomEvent = 1,
	Animals = 2,
	NPCs = 3,
	Buildings = 4,
	Fields = 5,
	Player = 6,
	Season = 7,
	Year = 8,
	E_MAX = 9,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}