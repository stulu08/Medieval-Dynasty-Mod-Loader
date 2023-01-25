#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_KingdomStatus.E_KingdomStatus
/////////////////////////////////////////////
enum class E_KingdomStatus : uint8_t {
	Peaceful = 0,
	NewKing = 1,
	After_War = 2,
	War = 3,
	Drought = 4,
	Plague = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}