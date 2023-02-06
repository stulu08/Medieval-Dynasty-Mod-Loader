#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum AIModule.EPathFollowingResult
/////////////////////////////////////////////
enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvQueryStatus
/////////////////////////////////////////////
enum class EEnvQueryStatus : uint8_t {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AIModule.EAISenseNotifyType
/////////////////////////////////////////////
enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EAITaskPriority
/////////////////////////////////////////////
enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.EGenericAICheck
/////////////////////////////////////////////
enum class EGenericAICheck : uint8_t {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7,
};
/////////////////////////////////////////////
// Enum AIModule.EAILockSource
/////////////////////////////////////////////
enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EAIRequestPriority
/////////////////////////////////////////////
enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.EPawnActionEventType
/////////////////////////////////////////////
enum class EPawnActionEventType : uint8_t {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AIModule.EPawnActionResult
/////////////////////////////////////////////
enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.EPawnActionAbortState
/////////////////////////////////////////////
enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.FAIDistanceType
/////////////////////////////////////////////
enum class EFAIDistanceType : uint8_t {
	FAIDistanceType__Distance3D = 0,
	FAIDistanceType__Distance2D = 1,
	FAIDistanceType__DistanceZ = 2,
	FAIDistanceType__MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EAIOptionFlag
/////////////////////////////////////////////
enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EBTFlowAbortMode
/////////////////////////////////////////////
enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EBTNodeResult
/////////////////////////////////////////////
enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.ETextKeyOperation
/////////////////////////////////////////////
enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EArithmeticKeyOperation
/////////////////////////////////////////////
enum class EArithmeticKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AIModule.EBasicKeyOperation
/////////////////////////////////////////////
enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EBTParallelMode
/////////////////////////////////////////////
enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EBTDecoratorLogic
/////////////////////////////////////////////
enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.EBTChildIndex
/////////////////////////////////////////////
enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EBTBlackboardRestart
/////////////////////////////////////////////
enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EBlackBoardEntryComparison
/////////////////////////////////////////////
enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EPathExistanceQueryType
/////////////////////////////////////////////
enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EPointOnCircleSpacingMethod
/////////////////////////////////////////////
enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EEQSNormalizationType
/////////////////////////////////////////////
enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestDistance
/////////////////////////////////////////////
enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestDot
/////////////////////////////////////////////
enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestPathfinding
/////////////////////////////////////////////
enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvQueryTestClamping
/////////////////////////////////////////////
enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvDirection
/////////////////////////////////////////////
enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvOverlapShape
/////////////////////////////////////////////
enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTraceShape
/////////////////////////////////////////////
enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvQueryTrace
/////////////////////////////////////////////
enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EAIParamType
/////////////////////////////////////////////
enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvQueryParam
/////////////////////////////////////////////
enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvQueryRunMode
/////////////////////////////////////////////
enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestScoreOperator
/////////////////////////////////////////////
enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestFilterOperator
/////////////////////////////////////////////
enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestCost
/////////////////////////////////////////////
enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestWeight
/////////////////////////////////////////////
enum class EEnvTestWeight : uint8_t {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestScoreEquation
/////////////////////////////////////////////
enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestFilterType
/////////////////////////////////////////////
enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvTestPurpose
/////////////////////////////////////////////
enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EEnvQueryHightlightMode
/////////////////////////////////////////////
enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.ETeamAttitude
/////////////////////////////////////////////
enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EPathFollowingRequestResult
/////////////////////////////////////////////
enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum AIModule.EPathFollowingAction
/////////////////////////////////////////////
enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum AIModule.EPathFollowingStatus
/////////////////////////////////////////////
enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum AIModule.EPawnActionFailHandling
/////////////////////////////////////////////
enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EPawnSubActionTriggeringPolicy
/////////////////////////////////////////////
enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum AIModule.EPawnActionMoveMode
/////////////////////////////////////////////
enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	MAX = 2,
};
#pragma endregion

#pragma region Structs
struct FAIRequestID;
struct FAIStimulus;
struct FActorPerceptionUpdateInfo;
struct FAIDataProviderValue;
struct FAIDataProviderTypedValue;
struct FAIDataProviderBoolValue;
struct FAIDataProviderFloatValue;
struct FAIDataProviderIntValue;
struct FAIDataProviderStructValue;
struct FActorPerceptionBlueprintInfo;
struct FAISenseAffiliationFilter;
struct FAIDamageEvent;
struct FAINoiseEvent;
struct FAIPredictionEvent;
struct FAISightEvent;
struct FAITeamStimulusEvent;
struct FAITouchEvent;
struct FIntervalCountdown;
struct FAIMoveRequest;
struct FBehaviorTreeTemplateInfo;
struct FBlackboardKeySelector;
struct FBlackboardEntry;
struct FBTCompositeChild;
struct FBTDecoratorLogic;
struct FCrowdAvoidanceSamplingPattern;
struct FCrowdAvoidanceConfig;
struct FEnvQueryInstanceCache;
struct FEnvQueryRequest;
struct FEQSParametrizedQueryExecutionRequest;
struct FAIDynamicParam;
struct FEnvQueryResult;
struct FEnvOverlapData;
struct FEnvTraceData;
struct FEnvDirection;
struct FEnvNamedValue;
struct FGenericTeamId;
struct FPawnActionStack;
struct FPawnActionEvent;
struct FRecastGraphWrapper;
/////////////////////////////////////////////
// ScriptStruct AIModule.AIRequestID
// Size 4
/////////////////////////////////////////////
struct FAIRequestID {
	uint32_t	RequestID;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIStimulus
// Size 60
/////////////////////////////////////////////
struct FAIStimulus {
	float	Age;		//Offset: 0	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float	ExpirationAge;		//Offset: 4	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float	Strength;		//Offset: 8	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	StimulusLocation;		//Offset: 12	Size: 12	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ReceiverLocation;		//Offset: 24	Size: 12	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	Tag;		//Offset: 36	Size: 8	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[12];		//Offset: 44	Size: 12
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bSuccessfullySensed : 1;		//Offset: 56	Size: 1	Flags: BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_1[4];		//Offset: 56	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.ActorPerceptionUpdateInfo
// Size 72
/////////////////////////////////////////////
struct FActorPerceptionUpdateInfo {
	int32_t	TargetId;		//Offset: 0	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TWeakObjectPtr<class AActor>	Target;		//Offset: 4	Size: 8	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FAIStimulus	Stimulus;		//Offset: 12	Size: 60	Flags: BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDataProviderValue
// Size 32
/////////////////////////////////////////////
struct FAIDataProviderValue {
	unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	class UAIDataProvider*	DataBinding;		//Offset: 16	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	DataField;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDataProviderTypedValue
// Super ScriptStruct AIModule.AIDataProviderValue
// Size 48
// Size inherited 32
/////////////////////////////////////////////
struct FAIDataProviderTypedValue : public FAIDataProviderValue {
	class UObject*	PropertyType;		//Offset: 32	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 40	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDataProviderBoolValue
// Super ScriptStruct AIModule.AIDataProviderTypedValue
// Size 56
// Size inherited 48
/////////////////////////////////////////////
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue {
	bool	DefaultValue;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 49	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDataProviderFloatValue
// Super ScriptStruct AIModule.AIDataProviderTypedValue
// Size 56
// Size inherited 48
/////////////////////////////////////////////
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue {
	float	DefaultValue;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 52	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDataProviderIntValue
// Super ScriptStruct AIModule.AIDataProviderTypedValue
// Size 56
// Size inherited 48
/////////////////////////////////////////////
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue {
	int32_t	DefaultValue;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 52	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDataProviderStructValue
// Super ScriptStruct AIModule.AIDataProviderValue
// Size 48
// Size inherited 32
/////////////////////////////////////////////
struct FAIDataProviderStructValue : public FAIDataProviderValue {
	unsigned char uknownData_0[16];		//Offset: 32	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size 32
/////////////////////////////////////////////
struct FActorPerceptionBlueprintInfo {
	class AActor*	Target;		//Offset: 0	Size: 8	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<struct FAIStimulus>	LastSensedStimuli;		//Offset: 8	Size: 16	Flags: BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bIsHostile : 1;		//Offset: 24	Size: 1	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 24	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AISenseAffiliationFilter
// Size 4
/////////////////////////////////////////////
struct FAISenseAffiliationFilter {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDetectEnemies : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDetectNeutrals : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDetectFriendlies : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDamageEvent
// Size 56
/////////////////////////////////////////////
struct FAIDamageEvent {
	float	Amount;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Location;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	HitLocation;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	class AActor*	DamagedActor;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AActor*	Instigator;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	Tag;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AINoiseEvent
// Size 48
/////////////////////////////////////////////
struct FAINoiseEvent {
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	struct FVector	NoiseLocation;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Loudness;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	MaxRange;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AActor*	Instigator;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	Tag;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 40	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIPredictionEvent
// Size 24
/////////////////////////////////////////////
struct FAIPredictionEvent {
	class AActor*	Requestor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AActor*	PredictedActor;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 16	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AISightEvent
// Size 24
/////////////////////////////////////////////
struct FAISightEvent {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	class AActor*	SeenActor;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AActor*	Observer;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AITeamStimulusEvent
// Size 56
/////////////////////////////////////////////
struct FAITeamStimulusEvent {
	unsigned char uknownData_0[40];		//Offset: 0	Size: 40
	class AActor*	Broadcaster;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class AActor*	Enemy;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AITouchEvent
// Size 32
/////////////////////////////////////////////
struct FAITouchEvent {
	unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	class AActor*	TouchReceiver;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AActor*	OtherActor;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.IntervalCountdown
// Size 8
/////////////////////////////////////////////
struct FIntervalCountdown {
	float	Interval;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIMoveRequest
// Size 64
/////////////////////////////////////////////
struct FAIMoveRequest {
	class AActor*	GoalActor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[56];		//Offset: 8	Size: 56
};
/////////////////////////////////////////////
// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size 24
/////////////////////////////////////////////
struct FBehaviorTreeTemplateInfo {
	class UBehaviorTree*	Asset;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBTCompositeNode*	Template;		//Offset: 8	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 16	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AIModule.BlackboardKeySelector
// Size 40
/////////////////////////////////////////////
struct FBlackboardKeySelector {
	TArray<class UBlackboardKeyType*>	AllowedTypes;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	struct FName	SelectedKeyName;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBlackboardKeyType*	SelectedKeyType;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	SelectedKeyID;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bNoneIsAllowedValue : 1;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_1[4];		//Offset: 36	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.BlackboardEntry
// Size 24
/////////////////////////////////////////////
struct FBlackboardEntry {
	struct FName	EntryName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBlackboardKeyType*	KeyType;		//Offset: 8	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bInstanceSynced : 1;		//Offset: 16	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 16	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct AIModule.BTCompositeChild
// Size 48
/////////////////////////////////////////////
struct FBTCompositeChild {
	class UBTCompositeNode*	ChildComposite;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBTTaskNode*	ChildTask;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<class UBTDecorator*>	Decorators;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FBTDecoratorLogic>	DecoratorOps;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.BTDecoratorLogic
// Size 4
/////////////////////////////////////////////
struct FBTDecoratorLogic {
	TEnumAsByte<EBTDecoratorLogic>	Operation;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 1	Size: 1
	uint16_t	Number;		//Offset: 2	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size 32
/////////////////////////////////////////////
struct FCrowdAvoidanceSamplingPattern {
	TArray<float>	Angles;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float>	Radii;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size 28
/////////////////////////////////////////////
struct FCrowdAvoidanceConfig {
	float	VelocityBias;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	DesiredVelocityWeight;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	CurrentVelocityWeight;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	SideBiasWeight;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ImpactTimeWeight;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ImpactTimeRange;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	CustomPatternIdx;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	AdaptiveDivisions;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	AdaptiveRings;		//Offset: 26	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	AdaptiveDepth;		//Offset: 27	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvQueryInstanceCache
// Size 376
/////////////////////////////////////////////
struct FEnvQueryInstanceCache {
	class UEnvQuery*	Template;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[368];		//Offset: 8	Size: 368
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvQueryRequest
// Size 104
/////////////////////////////////////////////
struct FEnvQueryRequest {
	class UEnvQuery*	QueryTemplate;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UObject*	Owner;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UWorld*	World;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[80];		//Offset: 24	Size: 80
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size 72
/////////////////////////////////////////////
struct FEQSParametrizedQueryExecutionRequest {
	class UEnvQuery*	QueryTemplate;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TArray<struct FAIDynamicParam>	QueryConfig;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	struct FBlackboardKeySelector	EQSQueryBlackboardKey;		//Offset: 24	Size: 40	Flags: Edit, NativeAccessSpecifierPublic
	TEnumAsByte<EEnvQueryRunMode>	RunMode;		//Offset: 64	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 65	Size: 3
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bUseBBKeyForQueryTemplate : 1;		//Offset: 68	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 68	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.AIDynamicParam
// Size 56
/////////////////////////////////////////////
struct FAIDynamicParam {
	struct FName	ParamName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAIParamType	ParamType;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	float	Value;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FBlackboardKeySelector	BBKey;		//Offset: 16	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvQueryResult
// Size 64
/////////////////////////////////////////////
struct FEnvQueryResult {
	unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	class UEnvQueryItemType*	ItemType;		//Offset: 16	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[20];		//Offset: 24	Size: 20
	int32_t	OptionIndex;		//Offset: 44	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	QueryID;		//Offset: 48	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[12];		//Offset: 52	Size: 12
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvOverlapData
// Size 32
/////////////////////////////////////////////
struct FEnvOverlapData {
	float	ExtentX;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExtentY;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExtentZ;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	ShapeOffset;		//Offset: 12	Size: 12	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel>	OverlapChannel;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EEnvOverlapShape>	OverlapShape;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 26	Size: 2
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOnlyBlockingHits : 1;		//Offset: 28	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverlapComplex : 1;		//Offset: 28	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bSkipOverlapQuerier : 1;		//Offset: 28	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 28	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvTraceData
// Size 48
/////////////////////////////////////////////
struct FEnvTraceData {
	int32_t	VersionNum;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	class UNavigationQueryFilter*	NavigationFilter;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ProjectDown;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ProjectUp;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExtentX;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExtentY;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ExtentZ;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PostProjectionVerticalOffset;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ETraceTypeQuery>	TraceChannel;		//Offset: 40	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel>	SerializedChannel;		//Offset: 41	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EEnvTraceShape>	TraceShape;		//Offset: 42	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EEnvQueryTrace>	TraceMode;		//Offset: 43	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTraceComplex : 1;		//Offset: 44	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOnlyBlockingHits : 1;		//Offset: 44	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCanTraceOnNavMesh : 1;		//Offset: 44	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCanTraceOnGeometry : 1;		//Offset: 44	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCanDisableTrace : 1;		//Offset: 44	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCanProjectDown : 1;		//Offset: 44	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 44	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvDirection
// Size 32
/////////////////////////////////////////////
struct FEnvDirection {
	class UEnvQueryContext*	LineFrom;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UEnvQueryContext*	LineTo;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UEnvQueryContext*	Rotation;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EEnvDirection>	DirMode;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 25	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct AIModule.EnvNamedValue
// Size 16
/////////////////////////////////////////////
struct FEnvNamedValue {
	struct FName	ParamName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAIParamType	ParamType;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	float	Value;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct AIModule.GenericTeamId
// Size 1
/////////////////////////////////////////////
struct FGenericTeamId {
	unsigned char	TeamID;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct AIModule.PawnActionStack
// Size 8
/////////////////////////////////////////////
struct FPawnActionStack {
	class UPawnAction*	TopAction;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct AIModule.PawnActionEvent
// Size 24
/////////////////////////////////////////////
struct FPawnActionEvent {
	class UPawnAction*	Action;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 8	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct AIModule.RecastGraphWrapper
// Size 152
/////////////////////////////////////////////
struct FRecastGraphWrapper {
	class ARecastNavMesh*	RecastNavMeshActor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[144];		//Offset: 8	Size: 144
};
#pragma endregion
}