#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/CharacterBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// Super: Class Medieval_Dynasty.CharacterBase
// Size: 5580
// Size inherited: 1264
/////////////////////////////////////////////
namespace UE4 {
class ABP_BaseCharacter_C : public ACharacterBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 1264	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UBoxComponent*	CollisionShape;		//Offset: 1272	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetCollisionShape() const;
	class UBoxComponent** M_PtrGetCollisionShape();
	void M_SetCollisionShape(const class UBoxComponent*& value);

	//class UCollisionComponent*	Collision;		//Offset: 1280	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCollisionComponent* M_GetCollision() const;
	class UCollisionComponent** M_PtrGetCollision();
	void M_SetCollision(const class UCollisionComponent*& value);

	//class UPerceptionStimuliSourceComponent*	PerceptionStimuliSource;		//Offset: 1288	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPerceptionStimuliSourceComponent* M_GetPerceptionStimuliSource() const;
	class UPerceptionStimuliSourceComponent** M_PtrGetPerceptionStimuliSource();
	void M_SetPerceptionStimuliSource(const class UPerceptionStimuliSourceComponent*& value);

	//class UPerceptionComponent*	Perception;		//Offset: 1296	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPerceptionComponent* M_GetPerception() const;
	class UPerceptionComponent** M_PtrGetPerception();
	void M_SetPerception(const class UPerceptionComponent*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionLeftHand;		//Offset: 1304	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionLeftHand() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionLeftHand();
	void M_SetBP_AquaticInteractionLeftHand(const class UBP_AquaticInteraction_C*& value);

	//class UWidgetComponent*	UI_Inspector;		//Offset: 1312	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UWidgetComponent* M_GetUI_Inspector() const;
	class UWidgetComponent** M_PtrGetUI_Inspector();
	void M_SetUI_Inspector(const class UWidgetComponent*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionLeftFoot;		//Offset: 1320	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionLeftFoot() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionLeftFoot();
	void M_SetBP_AquaticInteractionLeftFoot(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionRightFoot;		//Offset: 1328	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionRightFoot() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionRightFoot();
	void M_SetBP_AquaticInteractionRightFoot(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteraction;		//Offset: 1336	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteraction() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteraction();
	void M_SetBP_AquaticInteraction(const class UBP_AquaticInteraction_C*& value);

	//class UBP_AquaticInteraction_C*	BP_AquaticInteractionRightHand;		//Offset: 1344	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticInteraction_C* M_GetBP_AquaticInteractionRightHand() const;
	class UBP_AquaticInteraction_C** M_PtrGetBP_AquaticInteractionRightHand();
	void M_SetBP_AquaticInteractionRightHand(const class UBP_AquaticInteraction_C*& value);

	//class USkeletalMeshComponent*	Beard;		//Offset: 1352	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetBeard() const;
	class USkeletalMeshComponent** M_PtrGetBeard();
	void M_SetBeard(const class USkeletalMeshComponent*& value);

	//class USkeletalMeshComponent*	Hat;		//Offset: 1360	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHat() const;
	class USkeletalMeshComponent** M_PtrGetHat();
	void M_SetHat(const class USkeletalMeshComponent*& value);

	//class USKModularComponent*	SKModular;		//Offset: 1368	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USKModularComponent* M_GetSKModular() const;
	class USKModularComponent** M_PtrGetSKModular();
	void M_SetSKModular(const class USKModularComponent*& value);

	//class UBP_CombatComponent_C*	BP_CombatComponent;		//Offset: 1376	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_CombatComponent_C* M_GetBP_CombatComponent() const;
	class UBP_CombatComponent_C** M_PtrGetBP_CombatComponent();
	void M_SetBP_CombatComponent(const class UBP_CombatComponent_C*& value);

	//class UMountRiderComponent*	MountRider;		//Offset: 1384	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UMountRiderComponent* M_GetMountRider() const;
	class UMountRiderComponent** M_PtrGetMountRider();
	void M_SetMountRider(const class UMountRiderComponent*& value);

	//class USkeletalMeshComponent*	Hair;		//Offset: 1392	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetHair() const;
	class USkeletalMeshComponent** M_PtrGetHair();
	void M_SetHair(const class USkeletalMeshComponent*& value);

	//class UBP_AquaticBuoyancy_C*	BP_AquaticBuoyancy;		//Offset: 1400	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AquaticBuoyancy_C* M_GetBP_AquaticBuoyancy() const;
	class UBP_AquaticBuoyancy_C** M_PtrGetBP_AquaticBuoyancy();
	void M_SetBP_AquaticBuoyancy(const class UBP_AquaticBuoyancy_C*& value);

	//class UBP_StageInteractionComponent_C*	BP_StageInteractionComponent;		//Offset: 1408	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_StageInteractionComponent_C* M_GetBP_StageInteractionComponent() const;
	class UBP_StageInteractionComponent_C** M_PtrGetBP_StageInteractionComponent();
	void M_SetBP_StageInteractionComponent(const class UBP_StageInteractionComponent_C*& value);

	//class USkeletalMeshComponent*	Torso;		//Offset: 1416	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetTorso() const;
	class USkeletalMeshComponent** M_PtrGetTorso();
	void M_SetTorso(const class USkeletalMeshComponent*& value);

	//class UBP_CharacterStatsComponent_C*	BP_CharacterStatsComponent;		//Offset: 1424	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_CharacterStatsComponent_C* M_GetBP_CharacterStatsComponent() const;
	class UBP_CharacterStatsComponent_C** M_PtrGetBP_CharacterStatsComponent();
	void M_SetBP_CharacterStatsComponent(const class UBP_CharacterStatsComponent_C*& value);

	//class UBP_CharacterRelationsComponent_C*	BP_RelationsComponent;		//Offset: 1432	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_CharacterRelationsComponent_C* M_GetBP_RelationsComponent() const;
	class UBP_CharacterRelationsComponent_C** M_PtrGetBP_RelationsComponent();
	void M_SetBP_RelationsComponent(const class UBP_CharacterRelationsComponent_C*& value);

	//class UInventoryComponent_C*	InventoryComponent;		//Offset: 1440	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UInventoryComponent_C* M_GetInventoryComponent() const;
	class UInventoryComponent_C** M_PtrGetInventoryComponent();
	void M_SetInventoryComponent(const class UInventoryComponent_C*& value);

	//class UAIPerceptionStimuliSourceComponent*	AIPerceptionStimuliSource;		//Offset: 1448	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAIPerceptionStimuliSourceComponent* M_GetAIPerceptionStimuliSource() const;
	class UAIPerceptionStimuliSourceComponent** M_PtrGetAIPerceptionStimuliSource();
	void M_SetAIPerceptionStimuliSource(const class UAIPerceptionStimuliSourceComponent*& value);

	//float	EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99;		//Offset: 1456	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99() const;
	float* M_PtrGetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99();
	void M_SetEyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99(const float& value);

	//TEnumAsByte<ETimelineDirection>	EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99;		//Offset: 1460	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99();
	void M_SetEyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	EyesStateTL;		//Offset: 1464	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetEyesStateTL() const;
	class UTimelineComponent** M_PtrGetEyesStateTL();
	void M_SetEyesStateTL(const class UTimelineComponent*& value);

	//float	Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A;		//Offset: 1472	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const;
	float* M_PtrGetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A();
	void M_SetBlinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const float& value);

	//TEnumAsByte<ETimelineDirection>	Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A;		//Offset: 1476	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A();
	void M_SetBlinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	Blinking;		//Offset: 1480	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetBlinking() const;
	class UTimelineComponent** M_PtrGetBlinking();
	void M_SetBlinking(const class UTimelineComponent*& value);

	//float	FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813;		//Offset: 1488	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813() const;
	float* M_PtrGetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813();
	void M_SetFistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813(const float& value);

	//TEnumAsByte<ETimelineDirection>	FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813;		//Offset: 1492	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813();
	void M_SetFistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	FistFightingTimeline;		//Offset: 1496	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetFistFightingTimeline() const;
	class UTimelineComponent** M_PtrGetFistFightingTimeline();
	void M_SetFistFightingTimeline(const class UTimelineComponent*& value);

	//bool	ShouldSprint;		//Offset: 1504	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldSprint() const;
	bool* M_PtrGetShouldSprint();
	void M_SetShouldSprint(const bool& value);

	//float	LookUp_DownRate;		//Offset: 1508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLookUp_DownRate() const;
	float* M_PtrGetLookUp_DownRate();
	void M_SetLookUp_DownRate(const float& value);

	//float	LookLeft_RightRate;		//Offset: 1512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLookLeft_RightRate() const;
	float* M_PtrGetLookLeft_RightRate();
	void M_SetLookLeft_RightRate(const float& value);

	//struct FVector	MovementInput;		//Offset: 1516	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetMovementInput() const;
	struct FVector* M_PtrGetMovementInput();
	void M_SetMovementInput(const struct FVector& value);

	//float	aimYawDelta;		//Offset: 1528	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetaimYawDelta() const;
	float* M_PtrGetaimYawDelta();
	void M_SetaimYawDelta(const float& value);

	//float	AimYawRate;		//Offset: 1532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAimYawRate() const;
	float* M_PtrGetAimYawRate();
	void M_SetAimYawRate(const float& value);

	//float	MovementInput_VelocityDifference;		//Offset: 1536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMovementInput_VelocityDifference() const;
	float* M_PtrGetMovementInput_VelocityDifference();
	void M_SetMovementInput_VelocityDifference(const float& value);

	//float	Target_CharacterRotationDifference;		//Offset: 1540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTarget_CharacterRotationDifference() const;
	float* M_PtrGetTarget_CharacterRotationDifference();
	void M_SetTarget_CharacterRotationDifference(const float& value);

	//float	Direction;		//Offset: 1544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDirection() const;
	float* M_PtrGetDirection();
	void M_SetDirection(const float& value);

	//struct FRotator	characterRotation;		//Offset: 1548	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetcharacterRotation() const;
	struct FRotator* M_PtrGetcharacterRotation();
	void M_SetcharacterRotation(const struct FRotator& value);

	//struct FRotator	LookingRotation;		//Offset: 1560	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetLookingRotation() const;
	struct FRotator* M_PtrGetLookingRotation();
	void M_SetLookingRotation(const struct FRotator& value);

	//struct FRotator	lastVelocityRotation;		//Offset: 1572	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetlastVelocityRotation() const;
	struct FRotator* M_PtrGetlastVelocityRotation();
	void M_SetlastVelocityRotation(const struct FRotator& value);

	//struct FRotator	lastMovementInputRotation;		//Offset: 1584	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetlastMovementInputRotation() const;
	struct FRotator* M_PtrGetlastMovementInputRotation();
	void M_SetlastMovementInputRotation(const struct FRotator& value);

	//bool	IsMoving;		//Offset: 1596	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//bool	hasMovementInput;		//Offset: 1597	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GethasMovementInput() const;
	bool* M_PtrGethasMovementInput();
	void M_SethasMovementInput(const bool& value);

	//TEnumAsByte<E_Gait>	GaitType;		//Offset: 1598	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Gait> M_GetGaitType() const;
	TEnumAsByte<E_Gait>* M_PtrGetGaitType();
	void M_SetGaitType(const TEnumAsByte<E_Gait>& value);

	//TEnumAsByte<E_Stance>	stance;		//Offset: 1599	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Stance> M_Getstance() const;
	TEnumAsByte<E_Stance>* M_PtrGetstance();
	void M_Setstance(const TEnumAsByte<E_Stance>& value);

	//TEnumAsByte<E_RotationMode>	RotationMode;		//Offset: 1600	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_RotationMode> M_GetRotationMode() const;
	TEnumAsByte<E_RotationMode>* M_PtrGetRotationMode();
	void M_SetRotationMode(const TEnumAsByte<E_RotationMode>& value);

	//TEnumAsByte<E_MovementMode>	MovementMode;		//Offset: 1601	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MovementMode> M_GetMovementMode() const;
	TEnumAsByte<E_MovementMode>* M_PtrGetMovementMode();
	void M_SetMovementMode(const TEnumAsByte<E_MovementMode>& value);

	//TEnumAsByte<E_MovementMode>	PrevMovementMode;		//Offset: 1602	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_MovementMode> M_GetPrevMovementMode() const;
	TEnumAsByte<E_MovementMode>* M_PtrGetPrevMovementMode();
	void M_SetPrevMovementMode(const TEnumAsByte<E_MovementMode>& value);

	//TEnumAsByte<E_CardinalDirection>	cardinalDirection;		//Offset: 1603	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_CardinalDirection> M_GetcardinalDirection() const;
	TEnumAsByte<E_CardinalDirection>* M_PtrGetcardinalDirection();
	void M_SetcardinalDirection(const TEnumAsByte<E_CardinalDirection>& value);

	//struct FRotator	TargetRotation;		//Offset: 1604	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetTargetRotation() const;
	struct FRotator* M_PtrGetTargetRotation();
	void M_SetTargetRotation(const struct FRotator& value);

	//float	WalkingSpeed;		//Offset: 1616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWalkingSpeed() const;
	float* M_PtrGetWalkingSpeed();
	void M_SetWalkingSpeed(const float& value);

	//float	runningSpeed;		//Offset: 1620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetrunningSpeed() const;
	float* M_PtrGetrunningSpeed();
	void M_SetrunningSpeed(const float& value);

	//float	sprintingSpeed;		//Offset: 1624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetsprintingSpeed() const;
	float* M_PtrGetsprintingSpeed();
	void M_SetsprintingSpeed(const float& value);

	//float	crouchingSpeed;		//Offset: 1628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetcrouchingSpeed() const;
	float* M_PtrGetcrouchingSpeed();
	void M_SetcrouchingSpeed(const float& value);

	//float	WalkingAcceleration;		//Offset: 1632	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWalkingAcceleration() const;
	float* M_PtrGetWalkingAcceleration();
	void M_SetWalkingAcceleration(const float& value);

	//float	runningAcceleration;		//Offset: 1636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetrunningAcceleration() const;
	float* M_PtrGetrunningAcceleration();
	void M_SetrunningAcceleration(const float& value);

	//float	walkingDeceleration;		//Offset: 1640	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetwalkingDeceleration() const;
	float* M_PtrGetwalkingDeceleration();
	void M_SetwalkingDeceleration(const float& value);

	//float	runningDeceleration;		//Offset: 1644	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetrunningDeceleration() const;
	float* M_PtrGetrunningDeceleration();
	void M_SetrunningDeceleration(const float& value);

	//float	walkingGroundFriction;		//Offset: 1648	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetwalkingGroundFriction() const;
	float* M_PtrGetwalkingGroundFriction();
	void M_SetwalkingGroundFriction(const float& value);

	//float	runningGroundFriction;		//Offset: 1652	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetrunningGroundFriction() const;
	float* M_PtrGetrunningGroundFriction();
	void M_SetrunningGroundFriction(const float& value);

	//struct FRotator	JumpRotation;		//Offset: 1656	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetJumpRotation() const;
	struct FRotator* M_PtrGetJumpRotation();
	void M_SetJumpRotation(const struct FRotator& value);

	//float	RotationOffset;		//Offset: 1668	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRotationOffset() const;
	float* M_PtrGetRotationOffset();
	void M_SetRotationOffset(const float& value);

	//float	rotationRateMultiplier;		//Offset: 1672	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetrotationRateMultiplier() const;
	float* M_PtrGetrotationRateMultiplier();
	void M_SetrotationRateMultiplier(const float& value);

	//float	ForwardAxisValue;		//Offset: 1676	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetForwardAxisValue() const;
	float* M_PtrGetForwardAxisValue();
	void M_SetForwardAxisValue(const float& value);

	//float	RightAxisValue;		//Offset: 1680	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRightAxisValue() const;
	float* M_PtrGetRightAxisValue();
	void M_SetRightAxisValue(const float& value);

	//TEnumAsByte<E_ViewMode>	ViewMode;		//Offset: 1684	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ViewMode> M_GetViewMode() const;
	TEnumAsByte<E_ViewMode>* M_PtrGetViewMode();
	void M_SetViewMode(const TEnumAsByte<E_ViewMode>& value);

	//bool	Aiming;		//Offset: 1685	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetAiming() const;
	bool* M_PtrGetAiming();
	void M_SetAiming(const bool& value);

	//struct FName	VoiceSocket;		//Offset: 1688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetVoiceSocket() const;
	struct FName* M_PtrGetVoiceSocket();
	void M_SetVoiceSocket(const struct FName& value);

	//bool	ShowTraces;		//Offset: 1696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowTraces() const;
	bool* M_PtrGetShowTraces();
	void M_SetShowTraces(const bool& value);

	//bool	ShowSettings;		//Offset: 1697	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowSettings() const;
	bool* M_PtrGetShowSettings();
	void M_SetShowSettings(const bool& value);

	//struct FName	PelvisBone;		//Offset: 1700	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetPelvisBone() const;
	struct FName* M_PtrGetPelvisBone();
	void M_SetPelvisBone(const struct FName& value);

	//struct FName	RagdollPoseSnapshot;		//Offset: 1708	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetRagdollPoseSnapshot() const;
	struct FName* M_PtrGetRagdollPoseSnapshot();
	void M_SetRagdollPoseSnapshot(const struct FName& value);

	//bool	RagdollOnGround;		//Offset: 1716	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRagdollOnGround() const;
	bool* M_PtrGetRagdollOnGround();
	void M_SetRagdollOnGround(const bool& value);

	//struct FVector	RagdollVelocity;		//Offset: 1720	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRagdollVelocity() const;
	struct FVector* M_PtrGetRagdollVelocity();
	void M_SetRagdollVelocity(const struct FVector& value);

	//bool	Inventory_Open;		//Offset: 1732	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInventory_Open() const;
	bool* M_PtrGetInventory_Open();
	void M_SetInventory_Open(const bool& value);

	//bool	ShouldCrouch;		//Offset: 1733	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldCrouch() const;
	bool* M_PtrGetShouldCrouch();
	void M_SetShouldCrouch(const bool& value);

	//int32_t	SelectedItemID;		//Offset: 1736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedItemID() const;
	int32_t* M_PtrGetSelectedItemID();
	void M_SetSelectedItemID(const int32_t& value);

	//struct FHitResult	HitReference;		//Offset: 1740	Size: 136	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
	struct FHitResult M_GetHitReference() const;
	struct FHitResult* M_PtrGetHitReference();
	void M_SetHitReference(const struct FHitResult& value);

	//class ABP_MasterHoldableItem_C*	HeldItem;		//Offset: 1880	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetHeldItem() const;
	class ABP_MasterHoldableItem_C** M_PtrGetHeldItem();
	void M_SetHeldItem(const class ABP_MasterHoldableItem_C*& value);

	//bool	BlockEquipping;		//Offset: 1888	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockEquipping() const;
	bool* M_PtrGetBlockEquipping();
	void M_SetBlockEquipping(const bool& value);

	//TArray<struct FName>	Tag;		//Offset: 1896	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetTag() const;
	TArray<struct FName>* M_PtrGetTag();
	void M_SetTag(const TArray<struct FName>& value);

	//float	EncumberedSpeedMultiplier;		//Offset: 1912	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEncumberedSpeedMultiplier() const;
	float* M_PtrGetEncumberedSpeedMultiplier();
	void M_SetEncumberedSpeedMultiplier(const float& value);

	//bool	BuildingMenuOpen;		//Offset: 1916	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBuildingMenuOpen() const;
	bool* M_PtrGetBuildingMenuOpen();
	void M_SetBuildingMenuOpen(const bool& value);

	//bool	BlockInteraction;		//Offset: 1917	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockInteraction() const;
	bool* M_PtrGetBlockInteraction();
	void M_SetBlockInteraction(const bool& value);

	//class ABP_MasterHoldableItem_C*	Off_HandItem;		//Offset: 1920	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetOff_HandItem() const;
	class ABP_MasterHoldableItem_C** M_PtrGetOff_HandItem();
	void M_SetOff_HandItem(const class ABP_MasterHoldableItem_C*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 1928	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//struct FST_ChunkData	FieldChunk;		//Offset: 1936	Size: 112	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	struct FST_ChunkData M_GetFieldChunk() const;
	struct FST_ChunkData* M_PtrGetFieldChunk();
	void M_SetFieldChunk(const struct FST_ChunkData& value);

	//struct FST_ChunkData	HitFieldChunk;		//Offset: 2048	Size: 112	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	struct FST_ChunkData M_GetHitFieldChunk() const;
	struct FST_ChunkData* M_PtrGetHitFieldChunk();
	void M_SetHitFieldChunk(const struct FST_ChunkData& value);

	//struct FST_CharacterModules	DefaultCharacterModules;		//Offset: 2160	Size: 240	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
	struct FST_CharacterModules M_GetDefaultCharacterModules() const;
	struct FST_CharacterModules* M_PtrGetDefaultCharacterModules();
	void M_SetDefaultCharacterModules(const struct FST_CharacterModules& value);

	//TArray<struct FST_MeshDynamicMaterials>	DynamicMaterials;		//Offset: 2400	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_MeshDynamicMaterials> M_GetDynamicMaterials() const;
	TArray<struct FST_MeshDynamicMaterials>* M_PtrGetDynamicMaterials();
	void M_SetDynamicMaterials(const TArray<struct FST_MeshDynamicMaterials>& value);

	//bool	UseHeadForFullBodyAnimations;		//Offset: 2416	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseHeadForFullBodyAnimations() const;
	bool* M_PtrGetUseHeadForFullBodyAnimations();
	void M_SetUseHeadForFullBodyAnimations(const bool& value);

	//float	InteractionCameraSlowDown;		//Offset: 2420	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionCameraSlowDown() const;
	float* M_PtrGetInteractionCameraSlowDown();
	void M_SetInteractionCameraSlowDown(const float& value);

	//float	InteractionMovementSlowDown;		//Offset: 2424	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionMovementSlowDown() const;
	float* M_PtrGetInteractionMovementSlowDown();
	void M_SetInteractionMovementSlowDown(const float& value);

	//struct FRotator	UsePawnCameraRelativeRotation;		//Offset: 2428	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetUsePawnCameraRelativeRotation() const;
	struct FRotator* M_PtrGetUsePawnCameraRelativeRotation();
	void M_SetUsePawnCameraRelativeRotation(const struct FRotator& value);

	//TAssetPtr<class FCameraFadeFinished__DelegateSignature>	CameraFadeFinished;		//Offset: 2440	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FCameraFadeFinished__DelegateSignature> M_GetCameraFadeFinished() const;
	TAssetPtr<class FCameraFadeFinished__DelegateSignature>* M_PtrGetCameraFadeFinished();
	void M_SetCameraFadeFinished(const TAssetPtr<class FCameraFadeFinished__DelegateSignature>& value);

	//TArray<TEnumAsByte<E_Tools>>	TorchUsableToolTypes;		//Offset: 2456	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_Tools>> M_GetTorchUsableToolTypes() const;
	TArray<TEnumAsByte<E_Tools>>* M_PtrGetTorchUsableToolTypes();
	void M_SetTorchUsableToolTypes(const TArray<TEnumAsByte<E_Tools>>& value);

	//bool	IsSwooned;		//Offset: 2472	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetIsSwooned() const;
	bool* M_PtrGetIsSwooned();
	void M_SetIsSwooned(const bool& value);

	//bool	IsSprintKeyDown;		//Offset: 2473	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSprintKeyDown() const;
	bool* M_PtrGetIsSprintKeyDown();
	void M_SetIsSprintKeyDown(const bool& value);

	//float	DefaultFPCameraFOV;		//Offset: 2476	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultFPCameraFOV() const;
	float* M_PtrGetDefaultFPCameraFOV();
	void M_SetDefaultFPCameraFOV(const float& value);

	//TAssetPtr<class FOnMovementFinished__DelegateSignature>	OnMovementFinished;		//Offset: 2480	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnMovementFinished__DelegateSignature> M_GetOnMovementFinished() const;
	TAssetPtr<class FOnMovementFinished__DelegateSignature>* M_PtrGetOnMovementFinished();
	void M_SetOnMovementFinished(const TAssetPtr<class FOnMovementFinished__DelegateSignature>& value);

	//bool	Sitting;		//Offset: 2496	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetSitting() const;
	bool* M_PtrGetSitting();
	void M_SetSitting(const bool& value);

	//bool	GettingUp;		//Offset: 2497	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGettingUp() const;
	bool* M_PtrGetGettingUp();
	void M_SetGettingUp(const bool& value);

	//bool	SatDown;		//Offset: 2498	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSatDown() const;
	bool* M_PtrGetSatDown();
	void M_SetSatDown(const bool& value);

	//bool	Sleeping;		//Offset: 2499	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetSleeping() const;
	bool* M_PtrGetSleeping();
	void M_SetSleeping(const bool& value);

	//TEnumAsByte<E_SleepingDirection>	SleepingDirection;		//Offset: 2500	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SleepingDirection> M_GetSleepingDirection() const;
	TEnumAsByte<E_SleepingDirection>* M_PtrGetSleepingDirection();
	void M_SetSleepingDirection(const TEnumAsByte<E_SleepingDirection>& value);

	//TAssetPtr<class FOnSitIdleEntered__DelegateSignature>	OnSitIdleEntered;		//Offset: 2504	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSitIdleEntered__DelegateSignature> M_GetOnSitIdleEntered() const;
	TAssetPtr<class FOnSitIdleEntered__DelegateSignature>* M_PtrGetOnSitIdleEntered();
	void M_SetOnSitIdleEntered(const TAssetPtr<class FOnSitIdleEntered__DelegateSignature>& value);

	//TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>	OnSleepIdleEntered;		//Offset: 2520	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSleepIdleEntered__DelegateSignature> M_GetOnSleepIdleEntered() const;
	TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>* M_PtrGetOnSleepIdleEntered();
	void M_SetOnSleepIdleEntered(const TAssetPtr<class FOnSleepIdleEntered__DelegateSignature>& value);

	//bool	UseBedSleepingPose;		//Offset: 2536	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseBedSleepingPose() const;
	bool* M_PtrGetUseBedSleepingPose();
	void M_SetUseBedSleepingPose(const bool& value);

	//bool	CraftingMenuOpen;		//Offset: 2537	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCraftingMenuOpen() const;
	bool* M_PtrGetCraftingMenuOpen();
	void M_SetCraftingMenuOpen(const bool& value);

	//bool	IsCrafting;		//Offset: 2538	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCrafting() const;
	bool* M_PtrGetIsCrafting();
	void M_SetIsCrafting(const bool& value);

	//bool	InstantBuilding;		//Offset: 2539	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInstantBuilding() const;
	bool* M_PtrGetInstantBuilding();
	void M_SetInstantBuilding(const bool& value);

	//float	EndLoopSectionDuration;		//Offset: 2540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEndLoopSectionDuration() const;
	float* M_PtrGetEndLoopSectionDuration();
	void M_SetEndLoopSectionDuration(const float& value);

	//float	CraftingTime;		//Offset: 2544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCraftingTime() const;
	float* M_PtrGetCraftingTime();
	void M_SetCraftingTime(const float& value);

	//bool	HadToolBeforeCrafting;		//Offset: 2548	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadToolBeforeCrafting() const;
	bool* M_PtrGetHadToolBeforeCrafting();
	void M_SetHadToolBeforeCrafting(const bool& value);

	//bool	SpawnedOffHandAnimItem;		//Offset: 2549	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnedOffHandAnimItem() const;
	bool* M_PtrGetSpawnedOffHandAnimItem();
	void M_SetSpawnedOffHandAnimItem(const bool& value);

	//bool	HadOffhandBeforeCrafting;		//Offset: 2550	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadOffhandBeforeCrafting() const;
	bool* M_PtrGetHadOffhandBeforeCrafting();
	void M_SetHadOffhandBeforeCrafting(const bool& value);

	//bool	ChoiceMenuOpen;		//Offset: 2551	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChoiceMenuOpen() const;
	bool* M_PtrGetChoiceMenuOpen();
	void M_SetChoiceMenuOpen(const bool& value);

	//class UAnimMontage*	CurrentPickingMontage;		//Offset: 2552	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetCurrentPickingMontage() const;
	class UAnimMontage** M_PtrGetCurrentPickingMontage();
	void M_SetCurrentPickingMontage(const class UAnimMontage*& value);

	//bool	bLockMovement;		//Offset: 2560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetbLockMovement() const;
	bool* M_PtrGetbLockMovement();
	void M_SetbLockMovement(const bool& value);

	//float	MontageSectionStartTime;		//Offset: 2564	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMontageSectionStartTime() const;
	float* M_PtrGetMontageSectionStartTime();
	void M_SetMontageSectionStartTime(const float& value);

	//bool	BlockCraftingMenuMovement;		//Offset: 2568	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockCraftingMenuMovement() const;
	bool* M_PtrGetBlockCraftingMenuMovement();
	void M_SetBlockCraftingMenuMovement(const bool& value);

	//bool	BlockOffhandEquipping;		//Offset: 2569	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockOffhandEquipping() const;
	bool* M_PtrGetBlockOffhandEquipping();
	void M_SetBlockOffhandEquipping(const bool& value);

	//float	Oldness;		//Offset: 2572	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetOldness() const;
	float* M_PtrGetOldness();
	void M_SetOldness(const float& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 2576	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//class ABP_MasterHoldableItem_C*	LeftHandReference;		//Offset: 2584	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetLeftHandReference() const;
	class ABP_MasterHoldableItem_C** M_PtrGetLeftHandReference();
	void M_SetLeftHandReference(const class ABP_MasterHoldableItem_C*& value);

	//class ABP_MasterHoldableItem_C*	RightHandReference;		//Offset: 2592	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterHoldableItem_C* M_GetRightHandReference() const;
	class ABP_MasterHoldableItem_C** M_PtrGetRightHandReference();
	void M_SetRightHandReference(const class ABP_MasterHoldableItem_C*& value);

	//float	FistFightingAlpha;		//Offset: 2600	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFistFightingAlpha() const;
	float* M_PtrGetFistFightingAlpha();
	void M_SetFistFightingAlpha(const float& value);

	//bool	IsSick;		//Offset: 2604	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSick() const;
	bool* M_PtrGetIsSick();
	void M_SetIsSick(const bool& value);

	//bool	IsInjured;		//Offset: 2605	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInjured() const;
	bool* M_PtrGetIsInjured();
	void M_SetIsInjured(const bool& value);

	//bool	IsInIdleState;		//Offset: 2606	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInIdleState() const;
	bool* M_PtrGetIsInIdleState();
	void M_SetIsInIdleState(const bool& value);

	//TEnumAsByte<E_IdleStates>	IdleState;		//Offset: 2607	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_IdleStates> M_GetIdleState() const;
	TEnumAsByte<E_IdleStates>* M_PtrGetIdleState();
	void M_SetIdleState(const TEnumAsByte<E_IdleStates>& value);

	//struct FTimerHandle	FallingTimerHandle;		//Offset: 2608	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, Deprecated, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFallingTimerHandle() const;
	struct FTimerHandle* M_PtrGetFallingTimerHandle();
	void M_SetFallingTimerHandle(const struct FTimerHandle& value);

	//float	FallDamageToApply;		//Offset: 2616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallDamageToApply() const;
	float* M_PtrGetFallDamageToApply();
	void M_SetFallDamageToApply(const float& value);

	//unsigned char	StandingIdlePose;		//Offset: 2620	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetStandingIdlePose() const;
	unsigned char* M_PtrGetStandingIdlePose();
	void M_SetStandingIdlePose(const unsigned char& value);

	//unsigned char	TalkingIdlePose;		//Offset: 2621	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetTalkingIdlePose() const;
	unsigned char* M_PtrGetTalkingIdlePose();
	void M_SetTalkingIdlePose(const unsigned char& value);

	//unsigned char	LookingIdlePose;		//Offset: 2622	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetLookingIdlePose() const;
	unsigned char* M_PtrGetLookingIdlePose();
	void M_SetLookingIdlePose(const unsigned char& value);

	//unsigned char	OtherIdlePose;		//Offset: 2623	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetOtherIdlePose() const;
	unsigned char* M_PtrGetOtherIdlePose();
	void M_SetOtherIdlePose(const unsigned char& value);

	//TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>	OnIdleAnimEntered;		//Offset: 2624	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnIdleAnimEntered__DelegateSignature> M_GetOnIdleAnimEntered() const;
	TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>* M_PtrGetOnIdleAnimEntered();
	void M_SetOnIdleAnimEntered(const TAssetPtr<class FOnIdleAnimEntered__DelegateSignature>& value);

	//TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>	OnIdleAnimFinished;		//Offset: 2640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnIdleAnimFinished__DelegateSignature> M_GetOnIdleAnimFinished() const;
	TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>* M_PtrGetOnIdleAnimFinished();
	void M_SetOnIdleAnimFinished(const TAssetPtr<class FOnIdleAnimFinished__DelegateSignature>& value);

	//unsigned char	WavingIdlePose;		//Offset: 2656	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetWavingIdlePose() const;
	unsigned char* M_PtrGetWavingIdlePose();
	void M_SetWavingIdlePose(const unsigned char& value);

	//bool	HasLanded;		//Offset: 2657	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasLanded() const;
	bool* M_PtrGetHasLanded();
	void M_SetHasLanded(const bool& value);

	//TMap<TEnumAsByte<E_BodyParts>, int32_t>	BodyPartsIndexes;		//Offset: 2664	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_BodyParts>, int32_t> M_GetBodyPartsIndexes() const;
	TMap<TEnumAsByte<E_BodyParts>, int32_t>* M_PtrGetBodyPartsIndexes();
	void M_SetBodyPartsIndexes(const TMap<TEnumAsByte<E_BodyParts>, int32_t>& value);

	//struct FName	MeshesRowName;		//Offset: 2744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetMeshesRowName() const;
	struct FName* M_PtrGetMeshesRowName();
	void M_SetMeshesRowName(const struct FName& value);

	//struct FVector	PhysicsLocation;		//Offset: 2752	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPhysicsLocation() const;
	struct FVector* M_PtrGetPhysicsLocation();
	void M_SetPhysicsLocation(const struct FVector& value);

	//float	PhysicsVectorLength;		//Offset: 2764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPhysicsVectorLength() const;
	float* M_PtrGetPhysicsVectorLength();
	void M_SetPhysicsVectorLength(const float& value);

	//bool	IsWorking;		//Offset: 2768	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsWorking() const;
	bool* M_PtrGetIsWorking();
	void M_SetIsWorking(const bool& value);

	//TEnumAsByte<E_BagMode>	BagMode;		//Offset: 2769	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BagMode> M_GetBagMode() const;
	TEnumAsByte<E_BagMode>* M_PtrGetBagMode();
	void M_SetBagMode(const TEnumAsByte<E_BagMode>& value);

	//bool	IsTakingBreak;		//Offset: 2770	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsTakingBreak() const;
	bool* M_PtrGetIsTakingBreak();
	void M_SetIsTakingBreak(const bool& value);

	//TAssetPtr<class FOnInteractionFinished__DelegateSignature>	OnInteractionFinished;		//Offset: 2776	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInteractionFinished__DelegateSignature> M_GetOnInteractionFinished() const;
	TAssetPtr<class FOnInteractionFinished__DelegateSignature>* M_PtrGetOnInteractionFinished();
	void M_SetOnInteractionFinished(const TAssetPtr<class FOnInteractionFinished__DelegateSignature>& value);

	//int32_t	InteractionSlotIndex;		//Offset: 2792	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInteractionSlotIndex() const;
	int32_t* M_PtrGetInteractionSlotIndex();
	void M_SetInteractionSlotIndex(const int32_t& value);

	//bool	HadShieldBeforeCrafting;		//Offset: 2796	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadShieldBeforeCrafting() const;
	bool* M_PtrGetHadShieldBeforeCrafting();
	void M_SetHadShieldBeforeCrafting(const bool& value);

	//bool	SpawnedMainHandAnimItem;		//Offset: 2797	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnedMainHandAnimItem() const;
	bool* M_PtrGetSpawnedMainHandAnimItem();
	void M_SetSpawnedMainHandAnimItem(const bool& value);

	//TEnumAsByte<E_BuildingModifications>	BuildingMode;		//Offset: 2798	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BuildingModifications> M_GetBuildingMode() const;
	TEnumAsByte<E_BuildingModifications>* M_PtrGetBuildingMode();
	void M_SetBuildingMode(const TEnumAsByte<E_BuildingModifications>& value);

	//bool	IsInActivity;		//Offset: 2799	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInActivity() const;
	bool* M_PtrGetIsInActivity();
	void M_SetIsInActivity(const bool& value);

	//TEnumAsByte<E_SitDownPosition>	SitDownPosition;		//Offset: 2800	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SitDownPosition> M_GetSitDownPosition() const;
	TEnumAsByte<E_SitDownPosition>* M_PtrGetSitDownPosition();
	void M_SetSitDownPosition(const TEnumAsByte<E_SitDownPosition>& value);

	//TAssetPtr<class FOnSitStarted__DelegateSignature>	OnSitStarted;		//Offset: 2808	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSitStarted__DelegateSignature> M_GetOnSitStarted() const;
	TAssetPtr<class FOnSitStarted__DelegateSignature>* M_PtrGetOnSitStarted();
	void M_SetOnSitStarted(const TAssetPtr<class FOnSitStarted__DelegateSignature>& value);

	//TAssetPtr<class FOnSitFinished__DelegateSignature>	OnSitFinished;		//Offset: 2824	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSitFinished__DelegateSignature> M_GetOnSitFinished() const;
	TAssetPtr<class FOnSitFinished__DelegateSignature>* M_PtrGetOnSitFinished();
	void M_SetOnSitFinished(const TAssetPtr<class FOnSitFinished__DelegateSignature>& value);

	//TAssetPtr<class FOnSleepStarted__DelegateSignature>	OnSleepStarted;		//Offset: 2840	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSleepStarted__DelegateSignature> M_GetOnSleepStarted() const;
	TAssetPtr<class FOnSleepStarted__DelegateSignature>* M_PtrGetOnSleepStarted();
	void M_SetOnSleepStarted(const TAssetPtr<class FOnSleepStarted__DelegateSignature>& value);

	//TAssetPtr<class FOnSleepFinished__DelegateSignature>	OnSleepFinished;		//Offset: 2856	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSleepFinished__DelegateSignature> M_GetOnSleepFinished() const;
	TAssetPtr<class FOnSleepFinished__DelegateSignature>* M_PtrGetOnSleepFinished();
	void M_SetOnSleepFinished(const TAssetPtr<class FOnSleepFinished__DelegateSignature>& value);

	//bool	isInWater;		//Offset: 2872	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisInWater() const;
	bool* M_PtrGetisInWater();
	void M_SetisInWater(const bool& value);

	//float	InWaterMovementIntensity;		//Offset: 2876	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInWaterMovementIntensity() const;
	float* M_PtrGetInWaterMovementIntensity();
	void M_SetInWaterMovementIntensity(const float& value);

	//TAssetPtr<class FOnStartCrafting__DelegateSignature>	OnStartCrafting;		//Offset: 2880	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStartCrafting__DelegateSignature> M_GetOnStartCrafting() const;
	TAssetPtr<class FOnStartCrafting__DelegateSignature>* M_PtrGetOnStartCrafting();
	void M_SetOnStartCrafting(const TAssetPtr<class FOnStartCrafting__DelegateSignature>& value);

	//TAssetPtr<class FOnEndCrafting__DelegateSignature>	OnEndCrafting;		//Offset: 2896	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnEndCrafting__DelegateSignature> M_GetOnEndCrafting() const;
	TAssetPtr<class FOnEndCrafting__DelegateSignature>* M_PtrGetOnEndCrafting();
	void M_SetOnEndCrafting(const TAssetPtr<class FOnEndCrafting__DelegateSignature>& value);

	//TAssetPtr<class FOnStoppingCrafting__DelegateSignature>	OnStoppingCrafting;		//Offset: 2912	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStoppingCrafting__DelegateSignature> M_GetOnStoppingCrafting() const;
	TAssetPtr<class FOnStoppingCrafting__DelegateSignature>* M_PtrGetOnStoppingCrafting();
	void M_SetOnStoppingCrafting(const TAssetPtr<class FOnStoppingCrafting__DelegateSignature>& value);

	//bool	IsWaitingForCrafting;		//Offset: 2928	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsWaitingForCrafting() const;
	bool* M_PtrGetIsWaitingForCrafting();
	void M_SetIsWaitingForCrafting(const bool& value);

	//class AActor*	InteractedActor;		//Offset: 2936	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetInteractedActor() const;
	class AActor** M_PtrGetInteractedActor();
	void M_SetInteractedActor(const class AActor*& value);

	//TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>	OnCharacterDeactivated;		//Offset: 2944	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCharacterDeactivated__DelegateSignature> M_GetOnCharacterDeactivated() const;
	TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>* M_PtrGetOnCharacterDeactivated();
	void M_SetOnCharacterDeactivated(const TAssetPtr<class FOnCharacterDeactivated__DelegateSignature>& value);

	//TAssetPtr<class FOnCharacterActivated__DelegateSignature>	OnCharacterActivated;		//Offset: 2960	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCharacterActivated__DelegateSignature> M_GetOnCharacterActivated() const;
	TAssetPtr<class FOnCharacterActivated__DelegateSignature>* M_PtrGetOnCharacterActivated();
	void M_SetOnCharacterActivated(const TAssetPtr<class FOnCharacterActivated__DelegateSignature>& value);

	//float	TargetLerpFOV;		//Offset: 2976	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTargetLerpFOV() const;
	float* M_PtrGetTargetLerpFOV();
	void M_SetTargetLerpFOV(const float& value);

	//float	StartingLerpFOV;		//Offset: 2980	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStartingLerpFOV() const;
	float* M_PtrGetStartingLerpFOV();
	void M_SetStartingLerpFOV(const float& value);

	//int32_t	HeadID;		//Offset: 2984	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHeadID() const;
	int32_t* M_PtrGetHeadID();
	void M_SetHeadID(const int32_t& value);

	//int32_t	HairID;		//Offset: 2988	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHairID() const;
	int32_t* M_PtrGetHairID();
	void M_SetHairID(const int32_t& value);

	//TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>	PresetsIDs;		//Offset: 2992	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> M_GetPresetsIDs() const;
	TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>* M_PtrGetPresetsIDs();
	void M_SetPresetsIDs(const TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing>& value);

	//bool	IsCraftingClosed;		//Offset: 3072	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCraftingClosed() const;
	bool* M_PtrGetIsCraftingClosed();
	void M_SetIsCraftingClosed(const bool& value);

	//bool	PendingKill;		//Offset: 3073	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPendingKill() const;
	bool* M_PtrGetPendingKill();
	void M_SetPendingKill(const bool& value);

	//bool	CaughtPrey;		//Offset: 3074	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCaughtPrey() const;
	bool* M_PtrGetCaughtPrey();
	void M_SetCaughtPrey(const bool& value);

	//bool	Blinking_;		//Offset: 3075	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlinking_() const;
	bool* M_PtrGetBlinking_();
	void M_SetBlinking_(const bool& value);

	//bool	EyesClosed;		//Offset: 3076	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEyesClosed() const;
	bool* M_PtrGetEyesClosed();
	void M_SetEyesClosed(const bool& value);

	//bool	EyesMovement;		//Offset: 3077	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEyesMovement() const;
	bool* M_PtrGetEyesMovement();
	void M_SetEyesMovement(const bool& value);

	//float	HeadRotationAlpha;		//Offset: 3080	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHeadRotationAlpha() const;
	float* M_PtrGetHeadRotationAlpha();
	void M_SetHeadRotationAlpha(const float& value);

	//float	BodyMovementAlpha;		//Offset: 3084	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBodyMovementAlpha() const;
	float* M_PtrGetBodyMovementAlpha();
	void M_SetBodyMovementAlpha(const float& value);

	//float	MountMovementType;		//Offset: 3088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountMovementType() const;
	float* M_PtrGetMountMovementType();
	void M_SetMountMovementType(const float& value);

	//float	MountTurnDirection;		//Offset: 3092	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMountTurnDirection() const;
	float* M_PtrGetMountTurnDirection();
	void M_SetMountTurnDirection(const float& value);

	//bool	IgnoreMountingAnimation;		//Offset: 3096	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreMountingAnimation() const;
	bool* M_PtrGetIgnoreMountingAnimation();
	void M_SetIgnoreMountingAnimation(const bool& value);

	//bool	IgnoreDismountingAnimation;		//Offset: 3097	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreDismountingAnimation() const;
	bool* M_PtrGetIgnoreDismountingAnimation();
	void M_SetIgnoreDismountingAnimation(const bool& value);

	//struct FName	CurrentBasePresetID;		//Offset: 3100	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetCurrentBasePresetID() const;
	struct FName* M_PtrGetCurrentBasePresetID();
	void M_SetCurrentBasePresetID(const struct FName& value);

	//struct FName	CurrentProfessionPresetID;		//Offset: 3108	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetCurrentProfessionPresetID() const;
	struct FName* M_PtrGetCurrentProfessionPresetID();
	void M_SetCurrentProfessionPresetID(const struct FName& value);

	//float	DrunkForwardAxis;		//Offset: 3116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkForwardAxis() const;
	float* M_PtrGetDrunkForwardAxis();
	void M_SetDrunkForwardAxis(const float& value);

	//float	DrunkRightAxis;		//Offset: 3120	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkRightAxis() const;
	float* M_PtrGetDrunkRightAxis();
	void M_SetDrunkRightAxis(const float& value);

	//float	DrunkForwardTarget;		//Offset: 3124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkForwardTarget() const;
	float* M_PtrGetDrunkForwardTarget();
	void M_SetDrunkForwardTarget(const float& value);

	//float	DrunkRightTarget;		//Offset: 3128	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkRightTarget() const;
	float* M_PtrGetDrunkRightTarget();
	void M_SetDrunkRightTarget(const float& value);

	//bool	StartedCrafting;		//Offset: 3132	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStartedCrafting() const;
	bool* M_PtrGetStartedCrafting();
	void M_SetStartedCrafting(const bool& value);

	//float	DrunkForwardDelayDuration;		//Offset: 3136	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkForwardDelayDuration() const;
	float* M_PtrGetDrunkForwardDelayDuration();
	void M_SetDrunkForwardDelayDuration(const float& value);

	//float	DrunkRightDelayDuration;		//Offset: 3140	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDrunkRightDelayDuration() const;
	float* M_PtrGetDrunkRightDelayDuration();
	void M_SetDrunkRightDelayDuration(const float& value);

	//TEnumAsByte<E_AnimalType>	MountAnimalType;		//Offset: 3144	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimalType> M_GetMountAnimalType() const;
	TEnumAsByte<E_AnimalType>* M_PtrGetMountAnimalType();
	void M_SetMountAnimalType(const TEnumAsByte<E_AnimalType>& value);

	//TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>	OnCraftingAnimEnd;		//Offset: 3152	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature> M_GetOnCraftingAnimEnd() const;
	TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>* M_PtrGetOnCraftingAnimEnd();
	void M_SetOnCraftingAnimEnd(const TAssetPtr<class FOnCraftingAnimEnd__DelegateSignature>& value);

	//struct FVector	Velocity;		//Offset: 3168	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetVelocity() const;
	struct FVector* M_PtrGetVelocity();
	void M_SetVelocity(const struct FVector& value);

	//bool	Blocking;		//Offset: 3180	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlocking() const;
	bool* M_PtrGetBlocking();
	void M_SetBlocking(const bool& value);

	//struct FHitResult	InteractableHit;		//Offset: 3184	Size: 136	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
	struct FHitResult M_GetInteractableHit() const;
	struct FHitResult* M_PtrGetInteractableHit();
	void M_SetInteractableHit(const struct FHitResult& value);

	//struct FRotator	MountRotation;		//Offset: 3320	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetMountRotation() const;
	struct FRotator* M_PtrGetMountRotation();
	void M_SetMountRotation(const struct FRotator& value);

	//TArray<class AActor*>	ImpaledItems;		//Offset: 3336	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetImpaledItems() const;
	TArray<class AActor*>* M_PtrGetImpaledItems();
	void M_SetImpaledItems(const TArray<class AActor*>& value);

	//TEnumAsByte<E_SittingType>	SittingType;		//Offset: 3352	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_SittingType> M_GetSittingType() const;
	TEnumAsByte<E_SittingType>* M_PtrGetSittingType();
	void M_SetSittingType(const TEnumAsByte<E_SittingType>& value);

	//bool	HadToolBeforeDialogue;		//Offset: 3353	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadToolBeforeDialogue() const;
	bool* M_PtrGetHadToolBeforeDialogue();
	void M_SetHadToolBeforeDialogue(const bool& value);

	//bool	Underwater;		//Offset: 3354	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnderwater() const;
	bool* M_PtrGetUnderwater();
	void M_SetUnderwater(const bool& value);

	//bool	IsInTPPCombatState;		//Offset: 3355	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInTPPCombatState() const;
	bool* M_PtrGetIsInTPPCombatState();
	void M_SetIsInTPPCombatState(const bool& value);

	//float	EnemyDamageMultiplier;		//Offset: 3356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEnemyDamageMultiplier() const;
	float* M_PtrGetEnemyDamageMultiplier();
	void M_SetEnemyDamageMultiplier(const float& value);

	//TAssetPtr<class FOnStartGettingUp__DelegateSignature>	OnStartGettingUp;		//Offset: 3360	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStartGettingUp__DelegateSignature> M_GetOnStartGettingUp() const;
	TAssetPtr<class FOnStartGettingUp__DelegateSignature>* M_PtrGetOnStartGettingUp();
	void M_SetOnStartGettingUp(const TAssetPtr<class FOnStartGettingUp__DelegateSignature>& value);

	//TAssetPtr<class FOnViewmodeChanged__DelegateSignature>	OnViewmodeChanged;		//Offset: 3376	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnViewmodeChanged__DelegateSignature> M_GetOnViewmodeChanged() const;
	TAssetPtr<class FOnViewmodeChanged__DelegateSignature>* M_PtrGetOnViewmodeChanged();
	void M_SetOnViewmodeChanged(const TAssetPtr<class FOnViewmodeChanged__DelegateSignature>& value);

	//bool	WantsToDespawn;		//Offset: 3392	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWantsToDespawn() const;
	bool* M_PtrGetWantsToDespawn();
	void M_SetWantsToDespawn(const bool& value);

	//float	Velocity_Length;		//Offset: 3396	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetVelocity_Length() const;
	float* M_PtrGetVelocity_Length();
	void M_SetVelocity_Length(const float& value);

	//float	WorkPlayRate;		//Offset: 3400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWorkPlayRate() const;
	float* M_PtrGetWorkPlayRate();
	void M_SetWorkPlayRate(const float& value);

	//float	HatsValue;		//Offset: 3404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHatsValue() const;
	float* M_PtrGetHatsValue();
	void M_SetHatsValue(const float& value);

	//struct FST_NPCsPresets	CachedPreset;		//Offset: 3408	Size: 1424	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_NPCsPresets M_GetCachedPreset() const;
	struct FST_NPCsPresets* M_PtrGetCachedPreset();
	void M_SetCachedPreset(const struct FST_NPCsPresets& value);

	//float	MinRandomSpeedMultiplier;		//Offset: 4832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinRandomSpeedMultiplier() const;
	float* M_PtrGetMinRandomSpeedMultiplier();
	void M_SetMinRandomSpeedMultiplier(const float& value);

	//float	MaxRandomSpeedMultiplier;		//Offset: 4836	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMaxRandomSpeedMultiplier() const;
	float* M_PtrGetMaxRandomSpeedMultiplier();
	void M_SetMaxRandomSpeedMultiplier(const float& value);

	//float	randomSpeedMultiplier;		//Offset: 4840	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetrandomSpeedMultiplier() const;
	float* M_PtrGetrandomSpeedMultiplier();
	void M_SetrandomSpeedMultiplier(const float& value);

	//bool	IsRotationManaged;		//Offset: 4844	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsRotationManaged() const;
	bool* M_PtrGetIsRotationManaged();
	void M_SetIsRotationManaged(const bool& value);

	//float	slopeSpeedMultiplier;		//Offset: 4848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetslopeSpeedMultiplier() const;
	float* M_PtrGetslopeSpeedMultiplier();
	void M_SetslopeSpeedMultiplier(const float& value);

	//int32_t	TicksDelayToCalculateEssentialVariables;		//Offset: 4852	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTicksDelayToCalculateEssentialVariables() const;
	int32_t* M_PtrGetTicksDelayToCalculateEssentialVariables();
	void M_SetTicksDelayToCalculateEssentialVariables(const int32_t& value);

	//int32_t	TicksLeftToCalculateEssentialsVariables;		//Offset: 4856	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTicksLeftToCalculateEssentialsVariables() const;
	int32_t* M_PtrGetTicksLeftToCalculateEssentialsVariables();
	void M_SetTicksLeftToCalculateEssentialsVariables(const int32_t& value);

	//float	FallStartTime;		//Offset: 4860	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFallStartTime() const;
	float* M_PtrGetFallStartTime();
	void M_SetFallStartTime(const float& value);

	//bool	IsRagdollActivationLocked;		//Offset: 4864	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollActivationLocked() const;
	bool* M_PtrGetIsRagdollActivationLocked();
	void M_SetIsRagdollActivationLocked(const bool& value);

	//struct FVector	InitialRagdollVelocity;		//Offset: 4868	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetInitialRagdollVelocity() const;
	struct FVector* M_PtrGetInitialRagdollVelocity();
	void M_SetInitialRagdollVelocity(const struct FVector& value);

	//bool	ShouldUpdateRateOptimizationsBeEnabled;		//Offset: 4880	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldUpdateRateOptimizationsBeEnabled() const;
	bool* M_PtrGetShouldUpdateRateOptimizationsBeEnabled();
	void M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value);

	//struct FVector	CurrentLookAtTargetLocation;		//Offset: 4884	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetCurrentLookAtTargetLocation() const;
	struct FVector* M_PtrGetCurrentLookAtTargetLocation();
	void M_SetCurrentLookAtTargetLocation(const struct FVector& value);

	//struct FVector	CharacterEyesLocation;		//Offset: 4896	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetCharacterEyesLocation() const;
	struct FVector* M_PtrGetCharacterEyesLocation();
	void M_SetCharacterEyesLocation(const struct FVector& value);

	//bool	IsPickingObject;		//Offset: 4908	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsPickingObject() const;
	bool* M_PtrGetIsPickingObject();
	void M_SetIsPickingObject(const bool& value);

	//float	HairDamping;		//Offset: 4912	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHairDamping() const;
	float* M_PtrGetHairDamping();
	void M_SetHairDamping(const float& value);

	//float	HairSpring;		//Offset: 4916	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHairSpring() const;
	float* M_PtrGetHairSpring();
	void M_SetHairSpring(const float& value);

	//bool	IsHairMovementEnabled;		//Offset: 4920	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsHairMovementEnabled() const;
	bool* M_PtrGetIsHairMovementEnabled();
	void M_SetIsHairMovementEnabled(const bool& value);

	//float	PushSpeedMultiplier;		//Offset: 4924	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPushSpeedMultiplier() const;
	float* M_PtrGetPushSpeedMultiplier();
	void M_SetPushSpeedMultiplier(const float& value);

	//float	HitSpeedMultiplier;		//Offset: 4928	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitSpeedMultiplier() const;
	float* M_PtrGetHitSpeedMultiplier();
	void M_SetHitSpeedMultiplier(const float& value);

	//float	TemporarySpeedMultiplier;		//Offset: 4932	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTemporarySpeedMultiplier() const;
	float* M_PtrGetTemporarySpeedMultiplier();
	void M_SetTemporarySpeedMultiplier(const float& value);

	//TArray<bool>	SimulatedBodiesBeforeRagdoll;		//Offset: 4936	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<bool> M_GetSimulatedBodiesBeforeRagdoll() const;
	TArray<bool>* M_PtrGetSimulatedBodiesBeforeRagdoll();
	void M_SetSimulatedBodiesBeforeRagdoll(const TArray<bool>& value);

	//bool	IsRagdollOnHitEnabled;		//Offset: 4952	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollOnHitEnabled() const;
	bool* M_PtrGetIsRagdollOnHitEnabled();
	void M_SetIsRagdollOnHitEnabled(const bool& value);

	//float	HitPhysicsBlendWeight;		//Offset: 4956	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitPhysicsBlendWeight() const;
	float* M_PtrGetHitPhysicsBlendWeight();
	void M_SetHitPhysicsBlendWeight(const float& value);

	//class UPhysicsAsset*	InactiveInfantPhysicsAsset;		//Offset: 4960	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveInfantPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveInfantPhysicsAsset();
	void M_SetInactiveInfantPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveToddlerPhysicsAsset;		//Offset: 4968	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveToddlerPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveToddlerPhysicsAsset();
	void M_SetInactiveToddlerPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveGirlPhysicsAsset;		//Offset: 4976	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveGirlPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveGirlPhysicsAsset();
	void M_SetInactiveGirlPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveBoyPhysicsAsset;		//Offset: 4984	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveBoyPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveBoyPhysicsAsset();
	void M_SetInactiveBoyPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveFemalePhysicsAsset;		//Offset: 4992	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveFemalePhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveFemalePhysicsAsset();
	void M_SetInactiveFemalePhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	InactiveMalePhysicsAsset;		//Offset: 5000	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPhysicsAsset* M_GetInactiveMalePhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetInactiveMalePhysicsAsset();
	void M_SetInactiveMalePhysicsAsset(const class UPhysicsAsset*& value);

	//float	MeshCollisionDisableTime;		//Offset: 5008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMeshCollisionDisableTime() const;
	float* M_PtrGetMeshCollisionDisableTime();
	void M_SetMeshCollisionDisableTime(const float& value);

	//TEnumAsByte<ECollisionEnabled>	TargetMeshCollisionType;		//Offset: 5012	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ECollisionEnabled> M_GetTargetMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGetTargetMeshCollisionType();
	void M_SetTargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//TEnumAsByte<ECollisionEnabled>	PreviousMeshCollisionType;		//Offset: 5013	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ECollisionEnabled> M_GetPreviousMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGetPreviousMeshCollisionType();
	void M_SetPreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//bool	IsDistanceMeshCollisionOptimizationEnabled;		//Offset: 5014	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsDistanceMeshCollisionOptimizationEnabled() const;
	bool* M_PtrGetIsDistanceMeshCollisionOptimizationEnabled();
	void M_SetIsDistanceMeshCollisionOptimizationEnabled(const bool& value);

	//bool	IsPhysicsAssetSwitchingEnabled;		//Offset: 5015	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsPhysicsAssetSwitchingEnabled() const;
	bool* M_PtrGetIsPhysicsAssetSwitchingEnabled();
	void M_SetIsPhysicsAssetSwitchingEnabled(const bool& value);

	//bool	ImplementsPlayerInterface;		//Offset: 5016	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetImplementsPlayerInterface() const;
	bool* M_PtrGetImplementsPlayerInterface();
	void M_SetImplementsPlayerInterface(const bool& value);

	//class APawn*	MountReference;		//Offset: 5024	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class APawn* M_GetMountReference() const;
	class APawn** M_PtrGetMountReference();
	void M_SetMountReference(const class APawn*& value);

	//struct FGuid	CurrentMountID;		//Offset: 5032	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FGuid M_GetCurrentMountID() const;
	struct FGuid* M_PtrGetCurrentMountID();
	void M_SetCurrentMountID(const struct FGuid& value);

	//struct FGuid	CharacterID;		//Offset: 5048	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FGuid M_GetCharacterID() const;
	struct FGuid* M_PtrGetCharacterID();
	void M_SetCharacterID(const struct FGuid& value);

	//class USoundBase*	MountWhistleSound;		//Offset: 5064	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundBase* M_GetMountWhistleSound() const;
	class USoundBase** M_PtrGetMountWhistleSound();
	void M_SetMountWhistleSound(const class USoundBase*& value);

	//int32_t	SkinColorID;		//Offset: 5072	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSkinColorID() const;
	int32_t* M_PtrGetSkinColorID();
	void M_SetSkinColorID(const int32_t& value);

	//int32_t	HairColorID;		//Offset: 5076	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHairColorID() const;
	int32_t* M_PtrGetHairColorID();
	void M_SetHairColorID(const int32_t& value);

	//TAssetPtr<class FOnWaitCrafting__DelegateSignature>	OnWaitCrafting;		//Offset: 5080	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnWaitCrafting__DelegateSignature> M_GetOnWaitCrafting() const;
	TAssetPtr<class FOnWaitCrafting__DelegateSignature>* M_PtrGetOnWaitCrafting();
	void M_SetOnWaitCrafting(const TAssetPtr<class FOnWaitCrafting__DelegateSignature>& value);

	//float	InWaterDeep;		//Offset: 5096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInWaterDeep() const;
	float* M_PtrGetInWaterDeep();
	void M_SetInWaterDeep(const float& value);

	//bool	SkipAnim;		//Offset: 5100	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipAnim() const;
	bool* M_PtrGetSkipAnim();
	void M_SetSkipAnim(const bool& value);

	//TAssetPtr<class FOnUnRagdoll__DelegateSignature>	OnUnRagdoll;		//Offset: 5104	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnUnRagdoll__DelegateSignature> M_GetOnUnRagdoll() const;
	TAssetPtr<class FOnUnRagdoll__DelegateSignature>* M_PtrGetOnUnRagdoll();
	void M_SetOnUnRagdoll(const TAssetPtr<class FOnUnRagdoll__DelegateSignature>& value);

	//bool	RagdollChange;		//Offset: 5120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRagdollChange() const;
	bool* M_PtrGetRagdollChange();
	void M_SetRagdollChange(const bool& value);

	//bool	GameMenuOpen;		//Offset: 5121	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGameMenuOpen() const;
	bool* M_PtrGetGameMenuOpen();
	void M_SetGameMenuOpen(const bool& value);

	//bool	IKEnabled;		//Offset: 5122	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetIKEnabled() const;
	bool* M_PtrGetIKEnabled();
	void M_SetIKEnabled(const bool& value);

	//bool	ShouldStopCrafting;		//Offset: 5123	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldStopCrafting() const;
	bool* M_PtrGetShouldStopCrafting();
	void M_SetShouldStopCrafting(const bool& value);

	//bool	CoopStatsProtection;		//Offset: 5124	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCoopStatsProtection() const;
	bool* M_PtrGetCoopStatsProtection();
	void M_SetCoopStatsProtection(const bool& value);

	//bool	ShouldRagdollOnDismount;		//Offset: 5125	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldRagdollOnDismount() const;
	bool* M_PtrGetShouldRagdollOnDismount();
	void M_SetShouldRagdollOnDismount(const bool& value);

	//struct FST_CharacterRagdollState	RagdollState;		//Offset: 5128	Size: 32	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
	struct FST_CharacterRagdollState M_GetRagdollState() const;
	struct FST_CharacterRagdollState* M_PtrGetRagdollState();
	void M_SetRagdollState(const struct FST_CharacterRagdollState& value);

	//struct FTimerHandle	RagdollCheckTimer;		//Offset: 5160	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetRagdollCheckTimer() const;
	struct FTimerHandle* M_PtrGetRagdollCheckTimer();
	void M_SetRagdollCheckTimer(const struct FTimerHandle& value);

	//bool	IsRagdollEnabled;		//Offset: 5168	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollEnabled() const;
	bool* M_PtrGetIsRagdollEnabled();
	void M_SetIsRagdollEnabled(const bool& value);

	//struct FVector	LastMountedVelocity;		//Offset: 5172	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetLastMountedVelocity() const;
	struct FVector* M_PtrGetLastMountedVelocity();
	void M_SetLastMountedVelocity(const struct FVector& value);

	//struct FVector	LastMountedLocation;		//Offset: 5184	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetLastMountedLocation() const;
	struct FVector* M_PtrGetLastMountedLocation();
	void M_SetLastMountedLocation(const struct FVector& value);

	//TArray<struct FST_BoneReplicationData>	RagdollBonesData;		//Offset: 5200	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_BoneReplicationData> M_GetRagdollBonesData() const;
	TArray<struct FST_BoneReplicationData>* M_PtrGetRagdollBonesData();
	void M_SetRagdollBonesData(const TArray<struct FST_BoneReplicationData>& value);

	//TArray<struct FName>	RagdollReplicatedBoneNames;		//Offset: 5216	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly
	TArray<struct FName> M_GetRagdollReplicatedBoneNames() const;
	TArray<struct FName>* M_PtrGetRagdollReplicatedBoneNames();
	void M_SetRagdollReplicatedBoneNames(const TArray<struct FName>& value);

	//float	RagdollLastBoneReplicationTime;		//Offset: 5232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollLastBoneReplicationTime() const;
	float* M_PtrGetRagdollLastBoneReplicationTime();
	void M_SetRagdollLastBoneReplicationTime(const float& value);

	//struct FVector	PotentialInitialRagdollVelocity;		//Offset: 5236	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPotentialInitialRagdollVelocity() const;
	struct FVector* M_PtrGetPotentialInitialRagdollVelocity();
	void M_SetPotentialInitialRagdollVelocity(const struct FVector& value);

	//float	RagdollStartTime;		//Offset: 5248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollStartTime() const;
	float* M_PtrGetRagdollStartTime();
	void M_SetRagdollStartTime(const float& value);

	//struct FVector	StartRagdollImpulseForce;		//Offset: 5252	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetStartRagdollImpulseForce() const;
	struct FVector* M_PtrGetStartRagdollImpulseForce();
	void M_SetStartRagdollImpulseForce(const struct FVector& value);

	//struct FName	StartRagdollImpulseBoneName;		//Offset: 5264	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetStartRagdollImpulseBoneName() const;
	struct FName* M_PtrGetStartRagdollImpulseBoneName();
	void M_SetStartRagdollImpulseBoneName(const struct FName& value);

	//float	LastDamageInfluenceCoefficient;		//Offset: 5272	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLastDamageInfluenceCoefficient() const;
	float* M_PtrGetLastDamageInfluenceCoefficient();
	void M_SetLastDamageInfluenceCoefficient(const float& value);

	//bool	WasMountDriverOverlappingPreviously;		//Offset: 5276	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasMountDriverOverlappingPreviously() const;
	bool* M_PtrGetWasMountDriverOverlappingPreviously();
	void M_SetWasMountDriverOverlappingPreviously(const bool& value);

	//struct FVector	PreviousMountDriverOverlappingCheckLocation;		//Offset: 5280	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPreviousMountDriverOverlappingCheckLocation() const;
	struct FVector* M_PtrGetPreviousMountDriverOverlappingCheckLocation();
	void M_SetPreviousMountDriverOverlappingCheckLocation(const struct FVector& value);

	//bool	IsPreviousMountDriverOverlappingCheckLocationValid;		//Offset: 5292	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsPreviousMountDriverOverlappingCheckLocationValid() const;
	bool* M_PtrGetIsPreviousMountDriverOverlappingCheckLocationValid();
	void M_SetIsPreviousMountDriverOverlappingCheckLocationValid(const bool& value);

	//bool	IsRagdollFrozen;		//Offset: 5293	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsRagdollFrozen() const;
	bool* M_PtrGetIsRagdollFrozen();
	void M_SetIsRagdollFrozen(const bool& value);

	//float	Intimidation;		//Offset: 5296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIntimidation() const;
	float* M_PtrGetIntimidation();
	void M_SetIntimidation(const float& value);

	//float	IntimidationDecayTick;		//Offset: 5300	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIntimidationDecayTick() const;
	float* M_PtrGetIntimidationDecayTick();
	void M_SetIntimidationDecayTick(const float& value);

	//float	IntimidationDecaySpeed;		//Offset: 5304	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetIntimidationDecaySpeed() const;
	float* M_PtrGetIntimidationDecaySpeed();
	void M_SetIntimidationDecaySpeed(const float& value);

	//struct FTimerHandle	IntimidationDecayTimer;		//Offset: 5312	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetIntimidationDecayTimer() const;
	struct FTimerHandle* M_PtrGetIntimidationDecayTimer();
	void M_SetIntimidationDecayTimer(const struct FTimerHandle& value);

	//bool	IsMounting;		//Offset: 5320	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsMounting() const;
	bool* M_PtrGetIsMounting();
	void M_SetIsMounting(const bool& value);

	//bool	IsDismounting;		//Offset: 5321	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsDismounting() const;
	bool* M_PtrGetIsDismounting();
	void M_SetIsDismounting(const bool& value);

	//class ABP_MasterFurniture_C*	CurrentInteractedFurniture;		//Offset: 5328	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterFurniture_C* M_GetCurrentInteractedFurniture() const;
	class ABP_MasterFurniture_C** M_PtrGetCurrentInteractedFurniture();
	void M_SetCurrentInteractedFurniture(const class ABP_MasterFurniture_C*& value);

	//class UCapsuleComponent*	StaticCollisionCapsule;		//Offset: 5336	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCapsuleComponent* M_GetStaticCollisionCapsule() const;
	class UCapsuleComponent** M_PtrGetStaticCollisionCapsule();
	void M_SetStaticCollisionCapsule(const class UCapsuleComponent*& value);

	//bool	HasStaticCollision;		//Offset: 5344	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetHasStaticCollision() const;
	bool* M_PtrGetHasStaticCollision();
	void M_SetHasStaticCollision(const bool& value);

	//float	RagdollSnapDistance;		//Offset: 5348	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRagdollSnapDistance() const;
	float* M_PtrGetRagdollSnapDistance();
	void M_SetRagdollSnapDistance(const float& value);

	//bool	IsAttacking;		//Offset: 5352	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsAttacking() const;
	bool* M_PtrGetIsAttacking();
	void M_SetIsAttacking(const bool& value);

	//bool	CanFollowUpCombo;		//Offset: 5353	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanFollowUpCombo() const;
	bool* M_PtrGetCanFollowUpCombo();
	void M_SetCanFollowUpCombo(const bool& value);

	//TMap<class AActor*, float>	CurrentAttackers;		//Offset: 5360	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, float> M_GetCurrentAttackers() const;
	TMap<class AActor*, float>* M_PtrGetCurrentAttackers();
	void M_SetCurrentAttackers(const TMap<class AActor*, float>& value);

	//struct FTimerHandle	CurrentAttackersTimer;		//Offset: 5440	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetCurrentAttackersTimer() const;
	struct FTimerHandle* M_PtrGetCurrentAttackersTimer();
	void M_SetCurrentAttackersTimer(const struct FTimerHandle& value);

	//int32_t	MaxConcurrentAttackersCount;		//Offset: 5448	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMaxConcurrentAttackersCount() const;
	int32_t* M_PtrGetMaxConcurrentAttackersCount();
	void M_SetMaxConcurrentAttackersCount(const int32_t& value);

	//TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>	OnPointDamageAppliedToOtherActor;		//Offset: 5456	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature> M_GetOnPointDamageAppliedToOtherActor() const;
	TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>* M_PtrGetOnPointDamageAppliedToOtherActor();
	void M_SetOnPointDamageAppliedToOtherActor(const TAssetPtr<class FOnPointDamageAppliedToOtherActor__DelegateSignature>& value);

	//TAssetPtr<class FNone_513>	ItemTypesPreventingBlocking;		//Offset: 5472	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetItemTypesPreventingBlocking() const;
	TAssetPtr<class FNone_513>* M_PtrGetItemTypesPreventingBlocking();
	void M_SetItemTypesPreventingBlocking(const TAssetPtr<class FNone_513>& value);

	//int32_t	IrisID;		//Offset: 5552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetIrisID() const;
	int32_t* M_PtrGetIrisID();
	void M_SetIrisID(const int32_t& value);

	//struct FVector	PreviousVelocity;		//Offset: 5556	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetPreviousVelocity() const;
	struct FVector* M_PtrGetPreviousVelocity();
	void M_SetPreviousVelocity(const struct FVector& value);

	//float	MinImpactDamageSpeed;		//Offset: 5568	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinImpactDamageSpeed() const;
	float* M_PtrGetMinImpactDamageSpeed();
	void M_SetMinImpactDamageSpeed(const float& value);

	//float	MaxImpactDamageSpeed;		//Offset: 5572	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMaxImpactDamageSpeed() const;
	float* M_PtrGetMaxImpactDamageSpeed();
	void M_SetMaxImpactDamageSpeed(const float& value);

	//float	Courage;		//Offset: 5576	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCourage() const;
	float* M_PtrGetCourage();
	void M_SetCourage(const float& value);

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

	void OnStartCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);

	void OnEndCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);

	void OnStoppingCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);

	void OnCharacterDeactivated__DelegateSignature();

	void OnCharacterActivated__DelegateSignature();

	void OnCraftingAnimEnd__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);

	void OnStartGettingUp__DelegateSignature();

	void OnViewmodeChanged__DelegateSignature(TEnumAsByte<E_ViewMode> CurrentViewmode);

	void OnWaitCrafting__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);

	void OnUnRagdoll__DelegateSignature();

	void OnPointDamageAppliedToOtherActor__DelegateSignature(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class AActor* ActorUsedToApplyDamage, class UDamageType* DamageTypeClass);

	void ExecuteUbergraph_BP_BaseCharacter(int32_t EntryPoint);

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

	void ShouldHolster(class ABP_BaseCharacter_C* BaseCharacter);

	void TPPCombatState();

	void ResetTPPCombatState();

	void OnGettingUp();

	void Drunk();

	void SetIsInTPPCombatState_Server(bool IsInTPPCombatState);

	void SetIsInTPPCombatState_Multicast(bool IsInTPPCombatState);

	void StartCrafting_Server(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime);

	void StartCrafting_Client(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime);

	void WaitCrafting_Server();

	void WaitCrafting_Client();

	void EndCrafting_Server(bool CancelAnimation);

	void EndCrafting_Client(bool CancelAnimation);

	void OnCraftingAnimEnded_Server();

	void OnCraftingAnimEnded_Client();

	void ShouldHolster_Server();

	void ShouldHolster_Client();

	void CraftingClosed_Server();

	void CraftingClosed_Client();

	void OnEndCrafting_Server();

	void OnStoppingCrafting_Server();

	void ReverseFistDelay();

	void Set_CrouchingSpeed_Event(float crouchingSpeed);

	void Set_SprintingSpeed_Event(float sprintingSpeed);

	void Set_RunningSpeed_Event(float runningSpeed);

	void Set_WalkingSpeed_Event(float WalkingSpeed);

	void Set_ALS_ViewMode_Event(TEnumAsByte<E_ViewMode> ALS_ViewMode);

	void Set_ALS_Aiming_Event(bool ALS_Aiming);

	void Set_ALS_RotationMode_Event(TEnumAsByte<E_RotationMode> New_ALS_RotationMode);

	void Set_ALS_Stance_Event(TEnumAsByte<E_Stance> New_ALS_Stance);

	void Set_ALS_Gait_Event(TEnumAsByte<E_Gait> New_ALS_Gait);

	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void Set_IdleState_Event(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState, bool SkipDespawnAnimItem);

	void Set_WorkState_Event(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim);

	void Set_BreakState_Event(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops);

	void Set_ForceStanding_Event();

	void Set_IdlePose_Event(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose, bool SkipDespawnAnimItem);

	void Set_CaughtPrey_Event(bool CaughtPrey);

	void SetEnableIK_Event(bool IK_Enabled);

	void SetBlocking_Event(bool Blocking);

	void Set_ActivityState_Event(bool IsInActivity, unsigned char ActivityAnimID, TEnumAsByte<E_AnimActivityType> ActivityType, int32_t Loops);

	void SetMovementInput_Compressed(struct FVector MovementInput);

	void SetLookingRotation_Compressed(struct FRotator LookingRotation);

	void SetCharacterRotation_Compressed(struct FRotator TargetRotation, struct FRotator characterRotation);

	void Play_Networked_Montage___SERVER__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);

	void Play_Networked_Montage___MULTICAST__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);

	void Set_ALS_Aiming_Event___SERVER__(bool ALS_Aiming);

	void Set_ALS_RotationMode_Event___MULTICAST__(TEnumAsByte<E_RotationMode> ALS_RotationMode);

	void Set_ALS_RotationMode_Event___SERVER__(TEnumAsByte<E_RotationMode> ALS_RotationMode);

	void Set_ALS_Gait_Event___MULTICAST__(TEnumAsByte<E_Gait> ALS_Gait);

	void Set_ALS_Gait_Event___SERVER__(TEnumAsByte<E_Gait> ALS_Gait);

	void SetALSStance_Server(TEnumAsByte<E_Stance> stance);

	void SetALSStance_Multicast(TEnumAsByte<E_Stance> stance);

	void SetMovementInput_Server(int32_t MovementInputX, int32_t MovementInputY, int32_t MovementInputZ);

	void SetLookingRotation_Server(unsigned char Roll, unsigned char Pitch, unsigned char Yaw);

	void SetCharacterRotation_Server(unsigned char TargetRoll, unsigned char TargetPitch, unsigned char TargetYaw, unsigned char CharacterRoll, unsigned char CharacterPitch, unsigned char CharacterYaw);

	void UpdateLocationAndRotationDuringRagdoll_Server(struct FVector actorLocation, struct FRotator ActorRotation);

	void UpdateLocationAndRotationDuringRagdoll_Multicast(struct FVector actorLocation, struct FRotator ActorRotation);

	void UpdateActorLocationAndRotationDuringRagdoll();

	void AddCharacterRotation_BPI(struct FRotator AddAmount);

	void Set_ALS_Stance_BPI(TEnumAsByte<E_Stance> ALS_Stance);

	void Set_ALS_Gait_BPI(TEnumAsByte<E_Gait> ALS_Gait);

	void Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode> ALS_MovementMode, bool Force);

	void StartAiming();

	void StopAiming();

	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void AnimNotify_DespawnAnimItem(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn);

	void AnimNotify_SpawnAnimItem(TAssetPtr<class UClass> ItemClass, bool IsOffhand);

	void AnimNotify_HolsterWeapon();

	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState, bool SkipDespawnAnimItem);

	void ResetCameraPitch();

	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim);

	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops);

	void ForceStanding();

	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject> ObjectToNotify, struct FName NotifyName);

	void Knockback(struct FVector KnockbackDirection, float KnockbackStrength);

	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose, bool SkipDespawnAnimItem);

	void OnDeath();

	void Set_Caught_Prey_BPI(bool CaughtPrey);

	void PlayMountStopAnimation(int32_t AnimIndex);

	void PlayMountSpecial();

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

	void CharacterAddSkills_BPI(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedByGameSettings);

	void PlayDialogueAnimation_BPI(class UAnimMontage* DialogueAnimMontage, class UAnimMontage* LipsyncAnimMontage, bool IsRandomMontage);

	void Set_ActivityState_BPI(bool IsInActivity, unsigned char ActivityAnimID, TEnumAsByte<E_AnimActivityType> ActivityType, int32_t Loops);

	void SetHairAnimPhysics_BPI(TEnumAsByte<E_Hair> HairCategory);

	void AddPlayerToCheck_BPI(class AActor* Player);

	void PlayLipsyncAnimation_BPI(class UAnimMontage* LipsyncAnimMontage);

	void StartBodyDialogueAnimation_BPI(bool IsPersistent, class UAnimMontage* AnimMontage);

	void FinishQuestAnimation_BPI();

	void PlayBardAnimation_BPI(class UAnimMontage* BardAnimMontage, class UAnimMontage* LipsyncAnimMontage, float StartPosition, bool Replicate);

	void SynchronizeLipsyncAnimation_BPI(float StartingPosition);

	void SynchronizeBardAnimation_BPI(float StartingPosition);

	void SetOffHandToolType(TEnumAsByte<E_Tools> ToolType);

	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);

	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);

	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);

	void OnLanded(const struct FHitResult& Hit);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void Un_Ragdoll_Event(bool SkipAnim);

	void Ragdoll();

	void OnUnRagdoll_Server();

	void TryStartRagdoll();

	void TryStopRagdoll();

	void Server_StartRagdollCheck(bool ShouldEnableRagdoll);

	void Server_LaunchChar(struct FVector Velocity);

	void SetHealth_Server(float newHealth);

	void Heal();

	void Kill();

	void SetHealth(float newHealth);

	void SetHealthNormalized(float newHealthNormalized);

	void SetMaxHealth(float newMaxHealth);

	void BndEvt__BP_BaseCharacter_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void PlaySwipeSound(bool IsOffhand);

	void UnequipItemFromLeftHand();

	void UnequipItemFromRightHand();

	void EquipItemInLeftHand(struct FName ItemName);

	void EquipItemInRightHand(struct FName ItemName);

	void SetAttackingPush_BPI(bool IsAttacking);

	void StaggerOnBeingBlocked_Client();

	void PlayPushCombatAnimation_BPI();

	void SetShouldStagger(bool ShouldStagger);

	void RemoveDecayedAttackers();

	void NotifyAttack(class AActor* AttackerActor);

	void StaggerOnBeingBlocked_BPI();

	void SetAttackState_BPI(bool IsAttacking);

	void FollowUpComboAttack_BPI();

	void StartComboAttack_BPI(class UAnimMontage* InitialComboAttack);

	void SetComboState_BPI(bool CanFollowUp);

	void OnDismountingStarted();

	void OnMountingStarted();

	void Intimidate(class UObject* Intimidator, float InfluenceMultiplier);

	void IncreaseTemporarySpeedMultiplier(float IncreaseBy, float MaxMultiplierValue);

	void DecreaseTemporarySpeedMultiplier(float DecreaseBy, float MinMultiplierValue);

	void ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);

	void CancelAnimationLoops_Client();

	void OnSeasonUpdateInventory();

	void SetHat_BPI(TAssetPtr<class USkeletalMesh> MeshSoft, bool HideHair);

	void DecreaseReputation_BPI(int32_t Value);

	void IncreaseReputation_BPI(int32_t Value);

	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewHairMesh, const TArray<class USkeletalMesh*>& NewBodyMeshes, class UObject* NewClass, bool UpdateOnly);

	void SetMeshCollisionKeepTime_BPI(float Keep_Time);

	void SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type);

	void Hit(struct FVector HitLocation, struct FVector hitForce, struct FName HitBoneName);

	void PresetLoad(TArray<struct FST_NPCItemColors>* Array, class UTexture2D* Tattoo, bool Async);

	void SetIsInWater(bool InWater, float Intensity);

	void ChangeMontageNextSection(struct FName SectionNameToChange, struct FName NextSection, class UAnimMontage* Montage);

	void ShowInspectorUI();

	void BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature();

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void CancelAnimationLoops();

	void SelectPickUpAnimation(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void ChangePlayerInput(bool DisablePlayerInput);

	void PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void HoldableHitAction(TMap<struct FName, struct FST_MontagesSettingsEnum> ToolFPMontages, TMap<struct FName, struct FST_MontagesSettingsEnum> ToolTPMontages, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage, struct FName MontageName);

	void HoldableAction(TMap<struct FName, struct FST_MontagesSettingsEnum> ToolFPMontages, TMap<struct FName, struct FST_MontagesSettingsEnum> ToolTPMontages, bool Loop, bool SkipLoopStartCheck, bool IgnorePlayingMontage, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, struct FName MontageName, TEnumAsByte<E_AnimInteractionTypes> MontageType);

	void Limit_Camera_Rotation(struct FST_CameraRotationLimits CameraRotationLimits);

	void Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera);

	void Stop_Character_Movement(bool bStopMovementInput);

	void Swoon();

	void FinishStageInteraction();

	void StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish);

	void Change_Camera(bool bUsePlayerCamera, float BlendTime);

	void Stop_Character_Rotation(bool StopRotationInput);

	void SetupStageInteraction(class AActor* InteractedActor, TEnumAsByte<E_StageInteractionsTypes> StageInteractionType, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction);

	void ReceiveBeginPlay();

	void ReceiveTick(float DeltaSeconds);

	void OnPointDamageAppliedToOtherActor_Multicast(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class AActor* ActorUsedToApplyDamage, class UDamageType* DamageTypeClass);

	void SetCombatPushingActionState_Multicast(bool IsPerformingPush);

	void SetCombatPushingActionState_Server(bool IsPerformingPush);

	void FinishHoldableAction_Multicast();

	void FinishHoldableAction_Server();

	void StartHoldableAction_Multicast();

	void StartHoldableAction_Server();

	void ToolInteractionPlatformDestroyServer(class ABP_MasterPlatform_C* Platform);

	void ToolInteractionPlatformBuildServer(class ABP_MasterPlatform_C* Platform);

	void Multicast_UpdateNPCForClientsOnOwnershipSwap(class ABP_BaseCharacter_C* NPCReference, TEnumAsByte<E_Ownership> DesiredOwnership);

	void Server_UpdateNPCForClientsOnOwnershipSwap(class ABP_BaseCharacter_C* NPCReference);

	void UpdateDataManager_ListOfAnimals_Client(TArray<struct FST_AnimalList>* ListOfAnimal, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_AnimalCategory>* Categories);

	void UpdateDataManager_ListOfFurniture_Client(TArray<struct FST_FurnitureList>* ListOfFurniture, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FurnitureCategory>* Categories);

	void UpdateDataManager_ListOfFields_Client(TArray<struct FST_FieldList>* ListOfFields, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FieldCategory>* Categories);

	void UpdateDataManager_ListOfBuildings_Client(TArray<struct FST_BuildingList>* ListOfBuildings, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_BuildingCategory>* Categories);

	void UpdateDataManager_ListOfNPCs_Client(TArray<struct FST_CharacterList>* ListOfAllNPC, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<class ABP_NPC_C*>* ListOfNPC);

	void OnRepNotify_DefaultCharacterModules();

	void MoveFoliage_Client(class UBP_MasterFoliage_C* MasterFoliage, struct FVector InstanceLocation);

	void Client_CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL);

	void Server_CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL);

	void Client_ForceEndSpecificDialogue(struct FString NPCID);

	void Server_ForceEndSpecificDialogue(struct FString NPCID);

	void Server_ReleaseCharactersOnDialogueEnd(class ABP_NPC_C* NPCReference, class ABP_PlayerCharacter_C* PlayerReference);

	void Client_EndAllDialogues();

	void Server_EndAllDialogues();

	void PlaySound_Client(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime);

	void PlaySound_Multicast(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime);

	void PlaySound_Server(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime);

	void Server_SetIsTargetOfTalkGoalForNPC(class ABP_NPC_C* NPCReference, bool Value);

	void OnRep_CurrentCharacterPresetsIDs();

	void SpawnFoliageInteractionParticles_Multicast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex);

	void SpawnFoliageInteractionParticles_Server(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex);

	void UpdateMasterFoliageMulticast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex, bool SpawnInteractionFX);

	void UpdateMasterFoliageServer(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex, bool SpawnInteractionFX);

	void ChangeCollisionResponseToChannel_Server(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);

	void UpdateBuildingsPeople_Multicast(class ABP_MasterBuilding_C* BuildingReference, TArray<class ABP_BaseCharacter_C*>* People);

	void UpdateBuildingsPeople_Server(class ABP_MasterBuilding_C* BuildingReference, const TArray<class ABP_BaseCharacter_C*>& People);

	void UpdateEquippedItemCapacity_Server(class ABP_MasterHoldableItem_C* HeldItemReference, int32_t Capacity);

	void UpdateEquippedItemHP_Server(class ABP_MasterHoldableItem_C* HeldItemReference, float HP, bool OffHand);

	void UpdateDataManager_ListOfAllAnimals_Server();

	void UpdateDataManager_ListOfAnimals_Multicast(TArray<struct FST_AnimalList>* ListOfAnimal, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_AnimalCategory>* Categories);

	void UpdateDataManager_ListOfAnimals_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_AnimalCategory>* Categories, bool UseDataFromManager, bool ClientOnly);

	void UpdateDataManager_ListOfAllFurniture_Server();

	void UpdateDataManager_ListOfFurniture_Multicast(TArray<struct FST_FurnitureList>* ListOfFurniture, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FurnitureCategory>* Categories);

	void UpdateDataManager_ListOfFurniture_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FurnitureCategory>* Categories, bool UseDataFromManagement, bool ClientOnly);

	void UpdateDataManager_ListOfAllFields_Server();

	void UpdateDataManager_ListOfFields_Multicast(TArray<struct FST_FieldList>* ListOfFields, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FieldCategory>* Categories);

	void UpdateDataManager_ListOfFields_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_FieldCategory>* Categories, bool UseDataFromManager, bool ClientOnly);

	void UpdateDataManager_ListOfAllBuildings_Server();

	void UpdateDataManager_ListOfBuildings_Multicast(TArray<struct FST_BuildingList>* ListOfBuildings, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_BuildingCategory>* Categories);

	void UpdateDataManager_ListOfBuildings_Server(TEnumAsByte<E_Ownership> Ownership, TArray<struct FST_BuildingCategory>* Categories, bool UseDataFromManager, bool ClientOnly);

	void UpdateDataManager_ListOfAllNPCs_Server();

	void UpdateDataManager_ListOfNPCs_Multicast(TArray<struct FST_CharacterList>* ListOfAllNPC, bool OnlySpecificOwnership, TEnumAsByte<E_Ownership> Ownership, TArray<class ABP_NPC_C*>* ListOfNPC);

	void UpdateDataManager_ListOfNPCs_Server(TEnumAsByte<E_Ownership> Ownership, TArray<class ABP_NPC_C*>* ListOfNPC, bool UseDataFromManager, bool ClientOnly);

	void SpawnSound_Client(class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

	void SetActorRelativeRotation_Server(struct FRotator NewRelativeRotation, bool bSweep, bool bTeleport);

	void SetActorRelativeRotation_Multicast(struct FRotator NewRelativeRotation, bool bSweep, bool bTeleport);

	void SetActorRelativeLocation_Multicast(struct FVector NewRelativeLocation, bool bSweep, bool bTeleport);

	void SetActorRelativeLocation_Server(struct FVector NewRelativeLocation, bool bSweep, bool bTeleport);

	void SetSleeping_Multicast(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void SetSitting_Multicast(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void SetActorRotation_Multicast(class AActor* Target, struct FRotator NewRotation, bool bTeleportPhysics);

	void SetActorRotation_Server(class AActor* Target, struct FRotator NewRotation, bool bTeleportPhysics);

	void ReplicateInventoryForNonCharacter_Multicast(const TArray<struct FName>& Keys, const TArray<struct FST_InventoryItemsArray>& Values, class UInventoryComponent_C* InvComp);

	void ReplicateInventoryForNonCharacter_Client(const TArray<struct FName>& Keys, const TArray<struct FST_InventoryItemsArray>& Values, class UInventoryComponent_C* InvComp);

	void ReplicateInventoryForNonCharacter_Server(class UInventoryComponent_C* InvComp, bool ClientOnly);

	void InteractCancel_Server(class AActor* Target);

	void SetActorHidden_Server(bool bNewHidden);

	void SetSleeping_Server(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void SetSitting_Server(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void SetEnableIK_Server(bool IK_Enabled);

	void SetInteractionSlotIndex_Client(int32_t InteractionSlotIndex);

	void SetInteractionSlotIndex_Server(int32_t InteractionSlotIndex);

	void SetSatDown_Server(bool SatDown);

	void SetSatDown(bool SatDown);

	void OnDialogueEnded_Server();

	void OnDialogueStarted_Server();

	void ChangeCollisionResponseToChannel_Mullticast(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);

	void SetActorLocation_Client(struct FVector NewLocation);

	void SetActorLocation_Server(class AActor* Target, struct FVector NewLocation, bool bSweep, bool bTeleport);

	void SetActorLocationAndRotation_Multicast(class AActor* Target, struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, bool bTeleport);

	void SetActorLocationAndRotation_Server(class AActor* Target, struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, bool bTeleport);

	void CallOnInteractionFinished_Server();

	void ChangeCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);

	void UpdateNumberOfDecorationsServer(class ABP_MasterBuilding_C* Building);

	void PreviewDecorationServer(class ABP_MasterBuildModule_C* Module, int32_t SlotID, struct FName DecorObject);

	void UpdateDecorationServer(class ABP_MasterBuildModule_C* Module, int32_t SlotID, bool OverwriteDecorObject, struct FName DecorObject);

	void ChangeBuildingModuleServer(class ABP_MasterBuilding_C* Building, int32_t SocketID, int32_t Module_ID, class UInventoryComponent_C* Inventory);

	void SetHairID_Multicast(int32_t HairID);

	void SetHeadID_Multicast(int32_t HeadID);

	void SetHairID_Server(int32_t HairID);

	void SetHeadID_Server(int32_t HeadID);

	void SetFullBodyAimOffset_Multicast(class UBlendSpaceBase* AimOffset);

	void SetFullBodyAimOffset_Server(class UBlendSpaceBase* AimOffset);

	void SetMontageAimOffset_Multicast(class UBlendSpaceBase* AimOffset);

	void SetMontageAimOffset_Server(class UBlendSpaceBase* AimOffset);

	void FistFighting_Multicast();

	void FistFighting_Server();

	void SetBlocking_Multicast(bool Blocking);

	void SetBlocking_Server(bool Blocking);

	void PlayHolsterAnimation_Multicast(float PlayRate, TEnumAsByte<E_Tools> ToolType);

	void PlayHolsterAnimation_Server(float PlayRate, TEnumAsByte<E_Tools> ToolType);

	void StopMontage_Multicast(float InBlendOutTime, class UAnimMontage* Montage);

	void StopMontage_Server(float InBlendOutTime, class UAnimMontage* Montage);

	void ToolInteractionGateDestroyServer(class ABP_MasterGate_C* Gate);

	void ToolInteractionGateBuildServer(class ABP_MasterGate_C* Gate);

	void FinishStageInteraction_Client();

	void StartStageInteraction_Client(class AActor* InteractedActor, TEnumAsByte<E_StageInteractionsTypes> StageInteractionType, class UAnimMontage* MontageToPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction);

	void ToolInteractionBuildingDestroyServer(class ABP_MasterBuildModule_C* BuildModule);

	void ExecuteFinishBuildingVisualsMulticast(class ABP_MasterBuilding_C* Building, bool Base, bool Frame);

	void UpdateMaterialsOnBuildingModuleConstructedMulticast(class ABP_MasterBuildModule_C* BuildingModule);

	void SpawnParticles_Multicast(class UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);

	void SpawnParticles_Server(class UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);

	void SpawnSound_Multicast(class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

	void SpawnSound_Server(class USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

	void ToolInteractionSplineDestroyServer(class UBP_MasterSplineModule_C* SplineModule);

	void UpdateMaterialsOnSplineModuleConstructedMulticast(class UBP_MasterSplineModule_C* SplineModule);

	void ToolInteractionSplineBuildServer(class UBP_MasterSplineModule_C* SplineModule);

	void DecreaseReputationServer(int32_t Value);

	void IncreaseReputationServer(int32_t Value);

	void IncreaseTechnologyServer(TEnumAsByte<E_TechnologyTypes> TechnologyType, float Value);

	void ToolInteractionBuildServer(class ABP_MasterBuildModule_C* BuildModule);

	void HoldableActionHit_Multicast(TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage);

	void HoldableActionHit_Server(TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage);

	void HoldableAction_Multicast(bool Loop, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID);

	void HoldableAction_Server(bool UseLookingDown, float LookingDownAngle, bool Loop, bool OverrideMontage, bool IgnorePlayingMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID);

	void PickUpMasterResourceItemServer(class ABP_MasterResourceItem_C* ItemReference);

	void SetAnimBPToolType_Server(TEnumAsByte<E_Tools> ToolType);

	void DestroyOffHandHeldItem_Server();

	void DestroyHeldItem_Server();

	void SpawnOffHandHeldItem_Server(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, bool UpdateToolType, bool AttachHeldItem);

	void AttachHeldItem_Multicast(class ABP_MasterHoldableItem_C* Holdable);

	void SetAnimBPToolType_Multicast(TEnumAsByte<E_Tools> ToolType);

	void DestroyActor_Server(class AActor* Actor);

	void SpawnHeldItem_Server(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, bool UpdateToolType, bool AttachHeldItem);

	void ReplaceFoliageToEmptyMulticast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex);

	void ReplaceFoliageToEmptyServer(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex);

	void RemoveFoliageByMoveMulticast(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex);

	void RemoveFoliageByMoveServer(class UBP_MasterFoliage_C* MasterFoliage, int32_t InstanceIndex);

	void RemoveItemFromInventoryTransferServer(class UInventoryComponent_C* InvCompReference, int32_t Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, const struct FName& ItemName);

	void RemoveItemFromInventory_Server(class UInventoryComponent_C* InvCompReference, int32_t Count, bool ShouldSpawn, bool UseCustomTransformForSpawn, struct FTransform CustomTransform, bool DisplayNotification, bool UpdateInventory, int32_t ArrayID, struct FName ItemName, float NotificationDelay);

	void AddItemToDestinationInvCompServer(class UInventoryComponent_C* InvCompReference, struct FName ItemId, int32_t Count, bool PassCondition, float CurrentHP, float MaxHP, int32_t Capacity, float Freshness, TEnumAsByte<E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay);

	void ReplicateInventoryForComponent(class UInventoryComponent_C* InventoryComponentReference);

	void SetWasActorUpdated_BPI(bool Value);

	void ApplySkeletalMontagesUpdate(const TArray<struct FMontageDataForRep>& MontagesData);

	void ExecuteActorUpdate(class APlayerController* Requester);

	void PreviewDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, bool GoBackToSavedColor);

	void ChangeDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, struct FName DyeItemNameRow);

	void SetIsStaggered_BPI(bool IsStaggered, bool ReduceStamina, float AmountToReduce);

	void StopStageInteraction();

	void SetBardTrackData_BPI(struct FST_TrackData TrackData);

	void SetIsBardCurrentlyPlaying_BPI(bool IsPlaying);

	void SetCharacterListeningToBard_BPI(bool IsListening);

	void AnimNotify_BandMontageComplete();

	void AnimNotify_ActivityLoopsFinished(class UAnimMontage* Montage, unsigned char ActivityAnimID, int32_t Loop);

	void AnimNotify_ActivityLoopIncreased(class UAnimMontage* Montage, unsigned char ActivityAnimID, int32_t Loop);

	void AnimNotify_ActivityMontageInterrupted(class UAnimMontage* Montage, unsigned char ActivityAnimID);

	void StopDialogueAnimation_BPI();

	void SetOldness_BPI(float Old);

	void GetMountMovementMode_BPI(TEnumAsByte<E_MovementMode> MountMovementMode);

	void SetProfessionData(struct FST_Profession ProfessionData);

	void AnimNotify_ActivityMontageComplete(class UAnimMontage* Montage, unsigned char ActivityAnimID);

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

	void OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection, bool AutomaticPlay);

	void OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection, bool AutomaticPlay);

	void ChangeAnimLoopState(bool IsLooping);

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

	void Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode> ALS_RotationMode_BPI);

	void Interact_Client(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void RotateYaw(float Angle);

	void RotatePitch(float Angle);

	void DetachItem();

	void SetRotateMode(bool RotateLeft, bool RotateRight);

	void StopAttackFunction();

	void StartAttackFunction(bool Timer, struct FName Socket);

	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);

	void IsLookedAt(bool Active);

	void PerformActorInteraction();

	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, int32_t ChunkID);

	void SetOccupied(class APawn* Character);

	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);

	void InteractInput(bool KeyDown);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void ApplyByteVarUpdate(unsigned char Byte);

	void ProcessByteVarUpdate(class AActor* Actor, unsigned char Byte);

	void ProcessSkeletalMontagesUpdate(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData);

	void RequestActorUpdate(class AActor* Actor, bool Force);

	void OnLoaded_AF7514B049C1F96364328B9F425197C1(class UObject* Loaded);

	void OnLoaded_D8AD35634544C64C53D5E2A90FFAC7D2(class UObject* Loaded);

	void OnLoaded_25EE5335423A2DCB0FCA66BD0A691BC9(class UObject* Loaded);

	void OnLoaded_B8164FD1402D7EE5A2C8ADA700CD774A(class UObject* Loaded);

	void OnLoaded_BB91ECF841AA5D58C426EE85AF8BB673(class UObject* Loaded);

	void FistFightingTimeline__UpdateFunc();

	void FistFightingTimeline__FinishedFunc();

	void Blinking__UpdateFunc();

	void Blinking__FinishedFunc();

	void EyesStateTL__UpdateFunc();

	void EyesStateTL__FinishedFunc();

	void UserConstructionScript();

	void Calculate_Essential_Variables();

	void OnMovementModeChanged();

	void On_ALS_Gait_Changed();

	void On_ALS_Stance_Changed();

	void On_ALS_RotationMode_Changed();

	void SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed);

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

	void ChooseVelocity(struct FVector* Velocity);

	void DebugMode();

	void On_ALS_ViewMode_Changed();

	void CustomAcceleration();

	void CanSprint(bool* CanSprint);

	void CalculateActorLocationAndRotationInRagdoll(struct FRotator* ActorRotation, struct FVector* actorLocation);

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

	struct FRotator GetLookingRotation();

	float GetMouseLeftRightAxisInput();

	float GetMouseUpDownAxisInput();

	void EquipAnimHoldable(class ABP_MasterHoldableItem_C* ItemClass, bool IsOffhand);

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

	void OnStartWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation);

	void OnEndWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation);

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

	void SetMeshesFromPreset(TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame, bool DontSetIfNotFound);

	void GetPresetForProfession(TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets* Preset);

	void CombinePresets(TEnumAsByte<E_Profession> Profession, struct FST_NPCsPresets BasePreset, struct FName* PresetID, struct FST_NPCsMeshesDyes* Meshes);

	void CombinePresetsByIDs(struct FName BasePresetID, struct FName ProfessionPresetID, struct FST_NPCsMeshesDyes* Meshes);

	void InitializeMeshFromPreset(class USkeletalMeshComponent* SkeletalComponent, struct FST_NPCItemColors Mesh, class UTexture2D* Tattoo);

	void GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen);

	void GetHeadAndHair(class USkeletalMesh** head, class USkeletalMesh** Hair);

	void InitializeComponentMaterials(class USkeletalMeshComponent* SkeletalComponent, class UTexture2D* Tattoo, class UMaterialInstance* CustomMaterial);

	void UpdateDyeColor(struct FST_ColorTable Dye, class UMaterialInstanceDynamic* Material);

	void UpdateStitchColor(struct FST_ColorTable Dye, class UMaterialInstanceDynamic* Material);

	class UObject* GetAnimClassForNPC();

	void UpdateDefaultFov(float InFieldOfView);

	void SnapToSlot(int32_t SlotIndex, class AActor* InteractedActor, struct FVector LocationOffset, bool IsFinalTransform, bool* Success);

	bool IsWearingCorrectPreset(bool CheckProfession);

	void UpdateDrunkMovement();

	void OnCloseCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation);

	void OnWaitForCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera);

	void GetDirection(float* Direction);

	void OnDayChangedByTimeUpdate();

	void ChangeName(struct FName NewRowName, struct FText NewName, bool ChangeSex);

	void HolsterToolsForDialogue(bool Hide);

	void OnStartFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation, struct FRotator InteractRotation);

	void OnEndFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation);

	void GroundedRotation();

	void On_MountMovementMode_Changed(TEnumAsByte<E_MovementMode> NewMountMovementMode);

	void CalculateWorkPlayRateByMoodAndSkill(TEnumAsByte<E_Profession> Profession);

	void CacheProfessionPreset();

	void ClearCachedProfessionPreset();

	void AddSkillsToApprentices(TEnumAsByte<E_Skills> Skill, float Value, TEnumAsByte<E_Profession> Profession);

	void MeshSettings();

	bool IsRagdolling()/* const*/;

	void UpdateHairMovement();

	void CreateMergedMeshMaterials(class USkeletalMeshComponent* SkeletalMeshComp, const TMap<class UMaterialInterface*, struct FST_NPCItemColors>& MaterialData, class UTexture2D* Tattoo);

	void PerformHoldableAction(TMap<struct FName, struct FST_MontagesSettingsEnum> FPMontages, TMap<struct FName, struct FST_MontagesSettingsEnum> TPMontages, bool Loop, bool OverrideMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, struct FName MontageName, TEnumAsByte<E_AnimInteractionTypes> MontageType, struct FST_MontagesSettings* MontageSettings);

	void SetMeshesRowName(struct FName Value);

	void SetHeadID(int32_t Value);

	void SetHairID(int32_t Value);

	void SetCurrentBasePresetID(struct FName Value);

	void SetCurrentProfessionPresetID(struct FName Value);

	void SetMeshesFromPreset_Rep(bool LoadGame);

	void CheckDrunkState();

	void OnRep_HeldItem();

	void OnRep_Off_HandItem();

	void OnHeldItemReplicated();

	void OnOffHandItemReplicated();

	void GetHairColorByID(int32_t ID, struct FLinearColor DefaultColor, struct FLinearColor* Color);

	void GetSkinColorByID(int32_t ColorID, struct FLinearColor DefaultColor, struct FLinearColor* Color);

	void InitializeMaterialsForBeard(TArray<class UMaterialInterface*>* MaterialInstances);

	void OnRep_IsSwooned();

	void UpdateReplicatedPresetIDs();

	void UpdateHairColorParameter(class UMaterialInstanceDynamic* MaterialInstance, struct FLinearColor Color);

	void UpdateSkinToneParameter(class UMaterialInstanceDynamic* MaterialInstance, struct FLinearColor Tone);

	void SetInventoryOpen(bool Value);

	void SetGameMenuOpen(bool Value);

	void TrySyncFurnitureAnim(class AActor* ActorToSync, bool* Synced);

	void OnRep_InteractedActor();

	void OnRep_DefaultCharacterModules();

	void OnRep_Aiming();

	void SetHairColor(bool RandomColor);

	void SetSkinColor(bool RandomColor);

	void UpdateEyebrowsColorParameter(class UMaterialInstanceDynamic* MaterialInstance, struct FLinearColor Color);

	void OnRep_Sitting();

	void OnRep_Sleeping();

	void InitInspectorMode();

	void OnRep_IKEnabled();

	void IntimidateActors(float Radius, TArray<struct FName>* ActorTypes)/* const*/;

	void SetCoopStatsProtection(bool Value);

	void RagdollCheck();

	void StartRagdollCheck(bool ShouldEnableRagdoll);

	void PrepareReplicatedBoneData();

	void UpdateReplicatedBoneVelocities();

	void SetRagdollStartImpulse(struct FVector ImpulseForce, struct FName ImpulseBoneName);

	void CheckMountDriverOverlap();

	void SetMovementMode(TEnumAsByte<E_MovementMode> MovementMode);

	void GetRagdollStartTime(float* RagdollStartTime)/* const*/;

	void FreezeRagdoll();

	void UnfreezeRagdoll();

	void GetIsRagdollFrozen(bool* IsRagdollFrozen)/* const*/;

	void ReplicateRagdoll();

	void GetRagdollReplicatedBoneNames(TArray<struct FName>* RagdollReplicatedBoneNames)/* const*/;

	void GetIntimidation(float* Intimidation)/* const*/;

	void GetIsMounting(bool* IsMounting)/* const*/;

	void GetIsDismounting(bool* IsDismounting)/* const*/;

	void EvaluateCanBePushed(bool* canBePushed)/* const*/;

	void AddStaticCollision();

	void RemoveStaticCollision();

	void OnRep_HasStaticCollision();

	void ValidateRagdollLocation(bool* WasRagdollLocationSnapped);

	void EvaluateIsCollisionEnabled(bool* isCollisionEnabled)/* const*/;

	void OnRep_MountReference();

	void OnRep_RagdollState();

	bool IsCharacterPlayerControlled();

	void OnStaminaChange();

	void SetHeldItem(class ABP_MasterHoldableItem_C* HeldItem);

	void OnItemPointDamageAppliedToOtherActor(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

	void SetOffHandItem(class ABP_MasterHoldableItem_C* OffHandItem);

	void GetActorInFront(TArray<class AActor*>* ActorsToCheck, float MaxAngle, float MaxDistance, TArray<class AActor*>* ActorClassFilter, class AActor** ActorInFront)/* const*/;

	void GetBlockingTool(class ABP_MasterHoldableItem_C** BlockingTool, bool* IsValid)/* const*/;

	float CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void GetEquippedItemNames(TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>* EquippedItemNames)/* const*/;

	void GetEquipmentCategoriesForBone(struct FName BoneName, TArray<TEnumAsByte<E_EquipmentCategories>>* EquipmentCategories)/* const*/;

	void GetArmorItemDamageResistance(struct FName ArmorItemName, class UDamageType* DamageTypeClass, float* ArmorItemDamageResistance)/* const*/;

	void CalculateWholeArmorDamageMultiplier(class UDamageType* DamageTypeClass, TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames, float* WholeArmorDamageMultiplier)/* const*/;

	void CalculateArmorDamageMultiplier(struct FName HitBoneName, class UDamageType* DamageTypeClass, TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames, float* ArmorDamageMultiplier)/* const*/;

	void EquipHoldableItemInRightHand(class UObject* HoldableItemClass);

	void EquipHoldableItemInLeftHand(class UObject* HoldableItemClass);

	void UnequipHoldableItemFromRightHand();

	void UnequipHoldableItemFromLeftHand();

	void CalculateStaminaRequiredToBlockHit(float HitDamage, float* StaminaRequiredToBlockHit)/* const*/;

	void SetIrisForNPC();

	void OnCombatCauserStarted(class AActor* CombatCauser);

	void OnCombatCauserEnded(class AActor* CombatCauser);

	void OnCombatStarted();

	void OnCombatEnded();

	void OnCombatCheck();

	void GetEquippedPhysicalMaterialCoefficients(TMap<class UPhysicalMaterial*, float>* EquippedPhysicalMaterialCoefficients)/* const*/;

	void DecreaseProtectionDurability(float Damage, class UDamageType* DamageType, struct FName HitBoneName, class AActor* DamageCauser);

	void OnPointDamageReceived(float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType);

	void OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType);

	void OnBlockBroken(float ReceivedDamage);

	void OnHitBlocked(float ReceivedDamage);

	void OnHitNotBlocked(float ReceivedDamage);

	bool IsAlive()/* const*/;

	bool HasFullHealth()/* const*/;

	float GetMaxHealth()/* const*/;

	float GetHealthNormalized()/* const*/;

	float GetHealth()/* const*/;

	void OnHealthChanged();

	void OnKilled();

	void IntimidationDecay();

	void SetCourage(float Courage);

	void GetCourage(float* Courage)/* const*/;

	void Get_ALS_Stance_BPI(TEnumAsByte<E_Stance>* stance);

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

	void GetToolType_BPI(TEnumAsByte<E_Tools>* ToolType)/* const*/;

	void GetIsBlocking_BPI(bool* Blocking);

	void GetCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, bool FastAnim, class UAnimMontage** CraftingMontage, float* Duration, float* Loop, float* LoopWait, float* LoopEnd);

	void GetCurrentCraftingMontage(class UAnimMontage** CraftingMontage);

	void GetCharacterOwnership(TEnumAsByte<E_Ownership>* Ownership);

	void GetEnableIK_BPI(bool* IK_Enabled);

	void GetMass(float* Value);

	void GetMesh_BPI(class USkeletalMeshComponent** Mesh);

	void IsMoving_BPI(bool* IsMoving);

	void PlayPushAnimation(float PlayRate, int32_t animationId, float* Duration);

	void GetTime(struct FST_Time* Time);

	void GetCharacterStamina_BPI(float* Stamina, float* MaxStamina);

	void GetCharacterHealth_BPI(float* health, float* MaxHealth);

	void DecreaseStamina_BPI(float Stamina, bool Dirtiness, bool* Enough);

	void CheckIfShouldPlayAnotherLoop_BPI(bool* Return_Value);

	void GetCharacterSex_BPI(TEnumAsByte<E_Sex>* CharacterSex);

	bool GetIsSwooned_BPI();

	void CheckIfCharacterIsInCustomAnimation(bool* IsValid);

	bool GetIsSleeping_BPI();

	bool GetIsSitting_BPI();

	void PlayOnomatopoeicSound_BPI(struct FName SoundSubCategory, bool PickRandom, int32_t SoundId, bool* Success);

	void GetIsInWater(bool* Value);

	void IsSleepingMontagePlaying_BPI(bool* IsPlaying);

	void GetComboState_BPI(bool* CanFollowUp);

	void GetAttackStage_BPI(bool* IsAttacking);

	void TryPlayAttackAnimation(float PlayRate, bool CanContinueSequence, bool* HasStartedNewAttackAnimationSequence, float* AttackAnimationPredictedEndTime);

	void TryPlayHitAnimation(float PlayRate, bool* HasStartedHitAnimation, float* HitAnimationPredictedEndTime);

	void TryPlayBlockBreakAnimation(float PlayRate, bool* HasStartedBlockBreakAnimation, float* BlockBreakAnimationPredictedEndTime);

	void GetIsStaggered_BPI(bool* IsStaggered);

	void GetLeftHandItemName(struct FName* LeftHandItemName)/* const*/;

	void GetRightHandItemName(struct FName* RightHandItemName)/* const*/;

	void IsHoldableActionPlaying_BPI(bool* IsPlaying);

	void GetDyeParamsForSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor* DyeColor, struct FName* DyeItemName, bool* IsValid);

	void GetOffHandToolType(TEnumAsByte<E_Tools>* ToolType)/* const*/;

	void CanBlockHit(class UObject* HitByObject, float HitDamage, bool* CanBlockHit)/* const*/;

	void GetCharacterIsDead_BPI(bool* IsDead);

	void TryPlayPushAnimation(float PlayRate, bool* HasStartedPushAnimation, float* PushAnimationPredictedEndTime);

	void GetInventoryComponent(class UActorComponent** InventoryComponent)/* const*/;

	void GetInventory(TScriptInterface<class UBPI_Inventory_C>* Inventory)/* const*/;

	void GetEyesLocation(struct FVector* EyesLocation)/* const*/;

	void GetInteractCount(int32_t* Count);

	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetInteractAction(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractActionText, struct FText* InteractSecondActionText);

	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);

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

	void IsInCombat_BPI(bool* InCombat)/* const*/;

	void GetCombatCausersBPI(TArray<class AActor*>* CombatCausers)/* const*/;

	void GetDistance(float* Distance);

	void GetOptimalizationStage(int32_t* Stage);

	void GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/;

	void GetActorType(struct FName* ActorType)/* const*/;

	void CanSenseOthers(bool* CanSenseOthers)/* const*/;

	void CanBeSensed(bool* CanBeSensed)/* const*/;

	void GetCurrentAttackers(struct FName ActorsType, TArray<class AActor*>* CurrentAttackerActors, int32_t* MaxConcurrentAttackersCount)/* const*/;

	bool WasActorUpdated_BPI();

	TArray<struct FMontageDataForRep> GetMontagesForReplicaton_BPI();

	void ConvertHit(float damageToApply, struct FVector hitFromDirection, struct FHitResult* Hit, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void CanDamage(struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, bool* CanDamage)/* const*/;

	void GetName(struct FName* Name)/* const*/;

	void GetDisplayName(struct FText* DisplayName)/* const*/;

	void InputAxisDelegateBinding_1();

#pragma endregion
};
};