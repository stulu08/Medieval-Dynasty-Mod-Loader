#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingStatus.E_BuildingStatus
/////////////////////////////////////////////
enum class E_BuildingStatus : uint8_t {
	Built = 0,
	Unbuilt = 1,
	Built___Unbuilt = 2,
	E_MAX = 3,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}