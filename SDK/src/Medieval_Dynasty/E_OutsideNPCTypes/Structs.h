#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_OutsideNPCTypes.E_OutsideNPCTypes
/////////////////////////////////////////////
enum class E_OutsideNPCTypes : uint8_t {
	None = 0,
	Random = 1,
	Neighbour = 2,
	Herald = 3,
	GiftVendor = 4,
	Quest = 5,
	Waggoner = 6,
	E_MAX = 7,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}