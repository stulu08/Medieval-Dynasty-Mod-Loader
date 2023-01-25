#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_CharacterType.E_CharacterType
/////////////////////////////////////////////
enum class E_CharacterType : uint8_t {
	Infant = 0,
	Toddler = 1,
	Kid = 2,
	Teenager = 3,
	Mature = 4,
	Old = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}