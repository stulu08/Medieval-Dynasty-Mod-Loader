#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ActorType.E_ActorType
/////////////////////////////////////////////
enum class E_ActorType : uint8_t {
	NPC = 0,
	Animal = 1,
	Item = 2,
	ChestItems = 3,
	Furniture = 4,
	Mesh = 5,
	Decal = 6,
	CollectableFurniture = 7,
	Custom = 8,
	E_MAX = 9,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}