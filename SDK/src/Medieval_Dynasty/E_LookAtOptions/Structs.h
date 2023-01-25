#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_LookAtOptions.E_LookAtOptions
/////////////////////////////////////////////
enum class E_LookAtOptions : uint8_t {
	NoLookAt = 0,
	LookAtWithPitch = 1,
	LookAtWithPlayersPitch = 2,
	LookAtWithResetPitch = 3,
	E_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}