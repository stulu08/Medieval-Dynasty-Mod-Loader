#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NPCBehavior.E_NPCBehavior
/////////////////////////////////////////////
enum class E_NPCBehavior : uint8_t {
	Nothing = 0,
	Go_to_Work = 1,
	Put_Away_Resources = 2,
	Talk_With_Player = 3,
	Go_to_Center = 4,
	Move_Aside = 5,
	Vendor = 6,
	Day_Activities = 7,
	E_MAX = 8,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}