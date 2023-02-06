#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.MountRiderComponent
// Super: Class Engine.ActorComponent
// Size: 392
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UMountRiderComponent : public UActorComponent {
public:
#pragma region Members
	//bool	bIsMounted;		//Offset: 176	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsMounted() const;
	bool* M_PtrGetbIsMounted();
	void M_SetbIsMounted(const bool& value);

	//bool	bIsSeated;		//Offset: 177	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsSeated() const;
	bool* M_PtrGetbIsSeated();
	void M_SetbIsSeated(const bool& value);

	//bool	bIsDriver;		//Offset: 178	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsDriver() const;
	bool* M_PtrGetbIsDriver();
	void M_SetbIsDriver(const bool& value);

	//bool	bAllowOverrideMovementReplication;		//Offset: 179	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbAllowOverrideMovementReplication() const;
	bool* M_PtrGetbAllowOverrideMovementReplication();
	void M_SetbAllowOverrideMovementReplication(const bool& value);

	//bool	bIsRootMotionValidationForAnimationEnabled;		//Offset: 180	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsRootMotionValidationForAnimationEnabled() const;
	bool* M_PtrGetbIsRootMotionValidationForAnimationEnabled();
	void M_SetbIsRootMotionValidationForAnimationEnabled(const bool& value);

	//EMountingBehaviorType	mountingPossessionBehavior;		//Offset: 181	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EMountingBehaviorType M_GetmountingPossessionBehavior() const;
	EMountingBehaviorType* M_PtrGetmountingPossessionBehavior();
	void M_SetmountingPossessionBehavior(const EMountingBehaviorType& value);

	//EDismountingBehaviorType	dismountingPossessionBehavior;		//Offset: 182	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EDismountingBehaviorType M_GetdismountingPossessionBehavior() const;
	EDismountingBehaviorType* M_PtrGetdismountingPossessionBehavior();
	void M_SetdismountingPossessionBehavior(const EDismountingBehaviorType& value);

	//EMountingBehaviorType	mountingAttachmentBehavior;		//Offset: 183	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EMountingBehaviorType M_GetmountingAttachmentBehavior() const;
	EMountingBehaviorType* M_PtrGetmountingAttachmentBehavior();
	void M_SetmountingAttachmentBehavior(const EMountingBehaviorType& value);

	//EDismountingBehaviorType	dismountingAttachmentBehavior;		//Offset: 184	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EDismountingBehaviorType M_GetdismountingAttachmentBehavior() const;
	EDismountingBehaviorType* M_PtrGetdismountingAttachmentBehavior();
	void M_SetdismountingAttachmentBehavior(const EDismountingBehaviorType& value);

	//class AActor*	currentMount;		//Offset: 192	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AActor* M_GetcurrentMount() const;
	class AActor** M_PtrGetcurrentMount();
	void M_SetcurrentMount(const class AActor*& value);

	//class AActor*	previousMount;		//Offset: 200	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AActor* M_GetpreviousMount() const;
	class AActor** M_PtrGetpreviousMount();
	void M_SetpreviousMount(const class AActor*& value);

	//class AActor*	LinkedMountActor;		//Offset: 208	Size: 8	Flags: Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AActor* M_GetLinkedMountActor() const;
	class AActor** M_PtrGetLinkedMountActor();
	void M_SetLinkedMountActor(const class AActor*& value);

	//TWeakObjectPtr<class APawn>	owningPawn;		//Offset: 216	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TWeakObjectPtr<class APawn> M_GetowningPawn() const;
	TWeakObjectPtr<class APawn>* M_PtrGetowningPawn();
	void M_SetowningPawn(const TWeakObjectPtr<class APawn>& value);

	//class AController*	riderController;		//Offset: 224	Size: 8	Flags: Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AController* M_GetriderController() const;
	class AController** M_PtrGetriderController();
	void M_SetriderController(const class AController*& value);

	//struct FSeatData	currentSeatData;		//Offset: 232	Size: 48	Flags: Edit, Net, DisableEditOnTemplate, Transient, EditConst, RepNotify, Protected, NativeAccessSpecifierProtected
	struct FSeatData M_GetcurrentSeatData() const;
	struct FSeatData* M_PtrGetcurrentSeatData();
	void M_SetcurrentSeatData(const struct FSeatData& value);

	//EMountingDirection	currentMountingDirection;		//Offset: 280	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EMountingDirection M_GetcurrentMountingDirection() const;
	EMountingDirection* M_PtrGetcurrentMountingDirection();
	void M_SetcurrentMountingDirection(const EMountingDirection& value);

	//EMountingDirection	currentDismountDirection;		//Offset: 281	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EMountingDirection M_GetcurrentDismountDirection() const;
	EMountingDirection* M_PtrGetcurrentDismountDirection();
	void M_SetcurrentDismountDirection(const EMountingDirection& value);

	//struct FVector	relativeMeshLocation;		//Offset: 284	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetrelativeMeshLocation() const;
	struct FVector* M_PtrGetrelativeMeshLocation();
	void M_SetrelativeMeshLocation(const struct FVector& value);

	//struct FRotator	relativeMeshRotation;		//Offset: 296	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetrelativeMeshRotation() const;
	struct FRotator* M_PtrGetrelativeMeshRotation();
	void M_SetrelativeMeshRotation(const struct FRotator& value);

	//struct FMountingAction	netAction;		//Offset: 308	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FMountingAction M_GetnetAction() const;
	struct FMountingAction* M_PtrGetnetAction();
	void M_SetnetAction(const struct FMountingAction& value);

	//struct FMountingAction	currentAction;		//Offset: 320	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FMountingAction M_GetcurrentAction() const;
	struct FMountingAction* M_PtrGetcurrentAction();
	void M_SetcurrentAction(const struct FMountingAction& value);

	//TAssetPtr<class FMountingSystemEvent__DelegateSignature>	OnRiderAttachedToMount;		//Offset: 352	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
	TAssetPtr<class FMountingSystemEvent__DelegateSignature> M_GetOnRiderAttachedToMount() const;
	TAssetPtr<class FMountingSystemEvent__DelegateSignature>* M_PtrGetOnRiderAttachedToMount();
	void M_SetOnRiderAttachedToMount(const TAssetPtr<class FMountingSystemEvent__DelegateSignature>& value);

	//TAssetPtr<class FMountingSystemEvent__DelegateSignature>	OnRiderDetachedFromMount;		//Offset: 368	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
	TAssetPtr<class FMountingSystemEvent__DelegateSignature> M_GetOnRiderDetachedFromMount() const;
	TAssetPtr<class FMountingSystemEvent__DelegateSignature>* M_PtrGetOnRiderDetachedFromMount();
	void M_SetOnRiderDetachedFromMount(const TAssetPtr<class FMountingSystemEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountRiderComponent");
		return ptr;
	}

#pragma region Functions
	void AllowControllerToPossessCharacter();

	void AllowControllerToPossessMount();

	void AllowControllerToPossessRider();

	void AttachRiderToMount();

	bool ChangeSeatById(int32_t seatId, struct FMountActionResponse* Response);

	bool ChangeSeatToIndex(int32_t seatIndex, struct FMountActionResponse* Response);

	void DetachRiderFromMount();

	bool DismountPawn(class AActor* dismountActor, struct FMountActionResponse* Response);

	class AActor* GetCurrentMount()/* const*/;

	struct FSeatData GetCurrentSeatData()/* const*/;

	struct FVector GetDismountLocation(EMountingDirection directionToDismount)/* const*/;

	class AActor* GetLinkedMountActor()/* const*/;

	class APawn* GetOwningPawn()/* const*/;

	class AActor* GetPreviousMount()/* const*/;

	class AController* GetRiderController()/* const*/;

	int32_t GetSeatId()/* const*/;

	bool IsDriver()/* const*/;

	bool IsMounted()/* const*/;

	bool IsRootMotionValidationForAnimationEnabled();

	bool IsSeated()/* const*/;

	bool MountPawn(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response);

	bool MountPawnToSeat(class AActor* newMountActor, class AActor* newLinkedActor, int32_t seatId, struct FMountActionResponse* Response);

	bool MoveToMountingLocationComplete();

	bool OnCharacterChangedSeats(bool bPlayAnimation);

	bool OnCharacterDismounted();

	bool OnCharacterMounted(bool bPlayMountingAnimation);

	void OnRep_CurrentAction();

	void OnRep_CurrentMount();

	void OnRep_CurrentSeatData();

	bool PawnFinishedChangingSeats();

	bool PawnFinishedDismounting();

	bool PawnFinishedMounting();

	void Reset();

	void SetMovementReplication(bool enableMovementReplication, bool onlyAllowAutonomousTickPose);

	void SetRiderController(class AController* Controller);

	void SetRootMotionValidationForAnimationEnabled(bool IsRootMotionValidationForAnimationEnabled);

	bool ShouldTeleportToDismountLocation()/* const*/;

	void UpdateRootMeshRelativeLocation();

#pragma endregion
};
};