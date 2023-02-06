#pragma once
#include "Structs.h"
#include "BP_BaseCharacter/BP_BaseCharacter_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Super: BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// Size: 8044
// Size inherited: 5833
/////////////////////////////////////////////
namespace UE4 {
class ABP_PlayerCharacter_C : public ABP_BaseCharacter_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 5840	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UPointLightComponent*	NPC_Light;		//Offset: 5848	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPointLightComponent* M_GetNPC_Light() const;
	class UPointLightComponent** M_PtrGetNPC_Light();
	void M_SetNPC_Light(const class UPointLightComponent*& value);

	//class UCameraComponent*	TP_Camera;		//Offset: 5856	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCameraComponent* M_GetTP_Camera() const;
	class UCameraComponent** M_PtrGetTP_Camera();
	void M_SetTP_Camera(const class UCameraComponent*& value);

	//class UMD_SpringArmComponent*	TP_SpringArm;		//Offset: 5864	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UMD_SpringArmComponent* M_GetTP_SpringArm() const;
	class UMD_SpringArmComponent** M_PtrGetTP_SpringArm();
	void M_SetTP_SpringArm(const class UMD_SpringArmComponent*& value);

	//class UPhysicsHandleComponent*	PhysicsHandle;		//Offset: 5872	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPhysicsHandleComponent* M_GetPhysicsHandle() const;
	class UPhysicsHandleComponent** M_PtrGetPhysicsHandle();
	void M_SetPhysicsHandle(const class UPhysicsHandleComponent*& value);

	//class UCameraComponent*	FP_Camera;		//Offset: 5880	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCameraComponent* M_GetFP_Camera() const;
	class UCameraComponent** M_PtrGetFP_Camera();
	void M_SetFP_Camera(const class UCameraComponent*& value);

	//class USpringArmComponent*	FP_SpringArm;		//Offset: 5888	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USpringArmComponent* M_GetFP_SpringArm() const;
	class USpringArmComponent** M_PtrGetFP_SpringArm();
	void M_SetFP_SpringArm(const class USpringArmComponent*& value);

	//class UAudioComponent*	LifeStats_Voice;		//Offset: 5896	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetLifeStats_Voice() const;
	class UAudioComponent** M_PtrGetLifeStats_Voice();
	void M_SetLifeStats_Voice(const class UAudioComponent*& value);

	//class UBP_AimOffsetComponent_C*	BP_AimOffsetComponent;		//Offset: 5904	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_AimOffsetComponent_C* M_GetBP_AimOffsetComponent() const;
	class UBP_AimOffsetComponent_C** M_PtrGetBP_AimOffsetComponent();
	void M_SetBP_AimOffsetComponent(const class UBP_AimOffsetComponent_C*& value);

	//class USceneComponent*	ActionCameraSocket;		//Offset: 5912	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetActionCameraSocket() const;
	class USceneComponent** M_PtrGetActionCameraSocket();
	void M_SetActionCameraSocket(const class USceneComponent*& value);

	//class UBP_WeatherComponent_C*	BP_WeatherComponent;		//Offset: 5920	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_WeatherComponent_C* M_GetBP_WeatherComponent() const;
	class UBP_WeatherComponent_C** M_PtrGetBP_WeatherComponent();
	void M_SetBP_WeatherComponent(const class UBP_WeatherComponent_C*& value);

	//class UArrowComponent*	BuildingTargetArrow;		//Offset: 5928	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetBuildingTargetArrow() const;
	class UArrowComponent** M_PtrGetBuildingTargetArrow();
	void M_SetBuildingTargetArrow(const class UArrowComponent*& value);

	//class UBP_PlayerBuildingComponent_C*	BP_PlayerBuildingComponent;		//Offset: 5936	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_PlayerBuildingComponent_C* M_GetBP_PlayerBuildingComponent() const;
	class UBP_PlayerBuildingComponent_C** M_PtrGetBP_PlayerBuildingComponent();
	void M_SetBP_PlayerBuildingComponent(const class UBP_PlayerBuildingComponent_C*& value);

	//float	CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557;		//Offset: 5944	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557() const;
	float* M_PtrGetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557();
	void M_SetCameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557(const float& value);

	//TEnumAsByte<ETimelineDirection>	CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557;		//Offset: 5948	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557();
	void M_SetCameraLerp__Direction_C5FA4DB54C0199BD8228928150300557(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	CameraLerp;		//Offset: 5952	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetCameraLerp() const;
	class UTimelineComponent** M_PtrGetCameraLerp();
	void M_SetCameraLerp(const class UTimelineComponent*& value);

	//float	FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A;		//Offset: 5960	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const;
	float* M_PtrGetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A();
	void M_SetFOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const float& value);

	//TEnumAsByte<ETimelineDirection>	FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A;		//Offset: 5964	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A();
	void M_SetFOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	FOV;		//Offset: 5968	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetFOV() const;
	class UTimelineComponent** M_PtrGetFOV();
	void M_SetFOV(const class UTimelineComponent*& value);

	//class APC_Player_C*	PlayerControllerReference;		//Offset: 5976	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class APC_Player_C* M_GetPlayerControllerReference() const;
	class APC_Player_C** M_PtrGetPlayerControllerReference();
	void M_SetPlayerControllerReference(const class APC_Player_C*& value);

	//int32_t	QuickSlotCount;		//Offset: 5984	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetQuickSlotCount() const;
	int32_t* M_PtrGetQuickSlotCount();
	void M_SetQuickSlotCount(const int32_t& value);

	//class AActor*	LastHitActor;		//Offset: 5992	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetLastHitActor() const;
	class AActor** M_PtrGetLastHitActor();
	void M_SetLastHitActor(const class AActor*& value);

	//bool	HoldingItem;		//Offset: 6000	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHoldingItem() const;
	bool* M_PtrGetHoldingItem();
	void M_SetHoldingItem(const bool& value);

	//struct FST_ItemInventorys	UsedItem;		//Offset: 6004	Size: 48	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_ItemInventorys M_GetUsedItem() const;
	struct FST_ItemInventorys* M_PtrGetUsedItem();
	void M_SetUsedItem(const struct FST_ItemInventorys& value);

	//class AActor*	HitActor;		//Offset: 6056	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetHitActor() const;
	class AActor** M_PtrGetHitActor();
	void M_SetHitActor(const class AActor*& value);

	//struct FTimerHandle	InteractTimerHandle;		//Offset: 6064	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetInteractTimerHandle() const;
	struct FTimerHandle* M_PtrGetInteractTimerHandle();
	void M_SetInteractTimerHandle(const struct FTimerHandle& value);

	//bool	InteractKeyDown;		//Offset: 6072	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInteractKeyDown() const;
	bool* M_PtrGetInteractKeyDown();
	void M_SetInteractKeyDown(const bool& value);

	//struct FTimerHandle	PickingTImer;		//Offset: 6080	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPickingTImer() const;
	struct FTimerHandle* M_PtrGetPickingTImer();
	void M_SetPickingTImer(const struct FTimerHandle& value);

	//float	InteractionTime;		//Offset: 6088	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionTime() const;
	float* M_PtrGetInteractionTime();
	void M_SetInteractionTime(const float& value);

	//float	InteractionRange;		//Offset: 6092	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionRange() const;
	float* M_PtrGetInteractionRange();
	void M_SetInteractionRange(const float& value);

	//float	InteractionNoCollisionRange;		//Offset: 6096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionNoCollisionRange() const;
	float* M_PtrGetInteractionNoCollisionRange();
	void M_SetInteractionNoCollisionRange(const float& value);

	//float	HitRayCastFrequency;		//Offset: 6100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitRayCastFrequency() const;
	float* M_PtrGetHitRayCastFrequency();
	void M_SetHitRayCastFrequency(const float& value);

	//float	HitRayCastBuildingFrequency;		//Offset: 6104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHitRayCastBuildingFrequency() const;
	float* M_PtrGetHitRayCastBuildingFrequency();
	void M_SetHitRayCastBuildingFrequency(const float& value);

	//int32_t	HitActorID;		//Offset: 6108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetHitActorID() const;
	int32_t* M_PtrGetHitActorID();
	void M_SetHitActorID(const int32_t& value);

	//int32_t	LastHitActorID;		//Offset: 6112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLastHitActorID() const;
	int32_t* M_PtrGetLastHitActorID();
	void M_SetLastHitActorID(const int32_t& value);

	//struct FName	TmpItemName;		//Offset: 6116	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetTmpItemName() const;
	struct FName* M_PtrGetTmpItemName();
	void M_SetTmpItemName(const struct FName& value);

	//int32_t	LastSelectedQuickSlotID;		//Offset: 6124	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLastSelectedQuickSlotID() const;
	int32_t* M_PtrGetLastSelectedQuickSlotID();
	void M_SetLastSelectedQuickSlotID(const int32_t& value);

	//class UUserWidget*	UI_GameMenu;		//Offset: 6128	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_GameMenu() const;
	class UUserWidget** M_PtrGetUI_GameMenu();
	void M_SetUI_GameMenu(const class UUserWidget*& value);

	//bool	InBuildingMode;		//Offset: 6136	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInBuildingMode() const;
	bool* M_PtrGetInBuildingMode();
	void M_SetInBuildingMode(const bool& value);

	//float	BuildingRotation;		//Offset: 6140	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingRotation() const;
	float* M_PtrGetBuildingRotation();
	void M_SetBuildingRotation(const float& value);

	//bool	RotatingRight;		//Offset: 6144	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotatingRight() const;
	bool* M_PtrGetRotatingRight();
	void M_SetRotatingRight(const bool& value);

	//bool	RotatingLeft;		//Offset: 6145	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotatingLeft() const;
	bool* M_PtrGetRotatingLeft();
	void M_SetRotatingLeft(const bool& value);

	//float	TempSoundsVolume;		//Offset: 6148	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTempSoundsVolume() const;
	float* M_PtrGetTempSoundsVolume();
	void M_SetTempSoundsVolume(const float& value);

	//bool	TorchLighten;		//Offset: 6152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTorchLighten() const;
	bool* M_PtrGetTorchLighten();
	void M_SetTorchLighten(const bool& value);

	//struct FVector	FoliageDestination;		//Offset: 6156	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetFoliageDestination() const;
	struct FVector* M_PtrGetFoliageDestination();
	void M_SetFoliageDestination(const struct FVector& value);

	//bool	BuildingModeTargetingOffset;		//Offset: 6168	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBuildingModeTargetingOffset() const;
	bool* M_PtrGetBuildingModeTargetingOffset();
	void M_SetBuildingModeTargetingOffset(const bool& value);

	//float	FieldBuildingRange;		//Offset: 6172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFieldBuildingRange() const;
	float* M_PtrGetFieldBuildingRange();
	void M_SetFieldBuildingRange(const float& value);

	//float	TmpFreshness;		//Offset: 6176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTmpFreshness() const;
	float* M_PtrGetTmpFreshness();
	void M_SetTmpFreshness(const float& value);

	//bool	QuickslotMenuOpen;		//Offset: 6180	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetQuickslotMenuOpen() const;
	bool* M_PtrGetQuickslotMenuOpen();
	void M_SetQuickslotMenuOpen(const bool& value);

	//class ABP_NPC_C*	TraderReference;		//Offset: 6184	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_NPC_C* M_GetTraderReference() const;
	class ABP_NPC_C** M_PtrGetTraderReference();
	void M_SetTraderReference(const class ABP_NPC_C*& value);

	//TArray<struct FName>	StartingWeapons;		//Offset: 6192	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetStartingWeapons() const;
	TArray<struct FName>* M_PtrGetStartingWeapons();
	void M_SetStartingWeapons(const TArray<struct FName>& value);

	//bool	HadOffHandItem;		//Offset: 6208	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadOffHandItem() const;
	bool* M_PtrGetHadOffHandItem();
	void M_SetHadOffHandItem(const bool& value);

	//bool	HadMainHandItem;		//Offset: 6209	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadMainHandItem() const;
	bool* M_PtrGetHadMainHandItem();
	void M_SetHadMainHandItem(const bool& value);

	//bool	HadRightTool;		//Offset: 6210	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHadRightTool() const;
	bool* M_PtrGetHadRightTool();
	void M_SetHadRightTool(const bool& value);

	//bool	PlayerCamera;		//Offset: 6211	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayerCamera() const;
	bool* M_PtrGetPlayerCamera();
	void M_SetPlayerCamera(const bool& value);

	//class ABP_Camera_C*	ActionCamera;		//Offset: 6216	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_Camera_C* M_GetActionCamera() const;
	class ABP_Camera_C** M_PtrGetActionCamera();
	void M_SetActionCamera(const class ABP_Camera_C*& value);

	//float	DefaultViewYawMin;		//Offset: 6224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewYawMin() const;
	float* M_PtrGetDefaultViewYawMin();
	void M_SetDefaultViewYawMin(const float& value);

	//float	DefaultViewYawMax;		//Offset: 6228	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewYawMax() const;
	float* M_PtrGetDefaultViewYawMax();
	void M_SetDefaultViewYawMax(const float& value);

	//float	DefaultViewPitchMin;		//Offset: 6232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewPitchMin() const;
	float* M_PtrGetDefaultViewPitchMin();
	void M_SetDefaultViewPitchMin(const float& value);

	//float	DefaultViewPitchMax;		//Offset: 6236	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefaultViewPitchMax() const;
	float* M_PtrGetDefaultViewPitchMax();
	void M_SetDefaultViewPitchMax(const float& value);

	//bool	LimitPlayerCamera;		//Offset: 6240	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLimitPlayerCamera() const;
	bool* M_PtrGetLimitPlayerCamera();
	void M_SetLimitPlayerCamera(const bool& value);

	//float	SplineBuildingRange;		//Offset: 6244	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSplineBuildingRange() const;
	float* M_PtrGetSplineBuildingRange();
	void M_SetSplineBuildingRange(const float& value);

	//float	FurnitureBuildingRange;		//Offset: 6248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFurnitureBuildingRange() const;
	float* M_PtrGetFurnitureBuildingRange();
	void M_SetFurnitureBuildingRange(const float& value);

	//bool	IsInteractTimer_;		//Offset: 6252	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInteractTimer_() const;
	bool* M_PtrGetIsInteractTimer_();
	void M_SetIsInteractTimer_(const bool& value);

	//bool	SwapItemOnInteraction;		//Offset: 6253	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSwapItemOnInteraction() const;
	bool* M_PtrGetSwapItemOnInteraction();
	void M_SetSwapItemOnInteraction(const bool& value);

	//float	TimeRequired;		//Offset: 6256	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeRequired() const;
	float* M_PtrGetTimeRequired();
	void M_SetTimeRequired(const float& value);

	//int32_t	tmp_Capacity;		//Offset: 6260	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_Gettmp_Capacity() const;
	int32_t* M_PtrGettmp_Capacity();
	void M_Settmp_Capacity(const int32_t& value);

	//bool	InputDisabled;		//Offset: 6264	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInputDisabled() const;
	bool* M_PtrGetInputDisabled();
	void M_SetInputDisabled(const bool& value);

	//bool	ClickBlock;		//Offset: 6265	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetClickBlock() const;
	bool* M_PtrGetClickBlock();
	void M_SetClickBlock(const bool& value);

	//bool	UpBool;		//Offset: 6266	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUpBool() const;
	bool* M_PtrGetUpBool();
	void M_SetUpBool(const bool& value);

	//bool	DownBool;		//Offset: 6267	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDownBool() const;
	bool* M_PtrGetDownBool();
	void M_SetDownBool(const bool& value);

	//bool	RightBool;		//Offset: 6268	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightBool() const;
	bool* M_PtrGetRightBool();
	void M_SetRightBool(const bool& value);

	//bool	LeftBool;		//Offset: 6269	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLeftBool() const;
	bool* M_PtrGetLeftBool();
	void M_SetLeftBool(const bool& value);

	//bool	NextBool;		//Offset: 6270	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNextBool() const;
	bool* M_PtrGetNextBool();
	void M_SetNextBool(const bool& value);

	//bool	PreviousBool;		//Offset: 6271	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPreviousBool() const;
	bool* M_PtrGetPreviousBool();
	void M_SetPreviousBool(const bool& value);

	//bool	tmp_BuildingTutorialBlockade;		//Offset: 6272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_Gettmp_BuildingTutorialBlockade() const;
	bool* M_PtrGettmp_BuildingTutorialBlockade();
	void M_Settmp_BuildingTutorialBlockade(const bool& value);

	//class UPrimitiveComponent*	HitComponent;		//Offset: 6280	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPrimitiveComponent* M_GetHitComponent() const;
	class UPrimitiveComponent** M_PtrGetHitComponent();
	void M_SetHitComponent(const class UPrimitiveComponent*& value);

	//class UPrimitiveComponent*	LastHitComponent;		//Offset: 6288	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UPrimitiveComponent* M_GetLastHitComponent() const;
	class UPrimitiveComponent** M_PtrGetLastHitComponent();
	void M_SetLastHitComponent(const class UPrimitiveComponent*& value);

	//float	Tmp_HP;		//Offset: 6296	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTmp_HP() const;
	float* M_PtrGetTmp_HP();
	void M_SetTmp_HP(const float& value);

	//bool	BlockModificationMenuMovement;		//Offset: 6300	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBlockModificationMenuMovement() const;
	bool* M_PtrGetBlockModificationMenuMovement();
	void M_SetBlockModificationMenuMovement(const bool& value);

	//float	Tmp_Max_HP;		//Offset: 6304	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTmp_Max_HP() const;
	float* M_PtrGetTmp_Max_HP();
	void M_SetTmp_Max_HP(const float& value);

	//struct FHitResult	OnStartHitReference;		//Offset: 6308	Size: 136	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
	struct FHitResult M_GetOnStartHitReference() const;
	struct FHitResult* M_PtrGetOnStartHitReference();
	void M_SetOnStartHitReference(const struct FHitResult& value);

	//bool	TimerPickup;		//Offset: 6444	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimerPickup() const;
	bool* M_PtrGetTimerPickup();
	void M_SetTimerPickup(const bool& value);

	//TAssetPtr<class FSpawnedHeldItem__DelegateSignature>	SpawnedHeldItem;		//Offset: 6448	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FSpawnedHeldItem__DelegateSignature> M_GetSpawnedHeldItem() const;
	TAssetPtr<class FSpawnedHeldItem__DelegateSignature>* M_PtrGetSpawnedHeldItem();
	void M_SetSpawnedHeldItem(const TAssetPtr<class FSpawnedHeldItem__DelegateSignature>& value);

	//TAssetPtr<class FDespawnedHeldItem__DelegateSignature>	DespawnedHeldItem;		//Offset: 6464	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FDespawnedHeldItem__DelegateSignature> M_GetDespawnedHeldItem() const;
	TAssetPtr<class FDespawnedHeldItem__DelegateSignature>* M_PtrGetDespawnedHeldItem();
	void M_SetDespawnedHeldItem(const TAssetPtr<class FDespawnedHeldItem__DelegateSignature>& value);

	//TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>	SpawnedOffHandItem;		//Offset: 6480	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FSpawnedOffHandItem__DelegateSignature> M_GetSpawnedOffHandItem() const;
	TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>* M_PtrGetSpawnedOffHandItem();
	void M_SetSpawnedOffHandItem(const TAssetPtr<class FSpawnedOffHandItem__DelegateSignature>& value);

	//TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>	DespawnedOffHandItem;		//Offset: 6496	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FDespawnedOffHandItem__DelegateSignature> M_GetDespawnedOffHandItem() const;
	TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>* M_PtrGetDespawnedOffHandItem();
	void M_SetDespawnedOffHandItem(const TAssetPtr<class FDespawnedOffHandItem__DelegateSignature>& value);

	//bool	SleepMenuOpen;		//Offset: 6512	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSleepMenuOpen() const;
	bool* M_PtrGetSleepMenuOpen();
	void M_SetSleepMenuOpen(const bool& value);

	//TEnumAsByte<E_Ownership>	Tmp_Ownership;		//Offset: 6513	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetTmp_Ownership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetTmp_Ownership();
	void M_SetTmp_Ownership(const TEnumAsByte<E_Ownership>& value);

	//struct FTimerHandle	InteractionHitTimer;		//Offset: 6520	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetInteractionHitTimer() const;
	struct FTimerHandle* M_PtrGetInteractionHitTimer();
	void M_SetInteractionHitTimer(const struct FTimerHandle& value);

	//TArray<struct FST_ItemResource>	CurrentlyCrafting;		//Offset: 6528	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_ItemResource> M_GetCurrentlyCrafting() const;
	TArray<struct FST_ItemResource>* M_PtrGetCurrentlyCrafting();
	void M_SetCurrentlyCrafting(const TArray<struct FST_ItemResource>& value);

	//bool	InteractionKeyDown;		//Offset: 6544	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInteractionKeyDown() const;
	bool* M_PtrGetInteractionKeyDown();
	void M_SetInteractionKeyDown(const bool& value);

	//struct FVector	LastHitLocation;		//Offset: 6548	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetLastHitLocation() const;
	struct FVector* M_PtrGetLastHitLocation();
	void M_SetLastHitLocation(const struct FVector& value);

	//TEnumAsByte<E_Tools>	TakingOutToolType;		//Offset: 6560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetTakingOutToolType() const;
	TEnumAsByte<E_Tools>* M_PtrGetTakingOutToolType();
	void M_SetTakingOutToolType(const TEnumAsByte<E_Tools>& value);

	//struct FTimerHandle	EquipTorchHandle;		//Offset: 6568	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetEquipTorchHandle() const;
	struct FTimerHandle* M_PtrGetEquipTorchHandle();
	void M_SetEquipTorchHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	EquipToolHandle;		//Offset: 6576	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetEquipToolHandle() const;
	struct FTimerHandle* M_PtrGetEquipToolHandle();
	void M_SetEquipToolHandle(const struct FTimerHandle& value);

	//struct FTimerHandle	UnequipToolHandle;		//Offset: 6584	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetUnequipToolHandle() const;
	struct FTimerHandle* M_PtrGetUnequipToolHandle();
	void M_SetUnequipToolHandle(const struct FTimerHandle& value);

	//float	LastHitActorInteractionDistance;		//Offset: 6592	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLastHitActorInteractionDistance() const;
	float* M_PtrGetLastHitActorInteractionDistance();
	void M_SetLastHitActorInteractionDistance(const float& value);

	//TEnumAsByte<E_Tools>	HolsteredToolType;		//Offset: 6596	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetHolsteredToolType() const;
	TEnumAsByte<E_Tools>* M_PtrGetHolsteredToolType();
	void M_SetHolsteredToolType(const TEnumAsByte<E_Tools>& value);

	//int32_t	SelectedQuickSlotID;		//Offset: 6600	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedQuickSlotID() const;
	int32_t* M_PtrGetSelectedQuickSlotID();
	void M_SetSelectedQuickSlotID(const int32_t& value);

	//struct FST_ItemDetails	SelectedQuickSlotItem;		//Offset: 6608	Size: 848	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_ItemDetails M_GetSelectedQuickSlotItem() const;
	struct FST_ItemDetails* M_PtrGetSelectedQuickSlotItem();
	void M_SetSelectedQuickSlotItem(const struct FST_ItemDetails& value);

	//bool	SelectedQuickSlotDrawWeapon;		//Offset: 7456	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSelectedQuickSlotDrawWeapon() const;
	bool* M_PtrGetSelectedQuickSlotDrawWeapon();
	void M_SetSelectedQuickSlotDrawWeapon(const bool& value);

	//bool	EquippedToolsForInteraction;		//Offset: 7457	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEquippedToolsForInteraction() const;
	bool* M_PtrGetEquippedToolsForInteraction();
	void M_SetEquippedToolsForInteraction(const bool& value);

	//struct FRotator	StabilizedRotation;		//Offset: 7460	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetStabilizedRotation() const;
	struct FRotator* M_PtrGetStabilizedRotation();
	void M_SetStabilizedRotation(const struct FRotator& value);

	//struct FRotator	PreviousControllerRotation;		//Offset: 7472	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetPreviousControllerRotation() const;
	struct FRotator* M_PtrGetPreviousControllerRotation();
	void M_SetPreviousControllerRotation(const struct FRotator& value);

	//struct FRotator	PreviousTargetRotation;		//Offset: 7484	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetPreviousTargetRotation() const;
	struct FRotator* M_PtrGetPreviousTargetRotation();
	void M_SetPreviousTargetRotation(const struct FRotator& value);

	//class ABP_BaseCharacter_C*	Heir_Temp;		//Offset: 7496	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetHeir_Temp() const;
	class ABP_BaseCharacter_C** M_PtrGetHeir_Temp();
	void M_SetHeir_Temp(const class ABP_BaseCharacter_C*& value);

	//bool	Headbobbing;		//Offset: 7504	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHeadbobbing() const;
	bool* M_PtrGetHeadbobbing();
	void M_SetHeadbobbing(const bool& value);

	//struct FTimerHandle	TimedInteractionHandle;		//Offset: 7512	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetTimedInteractionHandle() const;
	struct FTimerHandle* M_PtrGetTimedInteractionHandle();
	void M_SetTimedInteractionHandle(const struct FTimerHandle& value);

	//struct FKey	PressedKey;		//Offset: 7520	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FKey M_GetPressedKey() const;
	struct FKey* M_PtrGetPressedKey();
	void M_SetPressedKey(const struct FKey& value);

	//struct FST_Camera_Targets	CameraTargets;		//Offset: 7544	Size: 220	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Camera_Targets M_GetCameraTargets() const;
	struct FST_Camera_Targets* M_PtrGetCameraTargets();
	void M_SetCameraTargets(const struct FST_Camera_Targets& value);

	//struct FName	FirstPersonCameraSocket;		//Offset: 7764	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetFirstPersonCameraSocket() const;
	struct FName* M_PtrGetFirstPersonCameraSocket();
	void M_SetFirstPersonCameraSocket(const struct FName& value);

	//struct FST_CameraSettings	CurrentCameraSettings;		//Offset: 7772	Size: 20	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_CameraSettings M_GetCurrentCameraSettings() const;
	struct FST_CameraSettings* M_PtrGetCurrentCameraSettings();
	void M_SetCurrentCameraSettings(const struct FST_CameraSettings& value);

	//class UCurveFloat*	CameraLerpCurve;		//Offset: 7792	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCurveFloat* M_GetCameraLerpCurve() const;
	class UCurveFloat** M_PtrGetCameraLerpCurve();
	void M_SetCameraLerpCurve(const class UCurveFloat*& value);

	//bool	RightShoulder;		//Offset: 7800	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightShoulder() const;
	bool* M_PtrGetRightShoulder();
	void M_SetRightShoulder(const bool& value);

	//class AActor*	TimerHitActor;		//Offset: 7808	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetTimerHitActor() const;
	class AActor** M_PtrGetTimerHitActor();
	void M_SetTimerHitActor(const class AActor*& value);

	//float	ForwardAxisInput;		//Offset: 7816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetForwardAxisInput() const;
	float* M_PtrGetForwardAxisInput();
	void M_SetForwardAxisInput(const float& value);

	//float	RightAxisInput;		//Offset: 7820	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRightAxisInput() const;
	float* M_PtrGetRightAxisInput();
	void M_SetRightAxisInput(const float& value);

	//class ABP_MasterFurniture_C*	Interacted_Furniture;		//Offset: 7824	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterFurniture_C* M_GetInteracted_Furniture() const;
	class ABP_MasterFurniture_C** M_PtrGetInteracted_Furniture();
	void M_SetInteracted_Furniture(const class ABP_MasterFurniture_C*& value);

	//struct FRotator	MountCameraRotation;		//Offset: 7832	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetMountCameraRotation() const;
	struct FRotator* M_PtrGetMountCameraRotation();
	void M_SetMountCameraRotation(const struct FRotator& value);

	//bool	CameraShakes;		//Offset: 7844	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCameraShakes() const;
	bool* M_PtrGetCameraShakes();
	void M_SetCameraShakes(const bool& value);

	//bool	Breathing;		//Offset: 7845	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBreathing() const;
	bool* M_PtrGetBreathing();
	void M_SetBreathing(const bool& value);

	//bool	isMounting;		//Offset: 7846	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetisMounting() const;
	bool* M_PtrGetisMounting();
	void M_SetisMounting(const bool& value);

	//float	ThirdPersonMinDistance;		//Offset: 7848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetThirdPersonMinDistance() const;
	float* M_PtrGetThirdPersonMinDistance();
	void M_SetThirdPersonMinDistance(const float& value);

	//float	ThirdPersonMaxDistance;		//Offset: 7852	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetThirdPersonMaxDistance() const;
	float* M_PtrGetThirdPersonMaxDistance();
	void M_SetThirdPersonMaxDistance(const float& value);

	//float	TP_CameraDistance_Temp;		//Offset: 7856	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTP_CameraDistance_Temp() const;
	float* M_PtrGetTP_CameraDistance_Temp();
	void M_SetTP_CameraDistance_Temp(const float& value);

	//TEnumAsByte<E_ViewMode>	PreviousViewmode;		//Offset: 7860	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ViewMode> M_GetPreviousViewmode() const;
	TEnumAsByte<E_ViewMode>* M_PtrGetPreviousViewmode();
	void M_SetPreviousViewmode(const TEnumAsByte<E_ViewMode>& value);

	//int32_t	ZoomCounter;		//Offset: 7864	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetZoomCounter() const;
	int32_t* M_PtrGetZoomCounter();
	void M_SetZoomCounter(const int32_t& value);

	//int32_t	InteractedSlotIndex;		//Offset: 7868	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInteractedSlotIndex() const;
	int32_t* M_PtrGetInteractedSlotIndex();
	void M_SetInteractedSlotIndex(const int32_t& value);

	//bool	RotatingObjectMode;		//Offset: 7872	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotatingObjectMode() const;
	bool* M_PtrGetRotatingObjectMode();
	void M_SetRotatingObjectMode(const bool& value);

	//bool	FlowerpotMenuOpen;		//Offset: 7873	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFlowerpotMenuOpen() const;
	bool* M_PtrGetFlowerpotMenuOpen();
	void M_SetFlowerpotMenuOpen(const bool& value);

	//bool	DecorMenuOpen;		//Offset: 7874	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDecorMenuOpen() const;
	bool* M_PtrGetDecorMenuOpen();
	void M_SetDecorMenuOpen(const bool& value);

	//bool	WindowMenuOpen;		//Offset: 7875	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWindowMenuOpen() const;
	bool* M_PtrGetWindowMenuOpen();
	void M_SetWindowMenuOpen(const bool& value);

	//TAssetPtr<class FInteractWithObject__DelegateSignature>	InteractWithObject;		//Offset: 7880	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FInteractWithObject__DelegateSignature> M_GetInteractWithObject() const;
	TAssetPtr<class FInteractWithObject__DelegateSignature>* M_PtrGetInteractWithObject();
	void M_SetInteractWithObject(const TAssetPtr<class FInteractWithObject__DelegateSignature>& value);

	//class UTask_InteractionDetect_C*	InteractionDetect_Task;		//Offset: 7896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTask_InteractionDetect_C* M_GetInteractionDetect_Task() const;
	class UTask_InteractionDetect_C** M_PtrGetInteractionDetect_Task();
	void M_SetInteractionDetect_Task(const class UTask_InteractionDetect_C*& value);

	//bool	ShouldCancelInteractTimer;		//Offset: 7904	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldCancelInteractTimer() const;
	bool* M_PtrGetShouldCancelInteractTimer();
	void M_SetShouldCancelInteractTimer(const bool& value);

	//class UMultiTaskMutex*	InteractionDetect_Mutex;		//Offset: 7912	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiTaskMutex* M_GetInteractionDetect_Mutex() const;
	class UMultiTaskMutex** M_PtrGetInteractionDetect_Mutex();
	void M_SetInteractionDetect_Mutex(const class UMultiTaskMutex*& value);

	//class UMultiTaskThreadPool*	PlayerThreadPool;		//Offset: 7920	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiTaskThreadPool* M_GetPlayerThreadPool() const;
	class UMultiTaskThreadPool** M_PtrGetPlayerThreadPool();
	void M_SetPlayerThreadPool(const class UMultiTaskThreadPool*& value);

	//bool	IsBeingFollowed;		//Offset: 7928	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsBeingFollowed() const;
	bool* M_PtrGetIsBeingFollowed();
	void M_SetIsBeingFollowed(const bool& value);

	//struct FTimerHandle	FoliageInteractionTimer;		//Offset: 7936	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFoliageInteractionTimer() const;
	struct FTimerHandle* M_PtrGetFoliageInteractionTimer();
	void M_SetFoliageInteractionTimer(const struct FTimerHandle& value);

	//class UAudioComponent*	Damage_Voice;		//Offset: 7944	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetDamage_Voice() const;
	class UAudioComponent** M_PtrGetDamage_Voice();
	void M_SetDamage_Voice(const class UAudioComponent*& value);

	//float	InitialCrouchingSpeed;		//Offset: 7952	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInitialCrouchingSpeed() const;
	float* M_PtrGetInitialCrouchingSpeed();
	void M_SetInitialCrouchingSpeed(const float& value);

	//struct FTimerHandle	InteractionRepeatTimer;		//Offset: 7960	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetInteractionRepeatTimer() const;
	struct FTimerHandle* M_PtrGetInteractionRepeatTimer();
	void M_SetInteractionRepeatTimer(const struct FTimerHandle& value);

	//bool	SkipTimer;		//Offset: 7968	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSkipTimer() const;
	bool* M_PtrGetSkipTimer();
	void M_SetSkipTimer(const bool& value);

	//int32_t	RagdollCounter;		//Offset: 7972	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRagdollCounter() const;
	int32_t* M_PtrGetRagdollCounter();
	void M_SetRagdollCounter(const int32_t& value);

	//int32_t	RagdollStoppedCounter;		//Offset: 7976	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRagdollStoppedCounter() const;
	int32_t* M_PtrGetRagdollStoppedCounter();
	void M_SetRagdollStoppedCounter(const int32_t& value);

	//bool	WasMountedBeforeRagdoll;		//Offset: 7980	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasMountedBeforeRagdoll() const;
	bool* M_PtrGetWasMountedBeforeRagdoll();
	void M_SetWasMountedBeforeRagdoll(const bool& value);

	//struct FVector	MountVelocityBeforeRagdoll;		//Offset: 7984	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetMountVelocityBeforeRagdoll() const;
	struct FVector* M_PtrGetMountVelocityBeforeRagdoll();
	void M_SetMountVelocityBeforeRagdoll(const struct FVector& value);

	//struct FVector	MountedLocationBeforeRagdoll;		//Offset: 7996	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetMountedLocationBeforeRagdoll() const;
	struct FVector* M_PtrGetMountedLocationBeforeRagdoll();
	void M_SetMountedLocationBeforeRagdoll(const struct FVector& value);

	//float	AimAssist_Sensitivity_X;		//Offset: 8008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAimAssist_Sensitivity_X() const;
	float* M_PtrGetAimAssist_Sensitivity_X();
	void M_SetAimAssist_Sensitivity_X(const float& value);

	//float	AimAssist_Sensitivity_Y;		//Offset: 8012	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAimAssist_Sensitivity_Y() const;
	float* M_PtrGetAimAssist_Sensitivity_Y();
	void M_SetAimAssist_Sensitivity_Y(const float& value);

	//struct FTimerHandle	AimAssistTimerHandle;		//Offset: 8016	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAimAssistTimerHandle() const;
	struct FTimerHandle* M_PtrGetAimAssistTimerHandle();
	void M_SetAimAssistTimerHandle(const struct FTimerHandle& value);

	//float	UpDownLookAxisInput;		//Offset: 8024	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUpDownLookAxisInput() const;
	float* M_PtrGetUpDownLookAxisInput();
	void M_SetUpDownLookAxisInput(const float& value);

	//float	LeftRightLookAxisInput;		//Offset: 8028	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLeftRightLookAxisInput() const;
	float* M_PtrGetLeftRightLookAxisInput();
	void M_SetLeftRightLookAxisInput(const float& value);

	//struct FVector	AimAssistLocationRelative;		//Offset: 8032	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetAimAssistLocationRelative() const;
	struct FVector* M_PtrGetAimAssistLocationRelative();
	void M_SetAimAssistLocationRelative(const struct FVector& value);

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

	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint);

	void UpdateCameraDistance(float AxisValue);

	void IncreaseCounter();

	void ResetCounter();

	void CameraShake_BPI(class UCameraShakeBase* ShakeClass, float Scale);

	void StartingInventory();

	void SelectQuickSlotWithHolster(int32_t SelectedQuickSlotID, bool DrawWeapon_);

	void EquipToolTimer();

	void UnequipToolTimer();

	void UnequipToEmptySlot();

	void UnequipWithEquipTimer();

	void StartCameraFadePawn_BPI(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool ShouldFadeAudio, bool HoldWhenFinished, bool ReverseOnFinish);

	void RagdollTimer();

	void CheckCollisionAfterRagdoll();

	void UpdateOnTimeChanged(int32_t IteratorNumber);

	void OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void UpdateFoliageInteraction();

	void InitInteraction();

	void StartInteractionDetectionTask();

	void PrepareForMounting(struct FVector Location);

	void CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType);

	void OnSeasonChanged_End_Event_1();

	void OnLookAtLoopReached();

	void SetInteractionTimer(float Time);

	void Update_Camera_Event(class UCurveFloat* LerpCurve);

	void OnCombatCheck();

	void OnCombatEnded();

	void OnCombatStarted();

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

	void UnequipItem();

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

	void PressedInput_QuickSlot8();

	void PressedInput_QuickSlot7();

	void PressedInput_QuickSlot6();

	void PressedInput_QuickSlot5();

	void PressedInput_QuickSlot4();

	void PressedInput_QuickSlot3();

	void PressedInput_QuickSlot2();

	void PressedInput_QuickSlot1();

	void PressedInput_Torch();

	void InteractLineTrace();

	void InteractCloseGate();

	void InteractOpenGate(bool Timer);

	void ClientPlayForceFeedback_BPI(class UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool Looping, bool IgnoreTimeDilation, bool PlayWhilePaused);

	void OpenHusbandryAnimalAssignment_BPI(class AActor* AnimalReference);

	void StartTrance_BPI(float TranceMaxTime, TEnumAsByte<E_TalentTrance> WoodcutterTrance_);

	void StartEffect_BPI(TEnumAsByte<E_Effects> Effect, float FullEffectTime);

	void UpdateEffect_BPI(TEnumAsByte<E_Effects> Effect, float EffectTimeLeft, bool HasEffectEnded);

	void StartBlink_BPI(TEnumAsByte<E_BlinkParameters> BlinkParameter, float BlinkingActualTime, float BlinkingProcessTime);

	void RemoveTranceStatus_BPI(TEnumAsByte<E_TalentTrance> WoodcutterTrance_);

	void UpdateTranceStatus_BPI(float Time, int32_t NumberOfStacks, TEnumAsByte<E_TalentTrance> WoodcutterTrance_);

	void UpdateHoldableItemInputs_BPI();

	void ToggleTradingMenu_BPI(bool WithNPC_, class UActorComponent* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving);

	void CreateCraftingMenu_BPI(const TArray<struct FDataTableRowHandle>& WorkbenchCategories, TEnumAsByte<E_Workbenches> WorkbenchType, bool NoWorkbench_);

	void CreateNotification_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeOut, float NotificationDelay);

	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key);

	void CameraLerp__UpdateFunc();

	void CameraLerp__FinishedFunc();

	void FOV__UpdateFunc();

	void FOV__FinishedFunc();

	void InteractRange(float InteractionRange, struct FVector* StartVector, struct FVector* EndVector);

	void SelectQuickSlot(int32_t SelectedQuickSlotID, bool DrawWeapon_);

	void ToggleGameMenu();

	void SwapHeldItem(struct FName ItemName, int32_t ArrayID);

	void RevertHeldItem();

	void SwapHeldItemToHands(bool _2Hand);

	void StartBarterWithNPC(class ABP_NPC_C** NPCReference, bool GiftGiving);

	void StopBarterWithNPC();

	void Hide_Held_Items(class AActor* InteractedActor);

	void ReEquipHeldItems();

	void InteractionDetect();

	void UpdateGhosts();

	void SetInBuildingMode(bool Active);

	void GetLastHitActorInteractionDistance(float* Distance);

	void SelectedSlotWithToolUpdate();

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

	void SetPlayerHairColor(struct FLinearColor HairColor);

	void SetPlayerSkinTone(struct FLinearColor SkinTone);

	void UpdatePlayerLook();

	void InitCameraMode(TEnumAsByte<E_ViewMode> ViewMode, float CameraDistance);

	void TPInteractionTrace(TArray<struct FHitResult>* Hits);

	void InterruptInteractAction();

	void CheckInventoryForTorchToEquip(bool* TorchFound, struct FName* TorchType);

	void TryToEquipTorch(const struct FName& TorchName);

	void IsAnyRadialMenuOpen(bool* Value);

	void StopInteractionThread();

	void PreviousViewmodeChangeCamera(bool SwitchBack);

	void AimAssist();

	void GetCameraComponents_BPI(TEnumAsByte<E_ViewMode> ViewMode, class USpringArmComponent** CameraSpringArm, class UCameraComponent** CameraComponent);

	void GetCameraViewDirection_BPI(struct FVector* Forward);

	static void InheritableComponentHandler();

	void FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV);

	void StopCameraFOVLerp();

	void PlayFromStartCameraFOVLerp();

	void PlayCameraFOVLerp();

	void ReverseCameraFOVLerp();

	void ReverseFromEndCameraFOVLerp();

	void SetNewTimeCameraFOVLerp(float NewTime);

	void OnGoToSleep();

	void OnSit();

	void OnGetUp();

	void OnSitIdle();

	void SetBlocking_Event(bool Blocking);

	void Set_ForceStanding_Event();

	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void ResetCameraPitch();

	void AddCharacterRotation_BPI(struct FRotator AddAmount);

	void AddImpaledItem(class AActor* ImpaledItem);

	void Ragdoll();

	void Un_Ragdoll_Event(bool SkipAnim);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void Stop_Character_Movement(bool bStopMovementInput);

	void Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera);

	void Limit_Camera_Rotation(struct FST_CameraRotationLimits CameraRotationLimits);

	void ChangePlayerInput(bool DisablePlayerInput);

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int32_t NumberOfAutomaticLoops, bool SwapItemsOnInteraction);

	void Change_Camera(bool bUsePlayerCamera, float BlendTime);

	void Stop_Character_Rotation(bool StopRotationInput);

	void FinishStageInteraction();

	void ReceiveTick(float DeltaSeconds);

	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UObject* NewClass, bool UpdateOnly);

	void Swoon();

	void StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish);

	void ReceiveBeginPlay();

	void PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);

	void PlayerLookAt(class AActor* Target, struct FVector TargetLocation);

	void UserConstructionScript();

	void On_ALS_Aiming_Changed();

	void LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm);

	void ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings);

	void On_ALS_ViewMode_Changed();

	void Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem);

	void SpawnHeldItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);

	void DestroyHeldItem();

	void DestroyOffHandItem();

	void SpawnOffHandItem(class ABP_MasterHoldableItem_C* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int32_t Capacity, float CurrentHP, TEnumAsByte<E_Ownership> Ownership, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);

	void Attach_Components();

	void SetCurrentCameraFOV(float InFieldOfView);

	struct FRotator GetLookingRotation();

	void On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation, bool ChangeCamera, bool UseLocation, TEnumAsByte<E_LookAtOptions> LookAtBehavior, struct FRotator LookAtRotation);

	void OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, struct FVector InteractLocation);

	void OnDialogueStarted();

	void OnDialogueEnded();

	void SetEarMorph(float Value);

	void EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools> WantedTool, bool* Success);

	void GetCurrentCameraFOV(float* FieldOfView);

	void GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen);

	void UpdateDefaultFov(float InFieldOfView);

	void OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation);

	void OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, struct FVector InteractLocation, bool ResetCamera);

	void HolsterToolsForDialogue(bool Hide);

	void OnStartFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation);

	void OnEndFurnitureInteraction(class ABP_MasterFurniture_C* InteractedFurniture, struct FVector InteractLocation);

	void GroundedRotation();

	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);

	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);

	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);

	bool OnMountingPawnFinished(class AActor* newMountActor);

	bool OnDismountingPawnFinished(class AActor* oldPawnMount);

	bool SetRiderCollisionEnabled(bool shouldEnable);

	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);

	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);

#pragma endregion
};
};