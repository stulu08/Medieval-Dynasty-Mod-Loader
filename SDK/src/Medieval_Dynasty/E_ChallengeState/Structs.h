#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ChallengeState.E_ChallengeState
/////////////////////////////////////////////
enum class E_ChallengeState : uint8_t {
	Unavailable = 0,
	NotTaken = 1,
	InProgress = 2,
	Completed = 3,
	Failed = 4,
	E_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}