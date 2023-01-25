#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_EquipmentCategories.E_EquipmentCategories
/////////////////////////////////////////////
enum class E_EquipmentCategories : uint8_t {
	None = 0,
	Feet = 1,
	Legs = 2,
	Chest = 3,
	Gloves = 4,
	Hood = 5,
	Head = 6,
	Ammo = 7,
	Torch = 8,
	Backpack = 9,
	Pouch = 10,
	Saddle = 11,
	Horseshoes = 12,
	Saddlebag = 13,
	E_MAX = 14,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}