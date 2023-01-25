#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ModuleType.E_ModuleType
/////////////////////////////////////////////
enum class E_ModuleType : uint8_t {
	Wall = 0,
	Wall_Window = 1,
	Wall_Door = 2,
	Roof = 3,
	Base = 4,
	Frame = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}