#pragma once
#include "Vector.h"

namespace UE4 {
	// 0x0014
	struct FBox2D
	{
		struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      bIsValid;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};
	// 0x001C
	struct FBox
	{
		struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	};
	// 0x003C
	struct FOrientedBox
	{
		struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              ExtentX;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              ExtentY;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              ExtentZ;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};
	// 0x001C
	struct FBoxSphereBounds
	{
		struct FVector                                     origin;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
}