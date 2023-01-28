#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum Chaos.EClusterUnionMethod
/////////////////////////////////////////////
enum class EClusterUnionMethod : uint8_t {
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldPhysicsDefaultFields
/////////////////////////////////////////////
enum class EFieldPhysicsDefaultFields : uint8_t {
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_Max = 5,
	Field_MAX = 6,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldOutputType
/////////////////////////////////////////////
enum class EFieldOutputType : uint8_t {
	Field_Output_Vector = 0,
	Field_Output_Scalar = 1,
	Field_Output_Integer = 2,
	Field_Output_Max = 3,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldIntegerType
/////////////////////////////////////////////
enum class EFieldIntegerType : uint8_t {
	Integer_DynamicState = 0,
	Integer_ActivateDisabled = 1,
	Integer_CollisionGroup = 2,
	Integer_PositionAnimated = 3,
	Integer_PositionStatic = 4,
	Integer_TargetMax = 5,
	Integer_MAX = 6,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldScalarType
/////////////////////////////////////////////
enum class EFieldScalarType : uint8_t {
	Scalar_ExternalClusterStrain = 0,
	Scalar_Kill = 1,
	Scalar_DisableThreshold = 2,
	Scalar_SleepingThreshold = 3,
	Scalar_InternalClusterStrain = 4,
	Scalar_DynamicConstraint = 5,
	Scalar_TargetMax = 6,
	Scalar_MAX = 7,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldVectorType
/////////////////////////////////////////////
enum class EFieldVectorType : uint8_t {
	Vector_LinearForce = 0,
	Vector_LinearVelocity = 1,
	Vector_AngularVelocity = 2,
	Vector_AngularTorque = 3,
	Vector_PositionTarget = 4,
	Vector_TargetMax = 5,
	Vector_MAX = 6,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldPhysicsType
/////////////////////////////////////////////
enum class EFieldPhysicsType : uint8_t {
	Field_None = 0,
	Field_DynamicState = 1,
	Field_LinearForce = 2,
	Field_ExternalClusterStrain = 3,
	Field_Kill = 4,
	Field_LinearVelocity = 5,
	Field_AngularVelociy = 6,
	Field_AngularTorque = 7,
	Field_InternalClusterStrain = 8,
	Field_DisableThreshold = 9,
	Field_SleepingThreshold = 10,
	Field_PositionStatic = 11,
	Field_PositionAnimated = 12,
	Field_PositionTarget = 13,
	Field_DynamicConstraint = 14,
	Field_CollisionGroup = 15,
	Field_ActivateDisabled = 16,
	Field_PhysicsType_Max = 17,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldFalloffType
/////////////////////////////////////////////
enum class EFieldFalloffType : uint8_t {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldFilterType
/////////////////////////////////////////////
enum class EFieldFilterType : uint8_t {
	Field_Filter_Dynamic = 0,
	Field_Filter_Kinematic = 1,
	Field_Filter_Static = 2,
	Field_Filter_All = 3,
	Field_Filter_Max = 4,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldResolutionType
/////////////////////////////////////////////
enum class EFieldResolutionType : uint8_t {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldCullingOperationType
/////////////////////////////////////////////
enum class EFieldCullingOperationType : uint8_t {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3,
};
/////////////////////////////////////////////
// Enum Chaos.EFieldOperationType
/////////////////////////////////////////////
enum class EFieldOperationType : uint8_t {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4,
};
/////////////////////////////////////////////
// Enum Chaos.EWaveFunctionType
/////////////////////////////////////////////
enum class EWaveFunctionType : uint8_t {
	Field_Wave_Cosine = 0,
	Field_Wave_Gaussian = 1,
	Field_Wave_Falloff = 2,
	Field_Wave_Decay = 3,
	Field_Wave_Max = 4,
};
/////////////////////////////////////////////
// Enum Chaos.ESetMaskConditionType
/////////////////////////////////////////////
enum class ESetMaskConditionType : uint8_t {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
};
/////////////////////////////////////////////
// Enum Chaos.EEmissionPatternTypeEnum
/////////////////////////////////////////////
enum class EEmissionPatternTypeEnum : uint8_t {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2,
};
/////////////////////////////////////////////
// Enum Chaos.EInitialVelocityTypeEnum
/////////////////////////////////////////////
enum class EInitialVelocityTypeEnum : uint8_t {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2,
};
/////////////////////////////////////////////
// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
/////////////////////////////////////////////
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t {
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_Max = 8,
};
/////////////////////////////////////////////
// Enum Chaos.EObjectStateTypeEnum
/////////////////////////////////////////////
enum class EObjectStateTypeEnum : uint8_t {
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 5,
	Chaos_Max = 6,
};
/////////////////////////////////////////////
// Enum Chaos.EImplicitTypeEnum
/////////////////////////////////////////////
enum class EImplicitTypeEnum : uint8_t {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5,
};
/////////////////////////////////////////////
// Enum Chaos.ECollisionTypeEnum
/////////////////////////////////////////////
enum class ECollisionTypeEnum : uint8_t {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2,
};
/////////////////////////////////////////////
// Enum Chaos.EChaosBufferMode
/////////////////////////////////////////////
enum class EChaosBufferMode : uint8_t {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum Chaos.EChaosThreadingMode
/////////////////////////////////////////////
enum class EChaosThreadingMode : uint8_t {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum Chaos.EChaosSolverTickMode
/////////////////////////////////////////////
enum class EChaosSolverTickMode : uint8_t {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum Chaos.EGeometryCollectionCacheType
/////////////////////////////////////////////
enum class EGeometryCollectionCacheType : uint8_t {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	MAX = 4,
};
#pragma endregion

#pragma region Structs
struct FSolverCollisionFilterSettings;
struct FSolverBreakingFilterSettings;
struct FSolverTrailingFilterSettings;
struct FChaosSolverConfiguration;
struct FRecordedTransformTrack;
struct FRecordedFrame;
struct FSolverTrailingData;
struct FSolverBreakingData;
struct FSolverCollisionData;
/////////////////////////////////////////////
// ScriptStruct Chaos.SolverCollisionFilterSettings
// Size 16
/////////////////////////////////////////////
struct FSolverCollisionFilterSettings {
	bool	FilterEnabled;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	MinMass;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinSpeed;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinImpulse;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Chaos.SolverBreakingFilterSettings
// Size 16
/////////////////////////////////////////////
struct FSolverBreakingFilterSettings {
	bool	FilterEnabled;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	MinMass;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinSpeed;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinVolume;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Chaos.SolverTrailingFilterSettings
// Size 16
/////////////////////////////////////////////
struct FSolverTrailingFilterSettings {
	bool	FilterEnabled;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	float	MinMass;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinSpeed;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MinVolume;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Chaos.ChaosSolverConfiguration
// Size 104
/////////////////////////////////////////////
struct FChaosSolverConfiguration {
	int32_t	Iterations;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	CollisionPairIterations;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	PushOutIterations;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	CollisionPushOutPairIterations;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	CollisionMarginFraction;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	CollisionMarginMax;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	CollisionCullDistance;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	JointPairIterations;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	JointPushOutPairIterations;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ClusterConnectionFactor;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EClusterUnionMethod	ClusterUnionConnectionType;		//Offset: 40	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bGenerateCollisionData;		//Offset: 41	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 42	Size: 2
	struct FSolverCollisionFilterSettings	CollisionFilterSettings;		//Offset: 44	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bGenerateBreakData;		//Offset: 60	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 61	Size: 3
	struct FSolverBreakingFilterSettings	BreakingFilterSettings;		//Offset: 64	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bGenerateTrailingData;		//Offset: 80	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[3];		//Offset: 81	Size: 3
	struct FSolverTrailingFilterSettings	TrailingFilterSettings;		//Offset: 84	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	bool	bGenerateContactGraph;		//Offset: 100	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[3];		//Offset: 101	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct Chaos.RecordedTransformTrack
// Size 16
/////////////////////////////////////////////
struct FRecordedTransformTrack {
	TArray<struct FRecordedFrame>	Records;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Chaos.RecordedFrame
// Size 184
/////////////////////////////////////////////
struct FRecordedFrame {
	TArray<struct FTransform>	Transforms;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<int32_t>	TransformIndices;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<int32_t>	PreviousTransformIndices;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<bool>	DisabledFlags;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FSolverCollisionData>	Collisions;		//Offset: 64	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FSolverBreakingData>	Breakings;		//Offset: 80	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TAssetPtr<class FNone_1684104556>	Trailings;		//Offset: 96	Size: 80	Flags: NativeAccessSpecifierPublic
	float	Timestamp;		//Offset: 176	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 180	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct Chaos.SolverTrailingData
// Size 48
/////////////////////////////////////////////
struct FSolverTrailingData {
	struct FVector	Location;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Velocity;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularVelocity;		//Offset: 24	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Mass;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ParticleIndex;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ParticleIndexMesh;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Chaos.SolverBreakingData
// Size 48
/////////////////////////////////////////////
struct FSolverBreakingData {
	struct FVector	Location;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Velocity;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularVelocity;		//Offset: 24	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Mass;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ParticleIndex;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ParticleIndexMesh;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Chaos.SolverCollisionData
// Size 108
/////////////////////////////////////////////
struct FSolverCollisionData {
	struct FVector	Location;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AccumulatedImpulse;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Normal;		//Offset: 24	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Velocity1;		//Offset: 36	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Velocity2;		//Offset: 48	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularVelocity1;		//Offset: 60	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	AngularVelocity2;		//Offset: 72	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Mass1;		//Offset: 84	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Mass2;		//Offset: 88	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ParticleIndex;		//Offset: 92	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	LevelsetIndex;		//Offset: 96	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ParticleIndexMesh;		//Offset: 100	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	LevelsetIndexMesh;		//Offset: 104	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
#pragma endregion
}