#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/AnimalBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C
// Super: Class Medieval_Dynasty.AnimalBase
// Size: 2528
// Size inherited: 1408
/////////////////////////////////////////////
namespace UE4 {
class ABP_AnimalBase_C : public AAnimalBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 1408	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UBoxComponent*	PushDetector;		//Offset: 1416	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetPushDetector() const;
	class UBoxComponent** M_PtrGetPushDetector();
	void M_SetPushDetector(const class UBoxComponent*& value);

	//class UBP_AnimalRelationsComponent_C*	BP_AnimalRelationsComponent;		//Offset: 1424	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AnimalRelationsComponent_C* M_GetBP_AnimalRelationsComponent() const;
	class UBP_AnimalRelationsComponent_C** M_PtrGetBP_AnimalRelationsComponent();
	void M_SetBP_AnimalRelationsComponent(const class UBP_AnimalRelationsComponent_C*& value);

	//class UBP_AnimalStatsComponent_C*	BP_AnimalStatsComponent;		//Offset: 1432	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AnimalStatsComponent_C* M_GetBP_AnimalStatsComponent() const;
	class UBP_AnimalStatsComponent_C** M_PtrGetBP_AnimalStatsComponent();
	void M_SetBP_AnimalStatsComponent(const class UBP_AnimalStatsComponent_C*& value);

	//class UBP_BoostComponent_C*	BP_BoostComponent;		//Offset: 1440	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_BoostComponent_C* M_GetBP_BoostComponent() const;
	class UBP_BoostComponent_C** M_PtrGetBP_BoostComponent();
	void M_SetBP_BoostComponent(const class UBP_BoostComponent_C*& value);

	//class UBP_AquaticBuoyancy_C*	BP_AquaticBoyuancy;		//Offset: 1448	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticBuoyancy_C* M_GetBP_AquaticBoyuancy() const;
	class UBP_AquaticBuoyancy_C** M_PtrGetBP_AquaticBoyuancy();
	void M_SetBP_AquaticBoyuancy(const class UBP_AquaticBuoyancy_C*& value);

	//bool	Engaged;		//Offset: 1456	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEngaged() const;
	bool* M_PtrGetEngaged();
	void M_SetEngaged(const bool& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 1464	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//struct FDataTableRowHandle	AnimalHandler;		//Offset: 1472	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FDataTableRowHandle M_GetAnimalHandler() const;
	struct FDataTableRowHandle* M_PtrGetAnimalHandler();
	void M_SetAnimalHandler(const struct FDataTableRowHandle& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 1488	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//TArray<struct FName>	ActorTags;		//Offset: 1496	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName> M_GetActorTags() const;
	TArray<struct FName>* M_PtrGetActorTags();
	void M_SetActorTags(const TArray<struct FName>& value);

	//bool	Awake;		//Offset: 1512	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAwake() const;
	bool* M_PtrGetAwake();
	void M_SetAwake(const bool& value);

	//bool	AllowDamage;		//Offset: 1513	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAllowDamage() const;
	bool* M_PtrGetAllowDamage();
	void M_SetAllowDamage(const bool& value);

	//class AActor*	DamageCauser;		//Offset: 1520	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetDamageCauser() const;
	class AActor** M_PtrGetDamageCauser();
	void M_SetDamageCauser(const class AActor*& value);

	//float	AnimalDamage;		//Offset: 1528	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetAnimalDamage() const;
	float* M_PtrGetAnimalDamage();
	void M_SetAnimalDamage(const float& value);

	//bool	Attacking;		//Offset: 1532	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAttacking() const;
	bool* M_PtrGetAttacking();
	void M_SetAttacking(const bool& value);

	//bool	CanTakeDamage;		//Offset: 1533	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanTakeDamage() const;
	bool* M_PtrGetCanTakeDamage();
	void M_SetCanTakeDamage(const bool& value);

	//bool	Breeding;		//Offset: 1534	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBreeding() const;
	bool* M_PtrGetBreeding();
	void M_SetBreeding(const bool& value);

	//float	DamageAmount;		//Offset: 1536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDamageAmount() const;
	float* M_PtrGetDamageAmount();
	void M_SetDamageAmount(const float& value);

	//bool	InteractableLife;		//Offset: 1540	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInteractableLife() const;
	bool* M_PtrGetInteractableLife();
	void M_SetInteractableLife(const bool& value);

	//struct FText	InteractActionLifeText;		//Offset: 1544	Size: 24	Flags: Edit, BlueprintVisible
	struct FText M_GetInteractActionLifeText() const;
	struct FText* M_PtrGetInteractActionLifeText();
	void M_SetInteractActionLifeText(const struct FText& value);

	//bool	InteractableDead;		//Offset: 1568	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInteractableDead() const;
	bool* M_PtrGetInteractableDead();
	void M_SetInteractableDead(const bool& value);

	//struct FText	InteractActionDeadText;		//Offset: 1576	Size: 24	Flags: Edit, BlueprintVisible
	struct FText M_GetInteractActionDeadText() const;
	struct FText* M_PtrGetInteractActionDeadText();
	void M_SetInteractActionDeadText(const struct FText& value);

	//class UAnimMontage*	InteractAnimationMontageLife;		//Offset: 1600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetInteractAnimationMontageLife() const;
	class UAnimMontage** M_PtrGetInteractAnimationMontageLife();
	void M_SetInteractAnimationMontageLife(const class UAnimMontage*& value);

	//class UAnimMontage*	InteractAnimationMontageDead;		//Offset: 1608	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetInteractAnimationMontageDead() const;
	class UAnimMontage** M_PtrGetInteractAnimationMontageDead();
	void M_SetInteractAnimationMontageDead(const class UAnimMontage*& value);

	//TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>	ViewmodeInteractionMontages;		//Offset: 1616	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages> M_GetViewmodeInteractionMontages() const;
	TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>* M_PtrGetViewmodeInteractionMontages();
	void M_SetViewmodeInteractionMontages(const TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>& value);

	//bool	UseInteractTimeLife;		//Offset: 1696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUseInteractTimeLife() const;
	bool* M_PtrGetUseInteractTimeLife();
	void M_SetUseInteractTimeLife(const bool& value);

	//float	TimingTimeLife;		//Offset: 1700	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimingTimeLife() const;
	float* M_PtrGetTimingTimeLife();
	void M_SetTimingTimeLife(const float& value);

	//bool	UseInteractTimeDead;		//Offset: 1704	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUseInteractTimeDead() const;
	bool* M_PtrGetUseInteractTimeDead();
	void M_SetUseInteractTimeDead(const bool& value);

	//float	TimingTimeDead;		//Offset: 1708	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimingTimeDead() const;
	float* M_PtrGetTimingTimeDead();
	void M_SetTimingTimeDead(const float& value);

	//bool	CheckToolInInventoryLife;		//Offset: 1712	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetCheckToolInInventoryLife() const;
	bool* M_PtrGetCheckToolInInventoryLife();
	void M_SetCheckToolInInventoryLife(const bool& value);

	//TEnumAsByte<E_Tools>	InteractToolTypeLife;		//Offset: 1713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetInteractToolTypeLife() const;
	TEnumAsByte<E_Tools>* M_PtrGetInteractToolTypeLife();
	void M_SetInteractToolTypeLife(const TEnumAsByte<E_Tools>& value);

	//class ABP_SpawnPointWildAnimal_C*	SpawnLocation;		//Offset: 1720	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SpawnPointWildAnimal_C* M_GetSpawnLocation() const;
	class ABP_SpawnPointWildAnimal_C** M_PtrGetSpawnLocation();
	void M_SetSpawnLocation(const class ABP_SpawnPointWildAnimal_C*& value);

	//bool	CheckToolInInventoryDead;		//Offset: 1728	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetCheckToolInInventoryDead() const;
	bool* M_PtrGetCheckToolInInventoryDead();
	void M_SetCheckToolInInventoryDead(const bool& value);

	//TEnumAsByte<E_Tools>	InteractToolTypeDead;		//Offset: 1729	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetInteractToolTypeDead() const;
	TEnumAsByte<E_Tools>* M_PtrGetInteractToolTypeDead();
	void M_SetInteractToolTypeDead(const TEnumAsByte<E_Tools>& value);

	//bool	SpawnDead;		//Offset: 1730	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSpawnDead() const;
	bool* M_PtrGetSpawnDead();
	void M_SetSpawnDead(const bool& value);

	//float	SkillForKillValue;		//Offset: 1732	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkillForKillValue() const;
	float* M_PtrGetSkillForKillValue();
	void M_SetSkillForKillValue(const float& value);

	//float	SkillForSkinningValue;		//Offset: 1736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkillForSkinningValue() const;
	float* M_PtrGetSkillForSkinningValue();
	void M_SetSkillForSkinningValue(const float& value);

	//float	SkillForHusbandryValue;		//Offset: 1740	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkillForHusbandryValue() const;
	float* M_PtrGetSkillForHusbandryValue();
	void M_SetSkillForHusbandryValue(const float& value);

	//class ABP_BaseCharacter_C*	InteractedCharacter;		//Offset: 1744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetInteractedCharacter() const;
	class ABP_BaseCharacter_C** M_PtrGetInteractedCharacter();
	void M_SetInteractedCharacter(const class ABP_BaseCharacter_C*& value);

	//int32_t	FearFactor;		//Offset: 1752	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFearFactor() const;
	int32_t* M_PtrGetFearFactor();
	void M_SetFearFactor(const int32_t& value);

	//bool	IsFear;		//Offset: 1756	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsFear() const;
	bool* M_PtrGetIsFear();
	void M_SetIsFear(const bool& value);

	//struct FTimerHandle	FleeingTimer;		//Offset: 1760	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFleeingTimer() const;
	struct FTimerHandle* M_PtrGetFleeingTimer();
	void M_SetFleeingTimer(const struct FTimerHandle& value);

	//int32_t	FearFactorIncreaser;		//Offset: 1768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFearFactorIncreaser() const;
	int32_t* M_PtrGetFearFactorIncreaser();
	void M_SetFearFactorIncreaser(const int32_t& value);

	//struct FVector	SpawnPosition;		//Offset: 1772	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetSpawnPosition() const;
	struct FVector* M_PtrGetSpawnPosition();
	void M_SetSpawnPosition(const struct FVector& value);

	//TEnumAsByte<E_CardinalDirection>	cardinalDirection;		//Offset: 1784	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_CardinalDirection> M_GetcardinalDirection() const;
	TEnumAsByte<E_CardinalDirection>* M_PtrGetcardinalDirection();
	void M_SetcardinalDirection(const TEnumAsByte<E_CardinalDirection>& value);

	//TEnumAsByte<E_Gait>	GaitType;		//Offset: 1785	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Gait> M_GetGaitType() const;
	TEnumAsByte<E_Gait>* M_PtrGetGaitType();
	void M_SetGaitType(const TEnumAsByte<E_Gait>& value);

	//float	RotationOffset;		//Offset: 1788	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRotationOffset() const;
	float* M_PtrGetRotationOffset();
	void M_SetRotationOffset(const float& value);

	//float	Target_CharacterRotationDifference;		//Offset: 1792	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTarget_CharacterRotationDifference() const;
	float* M_PtrGetTarget_CharacterRotationDifference();
	void M_SetTarget_CharacterRotationDifference(const float& value);

	//struct FTimerHandle	BleedTimerHandle;		//Offset: 1800	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetBleedTimerHandle() const;
	struct FTimerHandle* M_PtrGetBleedTimerHandle();
	void M_SetBleedTimerHandle(const struct FTimerHandle& value);

	//TEnumAsByte<E_TechnologyTypes>	Technology_ForKill;		//Offset: 1808	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes> M_GetTechnology_ForKill() const;
	TEnumAsByte<E_TechnologyTypes>* M_PtrGetTechnology_ForKill();
	void M_SetTechnology_ForKill(const TEnumAsByte<E_TechnologyTypes>& value);

	//float	ValueTechnology_ForKill;		//Offset: 1812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetValueTechnology_ForKill() const;
	float* M_PtrGetValueTechnology_ForKill();
	void M_SetValueTechnology_ForKill(const float& value);

	//TEnumAsByte<E_TechnologyTypes>	Technology_ForSkinning;		//Offset: 1816	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes> M_GetTechnology_ForSkinning() const;
	TEnumAsByte<E_TechnologyTypes>* M_PtrGetTechnology_ForSkinning();
	void M_SetTechnology_ForSkinning(const TEnumAsByte<E_TechnologyTypes>& value);

	//float	ValueTechnology_ForSkinning;		//Offset: 1820	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetValueTechnology_ForSkinning() const;
	float* M_PtrGetValueTechnology_ForSkinning();
	void M_SetValueTechnology_ForSkinning(const float& value);

	//TEnumAsByte<E_TechnologyTypes>	Technology_ForMilkingAndSheering;		//Offset: 1824	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes> M_GetTechnology_ForMilkingAndSheering() const;
	TEnumAsByte<E_TechnologyTypes>* M_PtrGetTechnology_ForMilkingAndSheering();
	void M_SetTechnology_ForMilkingAndSheering(const TEnumAsByte<E_TechnologyTypes>& value);

	//float	ValueTechnology_ForMilkingAndSheering;		//Offset: 1828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetValueTechnology_ForMilkingAndSheering() const;
	float* M_PtrGetValueTechnology_ForMilkingAndSheering();
	void M_SetValueTechnology_ForMilkingAndSheering(const float& value);

	//TArray<class AActor*>	ImpaledItems;		//Offset: 1832	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetImpaledItems() const;
	TArray<class AActor*>* M_PtrGetImpaledItems();
	void M_SetImpaledItems(const TArray<class AActor*>& value);

	//struct FTimerHandle	BleedTimerCancel;		//Offset: 1848	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetBleedTimerCancel() const;
	struct FTimerHandle* M_PtrGetBleedTimerCancel();
	void M_SetBleedTimerCancel(const struct FTimerHandle& value);

	//float	BleedDamage;		//Offset: 1856	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBleedDamage() const;
	float* M_PtrGetBleedDamage();
	void M_SetBleedDamage(const float& value);

	//int32_t	StuckCounter;		//Offset: 1860	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetStuckCounter() const;
	int32_t* M_PtrGetStuckCounter();
	void M_SetStuckCounter(const int32_t& value);

	//int32_t	ReputationPunishmentForKill;		//Offset: 1864	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetReputationPunishmentForKill() const;
	int32_t* M_PtrGetReputationPunishmentForKill();
	void M_SetReputationPunishmentForKill(const int32_t& value);

	//TMap<class AActor*, struct FST_CauserTimer>	DamageCausers;		//Offset: 1872	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, struct FST_CauserTimer> M_GetDamageCausers() const;
	TMap<class AActor*, struct FST_CauserTimer>* M_PtrGetDamageCausers();
	void M_SetDamageCausers(const TMap<class AActor*, struct FST_CauserTimer>& value);

	//struct FTimerHandle	DamageCausersHandle;		//Offset: 1952	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetDamageCausersHandle() const;
	struct FTimerHandle* M_PtrGetDamageCausersHandle();
	void M_SetDamageCausersHandle(const struct FTimerHandle& value);

	//bool	SpawnedBlood;		//Offset: 1960	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnedBlood() const;
	bool* M_PtrGetSpawnedBlood();
	void M_SetSpawnedBlood(const bool& value);

	//float	IKFPSLimit;		//Offset: 1964	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIKFPSLimit() const;
	float* M_PtrGetIKFPSLimit();
	void M_SetIKFPSLimit(const float& value);

	//float	IKFPSRestore;		//Offset: 1968	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIKFPSRestore() const;
	float* M_PtrGetIKFPSRestore();
	void M_SetIKFPSRestore(const float& value);

	//bool	AdrenalineRush;		//Offset: 1972	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAdrenalineRush() const;
	bool* M_PtrGetAdrenalineRush();
	void M_SetAdrenalineRush(const bool& value);

	//class UGI_MedievalDynasty_C*	GameInstanceReference;		//Offset: 1976	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UGI_MedievalDynasty_C* M_GetGameInstanceReference() const;
	class UGI_MedievalDynasty_C** M_PtrGetGameInstanceReference();
	void M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value);

	//class AController*	AIControllerRef;		//Offset: 1984	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AController* M_GetAIControllerRef() const;
	class AController** M_PtrGetAIControllerRef();
	void M_SetAIControllerRef(const class AController*& value);

	//struct FST_Animal	AnimalData;		//Offset: 1992	Size: 184	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_Animal M_GetAnimalData() const;
	struct FST_Animal* M_PtrGetAnimalData();
	void M_SetAnimalData(const struct FST_Animal& value);

	//bool	Ragdoll;		//Offset: 2176	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetRagdoll() const;
	bool* M_PtrGetRagdoll();
	void M_SetRagdoll(const bool& value);

	//bool	Dead;		//Offset: 2177	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDead() const;
	bool* M_PtrGetDead();
	void M_SetDead(const bool& value);

	//int32_t	Variation;		//Offset: 2180	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetVariation() const;
	int32_t* M_PtrGetVariation();
	void M_SetVariation(const int32_t& value);

	//struct FTimerHandle	FallingTimerHandle;		//Offset: 2184	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFallingTimerHandle() const;
	struct FTimerHandle* M_PtrGetFallingTimerHandle();
	void M_SetFallingTimerHandle(const struct FTimerHandle& value);

	//bool	HasLanded;		//Offset: 2192	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasLanded() const;
	bool* M_PtrGetHasLanded();
	void M_SetHasLanded(const bool& value);

	//float	FallZVelocity;		//Offset: 2196	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallZVelocity() const;
	float* M_PtrGetFallZVelocity();
	void M_SetFallZVelocity(const float& value);

	//bool	ShouldTakeFallDamage;		//Offset: 2200	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldTakeFallDamage() const;
	bool* M_PtrGetShouldTakeFallDamage();
	void M_SetShouldTakeFallDamage(const bool& value);

	//float	FallVelocityThreshold;		//Offset: 2204	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallVelocityThreshold() const;
	float* M_PtrGetFallVelocityThreshold();
	void M_SetFallVelocityThreshold(const float& value);

	//float	FallDamageToApply;		//Offset: 2208	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallDamageToApply() const;
	float* M_PtrGetFallDamageToApply();
	void M_SetFallDamageToApply(const float& value);

	//bool	CanTakeFallDamage;		//Offset: 2212	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanTakeFallDamage() const;
	bool* M_PtrGetCanTakeFallDamage();
	void M_SetCanTakeFallDamage(const bool& value);

	//struct FName	VoiceSocket;		//Offset: 2216	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetVoiceSocket() const;
	struct FName* M_PtrGetVoiceSocket();
	void M_SetVoiceSocket(const struct FName& value);

	//float	MountedWalkSpeed;		//Offset: 2224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountedWalkSpeed() const;
	float* M_PtrGetMountedWalkSpeed();
	void M_SetMountedWalkSpeed(const float& value);

	//float	MountedRunningSpeed;		//Offset: 2228	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountedRunningSpeed() const;
	float* M_PtrGetMountedRunningSpeed();
	void M_SetMountedRunningSpeed(const float& value);

	//float	MountedSprintingSpeed;		//Offset: 2232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountedSprintingSpeed() const;
	float* M_PtrGetMountedSprintingSpeed();
	void M_SetMountedSprintingSpeed(const float& value);

	//bool	isInWater;		//Offset: 2236	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisInWater() const;
	bool* M_PtrGetisInWater();
	void M_SetisInWater(const bool& value);

	//float	InWaterSpeedReduction;		//Offset: 2240	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInWaterSpeedReduction() const;
	float* M_PtrGetInWaterSpeedReduction();
	void M_SetInWaterSpeedReduction(const float& value);

	//float	EncumberedSpeedMultiplier;		//Offset: 2244	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEncumberedSpeedMultiplier() const;
	float* M_PtrGetEncumberedSpeedMultiplier();
	void M_SetEncumberedSpeedMultiplier(const float& value);

	//float	NightRiderTalentValue;		//Offset: 2248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNightRiderTalentValue() const;
	float* M_PtrGetNightRiderTalentValue();
	void M_SetNightRiderTalentValue(const float& value);

	//class UBehaviorTree*	MountBehaviorTree;		//Offset: 2256	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBehaviorTree* M_GetMountBehaviorTree() const;
	class UBehaviorTree** M_PtrGetMountBehaviorTree();
	void M_SetMountBehaviorTree(const class UBehaviorTree*& value);

	//TArray<struct FVector>	Waypoints;		//Offset: 2264	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetWaypoints() const;
	TArray<struct FVector>* M_PtrGetWaypoints();
	void M_SetWaypoints(const TArray<struct FVector>& value);

	//struct FTimerHandle	ImpaledItemsBleedTimerHandle;		//Offset: 2280	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetImpaledItemsBleedTimerHandle() const;
	struct FTimerHandle* M_PtrGetImpaledItemsBleedTimerHandle();
	void M_SetImpaledItemsBleedTimerHandle(const struct FTimerHandle& value);

	//class USoundBase*	DieCue;		//Offset: 2288	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundBase* M_GetDieCue() const;
	class USoundBase** M_PtrGetDieCue();
	void M_SetDieCue(const class USoundBase*& value);

	//int32_t	Animal_Audio;		//Offset: 2296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAnimal_Audio() const;
	int32_t* M_PtrGetAnimal_Audio();
	void M_SetAnimal_Audio(const int32_t& value);

	//struct FName	Animal;		//Offset: 2300	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetAnimal() const;
	struct FName* M_PtrGetAnimal();
	void M_SetAnimal(const struct FName& value);

	//float	DieCuePitch;		//Offset: 2308	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDieCuePitch() const;
	float* M_PtrGetDieCuePitch();
	void M_SetDieCuePitch(const float& value);

	//bool	AllowMountedInteraction;		//Offset: 2312	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAllowMountedInteraction() const;
	bool* M_PtrGetAllowMountedInteraction();
	void M_SetAllowMountedInteraction(const bool& value);

	//bool	IsTeleported;		//Offset: 2313	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsTeleported() const;
	bool* M_PtrGetIsTeleported();
	void M_SetIsTeleported(const bool& value);

	//bool	OccupyByNPC;		//Offset: 2314	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOccupyByNPC() const;
	bool* M_PtrGetOccupyByNPC();
	void M_SetOccupyByNPC(const bool& value);

	//bool	Save;		//Offset: 2315	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSave() const;
	bool* M_PtrGetSave();
	void M_SetSave(const bool& value);

	//bool	IsLeftRightAxisInput;		//Offset: 2316	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsLeftRightAxisInput() const;
	bool* M_PtrGetIsLeftRightAxisInput();
	void M_SetIsLeftRightAxisInput(const bool& value);

	//int32_t	TicksDelayToUpdatePush;		//Offset: 2320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTicksDelayToUpdatePush() const;
	int32_t* M_PtrGetTicksDelayToUpdatePush();
	void M_SetTicksDelayToUpdatePush(const int32_t& value);

	//int32_t	TicksLeftToUpdatePush;		//Offset: 2324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTicksLeftToUpdatePush() const;
	int32_t* M_PtrGetTicksLeftToUpdatePush();
	void M_SetTicksLeftToUpdatePush(const int32_t& value);

	//bool	IsRagdollActivationLocked;		//Offset: 2328	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollActivationLocked() const;
	bool* M_PtrGetIsRagdollActivationLocked();
	void M_SetIsRagdollActivationLocked(const bool& value);

	//struct FVector	InitialRagdollVelocity;		//Offset: 2332	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetInitialRagdollVelocity() const;
	struct FVector* M_PtrGetInitialRagdollVelocity();
	void M_SetInitialRagdollVelocity(const struct FVector& value);

	//struct FVector	TargetRagdollVelocity;		//Offset: 2344	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetTargetRagdollVelocity() const;
	struct FVector* M_PtrGetTargetRagdollVelocity();
	void M_SetTargetRagdollVelocity(const struct FVector& value);

	//float	RagdollStartTime;		//Offset: 2356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartTime() const;
	float* M_PtrGetRagdollStartTime();
	void M_SetRagdollStartTime(const float& value);

	//bool	ShouldUpdateRateOptimizationsBeEnabled;		//Offset: 2360	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldUpdateRateOptimizationsBeEnabled() const;
	bool* M_PtrGetShouldUpdateRateOptimizationsBeEnabled();
	void M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value);

	//struct FName	RagdollPoseSnapshot;		//Offset: 2364	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollPoseSnapshot() const;
	struct FName* M_PtrGetRagdollPoseSnapshot();
	void M_SetRagdollPoseSnapshot(const struct FName& value);

	//struct FVector	RagdollLocation;		//Offset: 2372	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRagdollLocation() const;
	struct FVector* M_PtrGetRagdollLocation();
	void M_SetRagdollLocation(const struct FVector& value);

	//struct FName	RagdollBaseBone;		//Offset: 2384	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollBaseBone() const;
	struct FName* M_PtrGetRagdollBaseBone();
	void M_SetRagdollBaseBone(const struct FName& value);

	//struct FVector	RagdollVelocity;		//Offset: 2392	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRagdollVelocity() const;
	struct FVector* M_PtrGetRagdollVelocity();
	void M_SetRagdollVelocity(const struct FVector& value);

	//bool	RagdollOnGround;		//Offset: 2404	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRagdollOnGround() const;
	bool* M_PtrGetRagdollOnGround();
	void M_SetRagdollOnGround(const bool& value);

	//float	RagdollStartMinHitSpeed;		//Offset: 2408	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartMinHitSpeed() const;
	float* M_PtrGetRagdollStartMinHitSpeed();
	void M_SetRagdollStartMinHitSpeed(const float& value);

	//float	RagdollStartMinHitAcceleration;		//Offset: 2412	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartMinHitAcceleration() const;
	float* M_PtrGetRagdollStartMinHitAcceleration();
	void M_SetRagdollStartMinHitAcceleration(const float& value);

	//struct FName	UnragdollTargetBone;		//Offset: 2416	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetUnragdollTargetBone() const;
	struct FName* M_PtrGetUnragdollTargetBone();
	void M_SetUnragdollTargetBone(const struct FName& value);

	//struct FName	RagdollRootBone;		//Offset: 2424	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollRootBone() const;
	struct FName* M_PtrGetRagdollRootBone();
	void M_SetRagdollRootBone(const struct FName& value);

	//int32_t	RagdollCounter;		//Offset: 2432	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRagdollCounter() const;
	int32_t* M_PtrGetRagdollCounter();
	void M_SetRagdollCounter(const int32_t& value);

	//int32_t	RagdollStoppedCounter;		//Offset: 2436	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRagdollStoppedCounter() const;
	int32_t* M_PtrGetRagdollStoppedCounter();
	void M_SetRagdollStoppedCounter(const int32_t& value);

	//struct FVector	Push;		//Offset: 2440	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPush() const;
	struct FVector* M_PtrGetPush();
	void M_SetPush(const struct FVector& value);

	//bool	CanPush;		//Offset: 2452	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanPush() const;
	bool* M_PtrGetCanPush();
	void M_SetCanPush(const bool& value);

	//bool	CanBePushed;		//Offset: 2453	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanBePushed() const;
	bool* M_PtrGetCanBePushed();
	void M_SetCanBePushed(const bool& value);

	//struct FVector	L_PushDetectorSensedActorClosestLocation;		//Offset: 2456	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetL_PushDetectorSensedActorClosestLocation() const;
	struct FVector* M_PtrGetL_PushDetectorSensedActorClosestLocation();
	void M_SetL_PushDetectorSensedActorClosestLocation(const struct FVector& value);

	//float	L_PushDetectorSensedActorSmallestDistance;		//Offset: 2468	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetL_PushDetectorSensedActorSmallestDistance() const;
	float* M_PtrGetL_PushDetectorSensedActorSmallestDistance();
	void M_SetL_PushDetectorSensedActorSmallestDistance(const float& value);

	//TArray<bool>	SimulatedBodiesBeforeRagdoll;		//Offset: 2472	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<bool> M_GetSimulatedBodiesBeforeRagdoll() const;
	TArray<bool>* M_PtrGetSimulatedBodiesBeforeRagdoll();
	void M_SetSimulatedBodiesBeforeRagdoll(const TArray<bool>& value);

	//bool	IsRagdollOnHitEnabled;		//Offset: 2488	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollOnHitEnabled() const;
	bool* M_PtrGetIsRagdollOnHitEnabled();
	void M_SetIsRagdollOnHitEnabled(const bool& value);

	//bool	DamageTooSmall;		//Offset: 2489	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDamageTooSmall() const;
	bool* M_PtrGetDamageTooSmall();
	void M_SetDamageTooSmall(const bool& value);

	//class UParticleSystem*	DamageParticles;		//Offset: 2496	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UParticleSystem* M_GetDamageParticles() const;
	class UParticleSystem** M_PtrGetDamageParticles();
	void M_SetDamageParticles(const class UParticleSystem*& value);

	//bool	IsRagdollOnFallEnabled;		//Offset: 2504	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollOnFallEnabled() const;
	bool* M_PtrGetIsRagdollOnFallEnabled();
	void M_SetIsRagdollOnFallEnabled(const bool& value);

	//float	RagdollMinFallDamage;		//Offset: 2508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollMinFallDamage() const;
	float* M_PtrGetRagdollMinFallDamage();
	void M_SetRagdollMinFallDamage(const float& value);

	//class UPhysicsAsset*	InactivePhysicsAsset;		//Offset: 2512	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactivePhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactivePhysicsAsset();
	void M_SetInactivePhysicsAsset(const class UPhysicsAsset*& value);

	//float	meshCollisionDisableTime;		//Offset: 2520	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetmeshCollisionDisableTime() const;
	float* M_PtrGetmeshCollisionDisableTime();
	void M_SetmeshCollisionDisableTime(const float& value);

	//TEnumAsByte<ECollisionEnabled>	targetMeshCollisionType;		//Offset: 2524	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ECollisionEnabled> M_GettargetMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGettargetMeshCollisionType();
	void M_SettargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//TEnumAsByte<ECollisionEnabled>	previousMeshCollisionType;		//Offset: 2525	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ECollisionEnabled> M_GetpreviousMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGetpreviousMeshCollisionType();
	void M_SetpreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//bool	isPhysicsAssetSwitchingEnabled;		//Offset: 2526	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisPhysicsAssetSwitchingEnabled() const;
	bool* M_PtrGetisPhysicsAssetSwitchingEnabled();
	void M_SetisPhysicsAssetSwitchingEnabled(const bool& value);

	//bool	isDistanceMeshCollisionOptimizationEnabled;		//Offset: 2527	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisDistanceMeshCollisionOptimizationEnabled() const;
	bool* M_PtrGetisDistanceMeshCollisionOptimizationEnabled();
	void M_SetisDistanceMeshCollisionOptimizationEnabled(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_AnimalBase(int32_t EntryPoint);

	void Set_Animal_MovementMode_Event(EAnimalMovementMode New_ALS_MovementMode);

	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);

	void Set_Animal_Gait_Event(TEnumAsByte<E_Gait> New_ALS_Gait);

	void Set_ALS_RotationMode_Event(EAnimalRotationMode New_ALS_RotationMode);

	void FallingEvent();

	void StartFalling();

	void EndFalling();

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void CauseBleeding(float BleedDamage, float BleedDuration);

	void BleedCancel();

	void Splat(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, class UPhysicalMaterial* PhysMat);

	void ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);

	void DealtDamage(class AActor* Target);

	void ParticleFinished(class UParticleSystemComponent* PSystem);

	void EventDead();

	void UpdateMovementSettings();

	void SetMeshCollisionKeepTime_BPI(float Keep_Time);

	void SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type);

	void OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void RagdollTimer();

	void StopRagdoll(bool SkipAnim);

	void StartRagdoll();

	void SetOccupyByNPC(bool OccupyByNPC);

	void PoisonAnimal(float Poison);

	void BleedFromImpaledItems();

	void SetIsInWater(bool InWater, float Intensity);

	void FarOptimization();

	void MediumOptimization();

	void CloseOptimization();

	void NoneOptimization();

	void DisableNPC();

	void EnableNPC();

	void RemoveImpaledItem(class AActor* ImpaledItem);

	void AddImpaledItem(class AActor* ImpaledItem);

	void PerformActorInteraction();

	void InteractInput(bool KeyDown);

	void OnMoveForSkinningFinished();

	void PauseBrain();

	void UnpauseBrain();

	void ReceiveDestroyed();

	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer);

	void ReceiveTick(float DeltaSeconds);

	void ReceiveBeginPlay();

	void OnSummonFinished();

	void OnSummoned_Far();

	void OnSummoned_Close();

	void ReceivePossessed(class AController* NewController);

	void SetSleepSlotIndex(int32_t SleepSlotIndex);

	void SetSleepValues();

	void SavePoseSnapshot_BPI(struct FName PoseNameToSave);

	void Play_GetUp_Anim_BPI(bool FromLeftSide);

	void SetBirdTypeBPI(bool isWaterType);

	void SetHusbandryAnimalCapacity(float Capacity);

	void SetAnimalCustomName(struct FString CustomName);

	void UpdateMountEquipment(bool Unequip, struct FST_ItemOutfit ItemData);

	void SetForSale(bool ForSale);

	void SetAnimalMovementMode_BPI(EAnimalMovementMode MovementMode);

	void SetEngageTargetBPI(class AActor* Causer);

	void SetFear(int32_t Fear);

	void AddItemToHouse();

	void RotateYaw(float Angle);

	void RotatePitch(float Angle);

	void DetachItem();

	void SetRotateMode(bool RotateLeft, bool RotateRight);

	void StopAttackFunction();

	void StartAttackFunction(bool Timer, struct FName Socket);

	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);

	void ShowInspectorUI();

	void IsLookedAt(bool Active);

	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, struct FST_Chunks ChunkData);

	void SetOccupied(class APawn* Character);

	void MouseWheel_Axis(float Axis_Value);

	void CameraActionReleased(struct FKey Key);

	void CameraActionPressed(struct FKey Key);

	void LookAtOnMount(struct FRotator Rotation);

	void SetShouldSprint(bool ShouldSprint);

	void WalkReleased(struct FKey Key);

	void WalkPressed(struct FKey Key);

	void MountStop();

	void DismountReleased(struct FKey Key);

	void DismountPressed(struct FKey Key);

	void Down_Axis(float Axis_Value);

	void Right_Axis(float Axis_Value);

	void SprintReleased(struct FKey Key);

	void SprintPressed(struct FKey Key);

	void MountSpecial();

	void JumpReleased(struct FKey Key);

	void JumpPressed(struct FKey Key);

	void Left_Axis(float Axis_Value);

	void Backwards_Axis(float Axis_Value);

	void UpdateMountCameraFoV(float FieldOfView);

	void UserConstructionScript();

	void fnGetAuthority(bool* HasAuthority);

	void OnAnimalMovementModeChanged();

	class UAnimInstance* GetAnimInstance();

	void OnAnimalPawnMovementModeChanged(TEnumAsByte<EMovementMode> Selection);

	float CalculateAnimalRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate);

	void LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation);

	void OnAnimalGaitModeChanged();

	void OnAnimalRotationModeChanged();

	void LimitRotation(float AimYawLimit, float interpSpeed);

	void SetCurrentHP(float CurrentHP);

	void AnimalBleed();

	void SetMaxWalkSpeed(float MaxWalkSpeed);

	void CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed);

	void OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership);

	void LootImpaledItems();

	void IncreaseStuckCounter(struct FVector Goal);

	void ResetStuckCounter();

	void TeleportTowardMoveLocation(struct FVector Goal);

	void GetHusbandryDataToSave(struct FST_SAVE_HusbandryAnimals* HusbandryData);

	void SetHusbandryDataFromSave(struct FST_SAVE_HusbandryAnimals HusbandryData);

	void UpdateCausers();

	void UpdateCausersStatus();

	void GetDamageCauserTag(class AActor* Actor, struct FName* Tag);

	void AddDamageCauser(class AActor* DamageCauser);

	void AddItems(class ABP_BaseCharacter_C* BaseCharacter);

	void CalculateEncumberedSpeed();

	void ChooseMaxWalkSpeed(float* MaxWalkSpeed);

	void OnIsMount();

	void OnIsMounted();

	void ChangeBehaviorTreeToMount();

	void ChangeBehaviorTreeToHusbandry();

	void CheckHedgehog();

	void EndCombatCausers();

	void UpdateCausersCombat();

	void ClearCausers();

	void StartCombatForCauser(class AActor* Causer);

	bool CheckMountedInteraction(class ABP_BaseCharacter_C* BaseCharacter);

	void ResetCausersTime();

	void GetInteractAnimation(class UAnimMontage** InteractAnimationMontage);

	void BoostComponentDebug();

	void SetMaterialVariation();

	void CheckIsUnderMap();

	void UpdateReputationOnHit(float SubtractedHealth);

	void CalculateActorLocationAndRotationInRagdoll(struct FRotator RagdollRotation, struct FVector RagdollLocation, struct FRotator* ActorRotation, struct FVector* actorLocation);

	void GetFear(int32_t* FearFactor);

	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);

	void GetInventoryComponent_AnimalBPI(class UActorComponent** InventoryComponent);

	void GetForSale(bool* ForSale);

	void GetPrice_Buy(int32_t* Price);

	void GetPrice_Sell(int32_t* Price);

	void GetAnimalWorldLocation(struct FVector* Location);

	void GetAnimalHeight(float* Height);

	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);

	void GetDead(bool* Dead);

	void WarnAnimal(class AActor* EngageActor, bool* Success);

	void GetAnimalCustomName(struct FString* CustomName);

	void GetOccupyByNPC(bool* OccupyByNPC);

	void GetSkinningSocketLocation(struct FVector* SkinningSocketLocation);

	void GetAnimalType(TEnumAsByte<E_AnimalType>* AnimalType);

	void GetMass(float* Mass);

	void CanPushOthers(bool* CanPushOthers);

	void GetMesh_BPI(class USkeletalMeshComponent** Mesh);

	void GetSleepSlotIndex(int32_t* SleepSlotIndex);

	void IsMoving_BPI(bool* IsMoving);

	void IAnimal_CalculateEncumberedSpeed(bool* Success);

	void IAnimal_GetTime(struct FST_Time* Time);

	void GetOwnership_BPI(TEnumAsByte<E_Ownership>* Ownership);

	void GetVoiceComponent(class UAudioComponent** Voice);

	void GetHalfAnimalHeight(float* HalfHeight);

	void GetAnimalRadius(float* Radius);

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

	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);

	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);

	bool IsMounted()/* const*/;

	class APawn* GetCharacterPawn()/* const*/;

	class AActor* GetCharacterMount()/* const*/;

	class AController* GetCharacterController()/* const*/;

	bool SetSeatOccupiedById(int32_t seatId, class APawn* rider);

	bool SetSeatOccupiedAtIndex(int32_t seatIndex, class APawn* rider);

	bool OnRiderFinishedMounting(class AActor* mountedActor, int32_t seatId);

	bool OnRiderFinishedDismounting(class AActor* dismountedActor, int32_t seatId);

	bool OnRiderFinishedChangingSeats(class AActor* rider, int32_t newSeatId, int32_t oldSeatId);

	bool MustHaveDriver()/* const*/;

	bool IsSeatOccupiedById(int32_t seatId)/* const*/;

	bool IsSeatOccupiedAtIndex(int32_t seatIndex)/* const*/;

	bool IsMountableByPawn(class APawn* newRider)/* const*/;

	bool IsMountableActor()/* const*/;

	bool IsDriverSeat(const struct FSeatData& SeatData)/* const*/;

	bool IsDriverReady()/* const*/;

	bool HasPassangers()/* const*/;

	bool HasDriver()/* const*/;

	bool GetSeatDataById(int32_t seatId, struct FSeatData* SeatData)/* const*/;

	bool GetSeatDataAtIndex(int32_t Index, struct FSeatData* SeatData)/* const*/;

	EMountingDirection GetRelativeMountDirection(class APawn* rider)/* const*/;

	EMountingDirection GetRelativeDismountDirection(class APawn* rider)/* const*/;

	class UMeshComponent* GetMountBody(int32_t seatId)/* const*/;

	class UMountablePawnComponent* GetMountablePawnComponent()/* const*/;

	int32_t GetMaxRiders()/* const*/;

	class APawn* GetDriver()/* const*/;

	int32_t GetCurrentRiderCount()/* const*/;

	bool FindAvailableMountingPosition(EMountingDirection Position, struct FVector riderLocation, struct FSeatData* outSeatData, int32_t* outSeatIndex)/* const*/;

	bool ClearSeatById(int32_t seatId);

	bool ClearSeatAtIndex(int32_t seatIndex);

	bool CanMountAtPosition(struct FVector riderLocation, EMountingDirection desiredMountingPosition)/* const*/;

	bool CanMountActor(class AActor* newRider)/* const*/;

	bool HasPassengers()/* const*/;

	void GetShouldSprint(bool* ShouldSprint);

	void GetSprintKeyDown(bool* IsSprintKeyDown);

	void GetMountCameraRotation(struct FRotator* Rotation);

	void GetMountCameraAndArm(bool* IsValid, class UCameraComponent** Canera, class USpringArmComponent** SpringArm);

	void GetDistance(float* Distance);

	void GetOptimalizationStage(int32_t* Stage);

#pragma endregion
};
};