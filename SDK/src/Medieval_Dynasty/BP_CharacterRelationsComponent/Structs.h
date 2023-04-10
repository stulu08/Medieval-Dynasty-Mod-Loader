#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum FirstConversations.FirstConversations
/////////////////////////////////////////////
enum class EFirstConversations : uint8_t {
	None = 0,
	WithMother_FatherDies = 1,
	WithMother_FatherNPC = 2,
	WithMother_FatherLeaves = 3,
	WithWife_SonBirth = 4,
	WithSon_SonBecomesFather = 5,
	FirstConversations_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}