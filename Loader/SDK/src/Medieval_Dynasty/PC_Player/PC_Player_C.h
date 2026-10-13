#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/MD_PlayerController.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass PC_Player.PC_Player_C
// Super: Class Medieval_Dynasty.MD_PlayerController
// Size: 1993
// Size inherited: 1440
/////////////////////////////////////////////
namespace UE4 {
class APC_Player_C : public AMD_PlayerController {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 1440	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UForceFeedbackComponent*	ForceFeedback;		//Offset: 1448	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UForceFeedbackComponent* M_GetForceFeedback() const;
	class UForceFeedbackComponent** M_PtrGetForceFeedback();
	void M_SetForceFeedback(const class UForceFeedbackComponent*& value);

	//class URiderControllerComponent*	riderController;		//Offset: 1456	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class URiderControllerComponent* M_GetriderController() const;
	class URiderControllerComponent** M_PtrGetriderController();
	void M_SetriderController(const class URiderControllerComponent*& value);

	//float	LoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937;		//Offset: 1464	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937() const;
	float* M_PtrGetLoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937();
	void M_SetLoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937(const float& value);

	//TEnumAsByte<ETimelineDirection>	LoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937;		//Offset: 1468	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<ETimelineDirection> M_GetLoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937() const;
	TEnumAsByte<ETimelineDirection>* M_PtrGetLoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937();
	void M_SetLoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937(const TEnumAsByte<ETimelineDirection>& value);

	//class UTimelineComponent*	LoadingAlpha;		//Offset: 1472	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTimelineComponent* M_GetLoadingAlpha() const;
	class UTimelineComponent** M_PtrGetLoadingAlpha();
	void M_SetLoadingAlpha(const class UTimelineComponent*& value);

	//class UUI_HUD_C*	UI_PlayerHUDReference;		//Offset: 1480	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_HUD_C* M_GetUI_PlayerHUDReference() const;
	class UUI_HUD_C** M_PtrGetUI_PlayerHUDReference();
	void M_SetUI_PlayerHUDReference(const class UUI_HUD_C*& value);

	//class UUI_Trading_C*	UI_TradingMenuReference;		//Offset: 1488	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Trading_C* M_GetUI_TradingMenuReference() const;
	class UUI_Trading_C** M_PtrGetUI_TradingMenuReference();
	void M_SetUI_TradingMenuReference(const class UUI_Trading_C*& value);

	//class UUserWidget*	UI_ReconnectController;		//Offset: 1496	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_ReconnectController() const;
	class UUserWidget** M_PtrGetUI_ReconnectController();
	void M_SetUI_ReconnectController(const class UUserWidget*& value);

	//class UUserWidget*	UI_UserLoggedOut;		//Offset: 1504	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_UserLoggedOut() const;
	class UUserWidget** M_PtrGetUI_UserLoggedOut();
	void M_SetUI_UserLoggedOut(const class UUserWidget*& value);

	//class UUserWidget*	UI_DialogueChangeToHeirUIReference;		//Offset: 1512	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_DialogueChangeToHeirUIReference() const;
	class UUserWidget** M_PtrGetUI_DialogueChangeToHeirUIReference();
	void M_SetUI_DialogueChangeToHeirUIReference(const class UUserWidget*& value);

	//class UGI_MedievalDynasty_C*	GameInstanceReference;		//Offset: 1520	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UGI_MedievalDynasty_C* M_GetGameInstanceReference() const;
	class UGI_MedievalDynasty_C** M_PtrGetGameInstanceReference();
	void M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value);

	//bool	IsInFreeMode;		//Offset: 1528	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInFreeMode() const;
	bool* M_PtrGetIsInFreeMode();
	void M_SetIsInFreeMode(const bool& value);

	//class AP_Spectator_C*	SpectatorPawnReference;		//Offset: 1536	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AP_Spectator_C* M_GetSpectatorPawnReference() const;
	class AP_Spectator_C** M_PtrGetSpectatorPawnReference();
	void M_SetSpectatorPawnReference(const class AP_Spectator_C*& value);

	//class ABP_PlayerCharacter_C*	PlayerCharacterReference;		//Offset: 1544	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_PlayerCharacter_C* M_GetPlayerCharacterReference() const;
	class ABP_PlayerCharacter_C** M_PtrGetPlayerCharacterReference();
	void M_SetPlayerCharacterReference(const class ABP_PlayerCharacter_C*& value);

	//bool	IsGameMenuActive;		//Offset: 1552	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsGameMenuActive() const;
	bool* M_PtrGetIsGameMenuActive();
	void M_SetIsGameMenuActive(const bool& value);

	//bool	IsInventoryKeyDown;		//Offset: 1553	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInventoryKeyDown() const;
	bool* M_PtrGetIsInventoryKeyDown();
	void M_SetIsInventoryKeyDown(const bool& value);

	//bool	AnotherDialogue;		//Offset: 1554	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAnotherDialogue() const;
	bool* M_PtrGetAnotherDialogue();
	void M_SetAnotherDialogue(const bool& value);

	//class UUserWidget*	UI_EventScreen;		//Offset: 1560	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_EventScreen() const;
	class UUserWidget** M_PtrGetUI_EventScreen();
	void M_SetUI_EventScreen(const class UUserWidget*& value);

	//bool	IsMainMenuActive;		//Offset: 1568	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsMainMenuActive() const;
	bool* M_PtrGetIsMainMenuActive();
	void M_SetIsMainMenuActive(const bool& value);

	//bool	IsEventActive;		//Offset: 1569	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsEventActive() const;
	bool* M_PtrGetIsEventActive();
	void M_SetIsEventActive(const bool& value);

	//bool	CancelButtonPressed;		//Offset: 1570	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCancelButtonPressed() const;
	bool* M_PtrGetCancelButtonPressed();
	void M_SetCancelButtonPressed(const bool& value);

	//struct FVector	Goal;		//Offset: 1572	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetGoal() const;
	struct FVector* M_PtrGetGoal();
	void M_SetGoal(const struct FVector& value);

	//struct FVector	RotateToGoal;		//Offset: 1584	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRotateToGoal() const;
	struct FVector* M_PtrGetRotateToGoal();
	void M_SetRotateToGoal(const struct FVector& value);

	//bool	DeathScreenActive;		//Offset: 1596	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDeathScreenActive() const;
	bool* M_PtrGetDeathScreenActive();
	void M_SetDeathScreenActive(const bool& value);

	//TEnumAsByte<E_InventoryMainTab>	InventoryTabToOpen;		//Offset: 1597	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_InventoryMainTab> M_GetInventoryTabToOpen() const;
	TEnumAsByte<E_InventoryMainTab>* M_PtrGetInventoryTabToOpen();
	void M_SetInventoryTabToOpen(const TEnumAsByte<E_InventoryMainTab>& value);

	//bool	ShouldOpenLastTab_;		//Offset: 1598	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldOpenLastTab_() const;
	bool* M_PtrGetShouldOpenLastTab_();
	void M_SetShouldOpenLastTab_(const bool& value);

	//bool	ClosingInventory_;		//Offset: 1599	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetClosingInventory_() const;
	bool* M_PtrGetClosingInventory_();
	void M_SetClosingInventory_(const bool& value);

	//class AActor*	LookAtActor;		//Offset: 1600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetLookAtActor() const;
	class AActor** M_PtrGetLookAtActor();
	void M_SetLookAtActor(const class AActor*& value);

	//bool	FinishedMovement;		//Offset: 1608	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFinishedMovement() const;
	bool* M_PtrGetFinishedMovement();
	void M_SetFinishedMovement(const bool& value);

	//bool	RotateDuringMovement;		//Offset: 1609	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotateDuringMovement() const;
	bool* M_PtrGetRotateDuringMovement();
	void M_SetRotateDuringMovement(const bool& value);

	//bool	UsePlayerLookAt;		//Offset: 1610	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUsePlayerLookAt() const;
	bool* M_PtrGetUsePlayerLookAt();
	void M_SetUsePlayerLookAt(const bool& value);

	//bool	FadeStopped;		//Offset: 1611	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFadeStopped() const;
	bool* M_PtrGetFadeStopped();
	void M_SetFadeStopped(const bool& value);

	//class UUserWidget*	UI_IntroScreen;		//Offset: 1616	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_IntroScreen() const;
	class UUserWidget** M_PtrGetUI_IntroScreen();
	void M_SetUI_IntroScreen(const class UUserWidget*& value);

	//class UUserWidget*	UI_Dialogue;		//Offset: 1624	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_Dialogue() const;
	class UUserWidget** M_PtrGetUI_Dialogue();
	void M_SetUI_Dialogue(const class UUserWidget*& value);

	//unsigned char	FovMode;		//Offset: 1632	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetFovMode() const;
	unsigned char* M_PtrGetFovMode();
	void M_SetFovMode(const unsigned char& value);

	//bool	LockFreeCam;		//Offset: 1633	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLockFreeCam() const;
	bool* M_PtrGetLockFreeCam();
	void M_SetLockFreeCam(const bool& value);

	//struct FRotator	RotationBeforeFreeMode;		//Offset: 1636	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetRotationBeforeFreeMode() const;
	struct FRotator* M_PtrGetRotationBeforeFreeMode();
	void M_SetRotationBeforeFreeMode(const struct FRotator& value);

	//struct FRotator	RotationInFreeMode;		//Offset: 1648	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetRotationInFreeMode() const;
	struct FRotator* M_PtrGetRotationInFreeMode();
	void M_SetRotationInFreeMode(const struct FRotator& value);

	//TAssetPtr<class FChangeSteeringType__DelegateSignature>	ChangeSteeringType;		//Offset: 1664	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FChangeSteeringType__DelegateSignature> M_GetChangeSteeringType() const;
	TAssetPtr<class FChangeSteeringType__DelegateSignature>* M_PtrGetChangeSteeringType();
	void M_SetChangeSteeringType(const TAssetPtr<class FChangeSteeringType__DelegateSignature>& value);

	//bool	IsSteeringSetToGamepad_;		//Offset: 1680	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSteeringSetToGamepad_() const;
	bool* M_PtrGetIsSteeringSetToGamepad_();
	void M_SetIsSteeringSetToGamepad_(const bool& value);

	//bool	IgnoreTechnologyCost;		//Offset: 1681	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreTechnologyCost() const;
	bool* M_PtrGetIgnoreTechnologyCost();
	void M_SetIgnoreTechnologyCost(const bool& value);

	//bool	IgnoreCraftingCost;		//Offset: 1682	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreCraftingCost() const;
	bool* M_PtrGetIgnoreCraftingCost();
	void M_SetIgnoreCraftingCost(const bool& value);

	//class UUserWidget*	UI_ChangeToHeirScreen;		//Offset: 1688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_ChangeToHeirScreen() const;
	class UUserWidget** M_PtrGetUI_ChangeToHeirScreen();
	void M_SetUI_ChangeToHeirScreen(const class UUserWidget*& value);

	//TAssetPtr<class FOnInputKeybindChange__DelegateSignature>	OnInputKeybindChange;		//Offset: 1696	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInputKeybindChange__DelegateSignature> M_GetOnInputKeybindChange() const;
	TAssetPtr<class FOnInputKeybindChange__DelegateSignature>* M_PtrGetOnInputKeybindChange();
	void M_SetOnInputKeybindChange(const TAssetPtr<class FOnInputKeybindChange__DelegateSignature>& value);

	//bool	UI_UP_Pressed;		//Offset: 1712	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_UP_Pressed() const;
	bool* M_PtrGetUI_UP_Pressed();
	void M_SetUI_UP_Pressed(const bool& value);

	//bool	UI_Down_Pressed;		//Offset: 1713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Down_Pressed() const;
	bool* M_PtrGetUI_Down_Pressed();
	void M_SetUI_Down_Pressed(const bool& value);

	//bool	UI_Left_Pressed;		//Offset: 1714	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Left_Pressed() const;
	bool* M_PtrGetUI_Left_Pressed();
	void M_SetUI_Left_Pressed(const bool& value);

	//bool	UI_Right_Pressed;		//Offset: 1715	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Right_Pressed() const;
	bool* M_PtrGetUI_Right_Pressed();
	void M_SetUI_Right_Pressed(const bool& value);

	//bool	UI_Previous_Pressed;		//Offset: 1716	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Previous_Pressed() const;
	bool* M_PtrGetUI_Previous_Pressed();
	void M_SetUI_Previous_Pressed(const bool& value);

	//bool	UI_Next_Pressed;		//Offset: 1717	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Next_Pressed() const;
	bool* M_PtrGetUI_Next_Pressed();
	void M_SetUI_Next_Pressed(const bool& value);

	//bool	UI_Drop_Pressed;		//Offset: 1718	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Drop_Pressed() const;
	bool* M_PtrGetUI_Drop_Pressed();
	void M_SetUI_Drop_Pressed(const bool& value);

	//bool	UI_Confirm_Pressed;		//Offset: 1719	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Confirm_Pressed() const;
	bool* M_PtrGetUI_Confirm_Pressed();
	void M_SetUI_Confirm_Pressed(const bool& value);

	//bool	UI_Special_Pressed;		//Offset: 1720	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Special_Pressed() const;
	bool* M_PtrGetUI_Special_Pressed();
	void M_SetUI_Special_Pressed(const bool& value);

	//bool	CheckDropHold;		//Offset: 1721	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckDropHold() const;
	bool* M_PtrGetCheckDropHold();
	void M_SetCheckDropHold(const bool& value);

	//bool	CheckConfirmHold;		//Offset: 1722	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckConfirmHold() const;
	bool* M_PtrGetCheckConfirmHold();
	void M_SetCheckConfirmHold(const bool& value);

	//bool	CheckSpecialHold;		//Offset: 1723	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckSpecialHold() const;
	bool* M_PtrGetCheckSpecialHold();
	void M_SetCheckSpecialHold(const bool& value);

	//float	UI_Drop_HeldTime;		//Offset: 1724	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUI_Drop_HeldTime() const;
	float* M_PtrGetUI_Drop_HeldTime();
	void M_SetUI_Drop_HeldTime(const float& value);

	//float	UI_Confirm_HeldTime;		//Offset: 1728	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUI_Confirm_HeldTime() const;
	float* M_PtrGetUI_Confirm_HeldTime();
	void M_SetUI_Confirm_HeldTime(const float& value);

	//float	UI_Special_HeldTime;		//Offset: 1732	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUI_Special_HeldTime() const;
	float* M_PtrGetUI_Special_HeldTime();
	void M_SetUI_Special_HeldTime(const float& value);

	//float	InputsDelay;		//Offset: 1736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInputsDelay() const;
	float* M_PtrGetInputsDelay();
	void M_SetInputsDelay(const float& value);

	//int32_t	InputHeldCount;		//Offset: 1740	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInputHeldCount() const;
	int32_t* M_PtrGetInputHeldCount();
	void M_SetInputHeldCount(const int32_t& value);

	//float	BaseInputsDelay;		//Offset: 1744	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseInputsDelay() const;
	float* M_PtrGetBaseInputsDelay();
	void M_SetBaseInputsDelay(const float& value);

	//float	SliderStepSizeMultiplier;		//Offset: 1748	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSliderStepSizeMultiplier() const;
	float* M_PtrGetSliderStepSizeMultiplier();
	void M_SetSliderStepSizeMultiplier(const float& value);

	//TEnumAsByte<E_InputMode>	InputMode;		//Offset: 1752	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_InputMode> M_GetInputMode() const;
	TEnumAsByte<E_InputMode>* M_PtrGetInputMode();
	void M_SetInputMode(const TEnumAsByte<E_InputMode>& value);

	//float	TimeForHoldAction;		//Offset: 1756	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeForHoldAction() const;
	float* M_PtrGetTimeForHoldAction();
	void M_SetTimeForHoldAction(const float& value);

	//struct FVector2D	MousePositionForSteering;		//Offset: 1760	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D M_GetMousePositionForSteering() const;
	struct FVector2D* M_PtrGetMousePositionForSteering();
	void M_SetMousePositionForSteering(const struct FVector2D& value);

	//bool	CheckMouseSteering;		//Offset: 1768	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckMouseSteering() const;
	bool* M_PtrGetCheckMouseSteering();
	void M_SetCheckMouseSteering(const bool& value);

	//bool	IsAutorunOn;		//Offset: 1769	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsAutorunOn() const;
	bool* M_PtrGetIsAutorunOn();
	void M_SetIsAutorunOn(const bool& value);

	//bool	ShouldHUDBeHidden;		//Offset: 1770	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldHUDBeHidden() const;
	bool* M_PtrGetShouldHUDBeHidden();
	void M_SetShouldHUDBeHidden(const bool& value);

	//bool	LeftActionPressed;		//Offset: 1771	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLeftActionPressed() const;
	bool* M_PtrGetLeftActionPressed();
	void M_SetLeftActionPressed(const bool& value);

	//bool	RightActionPressed;		//Offset: 1772	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightActionPressed() const;
	bool* M_PtrGetRightActionPressed();
	void M_SetRightActionPressed(const bool& value);

	//class UUserWidget*	UI_Cutscene;		//Offset: 1776	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_Cutscene() const;
	class UUserWidget** M_PtrGetUI_Cutscene();
	void M_SetUI_Cutscene(const class UUserWidget*& value);

	//struct FTransform	CameraTransform;		//Offset: 1792	Size: 48	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FTransform M_GetCameraTransform() const;
	struct FTransform* M_PtrGetCameraTransform();
	void M_SetCameraTransform(const struct FTransform& value);

	//bool	LockCameraPosition;		//Offset: 1840	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLockCameraPosition() const;
	bool* M_PtrGetLockCameraPosition();
	void M_SetLockCameraPosition(const bool& value);

	//bool	IsMovingForInteraction;		//Offset: 1841	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsMovingForInteraction() const;
	bool* M_PtrGetIsMovingForInteraction();
	void M_SetIsMovingForInteraction(const bool& value);

	//class UUserWidget*	UI_MainMenu;		//Offset: 1848	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_MainMenu() const;
	class UUserWidget** M_PtrGetUI_MainMenu();
	void M_SetUI_MainMenu(const class UUserWidget*& value);

	//class UUserWidget*	UI_DeathScreen;		//Offset: 1856	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_DeathScreen() const;
	class UUserWidget** M_PtrGetUI_DeathScreen();
	void M_SetUI_DeathScreen(const class UUserWidget*& value);

	//class UUserWidget*	UI_CheatMenu;		//Offset: 1864	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_CheatMenu() const;
	class UUserWidget** M_PtrGetUI_CheatMenu();
	void M_SetUI_CheatMenu(const class UUserWidget*& value);

	//class UUserWidget*	UI_HeirHairCut;		//Offset: 1872	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_HeirHairCut() const;
	class UUserWidget** M_PtrGetUI_HeirHairCut();
	void M_SetUI_HeirHairCut(const class UUserWidget*& value);

	//TArray<struct FKey>	KeysToIgnoreOnConsoleInitialLaunch;		//Offset: 1880	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FKey> M_GetKeysToIgnoreOnConsoleInitialLaunch() const;
	TArray<struct FKey>* M_PtrGetKeysToIgnoreOnConsoleInitialLaunch();
	void M_SetKeysToIgnoreOnConsoleInitialLaunch(const TArray<struct FKey>& value);

	//unsigned char	ForceDisplayedInputs;		//Offset: 1896	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetForceDisplayedInputs() const;
	unsigned char* M_PtrGetForceDisplayedInputs();
	void M_SetForceDisplayedInputs(const unsigned char& value);

	//bool	ReconnectControlerUIOpen;		//Offset: 1897	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetReconnectControlerUIOpen() const;
	bool* M_PtrGetReconnectControlerUIOpen();
	void M_SetReconnectControlerUIOpen(const bool& value);

	//bool	UserLoggedOutUIOpen;		//Offset: 1898	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUserLoggedOutUIOpen() const;
	bool* M_PtrGetUserLoggedOutUIOpen();
	void M_SetUserLoggedOutUIOpen(const bool& value);

	//bool	DialogueChangeToHeirUIOpen;		//Offset: 1899	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDialogueChangeToHeirUIOpen() const;
	bool* M_PtrGetDialogueChangeToHeirUIOpen();
	void M_SetDialogueChangeToHeirUIOpen(const bool& value);

	//class UUserWidget*	UI_NoticeBoard;		//Offset: 1904	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_NoticeBoard() const;
	class UUserWidget** M_PtrGetUI_NoticeBoard();
	void M_SetUI_NoticeBoard(const class UUserWidget*& value);

	//class UUserWidget*	UI_CharacterCreator;		//Offset: 1912	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_CharacterCreator() const;
	class UUserWidget** M_PtrGetUI_CharacterCreator();
	void M_SetUI_CharacterCreator(const class UUserWidget*& value);

	//int32_t	CurrentEmoteID;		//Offset: 1920	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetCurrentEmoteID() const;
	int32_t* M_PtrGetCurrentEmoteID();
	void M_SetCurrentEmoteID(const int32_t& value);

	//class UWidget*	BetaScreen;		//Offset: 1928	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UWidget* M_GetBetaScreen() const;
	class UWidget** M_PtrGetBetaScreen();
	void M_SetBetaScreen(const class UWidget*& value);

	//struct FTimerHandle	BetaScreenTimer;		//Offset: 1936	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetBetaScreenTimer() const;
	struct FTimerHandle* M_PtrGetBetaScreenTimer();
	void M_SetBetaScreenTimer(const struct FTimerHandle& value);

	//class UUserWidget*	LoadingScreenReference;		//Offset: 1944	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetLoadingScreenReference() const;
	class UUserWidget** M_PtrGetLoadingScreenReference();
	void M_SetLoadingScreenReference(const class UUserWidget*& value);

	//bool	MaxSpeedAchieved;		//Offset: 1952	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMaxSpeedAchieved() const;
	bool* M_PtrGetMaxSpeedAchieved();
	void M_SetMaxSpeedAchieved(const bool& value);

	//float	TimeHold;		//Offset: 1956	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeHold() const;
	float* M_PtrGetTimeHold();
	void M_SetTimeHold(const float& value);

	//class UUserWidget*	UI_CrestCreator;		//Offset: 1960	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_CrestCreator() const;
	class UUserWidget** M_PtrGetUI_CrestCreator();
	void M_SetUI_CrestCreator(const class UUserWidget*& value);

	//class UUserWidget*	UI_VillageName;		//Offset: 1968	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_VillageName() const;
	class UUserWidget** M_PtrGetUI_VillageName();
	void M_SetUI_VillageName(const class UUserWidget*& value);

	//TEnumAsByte<E_InventoryMainTab>	BookTabToOpen;		//Offset: 1976	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_InventoryMainTab> M_GetBookTabToOpen() const;
	TEnumAsByte<E_InventoryMainTab>* M_PtrGetBookTabToOpen();
	void M_SetBookTabToOpen(const TEnumAsByte<E_InventoryMainTab>& value);

	//float	YeetEverythingCheatStartTime;		//Offset: 1980	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetYeetEverythingCheatStartTime() const;
	float* M_PtrGetYeetEverythingCheatStartTime();
	void M_SetYeetEverythingCheatStartTime(const float& value);

	//class UObject*	WidgetToPassUIControls;		//Offset: 1984	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UObject* M_GetWidgetToPassUIControls() const;
	class UObject** M_PtrGetWidgetToPassUIControls();
	void M_SetWidgetToPassUIControls(const class UObject*& value);

	//bool	IsLookLeftRightAxisStillZero;		//Offset: 1992	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsLookLeftRightAxisStillZero() const;
	bool* M_PtrGetIsLookLeftRightAxisStillZero();
	void M_SetIsLookLeftRightAxisStillZero(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_Player.PC_Player_C");
		return ptr;
	}

#pragma region Functions
	void ChangeSteeringType__DelegateSignature(bool Gamepad);

	void OnInputKeybindChange__DelegateSignature();

	void ExecuteUbergraph_PC_Player(int32_t EntryPoint);

	void Event_StartCameraFade_PC(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish);

	void Event_StopCameraFade_PC();

	void Event_SetManualCameraFade_PC(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio);

	void FakeMakeLove(bool AddPotionEffect_, float EffectDurationTime, float HealthPerSecond, float AdditionalMaxHP, float StaminaMultiplier, float FoodMultiplier, float WaterMultiplier, bool TurnOffHarmfulPoison, float PoisonPerSecond, bool NightVision, int32_t TemperatureTolerance, bool SkillsReset, float DamageMultiplier, bool AnimalRepel, float AdditionalWeight);

	void DialogueEventFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish, float HoldFadeDuration);

	void RemoveTheCursorForConsole();

	void ToggleCharacterCreator(TEnumAsByte<E_RendererType> RendererType, bool IgnoreStartingPreset, struct FName HeirName);

	void OpenCurrentBookTab_BPI();

	void Server_ToggleHitYeetCheat();

	void FailedEOSLogging_BPI();

	void DestroySessionSuccess();

	void DestroySessionFailed();

	void DestroyEOSLoggingWindow_BPI();

	void ShowEOSLoggingWindow_BPI();

	void LoadCharacterParamsToCreator(TEnumAsByte<E_Sex> sex, float Age, struct FST_PlayerModulesIDs Params);

	void InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3(float AxisValue);

	void InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2(float AxisValue);

	void RemoveCutscene(float Delay, class UBinkMediaPlayer* MediaPlayer);

	void StopAutorun();

	void StartAutorun();

	void ReceiveTick(float DeltaSeconds);

	void Down_K2Node_InputAxisEvent_4(float AxisValue);

	void Right_K2Node_InputAxisEvent_7(float AxisValue);

	void CheatMenu();

	void PlayerLookAt_Interrupt_Event();

	void PlayerLookAt_Event(class AActor* targetActor, struct FVector TargetLocation, struct FRotator TargetRotation, bool ResetPitch, float interpSpeed, float ErrorTolerance);

	void InterruptPlayerMove();

	void InterruptPlayerLooktAtForDialogue();

	void InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6(float AxisValue);

	void InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5(float AxisValue);

	void ReceiveBeginPlay();

	void InitWideCamera();

	void Reset_Camera_Pitch();

	void RemoveIntro(float Delay, class UBinkMediaPlayer* MediaPlayer);

	void RemoveMainMenu(float Delay);

	void Left_K2Node_InputAxisEvent_2(float AxisValue);

	void Backwards_K2Node_InputAxisEvent_1(float AxisValue);

	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);

	void OnDialogueStarted();

	void OnDialogueEnded();

	void Player_Look_At_For_Dialogue(class AActor* targetActor, struct FVector TargetLocation);

	void Player_Move_For_Interaction(struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);

	void Decrease_TP_Camera_Distance();

	void Increase_TP_Camera_Distance();

	void OnServerAcknowledgedPossession(class APawn* P);

	void ReceivePossess(class APawn* PossessedPawn);

	void Server_UpdatePeopleNeedOrder(const TArray<struct FST_PeopleNeedDisplayed>& PeopleNeedDisplayed);

	void PlayHeirBornCutscene();

	void OnPlayerHeirBorn_Client();

	void Server_PlayerVoted(class APlayerState* PlayerState, int32_t VoteIndex);

	void ProcessByteUpdate_Client(class AActor* Actor, unsigned char Byte);

	void Client_ReplicateBuildingID(class ABP_MasterBuilding_C* BuildingReference, struct FString ID);

	void Server_ReplicateBuildingID(class ABP_MasterBuilding_C* BuildingReference);

	void Client_ReplicateToolBuffer(class ABP_MasterBuilding_C* BuildingReference, const TArray<struct FST_ToolCost>& ToolBuffer, const TArray<TEnumAsByte<E_Tools_Activity>>& ToolActivities);

	void Server_ReplicateToolBuffer(class ABP_MasterBuilding_C* BuildingReference);

	void Server_UpdateProductionOnSeasonalManagementChanged(class ABP_MasterBuilding_C* BuildingReference, bool SeasonalManagement);

	void Server_ChangeAnnualProductionPowerInBuilding(class ABP_MasterBuilding_C* BuildingReference, bool Decrease_Increase, const TArray<int32_t>& Power);

	void AddStatProgress_Server(struct FName StatName, int32_t StatValue, bool TreatAsSet);

	void UnlockAchievement_Server(struct FName AchID);

	void Server_UpdateTradeActiveSeasons(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<bool>& ActiveSeasons);

	void Server_UpdateProductionActiveSeasons(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<bool>& ActiveSeasons);

	void Server_IncreaseSeasonalProductionPowerInBuilding(class ABP_MasterBuilding_C* BuildingReference, int32_t Power, int32_t SeasonIndex);

	void Server_UpdateProductionPower(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<int32_t>& PowerOfProduction);

	void UnlockPlatformSchemeServer(struct FName SchemeID);

	void UnlockPlatformSchemeClient(struct FName SchemeID);

	void Server_SetCustomName_Field(class ABP_MasterField_C* FieldReference, struct FString CustomName, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID);

	void Server_SetCustomName_Animal(class ABP_HusbandryAI_C* AnimalReference, struct FString CustomName, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID);

	void Server_SetCustomName_Building(class ABP_MasterBuilding_C* BuildingReference, struct FString CustomName, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID);

	void ClearSyncedConditions_Server(int32_t LastIndex);

	void CallOnAllConditionsProcessed_Client();

	void Server_SetGiftGiven(class ABP_BaseCharacter_C* NPC, bool Value, const struct FString& PlayerNetID);

	void Server_SetShopType(class ABP_MasterBuilding_C* BuildingReference, TEnumAsByte<E_ShopType> ShopType);

	void Server_RemoveAnimalFromSystems(class ABP_HusbandryAI_C* AnimalReference);

	void Server_UpdateTradePower(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<int32_t>& PowerOfTrade);

	void Client_ReplicateCurrentTrade(class ABP_MasterBuilding_C* BuildingReference, const TArray<bool>& Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, const TArray<int32_t>& Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, const TArray<int32_t>& SeasonalPower, const TArray<float>& Progresses, const TArray<float>& NumbersPerHour_Spring, const TArray<float>& NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter);

	void Server_ReplicateCurrentTrade(class ABP_MasterBuilding_C* BuildingReference);

	void Server_DecreaseSeasonalProductionPowerInBuilding(class ABP_MasterBuilding_C* BuildingReference, int32_t Power, int32_t SeasonIndex);

	void Client_ReplicateCurrentWorkersProduction(class ABP_MasterBuilding_C* BuildingReference, const TArray<bool>& Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, const TArray<int32_t>& Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, const TArray<int32_t>& SeasonalPower, const TArray<float>& Progresses, const TArray<float>& NumbersPerHour_Spring, TArray<float>* NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter);

	void Server_ReplicateCurrentWorkersProduction(class ABP_MasterBuilding_C* BuildingReference);

	void Client_CheckIfUsingManagement();

	void Server_SetPlayerCurrentlyUsingManagement(class APlayerState* PlayerCurrentlyUsingManagement, bool ReleaseManagement);

	void Server_CheckIfUsingManagement();

	void Server_SetChunkTargetSeedForField(class ABP_MasterField_C* FieldReference, const TArray<ESeeds>& NewTypes, const TArray<int32_t>& ChunkIDs, TEnumAsByte<E_Seasons> Season);

	void Server_RemoveAnimal(class ABP_MasterBuilding_C* AnimalShelter, class ABP_AnimalBase_C*& Animal);

	void Server_RemoveFamilyFromHouse(class ABP_NPC_C* NPCReference);

	void Server_Assignment_Animal_AnimalShelter(class ABP_HusbandryAI_C* Animal, class ABP_MasterBuilding_C* AnimalShelter);

	void Server_Assignment_AnimalShelter_Animal(class ABP_HusbandryAI_C* Animal, class ABP_MasterBuilding_C* AnimalShelter);

	void Server_SwapHouses(class ABP_BaseCharacter_C* CharacterReference, class ABP_MasterBuilding_C* HouseReference);

	void Server_RemoveNPCFromWorkplace(class ABP_NPC_C* NPC);

	void Server_Assignment_Workplace_NPC(class ABP_NPC_C* NPC, class ABP_MasterBuilding_C* Workplace, class ABP_BaseCharacter_C* OtherNPC);

	void Client_Assignment_Workplace_NPC();

	void Client_Assignment_NPC_Workplace();

	void Server_Assignment_NPC_Workplace(class ABP_NPC_C* NPC, class ABP_MasterBuilding_C* Workplace, class ABP_NPC_C* OtherNPC);

	void OnPawnLeavingGame();

	void Server_IncreaseAffectionOfNPC(class ABP_BaseCharacter_C* NPC, int32_t Value, const struct FString& PlayerNetID);

	void ProcessSkeletalMontagesUpdate_Client(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData);

	void RequestActorUpdate_Server(class AActor* Actor);

	void AddStatProgress_Client(struct FName StatName, int32_t StatValue, bool TreatAsSet);

	void UnlockAchievement_Client(struct FName AchID);

	void Server_FillAffectionsForAllPlayers();

	void RemoveNPCsConversationWidget(class ABP_NPC_C* NPCReference);

	void RemoveNPCsConversation_Client(class ABP_NPC_C* NPC_Reference);

	void RemoveNPCsConversation_Server(class ABP_NPC_C* NPC_Reference);

	void AddNPCsConversation_Client(class ABP_NPC_C* NPC_Reference, struct FText Text, bool IsQuest);

	void AddNPCsConversation_Server(class ABP_NPC_C* NPC_Reference, struct FText Text, bool IsQuest);

	void Client_UpdatePlayerColor(struct FLinearColor NewColor, class ABP_MD_PlayerState_C* Player);

	void Server_ChangePlayerColor(struct FLinearColor NewColor, class ABP_MD_PlayerState_C* Target);

	void Server_CreateSound2D(class USoundBase* Sound);

	void CreateSound2DAllPlayers_BPI(class USoundBase* Sound);

	void Client_CreateSound2D(class USoundBase* Sound);

	void CreateSound2D_BPI(class USoundBase* Sound);

	void Client_UpdateChat(struct FText PlayerNick, struct FText MessageContent, class ABP_PlayerCharacter_C* Sender, struct FString PlayerNetID);

	void Server_GetChatMessage(struct FText TextToSend, const TArray<struct FString>& BlockedUsers);

	void RemoveChatterWidget(class ABP_NPC_C* NPCReference);

	void SetHighlightedDialogue_Server(class ABP_NPC_C* NPCReference, int32_t HighlightedDialogue);

	void ClearCurrentDilogueOptions_Server(class ABP_NPC_C* NPCReference);

	void AddCurrentDialogueOptionEntry_Server(class ABP_NPC_C* NPCReference, const struct FText& DialogueOptionText);

	void ClearDialogueHistory_Server(class ABP_NPC_C* NPCReference);

	void AddDialogueHistoryEntry_Server(class ABP_NPC_C* NPCReference, const struct FText& DialogueHistoryText, const bool& DialogueHistoryIsPlayer);

	void TryToCreateHUDTutorial_Server(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen);

	void TryToCreateHUDTutorial_Client(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen);

	void TryToCreateHUDTutorialAllPlayers_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen);

	void TryToCreateHUDTutorial_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen);

	void RemoveFinishedConditions_Server(const TArray<int32_t>& Indexes);

	void OnRepDialogueConditionsSyncState();

	void RunDialogueConditions_Server(TAssetPtr<class UDialogue> Dialogue, const TArray<int32_t>& NodesToCheck, class AActor* NPCActor);

	void StartQuestNotification_Client(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void StartQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void StartQuestNotification_Server(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void StartQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber);

	void CreateQuestNotification_Client(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void CreateQuestNotification_Server(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void CreateQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void CreateQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled);

	void CreateMiddleNotification_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound);

	void CreateNotification_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine);

	void CreateMiddleNotificationAllPlayers_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound);

	void CreateNotificationAllPlayers_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine);

	void CreateMiddleNotification_Client(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound);

	void CreateMiddleNotification_Server(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound);

	void CreateNotification_Client(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine);

	void CreateNotification_Server(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine);

	void ForceDialogueEnd_Server(class AActor* NPCActor);

	void ForceDialogueEnd(class AActor* NPCActor);

	void RemoveChatter_Client(class ABP_NPC_C* NPCReference);

	void RemoveChatter_Server(class ABP_NPC_C* NPCReference);

	void AddChatter_Client(class ABP_NPC_C* NPCReference, struct FString StringTableID, struct FString StringTableKey, bool IsQuest);

	void AddChatter_Server(class ABP_NPC_C* NPCReference, struct FString StringTableID, struct FString StringTableKey, bool IsQuest);

	void RemoveFinishedEvents_Server(const TArray<int32_t>& Indexes);

	void OnRepDialogueEventsSyncState();

	void RunDialogueEvents_Server(TAssetPtr<class UDialogue> Dialogue, int32_t DialogueIndex, class AActor* NPCActor);

	void LaunchInitialCharacterCreator_Client(bool OmmitCharacterCreator);

	void SetInputMode_Client(TEnumAsByte<E_InputMode> InputMode);

	void SetGoal_Server(struct FVector Goal);

	void SetActorLocationsmooth_Server();

	void OnMovementFinished_Server();

	void SimpleMoveTo_Client(const struct FVector& Goal);

	void SimpleMoveTo_Server(const struct FVector& Goal);

	void DestroyPlayerSessionWithReason_BPI(TEnumAsByte<E_PlayerDisconnectReason> Reason);

	void GameClose();

	void DestroySessionWithReason_Client(TEnumAsByte<E_PlayerDisconnectReason> Reason);

	void LevelTravel();

	void DestroyPlayerSessionMenu_BPI();

	void DestroySessionQuit_Server();

	void DestroySessionQuit_Client(struct FName SessionName);

	void DestroyPlayerSessionQuit_BPI();

	void DestroySessionMenu_Client(struct FName SessionName, TEnumAsByte<E_PlayerDisconnectReason> Reason);

	void DestroySessionMenu_Server(TEnumAsByte<E_PlayerDisconnectReason> Reason);

	void SetGlobalTimeMulticast(float TimeDilation);

	void SetGlobalTimeServer(float TimeDilation);

	void UnlockGateSchemeServer(struct FName SchemeID);

	void UnlockGateSchemeClient(struct FName SchemeID);

	void UnlockFenceSchemeServer(struct FName SchemeID);

	void UnlockFenceSchemeClient(struct FName SchemeID);

	void UnlockFurnitureSchemeServer(struct FName SchemeID);

	void UnlockFurnitureSchemeClient(struct FName SchemeID);

	void UnlockCraftingSchemeServer(struct FName SchemeID);

	void UnlockCraftingSchemeClient(struct FName SchemeID);

	void ApplyTechnologySchemesDataInClient(const TArray<struct FName>& UnlockedCraftingRecipes_IDs, TArray<struct FName>* UnlockedFurnitureRecipes_IDs, TArray<struct FName>* UnlockedFencesRecipes_IDs, TArray<struct FName>* UnlockedGatesRecipes_IDs, const TArray<struct FName>& UnlockedPlatformsRecipes_IDs);

	void PassTechnologySchemesDataFromServerToClient();

	void IncreaseTalentLevelServerAndUpdateComponent(int32_t SelectedSkillID, int32_t SelectedTalentID);

	void SetInitStats_Client(class ABP_PlayerCharacter_C* PlayerCharacterReference);

	void Server_PossessPawn(class APawn* characterToPossess);

	void ToggleEvent_BPI(bool CheatStart, bool CheatEnd);

	void ProcessByteVarUpdate(class AActor* Actor, unsigned char Byte);

	void ReleaseInputsUI_BPI();

	void ReleaseInputs_BPI();

	void PCCameraShakeFromSource_BPI(class UCameraShakeBase* CameraShake, class UCameraShakeSourceComponent* SourceComponent);

	void PCCameraShake_BPI(class UCameraShakeBase* CameraShake, float Scale);

	void ProcessSkeletalMontagesUpdate(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData);

	void RequestActorUpdate(class AActor* Actor, bool Force);

	void AddStatProgressPC_BPI(struct FName StatName, int32_t StatValue, bool AllPlayers, bool TreatAsSet);

	void UnlockAchievementPC_BPI(struct FName AchID, bool AllPlayers);

	void UpdateDialogueSyncArray_BPI(int32_t NodeId, int32_t Value);

	void BPI_OnCameraShakesChanged();

	void BPI_OnBreathingChanged();

	void BPI_UpdateControlsSensitivity();

	void BPI_OnHeadbobbingChanged();

	void StopLoadingProgress();

	void StartLoadingProgress(float Duration, float MaxValue);

	void ApplyByteVarUpdate(unsigned char Byte);

	void SetWasActorUpdated_BPI(bool Value);

	void ApplySkeletalMontagesUpdate(const TArray<struct FMontageDataForRep>& MontagesData);

	void ExecuteActorUpdate(class APlayerController* Requester);

	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_1(struct FKey Key);

	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_2(struct FKey Key);

	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_3(struct FKey Key);

	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_4(struct FKey Key);

	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_5(struct FKey Key);

	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(struct FKey Key);

	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_7(struct FKey Key);

	void InpActEvt_ToggleChat_K2Node_InputActionEvent_1(struct FKey Key);

	void InpActEvt_EmoteMenu_K2Node_InputActionEvent_2(struct FKey Key);

	void InpActEvt_EmoteMenu_K2Node_InputActionEvent_3(struct FKey Key);

	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_8(struct FKey Key);

	void InpActEvt_Decimal_K2Node_InputKeyEvent_9(struct FKey Key);

	void InpActEvt_Slash_K2Node_InputKeyEvent_10(struct FKey Key);

	void InpActEvt_Knowledge_K2Node_InputActionEvent_4(struct FKey Key);

	void InpActEvt_Knowledge_K2Node_InputActionEvent_5(struct FKey Key);

	void InpActEvt_SummonMount_K2Node_InputActionEvent_6(struct FKey Key);

	void InpActEvt_DismountAction_K2Node_InputActionEvent_7(struct FKey Key);

	void InpActEvt_DismountAction_K2Node_InputActionEvent_8(struct FKey Key);

	void InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_9(struct FKey Key);

	void InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_10(struct FKey Key);

	void InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_11(struct FKey Key);

	void InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_12(struct FKey Key);

	void InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_13(struct FKey Key);

	void InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_14(struct FKey Key);

	void InpActEvt_HideHUD_K2Node_InputActionEvent_15(struct FKey Key);

	void InpActEvt_ChangeCharacter_K2Node_InputActionEvent_16(struct FKey Key);

	void InpActEvt_F9_K2Node_InputKeyEvent_11(struct FKey Key);

	void InpActEvt_Equals_K2Node_InputKeyEvent_12(struct FKey Key);

	void InpActEvt_ChangeInputAction_K2Node_InputActionEvent_17(struct FKey Key);

	void InpActEvt_ChangeInputAction_K2Node_InputActionEvent_18(struct FKey Key);

	void InpActEvt_F5_K2Node_InputKeyEvent_13(struct FKey Key);

	void InpActEvt_ChoiceMenu_K2Node_InputActionEvent_19(struct FKey Key);

	void InpActEvt_ChoiceMenu_K2Node_InputActionEvent_20(struct FKey Key);

	void InpActEvt_Home_K2Node_InputKeyEvent_14(struct FKey Key);

	void InpActEvt_Technology_K2Node_InputActionEvent_21(struct FKey Key);

	void InpActEvt_Technology_K2Node_InputActionEvent_22(struct FKey Key);

	void InpActEvt_JumpAction_K2Node_InputActionEvent_23(struct FKey Key);

	void InpActEvt_JumpAction_K2Node_InputActionEvent_24(struct FKey Key);

	void InpActEvt_CameraAction_K2Node_InputActionEvent_25(struct FKey Key);

	void InpActEvt_CameraAction_K2Node_InputActionEvent_26(struct FKey Key);

	void InpActEvt_StanceAction_K2Node_InputActionEvent_27(struct FKey Key);

	void InpActEvt_StanceAction_K2Node_InputActionEvent_28(struct FKey Key);

	void InpActEvt_WalkAction_K2Node_InputActionEvent_29(struct FKey Key);

	void InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_30(struct FKey Key);

	void InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_31(struct FKey Key);

	void InpActEvt_UI_NextSection_K2Node_InputActionEvent_32(struct FKey Key);

	void InpActEvt_UI_NextSection_K2Node_InputActionEvent_33(struct FKey Key);

	void InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_34(struct FKey Key);

	void InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_35(struct FKey Key);

	void InpActEvt_GameMenu_K2Node_InputActionEvent_36(struct FKey Key);

	void InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_37(struct FKey Key);

	void InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_38(struct FKey Key);

	void InpActEvt_E_K2Node_InputKeyEvent_15(struct FKey Key);

	void InpActEvt_E_K2Node_InputKeyEvent_16(struct FKey Key);

	void InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_39(struct FKey Key);

	void InpActEvt_InspectorMode_K2Node_InputActionEvent_40(struct FKey Key);

	void InpActEvt_InspectorMode_K2Node_InputActionEvent_41(struct FKey Key);

	void InpActEvt_SprintAction_K2Node_InputActionEvent_42(struct FKey Key);

	void InpActEvt_SprintAction_K2Node_InputActionEvent_43(struct FKey Key);

	void InpActEvt_InteractAction_K2Node_InputActionEvent_44(struct FKey Key);

	void InpActEvt_InteractAction_K2Node_InputActionEvent_45(struct FKey Key);

	void InpActEvt_QuickSlot1_K2Node_InputActionEvent_46(struct FKey Key);

	void InpActEvt_QuickSlot5_K2Node_InputActionEvent_47(struct FKey Key);

	void InpActEvt_QuickSlot6_K2Node_InputActionEvent_48(struct FKey Key);

	void InpActEvt_QuickSlot2_K2Node_InputActionEvent_49(struct FKey Key);

	void InpActEvt_QuickSlot7_K2Node_InputActionEvent_50(struct FKey Key);

	void InpActEvt_QuickSlot3_K2Node_InputActionEvent_51(struct FKey Key);

	void InpActEvt_QuickSlot8_K2Node_InputActionEvent_52(struct FKey Key);

	void InpActEvt_QuickSlot4_K2Node_InputActionEvent_53(struct FKey Key);

	void InpActEvt_RightAction_K2Node_InputActionEvent_54(struct FKey Key);

	void InpActEvt_RightAction_K2Node_InputActionEvent_55(struct FKey Key);

	void InpActEvt_LeftAction_K2Node_InputActionEvent_56(struct FKey Key);

	void InpActEvt_LeftAction_K2Node_InputActionEvent_57(struct FKey Key);

	void InpActEvt_QuickslotMenu_K2Node_InputActionEvent_58(struct FKey Key);

	void InpActEvt_Torch_K2Node_InputActionEvent_59(struct FKey Key);

	void InpActEvt_Torch_K2Node_InputActionEvent_60(struct FKey Key);

	void InpActEvt_UI_Drop_K2Node_InputActionEvent_61(struct FKey Key);

	void InpActEvt_UI_Drop_K2Node_InputActionEvent_62(struct FKey Key);

	void InpActEvt_PageUp_K2Node_InputKeyEvent_17(struct FKey Key);

	void InpActEvt_PageUp_K2Node_InputKeyEvent_18(struct FKey Key);

	void InpActEvt_PageDown_K2Node_InputKeyEvent_19(struct FKey Key);

	void InpActEvt_PageDown_K2Node_InputKeyEvent_20(struct FKey Key);

	void InpActEvt_Management_K2Node_InputActionEvent_63(struct FKey Key);

	void InpActEvt_Management_K2Node_InputActionEvent_64(struct FKey Key);

	void InpActEvt_BackSpace_K2Node_InputKeyEvent_21(struct FKey Key);

	void InpActEvt_Backslash_K2Node_InputKeyEvent_22(struct FKey Key);

	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_65(struct FKey Key);

	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_66(struct FKey Key);

	void InpActEvt_UI_Left_K2Node_InputActionEvent_67(struct FKey Key);

	void InpActEvt_UI_Left_K2Node_InputActionEvent_68(struct FKey Key);

	void InpActEvt_UI_Right_K2Node_InputActionEvent_69(struct FKey Key);

	void InpActEvt_UI_Right_K2Node_InputActionEvent_70(struct FKey Key);

	void InpActEvt_UI_Down_K2Node_InputActionEvent_71(struct FKey Key);

	void InpActEvt_UI_Down_K2Node_InputActionEvent_72(struct FKey Key);

	void InpActEvt_UI_Up_K2Node_InputActionEvent_73(struct FKey Key);

	void InpActEvt_UI_Up_K2Node_InputActionEvent_74(struct FKey Key);

	void InpActEvt_UI_Confirm_K2Node_InputActionEvent_75(struct FKey Key);

	void InpActEvt_UI_Confirm_K2Node_InputActionEvent_76(struct FKey Key);

	void InpActEvt_LastInventoryTab_K2Node_InputActionEvent_77(struct FKey Key);

	void InpActEvt_LastInventoryTab_K2Node_InputActionEvent_78(struct FKey Key);

	void InpActEvt_Journal_K2Node_InputActionEvent_79(struct FKey Key);

	void InpActEvt_Journal_K2Node_InputActionEvent_80(struct FKey Key);

	void InpActEvt_Skills_K2Node_InputActionEvent_81(struct FKey Key);

	void InpActEvt_Skills_K2Node_InputActionEvent_82(struct FKey Key);

	void InpActEvt_Map_K2Node_InputActionEvent_83(struct FKey Key);

	void InpActEvt_Map_K2Node_InputActionEvent_84(struct FKey Key);

	void InpActEvt_Multiply_K2Node_InputKeyEvent_23(struct FKey Key);

	void InpActEvt_Inventory_K2Node_InputActionEvent_85(struct FKey Key);

	void InpActEvt_Inventory_K2Node_InputActionEvent_86(struct FKey Key);

	void InpActEvt_Subtract_K2Node_InputKeyEvent_24(struct FKey Key);

	void InpActEvt_Add_K2Node_InputKeyEvent_25(struct FKey Key);

	void LoadingAlpha__UpdateFunc();

	void LoadingAlpha__FinishedFunc();

	void UserConstructionScript();

	void ChangeCrosshairStatePC(bool Aiming);

	void OnLockFreeCam(bool LockFreeCam);

	void UpdateFov();

	void OnHeadbobbingChanged();

	void InputHoldingWithCount();

	void ResetInputHoldingCount();

	void UpdateInputHoldingTime(float DeltaTime);

	void CheckCzechQuickslot(struct FKey Key);

	void ReleaseAllUIInputs();

	void OnLockCameraPosition(bool LockCameraPosition);

	void OnDismountFinished();

	void OnCameraShakesChanged();

	void OnBreathingChanged();

	void GetIsSteeringSetToGamepad(bool* IsSteeringSetToGamepad);

	void ShowLoggedOutPopup();

	void ShowReconnectPopup();

	void RPC_GetTechnologySchemesData(TArray<struct FName>* UnlockedCraftingRecipes_IDs, TArray<struct FName>* UnlockedFurnitureRecipes_IDs, TArray<struct FName>* UnlockedFencesRecipes_IDs, TArray<struct FName>* UnlockedGatesRecipes_IDs, TArray<struct FName>* UnlockedPlatformsRecipes_IDs);

	void FakeMakeLoveTeleport();

	void OnRotationFinish();

	void FillDialogueSyncArray(int32_t NodeId, TArray<class UDialogueEvents*>* Dialogue_Events);

	void UpdateDialogueSyncArray(int32_t Node_Id, int32_t Value);

	void ClearDialogueSyncArray();

	void CheckForFinishedNodes();

	void RunServerFallbackDialogueLogic(class AActor* NPCActor);

	void RunClientFallbackDialogueLogic(class AActor* NPCActor);

	void FillConditionsSyncArray(TArray<int32_t>* NodesToCheck);

	void CheckForFinishedConditions();

	void CreateLoadingScreen(bool ShowTips);

	void RemoveLoadingScreen();

	void PrepareToolBufferMap(TArray<struct FST_ToolCost>* ToolCost, TArray<TEnumAsByte<E_Tools_Activity>>* ToolActivities, TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>* ToolBuffer);

	void ChoiceMenu_Pressed();

	void ChoiceMenu_Released();

	void EmoteMenu_Pressed();

	void EmoteMenu_Released();

	void ToggleChat_Pressed();

	void RotateGhost_Input(bool IsRotatingLeft, bool IsReleased);

	void JumpAction_Released(struct FKey Key);

	void JumpAction_Pressed(struct FKey Key);

	void DismountAction_Pressed(struct FKey Key);

	void DismountAction_Released(struct FKey Key);

	void SummonMount_Pressed();

	void LookUpDownInputAxis(float Axis_Value);

	void LookLeftRightInputAxis(float Axis_Value);

	void WalkAction_Pressed(struct FKey Key);

	void MouseWheelAxis(float Axis_Value);

	void MoveRightLeft(float Axis_Value);

	void MoveForwardBackwards(float AxisValue);

	void SprintAction_Released(struct FKey Key);

	void SprintAction_Pressed(struct FKey Key);

	void SprintAction_Pressed_Double(struct FKey Key);

	void StanceAction_Input(bool IsReleased);

	void HoisterHoldableItem_Pressed();

	void InteractAction_Released();

	void InteractAction_Pressed(struct FKey Key);

	void RightAction_Input(bool Is_Released);

	void LeftAction_Input(bool IsReleased);

	void QuickSlotMenu_Input();

	void Torch_Pressed(struct FKey Key, bool IsReleased);

	void OpenBookTab(TEnumAsByte<E_InventoryMainTab> BookTab, bool OpenLastInventoryTab);

	void CanOpenBookTab(bool* Can);

	void OnLastInventoryTab_Pressed();

	void OnNum5_Pressed_TeleportCheat();

	void ToggleYeetHitCheat();

	void OnNum6_Pressed_YeetCheat();

	void OnNum3_Pressed_FlyingCheat();

	void OnNum8_pressed_RagdollCheat();

	void OnNumDot_Pressed_ChangeSexCheat();

	void OnNum4_Pressed_TeleportToMarkerCheat();

	void ToggleEvent(bool CheatStart, bool CheatEnd);

	void OnBackspace_Pressed_WeightCheat();

	void On_WeightCheatChanged();

	void OnNumPlus_Pressed_AddGameSpeed();

	void OnNUmMinus_Pressed_SubtractGameSpeed();

	void OnInsert_Pressed_ChangeFovCheat();

	void ChangeCharacterCheat();

	void XboxMessageDelegate(E_MessageReason messageReason);

	void PS5MessageDelegate(E_MessageReason messageReason);

	void EnterFreeCam();

	void ToggleHUD();

	void ToggleHeirHairCut();

	void ToggleNoticeBoard(class AActor* NoticeBoardReference);

	void ToggleCrestCreator();

	void ToggleEditVillageName();

	void ToggleTradingMenu(bool WithNPC_, class UInventoryComponent_C* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving);

	void ToggleInventory(TEnumAsByte<E_InventoryMainTab> MainTab, bool OpenLastTab_, bool Close_);

	void EventToggleInventory();

	void CameraActionInput(struct FKey Key, bool IsReleased);

	void CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType);

	void CreateMainMenu();

	void CreateIntro(bool Oxbow_);

	void CreateCutscene();

	void OnNum9_Released_YeetEverythingCheat();

	void UpdateControlsSensitivity();

	void ChangeSteeringType_Event(bool Gamepad);

	void Autorun();

	void GetWidgetToFocusInputOn(class UObject** WidgetToPassUIControlsTo);

	void OnUIAdditionalInteraction_Released();

	void OnUISpecialAction_Released();

	void OnUIScrollLeftRight(float AxisValue);

	void OnUIGameMenu_Pressed();

	void Down(float AxisValue);

	void OnUICancel_Pressed();

	void InputHoldAction_UI_Drop();

	void InputHoldAction_UI_Confirm();

	void InputHoldAction_UI_Special();

	void OnUIDrop_Released();

	void OnUIConfirm_Released();

	void GetValidChildNameSelection(class UObject** ChildNameSelectionWidget);

	void GetValidInvitationAcceptedPopup(class UObject** InvitationAcceptedPopup);

	void GetValidCurrentTutorialWidget(class UObject** CurrentTutorialWidget);

	void GetValidCurrentMarriageNotificationWindow(class UObject** MarriageNotificationCurrentWindow);

	void GetValidGameMenuUI(class UObject** GameMenuUI);

	void GetValidSeasonJournalUI(class UObject** SeasonJournalUI);

	void ChangeQuickslot(int32_t QuickslotIndex);

	void ContinueWithToggleCharacterCreator(TEnumAsByte<E_RendererType> RendererType, bool IgnoreStartingPreset, struct FName HeirName);

	void PlayEmoteByCommand(struct FName Emote);

	void HandleChatEmotes(TArray<struct FString>* Message, bool* Success);

	void Shenanigans(TArray<struct FString>* Message);

	void CanChatBeToggledOnHorse(bool* Value);

	void PlayForceFeedback(class UForceFeedbackEffect* NewForceFeedbackEffect);

	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);

	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);

	bool IsMounted()/* const*/;

	class APawn* GetCharacterPawn()/* const*/;

	class AActor* GetCharacterMount()/* const*/;

	class AController* GetCharacterController()/* const*/;

	bool PossessCharacter(class APawn* characterToPossess);

	bool OnRiderRemoved(class AActor* removedRider, int32_t seatId);

	bool OnRiderAdded(class AActor* newRider, int32_t seatId);

	bool OnOtherRiderChangedSeats(class AActor* otherRider, int32_t newSeatId, int32_t oldSeatId);

	bool OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, struct FMountActionResponse Response);

	bool OnDismountActionFailed(class AActor* currentMount, struct FMountActionResponse Response);

	bool OnChangeSeatActionFailed(struct FMountActionResponse Response);

	class URiderControllerComponent* GetRiderControllerComponent()/* const*/;

	bool PNMS_PossessPawn(class APawn* pawnToPossess);

	bool BeginMountingActorToSeat(class AActor* newMount, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse);

	bool BeginMountingActor(class AActor* newMount, class AActor* linkedActor, struct FMountActionResponse* mountingResponse);

	bool BeginDismountingActor(struct FMountActionResponse* Response);

	bool BeginChangingSeatToIndex(int32_t seatIndex, struct FMountActionResponse* mountingResponse);

	bool BeginChangingSeatById(int32_t seatId, struct FMountActionResponse* mountingResponse);

	void BPI_RefreshSetSteering();

	void GetUIEventScreen_BPI(class UUserWidget** EventScreen);

	void GetTimeManager_BPI(class UObject** TimeManager);

	void GetVillageJournalManager_BPI(class UObject** VillageJournalManager);

	void UseOnlyControllsForUI_BPI(bool* UseOnlyControllsForUI);

	void GetDeathScreen_BPI(class UUserWidget** DeathScreen);

	void ProcessChatCommand_BPI(struct FString ChatMessage, struct FString* Output);

	bool WasActorUpdated_BPI();

	TArray<struct FMontageDataForRep> GetMontagesForReplicaton_BPI();

	void InputAxisDelegateBinding_1();

	void InputAxisKeyDelegateBinding_1();

#pragma endregion
};
};