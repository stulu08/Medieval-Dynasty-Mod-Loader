#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_WeaponDamageType.E_WeaponDamageType
/////////////////////////////////////////////
enum class E_WeaponDamageType : uint8_t {
	None = 0,
	Pierce = 1,
	Blunt = 2,
	Slash = 3,
	E_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}