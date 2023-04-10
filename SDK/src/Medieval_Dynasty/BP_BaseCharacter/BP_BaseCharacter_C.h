#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/CharacterBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// Super: Class Medieval_Dynasty.CharacterBase
// Size: 5881
// Size inherited: 1568
/////////////////////////////////////////////
namespace UE4 {
class ABP_BaseCharacter_C : public ACharacterBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 1568	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USKModularComponent*	SKModular;		//Offset: 1576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USKModularComponent* M_GetSKModular() const;
	class USKModularComponent** M_PtrGetSKModular();
	void M_SetSKModular(const class USKModularComponent*& value);

	//class UWidgetComponent*	UI_Inspector;		//Offset: 1584	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UWidgetComponent* M_GetUI_Inspector() const;
	class UWidgetComponent** M_PtrGetUI_Inspector();
	void M_SetUI_Inspector(const class UWidgetComponent*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionLeftFoot;		//Offset: 1592	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionLeftFoot() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionLeftFoot();
	void M_SetBP_AquaticInteractionLeftFoot(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionRightFoot;		//Offset: 1600	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionRightFoot() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionRightFoot();
	void M_SetBP_AquaticInteractionRightFoot(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteraction;		//Offset: 1608	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteraction() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteraction();
	void M_SetBP_AquaticInteraction(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionRightHand;		//Offset: 1616	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionRightHand() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionRightHand();
	void M_SetBP_AquaticInteractionRightHand(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionLeftHand;		//Offset: 1624	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionLeftHand() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionLeftHand();
	void M_SetBP_AquaticInteractionLeftHand(const class UBP_AquaticInteraction_C*& value);

	//class UBP_CombatComponent_C*	BP_CombatComponent;		//Offset: 1632	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_CombatComponent_C* M_GetBP_CombatComponent() const;
	class UBP_CombatComponent_C** M_PtrGetBP_CombatComponent();
	void M_SetBP_CombatComponent(const class UBP_CombatComponent_C*& value);

	//class UMountRiderComponent*	MountRider;		//Offset: 1640	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UMountRiderComponent* M_GetMountRider() const;
	class UMountRiderComponent** M_PtrGetMountRider();
	void M_SetMountRider(const class UMountRiderComponent*& value);

	//class USkeletalMeshComponent*	Hair;		//Offset: 1648	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHair() const;
	class USkeletalMeshComponent** M_PtrGetHair();
	void M_SetHair(const class USkeletalMeshComponent*& value);

	//class UBP_AquaticBuoyancy_C*	BP_AquaticBuoyancy;		//Offset: 1656	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticBuoyancy_C* M_GetBP_AquaticBuoyancy() const;
	class UBP_AquaticBuoyancy_C** M_PtrGetBP_AquaticBuoyancy();
	void M_SetBP_AquaticBuoyancy(const class UBP_AquaticBuoyancy_C*& value);

	//class UBP_StageInteractionComponent_C*	BP_StageInteractionComponent;		//Offset: 1664	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_StageInteractionComponent_C* M_GetBP_StageInteractionComponent() const;
	class UBP_StageInteractionComponent_C** M_PtrGetBP_StageInteractionComponent();
	void M_SetBP_StageInteractionComponent(const class UBP_StageInteractionComponent_C*& value);

	//class USkeletalMeshComponent*	Torso;		//Offset: 1672	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetTorso() const;
	class USkeletalMeshComponent** M_PtrGetTorso();
	void M_SetTorso(const class USkeletalMeshComponent*& value);

	//class UBP_CharacterStatsComponent_C*	BP_CharacterStatsComponent;		//Offset: 1680	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_CharacterStatsComponent_C* M_GetBP_CharacterStatsComponent() const;
	class UBP_CharacterStatsComponent_C** M_PtrGetBP_CharacterStatsComponent();
	void M_SetBP_CharacterStatsComponent(const class UBP_CharacterStatsComponent_C*& value);

	//class UBP_CharacterRelationsComponent_C*	BP_RelationsComponent;		//Offset: 1688	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_CharacterRelationsComponent_C* M_GetBP_RelationsComponent() const;
	class UBP_CharacterRelationsComponent_C** M_PtrGetBP_RelationsComponent();
	void M_SetBP_RelationsComponent(const class UBP_CharacterRelationsComponent_C*& value);

	//class UInventoryComponent_C*	InventoryComponent;		//Offset: 1696	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UInventoryComponent_C* M_GetInventoryComponent() const;
	class UInventoryComponent_C** M_PtrGetInventoryComponent();
	void M_SetInventoryComponent(const class UInventoryComponent_C*& value);

	//class UAIPerceptionStimuliSourceComponent*	AIPerceptionStimuliSource;		//Offset: 1704	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAIPerceptionStimuliSourceComponent* M_GetAIPerceptionStimuliSource() const;
	class UAIPerceptionStimuliSourceComponent** M_PtrGetAIPerceptionStimuliSource();
	void M_SetAIPerceptionStimuliSource(const class UAIPerceptionStimuliSourceComponent*& value);

	//float	EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99;		//Offset: 1712	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99() const;
	float* M_PtrGetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99();
	void M_SetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99(const float& value);

	//TEnumAsByte<ETimelineDirection>	EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99;		//Offset: 1716	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99();
	void M_SetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	EyesStateTL;		//Offset: 1720	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetEyesStateTL() const;
	class UTimelineComponent** M_PtrGetEyesStateTL();
	void M_SetEyesStateTL(const class UTimelineComponent*& value);

	//float	Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A;		//Offset: 1728	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const;
	float* M_PtrGetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A();
	void M_SetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const float& value);

	//TEnumAsByte<ETimelineDirection>	Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A;		//Offset: 1732	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A();
	void M_SetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	Blinking;		//Offset: 1736	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetBlinking() const;
	class UTimelineComponent** M_PtrGetBlinking();
	void M_SetBlinking(const class UTimelineComponent*& value);

	//float	FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813;		//Offset: 1744	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813() const;
	float* M_PtrGetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813();
	void M_SetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813(const float& value);

	//TEnumAsByte<ETimelineDirection>	FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813;		//Offset: 1748	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813();
	void M_SetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	FistFightingTimeline;		//Offset: 1752	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetFistFightingTimeline() const;
	class UTimelineComponent** M_PtrGetFistFightingTimeline();
	void M_SetFistFightingTimeline(const class UTimelineComponent*& value);

	//bool	ShouldSprint;		//Offset: 1760	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldSprint() const;
	bool* M_PtrGetShouldSprint();
	void M_SetShouldSprint(const bool& value);

	//float	LookUp_DownRate;		//Offset: 1764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLookUp_DownRate() const;
	float* M_PtrGetLookUp_DownRate();
	void M_SetLookUp_DownRate(const float& value);

	//float	LookLeft_RightRate;		//Offset: 1768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLookLeft_RightRate() const;
	float* M_PtrGetLookLeft_RightRate();
	void M_SetLookLeft_RightRate(const float& value);

	//float	ForwardAxisValue;		//Offset: 1772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetForwardAxisValue() const;
	float* M_PtrGetForwardAxisValue();
	void M_SetForwardAxisValue(const float& value);

	//float	RightAxisValue;		//Offset: 1776	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRightAxisValue() const;
	float* M_PtrGetRightAxisValue();
	void M_SetRightAxisValue(const float& value);

	//TEnumAsByte<E_ViewMode>	ViewMode;		//Offset: 1780	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ViewMode> M_GetViewMode() const;
	TEnumAsByte<E_ViewMode>* M_PtrGetViewMode();
	void M_SetViewMode(const TEnumAsByte<E_ViewMode>& value);

	//bool	Aiming;		//Offset: 1781	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAiming() const;
	bool* M_PtrGetAiming();
	void M_SetAiming(const bool& value);

	//struct FName	VoiceSocket;		//Offset: 1784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetVoiceSocket() const;
	struct FName* M_PtrGetVoiceSocket();
	void M_SetVoiceSocket(const struct FName& value);

	//bool	ShowTraces;		//Offset: 1792	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowTraces() const;
	bool* M_PtrGetShowTraces();
	void M_SetShowTraces(const bool& value);

	//bool	ShowSettings;		//Offset: 1793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowSettings() const;
	bool* M_PtrGetShowSettings();
	void M_SetShowSettings(const bool& value);

	//struct FName	PelvisBone;		//Offset: 1796	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetPelvisBone() const;
	struct FName* M_PtrGetPelvisBone();
	void M_SetPelvisBone(const struct FName& value);

	//struct FName	RagdollPoseSnapshot;		//Offset: 1804	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollPoseSnapshot() const;
	struct FName* M_PtrGetRagdollPoseSnapshot();
	void M_SetRagdollPoseSnapshot(const struct FName& value);

	//bool	RagdollOnGround;		//Offset: 1812	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRagdollOnGround() const;
	bool* M_PtrGetRagdollOnGround();
	void M_SetRagdollOnGround(const bool& value);

	//struct FVector	RagdollLocation;		//Offset: 1816	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRagdollLocation() const;
	struct FVector* M_PtrGetRagdollLocation();
	void M_SetRagdollLocation(const struct FVector& value);

	//struct FVector	RagdollVelocity;		//Offset: 1828	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRagdollVelocity() const;
	struct FVector* M_PtrGetRagdollVelocity();
	void M_SetRagdollVelocity(const struct FVector& value);

	//bool	Inventory_Open;		//Offset: 1840	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInventory_Open() const;
	bool* M_PtrGetInventory_Open();
	void M_SetInventory_Open(const bool& value);

	//bool	ShouldCrouch;		//Offset: 1841	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldCrouch() const;
	bool* M_PtrGetShouldCrouch();
	void M_SetShouldCrouch(const bool& value);

	//int32_t	SelectedItemID;		//Offset: 1844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedItemID() const;
	int32_t* M_PtrGetSelectedItemID();
	void M_SetSelectedItemID(const int32_t& value);

	//struct FHitResult	HitReference;		//Offset: 1848	Size: 136	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
	struct FHitResult M_GetHitReference() const;
	struct FHitResult* M_PtrGetHitReference();
	void M_SetHitReference(const struct FHitResult& value);

	//class ABP_MasterHoldableItem_C*	HeldItem;		//Offset: 1984	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetHeldItem() const;
	class ABP_MasterHoldableItem_C** M_PtrGetHeldItem();
	void M_SetHeldItem(const class ABP_MasterHoldableItem_C*& value);

	//bool	BlockEquipping;		//Offset: 1992	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockEquipping() const;
	bool* M_PtrGetBlockEquipping();
	void M_SetBlockEquipping(const bool& value);

	//TArray<struct FName>	Tag;		//Offset: 2000	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetTag() const;
	TArray<struct FName>* M_PtrGetTag();
	void M_SetTag(const TArray<struct FName>& value);

	//float	EncumberedSpeedMultiplier;		//Offset: 2016	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEncumberedSpeedMultiplier() const;
	float* M_PtrGetEncumberedSpeedMultiplier();
	void M_SetEncumberedSpeedMultiplier(const float& value);

	//bool	BuildingMenuOpen;		//Offset: 2020	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBuildingMenuOpen() const;
	bool* M_PtrGetBuildingMenuOpen();
	void M_SetBuildingMenuOpen(const bool& value);

	//bool	BlockInteraction;		//Offset: 2021	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockInteraction() const;
	bool* M_PtrGetBlockInteraction();
	void M_SetBlockInteraction(const bool& value);

	//class ABP_MasterHoldableItem_C*	Off_HandItem;		//Offset: 2024	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetOff_HandItem() const;
	class ABP_MasterHoldableItem_C** M_PtrGetOff_HandItem();
	void M_SetOff_HandItem(const class ABP_MasterHoldableItem_C*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 2032	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//struct FST_Chunks	FieldChunk;		//Offset: 2040	Size: 520	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Chunks M_GetFieldChunk() const;
	struct FST_Chunks* M_PtrGetFieldChunk();
	void M_SetFieldChunk(const struct FST_Chunks& value);

	//struct FST_Chunks	HitFieldChunk;		//Offset: 2560	Size: 520	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Chunks M_GetHitFieldChunk() const;
	struct FST_Chunks* M_PtrGetHitFieldChunk();
	void M_SetHitFieldChunk(const struct FST_Chunks& value);

	//struct FST_CharacterModules	DefaultCharacterModules;		//Offset: 3080	Size: 200	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_CharacterModules M_GetDefaultCharacterModules() const;
	struct FST_CharacterModules* M_PtrGetDefaultCharacterModules();
	void M_SetDefaultCharacterModules(const struct FST_CharacterModules& value);

	//TArray<struct FST_MeshDynamicMaterials>	DynamicMaterials;		//Offset: 3280	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_MeshDynamicMaterials> M_GetDynamicMaterials() const;
	TArray<struct FST_MeshDynamicMaterials>* M_PtrGetDynamicMaterials();
	void M_SetDynamicMaterials(const TArray<struct FST_MeshDynamicMaterials>& value);

	//bool	UseHeadForFullBodyAnimations;		//Offset: 3296	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseHeadForFullBodyAnimations() const;
	bool* M_PtrGetUseHeadForFullBodyAnimations();
	void M_SetUseHeadForFullBodyAnimations(const bool& value);

	//float	InteractionCameraSlowDown;		//Offset: 3300	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionCameraSlowDown() const;
	float* M_PtrGetInteractionCameraSlowDown();
	void M_SetInteractionCameraSlowDown(const float& value);

	//float	InteractionMovementSlowDown;		//Offset: 3304	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionMovementSlowDown() const;
	float* M_PtrGetInteractionMovementSlowDown();
	void M_SetInteractionMovementSlowDown(const float& value);

	//struct FRotator	UsePawnCameraRelativeRotation;		//Offset: 3308	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetUsePawnCameraRelativeRotation() const;
	struct FRotator* M_PtrGetUsePawnCameraRelativeRotation();
	void M_SetUsePawnCameraRelativeRotation(const struct FRotator& value);

	//TAssetPtr<class FCameraFadeFinished__DelegateSignature>	CameraFadeFinished;		//Offset: 3320	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FCameraFadeFinished__DelegateSignature> M_GetCameraFadeFinished() const;
	TAssetPtr<class FCameraFadeFinished__DelegateSignature>* M_PtrGetCameraFadeFinished();
	void M_SetCameraFadeFinished(const TAssetPtr<class FCameraFadeFinished__DelegateSignature>& value);

	//TArray<TEnumAsByte<E_Tools>>	TorchUsableToolTypes;		//Offset: 3336	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_Tools>> M_GetTorchUsableToolTypes() const;
	TArray<TEnumAsByte<E_Tools>>* M_PtrGetTorchUsableToolTypes();
	void M_SetTorchUsableToolTypes(const TArray<TEnumAsByte<E_Tools>>& value);

	//struct FLinearColor	SkinTone;		//Offset: 3352	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetSkinTone() const;
	struct FLinearColor* M_PtrGetSkinTone();
	void M_SetSkinTone(const struct FLinearColor& value);

	//bool	IsSwooned;		//Offset: 3368	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSwooned() const;
	bool* M_PtrGetIsSwooned();
	void M_SetIsSwooned(const bool& value);

	//bool	IsSprintKeyDown;		//Offset: 3369	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSprintKeyDown() const;
	bool* M_PtrGetIsSprintKeyDown();
	void M_SetIsSprintKeyDown(const bool& value);

	//float	DefaultFPCameraFOV;		//Offset: 3372	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultFPCameraFOV() const;
	float* M_PtrGetDefaultFPCameraFOV();
	void M_SetDefaultFPCameraFOV(const float& value);

	//TAssetPtr<class FOnMovementFinished__DelegateSignature>	OnMovementFinished;		//Offset: 3376	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnMovementFinished__DelegateSignature> M_GetOnMovementFinished() const;
	TAssetPtr<class FOnMovementFinished__DelegateSignature>* M_PtrGetOnMovementFinished();
	void M_SetOnMovementFinished(const TAssetPtr<class FOnMovementFinished__DelegateSignature>& value);

	//bool	Sitting;		//Offset: 3392	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSitting() const;
	bool* M_PtrGetSitting();
	void M_SetSitting(const bool& value);

	//bool	GettingUp;		//Offset: 3393	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGettingUp() const;
	bool* M_PtrGetGettingUp();
	void M_SetGettingUp(const bool& value);

	//bool	Sleeping;		//Offset: 3394	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSleeping() const;
	bool* M_PtrGetSleeping();
	void M_SetSleeping(const bool& value);

	//TEnumAsByte<E_SleepingDirection>	SleepingDirection;		//Offset: 3395	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SleepingDirection> M_GetSleepingDirection() const;
	TEnumAsByte<E_SleepingDirection>* M_PtrGetSleepingDirection();
	void M_SetSleepingDirection(const TEnumAsByte<E_SleepingDirection>& value);

	//TAssetPtr<class FOnSitIdleEntered__DelegateSignature>	OnSitIdleEntered;		//Offset: 3400	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSitIdleEntered__DelegateSignature> M_GetOnSitIdleEntered() const;
	TAssetPtr<class FOnSitIdleEntered__DelegateSignature>* M_PtrGetOnSitIdleEntered();
	void M_SetOnSitIdleEntered(const TAssetPtr<class FOnSitIdleEntered__DelegateSignature>& value);

	//TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>	OnSleepIdleEntered;		//Offset: 3416	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSleepIdleEntered__DelegateSignature> M_GetOnSleepIdleEntered() const;
	TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>* M_PtrGetOnSleepIdleEntered();
	void M_SetOnSleepIdleEntered(const TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>& value);

	//bool	UseBedSleepingPose;		//Offset: 3432	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseBedSleepingPose() const;
	bool* M_PtrGetUseBedSleepingPose();
	void M_SetUseBedSleepingPose(const bool& value);

	//bool	CraftingMenuOpen;		//Offset: 3433	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCraftingMenuOpen() const;
	bool* M_PtrGetCraftingMenuOpen();
	void M_SetCraftingMenuOpen(const bool& value);

	//bool	IsCrafting;		//Offset: 3434	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCrafting() const;
	bool* M_PtrGetIsCrafting();
	void M_SetIsCrafting(const bool& value);

	//bool	InstantBuilding;		//Offset: 3435	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInstantBuilding() const;
	bool* M_PtrGetInstantBuilding();
	void M_SetInstantBuilding(const bool& value);

	//float	EndLoopSectionDuration;		//Offset: 3436	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEndLoopSectionDuration() const;
	float* M_PtrGetEndLoopSectionDuration();
	void M_SetEndLoopSectionDuration(const float& value);

	//float	CraftingTime;		//Offset: 3440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCraftingTime() const;
	float* M_PtrGetCraftingTime();
	void M_SetCraftingTime(const float& value);

	//bool	HadToolBeforeCrafting;		//Offset: 3444	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadToolBeforeCrafting() const;
	bool* M_PtrGetHadToolBeforeCrafting();
	void M_SetHadToolBeforeCrafting(const bool& value);

	//bool	SpawnedOffHandAnimItem;		//Offset: 3445	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnedOffHandAnimItem() const;
	bool* M_PtrGetSpawnedOffHandAnimItem();
	void M_SetSpawnedOffHandAnimItem(const bool& value);

	//bool	HadOffhandBeforeCrafting;		//Offset: 3446	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadOffhandBeforeCrafting() const;
	bool* M_PtrGetHadOffhandBeforeCrafting();
	void M_SetHadOffhandBeforeCrafting(const bool& value);

	//bool	ChoiceMenuOpen;		//Offset: 3447	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChoiceMenuOpen() const;
	bool* M_PtrGetChoiceMenuOpen();
	void M_SetChoiceMenuOpen(const bool& value);

	//class UAnimMontage*	CurrentPickingMontage;		//Offset: 3448	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetCurrentPickingMontage() const;
	class UAnimMontage** M_PtrGetCurrentPickingMontage();
	void M_SetCurrentPickingMontage(const class UAnimMontage*& value);

	//bool	bLockMovement;		//Offset: 3456	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetbLockMovement() const;
	bool* M_PtrGetbLockMovement();
	void M_SetbLockMovement(const bool& value);

	//float	MontageSectionStartTime;		//Offset: 3460	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMontageSectionStartTime() const;
	float* M_PtrGetMontageSectionStartTime();
	void M_SetMontageSectionStartTime(const float& value);

	//bool	BlockCraftingMenuMovement;		//Offset: 3464	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockCraftingMenuMovement() const;
	bool* M_PtrGetBlockCraftingMenuMovement();
	void M_SetBlockCraftingMenuMovement(const bool& value);

	//bool	BlockOffhandEquipping;		//Offset: 3465	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockOffhandEquipping() const;
	bool* M_PtrGetBlockOffhandEquipping();
	void M_SetBlockOffhandEquipping(const bool& value);

	//float	Oldness;		//Offset: 3468	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetOldness() const;
	float* M_PtrGetOldness();
	void M_SetOldness(const float& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 3472	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//class ABP_MasterHoldableItem_C*	LeftHandReference;		//Offset: 3480	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetLeftHandReference() const;
	class ABP_MasterHoldableItem_C** M_PtrGetLeftHandReference();
	void M_SetLeftHandReference(const class ABP_MasterHoldableItem_C*& value);

	//class ABP_MasterHoldableItem_C*	RightHandReference;		//Offset: 3488	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetRightHandReference() const;
	class ABP_MasterHoldableItem_C** M_PtrGetRightHandReference();
	void M_SetRightHandReference(const class ABP_MasterHoldableItem_C*& value);

	//float	FistFightingAlpha;		//Offset: 3496	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFistFightingAlpha() const;
	float* M_PtrGetFistFightingAlpha();
	void M_SetFistFightingAlpha(const float& value);

	//bool	IsSick;		//Offset: 3500	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSick() const;
	bool* M_PtrGetIsSick();
	void M_SetIsSick(const bool& value);

	//bool	IsInjured;		//Offset: 3501	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInjured() const;
	bool* M_PtrGetIsInjured();
	void M_SetIsInjured(const bool& value);

	//class UUI_Inspector_NPC_C*	UI_InspectorReference;		//Offset: 3504	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Inspector_NPC_C* M_GetUI_InspectorReference() const;
	class UUI_Inspector_NPC_C** M_PtrGetUI_InspectorReference();
	void M_SetUI_InspectorReference(const class UUI_Inspector_NPC_C*& value);

	//bool	IsInIdleState;		//Offset: 3512	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInIdleState() const;
	bool* M_PtrGetIsInIdleState();
	void M_SetIsInIdleState(const bool& value);

	//TEnumAsByte<E_IdleStates>	IdleState;		//Offset: 3513	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_IdleStates> M_GetIdleState() const;
	TEnumAsByte<E_IdleStates>* M_PtrGetIdleState();
	void M_SetIdleState(const TEnumAsByte<E_IdleStates>& value);

	//bool	CanTakeFallDamage;		//Offset: 3514	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanTakeFallDamage() const;
	bool* M_PtrGetCanTakeFallDamage();
	void M_SetCanTakeFallDamage(const bool& value);

	//struct FTimerHandle	FallingTimerHandle;		//Offset: 3520	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFallingTimerHandle() const;
	struct FTimerHandle* M_PtrGetFallingTimerHandle();
	void M_SetFallingTimerHandle(const struct FTimerHandle& value);

	//float	FallVelocity;		//Offset: 3528	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallVelocity() const;
	float* M_PtrGetFallVelocity();
	void M_SetFallVelocity(const float& value);

	//float	FallVelocityThreshold;		//Offset: 3532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallVelocityThreshold() const;
	float* M_PtrGetFallVelocityThreshold();
	void M_SetFallVelocityThreshold(const float& value);

	//bool	ShouldTakeFallDamage;		//Offset: 3536	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldTakeFallDamage() const;
	bool* M_PtrGetShouldTakeFallDamage();
	void M_SetShouldTakeFallDamage(const bool& value);

	//float	FallDamageToApply;		//Offset: 3540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallDamageToApply() const;
	float* M_PtrGetFallDamageToApply();
	void M_SetFallDamageToApply(const float& value);

	//unsigned char	StandingIdlePose;		//Offset: 3544	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetStandingIdlePose() const;
	unsigned char* M_PtrGetStandingIdlePose();
	void M_SetStandingIdlePose(const unsigned char& value);

	//unsigned char	TalkingIdlePose;		//Offset: 3545	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetTalkingIdlePose() const;
	unsigned char* M_PtrGetTalkingIdlePose();
	void M_SetTalkingIdlePose(const unsigned char& value);

	//unsigned char	LookingIdlePose;		//Offset: 3546	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetLookingIdlePose() const;
	unsigned char* M_PtrGetLookingIdlePose();
	void M_SetLookingIdlePose(const unsigned char& value);

	//unsigned char	OtherIdlePose;		//Offset: 3547	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetOtherIdlePose() const;
	unsigned char* M_PtrGetOtherIdlePose();
	void M_SetOtherIdlePose(const unsigned char& value);

	//TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>	OnIdleAnimEntered;		//Offset: 3552	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnIdleAnimEntered__DelegateSignature> M_GetOnIdleAnimEntered() const;
	TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>* M_PtrGetOnIdleAnimEntered();
	void M_SetOnIdleAnimEntered(const TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>& value);

	//TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>	OnIdleAnimFinished;		//Offset: 3568	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnIdleAnimFinished__DelegateSignature> M_GetOnIdleAnimFinished() const;
	TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>* M_PtrGetOnIdleAnimFinished();
	void M_SetOnIdleAnimFinished(const TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>& value);

	//unsigned char	WavingIdlePose;		//Offset: 3584	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetWavingIdlePose() const;
	unsigned char* M_PtrGetWavingIdlePose();
	void M_SetWavingIdlePose(const unsigned char& value);

	//bool	HasLanded;		//Offset: 3585	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasLanded() const;
	bool* M_PtrGetHasLanded();
	void M_SetHasLanded(const bool& value);

	//bool	IsInDialogue;		//Offset: 3586	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor
	bool M_GetIsInDialogue() const;
	bool* M_PtrGetIsInDialogue();
	void M_SetIsInDialogue(const bool& value);

	//TMap<TEnumAsByte<E_BodyParts>, int32_t>	BodyPartsIndexes;		//Offset: 3592	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_BodyParts>, int32_t> M_GetBodyPartsIndexes() const;
	TMap<TEnumAsByte<E_BodyParts>, int32_t>* M_PtrGetBodyPartsIndexes();
	void M_SetBodyPartsIndexes(const TMap<TEnumAsByte<E_BodyParts>, int32_t>& value);

	//struct FName	MeshesRowName;		//Offset: 3672	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetMeshesRowName() const;
	struct FName* M_PtrGetMeshesRowName();
	void M_SetMeshesRowName(const struct FName& value);

	//struct FVector	PhysicsLocation;		//Offset: 3680	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPhysicsLocation() const;
	struct FVector* M_PtrGetPhysicsLocation();
	void M_SetPhysicsLocation(const struct FVector& value);

	//float	PhysicsVectorLength;		//Offset: 3692	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPhysicsVectorLength() const;
	float* M_PtrGetPhysicsVectorLength();
	void M_SetPhysicsVectorLength(const float& value);

	//bool	IsWorking;		//Offset: 3696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsWorking() const;
	bool* M_PtrGetIsWorking();
	void M_SetIsWorking(const bool& value);

	//TEnumAsByte<E_BagMode>	BagMode;		//Offset: 3697	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BagMode> M_GetBagMode() const;
	TEnumAsByte<E_BagMode>* M_PtrGetBagMode();
	void M_SetBagMode(const TEnumAsByte<E_BagMode>& value);

	//bool	IsTakingBreak;		//Offset: 3698	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsTakingBreak() const;
	bool* M_PtrGetIsTakingBreak();
	void M_SetIsTakingBreak(const bool& value);

	//TAssetPtr<class FOnInteractionFinished__DelegateSignature>	OnInteractionFinished;		//Offset: 3704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInteractionFinished__DelegateSignature> M_GetOnInteractionFinished() const;
	TAssetPtr<class FOnInteractionFinished__DelegateSignature>* M_PtrGetOnInteractionFinished();
	void M_SetOnInteractionFinished(const TAssetPtr<class FOnInteractionFinished__DelegateSignature>& value);

	//int32_t	InteractionSlotIndex;		//Offset: 3720	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInteractionSlotIndex() const;
	int32_t* M_PtrGetInteractionSlotIndex();
	void M_SetInteractionSlotIndex(const int32_t& value);

	//bool	SpawnedMainHandAnimItem;		//Offset: 3724	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnedMainHandAnimItem() const;
	bool* M_PtrGetSpawnedMainHandAnimItem();
	void M_SetSpawnedMainHandAnimItem(const bool& value);

	//TEnumAsByte<E_BuildingModifications>	BuildingMode;		//Offset: 3725	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BuildingModifications> M_GetBuildingMode() const;
	TEnumAsByte<E_BuildingModifications>* M_PtrGetBuildingMode();
	void M_SetBuildingMode(const TEnumAsByte<E_BuildingModifications>& value);

	//TEnumAsByte<E_SitDownPosition>	SitDownPosition;		//Offset: 3726	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SitDownPosition> M_GetSitDownPosition() const;
	TEnumAsByte<E_SitDownPosition>* M_PtrGetSitDownPosition();
	void M_SetSitDownPosition(const TEnumAsByte<E_SitDownPosition>& value);

	//TAssetPtr<class FOnSitStarted__DelegateSignature>	OnSitStarted;		//Offset: 3728	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSitStarted__DelegateSignature> M_GetOnSitStarted() const;
	TAssetPtr<class FOnSitStarted__DelegateSignature>* M_PtrGetOnSitStarted();
	void M_SetOnSitStarted(const TAssetPtr<class FOnSitStarted__DelegateSignature>& value);

	//TAssetPtr<class FOnSitFinished__DelegateSignature>	OnSitFinished;		//Offset: 3744	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSitFinished__DelegateSignature> M_GetOnSitFinished() const;
	TAssetPtr<class FOnSitFinished__DelegateSignature>* M_PtrGetOnSitFinished();
	void M_SetOnSitFinished(const TAssetPtr<class FOnSitFinished__DelegateSignature>& value);

	//TAssetPtr<class FOnSleepStarted__DelegateSignature>	OnSleepStarted;		//Offset: 3760	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSleepStarted__DelegateSignature> M_GetOnSleepStarted() const;
	TAssetPtr<class FOnSleepStarted__DelegateSignature>* M_PtrGetOnSleepStarted();
	void M_SetOnSleepStarted(const TAssetPtr<class FOnSleepStarted__DelegateSignature>& value);

	//TAssetPtr<class FOnSleepFinished__DelegateSignature>	OnSleepFinished;		//Offset: 3776	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSleepFinished__DelegateSignature> M_GetOnSleepFinished() const;
	TAssetPtr<class FOnSleepFinished__DelegateSignature>* M_PtrGetOnSleepFinished();
	void M_SetOnSleepFinished(const TAssetPtr<class FOnSleepFinished__DelegateSignature>& value);

	//TAssetPtr<class FOnStartCrafting__DelegateSignature>	OnStartCrafting;		//Offset: 3792	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStartCrafting__DelegateSignature> M_GetOnStartCrafting() const;
	TAssetPtr<class FOnStartCrafting__DelegateSignature>* M_PtrGetOnStartCrafting();
	void M_SetOnStartCrafting(const TAssetPtr<class FOnStartCrafting__DelegateSignature>& value);

	//TAssetPtr<class FOnWaitForCrafting__DelegateSignature>	OnWaitForCrafting;		//Offset: 3808	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnWaitForCrafting__DelegateSignature> M_GetOnWaitForCrafting() const;
	TAssetPtr<class FOnWaitForCrafting__DelegateSignature>* M_PtrGetOnWaitForCrafting();
	void M_SetOnWaitForCrafting(const TAssetPtr<class FOnWaitForCrafting__DelegateSignature>& value);

	//TAssetPtr<class FOnEndCrafting__DelegateSignature>	OnEndCrafting;		//Offset: 3824	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnEndCrafting__DelegateSignature> M_GetOnEndCrafting() const;
	TAssetPtr<class FOnEndCrafting__DelegateSignature>* M_PtrGetOnEndCrafting();
	void M_SetOnEndCrafting(const TAssetPtr<class FOnEndCrafting__DelegateSignature>& value);

	//TAssetPtr<class FOnStoppingCrafting__DelegateSignature>	OnStoppingCrafting;		//Offset: 3840	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStoppingCrafting__DelegateSignature> M_GetOnStoppingCrafting() const;
	TAssetPtr<class FOnStoppingCrafting__DelegateSignature>* M_PtrGetOnStoppingCrafting();
	void M_SetOnStoppingCrafting(const TAssetPtr<class FOnStoppingCrafting__DelegateSignature>& value);

	//bool	IsWaitingForCrafting;		//Offset: 3856	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsWaitingForCrafting() const;
	bool* M_PtrGetIsWaitingForCrafting();
	void M_SetIsWaitingForCrafting(const bool& value);

	//class AActor*	InteractedActor;		//Offset: 3864	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetInteractedActor() const;
	class AActor** M_PtrGetInteractedActor();
	void M_SetInteractedActor(const class AActor*& value);

	//struct FLinearColor	HairColor;		//Offset: 3872	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FLinearColor M_GetHairColor() const;
	struct FLinearColor* M_PtrGetHairColor();
	void M_SetHairColor(const struct FLinearColor& value);

	//float	IKFPSLimit;		//Offset: 3888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIKFPSLimit() const;
	float* M_PtrGetIKFPSLimit();
	void M_SetIKFPSLimit(const float& value);

	//float	IKFPSRestore;		//Offset: 3892	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIKFPSRestore() const;
	float* M_PtrGetIKFPSRestore();
	void M_SetIKFPSRestore(const float& value);

	//TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>	OnCharacterDeactivated;		//Offset: 3896	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCharacterDeactivated__DelegateSignature> M_GetOnCharacterDeactivated() const;
	TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>* M_PtrGetOnCharacterDeactivated();
	void M_SetOnCharacterDeactivated(const TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>& value);

	//TAssetPtr<class FOnCharacterActivated__DelegateSignature>	OnCharacterActivated;		//Offset: 3912	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCharacterActivated__DelegateSignature> M_GetOnCharacterActivated() const;
	TAssetPtr<class FOnCharacterActivated__DelegateSignature>* M_PtrGetOnCharacterActivated();
	void M_SetOnCharacterActivated(const TAssetPtr<class FOnCharacterActivated__DelegateSignature>& value);

	//float	TargetLerpFOV;		//Offset: 3928	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTargetLerpFOV() const;
	float* M_PtrGetTargetLerpFOV();
	void M_SetTargetLerpFOV(const float& value);

	//float	StartingLerpFOV;		//Offset: 3932	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStartingLerpFOV() const;
	float* M_PtrGetStartingLerpFOV();
	void M_SetStartingLerpFOV(const float& value);

	//int32_t	HeadID;		//Offset: 3936	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHeadID() const;
	int32_t* M_PtrGetHeadID();
	void M_SetHeadID(const int32_t& value);

	//int32_t	HairID;		//Offset: 3940	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHairID() const;
	int32_t* M_PtrGetHairID();
	void M_SetHairID(const int32_t& value);

	//TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	PresetsIDs;		//Offset: 3944	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> M_GetPresetsIDs() const;
	TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>* M_PtrGetPresetsIDs();
	void M_SetPresetsIDs(const TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>& value);

	//bool	IsCraftingClosed;		//Offset: 4024	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCraftingClosed() const;
	bool* M_PtrGetIsCraftingClosed();
	void M_SetIsCraftingClosed(const bool& value);

	//bool	PendingKill;		//Offset: 4025	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPendingKill() const;
	bool* M_PtrGetPendingKill();
	void M_SetPendingKill(const bool& value);

	//bool	CaughtPrey;		//Offset: 4026	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCaughtPrey() const;
	bool* M_PtrGetCaughtPrey();
	void M_SetCaughtPrey(const bool& value);

	//bool	Blinking_;		//Offset: 4027	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlinking_() const;
	bool* M_PtrGetBlinking_();
	void M_SetBlinking_(const bool& value);

	//bool	EyesClosed;		//Offset: 4028	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEyesClosed() const;
	bool* M_PtrGetEyesClosed();
	void M_SetEyesClosed(const bool& value);

	//bool	EyesMovement;		//Offset: 4029	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEyesMovement() const;
	bool* M_PtrGetEyesMovement();
	void M_SetEyesMovement(const bool& value);

	//float	BodyMovementAlpha;		//Offset: 4032	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBodyMovementAlpha() const;
	float* M_PtrGetBodyMovementAlpha();
	void M_SetBodyMovementAlpha(const float& value);

	//float	MountMovementType;		//Offset: 4036	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountMovementType() const;
	float* M_PtrGetMountMovementType();
	void M_SetMountMovementType(const float& value);

	//float	MountTurnDirection;		//Offset: 4040	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountTurnDirection() const;
	float* M_PtrGetMountTurnDirection();
	void M_SetMountTurnDirection(const float& value);

	//bool	IgnoreMountingAnimation;		//Offset: 4044	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreMountingAnimation() const;
	bool* M_PtrGetIgnoreMountingAnimation();
	void M_SetIgnoreMountingAnimation(const bool& value);

	//bool	IgnoreDismountingAnimation;		//Offset: 4045	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreDismountingAnimation() const;
	bool* M_PtrGetIgnoreDismountingAnimation();
	void M_SetIgnoreDismountingAnimation(const bool& value);

	//struct FName	CurrentBasePresetID;		//Offset: 4048	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetCurrentBasePresetID() const;
	struct FName* M_PtrGetCurrentBasePresetID();
	void M_SetCurrentBasePresetID(const struct FName& value);

	//struct FName	CurrentProfessionPresetID;		//Offset: 4056	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetCurrentProfessionPresetID() const;
	struct FName* M_PtrGetCurrentProfessionPresetID();
	void M_SetCurrentProfessionPresetID(const struct FName& value);

	//float	DrunkForwardAxis;		//Offset: 4064	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkForwardAxis() const;
	float* M_PtrGetDrunkForwardAxis();
	void M_SetDrunkForwardAxis(const float& value);

	//float	DrunkRightAxis;		//Offset: 4068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkRightAxis() const;
	float* M_PtrGetDrunkRightAxis();
	void M_SetDrunkRightAxis(const float& value);

	//float	DrunkForwardTarget;		//Offset: 4072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkForwardTarget() const;
	float* M_PtrGetDrunkForwardTarget();
	void M_SetDrunkForwardTarget(const float& value);

	//float	DrunkRightTarget;		//Offset: 4076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkRightTarget() const;
	float* M_PtrGetDrunkRightTarget();
	void M_SetDrunkRightTarget(const float& value);

	//bool	StartedCrafting;		//Offset: 4080	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStartedCrafting() const;
	bool* M_PtrGetStartedCrafting();
	void M_SetStartedCrafting(const bool& value);

	//float	DrunkForwardDelayDuration;		//Offset: 4084	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkForwardDelayDuration() const;
	float* M_PtrGetDrunkForwardDelayDuration();
	void M_SetDrunkForwardDelayDuration(const float& value);

	//float	DrunkRightDelayDuration;		//Offset: 4088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkRightDelayDuration() const;
	float* M_PtrGetDrunkRightDelayDuration();
	void M_SetDrunkRightDelayDuration(const float& value);

	//TEnumAsByte<E_AnimalType>	MountAnimalType;		//Offset: 4092	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimalType> M_GetMountAnimalType() const;
	TEnumAsByte<E_AnimalType>* M_PtrGetMountAnimalType();
	void M_SetMountAnimalType(const TEnumAsByte<E_AnimalType>& value);

	//TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>	OnCraftingAnimEnd;		//Offset: 4096	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature> M_GetOnCraftingAnimEnd() const;
	TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>* M_PtrGetOnCraftingAnimEnd();
	void M_SetOnCraftingAnimEnd(const TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>& value);

	//bool	Blocking;		//Offset: 4112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlocking() const;
	bool* M_PtrGetBlocking();
	void M_SetBlocking(const bool& value);

	//struct FHitResult	InteractableHit;		//Offset: 4116	Size: 136	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
	struct FHitResult M_GetInteractableHit() const;
	struct FHitResult* M_PtrGetInteractableHit();
	void M_SetInteractableHit(const struct FHitResult& value);

	//struct FRotator	MountRotation;		//Offset: 4252	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetMountRotation() const;
	struct FRotator* M_PtrGetMountRotation();
	void M_SetMountRotation(const struct FRotator& value);

	//TArray<class AActor*>	ImpaledItems;		//Offset: 4264	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetImpaledItems() const;
	TArray<class AActor*>* M_PtrGetImpaledItems();
	void M_SetImpaledItems(const TArray<class AActor*>& value);

	//TEnumAsByte<E_SittingType>	SittingType;		//Offset: 4280	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SittingType> M_GetSittingType() const;
	TEnumAsByte<E_SittingType>* M_PtrGetSittingType();
	void M_SetSittingType(const TEnumAsByte<E_SittingType>& value);

	//bool	HadToolBeforeDialogue;		//Offset: 4281	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadToolBeforeDialogue() const;
	bool* M_PtrGetHadToolBeforeDialogue();
	void M_SetHadToolBeforeDialogue(const bool& value);

	//bool	Underwater;		//Offset: 4282	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnderwater() const;
	bool* M_PtrGetUnderwater();
	void M_SetUnderwater(const bool& value);

	//bool	IsInTPPCombatState;		//Offset: 4283	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInTPPCombatState() const;
	bool* M_PtrGetIsInTPPCombatState();
	void M_SetIsInTPPCombatState(const bool& value);

	//float	EnemyDamageMultiplier;		//Offset: 4284	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEnemyDamageMultiplier() const;
	float* M_PtrGetEnemyDamageMultiplier();
	void M_SetEnemyDamageMultiplier(const float& value);

	//TAssetPtr<class FOnStartGettingUp__DelegateSignature>	OnStartGettingUp;		//Offset: 4288	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStartGettingUp__DelegateSignature> M_GetOnStartGettingUp() const;
	TAssetPtr<class FOnStartGettingUp__DelegateSignature>* M_PtrGetOnStartGettingUp();
	void M_SetOnStartGettingUp(const TAssetPtr<class FOnStartGettingUp__DelegateSignature>& value);

	//TAssetPtr<class FOnViewmodeChanged__DelegateSignature>	OnViewmodeChanged;		//Offset: 4304	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnViewmodeChanged__DelegateSignature> M_GetOnViewmodeChanged() const;
	TAssetPtr<class FOnViewmodeChanged__DelegateSignature>* M_PtrGetOnViewmodeChanged();
	void M_SetOnViewmodeChanged(const TAssetPtr<class FOnViewmodeChanged__DelegateSignature>& value);

	//bool	WantsToDespawn;		//Offset: 4320	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWantsToDespawn() const;
	bool* M_PtrGetWantsToDespawn();
	void M_SetWantsToDespawn(const bool& value);

	//float	WorkPlayRate;		//Offset: 4324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWorkPlayRate() const;
	float* M_PtrGetWorkPlayRate();
	void M_SetWorkPlayRate(const float& value);

	//float	HatsValue;		//Offset: 4328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHatsValue() const;
	float* M_PtrGetHatsValue();
	void M_SetHatsValue(const float& value);

	//struct FST_NPCsPresets	CachedPreset;		//Offset: 4336	Size: 1424	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_NPCsPresets M_GetCachedPreset() const;
	struct FST_NPCsPresets* M_PtrGetCachedPreset();
	void M_SetCachedPreset(const struct FST_NPCsPresets& value);

	//float	MinRandomSpeedMultiplier;		//Offset: 5760	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinRandomSpeedMultiplier() const;
	float* M_PtrGetMinRandomSpeedMultiplier();
	void M_SetMinRandomSpeedMultiplier(const float& value);

	//float	MaxRandomSpeedMultiplier;		//Offset: 5764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMaxRandomSpeedMultiplier() const;
	float* M_PtrGetMaxRandomSpeedMultiplier();
	void M_SetMaxRandomSpeedMultiplier(const float& value);

	//float	FallDamageMultiplier;		//Offset: 5768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallDamageMultiplier() const;
	float* M_PtrGetFallDamageMultiplier();
	void M_SetFallDamageMultiplier(const float& value);

	//float	FallStartTime;		//Offset: 5772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallStartTime() const;
	float* M_PtrGetFallStartTime();
	void M_SetFallStartTime(const float& value);

	//bool	IsRagdollActivationLocked;		//Offset: 5776	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollActivationLocked() const;
	bool* M_PtrGetIsRagdollActivationLocked();
	void M_SetIsRagdollActivationLocked(const bool& value);

	//struct FVector	InitialRagdollVelocity;		//Offset: 5780	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetInitialRagdollVelocity() const;
	struct FVector* M_PtrGetInitialRagdollVelocity();
	void M_SetInitialRagdollVelocity(const struct FVector& value);

	//bool	ShouldUpdateRateOptimizationsBeEnabled;		//Offset: 5792	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldUpdateRateOptimizationsBeEnabled() const;
	bool* M_PtrGetShouldUpdateRateOptimizationsBeEnabled();
	void M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value);

	//bool	IsPickingObject;		//Offset: 5793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsPickingObject() const;
	bool* M_PtrGetIsPickingObject();
	void M_SetIsPickingObject(const bool& value);

	//bool	CanPush;		//Offset: 5794	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanPush() const;
	bool* M_PtrGetCanPush();
	void M_SetCanPush(const bool& value);

	//float	HairDamping;		//Offset: 5796	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHairDamping() const;
	float* M_PtrGetHairDamping();
	void M_SetHairDamping(const float& value);

	//float	HairSpring;		//Offset: 5800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHairSpring() const;
	float* M_PtrGetHairSpring();
	void M_SetHairSpring(const float& value);

	//bool	IsHairMovementEnabled;		//Offset: 5804	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsHairMovementEnabled() const;
	bool* M_PtrGetIsHairMovementEnabled();
	void M_SetIsHairMovementEnabled(const bool& value);

	//TArray<bool>	SimulatedBodiesBeforeRagdoll;		//Offset: 5808	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<bool> M_GetSimulatedBodiesBeforeRagdoll() const;
	TArray<bool>* M_PtrGetSimulatedBodiesBeforeRagdoll();
	void M_SetSimulatedBodiesBeforeRagdoll(const TArray<bool>& value);

	//bool	IsRagdollOnHitEnabled;		//Offset: 5824	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollOnHitEnabled() const;
	bool* M_PtrGetIsRagdollOnHitEnabled();
	void M_SetIsRagdollOnHitEnabled(const bool& value);

	//float	HitPhysicsBlendWeight;		//Offset: 5828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitPhysicsBlendWeight() const;
	float* M_PtrGetHitPhysicsBlendWeight();
	void M_SetHitPhysicsBlendWeight(const float& value);

	//class UPhysicsAsset*	InactiveInfantPhysicsAsset;		//Offset: 5832	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveInfantPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveInfantPhysicsAsset();
	void M_SetInactiveInfantPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveToddlerPhysicsAsset;		//Offset: 5840	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveToddlerPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveToddlerPhysicsAsset();
	void M_SetInactiveToddlerPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveGirlPhysicsAsset;		//Offset: 5848	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveGirlPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveGirlPhysicsAsset();
	void M_SetInactiveGirlPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveBoyPhysicsAsset;		//Offset: 5856	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveBoyPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveBoyPhysicsAsset();
	void M_SetInactiveBoyPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveFemalePhysicsAsset;		//Offset: 5864	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveFemalePhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveFemalePhysicsAsset();
	void M_SetInactiveFemalePhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveMalePhysicsAsset;		//Offset: 5872	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveMalePhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveMalePhysicsAsset();
	void M_SetInactiveMalePhysicsAsset(const class UPhysicsAsset*& value);

	//bool	ImplementsPlayerInterface;		//Offset: 5880	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetImplementsPlayerInterface() const;
	bool* M_PtrGetImplementsPlayerInterface();
	void M_SetImplementsPlayerInterface(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C");
		return ptr;
	}

#pragma region Functions
	void CameraFadeFinished__DelegateSignature();

	void OnMovementFinished__DelegateSignature();

	void OnSitIdleEntered__DelegateSignature();

	void OnSleepIdleEntered__DelegateSignature();

	void OnIdleAnimEntered__DelegateSignature();

	void OnIdleAnimFinished__DelegateSignature();

	void OnInteractionFinished__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);

	void OnSitStarted__DelegateSignature();

	void OnSitFinished__DelegateSignature();

	void OnSleepStarted__DelegateSignature();

	void OnSleepFinished__DelegateSignature();

	void OnStartCrafting__DelegateSignature();

	void OnEndCrafting__DelegateSignature();

	void OnStoppingCrafting__DelegateSignature();

	void OnCharacterDeactivated__DelegateSignature();

	void OnCharacterActivated__DelegateSignature();

	void OnWaitForCrafting__DelegateSignature();

	void OnCraftingAnimEnd__DelegateSignature();

	void OnStartGettingUp__DelegateSignature();

	void OnViewmodeChanged__DelegateSignature(TEnumAsByte<E_ViewMode> CurrentViewmode);

	void ExecuteUbergraph_BP_BaseCharacter(int32_t EntryPoint);

	void OnCombatStarted();

	void OnCombatEnded();

	void OnCombatCheck();

	void OnCombatCauserStarted();

	void OnCombatCauserEnded();

	void Update_Camera_Event(class UCurveFloat* LerpCurve);

	void StopCameraFOVLerp();

	void PlayFromStartCameraFOVLerp();

	void PlayCameraFOVLerp();

	void ReverseCameraFOVLerp();

	void ReverseFromEndCameraFOVLerp();

	void SetNewTimeCameraFOVLerp(float NewTime);

	void FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV);

	void OnGetUp();

	void OnSit();

	void OnGoToSleep();

	void OnWakeUp();

	void OnSitIdle();

	void OnSleepIdle();

	void StartCrafting(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime);

	void EndCrafting(bool CancelAnimation);

	void FistFighting();

	void StartFistTL();

	void ReverseFistTL();

	void FallingEvent();

	void StartFalling();

	void EndFalling();

	void OnIdleAnimStart();

	void OnIdleAnimEnd();

	void Blink();

	void StartBlinking();

	void BlinkMorph(float Value);

	void CloseEyes();

	void OpenEyes();

	void Stop_Blinking();

	void WaitCrafting();

	void CraftingClosed(class ABP_BaseCharacter_C* BaseCharacter);

	void OnCraftingAnimEnded();

	void ShouldHolster();

	void TPPCombatState();

	void ResetTPPCombatState();

	void OnGettingUp();

	void Drunk();

	void Set_CrouchingSpeed_Event(float crouchingSpeed);

	void Set_SprintingSpeed_Event(float sprintingSpeed);

	void Set_RunningSpeed_Event(float runningSpeed);

	void Set_WalkingSpeed_Event(float WalkingSpeed);

	void Set_ALS_ViewMode_Event(TEnumAsByte<E_ViewMode> ALS_ViewMode);

	void Set_ALS_Aiming_Event(bool ALS_Aiming);

	void Set_ALS_RotationMode_Event(ECharacterRotationMode New_ALS_RotationMode);

	void Set_ALS_Stance_Event(ECharacterStance New_ALS_Stance);

	void Set_ALS_Gait_Event(ECharacterGait New_ALS_Gait);

	void Set_ALS_MovementMode_Event(ECharacterMovementMode New_ALS_MovementMode, bool Force);

	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void Set_IdleState_Event(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState);

	void Set_WorkState_Event(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim);

	void Set_BreakState_Event(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops);

	void Set_ForceStanding_Event();

	void Set_IdlePose_Event(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose);

	void Set_CaughtPrey_Event(bool CaughtPrey);

	void SetEnableIK_Event(bool IK_Enabled);

	void SetToolType_Event(TEnumAsByte<E_Tools> ToolType);

	void SetBlocking_Event(bool Blocking);

	void Set_MovementInput_Event___SERVER__(struct FVector movementInput);

	void Set_LookingRotation_Event___SERVER__(struct FRotator lookingRotation);

	void Set_CharacterRotation_Event___SERVER__(struct FRotator TargetRotation, struct FRotator CharacterRotation);

	void Play_Networked_Montage___SERVER__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);

	void Play_Networked_Montage___MULTICAST__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);

	void Set_ALS_Aiming_Event___MULTICAST__(bool ALS_Aiming);

	void Set_ALS_Aiming_Event___SERVER__(bool ALS_Aiming);

	void Set_ALS_RotationMode_Event___MULTICAST__(ECharacterRotationMode ALS_RotationMode);

	void Set_ALS_RotationMode_Event___SERVER__(ECharacterRotationMode ALS_RotationMode);

	void Set_ALS_Gait_Event___MULTICAST__(ECharacterGait ALS_Gait);

	void Set_ALS_Gait_Event___SERVER__(ECharacterGait ALS_Gait);

	void UpdateRagdoll___SERVER__(struct FVector RagdollVelocity, struct FVector RagdollLocation, struct FRotator ActorRotation, struct FVector actorLocation);

	void UpdateRagdoll___MULTICAST__(struct FVector actorLocation);

	void Un_Ragdoll___SERVER__(bool OnGround);

	void To_Ragdoll___SERVER__(struct FVector InitialRagdollVelocity);

	void AddCharacterRotation_BPI(struct FRotator AddAmount);

	void Set_ALS_Stance_BPI(ECharacterStance ALS_Stance);

	void Set_ALS_Gait_BPI(ECharacterGait ALS_Gait);

	void Set_ALS_MovementMode_BPI(ECharacterMovementMode ALS_MovementMode, bool Force);

	void StartAiming();

	void StopAiming();

	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void AnimNotify_DespawnAnimItem(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn);

	void AnimNotify_SpawnAnimItem(TAssetPtr<class UClass> ItemClass, bool IsOffHand);

	void AnimNotify_HolsterWeapon();

	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState);

	void ResetCameraPitch();

	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim);

	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops);

	void ForceStanding();

	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject> ObjectToNotify, struct FName NotifyName);

	void Knockback(struct FVector KnockbackDirection, float KnockbackStrength);

	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose);

	void OnDeath();

	void Set_Caught_Prey_BPI(bool CaughtPrey);

	void PlayMountStopAnimation(int32_t AnimIndex);

	void PlayMountSpecial();

	void UpdateIKAlpha(float Alpha, bool Enabled);

	void StartCombat_BPI(class AActor* CombatCauser);

	void EndCombat_BPI(class AActor* CombatCauser);

	void SetEnableIK_BPI(bool IK_Enabled);

	void SetMountAnimalType_BPI(TEnumAsByte<E_AnimalType> MountAnimalType);

	void UpdateCraftingNumbers_BPI(int32_t ToCraft, int32_t CurrentCraft, float CraftTime);

	void SetToolType_BPI(TEnumAsByte<E_Tools> ToolType);

	void SetBlocking_BPI(bool Blocking);

	void AddImpaledItem(class AActor* ImpaledItem);

	void RemoveImpaledItem(class AActor* ImpaledItem);

	void PoisonCharacter(float Poison);

	void StopHolsterAnimation(float BlendOutTime);

	void SetCharacterMovementActive(bool IsActive, bool IsIKActive);

	void ForceEndCombat_BPI();

	void IncreaseTechnology_BPI(TEnumAsByte<E_TechnologyTypes> TechnologyType, float Value);

	void CharacterAddSkills_BPI(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedbyGameSettings);

	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);

	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);

	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);

	void OnLanded(const struct FHitResult& Hit);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void To_Ragdoll___MULTICAST__(struct FVector InitialRagdollVelocity);

	void Un_Ragdoll___MULTICAST__(bool OnGround);

	void To_Ragdoll_Event(struct FVector InitialRagdollVelocity);

	void Un_Ragdoll_Event(bool SkipAnim);

	void Ragdoll(struct FVector InitialRagdollVelocity);

	void ManageRagdoll();

	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewHairMesh, const TArray<class USkeletalMesh*>& NewBodyMeshes, class UObject* NewClass, bool UpdateOnly);

	void SetMeshCollisionKeepTime_BPI(float Keep_Time);

	void SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type);

	void Hit(struct FVector HitLocation, struct FVector HitForce, struct FName HitBoneName);

	void PresetLoad(TArray<struct FST_NPCItemColors>* Array, class UTexture2D* Tattoo, bool Async, bool DelayLoad);

	void SetIsInWater(bool InWater, float Intensity);

	void ChangeMontageNextSection(struct FName SectionNameToChange, struct FName NextSection, class UAnimMontage* Montage);

	void ShowInspectorUI();

	void BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature();

	void SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings);

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void SetMontageType(TEnumAsByte<E_AnimInteractionTypes> Montage_Type);

	void CancelAnimationLoops();

	void SelectPickUpAnimation(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void ChangePlayerInput(bool DisablePlayerInput);

	void PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void HoldableHitAction(struct FST_MontagesSettingsArray Action_Montage_Settings, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage);

	void HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID);

	void Limit_Camera_Rotation(struct FST_CameraRotationLimits CameraRotationLimits);

	void Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera);

	void Stop_Character_Movement(bool bStopMovementInput);

	void Swoon();

	void FinishStageInteraction();

	void StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish);

	void Change_Camera(bool bUsePlayerCamera, float BlendTime);

	void Stop_Character_Rotation(bool StopRotationInput);

	void SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction);

	void ReceiveBeginPlay();

	void GetMountMovementMode_BPI(EAnimalMovementMode MountMovementMode);

	void SetProfessionData(struct FST_Profession ProfessionData);

	void AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void WaitForCrafting();

	void AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void PlayCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime, bool CancelAnimation);

	void AnimNotify_StopMovement(bool bStopMovementInput);

	void AnimNotify_StopRotation(bool StopRotationInput);

	void PlayerLookAt(class AActor* Target, struct FVector TargetLocation);

	void PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);

	void PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);

	void OverrideCanPerfromHitAction(bool CanPerfromHitAction);

	void SetStrengthAlpha(float Alpha);

	void Set_Range_Strength(float Strength);

	void OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void AnimNotify_StopSnappingIK();

	void AnimNotify_StartSnappingIK();

	void ChangeAnimLoopState(bool IsLooping);

	void AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, struct FName LeftHandSocketName, struct FName RightHandSocketName);

	void Set_RF_BPI(bool RF);

	void Set_CrouchingSpeed_BPI(float crouchingSpeed);

	void Set_SprintingSpeed_BPI(float sprintingSpeed);

	void Set_RunningSpeed_BPI(float runningSpeed);

	void Set_WalkingSpeed_BPI(float WalkingSpeed);

	void ShowTraces_BPI(bool ShowTraces);

	void Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode> ViewMode);

	void SavePoseSnapshot_BPI(struct FName PoseName);

	void Play_GetUp_Anim_BPI(bool FaceDown);

	void Set_ALS_Aiming_BPI(bool Aiming);

	void AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState> IdleEntryState);

	void AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight);

	void AnimNotify_Pivot_BPI(struct FST_PivotParams PivotParams);

	void Set_ALS_RotationMode_BPI(ECharacterRotationMode ALS_RotationMode_BPI);

	void RotateYaw(float Angle);

	void RotatePitch(float Angle);

	void DetachItem();

	void SetRotateMode(bool RotateLeft, bool RotateRight);

	void StopAttackFunction();

	void StartAttackFunction(bool Timer, struct FName Socket);

	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);

	void IsLookedAt(bool Active);

	void PerformActorInteraction();

	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, struct FST_Chunks ChunkData);

	void SetOccupied(class APawn* Character);

	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractInput(bool KeyDown);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer);

	void OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673(class UObject* Loaded);

	void OnLoaded_AF7514B049C1F96364328B9F425197C1(class UObject* Loaded);

	void OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2(class UObject* Loaded);

	void FistFightingTimeline__UpdateFunc();

	void FistFightingTimeline__FinishedFunc();

	void Blinking__UpdateFunc();

	void Blinking__FinishedFunc();

	void EyesStateTL__UpdateFunc();

	void EyesStateTL__FinishedFunc();

	void UserConstructionScript();

	void On_PawnMovementMode_Changed(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMove);

	void On_ALS_MovementMode_Changed();

	void On_ALS_Gait_Changed();

	void On_ALS_Stance_Changed();

	void On_ALS_RotationMode_Changed();

	void UpdateALS_CharacterMovementSettings();

	void ChooseMaxWalkSpeed(float* MaxWalkSpeed);

	void ChooseMaxAcceleration(float* MaxWalkSpeed);

	void ChooseBrakingDeceleration(float* MaxWalkSpeed);

	void ChooseGroundFriction(float* MaxWalkSpeed);

	void AddCharacterRotation(struct FRotator AddAmount);

	void LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation);

	float CalculateRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate);

	void ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings);

	void LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm);

	void On_ALS_Aiming_Changed();

	void LimitRotation(float AimYawLimit, float interpSpeed);

	void DebugMode();

	void On_ALS_ViewMode_Changed();

	void CustomAcceleration();

	void CanSprint(bool* CanSprint);

	void CalculateActorLocationAndRotationInRagdoll(struct FRotator RagdollRotation, struct FVector RagdollLocation, struct FRotator* ActorRotation, struct FVector* actorLocation);

	void PlayerMovementInput(bool Is_Forward_Axis);

	void CalculateEncumberedSpeed();

	void SetRandomSkinTone();

	void UpdateHoldableItemActionSpeed();

	void InitializeMaterials();

	void ClearMaterials();

	void GetDynamicMaterialIndex(class UMeshComponent* Mesh, int32_t* Index);

	void GetDynamicMaterialStruct(class UMeshComponent* Mesh, struct FST_MeshDynamicMaterials* Array_Element);

	void GetDynamicMaterialsArray(class UMeshComponent* Mesh, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialReferences);

	void ResetMeshMaterials(class UMeshComponent* Mesh);

	void CreateNewMeshMaterials(class UMeshComponent* Mesh, struct FST_ColorTable Dye);

	void Update_Range_Strength(float Strength);

	void SetCanPerfromHitAction(bool CanPerfromHitAction);

	void Attach_Components();

	void SetCurrentCameraFOV(float InFieldOfView);

	void UpdateStrengthAlpha(float Alpha);

	void Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem);

	float GetMouseLeftRightAxisInput();

	float GetMouseUpDownAxisInput();

	void EquipAnimHoldable(class ABP_MasterHoldableItem_C* ItemClass, bool IsOffHand);

	void DespawnAnimHoldable(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn);

	bool IsMontagePlaying(class UAnimMontage* Montage);

	void SetOldness(float Value);

	void UpdateOldness(float Value);

	void OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership);

	void DestroyHeldItem();

	void DestroyOffHandItem();

	bool CheckIfUsingHands();

	void SpawnHeldItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);

	void SpawnOffHandItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);

	void SpawnHands();

	void SetIsSick(bool IsSick);

	void SetIsInjured(bool IsInjured);

	void OnAfterPoseChanged(TEnumAsByte<E_AfterIdlePose> AfterIdlePose);

	void CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedToolType, bool* Success);

	void OnSeasonChanged();

	void OnCharacterTypeChanged();

	void OnDialogueStarted();

	void OnDialogueEnded();

	void GetNPCDataToSave(struct FST_SAVE_NPC* NPCData);

	void SetNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion);

	void Destroy_NPC();

	void UpdateCharacterSpeedByCharacterType();

	void VisibilityCheck(struct FVector StartVector, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class AActor* actorToIgnore, bool* Observed);

	void SetEarMorph(float Value);

	void GetCrouchingSpeed(float* crouchingSpeed);

	void On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation);

	void OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation);

	void CheckToSwap(class ABP_MasterBuilding_C* New_House, bool* CanSwap, class ABP_MasterBuilding_C** House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C** House2, TArray<class ABP_BaseCharacter_C*>* Family2);

	void OnDestroyFurniture();

	void UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);

	void BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);

	void SwapHouses(class ABP_MasterBuilding_C* House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C* House2, TArray<class ABP_BaseCharacter_C*>* Family2, bool* Succeed);

	void OnDayChanged();

	void OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture);

	void SetRandomHairColor();

	void EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedTool, bool* Success);

	void GetCurrentCameraFOV(float* FieldOfView);

	void SetMeshesFromPreset(TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame, bool DelayPresetLoad);

	void GetPresetForProfession(TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets* Preset);

	void CombinePresets(TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets BasePreset, struct FName* PresetID, struct FST_NPCsMeshesDyes* Meshes);

	void InitializeMeshFromPreset(class USkeletalMeshComponent* SkeletalComponent, struct FST_NPCItemColors Mesh, class UTexture2D* Tattoo);

	void GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen);

	void GetHeadAndHair(class USkeletalMesh** head, class USkeletalMesh** Hair);

	void InitializeComponentMaterials(class USkeletalMeshComponent* SkeletalComponent, class UTexture2D* Tattoo);

	void UpdateDyeColor(struct FST_ColorTable Dye, class UMaterialInstanceDynamic* Material);

	void UpdateStitchColor(struct FST_ColorTable Dye, class UMaterialInstanceDynamic* Material);

	class UObject* GetAnimClassForNPC();

	void UpdateDefaultFov(float InFieldOfView);

	void SnapToSlot(int32_t SlotIndex, class AActor* InteractedActor, struct FVector LocationOffset, bool IsFinalTransform, bool* Success);

	bool IsWearingCorrectPreset(bool CheckProfession);

	void UpdateDrunkMovement();

	void OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation);

	void OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera);

	void ChangeName(struct FName NewRowName, struct FText NewName, bool ChangeSex);

	void HolsterToolsForDialogue(bool Hide);

	void OnStartFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation);

	void OnEndFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation);

	void On_MountMovementMode_Changed(EAnimalMovementMode NewMountMovementMode);

	void CalculateWorkPlayRateByMoodAndSkill(TEnumAsByte<E_Profession> Profession);

	void CacheProfessionPreset();

	void ClearCachedProfessionPreset();

	void AddSkillsToApprentices(TEnumAsByte<E_Skills> Skill, float Value, TEnumAsByte<E_Profession> Profession);

	void MeshSettings();

	bool IsRagdolling();

	void UpdateHairMovement();

	void CreateMergedMeshMaterials(class USkeletalMeshComponent* SkeletalMeshComp, const TMap<class UMaterialInterface*, struct FST_NPCItemColors>& MaterialData, class UTexture2D* Tattoo);

	class UPhysicsAsset* ChooseInactivePhysicsAsset();

	void Get_ALS_Stance_BPI(ECharacterStance* stance);

	void GetIsAnyMontageFromMapPlaying(bool* Return_Value);

	void GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage);

	void GetProfession(TEnumAsByte<E_Profession>* Profession);

	void GetHeadTransform(struct FTransform* HeadTransform);

	void PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, float* Duration, float* TakeOutDuration);

	void GetBaseCharacterWorldLocation(struct FVector* Location);

	void GetIsInDialogue_BPI(bool* IsInDialogue);

	void GetProfessionData(struct FST_Profession* ProfessionData);

	void PlayMountAnimation(EMountingDirection Position, TEnumAsByte<E_MountAnimType> Type, bool* Success);

	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);

	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);

	void GetAnimalRepelStat_BPI(bool* AnimalRepel);

	void PlayAttackAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration);

	void PlayDodgeAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, TEnumAsByte<E_AnimDirection> Direction, TEnumAsByte<E_AnimMovement> Movement, float* Duration);

	void PlayBlockAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration);

	void PlayHitAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration);

	void GetToolType_BPI(TEnumAsByte<E_Tools>* ToolType);

	void GetIsBlocking_BPI(bool* Blocking);

	void GetCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, bool FastAnim, class UAnimMontage** CraftingMontage, float* Duration, float* Loop, float* LoopWait, float* LoopEnd);

	void GetCurrentCraftingMontage(class UAnimMontage** CraftingMontage);

	void GetCharacterOwnership(TEnumAsByte<E_Ownership>* Ownership);

	void GetEnableIK_BPI(bool* IK_Enabled);

	void GetMass(float* Value);

	void CanPushOthers(bool* CanPushOthers);

	void GetMesh_BPI(class USkeletalMeshComponent** Mesh);

	void IsMoving_BPI(bool* IsMoving);

	void PlayPushAnimation(float PlayRate, int32_t animationId, float* Duration);

	void GetTime(struct FST_Time* Time);

	void GetCharacterStamina_BPI(float* Stamina, float* MaxStamina);

	void GetCharacterHealth_BPI(float* Health, float* MaxHealth);

	void DecreaseStamina_BPI(float Stamina, bool Dirtiness, bool* Enough);

	void GetInteractCount(int32_t* Count);

	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);

	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);

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

	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);

	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);

	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);

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

	bool StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse);

	bool StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse);

	bool SetRiderCollisionEnabled(bool shouldEnable);

	bool PlayMoveToSeatAnimation(int32_t currentSeatId, int32_t oldSeatId);

	bool PlayMountingAnimation(EMountingDirection Position);

	bool PlayDismountingAnimation(EMountingDirection Position);

	bool OnMoveToMountingLocationCompleted();

	bool OnMountingPawnFinished(class AActor* newMountActor);

	bool OnDismountingPawnFinished(class AActor* oldPawnMount);

	bool OnChangeToNewSeatCompleted();

	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);

	bool IsSeatedOnMount()/* const*/;

	bool IsDriver()/* const*/;

	int32_t GetSeatId()/* const*/;

	class UMeshComponent* GetRiderMesh()/* const*/;

	class UMountRiderComponent* GetMountRiderComponent()/* const*/;

	TArray<class USkeletalMeshComponent*> GetAllRiderSkeletalMeshes()/* const*/;

	bool StartPawnMountingToSeat(class AActor* newMountActor, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse);

	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);

	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);

	bool IsMounted()/* const*/;

	class APawn* GetCharacterPawn()/* const*/;

	class AActor* GetCharacterMount()/* const*/;

	class AController* GetCharacterController()/* const*/;

	void IsInCombat_BPI(bool* InCombat);

	void GetDistance(float* Distance);

	void GetOptimalizationStage(int32_t* Stage);

#pragma endregion
};
};