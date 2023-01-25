#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ChoiceSegments.E_ChoiceSegments
/////////////////////////////////////////////
enum class E_ChoiceSegments : uint8_t {
	Exit = 0,
	Road = 1,
	Building = 2,
	Fences = 3,
	Gates = 4,
	Handcrafting = 5,
	Furnitures_Decorations = 6,
	Bridge = 7,
	None = 8,
	E_MAX = 9,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}