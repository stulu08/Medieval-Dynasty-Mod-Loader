#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// UserDefinedEnum E_ShopType.E_ShopType
/////////////////////////////////////////////
enum class E_ShopType : uint8_t {
	None = 0,
	Tools = 1,
	Clothing = 2,
	Resources = 3,
	Food = 4,
	Herbs = 5,
	E_MAX = 6,
};
#pragma endregion

#pragma region Structs
#pragma endregion
}