#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_Notifications.E_Notifications
/////////////////////////////////////////////
enum class E_Notifications : uint8_t {
	Add_Item = 0,
	Remove_Item = 1,
	Consume_Item = 2,
	Information = 3,
	Warning = 4,
	BrokenItem = 5,
	PoisonedStatus = 6,
	OverencumberedStatus = 7,
	HotStatus = 8,
	ColdStatus = 9,
	E_MAX = 10,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}