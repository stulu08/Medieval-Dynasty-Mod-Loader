#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_Stance.E_Stance
/////////////////////////////////////////////
enum class E_Stance : uint8_t {
	Standing = 0,
	Crouching = 1,
	Sitting = 2,
	Sleeping = 3,
	E_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}