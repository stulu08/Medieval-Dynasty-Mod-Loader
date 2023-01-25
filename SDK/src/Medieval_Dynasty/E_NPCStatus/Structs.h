#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_NPCStatus.E_NPCStatus
/////////////////////////////////////////////
enum class E_NPCStatus : uint8_t {
	None = 0,
	No_Work = 1,
	Working = 2,
	No_Tool = 3,
	No_Item = 4,
	Rest = 5,
	Sleep = 6,
	Full_Storages = 7,
	E_MAX = 8,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}