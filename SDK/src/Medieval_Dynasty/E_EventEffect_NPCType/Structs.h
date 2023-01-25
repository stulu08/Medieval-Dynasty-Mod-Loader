#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffect_NPCType.E_EventEffect_NPCType
/////////////////////////////////////////////
enum class E_EventEffect_NPCType : uint8_t {
	Illness = 0,
	Production = 1,
	Mood = 2,
	Die = 3,
	Add = 4,
	SkillChange = 5,
	E_EventEffect_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}