#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_PeopleDemandSortingType.E_PeopleDemandSortingType
/////////////////////////////////////////////
enum class E_PeopleDemandSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	StoredIncreasing = 2,
	StoredDecreasing = 3,
	ValueIncreasing = 4,
	ValueDecreasing = 5,
	ConsumableIncreasing = 6,
	ConsumableDecreasing = 7,
	PriorityIncreasing = 8,
	PriorityDecreasing = 9,
	E_MAX = 10,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}