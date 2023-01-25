#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_IdleStates.E_IdleStates
/////////////////////////////////////////////
enum class E_IdleStates : uint8_t {
	Standing = 0,
	Talking = 1,
	Looking = 2,
	Other = 3,
	Waving = 4,
	E_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}