#pragma once
#include "Structs.h"
#include "BP_BaseCharacter/BP_BaseCharacter_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Super: BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// Size: 8209
// Size inherited: 5580
/////////////////////////////////////////////
namespace UE4 {
class ABP_PlayerCharacter_C : public ABP_BaseCharacter_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 5584	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UPointLightComponent*	NPC_Light;		//Offset: 5592	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPointLightComponent* M_GetNPC_Light() const;
	class UPointLightComponent** M_PtrGetNPC_Light();
	void M_SetNPC_Light(const class UPointLightComponent*& value);

	//class UCameraComponent*	TP_Camera;		//Offset: 5600	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCameraComponent* M_GetTP_Camera() const;
	class UCameraComponent** M_PtrGetTP_Camera();
	void M_SetTP_Camera(const class UCameraComponent*& value);

	//class UMD_SpringArmComponent*	TP_SpringArm;		//Offset: 5608	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UMD_SpringArmComponent* M_GetTP_SpringArm() const;
	class UMD_SpringArmComponent** M_PtrGetTP_SpringArm();
	void M_SetTP_SpringArm(const class UMD_SpringArmComponent*& value);

	//class UPhysicsHandleComponent*	PhysicsHandle;		//Offset: 5616	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPhysicsHandleComponent* M_GetPhysicsHandle() const;
	class UPhysicsHandleComponent** M_PtrGetPhysicsHandle();
	void M_SetPhysicsHandle(const class UPhysicsHandleComponent*& value);

	//class UCameraComponent*	FP_Camera;		//Offset: 5624	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCameraComponent* M_GetFP_Camera() const;
	class UCameraComponent** M_PtrGetFP_Camera();
	void M_SetFP_Camera(const class UCameraComponent*& value);

	//class USpringArmComponent*	FP_SpringArm;		//Offset: 5632	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USpringArmComponent* M_GetFP_SpringArm() const;
	class USpringArmComponent** M_PtrGetFP_SpringArm();
	void M_SetFP_SpringArm(const class USpringArmComponent*& value);

	//class UAudioComponent*	LifeStats_Voice;		//Offset: 5640	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetLifeStats_Voice() const;
	class UAudioComponent** M_PtrGetLifeStats_Voice();
	void M_SetLifeStats_Voice(const class UAudioComponent*& value);

	//class UBP_AimOffsetComponent_C*	BP_AimOffsetComponent;		//Offset: 5648	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AimOffsetComponent_C* M_GetBP_AimOffsetComponent() const;
	class UBP_AimOffsetComponent_C** M_PtrGetBP_AimOffsetComponent();
	void M_SetBP_AimOffsetComponent(const class UBP_AimOffsetComponent_C*& value);

	//class USceneComponent*	ActionCameraSocket;		//Offset: 5656	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetActionCameraSocket() const;
	class USceneComponent** M_PtrGetActionCameraSocket();
	void M_SetActionCameraSocket(const class USceneComponent*& value);

	//class UBP_WeatherComponent_C*	BP_WeatherComponent;		//Offset: 5664	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_WeatherComponent_C* M_GetBP_WeatherComponent() const;
	class UBP_WeatherComponent_C** M_PtrGetBP_WeatherComponent();
	void M_SetBP_WeatherComponent(const class UBP_WeatherComponent_C*& value);

	//class UArrowComponent*	BuildingTargetArrow;		//Offset: 5672	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetBuildingTargetArrow() const;
	class UArrowComponent** M_PtrGetBuildingTargetArrow();
	void M_SetBuildingTargetArrow(const class UArrowComponent*& value);

	//class UBP_PlayerBuildingComponent_C*	BP_PlayerBuildingComponent;		//Offset: 5680	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_PlayerBuildingComponent_C* M_GetBP_PlayerBuildingComponent() const;
	class UBP_PlayerBuildingComponent_C** M_PtrGetBP_PlayerBuildingComponent();
	void M_SetBP_PlayerBuildingComponent(const class UBP_PlayerBuildingComponent_C*& value);

	//float	StaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37;		//Offset: 5688	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37() const;
	float* M_PtrGetStaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37();
	void M_SetStaggerPitchTimeline_Pitch_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37(const float& value);

	//TEnumAsByte<ETimelineDirection>	StaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37;		//Offset: 5692	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetStaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetStaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37();
	void M_SetStaggerPitchTimeline__Direction_0F3A9CE34A6D3B8D2EDCB5BE1BD26C37(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	StaggerPitchTimeline;		//Offset: 5696	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetStaggerPitchTimeline() const;
	class UTimelineComponent** M_PtrGetStaggerPitchTimeline();
	void M_SetStaggerPitchTimeline(const class UTimelineComponent*& value);

	//float	Timeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445;		//Offset: 5704	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445() const;
	float* M_PtrGetTimeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445();
	void M_SetTimeline_IKAlpha_IKAlphaInterpolation_0648C8AB43540ACC8F5C78807AE97445(const float& value);

	//TEnumAsByte<ETimelineDirection>	Timeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445;		//Offset: 5708	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetTimeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetTimeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445();
	void M_SetTimeline_IKAlpha__Direction_0648C8AB43540ACC8F5C78807AE97445(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	Timeline_IKAlpha;		//Offset: 5712	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetTimeline_IKAlpha() const;
	class UTimelineComponent** M_PtrGetTimeline_IKAlpha();
	void M_SetTimeline_IKAlpha(const class UTimelineComponent*& value);

	//float	InspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D;		//Offset: 5720	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D() const;
	float* M_PtrGetInspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D();
	void M_SetInspectorIntensity_Intensity_D288012847F5A0E951949A91B6DA0B8D(const float& value);

	//TEnumAsByte<ETimelineDirection>	InspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D;		//Offset: 5724	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetInspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetInspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D();
	void M_SetInspectorIntensity__Direction_D288012847F5A0E951949A91B6DA0B8D(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	InspectorIntensity;		//Offset: 5728	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetInspectorIntensity() const;
	class UTimelineComponent** M_PtrGetInspectorIntensity();
	void M_SetInspectorIntensity(const class UTimelineComponent*& value);

	//float	NightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012;		//Offset: 5736	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012() const;
	float* M_PtrGetNightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012();
	void M_SetNightVisionIntensity_Intensity_3471EB98457ADE1F7030F4B4B7D66012(const float& value);

	//TEnumAsByte<ETimelineDirection>	NightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012;		//Offset: 5740	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetNightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetNightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012();
	void M_SetNightVisionIntensity__Direction_3471EB98457ADE1F7030F4B4B7D66012(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	NightVisionIntensity;		//Offset: 5744	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetNightVisionIntensity() const;
	class UTimelineComponent** M_PtrGetNightVisionIntensity();
	void M_SetNightVisionIntensity(const class UTimelineComponent*& value);

	//float	CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557;		//Offset: 5752	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557() const;
	float* M_PtrGetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557();
	void M_SetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557(const float& value);

	//TEnumAsByte<ETimelineDirection>	CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557;		//Offset: 5756	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557();
	void M_SetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	CameraLerp;		//Offset: 5760	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetCameraLerp() const;
	class UTimelineComponent** M_PtrGetCameraLerp();
	void M_SetCameraLerp(const class UTimelineComponent*& value);

	//float	FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A;		//Offset: 5768	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const;
	float* M_PtrGetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A();
	void M_SetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const float& value);

	//TEnumAsByte<ETimelineDirection>	FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A;		//Offset: 5772	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A();
	void M_SetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	FOV;		//Offset: 5776	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetFOV() const;
	class UTimelineComponent** M_PtrGetFOV();
	void M_SetFOV(const class UTimelineComponent*& value);

	//class APC_Player_C*	PlayerControllerReference;		//Offset: 5784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class APC_Player_C* M_GetPlayerControllerReference() const;
	class APC_Player_C** M_PtrGetPlayerControllerReference();
	void M_SetPlayerControllerReference(const class APC_Player_C*& value);

	//class AActor*	LastHitActor;		//Offset: 5792	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetLastHitActor() const;
	class AActor** M_PtrGetLastHitActor();
	void M_SetLastHitActor(const class AActor*& value);

	//class AActor*	HitActor;		//Offset: 5800	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetHitActor() const;
	class AActor** M_PtrGetHitActor();
	void M_SetHitActor(const class AActor*& value);

	//class AActor*	TimerHitActor;		//Offset: 5808	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetTimerHitActor() const;
	class AActor** M_PtrGetTimerHitActor();
	void M_SetTimerHitActor(const class AActor*& value);

	//class AActor*	Interacted_Furniture;		//Offset: 5816	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetInteracted_Furniture() const;
	class AActor** M_PtrGetInteracted_Furniture();
	void M_SetInteracted_Furniture(const class AActor*& value);

	//class AActor*	GrabbedActor;		//Offset: 5824	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetGrabbedActor() const;
	class AActor** M_PtrGetGrabbedActor();
	void M_SetGrabbedActor(const class AActor*& value);

	//struct FTimerHandle	InteractTimerHandle;		//Offset: 5832	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetInteractTimerHandle() const;
	struct FTimerHandle* M_PtrGetInteractTimerHandle();
	void M_SetInteractTimerHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	PickingTImer;		//Offset: 5840	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPickingTImer() const;
	struct FTimerHandle* M_PtrGetPickingTImer();
	void M_SetPickingTImer(const struct FTimerHandle& value);

	//struct FTimerHandle	InteractionHitTimer;		//Offset: 5848	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetInteractionHitTimer() const;
	struct FTimerHandle* M_PtrGetInteractionHitTimer();
	void M_SetInteractionHitTimer(const struct FTimerHandle& value);

	//struct FTimerHandle	TimedInteractionHandle;		//Offset: 5856	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetTimedInteractionHandle() const;
	struct FTimerHandle* M_PtrGetTimedInteractionHandle();
	void M_SetTimedInteractionHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	InteractionRepeatTimer;		//Offset: 5864	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetInteractionRepeatTimer() const;
	struct FTimerHandle* M_PtrGetInteractionRepeatTimer();
	void M_SetInteractionRepeatTimer(const struct FTimerHandle& value);

	//struct FHitResult	OnStartHitReference;		//Offset: 5872	Size: 136	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
	struct FHitResult M_GetOnStartHitReference() const;
	struct FHitResult* M_PtrGetOnStartHitReference();
	void M_SetOnStartHitReference(const struct FHitResult& value);

	//struct FKey	PressedKey;		//Offset: 6008	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FKey M_GetPressedKey() const;
	struct FKey* M_PtrGetPressedKey();
	void M_SetPressedKey(const struct FKey& value);

	//struct FVector	LastHitLocation;		//Offset: 6032	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetLastHitLocation() const;
	struct FVector* M_PtrGetLastHitLocation();
	void M_SetLastHitLocation(const struct FVector& value);

	//float	InteractionTime;		//Offset: 6044	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionTime() const;
	float* M_PtrGetInteractionTime();
	void M_SetInteractionTime(const float& value);

	//float	InteractionRange;		//Offset: 6048	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionRange() const;
	float* M_PtrGetInteractionRange();
	void M_SetInteractionRange(const float& value);

	//float	InteractionNoCollisionRange;		//Offset: 6052	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionNoCollisionRange() const;
	float* M_PtrGetInteractionNoCollisionRange();
	void M_SetInteractionNoCollisionRange(const float& value);

	//float	HitRayCastFrequency;		//Offset: 6056	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitRayCastFrequency() const;
	float* M_PtrGetHitRayCastFrequency();
	void M_SetHitRayCastFrequency(const float& value);

	//float	HitRayCastBuildingFrequency;		//Offset: 6060	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitRayCastBuildingFrequency() const;
	float* M_PtrGetHitRayCastBuildingFrequency();
	void M_SetHitRayCastBuildingFrequency(const float& value);

	//float	FieldBuildingRange;		//Offset: 6064	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFieldBuildingRange() const;
	float* M_PtrGetFieldBuildingRange();
	void M_SetFieldBuildingRange(const float& value);

	//float	SplineBuildingRange;		//Offset: 6068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSplineBuildingRange() const;
	float* M_PtrGetSplineBuildingRange();
	void M_SetSplineBuildingRange(const float& value);

	//float	FurnitureBuildingRange;		//Offset: 6072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFurnitureBuildingRange() const;
	float* M_PtrGetFurnitureBuildingRange();
	void M_SetFurnitureBuildingRange(const float& value);

	//float	LastHitActorInteractionDistance;		//Offset: 6076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLastHitActorInteractionDistance() const;
	float* M_PtrGetLastHitActorInteractionDistance();
	void M_SetLastHitActorInteractionDistance(const float& value);

	//float	TimeRequired;		//Offset: 6080	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeRequired() const;
	float* M_PtrGetTimeRequired();
	void M_SetTimeRequired(const float& value);

	//int32_t	HitActorID;		//Offset: 6084	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHitActorID() const;
	int32_t* M_PtrGetHitActorID();
	void M_SetHitActorID(const int32_t& value);

	//int32_t	LastHitActorID;		//Offset: 6088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLastHitActorID() const;
	int32_t* M_PtrGetLastHitActorID();
	void M_SetLastHitActorID(const int32_t& value);

	//class ABP_NPC_C*	TraderReference;		//Offset: 6096	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_NPC_C* M_GetTraderReference() const;
	class ABP_NPC_C** M_PtrGetTraderReference();
	void M_SetTraderReference(const class ABP_NPC_C*& value);

	//class UUserWidget*	UI_GameMenu;		//Offset: 6104	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_GameMenu() const;
	class UUserWidget** M_PtrGetUI_GameMenu();
	void M_SetUI_GameMenu(const class UUserWidget*& value);

	//class UUI_Inspector_Player_C*	InspectorPlayer;		//Offset: 6112	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Inspector_Player_C* M_GetInspectorPlayer() const;
	class UUI_Inspector_Player_C** M_PtrGetInspectorPlayer();
	void M_SetInspectorPlayer(const class UUI_Inspector_Player_C*& value);

	//struct FTimerHandle	FoliageInteractionTimer;		//Offset: 6120	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFoliageInteractionTimer() const;
	struct FTimerHandle* M_PtrGetFoliageInteractionTimer();
	void M_SetFoliageInteractionTimer(const struct FTimerHandle& value);

	//struct FTimerHandle	FoliageParticleSystemsUpdateTimer;		//Offset: 6128	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFoliageParticleSystemsUpdateTimer() const;
	struct FTimerHandle* M_PtrGetFoliageParticleSystemsUpdateTimer();
	void M_SetFoliageParticleSystemsUpdateTimer(const struct FTimerHandle& value);

	//TArray<struct FName>	SpawnedFoliageParticleSystemTagsCache;		//Offset: 6136	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetSpawnedFoliageParticleSystemTagsCache() const;
	TArray<struct FName>* M_PtrGetSpawnedFoliageParticleSystemTagsCache();
	void M_SetSpawnedFoliageParticleSystemTagsCache(const TArray<struct FName>& value);

	//struct FST_PlayerModulesIDs	CustomCharacterParams;		//Offset: 6152	Size: 120	Flags: Edit, BlueprintVisible, Net, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	struct FST_PlayerModulesIDs M_GetCustomCharacterParams() const;
	struct FST_PlayerModulesIDs* M_PtrGetCustomCharacterParams();
	void M_SetCustomCharacterParams(const struct FST_PlayerModulesIDs& value);

	//TArray<struct FST_Dye>	Dyes;		//Offset: 6272	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
	TArray<struct FST_Dye> M_GetDyes() const;
	TArray<struct FST_Dye>* M_PtrGetDyes();
	void M_SetDyes(const TArray<struct FST_Dye>& value);

	//TArray<TEnumAsByte<E_EquipmentCategories>>	HiddenArmors;		//Offset: 6288	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify
	TArray<TEnumAsByte<E_EquipmentCategories>> M_GetHiddenArmors() const;
	TArray<TEnumAsByte<E_EquipmentCategories>>* M_PtrGetHiddenArmors();
	void M_SetHiddenArmors(const TArray<TEnumAsByte<E_EquipmentCategories>>& value);

	//struct FString	OwningPlayerNetID;		//Offset: 6304	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetOwningPlayerNetID() const;
	struct FString* M_PtrGetOwningPlayerNetID();
	void M_SetOwningPlayerNetID(const struct FString& value);

	//bool	IsHost;		//Offset: 6320	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsHost() const;
	bool* M_PtrGetIsHost();
	void M_SetIsHost(const bool& value);

	//bool	IsStartingLoadFinished;		//Offset: 6321	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetIsStartingLoadFinished() const;
	bool* M_PtrGetIsStartingLoadFinished();
	void M_SetIsStartingLoadFinished(const bool& value);

	//bool	InBuildingMode;		//Offset: 6322	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInBuildingMode() const;
	bool* M_PtrGetInBuildingMode();
	void M_SetInBuildingMode(const bool& value);

	//bool	BuildingModeTargetingOffset;		//Offset: 6323	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBuildingModeTargetingOffset() const;
	bool* M_PtrGetBuildingModeTargetingOffset();
	void M_SetBuildingModeTargetingOffset(const bool& value);

	//bool	RotatingObjectMode;		//Offset: 6324	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotatingObjectMode() const;
	bool* M_PtrGetRotatingObjectMode();
	void M_SetRotatingObjectMode(const bool& value);

	//struct FVector	FoliageDestination;		//Offset: 6328	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetFoliageDestination() const;
	struct FVector* M_PtrGetFoliageDestination();
	void M_SetFoliageDestination(const struct FVector& value);

	//bool	HadRightTool;		//Offset: 6340	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadRightTool() const;
	bool* M_PtrGetHadRightTool();
	void M_SetHadRightTool(const bool& value);

	//class ABP_Camera_C*	ActionCamera;		//Offset: 6344	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_Camera_C* M_GetActionCamera() const;
	class ABP_Camera_C** M_PtrGetActionCamera();
	void M_SetActionCamera(const class ABP_Camera_C*& value);

	//class UCurveFloat*	CameraLerpCurve;		//Offset: 6352	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetCameraLerpCurve() const;
	class UCurveFloat** M_PtrGetCameraLerpCurve();
	void M_SetCameraLerpCurve(const class UCurveFloat*& value);

	//struct FST_Camera_Targets	CameraTargets;		//Offset: 6360	Size: 220	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Camera_Targets M_GetCameraTargets() const;
	struct FST_Camera_Targets* M_PtrGetCameraTargets();
	void M_SetCameraTargets(const struct FST_Camera_Targets& value);

	//struct FST_CameraSettings	CurrentCameraSettings;		//Offset: 6580	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings M_GetCurrentCameraSettings() const;
	struct FST_CameraSettings* M_PtrGetCurrentCameraSettings();
	void M_SetCurrentCameraSettings(const struct FST_CameraSettings& value);

	//TEnumAsByte<E_ViewMode>	PreviousViewmode;		//Offset: 6600	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ViewMode> M_GetPreviousViewmode() const;
	TEnumAsByte<E_ViewMode>* M_PtrGetPreviousViewmode();
	void M_SetPreviousViewmode(const TEnumAsByte<E_ViewMode>& value);

	//TEnumAsByte<E_ViewMode>	ViewModeRep;		//Offset: 6601	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ViewMode> M_GetViewModeRep() const;
	TEnumAsByte<E_ViewMode>* M_PtrGetViewModeRep();
	void M_SetViewModeRep(const TEnumAsByte<E_ViewMode>& value);

	//struct FRotator	MountCameraRotation;		//Offset: 6604	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetMountCameraRotation() const;
	struct FRotator* M_PtrGetMountCameraRotation();
	void M_SetMountCameraRotation(const struct FRotator& value);

	//struct FName	FirstPersonCameraSocket;		//Offset: 6616	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetFirstPersonCameraSocket() const;
	struct FName* M_PtrGetFirstPersonCameraSocket();
	void M_SetFirstPersonCameraSocket(const struct FName& value);

	//float	DefaultViewYawMin;		//Offset: 6624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewYawMin() const;
	float* M_PtrGetDefaultViewYawMin();
	void M_SetDefaultViewYawMin(const float& value);

	//float	DefaultViewYawMax;		//Offset: 6628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewYawMax() const;
	float* M_PtrGetDefaultViewYawMax();
	void M_SetDefaultViewYawMax(const float& value);

	//float	DefaultViewPitchMin;		//Offset: 6632	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewPitchMin() const;
	float* M_PtrGetDefaultViewPitchMin();
	void M_SetDefaultViewPitchMin(const float& value);

	//float	DefaultViewPitchMax;		//Offset: 6636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewPitchMax() const;
	float* M_PtrGetDefaultViewPitchMax();
	void M_SetDefaultViewPitchMax(const float& value);

	//float	ThirdPersonMinDistance;		//Offset: 6640	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetThirdPersonMinDistance() const;
	float* M_PtrGetThirdPersonMinDistance();
	void M_SetThirdPersonMinDistance(const float& value);

	//float	ThirdPersonMaxDistance;		//Offset: 6644	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetThirdPersonMaxDistance() const;
	float* M_PtrGetThirdPersonMaxDistance();
	void M_SetThirdPersonMaxDistance(const float& value);

	//float	TP_CameraDistance_Temp;		//Offset: 6648	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTP_CameraDistance_Temp() const;
	float* M_PtrGetTP_CameraDistance_Temp();
	void M_SetTP_CameraDistance_Temp(const float& value);

	//int32_t	ZoomCounter;		//Offset: 6652	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetZoomCounter() const;
	int32_t* M_PtrGetZoomCounter();
	void M_SetZoomCounter(const int32_t& value);

	//bool	PlayerCamera;		//Offset: 6656	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayerCamera() const;
	bool* M_PtrGetPlayerCamera();
	void M_SetPlayerCamera(const bool& value);

	//bool	LimitPlayerCamera;		//Offset: 6657	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLimitPlayerCamera() const;
	bool* M_PtrGetLimitPlayerCamera();
	void M_SetLimitPlayerCamera(const bool& value);

	//int32_t	InteractedSlotIndex;		//Offset: 6660	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInteractedSlotIndex() const;
	int32_t* M_PtrGetInteractedSlotIndex();
	void M_SetInteractedSlotIndex(const int32_t& value);

	//bool	IsInteractTimer_;		//Offset: 6664	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInteractTimer_() const;
	bool* M_PtrGetIsInteractTimer_();
	void M_SetIsInteractTimer_(const bool& value);

	//bool	SwapItemOnInteraction;		//Offset: 6665	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSwapItemOnInteraction() const;
	bool* M_PtrGetSwapItemOnInteraction();
	void M_SetSwapItemOnInteraction(const bool& value);

	//bool	InputDisabled;		//Offset: 6666	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInputDisabled() const;
	bool* M_PtrGetInputDisabled();
	void M_SetInputDisabled(const bool& value);

	//bool	ClickBlock;		//Offset: 6667	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetClickBlock() const;
	bool* M_PtrGetClickBlock();
	void M_SetClickBlock(const bool& value);

	//bool	UpBool;		//Offset: 6668	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUpBool() const;
	bool* M_PtrGetUpBool();
	void M_SetUpBool(const bool& value);

	//bool	DownBool;		//Offset: 6669	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDownBool() const;
	bool* M_PtrGetDownBool();
	void M_SetDownBool(const bool& value);

	//bool	RightBool;		//Offset: 6670	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightBool() const;
	bool* M_PtrGetRightBool();
	void M_SetRightBool(const bool& value);

	//bool	LeftBool;		//Offset: 6671	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLeftBool() const;
	bool* M_PtrGetLeftBool();
	void M_SetLeftBool(const bool& value);

	//bool	NextBool;		//Offset: 6672	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNextBool() const;
	bool* M_PtrGetNextBool();
	void M_SetNextBool(const bool& value);

	//bool	PreviousBool;		//Offset: 6673	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPreviousBool() const;
	bool* M_PtrGetPreviousBool();
	void M_SetPreviousBool(const bool& value);

	//class UPrimitiveComponent*	HitComponent;		//Offset: 6680	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPrimitiveComponent* M_GetHitComponent() const;
	class UPrimitiveComponent** M_PtrGetHitComponent();
	void M_SetHitComponent(const class UPrimitiveComponent*& value);

	//class UPrimitiveComponent*	LastHitComponent;		//Offset: 6688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPrimitiveComponent* M_GetLastHitComponent() const;
	class UPrimitiveComponent** M_PtrGetLastHitComponent();
	void M_SetLastHitComponent(const class UPrimitiveComponent*& value);

	//bool	BlockModificationMenuMovement;		//Offset: 6696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockModificationMenuMovement() const;
	bool* M_PtrGetBlockModificationMenuMovement();
	void M_SetBlockModificationMenuMovement(const bool& value);

	//bool	TimerPickup;		//Offset: 6697	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimerPickup() const;
	bool* M_PtrGetTimerPickup();
	void M_SetTimerPickup(const bool& value);

	//TAssetPtr<class FSpawnedHeldItem__DelegateSignature>	SpawnedHeldItem;		//Offset: 6704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FSpawnedHeldItem__DelegateSignature> M_GetSpawnedHeldItem() const;
	TAssetPtr<class FSpawnedHeldItem__DelegateSignature>* M_PtrGetSpawnedHeldItem();
	void M_SetSpawnedHeldItem(const TAssetPtr<class FSpawnedHeldItem__DelegateSignature>& value);

	//TAssetPtr<class FDespawnedHeldItem__DelegateSignature>	DespawnedHeldItem;		//Offset: 6720	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FDespawnedHeldItem__DelegateSignature> M_GetDespawnedHeldItem() const;
	TAssetPtr<class FDespawnedHeldItem__DelegateSignature>* M_PtrGetDespawnedHeldItem();
	void M_SetDespawnedHeldItem(const TAssetPtr<class FDespawnedHeldItem__DelegateSignature>& value);

	//TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>	SpawnedOffHandItem;		//Offset: 6736	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FSpawnedOffHandItem__DelegateSignature> M_GetSpawnedOffHandItem() const;
	TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>* M_PtrGetSpawnedOffHandItem();
	void M_SetSpawnedOffHandItem(const TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>& value);

	//TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>	DespawnedOffHandItem;		//Offset: 6752	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FDespawnedOffHandItem__DelegateSignature> M_GetDespawnedOffHandItem() const;
	TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>* M_PtrGetDespawnedOffHandItem();
	void M_SetDespawnedOffHandItem(const TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>& value);

	//struct FName	CurrentlyCrafting;		//Offset: 6768	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetCurrentlyCrafting() const;
	struct FName* M_PtrGetCurrentlyCrafting();
	void M_SetCurrentlyCrafting(const struct FName& value);

	//bool	InteractionKeyDown;		//Offset: 6776	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInteractionKeyDown() const;
	bool* M_PtrGetInteractionKeyDown();
	void M_SetInteractionKeyDown(const bool& value);

	//TEnumAsByte<E_Tools>	TakingOutToolType;		//Offset: 6777	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetTakingOutToolType() const;
	TEnumAsByte<E_Tools>* M_PtrGetTakingOutToolType();
	void M_SetTakingOutToolType(const TEnumAsByte<E_Tools>& value);

	//struct FTimerHandle	EquipOffhandHandle;		//Offset: 6784	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetEquipOffhandHandle() const;
	struct FTimerHandle* M_PtrGetEquipOffhandHandle();
	void M_SetEquipOffhandHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	UnequipOffhandHandle;		//Offset: 6792	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetUnequipOffhandHandle() const;
	struct FTimerHandle* M_PtrGetUnequipOffhandHandle();
	void M_SetUnequipOffhandHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	EquipToolHandle;		//Offset: 6800	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetEquipToolHandle() const;
	struct FTimerHandle* M_PtrGetEquipToolHandle();
	void M_SetEquipToolHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	UnequipToolHandle;		//Offset: 6808	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetUnequipToolHandle() const;
	struct FTimerHandle* M_PtrGetUnequipToolHandle();
	void M_SetUnequipToolHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	HoldOffhandHandle;		//Offset: 6816	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetHoldOffhandHandle() const;
	struct FTimerHandle* M_PtrGetHoldOffhandHandle();
	void M_SetHoldOffhandHandle(const struct FTimerHandle& value);

	//struct FST_ItemDetails	SelectedQuickSlotItem;		//Offset: 6824	Size: 968	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_ItemDetails M_GetSelectedQuickSlotItem() const;
	struct FST_ItemDetails* M_PtrGetSelectedQuickSlotItem();
	void M_SetSelectedQuickSlotItem(const struct FST_ItemDetails& value);

	//int32_t	SelectedQuickSlotID;		//Offset: 7792	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedQuickSlotID() const;
	int32_t* M_PtrGetSelectedQuickSlotID();
	void M_SetSelectedQuickSlotID(const int32_t& value);

	//int32_t	LastSelectedQuickSlotID;		//Offset: 7796	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLastSelectedQuickSlotID() const;
	int32_t* M_PtrGetLastSelectedQuickSlotID();
	void M_SetLastSelectedQuickSlotID(const int32_t& value);

	//bool	SelectedQuickSlotDrawWeapon;		//Offset: 7800	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSelectedQuickSlotDrawWeapon() const;
	bool* M_PtrGetSelectedQuickSlotDrawWeapon();
	void M_SetSelectedQuickSlotDrawWeapon(const bool& value);

	//bool	EquippedToolsForInteraction;		//Offset: 7801	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEquippedToolsForInteraction() const;
	bool* M_PtrGetEquippedToolsForInteraction();
	void M_SetEquippedToolsForInteraction(const bool& value);

	//TEnumAsByte<E_WantsToSkip>	WantsToSkip;		//Offset: 7802	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_WantsToSkip> M_GetWantsToSkip() const;
	TEnumAsByte<E_WantsToSkip>* M_PtrGetWantsToSkip();
	void M_SetWantsToSkip(const TEnumAsByte<E_WantsToSkip>& value);

	//bool	Headbobbing;		//Offset: 7803	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHeadbobbing() const;
	bool* M_PtrGetHeadbobbing();
	void M_SetHeadbobbing(const bool& value);

	//bool	RightShoulder;		//Offset: 7804	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightShoulder() const;
	bool* M_PtrGetRightShoulder();
	void M_SetRightShoulder(const bool& value);

	//float	ForwardAxisInput;		//Offset: 7808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetForwardAxisInput() const;
	float* M_PtrGetForwardAxisInput();
	void M_SetForwardAxisInput(const float& value);

	//float	RightAxisInput;		//Offset: 7812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRightAxisInput() const;
	float* M_PtrGetRightAxisInput();
	void M_SetRightAxisInput(const float& value);

	//bool	CameraShakes;		//Offset: 7816	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCameraShakes() const;
	bool* M_PtrGetCameraShakes();
	void M_SetCameraShakes(const bool& value);

	//bool	Breathing;		//Offset: 7817	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBreathing() const;
	bool* M_PtrGetBreathing();
	void M_SetBreathing(const bool& value);

	//bool	QuickslotMenuOpen;		//Offset: 7818	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetQuickslotMenuOpen() const;
	bool* M_PtrGetQuickslotMenuOpen();
	void M_SetQuickslotMenuOpen(const bool& value);

	//bool	SleepMenuOpen;		//Offset: 7819	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSleepMenuOpen() const;
	bool* M_PtrGetSleepMenuOpen();
	void M_SetSleepMenuOpen(const bool& value);

	//bool	WindowMenuOpen;		//Offset: 7820	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWindowMenuOpen() const;
	bool* M_PtrGetWindowMenuOpen();
	void M_SetWindowMenuOpen(const bool& value);

	//bool	FurnitureDecorationMenuOpen;		//Offset: 7821	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFurnitureDecorationMenuOpen() const;
	bool* M_PtrGetFurnitureDecorationMenuOpen();
	void M_SetFurnitureDecorationMenuOpen(const bool& value);

	//bool	EmoteMenuOpen;		//Offset: 7822	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEmoteMenuOpen() const;
	bool* M_PtrGetEmoteMenuOpen();
	void M_SetEmoteMenuOpen(const bool& value);

	//bool	DecorMenuOpen;		//Offset: 7823	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDecorMenuOpen() const;
	bool* M_PtrGetDecorMenuOpen();
	void M_SetDecorMenuOpen(const bool& value);

	//bool	TorchLighten;		//Offset: 7824	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTorchLighten() const;
	bool* M_PtrGetTorchLighten();
	void M_SetTorchLighten(const bool& value);

	//bool	UsingEmote;		//Offset: 7825	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUsingEmote() const;
	bool* M_PtrGetUsingEmote();
	void M_SetUsingEmote(const bool& value);

	//TAssetPtr<class FInteractWithObject__DelegateSignature>	InteractWithObject;		//Offset: 7832	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FInteractWithObject__DelegateSignature> M_GetInteractWithObject() const;
	TAssetPtr<class FInteractWithObject__DelegateSignature>* M_PtrGetInteractWithObject();
	void M_SetInteractWithObject(const TAssetPtr<class FInteractWithObject__DelegateSignature>& value);

	//class UTask_InteractionDetect_C*	InteractionDetect_Task;		//Offset: 7848	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTask_InteractionDetect_C* M_GetInteractionDetect_Task() const;
	class UTask_InteractionDetect_C** M_PtrGetInteractionDetect_Task();
	void M_SetInteractionDetect_Task(const class UTask_InteractionDetect_C*& value);

	//bool	ShouldCancelInteractTimer;		//Offset: 7856	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldCancelInteractTimer() const;
	bool* M_PtrGetShouldCancelInteractTimer();
	void M_SetShouldCancelInteractTimer(const bool& value);

	//class UMultiTaskMutex*	InteractionDetect_Mutex;		//Offset: 7864	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiTaskMutex* M_GetInteractionDetect_Mutex() const;
	class UMultiTaskMutex** M_PtrGetInteractionDetect_Mutex();
	void M_SetInteractionDetect_Mutex(const class UMultiTaskMutex*& value);

	//class UMultiTaskThreadPool*	PlayerThreadPool;		//Offset: 7872	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiTaskThreadPool* M_GetPlayerThreadPool() const;
	class UMultiTaskThreadPool** M_PtrGetPlayerThreadPool();
	void M_SetPlayerThreadPool(const class UMultiTaskThreadPool*& value);

	//bool	HideHair;		//Offset: 7880	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHideHair() const;
	bool* M_PtrGetHideHair();
	void M_SetHideHair(const bool& value);

	//bool	IsBeingFollowed;		//Offset: 7881	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsBeingFollowed() const;
	bool* M_PtrGetIsBeingFollowed();
	void M_SetIsBeingFollowed(const bool& value);

	//class UAudioComponent*	Damage_Voice;		//Offset: 7888	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetDamage_Voice() const;
	class UAudioComponent** M_PtrGetDamage_Voice();
	void M_SetDamage_Voice(const class UAudioComponent*& value);

	//bool	FightingWithBandits;		//Offset: 7896	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFightingWithBandits() const;
	bool* M_PtrGetFightingWithBandits();
	void M_SetFightingWithBandits(const bool& value);

	//bool	IsStaggered;		//Offset: 7897	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsStaggered() const;
	bool* M_PtrGetIsStaggered();
	void M_SetIsStaggered(const bool& value);

	//bool	bIsInitialized;		//Offset: 7898	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetbIsInitialized() const;
	bool* M_PtrGetbIsInitialized();
	void M_SetbIsInitialized(const bool& value);

	//bool	SkipTimer;		//Offset: 7899	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipTimer() const;
	bool* M_PtrGetSkipTimer();
	void M_SetSkipTimer(const bool& value);

	//float	Shock;		//Offset: 7900	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetShock() const;
	float* M_PtrGetShock();
	void M_SetShock(const float& value);

	//int32_t	RagdollCounter;		//Offset: 7904	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRagdollCounter() const;
	int32_t* M_PtrGetRagdollCounter();
	void M_SetRagdollCounter(const int32_t& value);

	//int32_t	RagdollStoppedCounter;		//Offset: 7908	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRagdollStoppedCounter() const;
	int32_t* M_PtrGetRagdollStoppedCounter();
	void M_SetRagdollStoppedCounter(const int32_t& value);

	//bool	CanBeUnRagdolled;		//Offset: 7912	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanBeUnRagdolled() const;
	bool* M_PtrGetCanBeUnRagdolled();
	void M_SetCanBeUnRagdolled(const bool& value);

	//struct FTimerHandle	AimAssistTimerHandle;		//Offset: 7920	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAimAssistTimerHandle() const;
	struct FTimerHandle* M_PtrGetAimAssistTimerHandle();
	void M_SetAimAssistTimerHandle(const struct FTimerHandle& value);

	//struct FVector	AimAssistLocationRelative;		//Offset: 7928	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetAimAssistLocationRelative() const;
	struct FVector* M_PtrGetAimAssistLocationRelative();
	void M_SetAimAssistLocationRelative(const struct FVector& value);

	//float	AimAssist_Sensitivity_X;		//Offset: 7940	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAimAssist_Sensitivity_X() const;
	float* M_PtrGetAimAssist_Sensitivity_X();
	void M_SetAimAssist_Sensitivity_X(const float& value);

	//float	AimAssist_Sensitivity_Y;		//Offset: 7944	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAimAssist_Sensitivity_Y() const;
	float* M_PtrGetAimAssist_Sensitivity_Y();
	void M_SetAimAssist_Sensitivity_Y(const float& value);

	//float	UpDownLookAxisInput;		//Offset: 7948	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUpDownLookAxisInput() const;
	float* M_PtrGetUpDownLookAxisInput();
	void M_SetUpDownLookAxisInput(const float& value);

	//float	LeftRightLookAxisInput;		//Offset: 7952	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLeftRightLookAxisInput() const;
	float* M_PtrGetLeftRightLookAxisInput();
	void M_SetLeftRightLookAxisInput(const float& value);

	//ESlateVisibility	InspectorModeVisibility;		//Offset: 7956	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	ESlateVisibility M_GetInspectorModeVisibility() const;
	ESlateVisibility* M_PtrGetInspectorModeVisibility();
	void M_SetInspectorModeVisibility(const ESlateVisibility& value);

	//float	InspectorModeDistance;		//Offset: 7960	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInspectorModeDistance() const;
	float* M_PtrGetInspectorModeDistance();
	void M_SetInspectorModeDistance(const float& value);

	//bool	InspectorMode;		//Offset: 7964	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInspectorMode() const;
	bool* M_PtrGetInspectorMode();
	void M_SetInspectorMode(const bool& value);

	//TMap<TEnumAsByte<E_Tutorials>, bool>	ShownTutorials;		//Offset: 7968	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Tutorials>, bool> M_GetShownTutorials() const;
	TMap<TEnumAsByte<E_Tutorials>, bool>* M_PtrGetShownTutorials();
	void M_SetShownTutorials(const TMap<TEnumAsByte<E_Tutorials>, bool>& value);

	//int32_t	NumberOfGeneration;		//Offset: 8048	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfGeneration() const;
	int32_t* M_PtrGetNumberOfGeneration();
	void M_SetNumberOfGeneration(const int32_t& value);

	//int32_t	AffectionBonus;		//Offset: 8052	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAffectionBonus() const;
	int32_t* M_PtrGetAffectionBonus();
	void M_SetAffectionBonus(const int32_t& value);

	//bool	GrabbedItem;		//Offset: 8056	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGrabbedItem() const;
	bool* M_PtrGetGrabbedItem();
	void M_SetGrabbedItem(const bool& value);

	//float	PlayableAreaRadius;		//Offset: 8060	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPlayableAreaRadius() const;
	float* M_PtrGetPlayableAreaRadius();
	void M_SetPlayableAreaRadius(const float& value);

	//int32_t	NextFoliageParticleSystemToUpdateTagIndex;		//Offset: 8064	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNextFoliageParticleSystemToUpdateTagIndex() const;
	int32_t* M_PtrGetNextFoliageParticleSystemToUpdateTagIndex();
	void M_SetNextFoliageParticleSystemToUpdateTagIndex(const int32_t& value);

	//class UAudioComponent*	VoiceComponentVar;		//Offset: 8072	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetVoiceComponentVar() const;
	class UAudioComponent** M_PtrGetVoiceComponentVar();
	void M_SetVoiceComponentVar(const class UAudioComponent*& value);

	//class UDataTable*	VoiceDT;		//Offset: 8080	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UDataTable* M_GetVoiceDT() const;
	class UDataTable** M_PtrGetVoiceDT();
	void M_SetVoiceDT(const class UDataTable*& value);

	//bool	IsInBedOnSkip;		//Offset: 8088	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInBedOnSkip() const;
	bool* M_PtrGetIsInBedOnSkip();
	void M_SetIsInBedOnSkip(const bool& value);

	//bool	OffhandClickBlock;		//Offset: 8089	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOffhandClickBlock() const;
	bool* M_PtrGetOffhandClickBlock();
	void M_SetOffhandClickBlock(const bool& value);

	//bool	WasShieldEquipped;		//Offset: 8090	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasShieldEquipped() const;
	bool* M_PtrGetWasShieldEquipped();
	void M_SetWasShieldEquipped(const bool& value);

	//TAssetPtr<class FOffhandSlotChanged__DelegateSignature>	OffhandSlotChanged;		//Offset: 8096	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOffhandSlotChanged__DelegateSignature> M_GetOffhandSlotChanged() const;
	TAssetPtr<class FOffhandSlotChanged__DelegateSignature>* M_PtrGetOffhandSlotChanged();
	void M_SetOffhandSlotChanged(const TAssetPtr<class FOffhandSlotChanged__DelegateSignature>& value);

	//bool	SwapTorchTypeOffhandTool;		//Offset: 8112	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSwapTorchTypeOffhandTool() const;
	bool* M_PtrGetSwapTorchTypeOffhandTool();
	void M_SetSwapTorchTypeOffhandTool(const bool& value);

	//bool	IgnoreNextOffhandInput;		//Offset: 8113	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreNextOffhandInput() const;
	bool* M_PtrGetIgnoreNextOffhandInput();
	void M_SetIgnoreNextOffhandInput(const bool& value);

	//bool	HadMainHandItem;		//Offset: 8114	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadMainHandItem() const;
	bool* M_PtrGetHadMainHandItem();
	void M_SetHadMainHandItem(const bool& value);

	//bool	HadOffHandItem;		//Offset: 8115	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadOffHandItem() const;
	bool* M_PtrGetHadOffHandItem();
	void M_SetHadOffHandItem(const bool& value);

	//TAssetPtr<class FOnBlockingChanged__DelegateSignature>	OnBlockingChanged;		//Offset: 8120	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnBlockingChanged__DelegateSignature> M_GetOnBlockingChanged() const;
	TAssetPtr<class FOnBlockingChanged__DelegateSignature>* M_PtrGetOnBlockingChanged();
	void M_SetOnBlockingChanged(const TAssetPtr<class FOnBlockingChanged__DelegateSignature>& value);

	//TArray<struct FST_ChildNameSelection>	PlayersChildNameSelection;		//Offset: 8136	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_ChildNameSelection> M_GetPlayersChildNameSelection() const;
	TArray<struct FST_ChildNameSelection>* M_PtrGetPlayersChildNameSelection();
	void M_SetPlayersChildNameSelection(const TArray<struct FST_ChildNameSelection>& value);

	//struct FVector	Hit_from_Direction;		//Offset: 8152	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetHit_from_Direction() const;
	struct FVector* M_PtrGetHit_from_Direction();
	void M_SetHit_from_Direction(const struct FVector& value);

	//TAssetPtr<class FCanSwitchToHeir__DelegateSignature>	CanSwitchToHeir;		//Offset: 8168	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FCanSwitchToHeir__DelegateSignature> M_GetCanSwitchToHeir() const;
	TAssetPtr<class FCanSwitchToHeir__DelegateSignature>* M_PtrGetCanSwitchToHeir();
	void M_SetCanSwitchToHeir(const TAssetPtr<class FCanSwitchToHeir__DelegateSignature>& value);

	//struct FTimerHandle	PlayerOutsidePlayableAreaHandle;		//Offset: 8184	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPlayerOutsidePlayableAreaHandle() const;
	struct FTimerHandle* M_PtrGetPlayerOutsidePlayableAreaHandle();
	void M_SetPlayerOutsidePlayableAreaHandle(const struct FTimerHandle& value);

	//TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>	SwitchToHeirFinish;		//Offset: 8192	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FSwitchToHeirFinish__DelegateSignature> M_GetSwitchToHeirFinish() const;
	TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>* M_PtrGetSwitchToHeirFinish();
	void M_SetSwitchToHeirFinish(const TAssetPtr<class FSwitchToHeirFinish__DelegateSignature>& value);

	//bool	bFinishedSpawning;		//Offset: 8208	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetbFinishedSpawning() const;
	bool* M_PtrGetbFinishedSpawning();
	void M_SetbFinishedSpawning(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}

#pragma region Functions
	void SpawnedHeldItem__DelegateSignature();

	void DespawnedHeldItem__DelegateSignature();

	void SpawnedOffHandItem__DelegateSignature();

	void DespawnedOffHandItem__DelegateSignature();

	void InteractWithObject__DelegateSignature(class UObject* ObjectTypeReference);

	void OffhandSlotChanged__DelegateSignature();

	void OnBlockingChanged__DelegateSignature(bool Blocking);

	void CanSwitchToHeir__DelegateSignature(struct FText HeirName);

	void SwitchToHeirFinish__DelegateSignature(bool Result);

	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint);

	void StartInspectorMode();

	void StartInspectorTimer();

	void StopInspectorTimer();

	void UpdateInspector();

	void PlayAnimation_InspectorMode();

	void StopAnimation_InspectorMode();

	void EnableNightVision();

	void DisableNightVision();

	void StopInspectorMode();

	void UpdateCameraDistance(float AxisValue);

	void IncreaseCounter();

	void ResetCounter();

	void CameraShake_BPI(class UCameraShakeBase* ShakeClass, float Scale);

	void CameraShakeFromSource_BPI(class UCameraShakeBase* ShakeClass, class UCameraShakeSourceComponent* SourceComponent);

	void StartingInventory_Server();

	void StartingInventoryEquip_Client();

	void SelectQuickSlotWithHolster(int32_t SelectedQuickSlotID, bool DrawWeapon_);

	void EquipToolTimer();

	void Update_Camera_Event(class UCurveFloat* LerpCurve);

	void StopCameraFOVLerp();

	void PlayFromStartCameraFOVLerp();

	void PlayCameraFOVLerp();

	void ReverseCameraFOVLerp();

	void ReverseFromEndCameraFOVLerp();

	void UnequipToolTimer();

	void UnequipToEmptySlot();

	void UnequipWithEquipTimer();

	void StartCameraFadePawn_BPI(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool ShouldFadeAudio, bool HoldWhenFinished, bool ReverseOnFinish);

	void RagdollTimer();

	void CheckCollisionAfterRagdoll();

	void SetCanBeUnragdolled();

	void PlaySpecialEffectsSound_BPI(TEnumAsByte<E_AudioSpecialEffects> SpecialEffectType);

	void CreateDeathScreenHeir_Finish(struct FText HeirName);

	void SetArmorVisibilityState_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentCategory, bool Visibility);

	void OnBeginPlayClient();

	void ReceiveDestroyed();

	void SetPlayerAudioComponent_BPI(class UAudioComponent* AudioComponent);

	void InterpIKAlpha(bool Reversed_);

	void PrepareForMounting(struct FVector Location);

	void UpdateFoliageParticleSystems();

	void BndEvt__BP_PlayerCharacter_Mesh_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature();

	void LifeStatsSwitchSex_Audio();

	void UpdateOnTimeChanged();

	void OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void UpdateFoliageInteraction();

	void InitInteraction();

	void StartInteractionDetectionTask();

	void CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType);

	void OnSeasonChanged_End_Event_1();

	void OnLookAtLoopReached();

	void SetInteractionTimer(float Time);

	void BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature();

	void On_Camera_Fade_Finished();

	void StartInteractionTrace();

	void PressedInput_GameMenu();

	void PressedInput_UI_Cancel();

	void PressedInput_UI_Down();

	void ReleasedInput_UI_Down();

	void PressedInput_UI_Up();

	void ReleasedInput_UI_Up();

	void PressedInput_UI_Right();

	void ReleasedInput_UI_Right();

	void PressedInput_UI_Left();

	void ReleasedInput_UI_Left();

	void PressedInput_UI_PreviousSection();

	void ReleasedInput_UI_PreviousSelection();

	void PressedInput_UI_NextSection();

	void ReleasedInput_UI_NextSection();

	void ReleasedInput_UI_Cancel();

	void ConfirmForGamepadRadialMenuNew_Delayed();

	void Right_Axis(float Axis_Value);

	void PressedInput_LeftAction();

	void ReleasedInput_LeftAction();

	void ReleasedInput_RightAction();

	void PressedInput_RightAction();

	void MouseWheelAxisChange(float Axis_Value);

	void Down_Axis(float AxisValue);

	void InteractTimerDone();

	void PickingItem();

	void OnUnequipSwapFinished();

	void UnequipOffhandOnSwap();

	void OffhandTimer();

	void ReleasedInput_Offhand(bool EquipShield);

	void PressedInput_GhostControlMode();

	void PressedInput_ToggleChat();

	void ReleasedInput_EmoteMenu();

	void PressedInput_EmoteMenu();

	void ResetRepeatTimer();

	void InteractRepeat();

	void GetUp();

	void FinishFurnitureInteraction_Released();

	void FinishFurnitureInteraction_Pressed();

	void TimedInteraction();

	void PressedInput_RotateGhostLeft();

	void ReleasedInput_RotateGhostLeft();

	void EquipTorchTimer();

	void ReleasedInput_InspectorMode();

	void ReleasedInput_JumpAction();

	void PressedInput_JumpAction();

	void ReleasedInput_CameraAction();

	void PressedInput_CameraAction();

	void ReleasedInput_StanceAction();

	void PressedInput_StanceAction();

	void Left_Axis(float AxisValue);

	void Backwards_Axis(float AxisValue);

	void PressedInput_WalkAction();

	void PressedInput_SelectRotationMode_3();

	void PressedInput_SelectRotationMode_2();

	void JumpEvent();

	void ReleasedInput_RotateGhostRight();

	void PressedInput_RotateGhostRight();

	void ReleasedInput_ChoiceMenu();

	void PressedInput_ChoiceMenu();

	void PressedInput_HolsterHoldableItem();

	void PressedInput_InspectorMode();

	void ReleasedInput_Sprint();

	void PressedInput_Sprint();

	void ReleasedInput_InteractAction();

	void PressedInput_InteractAction(struct FKey Key);

	void PressedInput_Offhand(struct FKey Key);

	void InteractLineTrace();

	void InteractCloseGate();

	void InteractOpenGate(bool Timer);

	void OnDismountingPawnFinished_BPI();

	void TryToUnlockPikeCrest_BPI(class AActor* Arrow);

	void UpdatePlayerTimeToBirth_BPI();

	void UnlockAchievementCharacter_BPI(struct FName AchID, bool AllPlayers);

	void AddStatProgressCharacter_BPI(struct FName StatName, int32_t StatValue, bool AllPlayers, bool TreatAsSet);

	void SetActorLocationClient_BPI(struct FVector Dest);

	void ChangeAnimHairPhysicsLimits_BPI(bool IsHoodOn);

	void TryToCreateHUDTutorialAllPlayers_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen);

	void TryToCreateHUDTutorial_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen);

	void CreateQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void CreateMiddleNotificationAllPlayers_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound);

	void CreateNotificationAllPlayers_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine);

	void CreateQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void OnEndEmote_BPI();

	void PlayEmote_BPI(TAssetPtr<class UAnimMontage> Montage, struct FName SoundId);

	void UpdatePlayerWaitingForSkipUI_BPI();

	void SetWantsToSkip_BPI(TEnumAsByte<E_WantsToSkip> WantsToSkip, bool IsInBedOnSkip);

	void ApplyCharacterCreatorParams_Server(struct FST_PlayerModulesIDs CharacterParams, TEnumAsByte<E_Sex> sex, float Age);

	void ApplyCharacterCreatorParams_BPI(struct FST_PlayerModulesIDs CharacterParams, TEnumAsByte<E_Sex> sex, float Age);

	void CreateMiddleNotification_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound);

	void SetAffectionBonus_BPI(int32_t Value);

	void LoadPlayerFinish_BPI(struct FST_SAVE_Player PlayerData, struct FString Version, struct FST_SAVE_Achievements Achievements);

	void LoadPlayer_BPI(struct FST_SAVE_Player PlayerData, struct FString Version);

	void InitPlayerFinish_Client();

	void InitPlayerFinish_BPI();

	void StopInspectorMode_BPI();

	void StartInspectorMode_BPI();

	void DisableNightVision_BPI();

	void EnableNightVision_BPI();

	void TeleportPlayer_BPI();

	void PlayForceFeedback_BPI(class UForceFeedbackEffect* ForceFeedbackEffect);

	void OpenHusbandryAnimalAssignment_BPI(class AActor* AnimalReference);

	void StartTrance_BPI(float TranceMaxTime, TEnumAsByte<E_TalentTrance> WoodcutterTrance_);

	void StartEffect_BPI(TEnumAsByte<E_Effects> Effect, float FullEffectTime);

	void UpdateEffect_BPI(TEnumAsByte<E_Effects> Effect, float EffectTimeLeft, bool HasEffectEnded);

	void StartBlink_BPI(TEnumAsByte<E_BlinkParameters> BlinkParameter, float BlinkingActualTime, float BlinkingProcessTime);

	void RemoveTranceStatus_BPI(TEnumAsByte<E_TalentTrance> WoodcutterTrance_);

	void UpdateTranceStatus_BPI(float Time, int32_t NumberOfStacks, TEnumAsByte<E_TalentTrance> WoodcutterTrance_);

	void UpdateHoldableItemInputs_BPI();

	void ToggleTradingMenu_BPI(bool WithNPC_, class UActorComponent* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving);

	void CreateCraftingMenu_BPI(struct FST_FurnitureCraftingSettings CraftingSetings, TEnumAsByte<E_Workbenches> WorkbenchType, bool NoWorkbench_);

	void CreateNotification_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine);

	void SummonMount();

	void SetFinishedSpawning_Server();

	void SwitchToHeirFinish_Client(bool Result);

	void UpdateHiddenArmors_Client(TArray<TEnumAsByte<E_EquipmentCategories>>* HiddenArmors);

	void SetWasShieldEquipped_Client(bool WasShieldEquipped);

	void SetWasShieldEquipped_Server(bool WasShieldEquipped);

	void ShouldBeSwooned_Server();

	void Client_UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name);

	void Server_UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name);

	void Client_ChildSexGenerated(TEnumAsByte<E_Sex> sex);

	void Client_PlayerLockedSex(TEnumAsByte<E_ChildSex> ChildSex, TEnumAsByte<E_SpouseType> SpouseType);

	void Server_PlayerLockedSex(TEnumAsByte<E_ChildSex> ChildSex, class APlayerState* PlayerState, class AActor* Child);

	void Client_PlayerSelectedSex(TEnumAsByte<E_ChildSex> ChildSex, class ABP_MD_PlayerState_C* Sender, TEnumAsByte<E_SpouseType> SpouseType);

	void Server_PlayerSelectedSex(class APlayerState* PlayerState, TEnumAsByte<E_ChildSex> ChildGender);

	void ChangeNPCSex_Server(class ABP_BaseCharacter_C* NPC, TEnumAsByte<E_Sex> TargetSex);

	void Client_OnFoliageRemoved_Quest(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies);

	void Server_OnFoliageRemoved_Quest(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies);

	void CanSwitchToHeir_Client(int32_t HeirNameID, TEnumAsByte<E_Sex> HeirSex);

	void CanSwitchToHeir_Server();

	void Client_ChildNameSelectedFinish(int32_t NameID, TEnumAsByte<E_Sex> sex);

	void Client_PlayerLockedName(int32_t ButtonID, TEnumAsByte<E_SpouseType> SpouseType);

	void Server_PlayerLockedName(int32_t ButtonID, class APlayerState* PlayerState, int32_t NameID, class AActor* Child);

	void UnragdollFinished_NewCharacter();

	void PlayerRestart_Client();

	void PlayerRestart_Server();

	void Client_PlayerSelectedName(int32_t ButtonID, class ABP_MD_PlayerState_C* Sender, TEnumAsByte<E_SpouseType> SpouseType);

	void Server_PlayerSelectedName(class APlayerState* PlayerState, int32_t ButtonID);

	void UpdateHiddenArmors_Server(TEnumAsByte<E_EquipmentCategories> HiddenArmor, bool Remove);

	void Server_UnlockMillCrest(struct FName ItemCrafted, int32_t NumberCrafted);

	void Server_SetCrest(class ABP_PlayerCharacter_C* PlayerCharacter, struct FST_CrestSettings CrestData);

	void ChangeDyeInSlot_Server(EDyeColor DyeColor, struct FName DyeItemNameRow, int32_t Index);

	void MarriageChoiceQueryCancel_Server(struct FString QuerierPlayerID);

	void MarriageChoiceQueryFinish_Client(EMarriageChoice MarriageChoice, EProposalState ProposalState, EMakeLoveState MakeLoveState, EQueryResponse QueryResponse);

	void MarriageChoiceQuery_Client(EMarriageChoice MarriageChoice, struct FString QuerierPlayerID);

	void MarriageChoiceQueryResponse_Server(EQueryResponse QueryResponse, struct FString ResponderPlayerID);

	void MarriageChoiceQuery_Server(EMarriageChoice MarriageChoice, struct FString PlayerId, struct FString PlayerID2);

	void MakeLove_Server(struct FString PlayerId, struct FString Player2ID);

	void DivorcePlayers_Server(struct FString PlayerId, struct FString PlayerID2);

	void MarryPlayers_Server(struct FString PlayerId, struct FString PlayerID2);

	void PlayBlockBreakAnimation_Client();

	void Server_SetVillageName(class ABP_PlayerCharacter_C* PlayerCharacter, struct FST_VillageNameSettings VillageNameData);

	void StopStageInteraction_Client();

	void Server_SwitchToHeir(class ABP_BaseCharacter_C* Heir);

	void PlaySpecificAnimationDialogue_Server(class UDE_PlaySpecificDialogueAnimation_C* DERef, bool IsPersistent, TAssetPtr<class UAnimMontage> Animation, class AActor* NPC);

	void TransferItemToNPCDialogue_Server(class UDE_TransferItemToNPC_C* DERef, bool Invert, int32_t ItemIndex, int32_t Count, class AActor* NPC);

	void UnlockWildAnimalOnMapDialogue_Server(class UDE_UnlockWildAnimalOnMap_C* DERef, TEnumAsByte<E_AnimalType> AnimalType);

	void UnlockWildFishOnMapDialogue_Server(class UDE_UnlockWildAnimalFishOnMap_C* DERef, TEnumAsByte<E_FishPoolType> FishType);

	void ChangeAffectionDialogue_Server(class UDE_ChangeAffection_C* DERef, int32_t Value, class AActor* NPC, class AActor* PCPlayer);

	void AddItemToPlayerInventoryDialogue_Server(class UDE_AddItemToPlayersInventory_C* DERef, int32_t Count, const int32_t& ItemIndex, float NotificationDelay, float ItemsConditionInPercent);

	void RemoveResourceWithLowestConditionDialogue_Server(int32_t ItemIndex, int32_t Count, class UDE_ConsumeItemFromPlayerInventory_C* DERef);

	void UpdateGhostControl_Server();

	void OnRepIsInDialogue();

	void CameraShakeFromSource_Client(class UCameraShakeBase* ShakeClass, class UCameraShakeSourceComponent* SourceComponent);

	void CameraShake_Client(class UCameraShakeBase* ShakeClass, float Scale);

	void UpdatePlatformPlaceabilityMaterialColorServer(class ABP_MasterPlatform_C* Platform, bool Placeable);

	void UpdatePlatformPlaceabilityMaterialColorMulticast(class ABP_MasterPlatform_C* Platform, bool Placeable);

	void CreatePlatformGhostMulticast(class ABP_MasterPlatform_C* Platform);

	void CreatePlatformGhostServer();

	void UpdatePlatformGhostServer();

	void DestroyPlatformGhostServer();

	void Server_SetCoopStatsProtection(bool Value);

	void Client_ReplicateGenericQuestsOnClientJoin(TArray<struct FST_QuestInfoForReplicationGenericQuest>* QuestData);

	void CanBeDamaged_Server();

	void Client_ReplicateStoryQuestsOnClientJoin(TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>* QuestsData);

	void UnlockEmotes_Client(const TArray<struct FName>& UnlockedEmotes);

	void ReplicateQuestsOnClientJoin_Client(const TArray<int32_t>& QuestIndex, const TArray<struct FST_QuestInfo_Save>& Quest);

	void TransferAllItemsServer(class UInventoryComponent_C* FromComponent, class UInventoryComponent_C* TransferDestination);

	void Client_SetTrackedQuestNumber(int32_t QuestIndex);

	void Server_RemoveWaypointActor(class ABP_MD_PlayerState_C* Owner);

	void Server_SetPlayerCharacterName(class ABP_PlayerCharacter_C* PlayerCharacter, struct FText CharacterName);

	void Server_SpawnWaypointActor_Server(class ABP_MD_PlayerState_C* Owner, struct FTransform Transform);

	void Server_ChangeNPCName(class ABP_BaseCharacter_C* CharacterReference, struct FName NewRowName, struct FText NewName, bool ChangeSex);

	void Client_ReplicateShownTutorialsToClient(const TArray<TEnumAsByte<E_Tutorials>>& TutorialTypes, const TArray<bool>& TutorialValues);

	void Server_ReplicateShownTutorialsToClient();

	void Server_SetTutorialToAlreadyShown(TEnumAsByte<E_Tutorials> ShownTutorial);

	void Server_CompleteGoal(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalID);

	void Client_ReplicateCompletedGoal(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalID);

	void Server_ReplicateCompletedGoal(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalID);

	void Server_SetStartingLoadFinished(bool IsStartingLoadFinished);

	void Client_DrawLandscapeOnRoadPartRemove(struct FVector V0, struct FVector v1);

	void Server_DrawLandscapeOnRoadPartRemove(struct FVector V0, struct FVector v1);

	void Client_SetLastSelectedQuickSlotID(int32_t LastSelectedQuickSlotID, bool IsLoadedSlotEquipped);

	void ReplicateQuestToGive_Server(class ABP_NPC_C* NPCReference, bool ChangeToEmpty, bool AllPlayers);

	void Client_ReplicateQuestDescriptionStrings(struct FName QuestID, int32_t QuestIndex, TArray<struct FST_StringTable_IDKey_Pair>* Array);

	void Server_ReplicateQuestDescriptionStrings(struct FName QuestID, int32_t QuestIndex);

	void Multicast_SetOwningPlayerNetID();

	void Server_SetOwningPlayerNetID();

	void Client_MountInventoryArmorAction();

	void Server_MountInventoryArmorAction(const struct FName& ItemName, int32_t ItemArrayID, TEnumAsByte<E_EquipmentCategories> ItemToFind);

	void InitCameraMode_Client(TEnumAsByte<E_ViewMode> ViewMode, float CameraDistance);

	void Client_UpdateFurniture(TEnumAsByte<E_BuildingWarningType> BuildingWarningType);

	void FadeOutSoundComponent_Server(float Duration, float TargetVolume);

	void FadeOutSoundComponent_BPI(float Duration, float TargetVolume);

	void FadeOutSoundComponent_Multicast(float Duration, float TargetVolume);

	void Unstuck_Server();

	void Server_SummonMount();

	void Server_SetGameMenuOpen(bool Value);

	void Server_SetInventoryOpen(bool Value);

	void FieldInteractionStart_Server();

	void DestroyRoadGhost_Server();

	void UpdateGhostRoad_Multicast(class ABP_MasterRoadSpline_C* RoadGhost);

	void UpdateGhostRoad_Server();

	void Multicast_ExecuteInitialRoadVisuals(class ABP_MasterRoadSpline_C* Target, bool load);

	void Multicast_ExecuteInitialRoadLogic(class ABP_MasterRoadSpline_C* Target, bool load, TArray<class ABP_MasterRoadSpline_C*>* ListOfRoads);

	void CreateRoadGhost_Server(class ABP_MasterRoadSpline_C* RoadGhost);

	void Server_SetRoadFirstPoint();

	void UnRagdollFinished();

	void FinishPlayerSpawn_Server(EMD_SpecificPlatform Platform);

	void RemoveLoadingScreen_Client();

	void ViewModeRep_Server(TEnumAsByte<E_ViewMode> ViewModeRep);

	void Client_PrepareToDismount_Client(class AActor* mountOrRider);

	void PlayerLoadingFinished_Server();

	void PlayerWaitForLoading_Client();

	void UpdateClient(class ABP_BaseCharacter_C* Owner);

	void InitNewPlayer();

	void UpdateInteractionFurnitureInteractionSlots_Client(class ABP_MasterFurniture_C* FurnitureReference, int32_t SlotIndex, bool Occupied, bool WantToOccupy);

	void UpdateInteractionFurnitureInteractionSlots_Server(class ABP_MasterFurniture_C* FurnitureReference, int32_t SlotIndex);

	void UpdateCharacterName_Client(class ABP_BaseCharacter_C* CharacterReference, struct FText Name);

	void UpdateCharacterName_Server(class ABP_BaseCharacter_C* CharacterReference, bool UpdateAllClients_);

	void PlayerSpawnSoundComponent_Multicast(class USoundBase* Sound, float StartTime, float Volume, bool AutoDestroy);

	void PlayerSpawnSoundComponent_Server(class USoundBase* Sound, float StartTime, float Volume, bool AutoDestroy);

	void ReplicateQuestToGive_Client(class ABP_NPC_C* NPCReference, struct FName QuestID, TEnumAsByte<E_QuestCategories> QuestCategry);

	void ReplicateGoalActors_Client(TArray<class ABP_GoalActor_C*>* GoalActors);

	void ReplicateGoalActors_Server();

	void ReplicateQuestOnClientJoin_Client(int32_t QuestIndex, struct FST_QuestInfo_Save Quest, bool ShouldTrack);

	void ReplicateQuestsOnClientJoin_Server();

	void RemoveQuestFromArray_Client(int32_t ArrayIndex, struct FName QuestID);

	void RemoveQuestFromArray_Server(int32_t ArrayIndex, struct FName QuestID);

	void FailQuestOnClients_Client(int32_t QuestIndex, struct FName QuestID);

	void FailQuestOnClients_Server(int32_t QuestIndex, struct FName QuestID);

	void OnInventoryChange_Event_1();

	void CheckForNeededItems_Client();

	void CheckForNeededItems_Server();

	void IncreaseHuntedAnimals_Client(TEnumAsByte<E_AnimalType> AnimalType);

	void IncreaseHuntedAnimals_Server(TEnumAsByte<E_AnimalType> AnimalType);

	void ReplicateQuestsReward_Client(int32_t QuestIndex, struct FName QuestID, struct FST_QuestReward QuestReward);

	void ReplicateQuestsReward_Server(int32_t QuestIndex, struct FName QuestID, struct FST_QuestReward QuestReward);

	void CompleteQuestOnClients_Client(int32_t QuestIndex, struct FName QuestID);

	void CompleteQuestOnClients_Server(int32_t QuestIndex, struct FName QuestID);

	void ReplicateQuestsGoalsInformation_Client(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, const TArray<struct FST_MasterGoals>& Goals);

	void ReplicateQuestsGoalsInformation_Server(int32_t QuestIndex, struct FName QuestID, int32_t ObjectiveIndex, const TArray<struct FST_MasterGoals>& Goals);

	void ReplicateAddedQuest_Client(struct FDataTableRowHandle QuestHandler);

	void ReplicateAddedQuest_Server(struct FDataTableRowHandle QuestHandler);

	void StartPotionEffect_Client(TEnumAsByte<E_Effects> Effect);

	void ToggleOtherPlayersSleepAcceptation_Client(TEnumAsByte<E_WantsToSkip> WantsToSkip);

	void UpdatePlayerWaitingForSkipUI_Client();

	void UpdatePlayerWaitingForSkipUI_Server();

	void RequestLayDown_Server(bool IsBed, struct FVector InteractPoint, TEnumAsByte<E_ViewMode> CurrentPlayerViewmode, TEnumAsByte<E_WantsToSkip> WantsToSkip);

	void SetWantsToSkip_Server(TEnumAsByte<E_WantsToSkip> WantsToSkip);

	void ChangeHighlightedPlayerResponse_Client();

	void UpdateListenDialoguePlayerOptions_Client();

	void UpdateField_sGhost_Clients(class ABP_MasterField_C* FieldReference, struct FVector TempLocationB, struct FVector GhostAndAllowedLocation, struct FVector InpectorLocation, struct FVector AllowedToBuild_InBoxExtent, struct FVector Ghost_NewScale3D, int32_t YSize, int32_t XSize);

	void UpdateField_sGhost_Server();

	void DestroyFieldGhost_Server();

	void SetBagMode_Server(TEnumAsByte<E_BagMode> BagMode);

	void PlayAnimationColoredVignette_Client(float Intensity);

	void PlayHitAnimation_Client(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId);

	void SpawnDamageVoice_Multicast();

	void PlantSlotInteraction_Clients(class ABP_MasterField_C* Target, TEnumAsByte<E_FieldPlantType> PlantType, const TArray<int32_t>& SlotIDs);

	void PlantSlotInteraction_Server(class ABP_MasterField_C* Target, TEnumAsByte<E_FieldPlantType> PlantType, TArray<int32_t>* SlotIDs);

	void FieldInteractionFinish_Server();

	void FieldInteraction_Server(class ABP_MasterField_C* Target, struct FVector Location, float SkilledFarmerBoost);

	void UpdateTimeDataForNewPlayer_Client(struct FST_Time CurrentTime, int32_t WeatherVariation);

	void UpdateDataForNewPlayer_Server();

	void InitFieldServer(class ABP_MasterField_C* FieldReference);

	void CreateFieldServer(class ABP_MasterField_C* FieldReference);

	void RemoveListenDialoguesOnDialogueClose_Client();

	void RemoveListenDialoguesOnDialogueClose_Server(class ABP_NPC_C* NPCReference);

	void RemoveDialoguePlayerOnListenClose_Server(class ABP_NPC_C* NPCReference, class ABP_PlayerCharacter_C* PlayerReference);

	void UpdateListeDialogue_Client();

	void OnDismountingPawnFinished_Client();

	void PrepareToMount_Client(class AActor* mountOrRider);

	void SetCurrentlyCrafting_Server(struct FName CurrentlyCrafting);

	void SetInteractedActor_Server(class AActor* InteractedActor);

	void StopCraftingAnimation_Server();

	void SetLastSelectedQuickSlotID_Server(int32_t LastSelectedQuickSlotID, bool ReplicateToClientOnLoad, bool IsLoadedSlotEquipped);

	void DecreaseHoldableHPForStageInteraction_Server();

	void DecreaseToolHPForStageInteraction_Server(struct FName ToolName, int32_t ToolIndex);

	void DecreaseToolConditionAfterStageInteraction_Client(TEnumAsByte<E_Tools> InteractToolType);

	void StartQuestFromNoticeBoard_Server(class AActor* NoticeBoardReference, int32_t NoteIndex);

	void CreateDeathScreen_Client(TEnumAsByte<E_DeathType> DeathType);

	void RespawnPlayer_Client();

	void RespawnPlayer_Server();

	void TransferItem_Client();

	void TransferItemServer(class UInventoryComponent_C* FromComponent, int32_t Count, class UInventoryComponent_C* ToComponent, struct FName ItemName, int32_t ArrayID, bool CoinTransaction);

	void ReplicateNoticeBoardInfo_Server(class AActor* NoticeBoard);

	void ReplicateNoticeBoardInfo_Clients(class AActor* NoticeBoard, TArray<struct FST_QuestInfos>* QuestsToGive, TArray<float>* NotesRotations, TArray<unsigned char>* NotesTypes);

	void ReceivePossessed(class AController* NewController);

	void UpdatePlayerData(bool UpdateBodyMeshes, bool IsMultiplayer);

	void UpdateBuildingDistance_Server(float AxisValue);

	void UpdateGhostControlRotation_Server(bool IsReleasedKey, bool IsLeft);

	void OnFurnitureInteraction_Client(bool IsStart, float FurnitureYawRotation);

	void ReleasePlayerInputs_Client();

	void UpdateFurnitureDecorationVariationServer(class ABP_MasterFurniture_C* Flowerpot, bool OverwriteVariant, int32_t NewVariant);

	void GetUpServer();

	void PlayCraftingAnimation_Server(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime, float InPlayRate, struct FName SectionName, bool bStopAllMontages);

	void OnStartWorkbenchInteraction_Client(struct FVector WorkbenchLocation, struct FVector InteractLocation, struct FVector InteractForwardVector, struct FRotator LookAtRotation, TEnumAsByte<E_LookAtOptions> LookAtBehavior);

	void CameraCutThisFrame_Client();

	void StartWorkbenchCameraChange_Client(bool ChangeCamera);

	void UpdateBuildingPlaceabilityMaterialColorServer(class ABP_MasterBuilding_C* Building, bool Placeable);

	void ChangeBuildingLevelServer(class ABP_MasterBuilding_C* TargetBuilding, class ABP_MasterBuilding_C* GhostBuilding);

	void ReleaseGrabbedItem_BPI();

	void SetGrabbedItemRotateMode_Server(bool RotateLeft, bool RotateRight);

	void SetGrabbedActor_Client(class AActor* GrabbedActor);

	void SetGrabbedActor_Server(class AActor* GrabbedActor);

	void RotateGrabbedItemPitch_Server(float Angle);

	void RotateGrabbedItemYaw_Server(float Angle);

	void GrabItem_BPI(class AActor* ActorToGrab);

	void ReleaseGrabbedItem_Server();

	void GrabItem_Server(class AActor* ItemToGrab);

	void SetGrabbedItem_Client(bool GrabbedItem);

	void SetGrabbedItem_Server(bool GrabbedItem);

	void ObjectInteractComponent_Client(class UObject* Target, class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void ObjectInteractActor_Client(class UObject* Target, class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	void CreateDialogue_Client(TAssetPtr<class UDialogue> ActualDialogue, class AActor* NPC, bool Listen);

	void CreateGateGhostMulticast(class ABP_MasterGate_C* Gate);

	void CreateGateGhostServer();

	void UpdateGateGhostServer();

	void DestroyGateGhostServer();

	void DestroyFurnitureGhostServer();

	void FinishFurnitureServer();

	void UpdateFurnitureServer();

	void ObjectInteract_Server(class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FVector HitLocation, int32_t HitItem, bool Timer, TEnumAsByte<E_ViewMode> CurrentPlayerViewmode);

	void SetBuildingMode_Server(TEnumAsByte<E_BuildingModifications> BuildingMode);

	void DestroyBuildingGhostServer();

	void UpdateBuildingPlaceabilityMaterialColorMulticast(class ABP_MasterBuilding_C* Building, bool Placeable);

	void SetModuleDetectionGhostMulticast(class ABP_MasterBuildModule_C* Module, class ABP_MasterBuilding_C* Building);

	void InitializeBuilding_sModuleReplicationServer(class ABP_MasterBuildModule_C* Module);

	void UpdateBuildingGhostServer();

	void UpdateSplineGhostClient(class ABP_MasterSplineStructure_C* Spline);

	void UpdateSplineGhostServer();

	void HideBuildingUIClient();

	void SetSplineFirstPointServer();

	void DestroySplineGhostServer();

	void ExecuteInitialSplineGhostLogicMulticast(class ABP_MasterSplineStructure_C* GhostSpline, bool load);

	void ExecuteInitialSplineGhostVisualsMulticast(class ABP_MasterSplineStructure_C* GhostSpline, bool load);

	void CreateSplineGhostServer(class ABP_MasterSplineStructure_C* GhostSpline);

	void ExecuteInitialGhostLogicMulticast(bool load, class ABP_MasterBuilding_C* GhostBuilding);

	void ExecuteInitialGhostVisualsMulticast(class ABP_MasterBuilding_C* GhostBuilding);

	void CreateBuildingGhostServer(class ABP_MasterBuilding_C* GhostBuilding);

	void SetBuildingMode_Client(TEnumAsByte<E_BuildingModifications> BuildingMode);

	void TeleportPlayerServer(struct FVector DestLocation, class ABP_PlayerCharacter_C* PlayerReference, bool SpawnInAir_);

	void UpdatePlayerData_Server(bool UpdateBodyMeshes, struct FString PlayerName);

	void OnBeginPlay();

	void UpdatePlayerData_Client(bool UpdateBodyMeshes);

	void UpdatePlayerData_Multicast(bool UpdateBodyMeshes);

	void FailedEOSLogging_BPI();

	void ShowEOSLoggingWindow_BPI();

	void DestroyEOSLoggingWindow_BPI();

	void StartQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void StartQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key);

	void InspectorIntensity__UpdateFunc();

	void InspectorIntensity__FinishedFunc();

	void NightVisionIntensity__UpdateFunc();

	void NightVisionIntensity__FinishedFunc();

	void CameraLerp__UpdateFunc();

	void CameraLerp__FinishedFunc();

	void FOV__UpdateFunc();

	void FOV__FinishedFunc();

	void StaggerPitchTimeline__UpdateFunc();

	void StaggerPitchTimeline__FinishedFunc();

	void Timeline_IKAlpha__UpdateFunc();

	void Timeline_IKAlpha__FinishedFunc();

	void InteractRange(float InteractionRange, struct FVector* StartVector, struct FVector* EndVector);

	void SelectQuickSlot(int32_t SelectedQuickSlotID, bool DrawWeapon_);

	void ToggleGameMenu();

	void SelectedSlotWithToolUpdate();

	void SwapHeldItem(struct FName ItemName, int32_t ArrayID);

	void RevertHeldItem();

	void StartBarterWithNPC(class ABP_NPC_C** NPCReference, bool GiftGiving);

	void StopBarterWithNPC();

	void Hide_Held_Items(class AActor* InteractedActor);

	void ReEquipHeldItems();

	void InteractionDetect();

	void UpdateGhosts();

	void SetInBuildingMode(bool Active);

	void InteractRangeServerCheck(float Range, TEnumAsByte<E_ViewMode> ViewMode, struct FVector* StartVector, struct FVector* EndVector);

	void GetLastHitActorInteractionDistance(float* Distance);

	void HideHeldItemsForInteraction(TEnumAsByte<E_Tools> ToolType);

	void ReEquipHeldItemsForInteraction();

	void Unstuck();

	void PlayerPush();

	void InteractTimer(bool* FinishedInteraction);

	void InteractTimerFoliage(class UBP_MasterFoliage_C* MasterFoliage, struct FHitResult HitReference, bool* FinishedInteraction);

	void InteractTimerActor(struct FHitResult HitReference, bool* FinishedInteraction);

	void InteractTimerFinish(class AActor* Actor);

	bool TryToUnstuckPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation);

	void FindRandomPointForUnstuck(struct FVector* RandomLocation);

	bool GetRandomPointOnTerrain(class AActor* Actor, class UMeshComponent* Mesh, struct FVector* Location);

	bool IsFovChanging();

	void ReleasePlayerInputs();

	bool CanSwitchToTP();

	void ChangeTPCameraDistance(float ChangeValue);

	void SetTPCameraDistance(float Distance);

	void UpdatePlayerLook(bool InitCustomizedCharacter);

	void InitCameraMode(TEnumAsByte<E_ViewMode> ViewMode, float CameraDistance);

	void TPInteractionTrace(TArray<struct FHitResult>* hits);

	void InterruptInteractAction();

	void TryToEquipTorch(const struct FName& TorchName, bool* TorchEquipped);

	void CheckInventoryForTorchToEquip(bool* TorchFound, struct FName* TorchType);

	void IsAnyRadialMenuOpen(bool* Value);

	void StopInteractionThread();

	bool IsOffhandEquipBlocked();

	void PreviousViewmodeChangeCamera(bool SwitchBack);

	void AimAssist();

	bool CanMoveMountToPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation);

	void SetBuildingMode(TEnumAsByte<E_BuildingModifications> BuildingMode);

	void InspectorDetection();

	void LoadPlayerData(struct FST_SAVE_Player PlayerData, struct FString Version);

	void LoadPlayerDataFinishing(struct FST_SAVE_Player PlayerData, struct FString Version, struct FST_SAVE_Achievements Achievements);

	void UpdateBuilding_sGhost();

	void CreateDialogueWithNPC(TAssetPtr<class UDialogue> ActualDialogue, class AActor* NPC, bool Listen);

	void GrabItem(class AActor* ItemToGrab);

	void ReleaseGrabbedItem();

	void UpdateRotationOnWorkbenchInteraction(struct FVector WorkbenchLocation, struct FVector InteractLocation, struct FVector InteractForwardVector, struct FRotator LookAtRotation, TEnumAsByte<E_LookAtOptions> LookAtBehavior);

	void UpdateRotationOnFurnitureInteraction(bool IsStart, float FurnitureYawRotation);

	void ChangeSex(TEnumAsByte<E_Sex> NewSex);

	void SetFirstPersonCameraOffset(struct FVector RelativeLocation);

	void SetLastSelectedQuickSlotID(int32_t NewValue);

	struct FName GetCurrentlyCrafting();

	void SetCurrentlyCrafting(struct FName NewValue);

	void ChangePlayerHiddenState(bool Hide);

	void SetTextureColorForHeadMaterial(struct FName TextureParameterName, struct FLinearColor Color);

	void SetTextureForHeadMaterial(struct FName TextureParameterName, TAssetPtr<class UTexture>* TextureSoftRef);

	void SetVectorParameterForMaterials(struct FName ParameterName, struct FLinearColor Value, TArray<class UMeshComponent*>* Meshes);

	void SetScalarParameterForMaterials(struct FName ParameterName, float Value, TArray<class UMeshComponent*>* Meshes);

	void SetHeadMesh(int32_t HeadID);

	void SetHairMesh(int32_t HairID, bool IsHatEquipped);

	void SetHairColorPlayer(int32_t ColorID);

	void SetSkinType(int32_t SkinID);

	void SetSkinColorPlayer(int32_t ColorID);

	void RefreshAge();

	void ChooseCurveName(struct FName CurveCategory, int32_t Index, struct FName* CurveName);

	void SetVoice(struct FName VoiceName);

	void SetVoiceStructRep(struct FName VoiceName);

	void SetIris(int32_t IrisID, int32_t SecondaryIrisID);

	void SetEyebrows(int32_t EyebrowsID);

	void SetEyebrowsColor(int32_t ColorID);

	void SetBeard(int32_t BeardID);

	void SetBeardColor(int32_t ColorID);

	void SetScars(int32_t ScarsID, float ScarsIntensity, bool IsFlipped);

	void SetFaceShapes(TArray<int32_t>* Indices, TArray<struct FName>* Categories);

	void SetDataTableForPlayerVoice();

	void SetCustomizedCharacterModules_Single(const struct FST_PlayerModulesIDs& ST_PlayerModulesIDs);

	void OnRep_CustomCharacterParams();

	void SetCustomizedCharacterModules_Multi(const struct FST_PlayerModulesIDs& ST_PlayerModulesIDs);

	void IsInteractionValid(class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FVector HitLocation, int32_t HitItem, TEnumAsByte<E_ViewMode> ViewMode, bool* ValidActorInteraction, bool* ValidComponentInteraction);

	void IsFurnitureInteractionValid(class AActor* HitActor, struct FVector HitLocation, TEnumAsByte<E_ViewMode> ViewMode, bool* ValidActorInteraction);

	bool CheckIfCanUseQuickslot();

	void ChangeAudioComponentVolume(float NewVolume, bool Smooth, float SmoothDuration);

	void SpawnSoundComponentAndPlay(class USoundBase* Sound, float StartTime, float Volume, bool AutoDestroy, class UAudioComponent** AudioComponent);

	void SetMoles(int32_t MolesTypeID, float MolesIntensity);

	void SetFreckles(int32_t FrecklesTypeID, float FrecklesIntensity);

	void SetEyesMakeup(int32_t TypeID, int32_t ColorID, float Intensity);

	void SetLipsMakeup(int32_t TypeID, int32_t ColorID, float Intensity);

	void HostCraftingMontageFix();

	void CheckIfInCombatWithBandits();

	void DestroyUIsAndGhostsOnPlayerSwoonOrLogout();

	void TeleportPlayer();

	void TryToInitPlayer();

	void UpdatePlatform_sGhost();

	void GetNickForInspector(struct FString* Nick);

	void OnRep_IsStartingLoadFinished();

	void SpawnActionCamera();

	void HandleHitAnimation();

	void FindDyeIndex(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, TEnumAsByte<E_DyeSlotType> Socket, int32_t* Index);

	void UpdateMeshForGivenDyeSlot(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor);

	void UpdateHatDye(TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor);

	void OnRep_Dyes();

	void ApplyDyesOnCharacter();

	void Change_Quick_Slot(int32_t QuickslotIndex);

	void GetHonkerOrPlayerSound(struct FName SoundId, TAssetPtr<class UObject>* Sound);

	void RefreshCharacterParams();

	void HandleHatAndHairVisibility();

	void CheckBlockState();

	void OnRep_HiddenArmors();

	void CanSwitchToHeirServerInternal();

	void CanSwitchToHeirClientInternal(int32_t HeirNameID, TEnumAsByte<E_Sex> HeirSex);

	void GetAvailableHeir(bool* Success, class ABP_BaseCharacter_C** Heir);

	void IsHeirAvailable(class ABP_BaseCharacter_C* Heir, bool* Success);

	void PrepareToSpawnDynastyContinues();

	void OnPlayerPointDamageAppliedToOtherActor(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class AActor* ActorUsedToApplyDamage, class UDamageType* DamageTypeClass);

	void SetWasShieldEquipped(bool WasShieldEquipped);

	bool CanUseEmote()/* const*/;

	void CheckIsPlayerOutsidePlayableArea();

	void MovePlayerBackToPlayableArea();

	void GetCameraComponents_BPI(TEnumAsByte<E_ViewMode> ViewMode, class USpringArmComponent** CameraSpringArm, class UCameraComponent** CameraComponent);

	void GetCameraViewDirection_BPI(struct FVector* Forward);

	bool GetInspectorMode_BPI();

	void SavePlayer_BPI(struct FST_SAVE_Player* PlayerData, struct FST_SAVE_Achievements* Achievements);

	int32_t GetNumberOfGeneration_BPI();

	int32_t GetAffectionBonus_BPI();

	TEnumAsByte<E_WantsToSkip> GetWantsToSkip_BPI(bool* IsInBedOnSkip);

	void GetCharacterParams_BPI(struct FST_PlayerModulesIDs* Params);

	void GetAge_BPI(float* Age);

	void GetPlayerAudioComponent_BPI(class UAudioComponent** AudioComponent);

	void GetRagdollChange_BPI(bool* IsRagdollChange);

	void GetPlayerState_BPI(class APlayerState** PlayerState);

	void GetIsMounting_BPI(bool* IsMounting);

	void GetDyes_BPI(TArray<struct FST_Dye>* Dyes);

	void GetArmorVisibilityState_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentSlot, bool* Visibility);

	void ToggleArmorVisibility_BPI(TEnumAsByte<E_EquipmentCategories> EquipmentCategory, bool* Visibility);

	void GetPlayerCharacterID_BPI(struct FGuid* CharacterID);

	void InheritableComponentHandler();

	void InputKeyDelegateBinding_1()/* const*/;

	void FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV);

	void SetNewTimeCameraFOVLerp(float NewTime);

	void OnGoToSleep();

	void OnSit();

	void OnSitIdle();

	void OnGetUp();

	void OnSleepIdle();

	void OnWakeUp();

	void SetBlocking_Event(bool Blocking);

	void Set_ForceStanding_Event();

	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void AddCharacterRotation_BPI(struct FRotator AddAmount);

	void ResetCameraPitch();

	void AddImpaledItem(class AActor* ImpaledItem);

	void TryStartRagdoll();

	void TryStopRagdoll();

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void OnSeasonUpdateInventory();

	void SetHat_BPI(TAssetPtr<class USkeletalMesh> MeshSoft, bool HideHair);

	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewHairMesh, const TArray<class USkeletalMesh*>& NewBodyMeshes, class UObject* NewClass, bool UpdateOnly);

	void Change_Camera(bool bUsePlayerCamera, float BlendTime);

	void Stop_Character_Rotation(bool StopRotationInput);

	void Stop_Character_Movement(bool bStopMovementInput);

	void Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera);

	void Limit_Camera_Rotation(struct FST_CameraRotationLimits CameraRotationLimits);

	void ChangePlayerInput(bool DisablePlayerInput);

	void ShowInspectorUI();

	void Swoon();

	void StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish);

	void SetupStageInteraction(class AActor* InteractedActor, TEnumAsByte<E_StageInteractionsTypes> StageInteractionType, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction);

	void ReceiveTick(float DeltaSeconds);

	void ReceiveBeginPlay();

	void OnRepNotify_DefaultCharacterModules();

	void PreviewDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, bool GoBackToSavedColor);

	void ChangeDyeInSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor DyeColor, struct FName DyeItemNameRow);

	void SetIsStaggered_BPI(bool IsStaggered, bool ReduceStamina, float AmountToReduce);

	void ExecuteActorUpdate(class APlayerController* Requester);

	void StopStageInteraction();

	void PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);

	void PlayerLookAt(class AActor* Target, struct FVector TargetLocation);

	void UserConstructionScript();

	void OnMovementModeChanged();

	void On_ALS_ViewMode_Changed();

	void On_ALS_Aiming_Changed();

	void LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm);

	void ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings);

	void Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem);

	void Attach_Components();

	void SetCurrentCameraFOV(float InFieldOfView);

	struct FRotator GetLookingRotation();

	void SpawnHeldItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);

	void DestroyHeldItem();

	void DestroyOffHandItem();

	void SpawnOffHandItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);

	void OnDialogueStarted();

	void OnDialogueEnded();

	void OnSeasonChanged();

	void OnEndWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation);

	void EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedTool, bool* Success);

	void GetCurrentCameraFOV(float* FieldOfView);

	void SetEarMorph(float Value);

	void OnStartWorkbenchInteraction(class AActor* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation);

	void OnDayChanged();

	void UpdateDefaultFov(float InFieldOfView);

	void OnCloseCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation);

	void OnWaitForCraftingInteraction(class AActor* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera);

	void HolsterToolsForDialogue(bool Hide);

	void OnStartFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation, struct FRotator InteractRotation);

	void OnEndFurnitureInteraction(class AActor* InteractedFurniture, struct FVector InteractLocation);

	void GroundedRotation();

	void GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen);

	void OnHeldItemReplicated();

	void OnOffHandItemReplicated();

	void SetInventoryOpen(bool Value);

	void SetGameMenuOpen(bool Value);

	void TrySyncFurnitureAnim(class AActor* ActorToSync, bool* Synced);

	void GetSkinColorByID(int32_t ColorID, struct FLinearColor DefaultColor, struct FLinearColor* Color);

	void GetHairColorByID(int32_t ID, struct FLinearColor DefaultColor, struct FLinearColor* Color);

	void InitInspectorMode();

	void SetCoopStatsProtection(bool Value);

	void OnCombatStarted();

	void OnCombatEnded();

	void OnCombatCauserStarted(class AActor* CombatCauser);

	void OnCombatCauserEnded(class AActor* CombatCauser);

	void OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType);

	void OnBlockBroken(float ReceivedDamage);

	void OnHitNotBlocked(float ReceivedDamage);

	void OnHitBlocked(float ReceivedDamage);

	void OnKilled();

	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);

	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);

	void PlayOnomatopoeicSound_BPI(struct FName SoundSubCategory, bool PickRandom, int32_t SoundId, bool* Success);

	void GetIsStaggered_BPI(bool* IsStaggered);

	void GetDyeParamsForSlot_BPI(TEnumAsByte<E_EquipmentCategories> DyeEquipmentSlot, TEnumAsByte<E_DyeSlotType> DyeSocket, EDyeColor* DyeColor, struct FName* DyeItemName, bool* IsValid);

	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);

	bool OnMountingPawnFinished(class AActor* newMountActor);

	bool OnDismountingPawnFinished(class AActor* oldPawnMount);

	bool SetRiderCollisionEnabled(bool shouldEnable);

	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);

	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);

	void GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/;

	void GetActorType(struct FName* ActorType)/* const*/;

#pragma endregion
};
};