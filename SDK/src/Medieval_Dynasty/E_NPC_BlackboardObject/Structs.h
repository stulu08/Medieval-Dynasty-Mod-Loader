#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardObject.E_NPC_BlackboardObject
/////////////////////////////////////////////
enum class E_NPC_BlackboardObject : uint8_t {
	Player = 0,
	Animal = 1,
	Item = 2,
	TargetActor = 3,
	Furniture = 4,
	E_NPC_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}