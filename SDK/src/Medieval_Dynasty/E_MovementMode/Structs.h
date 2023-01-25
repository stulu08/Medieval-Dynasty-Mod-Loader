#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_MovementMode.E_MovementMode
/////////////////////////////////////////////
enum class E_MovementMode : uint8_t {
	None = 0,
	Grounded = 1,
	Falling = 2,
	Ragdoll = 3,
	E_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}