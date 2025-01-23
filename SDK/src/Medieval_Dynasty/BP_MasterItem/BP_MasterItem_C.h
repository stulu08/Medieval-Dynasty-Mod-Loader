#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/RepActor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_MasterItem.BP_MasterItem_C
// Super: Class Medieval_Dynasty.RepActor
// Size: 1781
// Size inherited: 560
/////////////////////////////////////////////
namespace UE4 {
class ABP_MasterItem_C : public ARepActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 560	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USphereComponent*	InspectorPoint;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USphereComponent* M_GetInspectorPoint() const;
	class USphereComponent** M_PtrGetInspectorPoint();
	void M_SetInspectorPoint(const class USphereComponent*& value);

	//class UBP_AquaticBuoyancy_C*	AquaticBoyuancy;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticBuoyancy_C* M_GetAquaticBoyuancy() const;
	class UBP_AquaticBuoyancy_C** M_PtrGetAquaticBoyuancy();
	void M_SetAquaticBoyuancy(const class UBP_AquaticBuoyancy_C*& value);

	//class UWidgetComponent*	UI_Inspector;		//Offset: 584	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UWidgetComponent* M_GetUI_Inspector() const;
	class UWidgetComponent** M_PtrGetUI_Inspector();
	void M_SetUI_Inspector(const class UWidgetComponent*& value);

	//class UStaticMeshComponent*	StaticMesh;		//Offset: 592	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UStaticMeshComponent* M_GetStaticMesh() const;
	class UStaticMeshComponent** M_PtrGetStaticMesh();
	void M_SetStaticMesh(const class UStaticMeshComponent*& value);

	//class UBP_AquaticInteraction_C*	AquaticInteraction;		//Offset: 600	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetAquaticInteraction() const;
	class UBP_AquaticInteraction_C** M_PtrGetAquaticInteraction();
	void M_SetAquaticInteraction(const class UBP_AquaticInteraction_C*& value);

	//struct FDataTableRowHandle	Item;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible, Net, RepNotify, NoDestructor, ExposeOnSpawn
	struct FDataTableRowHandle M_GetItem() const;
	struct FDataTableRowHandle* M_PtrGetItem();
	void M_SetItem(const struct FDataTableRowHandle& value);

	//int32_t	ResourceCount;		//Offset: 624	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetResourceCount() const;
	int32_t* M_PtrGetResourceCount();
	void M_SetResourceCount(const int32_t& value);

	//class APawn*	CharacterReference;		//Offset: 632	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class APawn* M_GetCharacterReference() const;
	class APawn** M_PtrGetCharacterReference();
	void M_SetCharacterReference(const class APawn*& value);

	//struct FST_ItemDetails	ItemDetails;		//Offset: 640	Size: 968	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_ItemDetails M_GetItemDetails() const;
	struct FST_ItemDetails* M_PtrGetItemDetails();
	void M_SetItemDetails(const struct FST_ItemDetails& value);

	//float	CurrentHP;		//Offset: 1608	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetCurrentHP() const;
	float* M_PtrGetCurrentHP();
	void M_SetCurrentHP(const float& value);

	//bool	SimulatePhysicsOverride;		//Offset: 1612	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSimulatePhysicsOverride() const;
	bool* M_PtrGetSimulatePhysicsOverride();
	void M_SetSimulatePhysicsOverride(const bool& value);

	//bool	SimulatePhysics;		//Offset: 1613	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSimulatePhysics() const;
	bool* M_PtrGetSimulatePhysics();
	void M_SetSimulatePhysics(const bool& value);

	//float	LifeTime;		//Offset: 1616	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetLifeTime() const;
	float* M_PtrGetLifeTime();
	void M_SetLifeTime(const float& value);

	//class ABP_BaseCharacter_C*	InteractingActorReference;		//Offset: 1624	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetInteractingActorReference() const;
	class ABP_BaseCharacter_C** M_PtrGetInteractingActorReference();
	void M_SetInteractingActorReference(const class ABP_BaseCharacter_C*& value);

	//int32_t	Capacity;		//Offset: 1632	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetCapacity() const;
	int32_t* M_PtrGetCapacity();
	void M_SetCapacity(const int32_t& value);

	//bool	found;		//Offset: 1636	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_Getfound() const;
	bool* M_PtrGetfound();
	void M_Setfound(const bool& value);

	//struct FTimerHandle	PickUpTimerHandle;		//Offset: 1640	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPickUpTimerHandle() const;
	struct FTimerHandle* M_PtrGetPickUpTimerHandle();
	void M_SetPickUpTimerHandle(const struct FTimerHandle& value);

	//float	Freshness;		//Offset: 1648	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetFreshness() const;
	float* M_PtrGetFreshness();
	void M_SetFreshness(const float& value);

	//class UUI_Inspector_Item_C*	UI_InspectorReference;		//Offset: 1656	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Inspector_Item_C* M_GetUI_InspectorReference() const;
	class UUI_Inspector_Item_C** M_PtrGetUI_InspectorReference();
	void M_SetUI_InspectorReference(const class UUI_Inspector_Item_C*& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 1664	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//bool	SeasonalRemoveOverride;		//Offset: 1665	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSeasonalRemoveOverride() const;
	bool* M_PtrGetSeasonalRemoveOverride();
	void M_SetSeasonalRemoveOverride(const bool& value);

	//bool	SeasonalRemove;		//Offset: 1666	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSeasonalRemove() const;
	bool* M_PtrGetSeasonalRemove();
	void M_SetSeasonalRemove(const bool& value);

	//bool	UsePickingAnimation;		//Offset: 1667	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUsePickingAnimation() const;
	bool* M_PtrGetUsePickingAnimation();
	void M_SetUsePickingAnimation(const bool& value);

	//bool	PreferTwoHandedAnimation;		//Offset: 1668	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPreferTwoHandedAnimation() const;
	bool* M_PtrGetPreferTwoHandedAnimation();
	void M_SetPreferTwoHandedAnimation(const bool& value);

	//bool	UseAdditionalMesh;		//Offset: 1669	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetUseAdditionalMesh() const;
	bool* M_PtrGetUseAdditionalMesh();
	void M_SetUseAdditionalMesh(const bool& value);

	//struct FGuid	Guid;		//Offset: 1672	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FGuid M_GetGuid() const;
	struct FGuid* M_PtrGetGuid();
	void M_SetGuid(const struct FGuid& value);

	//bool	Dropped;		//Offset: 1688	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetDropped() const;
	bool* M_PtrGetDropped();
	void M_SetDropped(const bool& value);

	//TArray<class AActor*>	AttachedActors;		//Offset: 1696	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetAttachedActors() const;
	TArray<class AActor*>* M_PtrGetAttachedActors();
	void M_SetAttachedActors(const TArray<class AActor*>& value);

	//bool	Rotate_Left;		//Offset: 1712	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotate_Left() const;
	bool* M_PtrGetRotate_Left();
	void M_SetRotate_Left(const bool& value);

	//bool	Rotate_Right;		//Offset: 1713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotate_Right() const;
	bool* M_PtrGetRotate_Right();
	void M_SetRotate_Right(const bool& value);

	//bool	PrecisionGrab;		//Offset: 1714	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetPrecisionGrab() const;
	bool* M_PtrGetPrecisionGrab();
	void M_SetPrecisionGrab(const bool& value);

	//bool	IsGrabbed;		//Offset: 1715	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetIsGrabbed() const;
	bool* M_PtrGetIsGrabbed();
	void M_SetIsGrabbed(const bool& value);

	//struct FTimerHandle	ImpaledTimerHandle;		//Offset: 1720	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetImpaledTimerHandle() const;
	struct FTimerHandle* M_PtrGetImpaledTimerHandle();
	void M_SetImpaledTimerHandle(const struct FTimerHandle& value);

	//float	RotationRoll;		//Offset: 1728	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRotationRoll() const;
	float* M_PtrGetRotationRoll();
	void M_SetRotationRoll(const float& value);

	//float	RotationYaw;		//Offset: 1732	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRotationYaw() const;
	float* M_PtrGetRotationYaw();
	void M_SetRotationYaw(const float& value);

	//struct FRotator	FinalRotation;		//Offset: 1736	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetFinalRotation() const;
	struct FRotator* M_PtrGetFinalRotation();
	void M_SetFinalRotation(const struct FRotator& value);

	//float	BaseYaw;		//Offset: 1748	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseYaw() const;
	float* M_PtrGetBaseYaw();
	void M_SetBaseYaw(const float& value);

	//bool	ShouldWakeOnSpawn;		//Offset: 1752	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetShouldWakeOnSpawn() const;
	bool* M_PtrGetShouldWakeOnSpawn();
	void M_SetShouldWakeOnSpawn(const bool& value);

	//struct FVector	ServerLocation;		//Offset: 1756	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetServerLocation() const;
	struct FVector* M_PtrGetServerLocation();
	void M_SetServerLocation(const struct FVector& value);

	//struct FRotator	ServerRotation;		//Offset: 1768	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetServerRotation() const;
	struct FRotator* M_PtrGetServerRotation();
	void M_SetServerRotation(const struct FRotator& value);

	//bool	IgnoreDebug;		//Offset: 1780	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIgnoreDebug() const;
	bool* M_PtrGetIgnoreDebug();
	void M_SetIgnoreDebug(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterItem.BP_MasterItem_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_MasterItem(int32_t EntryPoint);

	void AfterAttachmentReplication();

	void BeforeAttachmentReplication();

	void BndEvt__BP_MasterItem_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, struct FName BoneName);

	void BndEvt__BP_MasterItem_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, struct FName BoneName);

	void AttachActor_Server(class UObject* Parent, struct FName SocketName);

	void UpdateItemLocationAndRotation_BPI();

	void UpdateItemVelocity_BPI();

	void SetActorTick_Server(bool Enabled);

	void SetItemTick_BPI(bool Enabled);

	void SimulatePhysics_Server(bool bSimulate);

	void ChangePhysicsSimulation_BPI(bool SimulatePhysics);

	void SimulatePhysics_Multicast(bool bSimulate);

	void UpdateTransform_Multicast(int32_t NewLocationX, int32_t NewLocationY, int32_t NewLocationZ, unsigned char NewRotationX, unsigned char NewRotationY, unsigned char NewRotationZ);

	void UpdateTransform_Server();

	void SetIsGrabbed_BPI(bool IsGrabbed);

	void SetIsGrabbed(bool IsGrabbed);

	void Interact_Client(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void OnSpawned();

	void RotatePitch(float Angle);

	void RotateYaw(float Angle);

	void DetachItem();

	void SetRotateMode(bool RotateLeft, bool RotateRight);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void ReceiveTick(float DeltaSeconds);

	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);

	void PerformActorInteraction();

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);

	void ShowInspectorUI();

	void CheckOverlappingActor();

	void OnProjectileSpawned();

	void ReceiveBeginPlay();

	void SetOccupied(class APawn* Character);

	void StopAttackFunction();

	void StartAttackFunction(bool Timer, struct FName Socket);

	void RemoveImpaledItem(class AActor* ImpaledItem);

	void AddImpaledItem(class AActor* ImpaledItem);

	void IsLookedAt(bool Active);

	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, int32_t ChunkID);

	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractInput(bool KeyDown);

	void UserConstructionScript();

	void OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership);

	void GetDataToSave(struct FString* ItemData);

	void PickUpAttachedActors();

	void Set_Mesh(TAssetPtr<class UObject> WorldMesh, TAssetPtr<class UObject> AdditionaWorldMesh);

	void Grab_Server(class ABP_BaseCharacter_C* InteractigActor);

	bool CanGrab_();

	void Rotate(float Speed, struct FVector GrabLocation);

	void SpecialRotation();

	void CheckIfUnderground();

	void PlaySoundOnInteraction(TAssetPtr<class USoundBase> Sound, struct FVector Location, class ABP_BaseCharacter_C* InteractingActor);

	void OnItemReplicatedToClient();

	void OnRep_Item();

	void OnRep_IsGrabbed();

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetInteractAction(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractActionText, struct FText* InteractSecondActionText);

	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);

	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool);

	void GetInteractCount(int32_t* Count);

	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);

	void GetResourceType(TEnumAsByte<E_Resources>* ResourceType);

	void CheckOccupied(class APawn** Character);

	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);

	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);

	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool, TEnumAsByte<E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications>* BuildingMode);

	void GetFluidType(TEnumAsByte<E_Fluids>* FluidType);

	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);

	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);

	void GetOwnershipType(TEnumAsByte<E_Ownership>* Ownership);

	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);

	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);

	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);

	void GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem);

	void GetInteractionDistance(float* Distance);

	void GetID(struct FName* ID);

	void GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform);

	void IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus);

	void GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status);

	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);

	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);

	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);

	void IsGrabbable(bool* Grabbable);

	void GetToolType(TEnumAsByte<E_Tools>* ToolType, TEnumAsByte<E_Tools_Activity>* ToolActivityType);

	void GetNPC_Interactable(TArray<bool>* NPC_Interactable);

	void GetInteractAnimationForViewmode_BPI(TEnumAsByte<E_ViewMode> ViewMode, class UAnimMontage** InteractionAnimationMontage);

	void IsInRestrictedArea(struct FVector Location, bool* bLocked);

	void GetIsGrabbed_BPI(bool* IsGrabbed);

	void GetItemID_BPI(struct FName* ItemId);

	void GetName(struct FName* Name)/* const*/;

	void GetDisplayName(struct FText* DisplayName)/* const*/;

#pragma endregion
};
};