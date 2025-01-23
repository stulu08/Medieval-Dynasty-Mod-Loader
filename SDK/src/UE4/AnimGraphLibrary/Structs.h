#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum AnimGraphLibrary.EModifyCurveApplyModeCustom
/////////////////////////////////////////////
enum class EModifyCurveApplyModeCustom : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	MAX = 5,
};
#pragma endregion

#pragma region Structs
struct FAnimNode_ModifyCurveByName;
struct FAnimNode_RandomSequence;
struct FRandomSequencePlayData;
/////////////////////////////////////////////
// ScriptStruct AnimGraphLibrary.AnimNode_ModifyCurveByName
// Super ScriptStruct Engine.AnimNode_Base
// Size 56
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_ModifyCurveByName : public FAnimNode_Base {
	struct FPoseLink	SourcePose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
	struct FName	CurveName;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	CurveValue;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	float	Alpha;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EModifyCurveApplyModeCustom	ApplyMode;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 53	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphLibrary.AnimNode_RandomSequence
// Super ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size 96
// Size inherited 56
/////////////////////////////////////////////
struct FAnimNode_RandomSequence : public FAnimNode_AssetPlayerBase {
	TArray<struct FRandomSequencePlayData>	Entries;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 72	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphLibrary.RandomSequencePlayData
// Size 72
/////////////////////////////////////////////
struct FRandomSequencePlayData {
	class UAnimSequenceBase*	Sequence;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayRateBasis;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayRate;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	PlayRateScaleBiasClamp;		//Offset: 16	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	float	StartPosition;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 68	Size: 4
};
#pragma endregion
}