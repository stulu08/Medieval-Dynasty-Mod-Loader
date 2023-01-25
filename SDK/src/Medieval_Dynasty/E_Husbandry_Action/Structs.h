#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_Husbandry_Action.E_Husbandry_Action
/////////////////////////////////////////////
enum class E_Husbandry_Action : uint8_t {
	Nothing = 0,
	Find = 1,
	Go_to = 2,
	Close_Move_to = 3,
	Interact = 4,
	Wait = 5,
	E_Husbandry_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}