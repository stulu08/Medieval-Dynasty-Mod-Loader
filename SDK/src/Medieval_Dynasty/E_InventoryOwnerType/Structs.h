#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_InventoryOwnerType.E_InventoryOwnerType
/////////////////////////////////////////////
enum class E_InventoryOwnerType : uint8_t {
	None = 0,
	Human = 1,
	Chest = 2,
	Shop = 3,
	Building = 4,
	Composter = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}