#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_DailyCycle.E_DailyCycle
/////////////////////////////////////////////
enum class E_DailyCycle : uint8_t {
	Work = 0,
	Rest = 1,
	Sleep = 2,
	WakeUp = 3,
	Get_Out = 4,
	Evening_Life = 5,
	Illness = 6,
	War = 7,
	Homecoming = 8,
	Lead = 9,
	Follow = 10,
	Go_to_Point = 11,
	Night_Patrol = 12,
	Dead = 13,
	Optimization = 14,
	E_MAX = 15,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}