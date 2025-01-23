#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum AnimPhysics.ECollisionLimitType
/////////////////////////////////////////////
enum class ECollisionLimitType : uint8_t {
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Planar = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AnimPhysics.EBoneForwardAxis
/////////////////////////////////////////////
enum class EBoneForwardAxis : uint8_t {
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AnimPhysics.EPlanarConstraint
/////////////////////////////////////////////
enum class EPlanarConstraint : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	MAX = 4,
};
#pragma endregion

#pragma region Structs
struct FAnimPhysicsSettings;
struct FAnimNode_AnimPhysics;
struct FAnimPhysicsModifyBone;
struct FCollisionLimitBase;
struct FPlanarLimit;
struct FCapsuleLimit;
struct FSphericalLimit;
struct FCollisionLimitDataBase;
struct FPlanarLimitData;
struct FCapsuleLimitData;
struct FSphericalLimitData;
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.AnimPhysicsSettings
// Size 24
/////////////////////////////////////////////
struct FAnimPhysicsSettings {
	float	Damping;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	WorldDampingLocation;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	WorldDampingRotation;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Stiffness;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Radius;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	LimitAngle;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.AnimNode_AnimPhysics
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 1792
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_AnimPhysics : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	RootBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FBoneReference>	ExcludeBones;		//Offset: 216	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	int32_t	TargetFramerate;		//Offset: 232	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	OverrideTargetFramerate;		//Offset: 236	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 237	Size: 3
	struct FAnimPhysicsSettings	PhysicsSettings;		//Offset: 240	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	class UCurveFloat*	DampingCurve;		//Offset: 264	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCurveFloat*	WorldDampingLocationCurve;		//Offset: 272	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCurveFloat*	WorldDampingRotationCurve;		//Offset: 280	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCurveFloat*	StiffnessCurve;		//Offset: 288	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCurveFloat*	RadiusCurve;		//Offset: 296	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCurveFloat*	LimitAngleCurve;		//Offset: 304	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	DampingCurveData;		//Offset: 312	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	WorldDampingLocationCurveData;		//Offset: 448	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	WorldDampingRotationCurveData;		//Offset: 584	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	StiffnessCurveData;		//Offset: 720	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	RadiusCurveData;		//Offset: 856	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	LimitAngleCurveData;		//Offset: 992	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	bool	bUpdatePhysicsSettingsInGame;		//Offset: 1128	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 1129	Size: 3
	float	DummyBoneLength;		//Offset: 1132	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EBoneForwardAxis	BoneForwardAxis;		//Offset: 1136	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EPlanarConstraint	PlanarConstraint;		//Offset: 1137	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	ResetBoneTransformWhenBoneNotFound;		//Offset: 1138	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[5];		//Offset: 1139	Size: 5
	TArray<struct FSphericalLimit>	SphericalLimits;		//Offset: 1144	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FCapsuleLimit>	CapsuleLimits;		//Offset: 1160	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FPlanarLimit>	PlanarLimits;		//Offset: 1176	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	class UAnimPhysicsLimitsDataAsset*	LimitsDataAsset;		//Offset: 1192	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<struct FSphericalLimit>	SphericalLimitsData;		//Offset: 1200	Size: 16	Flags: Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<struct FCapsuleLimit>	CapsuleLimitsData;		//Offset: 1216	Size: 16	Flags: Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<struct FPlanarLimit>	PlanarLimitsData;		//Offset: 1232	Size: 16	Flags: Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic
	float	TeleportDistanceThreshold;		//Offset: 1248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TeleportRotationThreshold;		//Offset: 1252	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Gravity;		//Offset: 1256	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bEnableWind;		//Offset: 1268	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[3];		//Offset: 1269	Size: 3
	float	WindScale;		//Offset: 1272	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAllowWorldCollision;		//Offset: 1276	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bOverrideCollisionParams;		//Offset: 1277	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_4[2];		//Offset: 1278	Size: 2
	struct FBodyInstance	CollisionChannelSettings;		//Offset: 1280	Size: 344	Flags: Edit, NativeAccessSpecifierPublic
	bool	bIgnoreSelfComponent;		//Offset: 1624	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_5[7];		//Offset: 1625	Size: 7
	TArray<struct FBoneReference>	IgnoreBones;		//Offset: 1632	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FName>	IgnoreBoneNamePrefix;		//Offset: 1648	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FAnimPhysicsModifyBone>	ModifyBones;		//Offset: 1664	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	float	TotalBoneLength;		//Offset: 1680	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_6[12];		//Offset: 1684	Size: 12
	struct FTransform	PreSkelCompTransform;		//Offset: 1696	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	bool	bInitPhysicsSettings;		//Offset: 1744	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_7[47];		//Offset: 1745	Size: 47
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.AnimPhysicsModifyBone
// Size 176
/////////////////////////////////////////////
struct FAnimPhysicsModifyBone {
	struct FBoneReference	BoneRef;		//Offset: 0	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	int32_t	ParentIndex;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	TArray<int32_t>	ChildIndexs;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	struct FAnimPhysicsSettings	PhysicsSettings;		//Offset: 40	Size: 24	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Location;		//Offset: 64	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	PrevLocation;		//Offset: 76	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 88	Size: 8
	struct FQuat	PrevRotation;		//Offset: 96	Size: 16	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	PoseLocation;		//Offset: 112	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[4];		//Offset: 124	Size: 4
	struct FQuat	PoseRotation;		//Offset: 128	Size: 16	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	PoseScale;		//Offset: 144	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	LengthFromRoot;		//Offset: 156	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bDummy;		//Offset: 160	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[15];		//Offset: 161	Size: 15
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.CollisionLimitBase
// Size 80
/////////////////////////////////////////////
struct FCollisionLimitBase {
	struct FBoneReference	DrivingBone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	OffsetLocation;		//Offset: 16	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	OffsetRotation;		//Offset: 28	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Location;		//Offset: 40	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[12];		//Offset: 52	Size: 12
	struct FQuat	Rotation;		//Offset: 64	Size: 16	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.PlanarLimit
// Super ScriptStruct AnimPhysics.CollisionLimitBase
// Size 96
// Size inherited 80
/////////////////////////////////////////////
struct FPlanarLimit : public FCollisionLimitBase {
	struct FPlane	Plane;		//Offset: 80	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.CapsuleLimit
// Super ScriptStruct AnimPhysics.CollisionLimitBase
// Size 96
// Size inherited 80
/////////////////////////////////////////////
struct FCapsuleLimit : public FCollisionLimitBase {
	float	Radius;		//Offset: 80	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Length;		//Offset: 84	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 88	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.SphericalLimit
// Super ScriptStruct AnimPhysics.CollisionLimitBase
// Size 96
// Size inherited 80
/////////////////////////////////////////////
struct FSphericalLimit : public FCollisionLimitBase {
	float	Radius;		//Offset: 80	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESphericalLimitType	LimitType;		//Offset: 84	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[11];		//Offset: 85	Size: 11
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.CollisionLimitDataBase
// Size 80
/////////////////////////////////////////////
struct FCollisionLimitDataBase {
	struct FName	DrivingBoneName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	OffsetLocation;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	OffsetRotation;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Location;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	struct FQuat	Rotation;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FGuid	Guid;		//Offset: 64	Size: 16	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.PlanarLimitData
// Super ScriptStruct AnimPhysics.CollisionLimitDataBase
// Size 96
// Size inherited 80
/////////////////////////////////////////////
struct FPlanarLimitData : public FCollisionLimitDataBase {
	struct FPlane	Plane;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.CapsuleLimitData
// Super ScriptStruct AnimPhysics.CollisionLimitDataBase
// Size 96
// Size inherited 80
/////////////////////////////////////////////
struct FCapsuleLimitData : public FCollisionLimitDataBase {
	float	Radius;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Length;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 88	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AnimPhysics.SphericalLimitData
// Super ScriptStruct AnimPhysics.CollisionLimitDataBase
// Size 96
// Size inherited 80
/////////////////////////////////////////////
struct FSphericalLimitData : public FCollisionLimitDataBase {
	float	Radius;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESphericalLimitType	LimitType;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[11];		//Offset: 85	Size: 11
};
#pragma endregion
}