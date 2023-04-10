#pragma once
#include "Structs.h"
#include "BP_AnimalBase/BP_AnimalBase_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_FlyingAnimalBase.BP_FlyingAnimalBase_C
// Super: BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C
// Size: 3288
// Size inherited: 2528
/////////////////////////////////////////////
namespace UE4 {
class ABP_FlyingAnimalBase_C : public ABP_AnimalBase_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 2528	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteraction_Chest;		//Offset: 2536	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteraction_Chest() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteraction_Chest();
	void M_SetBP_AquaticInteraction_Chest(const class UBP_AquaticInteraction_C*& value);

	//class UNavigationInvokerComponent*	NavigationInvoker;		//Offset: 2544	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UNavigationInvokerComponent* M_GetNavigationInvoker() const;
	class UNavigationInvokerComponent** M_PtrGetNavigationInvoker();
	void M_SetNavigationInvoker(const class UNavigationInvokerComponent*& value);

	//class UAIPerceptionStimuliSourceComponent*	AIPerceptionStimuliSource;		//Offset: 2552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAIPerceptionStimuliSourceComponent* M_GetAIPerceptionStimuliSource() const;
	class UAIPerceptionStimuliSourceComponent** M_PtrGetAIPerceptionStimuliSource();
	void M_SetAIPerceptionStimuliSource(const class UAIPerceptionStimuliSourceComponent*& value);

	//class UAIPerceptionComponent*	AIPerception;		//Offset: 2560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAIPerceptionComponent* M_GetAIPerception() const;
	class UAIPerceptionComponent** M_PtrGetAIPerception();
	void M_SetAIPerception(const class UAIPerceptionComponent*& value);

	//float	AnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159;		//Offset: 2568	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159() const;
	float* M_PtrGetAnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159();
	void M_SetAnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159(const float& value);

	//TEnumAsByte<ETimelineDirection>	AnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159;		//Offset: 2572	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetAnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetAnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159();
	void M_SetAnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	AnimPhysicsBlend;		//Offset: 2576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetAnimPhysicsBlend() const;
	class UTimelineComponent** M_PtrGetAnimPhysicsBlend();
	void M_SetAnimPhysicsBlend(const class UTimelineComponent*& value);

	//class UBehaviorTree*	BTReference;		//Offset: 2584	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBehaviorTree* M_GetBTReference() const;
	class UBehaviorTree** M_PtrGetBTReference();
	void M_SetBTReference(const class UBehaviorTree*& value);

	//TEnumAsByte<EBP_Enum_RoamMode>	RoamMode;		//Offset: 2592	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_RoamMode> M_GetRoamMode() const;
	TEnumAsByte<EBP_Enum_RoamMode>* M_PtrGetRoamMode();
	void M_SetRoamMode(const TEnumAsByte<EBP_Enum_RoamMode>& value);

	//TEnumAsByte<EBP_Enum_AIRoamBehavior>	RoamBehavior;		//Offset: 2593	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_AIRoamBehavior> M_GetRoamBehavior() const;
	TEnumAsByte<EBP_Enum_AIRoamBehavior>* M_PtrGetRoamBehavior();
	void M_SetRoamBehavior(const TEnumAsByte<EBP_Enum_AIRoamBehavior>& value);

	//class AActor*	SensedActor;		//Offset: 2600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetSensedActor() const;
	class AActor** M_PtrGetSensedActor();
	void M_SetSensedActor(const class AActor*& value);

	//struct FAIStimulus	RegisteredStimulus;		//Offset: 2608	Size: 60	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
	struct FAIStimulus M_GetRegisteredStimulus() const;
	struct FAIStimulus* M_PtrGetRegisteredStimulus();
	void M_SetRegisteredStimulus(const struct FAIStimulus& value);

	//bool	Sight;		//Offset: 2668	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSight() const;
	bool* M_PtrGetSight();
	void M_SetSight(const bool& value);

	//bool	Sound;		//Offset: 2669	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSound() const;
	bool* M_PtrGetSound();
	void M_SetSound(const bool& value);

	//bool	Touch;		//Offset: 2670	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTouch() const;
	bool* M_PtrGetTouch();
	void M_SetTouch(const bool& value);

	//bool	Damage;		//Offset: 2671	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDamage() const;
	bool* M_PtrGetDamage();
	void M_SetDamage(const bool& value);

	//struct FVector	StimulusLocation;		//Offset: 2672	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetStimulusLocation() const;
	struct FVector* M_PtrGetStimulusLocation();
	void M_SetStimulusLocation(const struct FVector& value);

	//TEnumAsByte<EBP_Enum_StimulusDetected>	StimulusDetected;		//Offset: 2684	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_StimulusDetected> M_GetStimulusDetected() const;
	TEnumAsByte<EBP_Enum_StimulusDetected>* M_PtrGetStimulusDetected();
	void M_SetStimulusDetected(const TEnumAsByte<EBP_Enum_StimulusDetected>& value);

	//struct FName	EngageActorKey;		//Offset: 2688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetEngageActorKey() const;
	struct FName* M_PtrGetEngageActorKey();
	void M_SetEngageActorKey(const struct FName& value);

	//TEnumAsByte<EBP_Enum_GroundEngageBehavior>	EngageBehavior;		//Offset: 2696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_GroundEngageBehavior> M_GetEngageBehavior() const;
	TEnumAsByte<EBP_Enum_GroundEngageBehavior>* M_PtrGetEngageBehavior();
	void M_SetEngageBehavior(const TEnumAsByte<EBP_Enum_GroundEngageBehavior>& value);

	//struct FName	FoundBaitKey;		//Offset: 2700	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetFoundBaitKey() const;
	struct FName* M_PtrGetFoundBaitKey();
	void M_SetFoundBaitKey(const struct FName& value);

	//TArray<struct FName>	EngageTags;		//Offset: 2712	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName> M_GetEngageTags() const;
	TArray<struct FName>* M_PtrGetEngageTags();
	void M_SetEngageTags(const TArray<struct FName>& value);

	//bool	EngageTagFound;		//Offset: 2728	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEngageTagFound() const;
	bool* M_PtrGetEngageTagFound();
	void M_SetEngageTagFound(const bool& value);

	//TEnumAsByte<EBP_Enum_EngageTargetBehavior>	EngageTargetBehavior;		//Offset: 2729	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_EngageTargetBehavior> M_GetEngageTargetBehavior() const;
	TEnumAsByte<EBP_Enum_EngageTargetBehavior>* M_PtrGetEngageTargetBehavior();
	void M_SetEngageTargetBehavior(const TEnumAsByte<EBP_Enum_EngageTargetBehavior>& value);

	//float	MaxEngageDistance;		//Offset: 2732	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMaxEngageDistance() const;
	float* M_PtrGetMaxEngageDistance();
	void M_SetMaxEngageDistance(const float& value);

	//float	MovementAcceptanceRadius;		//Offset: 2736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMovementAcceptanceRadius() const;
	float* M_PtrGetMovementAcceptanceRadius();
	void M_SetMovementAcceptanceRadius(const float& value);

	//class AActor*	EngagedActor;		//Offset: 2744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetEngagedActor() const;
	class AActor** M_PtrGetEngagedActor();
	void M_SetEngagedActor(const class AActor*& value);

	//float	AggroCounter;		//Offset: 2752	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAggroCounter() const;
	float* M_PtrGetAggroCounter();
	void M_SetAggroCounter(const float& value);

	//struct FTimerHandle	AggroTimerHandle;		//Offset: 2760	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAggroTimerHandle() const;
	struct FTimerHandle* M_PtrGetAggroTimerHandle();
	void M_SetAggroTimerHandle(const struct FTimerHandle& value);

	//bool	CanEngage;		//Offset: 2768	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanEngage() const;
	bool* M_PtrGetCanEngage();
	void M_SetCanEngage(const bool& value);

	//TEnumAsByte<EBP_Enum_GroundEngageBehavior>	OriginalEngageBehavior;		//Offset: 2769	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_GroundEngageBehavior> M_GetOriginalEngageBehavior() const;
	TEnumAsByte<EBP_Enum_GroundEngageBehavior>* M_PtrGetOriginalEngageBehavior();
	void M_SetOriginalEngageBehavior(const TEnumAsByte<EBP_Enum_GroundEngageBehavior>& value);

	//int32_t	AnimIndex;		//Offset: 2772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAnimIndex() const;
	int32_t* M_PtrGetAnimIndex();
	void M_SetAnimIndex(const int32_t& value);

	//bool	WantsToBreed;		//Offset: 2776	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWantsToBreed() const;
	bool* M_PtrGetWantsToBreed();
	void M_SetWantsToBreed(const bool& value);

	//class AActor*	NearbyPartner;		//Offset: 2784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetNearbyPartner() const;
	class AActor** M_PtrGetNearbyPartner();
	void M_SetNearbyPartner(const class AActor*& value);

	//struct FBP_Struct_GroundAnimalBehavior_AnimalDetails	Behavior_Details;		//Offset: 2792	Size: 36	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails M_GetBehavior_Details() const;
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails* M_PtrGetBehavior_Details();
	void M_SetBehavior_Details(const struct FBP_Struct_GroundAnimalBehavior_AnimalDetails& value);

	//struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack	Behavior_Details_Attack;		//Offset: 2828	Size: 24	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack M_GetBehavior_Details_Attack() const;
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack* M_PtrGetBehavior_Details_Attack();
	void M_SetBehavior_Details_Attack(const struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack& value);

	//struct FBP_Struct_GroundAnimaBehavior_Defend	Behavior_Defend;		//Offset: 2856	Size: 24	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimaBehavior_Defend M_GetBehavior_Defend() const;
	struct FBP_Struct_GroundAnimaBehavior_Defend* M_PtrGetBehavior_Defend();
	void M_SetBehavior_Defend(const struct FBP_Struct_GroundAnimaBehavior_Defend& value);

	//struct FVector	DefenseLocation;		//Offset: 2880	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetDefenseLocation() const;
	struct FVector* M_PtrGetDefenseLocation();
	void M_SetDefenseLocation(const struct FVector& value);

	//struct FName	DefenseStateKey;		//Offset: 2892	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetDefenseStateKey() const;
	struct FName* M_PtrGetDefenseStateKey();
	void M_SetDefenseStateKey(const struct FName& value);

	//TEnumAsByte<EBP_Enum_DefenseState>	DefenseState;		//Offset: 2900	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_DefenseState> M_GetDefenseState() const;
	TEnumAsByte<EBP_Enum_DefenseState>* M_PtrGetDefenseState();
	void M_SetDefenseState(const TEnumAsByte<EBP_Enum_DefenseState>& value);

	//struct FBP_Struct_GroundAnimal_Animations	IdleAnimations;		//Offset: 2904	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetIdleAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetIdleAnimations();
	void M_SetIdleAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Animations	EngageAnimations;		//Offset: 2928	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetEngageAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetEngageAnimations();
	void M_SetEngageAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//bool	StopForEngageAnimation;		//Offset: 2952	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetStopForEngageAnimation() const;
	bool* M_PtrGetStopForEngageAnimation();
	void M_SetStopForEngageAnimation(const bool& value);

	//struct FBP_Struct_GroundAnimal_Animations	AttackAnimations;		//Offset: 2960	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetAttackAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetAttackAnimations();
	void M_SetAttackAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Animations	DeathAnimations;		//Offset: 2984	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetDeathAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetDeathAnimations();
	void M_SetDeathAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Animations	HitAnimations;		//Offset: 3008	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetHitAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetHitAnimations();
	void M_SetHitAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Animations	EatAnimations;		//Offset: 3032	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetEatAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetEatAnimations();
	void M_SetEatAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Animations	DrinkAnimations;		//Offset: 3056	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetDrinkAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetDrinkAnimations();
	void M_SetDrinkAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Animations	RestAnimations;		//Offset: 3080	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetRestAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetRestAnimations();
	void M_SetRestAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//struct FBP_Struct_GroundAnimal_Debug	Debug_Animal;		//Offset: 3104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Debug M_GetDebug_Animal() const;
	struct FBP_Struct_GroundAnimal_Debug* M_PtrGetDebug_Animal();
	void M_SetDebug_Animal(const struct FBP_Struct_GroundAnimal_Debug& value);

	//int32_t	RandomAnimation;		//Offset: 3108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRandomAnimation() const;
	int32_t* M_PtrGetRandomAnimation();
	void M_SetRandomAnimation(const int32_t& value);

	//bool	SetTextToEngaged;		//Offset: 3112	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSetTextToEngaged() const;
	bool* M_PtrGetSetTextToEngaged();
	void M_SetSetTextToEngaged(const bool& value);

	//bool	SetTextToActive;		//Offset: 3113	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSetTextToActive() const;
	bool* M_PtrGetSetTextToActive();
	void M_SetSetTextToActive(const bool& value);

	//struct FBP_Struct_GroundAnimal_CurrentMontage	CurrentAnimation;		//Offset: 3120	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_CurrentMontage M_GetCurrentAnimation() const;
	struct FBP_Struct_GroundAnimal_CurrentMontage* M_PtrGetCurrentAnimation();
	void M_SetCurrentAnimation(const struct FBP_Struct_GroundAnimal_CurrentMontage& value);

	//int32_t	SpecificAnimIndex;		//Offset: 3144	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSpecificAnimIndex() const;
	int32_t* M_PtrGetSpecificAnimIndex();
	void M_SetSpecificAnimIndex(const int32_t& value);

	//bool	AlreadyDead;		//Offset: 3148	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAlreadyDead() const;
	bool* M_PtrGetAlreadyDead();
	void M_SetAlreadyDead(const bool& value);

	//struct FBP_Struct_GroundAnimal_Animations	LayingAnimations;		//Offset: 3152	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FBP_Struct_GroundAnimal_Animations M_GetLayingAnimations() const;
	struct FBP_Struct_GroundAnimal_Animations* M_PtrGetLayingAnimations();
	void M_SetLayingAnimations(const struct FBP_Struct_GroundAnimal_Animations& value);

	//TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>	LayingEndAnimations;		//Offset: 3176	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FBP_Struct_GroundAnimal_AnimationDetails> M_GetLayingEndAnimations() const;
	TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>* M_PtrGetLayingEndAnimations();
	void M_SetLayingEndAnimations(const TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>& value);

	//struct FName	AttackTraceSocket;		//Offset: 3192	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetAttackTraceSocket() const;
	struct FName* M_PtrGetAttackTraceSocket();
	void M_SetAttackTraceSocket(const struct FName& value);

	//struct FTimerHandle	AttackTimer;		//Offset: 3200	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAttackTimer() const;
	struct FTimerHandle* M_PtrGetAttackTimer();
	void M_SetAttackTimer(const struct FTimerHandle& value);

	//TArray<class AActor*>	AttackedActors;		//Offset: 3208	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetAttackedActors() const;
	TArray<class AActor*>* M_PtrGetAttackedActors();
	void M_SetAttackedActors(const TArray<class AActor*>& value);

	//bool	SpeedLocked;		//Offset: 3224	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpeedLocked() const;
	bool* M_PtrGetSpeedLocked();
	void M_SetSpeedLocked(const bool& value);

	//bool	IsCaveAnimal;		//Offset: 3225	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsCaveAnimal() const;
	bool* M_PtrGetIsCaveAnimal();
	void M_SetIsCaveAnimal(const bool& value);

	//TEnumAsByte<EBP_Enum_AIState>	AIState;		//Offset: 3226	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_AIState> M_GetAIState() const;
	TEnumAsByte<EBP_Enum_AIState>* M_PtrGetAIState();
	void M_SetAIState(const TEnumAsByte<EBP_Enum_AIState>& value);

	//TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>	BiggestNeed;		//Offset: 3227	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> M_GetBiggestNeed() const;
	TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>* M_PtrGetBiggestNeed();
	void M_SetBiggestNeed(const TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>& value);

	//TEnumAsByte<EBP_Enum_AIRoamBehavior>	OriginalRoamBehavior;		//Offset: 3228	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<EBP_Enum_AIRoamBehavior> M_GetOriginalRoamBehavior() const;
	TEnumAsByte<EBP_Enum_AIRoamBehavior>* M_PtrGetOriginalRoamBehavior();
	void M_SetOriginalRoamBehavior(const TEnumAsByte<EBP_Enum_AIRoamBehavior>& value);

	//float	FlyingSpeed;		//Offset: 3232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFlyingSpeed() const;
	float* M_PtrGetFlyingSpeed();
	void M_SetFlyingSpeed(const float& value);

	//float	SwimmingSpeed;		//Offset: 3236	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSwimmingSpeed() const;
	float* M_PtrGetSwimmingSpeed();
	void M_SetSwimmingSpeed(const float& value);

	//struct FTimerHandle	PerceptionCheckHandler;		//Offset: 3240	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPerceptionCheckHandler() const;
	struct FTimerHandle* M_PtrGetPerceptionCheckHandler();
	void M_SetPerceptionCheckHandler(const struct FTimerHandle& value);

	//struct FTimerHandle	NaturalNeedTimerHandle;		//Offset: 3248	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetNaturalNeedTimerHandle() const;
	struct FTimerHandle* M_PtrGetNaturalNeedTimerHandle();
	void M_SetNaturalNeedTimerHandle(const struct FTimerHandle& value);

	//class AActor*	mcValidActor;		//Offset: 3256	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetmcValidActor() const;
	class AActor** M_PtrGetmcValidActor();
	void M_SetmcValidActor(const class AActor*& value);

	//class AActor*	OverlappedActor;		//Offset: 3264	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetOverlappedActor() const;
	class AActor** M_PtrGetOverlappedActor();
	void M_SetOverlappedActor(const class AActor*& value);

	//TAssetPtr<class FLandingFinished__DelegateSignature>	LandingFinished;		//Offset: 3272	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FLandingFinished__DelegateSignature> M_GetLandingFinished() const;
	TAssetPtr<class FLandingFinished__DelegateSignature>* M_PtrGetLandingFinished();
	void M_SetLandingFinished(const TAssetPtr<class FLandingFinished__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingAnimalBase.BP_FlyingAnimalBase_C");
		return ptr;
	}

#pragma region Functions
	void LandingFinished__DelegateSignature();

	void ExecuteUbergraph_BP_FlyingAnimalBase(int32_t EntryPoint);

	void DayCycle_RestStart();

	void DayCycle_RestEnd();

	void DayCycle_GoingToRest();

	void Laydown_Start();

	void Laydown_End();

	void AIDir_ReachedTarget();

	void AnimalHideEnd();

	void AnimalTookDamage();

	void BreedingStart(bool Spawning_Offspring);

	void BreedingEnd(bool Spawning_Offspring);

	void EventEngagementStart();

	void EventEngagementEnd();

	void AnimNotify_IdleStart();

	void AnimNotify_IdleEnd();

	void AnimNotify_EngageStart();

	void AnimNotify_EngageEnd();

	void AnimNotify_AttackStart();

	void AnimNotify_AttackEnd();

	void AnimNotify_DeathStart();

	void AnimNotify_DeathEnd();

	void AnimNotify_HitStart();

	void AnimNotify_HitEnd();

	void AnimNotify_EatStart();

	void AnimNotify_EatEnd();

	void AnimNotify_DrinkStart();

	void AnimNotify_DrinkEnd();

	void AnimNotify_RestStart();

	void AnimNotify_RestEnd();

	void AnimNotify_LayStart();

	void AnimNotify_LayEnd();

	void AttackTrace();

	void BlendPhysics();

	void StartAttackFunction(bool Timer, struct FName Socket);

	void StopAttackFunction();

	void CheckPhysicsState();

	void EventPlaySound(class USoundBase* Sound_Cue, float Volume_Multiplier, float Pitch_Multiplier, float Start_Time, class USoundAttenuation* Attenuation_Settings, class USoundConcurrency* Concurrency_Settings);

	void EventCheckAggro(class AActor* Actor);

	void EventAggroTimer();

	void EventTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void EventDead();

	void ReceiveBeginPlay();

	void ReceiveTick(float DeltaSeconds);

	void EnableNPC();

	void DisableNPC();

	void CloseOptimization();

	void MediumOptimization();

	void NoneOptimization();

	void FarOptimization();

	void EventPlayAnimation(TEnumAsByte<EBP_Enum_AnimType> AnimationType);

	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, struct FAIStimulus Stimulus);

	void EventCheckPerception();

	void OnLandingFinished();

	void AnimPhysicsBlend__UpdateFunc();

	void AnimPhysicsBlend__FinishedFunc();

	void fnCheckForStimulus(TArray<struct FAIStimulus>* Stimuli, bool* Detected_Something);

	void fnSetRoamBehavior(float ChanceToStay, TEnumAsByte<EBP_Enum_AIRoamBehavior>* NewRoamBehavior);

	void fnDoMeleeDamage(struct FName Socket);

	void fnSetEngageTarget(class AActor* SensedActor);

	void fnFlee(float SpeedMuliplier);

	void fnDisengage();

	void fnSetEngageParams();

	void fnCheckForActorInMelee(bool* Actor_Found);

	void fnAnimIdle_ChooseIndex(int32_t* Animation_Index);

	void fnAnimEngage_ChooseIndex(int32_t* Animation_Index);

	void fnAnimAttack_ChooseIndex(int32_t* Animation_Index);

	void fnAnimDeath_ChooseIndex(int32_t* Animation_Index);

	void fnAnimHit_ChooseIndex(int32_t* Animation_Index);

	void fnAnimEat_ChooseIndex(int32_t* Animation_Index);

	void fnAnimDrink_ChooseIndex(int32_t* Animation_Index);

	void fnAnimRest_ChooseIndex(int32_t* Animation_Index);

	void SetBlackboardValues_Object(TEnumAsByte<EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject* Object);

	void SetBlackboardValues_Boolean(TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool Value);

	void GetBlackboardValues_Object(TEnumAsByte<EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject** ObjectValue);

	void GetBlackboardValues_Boolean(TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue);

	void SetBlackboardValues_Vector(TEnumAsByte<EBP_Enum_Animal_BlackboardVector> BlackboardVector, struct FVector Value);

	void SetBlackboardValues_Float(TEnumAsByte<EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float Value);

	void SetBlackboardValues_Int(TEnumAsByte<EBP_Enum_Animal_BlackboardInt> BlackboardInt, int32_t Value);

	void GetBlackboardValues_Vector(TEnumAsByte<EBP_Enum_Animal_BlackboardVector> BlackboardVector, struct FVector* VectorValue);

	void GetBlackboardValues_Float(TEnumAsByte<EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float* FloatValue);

	void GetBlackboardValues_Int(TEnumAsByte<EBP_Enum_Animal_BlackboardInt> BlackboardInt, int32_t* IntValue);

	void SetBlackboardValues_RunMode(TEnumAsByte<EBP_Enum_AI_RunMode> RunMode);

	void GetBlackboardValues_RunMode(TEnumAsByte<EBP_Enum_AI_RunMode>* RunMode);

	void SetBlackboardValues_AIState(TEnumAsByte<EBP_Enum_AIState> AIState);

	void SetBlackboardValues_RoamBehavior(TEnumAsByte<EBP_Enum_AIRoamBehavior> RoamBehavior);

	void SetBlackboardValues_BiggestNeed(TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> BiggestNeed);

	void SetBlackboardValues_EngageBehavior(TEnumAsByte<EBP_Enum_GroundEngageBehavior> EngageBehavior);

	void SetBlackboardValues_FeedingBehavior(TEnumAsByte<EBP_Enum_FeedingBehavior> FeedingBehavior);

	void SetBlackboardValues_DefenseState(TEnumAsByte<EBP_Enum_DefenseState> DefenseState);

	void SetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action> Action);

	void SetBlackboardValues_RestState(TEnumAsByte<EBP_Enum_RestState> RestState);

	void GetBlackboardValues_AIState(TEnumAsByte<EBP_Enum_AIState>* AIState);

	void GetBlackboardValues_RoamBehavior(TEnumAsByte<EBP_Enum_AIRoamBehavior>* RoamBehavior);

	void GetBlackboardValues_BiggestNeed(TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>* BiggestNeed);

	void GetBlackboardValues_EngageBehavior(TEnumAsByte<EBP_Enum_GroundEngageBehavior>* EngageBehavior);

	void GetBlackboardValues_FeedingBehavior(TEnumAsByte<EBP_Enum_FeedingBehavior>* FeedingBehavior);

	void GetBlackboardValues_DefenseState(TEnumAsByte<EBP_Enum_DefenseState>* DefenseState);

	void GetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action>* Action);

	void GetBlackboardValues_RestState(TEnumAsByte<EBP_Enum_RestState>* RestState);

	void InitiateCombat();

	bool FledToSafePlace();

	void RunFromCampfire(class AActor* Campfire);

	void ChangeIsWaterType(bool isWaterType);

	TAssetPtr<class FNone_1210075531> InheritableComponentHandler();

	void UserConstructionScript();

	void SetCurrentHP(float CurrentHP);

	void AnimalBleed();

	void CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed);

	void ChooseMaxWalkSpeed(float* MaxWalkSpeed);

#pragma endregion
};
};