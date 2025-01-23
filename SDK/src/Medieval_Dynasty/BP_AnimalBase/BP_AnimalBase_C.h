#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/AnimalBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C
// Super: Class Medieval_Dynasty.AnimalBase
// Size: 3368
// Size inherited: 1664
/////////////////////////////////////////////
namespace UE4 {
class ABP_AnimalBase_C : public AAnimalBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 1664	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UCollisionComponent*	Collision;		//Offset: 1672	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCollisionComponent* M_GetCollision() const;
	class UCollisionComponent** M_PtrGetCollision();
	void M_SetCollision(const class UCollisionComponent*& value);

	//class UPerceptionStimuliSourceComponent*	PerceptionStimuliSource;		//Offset: 1680	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPerceptionStimuliSourceComponent* M_GetPerceptionStimuliSource() const;
	class UPerceptionStimuliSourceComponent** M_PtrGetPerceptionStimuliSource();
	void M_SetPerceptionStimuliSource(const class UPerceptionStimuliSourceComponent*& value);

	//class UPerceptionComponent*	Perception;		//Offset: 1688	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPerceptionComponent* M_GetPerception() const;
	class UPerceptionComponent** M_PtrGetPerception();
	void M_SetPerception(const class UPerceptionComponent*& value);

	//class UBoxComponent*	CollisionShape;		//Offset: 1696	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetCollisionShape() const;
	class UBoxComponent** M_PtrGetCollisionShape();
	void M_SetCollisionShape(const class UBoxComponent*& value);

	//class UBP_AnimalRelationsComponent_C*	BP_AnimalRelationsComponent;		//Offset: 1704	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AnimalRelationsComponent_C* M_GetBP_AnimalRelationsComponent() const;
	class UBP_AnimalRelationsComponent_C** M_PtrGetBP_AnimalRelationsComponent();
	void M_SetBP_AnimalRelationsComponent(const class UBP_AnimalRelationsComponent_C*& value);

	//class UBP_AnimalStatsComponent_C*	BP_AnimalStatsComponent;		//Offset: 1712	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AnimalStatsComponent_C* M_GetBP_AnimalStatsComponent() const;
	class UBP_AnimalStatsComponent_C** M_PtrGetBP_AnimalStatsComponent();
	void M_SetBP_AnimalStatsComponent(const class UBP_AnimalStatsComponent_C*& value);

	//class UBP_BoostComponent_C*	BP_BoostComponent;		//Offset: 1720	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_BoostComponent_C* M_GetBP_BoostComponent() const;
	class UBP_BoostComponent_C** M_PtrGetBP_BoostComponent();
	void M_SetBP_BoostComponent(const class UBP_BoostComponent_C*& value);

	//class UBP_AquaticBuoyancy_C*	BP_AquaticBoyuancy;		//Offset: 1728	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticBuoyancy_C* M_GetBP_AquaticBoyuancy() const;
	class UBP_AquaticBuoyancy_C** M_PtrGetBP_AquaticBoyuancy();
	void M_SetBP_AquaticBoyuancy(const class UBP_AquaticBuoyancy_C*& value);

	//bool	Engaged;		//Offset: 1736	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEngaged() const;
	bool* M_PtrGetEngaged();
	void M_SetEngaged(const bool& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 1744	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//struct FDataTableRowHandle	AnimalHandler;		//Offset: 1752	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FDataTableRowHandle M_GetAnimalHandler() const;
	struct FDataTableRowHandle* M_PtrGetAnimalHandler();
	void M_SetAnimalHandler(const struct FDataTableRowHandle& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 1768	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//TArray<struct FName>	ActorTags;		//Offset: 1776	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName> M_GetActorTags() const;
	TArray<struct FName>* M_PtrGetActorTags();
	void M_SetActorTags(const TArray<struct FName>& value);

	//bool	Resting;		//Offset: 1792	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetResting() const;
	bool* M_PtrGetResting();
	void M_SetResting(const bool& value);

	//bool	AllowDamage;		//Offset: 1793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAllowDamage() const;
	bool* M_PtrGetAllowDamage();
	void M_SetAllowDamage(const bool& value);

	//class AActor*	DamageCauser;		//Offset: 1800	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetDamageCauser() const;
	class AActor** M_PtrGetDamageCauser();
	void M_SetDamageCauser(const class AActor*& value);

	//bool	Attacking;		//Offset: 1808	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAttacking() const;
	bool* M_PtrGetAttacking();
	void M_SetAttacking(const bool& value);

	//TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>	ViewmodeInteractionMontages;		//Offset: 1816	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages> M_GetViewmodeInteractionMontages() const;
	TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>* M_PtrGetViewmodeInteractionMontages();
	void M_SetViewmodeInteractionMontages(const TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>& value);

	//TEnumAsByte<E_Tools>	InteractToolTypeLife;		//Offset: 1896	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetInteractToolTypeLife() const;
	TEnumAsByte<E_Tools>* M_PtrGetInteractToolTypeLife();
	void M_SetInteractToolTypeLife(const TEnumAsByte<E_Tools>& value);

	//TEnumAsByte<E_Tools>	InteractToolTypeDead;		//Offset: 1897	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetInteractToolTypeDead() const;
	TEnumAsByte<E_Tools>* M_PtrGetInteractToolTypeDead();
	void M_SetInteractToolTypeDead(const TEnumAsByte<E_Tools>& value);

	//struct FText	InteractActionLifeText;		//Offset: 1904	Size: 24	Flags: Edit, BlueprintVisible
	struct FText M_GetInteractActionLifeText() const;
	struct FText* M_PtrGetInteractActionLifeText();
	void M_SetInteractActionLifeText(const struct FText& value);

	//struct FText	InteractActionDeadText;		//Offset: 1928	Size: 24	Flags: Edit, BlueprintVisible
	struct FText M_GetInteractActionDeadText() const;
	struct FText* M_PtrGetInteractActionDeadText();
	void M_SetInteractActionDeadText(const struct FText& value);

	//bool	InteractableLife;		//Offset: 1952	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInteractableLife() const;
	bool* M_PtrGetInteractableLife();
	void M_SetInteractableLife(const bool& value);

	//bool	InteractableDead;		//Offset: 1953	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetInteractableDead() const;
	bool* M_PtrGetInteractableDead();
	void M_SetInteractableDead(const bool& value);

	//bool	UseInteractTimeLife;		//Offset: 1954	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUseInteractTimeLife() const;
	bool* M_PtrGetUseInteractTimeLife();
	void M_SetUseInteractTimeLife(const bool& value);

	//bool	UseInteractTimeDead;		//Offset: 1955	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUseInteractTimeDead() const;
	bool* M_PtrGetUseInteractTimeDead();
	void M_SetUseInteractTimeDead(const bool& value);

	//class UEnvQuery*	QueryTemplateFlee;		//Offset: 1960	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UEnvQuery* M_GetQueryTemplateFlee() const;
	class UEnvQuery** M_PtrGetQueryTemplateFlee();
	void M_SetQueryTemplateFlee(const class UEnvQuery*& value);

	//class UEnvQuery*	QueryTemplateRoam;		//Offset: 1968	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UEnvQuery* M_GetQueryTemplateRoam() const;
	class UEnvQuery** M_PtrGetQueryTemplateRoam();
	void M_SetQueryTemplateRoam(const class UEnvQuery*& value);

	//class UNavigationQueryFilter*	NavigationFilterClass;		//Offset: 1976	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UNavigationQueryFilter* M_GetNavigationFilterClass() const;
	class UNavigationQueryFilter** M_PtrGetNavigationFilterClass();
	void M_SetNavigationFilterClass(const class UNavigationQueryFilter*& value);

	//class UNavigationQueryFilter*	NavigationFilterExcludedClass;		//Offset: 1984	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UNavigationQueryFilter* M_GetNavigationFilterExcludedClass() const;
	class UNavigationQueryFilter** M_PtrGetNavigationFilterExcludedClass();
	void M_SetNavigationFilterExcludedClass(const class UNavigationQueryFilter*& value);

	//class ABP_SpawnPointWildAnimal_C*	SpawnPoint;		//Offset: 1992	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SpawnPointWildAnimal_C* M_GetSpawnPoint() const;
	class ABP_SpawnPointWildAnimal_C** M_PtrGetSpawnPoint();
	void M_SetSpawnPoint(const class ABP_SpawnPointWildAnimal_C*& value);

	//bool	SpawnDead;		//Offset: 2000	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSpawnDead() const;
	bool* M_PtrGetSpawnDead();
	void M_SetSpawnDead(const bool& value);

	//float	SkillForKillValue;		//Offset: 2004	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkillForKillValue() const;
	float* M_PtrGetSkillForKillValue();
	void M_SetSkillForKillValue(const float& value);

	//float	SkillForSkinningValue;		//Offset: 2008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkillForSkinningValue() const;
	float* M_PtrGetSkillForSkinningValue();
	void M_SetSkillForSkinningValue(const float& value);

	//float	SkillForHusbandryValue;		//Offset: 2012	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSkillForHusbandryValue() const;
	float* M_PtrGetSkillForHusbandryValue();
	void M_SetSkillForHusbandryValue(const float& value);

	//class ABP_BaseCharacter_C*	InteractedCharacter;		//Offset: 2016	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetInteractedCharacter() const;
	class ABP_BaseCharacter_C** M_PtrGetInteractedCharacter();
	void M_SetInteractedCharacter(const class ABP_BaseCharacter_C*& value);

	//int32_t	FearFactor;		//Offset: 2024	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFearFactor() const;
	int32_t* M_PtrGetFearFactor();
	void M_SetFearFactor(const int32_t& value);

	//bool	IsFear;		//Offset: 2028	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsFear() const;
	bool* M_PtrGetIsFear();
	void M_SetIsFear(const bool& value);

	//struct FTimerHandle	FleeingTimer;		//Offset: 2032	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFleeingTimer() const;
	struct FTimerHandle* M_PtrGetFleeingTimer();
	void M_SetFleeingTimer(const struct FTimerHandle& value);

	//int32_t	FearFactorIncreaser;		//Offset: 2040	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFearFactorIncreaser() const;
	int32_t* M_PtrGetFearFactorIncreaser();
	void M_SetFearFactorIncreaser(const int32_t& value);

	//TEnumAsByte<E_Gait>	GaitType;		//Offset: 2044	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Gait> M_GetGaitType() const;
	TEnumAsByte<E_Gait>* M_PtrGetGaitType();
	void M_SetGaitType(const TEnumAsByte<E_Gait>& value);

	//struct FTimerHandle	BleedTimerHandle;		//Offset: 2048	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetBleedTimerHandle() const;
	struct FTimerHandle* M_PtrGetBleedTimerHandle();
	void M_SetBleedTimerHandle(const struct FTimerHandle& value);

	//TEnumAsByte<E_TechnologyTypes>	Technology_ForKill;		//Offset: 2056	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes> M_GetTechnology_ForKill() const;
	TEnumAsByte<E_TechnologyTypes>* M_PtrGetTechnology_ForKill();
	void M_SetTechnology_ForKill(const TEnumAsByte<E_TechnologyTypes>& value);

	//float	ValueTechnology_ForKill;		//Offset: 2060	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetValueTechnology_ForKill() const;
	float* M_PtrGetValueTechnology_ForKill();
	void M_SetValueTechnology_ForKill(const float& value);

	//TEnumAsByte<E_TechnologyTypes>	Technology_ForSkinning;		//Offset: 2064	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes> M_GetTechnology_ForSkinning() const;
	TEnumAsByte<E_TechnologyTypes>* M_PtrGetTechnology_ForSkinning();
	void M_SetTechnology_ForSkinning(const TEnumAsByte<E_TechnologyTypes>& value);

	//float	ValueTechnology_ForSkinning;		//Offset: 2068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetValueTechnology_ForSkinning() const;
	float* M_PtrGetValueTechnology_ForSkinning();
	void M_SetValueTechnology_ForSkinning(const float& value);

	//TEnumAsByte<E_TechnologyTypes>	Technology_ForMilkingAndSheering;		//Offset: 2072	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TechnologyTypes> M_GetTechnology_ForMilkingAndSheering() const;
	TEnumAsByte<E_TechnologyTypes>* M_PtrGetTechnology_ForMilkingAndSheering();
	void M_SetTechnology_ForMilkingAndSheering(const TEnumAsByte<E_TechnologyTypes>& value);

	//float	ValueTechnology_ForMilkingAndSheering;		//Offset: 2076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetValueTechnology_ForMilkingAndSheering() const;
	float* M_PtrGetValueTechnology_ForMilkingAndSheering();
	void M_SetValueTechnology_ForMilkingAndSheering(const float& value);

	//TArray<class AActor*>	ImpaledItems;		//Offset: 2080	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetImpaledItems() const;
	TArray<class AActor*>* M_PtrGetImpaledItems();
	void M_SetImpaledItems(const TArray<class AActor*>& value);

	//struct FTimerHandle	BleedTimerCancel;		//Offset: 2096	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetBleedTimerCancel() const;
	struct FTimerHandle* M_PtrGetBleedTimerCancel();
	void M_SetBleedTimerCancel(const struct FTimerHandle& value);

	//float	BleedDamage;		//Offset: 2104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBleedDamage() const;
	float* M_PtrGetBleedDamage();
	void M_SetBleedDamage(const float& value);

	//int32_t	StuckCounter;		//Offset: 2108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetStuckCounter() const;
	int32_t* M_PtrGetStuckCounter();
	void M_SetStuckCounter(const int32_t& value);

	//TMap<class AActor*, struct FST_CauserTimer>	DamageCausers;		//Offset: 2112	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, struct FST_CauserTimer> M_GetDamageCausers() const;
	TMap<class AActor*, struct FST_CauserTimer>* M_PtrGetDamageCausers();
	void M_SetDamageCausers(const TMap<class AActor*, struct FST_CauserTimer>& value);

	//struct FTimerHandle	DamageCausersHandle;		//Offset: 2192	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetDamageCausersHandle() const;
	struct FTimerHandle* M_PtrGetDamageCausersHandle();
	void M_SetDamageCausersHandle(const struct FTimerHandle& value);

	//bool	SpawnedBlood;		//Offset: 2200	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnedBlood() const;
	bool* M_PtrGetSpawnedBlood();
	void M_SetSpawnedBlood(const bool& value);

	//class AController*	AIControllerRef;		//Offset: 2208	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AController* M_GetAIControllerRef() const;
	class AController** M_PtrGetAIControllerRef();
	void M_SetAIControllerRef(const class AController*& value);

	//struct FST_Animal	AnimalData;		//Offset: 2216	Size: 272	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_Animal M_GetAnimalData() const;
	struct FST_Animal* M_PtrGetAnimalData();
	void M_SetAnimalData(const struct FST_Animal& value);

	//int32_t	Variation;		//Offset: 2488	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetVariation() const;
	int32_t* M_PtrGetVariation();
	void M_SetVariation(const int32_t& value);

	//struct FTimerHandle	FallingTimerHandle;		//Offset: 2496	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFallingTimerHandle() const;
	struct FTimerHandle* M_PtrGetFallingTimerHandle();
	void M_SetFallingTimerHandle(const struct FTimerHandle& value);

	//bool	HasLanded;		//Offset: 2504	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasLanded() const;
	bool* M_PtrGetHasLanded();
	void M_SetHasLanded(const bool& value);

	//float	FallVelocityZ;		//Offset: 2508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallVelocityZ() const;
	float* M_PtrGetFallVelocityZ();
	void M_SetFallVelocityZ(const float& value);

	//bool	ShouldTakeFallDamage;		//Offset: 2512	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldTakeFallDamage() const;
	bool* M_PtrGetShouldTakeFallDamage();
	void M_SetShouldTakeFallDamage(const bool& value);

	//float	FallVelocityThreshold;		//Offset: 2516	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallVelocityThreshold() const;
	float* M_PtrGetFallVelocityThreshold();
	void M_SetFallVelocityThreshold(const float& value);

	//float	FallDamageToApply;		//Offset: 2520	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallDamageToApply() const;
	float* M_PtrGetFallDamageToApply();
	void M_SetFallDamageToApply(const float& value);

	//bool	CanTakeFallDamage;		//Offset: 2524	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanTakeFallDamage() const;
	bool* M_PtrGetCanTakeFallDamage();
	void M_SetCanTakeFallDamage(const bool& value);

	//struct FName	VoiceSocket;		//Offset: 2528	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetVoiceSocket() const;
	struct FName* M_PtrGetVoiceSocket();
	void M_SetVoiceSocket(const struct FName& value);

	//float	MountedWalkSpeed;		//Offset: 2536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountedWalkSpeed() const;
	float* M_PtrGetMountedWalkSpeed();
	void M_SetMountedWalkSpeed(const float& value);

	//float	MountedRunningSpeed;		//Offset: 2540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountedRunningSpeed() const;
	float* M_PtrGetMountedRunningSpeed();
	void M_SetMountedRunningSpeed(const float& value);

	//float	MountedSprintingSpeed;		//Offset: 2544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountedSprintingSpeed() const;
	float* M_PtrGetMountedSprintingSpeed();
	void M_SetMountedSprintingSpeed(const float& value);

	//bool	isInWater;		//Offset: 2548	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisInWater() const;
	bool* M_PtrGetisInWater();
	void M_SetisInWater(const bool& value);

	//float	inWaterSpeedMultiplier;		//Offset: 2552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetinWaterSpeedMultiplier() const;
	float* M_PtrGetinWaterSpeedMultiplier();
	void M_SetinWaterSpeedMultiplier(const float& value);

	//float	EncumberedSpeedMultiplier;		//Offset: 2556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEncumberedSpeedMultiplier() const;
	float* M_PtrGetEncumberedSpeedMultiplier();
	void M_SetEncumberedSpeedMultiplier(const float& value);

	//float	NightRiderTalentValue;		//Offset: 2560	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNightRiderTalentValue() const;
	float* M_PtrGetNightRiderTalentValue();
	void M_SetNightRiderTalentValue(const float& value);

	//class UBehaviorTree*	MountBehaviorTree;		//Offset: 2568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBehaviorTree* M_GetMountBehaviorTree() const;
	class UBehaviorTree** M_PtrGetMountBehaviorTree();
	void M_SetMountBehaviorTree(const class UBehaviorTree*& value);

	//TArray<struct FVector>	Waypoints;		//Offset: 2576	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetWaypoints() const;
	TArray<struct FVector>* M_PtrGetWaypoints();
	void M_SetWaypoints(const TArray<struct FVector>& value);

	//struct FTimerHandle	ImpaledItemsBleedTimerHandle;		//Offset: 2592	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetImpaledItemsBleedTimerHandle() const;
	struct FTimerHandle* M_PtrGetImpaledItemsBleedTimerHandle();
	void M_SetImpaledItemsBleedTimerHandle(const struct FTimerHandle& value);

	//class USoundBase*	DieCue;		//Offset: 2600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundBase* M_GetDieCue() const;
	class USoundBase** M_PtrGetDieCue();
	void M_SetDieCue(const class USoundBase*& value);

	//float	DieCuePitch;		//Offset: 2608	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDieCuePitch() const;
	float* M_PtrGetDieCuePitch();
	void M_SetDieCuePitch(const float& value);

	//bool	AllowMountedInteraction;		//Offset: 2612	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAllowMountedInteraction() const;
	bool* M_PtrGetAllowMountedInteraction();
	void M_SetAllowMountedInteraction(const bool& value);

	//bool	IsTeleported;		//Offset: 2613	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsTeleported() const;
	bool* M_PtrGetIsTeleported();
	void M_SetIsTeleported(const bool& value);

	//bool	OccupyByNPC;		//Offset: 2614	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOccupyByNPC() const;
	bool* M_PtrGetOccupyByNPC();
	void M_SetOccupyByNPC(const bool& value);

	//bool	Save;		//Offset: 2615	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetSave() const;
	bool* M_PtrGetSave();
	void M_SetSave(const bool& value);

	//bool	IsRagdollActivationLocked;		//Offset: 2616	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollActivationLocked() const;
	bool* M_PtrGetIsRagdollActivationLocked();
	void M_SetIsRagdollActivationLocked(const bool& value);

	//float	RagdollStartTime;		//Offset: 2620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartTime() const;
	float* M_PtrGetRagdollStartTime();
	void M_SetRagdollStartTime(const float& value);

	//bool	ShouldUpdateRateOptimizationsBeEnabled;		//Offset: 2624	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldUpdateRateOptimizationsBeEnabled() const;
	bool* M_PtrGetShouldUpdateRateOptimizationsBeEnabled();
	void M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value);

	//struct FName	RagdollPoseSnapshot;		//Offset: 2628	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollPoseSnapshot() const;
	struct FName* M_PtrGetRagdollPoseSnapshot();
	void M_SetRagdollPoseSnapshot(const struct FName& value);

	//struct FName	RagdollBaseBone;		//Offset: 2636	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollBaseBone() const;
	struct FName* M_PtrGetRagdollBaseBone();
	void M_SetRagdollBaseBone(const struct FName& value);

	//bool	RagdollOnGround;		//Offset: 2644	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRagdollOnGround() const;
	bool* M_PtrGetRagdollOnGround();
	void M_SetRagdollOnGround(const bool& value);

	//float	RagdollStartMinHitSpeed;		//Offset: 2648	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartMinHitSpeed() const;
	float* M_PtrGetRagdollStartMinHitSpeed();
	void M_SetRagdollStartMinHitSpeed(const float& value);

	//float	RagdollStartMinHitAcceleration;		//Offset: 2652	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartMinHitAcceleration() const;
	float* M_PtrGetRagdollStartMinHitAcceleration();
	void M_SetRagdollStartMinHitAcceleration(const float& value);

	//struct FName	UnragdollTargetBone;		//Offset: 2656	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetUnragdollTargetBone() const;
	struct FName* M_PtrGetUnragdollTargetBone();
	void M_SetUnragdollTargetBone(const struct FName& value);

	//bool	IsRagdollOnHitEnabled;		//Offset: 2664	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollOnHitEnabled() const;
	bool* M_PtrGetIsRagdollOnHitEnabled();
	void M_SetIsRagdollOnHitEnabled(const bool& value);

	//class UParticleSystem*	DamageParticles;		//Offset: 2672	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UParticleSystem* M_GetDamageParticles() const;
	class UParticleSystem** M_PtrGetDamageParticles();
	void M_SetDamageParticles(const class UParticleSystem*& value);

	//bool	IsRagdollOnFallEnabled;		//Offset: 2680	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollOnFallEnabled() const;
	bool* M_PtrGetIsRagdollOnFallEnabled();
	void M_SetIsRagdollOnFallEnabled(const bool& value);

	//float	RagdollMinFallDamage;		//Offset: 2684	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollMinFallDamage() const;
	float* M_PtrGetRagdollMinFallDamage();
	void M_SetRagdollMinFallDamage(const float& value);

	//class UPhysicsAsset*	InactivePhysicsAsset;		//Offset: 2688	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactivePhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactivePhysicsAsset();
	void M_SetInactivePhysicsAsset(const class UPhysicsAsset*& value);

	//float	MeshCollisionDisableTime;		//Offset: 2696	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMeshCollisionDisableTime() const;
	float* M_PtrGetMeshCollisionDisableTime();
	void M_SetMeshCollisionDisableTime(const float& value);

	//TEnumAsByte<ECollisionEnabled>	TargetMeshCollisionType;		//Offset: 2700	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ECollisionEnabled> M_GetTargetMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGetTargetMeshCollisionType();
	void M_SetTargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//TEnumAsByte<ECollisionEnabled>	PreviousMeshCollisionType;		//Offset: 2701	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ECollisionEnabled> M_GetPreviousMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGetPreviousMeshCollisionType();
	void M_SetPreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//bool	IsPhysicsAssetSwitchingEnabled;		//Offset: 2702	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsPhysicsAssetSwitchingEnabled() const;
	bool* M_PtrGetIsPhysicsAssetSwitchingEnabled();
	void M_SetIsPhysicsAssetSwitchingEnabled(const bool& value);

	//bool	IsDistanceMeshCollisionOptimizationEnabled;		//Offset: 2703	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsDistanceMeshCollisionOptimizationEnabled() const;
	bool* M_PtrGetIsDistanceMeshCollisionOptimizationEnabled();
	void M_SetIsDistanceMeshCollisionOptimizationEnabled(const bool& value);

	//bool	IsBloodDecalsDecayEnabled;		//Offset: 2704	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsBloodDecalsDecayEnabled() const;
	bool* M_PtrGetIsBloodDecalsDecayEnabled();
	void M_SetIsBloodDecalsDecayEnabled(const bool& value);

	//float	BloodDecalsDecayTick;		//Offset: 2708	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBloodDecalsDecayTick() const;
	float* M_PtrGetBloodDecalsDecayTick();
	void M_SetBloodDecalsDecayTick(const float& value);

	//float	BloodDecalsLifeTime;		//Offset: 2712	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBloodDecalsLifeTime() const;
	float* M_PtrGetBloodDecalsLifeTime();
	void M_SetBloodDecalsLifeTime(const float& value);

	//TArray<class UDecalComponent*>	BloodDecals;		//Offset: 2720	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<class UDecalComponent*> M_GetBloodDecals() const;
	TArray<class UDecalComponent*>* M_PtrGetBloodDecals();
	void M_SetBloodDecals(const TArray<class UDecalComponent*>& value);

	//struct FTimerHandle	BloodDecalsDecayTimer;		//Offset: 2736	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetBloodDecalsDecayTimer() const;
	struct FTimerHandle* M_PtrGetBloodDecalsDecayTimer();
	void M_SetBloodDecalsDecayTimer(const struct FTimerHandle& value);

	//TArray<TEnumAsByte<E_MultiplayerAnimalIdleType>>	NextPossibleIdleTypes;		//Offset: 2744	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_MultiplayerAnimalIdleType>> M_GetNextPossibleIdleTypes() const;
	TArray<TEnumAsByte<E_MultiplayerAnimalIdleType>>* M_PtrGetNextPossibleIdleTypes();
	void M_SetNextPossibleIdleTypes(const TArray<TEnumAsByte<E_MultiplayerAnimalIdleType>>& value);

	//class AActor*	AITarget;		//Offset: 2760	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetAITarget() const;
	class AActor** M_PtrGetAITarget();
	void M_SetAITarget(const class AActor*& value);

	//struct FTransform	InitialMeshRelativeTransform;		//Offset: 2768	Size: 48	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FTransform M_GetInitialMeshRelativeTransform() const;
	struct FTransform* M_PtrGetInitialMeshRelativeTransform();
	void M_SetInitialMeshRelativeTransform(const struct FTransform& value);

	//TMap<class AActor*, float>	CombatActors;		//Offset: 2816	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, float> M_GetCombatActors() const;
	TMap<class AActor*, float>* M_PtrGetCombatActors();
	void M_SetCombatActors(const TMap<class AActor*, float>& value);

	//struct FTimerHandle	UpdateCombatActorsTimer;		//Offset: 2896	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetUpdateCombatActorsTimer() const;
	struct FTimerHandle* M_PtrGetUpdateCombatActorsTimer();
	void M_SetUpdateCombatActorsTimer(const struct FTimerHandle& value);

	//bool	IsStuck;		//Offset: 2904	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsStuck() const;
	bool* M_PtrGetIsStuck();
	void M_SetIsStuck(const bool& value);

	//struct FVector	PreviousStuckLocation;		//Offset: 2908	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPreviousStuckLocation() const;
	struct FVector* M_PtrGetPreviousStuckLocation();
	void M_SetPreviousStuckLocation(const struct FVector& value);

	//bool	IsUnstuckLocationReady;		//Offset: 2920	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsUnstuckLocationReady() const;
	bool* M_PtrGetIsUnstuckLocationReady();
	void M_SetIsUnstuckLocationReady(const bool& value);

	//struct FVector	UnstuckLocation;		//Offset: 2924	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetUnstuckLocation() const;
	struct FVector* M_PtrGetUnstuckLocation();
	void M_SetUnstuckLocation(const struct FVector& value);

	//class UEnvQueryInstanceBlueprintWrapper*	UnstuckQuery;		//Offset: 2936	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UEnvQueryInstanceBlueprintWrapper* M_GetUnstuckQuery() const;
	class UEnvQueryInstanceBlueprintWrapper** M_PtrGetUnstuckQuery();
	void M_SetUnstuckQuery(const class UEnvQueryInstanceBlueprintWrapper*& value);

	//float	DebugMovementOffset;		//Offset: 2944	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDebugMovementOffset() const;
	float* M_PtrGetDebugMovementOffset();
	void M_SetDebugMovementOffset(const float& value);

	//struct FVector	DebugMovementStartLocation;		//Offset: 2948	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetDebugMovementStartLocation() const;
	struct FVector* M_PtrGetDebugMovementStartLocation();
	void M_SetDebugMovementStartLocation(const struct FVector& value);

	//struct FTimerHandle	DebugMovementTimer;		//Offset: 2960	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetDebugMovementTimer() const;
	struct FTimerHandle* M_PtrGetDebugMovementTimer();
	void M_SetDebugMovementTimer(const struct FTimerHandle& value);

	//TEnumAsByte<E_AIPerceptionReaction>	DefaultReaction;		//Offset: 2968	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AIPerceptionReaction> M_GetDefaultReaction() const;
	TEnumAsByte<E_AIPerceptionReaction>* M_PtrGetDefaultReaction();
	void M_SetDefaultReaction(const TEnumAsByte<E_AIPerceptionReaction>& value);

	//TEnumAsByte<E_AIPerceptionReaction>	DefaultReactionCombat;		//Offset: 2969	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AIPerceptionReaction> M_GetDefaultReactionCombat() const;
	TEnumAsByte<E_AIPerceptionReaction>* M_PtrGetDefaultReactionCombat();
	void M_SetDefaultReactionCombat(const TEnumAsByte<E_AIPerceptionReaction>& value);

	//TMap<struct FName, TEnumAsByte<E_AIPerceptionReaction>>	ReactionsToTypes;		//Offset: 2976	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly
	TMap<struct FName, TEnumAsByte<E_AIPerceptionReaction>> M_GetReactionsToTypes() const;
	TMap<struct FName, TEnumAsByte<E_AIPerceptionReaction>>* M_PtrGetReactionsToTypes();
	void M_SetReactionsToTypes(const TMap<struct FName, TEnumAsByte<E_AIPerceptionReaction>>& value);

	//TEnumAsByte<E_AIPerceptionReaction>	ReactionProvoked;		//Offset: 3056	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AIPerceptionReaction> M_GetReactionProvoked() const;
	TEnumAsByte<E_AIPerceptionReaction>* M_PtrGetReactionProvoked();
	void M_SetReactionProvoked(const TEnumAsByte<E_AIPerceptionReaction>& value);

	//bool	IsProvoked;		//Offset: 3057	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsProvoked() const;
	bool* M_PtrGetIsProvoked();
	void M_SetIsProvoked(const bool& value);

	//struct FVector	DefaultSpawnLocation;		//Offset: 3060	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetDefaultSpawnLocation() const;
	struct FVector* M_PtrGetDefaultSpawnLocation();
	void M_SetDefaultSpawnLocation(const struct FVector& value);

	//float	DefaultSpawnRadius;		//Offset: 3072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultSpawnRadius() const;
	float* M_PtrGetDefaultSpawnRadius();
	void M_SetDefaultSpawnRadius(const float& value);

	//bool	IsDebugEnabled_;		//Offset: 3076	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsDebugEnabled_() const;
	bool* M_PtrGetIsDebugEnabled_();
	void M_SetIsDebugEnabled_(const bool& value);

	//struct FName	ActorType;		//Offset: 3080	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetActorType() const;
	struct FName* M_PtrGetActorType();
	void M_SetActorType(const struct FName& value);

	//float	Intimidation;		//Offset: 3088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIntimidation() const;
	float* M_PtrGetIntimidation();
	void M_SetIntimidation(const float& value);

	//float	IntimidationDecayTick;		//Offset: 3092	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIntimidationDecayTick() const;
	float* M_PtrGetIntimidationDecayTick();
	void M_SetIntimidationDecayTick(const float& value);

	//float	IntimidationDecaySpeed;		//Offset: 3096	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIntimidationDecaySpeed() const;
	float* M_PtrGetIntimidationDecaySpeed();
	void M_SetIntimidationDecaySpeed(const float& value);

	//struct FTimerHandle	IntimidationDecayTimer;		//Offset: 3104	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetIntimidationDecayTimer() const;
	struct FTimerHandle* M_PtrGetIntimidationDecayTimer();
	void M_SetIntimidationDecayTimer(const struct FTimerHandle& value);

	//float	AttackDamage;		//Offset: 3112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAttackDamage() const;
	float* M_PtrGetAttackDamage();
	void M_SetAttackDamage(const float& value);

	//float	FirstReactionDistance;		//Offset: 3116	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFirstReactionDistance() const;
	float* M_PtrGetFirstReactionDistance();
	void M_SetFirstReactionDistance(const float& value);

	//TMap<class AActor*, struct FVector>	ActorsSensedBySight;		//Offset: 3120	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, struct FVector> M_GetActorsSensedBySight() const;
	TMap<class AActor*, struct FVector>* M_PtrGetActorsSensedBySight();
	void M_SetActorsSensedBySight(const TMap<class AActor*, struct FVector>& value);

	//TMap<class AActor*, struct FVector>	ActorsSensedByHearing;		//Offset: 3200	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, struct FVector> M_GetActorsSensedByHearing() const;
	TMap<class AActor*, struct FVector>* M_PtrGetActorsSensedByHearing();
	void M_SetActorsSensedByHearing(const TMap<class AActor*, struct FVector>& value);

	//TMap<class AActor*, float>	PotentialAgitators;		//Offset: 3280	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, float> M_GetPotentialAgitators() const;
	TMap<class AActor*, float>* M_PtrGetPotentialAgitators();
	void M_SetPotentialAgitators(const TMap<class AActor*, float>& value);

	//class AController*	LastEventInstigator;		//Offset: 3360	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AController* M_GetLastEventInstigator() const;
	class AController** M_PtrGetLastEventInstigator();
	void M_SetLastEventInstigator(const class AController*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_AnimalBase(int32_t EntryPoint);

	void Heal();

	void SetHealth(float newHealth);

	void SetHealthNormalized(float newHealthNormalized);

	void SetMaxHealth(float newMaxHealth);

	void Kill();

	void OnUnstuckQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);

	void NotifyAttack(class AActor* AttackerActor);

	void UpdateMountCameraFoV(float FieldOfView);

	void Backwards_Axis(float Axis_Value);

	void Left_Axis(float Axis_Value);

	void JumpPressed(struct FKey Key);

	void JumpReleased(struct FKey Key);

	void MountSpecial();

	void SprintPressed(struct FKey Key);

	void SprintReleased(struct FKey Key);

	void OnRagdollStopped();

	void OnRagdollStarted();

	void OnPreRagdollStop();

	void OnPreRagdollStart();

	void IntimidationDecay();

	void Intimidate(class UObject* Intimidator, float InfluenceMultiplier);

	void ReceiveTick(float DeltaSeconds);

	void OnAnimalMovementModeChanged(EAnimalMovementMode newAnimalMovementMode, EAnimalMovementMode previousAnimalMovementMode);

	void Right_Axis(float Axis_Value);

	void Down_Axis(float Axis_Value);

	void DismountPressed(struct FKey Key);

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void CauseBleeding(float BleedDamage, float BleedDuration);

	void BleedCancel();

	void Splat(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, class UPhysicalMaterial* PhysMat);

	void ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);

	void DealtDamage(class AActor* Target);

	void ParticleFinished(class UParticleSystemComponent* PSystem);

	void SpawnHitParticleEffectsMulticast(class AActor* DamageCauser, bool IsHardHit, struct FVector Location, struct FRotator Rotation);

	void Set_Animal_Gait_Event(TEnumAsByte<E_Gait> New_ALS_Gait);

	void FallingEvent();

	void StartFalling();

	void EndFalling();

	void SetIdleTypeServer(TEnumAsByte<E_MultiplayerAnimalIdleType> idleType);

	void BloodDecalDecay();

	void SetOccupied(class APawn* Character);

	void DismountReleased(struct FKey Key);

	void MountStop();

	void SetMeshCollisionKeepTime_BPI(float Keep_Time);

	void WalkPressed(struct FKey Key);

	void WalkReleased(struct FKey Key);

	void SetShouldSprint(bool ShouldSprint);

	void LookAtOnMount(struct FRotator Rotation);

	void CameraActionPressed(struct FKey Key);

	void CameraActionReleased(struct FKey Key);

	void MouseWheel_Axis(float Axis_Value);

	void SetPlayerID_BPI(struct FGuid PlayerId);

	void MountSummon_BPI();

	void ChangeMountBehvaiorTree_BPI(bool ToHusbandry);

	void SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type);

	void OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void UnstuckMount_BPI();

	void SetOccupyByNPC(bool OccupyByNPC);

	void PoisonAnimal(float Poison);

	void BleedFromImpaledItems();

	void SetIsInWater(bool InWater, float Intensity);

	void FarOptimization();

	void MediumOptimization();

	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, int32_t ChunkID);

	void CloseOptimization();

	void NoneOptimization();

	void DisableNPC();

	void EnableNPC();

	void RemoveImpaledItem(class AActor* ImpaledItem);

	void AddImpaledItem(class AActor* ImpaledItem);

	void PerformActorInteraction();

	void InteractInput(bool KeyDown);

	void SetNightRiderTalent_BPI(float Value);

	void OnMoveForSkinningFinished();

	void PauseBrain();

	void UnpauseBrain();

	void ReceiveDestroyed();

	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void ReceiveBeginPlay();

	void SetStaminaConsumptionModificator_BPI(float Value);

	void SetAnimalLocationAllPlayers_BPI(struct FVector Location);

	void SetAnimalLocation_Multicast(struct FVector Location);

	void SetAnimalLocation_Server(struct FVector Location);

	void SetAnimalLocationAndRotation_Multicast(struct FVector Location, struct FRotator Rotation);

	void SetAnimalLocationAndRotation_Server(struct FVector Location, struct FRotator Rotation);

	void SetAnimalLocationAndRotationAllPlayers_BPI(struct FVector Location, struct FRotator Rotation);

	void OnSummonFinished();

	void OnSummoned_Far();

	void OnSummoned_Close();

	void ReceivePossessed(class AController* NewController);

	void DestroyToolMesh_BPI();

	void SetSleepSlotIndex(int32_t SleepSlotIndex);

	void SetSleepValues();

	void SavePoseSnapshot_BPI(struct FName PoseNameToSave);

	void Play_GetUp_Anim_BPI(bool FromLeftSide);

	void SetBirdTypeBPI(bool IsWaterType);

	void SetHusbandryAnimalCapacity(float Capacity);

	void SetAnimalCustomName(struct FString CustomName);

	void UpdateMountEquipment(bool Unequip, struct FST_ItemOutfit ItemData);

	void SetForSale(bool ForSale);

	void Set_Animal_Movement_Mode_BPI(EAnimalMovementMode MovementMode);

	void SetEngageTargetBPI(class AActor* Causer);

	void SetFear(int32_t Fear);

	void AddItemToHouse();

	void Interact_Client(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void RotateYaw(float Angle);

	void RotatePitch(float Angle);

	void DetachItem();

	void SetRotateMode(bool RotateLeft, bool RotateRight);

	void StopAttackFunction();

	void StartAttackFunction(bool Timer, struct FName Socket);

	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);

	void ShowInspectorUI();

	void IsLookedAt(bool Active);

	void UserConstructionScript();

	void SetCurrentHP(float CurrentHP);

	void AnimalBleed();

	void Set_Max_Walk_Speed(float MaxWalkSpeed);

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

	void BoostComponentDebug();

	void SetMaterialVariation();

	void CheckIsUnderMap();

	void UpdateReputationOnHit(float SubtractedHealth);

	void CalculateRandomBloodEffectSize(struct FVector* Size);

	void GetIdleType(TEnumAsByte<E_MultiplayerAnimalIdleType>* idleType);

	void OnRep_Variation();

	float CalculateTargetSpeed();

	void DebugValidateCollision();

	float CalculateTargetAcceleration();

	void AddCombatActor(class AActor* CombatActor, bool ProvokeToAttack);

	void RemoveAllCombatActors();

	void RemoveCombatActor(class AActor* CombatActor);

	void GetCombatActors(TArray<class AActor*>* CombatActors)/* const*/;

	void UpdateCombatActors();

	void Set_Is_Stuck(bool IsStuck);

	void GetIsStuck(bool* IsStuck)/* const*/;

	void DebugMovement();

	void DebugMovementStart();

	void OnRep_Ownership();

	void SetDefaultSpawn(struct FVector DefaultSpawnLocation, float DefaultSpawnRadius);

	void GetSpawn(struct FVector* SpawnLocation, struct FRotator* SpawnRotation, float* SpawnRadius, struct FVector* SpawnExtent)/* const*/;

	void IsInSpawnRadius(bool* IsInSpawnRadius)/* const*/;

	void DetermineSize();

	void GetAttackDamage(float* AttackDamage)/* const*/;

	void UpdateSettings();

	bool CanStartRagdoll();

	void UnlockAchievementForCausers(struct FName Achievement);

	void AddStatProgressForCausers(struct FName StatName, int32_t StatValue, bool TreatAsSet);

	void GetFirstReactionDistance(float* FirstReactionDistance)/* const*/;

	void CheckIfNPC_HasSeenAnimalAbuse(struct FVector StartVector, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool* Observed);

	float CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void GetDamageResistance(class UDamageType* DamageTypeClass, float* DamageResistance)/* const*/;

	bool IsAlive()/* const*/;

	float GetMaxHealth()/* const*/;

	bool HasFullHealth()/* const*/;

	float GetHealthNormalized()/* const*/;

	float GetHealth()/* const*/;

	void OnHealthChanged();

	void OnDeath();

	void OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType);

	void OnPointDamageReceived(float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType);

	void GetFear(int32_t* FearFactor);

	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);

	void GetInventoryComponent_AnimalBPI(class UActorComponent** InventoryComponent);

	void GetForSale(bool* ForSale);

	void GetPrice_Buy(TScriptInterface<class UBPI_Trading_C> Trading, int32_t* Price);

	void GetPrice_Sell(TScriptInterface<class UBPI_Trading_C> Trading, int32_t* Price);

	void GetAnimalWorldLocation(struct FVector* Location);

	void GetAnimalHeight(float* Height);

	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);

	void GetDead(bool* Dead);

	void WarnAnimal(class AActor* EngageActor, bool* Success);

	void GetAnimalCustomName(struct FString* CustomName, struct FString* CustomName_PlayerNickname, struct FString* CustomName_PlayerNetID);

	void GetOccupyByNPC(bool* OccupyByNPC);

	void GetSkinningSocketLocation(struct FVector* SkinningSocketLocation);

	void GetAnimalType(TEnumAsByte<E_AnimalType>* AnimalType)/* const*/;

	void GetMass(float* Mass);

	void GetMesh_BPI(class USkeletalMeshComponent** Mesh);

	void GetSleepSlotIndex(int32_t* SleepSlotIndex);

	void IsMoving_BPI(bool* IsMoving);

	void IAnimal_CalculateEncumberedSpeed(bool* Success);

	void IAnimal_GetTime(struct FST_Time* Time);

	void GetOwnership_BPI(TEnumAsByte<E_Ownership>* Ownership);

	void GetVoiceComponent(class UAudioComponent** Voice);

	void GetHalfAnimalHeight(float* HalfHeight);

	void GetAnimalRadius(float* Radius);

	struct FText GetAnimalName_BPI();

	void GetStatsComponent_AnimalBPI(class UActorComponent** StatsComponent);

	void GetIsInWater(bool* Value);

	void GetInteractedCharacter_BPI(class AActor** Actor);

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

	void GetInteractAnimationForViewmode_BPI(TEnumAsByte<E_ViewMode> ViewMode, class UAnimMontage** InteractionAnimationMontage);

	void IsInRestrictedArea(struct FVector Location, bool* bLocked);

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

	void GetMountID_BPI(struct FGuid* MountID);

	void GetMountEncumberedSpeedMultiplier_BPI(float* EncumberedSpeedMultiplier);

	bool IsSomeonesMount_BPI();

	bool WasMounted_BPI();

	void GetMountTalentValues_BPI(int32_t* CurrentTalentLevel, TArray<float>* TalentValues);

	void GetOwnerID_BPI(struct FGuid* OwnerID);

	void GetDistance(float* Distance);

	void GetOptimalizationStage(int32_t* Stage);

	void GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/;

	void GetActorType(struct FName* ActorType)/* const*/;

	void CanSenseOthers(bool* CanSenseOthers)/* const*/;

	void CanBeSensed(bool* CanBeSensed)/* const*/;

	void GetCurrentAttackers(struct FName ActorsType, TArray<class AActor*>* CurrentAttackerActors, int32_t* MaxConcurrentAttackersCount)/* const*/;

	void GetName(struct FName* Name)/* const*/;

	void GetDisplayName(struct FText* DisplayName)/* const*/;

	void ConvertHit(float damageToApply, struct FVector hitFromDirection, struct FHitResult* Hit, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void CanDamage(struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, bool* CanDamage)/* const*/;

#pragma endregion
};
};