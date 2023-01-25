#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_Segments.E_Segments
/////////////////////////////////////////////
enum class E_Segments : uint8_t {
	BuildingMode = 0,
	Building = 1,
	Next_Page = 2,
	Previous_Page = 3,
	FieldArea = 4,
	Fence = 5,
	Gate = 6,
	Orchard = 7,
	Furniture = 8,
	ModuleModification = 9,
	Road = 10,
	Exit = 11,
	None = 12,
	E_MAX = 13,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}