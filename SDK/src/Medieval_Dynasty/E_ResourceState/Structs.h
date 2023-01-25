#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ResourceState.E_ResourceState
/////////////////////////////////////////////
enum class E_ResourceState : uint8_t {
	Nothing = 0,
	Find_Resource = 1,
	Go_To_Resource = 2,
	Close_Move_to_Resource = 3,
	Interact_Resource = 4,
	TakeResource = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}