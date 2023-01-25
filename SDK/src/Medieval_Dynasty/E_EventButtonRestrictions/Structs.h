#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_EventButtonRestrictions.E_EventButtonRestrictions
/////////////////////////////////////////////
enum class E_EventButtonRestrictions : uint8_t {
	None = 0,
	Skill = 1,
	Coin = 2,
	Village = 3,
	ItemsAnywhere = 4,
	E_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}