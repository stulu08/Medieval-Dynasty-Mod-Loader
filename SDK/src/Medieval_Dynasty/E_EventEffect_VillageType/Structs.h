#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffect_VillageType.E_EventEffect_VillageType
/////////////////////////////////////////////
enum class E_EventEffect_VillageType : uint8_t {
	DamageBuildings = 0,
	DamageFields = 1,
	RemoveResources = 2,
	ChangeTax = 3,
	E_EventEffect_MAX = 4,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}