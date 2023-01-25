#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_InhabitantsSortingType.E_InhabitantsSortingType
/////////////////////////////////////////////
enum class E_InhabitantsSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	AgeIncreasing = 2,
	AgeDecreasing = 3,
	MoodIncreasing = 4,
	MoodDecreasing = 5,
	ProfessionIncreasing = 6,
	ProfessionDecreasing = 7,
	ExtractionIncreasing = 8,
	ExtractionDecreasing = 9,
	HuntingIncreasing = 10,
	HuntingDecreasing = 11,
	FarmingIncreasing = 12,
	FarmingDecreasing = 13,
	DiplomacyIncreasing = 14,
	DiplomacyDecreasing = 15,
	SurvivalIncreasing = 16,
	SurvivalDecreasing = 17,
	ProductionIncreasing = 18,
	ProductionDecreasing = 19,
	StatusIncreasing = 20,
	StatusDecreasing = 21,
	E_MAX = 22,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}