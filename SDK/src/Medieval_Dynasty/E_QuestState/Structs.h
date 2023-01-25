#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_QuestState.E_QuestState
/////////////////////////////////////////////
enum class E_QuestState : uint8_t {
	Active = 0,
	Completed = 1,
	Failed = 2,
	E_MAX = 3,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}