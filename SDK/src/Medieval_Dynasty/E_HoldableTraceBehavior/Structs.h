#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_HoldableTraceBehavior.E_HoldableTraceBehavior
/////////////////////////////////////////////
enum class E_HoldableTraceBehavior : uint8_t {
	ToolBasedHit = 0,
	TagBasedPlayerHit = 1,
	ObjectBasedPlayerHit = 2,
	E_MAX = 3,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}