#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum AnimationCore.ETransformConstraintType
/////////////////////////////////////////////
enum class ETransformConstraintType : uint8_t {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AnimationCore.EConstraintType
/////////////////////////////////////////////
enum class EConstraintType : uint8_t {
	Transform = 0,
	Aim = 1,
	MAX = 2,
};
#pragma endregion

#pragma region Structs
struct FCCDIKChainLink;
struct FAxis;
struct FConstraintDescriptor;
struct FConstraintData;
struct FFilterOptionPerAxis;
struct FConstraintDescriptionEx;
struct FAimConstraintDescription;
struct FTransformConstraintDescription;
struct FConstraintDescription;
struct FTransformConstraint;
struct FConstraintOffset;
struct FTransformFilter;
struct FEulerTransform;
struct FFABRIKChainLink;
struct FNodeChain;
struct FNodeHierarchyData;
struct FNodeHierarchyWithUserData;
struct FNodeObject;
struct FTransformNoScale;
/////////////////////////////////////////////
// ScriptStruct AnimationCore.CCDIKChainLink
// Size 128
/////////////////////////////////////////////
struct FCCDIKChainLink {
	unsigned char uknownData_0[128];		//Offset: 0	Size: 128
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.Axis
// Size 16
/////////////////////////////////////////////
struct FAxis {
	struct FVector	Axis;		//Offset: 0	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bInLocalSpace;		//Offset: 12	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 13	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.ConstraintDescriptor
// Size 16
/////////////////////////////////////////////
struct FConstraintDescriptor {
	EConstraintType	Type;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[15];		//Offset: 1	Size: 15
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.ConstraintData
// Size 128
/////////////////////////////////////////////
struct FConstraintData {
	struct FConstraintDescriptor	Constraint;		//Offset: 0	Size: 16	Flags: NativeAccessSpecifierPublic
	float	Weight;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bMaintainOffset;		//Offset: 20	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[11];		//Offset: 21	Size: 11
	struct FTransform	Offset;		//Offset: 32	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FTransform	CurrentTransform;		//Offset: 80	Size: 48	Flags: Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.FilterOptionPerAxis
// Size 3
/////////////////////////////////////////////
struct FFilterOptionPerAxis {
	bool	bX;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bY;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bZ;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size 16
/////////////////////////////////////////////
struct FConstraintDescriptionEx {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	struct FFilterOptionPerAxis	AxesFilterOption;		//Offset: 8	Size: 3	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[5];		//Offset: 11	Size: 5
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.AimConstraintDescription
// Super ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size 64
// Size inherited 16
/////////////////////////////////////////////
struct FAimConstraintDescription : public FConstraintDescriptionEx {
	struct FAxis	LookAt_Axis;		//Offset: 16	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FAxis	LookUp_Axis;		//Offset: 32	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bUseLookUp;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 49	Size: 3
	struct FVector	LookUpTarget;		//Offset: 52	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.TransformConstraintDescription
// Super ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size 24
// Size inherited 16
/////////////////////////////////////////////
struct FTransformConstraintDescription : public FConstraintDescriptionEx {
	ETransformConstraintType	TransformType;		//Offset: 16	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 17	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.ConstraintDescription
// Size 13
/////////////////////////////////////////////
struct FConstraintDescription {
	bool	bTranslation;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bRotation;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bScale;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bParent;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFilterOptionPerAxis	TranslationAxes;		//Offset: 4	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FFilterOptionPerAxis	RotationAxes;		//Offset: 7	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FFilterOptionPerAxis	ScaleAxes;		//Offset: 10	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.TransformConstraint
// Size 40
/////////////////////////////////////////////
struct FTransformConstraint {
	struct FConstraintDescription	Operator;		//Offset: 0	Size: 13	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 13	Size: 3
	struct FName	SourceNode;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	TargetNode;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Weight;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bMaintainOffset;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 37	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.ConstraintOffset
// Size 96
/////////////////////////////////////////////
struct FConstraintOffset {
	struct FVector	Translation;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	struct FQuat	Rotation;		//Offset: 16	Size: 16	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Scale;		//Offset: 32	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 44	Size: 4
	struct FTransform	Parent;		//Offset: 48	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.TransformFilter
// Size 9
/////////////////////////////////////////////
struct FTransformFilter {
	struct FFilterOptionPerAxis	TranslationFilter;		//Offset: 0	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FFilterOptionPerAxis	RotationFilter;		//Offset: 3	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FFilterOptionPerAxis	ScaleFilter;		//Offset: 6	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.EulerTransform
// Size 36
/////////////////////////////////////////////
struct FEulerTransform {
	struct FVector	Location;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	Rotation;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Scale;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.FABRIKChainLink
// Size 56
/////////////////////////////////////////////
struct FFABRIKChainLink {
	unsigned char uknownData_0[56];		//Offset: 0	Size: 56
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.NodeChain
// Size 16
/////////////////////////////////////////////
struct FNodeChain {
	TArray<struct FName>	Nodes;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.NodeHierarchyData
// Size 112
/////////////////////////////////////////////
struct FNodeHierarchyData {
	TArray<struct FNodeObject>	Nodes;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FTransform>	Transforms;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TMap<struct FName, int32_t>	NodeNameToIndexMapping;		//Offset: 32	Size: 80	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size 120
/////////////////////////////////////////////
struct FNodeHierarchyWithUserData {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	struct FNodeHierarchyData	Hierarchy;		//Offset: 8	Size: 112	Flags: Protected, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.NodeObject
// Size 16
/////////////////////////////////////////////
struct FNodeObject {
	struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	ParentName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimationCore.TransformNoScale
// Size 32
/////////////////////////////////////////////
struct FTransformNoScale {
	struct FVector	Location;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	struct FQuat	Rotation;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
#pragma endregion
}