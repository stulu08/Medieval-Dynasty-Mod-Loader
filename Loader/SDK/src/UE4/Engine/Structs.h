#pragma once
#include "CoreUObject/Class.h"
#include "Containers/Pointers.h"
#include "PhysicsCore/Structs.h"
#include "Chaos/Structs.h"
#include "Slate/Structs.h"

//InputCore
namespace UE4 {
#pragma region Enums
	/////////////////////////////////////////////
	// Enum InputCore.ETouchIndex
	/////////////////////////////////////////////
	enum class ETouchIndex : uint8_t {
		Touch1 = 0,
		Touch2 = 1,
		Touch3 = 2,
		Touch4 = 3,
		Touch5 = 4,
		Touch6 = 5,
		Touch7 = 6,
		Touch8 = 7,
		Touch9 = 8,
		Touch10 = 9,
		CursorPointerIndex = 10,
		MAX_TOUCHES = 11,
		MAX = 12,
	};
	/////////////////////////////////////////////
	// Enum InputCore.ETouchType
	/////////////////////////////////////////////
	enum class ETouchType : uint8_t {
		Began = 0,
		Moved = 1,
		Stationary = 2,
		ForceChanged = 3,
		FirstMove = 4,
		Ended = 5,
		NumTypes = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum InputCore.EConsoleForGamepadLabels
	/////////////////////////////////////////////
	enum class EConsoleForGamepadLabels : uint8_t {
		None = 0,
		XBoxOne = 1,
		PS4 = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum InputCore.EControllerHand
	/////////////////////////////////////////////
	enum class EControllerHand : uint8_t {
		Left = 0,
		Right = 1,
		AnyHand = 2,
		Pad = 3,
		ExternalCamera = 4,
		Gun = 5,
		Special_1 = 6,
		Special_2 = 7,
		Special_3 = 8,
		Special_4 = 9,
		Special_5 = 10,
		Special_6 = 11,
		Special_7 = 12,
		Special_8 = 13,
		Special_9 = 14,
		Special_10 = 15,
		Special_11 = 16,
		ControllerHand_Count = 17,
		MAX = 18,
	};
#pragma endregion
}

namespace UE4 {
	struct FActorSpawnParameters
	{
		FActorSpawnParameters()
			: Name("")
			, Template(0)
			, Owner(0)
			, Instigator(0)
			, OverrideLevel(0)
			, bNoCollisionFail(false)
			, bRemoteOwned(false)
			, bNoFail(false)
			, bDeferConstruction(false)
			, bAllowDuringConstructionScript(false)
			, ObjectFlags(0x00000008)
		{}
		FName Name;
		class AActor* Template;
		class AActor* Owner;
		class AActor* Instigator;
		class	ULevel* OverrideLevel;
		int	bNoCollisionFail : 1;
		int	bRemoteOwned : 1;
		int	bNoFail : 1;
		int	bDeferConstruction : 1;
		int	bAllowDuringConstructionScript : 1;
		int ObjectFlags;
	};
	//struct FHitResult {
	//	int32_t FaceIndex;																							 //offset: 0   | size: 4
	//	float Time;																									 //offset: 4   | size: 4
	//	float Distance;																								 //offset: 8   | size: 4
	//	FVector Location;																							 //offset: 12  | size: 12
	//	FVector ImpactPoint;																						 //offset: 24  | size: 12
	//	FVector Normal;																								 //offset: 36  | size: 12
	//	FVector ImpactNormal;																						 //offset: 48  | size: 12
	//	FVector TraceStart;																							 //offset: 60  | size: 12
	//	FVector TraceEnd;																							 //offset: 72  | size: 12
	//	float PenetrationDepth;																						 //offset: 84  | size: 4
	//	int32_t Item;																								 //offset: 88  | size: 4
	//	uint8_t ElementIndex;																						 //offset: 92  | size: 1
	//	uint8_t bBlockingHit : 1;																					 //offset:     | size:
	//	uint8_t bStartPenetrating : 1;																				 //offset:     | size:
	//	TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;														 //offset: 96  | size: 8
	//	TWeakObjectPtr<class AActor> Actor;																			 //offset: 104 | size: 8
	//	TWeakObjectPtr<class UPrimitiveComponent> Component;														 //offset: 112 | size: 8
	//	FName BoneName;																								 //offset: 120 | size: 8
	//	FName MyBoneName;																							 //offset: 128 | size: 8
	//};
	//enum class ETeleportType
	//{
	//	None = 0,
	//	TeleportPhysics = 1,
	//	ResetPhysics = 2,
	//};
	//enum class ESpawnActorCollisionHandlingMethod : uint8_t
	//{
	//	Undefined = 0,
	//	AlwaysSpawn = 1,
	//	AdjustIfPossibleButAlwaysSpawn = 2,
	//	AdjustIfPossibleButDontSpawnIfColliding = 3,
	//	DontSpawnIfColliding = 4,
	//	ESpawnActorCollisionHandlingMethod_MAX = 5
	//};
}
namespace UE4 {
#pragma region Enums
	/////////////////////////////////////////////
	// Enum Engine.ETextGender
	/////////////////////////////////////////////
	enum class ETextGender : uint8_t {
		Masculine = 0,
		Feminine = 1,
		Neuter = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFormatArgumentType
	/////////////////////////////////////////////
	enum class EFormatArgumentType : uint8_t {
		Int = 0,
		UInt = 1,
		Float = 2,
		Double = 3,
		Text = 4,
		Gender = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEndPlayReason
	/////////////////////////////////////////////
	enum class EEndPlayReason : uint8_t {
		Destroyed = 0,
		LevelTransition = 1,
		EndPlayInEditor = 2,
		RemovedFromWorld = 3,
		Quit = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETickingGroup
	/////////////////////////////////////////////
	enum class ETickingGroup : uint8_t {
		TG_PrePhysics = 0,
		TG_StartPhysics = 1,
		TG_DuringPhysics = 2,
		TG_EndPhysics = 3,
		TG_PostPhysics = 4,
		TG_PostUpdateWork = 5,
		TG_LastDemotable = 6,
		TG_NewlySpawned = 7,
		TG_MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.EComponentCreationMethod
	/////////////////////////////////////////////
	enum class EComponentCreationMethod : uint8_t {
		Native = 0,
		SimpleConstructionScript = 1,
		UserConstructionScript = 2,
		Instance = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETemperatureSeverityType
	/////////////////////////////////////////////
	enum class ETemperatureSeverityType : uint8_t {
		Unknown = 0,
		Good = 1,
		Bad = 2,
		Serious = 3,
		Critical = 4,
		NumSeverities = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EQuartzCommandQuantization
	/////////////////////////////////////////////
	enum class EQuartzCommandQuantization : uint8_t {
		Bar = 0,
		Beat = 1,
		ThirtySecondNote = 2,
		SixteenthNote = 3,
		EighthNote = 4,
		QuarterNote = 5,
		HalfNote = 6,
		WholeNote = 7,
		DottedSixteenthNote = 8,
		DottedEighthNote = 9,
		DottedQuarterNote = 10,
		DottedHalfNote = 11,
		DottedWholeNote = 12,
		SixteenthNoteTriplet = 13,
		EighthNoteTriplet = 14,
		QuarterNoteTriplet = 15,
		HalfNoteTriplet = 16,
		Tick = 17,
		Count = 18,
		None = 19,
		MAX = 20,
	};
	/////////////////////////////////////////////
	// Enum Engine.EQuartzCommandDelegateSubType
	/////////////////////////////////////////////
	enum class EQuartzCommandDelegateSubType : uint8_t {
		CommandOnFailedToQueue = 0,
		CommandOnQueued = 1,
		CommandOnCanceled = 2,
		CommandOnAboutToStart = 3,
		CommandOnStarted = 4,
		Count = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioComponentPlayState
	/////////////////////////////////////////////
	enum class EAudioComponentPlayState : uint8_t {
		Playing = 0,
		Stopped = 1,
		Paused = 2,
		FadingIn = 3,
		FadingOut = 4,
		Count = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPlaneConstraintAxisSetting
	/////////////////////////////////////////////
	enum class EPlaneConstraintAxisSetting : uint8_t {
		Custom = 0,
		X = 1,
		Y = 2,
		Z = 3,
		UseGlobalPhysicsSetting = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInterpToBehaviourType
	/////////////////////////////////////////////
	enum class EInterpToBehaviourType : uint8_t {
		OneShot = 0,
		OneShot_Reverse = 1,
		Loop_Reset = 2,
		PingPong = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETeleportType
	/////////////////////////////////////////////
	enum class ETeleportType : uint8_t {
		None = 0,
		TeleportPhysics = 1,
		ResetPhysics = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPlatformInterfaceDataType
	/////////////////////////////////////////////
	enum class EPlatformInterfaceDataType : uint8_t {
		PIDT_None = 0,
		PIDT_Int = 1,
		PIDT_Float = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
		PIDT_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMovementMode
	/////////////////////////////////////////////
	enum class EMovementMode : uint8_t {
		MOVE_None = 0,
		MOVE_Walking = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling = 3,
		MOVE_Swimming = 4,
		MOVE_Flying = 5,
		MOVE_Custom = 6,
		MOVE_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENetworkFailure
	/////////////////////////////////////////////
	enum class ENetworkFailure : uint8_t {
		NetDriverAlreadyExists = 0,
		NetDriverCreateFailure = 1,
		NetDriverListenFailure = 2,
		ConnectionLost = 3,
		ConnectionTimeout = 4,
		FailureReceived = 5,
		OutdatedClient = 6,
		OutdatedServer = 7,
		PendingConnectionFailure = 8,
		NetGuidMismatch = 9,
		NetChecksumMismatch = 10,
		MAX = 11,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETravelFailure
	/////////////////////////////////////////////
	enum class ETravelFailure : uint8_t {
		NoLevel = 0,
		LoadMapFailure = 1,
		InvalidURL = 2,
		PackageMissing = 3,
		PackageVersion = 4,
		NoDownload = 5,
		TravelFailure = 6,
		CheatCommands = 7,
		PendingNetGameCreateFailure = 8,
		CloudSaveFailure = 9,
		ServerTravelFailure = 10,
		ClientTravelFailure = 11,
		MAX = 12,
	};
	/////////////////////////////////////////////
	// Enum Engine.EScreenOrientation
	/////////////////////////////////////////////
	enum class EScreenOrientation : uint8_t {
		Unknown = 0,
		Portrait = 1,
		PortraitUpsideDown = 2,
		LandscapeLeft = 3,
		LandscapeRight = 4,
		FaceUp = 5,
		FaceDown = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EApplicationState
	/////////////////////////////////////////////
	enum class EApplicationState : uint8_t {
		Unknown = 0,
		Inactive = 1,
		Background = 2,
		Active = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EObjectTypeQuery
	/////////////////////////////////////////////
	enum class EObjectTypeQuery : uint8_t {
		ObjectTypeQuery1 = 0,
		ObjectTypeQuery2 = 1,
		ObjectTypeQuery3 = 2,
		ObjectTypeQuery4 = 3,
		ObjectTypeQuery5 = 4,
		ObjectTypeQuery6 = 5,
		ObjectTypeQuery7 = 6,
		ObjectTypeQuery8 = 7,
		ObjectTypeQuery9 = 8,
		ObjectTypeQuery10 = 9,
		ObjectTypeQuery11 = 10,
		ObjectTypeQuery12 = 11,
		ObjectTypeQuery13 = 12,
		ObjectTypeQuery14 = 13,
		ObjectTypeQuery15 = 14,
		ObjectTypeQuery16 = 15,
		ObjectTypeQuery17 = 16,
		ObjectTypeQuery18 = 17,
		ObjectTypeQuery19 = 18,
		ObjectTypeQuery20 = 19,
		ObjectTypeQuery21 = 20,
		ObjectTypeQuery22 = 21,
		ObjectTypeQuery23 = 22,
		ObjectTypeQuery24 = 23,
		ObjectTypeQuery25 = 24,
		ObjectTypeQuery26 = 25,
		ObjectTypeQuery27 = 26,
		ObjectTypeQuery28 = 27,
		ObjectTypeQuery29 = 28,
		ObjectTypeQuery30 = 29,
		ObjectTypeQuery31 = 30,
		ObjectTypeQuery32 = 31,
		ObjectTypeQuery_MAX = 32,
		MAX = 33,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDrawDebugTrace
	/////////////////////////////////////////////
	enum class EDrawDebugTrace : uint8_t {
		None = 0,
		ForOneFrame = 1,
		ForDuration = 2,
		Persistent = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETraceTypeQuery
	/////////////////////////////////////////////
	enum class ETraceTypeQuery : uint8_t {
		TraceTypeQuery1 = 0,
		TraceTypeQuery2 = 1,
		TraceTypeQuery3 = 2,
		TraceTypeQuery4 = 3,
		TraceTypeQuery5 = 4,
		TraceTypeQuery6 = 5,
		TraceTypeQuery7 = 6,
		TraceTypeQuery8 = 7,
		TraceTypeQuery9 = 8,
		TraceTypeQuery10 = 9,
		TraceTypeQuery11 = 10,
		TraceTypeQuery12 = 11,
		TraceTypeQuery13 = 12,
		TraceTypeQuery14 = 13,
		TraceTypeQuery15 = 14,
		TraceTypeQuery16 = 15,
		TraceTypeQuery17 = 16,
		TraceTypeQuery18 = 17,
		TraceTypeQuery19 = 18,
		TraceTypeQuery20 = 19,
		TraceTypeQuery21 = 20,
		TraceTypeQuery22 = 21,
		TraceTypeQuery23 = 22,
		TraceTypeQuery24 = 23,
		TraceTypeQuery25 = 24,
		TraceTypeQuery26 = 25,
		TraceTypeQuery27 = 26,
		TraceTypeQuery28 = 27,
		TraceTypeQuery29 = 28,
		TraceTypeQuery30 = 29,
		TraceTypeQuery31 = 30,
		TraceTypeQuery32 = 31,
		TraceTypeQuery_MAX = 32,
		MAX = 33,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMoveComponentAction
	/////////////////////////////////////////////
	enum class EMoveComponentAction : uint8_t {
		Move = 0,
		Stop = 1,
		Return = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EQuitPreference
	/////////////////////////////////////////////
	enum class EQuitPreference : uint8_t {
		Quit = 0,
		Background = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERelativeTransformSpace
	/////////////////////////////////////////////
	enum class ERelativeTransformSpace : uint8_t {
		RTS_World = 0,
		RTS_Actor = 1,
		RTS_Component = 2,
		RTS_ParentBoneSpace = 3,
		RTS_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAttachLocation
	/////////////////////////////////////////////
	enum class EAttachLocation : uint8_t {
		KeepRelativeOffset = 0,
		KeepWorldPosition = 1,
		SnapToTarget = 2,
		SnapToTargetIncludingScale = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAttachmentRule
	/////////////////////////////////////////////
	enum class EAttachmentRule : uint8_t {
		KeepRelative = 0,
		KeepWorld = 1,
		SnapToTarget = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDetachmentRule
	/////////////////////////////////////////////
	enum class EDetachmentRule : uint8_t {
		KeepRelative = 0,
		KeepWorld = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EComponentMobility
	/////////////////////////////////////////////
	enum class EComponentMobility : uint8_t {
		Static = 0,
		Stationary = 1,
		Movable = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDetailMode
	/////////////////////////////////////////////
	enum class EDetailMode : uint8_t {
		DM_Low = 0,
		DM_Medium = 1,
		DM_High = 2,
		DM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMouseLockMode
	/////////////////////////////////////////////
	enum class EMouseLockMode : uint8_t {
		DoNotLock = 0,
		LockOnCapture = 1,
		LockAlways = 2,
		LockInFullscreen = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EWindowTitleBarMode
	/////////////////////////////////////////////
	enum class EWindowTitleBarMode : uint8_t {
		Overlay = 0,
		VerticalBox = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EActorUpdateOverlapsMethod
	/////////////////////////////////////////////
	enum class EActorUpdateOverlapsMethod : uint8_t {
		UseConfigDefault = 0,
		AlwaysUpdate = 1,
		OnlyUpdateMovable = 2,
		NeverUpdate = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAlphaBlendOption
	/////////////////////////////////////////////
	enum class EAlphaBlendOption : uint8_t {
		Linear = 0,
		Cubic = 1,
		HermiteCubic = 2,
		Sinusoidal = 3,
		QuadraticInOut = 4,
		CubicInOut = 5,
		QuarticInOut = 6,
		QuinticInOut = 7,
		CircularIn = 8,
		CircularOut = 9,
		CircularInOut = 10,
		ExpIn = 11,
		ExpOut = 12,
		ExpInOut = 13,
		Custom = 14,
		MAX = 15,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimSyncGroupScope
	/////////////////////////////////////////////
	enum class EAnimSyncGroupScope : uint8_t {
		Local = 0,
		Component = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimGroupRole
	/////////////////////////////////////////////
	enum class EAnimGroupRole : uint8_t {
		CanBeLeader = 0,
		AlwaysFollower = 1,
		AlwaysLeader = 2,
		TransitionLeader = 3,
		TransitionFollower = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
	/////////////////////////////////////////////
	enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
		LinkedLayers = 0,
		LinkedAnimGraph = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.AnimationKeyFormat
	/////////////////////////////////////////////
	enum class EAnimationKeyFormat : uint8_t {
		AKF_ConstantKeyLerp = 0,
		AKF_VariableKeyLerp = 1,
		AKF_PerTrackCompression = 2,
		AKF_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERawCurveTrackTypes
	/////////////////////////////////////////////
	enum class ERawCurveTrackTypes : uint8_t {
		RCT_Float = 0,
		RCT_Vector = 1,
		RCT_Transform = 2,
		RCT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimAssetCurveFlags
	/////////////////////////////////////////////
	enum class EAnimAssetCurveFlags : uint8_t {
		AACF_NONE = 0,
		AACF_DriveMorphTarget_DEPRECATED = 1,
		AACF_DriveAttribute_DEPRECATED = 2,
		AACF_Editable = 3,
		AACF_DriveMaterial_DEPRECATED = 4,
		AACF_Metadata = 5,
		AACF_DriveTrack = 6,
		AACF_Disabled = 7,
		AACF_MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.AnimationCompressionFormat
	/////////////////////////////////////////////
	enum class EAnimationCompressionFormat : uint8_t {
		ACF_None = 0,
		ACF_Float96NoW = 1,
		ACF_Fixed48NoW = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW = 4,
		ACF_Float32NoW = 5,
		ACF_Identity = 6,
		ACF_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAdditiveBasePoseType
	/////////////////////////////////////////////
	enum class EAdditiveBasePoseType : uint8_t {
		ABPT_None = 0,
		ABPT_RefPose = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame = 3,
		ABPT_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERootMotionMode
	/////////////////////////////////////////////
	enum class ERootMotionMode : uint8_t {
		NoRootMotionExtraction = 0,
		IgnoreRootMotion = 1,
		RootMotionFromEverything = 2,
		RootMotionFromMontagesOnly = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERootMotionRootLock
	/////////////////////////////////////////////
	enum class ERootMotionRootLock : uint8_t {
		RefPose = 0,
		AnimFirstFrame = 1,
		Zero = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMontagePlayReturnType
	/////////////////////////////////////////////
	enum class EMontagePlayReturnType : uint8_t {
		MontageLength = 0,
		Duration = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDrawDebugItemType
	/////////////////////////////////////////////
	enum class EDrawDebugItemType : uint8_t {
		DirectionalArrow = 0,
		Sphere = 1,
		Line = 2,
		OnScreenMessage = 3,
		CoordinateSystem = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimLinkMethod
	/////////////////////////////////////////////
	enum class EAnimLinkMethod : uint8_t {
		Absolute = 0,
		Relative = 1,
		Proportional = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMontageSubStepResult
	/////////////////////////////////////////////
	enum class EMontageSubStepResult : uint8_t {
		Moved = 0,
		NotMoved = 1,
		InvalidSection = 2,
		InvalidMontage = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimNotifyEventType
	/////////////////////////////////////////////
	enum class EAnimNotifyEventType : uint8_t {
		Begin = 0,
		End = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInertializationSpace
	/////////////////////////////////////////////
	enum class EInertializationSpace : uint8_t {
		Default = 0,
		WorldSpace = 1,
		WorldRotation = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInertializationBoneState
	/////////////////////////////////////////////
	enum class EInertializationBoneState : uint8_t {
		Invalid = 0,
		Valid = 1,
		Excluded = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInertializationState
	/////////////////////////////////////////////
	enum class EInertializationState : uint8_t {
		Inactive = 0,
		Pending = 1,
		Active = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEvaluatorMode
	/////////////////////////////////////////////
	enum class EEvaluatorMode : uint8_t {
		EM_Standard = 0,
		EM_Freeze = 1,
		EM_DelayedFreeze = 2,
		EM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEvaluatorDataSource
	/////////////////////////////////////////////
	enum class EEvaluatorDataSource : uint8_t {
		EDS_SourcePose = 0,
		EDS_DestinationPose = 1,
		EDS_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPostCopyOperation
	/////////////////////////////////////////////
	enum class EPostCopyOperation : uint8_t {
		None = 0,
		LogicalNegateBool = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPinHidingMode
	/////////////////////////////////////////////
	enum class EPinHidingMode : uint8_t {
		NeverAsPin = 0,
		PinHiddenByDefault = 1,
		PinShownByDefault = 2,
		AlwaysAsPin = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.AnimPhysCollisionType
	/////////////////////////////////////////////
	enum class EAnimPhysCollisionType : uint8_t {
		AnimPhysCollisionType__CoM = 0,
		AnimPhysCollisionType__CustomSphere = 1,
		AnimPhysCollisionType__InnerSphere = 2,
		AnimPhysCollisionType__OuterSphere = 3,
		AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.AnimPhysTwistAxis
	/////////////////////////////////////////////
	enum class EAnimPhysTwistAxis : uint8_t {
		AnimPhysTwistAxis__AxisX = 0,
		AnimPhysTwistAxis__AxisY = 1,
		AnimPhysTwistAxis__AxisZ = 2,
		AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETypeAdvanceAnim
	/////////////////////////////////////////////
	enum class ETypeAdvanceAnim : uint8_t {
		ETAA_Default = 0,
		ETAA_Finished = 1,
		ETAA_Looped = 2,
		ETAA_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETransitionLogicType
	/////////////////////////////////////////////
	enum class ETransitionLogicType : uint8_t {
		TLT_StandardBlend = 0,
		TLT_Inertialization = 1,
		TLT_Custom = 2,
		TLT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETransitionBlendMode
	/////////////////////////////////////////////
	enum class ETransitionBlendMode : uint8_t {
		TBM_Linear = 0,
		TBM_Cubic = 1,
		TBM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EComponentType
	/////////////////////////////////////////////
	enum class EComponentType : uint8_t {
		None = 0,
		TranslationX = 1,
		TranslationY = 2,
		TranslationZ = 3,
		RotationX = 4,
		RotationY = 5,
		RotationZ = 6,
		Scale = 7,
		ScaleX = 8,
		ScaleY = 9,
		ScaleZ = 10,
		MAX = 11,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAxisOption
	/////////////////////////////////////////////
	enum class EAxisOption : uint8_t {
		X = 0,
		Y = 1,
		Z = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		Custom = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimInterpolationType
	/////////////////////////////////////////////
	enum class EAnimInterpolationType : uint8_t {
		Linear = 0,
		Step = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECurveBlendOption
	/////////////////////////////////////////////
	enum class ECurveBlendOption : uint8_t {
		Override = 0,
		DoNotOverride = 1,
		NormalizeByWeight = 2,
		BlendByWeight = 3,
		UseBasePose = 4,
		UseMaxValue = 5,
		UseMinValue = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAdditiveAnimationType
	/////////////////////////////////////////////
	enum class EAdditiveAnimationType : uint8_t {
		AAT_None = 0,
		AAT_LocalSpaceBase = 1,
		AAT_RotationOffsetMeshSpace = 2,
		AAT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENotifyFilterType
	/////////////////////////////////////////////
	enum class ENotifyFilterType : uint8_t {
		NoFiltering = 0,
		LOD = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMontageNotifyTickType
	/////////////////////////////////////////////
	enum class EMontageNotifyTickType : uint8_t {
		Queued = 0,
		BranchingPoint = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneRotationSource
	/////////////////////////////////////////////
	enum class EBoneRotationSource : uint8_t {
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation = 1,
		BRS_CopyFromTarget = 2,
		BRS_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneControlSpace
	/////////////////////////////////////////////
	enum class EBoneControlSpace : uint8_t {
		BCS_WorldSpace = 0,
		BCS_ComponentSpace = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace = 3,
		BCS_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneAxis
	/////////////////////////////////////////////
	enum class EBoneAxis : uint8_t {
		BA_X = 0,
		BA_Y = 1,
		BA_Z = 2,
		BA_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPrimaryAssetCookRule
	/////////////////////////////////////////////
	enum class EPrimaryAssetCookRule : uint8_t {
		Unknown = 0,
		NeverCook = 1,
		DevelopmentCook = 2,
		DevelopmentAlwaysCook = 3,
		AlwaysCook = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENaturalSoundFalloffMode
	/////////////////////////////////////////////
	enum class ENaturalSoundFalloffMode : uint8_t {
		Continues = 0,
		Silent = 1,
		Hold = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAttenuationShape
	/////////////////////////////////////////////
	enum class EAttenuationShape : uint8_t {
		Sphere = 0,
		Capsule = 1,
		Box = 2,
		Cone = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAttenuationDistanceModel
	/////////////////////////////////////////////
	enum class EAttenuationDistanceModel : uint8_t {
		Linear = 0,
		Logarithmic = 1,
		Inverse = 2,
		LogReverse = 3,
		NaturalSound = 4,
		Custom = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioBusChannels
	/////////////////////////////////////////////
	enum class EAudioBusChannels : uint8_t {
		Mono = 0,
		Stereo = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioFaderCurve
	/////////////////////////////////////////////
	enum class EAudioFaderCurve : uint8_t {
		Linear = 0,
		Logarithmic = 1,
		SCurve = 2,
		Sin = 3,
		Count = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioOutputTarget
	/////////////////////////////////////////////
	enum class EAudioOutputTarget : uint8_t {
		Speaker = 0,
		Controller = 1,
		ControllerFallbackToSpeaker = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMonoChannelUpmixMethod
	/////////////////////////////////////////////
	enum class EMonoChannelUpmixMethod : uint8_t {
		Linear = 0,
		EqualPower = 1,
		FullVolume = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPanningMethod
	/////////////////////////////////////////////
	enum class EPanningMethod : uint8_t {
		Linear = 0,
		EqualPower = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVoiceSampleRate
	/////////////////////////////////////////////
	enum class EVoiceSampleRate : uint8_t {
		Low16000Hz = 0,
		Normal24000Hz = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioVolumeLocationState
	/////////////////////////////////////////////
	enum class EAudioVolumeLocationState : uint8_t {
		InsideTheVolume = 0,
		OutsideTheVolume = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlendableLocation
	/////////////////////////////////////////////
	enum class EBlendableLocation : uint8_t {
		BL_AfterTonemapping = 0,
		BL_BeforeTonemapping = 1,
		BL_BeforeTranslucency = 2,
		BL_ReplacingTonemapper = 3,
		BL_SSRInput = 4,
		BL_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENotifyTriggerMode
	/////////////////////////////////////////////
	enum class ENotifyTriggerMode : uint8_t {
		AllAnimations = 0,
		HighestWeightedAnimation = 1,
		None = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlendSpaceAxis
	/////////////////////////////////////////////
	enum class EBlendSpaceAxis : uint8_t {
		BSA_None = 0,
		BSA_X = 1,
		BSA_Y = 2,
		BSA_Max = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlueprintNativizationFlag
	/////////////////////////////////////////////
	enum class EBlueprintNativizationFlag : uint8_t {
		Disabled = 0,
		Dependency = 1,
		ExplicitlyEnabled = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlueprintCompileMode
	/////////////////////////////////////////////
	enum class EBlueprintCompileMode : uint8_t {
		Default = 0,
		Development = 1,
		FinalRelease = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlueprintType
	/////////////////////////////////////////////
	enum class EBlueprintType : uint8_t {
		BPTYPE_Normal = 0,
		BPTYPE_Const = 1,
		BPTYPE_MacroLibrary = 2,
		BPTYPE_Interface = 3,
		BPTYPE_LevelScript = 4,
		BPTYPE_FunctionLibrary = 5,
		BPTYPE_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlueprintStatus
	/////////////////////////////////////////////
	enum class EBlueprintStatus : uint8_t {
		BS_Unknown = 0,
		BS_Dirty = 1,
		BS_Error = 2,
		BS_UpToDate = 3,
		BS_BeingCreated = 4,
		BS_UpToDateWithWarnings = 5,
		BS_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDOFMode
	/////////////////////////////////////////////
	enum class EDOFMode : uint8_t {
		Default = 0,
		SixDOF = 1,
		YZPlane = 2,
		XZPlane = 3,
		XYPlane = 4,
		CustomPlane = 5,
		None = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBrushType
	/////////////////////////////////////////////
	enum class EBrushType : uint8_t {
		Brush_Default = 0,
		Brush_Add = 1,
		Brush_Subtract = 2,
		Brush_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECsgOper
	/////////////////////////////////////////////
	enum class ECsgOper : uint8_t {
		CSG_Active = 0,
		CSG_Add = 1,
		CSG_Subtract = 2,
		CSG_Intersect = 3,
		CSG_Deintersect = 4,
		CSG_None = 5,
		CSG_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECameraShakeDurationType
	/////////////////////////////////////////////
	enum class ECameraShakeDurationType : uint8_t {
		Fixed = 0,
		Infinite = 1,
		Custom = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECameraShakeUpdateResultFlags
	/////////////////////////////////////////////
	enum class ECameraShakeUpdateResultFlags : uint8_t {
		ApplyAsAbsolute = 0,
		SkipAutoScale = 1,
		SkipAutoPlaySpace = 2,
		Default = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECameraShakeAttenuation
	/////////////////////////////////////////////
	enum class ECameraShakeAttenuation : uint8_t {
		Linear = 0,
		Quadratic = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECameraAlphaBlendMode
	/////////////////////////////////////////////
	enum class ECameraAlphaBlendMode : uint8_t {
		CABM_Linear = 0,
		CABM_Cubic = 1,
		CABM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECameraShakePlaySpace
	/////////////////////////////////////////////
	enum class ECameraShakePlaySpace : uint8_t {
		CameraLocal = 0,
		World = 1,
		UserDefined = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECameraProjectionMode
	/////////////////////////////////////////////
	enum class ECameraProjectionMode : uint8_t {
		Perspective = 0,
		Orthographic = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECloudStorageDelegate
	/////////////////////////////////////////////
	enum class ECloudStorageDelegate : uint8_t {
		CSD_KeyValueReadComplete = 0,
		CSD_KeyValueWriteComplete = 1,
		CSD_ValueChanged = 2,
		CSD_DocumentQueryComplete = 3,
		CSD_DocumentReadComplete = 4,
		CSD_DocumentWriteComplete = 5,
		CSD_DocumentConflictDetected = 6,
		CSD_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAngularDriveMode
	/////////////////////////////////////////////
	enum class EAngularDriveMode : uint8_t {
		SLERP = 0,
		TwistAndSwing = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECurveTableMode
	/////////////////////////////////////////////
	enum class ECurveTableMode : uint8_t {
		Empty = 0,
		SimpleCurves = 1,
		RichCurves = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECustomAttributeBlendType
	/////////////////////////////////////////////
	enum class ECustomAttributeBlendType : uint8_t {
		Override = 0,
		Blend = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.FDataDrivenCVarType
	/////////////////////////////////////////////
	enum class EFDataDrivenCVarType : uint8_t {
		FDataDrivenCVarType__CVarFloat = 0,
		FDataDrivenCVarType__CVarInt = 1,
		FDataDrivenCVarType__CVarBool = 2,
		FDataDrivenCVarType__FDataDrivenCVarType_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEvaluateCurveTableResult
	/////////////////////////////////////////////
	enum class EEvaluateCurveTableResult : uint8_t {
		RowFound = 0,
		RowNotFound = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGrammaticalNumber
	/////////////////////////////////////////////
	enum class EGrammaticalNumber : uint8_t {
		Singular = 0,
		Plural = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGrammaticalGender
	/////////////////////////////////////////////
	enum class EGrammaticalGender : uint8_t {
		Neuter = 0,
		Masculine = 1,
		Feminine = 2,
		Mixed = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.DistributionParamMode
	/////////////////////////////////////////////
	enum class EDistributionParamMode : uint8_t {
		DPM_Normal = 0,
		DPM_Abs = 1,
		DPM_Direct = 2,
		DPM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDistributionVectorMirrorFlags
	/////////////////////////////////////////////
	enum class EDistributionVectorMirrorFlags : uint8_t {
		EDVMF_Same = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror = 2,
		EDVMF_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDistributionVectorLockFlags
	/////////////////////////////////////////////
	enum class EDistributionVectorLockFlags : uint8_t {
		EDVLF_None = 0,
		EDVLF_XY = 1,
		EDVLF_XZ = 2,
		EDVLF_YZ = 3,
		EDVLF_XYZ = 4,
		EDVLF_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENodeEnabledState
	/////////////////////////////////////////////
	enum class ENodeEnabledState : uint8_t {
		Enabled = 0,
		Disabled = 1,
		DevelopmentOnly = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENodeAdvancedPins
	/////////////////////////////////////////////
	enum class ENodeAdvancedPins : uint8_t {
		NoPins = 0,
		Shown = 1,
		Hidden = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENodeTitleType
	/////////////////////////////////////////////
	enum class ENodeTitleType : uint8_t {
		FullTitle = 0,
		ListView = 1,
		EditableTitle = 2,
		MenuTitle = 3,
		MAX_TitleTypes = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPinContainerType
	/////////////////////////////////////////////
	enum class EPinContainerType : uint8_t {
		None = 0,
		Array = 1,
		Set = 2,
		Map = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEdGraphPinDirection
	/////////////////////////////////////////////
	enum class EEdGraphPinDirection : uint8_t {
		EGPD_Input = 0,
		EGPD_Output = 1,
		EGPD_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlueprintPinStyleType
	/////////////////////////////////////////////
	enum class EBlueprintPinStyleType : uint8_t {
		BPST_Original = 0,
		BPST_VariantA = 1,
		BPST_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECanCreateConnectionResponse
	/////////////////////////////////////////////
	enum class ECanCreateConnectionResponse : uint8_t {
		CONNECT_RESPONSE_MAKE = 0,
		CONNECT_RESPONSE_DISALLOW = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGraphType
	/////////////////////////////////////////////
	enum class EGraphType : uint8_t {
		GT_Function = 0,
		GT_Ubergraph = 1,
		GT_Macro = 2,
		GT_Animation = 3,
		GT_StateMachine = 4,
		GT_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETransitionType
	/////////////////////////////////////////////
	enum class ETransitionType : uint8_t {
		None = 0,
		Paused = 1,
		Loading = 2,
		Saving = 3,
		Connecting = 4,
		Precaching = 5,
		WaitingToConnect = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFullyLoadPackageType
	/////////////////////////////////////////////
	enum class EFullyLoadPackageType : uint8_t {
		FULLYLOAD_Map = 0,
		FULLYLOAD_Game_PreLoadClass = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always = 3,
		FULLYLOAD_Mutator = 4,
		FULLYLOAD_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EViewModeIndex
	/////////////////////////////////////////////
	enum class EViewModeIndex : uint8_t {
		VMI_BrushWireframe = 0,
		VMI_Wireframe = 1,
		VMI_Unlit = 2,
		VMI_Lit = 3,
		VMI_Lit_DetailLighting = 4,
		VMI_LightingOnly = 5,
		VMI_LightComplexity = 6,
		VMI_ShaderComplexity = 7,
		VMI_LightmapDensity = 8,
		VMI_LitLightmapDensity = 9,
		VMI_ReflectionOverride = 10,
		VMI_VisualizeBuffer = 11,
		VMI_StationaryLightOverlap = 12,
		VMI_CollisionPawn = 13,
		VMI_CollisionVisibility = 14,
		VMI_LODColoration = 15,
		VMI_QuadOverdraw = 16,
		VMI_PrimitiveDistanceAccuracy = 17,
		VMI_MeshUVDensityAccuracy = 18,
		VMI_ShaderComplexityWithQuadOverdraw = 19,
		VMI_HLODColoration = 20,
		VMI_GroupLODColoration = 21,
		VMI_MaterialTextureScaleAccuracy = 22,
		VMI_RequiredTextureResolution = 23,
		VMI_PathTracing = 24,
		VMI_RayTracingDebug = 25,
		VMI_Max = 26,
		VMI_Unknown = 27,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDemoPlayFailure
	/////////////////////////////////////////////
	enum class EDemoPlayFailure : uint8_t {
		Generic = 0,
		DemoNotFound = 1,
		Corrupt = 2,
		InvalidVersion = 3,
		InitBase = 4,
		GameSpecificHeader = 5,
		ReplayStreamerInternal = 6,
		LoadMap = 7,
		Serialization = 8,
		MAX = 9,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETravelType
	/////////////////////////////////////////////
	enum class ETravelType : uint8_t {
		TRAVEL_Absolute = 0,
		TRAVEL_Partial = 1,
		TRAVEL_Relative = 2,
		TRAVEL_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENetworkLagState
	/////////////////////////////////////////////
	enum class ENetworkLagState : uint8_t {
		NotLagging = 0,
		Lagging = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMouseCaptureMode
	/////////////////////////////////////////////
	enum class EMouseCaptureMode : uint8_t {
		NoCapture = 0,
		CapturePermanently = 1,
		CapturePermanently_IncludingInitialMouseDown = 2,
		CaptureDuringMouseDown = 3,
		CaptureDuringRightMouseDown = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInputEvent
	/////////////////////////////////////////////
	enum class EInputEvent : uint8_t {
		IE_Pressed = 0,
		IE_Released = 1,
		IE_Repeat = 2,
		IE_DoubleClick = 3,
		IE_Axis = 4,
		IE_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECustomTimeStepSynchronizationState
	/////////////////////////////////////////////
	enum class ECustomTimeStepSynchronizationState : uint8_t {
		Closed = 0,
		Error = 1,
		Synchronized = 2,
		Synchronizing = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshBufferAccess
	/////////////////////////////////////////////
	enum class EMeshBufferAccess : uint8_t {
		Default = 0,
		ForceCPUAndGPU = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESpawnActorCollisionHandlingMethod
	/////////////////////////////////////////////
	enum class ESpawnActorCollisionHandlingMethod : uint8_t {
		Undefined = 0,
		AlwaysSpawn = 1,
		AdjustIfPossibleButAlwaysSpawn = 2,
		AdjustIfPossibleButDontSpawnIfColliding = 3,
		DontSpawnIfColliding = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EComponentSocketType
	/////////////////////////////////////////////
	enum class EComponentSocketType : uint8_t {
		Invalid = 0,
		Bone = 1,
		Socket = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPhysicalMaterialMaskColor
	/////////////////////////////////////////////
	enum class EPhysicalMaterialMaskColor : uint8_t {
		Red = 0,
		Green = 1,
		Blue = 2,
		Cyan = 3,
		Magenta = 4,
		Yellow = 5,
		White = 6,
		Black = 7,
		MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.EWalkableSlopeBehavior
	/////////////////////////////////////////////
	enum class EWalkableSlopeBehavior : uint8_t {
		WalkableSlope_Default = 0,
		WalkableSlope_Increase = 1,
		WalkableSlope_Decrease = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERotatorQuantization
	/////////////////////////////////////////////
	enum class ERotatorQuantization : uint8_t {
		ByteComponents = 0,
		ShortComponents = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVectorQuantization
	/////////////////////////////////////////////
	enum class EVectorQuantization : uint8_t {
		RoundWholeNumber = 0,
		RoundOneDecimal = 1,
		RoundTwoDecimals = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAutoPossessAI
	/////////////////////////////////////////////
	enum class EAutoPossessAI : uint8_t {
		Disabled = 0,
		PlacedInWorld = 1,
		Spawned = 2,
		PlacedInWorldOrSpawned = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAutoReceiveInput
	/////////////////////////////////////////////
	enum class EAutoReceiveInput : uint8_t {
		Disabled = 0,
		Player0 = 1,
		Player1 = 2,
		Player2 = 3,
		Player3 = 4,
		Player4 = 5,
		Player5 = 6,
		Player6 = 7,
		Player7 = 8,
		MAX = 9,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENetDormancy
	/////////////////////////////////////////////
	enum class ENetDormancy : uint8_t {
		DORM_Never = 0,
		DORM_Awake = 1,
		DORM_DormantAll = 2,
		DORM_DormantPartial = 3,
		DORM_Initial = 4,
		DORM_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENetRole
	/////////////////////////////////////////////
	enum class ENetRole : uint8_t {
		ROLE_None = 0,
		ROLE_SimulatedProxy = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority = 3,
		ROLE_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EUpdateRateShiftBucket
	/////////////////////////////////////////////
	enum class EUpdateRateShiftBucket : uint8_t {
		ShiftBucket0 = 0,
		ShiftBucket1 = 1,
		ShiftBucket2 = 2,
		ShiftBucket3 = 3,
		ShiftBucket4 = 4,
		ShiftBucket5 = 5,
		ShiftBucketMax = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EShadowMapFlags
	/////////////////////////////////////////////
	enum class EShadowMapFlags : uint8_t {
		SMF_None = 0,
		SMF_Streamed = 1,
		SMF_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELightMapPaddingType
	/////////////////////////////////////////////
	enum class ELightMapPaddingType : uint8_t {
		LMPT_NormalPadding = 0,
		LMPT_PrePadding = 1,
		LMPT_NoPadding = 2,
		LMPT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECollisionEnabled
	/////////////////////////////////////////////
	enum class ECollisionEnabled : uint8_t {
		NoCollision = 0,
		QueryOnly = 1,
		PhysicsOnly = 2,
		QueryAndPhysics = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETimelineSigType
	/////////////////////////////////////////////
	enum class ETimelineSigType : uint8_t {
		ETS_EventSignature = 0,
		ETS_FloatSignature = 1,
		ETS_VectorSignature = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature = 4,
		ETS_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFilterInterpolationType
	/////////////////////////////////////////////
	enum class EFilterInterpolationType : uint8_t {
		BSIT_Average = 0,
		BSIT_Linear = 1,
		BSIT_Cubic = 2,
		BSIT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECollisionResponse
	/////////////////////////////////////////////
	enum class ECollisionResponse : uint8_t {
		ECR_Ignore = 0,
		ECR_Overlap = 1,
		ECR_Block = 2,
		ECR_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EOverlapFilterOption
	/////////////////////////////////////////////
	enum class EOverlapFilterOption : uint8_t {
		OverlapFilter_All = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly = 2,
		OverlapFilter_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECollisionChannel
	/////////////////////////////////////////////
	enum class ECollisionChannel : uint8_t {
		ECC_WorldStatic = 0,
		ECC_WorldDynamic = 1,
		ECC_Pawn = 2,
		ECC_Visibility = 3,
		ECC_Camera = 4,
		ECC_PhysicsBody = 5,
		ECC_Vehicle = 6,
		ECC_Destructible = 7,
		ECC_EngineTraceChannel1 = 8,
		ECC_EngineTraceChannel2 = 9,
		ECC_EngineTraceChannel3 = 10,
		ECC_EngineTraceChannel4 = 11,
		ECC_EngineTraceChannel5 = 12,
		ECC_EngineTraceChannel6 = 13,
		ECC_GameTraceChannel1 = 14,
		ECC_GameTraceChannel2 = 15,
		ECC_GameTraceChannel3 = 16,
		ECC_GameTraceChannel4 = 17,
		ECC_GameTraceChannel5 = 18,
		ECC_GameTraceChannel6 = 19,
		ECC_GameTraceChannel7 = 20,
		ECC_GameTraceChannel8 = 21,
		ECC_GameTraceChannel9 = 22,
		ECC_GameTraceChannel10 = 23,
		ECC_GameTraceChannel11 = 24,
		ECC_GameTraceChannel12 = 25,
		ECC_GameTraceChannel13 = 26,
		ECC_GameTraceChannel14 = 27,
		ECC_GameTraceChannel15 = 28,
		ECC_GameTraceChannel16 = 29,
		ECC_GameTraceChannel17 = 30,
		ECC_GameTraceChannel18 = 31,
		ECC_OverlapAll_Deprecated = 32,
		ECC_MAX = 33,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENetworkSmoothingMode
	/////////////////////////////////////////////
	enum class ENetworkSmoothingMode : uint8_t {
		Disabled = 0,
		Linear = 1,
		Exponential = 2,
		Replay = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELightingBuildQuality
	/////////////////////////////////////////////
	enum class ELightingBuildQuality : uint8_t {
		Quality_Preview = 0,
		Quality_Medium = 1,
		Quality_High = 2,
		Quality_Production = 3,
		Quality_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialShadingRate
	/////////////////////////////////////////////
	enum class EMaterialShadingRate : uint8_t {
		MSR_1x1 = 0,
		MSR_2x1 = 1,
		MSR_1x2 = 2,
		MSR_2x2 = 3,
		MSR_4x2 = 4,
		MSR_2x4 = 5,
		MSR_4x4 = 6,
		MSR_Count = 7,
		MSR_MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialStencilCompare
	/////////////////////////////////////////////
	enum class EMaterialStencilCompare : uint8_t {
		MSC_Less = 0,
		MSC_LessEqual = 1,
		MSC_Greater = 2,
		MSC_GreaterEqual = 3,
		MSC_Equal = 4,
		MSC_NotEqual = 5,
		MSC_Never = 6,
		MSC_Always = 7,
		MSC_Count = 8,
		MSC_MAX = 9,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialSamplerType
	/////////////////////////////////////////////
	enum class EMaterialSamplerType : uint8_t {
		SAMPLERTYPE_Color = 0,
		SAMPLERTYPE_Grayscale = 1,
		SAMPLERTYPE_Alpha = 2,
		SAMPLERTYPE_Normal = 3,
		SAMPLERTYPE_Masks = 4,
		SAMPLERTYPE_DistanceFieldFont = 5,
		SAMPLERTYPE_LinearColor = 6,
		SAMPLERTYPE_LinearGrayscale = 7,
		SAMPLERTYPE_Data = 8,
		SAMPLERTYPE_External = 9,
		SAMPLERTYPE_VirtualColor = 10,
		SAMPLERTYPE_VirtualGrayscale = 11,
		SAMPLERTYPE_VirtualAlpha = 12,
		SAMPLERTYPE_VirtualNormal = 13,
		SAMPLERTYPE_VirtualMasks = 14,
		SAMPLERTYPE_VirtualLinearColor = 15,
		SAMPLERTYPE_VirtualLinearGrayscale = 16,
		SAMPLERTYPE_MAX = 17,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialTessellationMode
	/////////////////////////////////////////////
	enum class EMaterialTessellationMode : uint8_t {
		MTM_NoTessellation = 0,
		MTM_FlatTessellation = 1,
		MTM_PNTriangles = 2,
		MTM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialShadingModel
	/////////////////////////////////////////////
	enum class EMaterialShadingModel : uint8_t {
		MSM_Unlit = 0,
		MSM_DefaultLit = 1,
		MSM_Subsurface = 2,
		MSM_PreintegratedSkin = 3,
		MSM_ClearCoat = 4,
		MSM_SubsurfaceProfile = 5,
		MSM_TwoSidedFoliage = 6,
		MSM_Hair = 7,
		MSM_Cloth = 8,
		MSM_Eye = 9,
		MSM_SingleLayerWater = 10,
		MSM_ThinTranslucent = 11,
		MSM_NUM = 12,
		MSM_FromMaterialExpression = 13,
		MSM_MAX = 14,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleCollisionMode
	/////////////////////////////////////////////
	enum class EParticleCollisionMode : uint8_t {
		SceneDepth = 0,
		DistanceField = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETrailWidthMode
	/////////////////////////////////////////////
	enum class ETrailWidthMode : uint8_t {
		FromCentre = 0,
		FromFirst = 1,
		FromSecond = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGBufferFormat
	/////////////////////////////////////////////
	enum class EGBufferFormat : uint8_t {
		Force8BitsPerChannel = 0,
		Default = 1,
		HighPrecisionNormals = 2,
		Force16BitsPerChannel = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESceneCaptureCompositeMode
	/////////////////////////////////////////////
	enum class ESceneCaptureCompositeMode : uint8_t {
		SCCM_Overwrite = 0,
		SCCM_Additive = 1,
		SCCM_Composite = 2,
		SCCM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESceneCaptureSource
	/////////////////////////////////////////////
	enum class ESceneCaptureSource : uint8_t {
		SCS_SceneColorHDR = 0,
		SCS_SceneColorHDRNoAlpha = 1,
		SCS_FinalColorLDR = 2,
		SCS_SceneColorSceneDepth = 3,
		SCS_SceneDepth = 4,
		SCS_DeviceDepth = 5,
		SCS_Normal = 6,
		SCS_BaseColor = 7,
		SCS_FinalColorHDR = 8,
		SCS_FinalToneCurveHDR = 9,
		SCS_MAX = 10,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETranslucentSortPolicy
	/////////////////////////////////////////////
	enum class ETranslucentSortPolicy : uint8_t {
		SortByDistance = 0,
		SortByProjectedZ = 1,
		SortAlongAxis = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERefractionMode
	/////////////////////////////////////////////
	enum class ERefractionMode : uint8_t {
		RM_IndexOfRefraction = 0,
		RM_PixelNormalOffset = 1,
		RM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETranslucencyLightingMode
	/////////////////////////////////////////////
	enum class ETranslucencyLightingMode : uint8_t {
		TLM_VolumetricNonDirectional = 0,
		TLM_VolumetricDirectional = 1,
		TLM_VolumetricPerVertexNonDirectional = 2,
		TLM_VolumetricPerVertexDirectional = 3,
		TLM_Surface = 4,
		TLM_SurfacePerPixelLighting = 5,
		TLM_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESamplerSourceMode
	/////////////////////////////////////////////
	enum class ESamplerSourceMode : uint8_t {
		SSM_FromTextureAsset = 0,
		SSM_Wrap_WorldGroupSettings = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBlendMode
	/////////////////////////////////////////////
	enum class EBlendMode : uint8_t {
		BLEND_Opaque = 0,
		BLEND_Masked = 1,
		BLEND_Translucent = 2,
		BLEND_Additive = 3,
		BLEND_Modulate = 4,
		BLEND_AlphaComposite = 5,
		BLEND_AlphaHoldout = 6,
		BLEND_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EOcclusionCombineMode
	/////////////////////////////////////////////
	enum class EOcclusionCombineMode : uint8_t {
		OCM_Minimum = 0,
		OCM_Multiply = 1,
		OCM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELightmapType
	/////////////////////////////////////////////
	enum class ELightmapType : uint8_t {
		Default = 0,
		ForceSurface = 1,
		ForceVolumetric = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EIndirectLightingCacheQuality
	/////////////////////////////////////////////
	enum class EIndirectLightingCacheQuality : uint8_t {
		ILCQ_Off = 0,
		ILCQ_Point = 1,
		ILCQ_Volume = 2,
		ILCQ_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESceneDepthPriorityGroup
	/////////////////////////////////////////////
	enum class ESceneDepthPriorityGroup : uint8_t {
		SDPG_World = 0,
		SDPG_Foreground = 1,
		SDPG_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAspectRatioAxisConstraint
	/////////////////////////////////////////////
	enum class EAspectRatioAxisConstraint : uint8_t {
		AspectRatio_MaintainYFOV = 0,
		AspectRatio_MaintainXFOV = 1,
		AspectRatio_MajorAxisFOV = 2,
		AspectRatio_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFontCacheType
	/////////////////////////////////////////////
	enum class EFontCacheType : uint8_t {
		Offline = 0,
		Runtime = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFontImportCharacterSet
	/////////////////////////////////////////////
	enum class EFontImportCharacterSet : uint8_t {
		FontICS_Default = 0,
		FontICS_Ansi = 1,
		FontICS_Symbol = 2,
		FontICS_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EStandbyType
	/////////////////////////////////////////////
	enum class EStandbyType : uint8_t {
		STDBY_Rx = 0,
		STDBY_Tx = 1,
		STDBY_BadPing = 2,
		STDBY_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESuggestProjVelocityTraceOption
	/////////////////////////////////////////////
	enum class ESuggestProjVelocityTraceOption : uint8_t {
		DoNotTrace = 0,
		TraceFullPath = 1,
		OnlyTraceWhileAscending = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EWindowMode
	/////////////////////////////////////////////
	enum class EWindowMode : uint8_t {
		Fullscreen = 0,
		WindowedFullscreen = 1,
		Windowed = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EHitProxyPriority
	/////////////////////////////////////////////
	enum class EHitProxyPriority : uint8_t {
		HPP_World = 0,
		HPP_Wireframe = 1,
		HPP_Foreground = 2,
		HPP_UI = 3,
		HPP_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EImportanceWeight
	/////////////////////////////////////////////
	enum class EImportanceWeight : uint8_t {
		Luminance = 0,
		Red = 1,
		Green = 2,
		Blue = 3,
		Alpha = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAdManagerDelegate
	/////////////////////////////////////////////
	enum class EAdManagerDelegate : uint8_t {
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd = 1,
		AMD_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EControllerAnalogStick
	/////////////////////////////////////////////
	enum class EControllerAnalogStick : uint8_t {
		CAS_LeftStick = 0,
		CAS_RightStick = 1,
		CAS_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimAlphaInputType
	/////////////////////////////////////////////
	enum class EAnimAlphaInputType : uint8_t {
		Float = 0,
		Bool = 1,
		Curve = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETrackActiveCondition
	/////////////////////////////////////////////
	enum class ETrackActiveCondition : uint8_t {
		ETAC_Always = 0,
		ETAC_GoreEnabled = 1,
		ETAC_GoreDisabled = 2,
		ETAC_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInterpTrackMoveRotMode
	/////////////////////////////////////////////
	enum class EInterpTrackMoveRotMode : uint8_t {
		IMR_Keyframed = 0,
		IMR_LookAtGroup = 1,
		IMR_Ignore = 2,
		IMR_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EInterpMoveAxis
	/////////////////////////////////////////////
	enum class EInterpMoveAxis : uint8_t {
		AXIS_TranslationX = 0,
		AXIS_TranslationY = 1,
		AXIS_TranslationZ = 2,
		AXIS_RotationX = 3,
		AXIS_RotationY = 4,
		AXIS_RotationZ = 5,
		AXIS_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETrackToggleAction
	/////////////////////////////////////////////
	enum class ETrackToggleAction : uint8_t {
		ETTA_Off = 0,
		ETTA_On = 1,
		ETTA_Toggle = 2,
		ETTA_Trigger = 3,
		ETTA_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVisibilityTrackCondition
	/////////////////////////////////////////////
	enum class EVisibilityTrackCondition : uint8_t {
		EVTC_Always = 0,
		EVTC_GoreEnabled = 1,
		EVTC_GoreDisabled = 2,
		EVTC_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVisibilityTrackAction
	/////////////////////////////////////////////
	enum class EVisibilityTrackAction : uint8_t {
		EVTA_Hide = 0,
		EVTA_Show = 1,
		EVTA_Toggle = 2,
		EVTA_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESlateGesture
	/////////////////////////////////////////////
	enum class ESlateGesture : uint8_t {
		None = 0,
		Scroll = 1,
		Magnify = 2,
		Swipe = 3,
		Rotate = 4,
		LongPress = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMIDCreationFlags
	/////////////////////////////////////////////
	enum class EMIDCreationFlags : uint8_t {
		None = 0,
		Transient = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMatrixColumns
	/////////////////////////////////////////////
	enum class EMatrixColumns : uint8_t {
		First = 0,
		Second = 1,
		Third = 2,
		Fourth = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELerpInterpolationMode
	/////////////////////////////////////////////
	enum class ELerpInterpolationMode : uint8_t {
		QuatInterp = 0,
		EulerInterp = 1,
		DualQuatInterp = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEasingFunc
	/////////////////////////////////////////////
	enum class EEasingFunc : uint8_t {
		Linear = 0,
		Step = 1,
		SinusoidalIn = 2,
		SinusoidalOut = 3,
		SinusoidalInOut = 4,
		EaseIn = 5,
		EaseOut = 6,
		EaseInOut = 7,
		ExpoIn = 8,
		ExpoOut = 9,
		ExpoInOut = 10,
		CircularIn = 11,
		CircularOut = 12,
		CircularInOut = 13,
		MAX = 14,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERoundingMode
	/////////////////////////////////////////////
	enum class ERoundingMode : uint8_t {
		HalfToEven = 0,
		HalfFromZero = 1,
		HalfToZero = 2,
		FromZero = 3,
		ToZero = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EStreamingVolumeUsage
	/////////////////////////////////////////////
	enum class EStreamingVolumeUsage : uint8_t {
		SVB_Loading = 0,
		SVB_LoadingAndVisibility = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad = 3,
		SVB_LoadingNotVisible = 4,
		SVB_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESyncOption
	/////////////////////////////////////////////
	enum class ESyncOption : uint8_t {
		Drive = 0,
		Passive = 1,
		Disabled = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialDecalResponse
	/////////////////////////////////////////////
	enum class EMaterialDecalResponse : uint8_t {
		MDR_None = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color = 2,
		MDR_ColorNormal = 3,
		MDR_ColorRoughness = 4,
		MDR_Normal = 5,
		MDR_NormalRoughness = 6,
		MDR_Roughness = 7,
		MDR_MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDecalBlendMode
	/////////////////////////////////////////////
	enum class EDecalBlendMode : uint8_t {
		DBM_Translucent = 0,
		DBM_Stain = 1,
		DBM_Normal = 2,
		DBM_Emissive = 3,
		DBM_DBuffer_ColorNormalRoughness = 4,
		DBM_DBuffer_Color = 5,
		DBM_DBuffer_ColorNormal = 6,
		DBM_DBuffer_ColorRoughness = 7,
		DBM_DBuffer_Normal = 8,
		DBM_DBuffer_NormalRoughness = 9,
		DBM_DBuffer_Roughness = 10,
		DBM_DBuffer_Emissive = 11,
		DBM_DBuffer_AlphaComposite = 12,
		DBM_DBuffer_EmissiveAlphaComposite = 13,
		DBM_Volumetric_DistanceFunction = 14,
		DBM_AlphaComposite = 15,
		DBM_AmbientOcclusion = 16,
		DBM_MAX = 17,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureColorChannel
	/////////////////////////////////////////////
	enum class ETextureColorChannel : uint8_t {
		TCC_Red = 0,
		TCC_Green = 1,
		TCC_Blue = 2,
		TCC_Alpha = 3,
		TCC_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialAttributeBlend
	/////////////////////////////////////////////
	enum class EMaterialAttributeBlend : uint8_t {
		Blend = 0,
		UseA = 1,
		UseB = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EChannelMaskParameterColor
	/////////////////////////////////////////////
	enum class EChannelMaskParameterColor : uint8_t {
		Red = 0,
		Green = 1,
		Blue = 2,
		Alpha = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EClampMode
	/////////////////////////////////////////////
	enum class EClampMode : uint8_t {
		CMODE_Clamp = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
		CMODE_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECustomMaterialOutputType
	/////////////////////////////////////////////
	enum class ECustomMaterialOutputType : uint8_t {
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MaterialAttributes = 4,
		CMOT_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDepthOfFieldFunctionValue
	/////////////////////////////////////////////
	enum class EDepthOfFieldFunctionValue : uint8_t {
		TDOF_NearAndFarMask = 0,
		TDOF_NearMask = 1,
		TDOF_FarMask = 2,
		TDOF_CircleOfConfusionRadius = 3,
		TDOF_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFunctionInputType
	/////////////////////////////////////////////
	enum class EFunctionInputType : uint8_t {
		FunctionInput_Scalar = 0,
		FunctionInput_Vector2 = 1,
		FunctionInput_Vector3 = 2,
		FunctionInput_Vector4 = 3,
		FunctionInput_Texture2D = 4,
		FunctionInput_TextureCube = 5,
		FunctionInput_Texture2DArray = 6,
		FunctionInput_VolumeTexture = 7,
		FunctionInput_StaticBool = 8,
		FunctionInput_MaterialAttributes = 9,
		FunctionInput_TextureExternal = 10,
		FunctionInput_MAX = 11,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENoiseFunction
	/////////////////////////////////////////////
	enum class ENoiseFunction : uint8_t {
		NOISEFUNCTION_SimplexTex = 0,
		NOISEFUNCTION_GradientTex = 1,
		NOISEFUNCTION_GradientTex3D = 2,
		NOISEFUNCTION_GradientALU = 3,
		NOISEFUNCTION_ValueALU = 4,
		NOISEFUNCTION_VoronoiALU = 5,
		NOISEFUNCTION_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERuntimeVirtualTextureTextureAddressMode
	/////////////////////////////////////////////
	enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t {
		RVTTA_Clamp = 0,
		RVTTA_Wrap = 1,
		RVTTA_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERuntimeVirtualTextureMipValueMode
	/////////////////////////////////////////////
	enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
		RVTMVM_None = 0,
		RVTMVM_MipLevel = 1,
		RVTMVM_MipBias = 2,
		RVTMVM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialSceneAttributeInputMode
	/////////////////////////////////////////////
	enum class EMaterialSceneAttributeInputMode : uint8_t {
		Coordinates = 0,
		OffsetFraction = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESpeedTreeLODType
	/////////////////////////////////////////////
	enum class ESpeedTreeLODType : uint8_t {
		STLOD_Pop = 0,
		STLOD_Smooth = 1,
		STLOD_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESpeedTreeWindType
	/////////////////////////////////////////////
	enum class ESpeedTreeWindType : uint8_t {
		STW_None = 0,
		STW_Fastest = 1,
		STW_Fast = 2,
		STW_Better = 3,
		STW_Best = 4,
		STW_Palm = 5,
		STW_BestPlus = 6,
		STW_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESpeedTreeGeometryType
	/////////////////////////////////////////////
	enum class ESpeedTreeGeometryType : uint8_t {
		STG_Branch = 0,
		STG_Frond = 1,
		STG_Leaf = 2,
		STG_FacingLeaf = 3,
		STG_Billboard = 4,
		STG_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialExposedTextureProperty
	/////////////////////////////////////////////
	enum class EMaterialExposedTextureProperty : uint8_t {
		TMTM_TextureSize = 0,
		TMTM_TexelSize = 1,
		TMTM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureMipValueMode
	/////////////////////////////////////////////
	enum class ETextureMipValueMode : uint8_t {
		TMVM_None = 0,
		TMVM_MipLevel = 1,
		TMVM_MipBias = 2,
		TMVM_Derivative = 3,
		TMVM_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialVectorCoordTransform
	/////////////////////////////////////////////
	enum class EMaterialVectorCoordTransform : uint8_t {
		TRANSFORM_Tangent = 0,
		TRANSFORM_Local = 1,
		TRANSFORM_World = 2,
		TRANSFORM_View = 3,
		TRANSFORM_Camera = 4,
		TRANSFORM_ParticleWorld = 5,
		TRANSFORM_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialVectorCoordTransformSource
	/////////////////////////////////////////////
	enum class EMaterialVectorCoordTransformSource : uint8_t {
		TRANSFORMSOURCE_Tangent = 0,
		TRANSFORMSOURCE_Local = 1,
		TRANSFORMSOURCE_World = 2,
		TRANSFORMSOURCE_View = 3,
		TRANSFORMSOURCE_Camera = 4,
		TRANSFORMSOURCE_ParticleWorld = 5,
		TRANSFORMSOURCE_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialPositionTransformSource
	/////////////////////////////////////////////
	enum class EMaterialPositionTransformSource : uint8_t {
		TRANSFORMPOSSOURCE_Local = 0,
		TRANSFORMPOSSOURCE_World = 1,
		TRANSFORMPOSSOURCE_TranslatedWorld = 2,
		TRANSFORMPOSSOURCE_View = 3,
		TRANSFORMPOSSOURCE_Camera = 4,
		TRANSFORMPOSSOURCE_Particle = 5,
		TRANSFORMPOSSOURCE_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVectorNoiseFunction
	/////////////////////////////////////////////
	enum class EVectorNoiseFunction : uint8_t {
		VNF_CellnoiseALU = 0,
		VNF_VectorALU = 1,
		VNF_GradientALU = 2,
		VNF_CurlALU = 3,
		VNF_VoronoiALU = 4,
		VNF_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialExposedViewProperty
	/////////////////////////////////////////////
	enum class EMaterialExposedViewProperty : uint8_t {
		MEVP_BufferSize = 0,
		MEVP_FieldOfView = 1,
		MEVP_TanHalfFieldOfView = 2,
		MEVP_ViewSize = 3,
		MEVP_WorldSpaceViewPosition = 4,
		MEVP_WorldSpaceCameraPosition = 5,
		MEVP_ViewportOffset = 6,
		MEVP_TemporalSampleCount = 7,
		MEVP_TemporalSampleIndex = 8,
		MEVP_TemporalSampleOffset = 9,
		MEVP_RuntimeVirtualTextureOutputLevel = 10,
		MEVP_RuntimeVirtualTextureOutputDerivative = 11,
		MEVP_PreExposure = 12,
		MEVP_RuntimeVirtualTextureMaxLevel = 13,
		MEVP_MAX = 14,
	};
	/////////////////////////////////////////////
	// Enum Engine.EWorldPositionIncludedOffsets
	/////////////////////////////////////////////
	enum class EWorldPositionIncludedOffsets : uint8_t {
		WPT_Default = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative = 2,
		WPT_CameraRelativeNoOffsets = 3,
		WPT_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialFunctionUsage
	/////////////////////////////////////////////
	enum class EMaterialFunctionUsage : uint8_t {
		Default = 0,
		MaterialLayer = 1,
		MaterialLayerBlend = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialUsage
	/////////////////////////////////////////////
	enum class EMaterialUsage : uint8_t {
		MATUSAGE_SkeletalMesh = 0,
		MATUSAGE_ParticleSprites = 1,
		MATUSAGE_BeamTrails = 2,
		MATUSAGE_MeshParticles = 3,
		MATUSAGE_StaticLighting = 4,
		MATUSAGE_MorphTargets = 5,
		MATUSAGE_SplineMesh = 6,
		MATUSAGE_InstancedStaticMeshes = 7,
		MATUSAGE_GeometryCollections = 8,
		MATUSAGE_Clothing = 9,
		MATUSAGE_NiagaraSprites = 10,
		MATUSAGE_NiagaraRibbons = 11,
		MATUSAGE_NiagaraMeshParticles = 12,
		MATUSAGE_GeometryCache = 13,
		MATUSAGE_Water = 14,
		MATUSAGE_HairStrands = 15,
		MATUSAGE_LidarPointCloud = 16,
		MATUSAGE_VirtualHeightfieldMesh = 17,
		MATUSAGE_MAX = 18,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialLayerLinkState
	/////////////////////////////////////////////
	enum class EMaterialLayerLinkState : uint8_t {
		Uninitialized = 0,
		LinkedToParent = 1,
		UnlinkedFromParent = 2,
		NotFromParent = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialParameterAssociation
	/////////////////////////////////////////////
	enum class EMaterialParameterAssociation : uint8_t {
		LayerParameter = 0,
		BlendParameter = 1,
		GlobalParameter = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialMergeType
	/////////////////////////////////////////////
	enum class EMaterialMergeType : uint8_t {
		MaterialMergeType_Default = 0,
		MaterialMergeType_Simplygon = 1,
		MaterialMergeType_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureSizingType
	/////////////////////////////////////////////
	enum class ETextureSizingType : uint8_t {
		TextureSizingType_UseSingleTextureSize = 0,
		TextureSizingType_UseAutomaticBiasedSizes = 1,
		TextureSizingType_UseManualOverrideTextureSize = 2,
		TextureSizingType_UseSimplygonAutomaticSizing = 3,
		TextureSizingType_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESceneTextureId
	/////////////////////////////////////////////
	enum class ESceneTextureId : uint8_t {
		PPI_SceneColor = 0,
		PPI_SceneDepth = 1,
		PPI_DiffuseColor = 2,
		PPI_SpecularColor = 3,
		PPI_SubsurfaceColor = 4,
		PPI_BaseColor = 5,
		PPI_Specular = 6,
		PPI_Metallic = 7,
		PPI_WorldNormal = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity = 10,
		PPI_Roughness = 11,
		PPI_MaterialAO = 12,
		PPI_CustomDepth = 13,
		PPI_PostProcessInput0 = 14,
		PPI_PostProcessInput1 = 15,
		PPI_PostProcessInput2 = 16,
		PPI_PostProcessInput3 = 17,
		PPI_PostProcessInput4 = 18,
		PPI_PostProcessInput5 = 19,
		PPI_PostProcessInput6 = 20,
		PPI_DecalMask = 21,
		PPI_ShadingModelColor = 22,
		PPI_ShadingModelID = 23,
		PPI_AmbientOcclusion = 24,
		PPI_CustomStencil = 25,
		PPI_StoredBaseColor = 26,
		PPI_StoredSpecular = 27,
		PPI_Velocity = 28,
		PPI_WorldTangent = 29,
		PPI_Anisotropy = 30,
		PPI_MAX = 31,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialDomain
	/////////////////////////////////////////////
	enum class EMaterialDomain : uint8_t {
		MD_Surface = 0,
		MD_DeferredDecal = 1,
		MD_LightFunction = 2,
		MD_Volume = 3,
		MD_PostProcess = 4,
		MD_UI = 5,
		MD_RuntimeVirtualTexture = 6,
		MD_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshInstancingReplacementMethod
	/////////////////////////////////////////////
	enum class EMeshInstancingReplacementMethod : uint8_t {
		RemoveOriginalActors = 0,
		KeepOriginalActorsAsEditorOnly = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EUVOutput
	/////////////////////////////////////////////
	enum class EUVOutput : uint8_t {
		DoNotOutputChannel = 0,
		OutputChannel = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshMergeType
	/////////////////////////////////////////////
	enum class EMeshMergeType : uint8_t {
		MeshMergeType_Default = 0,
		MeshMergeType_MergeActor = 1,
		MeshMergeType_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshLODSelectionType
	/////////////////////////////////////////////
	enum class EMeshLODSelectionType : uint8_t {
		AllLODs = 0,
		SpecificLOD = 1,
		CalculateLOD = 2,
		LowestDetailLOD = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EProxyNormalComputationMethod
	/////////////////////////////////////////////
	enum class EProxyNormalComputationMethod : uint8_t {
		AngleWeighted = 0,
		AreaWeighted = 1,
		EqualWeighted = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELandscapeCullingPrecision
	/////////////////////////////////////////////
	enum class ELandscapeCullingPrecision : uint8_t {
		High = 0,
		Medium = 1,
		Low = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EStaticMeshReductionTerimationCriterion
	/////////////////////////////////////////////
	enum class EStaticMeshReductionTerimationCriterion : uint8_t {
		Triangles = 0,
		Vertices = 1,
		Any = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshFeatureImportance
	/////////////////////////////////////////////
	enum class EMeshFeatureImportance : uint8_t {
		Off = 0,
		Lowest = 1,
		Low = 2,
		Normal = 3,
		High = 4,
		Highest = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVertexPaintAxis
	/////////////////////////////////////////////
	enum class EVertexPaintAxis : uint8_t {
		X = 0,
		Y = 1,
		Z = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMicroTransactionResult
	/////////////////////////////////////////////
	enum class EMicroTransactionResult : uint8_t {
		MTR_Succeeded = 0,
		MTR_Failed = 1,
		MTR_Canceled = 2,
		MTR_RestoredFromServer = 3,
		MTR_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMicroTransactionDelegate
	/////////////////////////////////////////////
	enum class EMicroTransactionDelegate : uint8_t {
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete = 1,
		MTD_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.FNavigationSystemRunMode
	/////////////////////////////////////////////
	enum class EFNavigationSystemRunMode : uint8_t {
		FNavigationSystemRunMode__InvalidMode = 0,
		FNavigationSystemRunMode__GameMode = 1,
		FNavigationSystemRunMode__EditorMode = 2,
		FNavigationSystemRunMode__SimulationMode = 3,
		FNavigationSystemRunMode__PIEMode = 4,
		FNavigationSystemRunMode__InferFromWorldMode = 5,
		FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENavigationQueryResult
	/////////////////////////////////////////////
	enum class ENavigationQueryResult : uint8_t {
		Invalid = 0,
		Error = 1,
		Fail = 2,
		Success = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENavPathEvent
	/////////////////////////////////////////////
	enum class ENavPathEvent : uint8_t {
		Cleared = 0,
		NewPath = 1,
		UpdatedDueToGoalMoved = 2,
		UpdatedDueToNavigationChanged = 3,
		Invalidated = 4,
		RePathFailed = 5,
		MetaPathUpdate = 6,
		Custom = 7,
		MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENavDataGatheringModeConfig
	/////////////////////////////////////////////
	enum class ENavDataGatheringModeConfig : uint8_t {
		Invalid = 0,
		Instant = 1,
		Lazy = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENavDataGatheringMode
	/////////////////////////////////////////////
	enum class ENavDataGatheringMode : uint8_t {
		Default = 0,
		Instant = 1,
		Lazy = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENavigationOptionFlag
	/////////////////////////////////////////////
	enum class ENavigationOptionFlag : uint8_t {
		Default = 0,
		Enable = 1,
		Disable = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENavLinkDirection
	/////////////////////////////////////////////
	enum class ENavLinkDirection : uint8_t {
		BothWays = 0,
		LeftToRight = 1,
		RightToLeft = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFastArraySerializerDeltaFlags
	/////////////////////////////////////////////
	enum class EFastArraySerializerDeltaFlags : uint8_t {
		None = 0,
		HasBeenSerialized = 1,
		HasDeltaBeenRequested = 2,
		IsUsingDeltaSerialization = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEmitterRenderMode
	/////////////////////////////////////////////
	enum class EEmitterRenderMode : uint8_t {
		ERM_Normal = 0,
		ERM_Point = 1,
		ERM_Cross = 2,
		ERM_LightsOnly = 3,
		ERM_None = 4,
		ERM_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSubUVInterpMethod
	/////////////////////////////////////////////
	enum class EParticleSubUVInterpMethod : uint8_t {
		PSUVIM_None = 0,
		PSUVIM_Linear = 1,
		PSUVIM_Linear_Blend = 2,
		PSUVIM_Random = 3,
		PSUVIM_Random_Blend = 4,
		PSUVIM_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleBurstMethod
	/////////////////////////////////////////////
	enum class EParticleBurstMethod : uint8_t {
		EPBM_Instant = 0,
		EPBM_Interpolated = 1,
		EPBM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSystemInsignificanceReaction
	/////////////////////////////////////////////
	enum class EParticleSystemInsignificanceReaction : uint8_t {
		Auto = 0,
		Complete = 1,
		DisableTick = 2,
		DisableTickAndKill = 3,
		Num = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSignificanceLevel
	/////////////////////////////////////////////
	enum class EParticleSignificanceLevel : uint8_t {
		Low = 0,
		Medium = 1,
		High = 2,
		Critical = 3,
		Num = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleDetailMode
	/////////////////////////////////////////////
	enum class EParticleDetailMode : uint8_t {
		PDM_Low = 0,
		PDM_Medium = 1,
		PDM_High = 2,
		PDM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSourceSelectionMethod
	/////////////////////////////////////////////
	enum class EParticleSourceSelectionMethod : uint8_t {
		EPSSM_Random = 0,
		EPSSM_Sequential = 1,
		EPSSM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EModuleType
	/////////////////////////////////////////////
	enum class EModuleType : uint8_t {
		EPMT_General = 0,
		EPMT_TypeData = 1,
		EPMT_Beam = 2,
		EPMT_Trail = 3,
		EPMT_Spawn = 4,
		EPMT_Required = 5,
		EPMT_Event = 6,
		EPMT_Light = 7,
		EPMT_SubUV = 8,
		EPMT_MAX = 9,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAttractorParticleSelectionMethod
	/////////////////////////////////////////////
	enum class EAttractorParticleSelectionMethod : uint8_t {
		EAPSM_Random = 0,
		EAPSM_Sequential = 1,
		EAPSM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.Beam2SourceTargetTangentMethod
	/////////////////////////////////////////////
	enum class EBeam2SourceTargetTangentMethod : uint8_t {
		PEB2STTM_Direct = 0,
		PEB2STTM_UserSet = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter = 3,
		PEB2STTM_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.Beam2SourceTargetMethod
	/////////////////////////////////////////////
	enum class EBeam2SourceTargetMethod : uint8_t {
		PEB2STM_Default = 0,
		PEB2STM_UserSet = 1,
		PEB2STM_Emitter = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor = 4,
		PEB2STM_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.BeamModifierType
	/////////////////////////////////////////////
	enum class EBeamModifierType : uint8_t {
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
		PEB2MT_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleCameraOffsetUpdateMethod
	/////////////////////////////////////////////
	enum class EParticleCameraOffsetUpdateMethod : uint8_t {
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive = 1,
		EPCOUM_Scalar = 2,
		EPCOUM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleCollisionComplete
	/////////////////////////////////////////////
	enum class EParticleCollisionComplete : uint8_t {
		EPCC_Kill = 0,
		EPCC_Freeze = 1,
		EPCC_HaltCollisions = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation = 4,
		EPCC_FreezeMovement = 5,
		EPCC_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleCollisionResponse
	/////////////////////////////////////////////
	enum class EParticleCollisionResponse : uint8_t {
		Bounce = 0,
		Stop = 1,
		Kill = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELocationBoneSocketSelectionMethod
	/////////////////////////////////////////////
	enum class ELocationBoneSocketSelectionMethod : uint8_t {
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random = 1,
		BONESOCKETSEL_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELocationBoneSocketSource
	/////////////////////////////////////////////
	enum class ELocationBoneSocketSource : uint8_t {
		BONESOCKETSOURCE_Bones = 0,
		BONESOCKETSOURCE_Sockets = 1,
		BONESOCKETSOURCE_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELocationEmitterSelectionMethod
	/////////////////////////////////////////////
	enum class ELocationEmitterSelectionMethod : uint8_t {
		ELESM_Random = 0,
		ELESM_Sequential = 1,
		ELESM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.CylinderHeightAxis
	/////////////////////////////////////////////
	enum class ECylinderHeightAxis : uint8_t {
		PMLPC_HEIGHTAXIS_X = 0,
		PMLPC_HEIGHTAXIS_Y = 1,
		PMLPC_HEIGHTAXIS_Z = 2,
		PMLPC_HEIGHTAXIS_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELocationSkelVertSurfaceSource
	/////////////////////////////////////////////
	enum class ELocationSkelVertSurfaceSource : uint8_t {
		VERTSURFACESOURCE_Vert = 0,
		VERTSURFACESOURCE_Surface = 1,
		VERTSURFACESOURCE_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EOrbitChainMode
	/////////////////////////////////////////////
	enum class EOrbitChainMode : uint8_t {
		EOChainMode_Add = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link = 2,
		EOChainMode_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleAxisLock
	/////////////////////////////////////////////
	enum class EParticleAxisLock : uint8_t {
		EPAL_NONE = 0,
		EPAL_X = 1,
		EPAL_Y = 2,
		EPAL_Z = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X = 7,
		EPAL_ROTATE_Y = 8,
		EPAL_ROTATE_Z = 9,
		EPAL_MAX = 10,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEmitterDynamicParameterValue
	/////////////////////////////////////////////
	enum class EEmitterDynamicParameterValue : uint8_t {
		EDPV_UserSet = 0,
		EDPV_AutoSet = 1,
		EDPV_VelocityX = 2,
		EDPV_VelocityY = 3,
		EDPV_VelocityZ = 4,
		EDPV_VelocityMag = 5,
		EDPV_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEmitterNormalsMode
	/////////////////////////////////////////////
	enum class EEmitterNormalsMode : uint8_t {
		ENM_CameraFacing = 0,
		ENM_Spherical = 1,
		ENM_Cylindrical = 2,
		ENM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSortMode
	/////////////////////////////////////////////
	enum class EParticleSortMode : uint8_t {
		PSORTMODE_None = 0,
		PSORTMODE_ViewProjDepth = 1,
		PSORTMODE_DistanceToView = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
		PSORTMODE_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleUVFlipMode
	/////////////////////////////////////////////
	enum class EParticleUVFlipMode : uint8_t {
		None = 0,
		FlipUV = 1,
		FlipUOnly = 2,
		FlipVOnly = 3,
		RandomFlipUV = 4,
		RandomFlipUOnly = 5,
		RandomFlipVOnly = 6,
		RandomFlipUVIndependent = 7,
		MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETrail2SourceMethod
	/////////////////////////////////////////////
	enum class ETrail2SourceMethod : uint8_t {
		PET2SRCM_Default = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor = 2,
		PET2SRCM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBeamTaperMethod
	/////////////////////////////////////////////
	enum class EBeamTaperMethod : uint8_t {
		PEBTM_None = 0,
		PEBTM_Full = 1,
		PEBTM_Partial = 2,
		PEBTM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBeam2Method
	/////////////////////////////////////////////
	enum class EBeam2Method : uint8_t {
		PEB2M_Distance = 0,
		PEB2M_Target = 1,
		PEB2M_Branch = 2,
		PEB2M_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshCameraFacingOptions
	/////////////////////////////////////////////
	enum class EMeshCameraFacingOptions : uint8_t {
		XAxisFacing_NoUp = 0,
		XAxisFacing_ZUp = 1,
		XAxisFacing_NegativeZUp = 2,
		XAxisFacing_YUp = 3,
		XAxisFacing_NegativeYUp = 4,
		LockedAxis_ZAxisFacing = 5,
		LockedAxis_NegativeZAxisFacing = 6,
		LockedAxis_YAxisFacing = 7,
		LockedAxis_NegativeYAxisFacing = 8,
		VelocityAligned_ZAxisFacing = 9,
		VelocityAligned_NegativeZAxisFacing = 10,
		VelocityAligned_YAxisFacing = 11,
		VelocityAligned_NegativeYAxisFacing = 12,
		MAX = 13,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshCameraFacingUpAxis
	/////////////////////////////////////////////
	enum class EMeshCameraFacingUpAxis : uint8_t {
		CameraFacing_NoneUP = 0,
		CameraFacing_ZUp = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp = 3,
		CameraFacing_NegativeYUp = 4,
		CameraFacing_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMeshScreenAlignment
	/////////////////////////////////////////////
	enum class EMeshScreenAlignment : uint8_t {
		PSMA_MeshFaceCameraWithRoll = 0,
		PSMA_MeshFaceCameraWithSpin = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
		PSMA_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETrailsRenderAxisOption
	/////////////////////////////////////////////
	enum class ETrailsRenderAxisOption : uint8_t {
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp = 2,
		Trails_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleScreenAlignment
	/////////////////////////////////////////////
	enum class EParticleScreenAlignment : uint8_t {
		PSA_FacingCameraPosition = 0,
		PSA_Square = 1,
		PSA_Rectangle = 2,
		PSA_Velocity = 3,
		PSA_AwayFromCenter = 4,
		PSA_TypeSpecific = 5,
		PSA_FacingCameraDistanceBlend = 6,
		PSA_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSystemOcclusionBoundsMethod
	/////////////////////////////////////////////
	enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
		EPSOBM_None = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds = 2,
		EPSOBM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ParticleSystemLODMethod
	/////////////////////////////////////////////
	enum class EParticleSystemLODMethod : uint8_t {
		PARTICLESYSTEMLODMETHOD_Automatic = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
		PARTICLESYSTEMLODMETHOD_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSystemUpdateMode
	/////////////////////////////////////////////
	enum class EParticleSystemUpdateMode : uint8_t {
		EPSUM_RealTime = 0,
		EPSUM_FixedTime = 1,
		EPSUM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleEventType
	/////////////////////////////////////////////
	enum class EParticleEventType : uint8_t {
		EPET_Any = 0,
		EPET_Spawn = 1,
		EPET_Death = 2,
		EPET_Collision = 3,
		EPET_Burst = 4,
		EPET_Blueprint = 5,
		EPET_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ParticleReplayState
	/////////////////////////////////////////////
	enum class EParticleReplayState : uint8_t {
		PRS_Disabled = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
		PRS_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EParticleSysParamType
	/////////////////////////////////////////////
	enum class EParticleSysParamType : uint8_t {
		PSPT_None = 0,
		PSPT_Scalar = 1,
		PSPT_ScalarRand = 2,
		PSPT_Vector = 3,
		PSPT_VectorRand = 4,
		PSPT_Color = 5,
		PSPT_Actor = 6,
		PSPT_Material = 7,
		PSPT_VectorUnitRand = 8,
		PSPT_MAX = 9,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPhysicsAssetSolverType
	/////////////////////////////////////////////
	enum class EPhysicsAssetSolverType : uint8_t {
		RBAN = 0,
		World = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESettingsLockedAxis
	/////////////////////////////////////////////
	enum class ESettingsLockedAxis : uint8_t {
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		Invalid = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESettingsDOF
	/////////////////////////////////////////////
	enum class ESettingsDOF : uint8_t {
		Full3D = 0,
		YZPlane = 1,
		XZPlane = 2,
		XYPlane = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EViewTargetBlendFunction
	/////////////////////////////////////////////
	enum class EViewTargetBlendFunction : uint8_t {
		VTBlend_Linear = 0,
		VTBlend_Cubic = 1,
		VTBlend_EaseIn = 2,
		VTBlend_EaseOut = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_PreBlended = 5,
		VTBlend_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDynamicForceFeedbackAction
	/////////////////////////////////////////////
	enum class EDynamicForceFeedbackAction : uint8_t {
		Start = 0,
		Update = 1,
		Stop = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERendererStencilMask
	/////////////////////////////////////////////
	enum class ERendererStencilMask : uint8_t {
		ERSM_Default = 0,
		ERSM_1 = 1,
		ERSM_2 = 2,
		ERSM_3 = 3,
		ERSM_4 = 4,
		ERSM_5 = 5,
		ERSM_6 = 6,
		ERSM_7 = 7,
		ERSM_8 = 8,
		ERSM_9 = 9,
		ERSM_MAX = 10,
	};
	/////////////////////////////////////////////
	// Enum Engine.EHasCustomNavigableGeometry
	/////////////////////////////////////////////
	enum class EHasCustomNavigableGeometry : uint8_t {
		No = 0,
		Yes = 1,
		EvenIfNotCollidable = 2,
		DontExport = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECanBeCharacterBase
	/////////////////////////////////////////////
	enum class ECanBeCharacterBase : uint8_t {
		ECB_No = 0,
		ECB_Yes = 1,
		ECB_Owner = 2,
		ECB_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EQuarztQuantizationReference
	/////////////////////////////////////////////
	enum class EQuarztQuantizationReference : uint8_t {
		BarRelative = 0,
		TransportRelative = 1,
		CurrentTimeRelative = 2,
		Count = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EQuartzDelegateType
	/////////////////////////////////////////////
	enum class EQuartzDelegateType : uint8_t {
		MetronomeTick = 0,
		CommandEvent = 1,
		Count = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EQuartzTimeSignatureQuantization
	/////////////////////////////////////////////
	enum class EQuartzTimeSignatureQuantization : uint8_t {
		HalfNote = 0,
		QuarterNote = 1,
		EighthNote = 2,
		SixteenthNote = 3,
		ThirtySecondNote = 4,
		Count = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERichCurveExtrapolation
	/////////////////////////////////////////////
	enum class ERichCurveExtrapolation : uint8_t {
		RCCE_Cycle = 0,
		RCCE_CycleWithOffset = 1,
		RCCE_Oscillate = 2,
		RCCE_Linear = 3,
		RCCE_Constant = 4,
		RCCE_None = 5,
		RCCE_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERichCurveInterpMode
	/////////////////////////////////////////////
	enum class ERichCurveInterpMode : uint8_t {
		RCIM_Linear = 0,
		RCIM_Constant = 1,
		RCIM_Cubic = 2,
		RCIM_None = 3,
		RCIM_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMobileReflectionCompression
	/////////////////////////////////////////////
	enum class EMobileReflectionCompression : uint8_t {
		Default = 0,
		On = 1,
		Off = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EReflectionSourceType
	/////////////////////////////////////////////
	enum class EReflectionSourceType : uint8_t {
		CapturedScene = 0,
		SpecifiedCubemap = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFixedFoveationLevels
	/////////////////////////////////////////////
	enum class EFixedFoveationLevels : uint8_t {
		Disabled = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDefaultBackBufferPixelFormat
	/////////////////////////////////////////////
	enum class EDefaultBackBufferPixelFormat : uint8_t {
		DBBPF_B8G8R8A8 = 0,
		DBBPF_A16B16G16R16_DEPRECATED = 1,
		DBBPF_FloatRGB_DEPRECATED = 2,
		DBBPF_FloatRGBA = 3,
		DBBPF_A2B10G10R10 = 4,
		DBBPF_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAutoExposureMethodUI
	/////////////////////////////////////////////
	enum class EAutoExposureMethodUI : uint8_t {
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
		AEM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAlphaChannelMode
	/////////////////////////////////////////////
	enum class EAlphaChannelMode : uint8_t {
		Disabled = 0,
		LinearColorSpaceOnly = 1,
		AllowThroughTonemapper = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EEarlyZPass
	/////////////////////////////////////////////
	enum class EEarlyZPass : uint8_t {
		None = 0,
		OpaqueOnly = 1,
		OpaqueAndMasked = 2,
		Auto = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECustomDepthStencil
	/////////////////////////////////////////////
	enum class ECustomDepthStencil : uint8_t {
		Disabled = 0,
		Enabled = 1,
		EnabledOnDemand = 2,
		EnabledWithStencil = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMobileMSAASampleCount
	/////////////////////////////////////////////
	enum class EMobileMSAASampleCount : uint8_t {
		One = 0,
		Two = 1,
		Four = 2,
		Eight = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECompositingSampleCount
	/////////////////////////////////////////////
	enum class ECompositingSampleCount : uint8_t {
		One = 0,
		Two = 1,
		Four = 2,
		Eight = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EClearSceneOptions
	/////////////////////////////////////////////
	enum class EClearSceneOptions : uint8_t {
		NoClear = 0,
		HardwareClear = 1,
		QuadAtMaxZ = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EReporterLineStyle
	/////////////////////////////////////////////
	enum class EReporterLineStyle : uint8_t {
		Line = 0,
		Dash = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELegendPosition
	/////////////////////////////////////////////
	enum class ELegendPosition : uint8_t {
		Outside = 0,
		Inside = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGraphDataStyle
	/////////////////////////////////////////////
	enum class EGraphDataStyle : uint8_t {
		Lines = 0,
		Filled = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGraphAxisStyle
	/////////////////////////////////////////////
	enum class EGraphAxisStyle : uint8_t {
		Lines = 0,
		Notches = 1,
		Grid = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ReverbPreset
	/////////////////////////////////////////////
	enum class EReverbPreset : uint8_t {
		REVERB_Default = 0,
		REVERB_Bathroom = 1,
		REVERB_StoneRoom = 2,
		REVERB_Auditorium = 3,
		REVERB_ConcertHall = 4,
		REVERB_Cave = 5,
		REVERB_Hallway = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley = 8,
		REVERB_Forest = 9,
		REVERB_City = 10,
		REVERB_Mountains = 11,
		REVERB_Quarry = 12,
		REVERB_Plain = 13,
		REVERB_ParkingLot = 14,
		REVERB_SewerPipe = 15,
		REVERB_Underwater = 16,
		REVERB_SmallRoom = 17,
		REVERB_MediumRoom = 18,
		REVERB_LargeRoom = 19,
		REVERB_MediumHall = 20,
		REVERB_LargeHall = 21,
		REVERB_Plate = 22,
		REVERB_MAX = 23,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERichCurveKeyTimeCompressionFormat
	/////////////////////////////////////////////
	enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
		RCKTCF_uint16 = 0,
		RCKTCF_float32 = 1,
		RCKTCF_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERichCurveCompressionFormat
	/////////////////////////////////////////////
	enum class ERichCurveCompressionFormat : uint8_t {
		RCCF_Empty = 0,
		RCCF_Constant = 1,
		RCCF_Linear = 2,
		RCCF_Cubic = 3,
		RCCF_Mixed = 4,
		RCCF_Weighted = 5,
		RCCF_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERichCurveTangentWeightMode
	/////////////////////////////////////////////
	enum class ERichCurveTangentWeightMode : uint8_t {
		RCTWM_WeightedNone = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave = 2,
		RCTWM_WeightedBoth = 3,
		RCTWM_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERichCurveTangentMode
	/////////////////////////////////////////////
	enum class ERichCurveTangentMode : uint8_t {
		RCTM_Auto = 0,
		RCTM_User = 1,
		RCTM_Break = 2,
		RCTM_None = 3,
		RCTM_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EConstraintTransform
	/////////////////////////////////////////////
	enum class EConstraintTransform : uint8_t {
		Absolute = 0,
		Relative = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EControlConstraint
	/////////////////////////////////////////////
	enum class EControlConstraint : uint8_t {
		Orientation = 0,
		Translation = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERootMotionFinishVelocityMode
	/////////////////////////////////////////////
	enum class ERootMotionFinishVelocityMode : uint8_t {
		MaintainLastRootMotionVelocity = 0,
		SetVelocity = 1,
		ClampVelocity = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERootMotionSourceSettingsFlags
	/////////////////////////////////////////////
	enum class ERootMotionSourceSettingsFlags : uint8_t {
		UseSensitiveLiftoffCheck = 0,
		DisablePartialEndTick = 1,
		IgnoreZAccumulate = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERootMotionSourceStatusFlags
	/////////////////////////////////////////////
	enum class ERootMotionSourceStatusFlags : uint8_t {
		Prepared = 0,
		Finished = 1,
		MarkedForRemoval = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERootMotionAccumulateMode
	/////////////////////////////////////////////
	enum class ERootMotionAccumulateMode : uint8_t {
		Override = 0,
		Additive = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERuntimeVirtualTextureMainPassType
	/////////////////////////////////////////////
	enum class ERuntimeVirtualTextureMainPassType : uint8_t {
		Never = 0,
		Exclusive = 1,
		Always = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERuntimeVirtualTextureMaterialType
	/////////////////////////////////////////////
	enum class ERuntimeVirtualTextureMaterialType : uint8_t {
		BaseColor = 0,
		BaseColor_Normal_DEPRECATED = 1,
		BaseColor_Normal_Specular = 2,
		BaseColor_Normal_Specular_YCoCg = 3,
		BaseColor_Normal_Specular_Mask_YCoCg = 4,
		WorldHeight = 5,
		Count = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMobilePixelProjectedReflectionQuality
	/////////////////////////////////////////////
	enum class EMobilePixelProjectedReflectionQuality : uint8_t {
		Disabled = 0,
		BestPerformance = 1,
		BetterQuality = 2,
		BestQuality = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMobilePlanarReflectionMode
	/////////////////////////////////////////////
	enum class EMobilePlanarReflectionMode : uint8_t {
		Usual = 0,
		MobilePPRExclusive = 1,
		MobilePPR = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EReflectedAndRefractedRayTracedShadows
	/////////////////////////////////////////////
	enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
		Disabled = 0,
		Hard_shadows = 1,
		Area_shadows = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERayTracingGlobalIlluminationType
	/////////////////////////////////////////////
	enum class ERayTracingGlobalIlluminationType : uint8_t {
		Disabled = 0,
		BruteForce = 1,
		FinalGather = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETranslucencyType
	/////////////////////////////////////////////
	enum class ETranslucencyType : uint8_t {
		Raster = 0,
		RayTracing = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EReflectionsType
	/////////////////////////////////////////////
	enum class EReflectionsType : uint8_t {
		ScreenSpace = 0,
		RayTracing = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ELightUnits
	/////////////////////////////////////////////
	enum class ELightUnits : uint8_t {
		Unitless = 0,
		Candelas = 1,
		Lumens = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETemperatureMethod
	/////////////////////////////////////////////
	enum class ETemperatureMethod : uint8_t {
		TEMP_WhiteBalance = 0,
		TEMP_ColorTemperature = 1,
		TEMP_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBloomMethod
	/////////////////////////////////////////////
	enum class EBloomMethod : uint8_t {
		BM_SOG = 0,
		BM_FFT = 1,
		BM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAutoExposureMethod
	/////////////////////////////////////////////
	enum class EAutoExposureMethod : uint8_t {
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
		AEM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAntiAliasingMethod
	/////////////////////////////////////////////
	enum class EAntiAliasingMethod : uint8_t {
		AAM_None = 0,
		AAM_FXAA = 1,
		AAM_TemporalAA = 2,
		AAM_MSAA = 3,
		AAM_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDepthOfFieldMethod
	/////////////////////////////////////////////
	enum class EDepthOfFieldMethod : uint8_t {
		DOFM_BokehDOF = 0,
		DOFM_Gaussian = 1,
		DOFM_CircleDOF = 2,
		DOFM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESceneCapturePrimitiveRenderMode
	/////////////////////////////////////////////
	enum class ESceneCapturePrimitiveRenderMode : uint8_t {
		PRM_LegacySceneCapture = 0,
		PRM_RenderScenePrimitives = 1,
		PRM_UseShowOnlyList = 2,
		PRM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaterialProperty
	/////////////////////////////////////////////
	enum class EMaterialProperty : uint8_t {
		MP_EmissiveColor = 0,
		MP_Opacity = 1,
		MP_OpacityMask = 2,
		MP_DiffuseColor = 3,
		MP_SpecularColor = 4,
		MP_BaseColor = 5,
		MP_Metallic = 6,
		MP_Specular = 7,
		MP_Roughness = 8,
		MP_Anisotropy = 9,
		MP_Normal = 10,
		MP_Tangent = 11,
		MP_WorldPositionOffset = 12,
		MP_WorldDisplacement = 13,
		MP_TessellationMultiplier = 14,
		MP_SubsurfaceColor = 15,
		MP_CustomData0 = 16,
		MP_CustomData1 = 17,
		MP_AmbientOcclusion = 18,
		MP_Refraction = 19,
		MP_CustomizedUVs0 = 20,
		MP_CustomizedUVs1 = 21,
		MP_CustomizedUVs2 = 22,
		MP_CustomizedUVs3 = 23,
		MP_CustomizedUVs4 = 24,
		MP_CustomizedUVs5 = 25,
		MP_CustomizedUVs6 = 26,
		MP_CustomizedUVs7 = 27,
		MP_PixelDepthOffset = 28,
		MP_ShadingModel = 29,
		MP_MaterialAttributes = 30,
		MP_CustomOutput = 31,
		MP_MAX = 32,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESkinCacheDefaultBehavior
	/////////////////////////////////////////////
	enum class ESkinCacheDefaultBehavior : uint8_t {
		Exclusive = 0,
		Inclusive = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESkinCacheUsage
	/////////////////////////////////////////////
	enum class ESkinCacheUsage : uint8_t {
		Auto = 0,
		Disabled = 1,
		Enabled = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPhysicsTransformUpdateMode
	/////////////////////////////////////////////
	enum class EPhysicsTransformUpdateMode : uint8_t {
		SimulationUpatesComponentTransform = 0,
		ComponentTransformIsKinematic = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimationMode
	/////////////////////////////////////////////
	enum class EAnimationMode : uint8_t {
		AnimationBlueprint = 0,
		AnimationSingleNode = 1,
		AnimationCustomMode = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EKinematicBonesUpdateToPhysics
	/////////////////////////////////////////////
	enum class EKinematicBonesUpdateToPhysics : uint8_t {
		SkipSimulatingBones = 0,
		SkipAllBones = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECustomBoneAttributeLookup
	/////////////////////////////////////////////
	enum class ECustomBoneAttributeLookup : uint8_t {
		BoneOnly = 0,
		ImmediateParent = 1,
		ParentHierarchy = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAnimCurveType
	/////////////////////////////////////////////
	enum class EAnimCurveType : uint8_t {
		AttributeCurve = 0,
		MaterialCurve = 1,
		MorphTargetCurve = 2,
		MaxAnimCurveType = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESkeletalMeshSkinningImportVersions
	/////////////////////////////////////////////
	enum class ESkeletalMeshSkinningImportVersions : uint8_t {
		Before_Versionning = 0,
		SkeletalMeshBuildRefactor = 1,
		VersionPlusOne = 2,
		LatestVersion = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESkeletalMeshGeoImportVersions
	/////////////////////////////////////////////
	enum class ESkeletalMeshGeoImportVersions : uint8_t {
		Before_Versionning = 0,
		SkeletalMeshBuildRefactor = 1,
		VersionPlusOne = 2,
		LatestVersion = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneFilterActionOption
	/////////////////////////////////////////////
	enum class EBoneFilterActionOption : uint8_t {
		Remove = 0,
		Keep = 1,
		Invalid = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.SkeletalMeshOptimizationImportance
	/////////////////////////////////////////////
	enum class ESkeletalMeshOptimizationImportance : uint8_t {
		SMOI_Off = 0,
		SMOI_Lowest = 1,
		SMOI_Low = 2,
		SMOI_Normal = 3,
		SMOI_High = 4,
		SMOI_Highest = 5,
		SMOI_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.SkeletalMeshOptimizationType
	/////////////////////////////////////////////
	enum class ESkeletalMeshOptimizationType : uint8_t {
		SMOT_NumOfTriangles = 0,
		SMOT_MaxDeviation = 1,
		SMOT_TriangleOrDeviation = 2,
		SMOT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.SkeletalMeshTerminationCriterion
	/////////////////////////////////////////////
	enum class ESkeletalMeshTerminationCriterion : uint8_t {
		SMTC_NumOfTriangles = 0,
		SMTC_NumOfVerts = 1,
		SMTC_TriangleOrVert = 2,
		SMTC_AbsNumOfTriangles = 3,
		SMTC_AbsNumOfVerts = 4,
		SMTC_AbsTriangleOrVert = 5,
		SMTC_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneTranslationRetargetingMode
	/////////////////////////////////////////////
	enum class EBoneTranslationRetargetingMode : uint8_t {
		Animation = 0,
		Skeleton = 1,
		AnimationScaled = 2,
		AnimationRelative = 3,
		OrientAndScale = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVertexOffsetUsageType
	/////////////////////////////////////////////
	enum class EVertexOffsetUsageType : uint8_t {
		None = 0,
		PreSkinningOffset = 1,
		PostSkinningOffset = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneSpaces
	/////////////////////////////////////////////
	enum class EBoneSpaces : uint8_t {
		WorldSpace = 0,
		ComponentSpace = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVisibilityBasedAnimTickOption
	/////////////////////////////////////////////
	enum class EVisibilityBasedAnimTickOption : uint8_t {
		AlwaysTickPoseAndRefreshBones = 0,
		AlwaysTickPose = 1,
		OnlyTickMontagesWhenNotRendered = 2,
		OnlyTickPoseWhenRendered = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPhysBodyOp
	/////////////////////////////////////////////
	enum class EPhysBodyOp : uint8_t {
		PBO_None = 0,
		PBO_Term = 1,
		PBO_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EBoneVisibilityStatus
	/////////////////////////////////////////////
	enum class EBoneVisibilityStatus : uint8_t {
		BVS_HiddenByParent = 0,
		BVS_Visible = 1,
		BVS_ExplicitlyHidden = 2,
		BVS_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESkyAtmosphereTransformMode
	/////////////////////////////////////////////
	enum class ESkyAtmosphereTransformMode : uint8_t {
		PlanetTopAtAbsoluteWorldOrigin = 0,
		PlanetTopAtComponentTransform = 1,
		PlanetCenterAtComponentTransform = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESkyLightSourceType
	/////////////////////////////////////////////
	enum class ESkyLightSourceType : uint8_t {
		SLS_CapturedScene = 0,
		SLS_SpecifiedCubemap = 1,
		SLS_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPriorityAttenuationMethod
	/////////////////////////////////////////////
	enum class EPriorityAttenuationMethod : uint8_t {
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESubmixSendMethod
	/////////////////////////////////////////////
	enum class ESubmixSendMethod : uint8_t {
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EReverbSendMethod
	/////////////////////////////////////////////
	enum class EReverbSendMethod : uint8_t {
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAirAbsorptionMethod
	/////////////////////////////////////////////
	enum class EAirAbsorptionMethod : uint8_t {
		Linear = 0,
		CustomCurve = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESoundSpatializationAlgorithm
	/////////////////////////////////////////////
	enum class ESoundSpatializationAlgorithm : uint8_t {
		SPATIALIZATION_Default = 0,
		SPATIALIZATION_HRTF = 1,
		SPATIALIZATION_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESoundDistanceCalc
	/////////////////////////////////////////////
	enum class ESoundDistanceCalc : uint8_t {
		SOUNDDISTANCE_Normal = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
		SOUNDDISTANCE_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVirtualizationMode
	/////////////////////////////////////////////
	enum class EVirtualizationMode : uint8_t {
		Disabled = 0,
		PlayWhenSilent = 1,
		Restart = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EConcurrencyVolumeScaleMode
	/////////////////////////////////////////////
	enum class EConcurrencyVolumeScaleMode : uint8_t {
		Default = 0,
		Distance = 1,
		Priority = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EMaxConcurrentResolutionRule
	/////////////////////////////////////////////
	enum class EMaxConcurrentResolutionRule : uint8_t {
		PreventNew = 0,
		StopOldest = 1,
		StopFarthestThenPreventNew = 2,
		StopFarthestThenOldest = 3,
		StopLowestPriority = 4,
		StopQuietest = 5,
		StopLowestPriorityThenPreventNew = 6,
		Count = 7,
		MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESoundGroup
	/////////////////////////////////////////////
	enum class ESoundGroup : uint8_t {
		SOUNDGROUP_Default = 0,
		SOUNDGROUP_Effects = 1,
		SOUNDGROUP_UI = 2,
		SOUNDGROUP_Music = 3,
		SOUNDGROUP_Voice = 4,
		SOUNDGROUP_GameSoundGroup1 = 5,
		SOUNDGROUP_GameSoundGroup2 = 6,
		SOUNDGROUP_GameSoundGroup3 = 7,
		SOUNDGROUP_GameSoundGroup4 = 8,
		SOUNDGROUP_GameSoundGroup5 = 9,
		SOUNDGROUP_GameSoundGroup6 = 10,
		SOUNDGROUP_GameSoundGroup7 = 11,
		SOUNDGROUP_GameSoundGroup8 = 12,
		SOUNDGROUP_GameSoundGroup9 = 13,
		SOUNDGROUP_GameSoundGroup10 = 14,
		SOUNDGROUP_GameSoundGroup11 = 15,
		SOUNDGROUP_GameSoundGroup12 = 16,
		SOUNDGROUP_GameSoundGroup13 = 17,
		SOUNDGROUP_GameSoundGroup14 = 18,
		SOUNDGROUP_GameSoundGroup15 = 19,
		SOUNDGROUP_GameSoundGroup16 = 20,
		SOUNDGROUP_GameSoundGroup17 = 21,
		SOUNDGROUP_GameSoundGroup18 = 22,
		SOUNDGROUP_GameSoundGroup19 = 23,
		SOUNDGROUP_GameSoundGroup20 = 24,
		SOUNDGROUP_MAX = 25,
	};
	/////////////////////////////////////////////
	// Enum Engine.EModulationRouting
	/////////////////////////////////////////////
	enum class EModulationRouting : uint8_t {
		Disable = 0,
		Inherit = 1,
		Override = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ModulationParamMode
	/////////////////////////////////////////////
	enum class EModulationParamMode : uint8_t {
		MPM_Normal = 0,
		MPM_Abs = 1,
		MPM_Direct = 2,
		MPM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESourceBusChannels
	/////////////////////////////////////////////
	enum class ESourceBusChannels : uint8_t {
		Mono = 0,
		Stereo = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESourceBusSendLevelControlMethod
	/////////////////////////////////////////////
	enum class ESourceBusSendLevelControlMethod : uint8_t {
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EGainParamMode
	/////////////////////////////////////////////
	enum class EGainParamMode : uint8_t {
		Linear = 0,
		Decibels = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioSpectrumType
	/////////////////////////////////////////////
	enum class EAudioSpectrumType : uint8_t {
		MagnitudeSpectrum = 0,
		PowerSpectrum = 1,
		Decibel = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFFTWindowType
	/////////////////////////////////////////////
	enum class EFFTWindowType : uint8_t {
		None = 0,
		Hamming = 1,
		Hann = 2,
		Blackman = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFFTPeakInterpolationMethod
	/////////////////////////////////////////////
	enum class EFFTPeakInterpolationMethod : uint8_t {
		NearestNeighbor = 0,
		Linear = 1,
		Quadratic = 2,
		ConstantQ = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EFFTSize
	/////////////////////////////////////////////
	enum class EFFTSize : uint8_t {
		DefaultSize = 0,
		Min = 1,
		Small = 2,
		Medium = 3,
		Large = 4,
		VeryLarge = 5,
		Max = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESubmixSendStage
	/////////////////////////////////////////////
	enum class ESubmixSendStage : uint8_t {
		PostDistanceAttenuation = 0,
		PreDistanceAttenuation = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESendLevelControlMethod
	/////////////////////////////////////////////
	enum class ESendLevelControlMethod : uint8_t {
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioRecordingExportType
	/////////////////////////////////////////////
	enum class EAudioRecordingExportType : uint8_t {
		SoundWave = 0,
		WavFile = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EAudioSpectrumBandPresetType
	/////////////////////////////////////////////
	enum class EAudioSpectrumBandPresetType : uint8_t {
		KickDrum = 0,
		SnareDrum = 1,
		Voice = 2,
		Cymbals = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESoundWaveFFTSize
	/////////////////////////////////////////////
	enum class ESoundWaveFFTSize : uint8_t {
		VerySmall = 0,
		Small = 1,
		Medium = 2,
		Large = 3,
		VeryLarge = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EDecompressionType
	/////////////////////////////////////////////
	enum class EDecompressionType : uint8_t {
		DTYPE_Setup = 0,
		DTYPE_Invalid = 1,
		DTYPE_Preview = 2,
		DTYPE_Native = 3,
		DTYPE_RealTime = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon = 6,
		DTYPE_Streaming = 7,
		DTYPE_MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESoundWaveLoadingBehavior
	/////////////////////////////////////////////
	enum class ESoundWaveLoadingBehavior : uint8_t {
		Inherited = 0,
		RetainOnLoad = 1,
		PrimeOnLoad = 2,
		LoadOnDemand = 3,
		ForceInline = 4,
		Uninitialized = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESplineCoordinateSpace
	/////////////////////////////////////////////
	enum class ESplineCoordinateSpace : uint8_t {
		Local = 0,
		World = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESplinePointType
	/////////////////////////////////////////////
	enum class ESplinePointType : uint8_t {
		Linear = 0,
		Curve = 1,
		Constant = 2,
		CurveClamped = 3,
		CurveCustomTangent = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESplineMeshAxis
	/////////////////////////////////////////////
	enum class ESplineMeshAxis : uint8_t {
		X = 0,
		Y = 1,
		Z = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EOptimizationType
	/////////////////////////////////////////////
	enum class EOptimizationType : uint8_t {
		OT_NumOfTriangles = 0,
		OT_MaxDeviation = 1,
		OT_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EImportanceLevel
	/////////////////////////////////////////////
	enum class EImportanceLevel : uint8_t {
		IL_Off = 0,
		IL_Lowest = 1,
		IL_Low = 2,
		IL_Normal = 3,
		IL_High = 4,
		IL_Highest = 5,
		TEMP_BROKEN2 = 6,
		MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.ENormalMode
	/////////////////////////////////////////////
	enum class ENormalMode : uint8_t {
		NM_PreserveSmoothingGroups = 0,
		NM_RecalculateNormals = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard = 3,
		TEMP_BROKEN = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EStereoLayerShape
	/////////////////////////////////////////////
	enum class EStereoLayerShape : uint8_t {
		SLSH_QuadLayer = 0,
		SLSH_CylinderLayer = 1,
		SLSH_CubemapLayer = 2,
		SLSH_EquirectLayer = 3,
		SLSH_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EStereoLayerType
	/////////////////////////////////////////////
	enum class EStereoLayerType : uint8_t {
		SLT_WorldLocked = 0,
		SLT_TrackerLocked = 1,
		SLT_FaceLocked = 2,
		SLT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EOpacitySourceMode
	/////////////////////////////////////////////
	enum class EOpacitySourceMode : uint8_t {
		OSM_Alpha = 0,
		OSM_ColorBrightness = 1,
		OSM_RedChannel = 2,
		OSM_GreenChannel = 3,
		OSM_BlueChannel = 4,
		OSM_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ESubUVBoundingVertexCount
	/////////////////////////////////////////////
	enum class ESubUVBoundingVertexCount : uint8_t {
		BVC_FourVertices = 0,
		BVC_EightVertices = 1,
		BVC_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVerticalTextAligment
	/////////////////////////////////////////////
	enum class EVerticalTextAligment : uint8_t {
		EVRTA_TextTop = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop = 3,
		EVRTA_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EHorizTextAligment
	/////////////////////////////////////////////
	enum class EHorizTextAligment : uint8_t {
		EHTA_Left = 0,
		EHTA_Center = 1,
		EHTA_Right = 2,
		EHTA_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureCompressionQuality
	/////////////////////////////////////////////
	enum class ETextureCompressionQuality : uint8_t {
		TCQ_Default = 0,
		TCQ_Lowest = 1,
		TCQ_Low = 2,
		TCQ_Medium = 3,
		TCQ_High = 4,
		TCQ_Highest = 5,
		TCQ_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureSourceFormat
	/////////////////////////////////////////////
	enum class ETextureSourceFormat : uint8_t {
		TSF_Invalid = 0,
		TSF_G8 = 1,
		TSF_BGRA8 = 2,
		TSF_BGRE8 = 3,
		TSF_RGBA16 = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8 = 6,
		TSF_RGBE8 = 7,
		TSF_G16 = 8,
		TSF_MAX = 9,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureSourceArtType
	/////////////////////////////////////////////
	enum class ETextureSourceArtType : uint8_t {
		TSAT_Uncompressed = 0,
		TSAT_PNGCompressed = 1,
		TSAT_DDSFile = 2,
		TSAT_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureMipCount
	/////////////////////////////////////////////
	enum class ETextureMipCount : uint8_t {
		TMC_ResidentMips = 0,
		TMC_AllMips = 1,
		TMC_AllMipsBiased = 2,
		TMC_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ECompositeTextureMode
	/////////////////////////////////////////////
	enum class ECompositeTextureMode : uint8_t {
		CTM_Disabled = 0,
		CTM_NormalRoughnessToRed = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue = 3,
		CTM_NormalRoughnessToAlpha = 4,
		CTM_MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.TextureAddress
	/////////////////////////////////////////////
	enum class ETextureAddress : uint8_t {
		TA_Wrap = 0,
		TA_Clamp = 1,
		TA_Mirror = 2,
		TA_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.TextureFilter
	/////////////////////////////////////////////
	enum class ETextureFilter : uint8_t {
		TF_Nearest = 0,
		TF_Bilinear = 1,
		TF_Trilinear = 2,
		TF_Default = 3,
		TF_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.TextureCompressionSettings
	/////////////////////////////////////////////
	enum class ETextureCompressionSettings : uint8_t {
		TC_Default = 0,
		TC_Normalmap = 1,
		TC_Masks = 2,
		TC_Grayscale = 3,
		TC_Displacementmap = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR = 6,
		TC_EditorIcon = 7,
		TC_Alpha = 8,
		TC_DistanceFieldFont = 9,
		TC_HDR_Compressed = 10,
		TC_BC7 = 11,
		TC_HalfFloat = 12,
		TC_EncodedReflectionCapture = 13,
		TC_MAX = 14,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureLossyCompressionAmount
	/////////////////////////////////////////////
	enum class ETextureLossyCompressionAmount : uint8_t {
		TLCA_Default = 0,
		TLCA_None = 1,
		TLCA_Lowest = 2,
		TLCA_Low = 3,
		TLCA_Medium = 4,
		TLCA_High = 5,
		TLCA_Highest = 6,
		TLCA_MAX = 7,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureDownscaleOptions
	/////////////////////////////////////////////
	enum class ETextureDownscaleOptions : uint8_t {
		Default = 0,
		Unfiltered = 1,
		SimpleAverage = 2,
		Sharpen0 = 3,
		Sharpen1 = 4,
		Sharpen2 = 5,
		Sharpen3 = 6,
		Sharpen4 = 7,
		Sharpen5 = 8,
		Sharpen6 = 9,
		Sharpen7 = 10,
		Sharpen8 = 11,
		Sharpen9 = 12,
		Sharpen10 = 13,
		MAX = 14,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureMipLoadOptions
	/////////////////////////////////////////////
	enum class ETextureMipLoadOptions : uint8_t {
		Default = 0,
		AllMips = 1,
		OnlyFirstMip = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureSamplerFilter
	/////////////////////////////////////////////
	enum class ETextureSamplerFilter : uint8_t {
		Point = 0,
		Bilinear = 1,
		Trilinear = 2,
		AnisotropicPoint = 3,
		AnisotropicLinear = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETexturePowerOfTwoSetting
	/////////////////////////////////////////////
	enum class ETexturePowerOfTwoSetting : uint8_t {
		None = 0,
		PadToPowerOfTwo = 1,
		PadToSquarePowerOfTwo = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.TextureMipGenSettings
	/////////////////////////////////////////////
	enum class ETextureMipGenSettings : uint8_t {
		TMGS_FromTextureGroup = 0,
		TMGS_SimpleAverage = 1,
		TMGS_Sharpen0 = 2,
		TMGS_Sharpen1 = 3,
		TMGS_Sharpen2 = 4,
		TMGS_Sharpen3 = 5,
		TMGS_Sharpen4 = 6,
		TMGS_Sharpen5 = 7,
		TMGS_Sharpen6 = 8,
		TMGS_Sharpen7 = 9,
		TMGS_Sharpen8 = 10,
		TMGS_Sharpen9 = 11,
		TMGS_Sharpen10 = 12,
		TMGS_NoMipmaps = 13,
		TMGS_LeaveExistingMips = 14,
		TMGS_Blur1 = 15,
		TMGS_Blur2 = 16,
		TMGS_Blur3 = 17,
		TMGS_Blur4 = 18,
		TMGS_Blur5 = 19,
		TMGS_Unfiltered = 20,
		TMGS_MAX = 21,
	};
	/////////////////////////////////////////////
	// Enum Engine.TextureGroup
	/////////////////////////////////////////////
	enum class ETextureGroup : uint8_t {
		TEXTUREGROUP_World = 0,
		TEXTUREGROUP_WorldNormalMap = 1,
		TEXTUREGROUP_WorldSpecular = 2,
		TEXTUREGROUP_Character = 3,
		TEXTUREGROUP_CharacterNormalMap = 4,
		TEXTUREGROUP_CharacterSpecular = 5,
		TEXTUREGROUP_Weapon = 6,
		TEXTUREGROUP_WeaponNormalMap = 7,
		TEXTUREGROUP_WeaponSpecular = 8,
		TEXTUREGROUP_Vehicle = 9,
		TEXTUREGROUP_VehicleNormalMap = 10,
		TEXTUREGROUP_VehicleSpecular = 11,
		TEXTUREGROUP_Cinematic = 12,
		TEXTUREGROUP_Effects = 13,
		TEXTUREGROUP_EffectsNotFiltered = 14,
		TEXTUREGROUP_Skybox = 15,
		TEXTUREGROUP_UI = 16,
		TEXTUREGROUP_Lightmap = 17,
		TEXTUREGROUP_RenderTarget = 18,
		TEXTUREGROUP_MobileFlattened = 19,
		TEXTUREGROUP_ProcBuilding_Face = 20,
		TEXTUREGROUP_ProcBuilding_LightMap = 21,
		TEXTUREGROUP_Shadowmap = 22,
		TEXTUREGROUP_ColorLookupTable = 23,
		TEXTUREGROUP_Terrain_Heightmap = 24,
		TEXTUREGROUP_Terrain_Weightmap = 25,
		TEXTUREGROUP_Bokeh = 26,
		TEXTUREGROUP_IESLightProfile = 27,
		TEXTUREGROUP_Pixels2D = 28,
		TEXTUREGROUP_HierarchicalLOD = 29,
		TEXTUREGROUP_Impostor = 30,
		TEXTUREGROUP_ImpostorNormalDepth = 31,
		TEXTUREGROUP_8BitData = 32,
		TEXTUREGROUP_16BitData = 33,
		TEXTUREGROUP_Project01 = 34,
		TEXTUREGROUP_Project02 = 35,
		TEXTUREGROUP_Project03 = 36,
		TEXTUREGROUP_Project04 = 37,
		TEXTUREGROUP_Project05 = 38,
		TEXTUREGROUP_Project06 = 39,
		TEXTUREGROUP_Project07 = 40,
		TEXTUREGROUP_Project08 = 41,
		TEXTUREGROUP_Project09 = 42,
		TEXTUREGROUP_Project10 = 43,
		TEXTUREGROUP_Project11 = 44,
		TEXTUREGROUP_Project12 = 45,
		TEXTUREGROUP_Project13 = 46,
		TEXTUREGROUP_Project14 = 47,
		TEXTUREGROUP_Project15 = 48,
		TEXTUREGROUP_MAX = 49,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETextureRenderTargetFormat
	/////////////////////////////////////////////
	enum class ETextureRenderTargetFormat : uint8_t {
		RTF_R8 = 0,
		RTF_RG8 = 1,
		RTF_RGBA8 = 2,
		RTF_RGBA8_SRGB = 3,
		RTF_R16f = 4,
		RTF_RG16f = 5,
		RTF_RGBA16f = 6,
		RTF_R32f = 7,
		RTF_RG32f = 8,
		RTF_RGBA32f = 9,
		RTF_RGB10A2 = 10,
		RTF_MAX = 11,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETimecodeProviderSynchronizationState
	/////////////////////////////////////////////
	enum class ETimecodeProviderSynchronizationState : uint8_t {
		Closed = 0,
		Error = 1,
		Synchronized = 2,
		Synchronizing = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETimelineDirection
	/////////////////////////////////////////////
	enum class ETimelineDirection : uint8_t {
		Forward = 0,
		Backward = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETimelineLengthMode
	/////////////////////////////////////////////
	enum class ETimelineLengthMode : uint8_t {
		TL_TimelineLength = 0,
		TL_LastKeyFrame = 1,
		TL_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETimeStretchCurveMapping
	/////////////////////////////////////////////
	enum class ETimeStretchCurveMapping : uint8_t {
		T_Original = 0,
		T_TargetMin = 1,
		T_TargetMax = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETwitterIntegrationDelegate
	/////////////////////////////////////////////
	enum class ETwitterIntegrationDelegate : uint8_t {
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete = 1,
		TID_RequestComplete = 2,
		TID_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.ETwitterRequestMethod
	/////////////////////////////////////////////
	enum class ETwitterRequestMethod : uint8_t {
		TRM_Get = 0,
		TRM_Post = 1,
		TRM_Delete = 2,
		TRM_MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum Engine.EUserDefinedStructureStatus
	/////////////////////////////////////////////
	enum class EUserDefinedStructureStatus : uint8_t {
		UDSS_UpToDate = 0,
		UDSS_Dirty = 1,
		UDSS_Error = 2,
		UDSS_Duplicate = 3,
		UDSS_MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EUIScalingRule
	/////////////////////////////////////////////
	enum class EUIScalingRule : uint8_t {
		ShortestSide = 0,
		LongestSide = 1,
		Horizontal = 2,
		Vertical = 3,
		ScaleToFit = 4,
		Custom = 5,
		MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum Engine.ERenderFocusRule
	/////////////////////////////////////////////
	enum class ERenderFocusRule : uint8_t {
		Always = 0,
		NonPointer = 1,
		NavigationOnly = 2,
		Never = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVectorFieldConstructionOp
	/////////////////////////////////////////////
	enum class EVectorFieldConstructionOp : uint8_t {
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
		VFCO_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EWindSourceType
	/////////////////////////////////////////////
	enum class EWindSourceType : uint8_t {
		Directional = 0,
		Point = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EPSCPoolMethod
	/////////////////////////////////////////////
	enum class EPSCPoolMethod : uint8_t {
		None = 0,
		AutoRelease = 1,
		ManualRelease = 2,
		ManualRelease_OnComplete = 3,
		FreeInPool = 4,
		MAX = 5,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVolumeLightingMethod
	/////////////////////////////////////////////
	enum class EVolumeLightingMethod : uint8_t {
		VLM_VolumetricLightmap = 0,
		VLM_SparseVolumeLightingSamples = 1,
		VLM_MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum Engine.EVisibilityAggressiveness
	/////////////////////////////////////////////
	enum class EVisibilityAggressiveness : uint8_t {
		VIS_LeastAggressive = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive = 2,
		VIS_Max = 3,
	};
#pragma endregion

#pragma region Structs
	struct FDistributionLookupTable;
	struct FRawDistribution;
	struct FFloatDistribution;
	struct FVectorDistribution;
	struct FVector4Distribution;
	struct FFloatRK4SpringInterpolator;
	struct FVectorRK4SpringInterpolator;
	struct FFormatArgumentData;
	struct FExpressionInput;
	struct FMaterialAttributesInput;
	struct FExpressionOutput;
	struct FMaterialInput;
	struct FColorMaterialInput;
	struct FScalarMaterialInput;
	struct FShadingModelMaterialInput;
	struct FVectorMaterialInput;
	struct FVector2MaterialInput;
	struct FVector_NetQuantize;
	struct FVector_NetQuantizeNormal;
	struct FHitResult;
	struct FBranchingPointNotifyPayload;
	struct FSimpleMemberReference;
	struct FTickFunction;
	struct FActorComponentTickFunction;
	struct FSubtitleCue;
	struct FInterpControlPoint;
	struct FPlatformInterfaceData;
	struct FPlatformInterfaceDelegateResult;
	struct FDebugFloatHistory;
	struct FLatentActionInfo;
	struct FTimerHandle;
	struct FCollisionProfileName;
	struct FGenericStruct;
	struct FUserActivity;
	struct FWalkableSlopeOverride;
	struct FCollisionResponseContainer;
	struct FCollisionResponse;
	struct FBodyInstance;
	struct FResponseChannel;
	struct FCustomPrimitiveData;
	struct FLightingChannels;
	struct FUniqueNetIdRepl;
	struct FAnimNode_Base;
	struct FInputRange;
	struct FInputScaleBiasClamp;
	struct FAlphaBlend;
	struct FInputAlphaBoolBlend;
	struct FInputScaleBias;
	struct FPoseLinkBase;
	struct FComponentSpacePoseLink;
	struct FKeyHandleMap;
	struct FIndexedCurve;
	struct FRealCurve;
	struct FRichCurve;
	struct FRuntimeFloatCurve;
	struct FRichCurveKey;
	struct FBoneReference;
	struct FSingleAnimationPlayData;
	struct FAnimNode_AssetPlayerBase;
	struct FKeyHandleLookupTable;
	struct FPerPlatformFloat;
	struct FPerPlatformInt;
	struct FPerPlatformBool;
	struct FAnimInstanceProxy;
	struct FTableRowBase;
	struct FSoundModulationDestinationSettings;
	struct FPoseLink;
	struct FPerBoneBlendWeight;
	struct FInputBlendPose;
	struct FBranchFilter;
	struct FPoseSnapshot;
	struct FAnimNode_Root;
	struct FAnimCurveParam;
	struct FActorComponentDuplicatedObjectData;
	struct FActorComponentInstanceData;
	struct FSceneComponentInstanceData;
	struct FVector_NetQuantize100;
	struct FRepAttachment;
	struct FRepMovement;
	struct FActorTickFunction;
	struct FDirectoryPath;
	struct FKAggregateGeom;
	struct FKShapeElem;
	struct FKTaperedCapsuleElem;
	struct FKConvexElem;
	struct FKSphylElem;
	struct FKBoxElem;
	struct FKSphereElem;
	struct FAnimationGroupReference;
	struct FRootMotionMovementParams;
	struct FAnimGroupInstance;
	struct FAnimTickRecord;
	struct FMarkerSyncAnimPosition;
	struct FBlendFilter;
	struct FBlendSampleData;
	struct FAnimationRecordingSettings;
	struct FComponentSpacePose;
	struct FLocalSpacePose;
	struct FNamedTransform;
	struct FNamedColor;
	struct FNamedVector;
	struct FNamedFloat;
	struct FAnimParentNodeAssetOverride;
	struct FAnimGroupInfo;
	struct FAnimBlueprintDebugData;
	struct FAnimationFrameSnapshot;
	struct FStateMachineDebugData;
	struct FStateMachineStateDebugData;
	struct FAnimBlueprintFunctionData;
	struct FAnimGraphBlendOptions;
	struct FGraphAssetPlayerInformation;
	struct FCachedPoseIndices;
	struct FAnimBlueprintFunction;
	struct FAnimTrack;
	struct FAnimSegment;
	struct FRootMotionExtractionStep;
	struct FAnimationErrorStats;
	struct FRawCurveTracks;
	struct FSmartName;
	struct FAnimCurveBase;
	struct FFloatCurve;
	struct FVectorCurve;
	struct FTransformCurve;
	struct FSlotEvaluationPose;
	struct FA2Pose;
	struct FA2CSPose;
	struct FQueuedDrawDebugItem;
	struct FAnimInstanceSubsystemData;
	struct FAnimLinkableElement;
	struct FAnimMontageInstance;
	struct FAnimNotifyEvent;
	struct FBranchingPointMarker;
	struct FBranchingPoint;
	struct FSlotAnimationTrack;
	struct FCompositeSection;
	struct FAnimNode_ApplyMeshSpaceAdditive;
	struct FAnimNode_CustomProperty;
	struct FAnimNode_Inertialization;
	struct FInertializationPoseDiff;
	struct FInertializationCurveDiff;
	struct FInertializationBoneDiff;
	struct FInertializationPose;
	struct FAnimNode_LinkedAnimGraph;
	struct FAnimNode_LinkedAnimLayer;
	struct FAnimNode_LinkedInputPose;
	struct FAnimNode_SaveCachedPose;
	struct FAnimNode_SequencePlayer;
	struct FAnimNode_StateMachine;
	struct FAnimationPotentialTransition;
	struct FAnimationActiveTransitionEntry;
	struct FAnimNode_TransitionPoseEvaluator;
	struct FAnimNode_TransitionResult;
	struct FAnimNode_UseCachedPose;
	struct FExposedValueHandler;
	struct FExposedValueCopyRecord;
	struct FAnimNode_ConvertLocalToComponentSpace;
	struct FAnimNode_ConvertComponentToLocalSpace;
	struct FAnimNotifyQueue;
	struct FAnimNotifyArray;
	struct FAnimNotifyEventReference;
	struct FCompressedTrack;
	struct FCurveTrack;
	struct FScaleTrack;
	struct FRotationTrack;
	struct FTranslationTrack;
	struct FAnimSequenceTrackContainer;
	struct FRawAnimSequenceTrack;
	struct FAnimSetMeshLinkup;
	struct FAnimSingleNodeInstanceProxy;
	struct FAnimNode_SingleNode;
	struct FBakedAnimationStateMachine;
	struct FAnimationStateBase;
	struct FAnimationTransitionBetweenStates;
	struct FBakedAnimationState;
	struct FBakedStateExitTransition;
	struct FAnimationState;
	struct FAnimationTransitionRule;
	struct FTrackToSkeletonMap;
	struct FMarkerSyncData;
	struct FAnimSyncMarker;
	struct FAnimNotifyTrack;
	struct FPerBoneBlendWeights;
	struct FAssetImportInfo;
	struct FPrimaryAssetRules;
	struct FPrimaryAssetRulesCustomOverride;
	struct FPrimaryAssetRulesOverride;
	struct FAssetManagerRedirect;
	struct FAssetManagerSearchRules;
	struct FPrimaryAssetTypeInfo;
	struct FAssetMapping;
	struct FAtmospherePrecomputeInstanceData;
	struct FAtmospherePrecomputeParameters;
	struct FBaseAttenuationSettings;
	struct FAudioComponentParam;
	struct FAudioEffectParameters;
	struct FAudioReverbEffect;
	struct FDefaultAudioBusSettings;
	struct FSoundDebugEntry;
	struct FAudioQualitySettings;
	struct FInteriorSettings;
	struct FAudioVolumeSubmixOverrideSettings;
	struct FAudioVolumeSubmixSendSettings;
	struct FSoundSubmixSendInfo;
	struct FFilePath;
	struct FLaunchOnTestSettings;
	struct FEditorMapPerformanceTestDefinition;
	struct FEditorImportWorkflowDefinition;
	struct FBuildPromotionImportWorkflowSettings;
	struct FBuildPromotionOpenAssetSettings;
	struct FBuildPromotionNewProjectSettings;
	struct FBuildPromotionTestSettings;
	struct FImportFactorySettingValues;
	struct FBlueprintEditorPromotionSettings;
	struct FParticleEditorPromotionSettings;
	struct FMaterialEditorPromotionSettings;
	struct FEditorImportExportTestDefinition;
	struct FExternalToolDefinition;
	struct FNavAvoidanceData;
	struct FBandwidthTestGenerator;
	struct FBandwidthTestItem;
	struct FBlendProfileBoneEntry;
	struct FPerBoneInterpolation;
	struct FEditorElement;
	struct FGridBlendSample;
	struct FBlendSample;
	struct FBlendParameter;
	struct FInterpolationParameter;
	struct FBPEditorBookmarkNode;
	struct FEditedDocumentInfo;
	struct FBPInterfaceDescription;
	struct FEdGraphTerminalType;
	struct FEdGraphPinType;
	struct FBPVariableDescription;
	struct FBPVariableMetaDataEntry;
	struct FBlueprintMacroCosmeticInfo;
	struct FCompilerNativizationOptions;
	struct FBPComponentClassOverride;
	struct FBlueprintCookedComponentInstancingData;
	struct FBlueprintComponentChangedPropertyInfo;
	struct FEventGraphFastCallPair;
	struct FBlueprintDebugData;
	struct FPointerToUberGraphFrame;
	struct FDebuggingInfoForSingleFunction;
	struct FNodeToCodeAssociation;
	struct FAnimCurveType;
	struct FBookmarkBaseJumpToSettings;
	struct FBookmarkJumpToSettings;
	struct FBookmark2DJumpToSettings;
	struct FGeomSelection;
	struct FBuilderPoly;
	struct FCachedAnimTransitionData;
	struct FCachedAnimRelevancyData;
	struct FCachedAnimAssetPlayerData;
	struct FCachedAnimStateArray;
	struct FCachedAnimStateData;
	struct FActiveCameraShakeInfo;
	struct FPooledCameraShakes;
	struct FCameraShakeDuration;
	struct FCameraShakeInfo;
	struct FCameraShakeStopParams;
	struct FCameraShakeUpdateResult;
	struct FWeightedBlendables;
	struct FPostProcessSettings;
	struct FMinimalViewInfo;
	struct FCameraShakeScrubParams;
	struct FWeightedBlendable;
	struct FCameraShakeUpdateParams;
	struct FCameraShakeStartParams;
	struct FDummySpacerCameraTypes;
	struct FCanvasIcon;
	struct FWrappedStringElement;
	struct FTextSizingParameters;
	struct FBasedMovementInfo;
	struct FRootMotionSourceSettings;
	struct FVector_NetQuantize10;
	struct FRootMotionSourceGroup;
	struct FRepRootMotionMontage;
	struct FSimulatedRootMotionReplicatedMove;
	struct FCharacterMovementComponentPostPhysicsTickFunction;
	struct FFindFloorResult;
	struct FCharacterNetworkSerializationPackedBits;
	struct FCharacterMoveResponsePackedBits;
	struct FCharacterServerMovePackedBits;
	struct FChildActorComponentInstanceData;
	struct FChildActorAttachedActorInfo;
	struct FCustomProfile;
	struct FCustomChannelSetup;
	struct FCollisionResponseTemplate;
	struct FBlueprintComponentDelegateBinding;
	struct FMeshUVChannelInfo;
	struct FAutoCompleteNode;
	struct FConstraintDrive;
	struct FAngularDriveConstraint;
	struct FLinearDriveConstraint;
	struct FConstraintInstanceBase;
	struct FConstraintBaseParams;
	struct FLinearConstraint;
	struct FConeConstraint;
	struct FTwistConstraint;
	struct FConstraintProfileProperties;
	struct FConstraintInstance;
	struct FCullDistanceSizePair;
	struct FRuntimeCurveLinearColor;
	struct FCurveAtlasColorAdjustments;
	struct FNamedCurveValue;
	struct FCurveTableRowHandle;
	struct FBakedCustomAttributePerBoneData;
	struct FSimpleCurve;
	struct FBakedFloatCustomAttribute;
	struct FSimpleCurveKey;
	struct FIntegralCurve;
	struct FBakedIntegerCustomAttribute;
	struct FIntegralKey;
	struct FStringCurve;
	struct FBakedStringCustomAttribute;
	struct FStringCurveKey;
	struct FCustomAttributePerBoneData;
	struct FCustomAttribute;
	struct FCustomAttributeSetting;
	struct FDataDrivenConsoleVariable;
	struct FDataTableCategoryHandle;
	struct FDataTableRowHandle;
	struct FDebugCameraControllerSettingsViewModeIndex;
	struct FDebugDisplayProperty;
	struct FDebugTextInfo;
	struct FMulticastRecordOptions;
	struct FRollbackNetStartupActorInfo;
	struct FDialogueContext;
	struct FDialogueWaveParameter;
	struct FDialogueContextMapping;
	struct FRawDistributionFloat;
	struct FRawDistributionVector;
	struct FGraphReference;
	struct FEdGraphPinReference;
	struct FEdGraphSchemaAction;
	struct FEdGraphSchemaAction_NewNode;
	struct FPluginRedirect;
	struct FStructRedirect;
	struct FClassRedirect;
	struct FGameNameRedirect;
	struct FScreenMessageString;
	struct FDropNoteInfo;
	struct FStatColorMapping;
	struct FStatColorMapEntry;
	struct FURL;
	struct FWorldContext;
	struct FNamedNetDriver;
	struct FLevelStreamingStatus;
	struct FFullyLoadedPackagesInfo;
	struct FNetDriverDefinition;
	struct FExposureSettings;
	struct FTickPrerequisite;
	struct FCanvasUVTri;
	struct FDepthFieldGlowInfo;
	struct FFontRenderInfo;
	struct FRedirector;
	struct FCollectionReference;
	struct FComponentReference;
	struct FConstrainComponentPropName;
	struct FDamageEvent;
	struct FRadialDamageParams;
	struct FRadialDamageEvent;
	struct FPointDamageEvent;
	struct FSkeletalMeshBuildSettings;
	struct FMeshBuildSettings;
	struct FPOV;
	struct FAnimUpdateRateParameters;
	struct FAnimSlotDesc;
	struct FAnimSlotInfo;
	struct FMTDResult;
	struct FOverlapResult;
	struct FPrimitiveMaterialRef;
	struct FSwarmDebugOptions;
	struct FLightmassDebugOptions;
	struct FLightmassPrimitiveSettings;
	struct FLightmassLightSettings;
	struct FLightmassDirectionalLightSettings;
	struct FLightmassPointLightSettings;
	struct FBasedPosition;
	struct FFractureEffect;
	struct FCollisionImpactData;
	struct FRigidBodyContactInfo;
	struct FRigidBodyErrorCorrection;
	struct FRigidBodyState;
	struct FMaterialShadingModelField;
	struct FExponentialHeightFogData;
	struct FFontCharacter;
	struct FFontImportOptionsData;
	struct FForceFeedbackAttenuationSettings;
	struct FActiveForceFeedbackEffect;
	struct FForceFeedbackParameters;
	struct FForceFeedbackChannelDetails;
	struct FPredictProjectilePathPointData;
	struct FPredictProjectilePathResult;
	struct FPredictProjectilePathParams;
	struct FActiveHapticFeedbackEffect;
	struct FHapticFeedbackDetails_Curve;
	struct FClusterNode;
	struct FClusterNode_DEPRECATED;
	struct FHLODISMComponentDesc;
	struct FHLODProxyMesh;
	struct FImportanceTexture;
	struct FComponentKey;
	struct FComponentOverrideRecord;
	struct FBlueprintInputDelegateBinding;
	struct FBlueprintInputActionDelegateBinding;
	struct FBlueprintInputAxisDelegateBinding;
	struct FBlueprintInputAxisKeyDelegateBinding;
	struct FCachedKeyToActionInfo;
	struct FBlueprintInputKeyDelegateBinding;
	struct FBlueprintInputTouchDelegateBinding;
	struct FInstancedStaticMeshLightMapInstanceData;
	struct FInstancedStaticMeshComponentInstanceData;
	struct FInstancedStaticMeshInstanceData;
	struct FInstancedStaticMeshMappingInfo;
	struct FCurveEdTab;
	struct FCurveEdEntry;
	struct FInterpEdSelKey;
	struct FCameraPreviewInfo;
	struct FSubTrackGroup;
	struct FSupportedSubTrackInfo;
	struct FAnimControlTrackKey;
	struct FBoolTrackKey;
	struct FDirectorTrackCut;
	struct FEventTrackKey;
	struct FInterpLookupTrack;
	struct FInterpLookupPoint;
	struct FParticleReplayTrackKey;
	struct FSoundTrackKey;
	struct FToggleTrackKey;
	struct FVisibilityTrackKey;
	struct FVectorSpringState;
	struct FFloatSpringState;
	struct FDrawToRenderTargetContext;
	struct FLatentActionManager;
	struct FLayerActorStats;
	struct FReplicatedStaticActorDestructionInfo;
	struct FMaterialProxySettings;
	struct FLevelSimplificationDetails;
	struct FStreamableTextureInstance;
	struct FDynamicTextureInstance;
	struct FPrecomputedLightInstanceData;
	struct FBatchedPoint;
	struct FBatchedLine;
	struct FClientReceiveData;
	struct FHLODInstancingKey;
	struct FComponentSync;
	struct FLODMappingData;
	struct FParameterGroupData;
	struct FMaterialSpriteElement;
	struct FMaterialCachedParameterEntry;
	struct FMaterialCachedParameters;
	struct FMaterialCachedExpressionData;
	struct FMaterialParameterCollectionInfo;
	struct FMaterialFunctionInfo;
	struct FMaterialParameterInfo;
	struct FStaticComponentMaskValue;
	struct FParameterChannelNames;
	struct FCustomDefine;
	struct FCustomOutput;
	struct FCustomInput;
	struct FFunctionExpressionOutput;
	struct FFunctionExpressionInput;
	struct FFontParameterValue;
	struct FRuntimeVirtualTextureParameterValue;
	struct FTextureParameterValue;
	struct FVectorParameterValue;
	struct FScalarParameterValue;
	struct FScalarParameterAtlasInstanceData;
	struct FMaterialInstanceBasePropertyOverrides;
	struct FMaterialTextureInfo;
	struct FLightmassMaterialInterfaceSettings;
	struct FMaterialLayersFunctions;
	struct FCollectionParameterBase;
	struct FCollectionVectorParameter;
	struct FCollectionScalarParameter;
	struct FInterpGroupActorInfo;
	struct FCameraCutInfo;
	struct FMemberReference;
	struct FMeshInstancingSettings;
	struct FMeshMergingSettings;
	struct FMeshProxySettings;
	struct FMeshReductionSettings;
	struct FPurchaseInfo;
	struct FNameCurve;
	struct FNameCurveKey;
	struct FNavAvoidanceMask;
	struct FMovementProperties;
	struct FNavAgentProperties;
	struct FNavDataConfig;
	struct FNavAgentSelector;
	struct FNavigationLinkBase;
	struct FNavigationSegmentLink;
	struct FNavigationLink;
	struct FChannelDefinition;
	struct FPacketSimulationSettings;
	struct FFastArraySerializer;
	struct FFastArraySerializerItem;
	struct FNetworkEmulationProfileDescription;
	struct FNodeItem;
	struct FParticleBurst;
	struct FParticleRandomSeedInfo;
	struct FParticleCurvePair;
	struct FBeamModifierOptions;
	struct FParticleEvent_GenerateInfo;
	struct FLocationBoneSocketInfo;
	struct FOrbitOptions;
	struct FEmitterDynamicParameter;
	struct FBeamTargetData;
	struct FGPUSpriteResourceData;
	struct FGPUSpriteLocalVectorFieldInfo;
	struct FGPUSpriteEmitterInfo;
	struct FNamedEmitterMaterial;
	struct FLODSoloTrack;
	struct FParticleSystemLOD;
	struct FParticleSysParam;
	struct FParticleSystemWorldManagerTickFunction;
	struct FParticleSystemReplayFrame;
	struct FParticleEmitterReplayFrame;
	struct FFreezablePerPlatformInt;
	struct FPhysicalAnimationData;
	struct FPhysicalAnimationProfile;
	struct FSolverIterations;
	struct FPhysicsConstraintProfileHandle;
	struct FChaosPhysicsSettings;
	struct FPhysicalSurfaceName;
	struct FDelegateArray;
	struct FViewTargetTransitionParams;
	struct FTViewTarget;
	struct FCameraCacheEntry;
	struct FUpdateLevelStreamingLevelStatus;
	struct FInputActionSpeechMapping;
	struct FInputAxisKeyMapping;
	struct FInputActionKeyMapping;
	struct FInputAxisProperties;
	struct FInputAxisConfigEntry;
	struct FKeyBind;
	struct FPlayerMuteList;
	struct FPoseDataContainer;
	struct FPoseData;
	struct FPreviewAssetAttachContainer;
	struct FPreviewAttachedObjectPair;
	struct FPreviewMeshCollectionEntry;
	struct FPrimitiveComponentInstanceData;
	struct FSpriteCategoryInfo;
	struct FQuartzTimeSignature;
	struct FQuartzClockSettings;
	struct FQuartzPulseOverrideStep;
	struct FQuartzQuantizationBoundary;
	struct FQuartzTransportTimeStamp;
	struct FLevelNameAndTime;
	struct FReverbSettings;
	struct FCompressedRichCurve;
	struct FTransformBaseConstraint;
	struct FTransformBase;
	struct FRigTransformConstraint;
	struct FNode;
	struct FRootMotionSourceStatus;
	struct FRootMotionFinishVelocitySettings;
	struct FRootMotionSource;
	struct FRootMotionSource_JumpForce;
	struct FRootMotionSource_MoveToDynamicForce;
	struct FRootMotionSource_MoveToForce;
	struct FRootMotionSource_RadialForce;
	struct FRootMotionSource_ConstantForce;
	struct FCameraExposureSettings;
	struct FGaussianSumBloomSettings;
	struct FConvolutionBloomSettings;
	struct FLensBloomSettings;
	struct FLensImperfectionSettings;
	struct FLensSettings;
	struct FFilmStockSettings;
	struct FColorGradePerRangeSettings;
	struct FColorGradingSettings;
	struct FEngineShowFlagsSetting;
	struct FSceneViewExtensionIsActiveFunctor;
	struct FSkeletalMaterial;
	struct FClothPhysicsProperties_Legacy;
	struct FClothingAssetData_Legacy;
	struct FSkeletalMeshOptimizationSettings;
	struct FSkeletalMeshLODInfo;
	struct FSkeletalMeshClothBuildParams;
	struct FBoneMirrorExport;
	struct FBoneMirrorInfo;
	struct FSkeletalMeshComponentClothTickFunction;
	struct FSkeletalMeshComponentEndPhysicsTickFunction;
	struct FSkeletalMeshLODGroupSettings;
	struct FBoneFilter;
	struct FSkeletalMeshSamplingBuiltData;
	struct FSkeletalMeshSamplingInfo;
	struct FSkeletalMeshSamplingRegionBuiltData;
	struct FSkeletalMeshSamplingLODBuiltData;
	struct FSkeletalMeshSamplingRegion;
	struct FSkeletalMeshSamplingRegionBoneFilter;
	struct FSkeletalMeshSamplingRegionMaterialFilter;
	struct FVirtualBone;
	struct FAnimSlotGroup;
	struct FRigConfiguration;
	struct FNameMapping;
	struct FBoneReductionSetting;
	struct FReferencePose;
	struct FBoneNode;
	struct FSkeletonToMeshLinkup;
	struct FVertexOffsetUsage;
	struct FSkelMeshComponentLODInfo;
	struct FSkelMeshSkinWeightInfo;
	struct FSkinWeightProfileInfo;
	struct FSkinWeightProfileManagerTickFunction;
	struct FTentDistribution;
	struct FPrecomputedSkyLightInstanceData;
	struct FSmartNameContainer;
	struct FSmartNameMapping;
	struct FCurveMetaData;
	struct FSoundAttenuationPluginSettings;
	struct FSoundAttenuationSettings;
	struct FAttenuationSubmixSendSettings;
	struct FPassiveSoundMixModifier;
	struct FSoundModulationDefaultSettings;
	struct FSoundClassProperties;
	struct FSoundClassEditorData;
	struct FSoundConcurrencySettings;
	struct FSoundNodeEditorData;
	struct FSourceEffectChainEntry;
	struct FSoundGroup;
	struct FSoundClassAdjuster;
	struct FAudioEQEffect;
	struct FSoundModulationDefaultRoutingSettings;
	struct FDistanceDatum;
	struct FModulatorContinuousParams;
	struct FSoundSourceBusSendInfo;
	struct FSoundSubmixSpectralAnalysisBandSettings;
	struct FSoundWaveEnvelopeTimeData;
	struct FSoundWaveSpectralTimeData;
	struct FSoundWaveSpectralDataEntry;
	struct FSoundWaveEnvelopeDataPerSound;
	struct FSoundWaveSpectralDataPerSound;
	struct FSoundWaveSpectralData;
	struct FStreamedAudioPlatformData;
	struct FSplineCurves;
	struct FSplineInstanceData;
	struct FSplinePoint;
	struct FSplineMeshInstanceData;
	struct FSplineMeshParams;
	struct FMaterialRemapIndex;
	struct FStaticMaterial;
	struct FAssetEditorOrbitCameraPosition;
	struct FMeshSectionInfoMap;
	struct FMeshSectionInfo;
	struct FStaticMeshSourceModel;
	struct FStaticMeshOptimizationSettings;
	struct FStaticMeshComponentInstanceData;
	struct FStreamingTextureBuildInfo;
	struct FStaticMeshVertexColorLODData;
	struct FPaintedVertex;
	struct FStaticMeshComponentLODInfo;
	struct FStaticParameterSet;
	struct FStaticParameterBase;
	struct FStaticMaterialLayersParameter;
	struct FStaticTerrainLayerWeightParameter;
	struct FStaticComponentMaskParameter;
	struct FStaticSwitchParameter;
	struct FEquirectProps;
	struct FSubsurfaceProfileStruct;
	struct FTextureFormatSettings;
	struct FTexturePlatformData;
	struct FTextureSource;
	struct FTextureSourceBlock;
	struct FTextureLODGroup;
	struct FStreamingRenderAssetPrimitiveInfo;
	struct FTimeline;
	struct FTimelineLinearColorTrack;
	struct FTimelineFloatTrack;
	struct FTimelineVectorTrack;
	struct FTimelineEventEntry;
	struct FTTTrackBase;
	struct FTTPropertyTrack;
	struct FTTLinearColorTrack;
	struct FTTVectorTrack;
	struct FTTFloatTrack;
	struct FTTEventTrack;
	struct FTTTrackId;
	struct FTimeStretchCurveInstance;
	struct FTimeStretchCurve;
	struct FTimeStretchCurveMarker;
	struct FTouchInputControl;
	struct FUpdateLevelVisibilityLevelInfo;
	struct FHardwareCursorReference;
	struct FVirtualTextureBuildSettings;
	struct FVirtualTextureSpacePoolConfig;
	struct FVoiceSettings;
	struct FStreamingLevelsToConsider;
	struct FLevelCollection;
	struct FEndPhysicsTickFunction;
	struct FStartPhysicsTickFunction;
	struct FLevelViewportInfo;
	struct FWorldPSCPool;
	struct FPSCPool;
	struct FPSCPoolElem;
	struct FBroadphaseSettings;
	struct FHierarchicalSimplification;
	struct FNetViewer;
	struct FLightmassWorldInfoSettings;
	/////////////////////////////////////////////
	// ScriptStruct Engine.DistributionLookupTable
	// Size 32
	/////////////////////////////////////////////
	struct FDistributionLookupTable {
		float	TimeScale;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TimeBias;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>	Values;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char	Op;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	EntryCount;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	EntryStride;		//Offset: 26	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	SubEntryStride;		//Offset: 27	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	LockFlag;		//Offset: 28	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 29	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RawDistribution
	// Size 32
	/////////////////////////////////////////////
	struct FRawDistribution {
		struct FDistributionLookupTable	Table;		//Offset: 0	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FloatDistribution
	// Size 32
	/////////////////////////////////////////////
	struct FFloatDistribution {
		struct FDistributionLookupTable	Table;		//Offset: 0	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VectorDistribution
	// Size 32
	/////////////////////////////////////////////
	struct FVectorDistribution {
		struct FDistributionLookupTable	Table;		//Offset: 0	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Vector4Distribution
	// Size 32
	/////////////////////////////////////////////
	struct FVector4Distribution {
		struct FDistributionLookupTable	Table;		//Offset: 0	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FloatRK4SpringInterpolator
	// Size 8
	/////////////////////////////////////////////
	struct FFloatRK4SpringInterpolator {
		float	StiffnessConstant;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DampeningRatio;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VectorRK4SpringInterpolator
	// Size 8
	/////////////////////////////////////////////
	struct FVectorRK4SpringInterpolator {
		float	StiffnessConstant;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DampeningRatio;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FormatArgumentData
	// Size 64
	/////////////////////////////////////////////
	struct FFormatArgumentData {
		struct FString	ArgumentName;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EFormatArgumentType>	ArgumentValueType;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 17	Size: 7
		struct FText	ArgumentValue;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		int32_t	ArgumentValueInt;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ArgumentValueFloat;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextGender	ArgumentValueGender;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 57	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExpressionInput
	// Size 20
	/////////////////////////////////////////////
	struct FExpressionInput {
		int32_t	OutputIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	InputName;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ExpressionName;		//Offset: 12	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialAttributesInput
	// Super ScriptStruct Engine.ExpressionInput
	// Size 24
	// Size inherited 20
	/////////////////////////////////////////////
	struct FMaterialAttributesInput : public FExpressionInput {
		int32_t	PropertyConnectedBitmask;		//Offset: 20	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExpressionOutput
	// Size 8
	/////////////////////////////////////////////
	struct FExpressionOutput {
		struct FName	OutputName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialInput
	// Size 20
	/////////////////////////////////////////////
	struct FMaterialInput {
		int32_t	OutputIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	InputName;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ExpressionName;		//Offset: 12	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ColorMaterialInput
	// Super ScriptStruct Engine.MaterialInput
	// Size 20
	// Size inherited 20
	/////////////////////////////////////////////
	struct FColorMaterialInput : public FMaterialInput {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ScalarMaterialInput
	// Super ScriptStruct Engine.MaterialInput
	// Size 20
	// Size inherited 20
	/////////////////////////////////////////////
	struct FScalarMaterialInput : public FMaterialInput {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ShadingModelMaterialInput
	// Super ScriptStruct Engine.MaterialInput
	// Size 20
	// Size inherited 20
	/////////////////////////////////////////////
	struct FShadingModelMaterialInput : public FMaterialInput {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VectorMaterialInput
	// Super ScriptStruct Engine.MaterialInput
	// Size 20
	// Size inherited 20
	/////////////////////////////////////////////
	struct FVectorMaterialInput : public FMaterialInput {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Vector2MaterialInput
	// Super ScriptStruct Engine.MaterialInput
	// Size 20
	// Size inherited 20
	/////////////////////////////////////////////
	struct FVector2MaterialInput : public FMaterialInput {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Vector_NetQuantize
	// Super ScriptStruct CoreUObject.Vector
	// Size 12
	// Size inherited 12
	/////////////////////////////////////////////
	struct FVector_NetQuantize : public FVector {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Vector_NetQuantizeNormal
	// Super ScriptStruct CoreUObject.Vector
	// Size 12
	// Size inherited 12
	/////////////////////////////////////////////
	struct FVector_NetQuantizeNormal : public FVector {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HitResult
	// Size 136
	/////////////////////////////////////////////
	struct FHitResult {
		int32_t	FaceIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Time;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Distance;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize	Location;		//Offset: 12	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize	ImpactPoint;		//Offset: 24	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal	Normal;		//Offset: 36	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal	ImpactNormal;		//Offset: 48	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize	TraceStart;		//Offset: 60	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize	TraceEnd;		//Offset: 72	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PenetrationDepth;		//Offset: 84	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Item;		//Offset: 88	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	ElementIndex;		//Offset: 92	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBlockingHit : 1;		//Offset: 93	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bStartPenetrating : 1;		//Offset: 93	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 93	Size: 3
		TWeakObjectPtr<class UPhysicalMaterial>	PhysMaterial;		//Offset: 96	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>	Actor;		//Offset: 104	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>	Component;		//Offset: 112	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	BoneName;		//Offset: 120	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MyBoneName;		//Offset: 128	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BranchingPointNotifyPayload
	// Size 32
	/////////////////////////////////////////////
	struct FBranchingPointNotifyPayload {
		unsigned char uknownData_0[32];		//Offset: 0	Size: 32
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SimpleMemberReference
	// Size 32
	/////////////////////////////////////////////
	struct FSimpleMemberReference {
		class UObject* MemberParent;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MemberName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	MemberGuid;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TickFunction
	// Size 40
	/////////////////////////////////////////////
	struct FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		TEnumAsByte<ETickingGroup>	TickGroup;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETickingGroup>	EndTickGroup;		//Offset: 9	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bTickEvenWhenPaused : 1;		//Offset: 10	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCanEverTick : 1;		//Offset: 10	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bStartWithTickEnabled : 1;		//Offset: 10	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowTickOnDedicatedServer : 1;		//Offset: 10	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 10	Size: 2
		float	TickInterval;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[24];		//Offset: 16	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActorComponentTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FActorComponentTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SubtitleCue
	// Size 32
	/////////////////////////////////////////////
	struct FSubtitleCue {
		struct FText	Text;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float	Time;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InterpControlPoint
	// Size 28
	/////////////////////////////////////////////
	struct FInterpControlPoint {
		struct FVector	PositionControlPoint;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bPositionIsRelative;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[15];		//Offset: 13	Size: 15
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PlatformInterfaceData
	// Size 48
	/////////////////////////////////////////////
	struct FPlatformInterfaceData {
		struct FName	DataName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EPlatformInterfaceDataType>	Type;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		int32_t	IntValue;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FloatValue;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
		struct FString	StringValue;		//Offset: 24	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* ObjectValue;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PlatformInterfaceDelegateResult
	// Size 56
	/////////////////////////////////////////////
	struct FPlatformInterfaceDelegateResult {
		bool	bSuccessful;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FPlatformInterfaceData	Data;		//Offset: 8	Size: 48	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DebugFloatHistory
	// Size 32
	/////////////////////////////////////////////
	struct FDebugFloatHistory {
		TArray<float>	Samples;		//Offset: 0	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float	MaxSamples;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinValue;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxValue;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAutoAdjustMinMax;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 29	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LatentActionInfo
	// Size 24
	/////////////////////////////////////////////
	struct FLatentActionInfo {
		int32_t	Linkage;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	UUID;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ExecutionFunction;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* CallbackTarget;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimerHandle
	// Size 8
	/////////////////////////////////////////////
	struct FTimerHandle {
		uint64_t	Handle;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollisionProfileName
	// Size 8
	/////////////////////////////////////////////
	struct FCollisionProfileName {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GenericStruct
	// Size 4
	/////////////////////////////////////////////
	struct FGenericStruct {
		int32_t	Data;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.UserActivity
	// Size 24
	/////////////////////////////////////////////
	struct FUserActivity {
		struct FString	ActionName;		//Offset: 0	Size: 16	Flags: BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 16	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.WalkableSlopeOverride
	// Size 16
	/////////////////////////////////////////////
	struct FWalkableSlopeOverride {
		TEnumAsByte<EWalkableSlopeBehavior>	WalkableSlopeBehavior;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	WalkableSlopeAngle;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[8];		//Offset: 8	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollisionResponseContainer
	// Size 32
	/////////////////////////////////////////////
	struct FCollisionResponseContainer {
		TEnumAsByte<ECollisionResponse>	WorldStatic;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	WorldDynamic;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	Pawn;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	Visibility;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	Camera;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	PhysicsBody;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	Vehicle;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	Destructible;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	EngineTraceChannel1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	EngineTraceChannel2;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	EngineTraceChannel3;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	EngineTraceChannel4;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	EngineTraceChannel5;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	EngineTraceChannel6;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel1;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel2;		//Offset: 15	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel3;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel4;		//Offset: 17	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel5;		//Offset: 18	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel6;		//Offset: 19	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel7;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel8;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel9;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel10;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel11;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel12;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel13;		//Offset: 26	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel14;		//Offset: 27	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel15;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel16;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel17;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	GameTraceChannel18;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollisionResponse
	// Size 48
	/////////////////////////////////////////////
	struct FCollisionResponse {
		struct FCollisionResponseContainer	ResponseToChannels;		//Offset: 0	Size: 32	Flags: Transient, NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FResponseChannel>	ResponseArray;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BodyInstance
	// Super ScriptStruct PhysicsCore.BodyInstanceCore
	// Size 344
	// Size inherited 24
	/////////////////////////////////////////////
	struct FBodyInstance : public FBodyInstanceCore {
		unsigned char uknownData_0[6];		//Offset: 24	Size: 6
		TEnumAsByte<ECollisionChannel>	ObjectType;		//Offset: 30	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_1[1];		//Offset: 31	Size: 1
		TEnumAsByte<ECollisionEnabled>	CollisionEnabled;		//Offset: 32	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_2[56];		//Offset: 33	Size: 56
		ESleepFamily	SleepFamily;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EDOFMode>	DOFMode;		//Offset: 90	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIgnoreAnalyticCollisions : 1;		//Offset: 91	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bNotifyRigidBodyCollision : 1;		//Offset: 91	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockTranslation : 1;		//Offset: 91	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockRotation : 1;		//Offset: 91	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockXTranslation : 1;		//Offset: 91	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockYTranslation : 1;		//Offset: 91	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseCCD : 1;		//Offset: 91	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[1];		//Offset: 91	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockZTranslation : 1;		//Offset: 92	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockXRotation : 1;		//Offset: 92	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockYRotation : 1;		//Offset: 92	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockZRotation : 1;		//Offset: 92	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideMaxAngularVelocity : 1;		//Offset: 92	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideMaxDepenetrationVelocity : 1;		//Offset: 92	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_4[1];		//Offset: 92	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideWalkableSlopeOnInstance : 1;		//Offset: 93	Size: 1	Flags: Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bInterpolateWhenSubStepping : 1;		//Offset: 93	Size: 1	Flags: NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_5[15];		//Offset: 93	Size: 15
		struct FName	CollisionProfileName;		//Offset: 108	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char	PositionSolverIterationCount;		//Offset: 116	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	VelocitySolverIterationCount;		//Offset: 117	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_6[2];		//Offset: 118	Size: 2
		struct FCollisionResponse	CollisionResponses;		//Offset: 120	Size: 48	Flags: Edit, NativeAccessSpecifierPrivate
		float	MaxDepenetrationVelocity;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float	MassInKgOverride;		//Offset: 172	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_7[8];		//Offset: 176	Size: 8
		float	LinearDamping;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AngularDamping;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	CustomDOFPlaneNormal;		//Offset: 192	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	COMNudge;		//Offset: 204	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MassScale;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	InertiaTensorScale;		//Offset: 220	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_8[16];		//Offset: 232	Size: 16
		struct FWalkableSlopeOverride	WalkableSlopeOverride;		//Offset: 248	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		class UPhysicalMaterial* PhysMaterialOverride;		//Offset: 264	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float	MaxAngularVelocity;		//Offset: 272	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CustomSleepThresholdMultiplier;		//Offset: 276	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StabilizationThresholdMultiplier;		//Offset: 280	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PhysicsBlendWeight;		//Offset: 284	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_9[56];		//Offset: 288	Size: 56
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ResponseChannel
	// Size 12
	/////////////////////////////////////////////
	struct FResponseChannel {
		struct FName	Channel;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	Response;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomPrimitiveData
	// Size 16
	/////////////////////////////////////////////
	struct FCustomPrimitiveData {
		TArray<float>	Data;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightingChannels
	// Size 1
	/////////////////////////////////////////////
	struct FLightingChannels {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bChannel0 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bChannel1 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bChannel2 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.UniqueNetIdRepl
	// Super ScriptStruct CoreUObject.UniqueNetIdWrapper
	// Size 40
	// Size inherited 1
	/////////////////////////////////////////////
	struct FUniqueNetIdRepl : public FUniqueNetIdWrapper {
		unsigned char uknownData_0[23];		//Offset: 1	Size: 23
		TArray<unsigned char>	ReplicationBytes;		//Offset: 24	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_Base
	// Size 16
	/////////////////////////////////////////////
	struct FAnimNode_Base {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputRange
	// Size 8
	/////////////////////////////////////////////
	struct FInputRange {
		float	Min;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Max;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputScaleBiasClamp
	// Size 48
	/////////////////////////////////////////////
	struct FInputScaleBiasClamp {
		bool	bMapRange;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bClampResult;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bInterpResult;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 3	Size: 1
		struct FInputRange	InRange;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange	OutRange;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float	Scale;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bias;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ClampMin;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ClampMax;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InterpSpeedIncreasing;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InterpSpeedDecreasing;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 44	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AlphaBlend
	// Size 48
	/////////////////////////////////////////////
	struct FAlphaBlend {
		class UCurveFloat* CustomCurve;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	BlendTime;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[24];		//Offset: 12	Size: 24
		EAlphaBlendOption	BlendOption;		//Offset: 36	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_1[11];		//Offset: 37	Size: 11
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputAlphaBoolBlend
	// Size 72
	/////////////////////////////////////////////
	struct FInputAlphaBoolBlend {
		float	BlendInTime;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlendOutTime;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption	BlendOption;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bInitialized;		//Offset: 9	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[6];		//Offset: 10	Size: 6
		class UCurveFloat* CustomCurve;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAlphaBlend	AlphaBlend;		//Offset: 24	Size: 48	Flags: Transient, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputScaleBias
	// Size 8
	/////////////////////////////////////////////
	struct FInputScaleBias {
		float	Scale;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bias;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PoseLinkBase
	// Size 16
	/////////////////////////////////////////////
	struct FPoseLinkBase {
		int32_t	LinkID;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[12];		//Offset: 4	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ComponentSpacePoseLink
	// Super ScriptStruct Engine.PoseLinkBase
	// Size 16
	// Size inherited 16
	/////////////////////////////////////////////
	struct FComponentSpacePoseLink : public FPoseLinkBase {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KeyHandleMap
	// Size 96
	/////////////////////////////////////////////
	struct FKeyHandleMap {
		unsigned char uknownData_0[96];		//Offset: 0	Size: 96
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.IndexedCurve
	// Size 104
	/////////////////////////////////////////////
	struct FIndexedCurve {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		struct FKeyHandleMap	KeyHandlesToIndices;		//Offset: 8	Size: 96	Flags: Transient, Protected, NativeAccessSpecifierProtected
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RealCurve
	// Super ScriptStruct Engine.IndexedCurve
	// Size 112
	// Size inherited 104
	/////////////////////////////////////////////
	struct FRealCurve : public FIndexedCurve {
		float	DefaultValue;		//Offset: 104	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ERichCurveExtrapolation>	PreInfinityExtrap;		//Offset: 108	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ERichCurveExtrapolation>	PostInfinityExtrap;		//Offset: 109	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 110	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RichCurve
	// Super ScriptStruct Engine.RealCurve
	// Size 128
	// Size inherited 112
	/////////////////////////////////////////////
	struct FRichCurve : public FRealCurve {
		TArray<struct FRichCurveKey>	Keys;		//Offset: 112	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RuntimeFloatCurve
	// Size 136
	/////////////////////////////////////////////
	struct FRuntimeFloatCurve {
		struct FRichCurve	EditorCurveData;		//Offset: 0	Size: 128	Flags: NativeAccessSpecifierPublic
		class UCurveFloat* ExternalCurve;		//Offset: 128	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RichCurveKey
	// Size 28
	/////////////////////////////////////////////
	struct FRichCurveKey {
		TEnumAsByte<ERichCurveInterpMode>	InterpMode;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ERichCurveTangentMode>	TangentMode;		//Offset: 1	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ERichCurveTangentWeightMode>	TangentWeightMode;		//Offset: 2	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 3	Size: 1
		float	Time;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Value;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ArriveTangent;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ArriveTangentWeight;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LeaveTangent;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LeaveTangentWeight;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoneReference
	// Size 16
	/////////////////////////////////////////////
	struct FBoneReference {
		struct FName	BoneName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SingleAnimationPlayData
	// Size 24
	/////////////////////////////////////////////
	struct FSingleAnimationPlayData {
		class UAnimationAsset* AnimToPlay;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSavedLooping : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSavedPlaying : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
		float	SavedPosition;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SavedPlayRate;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_AssetPlayerBase
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 56
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_AssetPlayerBase : public FAnimNode_Base {
		struct FName	GroupName;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAnimGroupRole>	GroupRole;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimSyncGroupScope	GroupScope;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIgnoreForRelevancyTest;		//Offset: 26	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 27	Size: 1
		float	BlendWeight;		//Offset: 28	Size: 4	Flags: BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float	InternalTimeAccumulator;		//Offset: 32	Size: 4	Flags: BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_1[20];		//Offset: 36	Size: 20
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KeyHandleLookupTable
	// Size 96
	/////////////////////////////////////////////
	struct FKeyHandleLookupTable {
		unsigned char uknownData_0[96];		//Offset: 0	Size: 96
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PerPlatformFloat
	// Size 4
	/////////////////////////////////////////////
	struct FPerPlatformFloat {
		float	Default;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PerPlatformInt
	// Size 4
	/////////////////////////////////////////////
	struct FPerPlatformInt {
		int32_t	Default;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PerPlatformBool
	// Size 1
	/////////////////////////////////////////////
	struct FPerPlatformBool {
		bool	Default;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimInstanceProxy
	// Size 1904
	/////////////////////////////////////////////
	struct FAnimInstanceProxy {
		unsigned char uknownData_0[1904];		//Offset: 0	Size: 1904
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TableRowBase
	// Size 8
	/////////////////////////////////////////////
	struct FTableRowBase {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundModulationDestinationSettings
	// Size 16
	/////////////////////////////////////////////
	struct FSoundModulationDestinationSettings {
		float	Value;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		class USoundModulatorBase* Modulator;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PoseLink
	// Super ScriptStruct Engine.PoseLinkBase
	// Size 16
	// Size inherited 16
	/////////////////////////////////////////////
	struct FPoseLink : public FPoseLinkBase {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PerBoneBlendWeight
	// Size 8
	/////////////////////////////////////////////
	struct FPerBoneBlendWeight {
		int32_t	SourceIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlendWeight;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputBlendPose
	// Size 16
	/////////////////////////////////////////////
	struct FInputBlendPose {
		TArray<struct FBranchFilter>	BranchFilters;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BranchFilter
	// Size 12
	/////////////////////////////////////////////
	struct FBranchFilter {
		struct FName	BoneName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	BlendDepth;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PoseSnapshot
	// Size 56
	/////////////////////////////////////////////
	struct FPoseSnapshot {
		TArray<struct FTransform>	LocalTransforms;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	BoneNames;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FName	SkeletalMeshName;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	SnapshotName;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIsValid;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 49	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_Root
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 48
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_Root : public FAnimNode_Base {
		struct FPoseLink	Result;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Group;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimCurveParam
	// Size 12
	/////////////////////////////////////////////
	struct FAnimCurveParam {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActorComponentDuplicatedObjectData
	// Size 16
	/////////////////////////////////////////////
	struct FActorComponentDuplicatedObjectData {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActorComponentInstanceData
	// Size 104
	/////////////////////////////////////////////
	struct FActorComponentInstanceData {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		class UObject* SourceComponentTemplate;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EComponentCreationMethod	SourceComponentCreationMethod;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_1[3];		//Offset: 17	Size: 3
		int32_t	SourceComponentTypeSerializedIndex;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<unsigned char>	SavedProperties;		//Offset: 24	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FActorComponentDuplicatedObjectData	UniqueTransientPackage;		//Offset: 40	Size: 16	Flags: NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FActorComponentDuplicatedObjectData>	DuplicatedObjects;		//Offset: 56	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UObject*>	ReferencedObjects;		//Offset: 72	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FName>	ReferencedNames;		//Offset: 88	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SceneComponentInstanceData
	// Super ScriptStruct Engine.ActorComponentInstanceData
	// Size 184
	// Size inherited 104
	/////////////////////////////////////////////
	struct FSceneComponentInstanceData : public FActorComponentInstanceData {
		TMap<class USceneComponent*, struct FTransform>	AttachedInstanceComponents;		//Offset: 104	Size: 80	Flags: ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Vector_NetQuantize100
	// Super ScriptStruct CoreUObject.Vector
	// Size 12
	// Size inherited 12
	/////////////////////////////////////////////
	struct FVector_NetQuantize100 : public FVector {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RepAttachment
	// Size 64
	/////////////////////////////////////////////
	struct FRepAttachment {
		class AActor* AttachParent;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	LocationOffset;		//Offset: 8	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	RelativeScale3D;		//Offset: 20	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	RotationOffset;		//Offset: 32	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FName	AttachSocket;		//Offset: 44	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 52	Size: 4
		class USceneComponent* AttachComponent;		//Offset: 56	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RepMovement
	// Size 52
	/////////////////////////////////////////////
	struct FRepMovement {
		struct FVector	LinearVelocity;		//Offset: 0	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	AngularVelocity;		//Offset: 12	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Location;		//Offset: 24	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 36	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSimulatedPhysicSleep : 1;		//Offset: 48	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRepPhysics : 1;		//Offset: 48	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 48	Size: 1
		EVectorQuantization	LocationQuantizationLevel;		//Offset: 49	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVectorQuantization	VelocityQuantizationLevel;		//Offset: 50	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERotatorQuantization	RotationQuantizationLevel;		//Offset: 51	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActorTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FActorTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DirectoryPath
	// Size 16
	/////////////////////////////////////////////
	struct FDirectoryPath {
		struct FString	Path;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KAggregateGeom
	// Size 88
	/////////////////////////////////////////////
	struct FKAggregateGeom {
		TArray<struct FKSphereElem>	SphereElems;		//Offset: 0	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKBoxElem>	BoxElems;		//Offset: 16	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKSphylElem>	SphylElems;		//Offset: 32	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKConvexElem>	ConvexElems;		//Offset: 48	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKTaperedCapsuleElem>	TaperedCapsuleElems;		//Offset: 64	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 80	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KShapeElem
	// Size 48
	/////////////////////////////////////////////
	struct FKShapeElem {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		float	RestOffset;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 12	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bContributeToMass : 1;		//Offset: 24	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_2[1];		//Offset: 24	Size: 1
		TEnumAsByte<ECollisionEnabled>	CollisionEnabled;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_3[22];		//Offset: 26	Size: 22
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KTaperedCapsuleElem
	// Super ScriptStruct Engine.KShapeElem
	// Size 88
	// Size inherited 48
	/////////////////////////////////////////////
	struct FKTaperedCapsuleElem : public FKShapeElem {
		struct FVector	Center;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 60	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	Radius0;		//Offset: 72	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Radius1;		//Offset: 76	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Length;		//Offset: 80	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 84	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KConvexElem
	// Super ScriptStruct Engine.KShapeElem
	// Size 176
	// Size inherited 48
	/////////////////////////////////////////////
	struct FKConvexElem : public FKShapeElem {
		TArray<struct FVector>	VertexData;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>	IndexData;		//Offset: 64	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox	ElemBox;		//Offset: 80	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 108	Size: 4
		struct FTransform	Transform;		//Offset: 112	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char uknownData_1[16];		//Offset: 160	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KSphylElem
	// Super ScriptStruct Engine.KShapeElem
	// Size 80
	// Size inherited 48
	/////////////////////////////////////////////
	struct FKSphylElem : public FKShapeElem {
		struct FVector	Center;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 60	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	Radius;		//Offset: 72	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Length;		//Offset: 76	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KBoxElem
	// Super ScriptStruct Engine.KShapeElem
	// Size 88
	// Size inherited 48
	/////////////////////////////////////////////
	struct FKBoxElem : public FKShapeElem {
		struct FVector	Center;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 60	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	X;		//Offset: 72	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Y;		//Offset: 76	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Z;		//Offset: 80	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 84	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KSphereElem
	// Super ScriptStruct Engine.KShapeElem
	// Size 64
	// Size inherited 48
	/////////////////////////////////////////////
	struct FKSphereElem : public FKShapeElem {
		struct FVector	Center;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Radius;		//Offset: 60	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationGroupReference
	// Size 12
	/////////////////////////////////////////////
	struct FAnimationGroupReference {
		struct FName	GroupName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAnimGroupRole>	GroupRole;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimSyncGroupScope	GroupScope;		//Offset: 9	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 10	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionMovementParams
	// Size 64
	/////////////////////////////////////////////
	struct FRootMotionMovementParams {
		bool	bHasRootMotion;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	BlendWeight;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[8];		//Offset: 8	Size: 8
		struct FTransform	RootMotionTransform;		//Offset: 16	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimGroupInstance
	// Size 112
	/////////////////////////////////////////////
	struct FAnimGroupInstance {
		unsigned char uknownData_0[112];		//Offset: 0	Size: 112
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimTickRecord
	// Size 72
	/////////////////////////////////////////////
	struct FAnimTickRecord {
		class UAnimationAsset* SourceAsset;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[64];		//Offset: 8	Size: 64
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MarkerSyncAnimPosition
	// Size 20
	/////////////////////////////////////////////
	struct FMarkerSyncAnimPosition {
		struct FName	PreviousMarkerName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NextMarkerName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PositionBetweenMarkers;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlendFilter
	// Size 120
	/////////////////////////////////////////////
	struct FBlendFilter {
		unsigned char uknownData_0[120];		//Offset: 0	Size: 120
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlendSampleData
	// Size 64
	/////////////////////////////////////////////
	struct FBlendSampleData {
		int32_t	SampleDataIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		class UAnimSequence* Animation;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TotalWeight;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Time;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PreviousTime;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SamplePlayRate;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[32];		//Offset: 32	Size: 32
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationRecordingSettings
	// Size 20
	/////////////////////////////////////////////
	struct FAnimationRecordingSettings {
		bool	bRecordInWorldSpace;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRemoveRootAnimation;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAutoSaveAsset;		//Offset: 2	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 3	Size: 1
		float	SampleRate;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Length;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ERichCurveInterpMode>	InterpMode;		//Offset: 12	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ERichCurveTangentMode>	TangentMode;		//Offset: 13	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 14	Size: 1
		bool	bRecordTransforms;		//Offset: 15	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRecordCurves;		//Offset: 16	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 17	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ComponentSpacePose
	// Size 32
	/////////////////////////////////////////////
	struct FComponentSpacePose {
		TArray<struct FTransform>	Transforms;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	Names;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LocalSpacePose
	// Size 32
	/////////////////////////////////////////////
	struct FLocalSpacePose {
		TArray<struct FTransform>	Transforms;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	Names;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedTransform
	// Size 64
	/////////////////////////////////////////////
	struct FNamedTransform {
		struct FTransform	Value;		//Offset: 0	Size: 48	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 56	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedColor
	// Size 12
	/////////////////////////////////////////////
	struct FNamedColor {
		struct FColor	Value;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedVector
	// Size 20
	/////////////////////////////////////////////
	struct FNamedVector {
		struct FVector	Value;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedFloat
	// Size 12
	/////////////////////////////////////////////
	struct FNamedFloat {
		float	Value;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimParentNodeAssetOverride
	// Size 24
	/////////////////////////////////////////////
	struct FAnimParentNodeAssetOverride {
		class UAnimationAsset* NewAsset;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ParentNodeGuid;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimGroupInfo
	// Size 24
	/////////////////////////////////////////////
	struct FAnimGroupInfo {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Color;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimBlueprintDebugData
	// Size 1
	/////////////////////////////////////////////
	struct FAnimBlueprintDebugData {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationFrameSnapshot
	// Size 1
	/////////////////////////////////////////////
	struct FAnimationFrameSnapshot {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StateMachineDebugData
	// Size 176
	/////////////////////////////////////////////
	struct FStateMachineDebugData {
		unsigned char uknownData_0[176];		//Offset: 0	Size: 176
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StateMachineStateDebugData
	// Size 16
	/////////////////////////////////////////////
	struct FStateMachineStateDebugData {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimBlueprintFunctionData
	// Size 64
	/////////////////////////////////////////////
	struct FAnimBlueprintFunctionData {
		TAssetPtr<class FNone>	OutputPoseNodeProperty;		//Offset: 0	Size: 32	Flags: HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TAssetPtr<class FNone>>	InputPoseNodeProperties;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<TAssetPtr<class FNone>>	InputProperties;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimGraphBlendOptions
	// Size 8
	/////////////////////////////////////////////
	struct FAnimGraphBlendOptions {
		float	BlendInTime;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlendOutTime;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GraphAssetPlayerInformation
	// Size 16
	/////////////////////////////////////////////
	struct FGraphAssetPlayerInformation {
		TArray<int32_t>	PlayerNodeIndices;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedPoseIndices
	// Size 16
	/////////////////////////////////////////////
	struct FCachedPoseIndices {
		TArray<int32_t>	OrderedSavedPoseNodeIndices;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimBlueprintFunction
	// Size 104
	/////////////////////////////////////////////
	struct FAnimBlueprintFunction {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Group;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	OutputPoseNodeIndex;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		TArray<struct FName>	InputPoseNames;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>	InputPoseNodeIndices;		//Offset: 40	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[40];		//Offset: 56	Size: 40
		bool	bImplemented;		//Offset: 96	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[7];		//Offset: 97	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimTrack
	// Size 16
	/////////////////////////////////////////////
	struct FAnimTrack {
		TArray<struct FAnimSegment>	AnimSegments;		//Offset: 0	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSegment
	// Size 32
	/////////////////////////////////////////////
	struct FAnimSegment {
		class UAnimSequenceBase* AnimReference;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StartPos;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnimStartTime;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnimEndTime;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnimPlayRate;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LoopingCount;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionExtractionStep
	// Size 16
	/////////////////////////////////////////////
	struct FRootMotionExtractionStep {
		class UAnimSequence* AnimSequence;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StartPosition;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EndPosition;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationErrorStats
	// Size 16
	/////////////////////////////////////////////
	struct FAnimationErrorStats {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RawCurveTracks
	// Size 16
	/////////////////////////////////////////////
	struct FRawCurveTracks {
		TArray<struct FFloatCurve>	FloatCurves;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SmartName
	// Size 12
	/////////////////////////////////////////////
	struct FSmartName {
		struct FName	DisplayName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimCurveBase
	// Size 24
	/////////////////////////////////////////////
	struct FAnimCurveBase {
		struct FName	LastObservedName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSmartName	Name;		//Offset: 8	Size: 12	Flags: NoDestructor, NativeAccessSpecifierPublic
		int32_t	CurveTypeFlags;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FloatCurve
	// Super ScriptStruct Engine.AnimCurveBase
	// Size 152
	// Size inherited 24
	/////////////////////////////////////////////
	struct FFloatCurve : public FAnimCurveBase {
		struct FRichCurve	FloatCurve;		//Offset: 24	Size: 128	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VectorCurve
	// Super ScriptStruct Engine.AnimCurveBase
	// Size 408
	// Size inherited 24
	/////////////////////////////////////////////
	struct FVectorCurve : public FAnimCurveBase {
		struct FRichCurve	FloatCurves[3];		//Offset: 24	Size: 128	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TransformCurve
	// Super ScriptStruct Engine.AnimCurveBase
	// Size 1248
	// Size inherited 24
	/////////////////////////////////////////////
	struct FTransformCurve : public FAnimCurveBase {
		struct FVectorCurve	TranslationCurve;		//Offset: 24	Size: 408	Flags: NativeAccessSpecifierPublic
		struct FVectorCurve	RotationCurve;		//Offset: 432	Size: 408	Flags: NativeAccessSpecifierPublic
		struct FVectorCurve	ScaleCurve;		//Offset: 840	Size: 408	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SlotEvaluationPose
	// Size 224
	/////////////////////////////////////////////
	struct FSlotEvaluationPose {
		TEnumAsByte<EAdditiveAnimationType>	AdditiveType;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Weight;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[216];		//Offset: 8	Size: 216
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.A2Pose
	// Size 16
	/////////////////////////////////////////////
	struct FA2Pose {
		TArray<struct FTransform>	Bones;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.A2CSPose
	// Super ScriptStruct Engine.A2Pose
	// Size 40
	// Size inherited 16
	/////////////////////////////////////////////
	struct FA2CSPose : public FA2Pose {
		unsigned char uknownData_0[8];		//Offset: 16	Size: 8
		TArray<unsigned char>	ComponentSpaceFlags;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.QueuedDrawDebugItem
	// Size 104
	/////////////////////////////////////////////
	struct FQueuedDrawDebugItem {
		TEnumAsByte<EDrawDebugItemType>	ItemType;		//Offset: 0	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FVector	StartLoc;		//Offset: 4	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	EndLoc;		//Offset: 16	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Center;		//Offset: 28	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 40	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	Radius;		//Offset: 52	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Size;		//Offset: 56	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Segments;		//Offset: 60	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	Color;		//Offset: 64	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bPersistentLines;		//Offset: 68	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 69	Size: 3
		float	LifeTime;		//Offset: 72	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Thickness;		//Offset: 76	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Message;		//Offset: 80	Size: 16	Flags: ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	TextScale;		//Offset: 96	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimInstanceSubsystemData
	// Size 1
	/////////////////////////////////////////////
	struct FAnimInstanceSubsystemData {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimLinkableElement
	// Size 48
	/////////////////////////////////////////////
	struct FAnimLinkableElement {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		class UAnimMontage* LinkedMontage;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t	SlotIndex;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t	SegmentIndex;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TEnumAsByte<EAnimLinkMethod>	LinkMethod;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TEnumAsByte<EAnimLinkMethod>	CachedLinkMethod;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_1[2];		//Offset: 26	Size: 2
		float	SegmentBeginTime;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float	SegmentLength;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float	LinkValue;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase* LinkedSequence;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimMontageInstance
	// Size 432
	/////////////////////////////////////////////
	struct FAnimMontageInstance {
		class UAnimMontage* Montage;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[32];		//Offset: 8	Size: 32
		bool	bPlaying;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 41	Size: 3
		float	DefaultBlendTimeMultiplier;		//Offset: 44	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[184];		//Offset: 48	Size: 184
		TArray<int32_t>	NextSections;		//Offset: 232	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>	PrevSections;		//Offset: 248	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char uknownData_3[16];		//Offset: 264	Size: 16
		TArray<struct FAnimNotifyEvent>	ActiveStateBranchingPoints;		//Offset: 280	Size: 16	Flags: ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float	Position;		//Offset: 296	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	PlayRate;		//Offset: 300	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAlphaBlend	Blend;		//Offset: 304	Size: 48	Flags: Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char uknownData_4[44];		//Offset: 352	Size: 44
		int32_t	DisableRootMotionCount;		//Offset: 396	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_5[32];		//Offset: 400	Size: 32
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNotifyEvent
	// Super ScriptStruct Engine.AnimLinkableElement
	// Size 184
	// Size inherited 48
	/////////////////////////////////////////////
	struct FAnimNotifyEvent : public FAnimLinkableElement {
		float	DisplayTime;		//Offset: 48	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TriggerTimeOffset;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EndTriggerTimeOffset;		//Offset: 56	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TriggerWeightThreshold;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NotifyName;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimNotify* Notify;		//Offset: 72	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimNotifyState* NotifyStateClass;		//Offset: 80	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Duration;		//Offset: 88	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 92	Size: 4
		struct FAnimLinkableElement	EndLink;		//Offset: 96	Size: 48	Flags: NativeAccessSpecifierPublic
		bool	bConvertedFromBranchingPoint;		//Offset: 144	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMontageNotifyTickType>	MontageTickType;		//Offset: 145	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 146	Size: 2
		float	NotifyTriggerChance;		//Offset: 148	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ENotifyFilterType>	NotifyFilterType;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 153	Size: 3
		int32_t	NotifyFilterLOD;		//Offset: 156	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTriggerOnDedicatedServer;		//Offset: 160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTriggerOnFollower;		//Offset: 161	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[2];		//Offset: 162	Size: 2
		int32_t	TrackIndex;		//Offset: 164	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[16];		//Offset: 168	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BranchingPointMarker
	// Size 12
	/////////////////////////////////////////////
	struct FBranchingPointMarker {
		int32_t	NotifyIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TriggerTime;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAnimNotifyEventType>	NotifyEventType;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BranchingPoint
	// Super ScriptStruct Engine.AnimLinkableElement
	// Size 64
	// Size inherited 48
	/////////////////////////////////////////////
	struct FBranchingPoint : public FAnimLinkableElement {
		struct FName	EventName;		//Offset: 48	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DisplayTime;		//Offset: 56	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TriggerTimeOffset;		//Offset: 60	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SlotAnimationTrack
	// Size 24
	/////////////////////////////////////////////
	struct FSlotAnimationTrack {
		struct FName	SlotName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimTrack	AnimTrack;		//Offset: 8	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CompositeSection
	// Super ScriptStruct Engine.AnimLinkableElement
	// Size 88
	// Size inherited 48
	/////////////////////////////////////////////
	struct FCompositeSection : public FAnimLinkableElement {
		struct FName	SectionName;		//Offset: 48	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StartTime;		//Offset: 56	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NextSectionName;		//Offset: 60	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 68	Size: 4
		TArray<class UAnimMetaData*>	MetaData;		//Offset: 72	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 208
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base {
		struct FPoseLink	Base;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink	Additive;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EAnimAlphaInputType	AlphaInputType;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 49	Size: 3
		float	Alpha;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAlphaBoolEnabled : 1;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[8];		//Offset: 56	Size: 8
		struct FInputAlphaBoolBlend	AlphaBoolBlend;		//Offset: 64	Size: 72	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FName	AlphaCurveName;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias	AlphaScaleBias;		//Offset: 144	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp	AlphaScaleBiasClamp;		//Offset: 152	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t	LODThreshold;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 204	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_CustomProperty
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 88
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_CustomProperty : public FAnimNode_Base {
		TArray<struct FName>	SourcePropertyNames;		//Offset: 16	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FName>	DestPropertyNames;		//Offset: 32	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UObject* TargetInstance;		//Offset: 48	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_0[32];		//Offset: 56	Size: 32
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_Inertialization
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 112
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_Inertialization : public FAnimNode_Base {
		struct FPoseLink	Source;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[80];		//Offset: 32	Size: 80
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InertializationPoseDiff
	// Size 40
	/////////////////////////////////////////////
	struct FInertializationPoseDiff {
		unsigned char uknownData_0[40];		//Offset: 0	Size: 40
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InertializationCurveDiff
	// Size 8
	/////////////////////////////////////////////
	struct FInertializationCurveDiff {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InertializationBoneDiff
	// Size 60
	/////////////////////////////////////////////
	struct FInertializationBoneDiff {
		unsigned char uknownData_0[60];		//Offset: 0	Size: 60
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InertializationPose
	// Size 160
	/////////////////////////////////////////////
	struct FInertializationPose {
		unsigned char uknownData_0[160];		//Offset: 0	Size: 160
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_LinkedAnimGraph
	// Super ScriptStruct Engine.AnimNode_CustomProperty
	// Size 160
	// Size inherited 88
	/////////////////////////////////////////////
	struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty {
		TArray<struct FPoseLink>	InputPoses;		//Offset: 88	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	InputPoseNames;		//Offset: 104	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimInstance* InstanceClass;		//Offset: 120	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Tag;		//Offset: 128	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[20];		//Offset: 136	Size: 20
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReceiveNotifiesFromLinkedInstances : 1;		//Offset: 156	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bPropagateNotifiesToLinkedInstances : 1;		//Offset: 156	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 156	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_LinkedAnimLayer
	// Super ScriptStruct Engine.AnimNode_LinkedAnimGraph
	// Size 176
	// Size inherited 160
	/////////////////////////////////////////////
	struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph {
		class UAnimLayerInterface* Interface;		//Offset: 160	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Layer;		//Offset: 168	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_LinkedInputPose
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 280
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_LinkedInputPose : public FAnimNode_Base {
		struct FName	Name;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Graph;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseLink	InputPose;		//Offset: 32	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[232];		//Offset: 48	Size: 232
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_SaveCachedPose
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 344
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_SaveCachedPose : public FAnimNode_Base {
		struct FPoseLink	Pose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FName	CachePoseName;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[304];		//Offset: 40	Size: 304
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_SequencePlayer
	// Super ScriptStruct Engine.AnimNode_AssetPlayerBase
	// Size 128
	// Size inherited 56
	/////////////////////////////////////////////
	struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase {
		class UAnimSequenceBase* Sequence;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PlayRateBasis;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PlayRate;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp	PlayRateScaleBiasClamp;		//Offset: 72	Size: 48	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float	StartPosition;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bLoopAnimation;		//Offset: 124	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 125	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_StateMachine
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 176
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_StateMachine : public FAnimNode_Base {
		int32_t	StateMachineIndexInClass;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxTransitionsPerFrame;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bSkipFirstUpdateTransition;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bReinitializeOnBecomingRelevant;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[150];		//Offset: 26	Size: 150
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationPotentialTransition
	// Size 48
	/////////////////////////////////////////////
	struct FAnimationPotentialTransition {
		unsigned char uknownData_0[48];		//Offset: 0	Size: 48
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationActiveTransitionEntry
	// Size 200
	/////////////////////////////////////////////
	struct FAnimationActiveTransitionEntry {
		unsigned char uknownData_0[184];		//Offset: 0	Size: 184
		class UBlendProfile* BlendProfile;		//Offset: 184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[8];		//Offset: 192	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 248
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base {
		unsigned char uknownData_0[216];		//Offset: 16	Size: 216
		int32_t	FramesToCachePose;		//Offset: 232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 236	Size: 4
		TEnumAsByte<EEvaluatorDataSource>	DataSource;		//Offset: 240	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EEvaluatorMode>	EvaluatorMode;		//Offset: 241	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[6];		//Offset: 242	Size: 6
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_TransitionResult
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 40
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_TransitionResult : public FAnimNode_Base {
		bool	bCanEnterTransition;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[23];		//Offset: 17	Size: 23
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_UseCachedPose
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 40
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_UseCachedPose : public FAnimNode_Base {
		struct FPoseLink	LinkToCachingNode;		//Offset: 16	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FName	CachePoseName;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExposedValueHandler
	// Size 80
	/////////////////////////////////////////////
	struct FExposedValueHandler {
		struct FName	BoundFunction;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExposedValueCopyRecord>	CopyRecords;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		class UFunction* Function;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class FNone>	ValueHandlerNodeProperty;		//Offset: 32	Size: 32	Flags: HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 64	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExposedValueCopyRecord
	// Size 8
	/////////////////////////////////////////////
	struct FExposedValueCopyRecord {
		int32_t	CopyIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPostCopyOperation	PostCopyOperation;		//Offset: 4	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 32
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base {
		struct FPoseLink	LocalPose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 32
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base {
		struct FComponentSpacePoseLink	ComponentPose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNotifyQueue
	// Size 112
	/////////////////////////////////////////////
	struct FAnimNotifyQueue {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
		TArray<struct FAnimNotifyEventReference>	AnimNotifies;		//Offset: 16	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TMap<struct FName, struct FAnimNotifyArray>	UnfilteredMontageAnimNotifies;		//Offset: 32	Size: 80	Flags: Transient, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNotifyArray
	// Size 16
	/////////////////////////////////////////////
	struct FAnimNotifyArray {
		TArray<struct FAnimNotifyEventReference>	Notifies;		//Offset: 0	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNotifyEventReference
	// Size 16
	/////////////////////////////////////////////
	struct FAnimNotifyEventReference {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		class UObject* NotifySource;		//Offset: 8	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CompressedTrack
	// Size 56
	/////////////////////////////////////////////
	struct FCompressedTrack {
		TArray<unsigned char>	ByteStream;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>	Times;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		float	Mins[3];		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Ranges[3];		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CurveTrack
	// Size 24
	/////////////////////////////////////////////
	struct FCurveTrack {
		struct FName	CurveName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>	CurveWeights;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ScaleTrack
	// Size 32
	/////////////////////////////////////////////
	struct FScaleTrack {
		TArray<struct FVector>	ScaleKeys;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>	Times;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RotationTrack
	// Size 32
	/////////////////////////////////////////////
	struct FRotationTrack {
		TArray<struct FQuat>	RotKeys;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>	Times;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TranslationTrack
	// Size 32
	/////////////////////////////////////////////
	struct FTranslationTrack {
		TArray<struct FVector>	PosKeys;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>	Times;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSequenceTrackContainer
	// Size 32
	/////////////////////////////////////////////
	struct FAnimSequenceTrackContainer {
		TArray<struct FRawAnimSequenceTrack>	AnimationTracks;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	TrackNames;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RawAnimSequenceTrack
	// Size 48
	/////////////////////////////////////////////
	struct FRawAnimSequenceTrack {
		TArray<struct FVector>	PosKeys;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>	RotKeys;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>	ScaleKeys;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSetMeshLinkup
	// Size 16
	/////////////////////////////////////////////
	struct FAnimSetMeshLinkup {
		TArray<int32_t>	BoneToTrackTable;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSingleNodeInstanceProxy
	// Super ScriptStruct Engine.AnimInstanceProxy
	// Size 2240
	// Size inherited 1904
	/////////////////////////////////////////////
	struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy {
		unsigned char uknownData_0[336];		//Offset: 1904	Size: 336
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNode_SingleNode
	// Super ScriptStruct Engine.AnimNode_Base
	// Size 48
	// Size inherited 16
	/////////////////////////////////////////////
	struct FAnimNode_SingleNode : public FAnimNode_Base {
		struct FPoseLink	SourcePose;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 32	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedAnimationStateMachine
	// Size 48
	/////////////////////////////////////////////
	struct FBakedAnimationStateMachine {
		struct FName	MachineName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InitialState;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		TArray<struct FBakedAnimationState>	States;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimationTransitionBetweenStates>	Transitions;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationStateBase
	// Size 8
	/////////////////////////////////////////////
	struct FAnimationStateBase {
		struct FName	StateName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationTransitionBetweenStates
	// Super ScriptStruct Engine.AnimationStateBase
	// Size 64
	// Size inherited 8
	/////////////////////////////////////////////
	struct FAnimationTransitionBetweenStates : public FAnimationStateBase {
		int32_t	PreviousState;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NextState;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CrossfadeDuration;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	StartNotify;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	EndNotify;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InterruptNotify;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption	BlendMode;		//Offset: 32	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		class UCurveFloat* CustomCurve;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendProfile* BlendProfile;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETransitionLogicType>	LogicType;		//Offset: 56	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 57	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedAnimationState
	// Size 88
	/////////////////////////////////////////////
	struct FBakedAnimationState {
		struct FName	StateName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBakedStateExitTransition>	Transitions;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		int32_t	StateRootNodeIndex;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	StartNotify;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	EndNotify;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FullyBlendedNotify;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIsAConduit;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 41	Size: 3
		int32_t	EntryRuleNodeIndex;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>	PlayerNodeIndices;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>	LayerNodeIndices;		//Offset: 64	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		bool	bAlwaysResetOnEntry;		//Offset: 80	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 81	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedStateExitTransition
	// Size 32
	/////////////////////////////////////////////
	struct FBakedStateExitTransition {
		int32_t	CanTakeDelegateIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	CustomResultNodeIndex;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TransitionIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bDesiredTransitionReturnValue;		//Offset: 12	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAutomaticRemainingTimeRule;		//Offset: 13	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 14	Size: 2
		TArray<int32_t>	PoseEvaluatorLinks;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationState
	// Super ScriptStruct Engine.AnimationStateBase
	// Size 40
	// Size inherited 8
	/////////////////////////////////////////////
	struct FAnimationState : public FAnimationStateBase {
		TArray<struct FAnimationTransitionRule>	Transitions;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		int32_t	StateRootNodeIndex;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	StartNotify;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	EndNotify;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FullyBlendedNotify;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimationTransitionRule
	// Size 16
	/////////////////////////////////////////////
	struct FAnimationTransitionRule {
		struct FName	RuleToExecute;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	TransitionReturnVal;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		int32_t	TransitionIndex;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TrackToSkeletonMap
	// Size 4
	/////////////////////////////////////////////
	struct FTrackToSkeletonMap {
		int32_t	BoneTreeIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MarkerSyncData
	// Size 32
	/////////////////////////////////////////////
	struct FMarkerSyncData {
		TArray<struct FAnimSyncMarker>	AuthoredSyncMarkers;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 16	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSyncMarker
	// Size 12
	/////////////////////////////////////////////
	struct FAnimSyncMarker {
		struct FName	MarkerName;		//Offset: 0	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Time;		//Offset: 8	Size: 4	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimNotifyTrack
	// Size 56
	/////////////////////////////////////////////
	struct FAnimNotifyTrack {
		struct FName	TrackName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	TrackColor;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[32];		//Offset: 24	Size: 32
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PerBoneBlendWeights
	// Size 16
	/////////////////////////////////////////////
	struct FPerBoneBlendWeights {
		TArray<struct FPerBoneBlendWeight>	BoneBlendWeights;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AssetImportInfo
	// Size 1
	/////////////////////////////////////////////
	struct FAssetImportInfo {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrimaryAssetRules
	// Size 12
	/////////////////////////////////////////////
	struct FPrimaryAssetRules {
		int32_t	Priority;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ChunkId;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bApplyRecursively;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrimaryAssetCookRule	CookRule;		//Offset: 9	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 10	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
	// Size 56
	/////////////////////////////////////////////
	struct FPrimaryAssetRulesCustomOverride {
		struct FPrimaryAssetType	PrimaryAssetType;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath	FilterDirectory;		//Offset: 8	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FString	FilterString;		//Offset: 24	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetRules	Rules;		//Offset: 40	Size: 12	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 52	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrimaryAssetRulesOverride
	// Size 28
	/////////////////////////////////////////////
	struct FPrimaryAssetRulesOverride {
		struct FPrimaryAssetId	PrimaryAssetId;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetRules	Rules;		//Offset: 16	Size: 12	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AssetManagerRedirect
	// Size 32
	/////////////////////////////////////////////
	struct FAssetManagerRedirect {
		struct FString	Old;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	New;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AssetManagerSearchRules
	// Size 80
	/////////////////////////////////////////////
	struct FAssetManagerSearchRules {
		TArray<struct FString>	AssetScanPaths;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	IncludePatterns;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	ExcludePatterns;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UObject* AssetBaseClass;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bHasBlueprintClasses;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bForceSynchronousScan;		//Offset: 57	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bSkipVirtualPathExpansion;		//Offset: 58	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bSkipManagerIncludeCheck;		//Offset: 59	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[20];		//Offset: 60	Size: 20
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrimaryAssetTypeInfo
	// Size 136
	/////////////////////////////////////////////
	struct FPrimaryAssetTypeInfo {
		struct FName	PrimaryAssetType;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UClass>	AssetBaseClass;		//Offset: 8	Size: 40	Flags: Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject* AssetBaseClassLoaded;		//Offset: 48	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bHasBlueprintClasses;		//Offset: 56	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIsEditorOnly;		//Offset: 57	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[6];		//Offset: 58	Size: 6
		TArray<struct FDirectoryPath>	Directories;		//Offset: 64	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FSoftObjectPath>	SpecificAssets;		//Offset: 80	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FPrimaryAssetRules	Rules;		//Offset: 96	Size: 12	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 108	Size: 4
		TArray<struct FString>	AssetScanPaths;		//Offset: 112	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool	bIsDynamicAsset;		//Offset: 128	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 129	Size: 3
		int32_t	NumberOfAssets;		//Offset: 132	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AssetMapping
	// Size 16
	/////////////////////////////////////////////
	struct FAssetMapping {
		class UAnimationAsset* SourceAsset;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimationAsset* TargetAsset;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AtmospherePrecomputeInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 352
	// Size inherited 184
	/////////////////////////////////////////////
	struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData {
		unsigned char uknownData_0[168];		//Offset: 184	Size: 168
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AtmospherePrecomputeParameters
	// Size 44
	/////////////////////////////////////////////
	struct FAtmospherePrecomputeParameters {
		float	DensityHeight;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DecayHeight;		//Offset: 4	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxScatteringOrder;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TransmittanceTexWidth;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TransmittanceTexHeight;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	IrradianceTexWidth;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	IrradianceTexHeight;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InscatterAltitudeSampleNum;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InscatterMuNum;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InscatterMuSNum;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InscatterNuNum;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BaseAttenuationSettings
	// Size 176
	/////////////////////////////////////////////
	struct FBaseAttenuationSettings {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		EAttenuationDistanceModel	DistanceAlgorithm;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAttenuationShape>	AttenuationShape;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 10	Size: 2
		float	dBAttenuationAtMax;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENaturalSoundFalloffMode	FalloffMode;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 17	Size: 3
		struct FVector	AttenuationShapeExtents;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ConeOffset;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FalloffDistance;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve	CustomAttenuationCurve;		//Offset: 40	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioComponentParam
	// Size 32
	/////////////////////////////////////////////
	struct FAudioComponentParam {
		struct FName	ParamName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FloatParam;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	BoolParam;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 13	Size: 3
		int32_t	IntParam;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
		class USoundWave* SoundWaveParam;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioEffectParameters
	// Size 8
	/////////////////////////////////////////////
	struct FAudioEffectParameters {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioReverbEffect
	// Super ScriptStruct Engine.AudioEffectParameters
	// Size 72
	// Size inherited 8
	/////////////////////////////////////////////
	struct FAudioReverbEffect : public FAudioEffectParameters {
		unsigned char uknownData_0[64];		//Offset: 8	Size: 64
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DefaultAudioBusSettings
	// Size 24
	/////////////////////////////////////////////
	struct FDefaultAudioBusSettings {
		struct FSoftObjectPath	AudioBus;		//Offset: 0	Size: 24	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundDebugEntry
	// Size 32
	/////////////////////////////////////////////
	struct FSoundDebugEntry {
		struct FName	DebugName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath	Sound;		//Offset: 8	Size: 24	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioQualitySettings
	// Size 32
	/////////////////////////////////////////////
	struct FAudioQualitySettings {
		struct FText	DisplayName;		//Offset: 0	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
		int32_t	MaxChannels;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InteriorSettings
	// Size 36
	/////////////////////////////////////////////
	struct FInteriorSettings {
		bool	bIsWorldSettings;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	ExteriorVolume;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ExteriorTime;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ExteriorLPF;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ExteriorLPFTime;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InteriorVolume;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InteriorTime;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InteriorLPF;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InteriorLPFTime;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioVolumeSubmixOverrideSettings
	// Size 32
	/////////////////////////////////////////////
	struct FAudioVolumeSubmixOverrideSettings {
		class USoundSubmix* Submix;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundEffectSubmixPreset*>	SubmixEffectChain;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float	CrossfadeTime;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioVolumeSubmixSendSettings
	// Size 24
	/////////////////////////////////////////////
	struct FAudioVolumeSubmixSendSettings {
		EAudioVolumeLocationState	ListenerLocationState;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioVolumeLocationState	SourceLocationState;		//Offset: 1	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		TArray<struct FSoundSubmixSendInfo>	SubmixSends;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundSubmixSendInfo
	// Size 176
	/////////////////////////////////////////////
	struct FSoundSubmixSendInfo {
		ESendLevelControlMethod	SendLevelControlMethod;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixSendStage	SendStage;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[6];		//Offset: 2	Size: 6
		class USoundSubmixBase* SoundSubmix;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SendLevel;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinSendLevel;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxSendLevel;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinSendDistance;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxSendDistance;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 36	Size: 4
		struct FRuntimeFloatCurve	CustomSendLevelCurve;		//Offset: 40	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FilePath
	// Size 16
	/////////////////////////////////////////////
	struct FFilePath {
		struct FString	FilePath;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LaunchOnTestSettings
	// Size 32
	/////////////////////////////////////////////
	struct FLaunchOnTestSettings {
		struct FFilePath	LaunchOnTestmap;		//Offset: 0	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FString	DeviceID;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EditorMapPerformanceTestDefinition
	// Size 32
	/////////////////////////////////////////////
	struct FEditorMapPerformanceTestDefinition {
		struct FSoftObjectPath	PerformanceTestmap;		//Offset: 0	Size: 24	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TestTimer;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EditorImportWorkflowDefinition
	// Size 32
	/////////////////////////////////////////////
	struct FEditorImportWorkflowDefinition {
		struct FFilePath	ImportFilePath;		//Offset: 0	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FImportFactorySettingValues>	FactorySettings;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
	// Size 336
	/////////////////////////////////////////////
	struct FBuildPromotionImportWorkflowSettings {
		struct FEditorImportWorkflowDefinition	Diffuse;		//Offset: 0	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	Normal;		//Offset: 32	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	StaticMesh;		//Offset: 64	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	ReimportStaticMesh;		//Offset: 96	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	BlendShapeMesh;		//Offset: 128	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	MorphMesh;		//Offset: 160	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	SkeletalMesh;		//Offset: 192	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	Animation;		//Offset: 224	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	Sound;		//Offset: 256	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FEditorImportWorkflowDefinition	SurroundSound;		//Offset: 288	Size: 32	Flags: Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FEditorImportWorkflowDefinition>	OtherAssetsToImport;		//Offset: 320	Size: 16	Flags: Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BuildPromotionOpenAssetSettings
	// Size 96
	/////////////////////////////////////////////
	struct FBuildPromotionOpenAssetSettings {
		struct FFilePath	BlueprintAsset;		//Offset: 0	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath	MaterialAsset;		//Offset: 16	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath	ParticleSystemAsset;		//Offset: 32	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath	SkeletalMeshAsset;		//Offset: 48	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath	StaticMeshAsset;		//Offset: 64	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath	TextureAsset;		//Offset: 80	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BuildPromotionNewProjectSettings
	// Size 32
	/////////////////////////////////////////////
	struct FBuildPromotionNewProjectSettings {
		struct FDirectoryPath	NewProjectFolderOverride;		//Offset: 0	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FString	NewProjectNameOverride;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BuildPromotionTestSettings
	// Size 496
	/////////////////////////////////////////////
	struct FBuildPromotionTestSettings {
		struct FFilePath	DefaultStaticMeshAsset;		//Offset: 0	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FBuildPromotionImportWorkflowSettings	ImportWorkflow;		//Offset: 16	Size: 336	Flags: Edit, NativeAccessSpecifierPublic
		struct FBuildPromotionOpenAssetSettings	OpenAssets;		//Offset: 352	Size: 96	Flags: Edit, NativeAccessSpecifierPublic
		struct FBuildPromotionNewProjectSettings	NewProjectSettings;		//Offset: 448	Size: 32	Flags: Edit, NativeAccessSpecifierPublic
		struct FFilePath	SourceControlMaterial;		//Offset: 480	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ImportFactorySettingValues
	// Size 32
	/////////////////////////////////////////////
	struct FImportFactorySettingValues {
		struct FString	SettingName;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Value;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintEditorPromotionSettings
	// Size 48
	/////////////////////////////////////////////
	struct FBlueprintEditorPromotionSettings {
		struct FFilePath	FirstMeshPath;		//Offset: 0	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FFilePath	SecondMeshPath;		//Offset: 16	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FFilePath	DefaultParticleAsset;		//Offset: 32	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleEditorPromotionSettings
	// Size 16
	/////////////////////////////////////////////
	struct FParticleEditorPromotionSettings {
		struct FFilePath	DefaultParticleAsset;		//Offset: 0	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialEditorPromotionSettings
	// Size 48
	/////////////////////////////////////////////
	struct FMaterialEditorPromotionSettings {
		struct FFilePath	DefaultMaterialAsset;		//Offset: 0	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FFilePath	DefaultDiffuseTexture;		//Offset: 16	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
		struct FFilePath	DefaultNormalTexture;		//Offset: 32	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EditorImportExportTestDefinition
	// Size 56
	/////////////////////////////////////////////
	struct FEditorImportExportTestDefinition {
		struct FFilePath	ImportFilePath;		//Offset: 0	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FString	ExportFileExtension;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bSkipExport;		//Offset: 32	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
		TArray<struct FImportFactorySettingValues>	FactorySettings;		//Offset: 40	Size: 16	Flags: Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExternalToolDefinition
	// Size 96
	/////////////////////////////////////////////
	struct FExternalToolDefinition {
		struct FString	ToolName;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilePath	ExecutablePath;		//Offset: 16	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FString	CommandLineOptions;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath	WorkingDirectory;		//Offset: 48	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
		struct FString	ScriptExtension;		//Offset: 64	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath	ScriptDirectory;		//Offset: 80	Size: 16	Flags: Edit, Config, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavAvoidanceData
	// Size 60
	/////////////////////////////////////////////
	struct FNavAvoidanceData {
		unsigned char uknownData_0[60];		//Offset: 0	Size: 60
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BandwidthTestGenerator
	// Size 32
	/////////////////////////////////////////////
	struct FBandwidthTestGenerator {
		TArray<struct FBandwidthTestItem>	ReplicatedBuffers;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 16	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BandwidthTestItem
	// Size 16
	/////////////////////////////////////////////
	struct FBandwidthTestItem {
		TArray<unsigned char>	Kilobyte;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlendProfileBoneEntry
	// Size 20
	/////////////////////////////////////////////
	struct FBlendProfileBoneEntry {
		struct FBoneReference	BoneReference;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		float	BlendScale;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PerBoneInterpolation
	// Size 20
	/////////////////////////////////////////////
	struct FPerBoneInterpolation {
		struct FBoneReference	BoneReference;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		float	InterpolationSpeedPerSec;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EditorElement
	// Size 24
	/////////////////////////////////////////////
	struct FEditorElement {
		int32_t	Indices[3];		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Weights[3];		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GridBlendSample
	// Size 28
	/////////////////////////////////////////////
	struct FGridBlendSample {
		struct FEditorElement	GridElement;		//Offset: 0	Size: 24	Flags: NoDestructor, NativeAccessSpecifierPublic
		float	BlendWeight;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlendSample
	// Size 24
	/////////////////////////////////////////////
	struct FBlendSample {
		class UAnimSequence* Animation;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	SampleValue;		//Offset: 8	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RateScale;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlendParameter
	// Size 32
	/////////////////////////////////////////////
	struct FBlendParameter {
		struct FString	DisplayName;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Min;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Max;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	GridNum;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InterpolationParameter
	// Size 8
	/////////////////////////////////////////////
	struct FInterpolationParameter {
		float	InterpolationTime;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EFilterInterpolationType>	InterpolationType;		//Offset: 4	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BPEditorBookmarkNode
	// Size 56
	/////////////////////////////////////////////
	struct FBPEditorBookmarkNode {
		struct FGuid	NodeGuid;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ParentGuid;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FText	DisplayName;		//Offset: 32	Size: 24	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EditedDocumentInfo
	// Size 48
	/////////////////////////////////////////////
	struct FEditedDocumentInfo {
		struct FSoftObjectPath	EditedObjectPath;		//Offset: 0	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	SavedViewOffset;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SavedZoomAmount;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
		class UObject* EditedObject;		//Offset: 40	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BPInterfaceDescription
	// Size 24
	/////////////////////////////////////////////
	struct FBPInterfaceDescription {
		class UInterface* Interface;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UEdGraph*>	Graphs;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EdGraphTerminalType
	// Size 28
	/////////////////////////////////////////////
	struct FEdGraphTerminalType {
		struct FName	TerminalCategory;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	TerminalSubCategory;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>	TerminalSubCategoryObject;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTerminalIsConst;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTerminalIsWeakPointer;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTerminalIsUObjectWrapper;		//Offset: 26	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 27	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EdGraphPinType
	// Size 88
	/////////////////////////////////////////////
	struct FEdGraphPinType {
		struct FName	PinCategory;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	PinSubCategory;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>	PinSubCategoryObject;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimpleMemberReference	PinSubCategoryMemberReference;		//Offset: 24	Size: 32	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FEdGraphTerminalType	PinValueType;		//Offset: 56	Size: 28	Flags: NoDestructor, NativeAccessSpecifierPublic
		EPinContainerType	ContainerType;		//Offset: 84	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsArray : 1;		//Offset: 85	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsReference : 1;		//Offset: 85	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsConst : 1;		//Offset: 85	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsWeakPointer : 1;		//Offset: 85	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsUObjectWrapper : 1;		//Offset: 85	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 85	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BPVariableDescription
	// Size 208
	/////////////////////////////////////////////
	struct FBPVariableDescription {
		struct FName	VarName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	VarGuid;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEdGraphPinType	VarType;		//Offset: 24	Size: 88	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FString	FriendlyName;		//Offset: 112	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FText	Category;		//Offset: 128	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
		uint64_t	PropertyFlags;		//Offset: 152	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	RepNotifyFunc;		//Offset: 160	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ELifetimeCondition>	ReplicationCondition;		//Offset: 168	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 169	Size: 7
		TArray<struct FBPVariableMetaDataEntry>	MetaDataArray;		//Offset: 176	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FString	DefaultValue;		//Offset: 192	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BPVariableMetaDataEntry
	// Size 24
	/////////////////////////////////////////////
	struct FBPVariableMetaDataEntry {
		struct FName	DataKey;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	DataValue;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintMacroCosmeticInfo
	// Size 1
	/////////////////////////////////////////////
	struct FBlueprintMacroCosmeticInfo {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CompilerNativizationOptions
	// Size 128
	/////////////////////////////////////////////
	struct FCompilerNativizationOptions {
		struct FName	PlatformName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	ServerOnlyPlatform;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	ClientOnlyPlatform;		//Offset: 9	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bExcludeMonolithicHeaders;		//Offset: 10	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[5];		//Offset: 11	Size: 5
		TArray<struct FName>	ExcludedModules;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TAssetPtr<class FNone_500>	ExcludedAssets;		//Offset: 32	Size: 80	Flags: NativeAccessSpecifierPublic
		TArray<struct FString>	ExcludedFolderPaths;		//Offset: 112	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BPComponentClassOverride
	// Size 16
	/////////////////////////////////////////////
	struct FBPComponentClassOverride {
		struct FName	ComponentName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* ComponentClass;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintCookedComponentInstancingData
	// Size 72
	/////////////////////////////////////////////
	struct FBlueprintCookedComponentInstancingData {
		TArray<struct FBlueprintComponentChangedPropertyInfo>	ChangedPropertyList;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[17];		//Offset: 16	Size: 17
		bool	bHasValidCookedData;		//Offset: 33	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[38];		//Offset: 34	Size: 38
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
	// Size 24
	/////////////////////////////////////////////
	struct FBlueprintComponentChangedPropertyInfo {
		struct FName	PropertyName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ArrayIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		class UStruct* PropertyScope;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EventGraphFastCallPair
	// Size 16
	/////////////////////////////////////////////
	struct FEventGraphFastCallPair {
		class UFunction* FunctionToPatch;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	EventGraphCallOffset;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintDebugData
	// Size 1
	/////////////////////////////////////////////
	struct FBlueprintDebugData {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PointerToUberGraphFrame
	// Size 8
	/////////////////////////////////////////////
	struct FPointerToUberGraphFrame {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DebuggingInfoForSingleFunction
	// Size 400
	/////////////////////////////////////////////
	struct FDebuggingInfoForSingleFunction {
		unsigned char uknownData_0[400];		//Offset: 0	Size: 400
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NodeToCodeAssociation
	// Size 20
	/////////////////////////////////////////////
	struct FNodeToCodeAssociation {
		unsigned char uknownData_0[20];		//Offset: 0	Size: 20
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimCurveType
	// Size 2
	/////////////////////////////////////////////
	struct FAnimCurveType {
		unsigned char uknownData_0[2];		//Offset: 0	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BookmarkBaseJumpToSettings
	// Size 1
	/////////////////////////////////////////////
	struct FBookmarkBaseJumpToSettings {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BookmarkJumpToSettings
	// Super ScriptStruct Engine.BookmarkBaseJumpToSettings
	// Size 1
	// Size inherited 1
	/////////////////////////////////////////////
	struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Bookmark2DJumpToSettings
	// Size 1
	/////////////////////////////////////////////
	struct FBookmark2DJumpToSettings {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GeomSelection
	// Size 12
	/////////////////////////////////////////////
	struct FGeomSelection {
		int32_t	Type;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Index;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SelectionIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BuilderPoly
	// Size 32
	/////////////////////////////////////////////
	struct FBuilderPoly {
		TArray<int32_t>	VertexIndices;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		int32_t	Direction;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ItemName;		//Offset: 20	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PolyFlags;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedAnimTransitionData
	// Size 36
	/////////////////////////////////////////////
	struct FCachedAnimTransitionData {
		struct FName	StateMachineName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	FromStateName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ToStateName;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[12];		//Offset: 24	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedAnimRelevancyData
	// Size 28
	/////////////////////////////////////////////
	struct FCachedAnimRelevancyData {
		struct FName	StateMachineName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	StateName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[12];		//Offset: 16	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedAnimAssetPlayerData
	// Size 24
	/////////////////////////////////////////////
	struct FCachedAnimAssetPlayerData {
		struct FName	StateMachineName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	StateName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 16	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedAnimStateArray
	// Size 24
	/////////////////////////////////////////////
	struct FCachedAnimStateArray {
		TArray<struct FCachedAnimStateData>	States;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 16	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedAnimStateData
	// Size 28
	/////////////////////////////////////////////
	struct FCachedAnimStateData {
		struct FName	StateMachineName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	StateName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[12];		//Offset: 16	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActiveCameraShakeInfo
	// Size 24
	/////////////////////////////////////////////
	struct FActiveCameraShakeInfo {
		class UCameraShakeBase* ShakeInstance;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UCameraShakeSourceComponent>	ShakeSource;		//Offset: 8	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIsCustomInitialized;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 17	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PooledCameraShakes
	// Size 16
	/////////////////////////////////////////////
	struct FPooledCameraShakes {
		TArray<class UCameraShakeBase*>	PooledShakes;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeDuration
	// Size 8
	/////////////////////////////////////////////
	struct FCameraShakeDuration {
		float	Duration;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECameraShakeDurationType	Type;		//Offset: 4	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeInfo
	// Size 16
	/////////////////////////////////////////////
	struct FCameraShakeInfo {
		struct FCameraShakeDuration	Duration;		//Offset: 0	Size: 8	Flags: NoDestructor, NativeAccessSpecifierPublic
		float	BlendIn;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlendOut;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeStopParams
	// Size 1
	/////////////////////////////////////////////
	struct FCameraShakeStopParams {
		bool	bImmediately;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeUpdateResult
	// Size 1424
	/////////////////////////////////////////////
	struct FCameraShakeUpdateResult {
		unsigned char uknownData_0[1424];		//Offset: 0	Size: 1424
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.WeightedBlendables
	// Size 16
	/////////////////////////////////////////////
	struct FWeightedBlendables {
		TArray<struct FWeightedBlendable>	Array;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PostProcessSettings
	// Size 1376
	/////////////////////////////////////////////
	struct FPostProcessSettings {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_TemperatureType : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_WhiteTemp : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_WhiteTint : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorSaturation : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorContrast : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGamma : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGain : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorOffset : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorSaturationMidtones : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorContrastMidtones : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGammaMidtones : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorSaturationShadows : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorContrastShadows : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGammaShadows : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGainShadows : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorOffsetShadows : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 1	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGainMidtones : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorOffsetMidtones : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorSaturationHighlights : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorContrastHighlights : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGammaHighlights : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGainHighlights : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorOffsetHighlights : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorCorrectionShadowsMax : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[1];		//Offset: 2	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorCorrectionHighlightsMin : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BlueCorrection : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ExpandGamut : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ToneCurveAmount : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmWhitePoint : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmSaturation : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmChannelMixerRed : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmChannelMixerGreen : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[1];		//Offset: 3	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmChannelMixerBlue : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmContrast : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmDynamicRange : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmHealAmount : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmToeAmount : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmShadowTint : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmShadowTintBlend : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmShadowTintAmount : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[1];		//Offset: 4	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_SceneFringeIntensity : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ChromaticAberrationStartOffset : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmSlope : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmToe : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmShoulder : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmBlackClip : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_FilmWhiteClip : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_SceneColorTint : 1;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_5[1];		//Offset: 5	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientCubemapTint : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientCubemapIntensity : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomMethod : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomIntensity : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomThreshold : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom1Tint : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom1Size : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom2Size : 1;		//Offset: 6	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_6[1];		//Offset: 6	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom2Tint : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom3Tint : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom3Size : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom4Tint : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom4Size : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom5Tint : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom5Size : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom6Tint : 1;		//Offset: 7	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_7[1];		//Offset: 7	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_Bloom6Size : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomSizeScale : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionTexture : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionSize : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionCenterUV : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionPreFilter : 1;		//Offset: 8	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionPreFilterMin : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionPreFilterMax : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_8[1];		//Offset: 8	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureMethod : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionPreFilterMult : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomConvolutionBufferScale : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomDirtMaskIntensity : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomDirtMaskTint : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BloomDirtMask : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_CameraShutterSpeed : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_CameraISO : 1;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_9[1];		//Offset: 9	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureLowPercent : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureHighPercent : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureMinBrightness : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureMaxBrightness : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureCalibrationConstant : 1;		//Offset: 10	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureSpeedUp : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureSpeedDown : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureBias : 1;		//Offset: 10	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_10[1];		//Offset: 10	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureBiasCurve : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureMeterMask : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureApplyPhysicalCameraExposure : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_HistogramLogMin : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_HistogramLogMax : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LensFlareIntensity : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LensFlareTint : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LensFlareTints : 1;		//Offset: 11	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_11[1];		//Offset: 11	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LensFlareBokehSize : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LensFlareBokehShape : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LensFlareThreshold : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_VignetteIntensity : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_GrainIntensity : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_GrainJitter : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionIntensity : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionStaticFraction : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_12[1];		//Offset: 12	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionRadius : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionFadeDistance : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionFadeRadius : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionDistance : 1;		//Offset: 13	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionRadiusInWS : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionPower : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionBias : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionQuality : 1;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_13[1];		//Offset: 13	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionMipBlend : 1;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionMipScale : 1;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionMipThreshold : 1;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AmbientOcclusionTemporalBlendWeight : 1;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_14[2];		//Offset: 14	Size: 2
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingAO : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingAOSamplesPerPixel : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingAOIntensity : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingAORadius : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_15[4];		//Offset: 16	Size: 4
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVIntensity : 1;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVDirectionalOcclusionIntensity : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVDirectionalOcclusionRadius : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVDiffuseOcclusionExponent : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVSpecularOcclusionExponent : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVDiffuseOcclusionIntensity : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVSpecularOcclusionIntensity : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVSize : 1;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_16[1];		//Offset: 20	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVSecondaryOcclusionIntensity : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVSecondaryBounceIntensity : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVGeometryVolumeBias : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVVplInjectionBias : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVEmissiveInjectionIntensity : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVFadeRange : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_LPVDirectionalOcclusionFadeRange : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_IndirectLightingColor : 1;		//Offset: 21	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_17[1];		//Offset: 21	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_IndirectLightingIntensity : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGradingIntensity : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ColorGradingLUT : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldFocalDistance : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldFstop : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldMinFstop : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldBladeCount : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldSensorWidth : 1;		//Offset: 22	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_18[1];		//Offset: 22	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldDepthBlurAmount : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldFocalRegion : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldNearTransitionRegion : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldFarTransitionRegion : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldScale : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldNearBlurSize : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldFarBlurSize : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldDepthBlurRadius : 1;		//Offset: 23	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_19[1];		//Offset: 23	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_MobileHQGaussian : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldOcclusion : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldSkyFocusDistance : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DepthOfFieldVignetteSize : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_MotionBlurAmount : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_MotionBlurMax : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_MotionBlurTargetFPS : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_MotionBlurPerObjectSize : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_20[1];		//Offset: 24	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ScreenPercentage : 1;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ScreenSpaceReflectionIntensity : 1;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ScreenSpaceReflectionQuality : 1;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ScreenSpaceReflectionMaxRoughness : 1;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ScreenSpaceReflectionRoughnessScale : 1;		//Offset: 25	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_21[3];		//Offset: 25	Size: 3
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ReflectionsType : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingReflectionsMaxRoughness : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingReflectionsMaxBounces : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingReflectionsSamplesPerPixel : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingReflectionsShadows : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingReflectionsTranslucency : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_TranslucencyType : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingTranslucencyMaxRoughness : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_22[1];		//Offset: 28	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingGIMaxBounces : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingGISamplesPerPixel : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_PathTracingMaxBounces : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingTranslucencyRefractionRays : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingTranslucencySamplesPerPixel : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingTranslucencyShadows : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingTranslucencyRefraction : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_RayTracingGI : 1;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_23[1];		//Offset: 29	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_PathTracingSamplesPerPixel : 1;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_PathTracingFilterWidth : 1;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_PathTracingEnableEmissive : 1;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_PathTracingMaxPathExposure : 1;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_PathTracingEnableDenoiser : 1;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_24[2];		//Offset: 30	Size: 2
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bMobileHQGaussian : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_25[1];		//Offset: 32	Size: 1
		TEnumAsByte<EBloomMethod>	BloomMethod;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAutoExposureMethod>	AutoExposureMethod;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETemperatureMethod>	TemperatureType;		//Offset: 35	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WhiteTemp;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WhiteTint;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_26[4];		//Offset: 44	Size: 4
		struct FVector4	ColorSaturation;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorContrast;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGamma;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGain;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorOffset;		//Offset: 112	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorSaturationShadows;		//Offset: 128	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorContrastShadows;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGammaShadows;		//Offset: 160	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGainShadows;		//Offset: 176	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorOffsetShadows;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorSaturationMidtones;		//Offset: 208	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorContrastMidtones;		//Offset: 224	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGammaMidtones;		//Offset: 240	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGainMidtones;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorOffsetMidtones;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorSaturationHighlights;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorContrastHighlights;		//Offset: 304	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGammaHighlights;		//Offset: 320	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorGainHighlights;		//Offset: 336	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorOffsetHighlights;		//Offset: 352	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ColorCorrectionHighlightsMin;		//Offset: 368	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ColorCorrectionShadowsMax;		//Offset: 372	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlueCorrection;		//Offset: 376	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ExpandGamut;		//Offset: 380	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ToneCurveAmount;		//Offset: 384	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmSlope;		//Offset: 388	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmToe;		//Offset: 392	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmShoulder;		//Offset: 396	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmBlackClip;		//Offset: 400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmWhiteClip;		//Offset: 404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	FilmWhitePoint;		//Offset: 408	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	FilmShadowTint;		//Offset: 424	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmShadowTintBlend;		//Offset: 440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmShadowTintAmount;		//Offset: 444	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmSaturation;		//Offset: 448	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	FilmChannelMixerRed;		//Offset: 452	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	FilmChannelMixerGreen;		//Offset: 468	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	FilmChannelMixerBlue;		//Offset: 484	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmContrast;		//Offset: 500	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmToeAmount;		//Offset: 504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmHealAmount;		//Offset: 508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FilmDynamicRange;		//Offset: 512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	SceneColorTint;		//Offset: 516	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SceneFringeIntensity;		//Offset: 532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ChromaticAberrationStartOffset;		//Offset: 536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomIntensity;		//Offset: 540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomThreshold;		//Offset: 544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomSizeScale;		//Offset: 548	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bloom1Size;		//Offset: 552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bloom2Size;		//Offset: 556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bloom3Size;		//Offset: 560	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bloom4Size;		//Offset: 564	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bloom5Size;		//Offset: 568	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bloom6Size;		//Offset: 572	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Bloom1Tint;		//Offset: 576	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Bloom2Tint;		//Offset: 592	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Bloom3Tint;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Bloom4Tint;		//Offset: 624	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Bloom5Tint;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Bloom6Tint;		//Offset: 656	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomConvolutionSize;		//Offset: 672	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_27[4];		//Offset: 676	Size: 4
		class UTexture2D* BloomConvolutionTexture;		//Offset: 680	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	BloomConvolutionCenterUV;		//Offset: 688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomConvolutionPreFilterMin;		//Offset: 696	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomConvolutionPreFilterMax;		//Offset: 700	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomConvolutionPreFilterMult;		//Offset: 704	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomConvolutionBufferScale;		//Offset: 708	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture* BloomDirtMask;		//Offset: 712	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BloomDirtMaskIntensity;		//Offset: 720	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	BloomDirtMaskTint;		//Offset: 724	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	AmbientCubemapTint;		//Offset: 740	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientCubemapIntensity;		//Offset: 756	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureCube* AmbientCubemap;		//Offset: 760	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CameraShutterSpeed;		//Offset: 768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CameraISO;		//Offset: 772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldFstop;		//Offset: 776	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldMinFstop;		//Offset: 780	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	DepthOfFieldBladeCount;		//Offset: 784	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureBias;		//Offset: 788	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureBiasBackup;		//Offset: 792	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_AutoExposureBiasBackup : 1;		//Offset: 796	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_28[4];		//Offset: 796	Size: 4
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	AutoExposureApplyPhysicalCameraExposure : 1;		//Offset: 800	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_29[8];		//Offset: 800	Size: 8
		class UCurveFloat* AutoExposureBiasCurve;		//Offset: 808	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture* AutoExposureMeterMask;		//Offset: 816	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureLowPercent;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureHighPercent;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureMinBrightness;		//Offset: 832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureMaxBrightness;		//Offset: 836	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureSpeedUp;		//Offset: 840	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureSpeedDown;		//Offset: 844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HistogramLogMin;		//Offset: 848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HistogramLogMax;		//Offset: 852	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AutoExposureCalibrationConstant;		//Offset: 856	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LensFlareIntensity;		//Offset: 860	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	LensFlareTint;		//Offset: 864	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LensFlareBokehSize;		//Offset: 880	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LensFlareThreshold;		//Offset: 884	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture* LensFlareBokehShape;		//Offset: 888	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	LensFlareTints[8];		//Offset: 896	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VignetteIntensity;		//Offset: 1024	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	GrainJitter;		//Offset: 1028	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	GrainIntensity;		//Offset: 1032	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionIntensity;		//Offset: 1036	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionStaticFraction;		//Offset: 1040	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionRadius;		//Offset: 1044	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	AmbientOcclusionRadiusInWS : 1;		//Offset: 1048	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_30[4];		//Offset: 1048	Size: 4
		float	AmbientOcclusionFadeDistance;		//Offset: 1052	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionFadeRadius;		//Offset: 1056	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionDistance;		//Offset: 1060	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionPower;		//Offset: 1064	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionBias;		//Offset: 1068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionQuality;		//Offset: 1072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionMipBlend;		//Offset: 1076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionMipScale;		//Offset: 1080	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionMipThreshold;		//Offset: 1084	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionTemporalBlendWeight;		//Offset: 1088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	RayTracingAO : 1;		//Offset: 1092	Size: 1	Flags: Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_31[4];		//Offset: 1092	Size: 4
		int32_t	RayTracingAOSamplesPerPixel;		//Offset: 1096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RayTracingAOIntensity;		//Offset: 1100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RayTracingAORadius;		//Offset: 1104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	IndirectLightingColor;		//Offset: 1108	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	IndirectLightingIntensity;		//Offset: 1124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERayTracingGlobalIlluminationType	RayTracingGIType;		//Offset: 1128	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_32[3];		//Offset: 1129	Size: 3
		int32_t	RayTracingGIMaxBounces;		//Offset: 1132	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	RayTracingGISamplesPerPixel;		//Offset: 1136	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ColorGradingIntensity;		//Offset: 1140	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture* ColorGradingLUT;		//Offset: 1144	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldSensorWidth;		//Offset: 1152	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldFocalDistance;		//Offset: 1156	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldDepthBlurAmount;		//Offset: 1160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldDepthBlurRadius;		//Offset: 1164	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldFocalRegion;		//Offset: 1168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldNearTransitionRegion;		//Offset: 1172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldFarTransitionRegion;		//Offset: 1176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldScale;		//Offset: 1180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldNearBlurSize;		//Offset: 1184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldFarBlurSize;		//Offset: 1188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldOcclusion;		//Offset: 1192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldSkyFocusDistance;		//Offset: 1196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DepthOfFieldVignetteSize;		//Offset: 1200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MotionBlurAmount;		//Offset: 1204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MotionBlurMax;		//Offset: 1208	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MotionBlurTargetFPS;		//Offset: 1212	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MotionBlurPerObjectSize;		//Offset: 1216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVIntensity;		//Offset: 1220	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVVplInjectionBias;		//Offset: 1224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVSize;		//Offset: 1228	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVSecondaryOcclusionIntensity;		//Offset: 1232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVSecondaryBounceIntensity;		//Offset: 1236	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVGeometryVolumeBias;		//Offset: 1240	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVEmissiveInjectionIntensity;		//Offset: 1244	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVDirectionalOcclusionIntensity;		//Offset: 1248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVDirectionalOcclusionRadius;		//Offset: 1252	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVDiffuseOcclusionExponent;		//Offset: 1256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVSpecularOcclusionExponent;		//Offset: 1260	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVDiffuseOcclusionIntensity;		//Offset: 1264	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVSpecularOcclusionIntensity;		//Offset: 1268	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReflectionsType	ReflectionsType;		//Offset: 1272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_33[3];		//Offset: 1273	Size: 3
		float	ScreenSpaceReflectionIntensity;		//Offset: 1276	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ScreenSpaceReflectionQuality;		//Offset: 1280	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ScreenSpaceReflectionMaxRoughness;		//Offset: 1284	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RayTracingReflectionsMaxRoughness;		//Offset: 1288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	RayTracingReflectionsMaxBounces;		//Offset: 1292	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	RayTracingReflectionsSamplesPerPixel;		//Offset: 1296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReflectedAndRefractedRayTracedShadows	RayTracingReflectionsShadows;		//Offset: 1300	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	RayTracingReflectionsTranslucency : 1;		//Offset: 1301	Size: 1	Flags: Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_34[1];		//Offset: 1301	Size: 1
		ETranslucencyType	TranslucencyType;		//Offset: 1302	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_35[1];		//Offset: 1303	Size: 1
		float	RayTracingTranslucencyMaxRoughness;		//Offset: 1304	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	RayTracingTranslucencyRefractionRays;		//Offset: 1308	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	RayTracingTranslucencySamplesPerPixel;		//Offset: 1312	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReflectedAndRefractedRayTracedShadows	RayTracingTranslucencyShadows;		//Offset: 1316	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	RayTracingTranslucencyRefraction : 1;		//Offset: 1317	Size: 1	Flags: Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_36[3];		//Offset: 1317	Size: 3
		int32_t	PathTracingMaxBounces;		//Offset: 1320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PathTracingSamplesPerPixel;		//Offset: 1324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PathTracingFilterWidth;		//Offset: 1328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	PathTracingEnableEmissive : 1;		//Offset: 1332	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_37[4];		//Offset: 1332	Size: 4
		float	PathTracingMaxPathExposure;		//Offset: 1336	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	PathTracingEnableDenoiser : 1;		//Offset: 1340	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_38[4];		//Offset: 1340	Size: 4
		float	LPVFadeRange;		//Offset: 1344	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPVDirectionalOcclusionFadeRange;		//Offset: 1348	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ScreenPercentage;		//Offset: 1352	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_39[4];		//Offset: 1356	Size: 4
		struct FWeightedBlendables	WeightedBlendables;		//Offset: 1360	Size: 16	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MinimalViewInfo
	// Size 1520
	/////////////////////////////////////////////
	struct FMinimalViewInfo {
		struct FVector	Location;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	FOV;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DesiredFOV;		//Offset: 28	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OrthoWidth;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OrthoNearClipPlane;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OrthoFarClipPlane;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AspectRatio;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bConstrainAspectRatio : 1;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseFieldOfViewForLOD : 1;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 48	Size: 4
		TEnumAsByte<ECameraProjectionMode>	ProjectionMode;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 53	Size: 3
		float	PostProcessBlendWeight;		//Offset: 56	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 60	Size: 4
		struct FPostProcessSettings	PostProcessSettings;		//Offset: 64	Size: 1376	Flags: BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D	OffCenterProjectionOffset;		//Offset: 1440	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[72];		//Offset: 1448	Size: 72
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeScrubParams
	// Size 1536
	/////////////////////////////////////////////
	struct FCameraShakeScrubParams {
		float	AbsoluteTime;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ShakeScale;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DynamicScale;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlendingWeight;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinimalViewInfo	POV;		//Offset: 16	Size: 1520	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.WeightedBlendable
	// Size 16
	/////////////////////////////////////////////
	struct FWeightedBlendable {
		float	Weight;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		class UObject* Object;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeUpdateParams
	// Size 1536
	/////////////////////////////////////////////
	struct FCameraShakeUpdateParams {
		float	DeltaTime;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ShakeScale;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DynamicScale;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlendingWeight;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinimalViewInfo	POV;		//Offset: 16	Size: 1520	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraShakeStartParams
	// Size 1
	/////////////////////////////////////////////
	struct FCameraShakeStartParams {
		bool	bIsRestarting;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DummySpacerCameraTypes
	// Size 1
	/////////////////////////////////////////////
	struct FDummySpacerCameraTypes {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CanvasIcon
	// Size 24
	/////////////////////////////////////////////
	struct FCanvasIcon {
		class UTexture* Texture;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	U;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	V;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	UL;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VL;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.WrappedStringElement
	// Size 24
	/////////////////////////////////////////////
	struct FWrappedStringElement {
		struct FString	Value;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	LineExtent;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TextSizingParameters
	// Size 40
	/////////////////////////////////////////////
	struct FTextSizingParameters {
		float	DrawX;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DrawY;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DrawXL;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DrawYL;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	Scaling;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFont* DrawFont;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	SpacingAdjust;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BasedMovementInfo
	// Size 48
	/////////////////////////////////////////////
	struct FBasedMovementInfo {
		class UPrimitiveComponent* MovementBase;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	BoneName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	Location;		//Offset: 16	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 28	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool	bServerHasBaseComponent;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRelativeRotation;		//Offset: 41	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bServerHasVelocity;		//Offset: 42	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[5];		//Offset: 43	Size: 5
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSourceSettings
	// Size 1
	/////////////////////////////////////////////
	struct FRootMotionSourceSettings {
		unsigned char	Flags;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Vector_NetQuantize10
	// Super ScriptStruct CoreUObject.Vector
	// Size 12
	// Size inherited 12
	/////////////////////////////////////////////
	struct FVector_NetQuantize10 : public FVector {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSourceGroup
	// Size 56
	/////////////////////////////////////////////
	struct FRootMotionSourceGroup {
		unsigned char uknownData_0[40];		//Offset: 0	Size: 40
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasOverrideSources : 1;		//Offset: 40	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasOverrideSourcesWithIgnoreZAccumulate : 1;		//Offset: 40	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsAdditiveVelocityApplied : 1;		//Offset: 40	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasAdditiveSources : 1;		//Offset: 40	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 40	Size: 1
		struct FRootMotionSourceSettings	LastAccumulatedSettings;		//Offset: 41	Size: 1	Flags: NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_2[2];		//Offset: 42	Size: 2
		struct FVector_NetQuantize10	LastPreAdditiveVelocity;		//Offset: 44	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RepRootMotionMontage
	// Size 152
	/////////////////////////////////////////////
	struct FRepRootMotionMontage {
		bool	bIsActive;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		class UAnimMontage* AnimMontage;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Position;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	Location;		//Offset: 20	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 32	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 44	Size: 4
		class UPrimitiveComponent* MovementBase;		//Offset: 48	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MovementBaseBoneName;		//Offset: 56	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRelativePosition;		//Offset: 64	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRelativeRotation;		//Offset: 65	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[6];		//Offset: 66	Size: 6
		struct FRootMotionSourceGroup	AuthoritativeRootMotion;		//Offset: 72	Size: 56	Flags: NativeAccessSpecifierPublic
		struct FVector_NetQuantize10	Acceleration;		//Offset: 128	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10	LinearVelocity;		//Offset: 140	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
	// Size 160
	/////////////////////////////////////////////
	struct FSimulatedRootMotionReplicatedMove {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		struct FRepRootMotionMontage	RootMotion;		//Offset: 8	Size: 152	Flags: ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FindFloorResult
	// Size 148
	/////////////////////////////////////////////
	struct FFindFloorResult {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBlockingHit : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bWalkableFloor : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLineTrace : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		float	FloorDist;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LineDist;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult	HitResult;		//Offset: 12	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CharacterNetworkSerializationPackedBits
	// Size 152
	/////////////////////////////////////////////
	struct FCharacterNetworkSerializationPackedBits {
		unsigned char uknownData_0[152];		//Offset: 0	Size: 152
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CharacterMoveResponsePackedBits
	// Super ScriptStruct Engine.CharacterNetworkSerializationPackedBits
	// Size 152
	// Size inherited 152
	/////////////////////////////////////////////
	struct FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CharacterServerMovePackedBits
	// Super ScriptStruct Engine.CharacterNetworkSerializationPackedBits
	// Size 152
	// Size inherited 152
	/////////////////////////////////////////////
	struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ChildActorComponentInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 232
	// Size inherited 184
	/////////////////////////////////////////////
	struct FChildActorComponentInstanceData : public FSceneComponentInstanceData {
		class AActor* ChildActorClass;		//Offset: 184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ChildActorName;		//Offset: 192	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChildActorAttachedActorInfo>	AttachedActors;		//Offset: 200	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 216	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ChildActorAttachedActorInfo
	// Size 64
	/////////////////////////////////////////////
	struct FChildActorAttachedActorInfo {
		TWeakObjectPtr<class AActor>	Actor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	SocketName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform	RelativeTransform;		//Offset: 16	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomProfile
	// Size 24
	/////////////////////////////////////////////
	struct FCustomProfile {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FResponseChannel>	CustomResponses;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomChannelSetup
	// Size 12
	/////////////////////////////////////////////
	struct FCustomChannelSetup {
		TEnumAsByte<ECollisionChannel>	Channel;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionResponse>	DefaultResponse;		//Offset: 1	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTraceType;		//Offset: 2	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bStaticObject;		//Offset: 3	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Name;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollisionResponseTemplate
	// Size 72
	/////////////////////////////////////////////
	struct FCollisionResponseTemplate {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionEnabled>	CollisionEnabled;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 9	Size: 1
		bool	bCanModify;		//Offset: 10	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[33];		//Offset: 11	Size: 33
		struct FName	ObjectTypeName;		//Offset: 44	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 52	Size: 4
		TArray<struct FResponseChannel>	CustomResponses;		//Offset: 56	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintComponentDelegateBinding
	// Size 24
	/////////////////////////////////////////////
	struct FBlueprintComponentDelegateBinding {
		struct FName	ComponentPropertyName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	DelegatePropertyName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	FunctionNameToBind;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshUVChannelInfo
	// Size 20
	/////////////////////////////////////////////
	struct FMeshUVChannelInfo {
		bool	bInitialized;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bOverrideDensities;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 2	Size: 2
		float	LocalUVDensities[4];		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AutoCompleteNode
	// Size 40
	/////////////////////////////////////////////
	struct FAutoCompleteNode {
		int32_t	IndexChar;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<int32_t>	AutoCompleteListIndices;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[16];		//Offset: 24	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConstraintDrive
	// Size 16
	/////////////////////////////////////////////
	struct FConstraintDrive {
		float	Stiffness;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Damping;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxForce;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnablePositionDrive : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableVelocityDrive : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AngularDriveConstraint
	// Size 76
	/////////////////////////////////////////////
	struct FAngularDriveConstraint {
		struct FConstraintDrive	TwistDrive;		//Offset: 0	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive	SwingDrive;		//Offset: 16	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive	SlerpDrive;		//Offset: 32	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator	OrientationTarget;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector	AngularVelocityTarget;		//Offset: 60	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAngularDriveMode>	AngularDriveMode;		//Offset: 72	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 73	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LinearDriveConstraint
	// Size 76
	/////////////////////////////////////////////
	struct FLinearDriveConstraint {
		struct FVector	PositionTarget;		//Offset: 0	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	VelocityTarget;		//Offset: 12	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FConstraintDrive	XDrive;		//Offset: 24	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive	YDrive;		//Offset: 40	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintDrive	ZDrive;		//Offset: 56	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnablePositionDrive : 1;		//Offset: 72	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 72	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConstraintInstanceBase
	// Size 24
	/////////////////////////////////////////////
	struct FConstraintInstanceBase {
		unsigned char uknownData_0[24];		//Offset: 0	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConstraintBaseParams
	// Size 20
	/////////////////////////////////////////////
	struct FConstraintBaseParams {
		float	Stiffness;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Damping;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Restitution;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ContactDistance;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSoftConstraint : 1;		//Offset: 16	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 16	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LinearConstraint
	// Super ScriptStruct Engine.ConstraintBaseParams
	// Size 28
	// Size inherited 20
	/////////////////////////////////////////////
	struct FLinearConstraint : public FConstraintBaseParams {
		float	Limit;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ELinearConstraintMotion>	XMotion;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ELinearConstraintMotion>	YMotion;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ELinearConstraintMotion>	ZMotion;		//Offset: 26	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 27	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConeConstraint
	// Super ScriptStruct Engine.ConstraintBaseParams
	// Size 32
	// Size inherited 20
	/////////////////////////////////////////////
	struct FConeConstraint : public FConstraintBaseParams {
		float	Swing1LimitDegrees;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Swing2LimitDegrees;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAngularConstraintMotion>	Swing1Motion;		//Offset: 28	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAngularConstraintMotion>	Swing2Motion;		//Offset: 29	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 30	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TwistConstraint
	// Super ScriptStruct Engine.ConstraintBaseParams
	// Size 28
	// Size inherited 20
	/////////////////////////////////////////////
	struct FTwistConstraint : public FConstraintBaseParams {
		float	TwistLimitDegrees;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAngularConstraintMotion>	TwistMotion;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConstraintProfileProperties
	// Size 276
	/////////////////////////////////////////////
	struct FConstraintProfileProperties {
		float	ProjectionLinearTolerance;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ProjectionAngularTolerance;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ProjectionLinearAlpha;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ProjectionAngularAlpha;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LinearBreakThreshold;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LinearPlasticityThreshold;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AngularBreakThreshold;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AngularPlasticityThreshold;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearConstraint	LinearLimit;		//Offset: 32	Size: 28	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FConeConstraint	ConeLimit;		//Offset: 60	Size: 32	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FTwistConstraint	TwistLimit;		//Offset: 92	Size: 28	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearDriveConstraint	LinearDrive;		//Offset: 120	Size: 76	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAngularDriveConstraint	AngularDrive;		//Offset: 196	Size: 76	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDisableCollision : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bParentDominates : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableProjection : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableSoftProjection : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAngularBreakable : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAngularPlasticity : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLinearBreakable : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLinearPlasticity : 1;		//Offset: 272	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 272	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConstraintInstance
	// Super ScriptStruct Engine.ConstraintInstanceBase
	// Size 456
	// Size inherited 24
	/////////////////////////////////////////////
	struct FConstraintInstance : public FConstraintInstanceBase {
		struct FName	JointName;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ConstraintBone1;		//Offset: 32	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ConstraintBone2;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Pos1;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	PriAxis1;		//Offset: 60	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	SecAxis1;		//Offset: 72	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Pos2;		//Offset: 84	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	PriAxis2;		//Offset: 96	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	SecAxis2;		//Offset: 108	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	AngularRotationOffset;		//Offset: 120	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bScaleLinearLimits : 1;		//Offset: 132	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 132	Size: 8
		struct FConstraintProfileProperties	ProfileInstance;		//Offset: 140	Size: 276	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[40];		//Offset: 416	Size: 40
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CullDistanceSizePair
	// Size 8
	/////////////////////////////////////////////
	struct FCullDistanceSizePair {
		float	Size;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CullDistance;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RuntimeCurveLinearColor
	// Size 520
	/////////////////////////////////////////////
	struct FRuntimeCurveLinearColor {
		struct FRichCurve	ColorCurves[4];		//Offset: 0	Size: 128	Flags: NativeAccessSpecifierPublic
		class UCurveLinearColor* ExternalCurve;		//Offset: 512	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CurveAtlasColorAdjustments
	// Size 36
	/////////////////////////////////////////////
	struct FCurveAtlasColorAdjustments {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bChromaKeyTexture : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		float	AdjustBrightness;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustBrightnessCurve;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustVibrance;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustSaturation;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustRGBCurve;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustHue;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustMinAlpha;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdjustMaxAlpha;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedCurveValue
	// Size 12
	/////////////////////////////////////////////
	struct FNamedCurveValue {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Value;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CurveTableRowHandle
	// Size 16
	/////////////////////////////////////////////
	struct FCurveTableRowHandle {
		class UCurveTable* CurveTable;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	RowName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedCustomAttributePerBoneData
	// Size 56
	/////////////////////////////////////////////
	struct FBakedCustomAttributePerBoneData {
		int32_t	BoneTreeIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<struct FBakedStringCustomAttribute>	StringAttributes;		//Offset: 8	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FBakedIntegerCustomAttribute>	IntAttributes;		//Offset: 24	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FBakedFloatCustomAttribute>	FloatAttributes;		//Offset: 40	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SimpleCurve
	// Super ScriptStruct Engine.RealCurve
	// Size 136
	// Size inherited 112
	/////////////////////////////////////////////
	struct FSimpleCurve : public FRealCurve {
		TEnumAsByte<ERichCurveInterpMode>	InterpMode;		//Offset: 112	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 113	Size: 7
		TArray<struct FSimpleCurveKey>	Keys;		//Offset: 120	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedFloatCustomAttribute
	// Size 144
	/////////////////////////////////////////////
	struct FBakedFloatCustomAttribute {
		struct FName	AttributeName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimpleCurve	FloatCurve;		//Offset: 8	Size: 136	Flags: Edit, EditConst, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SimpleCurveKey
	// Size 8
	/////////////////////////////////////////////
	struct FSimpleCurveKey {
		float	Time;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Value;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.IntegralCurve
	// Super ScriptStruct Engine.IndexedCurve
	// Size 128
	// Size inherited 104
	/////////////////////////////////////////////
	struct FIntegralCurve : public FIndexedCurve {
		TArray<struct FIntegralKey>	Keys;		//Offset: 104	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t	DefaultValue;		//Offset: 120	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool	bUseDefaultValueBeforeFirstKey;		//Offset: 124	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[3];		//Offset: 125	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedIntegerCustomAttribute
	// Size 136
	/////////////////////////////////////////////
	struct FBakedIntegerCustomAttribute {
		struct FName	AttributeName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntegralCurve	IntCurve;		//Offset: 8	Size: 128	Flags: Edit, EditConst, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.IntegralKey
	// Size 8
	/////////////////////////////////////////////
	struct FIntegralKey {
		float	Time;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Value;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StringCurve
	// Super ScriptStruct Engine.IndexedCurve
	// Size 136
	// Size inherited 104
	/////////////////////////////////////////////
	struct FStringCurve : public FIndexedCurve {
		struct FString	DefaultValue;		//Offset: 104	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStringCurveKey>	Keys;		//Offset: 120	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BakedStringCustomAttribute
	// Size 144
	/////////////////////////////////////////////
	struct FBakedStringCustomAttribute {
		struct FName	AttributeName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStringCurve	StringCurve;		//Offset: 8	Size: 136	Flags: Edit, EditConst, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StringCurveKey
	// Size 24
	/////////////////////////////////////////////
	struct FStringCurveKey {
		float	Time;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		struct FString	Value;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomAttributePerBoneData
	// Size 24
	/////////////////////////////////////////////
	struct FCustomAttributePerBoneData {
		int32_t	BoneTreeIndex;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<struct FCustomAttribute>	Attributes;		//Offset: 8	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomAttribute
	// Size 48
	/////////////////////////////////////////////
	struct FCustomAttribute {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	VariantType;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		TArray<float>	Times;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char uknownData_1[16];		//Offset: 32	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomAttributeSetting
	// Size 32
	/////////////////////////////////////////////
	struct FCustomAttributeSetting {
		struct FString	Name;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Meaning;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DataDrivenConsoleVariable
	// Size 80
	/////////////////////////////////////////////
	struct FDataDrivenConsoleVariable {
		EFDataDrivenCVarType	Type;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FString	Name;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Tooltip;		//Offset: 24	Size: 16	Flags: Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DefaultValueFloat;		//Offset: 40	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	DefaultValueInt;		//Offset: 44	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	DefaultValueBool;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[31];		//Offset: 49	Size: 31
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DataTableCategoryHandle
	// Size 24
	/////////////////////////////////////////////
	struct FDataTableCategoryHandle {
		class UDataTable* DataTable;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ColumnName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	RowContents;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DataTableRowHandle
	// Size 16
	/////////////////////////////////////////////
	struct FDataTableRowHandle {
		class UDataTable* DataTable;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	RowName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
	// Size 16
	/////////////////////////////////////////////
	struct FDebugCameraControllerSettingsViewModeIndex {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		TEnumAsByte<EViewModeIndex>	ViewModeIndex;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 9	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DebugDisplayProperty
	// Size 32
	/////////////////////////////////////////////
	struct FDebugDisplayProperty {
		class UObject* Obj;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* WithinClass;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 16	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DebugTextInfo
	// Size 96
	/////////////////////////////////////////////
	struct FDebugTextInfo {
		class AActor* SrcActor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	SrcActorOffset;		//Offset: 8	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	SrcActorDesiredOffset;		//Offset: 20	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	DebugText;		//Offset: 32	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TimeRemaining;		//Offset: 48	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Duration;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	TextColor;		//Offset: 56	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAbsoluteLocation : 1;		//Offset: 60	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bKeepAttachedToActor : 1;		//Offset: 60	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDrawShadow : 1;		//Offset: 60	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 60	Size: 4
		struct FVector	OrigActorLocation;		//Offset: 64	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 76	Size: 4
		class UFont* Font;		//Offset: 80	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FontScale;		//Offset: 88	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 92	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MulticastRecordOptions
	// Size 24
	/////////////////////////////////////////////
	struct FMulticastRecordOptions {
		struct FString	FuncPathName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bServerSkip;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bClientSkip;		//Offset: 17	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[6];		//Offset: 18	Size: 6
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RollbackNetStartupActorInfo
	// Size 176
	/////////////////////////////////////////////
	struct FRollbackNetStartupActorInfo {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		class UObject* Archetype;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[40];		//Offset: 16	Size: 40
		class ULevel* Level;		//Offset: 56	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[96];		//Offset: 64	Size: 96
		TArray<class UObject*>	ObjReferences;		//Offset: 160	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DialogueContext
	// Size 24
	/////////////////////////////////////////////
	struct FDialogueContext {
		class UDialogueVoice* Speaker;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDialogueVoice*>	Targets;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DialogueWaveParameter
	// Size 32
	/////////////////////////////////////////////
	struct FDialogueWaveParameter {
		class UDialogueWave* DialogueWave;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogueContext	Context;		//Offset: 8	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DialogueContextMapping
	// Size 56
	/////////////////////////////////////////////
	struct FDialogueContextMapping {
		struct FDialogueContext	Context;		//Offset: 0	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
		class USoundWave* SoundWave;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	LocalizationKeyFormat;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDialogueSoundWaveProxy* Proxy;		//Offset: 48	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RawDistributionFloat
	// Super ScriptStruct Engine.RawDistribution
	// Size 48
	// Size inherited 32
	/////////////////////////////////////////////
	struct FRawDistributionFloat : public FRawDistribution {
		float	MinValue;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	MaxValue;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDistributionFloat* Distribution;		//Offset: 40	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RawDistributionVector
	// Super ScriptStruct Engine.RawDistribution
	// Size 72
	// Size inherited 32
	/////////////////////////////////////////////
	struct FRawDistributionVector : public FRawDistribution {
		float	MinValue;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	MaxValue;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector	MinValueVec;		//Offset: 40	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector	MaxValueVec;		//Offset: 52	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDistributionVector* Distribution;		//Offset: 64	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GraphReference
	// Size 32
	/////////////////////////////////////////////
	struct FGraphReference {
		class UEdGraph* MacroGraph;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlueprint* GraphBlueprint;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid	GraphGuid;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EdGraphPinReference
	// Size 24
	/////////////////////////////////////////////
	struct FEdGraphPinReference {
		TWeakObjectPtr<class UEdGraphNode>	OwningNode;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid	PinId;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EdGraphSchemaAction
	// Size 256
	/////////////////////////////////////////////
	struct FEdGraphSchemaAction {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		struct FText	MenuDescription;		//Offset: 8	Size: 24	Flags: NativeAccessSpecifierPrivate
		struct FText	TooltipDescription;		//Offset: 32	Size: 24	Flags: NativeAccessSpecifierPrivate
		struct FText	Category;		//Offset: 56	Size: 24	Flags: NativeAccessSpecifierPrivate
		struct FText	Keywords;		//Offset: 80	Size: 24	Flags: NativeAccessSpecifierPrivate
		int32_t	Grouping;		//Offset: 104	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SectionID;		//Offset: 108	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FString>	MenuDescriptionArray;		//Offset: 112	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	FullSearchTitlesArray;		//Offset: 128	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	FullSearchKeywordsArray;		//Offset: 144	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	FullSearchCategoryArray;		//Offset: 160	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	LocalizedMenuDescriptionArray;		//Offset: 176	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	LocalizedFullSearchTitlesArray;		//Offset: 192	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	LocalizedFullSearchKeywordsArray;		//Offset: 208	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FString>	LocalizedFullSearchCategoryArray;		//Offset: 224	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		struct FString	SearchText;		//Offset: 240	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EdGraphSchemaAction_NewNode
	// Super ScriptStruct Engine.EdGraphSchemaAction
	// Size 264
	// Size inherited 256
	/////////////////////////////////////////////
	struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction {
		class UEdGraphNode* NodeTemplate;		//Offset: 256	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PluginRedirect
	// Size 32
	/////////////////////////////////////////////
	struct FPluginRedirect {
		struct FString	OldPluginName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	NewPluginName;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StructRedirect
	// Size 16
	/////////////////////////////////////////////
	struct FStructRedirect {
		struct FName	OldStructName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewStructName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ClassRedirect
	// Size 60
	/////////////////////////////////////////////
	struct FClassRedirect {
		struct FName	ObjectName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	OldClassName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewClassName;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	OldSubobjName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewSubobjName;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewClassClass;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewClassPackage;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	InstanceOnly;		//Offset: 56	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 57	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GameNameRedirect
	// Size 16
	/////////////////////////////////////////////
	struct FGameNameRedirect {
		struct FName	OldGameName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewGameName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ScreenMessageString
	// Size 48
	/////////////////////////////////////////////
	struct FScreenMessageString {
		uint64_t	Key;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	ScreenMessage;		//Offset: 8	Size: 16	Flags: ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	DisplayColor;		//Offset: 24	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TimeToDisplay;		//Offset: 28	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CurrentTimeDisplayed;		//Offset: 32	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	TextScale;		//Offset: 36	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DropNoteInfo
	// Size 40
	/////////////////////////////////////////////
	struct FDropNoteInfo {
		struct FVector	Location;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FString	Comment;		//Offset: 24	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StatColorMapping
	// Size 40
	/////////////////////////////////////////////
	struct FStatColorMapping {
		struct FString	StatName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStatColorMapEntry>	ColorMap;		//Offset: 16	Size: 16	Flags: ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	DisableBlend : 1;		//Offset: 32	Size: 1	Flags: Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 32	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StatColorMapEntry
	// Size 8
	/////////////////////////////////////////////
	struct FStatColorMapEntry {
		float	In;		//Offset: 0	Size: 4	Flags: ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	Out;		//Offset: 4	Size: 4	Flags: ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.URL
	// Size 104
	/////////////////////////////////////////////
	struct FURL {
		struct FString	Protocol;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Host;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Port;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Valid;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Map;		//Offset: 40	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	RedirectURL;		//Offset: 56	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FString>	Op;		//Offset: 72	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		struct FString	Portal;		//Offset: 88	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.WorldContext
	// Size 648
	/////////////////////////////////////////////
	struct FWorldContext {
		unsigned char uknownData_0[208];		//Offset: 0	Size: 208
		struct FURL	LastURL;		//Offset: 208	Size: 104	Flags: NativeAccessSpecifierPublic
		struct FURL	LastRemoteURL;		//Offset: 312	Size: 104	Flags: NativeAccessSpecifierPublic
		class UPendingNetGame* PendingNetGame;		//Offset: 416	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFullyLoadedPackagesInfo>	PackagesToFullyLoad;		//Offset: 424	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[16];		//Offset: 440	Size: 16
		TArray<class ULevel*>	LoadedLevelsForPendingMapChange;		//Offset: 456	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_2[24];		//Offset: 472	Size: 24
		TArray<class UObjectReferencer*>	ObjectReferencers;		//Offset: 496	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLevelStreamingStatus>	PendingLevelStreamingStatusUpdates;		//Offset: 512	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		class UGameViewportClient* GameViewport;		//Offset: 528	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameInstance* OwningGameInstance;		//Offset: 536	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedNetDriver>	ActiveNetDrivers;		//Offset: 544	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char uknownData_3[88];		//Offset: 560	Size: 88
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedNetDriver
	// Size 16
	/////////////////////////////////////////////
	struct FNamedNetDriver {
		class UNetDriver* NetDriver;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LevelStreamingStatus
	// Size 16
	/////////////////////////////////////////////
	struct FLevelStreamingStatus {
		struct FName	PackageName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bShouldBeLoaded : 1;		//Offset: 8	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bShouldBeVisible : 1;		//Offset: 8	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
		uint32_t	LODIndex;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FullyLoadedPackagesInfo
	// Size 56
	/////////////////////////////////////////////
	struct FFullyLoadedPackagesInfo {
		TEnumAsByte<EFullyLoadPackageType>	FullyLoadType;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FString	Tag;		//Offset: 8	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FName>	PackagesToLoad;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UObject*>	LoadedObjects;		//Offset: 40	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NetDriverDefinition
	// Size 24
	/////////////////////////////////////////////
	struct FNetDriverDefinition {
		struct FName	DefName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	DriverClassName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	DriverClassNameFallback;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExposureSettings
	// Size 8
	/////////////////////////////////////////////
	struct FExposureSettings {
		float	FixedEV100;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bFixed;		//Offset: 4	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TickPrerequisite
	// Size 16
	/////////////////////////////////////////////
	struct FTickPrerequisite {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CanvasUVTri
	// Size 96
	/////////////////////////////////////////////
	struct FCanvasUVTri {
		struct FVector2D	V0_Pos;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	V0_UV;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	V0_Color;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	V1_Pos;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	V1_UV;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	V1_Color;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	V2_Pos;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	V2_UV;		//Offset: 72	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	V2_Color;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DepthFieldGlowInfo
	// Size 36
	/////////////////////////////////////////////
	struct FDepthFieldGlowInfo {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableGlow : 1;		//Offset: 0	Size: 1	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		struct FLinearColor	GlowColor;		//Offset: 4	Size: 16	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	GlowOuterRadius;		//Offset: 20	Size: 8	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	GlowInnerRadius;		//Offset: 28	Size: 8	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FontRenderInfo
	// Size 40
	/////////////////////////////////////////////
	struct FFontRenderInfo {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bClipText : 1;		//Offset: 0	Size: 1	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableShadow : 1;		//Offset: 0	Size: 1	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		struct FDepthFieldGlowInfo	GlowInfo;		//Offset: 4	Size: 36	Flags: BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Redirector
	// Size 16
	/////////////////////////////////////////////
	struct FRedirector {
		struct FName	OldName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	NewName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollectionReference
	// Size 8
	/////////////////////////////////////////////
	struct FCollectionReference {
		struct FName	CollectionName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ComponentReference
	// Size 40
	/////////////////////////////////////////////
	struct FComponentReference {
		class AActor* OtherActor;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ComponentProperty;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	PathToComponent;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 32	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConstrainComponentPropName
	// Size 8
	/////////////////////////////////////////////
	struct FConstrainComponentPropName {
		struct FName	ComponentName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DamageEvent
	// Size 16
	/////////////////////////////////////////////
	struct FDamageEvent {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		class UDamageType* DamageTypeClass;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RadialDamageParams
	// Size 20
	/////////////////////////////////////////////
	struct FRadialDamageParams {
		float	BaseDamage;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinimumDamage;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InnerRadius;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OuterRadius;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DamageFalloff;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RadialDamageEvent
	// Super ScriptStruct Engine.DamageEvent
	// Size 64
	// Size inherited 16
	/////////////////////////////////////////////
	struct FRadialDamageEvent : public FDamageEvent {
		struct FRadialDamageParams	Params;		//Offset: 16	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FVector	Origin;		//Offset: 36	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHitResult>	ComponentHits;		//Offset: 48	Size: 16	Flags: ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PointDamageEvent
	// Super ScriptStruct Engine.DamageEvent
	// Size 168
	// Size inherited 16
	/////////////////////////////////////////////
	struct FPointDamageEvent : public FDamageEvent {
		float	Damage;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal	ShotDirection;		//Offset: 20	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult	HitInfo;		//Offset: 32	Size: 136	Flags: IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshBuildSettings
	// Size 20
	/////////////////////////////////////////////
	struct FSkeletalMeshBuildSettings {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecomputeNormals : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecomputeTangents : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseMikkTSpace : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bComputeWeightedNormals : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRemoveDegenerates : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseHighPrecisionTangentBasis : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseFullPrecisionUVs : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBuildAdjacencyBuffer : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		float	ThresholdPosition;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ThresholdTangentNormal;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ThresholdUV;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MorphThresholdPosition;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshBuildSettings
	// Size 48
	/////////////////////////////////////////////
	struct FMeshBuildSettings {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecomputeTangents : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bComputeWeightedNormals : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRemoveDegenerates : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBuildAdjacencyBuffer : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBuildReversedIndexBuffer : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseHighPrecisionTangentBasis : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseMikkTSpace : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecomputeNormals : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseFullPrecisionUVs : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGenerateLightmapUVs : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGenerateDistanceFieldAsIfTwoSided : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportFaceRemap : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 1	Size: 3
		int32_t	MinLightmapResolution;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SrcLightmapIndex;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	DstLightmapIndex;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BuildScale;		//Offset: 16	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	BuildScale3D;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DistanceFieldResolutionScale;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 36	Size: 4
		class UStaticMesh* DistanceFieldReplacementMesh;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.POV
	// Size 28
	/////////////////////////////////////////////
	struct FPOV {
		struct FVector	Location;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	FOV;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimUpdateRateParameters
	// Size 136
	/////////////////////////////////////////////
	struct FAnimUpdateRateParameters {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
		EUpdateRateShiftBucket	ShiftBucket;		//Offset: 1	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bInterpolateSkippedFrames : 1;		//Offset: 2	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bShouldUseLodMap : 1;		//Offset: 2	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bShouldUseMinLod : 1;		//Offset: 2	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSkipUpdate : 1;		//Offset: 2	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSkipEvaluation : 1;		//Offset: 2	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 2	Size: 2
		int32_t	UpdateRate;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	EvaluationRate;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TickedPoseOffestTime;		//Offset: 12	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AdditionalTime;		//Offset: 16	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 20	Size: 4
		int32_t	BaseNonRenderedUpdateRate;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxEvalRateForInterpolation;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>	BaseVisibleDistanceFactorThesholds;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>	LODToFrameSkipMap;		//Offset: 48	Size: 80	Flags: NativeAccessSpecifierPublic
		int32_t	SkippedUpdateFrames;		//Offset: 128	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SkippedEvalFrames;		//Offset: 132	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSlotDesc
	// Size 12
	/////////////////////////////////////////////
	struct FAnimSlotDesc {
		struct FName	SlotName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumChannels;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSlotInfo
	// Size 24
	/////////////////////////////////////////////
	struct FAnimSlotInfo {
		struct FName	SlotName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>	ChannelWeights;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MTDResult
	// Size 16
	/////////////////////////////////////////////
	struct FMTDResult {
		struct FVector	Direction;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Distance;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.OverlapResult
	// Size 24
	/////////////////////////////////////////////
	struct FOverlapResult {
		TWeakObjectPtr<class AActor>	Actor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>	Component;		//Offset: 8	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 16	Size: 4
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBlockingHit : 1;		//Offset: 20	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrimitiveMaterialRef
	// Size 24
	/////////////////////////////////////////////
	struct FPrimitiveMaterialRef {
		class UPrimitiveComponent* Primitive;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDecalComponent* Decal;		//Offset: 8	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ElementIndex;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SwarmDebugOptions
	// Size 4
	/////////////////////////////////////////////
	struct FSwarmDebugOptions {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDistributionEnabled : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bForceContentExport : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bInitialized : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassDebugOptions
	// Size 16
	/////////////////////////////////////////////
	struct FLightmassDebugOptions {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDebugMode : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bStatsEnabled : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGatherBSPSurfacesAcrossComponents : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		float	CoplanarTolerance;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseImmediateImport : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bImmediateProcessMappings : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSortMappings : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDumpBinaryFiles : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDebugMaterials : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bPadMappings : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDebugPaddings : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOnlyCalcDebugTexelMappings : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 8	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseRandomColors : 1;		//Offset: 9	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bColorBordersGreen : 1;		//Offset: 9	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bColorByExecutionTime : 1;		//Offset: 9	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 9	Size: 3
		float	ExecutionTimeDivisor;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassPrimitiveSettings
	// Size 24
	/////////////////////////////////////////////
	struct FLightmassPrimitiveSettings {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseTwoSidedLighting : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bShadowIndirectOnly : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseEmissiveForStaticLighting : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseVertexNormalForHemisphereGather : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
		float	EmissiveLightFalloffExponent;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EmissiveLightExplicitInfluenceRadius;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EmissiveBoost;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DiffuseBoost;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FullyOccludedSamplesFraction;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassLightSettings
	// Size 12
	/////////////////////////////////////////////
	struct FLightmassLightSettings {
		float	IndirectLightingSaturation;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ShadowExponent;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bUseAreaShadowsForStationaryLight;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassDirectionalLightSettings
	// Super ScriptStruct Engine.LightmassLightSettings
	// Size 16
	// Size inherited 12
	/////////////////////////////////////////////
	struct FLightmassDirectionalLightSettings : public FLightmassLightSettings {
		float	LightSourceAngle;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassPointLightSettings
	// Super ScriptStruct Engine.LightmassLightSettings
	// Size 12
	// Size inherited 12
	/////////////////////////////////////////////
	struct FLightmassPointLightSettings : public FLightmassLightSettings {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BasedPosition
	// Size 56
	/////////////////////////////////////////////
	struct FBasedPosition {
		class AActor* Base;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Position;		//Offset: 8	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	CachedBaseLocation;		//Offset: 20	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	CachedBaseRotation;		//Offset: 32	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector	CachedTransPosition;		//Offset: 44	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FractureEffect
	// Size 16
	/////////////////////////////////////////////
	struct FFractureEffect {
		class UParticleSystem* ParticleSystem;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase* Sound;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollisionImpactData
	// Size 48
	/////////////////////////////////////////////
	struct FCollisionImpactData {
		TArray<struct FRigidBodyContactInfo>	ContactInfos;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector	TotalNormalImpulse;		//Offset: 16	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	TotalFrictionImpulse;		//Offset: 28	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIsVelocityDeltaUnderThreshold;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 41	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RigidBodyContactInfo
	// Size 48
	/////////////////////////////////////////////
	struct FRigidBodyContactInfo {
		struct FVector	ContactPosition;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ContactNormal;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ContactPenetration;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
		class UPhysicalMaterial* PhysMaterial[2];		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RigidBodyErrorCorrection
	// Size 52
	/////////////////////////////////////////////
	struct FRigidBodyErrorCorrection {
		float	PingExtrapolation;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PingLimit;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ErrorPerLinearDifference;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ErrorPerAngularDifference;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxRestoredStateError;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxLinearHardSnapDistance;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PositionLerp;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AngleLerp;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LinearVelocityCoefficient;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AngularVelocityCoefficient;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ErrorAccumulationSeconds;		//Offset: 40	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ErrorAccumulationDistanceSq;		//Offset: 44	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ErrorAccumulationSimilarity;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RigidBodyState
	// Size 64
	/////////////////////////////////////////////
	struct FRigidBodyState {
		struct FVector_NetQuantize100	Position;		//Offset: 0	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		struct FQuat	Quaternion;		//Offset: 16	Size: 16	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	LinVel;		//Offset: 32	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100	AngVel;		//Offset: 44	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	Flags;		//Offset: 56	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 57	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialShadingModelField
	// Size 2
	/////////////////////////////////////////////
	struct FMaterialShadingModelField {
		uint16_t	ShadingModelField;		//Offset: 0	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ExponentialHeightFogData
	// Size 12
	/////////////////////////////////////////////
	struct FExponentialHeightFogData {
		float	FogDensity;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FogHeightFalloff;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FogHeightOffset;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FontCharacter
	// Size 24
	/////////////////////////////////////////////
	struct FFontCharacter {
		int32_t	StartU;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	StartV;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	USize;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	VSize;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	TextureIndex;		//Offset: 16	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		int32_t	VerticalOffset;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FontImportOptionsData
	// Size 176
	/////////////////////////////////////////////
	struct FFontImportOptionsData {
		struct FString	FontName;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Height;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAlphaOnly : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableAntialiasing : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableBold : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableItalic : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableUnderline : 1;		//Offset: 20	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		TEnumAsByte<EFontImportCharacterSet>	CharacterSet;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 25	Size: 7
		struct FString	Chars;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	UnicodeRange;		//Offset: 48	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	CharsFilePath;		//Offset: 64	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	CharsFileWildcard;		//Offset: 80	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCreatePrintableOnly : 1;		//Offset: 96	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIncludeASCIIRange : 1;		//Offset: 96	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 96	Size: 4
		struct FLinearColor	ForegroundColor;		//Offset: 100	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableDropShadow : 1;		//Offset: 116	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[4];		//Offset: 116	Size: 4
		int32_t	TexturePageWidth;		//Offset: 120	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TexturePageMaxHeight;		//Offset: 124	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	XPadding;		//Offset: 128	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	YPadding;		//Offset: 132	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ExtendBoxTop;		//Offset: 136	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ExtendBoxBottom;		//Offset: 140	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ExtendBoxRight;		//Offset: 144	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ExtendBoxLeft;		//Offset: 148	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableLegacyMode : 1;		//Offset: 152	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[4];		//Offset: 152	Size: 4
		int32_t	Kerning;		//Offset: 156	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseDistanceFieldAlpha : 1;		//Offset: 160	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_5[4];		//Offset: 160	Size: 4
		int32_t	DistanceFieldScaleFactor;		//Offset: 164	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DistanceFieldScanRadiusScale;		//Offset: 168	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_6[4];		//Offset: 172	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ForceFeedbackAttenuationSettings
	// Super ScriptStruct Engine.BaseAttenuationSettings
	// Size 176
	// Size inherited 176
	/////////////////////////////////////////////
	struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings {
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActiveForceFeedbackEffect
	// Size 24
	/////////////////////////////////////////////
	struct FActiveForceFeedbackEffect {
		class UForceFeedbackEffect* ForceFeedbackEffect;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 8	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ForceFeedbackParameters
	// Size 12
	/////////////////////////////////////////////
	struct FForceFeedbackParameters {
		struct FName	Tag;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bLooping;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIgnoreTimeDilation;		//Offset: 9	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bPlayWhilePaused;		//Offset: 10	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 11	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ForceFeedbackChannelDetails
	// Size 144
	/////////////////////////////////////////////
	struct FForceFeedbackChannelDetails {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAffectsLeftLarge : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAffectsLeftSmall : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAffectsRightLarge : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAffectsRightSmall : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		struct FRuntimeFloatCurve	Curve;		//Offset: 8	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PredictProjectilePathPointData
	// Size 28
	/////////////////////////////////////////////
	struct FPredictProjectilePathPointData {
		struct FVector	Location;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Velocity;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Time;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PredictProjectilePathResult
	// Size 184
	/////////////////////////////////////////////
	struct FPredictProjectilePathResult {
		TArray<struct FPredictProjectilePathPointData>	PathData;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FPredictProjectilePathPointData	LastTraceDestination;		//Offset: 16	Size: 28	Flags: Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult	HitResult;		//Offset: 44	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 180	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PredictProjectilePathParams
	// Size 96
	/////////////////////////////////////////////
	struct FPredictProjectilePathParams {
		struct FVector	StartLocation;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	LaunchVelocity;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTraceWithCollision;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
		float	ProjectileRadius;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxSimTime;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTraceWithChannel;		//Offset: 36	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionChannel>	TraceChannel;		//Offset: 37	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 38	Size: 2
		TArray<TEnumAsByte<EObjectTypeQuery>>	ObjectTypes;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<class AActor*>	ActorsToIgnore;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float	SimFrequency;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OverrideGravityZ;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EDrawDebugTrace>	DrawDebugType;		//Offset: 80	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 81	Size: 3
		float	DrawDebugTime;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTraceComplex;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[7];		//Offset: 89	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ActiveHapticFeedbackEffect
	// Size 24
	/////////////////////////////////////////////
	struct FActiveHapticFeedbackEffect {
		class UHapticFeedbackEffect_Base* HapticEffect;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[16];		//Offset: 8	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HapticFeedbackDetails_Curve
	// Size 272
	/////////////////////////////////////////////
	struct FHapticFeedbackDetails_Curve {
		struct FRuntimeFloatCurve	Frequency;		//Offset: 0	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve	Amplitude;		//Offset: 136	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ClusterNode
	// Size 64
	/////////////////////////////////////////////
	struct FClusterNode {
		struct FVector	BoundMin;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FirstChild;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	BoundMax;		//Offset: 16	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LastChild;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FirstInstance;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LastInstance;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	MinInstanceScale;		//Offset: 40	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	MaxInstanceScale;		//Offset: 52	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ClusterNode_DEPRECATED
	// Size 40
	/////////////////////////////////////////////
	struct FClusterNode_DEPRECATED {
		struct FVector	BoundMin;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FirstChild;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	BoundMax;		//Offset: 16	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LastChild;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FirstInstance;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LastInstance;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HLODISMComponentDesc
	// Size 32
	/////////////////////////////////////////////
	struct FHLODISMComponentDesc {
		class UStaticMesh* StaticMesh;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface* Material;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>	Instances;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HLODProxyMesh
	// Size 48
	/////////////////////////////////////////////
	struct FHLODProxyMesh {
		TLazyObjectPtr<class ALODActor>	LODActor;		//Offset: 0	Size: 28	Flags: IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
		class UStaticMesh* StaticMesh;		//Offset: 32	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FName	Key;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ImportanceTexture
	// Size 80
	/////////////////////////////////////////////
	struct FImportanceTexture {
		struct FIntPoint	Size;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumMips;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		TArray<float>	MarginalCDF;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>	ConditionalCDF;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>	TextureData;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UTexture2D>	Texture;		//Offset: 64	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EImportanceWeight>	Weighting;		//Offset: 72	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 73	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ComponentKey
	// Size 32
	/////////////////////////////////////////////
	struct FComponentKey {
		class UObject* OwnerClass;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FName	SCSVariableName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid	AssociatedGuid;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ComponentOverrideRecord
	// Size 120
	/////////////////////////////////////////////
	struct FComponentOverrideRecord {
		class UObject* ComponentClass;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActorComponent* ComponentTemplate;		//Offset: 8	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FComponentKey	ComponentKey;		//Offset: 16	Size: 32	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FBlueprintCookedComponentInstancingData	CookedComponentInstancingData;		//Offset: 48	Size: 72	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintInputDelegateBinding
	// Size 4
	/////////////////////////////////////////////
	struct FBlueprintInputDelegateBinding {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bConsumeInput : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bExecuteWhenPaused : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideParentBinding : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintInputActionDelegateBinding
	// Super ScriptStruct Engine.BlueprintInputDelegateBinding
	// Size 24
	// Size inherited 4
	/////////////////////////////////////////////
	struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding {
		struct FName	InputActionName;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EInputEvent>	InputKeyEvent;		//Offset: 12	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 13	Size: 3
		struct FName	FunctionNameToBind;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
	// Super ScriptStruct Engine.BlueprintInputDelegateBinding
	// Size 20
	// Size inherited 4
	/////////////////////////////////////////////
	struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding {
		struct FName	InputAxisName;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	FunctionNameToBind;		//Offset: 12	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
	// Super ScriptStruct Engine.BlueprintInputDelegateBinding
	// Size 40
	// Size inherited 4
	/////////////////////////////////////////////
	struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding {
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		struct FKey	AxisKey;		//Offset: 8	Size: 24	Flags: HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	FunctionNameToBind;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CachedKeyToActionInfo
	// Size 112
	/////////////////////////////////////////////
	struct FCachedKeyToActionInfo {
		class UPlayerInput* PlayerInput;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[104];		//Offset: 8	Size: 104
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
	// Super ScriptStruct Engine.BlueprintInputDelegateBinding
	// Size 56
	// Size inherited 4
	/////////////////////////////////////////////
	struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding {
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		struct FInputChord	InputChord;		//Offset: 8	Size: 32	Flags: HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EInputEvent>	InputKeyEvent;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 41	Size: 3
		struct FName	FunctionNameToBind;		//Offset: 44	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 52	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
	// Super ScriptStruct Engine.BlueprintInputDelegateBinding
	// Size 16
	// Size inherited 4
	/////////////////////////////////////////////
	struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding {
		TEnumAsByte<EInputEvent>	InputKeyEvent;		//Offset: 4	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		struct FName	FunctionNameToBind;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
	// Size 64
	/////////////////////////////////////////////
	struct FInstancedStaticMeshLightMapInstanceData {
		struct FTransform	Transform;		//Offset: 0	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>	MapBuildDataIds;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 336
	// Size inherited 184
	/////////////////////////////////////////////
	struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData {
		class UStaticMesh* StaticMesh;		//Offset: 184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInstancedStaticMeshLightMapInstanceData	CachedStaticLighting;		//Offset: 192	Size: 64	Flags: NativeAccessSpecifierPublic
		TArray<struct FInstancedStaticMeshInstanceData>	PerInstanceSMData;		//Offset: 256	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>	PerInstanceSMCustomData;		//Offset: 272	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[32];		//Offset: 288	Size: 32
		int32_t	InstancingRandomSeed;		//Offset: 320	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[12];		//Offset: 324	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InstancedStaticMeshInstanceData
	// Size 64
	/////////////////////////////////////////////
	struct FInstancedStaticMeshInstanceData {
		struct FMatrix	Transform;		//Offset: 0	Size: 64	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InstancedStaticMeshMappingInfo
	// Size 8
	/////////////////////////////////////////////
	struct FInstancedStaticMeshMappingInfo {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CurveEdTab
	// Size 48
	/////////////////////////////////////////////
	struct FCurveEdTab {
		struct FString	TabName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCurveEdEntry>	Curves;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		float	ViewStartInput;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ViewEndInput;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ViewStartOutput;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ViewEndOutput;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CurveEdEntry
	// Size 56
	/////////////////////////////////////////////
	struct FCurveEdEntry {
		class UObject* CurveObject;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	CurveColor;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		struct FString	CurveName;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	bHideCurve;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	bColorCurve;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	bFloatingPointColorCurve;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	bClamp;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ClampLow;		//Offset: 48	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ClampHigh;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InterpEdSelKey
	// Size 24
	/////////////////////////////////////////////
	struct FInterpEdSelKey {
		class UInterpGroup* Group;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInterpTrack* Track;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	KeyIndex;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	UnsnappedPosition;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraPreviewInfo
	// Size 48
	/////////////////////////////////////////////
	struct FCameraPreviewInfo {
		class APawn* PawnClass;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence* AnimSeq;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Location;		//Offset: 16	Size: 12	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 28	Size: 12	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class APawn* PawnInst;		//Offset: 40	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SubTrackGroup
	// Size 40
	/////////////////////////////////////////////
	struct FSubTrackGroup {
		struct FString	GroupName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>	TrackIndices;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsCollapsed : 1;		//Offset: 32	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsSelected : 1;		//Offset: 32	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 32	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SupportedSubTrackInfo
	// Size 32
	/////////////////////////////////////////////
	struct FSupportedSubTrackInfo {
		class UInterpTrack* SupportedClass;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	SubTrackName;		//Offset: 8	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	GroupIndex;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimControlTrackKey
	// Size 32
	/////////////////////////////////////////////
	struct FAnimControlTrackKey {
		float	StartTime;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		class UAnimSequence* AnimSeq;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnimStartOffset;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnimEndOffset;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnimPlayRate;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLooping : 1;		//Offset: 28	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReverse : 1;		//Offset: 28	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoolTrackKey
	// Size 8
	/////////////////////////////////////////////
	struct FBoolTrackKey {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	Value : 1;		//Offset: 4	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DirectorTrackCut
	// Size 20
	/////////////////////////////////////////////
	struct FDirectorTrackCut {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TransitionTime;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	TargetCamGroup;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ShotNumber;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EventTrackKey
	// Size 12
	/////////////////////////////////////////////
	struct FEventTrackKey {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	EventName;		//Offset: 4	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InterpLookupTrack
	// Size 16
	/////////////////////////////////////////////
	struct FInterpLookupTrack {
		TArray<struct FInterpLookupPoint>	Points;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InterpLookupPoint
	// Size 12
	/////////////////////////////////////////////
	struct FInterpLookupPoint {
		struct FName	GroupName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Time;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleReplayTrackKey
	// Size 12
	/////////////////////////////////////////////
	struct FParticleReplayTrackKey {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Duration;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ClipIDNumber;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundTrackKey
	// Size 24
	/////////////////////////////////////////////
	struct FSoundTrackKey {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Volume;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Pitch;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		class USoundBase* Sound;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ToggleTrackKey
	// Size 8
	/////////////////////////////////////////////
	struct FToggleTrackKey {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETrackToggleAction>	ToggleAction;		//Offset: 4	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VisibilityTrackKey
	// Size 8
	/////////////////////////////////////////////
	struct FVisibilityTrackKey {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EVisibilityTrackAction>	Action;		//Offset: 4	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EVisibilityTrackCondition>	ActiveCondition;		//Offset: 5	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 6	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VectorSpringState
	// Size 24
	/////////////////////////////////////////////
	struct FVectorSpringState {
		unsigned char uknownData_0[24];		//Offset: 0	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FloatSpringState
	// Size 8
	/////////////////////////////////////////////
	struct FFloatSpringState {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DrawToRenderTargetContext
	// Size 16
	/////////////////////////////////////////////
	struct FDrawToRenderTargetContext {
		class UTextureRenderTarget2D* RenderTarget;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LatentActionManager
	// Size 96
	/////////////////////////////////////////////
	struct FLatentActionManager {
		unsigned char uknownData_0[96];		//Offset: 0	Size: 96
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LayerActorStats
	// Size 16
	/////////////////////////////////////////////
	struct FLayerActorStats {
		class UObject* Type;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Total;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
	// Size 56
	/////////////////////////////////////////////
	struct FReplicatedStaticActorDestructionInfo {
		unsigned char uknownData_0[48];		//Offset: 0	Size: 48
		class UObject* ObjClass;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialProxySettings
	// Size 136
	/////////////////////////////////////////////
	struct FMaterialProxySettings {
		struct FIntPoint	TextureSize;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	GutterSpace;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MetallicConstant;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RoughnessConstant;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AnisotropyConstant;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SpecularConstant;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OpacityConstant;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OpacityMaskConstant;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AmbientOcclusionConstant;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETextureSizingType>	TextureSizingType;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMaterialMergeType>	MaterialMergeType;		//Offset: 41	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EBlendMode>	BlendMode;		//Offset: 42	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowTwoSidedMaterial : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bNormalMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bTangentMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bMetallicMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRoughnessMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAnisotropyMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSpecularMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEmissiveMap : 1;		//Offset: 43	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 43	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOpacityMap : 1;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOpacityMaskMap : 1;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAmbientOcclusionMap : 1;		//Offset: 44	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 44	Size: 4
		struct FIntPoint	DiffuseTextureSize;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	NormalTextureSize;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	TangentTextureSize;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	MetallicTextureSize;		//Offset: 72	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	RoughnessTextureSize;		//Offset: 80	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	AnisotropyTextureSize;		//Offset: 88	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	SpecularTextureSize;		//Offset: 96	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	EmissiveTextureSize;		//Offset: 104	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	OpacityTextureSize;		//Offset: 112	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	OpacityMaskTextureSize;		//Offset: 120	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint	AmbientOcclusionTextureSize;		//Offset: 128	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LevelSimplificationDetails
	// Size 300
	/////////////////////////////////////////////
	struct FLevelSimplificationDetails {
		bool	bCreatePackagePerAsset;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	DetailsPercentage;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings	StaticMeshMaterialSettings;		//Offset: 8	Size: 136	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		bool	bOverrideLandscapeExportLOD;		//Offset: 144	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 145	Size: 3
		int32_t	LandscapeExportLOD;		//Offset: 148	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings	LandscapeMaterialSettings;		//Offset: 152	Size: 136	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		bool	bBakeFoliageToLandscape;		//Offset: 288	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bBakeGrassToLandscape;		//Offset: 289	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateMeshNormalMap;		//Offset: 290	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateMeshMetallicMap;		//Offset: 291	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateMeshRoughnessMap;		//Offset: 292	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateMeshSpecularMap;		//Offset: 293	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateLandscapeNormalMap;		//Offset: 294	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateLandscapeMetallicMap;		//Offset: 295	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateLandscapeRoughnessMap;		//Offset: 296	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bGenerateLandscapeSpecularMap;		//Offset: 297	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[2];		//Offset: 298	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StreamableTextureInstance
	// Size 40
	/////////////////////////////////////////////
	struct FStreamableTextureInstance {
		unsigned char uknownData_0[40];		//Offset: 0	Size: 40
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DynamicTextureInstance
	// Super ScriptStruct Engine.StreamableTextureInstance
	// Size 56
	// Size inherited 40
	/////////////////////////////////////////////
	struct FDynamicTextureInstance : public FStreamableTextureInstance {
		class UTexture2D* Texture;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAttached;		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 49	Size: 3
		float	OriginalRadius;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrecomputedLightInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 272
	// Size inherited 184
	/////////////////////////////////////////////
	struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData {
		unsigned char uknownData_0[8];		//Offset: 184	Size: 8
		struct FTransform	Transform;		//Offset: 192	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGuid	LightGuid;		//Offset: 240	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PreviewShadowMapChannel;		//Offset: 256	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[12];		//Offset: 260	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BatchedPoint
	// Size 40
	/////////////////////////////////////////////
	struct FBatchedPoint {
		struct FVector	Position;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Color;		//Offset: 12	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PointSize;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RemainingLifeTime;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	DepthPriority;		//Offset: 36	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 37	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BatchedLine
	// Size 52
	/////////////////////////////////////////////
	struct FBatchedLine {
		struct FVector	Start;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	End;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Color;		//Offset: 24	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Thickness;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RemainingLifeTime;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	DepthPriority;		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 49	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ClientReceiveData
	// Size 64
	/////////////////////////////////////////////
	struct FClientReceiveData {
		class APlayerController* LocalPC;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MessageType;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MessageIndex;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		struct FString	MessageString;		//Offset: 24	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState* RelatedPlayerState_1;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState* RelatedPlayerState_2;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* OptionalObject;		//Offset: 56	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HLODInstancingKey
	// Size 16
	/////////////////////////////////////////////
	struct FHLODInstancingKey {
		class UStaticMesh* StaticMesh;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface* Material;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ComponentSync
	// Size 12
	/////////////////////////////////////////////
	struct FComponentSync {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESyncOption	SyncOption;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LODMappingData
	// Size 32
	/////////////////////////////////////////////
	struct FLODMappingData {
		TArray<int32_t>	Mapping;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>	InverseMapping;		//Offset: 16	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParameterGroupData
	// Size 24
	/////////////////////////////////////////////
	struct FParameterGroupData {
		struct FString	GroupName;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	GroupSortPriority;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialSpriteElement
	// Size 40
	/////////////////////////////////////////////
	struct FMaterialSpriteElement {
		class UMaterialInterface* Material;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat* DistanceToOpacityCurve;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSizeIsInScreenSpace : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 16	Size: 4
		float	BaseSizeX;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BaseSizeY;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 28	Size: 4
		class UCurveFloat* DistanceToSizeCurve;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialCachedParameterEntry
	// Size 48
	/////////////////////////////////////////////
	struct FMaterialCachedParameterEntry {
		TArray<uint64_t>	NameHashes;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMaterialParameterInfo>	ParameterInfos;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>	ExpressionGuids;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialCachedParameters
	// Size 336
	/////////////////////////////////////////////
	struct FMaterialCachedParameters {
		struct FMaterialCachedParameterEntry	RuntimeEntries[5];		//Offset: 0	Size: 48	Flags: NativeAccessSpecifierPublic
		TArray<float>	ScalarValues;		//Offset: 240	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>	VectorValues;		//Offset: 256	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTexture*>	TextureValues;		//Offset: 272	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UFont*>	FontValues;		//Offset: 288	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>	FontPageValues;		//Offset: 304	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class URuntimeVirtualTexture*>	RuntimeVirtualTextureValues;		//Offset: 320	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialCachedExpressionData
	// Size 472
	/////////////////////////////////////////////
	struct FMaterialCachedExpressionData {
		struct FMaterialCachedParameters	Parameters;		//Offset: 0	Size: 336	Flags: NativeAccessSpecifierPublic
		TArray<class UObject*>	ReferencedTextures;		//Offset: 336	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMaterialFunctionInfo>	FunctionInfos;		//Offset: 352	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMaterialParameterCollectionInfo>	ParameterCollectionInfos;		//Offset: 368	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialFunctionInterface*>	DefaultLayers;		//Offset: 384	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialFunctionInterface*>	DefaultLayerBlends;		//Offset: 400	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ULandscapeGrassType*>	GrassTypes;		//Offset: 416	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	DynamicParameterNames;		//Offset: 432	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>	QualityLevelsUsed;		//Offset: 448	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasRuntimeVirtualTextureOutput : 1;		//Offset: 464	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasSceneColor : 1;		//Offset: 464	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 464	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialParameterCollectionInfo
	// Size 24
	/////////////////////////////////////////////
	struct FMaterialParameterCollectionInfo {
		struct FGuid	StateId;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialParameterCollection* ParameterCollection;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialFunctionInfo
	// Size 24
	/////////////////////////////////////////////
	struct FMaterialFunctionInfo {
		struct FGuid	StateId;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialFunctionInterface* Function;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialParameterInfo
	// Size 16
	/////////////////////////////////////////////
	struct FMaterialParameterInfo {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMaterialParameterAssociation>	Association;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		int32_t	Index;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticComponentMaskValue
	// Size 4
	/////////////////////////////////////////////
	struct FStaticComponentMaskValue {
		bool	R;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	G;		//Offset: 1	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	B;		//Offset: 2	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	A;		//Offset: 3	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParameterChannelNames
	// Size 96
	/////////////////////////////////////////////
	struct FParameterChannelNames {
		struct FText	R;		//Offset: 0	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
		struct FText	G;		//Offset: 24	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
		struct FText	B;		//Offset: 48	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
		struct FText	A;		//Offset: 72	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomDefine
	// Size 32
	/////////////////////////////////////////////
	struct FCustomDefine {
		struct FString	DefineName;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	DefineValue;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomOutput
	// Size 12
	/////////////////////////////////////////////
	struct FCustomOutput {
		struct FName	OutputName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECustomMaterialOutputType>	OutputType;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CustomInput
	// Size 28
	/////////////////////////////////////////////
	struct FCustomInput {
		struct FName	InputName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput	Input;		//Offset: 8	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FunctionExpressionOutput
	// Size 32
	/////////////////////////////////////////////
	struct FFunctionExpressionOutput {
		class UMaterialExpressionFunctionOutput* ExpressionOutput;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionOutputId;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionOutput	Output;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FunctionExpressionInput
	// Size 48
	/////////////////////////////////////////////
	struct FFunctionExpressionInput {
		class UMaterialExpressionFunctionInput* ExpressionInput;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionInputId;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput	Input;		//Offset: 24	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FontParameterValue
	// Size 48
	/////////////////////////////////////////////
	struct FFontParameterValue {
		struct FMaterialParameterInfo	ParameterInfo;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFont* FontValue;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	FontPage;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionGUID;		//Offset: 28	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
	// Size 40
	/////////////////////////////////////////////
	struct FRuntimeVirtualTextureParameterValue {
		struct FMaterialParameterInfo	ParameterInfo;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URuntimeVirtualTexture* ParameterValue;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionGUID;		//Offset: 24	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TextureParameterValue
	// Size 40
	/////////////////////////////////////////////
	struct FTextureParameterValue {
		struct FMaterialParameterInfo	ParameterInfo;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture* ParameterValue;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionGUID;		//Offset: 24	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VectorParameterValue
	// Size 48
	/////////////////////////////////////////////
	struct FVectorParameterValue {
		struct FMaterialParameterInfo	ParameterInfo;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	ParameterValue;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionGUID;		//Offset: 32	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ScalarParameterValue
	// Size 36
	/////////////////////////////////////////////
	struct FScalarParameterValue {
		struct FMaterialParameterInfo	ParameterInfo;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ParameterValue;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ExpressionGUID;		//Offset: 20	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ScalarParameterAtlasInstanceData
	// Size 88
	/////////////////////////////////////////////
	struct FScalarParameterAtlasInstanceData {
		bool	bIsUsedAsAtlasPosition;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		TAssetPtr<class UCurveLinearColor>	Curve;		//Offset: 8	Size: 40	Flags: UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UCurveLinearColorAtlas>	Atlas;		//Offset: 48	Size: 40	Flags: UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
	// Size 8
	/////////////////////////////////////////////
	struct FMaterialInstanceBasePropertyOverrides {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_OpacityMaskClipValue : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_BlendMode : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_ShadingModel : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_DitheredLODTransition : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_CastDynamicShadowAsMasked : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverride_TwoSided : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	TwoSided : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	DitheredLODTransition : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCastDynamicShadowAsMasked : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 1	Size: 1
		TEnumAsByte<EBlendMode>	BlendMode;		//Offset: 2	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMaterialShadingModel>	ShadingModel;		//Offset: 3	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OpacityMaskClipValue;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialTextureInfo
	// Size 16
	/////////////////////////////////////////////
	struct FMaterialTextureInfo {
		float	SamplingScale;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	UVChannelIndex;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	TextureName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassMaterialInterfaceSettings
	// Size 16
	/////////////////////////////////////////////
	struct FLightmassMaterialInterfaceSettings {
		float	EmissiveBoost;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DiffuseBoost;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ExportResolutionScale;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCastShadowAsMasked : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideCastShadowAsMasked : 1;		//Offset: 12	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideEmissiveBoost : 1;		//Offset: 12	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideDiffuseBoost : 1;		//Offset: 12	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideExportResolutionScale : 1;		//Offset: 12	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialLayersFunctions
	// Size 64
	/////////////////////////////////////////////
	struct FMaterialLayersFunctions {
		TArray<class UMaterialFunctionInterface*>	Layers;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialFunctionInterface*>	Blends;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>	LayerStates;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FString	KeyString;		//Offset: 48	Size: 16	Flags: ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollectionParameterBase
	// Size 24
	/////////////////////////////////////////////
	struct FCollectionParameterBase {
		struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	ID;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollectionVectorParameter
	// Super ScriptStruct Engine.CollectionParameterBase
	// Size 40
	// Size inherited 24
	/////////////////////////////////////////////
	struct FCollectionVectorParameter : public FCollectionParameterBase {
		struct FLinearColor	DefaultValue;		//Offset: 24	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CollectionScalarParameter
	// Super ScriptStruct Engine.CollectionParameterBase
	// Size 28
	// Size inherited 24
	/////////////////////////////////////////////
	struct FCollectionScalarParameter : public FCollectionParameterBase {
		float	DefaultValue;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InterpGroupActorInfo
	// Size 24
	/////////////////////////////////////////////
	struct FInterpGroupActorInfo {
		struct FName	ObjectName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>	Actors;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraCutInfo
	// Size 16
	/////////////////////////////////////////////
	struct FCameraCutInfo {
		struct FVector	Location;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Timestamp;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MemberReference
	// Size 56
	/////////////////////////////////////////////
	struct FMemberReference {
		class UObject* MemberParent;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FString	MemberScope;		//Offset: 8	Size: 16	Flags: ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FName	MemberName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid	MemberGuid;		//Offset: 32	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool	bSelfContext;		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool	bWasDeprecated;		//Offset: 49	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_0[6];		//Offset: 50	Size: 6
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshInstancingSettings
	// Size 24
	/////////////////////////////////////////////
	struct FMeshInstancingSettings {
		class AActor* ActorClassToUse;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	InstanceReplacementThreshold;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshInstancingReplacementMethod	MeshReplacementMethod;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bSkipMeshesWithVertexColors;		//Offset: 13	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bUseHLODVolumes;		//Offset: 14	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 15	Size: 1
		class UInstancedStaticMeshComponent* ISMComponentToUse;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshMergingSettings
	// Size 160
	/////////////////////////////////////////////
	struct FMeshMergingSettings {
		int32_t	TargetLightMapResolution;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUVOutput	OutputUVs[8];		//Offset: 4	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings	MaterialSettings;		//Offset: 12	Size: 136	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t	GutterSize;		//Offset: 148	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SpecificLOD;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshLODSelectionType	LODSelectionType;		//Offset: 156	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGenerateLightMapUV : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bComputedLightMapResolution : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bPivotPointAtZero : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bMergePhysicsData : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bMergeMaterials : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCreateMergedMaterial : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBakeVertexDataToMesh : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseVertexDataForBakingMaterial : 1;		//Offset: 157	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 157	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseTextureBinning : 1;		//Offset: 158	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReuseMeshLightmapUVs : 1;		//Offset: 158	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bMergeEquivalentMaterials : 1;		//Offset: 158	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseLandscapeCulling : 1;		//Offset: 158	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIncludeImposters : 1;		//Offset: 158	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowDistanceField : 1;		//Offset: 158	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 158	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshProxySettings
	// Size 168
	/////////////////////////////////////////////
	struct FMeshProxySettings {
		int32_t	ScreenSize;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VoxelSize;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaterialProxySettings	MaterialSettings;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float	MergeDistance;		//Offset: 144	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	UnresolvedGeometryColor;		//Offset: 148	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxRayCastDist;		//Offset: 152	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HardAngleThreshold;		//Offset: 156	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LightMapResolution;		//Offset: 160	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EProxyNormalComputationMethod>	NormalCalculationMethod;		//Offset: 164	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ELandscapeCullingPrecision>	LandscapeCullingPrecision;		//Offset: 165	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCalculateCorrectLODModel : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideVoxelSize : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOverrideTransferDistance : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseHardAngleThreshold : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bComputeLightMapResolution : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecalculateNormals : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseLandscapeCulling : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowAdjacency : 1;		//Offset: 166	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 166	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCreateCollision : 1;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowVertexColors : 1;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGenerateLightmapUVs : 1;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowDistanceField : 1;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReuseMeshLightmapUVs : 1;		//Offset: 167	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 167	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshReductionSettings
	// Size 36
	/////////////////////////////////////////////
	struct FMeshReductionSettings {
		float	PercentTriangles;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PercentVertices;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxDeviation;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PixelError;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WeldingThreshold;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HardAngleThreshold;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	BaseLODModel;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMeshFeatureImportance>	SilhouetteImportance;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMeshFeatureImportance>	TextureImportance;		//Offset: 29	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMeshFeatureImportance>	ShadingImportance;		//Offset: 30	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecalculateNormals : 1;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGenerateUniqueLightmapUVs : 1;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bKeepSymmetry : 1;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bVisibilityAided : 1;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCullOccluded : 1;		//Offset: 31	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 31	Size: 1
		EStaticMeshReductionTerimationCriterion	TerminationCriterion;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMeshFeatureImportance>	VisibilityAggressiveness;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EMeshFeatureImportance>	VertexColorImportance;		//Offset: 34	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 35	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PurchaseInfo
	// Size 64
	/////////////////////////////////////////////
	struct FPurchaseInfo {
		struct FString	Identifier;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	DisplayName;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	DisplayDescription;		//Offset: 32	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	DisplayPrice;		//Offset: 48	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NameCurve
	// Super ScriptStruct Engine.IndexedCurve
	// Size 120
	// Size inherited 104
	/////////////////////////////////////////////
	struct FNameCurve : public FIndexedCurve {
		TArray<struct FNameCurveKey>	Keys;		//Offset: 104	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NameCurveKey
	// Size 12
	/////////////////////////////////////////////
	struct FNameCurveKey {
		float	Time;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Value;		//Offset: 4	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavAvoidanceMask
	// Size 4
	/////////////////////////////////////////////
	struct FNavAvoidanceMask {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup0 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup1 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup2 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup3 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup4 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup5 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup6 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup7 : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup11 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup12 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup13 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup14 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup15 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup8 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup9 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup10 : 1;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 1	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup16 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup17 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup18 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup19 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup20 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup21 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup22 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup23 : 1;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[1];		//Offset: 2	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup24 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup25 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup26 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup27 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup28 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup29 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup30 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGroup31 : 1;		//Offset: 3	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[1];		//Offset: 3	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MovementProperties
	// Size 1
	/////////////////////////////////////////////
	struct FMovementProperties {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCanCrouch : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCanJump : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCanWalk : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCanSwim : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCanFly : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavAgentProperties
	// Super ScriptStruct Engine.MovementProperties
	// Size 48
	// Size inherited 1
	/////////////////////////////////////////////
	struct FNavAgentProperties : public FMovementProperties {
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	AgentRadius;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AgentHeight;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AgentStepHeight;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NavWalkingSearchHeightScale;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 20	Size: 4
		struct FSoftClassPath	PreferredNavData;		//Offset: 24	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavDataConfig
	// Super ScriptStruct Engine.NavAgentProperties
	// Size 120
	// Size inherited 48
	/////////////////////////////////////////////
	struct FNavDataConfig : public FNavAgentProperties {
		struct FName	Name;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	Color;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	DefaultQueryExtent;		//Offset: 60	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor* NavigationDataClass;		//Offset: 72	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UClass>	NavDataClass;		//Offset: 80	Size: 40	Flags: Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavAgentSelector
	// Size 4
	/////////////////////////////////////////////
	struct FNavAgentSelector {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent7 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent0 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent1 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent2 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent3 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent4 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent5 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent6 : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent8 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent9 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent10 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent11 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent12 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent13 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent14 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent15 : 1;		//Offset: 1	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 1	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavigationLinkBase
	// Size 48
	/////////////////////////////////////////////
	struct FNavigationLinkBase {
		float	LeftProjectHeight;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxFallDownLength;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
		float	SnapRadius;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SnapHeight;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavAgentSelector	SupportedAgents;		//Offset: 20	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent1 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent2 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent3 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent4 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent5 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent6 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent7 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent0 : 1;		//Offset: 24	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 24	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent8 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent9 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent10 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent11 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent12 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent13 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent14 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportsAgent15 : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 25	Size: 3
		TEnumAsByte<ENavLinkDirection>	Direction;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseSnapHeight : 1;		//Offset: 29	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSnapToCheapestArea : 1;		//Offset: 29	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag0 : 1;		//Offset: 29	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag1 : 1;		//Offset: 29	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag2 : 1;		//Offset: 29	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag3 : 1;		//Offset: 29	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag4 : 1;		//Offset: 29	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag5 : 1;		//Offset: 29	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[1];		//Offset: 29	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag6 : 1;		//Offset: 30	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCustomFlag7 : 1;		//Offset: 30	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[2];		//Offset: 30	Size: 2
		class UNavAreaBase* AreaClass;		//Offset: 32	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_5[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavigationSegmentLink
	// Super ScriptStruct Engine.NavigationLinkBase
	// Size 96
	// Size inherited 48
	/////////////////////////////////////////////
	struct FNavigationSegmentLink : public FNavigationLinkBase {
		struct FVector	LeftStart;		//Offset: 48	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	LeftEnd;		//Offset: 60	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	RightStart;		//Offset: 72	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	RightEnd;		//Offset: 84	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NavigationLink
	// Super ScriptStruct Engine.NavigationLinkBase
	// Size 72
	// Size inherited 48
	/////////////////////////////////////////////
	struct FNavigationLink : public FNavigationLinkBase {
		struct FVector	Left;		//Offset: 48	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Right;		//Offset: 60	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ChannelDefinition
	// Size 40
	/////////////////////////////////////////////
	struct FChannelDefinition {
		struct FName	ChannelName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ClassName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* ChannelClass;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	StaticChannelIndex;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bTickOnCreate;		//Offset: 28	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bServerOpen;		//Offset: 29	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bClientOpen;		//Offset: 30	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bInitialServer;		//Offset: 31	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bInitialClient;		//Offset: 32	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 33	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PacketSimulationSettings
	// Size 52
	/////////////////////////////////////////////
	struct FPacketSimulationSettings {
		int32_t	PktLoss;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktLossMaxSize;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktLossMinSize;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktOrder;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktDup;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktLag;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktLagVariance;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktLagMin;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktLagMax;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktIncomingLagMin;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktIncomingLagMax;		//Offset: 40	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktIncomingLoss;		//Offset: 44	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	PktJitter;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FastArraySerializer
	// Size 264
	/////////////////////////////////////////////
	struct FFastArraySerializer {
		unsigned char uknownData_0[84];		//Offset: 0	Size: 84
		int32_t	ArrayReplicationKey;		//Offset: 84	Size: 4	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[168];		//Offset: 88	Size: 168
		EFastArraySerializerDeltaFlags	DeltaFlags;		//Offset: 256	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_2[7];		//Offset: 257	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FastArraySerializerItem
	// Size 12
	/////////////////////////////////////////////
	struct FFastArraySerializerItem {
		int32_t	ReplicationID;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ReplicationKey;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MostRecentArrayReplicationKey;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NetworkEmulationProfileDescription
	// Size 32
	/////////////////////////////////////////////
	struct FNetworkEmulationProfileDescription {
		struct FString	ProfileName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Tooltip;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NodeItem
	// Size 64
	/////////////////////////////////////////////
	struct FNodeItem {
		struct FName	ParentName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleBurst
	// Size 12
	/////////////////////////////////////////////
	struct FParticleBurst {
		int32_t	Count;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	CountLow;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Time;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleRandomSeedInfo
	// Size 32
	/////////////////////////////////////////////
	struct FParticleRandomSeedInfo {
		struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bInstanceSeedIsIndex : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bResetSeedOnEmitterLooping : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRandomlySelectSeedArray : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGetSeedFromInstance : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		TArray<int32_t>	RandomSeeds;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleCurvePair
	// Size 24
	/////////////////////////////////////////////
	struct FParticleCurvePair {
		struct FString	CurveName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* CurveObject;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BeamModifierOptions
	// Size 4
	/////////////////////////////////////////////
	struct FBeamModifierOptions {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bModify : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bScale : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLock : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleEvent_GenerateInfo
	// Size 40
	/////////////////////////////////////////////
	struct FParticleEvent_GenerateInfo {
		TEnumAsByte<EParticleEventType>	Type;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	Frequency;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ParticleFrequency;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	FirstTimeOnly : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	LastTimeOnly : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	UseReflectedImpactVector : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseOrbitOffset : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 12	Size: 4
		struct FName	CustomName;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UParticleModuleEventSendToGame*>	ParticleModuleEventsToSendToGame;		//Offset: 24	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LocationBoneSocketInfo
	// Size 20
	/////////////////////////////////////////////
	struct FLocationBoneSocketInfo {
		struct FName	BoneSocketName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Offset;		//Offset: 8	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.OrbitOptions
	// Size 4
	/////////////////////////////////////////////
	struct FOrbitOptions {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bProcessDuringSpawn : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bProcessDuringUpdate : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseEmitterTime : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EmitterDynamicParameter
	// Size 72
	/////////////////////////////////////////////
	struct FEmitterDynamicParameter {
		struct FName	ParamName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseEmitterTime : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSpawnTimeOnly : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
		TEnumAsByte<EEmitterDynamicParameterValue>	ValueMethod;		//Offset: 12	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 13	Size: 3
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bScaleVelocityByParamValue : 1;		//Offset: 16	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[8];		//Offset: 16	Size: 8
		struct FRawDistributionFloat	ParamValue;		//Offset: 24	Size: 48	Flags: Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BeamTargetData
	// Size 12
	/////////////////////////////////////////////
	struct FBeamTargetData {
		struct FName	TargetName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TargetPercentage;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GPUSpriteResourceData
	// Size 352
	/////////////////////////////////////////////
	struct FGPUSpriteResourceData {
		TArray<struct FColor>	QuantizedColorSamples;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>	QuantizedMiscSamples;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>	QuantizedSimulationAttrSamples;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector4	ColorScale;		//Offset: 48	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	ColorBias;		//Offset: 64	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	MiscScale;		//Offset: 80	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	MiscBias;		//Offset: 96	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	SimulationAttrCurveScale;		//Offset: 112	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	SimulationAttrCurveBias;		//Offset: 128	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	SubImageSize;		//Offset: 144	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	SizeBySpeed;		//Offset: 160	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ConstantAcceleration;		//Offset: 176	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitOffsetBase;		//Offset: 188	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitOffsetRange;		//Offset: 200	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitFrequencyBase;		//Offset: 212	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitFrequencyRange;		//Offset: 224	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitPhaseBase;		//Offset: 236	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitPhaseRange;		//Offset: 248	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	GlobalVectorFieldScale;		//Offset: 260	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	GlobalVectorFieldTightness;		//Offset: 264	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PerParticleVectorFieldScale;		//Offset: 268	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PerParticleVectorFieldBias;		//Offset: 272	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DragCoefficientScale;		//Offset: 276	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DragCoefficientBias;		//Offset: 280	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ResilienceScale;		//Offset: 284	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ResilienceBias;		//Offset: 288	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CollisionRadiusScale;		//Offset: 292	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CollisionRadiusBias;		//Offset: 296	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CollisionTimeBias;		//Offset: 300	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CollisionRandomSpread;		//Offset: 304	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CollisionRandomDistribution;		//Offset: 308	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OneMinusFriction;		//Offset: 312	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RotationRateScale;		//Offset: 316	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CameraMotionBlurAmount;		//Offset: 320	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EParticleScreenAlignment>	ScreenAlignment;		//Offset: 324	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EParticleAxisLock>	LockAxisFlag;		//Offset: 325	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 326	Size: 2
		struct FVector2D	PivotOffset;		//Offset: 328	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRemoveHMDRoll : 1;		//Offset: 336	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 336	Size: 4
		float	MinFacingCameraBlendDistance;		//Offset: 340	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxFacingCameraBlendDistance;		//Offset: 344	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 348	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
	// Size 112
	/////////////////////////////////////////////
	struct FGPUSpriteLocalVectorFieldInfo {
		class UVectorField* Field;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator	MinInitialRotation;		//Offset: 64	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator	MaxInitialRotation;		//Offset: 76	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator	RotationRate;		//Offset: 88	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	Intensity;		//Offset: 100	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Tightness;		//Offset: 104	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIgnoreComponentTransform : 1;		//Offset: 108	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bTileX : 1;		//Offset: 108	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bTileY : 1;		//Offset: 108	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bTileZ : 1;		//Offset: 108	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseFixDT : 1;		//Offset: 108	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 108	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GPUSpriteEmitterInfo
	// Size 640
	/////////////////////////////////////////////
	struct FGPUSpriteEmitterInfo {
		class UParticleModuleRequired* RequiredModule;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleModuleSpawn* SpawnModule;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleModuleSpawnPerUnit* SpawnPerUnitModule;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UParticleModule*>	SpawnModules;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
		struct FGPUSpriteLocalVectorFieldInfo	LocalVectorField;		//Offset: 48	Size: 112	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FFloatDistribution	VectorFieldScale;		//Offset: 160	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatDistribution	DragCoefficient;		//Offset: 192	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatDistribution	PointAttractorStrength;		//Offset: 224	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatDistribution	Resilience;		//Offset: 256	Size: 32	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ConstantAcceleration;		//Offset: 288	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	PointAttractorPosition;		//Offset: 300	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PointAttractorRadiusSq;		//Offset: 312	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitOffsetBase;		//Offset: 316	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OrbitOffsetRange;		//Offset: 328	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	InvMaxSize;		//Offset: 340	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InvRotationRateScale;		//Offset: 348	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxLifetime;		//Offset: 352	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxParticleCount;		//Offset: 356	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EParticleScreenAlignment>	ScreenAlignment;		//Offset: 360	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EParticleAxisLock>	LockAxisFlag;		//Offset: 361	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 362	Size: 2
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableCollision : 1;		//Offset: 364	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 364	Size: 4
		TEnumAsByte<EParticleCollisionMode>	CollisionMode;		//Offset: 368	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[3];		//Offset: 369	Size: 3
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRemoveHMDRoll : 1;		//Offset: 372	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[4];		//Offset: 372	Size: 4
		float	MinFacingCameraBlendDistance;		//Offset: 376	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxFacingCameraBlendDistance;		//Offset: 380	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRawDistributionVector	DynamicColor;		//Offset: 384	Size: 72	Flags: ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat	DynamicAlpha;		//Offset: 456	Size: 48	Flags: ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionVector	DynamicColorScale;		//Offset: 504	Size: 72	Flags: ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRawDistributionFloat	DynamicAlphaScale;		//Offset: 576	Size: 48	Flags: ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char uknownData_5[16];		//Offset: 624	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NamedEmitterMaterial
	// Size 16
	/////////////////////////////////////////////
	struct FNamedEmitterMaterial {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface* Material;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LODSoloTrack
	// Size 16
	/////////////////////////////////////////////
	struct FLODSoloTrack {
		TArray<unsigned char>	SoloEnableSetting;		//Offset: 0	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleSystemLOD
	// Size 1
	/////////////////////////////////////////////
	struct FParticleSystemLOD {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleSysParam
	// Size 128
	/////////////////////////////////////////////
	struct FParticleSysParam {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EParticleSysParamType>	ParamType;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		float	Scalar;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Scalar_Low;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Vector;		//Offset: 20	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Vector_Low;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	Color;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor* Actor;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface* Material;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[64];		//Offset: 64	Size: 64
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FParticleSystemWorldManagerTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleSystemReplayFrame
	// Size 16
	/////////////////////////////////////////////
	struct FParticleSystemReplayFrame {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ParticleEmitterReplayFrame
	// Size 16
	/////////////////////////////////////////////
	struct FParticleEmitterReplayFrame {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FreezablePerPlatformInt
	// Size 4
	/////////////////////////////////////////////
	struct FFreezablePerPlatformInt {
		unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PhysicalAnimationData
	// Size 36
	/////////////////////////////////////////////
	struct FPhysicalAnimationData {
		struct FName	BodyName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsLocalSimulation : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
		float	OrientationStrength;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AngularVelocityStrength;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PositionStrength;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VelocityStrength;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxLinearForce;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxAngularForce;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PhysicalAnimationProfile
	// Size 44
	/////////////////////////////////////////////
	struct FPhysicalAnimationProfile {
		struct FName	ProfileName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPhysicalAnimationData	PhysicalAnimationData;		//Offset: 8	Size: 36	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SolverIterations
	// Size 28
	/////////////////////////////////////////////
	struct FSolverIterations {
		float	FixedTimeStep;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SolverIterations;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	JointIterations;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	CollisionIterations;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SolverPushOutIterations;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	JointPushOutIterations;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	CollisionPushOutIterations;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PhysicsConstraintProfileHandle
	// Size 284
	/////////////////////////////////////////////
	struct FPhysicsConstraintProfileHandle {
		struct FConstraintProfileProperties	ProfileProperties;		//Offset: 0	Size: 276	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FName	ProfileName;		//Offset: 276	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ChaosPhysicsSettings
	// Size 3
	/////////////////////////////////////////////
	struct FChaosPhysicsSettings {
		EChaosThreadingMode	DefaultThreadingModel;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChaosSolverTickMode	DedicatedThreadTickMode;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChaosBufferMode	DedicatedThreadBufferMode;		//Offset: 2	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PhysicalSurfaceName
	// Size 12
	/////////////////////////////////////////////
	struct FPhysicalSurfaceName {
		TEnumAsByte<EPhysicalSurface>	Type;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FName	Name;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DelegateArray
	// Size 16
	/////////////////////////////////////////////
	struct FDelegateArray {
		TArray<struct FScriptDelegate>	Delegates;		//Offset: 0	Size: 16	Flags: ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ViewTargetTransitionParams
	// Size 16
	/////////////////////////////////////////////
	struct FViewTargetTransitionParams {
		float	BlendTime;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EViewTargetBlendFunction>	BlendFunction;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		float	BlendExp;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockOutgoing : 1;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TViewTarget
	// Size 1552
	/////////////////////////////////////////////
	struct FTViewTarget {
		class AActor* Target;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		struct FMinimalViewInfo	POV;		//Offset: 16	Size: 1520	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class APlayerState* PlayerState;		//Offset: 1536	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char uknownData_1[8];		//Offset: 1544	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraCacheEntry
	// Size 1536
	/////////////////////////////////////////////
	struct FCameraCacheEntry {
		float	Timestamp;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[12];		//Offset: 4	Size: 12
		struct FMinimalViewInfo	POV;		//Offset: 16	Size: 1520	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
	// Size 16
	/////////////////////////////////////////////
	struct FUpdateLevelStreamingLevelStatus {
		struct FName	PackageName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LODIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bNewShouldBeLoaded;		//Offset: 12	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bNewShouldBeVisible;		//Offset: 13	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bNewShouldBlockOnLoad;		//Offset: 14	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 15	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputActionSpeechMapping
	// Size 16
	/////////////////////////////////////////////
	struct FInputActionSpeechMapping {
		struct FName	ActionName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FName	SpeechKeyword;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputAxisKeyMapping
	// Size 40
	/////////////////////////////////////////////
	struct FInputAxisKeyMapping {
		struct FName	AxisName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Scale;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		struct FKey	Key;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputActionKeyMapping
	// Size 40
	/////////////////////////////////////////////
	struct FInputActionKeyMapping {
		struct FName	ActionName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bShift : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCtrl : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAlt : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCmd : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		struct FKey	Key;		//Offset: 16	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputAxisProperties
	// Size 16
	/////////////////////////////////////////////
	struct FInputAxisProperties {
		float	DeadZone;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Sensitivity;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Exponent;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bInvert : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.InputAxisConfigEntry
	// Size 24
	/////////////////////////////////////////////
	struct FInputAxisConfigEntry {
		struct FName	AxisKeyName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputAxisProperties	AxisProperties;		//Offset: 8	Size: 16	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.KeyBind
	// Size 48
	/////////////////////////////////////////////
	struct FKeyBind {
		struct FKey	Key;		//Offset: 0	Size: 24	Flags: Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Command;		//Offset: 24	Size: 16	Flags: ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	Control : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	Shift : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	Alt : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	Cmd : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIgnoreCtrl : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIgnoreShift : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIgnoreAlt : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIgnoreCmd : 1;		//Offset: 40	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 40	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bDisabled : 1;		//Offset: 41	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 41	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PlayerMuteList
	// Size 56
	/////////////////////////////////////////////
	struct FPlayerMuteList {
		unsigned char uknownData_0[48];		//Offset: 0	Size: 48
		bool	bHasVoiceHandshakeCompleted;		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 49	Size: 3
		int32_t	VoiceChannelIdx;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PoseDataContainer
	// Size 144
	/////////////////////////////////////////////
	struct FPoseDataContainer {
		TArray<struct FSmartName>	PoseNames;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FName>	Tracks;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FName, int32_t>	TrackMap;		//Offset: 32	Size: 80	Flags: Transient, NativeAccessSpecifierPrivate
		TArray<struct FPoseData>	Poses;		//Offset: 112	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAnimCurveBase>	Curves;		//Offset: 128	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PoseData
	// Size 112
	/////////////////////////////////////////////
	struct FPoseData {
		TArray<struct FTransform>	LocalSpacePose;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>	TrackToBufferIndex;		//Offset: 16	Size: 80	Flags: NativeAccessSpecifierPublic
		TArray<float>	CurveData;		//Offset: 96	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PreviewAssetAttachContainer
	// Size 16
	/////////////////////////////////////////////
	struct FPreviewAssetAttachContainer {
		TArray<struct FPreviewAttachedObjectPair>	AttachedObjects;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PreviewAttachedObjectPair
	// Size 56
	/////////////////////////////////////////////
	struct FPreviewAttachedObjectPair {
		TAssetPtr<class UObject>	AttachedObject;		//Offset: 0	Size: 40	Flags: UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject* Object;		//Offset: 40	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FName	AttachedTo;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PreviewMeshCollectionEntry
	// Size 40
	/////////////////////////////////////////////
	struct FPreviewMeshCollectionEntry {
		TAssetPtr<class USkeletalMesh>	SkeletalMesh;		//Offset: 0	Size: 40	Flags: Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrimitiveComponentInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 256
	// Size inherited 184
	/////////////////////////////////////////////
	struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData {
		unsigned char uknownData_0[8];		//Offset: 184	Size: 8
		struct FTransform	ComponentTransform;		//Offset: 192	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		int32_t	VisibilityId;		//Offset: 240	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_1[4];		//Offset: 244	Size: 4
		class UPrimitiveComponent* LODParent;		//Offset: 248	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SpriteCategoryInfo
	// Size 56
	/////////////////////////////////////////////
	struct FSpriteCategoryInfo {
		struct FName	Category;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FText	DisplayName;		//Offset: 8	Size: 24	Flags: NativeAccessSpecifierPublic
		struct FText	Description;		//Offset: 32	Size: 24	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.QuartzTimeSignature
	// Size 24
	/////////////////////////////////////////////
	struct FQuartzTimeSignature {
		int32_t	NumBeats;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuartzTimeSignatureQuantization	BeatType;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
		TArray<struct FQuartzPulseOverrideStep>	OptionalPulseOverride;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.QuartzClockSettings
	// Size 32
	/////////////////////////////////////////////
	struct FQuartzClockSettings {
		struct FQuartzTimeSignature	TimeSignature;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool	bIgnoreLevelChange;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 25	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.QuartzPulseOverrideStep
	// Size 8
	/////////////////////////////////////////////
	struct FQuartzPulseOverrideStep {
		int32_t	NumberOfPulses;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuartzCommandQuantization	PulseDuration;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.QuartzQuantizationBoundary
	// Size 12
	/////////////////////////////////////////////
	struct FQuartzQuantizationBoundary {
		EQuartzCommandQuantization	Quantization;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Multiplier;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuarztQuantizationReference	CountingReferencePoint;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bFireOnClockStart;		//Offset: 9	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[2];		//Offset: 10	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.QuartzTransportTimeStamp
	// Size 16
	/////////////////////////////////////////////
	struct FQuartzTransportTimeStamp {
		int32_t	Bars;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Beat;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BeatFraction;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Seconds;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LevelNameAndTime
	// Size 24
	/////////////////////////////////////////////
	struct FLevelNameAndTime {
		struct FString	LevelName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t	LevelChangeTimeInMS;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ReverbSettings
	// Size 32
	/////////////////////////////////////////////
	struct FReverbSettings {
		bool	bApplyReverb;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		class UReverbEffect* ReverbEffect;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSubmixPreset* ReverbPluginEffect;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Volume;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FadeTime;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CompressedRichCurve
	// Size 24
	/////////////////////////////////////////////
	struct FCompressedRichCurve {
		unsigned char uknownData_0[24];		//Offset: 0	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TransformBaseConstraint
	// Size 16
	/////////////////////////////////////////////
	struct FTransformBaseConstraint {
		TArray<struct FRigTransformConstraint>	TransformConstraints;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TransformBase
	// Size 40
	/////////////////////////////////////////////
	struct FTransformBase {
		struct FName	Node;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformBaseConstraint	Constraints[2];		//Offset: 8	Size: 16	Flags: Edit, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RigTransformConstraint
	// Size 16
	/////////////////////////////////////////////
	struct FRigTransformConstraint {
		TEnumAsByte<EConstraintTransform>	TranformType;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FName	ParentSpace;		//Offset: 4	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Weight;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Node
	// Size 96
	/////////////////////////////////////////////
	struct FNode {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ParentName;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform	Transform;		//Offset: 16	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FString	DisplayName;		//Offset: 64	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAdvanced;		//Offset: 80	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[15];		//Offset: 81	Size: 15
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSourceStatus
	// Size 1
	/////////////////////////////////////////////
	struct FRootMotionSourceStatus {
		unsigned char	Flags;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionFinishVelocitySettings
	// Size 20
	/////////////////////////////////////////////
	struct FRootMotionFinishVelocitySettings {
		ERootMotionFinishVelocityMode	Mode;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FVector	SetVelocity;		//Offset: 4	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ClampVelocity;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSource
	// Size 160
	/////////////////////////////////////////////
	struct FRootMotionSource {
		unsigned char uknownData_0[16];		//Offset: 0	Size: 16
		uint16_t	Priority;		//Offset: 16	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t	LocalID;		//Offset: 18	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERootMotionAccumulateMode	AccumulateMode;		//Offset: 20	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 21	Size: 3
		struct FName	InstanceName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StartTime;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CurrentTime;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PreviousTime;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Duration;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRootMotionSourceStatus	Status;		//Offset: 48	Size: 1	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FRootMotionSourceSettings	Settings;		//Offset: 49	Size: 1	Flags: NoDestructor, NativeAccessSpecifierPublic
		bool	bInLocalSpace;		//Offset: 50	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[13];		//Offset: 51	Size: 13
		struct FRootMotionMovementParams	RootMotionParams;		//Offset: 64	Size: 64	Flags: NoDestructor, NativeAccessSpecifierPublic
		struct FRootMotionFinishVelocitySettings	FinishVelocityParams;		//Offset: 128	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_3[12];		//Offset: 148	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSource_JumpForce
	// Super ScriptStruct Engine.RootMotionSource
	// Size 208
	// Size inherited 160
	/////////////////////////////////////////////
	struct FRootMotionSource_JumpForce : public FRootMotionSource {
		struct FRotator	Rotation;		//Offset: 152	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	Distance;		//Offset: 164	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Height;		//Offset: 168	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bDisableTimeout;		//Offset: 172	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 173	Size: 3
		class UCurveVector* PathOffsetCurve;		//Offset: 176	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat* TimeMappingCurve;		//Offset: 184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[16];		//Offset: 192	Size: 16
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
	// Super ScriptStruct Engine.RootMotionSource
	// Size 208
	// Size inherited 160
	/////////////////////////////////////////////
	struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource {
		struct FVector	StartLocation;		//Offset: 152	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	InitialTargetLocation;		//Offset: 164	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	TargetLocation;		//Offset: 176	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRestrictSpeedToExpected;		//Offset: 188	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 189	Size: 3
		class UCurveVector* PathOffsetCurve;		//Offset: 192	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat* TimeMappingCurve;		//Offset: 200	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSource_MoveToForce
	// Super ScriptStruct Engine.RootMotionSource
	// Size 192
	// Size inherited 160
	/////////////////////////////////////////////
	struct FRootMotionSource_MoveToForce : public FRootMotionSource {
		struct FVector	StartLocation;		//Offset: 152	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	TargetLocation;		//Offset: 164	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRestrictSpeedToExpected;		//Offset: 176	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 177	Size: 7
		class UCurveVector* PathOffsetCurve;		//Offset: 184	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSource_RadialForce
	// Super ScriptStruct Engine.RootMotionSource
	// Size 224
	// Size inherited 160
	/////////////////////////////////////////////
	struct FRootMotionSource_RadialForce : public FRootMotionSource {
		struct FVector	Location;		//Offset: 152	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 164	Size: 4
		class AActor* LocationActor;		//Offset: 168	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Radius;		//Offset: 176	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Strength;		//Offset: 180	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIsPush;		//Offset: 184	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bNoZForce;		//Offset: 185	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[6];		//Offset: 186	Size: 6
		class UCurveFloat* StrengthDistanceFalloff;		//Offset: 192	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat* StrengthOverTime;		//Offset: 200	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bUseFixedWorldDirection;		//Offset: 208	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 209	Size: 3
		struct FRotator	FixedWorldDirection;		//Offset: 212	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RootMotionSource_ConstantForce
	// Super ScriptStruct Engine.RootMotionSource
	// Size 176
	// Size inherited 160
	/////////////////////////////////////////////
	struct FRootMotionSource_ConstantForce : public FRootMotionSource {
		struct FVector	Force;		//Offset: 152	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 164	Size: 4
		class UCurveFloat* StrengthOverTime;		//Offset: 168	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CameraExposureSettings
	// Size 64
	/////////////////////////////////////////////
	struct FCameraExposureSettings {
		TEnumAsByte<EAutoExposureMethod>	Method;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	LowPercent;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HighPercent;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinBrightness;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxBrightness;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SpeedUp;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SpeedDown;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bias;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat* BiasCurve;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture* MeterMask;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HistogramLogMin;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HistogramLogMax;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	CalibrationConstant;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	ApplyPhysicalCameraExposure : 1;		//Offset: 60	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 60	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.GaussianSumBloomSettings
	// Size 132
	/////////////////////////////////////////////
	struct FGaussianSumBloomSettings {
		float	Intensity;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Threshold;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SizeScale;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Filter1Size;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Filter2Size;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Filter3Size;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Filter4Size;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Filter5Size;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Filter6Size;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Filter1Tint;		//Offset: 36	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Filter2Tint;		//Offset: 52	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Filter3Tint;		//Offset: 68	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Filter4Tint;		//Offset: 84	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Filter5Tint;		//Offset: 100	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	Filter6Tint;		//Offset: 116	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ConvolutionBloomSettings
	// Size 40
	/////////////////////////////////////////////
	struct FConvolutionBloomSettings {
		class UTexture2D* Texture;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Size;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	CenterUV;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PreFilterMin;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PreFilterMax;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PreFilterMult;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BufferScale;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LensBloomSettings
	// Size 184
	/////////////////////////////////////////////
	struct FLensBloomSettings {
		struct FGaussianSumBloomSettings	GaussianSum;		//Offset: 0	Size: 132	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 132	Size: 4
		struct FConvolutionBloomSettings	Convolution;		//Offset: 136	Size: 40	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		TEnumAsByte<EBloomMethod>	Method;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 177	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LensImperfectionSettings
	// Size 32
	/////////////////////////////////////////////
	struct FLensImperfectionSettings {
		class UTexture* DirtMask;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DirtMaskIntensity;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	DirtMaskTint;		//Offset: 12	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LensSettings
	// Size 224
	/////////////////////////////////////////////
	struct FLensSettings {
		struct FLensBloomSettings	Bloom;		//Offset: 0	Size: 184	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FLensImperfectionSettings	Imperfections;		//Offset: 184	Size: 32	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float	ChromaticAberration;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 220	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.FilmStockSettings
	// Size 20
	/////////////////////////////////////////////
	struct FFilmStockSettings {
		float	Slope;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Toe;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Shoulder;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BlackClip;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WhiteClip;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ColorGradePerRangeSettings
	// Size 80
	/////////////////////////////////////////////
	struct FColorGradePerRangeSettings {
		struct FVector4	Saturation;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	Contrast;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	Gamma;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	Gain;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	Offset;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ColorGradingSettings
	// Size 336
	/////////////////////////////////////////////
	struct FColorGradingSettings {
		struct FColorGradePerRangeSettings	Global;		//Offset: 0	Size: 80	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FColorGradePerRangeSettings	Shadows;		//Offset: 80	Size: 80	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FColorGradePerRangeSettings	Midtones;		//Offset: 160	Size: 80	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FColorGradePerRangeSettings	Highlights;		//Offset: 240	Size: 80	Flags: Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float	ShadowsMax;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HighlightsMin;		//Offset: 324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 328	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EngineShowFlagsSetting
	// Size 24
	/////////////////////////////////////////////
	struct FEngineShowFlagsSetting {
		struct FString	ShowFlagName;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	Enabled;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 17	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
	// Size 80
	/////////////////////////////////////////////
	struct FSceneViewExtensionIsActiveFunctor {
		unsigned char uknownData_0[80];		//Offset: 0	Size: 80
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMaterial
	// Size 40
	/////////////////////////////////////////////
	struct FSkeletalMaterial {
		class UMaterialInterface* MaterialInterface;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MaterialSlotName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMeshUVChannelInfo	UVChannelData;		//Offset: 16	Size: 20	Flags: Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ClothPhysicsProperties_Legacy
	// Size 80
	/////////////////////////////////////////////
	struct FClothPhysicsProperties_Legacy {
		float	VerticalResistance;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HorizontalResistance;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	BendResistance;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ShearResistance;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Friction;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Damping;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TetherStiffness;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TetherLimit;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Drag;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StiffnessFrequency;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	GravityScale;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MassScale;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	InertiaBlend;		//Offset: 48	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SelfCollisionThickness;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SelfCollisionSquashScale;		//Offset: 56	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SelfCollisionStiffness;		//Offset: 60	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SolverFrequency;		//Offset: 64	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FiberCompression;		//Offset: 68	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FiberExpansion;		//Offset: 72	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FiberResistance;		//Offset: 76	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ClothingAssetData_Legacy
	// Size 120
	/////////////////////////////////////////////
	struct FClothingAssetData_Legacy {
		struct FName	AssetName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	ApexFileName;		//Offset: 8	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bClothPropertiesChanged;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 25	Size: 3
		struct FClothPhysicsProperties_Legacy	PhysicsProperties;		//Offset: 28	Size: 80	Flags: NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_1[12];		//Offset: 108	Size: 12
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshOptimizationSettings
	// Size 60
	/////////////////////////////////////////////
	struct FSkeletalMeshOptimizationSettings {
		TEnumAsByte<ESkeletalMeshTerminationCriterion>	TerminationCriterion;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	NumOfTrianglesPercentage;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NumOfVertPercentage;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t	MaxNumOfTriangles;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t	MaxNumOfVerts;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxDeviationPercentage;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ESkeletalMeshOptimizationType>	ReductionMethod;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ESkeletalMeshOptimizationImportance>	SilhouetteImportance;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ESkeletalMeshOptimizationImportance>	TextureImportance;		//Offset: 26	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ESkeletalMeshOptimizationImportance>	ShadingImportance;		//Offset: 27	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ESkeletalMeshOptimizationImportance>	SkinningImportance;		//Offset: 28	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRemapMorphTargets : 1;		//Offset: 29	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bRecalcNormals : 1;		//Offset: 29	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 29	Size: 3
		float	WeldingThreshold;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NormalsThreshold;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxBonesPerVertex;		//Offset: 40	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnforceBoneBoundaries : 1;		//Offset: 44	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 44	Size: 4
		float	VolumeImportance;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockEdges : 1;		//Offset: 52	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLockColorBounaries : 1;		//Offset: 52	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[4];		//Offset: 52	Size: 4
		int32_t	BaseLOD;		//Offset: 56	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshLODInfo
	// Size 184
	/////////////////////////////////////////////
	struct FSkeletalMeshLODInfo {
		struct FPerPlatformFloat	ScreenSize;		//Offset: 0	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		float	LODHysteresis;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>	LODMaterialMap;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		struct FSkeletalMeshBuildSettings	BuildSettings;		//Offset: 24	Size: 20	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSkeletalMeshOptimizationSettings	ReductionSettings;		//Offset: 44	Size: 60	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>	BonesToRemove;		//Offset: 104	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>	BonesToPrioritize;		//Offset: 120	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float	WeightOfPrioritization;		//Offset: 136	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 140	Size: 4
		class UAnimSequence* BakePose;		//Offset: 144	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence* BakePoseOverride;		//Offset: 152	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	SourceImportFilename;		//Offset: 160	Size: 16	Flags: Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkinCacheUsage	SkinCacheUsage;		//Offset: 176	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasBeenSimplified : 1;		//Offset: 177	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bHasPerLODVertexColors : 1;		//Offset: 177	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowCPUAccess : 1;		//Offset: 177	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportUniformlyDistributedSampling : 1;		//Offset: 177	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 177	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshClothBuildParams
	// Size 88
	/////////////////////////////////////////////
	struct FSkeletalMeshClothBuildParams {
		TWeakObjectPtr<class UClothingAssetBase>	TargetAsset;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TargetLod;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRemapParameters;		//Offset: 12	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 13	Size: 3
		struct FString	AssetName;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LODIndex;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SourceSection;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRemoveFromMesh;		//Offset: 40	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 41	Size: 7
		TAssetPtr<class UPhysicsAsset>	PhysicsAsset;		//Offset: 48	Size: 40	Flags: Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoneMirrorExport
	// Size 20
	/////////////////////////////////////////////
	struct FBoneMirrorExport {
		struct FName	BoneName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	SourceBoneName;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAxis>	BoneFlipAxis;		//Offset: 16	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoneMirrorInfo
	// Size 8
	/////////////////////////////////////////////
	struct FBoneMirrorInfo {
		int32_t	SourceIndex;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAxis>	BoneFlipAxis;		//Offset: 4	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FSkeletalMeshComponentClothTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshLODGroupSettings
	// Size 128
	/////////////////////////////////////////////
	struct FSkeletalMeshLODGroupSettings {
		struct FPerPlatformFloat	ScreenSize;		//Offset: 0	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		float	LODHysteresis;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneFilterActionOption	BoneFilterActionOption;		//Offset: 8	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 9	Size: 7
		TArray<struct FBoneFilter>	BoneList;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FName>	BonesToPrioritize;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float	WeightOfPrioritization;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 52	Size: 4
		class UAnimSequence* BakePose;		//Offset: 56	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSkeletalMeshOptimizationSettings	ReductionSettings;		//Offset: 64	Size: 60	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 124	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoneFilter
	// Size 12
	/////////////////////////////////////////////
	struct FBoneFilter {
		bool	bExcludeSelf;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FName	BoneName;		//Offset: 4	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
	// Size 32
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingBuiltData {
		TArray<struct FSkeletalMeshSamplingLODBuiltData>	WholeMeshBuiltData;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkeletalMeshSamplingRegionBuiltData>	RegionBuiltData;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingInfo
	// Size 48
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingInfo {
		TArray<struct FSkeletalMeshSamplingRegion>	Regions;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSkeletalMeshSamplingBuiltData	BuiltData;		//Offset: 16	Size: 32	Flags: NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
	// Size 120
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingRegionBuiltData {
		unsigned char uknownData_0[120];		//Offset: 0	Size: 120
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
	// Size 72
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingLODBuiltData {
		unsigned char uknownData_0[72];		//Offset: 0	Size: 72
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingRegion
	// Size 48
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingRegion {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LODIndex;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSupportUniformlyDistributedSampling : 1;		//Offset: 12	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 12	Size: 4
		TArray<struct FSkeletalMeshSamplingRegionMaterialFilter>	MaterialFilters;		//Offset: 16	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkeletalMeshSamplingRegionBoneFilter>	BoneFilters;		//Offset: 32	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
	// Size 12
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingRegionBoneFilter {
		struct FName	BoneName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIncludeOrExclude : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bApplyToChildren : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
	// Size 8
	/////////////////////////////////////////////
	struct FSkeletalMeshSamplingRegionMaterialFilter {
		struct FName	MaterialName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VirtualBone
	// Size 24
	/////////////////////////////////////////////
	struct FVirtualBone {
		struct FName	SourceBoneName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	TargetBoneName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	VirtualBoneName;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AnimSlotGroup
	// Size 24
	/////////////////////////////////////////////
	struct FAnimSlotGroup {
		struct FName	GroupName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FName>	SlotNames;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.RigConfiguration
	// Size 24
	/////////////////////////////////////////////
	struct FRigConfiguration {
		class URig* Rig;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNameMapping>	BoneMappingTable;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NameMapping
	// Size 16
	/////////////////////////////////////////////
	struct FNameMapping {
		struct FName	NodeName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	BoneName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoneReductionSetting
	// Size 16
	/////////////////////////////////////////////
	struct FBoneReductionSetting {
		TArray<struct FName>	BonesToRemove;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ReferencePose
	// Size 24
	/////////////////////////////////////////////
	struct FReferencePose {
		struct FName	PoseName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>	ReferencePose;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BoneNode
	// Size 16
	/////////////////////////////////////////////
	struct FBoneNode {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ParentIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EBoneTranslationRetargetingMode>	TranslationRetargetingMode;		//Offset: 12	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 13	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkeletonToMeshLinkup
	// Size 32
	/////////////////////////////////////////////
	struct FSkeletonToMeshLinkup {
		TArray<int32_t>	SkeletonToMeshTable;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>	MeshToSkeletonTable;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VertexOffsetUsage
	// Size 4
	/////////////////////////////////////////////
	struct FVertexOffsetUsage {
		int32_t	Usage;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkelMeshComponentLODInfo
	// Size 72
	/////////////////////////////////////////////
	struct FSkelMeshComponentLODInfo {
		TArray<bool>	HiddenMaterials;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[56];		//Offset: 16	Size: 56
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkelMeshSkinWeightInfo
	// Size 60
	/////////////////////////////////////////////
	struct FSkelMeshSkinWeightInfo {
		int32_t	Bones[12];		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	Weights[12];		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkinWeightProfileInfo
	// Size 16
	/////////////////////////////////////////////
	struct FSkinWeightProfileInfo {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformBool	DefaultProfile;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		struct FPerPlatformInt	DefaultProfileFromLODIndex;		//Offset: 12	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SkinWeightProfileManagerTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FSkinWeightProfileManagerTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TentDistribution
	// Size 12
	/////////////////////////////////////////////
	struct FTentDistribution {
		float	TipAltitude;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TipValue;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Width;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PrecomputedSkyLightInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 368
	// Size inherited 184
	/////////////////////////////////////////////
	struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData {
		struct FGuid	LightGuid;		//Offset: 184	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AverageBrightness;		//Offset: 200	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[164];		//Offset: 204	Size: 164
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SmartNameContainer
	// Size 80
	/////////////////////////////////////////////
	struct FSmartNameContainer {
		unsigned char uknownData_0[80];		//Offset: 0	Size: 80
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SmartNameMapping
	// Size 112
	/////////////////////////////////////////////
	struct FSmartNameMapping {
		unsigned char uknownData_0[112];		//Offset: 0	Size: 112
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.CurveMetaData
	// Size 24
	/////////////////////////////////////////////
	struct FCurveMetaData {
		unsigned char uknownData_0[24];		//Offset: 0	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundAttenuationPluginSettings
	// Size 48
	/////////////////////////////////////////////
	struct FSoundAttenuationPluginSettings {
		TArray<class USpatializationPluginSourceSettingsBase*>	SpatializationPluginSettingsArray;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOcclusionPluginSourceSettingsBase*>	OcclusionPluginSettingsArray;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UReverbPluginSourceSettingsBase*>	ReverbPluginSettingsArray;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundAttenuationSettings
	// Super ScriptStruct Engine.BaseAttenuationSettings
	// Size 928
	// Size inherited 176
	/////////////////////////////////////////////
	struct FSoundAttenuationSettings : public FBaseAttenuationSettings {
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableFocusInterpolation : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableOcclusion : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseComplexCollisionForOcclusion : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableReverbSend : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAttenuate : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSpatialize : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAttenuateWithLPF : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableListenerFocus : 1;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 176	Size: 1
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnablePriorityAttenuation : 1;		//Offset: 177	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bApplyNormalizationToStereoSounds : 1;		//Offset: 177	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableLogFrequencyScaling : 1;		//Offset: 177	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bEnableSubmixSends : 1;		//Offset: 177	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[1];		//Offset: 177	Size: 1
		TEnumAsByte<ESoundSpatializationAlgorithm>	SpatializationAlgorithm;		//Offset: 178	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[1];		//Offset: 179	Size: 1
		float	BinauralRadius;		//Offset: 180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAirAbsorptionMethod	AbsorptionMethod;		//Offset: 184	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ECollisionChannel>	OcclusionTraceChannel;		//Offset: 185	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EReverbSendMethod	ReverbSendMethod;		//Offset: 186	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPriorityAttenuationMethod	PriorityAttenuationMethod;		//Offset: 187	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OmniRadius;		//Offset: 188	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StereoSpread;		//Offset: 192	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPFRadiusMin;		//Offset: 196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPFRadiusMax;		//Offset: 200	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[4];		//Offset: 204	Size: 4
		struct FRuntimeFloatCurve	CustomLowpassAirAbsorptionCurve;		//Offset: 208	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve	CustomHighpassAirAbsorptionCurve;		//Offset: 344	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float	LPFFrequencyAtMin;		//Offset: 480	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LPFFrequencyAtMax;		//Offset: 484	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HPFFrequencyAtMin;		//Offset: 488	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	HPFFrequencyAtMax;		//Offset: 492	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FocusAzimuth;		//Offset: 496	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NonFocusAzimuth;		//Offset: 500	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FocusDistanceScale;		//Offset: 504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NonFocusDistanceScale;		//Offset: 508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FocusPriorityScale;		//Offset: 512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NonFocusPriorityScale;		//Offset: 516	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FocusVolumeAttenuation;		//Offset: 520	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NonFocusVolumeAttenuation;		//Offset: 524	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FocusAttackInterpSpeed;		//Offset: 528	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FocusReleaseInterpSpeed;		//Offset: 532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OcclusionLowPassFilterFrequency;		//Offset: 536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OcclusionVolumeAttenuation;		//Offset: 540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OcclusionInterpolationTime;		//Offset: 544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ReverbWetLevelMin;		//Offset: 548	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ReverbWetLevelMax;		//Offset: 552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ReverbDistanceMin;		//Offset: 556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ReverbDistanceMax;		//Offset: 560	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ManualReverbSendLevel;		//Offset: 564	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve	CustomReverbSendCurve;		//Offset: 568	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FAttenuationSubmixSendSettings>	SubmixSendSettings;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float	PriorityAttenuationMin;		//Offset: 720	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PriorityAttenuationMax;		//Offset: 724	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PriorityAttenuationDistanceMin;		//Offset: 728	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PriorityAttenuationDistanceMax;		//Offset: 732	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ManualPriorityAttenuation;		//Offset: 736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[4];		//Offset: 740	Size: 4
		struct FRuntimeFloatCurve	CustomPriorityAttenuationCurve;		//Offset: 744	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSoundAttenuationPluginSettings	PluginSettings;		//Offset: 880	Size: 48	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AttenuationSubmixSendSettings
	// Size 168
	/////////////////////////////////////////////
	struct FAttenuationSubmixSendSettings {
		class USoundSubmixBase* Submix;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixSendMethod	SubmixSendMethod;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 9	Size: 3
		float	SubmixSendLevelMin;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SubmixSendLevelMax;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SubmixSendDistanceMin;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SubmixSendDistanceMax;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ManualSubmixSendLevel;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve	CustomSubmixSendCurve;		//Offset: 32	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PassiveSoundMixModifier
	// Size 16
	/////////////////////////////////////////////
	struct FPassiveSoundMixModifier {
		class USoundMix* SoundMix;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinVolumeThreshold;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxVolumeThreshold;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundModulationDefaultSettings
	// Size 64
	/////////////////////////////////////////////
	struct FSoundModulationDefaultSettings {
		struct FSoundModulationDestinationSettings	VolumeModulationDestination;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings	PitchModulationDestination;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings	HighpassModulationDestination;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings	LowpassModulationDestination;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundClassProperties
	// Size 120
	/////////////////////////////////////////////
	struct FSoundClassProperties {
		float	Volume;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Pitch;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LowPassFilterFrequency;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	AttenuationDistanceScale;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LFEBleed;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VoiceCenterChannelVolume;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RadioFilterVolume;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	RadioFilterVolumeThreshold;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bApplyEffects : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAlwaysPlay : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsUISound : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsMusic : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCenterChannelOnly : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bApplyAmbientVolumes : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReverb : 1;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 32	Size: 4
		float	Default2DReverbSendAmount;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundModulationDefaultSettings	ModulationSettings;		//Offset: 40	Size: 64	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TEnumAsByte<EAudioOutputTarget>	OutputTarget;		//Offset: 104	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESoundWaveLoadingBehavior	LoadingBehavior;		//Offset: 105	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[6];		//Offset: 106	Size: 6
		class USoundSubmix* DefaultSubmix;		//Offset: 112	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundClassEditorData
	// Size 8
	/////////////////////////////////////////////
	struct FSoundClassEditorData {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundConcurrencySettings
	// Size 40
	/////////////////////////////////////////////
	struct FSoundConcurrencySettings {
		int32_t	MaxCount;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLimitToOwner : 1;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TEnumAsByte<EMaxConcurrentResolutionRule>	ResolutionRule;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 9	Size: 3
		float	RetriggerTime;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VolumeScale;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EConcurrencyVolumeScaleMode	VolumeScaleMode;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VolumeScaleAttackTime;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bVolumeScaleCanRelease : 1;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[4];		//Offset: 28	Size: 4
		float	VolumeScaleReleaseTime;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VoiceStealReleaseTime;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundNodeEditorData
	// Size 8
	/////////////////////////////////////////////
	struct FSoundNodeEditorData {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SourceEffectChainEntry
	// Size 16
	/////////////////////////////////////////////
	struct FSourceEffectChainEntry {
		class USoundEffectSourcePreset* Preset;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bBypass : 1;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundGroup
	// Size 32
	/////////////////////////////////////////////
	struct FSoundGroup {
		TEnumAsByte<ESoundGroup>	SoundGroup;		//Offset: 0	Size: 1	Flags: ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FString	DisplayName;		//Offset: 8	Size: 16	Flags: ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAlwaysDecompressOnLoad : 1;		//Offset: 24	Size: 1	Flags: Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 24	Size: 4
		float	DecompressedDuration;		//Offset: 28	Size: 4	Flags: ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundClassAdjuster
	// Size 32
	/////////////////////////////////////////////
	struct FSoundClassAdjuster {
		class USoundClass* SoundClassObject;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VolumeAdjuster;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PitchAdjuster;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LowPassFilterFrequency;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bApplyToChildren : 1;		//Offset: 20	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		float	VoiceCenterChannelVolumeAdjuster;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 28	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AudioEQEffect
	// Super ScriptStruct Engine.AudioEffectParameters
	// Size 64
	// Size inherited 8
	/////////////////////////////////////////////
	struct FAudioEQEffect : public FAudioEffectParameters {
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
		float	FrequencyCenter0;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Gain0;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bandwidth0;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FrequencyCenter1;		//Offset: 28	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Gain1;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bandwidth1;		//Offset: 36	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FrequencyCenter2;		//Offset: 40	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Gain2;		//Offset: 44	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bandwidth2;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FrequencyCenter3;		//Offset: 52	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Gain3;		//Offset: 56	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Bandwidth3;		//Offset: 60	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundModulationDefaultRoutingSettings
	// Super ScriptStruct Engine.SoundModulationDefaultSettings
	// Size 72
	// Size inherited 64
	/////////////////////////////////////////////
	struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings {
		EModulationRouting	VolumeRouting;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModulationRouting	PitchRouting;		//Offset: 65	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModulationRouting	HighpassRouting;		//Offset: 66	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModulationRouting	LowpassRouting;		//Offset: 67	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 68	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.DistanceDatum
	// Size 20
	/////////////////////////////////////////////
	struct FDistanceDatum {
		float	FadeInDistanceStart;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FadeInDistanceEnd;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FadeOutDistanceStart;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FadeOutDistanceEnd;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Volume;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.ModulatorContinuousParams
	// Size 32
	/////////////////////////////////////////////
	struct FModulatorContinuousParams {
		struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Default;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinInput;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxInput;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinOutput;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxOutput;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EModulationParamMode>	ParamMode;		//Offset: 28	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 29	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundSourceBusSendInfo
	// Size 184
	/////////////////////////////////////////////
	struct FSoundSourceBusSendInfo {
		ESourceBusSendLevelControlMethod	SourceBusSendLevelControlMethod;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		class USoundSourceBus* SoundSourceBus;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioBus* AudioBus;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SendLevel;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinSendLevel;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxSendLevel;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MinSendDistance;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxSendDistance;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 44	Size: 4
		struct FRuntimeFloatCurve	CustomSendLevelCurve;		//Offset: 48	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundSubmixSpectralAnalysisBandSettings
	// Size 16
	/////////////////////////////////////////////
	struct FSoundSubmixSpectralAnalysisBandSettings {
		float	BandFrequency;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	AttackTimeMsec;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ReleaseTimeMsec;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	QFactor;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundWaveEnvelopeTimeData
	// Size 8
	/////////////////////////////////////////////
	struct FSoundWaveEnvelopeTimeData {
		float	Amplitude;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TimeSec;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundWaveSpectralTimeData
	// Size 24
	/////////////////////////////////////////////
	struct FSoundWaveSpectralTimeData {
		TArray<struct FSoundWaveSpectralDataEntry>	Data;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		float	TimeSec;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundWaveSpectralDataEntry
	// Size 8
	/////////////////////////////////////////////
	struct FSoundWaveSpectralDataEntry {
		float	Magnitude;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NormalizedMagnitude;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
	// Size 16
	/////////////////////////////////////////////
	struct FSoundWaveEnvelopeDataPerSound {
		float	Envelope;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	PlaybackTime;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundWave* SoundWave;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundWaveSpectralDataPerSound
	// Size 32
	/////////////////////////////////////////////
	struct FSoundWaveSpectralDataPerSound {
		TArray<struct FSoundWaveSpectralData>	SpectralData;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float	PlaybackTime;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
		class USoundWave* SoundWave;		//Offset: 24	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SoundWaveSpectralData
	// Size 12
	/////////////////////////////////////////////
	struct FSoundWaveSpectralData {
		float	FrequencyHz;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Magnitude;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NormalizedMagnitude;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StreamedAudioPlatformData
	// Size 32
	/////////////////////////////////////////////
	struct FStreamedAudioPlatformData {
		unsigned char uknownData_0[32];		//Offset: 0	Size: 32
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SplineCurves
	// Size 112
	/////////////////////////////////////////////
	struct FSplineCurves {
		struct FInterpCurveVector	Position;		//Offset: 0	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveQuat	Rotation;		//Offset: 24	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveVector	Scale;		//Offset: 48	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInterpCurveFloat	ReparamTable;		//Offset: 72	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineMetadata* MetaData;		//Offset: 96	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t	Version;		//Offset: 104	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 108	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SplineInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 416
	// Size inherited 184
	/////////////////////////////////////////////
	struct FSplineInstanceData : public FSceneComponentInstanceData {
		bool	bSplineHasBeenEdited;		//Offset: 184	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 185	Size: 7
		struct FSplineCurves	SplineCurves;		//Offset: 192	Size: 112	Flags: NativeAccessSpecifierPublic
		struct FSplineCurves	SplineCurvesPreUCS;		//Offset: 304	Size: 112	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SplinePoint
	// Size 68
	/////////////////////////////////////////////
	struct FSplinePoint {
		float	InputKey;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	Position;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ArriveTangent;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	LeaveTangent;		//Offset: 28	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	Rotation;		//Offset: 40	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector	Scale;		//Offset: 52	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ESplinePointType>	Type;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 65	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SplineMeshInstanceData
	// Super ScriptStruct Engine.SceneComponentInstanceData
	// Size 232
	// Size inherited 184
	/////////////////////////////////////////////
	struct FSplineMeshInstanceData : public FSceneComponentInstanceData {
		struct FVector	StartPos;		//Offset: 184	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	EndPos;		//Offset: 196	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	StartTangent;		//Offset: 208	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	EndTangent;		//Offset: 220	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SplineMeshParams
	// Size 88
	/////////////////////////////////////////////
	struct FSplineMeshParams {
		struct FVector	StartPos;		//Offset: 0	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	StartTangent;		//Offset: 12	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	StartScale;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	StartRoll;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	StartOffset;		//Offset: 36	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	EndPos;		//Offset: 44	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	EndScale;		//Offset: 56	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	EndTangent;		//Offset: 64	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EndRoll;		//Offset: 76	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	EndOffset;		//Offset: 80	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MaterialRemapIndex
	// Size 24
	/////////////////////////////////////////////
	struct FMaterialRemapIndex {
		uint32_t	ImportVersionKey;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 4	Size: 4
		TArray<int32_t>	MaterialRemap;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMaterial
	// Size 48
	/////////////////////////////////////////////
	struct FStaticMaterial {
		class UMaterialInterface* MaterialInterface;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MaterialSlotName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	ImportedMaterialSlotName;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMeshUVChannelInfo	UVChannelData;		//Offset: 24	Size: 20	Flags: Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.AssetEditorOrbitCameraPosition
	// Size 40
	/////////////////////////////////////////////
	struct FAssetEditorOrbitCameraPosition {
		bool	bIsSet;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FVector	CamOrbitPoint;		//Offset: 4	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	CamOrbitZoom;		//Offset: 16	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	CamOrbitRotation;		//Offset: 28	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshSectionInfoMap
	// Size 80
	/////////////////////////////////////////////
	struct FMeshSectionInfoMap {
		TMap<uint32_t, struct FMeshSectionInfo>	Map;		//Offset: 0	Size: 80	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.MeshSectionInfo
	// Size 8
	/////////////////////////////////////////////
	struct FMeshSectionInfo {
		int32_t	MaterialIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bEnableCollision;		//Offset: 4	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bCastShadow;		//Offset: 5	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bVisibleInRayTracing;		//Offset: 6	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bForceOpaque;		//Offset: 7	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMeshSourceModel
	// Size 112
	/////////////////////////////////////////////
	struct FStaticMeshSourceModel {
		struct FMeshBuildSettings	BuildSettings;		//Offset: 0	Size: 48	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMeshReductionSettings	ReductionSettings;		//Offset: 48	Size: 36	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		float	LODDistance;		//Offset: 84	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformFloat	ScreenSize;		//Offset: 88	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 92	Size: 4
		struct FString	SourceImportFilename;		//Offset: 96	Size: 16	Flags: Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMeshOptimizationSettings
	// Size 28
	/////////////////////////////////////////////
	struct FStaticMeshOptimizationSettings {
		TEnumAsByte<EOptimizationType>	ReductionMethod;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	NumOfTrianglesPercentage;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxDeviationPercentage;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WeldingThreshold;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRecalcNormals;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[3];		//Offset: 17	Size: 3
		float	NormalsThreshold;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	SilhouetteImportance;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	TextureImportance;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	ShadingImportance;		//Offset: 26	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[1];		//Offset: 27	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMeshComponentInstanceData
	// Super ScriptStruct Engine.PrimitiveComponentInstanceData
	// Size 320
	// Size inherited 256
	/////////////////////////////////////////////
	struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData {
		class UStaticMesh* StaticMesh;		//Offset: 256	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStaticMeshVertexColorLODData>	VertexColorLODs;		//Offset: 264	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>	CachedStaticLighting;		//Offset: 280	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStreamingTextureBuildInfo>	StreamingTextureData;		//Offset: 296	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 312	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StreamingTextureBuildInfo
	// Size 12
	/////////////////////////////////////////////
	struct FStreamingTextureBuildInfo {
		uint32_t	PackedRelativeBox;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TextureLevelIndex;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	TexelFactor;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMeshVertexColorLODData
	// Size 40
	/////////////////////////////////////////////
	struct FStaticMeshVertexColorLODData {
		TArray<struct FPaintedVertex>	PaintedVertices;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FColor>	VertexBufferColors;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t	LODIndex;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PaintedVertex
	// Size 32
	/////////////////////////////////////////////
	struct FPaintedVertex {
		struct FVector	Position;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	Color;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4	Normal;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMeshComponentLODInfo
	// Size 144
	/////////////////////////////////////////////
	struct FStaticMeshComponentLODInfo {
		unsigned char uknownData_0[144];		//Offset: 0	Size: 144
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticParameterSet
	// Size 64
	/////////////////////////////////////////////
	struct FStaticParameterSet {
		TArray<struct FStaticSwitchParameter>	StaticSwitchParameters;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStaticComponentMaskParameter>	StaticComponentMaskParameters;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStaticTerrainLayerWeightParameter>	TerrainLayerWeightParameters;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStaticMaterialLayersParameter>	MaterialLayersParameters;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticParameterBase
	// Size 36
	/////////////////////////////////////////////
	struct FStaticParameterBase {
		struct FMaterialParameterInfo	ParameterInfo;		//Offset: 0	Size: 16	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bOverride;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		struct FGuid	ExpressionGUID;		//Offset: 20	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticMaterialLayersParameter
	// Super ScriptStruct Engine.StaticParameterBase
	// Size 104
	// Size inherited 36
	/////////////////////////////////////////////
	struct FStaticMaterialLayersParameter : public FStaticParameterBase {
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
		struct FMaterialLayersFunctions	Value;		//Offset: 40	Size: 64	Flags: NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticTerrainLayerWeightParameter
	// Super ScriptStruct Engine.StaticParameterBase
	// Size 44
	// Size inherited 36
	/////////////////////////////////////////////
	struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase {
		int32_t	WeightmapIndex;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bWeightBasedBlend;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 41	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticComponentMaskParameter
	// Super ScriptStruct Engine.StaticParameterBase
	// Size 40
	// Size inherited 36
	/////////////////////////////////////////////
	struct FStaticComponentMaskParameter : public FStaticParameterBase {
		bool	R;		//Offset: 36	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	G;		//Offset: 37	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	B;		//Offset: 38	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	A;		//Offset: 39	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StaticSwitchParameter
	// Super ScriptStruct Engine.StaticParameterBase
	// Size 40
	// Size inherited 36
	/////////////////////////////////////////////
	struct FStaticSwitchParameter : public FStaticParameterBase {
		bool	Value;		//Offset: 36	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 37	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EquirectProps
	// Size 72
	/////////////////////////////////////////////
	struct FEquirectProps {
		struct FBox2D	LeftUVRect;		//Offset: 0	Size: 20	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		struct FBox2D	RightUVRect;		//Offset: 20	Size: 20	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D	LeftScale;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	RightScale;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	LeftBias;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	RightBias;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.SubsurfaceProfileStruct
	// Size 140
	/////////////////////////////////////////////
	struct FSubsurfaceProfileStruct {
		struct FLinearColor	SurfaceAlbedo;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	MeanFreePathColor;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MeanFreePathDistance;		//Offset: 32	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	WorldUnitScale;		//Offset: 36	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bEnableBurley;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 41	Size: 3
		float	ScatterRadius;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	SubsurfaceColor;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	FalloffColor;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	BoundaryColorBleed;		//Offset: 80	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ExtinctionScale;		//Offset: 96	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	NormalScale;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ScatteringDistribution;		//Offset: 104	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	IOR;		//Offset: 108	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Roughness0;		//Offset: 112	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Roughness1;		//Offset: 116	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LobeMix;		//Offset: 120	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	TransmissionTintColor;		//Offset: 124	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TextureFormatSettings
	// Size 2
	/////////////////////////////////////////////
	struct FTextureFormatSettings {
		TEnumAsByte<ETextureCompressionSettings>	CompressionSettings;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	CompressionNoAlpha : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	CompressionNone : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	CompressionYCoCg : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	sRGB : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 1	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TexturePlatformData
	// Size 48
	/////////////////////////////////////////////
	struct FTexturePlatformData {
		unsigned char uknownData_0[48];		//Offset: 0	Size: 48
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TextureSource
	// Size 56
	/////////////////////////////////////////////
	struct FTextureSource {
		unsigned char uknownData_0[56];		//Offset: 0	Size: 56
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TextureSourceBlock
	// Size 24
	/////////////////////////////////////////////
	struct FTextureSourceBlock {
		int32_t	BlockX;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	BlockY;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SizeX;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	SizeY;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumSlices;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumMips;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TextureLODGroup
	// Size 104
	/////////////////////////////////////////////
	struct FTextureLODGroup {
		TEnumAsByte<ETextureGroup>	Group;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[11];		//Offset: 1	Size: 11
		int32_t	LODBias;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LODBias_Smaller;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LODBias_Smallest;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 24	Size: 4
		int32_t	NumStreamedMips;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETextureMipGenSettings>	MipGenSettings;		//Offset: 32	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[3];		//Offset: 33	Size: 3
		int32_t	MinLODSize;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxLODSize;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxLODSize_Smaller;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxLODSize_Smallest;		//Offset: 48	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	OptionalLODBias;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	OptionalMaxLODSize;		//Offset: 56	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_3[4];		//Offset: 60	Size: 4
		struct FName	MinMagFilter;		//Offset: 64	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	MipFilter;		//Offset: 72	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureMipLoadOptions	MipLoadOptions;		//Offset: 80	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	HighPriorityLoad;		//Offset: 81	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	DuplicateNonOptionalMips;		//Offset: 82	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_4[1];		//Offset: 83	Size: 1
		float	Downscale;		//Offset: 84	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureDownscaleOptions	DownscaleOptions;		//Offset: 88	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_5[3];		//Offset: 89	Size: 3
		int32_t	VirtualTextureTileCountBias;		//Offset: 92	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	VirtualTextureTileSizeBias;		//Offset: 96	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<ETextureLossyCompressionAmount>	LossyCompressionAmount;		//Offset: 100	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_6[3];		//Offset: 101	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
	// Size 48
	/////////////////////////////////////////////
	struct FStreamingRenderAssetPrimitiveInfo {
		class UStreamableRenderAsset* RenderAsset;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoxSphereBounds	Bounds;		//Offset: 8	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	TexelFactor;		//Offset: 36	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t	PackedRelativeBox;		//Offset: 40	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowInvalidTexelFactorWhenUnregistered : 1;		//Offset: 44	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 44	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.Timeline
	// Size 152
	/////////////////////////////////////////////
	struct FTimeline {
		TEnumAsByte<ETimelineLengthMode>	LengthMode;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bLooping : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReversePlayback : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bPlaying : 1;		//Offset: 1	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Length;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	PlayRate;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	Position;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FTimelineEventEntry>	Events;		//Offset: 16	Size: 16	Flags: ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTimelineVectorTrack>	InterpVectors;		//Offset: 32	Size: 16	Flags: ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTimelineFloatTrack>	InterpFloats;		//Offset: 48	Size: 16	Flags: ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTimelineLinearColorTrack>	InterpLinearColors;		//Offset: 64	Size: 16	Flags: ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FScriptDelegate	TimelinePostUpdateFunc;		//Offset: 80	Size: 16	Flags: ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate
		struct FScriptDelegate	TimelineFinishedFunc;		//Offset: 96	Size: 16	Flags: ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UObject>	PropertySetObject;		//Offset: 112	Size: 8	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FName	DirectionPropertyName;		//Offset: 120	Size: 8	Flags: ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_1[24];		//Offset: 128	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimelineLinearColorTrack
	// Size 64
	/////////////////////////////////////////////
	struct FTimelineLinearColorTrack {
		class UCurveLinearColor* LinearColorCurve;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScriptDelegate	InterpFunc;		//Offset: 8	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FName	TrackName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	LinearColorPropertyName;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[24];		//Offset: 40	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimelineFloatTrack
	// Size 64
	/////////////////////////////////////////////
	struct FTimelineFloatTrack {
		class UCurveFloat* FloatCurve;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScriptDelegate	InterpFunc;		//Offset: 8	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FName	TrackName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	FloatPropertyName;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[24];		//Offset: 40	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimelineVectorTrack
	// Size 64
	/////////////////////////////////////////////
	struct FTimelineVectorTrack {
		class UCurveVector* VectorCurve;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScriptDelegate	InterpFunc;		//Offset: 8	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FName	TrackName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	VectorPropertyName;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[24];		//Offset: 40	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimelineEventEntry
	// Size 20
	/////////////////////////////////////////////
	struct FTimelineEventEntry {
		float	Time;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScriptDelegate	EventFunc;		//Offset: 4	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTTrackBase
	// Size 24
	/////////////////////////////////////////////
	struct FTTTrackBase {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		struct FName	TrackName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool	bIsExternalCurve;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 17	Size: 7
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTPropertyTrack
	// Super ScriptStruct Engine.TTTrackBase
	// Size 32
	// Size inherited 24
	/////////////////////////////////////////////
	struct FTTPropertyTrack : public FTTTrackBase {
		struct FName	PropertyName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTLinearColorTrack
	// Super ScriptStruct Engine.TTPropertyTrack
	// Size 40
	// Size inherited 32
	/////////////////////////////////////////////
	struct FTTLinearColorTrack : public FTTPropertyTrack {
		class UCurveLinearColor* CurveLinearColor;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTVectorTrack
	// Super ScriptStruct Engine.TTPropertyTrack
	// Size 40
	// Size inherited 32
	/////////////////////////////////////////////
	struct FTTVectorTrack : public FTTPropertyTrack {
		class UCurveVector* CurveVector;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTFloatTrack
	// Super ScriptStruct Engine.TTPropertyTrack
	// Size 40
	// Size inherited 32
	/////////////////////////////////////////////
	struct FTTFloatTrack : public FTTPropertyTrack {
		class UCurveFloat* CurveFloat;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTEventTrack
	// Super ScriptStruct Engine.TTTrackBase
	// Size 40
	// Size inherited 24
	/////////////////////////////////////////////
	struct FTTEventTrack : public FTTTrackBase {
		struct FName	FunctionName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat* CurveKeys;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TTTrackId
	// Size 8
	/////////////////////////////////////////////
	struct FTTTrackId {
		int32_t	TrackType;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TrackIndex;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimeStretchCurveInstance
	// Size 48
	/////////////////////////////////////////////
	struct FTimeStretchCurveInstance {
		bool	bHasValidData;		//Offset: 0	Size: 1	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[47];		//Offset: 1	Size: 47
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimeStretchCurve
	// Size 40
	/////////////////////////////////////////////
	struct FTimeStretchCurve {
		float	SamplingRate;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float	CurveValueMinPrecision;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FTimeStretchCurveMarker>	Markers;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		float	Sum_dT_i_by_C_i[3];		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TimeStretchCurveMarker
	// Size 16
	/////////////////////////////////////////////
	struct FTimeStretchCurveMarker {
		float	Time[3];		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Alpha;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.TouchInputControl
	// Size 104
	/////////////////////////////////////////////
	struct FTouchInputControl {
		class UTexture2D* Image1;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D* Image2;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	Center;		//Offset: 16	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	VisualSize;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	ThumbSize;		//Offset: 32	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	InteractionSize;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	InputScale;		//Offset: 48	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey	MainInputKey;		//Offset: 56	Size: 24	Flags: Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey	AltInputKey;		//Offset: 80	Size: 24	Flags: Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
	// Size 20
	/////////////////////////////////////////////
	struct FUpdateLevelVisibilityLevelInfo {
		struct FName	PackageName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	Filename;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bIsVisible : 1;		//Offset: 16	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 16	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HardwareCursorReference
	// Size 16
	/////////////////////////////////////////////
	struct FHardwareCursorReference {
		struct FName	CursorPath;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	HotSpot;		//Offset: 8	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VirtualTextureBuildSettings
	// Size 12
	/////////////////////////////////////////////
	struct FVirtualTextureBuildSettings {
		int32_t	TileSize;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	TileBorderSize;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bEnableCompressCrunch;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bEnableCompressZlib;		//Offset: 9	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[2];		//Offset: 10	Size: 2
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VirtualTextureSpacePoolConfig
	// Size 40
	/////////////////////////////////////////////
	struct FVirtualTextureSpacePoolConfig {
		int32_t	MinTileSize;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxTileSize;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TEnumAsByte<EPixelFormat>>	Formats;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
		int32_t	SizeInMegabyte;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAllowSizeScale;		//Offset: 28	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 29	Size: 3
		uint32_t	ScalabilityGroup;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[4];		//Offset: 36	Size: 4
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.VoiceSettings
	// Size 24
	/////////////////////////////////////////////
	struct FVoiceSettings {
		class USceneComponent* ComponentToAttachTo;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation* AttenuationSettings;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain* SourceEffectChain;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StreamingLevelsToConsider
	// Size 40
	/////////////////////////////////////////////
	struct FStreamingLevelsToConsider {
		TArray<class ULevelStreaming*>	StreamingLevels;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[24];		//Offset: 16	Size: 24
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LevelCollection
	// Size 120
	/////////////////////////////////////////////
	struct FLevelCollection {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
		class AGameStateBase* GameState;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNetDriver* NetDriver;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDemoNetDriver* DemoNetDriver;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevel* PersistentLevel;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TAssetPtr<class FNone_500>	Levels;		//Offset: 40	Size: 80	Flags: NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.EndPhysicsTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FEndPhysicsTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.StartPhysicsTickFunction
	// Super ScriptStruct Engine.TickFunction
	// Size 48
	// Size inherited 40
	/////////////////////////////////////////////
	struct FStartPhysicsTickFunction : public FTickFunction {
		unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LevelViewportInfo
	// Size 32
	/////////////////////////////////////////////
	struct FLevelViewportInfo {
		struct FVector	CamPosition;		//Offset: 0	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator	CamRotation;		//Offset: 12	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float	CamOrthoZoom;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	CamUpdated;		//Offset: 28	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 29	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.WorldPSCPool
	// Size 88
	/////////////////////////////////////////////
	struct FWorldPSCPool {
		TMap<class UParticleSystem*, struct FPSCPool>	WorldParticleSystemPools;		//Offset: 0	Size: 80	Flags: ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[8];		//Offset: 80	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PSCPool
	// Size 16
	/////////////////////////////////////////////
	struct FPSCPool {
		TArray<struct FPSCPoolElem>	FreeElements;		//Offset: 0	Size: 16	Flags: ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.PSCPoolElem
	// Size 16
	/////////////////////////////////////////////
	struct FPSCPoolElem {
		class UParticleSystemComponent* PSC;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[8];		//Offset: 8	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.BroadphaseSettings
	// Size 64
	/////////////////////////////////////////////
	struct FBroadphaseSettings {
		bool	bUseMBPOnClient;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bUseMBPOnServer;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bUseMBPOuterBounds;		//Offset: 2	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[1];		//Offset: 3	Size: 1
		struct FBox	MBPBounds;		//Offset: 4	Size: 28	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox	MBPOuterBounds;		//Offset: 32	Size: 28	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t	MBPNumSubdivs;		//Offset: 60	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.HierarchicalSimplification
	// Size 352
	/////////////////////////////////////////////
	struct FHierarchicalSimplification {
		float	TransitionScreenSize;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OverrideDrawDistance;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseOverrideDrawDistance : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bAllowSpecificExclusion : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bSimplifyMesh : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bOnlyGenerateClustersForVolumes : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bReusePreviousLevelClusters : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 8	Size: 4
		struct FMeshProxySettings	ProxySetting;		//Offset: 12	Size: 168	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FMeshMergingSettings	MergeSetting;		//Offset: 180	Size: 160	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float	DesiredBoundRadius;		//Offset: 340	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DesiredFillingPercentage;		//Offset: 344	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MinNumberOfActorsToBuild;		//Offset: 348	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.NetViewer
	// Size 48
	/////////////////////////////////////////////
	struct FNetViewer {
		class UNetConnection* Connection;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor* InViewer;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor* ViewTarget;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ViewLocation;		//Offset: 24	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ViewDir;		//Offset: 36	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct Engine.LightmassWorldInfoSettings
	// Size 76
	/////////////////////////////////////////////
	struct FLightmassWorldInfoSettings {
		float	StaticLightingLevelScale;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumIndirectLightingBounces;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	NumSkyLightingBounces;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	IndirectLightingQuality;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	IndirectLightingSmoothness;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor	EnvironmentColor;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EnvironmentIntensity;		//Offset: 24	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	EmissiveBoost;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DiffuseBoost;		//Offset: 32	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EVolumeLightingMethod>	VolumeLightingMethod;		//Offset: 36	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bUseAmbientOcclusion : 1;		//Offset: 37	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bGenerateAmbientOcclusionMaterialMask : 1;		//Offset: 37	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bVisualizeMaterialDiffuse : 1;		//Offset: 37	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bVisualizeAmbientOcclusion : 1;		//Offset: 37	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//Bitfields are not supported, but you can try uncommenting them
		//unsigned char	bCompressLightmaps : 1;		//Offset: 37	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 37	Size: 3
		float	VolumetricLightmapDetailCellSize;		//Offset: 40	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VolumetricLightmapMaximumBrickMemoryMb;		//Offset: 44	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VolumetricLightmapSphericalHarmonicSmoothing;		//Offset: 48	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	VolumeLightSamplePlacementScale;		//Offset: 52	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	DirectIlluminationOcclusionFraction;		//Offset: 56	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	IndirectIlluminationOcclusionFraction;		//Offset: 60	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OcclusionExponent;		//Offset: 64	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	FullyOccludedSamplesFraction;		//Offset: 68	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	MaxOcclusionDistance;		//Offset: 72	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
#pragma endregion
}