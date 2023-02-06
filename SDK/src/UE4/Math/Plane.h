#pragma once
#include "Vector.h"
namespace UE4 {
	// 0x0004 (0x0010 - 0x000C)
	struct alignas(16) FPlane : public FVector
	{
		float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
}