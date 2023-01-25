#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_Bandit_BlackboardBoolean.E_NPC_Bandit_BlackboardBoolean
/////////////////////////////////////////////
enum class E_NPC_Bandit_BlackboardBoolean : uint8_t {
	WaitForAnimation = 0,
	WaitForBlock = 1,
	WaitForAttack = 2,
	WaitForShoot = 3,
	WaitForDodge = 4,
	E_NPC_Bandit_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}