#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_GoalState.E_GoalState
/////////////////////////////////////////////
enum class E_GoalState : uint8_t {
	Normal = 0,
	Completed = 1,
	Failed = 2,
	E_MAX = 3,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}