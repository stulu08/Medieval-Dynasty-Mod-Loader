#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_AfterIdlePose.E_AfterIdlePose
/////////////////////////////////////////////
enum class E_AfterIdlePose : uint8_t {
	StayInIdle = 0,
	StopIdle = 1,
	SwitchToStandingIdle = 2,
	SwitchToTalkingIdle = 3,
	SwitchToLookingIdle = 4,
	SwitchToOtherIdle = 5,
	KeepCurrentPose = 6,
	E_MAX = 7,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}