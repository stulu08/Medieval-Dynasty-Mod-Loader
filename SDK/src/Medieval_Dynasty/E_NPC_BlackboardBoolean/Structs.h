#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardBoolean.E_NPC_BlackboardBoolean
/////////////////////////////////////////////
enum class E_NPC_BlackboardBoolean : uint8_t {
	Wait = 0,
	ChangeTask = 1,
	Find = 2,
	FindItem = 3,
	BuildingOccupied = 4,
	Marker = 5,
	Follow = 6,
	Bed = 7,
	WaitInHouse = 8,
	QuestBlocking = 9,
	RotateToPlayer = 10,
	IsLoadGame = 11,
	Optimization = 12,
	E_NPC_MAX = 13,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}