#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_IdleEntryState.E_IdleEntryState
/////////////////////////////////////////////
enum class E_IdleEntryState : uint8_t {
	N_Idle = 0,
	LF_Idle = 1,
	RF_Idle = 2,
	CLF_Idle = 3,
	CRF_Idle = 4,
	E_MAX = 5,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}