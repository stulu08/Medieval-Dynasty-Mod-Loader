#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_TimeOfDay.E_TimeOfDay
/////////////////////////////////////////////
enum class E_TimeOfDay : uint8_t {
	Morning = 0,
	Day = 1,
	Evening = 2,
	Night = 3,
	E_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}