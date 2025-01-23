#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ESphericalLimitType
/////////////////////////////////////////////
enum class ESphericalLimitType : uint8_t {
	Inner = 0,
	Outer = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.AnimPhysSimSpaceType
/////////////////////////////////////////////
enum class EAnimPhysSimSpaceType : uint8_t {
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor = 1,
	AnimPhysSimSpaceType__World = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
/////////////////////////////////////////////
enum class EAnimPhysLinearConstraintType : uint8_t {
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
/////////////////////////////////////////////
enum class EAnimPhysAngularConstraintType : uint8_t {
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EBlendListTransitionType
/////////////////////////////////////////////
enum class EBlendListTransitionType : uint8_t {
	StandardBlend = 0,
	Inertialization = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EDrivenDestinationMode
/////////////////////////////////////////////
enum class EDrivenDestinationMode : uint8_t {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EDrivenBoneModificationMode
/////////////////////////////////////////////
enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EConstraintOffsetOption
/////////////////////////////////////////////
enum class EConstraintOffsetOption : uint8_t {
	None = 0,
	Offset_RefPose = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.CopyBoneDeltaMode
/////////////////////////////////////////////
enum class ECopyBoneDeltaMode : uint8_t {
	CopyBoneDeltaMode__Accumulate = 0,
	CopyBoneDeltaMode__Copy = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EInterpolationBlend
/////////////////////////////////////////////
enum class EInterpolationBlend : uint8_t {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EBoneModificationMode
/////////////////////////////////////////////
enum class EBoneModificationMode : uint8_t {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EModifyCurveApplyMode
/////////////////////////////////////////////
enum class EModifyCurveApplyMode : uint8_t {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EPoseDriverOutput
/////////////////////////////////////////////
enum class EPoseDriverOutput : uint8_t {
	DrivePoses = 0,
	DriveCurves = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EPoseDriverSource
/////////////////////////////////////////////
enum class EPoseDriverSource : uint8_t {
	Rotation = 0,
	Translation = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EPoseDriverType
/////////////////////////////////////////////
enum class EPoseDriverType : uint8_t {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ESnapshotSourceMode
/////////////////////////////////////////////
enum class ESnapshotSourceMode : uint8_t {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ERefPoseType
/////////////////////////////////////////////
enum class ERefPoseType : uint8_t {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ESimulationSpace
/////////////////////////////////////////////
enum class ESimulationSpace : uint8_t {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EScaleChainInitialLength
/////////////////////////////////////////////
enum class EScaleChainInitialLength : uint8_t {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ESequenceEvalReinit
/////////////////////////////////////////////
enum class ESequenceEvalReinit : uint8_t {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ESplineBoneAxis
/////////////////////////////////////////////
enum class ESplineBoneAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ERotationComponent
/////////////////////////////////////////////
enum class ERotationComponent : uint8_t {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.EEasingFuncType
/////////////////////////////////////////////
enum class EEasingFuncType : uint8_t {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	MAX = 15,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ERBFNormalizeMethod
/////////////////////////////////////////////
enum class ERBFNormalizeMethod : uint8_t {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ERBFDistanceMethod
/////////////////////////////////////////////
enum class ERBFDistanceMethod : uint8_t {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ERBFFunctionType
/////////////////////////////////////////////
enum class ERBFFunctionType : uint8_t {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AnimGraphRuntime.ERBFSolverType
/////////////////////////////////////////////
enum class ERBFSolverType : uint8_t {
	Additive = 0,
	Interpolative = 1,
	MAX = 2,
};
#pragma endregion

#pragma region Structs
struct FSocketReference;
struct FBoneSocketTarget;
struct FAnimNode_SkeletalControlBase;
struct FAnimNode_BlendSpacePlayer;
struct FAnimNode_AimOffsetLookAt;
struct FAnimPhysConstraintSetup;
struct FRotationRetargetingInfo;
struct FAnimNode_AnimDynamics;
struct FAnimPhysPlanarLimit;
struct FAnimPhysSphericalLimit;
struct FAnimNode_ApplyAdditive;
struct FAnimNode_ApplyLimits;
struct FAngularRangeLimit;
struct FAnimNode_BlendBoneByChannel;
struct FBlendBoneByChannelEntry;
struct FAnimNode_BlendListBase;
struct FAnimNode_BlendListByBool;
struct FAnimNode_BlendListByEnum;
struct FAnimNode_BlendListByInt;
struct FAnimNode_BlendSpaceEvaluator;
struct FAnimNode_BoneDrivenController;
struct FAnimNode_CCDIK;
struct FAnimNode_Constraint;
struct FConstraint;
struct FAnimNode_CopyBone;
struct FAnimNode_CopyBoneDelta;
struct FAnimNode_CopyPoseFromMesh;
struct FAnimNode_CurveSource;
struct FAnimNode_Fabrik;
struct FAnimNode_HandIKRetargeting;
struct FAnimNode_LayeredBoneBlend;
struct FAnimNode_LegIK;
struct FAnimLegIKDefinition;
struct FAnimLegIKData;
struct FIKChain;
struct FIKChainLink;
struct FAnimNode_LookAt;
struct FAnimNode_MakeDynamicAdditive;
struct FAnimNode_ModifyBone;
struct FAnimNode_ModifyCurve;
struct FAnimNode_MultiWayBlend;
struct FAnimNode_ObserveBone;
struct FAnimNode_PoseHandler;
struct FAnimNode_PoseBlendNode;
struct FAnimNode_PoseByName;
struct FRBFParams;
struct FAnimNode_PoseDriver;
struct FPoseDriverTarget;
struct FPoseDriverTransform;
struct FAnimNode_PoseSnapshot;
struct FAnimNode_RandomPlayer;
struct FRandomPlayerSequenceEntry;
struct FAnimNode_MeshSpaceRefPose;
struct FAnimNode_RefPose;
struct FAnimNode_ResetRoot;
struct FSimSpaceSettings;
struct FAnimNode_RigidBody;
struct FAnimNode_RotateRootBone;
struct FAnimNode_RotationMultiplier;
struct FAnimNode_RotationOffsetBlendSpace;
struct FAnimNode_ScaleChainLength;
struct FAnimNode_SequenceEvaluator;
struct FAnimNode_Slot;
struct FAnimNode_SplineIK;
struct FSplineIKCachedBoneData;
struct FAnimNode_SpringBone;
struct FAnimNode_StateResult;
struct FAnimNode_Trail;
struct FRotationLimit;
struct FReferenceBoneFrame;
struct FAnimNode_TwistCorrectiveNode;
struct FAnimNode_TwoBoneIK;
struct FAnimNode_TwoWayBlend;
struct FAnimSequencerInstanceProxy;
struct FPositionHistory;
struct FRBFEntry;
struct FRBFTarget;
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.SocketReference
// Size 64
/////////////////////////////////////////////
struct FSocketReference {
	unsigned char uknownData_0[48];		//Offset: 0	Size: 48
	struct FName	SocketName;		//Offset: 48	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 56	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size 96
/////////////////////////////////////////////
struct FBoneSocketTarget {
	bool	bUseSocket;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	struct FBoneReference	BoneReference;		//Offset: 4	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[12];		//Offset: 20	Size: 12
	struct FSocketReference	SocketReference;		//Offset: 32	Size: 64	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Super ScriptStruct Engine.AnimNode_Base
// Size 200
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base {
	struct FComponentSpacePoseLink	ComponentPose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	int32_t	LODThreshold;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ActualAlpha;		//Offset: 36	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimAlphaInputType	AlphaInputType;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAlphaBoolEnabled;		//Offset: 41	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 42	Size: 2
	float	Alpha;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FInputAlphaBoolBlend	AlphaBoolBlend;		//Offset: 56	Size: 72	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FName	AlphaCurveName;		//Offset: 128	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	AlphaScaleBiasClamp;		//Offset: 136	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[16];		//Offset: 184	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Super ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size 232
// Size inherited 56
/////////////////////////////////////////////
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase {
	float	X;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Y;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Z;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayRate;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bLoop;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bResetPlayTimeWhenBlendSpaceChanges;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 74	Size: 2
	float	StartPosition;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBlendSpaceBase*	BlendSpace;		//Offset: 80	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[136];		//Offset: 88	Size: 136
	class UBlendSpaceBase*	PreviousBlendSpace;		//Offset: 224	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Super ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size 448
// Size inherited 232
/////////////////////////////////////////////
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer {
	unsigned char uknownData_0[104];		//Offset: 232	Size: 104
	struct FPoseLink	BasePose;		//Offset: 336	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	int32_t	LODThreshold;		//Offset: 352	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	SourceSocketName;		//Offset: 356	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	PivotSocketName;		//Offset: 364	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	LookAtLocation;		//Offset: 372	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	SocketAxis;		//Offset: 384	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Alpha;		//Offset: 396	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[48];		//Offset: 400	Size: 48
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size 72
/////////////////////////////////////////////
struct FAnimPhysConstraintSetup {
	EAnimPhysLinearConstraintType	LinearXLimitType;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimPhysLinearConstraintType	LinearYLimitType;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimPhysLinearConstraintType	LinearZLimitType;		//Offset: 2	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 3	Size: 1
	struct FVector	LinearAxesMin;		//Offset: 4	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	LinearAxesMax;		//Offset: 16	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimPhysAngularConstraintType	AngularConstraintType;		//Offset: 28	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimPhysTwistAxis	TwistAxis;		//Offset: 29	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimPhysTwistAxis	AngularTargetAxis;		//Offset: 30	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[1];		//Offset: 31	Size: 1
	float	ConeAngle;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularLimitsMin;		//Offset: 36	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularLimitsMax;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularTarget;		//Offset: 60	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size 304
/////////////////////////////////////////////
struct FRotationRetargetingInfo {
	bool	bEnabled;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[15];		//Offset: 1	Size: 15
	struct FTransform	Source;		//Offset: 16	Size: 48	Flags: Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FTransform	Target;		//Offset: 64	Size: 48	Flags: Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	ERotationComponent	RotationComponent;		//Offset: 112	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 113	Size: 3
	struct FVector	TwistAxis;		//Offset: 116	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bUseAbsoluteAngle;		//Offset: 128	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[3];		//Offset: 129	Size: 3
	float	SourceMinimum;		//Offset: 132	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	SourceMaximum;		//Offset: 136	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TargetMinimum;		//Offset: 140	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TargetMaximum;		//Offset: 144	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EEasingFuncType	EasingType;		//Offset: 148	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[3];		//Offset: 149	Size: 3
	struct FRuntimeFloatCurve	CustomCurve;		//Offset: 152	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	bool	bFlipEasing;		//Offset: 288	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_4[3];		//Offset: 289	Size: 3
	float	EasingWeight;		//Offset: 292	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bClamp;		//Offset: 296	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_5[7];		//Offset: 297	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 1088
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase {
	float	LinearDampingOverride;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	AngularDampingOverride;		//Offset: 204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[96];		//Offset: 208	Size: 96
	struct FBoneReference	RelativeSpaceBone;		//Offset: 304	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	BoundBone;		//Offset: 320	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	ChainEnd;		//Offset: 336	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	BoxExtents;		//Offset: 352	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	LocalJointOffset;		//Offset: 364	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	GravityScale;		//Offset: 376	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	GravityOverride;		//Offset: 380	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	LinearSpringConstant;		//Offset: 392	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	AngularSpringConstant;		//Offset: 396	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	WindScale;		//Offset: 400	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ComponentLinearAccScale;		//Offset: 404	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ComponentLinearVelScale;		//Offset: 416	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ComponentAppliedLinearAccClamp;		//Offset: 428	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	AngularBiasOverride;		//Offset: 440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	NumSolverIterationsPreUpdate;		//Offset: 444	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	NumSolverIterationsPostUpdate;		//Offset: 448	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FAnimPhysConstraintSetup	ConstraintSetup;		//Offset: 452	Size: 72	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 524	Size: 4
	TArray<struct FAnimPhysSphericalLimit>	SphericalLimits;		//Offset: 528	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	float	SphereCollisionRadius;		//Offset: 544	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ExternalForce;		//Offset: 548	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<struct FAnimPhysPlanarLimit>	PlanarLimits;		//Offset: 560	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	EAnimPhysCollisionType	CollisionType;		//Offset: 576	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAnimPhysSimSpaceType	SimulationSpace;		//Offset: 577	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[2];		//Offset: 578	Size: 2
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUseSphericalLimits : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUsePlanarLimit : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDoUpdate : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDoEval : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverrideLinearDamping : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverrideAngularBias : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverrideAngularDamping : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEnableWind : 1;		//Offset: 580	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[1];		//Offset: 580	Size: 1
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUseGravityOverride : 1;		//Offset: 581	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bLinearSpring : 1;		//Offset: 581	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAngularSpring : 1;		//Offset: 581	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bChain : 1;		//Offset: 581	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_4[11];		//Offset: 581	Size: 11
	struct FRotationRetargetingInfo	RetargetingSettings;		//Offset: 592	Size: 304	Flags: Edit, NativeAccessSpecifierPublic
	unsigned char uknownData_5[192];		//Offset: 896	Size: 192
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size 64
/////////////////////////////////////////////
struct FAnimPhysPlanarLimit {
	struct FBoneReference	DrivingBone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FTransform	PlaneTransform;		//Offset: 16	Size: 48	Flags: Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size 36
/////////////////////////////////////////////
struct FAnimPhysSphericalLimit {
	struct FBoneReference	DrivingBone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	SphereLocalOffset;		//Offset: 16	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	LimitRadius;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESphericalLimitType	LimitType;		//Offset: 32	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Super ScriptStruct Engine.AnimNode_Base
// Size 200
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_ApplyAdditive : public FAnimNode_Base {
	struct FPoseLink	Base;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FPoseLink	Additive;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	float	Alpha;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 52	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	int32_t	LODThreshold;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputAlphaBoolBlend	AlphaBoolBlend;		//Offset: 64	Size: 72	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FName	AlphaCurveName;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	AlphaScaleBiasClamp;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 192	Size: 4
	EAnimAlphaInputType	AlphaInputType;		//Offset: 196	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAlphaBoolEnabled;		//Offset: 197	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[2];		//Offset: 198	Size: 2
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 232
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase {
	TArray<struct FAngularRangeLimit>	AngularRangeLimits;		//Offset: 200	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FVector>	AngularOffsets;		//Offset: 216	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size 40
/////////////////////////////////////////////
struct FAngularRangeLimit {
	struct FVector	LimitMin;		//Offset: 0	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	LimitMax;		//Offset: 12	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FBoneReference	Bone;		//Offset: 24	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Super ScriptStruct Engine.AnimNode_Base
// Size 104
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base {
	struct FPoseLink	A;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FPoseLink	B;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FBlendBoneByChannelEntry>	BoneDefinitions;		//Offset: 48	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 64	Size: 16
	float	Alpha;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 84	Size: 4
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 88	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	TransformsSpace;		//Offset: 96	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[7];		//Offset: 97	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size 36
/////////////////////////////////////////////
struct FBlendBoneByChannelEntry {
	struct FBoneReference	SourceBone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	TargetBone;		//Offset: 16	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bBlendTranslation;		//Offset: 32	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bBlendRotation;		//Offset: 33	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bBlendScale;		//Offset: 34	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 35	Size: 1
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Super ScriptStruct Engine.AnimNode_Base
// Size 152
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_BlendListBase : public FAnimNode_Base {
	TArray<struct FPoseLink>	BlendPose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float>	BlendTime;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	EBlendListTransitionType	TransitionType;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAlphaBlendOption	BlendType;		//Offset: 49	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bResetChildOnActivation;		//Offset: 50	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[5];		//Offset: 51	Size: 5
	class UCurveFloat*	CustomBlendCurve;		//Offset: 56	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBlendProfile*	BlendProfile;		//Offset: 64	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[80];		//Offset: 72	Size: 80
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Super ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size 160
// Size inherited 152
/////////////////////////////////////////////
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase {
	bool	bActiveValue;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 153	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Super ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size 176
// Size inherited 152
/////////////////////////////////////////////
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase {
	TArray<int32_t>	EnumToPoseIndex;		//Offset: 152	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char	ActiveEnumValue;		//Offset: 168	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 169	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Super ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size 160
// Size inherited 152
/////////////////////////////////////////////
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase {
	int32_t	ActiveChildIndex;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 156	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Super ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size 240
// Size inherited 232
/////////////////////////////////////////////
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer {
	float	NormalizedTime;		//Offset: 232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 236	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 280
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	SourceBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	class UCurveFloat*	DrivingCurve;		//Offset: 216	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Multiplier;		//Offset: 224	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RangeMin;		//Offset: 228	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RangeMax;		//Offset: 232	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RemappedMin;		//Offset: 236	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RemappedMax;		//Offset: 240	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	ParameterName;		//Offset: 244	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FBoneReference	TargetBone;		//Offset: 252	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	EDrivenDestinationMode	DestinationMode;		//Offset: 268	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EDrivenBoneModificationMode	ModificationMode;		//Offset: 269	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EComponentType>	SourceComponent;		//Offset: 270	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUseRange : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetTranslationX : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetTranslationY : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetTranslationZ : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetRotationX : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetRotationY : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetRotationZ : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetScaleX : 1;		//Offset: 271	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 271	Size: 1
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetScaleY : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAffectTargetScaleZ : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 272	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 384
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase {
	struct FVector	EffectorLocation;		//Offset: 200	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	EffectorLocationSpace;		//Offset: 212	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[11];		//Offset: 213	Size: 11
	struct FBoneSocketTarget	EffectorTarget;		//Offset: 224	Size: 96	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	TipBone;		//Offset: 320	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	RootBone;		//Offset: 336	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	Precision;		//Offset: 352	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	MaxIterations;		//Offset: 356	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bStartFromTail;		//Offset: 360	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bEnableRotationLimit;		//Offset: 361	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[6];		//Offset: 362	Size: 6
	TArray<float>	RotationLimitPerJoints;		//Offset: 368	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 264
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	BoneToModify;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FConstraint>	ConstraintSetup;		//Offset: 216	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float>	ConstraintWeights;		//Offset: 232	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 248	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.Constraint
// Size 28
/////////////////////////////////////////////
struct FConstraint {
	struct FBoneReference	TargetBone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	EConstraintOffsetOption	OffsetOption;		//Offset: 16	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ETransformConstraintType	TransformType;		//Offset: 17	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFilterOptionPerAxis	PerAxis;		//Offset: 18	Size: 3	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 21	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 240
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	SourceBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	TargetBone;		//Offset: 216	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bCopyTranslation;		//Offset: 232	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCopyRotation;		//Offset: 233	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCopyScale;		//Offset: 234	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	ControlSpace;		//Offset: 235	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 236	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 248
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	SourceBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	TargetBone;		//Offset: 216	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bCopyTranslation;		//Offset: 232	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCopyRotation;		//Offset: 233	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCopyScale;		//Offset: 234	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ECopyBoneDeltaMode	CopyMode;		//Offset: 235	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TranslationMultiplier;		//Offset: 236	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RotationMultiplier;		//Offset: 240	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ScaleMultiplier;		//Offset: 244	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Super ScriptStruct Engine.AnimNode_Base
// Size 472
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base {
	TWeakObjectPtr<class USkeletalMeshComponent>	SourceMeshComponent;		//Offset: 16	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUseAttachedParent : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCopyCurves : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 24	Size: 1
	bool	bCopyCustomAttributes;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUseMeshPose : 1;		//Offset: 26	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[2];		//Offset: 26	Size: 2
	struct FName	RootBoneToCopy;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[436];		//Offset: 36	Size: 436
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Super ScriptStruct Engine.AnimNode_Base
// Size 64
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_CurveSource : public FAnimNode_Base {
	struct FPoseLink	SourcePose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FName	SourceBinding;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Alpha;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	TScriptInterface<class UCurveSourceInterface>	CurveSource;		//Offset: 48	Size: 16	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 400
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase {
	unsigned char uknownData_0[8];		//Offset: 200	Size: 8
	struct FTransform	EffectorTransform;		//Offset: 208	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneSocketTarget	EffectorTarget;		//Offset: 256	Size: 96	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	TipBone;		//Offset: 352	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	RootBone;		//Offset: 368	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	Precision;		//Offset: 384	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	MaxIterations;		//Offset: 388	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	EffectorTransformSpace;		//Offset: 392	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneRotationSource>	EffectorRotationSource;		//Offset: 393	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[6];		//Offset: 394	Size: 6
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 288
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	RightHandFK;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	LeftHandFK;		//Offset: 216	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	RightHandIK;		//Offset: 232	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	LeftHandIK;		//Offset: 248	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FBoneReference>	IKBonesToMove;		//Offset: 264	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	float	HandFKWeight;		//Offset: 280	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 284	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Super ScriptStruct Engine.AnimNode_Base
// Size 192
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base {
	struct FPoseLink	BasePose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FPoseLink>	BlendPoses;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FInputBlendPose>	LayerSetup;		//Offset: 48	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float>	BlendWeights;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	bool	bMeshSpaceRotationBlend;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bMeshSpaceScaleBlend;		//Offset: 81	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECurveBlendOption>	CurveBlendOption;		//Offset: 82	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bBlendRootMotionBasedOnRootBone;		//Offset: 83	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 84	Size: 4
	int32_t	LODThreshold;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 92	Size: 4
	TArray<struct FPerBoneBlendWeight>	PerBoneBlendWeights;		//Offset: 96	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	struct FGuid	SkeletonGuid;		//Offset: 112	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FGuid	VirtualBoneGuid;		//Offset: 128	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_2[48];		//Offset: 144	Size: 48
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 248
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase {
	float	ReachPrecision;		//Offset: 200	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	MaxIterations;		//Offset: 204	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<struct FAnimLegIKDefinition>	LegsDefinition;		//Offset: 208	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 224	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size 44
/////////////////////////////////////////////
struct FAnimLegIKDefinition {
	struct FBoneReference	IKFootBone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	FKFootBone;		//Offset: 16	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	int32_t	NumBonesInLimb;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinRotationAngle;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EAxis>	FootBoneForwardAxis;		//Offset: 40	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EAxis>	HingeRotationAxis;		//Offset: 41	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bEnableRotationLimit;		//Offset: 42	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bEnableKneeTwistCorrection;		//Offset: 43	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size 160
/////////////////////////////////////////////
struct FAnimLegIKData {
	unsigned char uknownData_0[160];		//Offset: 0	Size: 160
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.IKChain
// Size 56
/////////////////////////////////////////////
struct FIKChain {
	unsigned char uknownData_0[56];		//Offset: 0	Size: 56
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.IKChainLink
// Size 60
/////////////////////////////////////////////
struct FIKChainLink {
	unsigned char uknownData_0[60];		//Offset: 0	Size: 60
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 432
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	BoneToModify;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 216	Size: 8
	struct FBoneSocketTarget	LookAtTarget;		//Offset: 224	Size: 96	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	LookAtLocation;		//Offset: 320	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FAxis	LookAt_Axis;		//Offset: 332	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bUseLookUpAxis;		//Offset: 348	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EInterpolationBlend>	InterpolationType;		//Offset: 349	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[2];		//Offset: 350	Size: 2
	struct FAxis	LookUp_Axis;		//Offset: 352	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	LookAtClamp;		//Offset: 368	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	InterpolationTime;		//Offset: 372	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	InterpolationTriggerThreashold;		//Offset: 376	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[52];		//Offset: 380	Size: 52
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Super ScriptStruct Engine.AnimNode_Base
// Size 56
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base {
	struct FPoseLink	Base;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FPoseLink	Additive;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	bool	bMeshSpaceAdditive;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 49	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 264
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	BoneToModify;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Translation;		//Offset: 216	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	Rotation;		//Offset: 228	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Scale;		//Offset: 240	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneModificationMode>	TranslationMode;		//Offset: 252	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneModificationMode>	RotationMode;		//Offset: 253	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneModificationMode>	ScaleMode;		//Offset: 254	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	TranslationSpace;		//Offset: 255	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	RotationSpace;		//Offset: 256	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	ScaleSpace;		//Offset: 257	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[6];		//Offset: 258	Size: 6
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Super ScriptStruct Engine.AnimNode_Base
// Size 88
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_ModifyCurve : public FAnimNode_Base {
	struct FPoseLink	SourcePose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
	TArray<float>	CurveValues;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FName>	CurveNames;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 64	Size: 16
	float	Alpha;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EModifyCurveApplyMode	ApplyMode;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 85	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Super ScriptStruct Engine.AnimNode_Base
// Size 80
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_MultiWayBlend : public FAnimNode_Base {
	TArray<struct FPoseLink>	Poses;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float>	DesiredAlphas;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 48	Size: 16
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	bool	bAdditiveNode;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bNormalizeAlpha;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[6];		//Offset: 74	Size: 6
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 256
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	BoneToObserve;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	DisplaySpace;		//Offset: 216	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bRelativeToRefPose;		//Offset: 217	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 218	Size: 2
	struct FVector	Translation;		//Offset: 220	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	Rotation;		//Offset: 232	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Scale;		//Offset: 244	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Super ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size 128
// Size inherited 56
/////////////////////////////////////////////
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase {
	class UPoseAsset*	PoseAsset;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[64];		//Offset: 64	Size: 64
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Super ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size 160
// Size inherited 128
/////////////////////////////////////////////
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler {
	struct FPoseLink	SourcePose;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
	EAlphaBlendOption	BlendOption;		//Offset: 144	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 145	Size: 7
	class UCurveFloat*	CustomCurve;		//Offset: 152	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Super ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size 152
// Size inherited 128
/////////////////////////////////////////////
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler {
	struct FName	PoseName;		//Offset: 128	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PoseWeight;		//Offset: 136	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[12];		//Offset: 140	Size: 12
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.RBFParams
// Size 44
/////////////////////////////////////////////
struct FRBFParams {
	int32_t	TargetDimensions;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFSolverType	SolverType;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	float	Radius;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAutomaticRadius;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFFunctionType	Function;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFDistanceMethod	DistanceMethod;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneAxis>	TwistAxis;		//Offset: 15	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	WeightThreshold;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFNormalizeMethod	NormalizeMethod;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 21	Size: 3
	struct FVector	MedianReference;		//Offset: 24	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MedianMin;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MedianMax;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Super ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size 360
// Size inherited 128
/////////////////////////////////////////////
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler {
	struct FPoseLink	SourcePose;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FBoneReference>	SourceBones;		//Offset: 144	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FBoneReference>	OnlyDriveBones;		//Offset: 160	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FPoseDriverTarget>	PoseTargets;		//Offset: 176	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[48];		//Offset: 192	Size: 48
	struct FBoneReference	EvalSpaceBone;		//Offset: 240	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FRBFParams	RBFParams;		//Offset: 256	Size: 44	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	EPoseDriverSource	DriveSource;		//Offset: 300	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EPoseDriverOutput	DriveOutput;		//Offset: 301	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOnlyDriveSelectedBones : 1;		//Offset: 302	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[2];		//Offset: 302	Size: 2
	int32_t	LODThreshold;		//Offset: 304	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[52];		//Offset: 308	Size: 52
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size 192
/////////////////////////////////////////////
struct FPoseDriverTarget {
	TArray<struct FPoseDriverTransform>	BoneTransforms;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	struct FRotator	TargetRotation;		//Offset: 16	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	float	TargetScale;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFDistanceMethod	DistanceMethod;		//Offset: 32	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFFunctionType	FunctionType;		//Offset: 33	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bApplyCustomCurve;		//Offset: 34	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[5];		//Offset: 35	Size: 5
	struct FRichCurve	CustomCurve;		//Offset: 40	Size: 128	Flags: Edit, NativeAccessSpecifierPublic
	struct FName	DrivenName;		//Offset: 168	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 176	Size: 8
	bool	bIsHidden;		//Offset: 184	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[7];		//Offset: 185	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size 24
/////////////////////////////////////////////
struct FPoseDriverTransform {
	struct FVector	TargetTranslation;		//Offset: 0	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	TargetRotation;		//Offset: 12	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Super ScriptStruct Engine.AnimNode_Base
// Size 144
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_PoseSnapshot : public FAnimNode_Base {
	struct FName	SnapshotName;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FPoseSnapshot	Snapshot;		//Offset: 24	Size: 56	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	ESnapshotSourceMode	Mode;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[63];		//Offset: 81	Size: 63
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Super ScriptStruct Engine.AnimNode_Base
// Size 120
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_RandomPlayer : public FAnimNode_Base {
	TArray<struct FRandomPlayerSequenceEntry>	Entries;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[80];		//Offset: 32	Size: 80
	bool	bShuffleMode;		//Offset: 112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[7];		//Offset: 113	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size 80
/////////////////////////////////////////////
struct FRandomPlayerSequenceEntry {
	class UAnimSequence*	Sequence;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ChanceToPlay;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	MinLoopCount;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	MaxLoopCount;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinPlayRate;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxPlayRate;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	struct FAlphaBlend	BlendIn;		//Offset: 32	Size: 48	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Super ScriptStruct Engine.AnimNode_Base
// Size 16
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base {
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Super ScriptStruct Engine.AnimNode_Base
// Size 24
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_RefPose : public FAnimNode_Base {
	TEnumAsByte<ERefPoseType>	RefPoseType;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 17	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 216
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase {
	unsigned char uknownData_0[16];		//Offset: 200	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.SimSpaceSettings
// Size 64
/////////////////////////////////////////////
struct FSimSpaceSettings {
	float	MasterAlpha;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	VelocityScaleZ;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxLinearVelocity;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxAngularVelocity;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxLinearAcceleration;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxAngularAcceleration;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExternalLinearDrag;		//Offset: 24	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ExternalLinearDragV;		//Offset: 28	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ExternalLinearVelocity;		//Offset: 40	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ExternalAngularVelocity;		//Offset: 52	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 2096
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
	class UPhysicsAsset*	OverridePhysicsAsset;		//Offset: 200	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[152];		//Offset: 208	Size: 152
	struct FVector	OverrideWorldGravity;		//Offset: 360	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ExternalForce;		//Offset: 372	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ComponentLinearAccScale;		//Offset: 384	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ComponentLinearVelScale;		//Offset: 396	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ComponentAppliedLinearAccClamp;		//Offset: 408	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSimSpaceSettings	SimSpaceSettings;		//Offset: 420	Size: 64	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	CachedBoundsScale;		//Offset: 484	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FBoneReference	BaseBoneRef;		//Offset: 488	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel>	OverlapChannel;		//Offset: 504	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESimulationSpace	SimulationSpace;		//Offset: 505	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bForceDisableCollisionBetweenConstraintBodies;		//Offset: 506	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[1];		//Offset: 507	Size: 1
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bClampLinearTranslationLimitToRefPose : 1;		//Offset: 508	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEnableWorldGeometry : 1;		//Offset: 508	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverrideWorldGravity : 1;		//Offset: 508	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTransferBoneVelocities : 1;		//Offset: 508	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bFreezeIncomingPoseOnStart : 1;		//Offset: 508	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[4];		//Offset: 508	Size: 4
	float	WorldSpaceMinimumScale;		//Offset: 512	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	EvaluationResetTime;		//Offset: 516	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[1576];		//Offset: 520	Size: 1576
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Super ScriptStruct Engine.AnimNode_Base
// Size 160
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_RotateRootBone : public FAnimNode_Base {
	struct FPoseLink	BasePose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	float	Pitch;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Yaw;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	PitchScaleBiasClamp;		//Offset: 40	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	YawScaleBiasClamp;		//Offset: 88	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator	MeshToComponent;		//Offset: 136	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[12];		//Offset: 148	Size: 12
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 240
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	TargetBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	SourceBone;		//Offset: 216	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	Multiplier;		//Offset: 232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneAxis>	RotationAxisToRefer;		//Offset: 236	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bIsAdditive;		//Offset: 237	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 238	Size: 2
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Super ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size 400
// Size inherited 232
/////////////////////////////////////////////
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer {
	struct FPoseLink	BasePose;		//Offset: 232	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	int32_t	LODThreshold;		//Offset: 248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Alpha;		//Offset: 252	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 256	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FInputAlphaBoolBlend	AlphaBoolBlend;		//Offset: 264	Size: 72	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FName	AlphaCurveName;		//Offset: 336	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	AlphaScaleBiasClamp;		//Offset: 344	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 392	Size: 4
	EAnimAlphaInputType	AlphaInputType;		//Offset: 396	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAlphaBoolEnabled;		//Offset: 397	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[2];		//Offset: 398	Size: 2
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Super ScriptStruct Engine.AnimNode_Base
// Size 120
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_ScaleChainLength : public FAnimNode_Base {
	struct FPoseLink	InputPose;		//Offset: 16	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	DefaultChainLength;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FBoneReference	ChainStartBone;		//Offset: 36	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	ChainEndBone;		//Offset: 52	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	TargetLocation;		//Offset: 68	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Alpha;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 84	Size: 4
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 88	Size: 8	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	EScaleChainInitialLength	ChainInitialLength;		//Offset: 96	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[23];		//Offset: 97	Size: 23
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Super ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size 80
// Size inherited 56
/////////////////////////////////////////////
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase {
	class UAnimSequenceBase*	Sequence;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExplicitTime;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bShouldLoop;		//Offset: 68	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bTeleportToExplicitTime;		//Offset: 69	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESequenceEvalReinit>	ReinitializationBehavior;		//Offset: 70	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 71	Size: 1
	float	StartPosition;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 76	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Super ScriptStruct Engine.AnimNode_Base
// Size 72
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_Slot : public FAnimNode_Base {
	struct FPoseLink	Source;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FName	SlotName;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAlwaysUpdateSourcePose;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[31];		//Offset: 41	Size: 31
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 624
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	StartBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FBoneReference	EndBone;		//Offset: 216	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	ESplineBoneAxis	BoneAxis;		//Offset: 232	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bAutoCalculateSpline;		//Offset: 233	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 234	Size: 2
	int32_t	PointCount;		//Offset: 236	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<struct FTransform>	ControlPoints;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	float	Roll;		//Offset: 256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TwistStart;		//Offset: 260	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TwistEnd;		//Offset: 264	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 268	Size: 4
	struct FAlphaBlend	TwistBlend;		//Offset: 272	Size: 48	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	Stretch;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Offset;		//Offset: 324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[296];		//Offset: 328	Size: 296
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size 20
/////////////////////////////////////////////
struct FSplineIKCachedBoneData {
	struct FBoneReference	Bone;		//Offset: 0	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	int32_t	RefSkeletonIndex;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 296
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	SpringBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	MaxDisplacement;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	SpringStiffness;		//Offset: 220	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	SpringDamping;		//Offset: 224	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ErrorResetThresh;		//Offset: 228	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[60];		//Offset: 232	Size: 60
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bLimitDisplacement : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTranslateX : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTranslateY : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTranslateZ : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bRotateX : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bRotateY : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bRotateZ : 1;		//Offset: 292	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 292	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Super ScriptStruct Engine.AnimNode_Root
// Size 48
// Size inherited 48
/////////////////////////////////////////////
struct FAnimNode_StateResult : public FAnimNode_Root {
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 608
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase {
	unsigned char uknownData_0[56];		//Offset: 200	Size: 56
	struct FBoneReference	TrailBone;		//Offset: 256	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	int32_t	ChainLength;		//Offset: 272	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EAxis>	ChainBoneAxis;		//Offset: 276	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bInvertChainBoneAxis : 1;		//Offset: 277	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bLimitStretch : 1;		//Offset: 277	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bLimitRotation : 1;		//Offset: 277	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUsePlanarLimit : 1;		//Offset: 277	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bActorSpaceFakeVel : 1;		//Offset: 277	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bReorientParentToChild : 1;		//Offset: 277	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 277	Size: 3
	float	MaxDeltaTime;		//Offset: 280	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RelaxationSpeedScale;		//Offset: 284	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve	TrailRelaxationSpeed;		//Offset: 288	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	RelaxationSpeedScaleInputProcessor;		//Offset: 424	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	TArray<struct FRotationLimit>	RotationLimits;		//Offset: 472	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FVector>	RotationOffsets;		//Offset: 488	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FAnimPhysPlanarLimit>	PlanarLimits;		//Offset: 504	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	float	StretchLimit;		//Offset: 520	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	FakeVelocity;		//Offset: 524	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FBoneReference	BaseJoint;		//Offset: 536	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	LastBoneRotationAnimAlphaBlend;		//Offset: 552	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[52];		//Offset: 556	Size: 52
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.RotationLimit
// Size 24
/////////////////////////////////////////////
struct FRotationLimit {
	struct FVector	LimitMin;		//Offset: 0	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	LimitMax;		//Offset: 12	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size 32
/////////////////////////////////////////////
struct FReferenceBoneFrame {
	struct FBoneReference	Bone;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FAxis	Axis;		//Offset: 16	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 312
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame	BaseFrame;		//Offset: 200	Size: 32	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FReferenceBoneFrame	TwistFrame;		//Offset: 232	Size: 32	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FAxis	TwistPlaneNormalAxis;		//Offset: 264	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	RangeMax;		//Offset: 280	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RemappedMin;		//Offset: 284	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	RemappedMax;		//Offset: 288	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FAnimCurveParam	Curve;		//Offset: 292	Size: 12	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 304	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Super ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size 480
// Size inherited 200
/////////////////////////////////////////////
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase {
	struct FBoneReference	IKBone;		//Offset: 200	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	float	StartStretchRatio;		//Offset: 216	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxStretchScale;		//Offset: 220	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	EffectorLocation;		//Offset: 224	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 236	Size: 4
	struct FBoneSocketTarget	EffectorTarget;		//Offset: 240	Size: 96	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	JointTargetLocation;		//Offset: 336	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 348	Size: 4
	struct FBoneSocketTarget	JointTarget;		//Offset: 352	Size: 96	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FAxis	TwistAxis;		//Offset: 448	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	EffectorLocationSpace;		//Offset: 464	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBoneControlSpace>	JointTargetLocationSpace;		//Offset: 465	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAllowStretching : 1;		//Offset: 466	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTakeRotationFromEffectorSpace : 1;		//Offset: 466	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bMaintainEffectorRelRot : 1;		//Offset: 466	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAllowTwist : 1;		//Offset: 466	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[14];		//Offset: 466	Size: 14
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Super ScriptStruct Engine.AnimNode_Base
// Size 200
// Size inherited 16
/////////////////////////////////////////////
struct FAnimNode_TwoWayBlend : public FAnimNode_Base {
	struct FPoseLink	A;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FPoseLink	B;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	EAnimAlphaInputType	AlphaInputType;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAlphaBoolEnabled : 1;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bResetChildOnActivation : 1;		//Offset: 49	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[3];		//Offset: 49	Size: 3
	float	Alpha;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBias	AlphaScaleBias;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FInputAlphaBoolBlend	AlphaBoolBlend;		//Offset: 64	Size: 72	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FName	AlphaCurveName;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInputScaleBiasClamp	AlphaScaleBiasClamp;		//Offset: 144	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 192	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Super ScriptStruct Engine.AnimInstanceProxy
// Size 2576
// Size inherited 1904
/////////////////////////////////////////////
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy {
	unsigned char uknownData_0[672];		//Offset: 1904	Size: 672
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.PositionHistory
// Size 48
/////////////////////////////////////////////
struct FPositionHistory {
	TArray<struct FVector>	Positions;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	float	Range;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[28];		//Offset: 20	Size: 28
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.RBFEntry
// Size 16
/////////////////////////////////////////////
struct FRBFEntry {
	TArray<float>	Values;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AnimGraphRuntime.RBFTarget
// Super ScriptStruct AnimGraphRuntime.RBFEntry
// Size 160
// Size inherited 16
/////////////////////////////////////////////
struct FRBFTarget : public FRBFEntry {
	float	ScaleFactor;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bApplyCustomCurve;		//Offset: 20	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 21	Size: 3
	struct FRichCurve	CustomCurve;		//Offset: 24	Size: 128	Flags: Edit, NativeAccessSpecifierPublic
	ERBFDistanceMethod	DistanceMethod;		//Offset: 152	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERBFFunctionType	FunctionType;		//Offset: 153	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[6];		//Offset: 154	Size: 6
};
#pragma endregion
}