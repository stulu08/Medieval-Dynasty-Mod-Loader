#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_DeathType.E_DeathType
/////////////////////////////////////////////
enum class E_DeathType : uint8_t {
	NoHP = 0,
	TooOld_NoHeir = 1,
	Banished = 2,
	TooOld_Heir = 3,
	E_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}