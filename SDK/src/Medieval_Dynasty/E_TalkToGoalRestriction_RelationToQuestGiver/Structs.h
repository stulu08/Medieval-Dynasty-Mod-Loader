#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_TalkToGoalRestriction_RelationToQuestGiver.E_TalkToGoalRestriction_RelationToQuestGiver
/////////////////////////////////////////////
enum class E_TalkToGoalRestriction_RelationToQuestGiver : uint8_t {
	Any = 0,
	Unrelated = 1,
	Relative = 2,
	Child = 3,
	Partner = 4,
	Parent = 5,
	E_TalkToGoalRestriction_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}