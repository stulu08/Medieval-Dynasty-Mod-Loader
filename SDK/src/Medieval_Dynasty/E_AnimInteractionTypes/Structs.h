#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_AnimInteractionTypes.E_AnimInteractionTypes
/////////////////////////////////////////////
enum class E_AnimInteractionTypes : uint8_t {
	Basic = 0,
	Hit = 1,
	Ground = 2,
	Interaction = 3,
	AlternativeInteraction = 4,
	E_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}