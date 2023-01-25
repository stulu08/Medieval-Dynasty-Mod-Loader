#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_GoalTypes.E_GoalTypes
/////////////////////////////////////////////
enum class E_GoalTypes : uint8_t {
	None = 0,
	Custom = 1,
	Hunt = 2,
	Deliver = 3,
	Talk = 4,
	Find = 5,
	Equip = 6,
	Sleep = 7,
	Build = 8,
	PledgeTask = 9,
	GetRidOfAnimals = 10,
	VillageParameters = 11,
	SpendTalentPoints = 12,
	Family = 13,
	Population = 14,
	WaitForTime = 15,
	ArcheryContest = 16,
	TalkToPeople = 17,
	Flirt = 18,
	CompleteQuests = 19,
	RemoveFoliage = 20,
	ConvincePeople = 21,
	SendPeople = 22,
	VillageMood = 23,
	E_MAX = 24,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}