#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_DamageType.E_DamageType
/////////////////////////////////////////////
enum class E_DamageType : uint8_t {
	Hit = 0,
	Fall = 1,
	NoWater = 2,
	NoFood = 3,
	Poison = 4,
	Overheating = 5,
	Cold = 6,
	E_MAX = 7,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}