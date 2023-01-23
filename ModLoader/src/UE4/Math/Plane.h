#pragma once
#include "Vector.h"
namespace UE4 {
	// 0x0004 (0x0010 - 0x000C)
	struct alignas(16) FPlane : public FVector
	{
		float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// 0x0040
	struct FMatrix
	{
		struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
	// 0x0004
	struct FPackedNormal
	{
		unsigned char                                      X;                                                        // 0x0000(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      Y;                                                        // 0x0001(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      Z;                                                        // 0x0002(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      W;                                                        // 0x0003(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// 0x0008
	struct FIntPoint
	{
		int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
}