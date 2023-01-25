#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NotifyObject.E_NotifyObject
/////////////////////////////////////////////
enum class E_NotifyObject : uint8_t {
	None = 0,
	MainHand = 1,
	OffHand = 2,
	Workbench = 3,
	Character = 4,
	Other = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}