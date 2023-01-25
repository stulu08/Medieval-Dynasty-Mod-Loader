#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_TimeToSave.E_TimeToSave
/////////////////////////////////////////////
enum class E_TimeToSave : uint8_t {
	Off = 0,
	_5 = 1,
	_15 = 2,
	_30 = 3,
	_60 = 4,
	E_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}