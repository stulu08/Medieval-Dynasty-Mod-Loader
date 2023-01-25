#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_TaskState.E_TaskState
/////////////////////////////////////////////
enum class E_TaskState : uint8_t {
	Go_To_Player = 0,
	Wait_For_Task = 1,
	Do_The_Task = 2,
	E_MAX = 3,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}