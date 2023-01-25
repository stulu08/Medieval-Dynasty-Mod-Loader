#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_InventorySortingType.E_InventorySortingType
/////////////////////////////////////////////
enum class E_InventorySortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	CountIncreasing = 2,
	CountDecreasing = 3,
	ConditionIncreasing = 4,
	ConditionDecreasing = 5,
	WeightIncreasing = 6,
	WeightDecreasing = 7,
	PriceIncreasing = 8,
	PriceDecreasing = 9,
	E_MAX = 10,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}