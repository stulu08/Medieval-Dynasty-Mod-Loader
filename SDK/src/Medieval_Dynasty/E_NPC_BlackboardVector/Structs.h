#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardVector.E_NPC_BlackboardVector
/////////////////////////////////////////////
enum class E_NPC_BlackboardVector : uint8_t {
	TargetLocation = 0,
	LastLocation = 1,
	LookAtTarget = 2,
	WorkRadius = 3,
	RotationPoint = 4,
	E_NPC_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}