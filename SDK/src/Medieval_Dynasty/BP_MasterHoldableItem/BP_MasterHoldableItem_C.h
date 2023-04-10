#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_MasterHoldableItem.BP_MasterHoldableItem_C
// Super: Class Engine.Actor
// Size: 2033
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_MasterHoldableItem_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USceneComponent*	AttachComponent;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetAttachComponent() const;
	class USceneComponent** M_PtrGetAttachComponent();
	void M_SetAttachComponent(const class USceneComponent*& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//struct FST_ItemResource	Item;		//Offset: 568	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
	struct FST_ItemResource M_GetItem() const;
	struct FST_ItemResource* M_PtrGetItem();
	void M_SetItem(const struct FST_ItemResource& value);

	//struct FName	SocketName;		//Offset: 592	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetSocketName() const;
	struct FName* M_PtrGetSocketName();
	void M_SetSocketName(const struct FName& value);

	//class ABP_BaseCharacter_C*	PlayerCharacterReference;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetPlayerCharacterReference() const;
	class ABP_BaseCharacter_C** M_PtrGetPlayerCharacterReference();
	void M_SetPlayerCharacterReference(const class ABP_BaseCharacter_C*& value);

	//TEnumAsByte<E_Tools>	ToolType;		//Offset: 608	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetToolType() const;
	TEnumAsByte<E_Tools>* M_PtrGetToolType();
	void M_SetToolType(const TEnumAsByte<E_Tools>& value);

	//struct FVector2D	Damage;		//Offset: 612	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D M_GetDamage() const;
	struct FVector2D* M_PtrGetDamage();
	void M_SetDamage(const struct FVector2D& value);

	//float	Extraction;		//Offset: 620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetExtraction() const;
	float* M_PtrGetExtraction();
	void M_SetExtraction(const float& value);

	//TMap<struct FName, struct FST_MontagesSettingsEnum>	MontagesSettings_ByName;		//Offset: 624	Size: 80	Flags: Edit, BlueprintVisible
	TMap<struct FName, struct FST_MontagesSettingsEnum> M_GetMontagesSettings_ByName() const;
	TMap<struct FName, struct FST_MontagesSettingsEnum>* M_PtrGetMontagesSettings_ByName();
	void M_SetMontagesSettings_ByName(const TMap<struct FName, struct FST_MontagesSettingsEnum>& value);

	//TMap<struct FName, struct FST_MontagesSettingsEnum>	MontagesSettings_ByName_TP;		//Offset: 704	Size: 80	Flags: Edit, BlueprintVisible
	TMap<struct FName, struct FST_MontagesSettingsEnum> M_GetMontagesSettings_ByName_TP() const;
	TMap<struct FName, struct FST_MontagesSettingsEnum>* M_PtrGetMontagesSettings_ByName_TP();
	void M_SetMontagesSettings_ByName_TP(const TMap<struct FName, struct FST_MontagesSettingsEnum>& value);

	//struct FName	MontageName;		//Offset: 784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetMontageName() const;
	struct FName* M_PtrGetMontageName();
	void M_SetMontageName(const struct FName& value);

	//TEnumAsByte<E_HandsForHolstering>	HolsterHand;		//Offset: 792	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_HandsForHolstering> M_GetHolsterHand() const;
	TEnumAsByte<E_HandsForHolstering>* M_PtrGetHolsterHand();
	void M_SetHolsterHand(const TEnumAsByte<E_HandsForHolstering>& value);

	//bool	UseCondition;		//Offset: 793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUseCondition() const;
	bool* M_PtrGetUseCondition();
	void M_SetUseCondition(const bool& value);

	//float	HPCostPerAction;		//Offset: 796	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHPCostPerAction() const;
	float* M_PtrGetHPCostPerAction();
	void M_SetHPCostPerAction(const float& value);

	//bool	IsToolTurnedInInteraction_;		//Offset: 800	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsToolTurnedInInteraction_() const;
	bool* M_PtrGetIsToolTurnedInInteraction_();
	void M_SetIsToolTurnedInInteraction_(const bool& value);

	//float	StaminaCost;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStaminaCost() const;
	float* M_PtrGetStaminaCost();
	void M_SetStaminaCost(const float& value);

	//float	AnimationSpeed;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimationSpeed() const;
	float* M_PtrGetAnimationSpeed();
	void M_SetAnimationSpeed(const float& value);

	//float	BaseExtraction;		//Offset: 812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseExtraction() const;
	float* M_PtrGetBaseExtraction();
	void M_SetBaseExtraction(const float& value);

	//bool	LeftKeyDown;		//Offset: 816	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLeftKeyDown() const;
	bool* M_PtrGetLeftKeyDown();
	void M_SetLeftKeyDown(const bool& value);

	//struct FTimerHandle	TimerHandle;		//Offset: 824	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetTimerHandle() const;
	struct FTimerHandle* M_PtrGetTimerHandle();
	void M_SetTimerHandle(const struct FTimerHandle& value);

	//bool	RightKeyDown;		//Offset: 832	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightKeyDown() const;
	bool* M_PtrGetRightKeyDown();
	void M_SetRightKeyDown(const bool& value);

	//int32_t	Capacity;		//Offset: 836	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetCapacity() const;
	int32_t* M_PtrGetCapacity();
	void M_SetCapacity(const int32_t& value);

	//TEnumAsByte<E_AnimInteractionTypes>	OverridenMontageType;		//Offset: 840	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimInteractionTypes> M_GetOverridenMontageType() const;
	TEnumAsByte<E_AnimInteractionTypes>* M_PtrGetOverridenMontageType();
	void M_SetOverridenMontageType(const TEnumAsByte<E_AnimInteractionTypes>& value);

	//bool	OverrideMontage;		//Offset: 841	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOverrideMontage() const;
	bool* M_PtrGetOverrideMontage();
	void M_SetOverrideMontage(const bool& value);

	//bool	ShouldSetToolPosition;		//Offset: 842	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetShouldSetToolPosition() const;
	bool* M_PtrGetShouldSetToolPosition();
	void M_SetShouldSetToolPosition(const bool& value);

	//float	CurrentHP;		//Offset: 844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetCurrentHP() const;
	float* M_PtrGetCurrentHP();
	void M_SetCurrentHP(const float& value);

	//struct FVector	ItemHitLocation;		//Offset: 848	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetItemHitLocation() const;
	struct FVector* M_PtrGetItemHitLocation();
	void M_SetItemHitLocation(const struct FVector& value);

	//bool	IsAnimOnly;		//Offset: 860	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsAnimOnly() const;
	bool* M_PtrGetIsAnimOnly();
	void M_SetIsAnimOnly(const bool& value);

	//bool	InteractionEnabled;		//Offset: 861	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInteractionEnabled() const;
	bool* M_PtrGetInteractionEnabled();
	void M_SetInteractionEnabled(const bool& value);

	//TArray<struct FST_HoldableItemInput_Stage>	InputMappingStages;		//Offset: 864	Size: 16	Flags: Edit, BlueprintVisible, ExposeOnSpawn
	TArray<struct FST_HoldableItemInput_Stage> M_GetInputMappingStages() const;
	TArray<struct FST_HoldableItemInput_Stage>* M_PtrGetInputMappingStages();
	void M_SetInputMappingStages(const TArray<struct FST_HoldableItemInput_Stage>& value);

	//int32_t	InputStage;		//Offset: 880	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInputStage() const;
	int32_t* M_PtrGetInputStage();
	void M_SetInputStage(const int32_t& value);

	//bool	DecreaseToolHP;		//Offset: 884	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDecreaseToolHP() const;
	bool* M_PtrGetDecreaseToolHP();
	void M_SetDecreaseToolHP(const bool& value);

	//TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>	ViewmodeToolTransforms;		//Offset: 888	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms> M_GetViewmodeToolTransforms() const;
	TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>* M_PtrGetViewmodeToolTransforms();
	void M_SetViewmodeToolTransforms(const TMap<TEnumAsByte<E_ViewMode>, struct FST_CombinedToolTransforms>& value);

	//struct FST_ToolTransforms	ToolTransforms;		//Offset: 976	Size: 432	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_ToolTransforms M_GetToolTransforms() const;
	struct FST_ToolTransforms* M_PtrGetToolTransforms();
	void M_SetToolTransforms(const struct FST_ToolTransforms& value);

	//struct FST_ToolTransforms	FlippedToolTransforms;		//Offset: 1408	Size: 432	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_ToolTransforms M_GetFlippedToolTransforms() const;
	struct FST_ToolTransforms* M_PtrGetFlippedToolTransforms();
	void M_SetFlippedToolTransforms(const struct FST_ToolTransforms& value);

	//bool	IsDestroyed;		//Offset: 1840	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsDestroyed() const;
	bool* M_PtrGetIsDestroyed();
	void M_SetIsDestroyed(const bool& value);

	//class USoundBase*	SC_WeaponLoad;		//Offset: 1848	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundBase* M_GetSC_WeaponLoad() const;
	class USoundBase** M_PtrGetSC_WeaponLoad();
	void M_SetSC_WeaponLoad(const class USoundBase*& value);

	//bool	HadAnotherTool;		//Offset: 1856	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadAnotherTool() const;
	bool* M_PtrGetHadAnotherTool();
	void M_SetHadAnotherTool(const bool& value);

	//bool	ScaleOnSpawn;		//Offset: 1857	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetScaleOnSpawn() const;
	bool* M_PtrGetScaleOnSpawn();
	void M_SetScaleOnSpawn(const bool& value);

	//TEnumAsByte<E_WeaponDamageType>	WeaponDamageType;		//Offset: 1858	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_WeaponDamageType> M_GetWeaponDamageType() const;
	TEnumAsByte<E_WeaponDamageType>* M_PtrGetWeaponDamageType();
	void M_SetWeaponDamageType(const TEnumAsByte<E_WeaponDamageType>& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 1859	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>	ProfessionToolTransforms;		//Offset: 1864	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms> M_GetProfessionToolTransforms() const;
	TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>* M_PtrGetProfessionToolTransforms();
	void M_SetProfessionToolTransforms(const TMap<TEnumAsByte<E_Profession>, struct FST_ToolTransforms>& value);

	//bool	isPlayer;		//Offset: 1944	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisPlayer() const;
	bool* M_PtrGetisPlayer();
	void M_SetisPlayer(const bool& value);

	//float	BaseAnimationSpeed;		//Offset: 1948	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseAnimationSpeed() const;
	float* M_PtrGetBaseAnimationSpeed();
	void M_SetBaseAnimationSpeed(const float& value);

	//TMap<TEnumAsByte<E_ViewMode>, float>	HitShakeScale;		//Offset: 1952	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_ViewMode>, float> M_GetHitShakeScale() const;
	TMap<TEnumAsByte<E_ViewMode>, float>* M_PtrGetHitShakeScale();
	void M_SetHitShakeScale(const TMap<TEnumAsByte<E_ViewMode>, float>& value);

	//bool	Flipped;		//Offset: 2032	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFlipped() const;
	bool* M_PtrGetFlipped();
	void M_SetFlipped(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterHoldableItem.BP_MasterHoldableItem_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_MasterHoldableItem(int32_t EntryPoint);

	void HoldableNotify(struct FName NotifyName);

	void DespawnItem();

	void SpawnItem();

	void StartTimer();

	void CheckForInteraction();

	void ReceiveBeginPlay();

	void SetTickEnabled(bool bEnabled);

	void HitMontageBlendOut(class UAnimMontage* Montage);

	void HitMontageInterrupted(class UAnimMontage* Montage);

	void HitMontageComplete(class UAnimMontage* Montage);

	void MontageBlendOut(class UAnimMontage* Montage);

	void MontageInterrupted(class UAnimMontage* Montage);

	void MontageComplete(class UAnimMontage* Montage);

	void PerformInteraction();

	void OnLoopFinish();

	void FlipRotation(bool UnFlip);

	void ResetHoldable();

	void RightMouseInput(bool KeyDown);

	void LeftMouseInput(bool KeyDown);

	void UserConstructionScript();

	void DecreaseHoldableItemHP(float Value, bool Offhand);

	void GetMontageSettings(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, struct FST_MontagesSettingsArray* Montage);

	void SetStatsFromAbilities(class UBP_CharacterStatsComponent_C** CharacterStatsComponentReference, bool OnlyAnimSpeed);

	void Set_Montage_Settings(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, struct FST_MontagesSettingsArray MontageSettings, TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>* MontagesSettings);

	void DecreaseHoldableItemCapacity();

	void UpdateToolTransform();

	void GetHoldableTransform(struct FTransform* HoldableTransform);

	void GetHoldableFlippedTransform(struct FTransform* HoldableTransform);

	void On_Tool_Interact_with_Foliage(int32_t FoliageAmount, struct FVector Location);

	void OnStartInteraction();

	void OnEndInteraction();

	void HitBoneDetection(struct FName HitBoneName, float* DamagePercent);

	void ChangeInputStage(int32_t InputStage);

	void CheckForTorchEquipableItems();

	bool CompareMontages(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, class UAnimMontage* Montage);

	bool IsAnyMontagePlaying(struct FName Name, TEnumAsByte<E_AnimInteractionTypes> Key, class UAnimMontage** Montage);

	void ChangeAnimID(int32_t AnimID, bool* Changed);

	void PlayPlayerCameraShake();

	void GetMontagesByViewmode(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>* MontageSettings);

	void SetMontageName(struct FName Name, bool* Changed);

	void OnLoopStart(bool* CanStart);

	void GetFluidType(TEnumAsByte<E_Fluids>* FluidType);

	void GetWeaponDamageType(TEnumAsByte<E_WeaponDamageType>* DamageType);

	void GetSpeeds(float* MinSpeed, float* Speed, float* MaxSpeed);

#pragma endregion
};
};