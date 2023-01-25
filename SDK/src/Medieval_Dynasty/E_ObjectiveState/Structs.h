#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ObjectiveState.E_ObjectiveState
/////////////////////////////////////////////
enum class E_ObjectiveState : uint8_t {
	Normal = 0,
	Completed = 1,
	Failed = 2,
	E_MAX = 3,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}