#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_MasterItem.BP_MasterItem_C
// Super: Class Engine.Actor
// Size: 1624
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_MasterItem_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USphereComponent*	InspectorPoint;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USphereComponent* M_GetInspectorPoint() const;
	class USphereComponent** M_PtrGetInspectorPoint();
	void M_SetInspectorPoint(const class USphereComponent*& value);

	//class UBP_AquaticBuoyancy_C*	AquaticBoyuancy;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticBuoyancy_C* M_GetAquaticBoyuancy() const;
	class UBP_AquaticBuoyancy_C** M_PtrGetAquaticBoyuancy();
	void M_SetAquaticBoyuancy(const class UBP_AquaticBuoyancy_C*& value);

	//class UWidgetComponent*	UI_Inspector;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UWidgetComponent* M_GetUI_Inspector() const;
	class UWidgetComponent** M_PtrGetUI_Inspector();
	void M_SetUI_Inspector(const class UWidgetComponent*& value);

	//class UStaticMeshComponent*	StaticMesh;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UStaticMeshComponent* M_GetStaticMesh() const;
	class UStaticMeshComponent** M_PtrGetStaticMesh();
	void M_SetStaticMesh(const class UStaticMeshComponent*& value);

	//class UBP_AquaticInteraction_C*	AquaticInteraction;		//Offset: 584	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetAquaticInteraction() const;
	class UBP_AquaticInteraction_C** M_PtrGetAquaticInteraction();
	void M_SetAquaticInteraction(const class UBP_AquaticInteraction_C*& value);

	//struct FDataTableRowHandle	Item;		//Offset: 592	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
	struct FDataTableRowHandle M_GetItem() const;
	struct FDataTableRowHandle* M_PtrGetItem();
	void M_SetItem(const struct FDataTableRowHandle& value);

	//int32_t	ResourceCount;		//Offset: 608	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetResourceCount() const;
	int32_t* M_PtrGetResourceCount();
	void M_SetResourceCount(const int32_t& value);

	//class APawn*	CharacterReference;		//Offset: 616	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class APawn* M_GetCharacterReference() const;
	class APawn** M_PtrGetCharacterReference();
	void M_SetCharacterReference(const class APawn*& value);

	//struct FST_ItemDetails	ItemDetails;		//Offset: 624	Size: 848	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_ItemDetails M_GetItemDetails() const;
	struct FST_ItemDetails* M_PtrGetItemDetails();
	void M_SetItemDetails(const struct FST_ItemDetails& value);

	//struct FName	ItemName;		//Offset: 1472	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetItemName() const;
	struct FName* M_PtrGetItemName();
	void M_SetItemName(const struct FName& value);

	//float	CurrentHP;		//Offset: 1480	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetCurrentHP() const;
	float* M_PtrGetCurrentHP();
	void M_SetCurrentHP(const float& value);

	//bool	SimulatePhysicsOverride;		//Offset: 1484	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSimulatePhysicsOverride() const;
	bool* M_PtrGetSimulatePhysicsOverride();
	void M_SetSimulatePhysicsOverride(const bool& value);

	//bool	SimulatePhysics;		//Offset: 1485	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSimulatePhysics() const;
	bool* M_PtrGetSimulatePhysics();
	void M_SetSimulatePhysics(const bool& value);

	//float	LifeTime;		//Offset: 1488	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetLifeTime() const;
	float* M_PtrGetLifeTime();
	void M_SetLifeTime(const float& value);

	//class ABP_BaseCharacter_C*	InteractingActorReference;		//Offset: 1496	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetInteractingActorReference() const;
	class ABP_BaseCharacter_C** M_PtrGetInteractingActorReference();
	void M_SetInteractingActorReference(const class ABP_BaseCharacter_C*& value);

	//int32_t	Capacity;		//Offset: 1504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetCapacity() const;
	int32_t* M_PtrGetCapacity();
	void M_SetCapacity(const int32_t& value);

	//bool	found;		//Offset: 1508	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_Getfound() const;
	bool* M_PtrGetfound();
	void M_Setfound(const bool& value);

	//struct FTimerHandle	PickUpTimerHandle;		//Offset: 1512	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPickUpTimerHandle() const;
	struct FTimerHandle* M_PtrGetPickUpTimerHandle();
	void M_SetPickUpTimerHandle(const struct FTimerHandle& value);

	//float	Freshness;		//Offset: 1520	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetFreshness() const;
	float* M_PtrGetFreshness();
	void M_SetFreshness(const float& value);

	//class UUI_Inspector_Item_C*	UI_InspectorReference;		//Offset: 1528	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Inspector_Item_C* M_GetUI_InspectorReference() const;
	class UUI_Inspector_Item_C** M_PtrGetUI_InspectorReference();
	void M_SetUI_InspectorReference(const class UUI_Inspector_Item_C*& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 1536	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//bool	SeasonalRemoveOverride;		//Offset: 1537	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSeasonalRemoveOverride() const;
	bool* M_PtrGetSeasonalRemoveOverride();
	void M_SetSeasonalRemoveOverride(const bool& value);

	//bool	SeasonalRemove;		//Offset: 1538	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSeasonalRemove() const;
	bool* M_PtrGetSeasonalRemove();
	void M_SetSeasonalRemove(const bool& value);

	//bool	UsePickingAnimation;		//Offset: 1539	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUsePickingAnimation() const;
	bool* M_PtrGetUsePickingAnimation();
	void M_SetUsePickingAnimation(const bool& value);

	//bool	PreferTwoHandedAnimation;		//Offset: 1540	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPreferTwoHandedAnimation() const;
	bool* M_PtrGetPreferTwoHandedAnimation();
	void M_SetPreferTwoHandedAnimation(const bool& value);

	//bool	UseAdditionalMesh;		//Offset: 1541	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetUseAdditionalMesh() const;
	bool* M_PtrGetUseAdditionalMesh();
	void M_SetUseAdditionalMesh(const bool& value);

	//struct FGuid	Guid;		//Offset: 1544	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FGuid M_GetGuid() const;
	struct FGuid* M_PtrGetGuid();
	void M_SetGuid(const struct FGuid& value);

	//bool	Dropped;		//Offset: 1560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetDropped() const;
	bool* M_PtrGetDropped();
	void M_SetDropped(const bool& value);

	//TArray<class AActor*>	AttachedActors;		//Offset: 1568	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetAttachedActors() const;
	TArray<class AActor*>* M_PtrGetAttachedActors();
	void M_SetAttachedActors(const TArray<class AActor*>& value);

	//bool	Rotate_Left;		//Offset: 1584	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotate_Left() const;
	bool* M_PtrGetRotate_Left();
	void M_SetRotate_Left(const bool& value);

	//bool	Rotate_Right;		//Offset: 1585	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotate_Right() const;
	bool* M_PtrGetRotate_Right();
	void M_SetRotate_Right(const bool& value);

	//bool	PrecisionGrab;		//Offset: 1586	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetPrecisionGrab() const;
	bool* M_PtrGetPrecisionGrab();
	void M_SetPrecisionGrab(const bool& value);

	//struct FTimerHandle	ImpaledTimerHandle;		//Offset: 1592	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetImpaledTimerHandle() const;
	struct FTimerHandle* M_PtrGetImpaledTimerHandle();
	void M_SetImpaledTimerHandle(const struct FTimerHandle& value);

	//float	RotationRoll;		//Offset: 1600	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRotationRoll() const;
	float* M_PtrGetRotationRoll();
	void M_SetRotationRoll(const float& value);

	//float	RotationYaw;		//Offset: 1604	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRotationYaw() const;
	float* M_PtrGetRotationYaw();
	void M_SetRotationYaw(const float& value);

	//struct FRotator	FinalRotation;		//Offset: 1608	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetFinalRotation() const;
	struct FRotator* M_PtrGetFinalRotation();
	void M_SetFinalRotation(const struct FRotator& value);

	//float	BaseYaw;		//Offset: 1620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseYaw() const;
	float* M_PtrGetBaseYaw();
	void M_SetBaseYaw(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterItem.BP_MasterItem_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_MasterItem(int32_t EntryPoint);

	void RotatePitch(float Angle);

	void RotateYaw(float Angle);

	void DetachItem();

	void SetRotateMode(bool RotateLeft, bool RotateRight);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void ReceiveTick(float DeltaSeconds);

	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);

	void PerformActorInteraction();

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer);

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

	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, struct FST_Chunks ChunkData);

	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractInput(bool KeyDown);

	void UserConstructionScript();

	void OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership);

	void GetDataToSave(struct FString* ItemData);

	void PickUpAttachedActors();

	void SetMesh(TAssetPtr<class UObject> WorldMesh, TAssetPtr<class UObject> AdditionaWorldMesh);

	void Grab(class ABP_BaseCharacter_C* InteractigActor, struct FHitResult Hit);

	bool CanGrab_();

	void Rotate(float Speed, struct FVector GrabLocation);

	void SpecialRotation();

	void CheckIfUnderground();

	void PlaySoundOnInteraction(TAssetPtr<class USoundBase> Sound, struct FVector Location);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);

	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);

	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool);

	void GetInteractCount(int32_t* Count);

	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);

	void GetResourceType(TEnumAsByte<E_Resources>* ResourceType);

	void CheckOccupied(class APawn** Character);

	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);

	void GetNPCInteractTime(float* Time);

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

#pragma endregion
};
};