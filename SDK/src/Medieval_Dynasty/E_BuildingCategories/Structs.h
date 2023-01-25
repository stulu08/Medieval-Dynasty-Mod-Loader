#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingCategories.E_BuildingCategories
/////////////////////////////////////////////
enum class E_BuildingCategories : uint8_t {
	Houses = 0,
	Crafting = 1,
	Storages = 2,
	Crops = 3,
	AnimalHusbandry = 4,
	Extraction = 5,
	Hunting = 6,
	Service = 7,
	None = 8,
	E_MAX = 9,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}