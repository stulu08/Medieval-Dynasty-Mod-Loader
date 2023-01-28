#pragma once
#include "Structs.h"
#include "Engine/PlayerController.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass PC_Player.PC_Player_C
// Super: Class Engine.PlayerController
// Size: 1820
// Size inherited: 1392
/////////////////////////////////////////////
namespace UE4 {
class APC_Player_C : public APlayerController {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 1392	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class URiderControllerComponent*	riderController;		//Offset: 1400	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class URiderControllerComponent* M_GetriderController() const;
	class URiderControllerComponent** M_PtrGetriderController();
	void M_SetriderController(const class URiderControllerComponent*& value);

	//class UUI_HUD_C*	UI_PlayerHUDReference;		//Offset: 1408	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_HUD_C* M_GetUI_PlayerHUDReference() const;
	class UUI_HUD_C** M_PtrGetUI_PlayerHUDReference();
	void M_SetUI_PlayerHUDReference(const class UUI_HUD_C*& value);

	//class UUI_Trading_C*	UI_TradingMenuReference;		//Offset: 1416	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Trading_C* M_GetUI_TradingMenuReference() const;
	class UUI_Trading_C** M_PtrGetUI_TradingMenuReference();
	void M_SetUI_TradingMenuReference(const class UUI_Trading_C*& value);

	//class UUserWidget*	UI_ReconnectController;		//Offset: 1424	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_ReconnectController() const;
	class UUserWidget** M_PtrGetUI_ReconnectController();
	void M_SetUI_ReconnectController(const class UUserWidget*& value);

	//class UUserWidget*	UI_UserLoggedOut;		//Offset: 1432	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_UserLoggedOut() const;
	class UUserWidget** M_PtrGetUI_UserLoggedOut();
	void M_SetUI_UserLoggedOut(const class UUserWidget*& value);

	//class UUserWidget*	UI_DialogueChangeToHeirUIReference;		//Offset: 1440	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_DialogueChangeToHeirUIReference() const;
	class UUserWidget** M_PtrGetUI_DialogueChangeToHeirUIReference();
	void M_SetUI_DialogueChangeToHeirUIReference(const class UUserWidget*& value);

	//class UGI_MedievalDynasty_C*	GameInstanceReference;		//Offset: 1448	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UGI_MedievalDynasty_C* M_GetGameInstanceReference() const;
	class UGI_MedievalDynasty_C** M_PtrGetGameInstanceReference();
	void M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value);

	//bool	IsInFreeMode;		//Offset: 1456	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInFreeMode() const;
	bool* M_PtrGetIsInFreeMode();
	void M_SetIsInFreeMode(const bool& value);

	//class AP_Spectator_C*	SpectatorPawnReference;		//Offset: 1464	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AP_Spectator_C* M_GetSpectatorPawnReference() const;
	class AP_Spectator_C** M_PtrGetSpectatorPawnReference();
	void M_SetSpectatorPawnReference(const class AP_Spectator_C*& value);

	//class ABP_PlayerCharacter_C*	PlayerCharacterReference;		//Offset: 1472	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_PlayerCharacter_C* M_GetPlayerCharacterReference() const;
	class ABP_PlayerCharacter_C** M_PtrGetPlayerCharacterReference();
	void M_SetPlayerCharacterReference(const class ABP_PlayerCharacter_C*& value);

	//bool	IsGameMenuActive;		//Offset: 1480	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsGameMenuActive() const;
	bool* M_PtrGetIsGameMenuActive();
	void M_SetIsGameMenuActive(const bool& value);

	//bool	IsInventoryKeyDown;		//Offset: 1481	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInventoryKeyDown() const;
	bool* M_PtrGetIsInventoryKeyDown();
	void M_SetIsInventoryKeyDown(const bool& value);

	//bool	AnotherDialogue;		//Offset: 1482	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAnotherDialogue() const;
	bool* M_PtrGetAnotherDialogue();
	void M_SetAnotherDialogue(const bool& value);

	//class UUserWidget*	UI_EventScreen;		//Offset: 1488	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_EventScreen() const;
	class UUserWidget** M_PtrGetUI_EventScreen();
	void M_SetUI_EventScreen(const class UUserWidget*& value);

	//bool	IsMainMenuActive;		//Offset: 1496	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsMainMenuActive() const;
	bool* M_PtrGetIsMainMenuActive();
	void M_SetIsMainMenuActive(const bool& value);

	//bool	IsEventActive;		//Offset: 1497	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsEventActive() const;
	bool* M_PtrGetIsEventActive();
	void M_SetIsEventActive(const bool& value);

	//bool	CancelButtonPressed;		//Offset: 1498	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCancelButtonPressed() const;
	bool* M_PtrGetCancelButtonPressed();
	void M_SetCancelButtonPressed(const bool& value);

	//struct FVector	Goal;		//Offset: 1500	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetGoal() const;
	struct FVector* M_PtrGetGoal();
	void M_SetGoal(const struct FVector& value);

	//struct FVector	RotateToGoal;		//Offset: 1512	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetRotateToGoal() const;
	struct FVector* M_PtrGetRotateToGoal();
	void M_SetRotateToGoal(const struct FVector& value);

	//TEnumAsByte<E_InventoryMainTab>	InventoryTabToOpen;		//Offset: 1524	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_InventoryMainTab> M_GetInventoryTabToOpen() const;
	TEnumAsByte<E_InventoryMainTab>* M_PtrGetInventoryTabToOpen();
	void M_SetInventoryTabToOpen(const TEnumAsByte<E_InventoryMainTab>& value);

	//bool	ShouldOpenLastTab_;		//Offset: 1525	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldOpenLastTab_() const;
	bool* M_PtrGetShouldOpenLastTab_();
	void M_SetShouldOpenLastTab_(const bool& value);

	//bool	ClosingInventory_;		//Offset: 1526	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetClosingInventory_() const;
	bool* M_PtrGetClosingInventory_();
	void M_SetClosingInventory_(const bool& value);

	//class AActor*	LookAtActor;		//Offset: 1528	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetLookAtActor() const;
	class AActor** M_PtrGetLookAtActor();
	void M_SetLookAtActor(const class AActor*& value);

	//bool	FinishedMovement;		//Offset: 1536	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFinishedMovement() const;
	bool* M_PtrGetFinishedMovement();
	void M_SetFinishedMovement(const bool& value);

	//bool	RotateDuringMovement;		//Offset: 1537	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotateDuringMovement() const;
	bool* M_PtrGetRotateDuringMovement();
	void M_SetRotateDuringMovement(const bool& value);

	//bool	UsePlayerLookAt;		//Offset: 1538	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUsePlayerLookAt() const;
	bool* M_PtrGetUsePlayerLookAt();
	void M_SetUsePlayerLookAt(const bool& value);

	//bool	FadeStopped;		//Offset: 1539	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFadeStopped() const;
	bool* M_PtrGetFadeStopped();
	void M_SetFadeStopped(const bool& value);

	//bool	DeathScreenActive;		//Offset: 1540	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDeathScreenActive() const;
	bool* M_PtrGetDeathScreenActive();
	void M_SetDeathScreenActive(const bool& value);

	//class UUserWidget*	UI_IntroScreen;		//Offset: 1544	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_IntroScreen() const;
	class UUserWidget** M_PtrGetUI_IntroScreen();
	void M_SetUI_IntroScreen(const class UUserWidget*& value);

	//class UUserWidget*	UI_Dialogue;		//Offset: 1552	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_Dialogue() const;
	class UUserWidget** M_PtrGetUI_Dialogue();
	void M_SetUI_Dialogue(const class UUserWidget*& value);

	//unsigned char	FovMode;		//Offset: 1560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetFovMode() const;
	unsigned char* M_PtrGetFovMode();
	void M_SetFovMode(const unsigned char& value);

	//bool	LockFreeCam;		//Offset: 1561	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLockFreeCam() const;
	bool* M_PtrGetLockFreeCam();
	void M_SetLockFreeCam(const bool& value);

	//struct FRotator	RotationBeforeFreeMode;		//Offset: 1564	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetRotationBeforeFreeMode() const;
	struct FRotator* M_PtrGetRotationBeforeFreeMode();
	void M_SetRotationBeforeFreeMode(const struct FRotator& value);

	//struct FRotator	RotationInFreeMode;		//Offset: 1576	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetRotationInFreeMode() const;
	struct FRotator* M_PtrGetRotationInFreeMode();
	void M_SetRotationInFreeMode(const struct FRotator& value);

	//TAssetPtr<class FChangeSteeringType__DelegateSignature>	ChangeSteeringType;		//Offset: 1592	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FChangeSteeringType__DelegateSignature> M_GetChangeSteeringType() const;
	TAssetPtr<class FChangeSteeringType__DelegateSignature>* M_PtrGetChangeSteeringType();
	void M_SetChangeSteeringType(const TAssetPtr<class FChangeSteeringType__DelegateSignature>& value);

	//bool	IsSteeringSetToGamepad_;		//Offset: 1608	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSteeringSetToGamepad_() const;
	bool* M_PtrGetIsSteeringSetToGamepad_();
	void M_SetIsSteeringSetToGamepad_(const bool& value);

	//bool	IgnoreTechnologyCost;		//Offset: 1609	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreTechnologyCost() const;
	bool* M_PtrGetIgnoreTechnologyCost();
	void M_SetIgnoreTechnologyCost(const bool& value);

	//bool	IgnoreCraftingCost;		//Offset: 1610	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIgnoreCraftingCost() const;
	bool* M_PtrGetIgnoreCraftingCost();
	void M_SetIgnoreCraftingCost(const bool& value);

	//class UUserWidget*	UI_ChangeToHeirScreen;		//Offset: 1616	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_ChangeToHeirScreen() const;
	class UUserWidget** M_PtrGetUI_ChangeToHeirScreen();
	void M_SetUI_ChangeToHeirScreen(const class UUserWidget*& value);

	//TAssetPtr<class FOnInputKeybindChange__DelegateSignature>	OnInputKeybindChange;		//Offset: 1624	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnInputKeybindChange__DelegateSignature> M_GetOnInputKeybindChange() const;
	TAssetPtr<class FOnInputKeybindChange__DelegateSignature>* M_PtrGetOnInputKeybindChange();
	void M_SetOnInputKeybindChange(const TAssetPtr<class FOnInputKeybindChange__DelegateSignature>& value);

	//bool	UI_UP_Pressed;		//Offset: 1640	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_UP_Pressed() const;
	bool* M_PtrGetUI_UP_Pressed();
	void M_SetUI_UP_Pressed(const bool& value);

	//bool	UI_Down_Pressed;		//Offset: 1641	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Down_Pressed() const;
	bool* M_PtrGetUI_Down_Pressed();
	void M_SetUI_Down_Pressed(const bool& value);

	//bool	UI_Left_Pressed;		//Offset: 1642	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Left_Pressed() const;
	bool* M_PtrGetUI_Left_Pressed();
	void M_SetUI_Left_Pressed(const bool& value);

	//bool	UI_Right_Pressed;		//Offset: 1643	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Right_Pressed() const;
	bool* M_PtrGetUI_Right_Pressed();
	void M_SetUI_Right_Pressed(const bool& value);

	//bool	UI_Previous_Pressed;		//Offset: 1644	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Previous_Pressed() const;
	bool* M_PtrGetUI_Previous_Pressed();
	void M_SetUI_Previous_Pressed(const bool& value);

	//bool	UI_Next_Pressed;		//Offset: 1645	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Next_Pressed() const;
	bool* M_PtrGetUI_Next_Pressed();
	void M_SetUI_Next_Pressed(const bool& value);

	//bool	UI_Drop_Pressed;		//Offset: 1646	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Drop_Pressed() const;
	bool* M_PtrGetUI_Drop_Pressed();
	void M_SetUI_Drop_Pressed(const bool& value);

	//bool	UI_Confirm_Pressed;		//Offset: 1647	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Confirm_Pressed() const;
	bool* M_PtrGetUI_Confirm_Pressed();
	void M_SetUI_Confirm_Pressed(const bool& value);

	//bool	UI_Special_Pressed;		//Offset: 1648	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUI_Special_Pressed() const;
	bool* M_PtrGetUI_Special_Pressed();
	void M_SetUI_Special_Pressed(const bool& value);

	//bool	CheckDropHold;		//Offset: 1649	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckDropHold() const;
	bool* M_PtrGetCheckDropHold();
	void M_SetCheckDropHold(const bool& value);

	//bool	CheckConfirmHold;		//Offset: 1650	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckConfirmHold() const;
	bool* M_PtrGetCheckConfirmHold();
	void M_SetCheckConfirmHold(const bool& value);

	//bool	CheckSpecialHold;		//Offset: 1651	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckSpecialHold() const;
	bool* M_PtrGetCheckSpecialHold();
	void M_SetCheckSpecialHold(const bool& value);

	//float	UI_Drop_HeldTime;		//Offset: 1652	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUI_Drop_HeldTime() const;
	float* M_PtrGetUI_Drop_HeldTime();
	void M_SetUI_Drop_HeldTime(const float& value);

	//float	UI_Confirm_HeldTime;		//Offset: 1656	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUI_Confirm_HeldTime() const;
	float* M_PtrGetUI_Confirm_HeldTime();
	void M_SetUI_Confirm_HeldTime(const float& value);

	//float	UI_Special_HeldTime;		//Offset: 1660	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetUI_Special_HeldTime() const;
	float* M_PtrGetUI_Special_HeldTime();
	void M_SetUI_Special_HeldTime(const float& value);

	//float	InputsDelay;		//Offset: 1664	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInputsDelay() const;
	float* M_PtrGetInputsDelay();
	void M_SetInputsDelay(const float& value);

	//int32_t	InputHeldCount;		//Offset: 1668	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetInputHeldCount() const;
	int32_t* M_PtrGetInputHeldCount();
	void M_SetInputHeldCount(const int32_t& value);

	//float	BaseInputsDelay;		//Offset: 1672	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseInputsDelay() const;
	float* M_PtrGetBaseInputsDelay();
	void M_SetBaseInputsDelay(const float& value);

	//float	SliderStepSizeMultiplier;		//Offset: 1676	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSliderStepSizeMultiplier() const;
	float* M_PtrGetSliderStepSizeMultiplier();
	void M_SetSliderStepSizeMultiplier(const float& value);

	//TEnumAsByte<E_InputMode>	InputMode;		//Offset: 1680	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_InputMode> M_GetInputMode() const;
	TEnumAsByte<E_InputMode>* M_PtrGetInputMode();
	void M_SetInputMode(const TEnumAsByte<E_InputMode>& value);

	//float	TimeForHoldAction;		//Offset: 1684	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeForHoldAction() const;
	float* M_PtrGetTimeForHoldAction();
	void M_SetTimeForHoldAction(const float& value);

	//struct FVector2D	MousePositionForSteering;		//Offset: 1688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D M_GetMousePositionForSteering() const;
	struct FVector2D* M_PtrGetMousePositionForSteering();
	void M_SetMousePositionForSteering(const struct FVector2D& value);

	//bool	CheckMouseSteering;		//Offset: 1696	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckMouseSteering() const;
	bool* M_PtrGetCheckMouseSteering();
	void M_SetCheckMouseSteering(const bool& value);

	//bool	IsAutorunOn;		//Offset: 1697	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsAutorunOn() const;
	bool* M_PtrGetIsAutorunOn();
	void M_SetIsAutorunOn(const bool& value);

	//bool	ShouldHUDBeHidden;		//Offset: 1698	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldHUDBeHidden() const;
	bool* M_PtrGetShouldHUDBeHidden();
	void M_SetShouldHUDBeHidden(const bool& value);

	//bool	LeftActionPressed;		//Offset: 1699	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLeftActionPressed() const;
	bool* M_PtrGetLeftActionPressed();
	void M_SetLeftActionPressed(const bool& value);

	//bool	RightActionPressed;		//Offset: 1700	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRightActionPressed() const;
	bool* M_PtrGetRightActionPressed();
	void M_SetRightActionPressed(const bool& value);

	//class UUserWidget*	UI_Cutscene;		//Offset: 1704	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_Cutscene() const;
	class UUserWidget** M_PtrGetUI_Cutscene();
	void M_SetUI_Cutscene(const class UUserWidget*& value);

	//struct FTransform	CameraTransform;		//Offset: 1712	Size: 48	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FTransform M_GetCameraTransform() const;
	struct FTransform* M_PtrGetCameraTransform();
	void M_SetCameraTransform(const struct FTransform& value);

	//bool	LockCameraPosition;		//Offset: 1760	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLockCameraPosition() const;
	bool* M_PtrGetLockCameraPosition();
	void M_SetLockCameraPosition(const bool& value);

	//bool	IsMovingForInteraction;		//Offset: 1761	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsMovingForInteraction() const;
	bool* M_PtrGetIsMovingForInteraction();
	void M_SetIsMovingForInteraction(const bool& value);

	//class UUserWidget*	UI_MainMenu;		//Offset: 1768	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_MainMenu() const;
	class UUserWidget** M_PtrGetUI_MainMenu();
	void M_SetUI_MainMenu(const class UUserWidget*& value);

	//class UUserWidget*	UI_DeathScreen;		//Offset: 1776	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_DeathScreen() const;
	class UUserWidget** M_PtrGetUI_DeathScreen();
	void M_SetUI_DeathScreen(const class UUserWidget*& value);

	//class UUserWidget*	UI_CheatMenu;		//Offset: 1784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_CheatMenu() const;
	class UUserWidget** M_PtrGetUI_CheatMenu();
	void M_SetUI_CheatMenu(const class UUserWidget*& value);

	//class UUserWidget*	UI_HeirHairCut;		//Offset: 1792	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetUI_HeirHairCut() const;
	class UUserWidget** M_PtrGetUI_HeirHairCut();
	void M_SetUI_HeirHairCut(const class UUserWidget*& value);

	//TArray<struct FKey>	KeysToIgnoreOnConsoleInitialLaunch;		//Offset: 1800	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FKey> M_GetKeysToIgnoreOnConsoleInitialLaunch() const;
	TArray<struct FKey>* M_PtrGetKeysToIgnoreOnConsoleInitialLaunch();
	void M_SetKeysToIgnoreOnConsoleInitialLaunch(const TArray<struct FKey>& value);

	//unsigned char	ForceDisplayedInputs;		//Offset: 1816	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetForceDisplayedInputs() const;
	unsigned char* M_PtrGetForceDisplayedInputs();
	void M_SetForceDisplayedInputs(const unsigned char& value);

	//bool	ReconnectControlerUIOpen;		//Offset: 1817	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetReconnectControlerUIOpen() const;
	bool* M_PtrGetReconnectControlerUIOpen();
	void M_SetReconnectControlerUIOpen(const bool& value);

	//bool	UserLoggedOutUIOpen;		//Offset: 1818	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUserLoggedOutUIOpen() const;
	bool* M_PtrGetUserLoggedOutUIOpen();
	void M_SetUserLoggedOutUIOpen(const bool& value);

	//bool	DialogueChangeToHeirUIOpen;		//Offset: 1819	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDialogueChangeToHeirUIOpen() const;
	bool* M_PtrGetDialogueChangeToHeirUIOpen();
	void M_SetDialogueChangeToHeirUIOpen(const bool& value);

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

	void DialogueEventFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish);

	void ToggleHUD();

	void XboxMessageDelegate(E_MessageReason messageReason);

	void InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3(float AxisValue);

	void InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2(float AxisValue);

	void ToggleHeirHairCut();

	void InputHoldAction_UI_Special();

	void InputKnowledgeTab();

	void RemoveCutscene(float Delay, class UBinkMediaPlayer* MediaPlayer);

	void CreateCutscene();

	void StopAutorun();

	void Autorun();

	void StartAutorun();

	void InputHoldAction_UI_Confirm();

	void ReceiveTick(float DeltaSeconds);

	void InputHoldAction_UI_Drop();

	void Down_K2Node_InputAxisEvent_4(float AxisValue);

	void CheatMenu();

	void ChangeSteeringType_Event(bool Gamepad);

	void PlayerLookAt_Interrupt_Event();

	void PlayerLookAt_Event(class AActor* targetActor, struct FVector TargetLocation, struct FRotator TargetRotation, bool ResetPitch, float interpSpeed, float ErrorTolerance);

	void InterruptPlayerMove();

	void UpdateControlsSensitivity();

	void InterruptPlayerLooktAtForDialogue();

	void InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6(float AxisValue);

	void InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5(float AxisValue);

	void EnterFreeCam();

	void ReceiveBeginPlay();

	void InitWideCamera();

	void Reset_Camera_Pitch();

	void RemoveIntro(float Delay, class UBinkMediaPlayer* MediaPlayer);

	void CreateIntro();

	void RemoveMainMenu(float Delay);

	void CreateMainMenu();

	void CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType);

	void InputTechnologyTab();

	void Left_K2Node_InputAxisEvent_2(float AxisValue);

	void Backwards_K2Node_InputAxisEvent_1(float AxisValue);

	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);

	void Right_K2Node_InputAxisEvent_7(float AxisValue);

	void OnDialogueStarted();

	void OnDialogueEnded();

	void Player_Look_At_For_Dialogue(class AActor* targetActor, struct FVector TargetLocation);

	void EventToggleInventory();

	void InputInventoryTab();

	void InputMapTab();

	void InputSkillsTab();

	void InputJournalTab();

	void InputManagementTab();

	void InputLastInventoryTab();

	void Player_Move_For_Interaction(struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);

	void Decrease_TP_Camera_Distance();

	void Increase_TP_Camera_Distance();

	void ToggleTradingMenu(bool WithNPC_, class UInventoryComponent_C* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving);

	void ToggleEvent(bool CheatStart, bool CheatEnd);

	void ToggleInventory(TEnumAsByte<E_InventoryMainTab> MainTab, bool OpenLastTab_, bool Close_);

	void ReceivePossess(class APawn* PossessedPawn);

	void Server_PossessPawn(class APawn* characterToPossess);

	void BPI_OnCameraShakesChanged();

	void BPI_OnBreathingChanged();

	void BPI_UpdateControlsSensitivity();

	void BPI_OnHeadbobbingChanged();

	void InpActEvt_Slash_K2Node_InputKeyEvent_1(struct FKey Key);

	void InpActEvt_Knowledge_K2Node_InputActionEvent_1(struct FKey Key);

	void InpActEvt_Knowledge_K2Node_InputActionEvent_2(struct FKey Key);

	void InpActEvt_SummonMount_K2Node_InputActionEvent_3(struct FKey Key);

	void InpActEvt_DismountAction_K2Node_InputActionEvent_4(struct FKey Key);

	void InpActEvt_DismountAction_K2Node_InputActionEvent_5(struct FKey Key);

	void InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_6(struct FKey Key);

	void InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_7(struct FKey Key);

	void InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_8(struct FKey Key);

	void InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_9(struct FKey Key);

	void InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_10(struct FKey Key);

	void InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_11(struct FKey Key);

	void InpActEvt_HideHUD_K2Node_InputActionEvent_12(struct FKey Key);

	void InpActEvt_ChangeCharacter_K2Node_InputActionEvent_13(struct FKey Key);

	void InpActEvt_F9_K2Node_InputKeyEvent_2(struct FKey Key);

	void InpActEvt_Equals_K2Node_InputKeyEvent_3(struct FKey Key);

	void InpActEvt_ChangeInputAction_K2Node_InputActionEvent_14(struct FKey Key);

	void InpActEvt_ChangeInputAction_K2Node_InputActionEvent_15(struct FKey Key);

	void InpActEvt_F5_K2Node_InputKeyEvent_4(struct FKey Key);

	void InpActEvt_ChoiceMenu_K2Node_InputActionEvent_16(struct FKey Key);

	void InpActEvt_ChoiceMenu_K2Node_InputActionEvent_17(struct FKey Key);

	void InpActEvt_Insert_K2Node_InputKeyEvent_5(struct FKey Key);

	void InpActEvt_Home_K2Node_InputKeyEvent_6(struct FKey Key);

	void InpActEvt_Technology_K2Node_InputActionEvent_18(struct FKey Key);

	void InpActEvt_Technology_K2Node_InputActionEvent_19(struct FKey Key);

	void InpActEvt_JumpAction_K2Node_InputActionEvent_20(struct FKey Key);

	void InpActEvt_JumpAction_K2Node_InputActionEvent_21(struct FKey Key);

	void InpActEvt_CameraAction_K2Node_InputActionEvent_22(struct FKey Key);

	void InpActEvt_CameraAction_K2Node_InputActionEvent_23(struct FKey Key);

	void InpActEvt_StanceAction_K2Node_InputActionEvent_24(struct FKey Key);

	void InpActEvt_StanceAction_K2Node_InputActionEvent_25(struct FKey Key);

	void InpActEvt_WalkAction_K2Node_InputActionEvent_26(struct FKey Key);

	void InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_27(struct FKey Key);

	void InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_28(struct FKey Key);

	void InpActEvt_UI_NextSection_K2Node_InputActionEvent_29(struct FKey Key);

	void InpActEvt_UI_NextSection_K2Node_InputActionEvent_30(struct FKey Key);

	void InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_31(struct FKey Key);

	void InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_32(struct FKey Key);

	void InpActEvt_GameMenu_K2Node_InputActionEvent_33(struct FKey Key);

	void InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_34(struct FKey Key);

	void InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_35(struct FKey Key);

	void InpActEvt_E_K2Node_InputKeyEvent_7(struct FKey Key);

	void InpActEvt_E_K2Node_InputKeyEvent_8(struct FKey Key);

	void InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_36(struct FKey Key);

	void InpActEvt_InspectorMode_K2Node_InputActionEvent_37(struct FKey Key);

	void InpActEvt_InspectorMode_K2Node_InputActionEvent_38(struct FKey Key);

	void InpActEvt_SprintAction_K2Node_InputActionEvent_39(struct FKey Key);

	void InpActEvt_SprintAction_K2Node_InputActionEvent_40(struct FKey Key);

	void InpActEvt_InteractAction_K2Node_InputActionEvent_41(struct FKey Key);

	void InpActEvt_InteractAction_K2Node_InputActionEvent_42(struct FKey Key);

	void InpActEvt_QuickSlot1_K2Node_InputActionEvent_43(struct FKey Key);

	void InpActEvt_QuickSlot5_K2Node_InputActionEvent_44(struct FKey Key);

	void InpActEvt_QuickSlot6_K2Node_InputActionEvent_45(struct FKey Key);

	void InpActEvt_QuickSlot2_K2Node_InputActionEvent_46(struct FKey Key);

	void InpActEvt_QuickSlot7_K2Node_InputActionEvent_47(struct FKey Key);

	void InpActEvt_QuickSlot3_K2Node_InputActionEvent_48(struct FKey Key);

	void InpActEvt_QuickSlot8_K2Node_InputActionEvent_49(struct FKey Key);

	void InpActEvt_QuickSlot4_K2Node_InputActionEvent_50(struct FKey Key);

	void InpActEvt_RightAction_K2Node_InputActionEvent_51(struct FKey Key);

	void InpActEvt_RightAction_K2Node_InputActionEvent_52(struct FKey Key);

	void InpActEvt_LeftAction_K2Node_InputActionEvent_53(struct FKey Key);

	void InpActEvt_LeftAction_K2Node_InputActionEvent_54(struct FKey Key);

	void InpActEvt_QuickslotMenu_K2Node_InputActionEvent_55(struct FKey Key);

	void InpActEvt_Torch_K2Node_InputActionEvent_56(struct FKey Key);

	void InpActEvt_UI_Drop_K2Node_InputActionEvent_57(struct FKey Key);

	void InpActEvt_UI_Drop_K2Node_InputActionEvent_58(struct FKey Key);

	void InpActEvt_PageUp_K2Node_InputKeyEvent_9(struct FKey Key);

	void InpActEvt_PageUp_K2Node_InputKeyEvent_10(struct FKey Key);

	void InpActEvt_PageDown_K2Node_InputKeyEvent_11(struct FKey Key);

	void InpActEvt_PageDown_K2Node_InputKeyEvent_12(struct FKey Key);

	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_13(struct FKey Key);

	void InpActEvt_Management_K2Node_InputActionEvent_59(struct FKey Key);

	void InpActEvt_Management_K2Node_InputActionEvent_60(struct FKey Key);

	void InpActEvt_BackSpace_K2Node_InputKeyEvent_14(struct FKey Key);

	void InpActEvt_Backslash_K2Node_InputKeyEvent_15(struct FKey Key);

	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_61(struct FKey Key);

	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_62(struct FKey Key);

	void InpActEvt_UI_Left_K2Node_InputActionEvent_63(struct FKey Key);

	void InpActEvt_UI_Left_K2Node_InputActionEvent_64(struct FKey Key);

	void InpActEvt_UI_Right_K2Node_InputActionEvent_65(struct FKey Key);

	void InpActEvt_UI_Right_K2Node_InputActionEvent_66(struct FKey Key);

	void InpActEvt_UI_Down_K2Node_InputActionEvent_67(struct FKey Key);

	void InpActEvt_UI_Down_K2Node_InputActionEvent_68(struct FKey Key);

	void InpActEvt_UI_Up_K2Node_InputActionEvent_69(struct FKey Key);

	void InpActEvt_UI_Up_K2Node_InputActionEvent_70(struct FKey Key);

	void InpActEvt_UI_Confirm_K2Node_InputActionEvent_71(struct FKey Key);

	void InpActEvt_UI_Confirm_K2Node_InputActionEvent_72(struct FKey Key);

	void InpActEvt_LastInventoryTab_K2Node_InputActionEvent_73(struct FKey Key);

	void InpActEvt_LastInventoryTab_K2Node_InputActionEvent_74(struct FKey Key);

	void InpActEvt_Journal_K2Node_InputActionEvent_75(struct FKey Key);

	void InpActEvt_Journal_K2Node_InputActionEvent_76(struct FKey Key);

	void InpActEvt_Skills_K2Node_InputActionEvent_77(struct FKey Key);

	void InpActEvt_Skills_K2Node_InputActionEvent_78(struct FKey Key);

	void InpActEvt_Map_K2Node_InputActionEvent_79(struct FKey Key);

	void InpActEvt_Map_K2Node_InputActionEvent_80(struct FKey Key);

	void InpActEvt_Multiply_K2Node_InputKeyEvent_16(struct FKey Key);

	void InpActEvt_Inventory_K2Node_InputActionEvent_81(struct FKey Key);

	void InpActEvt_Inventory_K2Node_InputActionEvent_82(struct FKey Key);

	void InpActEvt_Subtract_K2Node_InputKeyEvent_17(struct FKey Key);

	void InpActEvt_Add_K2Node_InputKeyEvent_18(struct FKey Key);

	void UserConstructionScript();

	void ChangeCrosshairStatePC(bool Aiming);

	void OnLockFreeCam(bool LockFreeCam);

	void UpdateFoV();

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

	void InputAxisDelegateBinding_1();

	void InputAxisKeyDelegateBinding_1();

#pragma endregion
};
};