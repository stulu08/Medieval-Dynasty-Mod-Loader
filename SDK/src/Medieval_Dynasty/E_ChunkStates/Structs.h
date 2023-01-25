#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ChunkStates.E_ChunkStates
/////////////////////////////////////////////
enum class E_ChunkStates : uint8_t {
	NotGrubbedUp = 0,
	Unploughed = 1,
	UnploughedFertilized = 2,
	Plowed = 3,
	PlantGrowth = 4,
	ReadyForHarvest = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}