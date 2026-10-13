#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.AnimInstance
// Super: Class CoreUObject.Object
// Size: 704
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UAnimInstance : public UObject {
public:
#pragma region Members
	//class USkeleton*	CurrentSkeleton;		//Offset: 40	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USkeleton* M_GetCurrentSkeleton() const;
	class USkeleton** M_PtrGetCurrentSkeleton();
	void M_SetCurrentSkeleton(const class USkeleton*& value);

	//TEnumAsByte<ERootMotionMode>	RootMotionMode;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ERootMotionMode> M_GetRootMotionMode() const;
	TEnumAsByte<ERootMotionMode>* M_PtrGetRootMotionMode();
	void M_SetRootMotionMode(const TEnumAsByte<ERootMotionMode>& value);

	//unsigned char	bUseMultiThreadedAnimationUpdate : 1;		//Offset: 49	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseMultiThreadedAnimationUpdate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseMultiThreadedAnimationUpdate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseMultiThreadedAnimationUpdate(const unsigned char& value);

	//unsigned char	bUsingCopyPoseFromMesh : 1;		//Offset: 49	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsingCopyPoseFromMesh() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsingCopyPoseFromMesh();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsingCopyPoseFromMesh(const unsigned char& value);

	//unsigned char	bReceiveNotifiesFromLinkedInstances : 1;		//Offset: 49	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReceiveNotifiesFromLinkedInstances() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReceiveNotifiesFromLinkedInstances();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReceiveNotifiesFromLinkedInstances(const unsigned char& value);

	//unsigned char	bPropagateNotifiesToLinkedInstances : 1;		//Offset: 49	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPropagateNotifiesToLinkedInstances() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPropagateNotifiesToLinkedInstances();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPropagateNotifiesToLinkedInstances(const unsigned char& value);

	//unsigned char	bQueueMontageEvents : 1;		//Offset: 49	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbQueueMontageEvents() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbQueueMontageEvents();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbQueueMontageEvents(const unsigned char& value);

	//TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>	OnMontageBlendingOut;		//Offset: 56	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature> M_GetOnMontageBlendingOut() const;
	TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>* M_PtrGetOnMontageBlendingOut();
	void M_SetOnMontageBlendingOut(const TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>	OnMontageStarted;		//Offset: 72	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature> M_GetOnMontageStarted() const;
	TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>* M_PtrGetOnMontageStarted();
	void M_SetOnMontageStarted(const TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>	OnMontageEnded;		//Offset: 88	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature> M_GetOnMontageEnded() const;
	TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>* M_PtrGetOnMontageEnded();
	void M_SetOnMontageEnded(const TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>	OnAllMontageInstancesEnded;		//Offset: 104	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature> M_GetOnAllMontageInstancesEnded() const;
	TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>* M_PtrGetOnAllMontageInstancesEnded();
	void M_SetOnAllMontageInstancesEnded(const TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>& value);

	//struct FAnimNotifyQueue	NotifyQueue;		//Offset: 256	Size: 112	Flags: Transient, NativeAccessSpecifierPublic
	struct FAnimNotifyQueue M_GetNotifyQueue() const;
	struct FAnimNotifyQueue* M_PtrGetNotifyQueue();
	void M_SetNotifyQueue(const struct FAnimNotifyQueue& value);

	//TArray<struct FAnimNotifyEvent>	ActiveAnimNotifyState;		//Offset: 368	Size: 16	Flags: ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<struct FAnimNotifyEvent> M_GetActiveAnimNotifyState() const;
	TArray<struct FAnimNotifyEvent>* M_PtrGetActiveAnimNotifyState();
	void M_SetActiveAnimNotifyState(const TArray<struct FAnimNotifyEvent>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}

#pragma region Functions
	void BlueprintBeginPlay();

	void BlueprintInitializeAnimation();

	void BlueprintLinkedAnimationLayersInitialized();

	void BlueprintPostEvaluateAnimation();

	void BlueprintUpdateAnimation(float DeltaTimeX);

	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)/* const*/;

	void ClearMorphTargets();

	void GetActiveCurveNames(EAnimCurveType CurveType, TArray<struct FName>* OutNames)/* const*/;

	void GetAllCurveNames(TArray<struct FName>* OutNames)/* const*/;

	class UAnimMontage* GetCurrentActiveMontage()/* const*/;

	struct FName GetCurrentStateName(int32_t MachineIndex);

	float GetCurveValue(struct FName CurveName)/* const*/;

	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex);

	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex);

	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex);

	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex);

	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex);

	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex);

	float GetInstanceMachineWeight(int32_t MachineIndex);

	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex);

	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex);

	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex);

	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex);

	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag)/* const*/;

	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, TArray<class UAnimInstance*>* OutLinkedInstances)/* const*/;

	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(class UAnimInstance* InClass)/* const*/;

	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup)/* const*/;

	class UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(struct FName InGroup, class UAnimInstance* InClass)/* const*/;

	void GetLinkedAnimLayerInstancesByGroup(struct FName InGroup, TArray<class UAnimInstance*>* OutLinkedInstances)/* const*/;

	class AActor* GetOwningActor()/* const*/;

	class USkeletalMeshComponent* GetOwningComponent()/* const*/;

	bool GetPropagateNotifiesToLinkedInstances()/* const*/;

	bool GetReceiveNotifiesFromLinkedInstances()/* const*/;

	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex);

	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex);

	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex);

	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex);

	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex);

	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName InSyncGroupName)/* const*/;

	bool GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float* OutMarkerTime)/* const*/;

	bool HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName)/* const*/;

	bool IsAnyMontagePlaying()/* const*/;

	bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, struct FName SlotNodeName)/* const*/;

	bool IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder)/* const*/;

	void LinkAnimClassLayers(class UAnimInstance* InClass);

	void LinkAnimGraphByTag(struct FName InTag, class UAnimInstance* InClass);

	void LockAIResources(bool bLockMovement, bool LockAILogic);

	float Montage_GetBlendTime(class UAnimMontage* Montage)/* const*/;

	struct FName Montage_GetCurrentSection(class UAnimMontage* Montage)/* const*/;

	bool Montage_GetIsStopped(class UAnimMontage* Montage)/* const*/;

	float Montage_GetPlayRate(class UAnimMontage* Montage)/* const*/;

	float Montage_GetPosition(class UAnimMontage* Montage)/* const*/;

	bool Montage_IsActive(class UAnimMontage* Montage)/* const*/;

	bool Montage_IsPlaying(class UAnimMontage* Montage)/* const*/;

	void Montage_JumpToSection(struct FName SectionName, class UAnimMontage* Montage);

	void Montage_JumpToSectionsEnd(struct FName SectionName, class UAnimMontage* Montage);

	void Montage_Pause(class UAnimMontage* Montage);

	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);

	void Montage_Resume(class UAnimMontage* Montage);

	void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, class UAnimMontage* Montage);

	void Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);

	void Montage_SetPosition(class UAnimMontage* Montage, float NewPosition);

	void Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage);

	void Montage_StopGroupByName(float InBlendOutTime, struct FName GroupName);

	float PlaySlotAnimation(class UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount);

	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);

	void ResetDynamics(ETeleportType InTeleportType);

	void SavePoseSnapshot(struct FName SnapshotName);

	void SetMorphTarget(struct FName MorphTargetName, float Value);

	void SetPropagateNotifiesToLinkedInstances(bool bSet);

	void SetReceiveNotifiesFromLinkedInstances(bool bSet);

	void SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);

	void SnapshotPose(struct FPoseSnapshot* Snapshot);

	void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName);

	class APawn* TryGetPawnOwner()/* const*/;

	void UnlinkAnimClassLayers(class UAnimInstance* InClass);

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);

#pragma endregion
};
};