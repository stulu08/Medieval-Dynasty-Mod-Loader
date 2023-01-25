#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingsSortingType.E_BuildingsSortingType
/////////////////////////////////////////////
enum class E_BuildingsSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	ConditionIncreasing = 2,
	ConditionDecreasing = 3,
	PeopleIncreasing = 4,
	PeopleDecreasing = 5,
	TaxIncreasing = 6,
	TaxDecreasing = 7,
	StatusIncreasing = 8,
	StatusDecreasing = 9,
	E_MAX = 10,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}