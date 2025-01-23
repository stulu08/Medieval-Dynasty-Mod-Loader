#include "../SDK.h"
#include "PC_Player_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame APC_Player_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 1440);
}
struct FPointerToUberGraphFrame* APC_Player_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 1440);
}
void APC_Player_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of ForceFeedback
// Declaration: class UForceFeedbackComponent* ForceFeedback
class UForceFeedbackComponent* APC_Player_C::M_GetForceFeedback() const {
	return Read<class UForceFeedbackComponent*>((byte*)this + 1448);
}
class UForceFeedbackComponent** APC_Player_C::M_PtrGetForceFeedback() {
	return reinterpret_cast<class UForceFeedbackComponent**>((byte*)this + 1448);
}
void APC_Player_C::M_SetForceFeedback(const class UForceFeedbackComponent*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of riderController
// Declaration: class URiderControllerComponent* riderController
class URiderControllerComponent* APC_Player_C::M_GetriderController() const {
	return Read<class URiderControllerComponent*>((byte*)this + 1456);
}
class URiderControllerComponent** APC_Player_C::M_PtrGetriderController() {
	return reinterpret_cast<class URiderControllerComponent**>((byte*)this + 1456);
}
void APC_Player_C::M_SetriderController(const class URiderControllerComponent*& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of LoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937
// Declaration: float LoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937
float APC_Player_C::M_GetLoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937() const {
	return Read<float>((byte*)this + 1464);
}
float* APC_Player_C::M_PtrGetLoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937() {
	return reinterpret_cast<float*>((byte*)this + 1464);
}
void APC_Player_C::M_SetLoadingAlpha_Alpha_D142D0144162BFC2F6B1C5AD5DDE1937(const float& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of LoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937
// Declaration: TEnumAsByte<ETimelineDirection> LoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937
TEnumAsByte<ETimelineDirection> APC_Player_C::M_GetLoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 1468);
}
TEnumAsByte<ETimelineDirection>* APC_Player_C::M_PtrGetLoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 1468);
}
void APC_Player_C::M_SetLoadingAlpha__Direction_D142D0144162BFC2F6B1C5AD5DDE1937(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 1468, value);
}
// Member Getter and Setter of LoadingAlpha
// Declaration: class UTimelineComponent* LoadingAlpha
class UTimelineComponent* APC_Player_C::M_GetLoadingAlpha() const {
	return Read<class UTimelineComponent*>((byte*)this + 1472);
}
class UTimelineComponent** APC_Player_C::M_PtrGetLoadingAlpha() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 1472);
}
void APC_Player_C::M_SetLoadingAlpha(const class UTimelineComponent*& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of UI_PlayerHUDReference
// Declaration: class UUI_HUD_C* UI_PlayerHUDReference
class UUI_HUD_C* APC_Player_C::M_GetUI_PlayerHUDReference() const {
	return Read<class UUI_HUD_C*>((byte*)this + 1480);
}
class UUI_HUD_C** APC_Player_C::M_PtrGetUI_PlayerHUDReference() {
	return reinterpret_cast<class UUI_HUD_C**>((byte*)this + 1480);
}
void APC_Player_C::M_SetUI_PlayerHUDReference(const class UUI_HUD_C*& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of UI_TradingMenuReference
// Declaration: class UUI_Trading_C* UI_TradingMenuReference
class UUI_Trading_C* APC_Player_C::M_GetUI_TradingMenuReference() const {
	return Read<class UUI_Trading_C*>((byte*)this + 1488);
}
class UUI_Trading_C** APC_Player_C::M_PtrGetUI_TradingMenuReference() {
	return reinterpret_cast<class UUI_Trading_C**>((byte*)this + 1488);
}
void APC_Player_C::M_SetUI_TradingMenuReference(const class UUI_Trading_C*& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of UI_ReconnectController
// Declaration: class UUserWidget* UI_ReconnectController
class UUserWidget* APC_Player_C::M_GetUI_ReconnectController() const {
	return Read<class UUserWidget*>((byte*)this + 1496);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_ReconnectController() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1496);
}
void APC_Player_C::M_SetUI_ReconnectController(const class UUserWidget*& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of UI_UserLoggedOut
// Declaration: class UUserWidget* UI_UserLoggedOut
class UUserWidget* APC_Player_C::M_GetUI_UserLoggedOut() const {
	return Read<class UUserWidget*>((byte*)this + 1504);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_UserLoggedOut() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1504);
}
void APC_Player_C::M_SetUI_UserLoggedOut(const class UUserWidget*& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of UI_DialogueChangeToHeirUIReference
// Declaration: class UUserWidget* UI_DialogueChangeToHeirUIReference
class UUserWidget* APC_Player_C::M_GetUI_DialogueChangeToHeirUIReference() const {
	return Read<class UUserWidget*>((byte*)this + 1512);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_DialogueChangeToHeirUIReference() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1512);
}
void APC_Player_C::M_SetUI_DialogueChangeToHeirUIReference(const class UUserWidget*& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of GameInstanceReference
// Declaration: class UGI_MedievalDynasty_C* GameInstanceReference
class UGI_MedievalDynasty_C* APC_Player_C::M_GetGameInstanceReference() const {
	return Read<class UGI_MedievalDynasty_C*>((byte*)this + 1520);
}
class UGI_MedievalDynasty_C** APC_Player_C::M_PtrGetGameInstanceReference() {
	return reinterpret_cast<class UGI_MedievalDynasty_C**>((byte*)this + 1520);
}
void APC_Player_C::M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of IsInFreeMode
// Declaration: bool IsInFreeMode
bool APC_Player_C::M_GetIsInFreeMode() const {
	return Read<bool>((byte*)this + 1528);
}
bool* APC_Player_C::M_PtrGetIsInFreeMode() {
	return reinterpret_cast<bool*>((byte*)this + 1528);
}
void APC_Player_C::M_SetIsInFreeMode(const bool& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of SpectatorPawnReference
// Declaration: class AP_Spectator_C* SpectatorPawnReference
class AP_Spectator_C* APC_Player_C::M_GetSpectatorPawnReference() const {
	return Read<class AP_Spectator_C*>((byte*)this + 1536);
}
class AP_Spectator_C** APC_Player_C::M_PtrGetSpectatorPawnReference() {
	return reinterpret_cast<class AP_Spectator_C**>((byte*)this + 1536);
}
void APC_Player_C::M_SetSpectatorPawnReference(const class AP_Spectator_C*& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of PlayerCharacterReference
// Declaration: class ABP_PlayerCharacter_C* PlayerCharacterReference
class ABP_PlayerCharacter_C* APC_Player_C::M_GetPlayerCharacterReference() const {
	return Read<class ABP_PlayerCharacter_C*>((byte*)this + 1544);
}
class ABP_PlayerCharacter_C** APC_Player_C::M_PtrGetPlayerCharacterReference() {
	return reinterpret_cast<class ABP_PlayerCharacter_C**>((byte*)this + 1544);
}
void APC_Player_C::M_SetPlayerCharacterReference(const class ABP_PlayerCharacter_C*& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of IsGameMenuActive
// Declaration: bool IsGameMenuActive
bool APC_Player_C::M_GetIsGameMenuActive() const {
	return Read<bool>((byte*)this + 1552);
}
bool* APC_Player_C::M_PtrGetIsGameMenuActive() {
	return reinterpret_cast<bool*>((byte*)this + 1552);
}
void APC_Player_C::M_SetIsGameMenuActive(const bool& value) {
	Write((byte*)this + 1552, value);
}
// Member Getter and Setter of IsInventoryKeyDown
// Declaration: bool IsInventoryKeyDown
bool APC_Player_C::M_GetIsInventoryKeyDown() const {
	return Read<bool>((byte*)this + 1553);
}
bool* APC_Player_C::M_PtrGetIsInventoryKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 1553);
}
void APC_Player_C::M_SetIsInventoryKeyDown(const bool& value) {
	Write((byte*)this + 1553, value);
}
// Member Getter and Setter of AnotherDialogue
// Declaration: bool AnotherDialogue
bool APC_Player_C::M_GetAnotherDialogue() const {
	return Read<bool>((byte*)this + 1554);
}
bool* APC_Player_C::M_PtrGetAnotherDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 1554);
}
void APC_Player_C::M_SetAnotherDialogue(const bool& value) {
	Write((byte*)this + 1554, value);
}
// Member Getter and Setter of UI_EventScreen
// Declaration: class UUserWidget* UI_EventScreen
class UUserWidget* APC_Player_C::M_GetUI_EventScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1560);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_EventScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1560);
}
void APC_Player_C::M_SetUI_EventScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of IsMainMenuActive
// Declaration: bool IsMainMenuActive
bool APC_Player_C::M_GetIsMainMenuActive() const {
	return Read<bool>((byte*)this + 1568);
}
bool* APC_Player_C::M_PtrGetIsMainMenuActive() {
	return reinterpret_cast<bool*>((byte*)this + 1568);
}
void APC_Player_C::M_SetIsMainMenuActive(const bool& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of IsEventActive
// Declaration: bool IsEventActive
bool APC_Player_C::M_GetIsEventActive() const {
	return Read<bool>((byte*)this + 1569);
}
bool* APC_Player_C::M_PtrGetIsEventActive() {
	return reinterpret_cast<bool*>((byte*)this + 1569);
}
void APC_Player_C::M_SetIsEventActive(const bool& value) {
	Write((byte*)this + 1569, value);
}
// Member Getter and Setter of CancelButtonPressed
// Declaration: bool CancelButtonPressed
bool APC_Player_C::M_GetCancelButtonPressed() const {
	return Read<bool>((byte*)this + 1570);
}
bool* APC_Player_C::M_PtrGetCancelButtonPressed() {
	return reinterpret_cast<bool*>((byte*)this + 1570);
}
void APC_Player_C::M_SetCancelButtonPressed(const bool& value) {
	Write((byte*)this + 1570, value);
}
// Member Getter and Setter of Goal
// Declaration: struct FVector Goal
struct FVector APC_Player_C::M_GetGoal() const {
	return Read<struct FVector>((byte*)this + 1572);
}
struct FVector* APC_Player_C::M_PtrGetGoal() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1572);
}
void APC_Player_C::M_SetGoal(const struct FVector& value) {
	Write((byte*)this + 1572, value);
}
// Member Getter and Setter of RotateToGoal
// Declaration: struct FVector RotateToGoal
struct FVector APC_Player_C::M_GetRotateToGoal() const {
	return Read<struct FVector>((byte*)this + 1584);
}
struct FVector* APC_Player_C::M_PtrGetRotateToGoal() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1584);
}
void APC_Player_C::M_SetRotateToGoal(const struct FVector& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of DeathScreenActive
// Declaration: bool DeathScreenActive
bool APC_Player_C::M_GetDeathScreenActive() const {
	return Read<bool>((byte*)this + 1596);
}
bool* APC_Player_C::M_PtrGetDeathScreenActive() {
	return reinterpret_cast<bool*>((byte*)this + 1596);
}
void APC_Player_C::M_SetDeathScreenActive(const bool& value) {
	Write((byte*)this + 1596, value);
}
// Member Getter and Setter of InventoryTabToOpen
// Declaration: TEnumAsByte<E_InventoryMainTab> InventoryTabToOpen
TEnumAsByte<E_InventoryMainTab> APC_Player_C::M_GetInventoryTabToOpen() const {
	return Read<TEnumAsByte<E_InventoryMainTab>>((byte*)this + 1597);
}
TEnumAsByte<E_InventoryMainTab>* APC_Player_C::M_PtrGetInventoryTabToOpen() {
	return reinterpret_cast<TEnumAsByte<E_InventoryMainTab>*>((byte*)this + 1597);
}
void APC_Player_C::M_SetInventoryTabToOpen(const TEnumAsByte<E_InventoryMainTab>& value) {
	Write((byte*)this + 1597, value);
}
// Member Getter and Setter of ShouldOpenLastTab_
// Declaration: bool ShouldOpenLastTab_
bool APC_Player_C::M_GetShouldOpenLastTab_() const {
	return Read<bool>((byte*)this + 1598);
}
bool* APC_Player_C::M_PtrGetShouldOpenLastTab_() {
	return reinterpret_cast<bool*>((byte*)this + 1598);
}
void APC_Player_C::M_SetShouldOpenLastTab_(const bool& value) {
	Write((byte*)this + 1598, value);
}
// Member Getter and Setter of ClosingInventory_
// Declaration: bool ClosingInventory_
bool APC_Player_C::M_GetClosingInventory_() const {
	return Read<bool>((byte*)this + 1599);
}
bool* APC_Player_C::M_PtrGetClosingInventory_() {
	return reinterpret_cast<bool*>((byte*)this + 1599);
}
void APC_Player_C::M_SetClosingInventory_(const bool& value) {
	Write((byte*)this + 1599, value);
}
// Member Getter and Setter of LookAtActor
// Declaration: class AActor* LookAtActor
class AActor* APC_Player_C::M_GetLookAtActor() const {
	return Read<class AActor*>((byte*)this + 1600);
}
class AActor** APC_Player_C::M_PtrGetLookAtActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 1600);
}
void APC_Player_C::M_SetLookAtActor(const class AActor*& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of FinishedMovement
// Declaration: bool FinishedMovement
bool APC_Player_C::M_GetFinishedMovement() const {
	return Read<bool>((byte*)this + 1608);
}
bool* APC_Player_C::M_PtrGetFinishedMovement() {
	return reinterpret_cast<bool*>((byte*)this + 1608);
}
void APC_Player_C::M_SetFinishedMovement(const bool& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of RotateDuringMovement
// Declaration: bool RotateDuringMovement
bool APC_Player_C::M_GetRotateDuringMovement() const {
	return Read<bool>((byte*)this + 1609);
}
bool* APC_Player_C::M_PtrGetRotateDuringMovement() {
	return reinterpret_cast<bool*>((byte*)this + 1609);
}
void APC_Player_C::M_SetRotateDuringMovement(const bool& value) {
	Write((byte*)this + 1609, value);
}
// Member Getter and Setter of UsePlayerLookAt
// Declaration: bool UsePlayerLookAt
bool APC_Player_C::M_GetUsePlayerLookAt() const {
	return Read<bool>((byte*)this + 1610);
}
bool* APC_Player_C::M_PtrGetUsePlayerLookAt() {
	return reinterpret_cast<bool*>((byte*)this + 1610);
}
void APC_Player_C::M_SetUsePlayerLookAt(const bool& value) {
	Write((byte*)this + 1610, value);
}
// Member Getter and Setter of FadeStopped
// Declaration: bool FadeStopped
bool APC_Player_C::M_GetFadeStopped() const {
	return Read<bool>((byte*)this + 1611);
}
bool* APC_Player_C::M_PtrGetFadeStopped() {
	return reinterpret_cast<bool*>((byte*)this + 1611);
}
void APC_Player_C::M_SetFadeStopped(const bool& value) {
	Write((byte*)this + 1611, value);
}
// Member Getter and Setter of UI_IntroScreen
// Declaration: class UUserWidget* UI_IntroScreen
class UUserWidget* APC_Player_C::M_GetUI_IntroScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1616);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_IntroScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1616);
}
void APC_Player_C::M_SetUI_IntroScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of UI_Dialogue
// Declaration: class UUserWidget* UI_Dialogue
class UUserWidget* APC_Player_C::M_GetUI_Dialogue() const {
	return Read<class UUserWidget*>((byte*)this + 1624);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_Dialogue() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1624);
}
void APC_Player_C::M_SetUI_Dialogue(const class UUserWidget*& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of FovMode
// Declaration: unsigned char FovMode
unsigned char APC_Player_C::M_GetFovMode() const {
	return Read<unsigned char>((byte*)this + 1632);
}
unsigned char* APC_Player_C::M_PtrGetFovMode() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1632);
}
void APC_Player_C::M_SetFovMode(const unsigned char& value) {
	Write((byte*)this + 1632, value);
}
// Member Getter and Setter of LockFreeCam
// Declaration: bool LockFreeCam
bool APC_Player_C::M_GetLockFreeCam() const {
	return Read<bool>((byte*)this + 1633);
}
bool* APC_Player_C::M_PtrGetLockFreeCam() {
	return reinterpret_cast<bool*>((byte*)this + 1633);
}
void APC_Player_C::M_SetLockFreeCam(const bool& value) {
	Write((byte*)this + 1633, value);
}
// Member Getter and Setter of RotationBeforeFreeMode
// Declaration: struct FRotator RotationBeforeFreeMode
struct FRotator APC_Player_C::M_GetRotationBeforeFreeMode() const {
	return Read<struct FRotator>((byte*)this + 1636);
}
struct FRotator* APC_Player_C::M_PtrGetRotationBeforeFreeMode() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1636);
}
void APC_Player_C::M_SetRotationBeforeFreeMode(const struct FRotator& value) {
	Write((byte*)this + 1636, value);
}
// Member Getter and Setter of RotationInFreeMode
// Declaration: struct FRotator RotationInFreeMode
struct FRotator APC_Player_C::M_GetRotationInFreeMode() const {
	return Read<struct FRotator>((byte*)this + 1648);
}
struct FRotator* APC_Player_C::M_PtrGetRotationInFreeMode() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1648);
}
void APC_Player_C::M_SetRotationInFreeMode(const struct FRotator& value) {
	Write((byte*)this + 1648, value);
}
// Member Getter and Setter of ChangeSteeringType
// Declaration: TAssetPtr<class FChangeSteeringType__DelegateSignature> ChangeSteeringType
TAssetPtr<class FChangeSteeringType__DelegateSignature> APC_Player_C::M_GetChangeSteeringType() const {
	return Read<TAssetPtr<class FChangeSteeringType__DelegateSignature>>((byte*)this + 1664);
}
TAssetPtr<class FChangeSteeringType__DelegateSignature>* APC_Player_C::M_PtrGetChangeSteeringType() {
	return reinterpret_cast<TAssetPtr<class FChangeSteeringType__DelegateSignature>*>((byte*)this + 1664);
}
void APC_Player_C::M_SetChangeSteeringType(const TAssetPtr<class FChangeSteeringType__DelegateSignature>& value) {
	Write((byte*)this + 1664, value);
}
// Member Getter and Setter of IsSteeringSetToGamepad_
// Declaration: bool IsSteeringSetToGamepad_
bool APC_Player_C::M_GetIsSteeringSetToGamepad_() const {
	return Read<bool>((byte*)this + 1680);
}
bool* APC_Player_C::M_PtrGetIsSteeringSetToGamepad_() {
	return reinterpret_cast<bool*>((byte*)this + 1680);
}
void APC_Player_C::M_SetIsSteeringSetToGamepad_(const bool& value) {
	Write((byte*)this + 1680, value);
}
// Member Getter and Setter of IgnoreTechnologyCost
// Declaration: bool IgnoreTechnologyCost
bool APC_Player_C::M_GetIgnoreTechnologyCost() const {
	return Read<bool>((byte*)this + 1681);
}
bool* APC_Player_C::M_PtrGetIgnoreTechnologyCost() {
	return reinterpret_cast<bool*>((byte*)this + 1681);
}
void APC_Player_C::M_SetIgnoreTechnologyCost(const bool& value) {
	Write((byte*)this + 1681, value);
}
// Member Getter and Setter of IgnoreCraftingCost
// Declaration: bool IgnoreCraftingCost
bool APC_Player_C::M_GetIgnoreCraftingCost() const {
	return Read<bool>((byte*)this + 1682);
}
bool* APC_Player_C::M_PtrGetIgnoreCraftingCost() {
	return reinterpret_cast<bool*>((byte*)this + 1682);
}
void APC_Player_C::M_SetIgnoreCraftingCost(const bool& value) {
	Write((byte*)this + 1682, value);
}
// Member Getter and Setter of UI_ChangeToHeirScreen
// Declaration: class UUserWidget* UI_ChangeToHeirScreen
class UUserWidget* APC_Player_C::M_GetUI_ChangeToHeirScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1688);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_ChangeToHeirScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1688);
}
void APC_Player_C::M_SetUI_ChangeToHeirScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1688, value);
}
// Member Getter and Setter of OnInputKeybindChange
// Declaration: TAssetPtr<class FOnInputKeybindChange__DelegateSignature> OnInputKeybindChange
TAssetPtr<class FOnInputKeybindChange__DelegateSignature> APC_Player_C::M_GetOnInputKeybindChange() const {
	return Read<TAssetPtr<class FOnInputKeybindChange__DelegateSignature>>((byte*)this + 1696);
}
TAssetPtr<class FOnInputKeybindChange__DelegateSignature>* APC_Player_C::M_PtrGetOnInputKeybindChange() {
	return reinterpret_cast<TAssetPtr<class FOnInputKeybindChange__DelegateSignature>*>((byte*)this + 1696);
}
void APC_Player_C::M_SetOnInputKeybindChange(const TAssetPtr<class FOnInputKeybindChange__DelegateSignature>& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of UI_UP_Pressed
// Declaration: bool UI_UP_Pressed
bool APC_Player_C::M_GetUI_UP_Pressed() const {
	return Read<bool>((byte*)this + 1712);
}
bool* APC_Player_C::M_PtrGetUI_UP_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1712);
}
void APC_Player_C::M_SetUI_UP_Pressed(const bool& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of UI_Down_Pressed
// Declaration: bool UI_Down_Pressed
bool APC_Player_C::M_GetUI_Down_Pressed() const {
	return Read<bool>((byte*)this + 1713);
}
bool* APC_Player_C::M_PtrGetUI_Down_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1713);
}
void APC_Player_C::M_SetUI_Down_Pressed(const bool& value) {
	Write((byte*)this + 1713, value);
}
// Member Getter and Setter of UI_Left_Pressed
// Declaration: bool UI_Left_Pressed
bool APC_Player_C::M_GetUI_Left_Pressed() const {
	return Read<bool>((byte*)this + 1714);
}
bool* APC_Player_C::M_PtrGetUI_Left_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1714);
}
void APC_Player_C::M_SetUI_Left_Pressed(const bool& value) {
	Write((byte*)this + 1714, value);
}
// Member Getter and Setter of UI_Right_Pressed
// Declaration: bool UI_Right_Pressed
bool APC_Player_C::M_GetUI_Right_Pressed() const {
	return Read<bool>((byte*)this + 1715);
}
bool* APC_Player_C::M_PtrGetUI_Right_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1715);
}
void APC_Player_C::M_SetUI_Right_Pressed(const bool& value) {
	Write((byte*)this + 1715, value);
}
// Member Getter and Setter of UI_Previous_Pressed
// Declaration: bool UI_Previous_Pressed
bool APC_Player_C::M_GetUI_Previous_Pressed() const {
	return Read<bool>((byte*)this + 1716);
}
bool* APC_Player_C::M_PtrGetUI_Previous_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1716);
}
void APC_Player_C::M_SetUI_Previous_Pressed(const bool& value) {
	Write((byte*)this + 1716, value);
}
// Member Getter and Setter of UI_Next_Pressed
// Declaration: bool UI_Next_Pressed
bool APC_Player_C::M_GetUI_Next_Pressed() const {
	return Read<bool>((byte*)this + 1717);
}
bool* APC_Player_C::M_PtrGetUI_Next_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1717);
}
void APC_Player_C::M_SetUI_Next_Pressed(const bool& value) {
	Write((byte*)this + 1717, value);
}
// Member Getter and Setter of UI_Drop_Pressed
// Declaration: bool UI_Drop_Pressed
bool APC_Player_C::M_GetUI_Drop_Pressed() const {
	return Read<bool>((byte*)this + 1718);
}
bool* APC_Player_C::M_PtrGetUI_Drop_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1718);
}
void APC_Player_C::M_SetUI_Drop_Pressed(const bool& value) {
	Write((byte*)this + 1718, value);
}
// Member Getter and Setter of UI_Confirm_Pressed
// Declaration: bool UI_Confirm_Pressed
bool APC_Player_C::M_GetUI_Confirm_Pressed() const {
	return Read<bool>((byte*)this + 1719);
}
bool* APC_Player_C::M_PtrGetUI_Confirm_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1719);
}
void APC_Player_C::M_SetUI_Confirm_Pressed(const bool& value) {
	Write((byte*)this + 1719, value);
}
// Member Getter and Setter of UI_Special_Pressed
// Declaration: bool UI_Special_Pressed
bool APC_Player_C::M_GetUI_Special_Pressed() const {
	return Read<bool>((byte*)this + 1720);
}
bool* APC_Player_C::M_PtrGetUI_Special_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1720);
}
void APC_Player_C::M_SetUI_Special_Pressed(const bool& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of CheckDropHold
// Declaration: bool CheckDropHold
bool APC_Player_C::M_GetCheckDropHold() const {
	return Read<bool>((byte*)this + 1721);
}
bool* APC_Player_C::M_PtrGetCheckDropHold() {
	return reinterpret_cast<bool*>((byte*)this + 1721);
}
void APC_Player_C::M_SetCheckDropHold(const bool& value) {
	Write((byte*)this + 1721, value);
}
// Member Getter and Setter of CheckConfirmHold
// Declaration: bool CheckConfirmHold
bool APC_Player_C::M_GetCheckConfirmHold() const {
	return Read<bool>((byte*)this + 1722);
}
bool* APC_Player_C::M_PtrGetCheckConfirmHold() {
	return reinterpret_cast<bool*>((byte*)this + 1722);
}
void APC_Player_C::M_SetCheckConfirmHold(const bool& value) {
	Write((byte*)this + 1722, value);
}
// Member Getter and Setter of CheckSpecialHold
// Declaration: bool CheckSpecialHold
bool APC_Player_C::M_GetCheckSpecialHold() const {
	return Read<bool>((byte*)this + 1723);
}
bool* APC_Player_C::M_PtrGetCheckSpecialHold() {
	return reinterpret_cast<bool*>((byte*)this + 1723);
}
void APC_Player_C::M_SetCheckSpecialHold(const bool& value) {
	Write((byte*)this + 1723, value);
}
// Member Getter and Setter of UI_Drop_HeldTime
// Declaration: float UI_Drop_HeldTime
float APC_Player_C::M_GetUI_Drop_HeldTime() const {
	return Read<float>((byte*)this + 1724);
}
float* APC_Player_C::M_PtrGetUI_Drop_HeldTime() {
	return reinterpret_cast<float*>((byte*)this + 1724);
}
void APC_Player_C::M_SetUI_Drop_HeldTime(const float& value) {
	Write((byte*)this + 1724, value);
}
// Member Getter and Setter of UI_Confirm_HeldTime
// Declaration: float UI_Confirm_HeldTime
float APC_Player_C::M_GetUI_Confirm_HeldTime() const {
	return Read<float>((byte*)this + 1728);
}
float* APC_Player_C::M_PtrGetUI_Confirm_HeldTime() {
	return reinterpret_cast<float*>((byte*)this + 1728);
}
void APC_Player_C::M_SetUI_Confirm_HeldTime(const float& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of UI_Special_HeldTime
// Declaration: float UI_Special_HeldTime
float APC_Player_C::M_GetUI_Special_HeldTime() const {
	return Read<float>((byte*)this + 1732);
}
float* APC_Player_C::M_PtrGetUI_Special_HeldTime() {
	return reinterpret_cast<float*>((byte*)this + 1732);
}
void APC_Player_C::M_SetUI_Special_HeldTime(const float& value) {
	Write((byte*)this + 1732, value);
}
// Member Getter and Setter of InputsDelay
// Declaration: float InputsDelay
float APC_Player_C::M_GetInputsDelay() const {
	return Read<float>((byte*)this + 1736);
}
float* APC_Player_C::M_PtrGetInputsDelay() {
	return reinterpret_cast<float*>((byte*)this + 1736);
}
void APC_Player_C::M_SetInputsDelay(const float& value) {
	Write((byte*)this + 1736, value);
}
// Member Getter and Setter of InputHeldCount
// Declaration: int32_t InputHeldCount
int32_t APC_Player_C::M_GetInputHeldCount() const {
	return Read<int32_t>((byte*)this + 1740);
}
int32_t* APC_Player_C::M_PtrGetInputHeldCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 1740);
}
void APC_Player_C::M_SetInputHeldCount(const int32_t& value) {
	Write((byte*)this + 1740, value);
}
// Member Getter and Setter of BaseInputsDelay
// Declaration: float BaseInputsDelay
float APC_Player_C::M_GetBaseInputsDelay() const {
	return Read<float>((byte*)this + 1744);
}
float* APC_Player_C::M_PtrGetBaseInputsDelay() {
	return reinterpret_cast<float*>((byte*)this + 1744);
}
void APC_Player_C::M_SetBaseInputsDelay(const float& value) {
	Write((byte*)this + 1744, value);
}
// Member Getter and Setter of SliderStepSizeMultiplier
// Declaration: float SliderStepSizeMultiplier
float APC_Player_C::M_GetSliderStepSizeMultiplier() const {
	return Read<float>((byte*)this + 1748);
}
float* APC_Player_C::M_PtrGetSliderStepSizeMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1748);
}
void APC_Player_C::M_SetSliderStepSizeMultiplier(const float& value) {
	Write((byte*)this + 1748, value);
}
// Member Getter and Setter of InputMode
// Declaration: TEnumAsByte<E_InputMode> InputMode
TEnumAsByte<E_InputMode> APC_Player_C::M_GetInputMode() const {
	return Read<TEnumAsByte<E_InputMode>>((byte*)this + 1752);
}
TEnumAsByte<E_InputMode>* APC_Player_C::M_PtrGetInputMode() {
	return reinterpret_cast<TEnumAsByte<E_InputMode>*>((byte*)this + 1752);
}
void APC_Player_C::M_SetInputMode(const TEnumAsByte<E_InputMode>& value) {
	Write((byte*)this + 1752, value);
}
// Member Getter and Setter of TimeForHoldAction
// Declaration: float TimeForHoldAction
float APC_Player_C::M_GetTimeForHoldAction() const {
	return Read<float>((byte*)this + 1756);
}
float* APC_Player_C::M_PtrGetTimeForHoldAction() {
	return reinterpret_cast<float*>((byte*)this + 1756);
}
void APC_Player_C::M_SetTimeForHoldAction(const float& value) {
	Write((byte*)this + 1756, value);
}
// Member Getter and Setter of MousePositionForSteering
// Declaration: struct FVector2D MousePositionForSteering
struct FVector2D APC_Player_C::M_GetMousePositionForSteering() const {
	return Read<struct FVector2D>((byte*)this + 1760);
}
struct FVector2D* APC_Player_C::M_PtrGetMousePositionForSteering() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 1760);
}
void APC_Player_C::M_SetMousePositionForSteering(const struct FVector2D& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of CheckMouseSteering
// Declaration: bool CheckMouseSteering
bool APC_Player_C::M_GetCheckMouseSteering() const {
	return Read<bool>((byte*)this + 1768);
}
bool* APC_Player_C::M_PtrGetCheckMouseSteering() {
	return reinterpret_cast<bool*>((byte*)this + 1768);
}
void APC_Player_C::M_SetCheckMouseSteering(const bool& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of IsAutorunOn
// Declaration: bool IsAutorunOn
bool APC_Player_C::M_GetIsAutorunOn() const {
	return Read<bool>((byte*)this + 1769);
}
bool* APC_Player_C::M_PtrGetIsAutorunOn() {
	return reinterpret_cast<bool*>((byte*)this + 1769);
}
void APC_Player_C::M_SetIsAutorunOn(const bool& value) {
	Write((byte*)this + 1769, value);
}
// Member Getter and Setter of ShouldHUDBeHidden
// Declaration: bool ShouldHUDBeHidden
bool APC_Player_C::M_GetShouldHUDBeHidden() const {
	return Read<bool>((byte*)this + 1770);
}
bool* APC_Player_C::M_PtrGetShouldHUDBeHidden() {
	return reinterpret_cast<bool*>((byte*)this + 1770);
}
void APC_Player_C::M_SetShouldHUDBeHidden(const bool& value) {
	Write((byte*)this + 1770, value);
}
// Member Getter and Setter of LeftActionPressed
// Declaration: bool LeftActionPressed
bool APC_Player_C::M_GetLeftActionPressed() const {
	return Read<bool>((byte*)this + 1771);
}
bool* APC_Player_C::M_PtrGetLeftActionPressed() {
	return reinterpret_cast<bool*>((byte*)this + 1771);
}
void APC_Player_C::M_SetLeftActionPressed(const bool& value) {
	Write((byte*)this + 1771, value);
}
// Member Getter and Setter of RightActionPressed
// Declaration: bool RightActionPressed
bool APC_Player_C::M_GetRightActionPressed() const {
	return Read<bool>((byte*)this + 1772);
}
bool* APC_Player_C::M_PtrGetRightActionPressed() {
	return reinterpret_cast<bool*>((byte*)this + 1772);
}
void APC_Player_C::M_SetRightActionPressed(const bool& value) {
	Write((byte*)this + 1772, value);
}
// Member Getter and Setter of UI_Cutscene
// Declaration: class UUserWidget* UI_Cutscene
class UUserWidget* APC_Player_C::M_GetUI_Cutscene() const {
	return Read<class UUserWidget*>((byte*)this + 1776);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_Cutscene() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1776);
}
void APC_Player_C::M_SetUI_Cutscene(const class UUserWidget*& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of CameraTransform
// Declaration: struct FTransform CameraTransform
struct FTransform APC_Player_C::M_GetCameraTransform() const {
	return Read<struct FTransform>((byte*)this + 1792);
}
struct FTransform* APC_Player_C::M_PtrGetCameraTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 1792);
}
void APC_Player_C::M_SetCameraTransform(const struct FTransform& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of LockCameraPosition
// Declaration: bool LockCameraPosition
bool APC_Player_C::M_GetLockCameraPosition() const {
	return Read<bool>((byte*)this + 1840);
}
bool* APC_Player_C::M_PtrGetLockCameraPosition() {
	return reinterpret_cast<bool*>((byte*)this + 1840);
}
void APC_Player_C::M_SetLockCameraPosition(const bool& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of IsMovingForInteraction
// Declaration: bool IsMovingForInteraction
bool APC_Player_C::M_GetIsMovingForInteraction() const {
	return Read<bool>((byte*)this + 1841);
}
bool* APC_Player_C::M_PtrGetIsMovingForInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 1841);
}
void APC_Player_C::M_SetIsMovingForInteraction(const bool& value) {
	Write((byte*)this + 1841, value);
}
// Member Getter and Setter of UI_MainMenu
// Declaration: class UUserWidget* UI_MainMenu
class UUserWidget* APC_Player_C::M_GetUI_MainMenu() const {
	return Read<class UUserWidget*>((byte*)this + 1848);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_MainMenu() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1848);
}
void APC_Player_C::M_SetUI_MainMenu(const class UUserWidget*& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of UI_DeathScreen
// Declaration: class UUserWidget* UI_DeathScreen
class UUserWidget* APC_Player_C::M_GetUI_DeathScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1856);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_DeathScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1856);
}
void APC_Player_C::M_SetUI_DeathScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of UI_CheatMenu
// Declaration: class UUserWidget* UI_CheatMenu
class UUserWidget* APC_Player_C::M_GetUI_CheatMenu() const {
	return Read<class UUserWidget*>((byte*)this + 1864);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_CheatMenu() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1864);
}
void APC_Player_C::M_SetUI_CheatMenu(const class UUserWidget*& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of UI_HeirHairCut
// Declaration: class UUserWidget* UI_HeirHairCut
class UUserWidget* APC_Player_C::M_GetUI_HeirHairCut() const {
	return Read<class UUserWidget*>((byte*)this + 1872);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_HeirHairCut() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1872);
}
void APC_Player_C::M_SetUI_HeirHairCut(const class UUserWidget*& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of KeysToIgnoreOnConsoleInitialLaunch
// Declaration: TArray<struct FKey> KeysToIgnoreOnConsoleInitialLaunch
TArray<struct FKey> APC_Player_C::M_GetKeysToIgnoreOnConsoleInitialLaunch() const {
	return Read<TArray<struct FKey>>((byte*)this + 1880);
}
TArray<struct FKey>* APC_Player_C::M_PtrGetKeysToIgnoreOnConsoleInitialLaunch() {
	return reinterpret_cast<TArray<struct FKey>*>((byte*)this + 1880);
}
void APC_Player_C::M_SetKeysToIgnoreOnConsoleInitialLaunch(const TArray<struct FKey>& value) {
	Write((byte*)this + 1880, value);
}
// Member Getter and Setter of ForceDisplayedInputs
// Declaration: unsigned char ForceDisplayedInputs
unsigned char APC_Player_C::M_GetForceDisplayedInputs() const {
	return Read<unsigned char>((byte*)this + 1896);
}
unsigned char* APC_Player_C::M_PtrGetForceDisplayedInputs() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1896);
}
void APC_Player_C::M_SetForceDisplayedInputs(const unsigned char& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of ReconnectControlerUIOpen
// Declaration: bool ReconnectControlerUIOpen
bool APC_Player_C::M_GetReconnectControlerUIOpen() const {
	return Read<bool>((byte*)this + 1897);
}
bool* APC_Player_C::M_PtrGetReconnectControlerUIOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1897);
}
void APC_Player_C::M_SetReconnectControlerUIOpen(const bool& value) {
	Write((byte*)this + 1897, value);
}
// Member Getter and Setter of UserLoggedOutUIOpen
// Declaration: bool UserLoggedOutUIOpen
bool APC_Player_C::M_GetUserLoggedOutUIOpen() const {
	return Read<bool>((byte*)this + 1898);
}
bool* APC_Player_C::M_PtrGetUserLoggedOutUIOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1898);
}
void APC_Player_C::M_SetUserLoggedOutUIOpen(const bool& value) {
	Write((byte*)this + 1898, value);
}
// Member Getter and Setter of DialogueChangeToHeirUIOpen
// Declaration: bool DialogueChangeToHeirUIOpen
bool APC_Player_C::M_GetDialogueChangeToHeirUIOpen() const {
	return Read<bool>((byte*)this + 1899);
}
bool* APC_Player_C::M_PtrGetDialogueChangeToHeirUIOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1899);
}
void APC_Player_C::M_SetDialogueChangeToHeirUIOpen(const bool& value) {
	Write((byte*)this + 1899, value);
}
// Member Getter and Setter of UI_NoticeBoard
// Declaration: class UUserWidget* UI_NoticeBoard
class UUserWidget* APC_Player_C::M_GetUI_NoticeBoard() const {
	return Read<class UUserWidget*>((byte*)this + 1904);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_NoticeBoard() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1904);
}
void APC_Player_C::M_SetUI_NoticeBoard(const class UUserWidget*& value) {
	Write((byte*)this + 1904, value);
}
// Member Getter and Setter of UI_CharacterCreator
// Declaration: class UUserWidget* UI_CharacterCreator
class UUserWidget* APC_Player_C::M_GetUI_CharacterCreator() const {
	return Read<class UUserWidget*>((byte*)this + 1912);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_CharacterCreator() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1912);
}
void APC_Player_C::M_SetUI_CharacterCreator(const class UUserWidget*& value) {
	Write((byte*)this + 1912, value);
}
// Member Getter and Setter of CurrentEmoteID
// Declaration: int32_t CurrentEmoteID
int32_t APC_Player_C::M_GetCurrentEmoteID() const {
	return Read<int32_t>((byte*)this + 1920);
}
int32_t* APC_Player_C::M_PtrGetCurrentEmoteID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1920);
}
void APC_Player_C::M_SetCurrentEmoteID(const int32_t& value) {
	Write((byte*)this + 1920, value);
}
// Member Getter and Setter of BetaScreen
// Declaration: class UWidget* BetaScreen
class UWidget* APC_Player_C::M_GetBetaScreen() const {
	return Read<class UWidget*>((byte*)this + 1928);
}
class UWidget** APC_Player_C::M_PtrGetBetaScreen() {
	return reinterpret_cast<class UWidget**>((byte*)this + 1928);
}
void APC_Player_C::M_SetBetaScreen(const class UWidget*& value) {
	Write((byte*)this + 1928, value);
}
// Member Getter and Setter of BetaScreenTimer
// Declaration: struct FTimerHandle BetaScreenTimer
struct FTimerHandle APC_Player_C::M_GetBetaScreenTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1936);
}
struct FTimerHandle* APC_Player_C::M_PtrGetBetaScreenTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1936);
}
void APC_Player_C::M_SetBetaScreenTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1936, value);
}
// Member Getter and Setter of LoadingScreenReference
// Declaration: class UUserWidget* LoadingScreenReference
class UUserWidget* APC_Player_C::M_GetLoadingScreenReference() const {
	return Read<class UUserWidget*>((byte*)this + 1944);
}
class UUserWidget** APC_Player_C::M_PtrGetLoadingScreenReference() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1944);
}
void APC_Player_C::M_SetLoadingScreenReference(const class UUserWidget*& value) {
	Write((byte*)this + 1944, value);
}
// Member Getter and Setter of MaxSpeedAchieved
// Declaration: bool MaxSpeedAchieved
bool APC_Player_C::M_GetMaxSpeedAchieved() const {
	return Read<bool>((byte*)this + 1952);
}
bool* APC_Player_C::M_PtrGetMaxSpeedAchieved() {
	return reinterpret_cast<bool*>((byte*)this + 1952);
}
void APC_Player_C::M_SetMaxSpeedAchieved(const bool& value) {
	Write((byte*)this + 1952, value);
}
// Member Getter and Setter of TimeHold
// Declaration: float TimeHold
float APC_Player_C::M_GetTimeHold() const {
	return Read<float>((byte*)this + 1956);
}
float* APC_Player_C::M_PtrGetTimeHold() {
	return reinterpret_cast<float*>((byte*)this + 1956);
}
void APC_Player_C::M_SetTimeHold(const float& value) {
	Write((byte*)this + 1956, value);
}
// Member Getter and Setter of UI_CrestCreator
// Declaration: class UUserWidget* UI_CrestCreator
class UUserWidget* APC_Player_C::M_GetUI_CrestCreator() const {
	return Read<class UUserWidget*>((byte*)this + 1960);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_CrestCreator() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1960);
}
void APC_Player_C::M_SetUI_CrestCreator(const class UUserWidget*& value) {
	Write((byte*)this + 1960, value);
}
// Member Getter and Setter of UI_VillageName
// Declaration: class UUserWidget* UI_VillageName
class UUserWidget* APC_Player_C::M_GetUI_VillageName() const {
	return Read<class UUserWidget*>((byte*)this + 1968);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_VillageName() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1968);
}
void APC_Player_C::M_SetUI_VillageName(const class UUserWidget*& value) {
	Write((byte*)this + 1968, value);
}
// Member Getter and Setter of BookTabToOpen
// Declaration: TEnumAsByte<E_InventoryMainTab> BookTabToOpen
TEnumAsByte<E_InventoryMainTab> APC_Player_C::M_GetBookTabToOpen() const {
	return Read<TEnumAsByte<E_InventoryMainTab>>((byte*)this + 1976);
}
TEnumAsByte<E_InventoryMainTab>* APC_Player_C::M_PtrGetBookTabToOpen() {
	return reinterpret_cast<TEnumAsByte<E_InventoryMainTab>*>((byte*)this + 1976);
}
void APC_Player_C::M_SetBookTabToOpen(const TEnumAsByte<E_InventoryMainTab>& value) {
	Write((byte*)this + 1976, value);
}
// Member Getter and Setter of YeetEverythingCheatStartTime
// Declaration: float YeetEverythingCheatStartTime
float APC_Player_C::M_GetYeetEverythingCheatStartTime() const {
	return Read<float>((byte*)this + 1980);
}
float* APC_Player_C::M_PtrGetYeetEverythingCheatStartTime() {
	return reinterpret_cast<float*>((byte*)this + 1980);
}
void APC_Player_C::M_SetYeetEverythingCheatStartTime(const float& value) {
	Write((byte*)this + 1980, value);
}
// Member Getter and Setter of WidgetToPassUIControls
// Declaration: class UObject* WidgetToPassUIControls
class UObject* APC_Player_C::M_GetWidgetToPassUIControls() const {
	return Read<class UObject*>((byte*)this + 1984);
}
class UObject** APC_Player_C::M_PtrGetWidgetToPassUIControls() {
	return reinterpret_cast<class UObject**>((byte*)this + 1984);
}
void APC_Player_C::M_SetWidgetToPassUIControls(const class UObject*& value) {
	Write((byte*)this + 1984, value);
}
// Member Getter and Setter of IsLookLeftRightAxisStillZero
// Declaration: bool IsLookLeftRightAxisStillZero
bool APC_Player_C::M_GetIsLookLeftRightAxisStillZero() const {
	return Read<bool>((byte*)this + 1992);
}
bool* APC_Player_C::M_PtrGetIsLookLeftRightAxisStillZero() {
	return reinterpret_cast<bool*>((byte*)this + 1992);
}
void APC_Player_C::M_SetIsLookLeftRightAxisStillZero(const bool& value) {
	Write((byte*)this + 1992, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChangeSteeringType__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gamepad	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ChangeSteeringType__DelegateSignature(bool Gamepad) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeSteeringType__DelegateSignature");

	struct APC_Player_C_ChangeSteeringType__DelegateSignature_Params {
		bool Gamepad;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_ChangeSteeringType__DelegateSignature_Params params;
	params.Gamepad = Gamepad;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnInputKeybindChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnInputKeybindChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnInputKeybindChange__DelegateSignature");

	struct APC_Player_C_OnInputKeybindChange__DelegateSignature_Params {
	};
	APC_Player_C_OnInputKeybindChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ExecuteUbergraph_PC_Player
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ExecuteUbergraph_PC_Player(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ExecuteUbergraph_PC_Player");

	struct APC_Player_C_ExecuteUbergraph_PC_Player_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_ExecuteUbergraph_PC_Player_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Event StartCameraFade PC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FromAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bShouldFadeAudio	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bHoldWhenFinished	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReverseOnFinish	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::Event_StartCameraFade_PC(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Event StartCameraFade PC");

	struct APC_Player_C_Event_StartCameraFade_PC_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool bShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 29 | ElementSize: 1
		bool ReverseOnFinish;			//Offset: 30 | ElementSize: 1
	};
	APC_Player_C_Event_StartCameraFade_PC_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;
	params.ReverseOnFinish = ReverseOnFinish;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Event StopCameraFade PC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Event_StopCameraFade_PC() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Event StopCameraFade PC");

	struct APC_Player_C_Event_StopCameraFade_PC_Params {
	};
	APC_Player_C_Event_StopCameraFade_PC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Event SetManualCameraFade PC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InFadeAmount	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bInFadeAudio	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::Event_SetManualCameraFade_PC(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Event SetManualCameraFade PC");

	struct APC_Player_C_Event_SetManualCameraFade_PC_Params {
		float InFadeAmount;			//Offset: 0 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 4 | ElementSize: 16
		bool bInFadeAudio;			//Offset: 20 | ElementSize: 1
	};
	APC_Player_C_Event_SetManualCameraFade_PC_Params params;
	params.InFadeAmount = InFadeAmount;
	params.Color = Color;
	params.bInFadeAudio = bInFadeAudio;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.FakeMakeLove
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AddPotionEffect_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: EffectDurationTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HealthPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AdditionalMaxHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StaminaMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoodMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WaterMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TurnOffHarmfulPoison	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PoisonPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NightVision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TemperatureTolerance	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkillsReset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DamageMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimalRepel	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalWeight	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::FakeMakeLove(bool AddPotionEffect_, float EffectDurationTime, float HealthPerSecond, float AdditionalMaxHP, float StaminaMultiplier, float FoodMultiplier, float WaterMultiplier, bool TurnOffHarmfulPoison, float PoisonPerSecond, bool NightVision, int32_t TemperatureTolerance, bool SkillsReset, float DamageMultiplier, bool AnimalRepel, float AdditionalWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.FakeMakeLove");

	struct APC_Player_C_FakeMakeLove_Params {
		bool AddPotionEffect_;			//Offset: 0 | ElementSize: 1
		float EffectDurationTime;			//Offset: 4 | ElementSize: 4
		float HealthPerSecond;			//Offset: 8 | ElementSize: 4
		float AdditionalMaxHP;			//Offset: 12 | ElementSize: 4
		float StaminaMultiplier;			//Offset: 16 | ElementSize: 4
		float FoodMultiplier;			//Offset: 20 | ElementSize: 4
		float WaterMultiplier;			//Offset: 24 | ElementSize: 4
		bool TurnOffHarmfulPoison;			//Offset: 28 | ElementSize: 1
		float PoisonPerSecond;			//Offset: 32 | ElementSize: 4
		bool NightVision;			//Offset: 36 | ElementSize: 1
		int32_t TemperatureTolerance;			//Offset: 40 | ElementSize: 4
		bool SkillsReset;			//Offset: 44 | ElementSize: 1
		float DamageMultiplier;			//Offset: 48 | ElementSize: 4
		bool AnimalRepel;			//Offset: 52 | ElementSize: 1
		float AdditionalWeight;			//Offset: 56 | ElementSize: 4
	};
	APC_Player_C_FakeMakeLove_Params params;
	params.AddPotionEffect_ = AddPotionEffect_;
	params.EffectDurationTime = EffectDurationTime;
	params.HealthPerSecond = HealthPerSecond;
	params.AdditionalMaxHP = AdditionalMaxHP;
	params.StaminaMultiplier = StaminaMultiplier;
	params.FoodMultiplier = FoodMultiplier;
	params.WaterMultiplier = WaterMultiplier;
	params.TurnOffHarmfulPoison = TurnOffHarmfulPoison;
	params.PoisonPerSecond = PoisonPerSecond;
	params.NightVision = NightVision;
	params.TemperatureTolerance = TemperatureTolerance;
	params.SkillsReset = SkillsReset;
	params.DamageMultiplier = DamageMultiplier;
	params.AnimalRepel = AnimalRepel;
	params.AdditionalWeight = AdditionalWeight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DialogueEventFade
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FromAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Color	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bShouldFadeAudio	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: bHoldWhenFinished	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ReverseOnFinish	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HoldFadeDuration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DialogueEventFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish, float HoldFadeDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DialogueEventFade");

	struct APC_Player_C_DialogueEventFade_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool bShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 29 | ElementSize: 1
		bool ReverseOnFinish;			//Offset: 30 | ElementSize: 1
		float HoldFadeDuration;			//Offset: 32 | ElementSize: 4
	};
	APC_Player_C_DialogueEventFade_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;
	params.ReverseOnFinish = ReverseOnFinish;
	params.HoldFadeDuration = HoldFadeDuration;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveTheCursorForConsole
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::RemoveTheCursorForConsole() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveTheCursorForConsole");

	struct APC_Player_C_RemoveTheCursorForConsole_Params {
	};
	APC_Player_C_RemoveTheCursorForConsole_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleCharacterCreator
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: RendererType	Type: TEnumAsByte<E_RendererType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreStartingPreset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HeirName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ToggleCharacterCreator(TEnumAsByte<E_RendererType> RendererType, bool IgnoreStartingPreset, struct FName HeirName) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleCharacterCreator");

	struct APC_Player_C_ToggleCharacterCreator_Params {
		TEnumAsByte<E_RendererType> RendererType;			//Offset: 0 | ElementSize: 1
		bool IgnoreStartingPreset;			//Offset: 1 | ElementSize: 1
		struct FName HeirName;			//Offset: 4 | ElementSize: 8
	};
	APC_Player_C_ToggleCharacterCreator_Params params;
	params.RendererType = RendererType;
	params.IgnoreStartingPreset = IgnoreStartingPreset;
	params.HeirName = HeirName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OpenCurrentBookTab_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OpenCurrentBookTab_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OpenCurrentBookTab_BPI");

	struct APC_Player_C_OpenCurrentBookTab_BPI_Params {
	};
	APC_Player_C_OpenCurrentBookTab_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ToggleHitYeetCheat
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Server_ToggleHitYeetCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ToggleHitYeetCheat");

	struct APC_Player_C_Server_ToggleHitYeetCheat_Params {
	};
	APC_Player_C_Server_ToggleHitYeetCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.FailedEOSLogging_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::FailedEOSLogging_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.FailedEOSLogging_BPI");

	struct APC_Player_C_FailedEOSLogging_BPI_Params {
	};
	APC_Player_C_FailedEOSLogging_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionSuccess
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::DestroySessionSuccess() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionSuccess");

	struct APC_Player_C_DestroySessionSuccess_Params {
	};
	APC_Player_C_DestroySessionSuccess_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionFailed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::DestroySessionFailed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionFailed");

	struct APC_Player_C_DestroySessionFailed_Params {
	};
	APC_Player_C_DestroySessionFailed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroyEOSLoggingWindow_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::DestroyEOSLoggingWindow_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroyEOSLoggingWindow_BPI");

	struct APC_Player_C_DestroyEOSLoggingWindow_BPI_Params {
	};
	APC_Player_C_DestroyEOSLoggingWindow_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ShowEOSLoggingWindow_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ShowEOSLoggingWindow_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ShowEOSLoggingWindow_BPI");

	struct APC_Player_C_ShowEOSLoggingWindow_BPI_Params {
	};
	APC_Player_C_ShowEOSLoggingWindow_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LoadCharacterParamsToCreator
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Params	Type: struct FST_PlayerModulesIDs	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::LoadCharacterParamsToCreator(TEnumAsByte<E_Sex> sex, float Age, struct FST_PlayerModulesIDs Params) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LoadCharacterParamsToCreator");

	struct APC_Player_C_LoadCharacterParamsToCreator_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
		float Age;			//Offset: 4 | ElementSize: 4
		struct FST_PlayerModulesIDs Params;			//Offset: 8 | ElementSize: 120
	};
	APC_Player_C_LoadCharacterParamsToCreator_Params params;
	params.sex = sex;
	params.Age = Age;
	params.Params = Params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3");

	struct APC_Player_C_InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_3_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2");

	struct APC_Player_C_InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_2_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaPlayer	Type: class UBinkMediaPlayer*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveCutscene(float Delay, class UBinkMediaPlayer* MediaPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveCutscene");

	struct APC_Player_C_RemoveCutscene_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
		class UBinkMediaPlayer* MediaPlayer;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_RemoveCutscene_Params params;
	params.Delay = Delay;
	params.MediaPlayer = MediaPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StopAutorun
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::StopAutorun() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StopAutorun");

	struct APC_Player_C_StopAutorun_Params {
	};
	APC_Player_C_StopAutorun_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StartAutorun
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::StartAutorun() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartAutorun");

	struct APC_Player_C_StartAutorun_Params {
	};
	APC_Player_C_StartAutorun_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReceiveTick");

	struct APC_Player_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Down_K2Node_InputAxisEvent_4
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Down_K2Node_InputAxisEvent_4(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Down_K2Node_InputAxisEvent_4");

	struct APC_Player_C_Down_K2Node_InputAxisEvent_4_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_Down_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}


/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CheatMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CheatMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CheatMenu");

	struct APC_Player_C_CheatMenu_Params {
	};
	APC_Player_C_CheatMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::PlayerLookAt_Interrupt_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event");

	struct APC_Player_C_PlayerLookAt_Interrupt_Event_Params {
	};
	APC_Player_C_PlayerLookAt_Interrupt_Event_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayerLookAt Event
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: targetActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ResetPitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ErrorTolerance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::PlayerLookAt_Event(class AActor* targetActor, struct FVector TargetLocation, struct FRotator TargetRotation, bool ResetPitch, float interpSpeed, float ErrorTolerance) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayerLookAt Event");

	struct APC_Player_C_PlayerLookAt_Event_Params {
		class AActor* targetActor;			//Offset: 0 | ElementSize: 8
		struct FVector TargetLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 20 | ElementSize: 12
		bool ResetPitch;			//Offset: 32 | ElementSize: 1
		float interpSpeed;			//Offset: 36 | ElementSize: 4
		float ErrorTolerance;			//Offset: 40 | ElementSize: 4
	};
	APC_Player_C_PlayerLookAt_Event_Params params;
	params.targetActor = targetActor;
	params.TargetLocation = TargetLocation;
	params.TargetRotation = TargetRotation;
	params.ResetPitch = ResetPitch;
	params.interpSpeed = interpSpeed;
	params.ErrorTolerance = ErrorTolerance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InterruptPlayerMove
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InterruptPlayerMove() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InterruptPlayerMove");

	struct APC_Player_C_InterruptPlayerMove_Params {
	};
	APC_Player_C_InterruptPlayerMove_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InterruptPlayerLooktAtForDialogue
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InterruptPlayerLooktAtForDialogue() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InterruptPlayerLooktAtForDialogue");

	struct APC_Player_C_InterruptPlayerLooktAtForDialogue_Params {
	};
	APC_Player_C_InterruptPlayerLooktAtForDialogue_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6");

	struct APC_Player_C_InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5");

	struct APC_Player_C_InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReceiveBeginPlay");

	struct APC_Player_C_ReceiveBeginPlay_Params {
	};
	APC_Player_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InitWideCamera
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InitWideCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InitWideCamera");

	struct APC_Player_C_InitWideCamera_Params {
	};
	APC_Player_C_InitWideCamera_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Reset Camera Pitch
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Reset_Camera_Pitch() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Reset Camera Pitch");

	struct APC_Player_C_Reset_Camera_Pitch_Params {
	};
	APC_Player_C_Reset_Camera_Pitch_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaPlayer	Type: class UBinkMediaPlayer*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveIntro(float Delay, class UBinkMediaPlayer* MediaPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveIntro");

	struct APC_Player_C_RemoveIntro_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
		class UBinkMediaPlayer* MediaPlayer;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_RemoveIntro_Params params;
	params.Delay = Delay;
	params.MediaPlayer = MediaPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveMainMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveMainMenu(float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveMainMenu");

	struct APC_Player_C_RemoveMainMenu_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_RemoveMainMenu_Params params;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Left_K2Node_InputAxisEvent_2
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Left_K2Node_InputAxisEvent_2(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Left_K2Node_InputAxisEvent_2");

	struct APC_Player_C_Left_K2Node_InputAxisEvent_2_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_Left_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Backwards_K2Node_InputAxisEvent_1
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Backwards_K2Node_InputAxisEvent_1(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Backwards_K2Node_InputAxisEvent_1");

	struct APC_Player_C_Backwards_K2Node_InputAxisEvent_1_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_Backwards_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");

	struct APC_Player_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Right_K2Node_InputAxisEvent_7
// Flags: BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Right_K2Node_InputAxisEvent_7(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Right_K2Node_InputAxisEvent_7");

	struct APC_Player_C_Right_K2Node_InputAxisEvent_7_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_Right_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnDialogueStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnDialogueStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDialogueStarted");

	struct APC_Player_C_OnDialogueStarted_Params {
	};
	APC_Player_C_OnDialogueStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnDialogueEnded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnDialogueEnded() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDialogueEnded");

	struct APC_Player_C_OnDialogueEnded_Params {
	};
	APC_Player_C_OnDialogueEnded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Player Look At For Dialogue
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: targetActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Player_Look_At_For_Dialogue(class AActor* targetActor, struct FVector TargetLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Player Look At For Dialogue");

	struct APC_Player_C_Player_Look_At_For_Dialogue_Params {
		class AActor* targetActor;			//Offset: 0 | ElementSize: 8
		struct FVector TargetLocation;			//Offset: 8 | ElementSize: 12
	};
	APC_Player_C_Player_Look_At_For_Dialogue_Params params;
	params.targetActor = targetActor;
	params.TargetLocation = TargetLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Player Move For Interaction
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtTarget	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RotateDuringMovement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UsePlayerLookAt	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ResetLookAtPitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::Player_Move_For_Interaction(struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Player Move For Interaction");

	struct APC_Player_C_Player_Move_For_Interaction_Params {
		struct FVector Target;			//Offset: 0 | ElementSize: 12
		struct FVector LookAtTarget;			//Offset: 12 | ElementSize: 12
		bool RotateDuringMovement;			//Offset: 24 | ElementSize: 1
		bool UsePlayerLookAt;			//Offset: 25 | ElementSize: 1
		bool ResetLookAtPitch;			//Offset: 26 | ElementSize: 1
	};
	APC_Player_C_Player_Move_For_Interaction_Params params;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Decrease TP Camera Distance
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Decrease_TP_Camera_Distance() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Decrease TP Camera Distance");

	struct APC_Player_C_Decrease_TP_Camera_Distance_Params {
	};
	APC_Player_C_Decrease_TP_Camera_Distance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Increase TP Camera Distance
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Increase_TP_Camera_Distance() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Increase TP Camera Distance");

	struct APC_Player_C_Increase_TP_Camera_Distance_Params {
	};
	APC_Player_C_Increase_TP_Camera_Distance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnServerAcknowledgedPossession
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: P	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::OnServerAcknowledgedPossession(class APawn* P) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnServerAcknowledgedPossession");

	struct APC_Player_C_OnServerAcknowledgedPossession_Params {
		class APawn* P;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_OnServerAcknowledgedPossession_Params params;
	params.P = P;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ReceivePossess
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: PossessedPawn	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ReceivePossess(class APawn* PossessedPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReceivePossess");

	struct APC_Player_C_ReceivePossess_Params {
		class APawn* PossessedPawn;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_UpdatePeopleNeedOrder
// Flags: Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PeopleNeedDisplayed	Type: TArray<struct FST_PeopleNeedDisplayed>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_UpdatePeopleNeedOrder(const TArray<struct FST_PeopleNeedDisplayed>& PeopleNeedDisplayed) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_UpdatePeopleNeedOrder");

	struct APC_Player_C_Server_UpdatePeopleNeedOrder_Params {
		TArray<struct FST_PeopleNeedDisplayed> PeopleNeedDisplayed;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_Server_UpdatePeopleNeedOrder_Params params;
	params.PeopleNeedDisplayed = PeopleNeedDisplayed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayHeirBornCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::PlayHeirBornCutscene() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayHeirBornCutscene");

	struct APC_Player_C_PlayHeirBornCutscene_Params {
	};
	APC_Player_C_PlayHeirBornCutscene_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnPlayerHeirBorn_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnPlayerHeirBorn_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnPlayerHeirBorn_Client");

	struct APC_Player_C_OnPlayerHeirBorn_Client_Params {
	};
	APC_Player_C_OnPlayerHeirBorn_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_PlayerVoted
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerState	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VoteIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_PlayerVoted(class APlayerState* PlayerState, int32_t VoteIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_PlayerVoted");

	struct APC_Player_C_Server_PlayerVoted_Params {
		class APlayerState* PlayerState;			//Offset: 0 | ElementSize: 8
		int32_t VoteIndex;			//Offset: 8 | ElementSize: 4
	};
	APC_Player_C_Server_PlayerVoted_Params params;
	params.PlayerState = PlayerState;
	params.VoteIndex = VoteIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ProcessByteUpdate_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Byte	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ProcessByteUpdate_Client(class AActor* Actor, unsigned char Byte) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ProcessByteUpdate_Client");

	struct APC_Player_C_ProcessByteUpdate_Client_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		unsigned char Byte;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_ProcessByteUpdate_Client_Params params;
	params.Actor = Actor;
	params.Byte = Byte;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_ReplicateBuildingID
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Client_ReplicateBuildingID(class ABP_MasterBuilding_C* BuildingReference, struct FString ID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_ReplicateBuildingID");

	struct APC_Player_C_Client_ReplicateBuildingID_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		struct FString ID;			//Offset: 8 | ElementSize: 16
	};
	APC_Player_C_Client_ReplicateBuildingID_Params params;
	params.BuildingReference = BuildingReference;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ReplicateBuildingID
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_ReplicateBuildingID(class ABP_MasterBuilding_C* BuildingReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ReplicateBuildingID");

	struct APC_Player_C_Server_ReplicateBuildingID_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_ReplicateBuildingID_Params params;
	params.BuildingReference = BuildingReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_ReplicateToolBuffer
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolBuffer	Type: TArray<struct FST_ToolCost>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ToolActivities	Type: TArray<TEnumAsByte<E_Tools_Activity>>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Client_ReplicateToolBuffer(class ABP_MasterBuilding_C* BuildingReference, const TArray<struct FST_ToolCost>& ToolBuffer, const TArray<TEnumAsByte<E_Tools_Activity>>& ToolActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_ReplicateToolBuffer");

	struct APC_Player_C_Client_ReplicateToolBuffer_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_ToolCost> ToolBuffer;			//Offset: 8 | ElementSize: 16
		TArray<TEnumAsByte<E_Tools_Activity>> ToolActivities;			//Offset: 24 | ElementSize: 16
	};
	APC_Player_C_Client_ReplicateToolBuffer_Params params;
	params.BuildingReference = BuildingReference;
	params.ToolBuffer = ToolBuffer;
	params.ToolActivities = ToolActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ReplicateToolBuffer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_ReplicateToolBuffer(class ABP_MasterBuilding_C* BuildingReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ReplicateToolBuffer");

	struct APC_Player_C_Server_ReplicateToolBuffer_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_ReplicateToolBuffer_Params params;
	params.BuildingReference = BuildingReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_UpdateProductionOnSeasonalManagementChanged
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonalManagement	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::Server_UpdateProductionOnSeasonalManagementChanged(class ABP_MasterBuilding_C* BuildingReference, bool SeasonalManagement) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_UpdateProductionOnSeasonalManagementChanged");

	struct APC_Player_C_Server_UpdateProductionOnSeasonalManagementChanged_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		bool SeasonalManagement;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_Server_UpdateProductionOnSeasonalManagementChanged_Params params;
	params.BuildingReference = BuildingReference;
	params.SeasonalManagement = SeasonalManagement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ChangeAnnualProductionPowerInBuilding
// Flags: Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Decrease_Increase	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Power	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_ChangeAnnualProductionPowerInBuilding(class ABP_MasterBuilding_C* BuildingReference, bool Decrease_Increase, const TArray<int32_t>& Power) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ChangeAnnualProductionPowerInBuilding");

	struct APC_Player_C_Server_ChangeAnnualProductionPowerInBuilding_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		bool Decrease_Increase;			//Offset: 8 | ElementSize: 1
		TArray<int32_t> Power;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_ChangeAnnualProductionPowerInBuilding_Params params;
	params.BuildingReference = BuildingReference;
	params.Decrease_Increase = Decrease_Increase;
	params.Power = Power;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddStatProgress_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddStatProgress_Server(struct FName StatName, int32_t StatValue, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddStatProgress_Server");

	struct APC_Player_C_AddStatProgress_Server_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool TreatAsSet;			//Offset: 12 | ElementSize: 1
	};
	APC_Player_C_AddStatProgress_Server_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockAchievement_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockAchievement_Server(struct FName AchID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockAchievement_Server");

	struct APC_Player_C_UnlockAchievement_Server_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockAchievement_Server_Params params;
	params.AchID = AchID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_UpdateTradeActiveSeasons
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActiveSeasons	Type: TArray<bool>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_UpdateTradeActiveSeasons(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<bool>& ActiveSeasons) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_UpdateTradeActiveSeasons");

	struct APC_Player_C_Server_UpdateTradeActiveSeasons_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		int32_t ItemIndex;			//Offset: 8 | ElementSize: 4
		TArray<bool> ActiveSeasons;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_UpdateTradeActiveSeasons_Params params;
	params.BuildingReference = BuildingReference;
	params.ItemIndex = ItemIndex;
	params.ActiveSeasons = ActiveSeasons;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_UpdateProductionActiveSeasons
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActiveSeasons	Type: TArray<bool>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_UpdateProductionActiveSeasons(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<bool>& ActiveSeasons) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_UpdateProductionActiveSeasons");

	struct APC_Player_C_Server_UpdateProductionActiveSeasons_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		int32_t ItemIndex;			//Offset: 8 | ElementSize: 4
		TArray<bool> ActiveSeasons;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_UpdateProductionActiveSeasons_Params params;
	params.BuildingReference = BuildingReference;
	params.ItemIndex = ItemIndex;
	params.ActiveSeasons = ActiveSeasons;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_IncreaseSeasonalProductionPowerInBuilding
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Power	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_IncreaseSeasonalProductionPowerInBuilding(class ABP_MasterBuilding_C* BuildingReference, int32_t Power, int32_t SeasonIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_IncreaseSeasonalProductionPowerInBuilding");

	struct APC_Player_C_Server_IncreaseSeasonalProductionPowerInBuilding_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		int32_t Power;			//Offset: 8 | ElementSize: 4
		int32_t SeasonIndex;			//Offset: 12 | ElementSize: 4
	};
	APC_Player_C_Server_IncreaseSeasonalProductionPowerInBuilding_Params params;
	params.BuildingReference = BuildingReference;
	params.Power = Power;
	params.SeasonIndex = SeasonIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_UpdateProductionPower
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PowerOfProduction	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_UpdateProductionPower(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<int32_t>& PowerOfProduction) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_UpdateProductionPower");

	struct APC_Player_C_Server_UpdateProductionPower_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		int32_t ItemIndex;			//Offset: 8 | ElementSize: 4
		TArray<int32_t> PowerOfProduction;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_UpdateProductionPower_Params params;
	params.BuildingReference = BuildingReference;
	params.ItemIndex = ItemIndex;
	params.PowerOfProduction = PowerOfProduction;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockPlatformSchemeServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockPlatformSchemeServer(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockPlatformSchemeServer");

	struct APC_Player_C_UnlockPlatformSchemeServer_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockPlatformSchemeServer_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockPlatformSchemeClient
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockPlatformSchemeClient(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockPlatformSchemeClient");

	struct APC_Player_C_UnlockPlatformSchemeClient_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockPlatformSchemeClient_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetCustomName_Field
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldReference	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNickname	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SetCustomName_Field(class ABP_MasterField_C* FieldReference, struct FString CustomName, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetCustomName_Field");

	struct APC_Player_C_Server_SetCustomName_Field_Params {
		class ABP_MasterField_C* FieldReference;			//Offset: 0 | ElementSize: 8
		struct FString CustomName;			//Offset: 8 | ElementSize: 16
		struct FString CustomName_PlayerNickname;			//Offset: 24 | ElementSize: 16
		struct FString CustomName_PlayerNetID;			//Offset: 40 | ElementSize: 16
	};
	APC_Player_C_Server_SetCustomName_Field_Params params;
	params.FieldReference = FieldReference;
	params.CustomName = CustomName;
	params.CustomName_PlayerNickname = CustomName_PlayerNickname;
	params.CustomName_PlayerNetID = CustomName_PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetCustomName_Animal
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalReference	Type: class ABP_HusbandryAI_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNickname	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SetCustomName_Animal(class ABP_HusbandryAI_C* AnimalReference, struct FString CustomName, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetCustomName_Animal");

	struct APC_Player_C_Server_SetCustomName_Animal_Params {
		class ABP_HusbandryAI_C* AnimalReference;			//Offset: 0 | ElementSize: 8
		struct FString CustomName;			//Offset: 8 | ElementSize: 16
		struct FString CustomName_PlayerNickname;			//Offset: 24 | ElementSize: 16
		struct FString CustomName_PlayerNetID;			//Offset: 40 | ElementSize: 16
	};
	APC_Player_C_Server_SetCustomName_Animal_Params params;
	params.AnimalReference = AnimalReference;
	params.CustomName = CustomName;
	params.CustomName_PlayerNickname = CustomName_PlayerNickname;
	params.CustomName_PlayerNetID = CustomName_PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetCustomName_Building
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNickname	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SetCustomName_Building(class ABP_MasterBuilding_C* BuildingReference, struct FString CustomName, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetCustomName_Building");

	struct APC_Player_C_Server_SetCustomName_Building_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		struct FString CustomName;			//Offset: 8 | ElementSize: 16
		struct FString CustomName_PlayerNickname;			//Offset: 24 | ElementSize: 16
		struct FString CustomName_PlayerNetID;			//Offset: 40 | ElementSize: 16
	};
	APC_Player_C_Server_SetCustomName_Building_Params params;
	params.BuildingReference = BuildingReference;
	params.CustomName = CustomName;
	params.CustomName_PlayerNickname = CustomName_PlayerNickname;
	params.CustomName_PlayerNetID = CustomName_PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ClearSyncedConditions_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: LastIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ClearSyncedConditions_Server(int32_t LastIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ClearSyncedConditions_Server");

	struct APC_Player_C_ClearSyncedConditions_Server_Params {
		int32_t LastIndex;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_ClearSyncedConditions_Server_Params params;
	params.LastIndex = LastIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CallOnAllConditionsProcessed_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CallOnAllConditionsProcessed_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CallOnAllConditionsProcessed_Client");

	struct APC_Player_C_CallOnAllConditionsProcessed_Client_Params {
	};
	APC_Player_C_CallOnAllConditionsProcessed_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetGiftGiven
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerNetID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SetGiftGiven(class ABP_BaseCharacter_C* NPC, bool Value, const struct FString& PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetGiftGiven");

	struct APC_Player_C_Server_SetGiftGiven_Params {
		class ABP_BaseCharacter_C* NPC;			//Offset: 0 | ElementSize: 8
		bool Value;			//Offset: 8 | ElementSize: 1
		struct FString PlayerNetID;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_SetGiftGiven_Params params;
	params.NPC = NPC;
	params.Value = Value;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetShopType
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShopType	Type: TEnumAsByte<E_ShopType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SetShopType(class ABP_MasterBuilding_C* BuildingReference, TEnumAsByte<E_ShopType> ShopType) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetShopType");

	struct APC_Player_C_Server_SetShopType_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_ShopType> ShopType;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_Server_SetShopType_Params params;
	params.BuildingReference = BuildingReference;
	params.ShopType = ShopType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_RemoveAnimalFromSystems
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalReference	Type: class ABP_HusbandryAI_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_RemoveAnimalFromSystems(class ABP_HusbandryAI_C* AnimalReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_RemoveAnimalFromSystems");

	struct APC_Player_C_Server_RemoveAnimalFromSystems_Params {
		class ABP_HusbandryAI_C* AnimalReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_RemoveAnimalFromSystems_Params params;
	params.AnimalReference = AnimalReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_UpdateTradePower
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PowerOfTrade	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_UpdateTradePower(class ABP_MasterBuilding_C* BuildingReference, int32_t ItemIndex, const TArray<int32_t>& PowerOfTrade) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_UpdateTradePower");

	struct APC_Player_C_Server_UpdateTradePower_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		int32_t ItemIndex;			//Offset: 8 | ElementSize: 4
		TArray<int32_t> PowerOfTrade;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_UpdateTradePower_Params params;
	params.BuildingReference = BuildingReference;
	params.ItemIndex = ItemIndex;
	params.PowerOfTrade = PowerOfTrade;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_ReplicateCurrentTrade
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Seasons_Spring	Type: TArray<bool>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Seasons_Summer	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Seasons_Autumn	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Seasons_Winter	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Spring	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Summer	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Autumn	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Winter	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SeasonalPower	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Progresses	Type: TArray<float>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Spring	Type: TArray<float>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Summer	Type: TArray<float>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Autumn	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Winter	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Client_ReplicateCurrentTrade(class ABP_MasterBuilding_C* BuildingReference, const TArray<bool>& Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, const TArray<int32_t>& Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, const TArray<int32_t>& SeasonalPower, const TArray<float>& Progresses, const TArray<float>& NumbersPerHour_Spring, const TArray<float>& NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_ReplicateCurrentTrade");

	struct APC_Player_C_Client_ReplicateCurrentTrade_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		TArray<bool> Seasons_Spring;			//Offset: 8 | ElementSize: 16
		TArray<bool> Seasons_Summer;			//Offset: 24 | ElementSize: 16
		TArray<bool> Seasons_Autumn;			//Offset: 40 | ElementSize: 16
		TArray<bool> Seasons_Winter;			//Offset: 56 | ElementSize: 16
		TArray<int32_t> Powers_Spring;			//Offset: 72 | ElementSize: 16
		TArray<int32_t> Powers_Summer;			//Offset: 88 | ElementSize: 16
		TArray<int32_t> Powers_Autumn;			//Offset: 104 | ElementSize: 16
		TArray<int32_t> Powers_Winter;			//Offset: 120 | ElementSize: 16
		TArray<int32_t> SeasonalPower;			//Offset: 136 | ElementSize: 16
		TArray<float> Progresses;			//Offset: 152 | ElementSize: 16
		TArray<float> NumbersPerHour_Spring;			//Offset: 168 | ElementSize: 16
		TArray<float> NumbersPerHour_Summer;			//Offset: 184 | ElementSize: 16
		TArray<float> NumbersPerHour_Autumn;			//Offset: 200 | ElementSize: 16
		TArray<float> NumbersPerHour_Winter;			//Offset: 216 | ElementSize: 16
	};
	APC_Player_C_Client_ReplicateCurrentTrade_Params params;
	params.BuildingReference = BuildingReference;
	params.Seasons_Spring = Seasons_Spring;
	params.Powers_Spring = Powers_Spring;
	params.SeasonalPower = SeasonalPower;
	params.Progresses = Progresses;
	params.NumbersPerHour_Spring = NumbersPerHour_Spring;
	params.NumbersPerHour_Summer = NumbersPerHour_Summer;

	UObject::ProcessEvent(fn, &params);
	if (Seasons_Summer != nullptr)
		*Seasons_Summer = params.Seasons_Summer;
	if (Seasons_Autumn != nullptr)
		*Seasons_Autumn = params.Seasons_Autumn;
	if (Seasons_Winter != nullptr)
		*Seasons_Winter = params.Seasons_Winter;
	if (Powers_Summer != nullptr)
		*Powers_Summer = params.Powers_Summer;
	if (Powers_Autumn != nullptr)
		*Powers_Autumn = params.Powers_Autumn;
	if (Powers_Winter != nullptr)
		*Powers_Winter = params.Powers_Winter;
	if (NumbersPerHour_Autumn != nullptr)
		*NumbersPerHour_Autumn = params.NumbersPerHour_Autumn;
	if (NumbersPerHour_Winter != nullptr)
		*NumbersPerHour_Winter = params.NumbersPerHour_Winter;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ReplicateCurrentTrade
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_ReplicateCurrentTrade(class ABP_MasterBuilding_C* BuildingReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ReplicateCurrentTrade");

	struct APC_Player_C_Server_ReplicateCurrentTrade_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_ReplicateCurrentTrade_Params params;
	params.BuildingReference = BuildingReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_DecreaseSeasonalProductionPowerInBuilding
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Power	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_DecreaseSeasonalProductionPowerInBuilding(class ABP_MasterBuilding_C* BuildingReference, int32_t Power, int32_t SeasonIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_DecreaseSeasonalProductionPowerInBuilding");

	struct APC_Player_C_Server_DecreaseSeasonalProductionPowerInBuilding_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		int32_t Power;			//Offset: 8 | ElementSize: 4
		int32_t SeasonIndex;			//Offset: 12 | ElementSize: 4
	};
	APC_Player_C_Server_DecreaseSeasonalProductionPowerInBuilding_Params params;
	params.BuildingReference = BuildingReference;
	params.Power = Power;
	params.SeasonIndex = SeasonIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_ReplicateCurrentWorkersProduction
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Seasons_Spring	Type: TArray<bool>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Seasons_Summer	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Seasons_Autumn	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Seasons_Winter	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Spring	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Summer	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Autumn	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Powers_Winter	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SeasonalPower	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Progresses	Type: TArray<float>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Spring	Type: TArray<float>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Summer	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Autumn	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NumbersPerHour_Winter	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Client_ReplicateCurrentWorkersProduction(class ABP_MasterBuilding_C* BuildingReference, const TArray<bool>& Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, const TArray<int32_t>& Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, const TArray<int32_t>& SeasonalPower, const TArray<float>& Progresses, const TArray<float>& NumbersPerHour_Spring, TArray<float>* NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_ReplicateCurrentWorkersProduction");

	struct APC_Player_C_Client_ReplicateCurrentWorkersProduction_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
		TArray<bool> Seasons_Spring;			//Offset: 8 | ElementSize: 16
		TArray<bool> Seasons_Summer;			//Offset: 24 | ElementSize: 16
		TArray<bool> Seasons_Autumn;			//Offset: 40 | ElementSize: 16
		TArray<bool> Seasons_Winter;			//Offset: 56 | ElementSize: 16
		TArray<int32_t> Powers_Spring;			//Offset: 72 | ElementSize: 16
		TArray<int32_t> Powers_Summer;			//Offset: 88 | ElementSize: 16
		TArray<int32_t> Powers_Autumn;			//Offset: 104 | ElementSize: 16
		TArray<int32_t> Powers_Winter;			//Offset: 120 | ElementSize: 16
		TArray<int32_t> SeasonalPower;			//Offset: 136 | ElementSize: 16
		TArray<float> Progresses;			//Offset: 152 | ElementSize: 16
		TArray<float> NumbersPerHour_Spring;			//Offset: 168 | ElementSize: 16
		TArray<float> NumbersPerHour_Summer;			//Offset: 184 | ElementSize: 16
		TArray<float> NumbersPerHour_Autumn;			//Offset: 200 | ElementSize: 16
		TArray<float> NumbersPerHour_Winter;			//Offset: 216 | ElementSize: 16
	};
	APC_Player_C_Client_ReplicateCurrentWorkersProduction_Params params;
	params.BuildingReference = BuildingReference;
	params.Seasons_Spring = Seasons_Spring;
	params.Powers_Spring = Powers_Spring;
	params.SeasonalPower = SeasonalPower;
	params.Progresses = Progresses;
	params.NumbersPerHour_Spring = NumbersPerHour_Spring;

	UObject::ProcessEvent(fn, &params);
	if (Seasons_Summer != nullptr)
		*Seasons_Summer = params.Seasons_Summer;
	if (Seasons_Autumn != nullptr)
		*Seasons_Autumn = params.Seasons_Autumn;
	if (Seasons_Winter != nullptr)
		*Seasons_Winter = params.Seasons_Winter;
	if (Powers_Summer != nullptr)
		*Powers_Summer = params.Powers_Summer;
	if (Powers_Autumn != nullptr)
		*Powers_Autumn = params.Powers_Autumn;
	if (Powers_Winter != nullptr)
		*Powers_Winter = params.Powers_Winter;
	if (NumbersPerHour_Summer != nullptr)
		*NumbersPerHour_Summer = params.NumbersPerHour_Summer;
	if (NumbersPerHour_Autumn != nullptr)
		*NumbersPerHour_Autumn = params.NumbersPerHour_Autumn;
	if (NumbersPerHour_Winter != nullptr)
		*NumbersPerHour_Winter = params.NumbersPerHour_Winter;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ReplicateCurrentWorkersProduction
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_ReplicateCurrentWorkersProduction(class ABP_MasterBuilding_C* BuildingReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ReplicateCurrentWorkersProduction");

	struct APC_Player_C_Server_ReplicateCurrentWorkersProduction_Params {
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_ReplicateCurrentWorkersProduction_Params params;
	params.BuildingReference = BuildingReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_CheckIfUsingManagement
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Client_CheckIfUsingManagement() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_CheckIfUsingManagement");

	struct APC_Player_C_Client_CheckIfUsingManagement_Params {
	};
	APC_Player_C_Client_CheckIfUsingManagement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetPlayerCurrentlyUsingManagement
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerCurrentlyUsingManagement	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReleaseManagement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::Server_SetPlayerCurrentlyUsingManagement(class APlayerState* PlayerCurrentlyUsingManagement, bool ReleaseManagement) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetPlayerCurrentlyUsingManagement");

	struct APC_Player_C_Server_SetPlayerCurrentlyUsingManagement_Params {
		class APlayerState* PlayerCurrentlyUsingManagement;			//Offset: 0 | ElementSize: 8
		bool ReleaseManagement;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_Server_SetPlayerCurrentlyUsingManagement_Params params;
	params.PlayerCurrentlyUsingManagement = PlayerCurrentlyUsingManagement;
	params.ReleaseManagement = ReleaseManagement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_CheckIfUsingManagement
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Server_CheckIfUsingManagement() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_CheckIfUsingManagement");

	struct APC_Player_C_Server_CheckIfUsingManagement_Params {
	};
	APC_Player_C_Server_CheckIfUsingManagement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SetChunkTargetSeedForField
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldReference	Type: class ABP_MasterField_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewTypes	Type: TArray<ESeeds>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ChunkIDs	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SetChunkTargetSeedForField(class ABP_MasterField_C* FieldReference, const TArray<ESeeds>& NewTypes, const TArray<int32_t>& ChunkIDs, TEnumAsByte<E_Seasons> Season) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SetChunkTargetSeedForField");

	struct APC_Player_C_Server_SetChunkTargetSeedForField_Params {
		class ABP_MasterField_C* FieldReference;			//Offset: 0 | ElementSize: 8
		TArray<ESeeds> NewTypes;			//Offset: 8 | ElementSize: 16
		TArray<int32_t> ChunkIDs;			//Offset: 24 | ElementSize: 16
		TEnumAsByte<E_Seasons> Season;			//Offset: 40 | ElementSize: 1
	};
	APC_Player_C_Server_SetChunkTargetSeedForField_Params params;
	params.FieldReference = FieldReference;
	params.NewTypes = NewTypes;
	params.ChunkIDs = ChunkIDs;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_RemoveAnimal
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalShelter	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_RemoveAnimal(class ABP_MasterBuilding_C* AnimalShelter, class ABP_AnimalBase_C*& Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_RemoveAnimal");

	struct APC_Player_C_Server_RemoveAnimal_Params {
		class ABP_MasterBuilding_C* AnimalShelter;			//Offset: 0 | ElementSize: 8
		class ABP_AnimalBase_C* Animal;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_Server_RemoveAnimal_Params params;
	params.AnimalShelter = AnimalShelter;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_RemoveFamilyFromHouse
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_RemoveFamilyFromHouse(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_RemoveFamilyFromHouse");

	struct APC_Player_C_Server_RemoveFamilyFromHouse_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_RemoveFamilyFromHouse_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_Assignment_Animal_AnimalShelter
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_HusbandryAI_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimalShelter	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_Assignment_Animal_AnimalShelter(class ABP_HusbandryAI_C* Animal, class ABP_MasterBuilding_C* AnimalShelter) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_Assignment_Animal_AnimalShelter");

	struct APC_Player_C_Server_Assignment_Animal_AnimalShelter_Params {
		class ABP_HusbandryAI_C* Animal;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* AnimalShelter;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_Server_Assignment_Animal_AnimalShelter_Params params;
	params.Animal = Animal;
	params.AnimalShelter = AnimalShelter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_Assignment_AnimalShelter_Animal
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_HusbandryAI_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimalShelter	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_Assignment_AnimalShelter_Animal(class ABP_HusbandryAI_C* Animal, class ABP_MasterBuilding_C* AnimalShelter) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_Assignment_AnimalShelter_Animal");

	struct APC_Player_C_Server_Assignment_AnimalShelter_Animal_Params {
		class ABP_HusbandryAI_C* Animal;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* AnimalShelter;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_Server_Assignment_AnimalShelter_Animal_Params params;
	params.Animal = Animal;
	params.AnimalShelter = AnimalShelter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_SwapHouses
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: CharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HouseReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_SwapHouses(class ABP_BaseCharacter_C* CharacterReference, class ABP_MasterBuilding_C* HouseReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_SwapHouses");

	struct APC_Player_C_Server_SwapHouses_Params {
		class ABP_BaseCharacter_C* CharacterReference;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* HouseReference;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_Server_SwapHouses_Params params;
	params.CharacterReference = CharacterReference;
	params.HouseReference = HouseReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_RemoveNPCFromWorkplace
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_RemoveNPCFromWorkplace(class ABP_NPC_C* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_RemoveNPCFromWorkplace");

	struct APC_Player_C_Server_RemoveNPCFromWorkplace_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_RemoveNPCFromWorkplace_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_Assignment_Workplace_NPC
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Workplace	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherNPC	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_Assignment_Workplace_NPC(class ABP_NPC_C* NPC, class ABP_MasterBuilding_C* Workplace, class ABP_BaseCharacter_C* OtherNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_Assignment_Workplace_NPC");

	struct APC_Player_C_Server_Assignment_Workplace_NPC_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* Workplace;			//Offset: 8 | ElementSize: 8
		class ABP_BaseCharacter_C* OtherNPC;			//Offset: 16 | ElementSize: 8
	};
	APC_Player_C_Server_Assignment_Workplace_NPC_Params params;
	params.NPC = NPC;
	params.Workplace = Workplace;
	params.OtherNPC = OtherNPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_Assignment_Workplace_NPC
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Client_Assignment_Workplace_NPC() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_Assignment_Workplace_NPC");

	struct APC_Player_C_Client_Assignment_Workplace_NPC_Params {
	};
	APC_Player_C_Client_Assignment_Workplace_NPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_Assignment_NPC_Workplace
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Client_Assignment_NPC_Workplace() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_Assignment_NPC_Workplace");

	struct APC_Player_C_Client_Assignment_NPC_Workplace_Params {
	};
	APC_Player_C_Client_Assignment_NPC_Workplace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_Assignment_NPC_Workplace
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Workplace	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherNPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_Assignment_NPC_Workplace(class ABP_NPC_C* NPC, class ABP_MasterBuilding_C* Workplace, class ABP_NPC_C* OtherNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_Assignment_NPC_Workplace");

	struct APC_Player_C_Server_Assignment_NPC_Workplace_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuilding_C* Workplace;			//Offset: 8 | ElementSize: 8
		class ABP_NPC_C* OtherNPC;			//Offset: 16 | ElementSize: 8
	};
	APC_Player_C_Server_Assignment_NPC_Workplace_Params params;
	params.NPC = NPC;
	params.Workplace = Workplace;
	params.OtherNPC = OtherNPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnPawnLeavingGame
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnPawnLeavingGame() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnPawnLeavingGame");

	struct APC_Player_C_OnPawnLeavingGame_Params {
	};
	APC_Player_C_OnPawnLeavingGame_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_IncreaseAffectionOfNPC
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerNetID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_IncreaseAffectionOfNPC(class ABP_BaseCharacter_C* NPC, int32_t Value, const struct FString& PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_IncreaseAffectionOfNPC");

	struct APC_Player_C_Server_IncreaseAffectionOfNPC_Params {
		class ABP_BaseCharacter_C* NPC;			//Offset: 0 | ElementSize: 8
		int32_t Value;			//Offset: 8 | ElementSize: 4
		struct FString PlayerNetID;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_Server_IncreaseAffectionOfNPC_Params params;
	params.NPC = NPC;
	params.Value = Value;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ProcessSkeletalMontagesUpdate_Client
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontagesData	Type: TArray<struct FMontageDataForRep>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::ProcessSkeletalMontagesUpdate_Client(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ProcessSkeletalMontagesUpdate_Client");

	struct APC_Player_C_ProcessSkeletalMontagesUpdate_Client_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		TArray<struct FMontageDataForRep> MontagesData;			//Offset: 8 | ElementSize: 16
	};
	APC_Player_C_ProcessSkeletalMontagesUpdate_Client_Params params;
	params.Actor = Actor;
	params.MontagesData = MontagesData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RequestActorUpdate_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RequestActorUpdate_Server(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RequestActorUpdate_Server");

	struct APC_Player_C_RequestActorUpdate_Server_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RequestActorUpdate_Server_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddStatProgress_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddStatProgress_Client(struct FName StatName, int32_t StatValue, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddStatProgress_Client");

	struct APC_Player_C_AddStatProgress_Client_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool TreatAsSet;			//Offset: 12 | ElementSize: 1
	};
	APC_Player_C_AddStatProgress_Client_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockAchievement_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockAchievement_Client(struct FName AchID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockAchievement_Client");

	struct APC_Player_C_UnlockAchievement_Client_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockAchievement_Client_Params params;
	params.AchID = AchID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_FillAffectionsForAllPlayers
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Server_FillAffectionsForAllPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_FillAffectionsForAllPlayers");

	struct APC_Player_C_Server_FillAffectionsForAllPlayers_Params {
	};
	APC_Player_C_Server_FillAffectionsForAllPlayers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveNPCsConversationWidget
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveNPCsConversationWidget(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveNPCsConversationWidget");

	struct APC_Player_C_RemoveNPCsConversationWidget_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RemoveNPCsConversationWidget_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveNPCsConversation_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveNPCsConversation_Client(class ABP_NPC_C* NPC_Reference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveNPCsConversation_Client");

	struct APC_Player_C_RemoveNPCsConversation_Client_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RemoveNPCsConversation_Client_Params params;
	params.NPC_Reference = NPC_Reference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveNPCsConversation_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveNPCsConversation_Server(class ABP_NPC_C* NPC_Reference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveNPCsConversation_Server");

	struct APC_Player_C_RemoveNPCsConversation_Server_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RemoveNPCsConversation_Server_Params params;
	params.NPC_Reference = NPC_Reference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddNPCsConversation_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Text	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: IsQuest	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddNPCsConversation_Client(class ABP_NPC_C* NPC_Reference, struct FText Text, bool IsQuest) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddNPCsConversation_Client");

	struct APC_Player_C_AddNPCsConversation_Client_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
		struct FText Text;			//Offset: 8 | ElementSize: 24
		bool IsQuest;			//Offset: 32 | ElementSize: 1
	};
	APC_Player_C_AddNPCsConversation_Client_Params params;
	params.NPC_Reference = NPC_Reference;
	params.Text = Text;
	params.IsQuest = IsQuest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddNPCsConversation_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Text	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: IsQuest	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddNPCsConversation_Server(class ABP_NPC_C* NPC_Reference, struct FText Text, bool IsQuest) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddNPCsConversation_Server");

	struct APC_Player_C_AddNPCsConversation_Server_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
		struct FText Text;			//Offset: 8 | ElementSize: 24
		bool IsQuest;			//Offset: 32 | ElementSize: 1
	};
	APC_Player_C_AddNPCsConversation_Server_Params params;
	params.NPC_Reference = NPC_Reference;
	params.Text = Text;
	params.IsQuest = IsQuest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_UpdatePlayerColor
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Player	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Client_UpdatePlayerColor(struct FLinearColor NewColor, class ABP_MD_PlayerState_C* Player) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_UpdatePlayerColor");

	struct APC_Player_C_Client_UpdatePlayerColor_Params {
		struct FLinearColor NewColor;			//Offset: 0 | ElementSize: 16
		class ABP_MD_PlayerState_C* Player;			//Offset: 16 | ElementSize: 8
	};
	APC_Player_C_Client_UpdatePlayerColor_Params params;
	params.NewColor = NewColor;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_ChangePlayerColor
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewColor	Type: struct FLinearColor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_ChangePlayerColor(struct FLinearColor NewColor, class ABP_MD_PlayerState_C* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_ChangePlayerColor");

	struct APC_Player_C_Server_ChangePlayerColor_Params {
		struct FLinearColor NewColor;			//Offset: 0 | ElementSize: 16
		class ABP_MD_PlayerState_C* Target;			//Offset: 16 | ElementSize: 8
	};
	APC_Player_C_Server_ChangePlayerColor_Params params;
	params.NewColor = NewColor;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_CreateSound2D
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_CreateSound2D(class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_CreateSound2D");

	struct APC_Player_C_Server_CreateSound2D_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_CreateSound2D_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateSound2DAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateSound2DAllPlayers_BPI(class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateSound2DAllPlayers_BPI");

	struct APC_Player_C_CreateSound2DAllPlayers_BPI_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_CreateSound2DAllPlayers_BPI_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_CreateSound2D
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Client_CreateSound2D(class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_CreateSound2D");

	struct APC_Player_C_Client_CreateSound2D_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Client_CreateSound2D_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateSound2D_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateSound2D_BPI(class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateSound2D_BPI");

	struct APC_Player_C_CreateSound2D_BPI_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_CreateSound2D_BPI_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Client_UpdateChat
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerNick	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: MessageContent	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Sender	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Client_UpdateChat(struct FText PlayerNick, struct FText MessageContent, class ABP_PlayerCharacter_C* Sender, struct FString PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Client_UpdateChat");

	struct APC_Player_C_Client_UpdateChat_Params {
		struct FText PlayerNick;			//Offset: 0 | ElementSize: 24
		struct FText MessageContent;			//Offset: 24 | ElementSize: 24
		class ABP_PlayerCharacter_C* Sender;			//Offset: 48 | ElementSize: 8
		struct FString PlayerNetID;			//Offset: 56 | ElementSize: 16
	};
	APC_Player_C_Client_UpdateChat_Params params;
	params.PlayerNick = PlayerNick;
	params.MessageContent = MessageContent;
	params.Sender = Sender;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server_GetChatMessage
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TextToSend	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: BlockedUsers	Type: TArray<struct FString>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Server_GetChatMessage(struct FText TextToSend, const TArray<struct FString>& BlockedUsers) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server_GetChatMessage");

	struct APC_Player_C_Server_GetChatMessage_Params {
		struct FText TextToSend;			//Offset: 0 | ElementSize: 24
		TArray<struct FString> BlockedUsers;			//Offset: 24 | ElementSize: 16
	};
	APC_Player_C_Server_GetChatMessage_Params params;
	params.TextToSend = TextToSend;
	params.BlockedUsers = BlockedUsers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveChatterWidget
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveChatterWidget(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveChatterWidget");

	struct APC_Player_C_RemoveChatterWidget_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RemoveChatterWidget_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetHighlightedDialogue_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HighlightedDialogue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SetHighlightedDialogue_Server(class ABP_NPC_C* NPCReference, int32_t HighlightedDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetHighlightedDialogue_Server");

	struct APC_Player_C_SetHighlightedDialogue_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		int32_t HighlightedDialogue;			//Offset: 8 | ElementSize: 4
	};
	APC_Player_C_SetHighlightedDialogue_Server_Params params;
	params.NPCReference = NPCReference;
	params.HighlightedDialogue = HighlightedDialogue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ClearCurrentDilogueOptions_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ClearCurrentDilogueOptions_Server(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ClearCurrentDilogueOptions_Server");

	struct APC_Player_C_ClearCurrentDilogueOptions_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ClearCurrentDilogueOptions_Server_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddCurrentDialogueOptionEntry_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DialogueOptionText	Type: struct FText	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::AddCurrentDialogueOptionEntry_Server(class ABP_NPC_C* NPCReference, const struct FText& DialogueOptionText) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddCurrentDialogueOptionEntry_Server");

	struct APC_Player_C_AddCurrentDialogueOptionEntry_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		struct FText DialogueOptionText;			//Offset: 8 | ElementSize: 24
	};
	APC_Player_C_AddCurrentDialogueOptionEntry_Server_Params params;
	params.NPCReference = NPCReference;
	params.DialogueOptionText = DialogueOptionText;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ClearDialogueHistory_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ClearDialogueHistory_Server(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ClearDialogueHistory_Server");

	struct APC_Player_C_ClearDialogueHistory_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ClearDialogueHistory_Server_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddDialogueHistoryEntry_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DialogueHistoryText	Type: struct FText	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: DialogueHistoryIsPlayer	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddDialogueHistoryEntry_Server(class ABP_NPC_C* NPCReference, const struct FText& DialogueHistoryText, const bool& DialogueHistoryIsPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddDialogueHistoryEntry_Server");

	struct APC_Player_C_AddDialogueHistoryEntry_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		struct FText DialogueHistoryText;			//Offset: 8 | ElementSize: 24
		bool DialogueHistoryIsPlayer;			//Offset: 32 | ElementSize: 1
	};
	APC_Player_C_AddDialogueHistoryEntry_Server_Params params;
	params.NPCReference = NPCReference;
	params.DialogueHistoryText = DialogueHistoryText;
	params.DialogueHistoryIsPlayer = DialogueHistoryIsPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.TryToCreateHUDTutorial_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFullscreen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::TryToCreateHUDTutorial_Server(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.TryToCreateHUDTutorial_Server");

	struct APC_Player_C_TryToCreateHUDTutorial_Server_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool IsFullscreen;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_TryToCreateHUDTutorial_Server_Params params;
	params.Tutorial = Tutorial;
	params.IsFullscreen = IsFullscreen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.TryToCreateHUDTutorial_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFullscreen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::TryToCreateHUDTutorial_Client(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.TryToCreateHUDTutorial_Client");

	struct APC_Player_C_TryToCreateHUDTutorial_Client_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool IsFullscreen;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_TryToCreateHUDTutorial_Client_Params params;
	params.Tutorial = Tutorial;
	params.IsFullscreen = IsFullscreen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.TryToCreateHUDTutorialAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFullscreen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::TryToCreateHUDTutorialAllPlayers_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.TryToCreateHUDTutorialAllPlayers_BPI");

	struct APC_Player_C_TryToCreateHUDTutorialAllPlayers_BPI_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool IsFullscreen;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_TryToCreateHUDTutorialAllPlayers_BPI_Params params;
	params.Tutorial = Tutorial;
	params.IsFullscreen = IsFullscreen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.TryToCreateHUDTutorial_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tutorial	Type: TEnumAsByte<E_Tutorials>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFullscreen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::TryToCreateHUDTutorial_BPI(TEnumAsByte<E_Tutorials> Tutorial, bool IsFullscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.TryToCreateHUDTutorial_BPI");

	struct APC_Player_C_TryToCreateHUDTutorial_BPI_Params {
		TEnumAsByte<E_Tutorials> Tutorial;			//Offset: 0 | ElementSize: 1
		bool IsFullscreen;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_TryToCreateHUDTutorial_BPI_Params params;
	params.Tutorial = Tutorial;
	params.IsFullscreen = IsFullscreen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveFinishedConditions_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Indexes	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::RemoveFinishedConditions_Server(const TArray<int32_t>& Indexes) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveFinishedConditions_Server");

	struct APC_Player_C_RemoveFinishedConditions_Server_Params {
		TArray<int32_t> Indexes;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_RemoveFinishedConditions_Server_Params params;
	params.Indexes = Indexes;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnRepDialogueConditionsSyncState
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnRepDialogueConditionsSyncState() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRepDialogueConditionsSyncState");

	struct APC_Player_C_OnRepDialogueConditionsSyncState_Params {
	};
	APC_Player_C_OnRepDialogueConditionsSyncState_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RunDialogueConditions_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dialogue	Type: TAssetPtr<class UDialogue>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NodesToCheck	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCActor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RunDialogueConditions_Server(TAssetPtr<class UDialogue> Dialogue, const TArray<int32_t>& NodesToCheck, class AActor* NPCActor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RunDialogueConditions_Server");

	struct APC_Player_C_RunDialogueConditions_Server_Params {
		TAssetPtr<class UDialogue> Dialogue;			//Offset: 0 | ElementSize: 40
		TArray<int32_t> NodesToCheck;			//Offset: 40 | ElementSize: 16
		class AActor* NPCActor;			//Offset: 56 | ElementSize: 8
	};
	APC_Player_C_RunDialogueConditions_Server_Params params;
	params.Dialogue = Dialogue;
	params.NodesToCheck = NodesToCheck;
	params.NPCActor = NPCActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StartQuestNotification_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::StartQuestNotification_Client(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartQuestNotification_Client");

	struct APC_Player_C_StartQuestNotification_Client_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 24 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 28 | ElementSize: 4
	};
	APC_Player_C_StartQuestNotification_Client_Params params;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StartQuestNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::StartQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartQuestNotificationAllPlayers_BPI");

	struct APC_Player_C_StartQuestNotificationAllPlayers_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 24 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 28 | ElementSize: 4
	};
	APC_Player_C_StartQuestNotificationAllPlayers_BPI_Params params;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StartQuestNotification_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::StartQuestNotification_Server(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartQuestNotification_Server");

	struct APC_Player_C_StartQuestNotification_Server_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 24 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 28 | ElementSize: 4
	};
	APC_Player_C_StartQuestNotification_Server_Params params;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StartQuestNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Category	Type: TEnumAsByte<E_QuestCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: QuestNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::StartQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestCategories> Category, int32_t QuestNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartQuestNotification_BPI");

	struct APC_Player_C_StartQuestNotification_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestCategories> Category;			//Offset: 24 | ElementSize: 1
		int32_t QuestNumber;			//Offset: 28 | ElementSize: 4
	};
	APC_Player_C_StartQuestNotification_BPI_Params params;
	params.QuestName = QuestName;
	params.Category = Category;
	params.QuestNumber = QuestNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateQuestNotification_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateQuestNotification_Client(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateQuestNotification_Client");

	struct APC_Player_C_CreateQuestNotification_Client_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 24 | ElementSize: 1
		bool isUpdated;			//Offset: 25 | ElementSize: 1
		bool IsCanceled;			//Offset: 26 | ElementSize: 1
	};
	APC_Player_C_CreateQuestNotification_Client_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateQuestNotification_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateQuestNotification_Server(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateQuestNotification_Server");

	struct APC_Player_C_CreateQuestNotification_Server_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 24 | ElementSize: 1
		bool isUpdated;			//Offset: 25 | ElementSize: 1
		bool IsCanceled;			//Offset: 26 | ElementSize: 1
	};
	APC_Player_C_CreateQuestNotification_Server_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateQuestNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateQuestNotification_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateQuestNotification_BPI");

	struct APC_Player_C_CreateQuestNotification_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 24 | ElementSize: 1
		bool isUpdated;			//Offset: 25 | ElementSize: 1
		bool IsCanceled;			//Offset: 26 | ElementSize: 1
	};
	APC_Player_C_CreateQuestNotification_BPI_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateQuestNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestName	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: QuestState	Type: TEnumAsByte<E_QuestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: isUpdated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCanceled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateQuestNotificationAllPlayers_BPI(struct FText QuestName, TEnumAsByte<E_QuestState> QuestState, bool isUpdated, bool IsCanceled) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateQuestNotificationAllPlayers_BPI");

	struct APC_Player_C_CreateQuestNotificationAllPlayers_BPI_Params {
		struct FText QuestName;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_QuestState> QuestState;			//Offset: 24 | ElementSize: 1
		bool isUpdated;			//Offset: 25 | ElementSize: 1
		bool IsCanceled;			//Offset: 26 | ElementSize: 1
	};
	APC_Player_C_CreateQuestNotificationAllPlayers_BPI_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.IsCanceled = IsCanceled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateMiddleNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NotificationHeadline	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BigIcon	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateMiddleNotification_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMiddleNotification_BPI");

	struct APC_Player_C_CreateMiddleNotification_BPI_Params {
		struct FText NotificationHeadline;			//Offset: 0 | ElementSize: 24
		struct FText NotificationText;			//Offset: 24 | ElementSize: 24
		TAssetPtr<class UTexture2D> Icon;			//Offset: 48 | ElementSize: 40
		bool BigIcon;			//Offset: 88 | ElementSize: 1
		float NotificationTimeout;			//Offset: 92 | ElementSize: 4
		class USoundBase* Sound;			//Offset: 96 | ElementSize: 8
	};
	APC_Player_C_CreateMiddleNotification_BPI_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.BigIcon = BigIcon;
	params.NotificationTimeout = NotificationTimeout;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateNotification_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Combine	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateNotification_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateNotification_BPI");

	struct APC_Player_C_CreateNotification_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		bool NotificationImage;			//Offset: 56 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 57 | ElementSize: 1
		struct FText WarningText;			//Offset: 64 | ElementSize: 24
		float NotificationTimeout;			//Offset: 88 | ElementSize: 4
		float NotificationDelay;			//Offset: 92 | ElementSize: 4
		bool Combine;			//Offset: 96 | ElementSize: 1
	};
	APC_Player_C_CreateNotification_BPI_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;
	params.Combine = Combine;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateMiddleNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NotificationHeadline	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BigIcon	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateMiddleNotificationAllPlayers_BPI(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMiddleNotificationAllPlayers_BPI");

	struct APC_Player_C_CreateMiddleNotificationAllPlayers_BPI_Params {
		struct FText NotificationHeadline;			//Offset: 0 | ElementSize: 24
		struct FText NotificationText;			//Offset: 24 | ElementSize: 24
		TAssetPtr<class UTexture2D> Icon;			//Offset: 48 | ElementSize: 40
		bool BigIcon;			//Offset: 88 | ElementSize: 1
		float NotificationTimeout;			//Offset: 92 | ElementSize: 4
		class USoundBase* Sound;			//Offset: 96 | ElementSize: 8
	};
	APC_Player_C_CreateMiddleNotificationAllPlayers_BPI_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.BigIcon = BigIcon;
	params.NotificationTimeout = NotificationTimeout;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateNotificationAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Combine	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateNotificationAllPlayers_BPI(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateNotificationAllPlayers_BPI");

	struct APC_Player_C_CreateNotificationAllPlayers_BPI_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		bool NotificationImage;			//Offset: 56 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 57 | ElementSize: 1
		struct FText WarningText;			//Offset: 64 | ElementSize: 24
		float NotificationTimeout;			//Offset: 88 | ElementSize: 4
		float NotificationDelay;			//Offset: 92 | ElementSize: 4
		bool Combine;			//Offset: 96 | ElementSize: 1
	};
	APC_Player_C_CreateNotificationAllPlayers_BPI_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;
	params.Combine = Combine;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateMiddleNotification_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NotificationHeadline	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BigIcon	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateMiddleNotification_Client(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMiddleNotification_Client");

	struct APC_Player_C_CreateMiddleNotification_Client_Params {
		struct FText NotificationHeadline;			//Offset: 0 | ElementSize: 24
		struct FText NotificationText;			//Offset: 24 | ElementSize: 24
		TAssetPtr<class UTexture2D> Icon;			//Offset: 48 | ElementSize: 40
		bool BigIcon;			//Offset: 88 | ElementSize: 1
		float NotificationTimeout;			//Offset: 92 | ElementSize: 4
		class USoundBase* Sound;			//Offset: 96 | ElementSize: 8
	};
	APC_Player_C_CreateMiddleNotification_Client_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.BigIcon = BigIcon;
	params.NotificationTimeout = NotificationTimeout;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateMiddleNotification_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NotificationHeadline	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BigIcon	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateMiddleNotification_Server(struct FText NotificationHeadline, struct FText NotificationText, TAssetPtr<class UTexture2D> Icon, bool BigIcon, float NotificationTimeout, class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMiddleNotification_Server");

	struct APC_Player_C_CreateMiddleNotification_Server_Params {
		struct FText NotificationHeadline;			//Offset: 0 | ElementSize: 24
		struct FText NotificationText;			//Offset: 24 | ElementSize: 24
		TAssetPtr<class UTexture2D> Icon;			//Offset: 48 | ElementSize: 40
		bool BigIcon;			//Offset: 88 | ElementSize: 1
		float NotificationTimeout;			//Offset: 92 | ElementSize: 4
		class USoundBase* Sound;			//Offset: 96 | ElementSize: 8
	};
	APC_Player_C_CreateMiddleNotification_Server_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.BigIcon = BigIcon;
	params.NotificationTimeout = NotificationTimeout;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateNotification_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Combine	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateNotification_Client(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateNotification_Client");

	struct APC_Player_C_CreateNotification_Client_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		bool NotificationImage;			//Offset: 56 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 57 | ElementSize: 1
		struct FText WarningText;			//Offset: 64 | ElementSize: 24
		float NotificationTimeout;			//Offset: 88 | ElementSize: 4
		float NotificationDelay;			//Offset: 92 | ElementSize: 4
		bool Combine;			//Offset: 96 | ElementSize: 1
	};
	APC_Player_C_CreateNotification_Client_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;
	params.Combine = Combine;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateNotification_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemInventorys	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationImage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NotificationType	Type: TEnumAsByte<E_Notifications>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WarningText	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NotificationTimeout	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotificationDelay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Combine	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateNotification_Server(struct FST_ItemInventorys Item, bool NotificationImage, TEnumAsByte<E_Notifications> NotificationType, struct FText WarningText, float NotificationTimeout, float NotificationDelay, bool Combine) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateNotification_Server");

	struct APC_Player_C_CreateNotification_Server_Params {
		struct FST_ItemInventorys Item;			//Offset: 0 | ElementSize: 56
		bool NotificationImage;			//Offset: 56 | ElementSize: 1
		TEnumAsByte<E_Notifications> NotificationType;			//Offset: 57 | ElementSize: 1
		struct FText WarningText;			//Offset: 64 | ElementSize: 24
		float NotificationTimeout;			//Offset: 88 | ElementSize: 4
		float NotificationDelay;			//Offset: 92 | ElementSize: 4
		bool Combine;			//Offset: 96 | ElementSize: 1
	};
	APC_Player_C_CreateNotification_Server_Params params;
	params.Item = Item;
	params.NotificationImage = NotificationImage;
	params.NotificationType = NotificationType;
	params.WarningText = WarningText;
	params.NotificationTimeout = NotificationTimeout;
	params.NotificationDelay = NotificationDelay;
	params.Combine = Combine;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ForceDialogueEnd_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ForceDialogueEnd_Server(class AActor* NPCActor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ForceDialogueEnd_Server");

	struct APC_Player_C_ForceDialogueEnd_Server_Params {
		class AActor* NPCActor;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ForceDialogueEnd_Server_Params params;
	params.NPCActor = NPCActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ForceDialogueEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ForceDialogueEnd(class AActor* NPCActor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ForceDialogueEnd");

	struct APC_Player_C_ForceDialogueEnd_Params {
		class AActor* NPCActor;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ForceDialogueEnd_Params params;
	params.NPCActor = NPCActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveChatter_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveChatter_Client(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveChatter_Client");

	struct APC_Player_C_RemoveChatter_Client_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RemoveChatter_Client_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveChatter_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RemoveChatter_Server(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveChatter_Server");

	struct APC_Player_C_RemoveChatter_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RemoveChatter_Server_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddChatter_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StringTableID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: StringTableKey	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: IsQuest	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddChatter_Client(class ABP_NPC_C* NPCReference, struct FString StringTableID, struct FString StringTableKey, bool IsQuest) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddChatter_Client");

	struct APC_Player_C_AddChatter_Client_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		struct FString StringTableID;			//Offset: 8 | ElementSize: 16
		struct FString StringTableKey;			//Offset: 24 | ElementSize: 16
		bool IsQuest;			//Offset: 40 | ElementSize: 1
	};
	APC_Player_C_AddChatter_Client_Params params;
	params.NPCReference = NPCReference;
	params.StringTableID = StringTableID;
	params.StringTableKey = StringTableKey;
	params.IsQuest = IsQuest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddChatter_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StringTableID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: StringTableKey	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: IsQuest	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddChatter_Server(class ABP_NPC_C* NPCReference, struct FString StringTableID, struct FString StringTableKey, bool IsQuest) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddChatter_Server");

	struct APC_Player_C_AddChatter_Server_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		struct FString StringTableID;			//Offset: 8 | ElementSize: 16
		struct FString StringTableKey;			//Offset: 24 | ElementSize: 16
		bool IsQuest;			//Offset: 40 | ElementSize: 1
	};
	APC_Player_C_AddChatter_Server_Params params;
	params.NPCReference = NPCReference;
	params.StringTableID = StringTableID;
	params.StringTableKey = StringTableKey;
	params.IsQuest = IsQuest;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveFinishedEvents_Server
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Indexes	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::RemoveFinishedEvents_Server(const TArray<int32_t>& Indexes) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveFinishedEvents_Server");

	struct APC_Player_C_RemoveFinishedEvents_Server_Params {
		TArray<int32_t> Indexes;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_RemoveFinishedEvents_Server_Params params;
	params.Indexes = Indexes;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnRepDialogueEventsSyncState
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnRepDialogueEventsSyncState() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRepDialogueEventsSyncState");

	struct APC_Player_C_OnRepDialogueEventsSyncState_Params {
	};
	APC_Player_C_OnRepDialogueEventsSyncState_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RunDialogueEvents_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dialogue	Type: TAssetPtr<class UDialogue>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: DialogueIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPCActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RunDialogueEvents_Server(TAssetPtr<class UDialogue> Dialogue, int32_t DialogueIndex, class AActor* NPCActor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RunDialogueEvents_Server");

	struct APC_Player_C_RunDialogueEvents_Server_Params {
		TAssetPtr<class UDialogue> Dialogue;			//Offset: 0 | ElementSize: 40
		int32_t DialogueIndex;			//Offset: 40 | ElementSize: 4
		class AActor* NPCActor;			//Offset: 48 | ElementSize: 8
	};
	APC_Player_C_RunDialogueEvents_Server_Params params;
	params.Dialogue = Dialogue;
	params.DialogueIndex = DialogueIndex;
	params.NPCActor = NPCActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LaunchInitialCharacterCreator_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: OmmitCharacterCreator	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::LaunchInitialCharacterCreator_Client(bool OmmitCharacterCreator) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LaunchInitialCharacterCreator_Client");

	struct APC_Player_C_LaunchInitialCharacterCreator_Client_Params {
		bool OmmitCharacterCreator;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_LaunchInitialCharacterCreator_Client_Params params;
	params.OmmitCharacterCreator = OmmitCharacterCreator;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetInputMode_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: InputMode	Type: TEnumAsByte<E_InputMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SetInputMode_Client(TEnumAsByte<E_InputMode> InputMode) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetInputMode_Client");

	struct APC_Player_C_SetInputMode_Client_Params {
		TEnumAsByte<E_InputMode> InputMode;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_SetInputMode_Client_Params params;
	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetGoal_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Goal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SetGoal_Server(struct FVector Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetGoal_Server");

	struct APC_Player_C_SetGoal_Server_Params {
		struct FVector Goal;			//Offset: 0 | ElementSize: 12
	};
	APC_Player_C_SetGoal_Server_Params params;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetActorLocationsmooth_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::SetActorLocationsmooth_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetActorLocationsmooth_Server");

	struct APC_Player_C_SetActorLocationsmooth_Server_Params {
	};
	APC_Player_C_SetActorLocationsmooth_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnMovementFinished_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnMovementFinished_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnMovementFinished_Server");

	struct APC_Player_C_OnMovementFinished_Server_Params {
	};
	APC_Player_C_OnMovementFinished_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SimpleMoveTo_Client
// Flags: Net, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Goal	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SimpleMoveTo_Client(const struct FVector& Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SimpleMoveTo_Client");

	struct APC_Player_C_SimpleMoveTo_Client_Params {
		struct FVector Goal;			//Offset: 0 | ElementSize: 12
	};
	APC_Player_C_SimpleMoveTo_Client_Params params;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SimpleMoveTo_Server
// Flags: Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Goal	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SimpleMoveTo_Server(const struct FVector& Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SimpleMoveTo_Server");

	struct APC_Player_C_SimpleMoveTo_Server_Params {
		struct FVector Goal;			//Offset: 0 | ElementSize: 12
	};
	APC_Player_C_SimpleMoveTo_Server_Params params;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroyPlayerSessionWithReason_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Reason	Type: TEnumAsByte<E_PlayerDisconnectReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DestroyPlayerSessionWithReason_BPI(TEnumAsByte<E_PlayerDisconnectReason> Reason) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroyPlayerSessionWithReason_BPI");

	struct APC_Player_C_DestroyPlayerSessionWithReason_BPI_Params {
		TEnumAsByte<E_PlayerDisconnectReason> Reason;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_DestroyPlayerSessionWithReason_BPI_Params params;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GameClose
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::GameClose() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GameClose");

	struct APC_Player_C_GameClose_Params {
	};
	APC_Player_C_GameClose_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionWithReason_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Reason	Type: TEnumAsByte<E_PlayerDisconnectReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DestroySessionWithReason_Client(TEnumAsByte<E_PlayerDisconnectReason> Reason) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionWithReason_Client");

	struct APC_Player_C_DestroySessionWithReason_Client_Params {
		TEnumAsByte<E_PlayerDisconnectReason> Reason;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_DestroySessionWithReason_Client_Params params;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LevelTravel
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::LevelTravel() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LevelTravel");

	struct APC_Player_C_LevelTravel_Params {
	};
	APC_Player_C_LevelTravel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroyPlayerSessionMenu_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::DestroyPlayerSessionMenu_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroyPlayerSessionMenu_BPI");

	struct APC_Player_C_DestroyPlayerSessionMenu_BPI_Params {
	};
	APC_Player_C_DestroyPlayerSessionMenu_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionQuit_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::DestroySessionQuit_Server() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionQuit_Server");

	struct APC_Player_C_DestroySessionQuit_Server_Params {
	};
	APC_Player_C_DestroySessionQuit_Server_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionQuit_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SessionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DestroySessionQuit_Client(struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionQuit_Client");

	struct APC_Player_C_DestroySessionQuit_Client_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_DestroySessionQuit_Client_Params params;
	params.SessionName = SessionName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroyPlayerSessionQuit_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::DestroyPlayerSessionQuit_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroyPlayerSessionQuit_BPI");

	struct APC_Player_C_DestroyPlayerSessionQuit_BPI_Params {
	};
	APC_Player_C_DestroyPlayerSessionQuit_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionMenu_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SessionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Reason	Type: TEnumAsByte<E_PlayerDisconnectReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DestroySessionMenu_Client(struct FName SessionName, TEnumAsByte<E_PlayerDisconnectReason> Reason) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionMenu_Client");

	struct APC_Player_C_DestroySessionMenu_Client_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_PlayerDisconnectReason> Reason;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_DestroySessionMenu_Client_Params params;
	params.SessionName = SessionName;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DestroySessionMenu_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Reason	Type: TEnumAsByte<E_PlayerDisconnectReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DestroySessionMenu_Server(TEnumAsByte<E_PlayerDisconnectReason> Reason) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DestroySessionMenu_Server");

	struct APC_Player_C_DestroySessionMenu_Server_Params {
		TEnumAsByte<E_PlayerDisconnectReason> Reason;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_DestroySessionMenu_Server_Params params;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetGlobalTimeMulticast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeDilation	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SetGlobalTimeMulticast(float TimeDilation) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetGlobalTimeMulticast");

	struct APC_Player_C_SetGlobalTimeMulticast_Params {
		float TimeDilation;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_SetGlobalTimeMulticast_Params params;
	params.TimeDilation = TimeDilation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetGlobalTimeServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeDilation	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SetGlobalTimeServer(float TimeDilation) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetGlobalTimeServer");

	struct APC_Player_C_SetGlobalTimeServer_Params {
		float TimeDilation;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_SetGlobalTimeServer_Params params;
	params.TimeDilation = TimeDilation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockGateSchemeServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockGateSchemeServer(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockGateSchemeServer");

	struct APC_Player_C_UnlockGateSchemeServer_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockGateSchemeServer_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockGateSchemeClient
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockGateSchemeClient(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockGateSchemeClient");

	struct APC_Player_C_UnlockGateSchemeClient_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockGateSchemeClient_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockFenceSchemeServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockFenceSchemeServer(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockFenceSchemeServer");

	struct APC_Player_C_UnlockFenceSchemeServer_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockFenceSchemeServer_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockFenceSchemeClient
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockFenceSchemeClient(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockFenceSchemeClient");

	struct APC_Player_C_UnlockFenceSchemeClient_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockFenceSchemeClient_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockFurnitureSchemeServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockFurnitureSchemeServer(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockFurnitureSchemeServer");

	struct APC_Player_C_UnlockFurnitureSchemeServer_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockFurnitureSchemeServer_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockFurnitureSchemeClient
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockFurnitureSchemeClient(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockFurnitureSchemeClient");

	struct APC_Player_C_UnlockFurnitureSchemeClient_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockFurnitureSchemeClient_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockCraftingSchemeServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockCraftingSchemeServer(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockCraftingSchemeServer");

	struct APC_Player_C_UnlockCraftingSchemeServer_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockCraftingSchemeServer_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockCraftingSchemeClient
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: SchemeID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UnlockCraftingSchemeClient(struct FName SchemeID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockCraftingSchemeClient");

	struct APC_Player_C_UnlockCraftingSchemeClient_Params {
		struct FName SchemeID;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_UnlockCraftingSchemeClient_Params params;
	params.SchemeID = SchemeID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ApplyTechnologySchemesDataInClient
// Flags: Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnlockedCraftingRecipes_IDs	Type: TArray<struct FName>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UnlockedFurnitureRecipes_IDs	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UnlockedFencesRecipes_IDs	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UnlockedGatesRecipes_IDs	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: UnlockedPlatformsRecipes_IDs	Type: TArray<struct FName>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::ApplyTechnologySchemesDataInClient(const TArray<struct FName>& UnlockedCraftingRecipes_IDs, TArray<struct FName>* UnlockedFurnitureRecipes_IDs, TArray<struct FName>* UnlockedFencesRecipes_IDs, TArray<struct FName>* UnlockedGatesRecipes_IDs, const TArray<struct FName>& UnlockedPlatformsRecipes_IDs) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ApplyTechnologySchemesDataInClient");

	struct APC_Player_C_ApplyTechnologySchemesDataInClient_Params {
		TArray<struct FName> UnlockedCraftingRecipes_IDs;			//Offset: 0 | ElementSize: 16
		TArray<struct FName> UnlockedFurnitureRecipes_IDs;			//Offset: 16 | ElementSize: 16
		TArray<struct FName> UnlockedFencesRecipes_IDs;			//Offset: 32 | ElementSize: 16
		TArray<struct FName> UnlockedGatesRecipes_IDs;			//Offset: 48 | ElementSize: 16
		TArray<struct FName> UnlockedPlatformsRecipes_IDs;			//Offset: 64 | ElementSize: 16
	};
	APC_Player_C_ApplyTechnologySchemesDataInClient_Params params;
	params.UnlockedCraftingRecipes_IDs = UnlockedCraftingRecipes_IDs;
	params.UnlockedPlatformsRecipes_IDs = UnlockedPlatformsRecipes_IDs;

	UObject::ProcessEvent(fn, &params);
	if (UnlockedFurnitureRecipes_IDs != nullptr)
		*UnlockedFurnitureRecipes_IDs = params.UnlockedFurnitureRecipes_IDs;
	if (UnlockedFencesRecipes_IDs != nullptr)
		*UnlockedFencesRecipes_IDs = params.UnlockedFencesRecipes_IDs;
	if (UnlockedGatesRecipes_IDs != nullptr)
		*UnlockedGatesRecipes_IDs = params.UnlockedGatesRecipes_IDs;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PassTechnologySchemesDataFromServerToClient
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::PassTechnologySchemesDataFromServerToClient() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PassTechnologySchemesDataFromServerToClient");

	struct APC_Player_C_PassTechnologySchemesDataFromServerToClient_Params {
	};
	APC_Player_C_PassTechnologySchemesDataFromServerToClient_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.IncreaseTalentLevelServerAndUpdateComponent
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: SelectedSkillID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SelectedTalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::IncreaseTalentLevelServerAndUpdateComponent(int32_t SelectedSkillID, int32_t SelectedTalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.IncreaseTalentLevelServerAndUpdateComponent");

	struct APC_Player_C_IncreaseTalentLevelServerAndUpdateComponent_Params {
		int32_t SelectedSkillID;			//Offset: 0 | ElementSize: 4
		int32_t SelectedTalentID;			//Offset: 4 | ElementSize: 4
	};
	APC_Player_C_IncreaseTalentLevelServerAndUpdateComponent_Params params;
	params.SelectedSkillID = SelectedSkillID;
	params.SelectedTalentID = SelectedTalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetInitStats Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerCharacterReference	Type: class ABP_PlayerCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SetInitStats_Client(class ABP_PlayerCharacter_C* PlayerCharacterReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetInitStats Client");

	struct APC_Player_C_SetInitStats_Client_Params {
		class ABP_PlayerCharacter_C* PlayerCharacterReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_SetInitStats_Client_Params params;
	params.PlayerCharacterReference = PlayerCharacterReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Server PossessPawn
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: characterToPossess	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Server_PossessPawn(class APawn* characterToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Server PossessPawn");

	struct APC_Player_C_Server_PossessPawn_Params {
		class APawn* characterToPossess;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_Server_PossessPawn_Params params;
	params.characterToPossess = characterToPossess;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleEvent_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheatStart	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheatEnd	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ToggleEvent_BPI(bool CheatStart, bool CheatEnd) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleEvent_BPI");

	struct APC_Player_C_ToggleEvent_BPI_Params {
		bool CheatStart;			//Offset: 0 | ElementSize: 1
		bool CheatEnd;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_ToggleEvent_BPI_Params params;
	params.CheatStart = CheatStart;
	params.CheatEnd = CheatEnd;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ProcessByteVarUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Byte	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ProcessByteVarUpdate(class AActor* Actor, unsigned char Byte) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ProcessByteVarUpdate");

	struct APC_Player_C_ProcessByteVarUpdate_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		unsigned char Byte;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_ProcessByteVarUpdate_Params params;
	params.Actor = Actor;
	params.Byte = Byte;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ReleaseInputsUI_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ReleaseInputsUI_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReleaseInputsUI_BPI");

	struct APC_Player_C_ReleaseInputsUI_BPI_Params {
	};
	APC_Player_C_ReleaseInputsUI_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ReleaseInputs_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ReleaseInputs_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReleaseInputs_BPI");

	struct APC_Player_C_ReleaseInputs_BPI_Params {
	};
	APC_Player_C_ReleaseInputs_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PCCameraShakeFromSource_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CameraShake	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::PCCameraShakeFromSource_BPI(class UCameraShakeBase* CameraShake, class UCameraShakeSourceComponent* SourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PCCameraShakeFromSource_BPI");

	struct APC_Player_C_PCCameraShakeFromSource_BPI_Params {
		class UCameraShakeBase* CameraShake;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
	};
	APC_Player_C_PCCameraShakeFromSource_BPI_Params params;
	params.CameraShake = CameraShake;
	params.SourceComponent = SourceComponent;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PCCameraShake_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CameraShake	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Scale	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::PCCameraShake_BPI(class UCameraShakeBase* CameraShake, float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PCCameraShake_BPI");

	struct APC_Player_C_PCCameraShake_BPI_Params {
		class UCameraShakeBase* CameraShake;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
	};
	APC_Player_C_PCCameraShake_BPI_Params params;
	params.CameraShake = CameraShake;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ProcessSkeletalMontagesUpdate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontagesData	Type: TArray<struct FMontageDataForRep>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::ProcessSkeletalMontagesUpdate(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ProcessSkeletalMontagesUpdate");

	struct APC_Player_C_ProcessSkeletalMontagesUpdate_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		TArray<struct FMontageDataForRep> MontagesData;			//Offset: 8 | ElementSize: 16
	};
	APC_Player_C_ProcessSkeletalMontagesUpdate_Params params;
	params.Actor = Actor;
	params.MontagesData = MontagesData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RequestActorUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Force	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::RequestActorUpdate(class AActor* Actor, bool Force) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RequestActorUpdate");

	struct APC_Player_C_RequestActorUpdate_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		bool Force;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_RequestActorUpdate_Params params;
	params.Actor = Actor;
	params.Force = Force;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.AddStatProgressPC_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::AddStatProgressPC_BPI(struct FName StatName, int32_t StatValue, bool AllPlayers, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.AddStatProgressPC_BPI");

	struct APC_Player_C_AddStatProgressPC_BPI_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool AllPlayers;			//Offset: 12 | ElementSize: 1
		bool TreatAsSet;			//Offset: 13 | ElementSize: 1
	};
	APC_Player_C_AddStatProgressPC_BPI_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.AllPlayers = AllPlayers;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UnlockAchievementPC_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::UnlockAchievementPC_BPI(struct FName AchID, bool AllPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UnlockAchievementPC_BPI");

	struct APC_Player_C_UnlockAchievementPC_BPI_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_UnlockAchievementPC_BPI_Params params;
	params.AchID = AchID;
	params.AllPlayers = AllPlayers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateDialogueSyncArray_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NodeId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UpdateDialogueSyncArray_BPI(int32_t NodeId, int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateDialogueSyncArray_BPI");

	struct APC_Player_C_UpdateDialogueSyncArray_BPI_Params {
		int32_t NodeId;			//Offset: 0 | ElementSize: 4
		int32_t Value;			//Offset: 4 | ElementSize: 4
	};
	APC_Player_C_UpdateDialogueSyncArray_BPI_Params params;
	params.NodeId = NodeId;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BPI_OnCameraShakesChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::BPI_OnCameraShakesChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_OnCameraShakesChanged");

	struct APC_Player_C_BPI_OnCameraShakesChanged_Params {
	};
	APC_Player_C_BPI_OnCameraShakesChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BPI_OnBreathingChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::BPI_OnBreathingChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_OnBreathingChanged");

	struct APC_Player_C_BPI_OnBreathingChanged_Params {
	};
	APC_Player_C_BPI_OnBreathingChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BPI_UpdateControlsSensitivity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::BPI_UpdateControlsSensitivity() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_UpdateControlsSensitivity");

	struct APC_Player_C_BPI_UpdateControlsSensitivity_Params {
	};
	APC_Player_C_BPI_UpdateControlsSensitivity_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BPI_OnHeadbobbingChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::BPI_OnHeadbobbingChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_OnHeadbobbingChanged");

	struct APC_Player_C_BPI_OnHeadbobbingChanged_Params {
	};
	APC_Player_C_BPI_OnHeadbobbingChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StopLoadingProgress
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::StopLoadingProgress() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StopLoadingProgress");

	struct APC_Player_C_StopLoadingProgress_Params {
	};
	APC_Player_C_StopLoadingProgress_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StartLoadingProgress
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Duration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::StartLoadingProgress(float Duration, float MaxValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StartLoadingProgress");

	struct APC_Player_C_StartLoadingProgress_Params {
		float Duration;			//Offset: 0 | ElementSize: 4
		float MaxValue;			//Offset: 4 | ElementSize: 4
	};
	APC_Player_C_StartLoadingProgress_Params params;
	params.Duration = Duration;
	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ApplyByteVarUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Byte	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ApplyByteVarUpdate(unsigned char Byte) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ApplyByteVarUpdate");

	struct APC_Player_C_ApplyByteVarUpdate_Params {
		unsigned char Byte;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_ApplyByteVarUpdate_Params params;
	params.Byte = Byte;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SetWasActorUpdated_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::SetWasActorUpdated_BPI(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SetWasActorUpdated_BPI");

	struct APC_Player_C_SetWasActorUpdated_BPI_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_SetWasActorUpdated_BPI_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ApplySkeletalMontagesUpdate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontagesData	Type: TArray<struct FMontageDataForRep>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::ApplySkeletalMontagesUpdate(const TArray<struct FMontageDataForRep>& MontagesData) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ApplySkeletalMontagesUpdate");

	struct APC_Player_C_ApplySkeletalMontagesUpdate_Params {
		TArray<struct FMontageDataForRep> MontagesData;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_ApplySkeletalMontagesUpdate_Params params;
	params.MontagesData = MontagesData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ExecuteActorUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Requester	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ExecuteActorUpdate(class APlayerController* Requester) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ExecuteActorUpdate");

	struct APC_Player_C_ExecuteActorUpdate_Params {
		class APlayerController* Requester;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ExecuteActorUpdate_Params params;
	params.Requester = Requester;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_1
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_1");

	struct APC_Player_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_1_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_2
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_2");

	struct APC_Player_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_2_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_3
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_3");

	struct APC_Player_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_3_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_4
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_4(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_4");

	struct APC_Player_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_4_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_5
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_5(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_5");

	struct APC_Player_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_5_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6");

	struct APC_Player_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_6_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_7
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_7(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_7");

	struct APC_Player_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_7_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ToggleChat_K2Node_InputActionEvent_1
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ToggleChat_K2Node_InputActionEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ToggleChat_K2Node_InputActionEvent_1");

	struct APC_Player_C_InpActEvt_ToggleChat_K2Node_InputActionEvent_1_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ToggleChat_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_EmoteMenu_K2Node_InputActionEvent_2
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_EmoteMenu_K2Node_InputActionEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_EmoteMenu_K2Node_InputActionEvent_2");

	struct APC_Player_C_InpActEvt_EmoteMenu_K2Node_InputActionEvent_2_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_EmoteMenu_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_EmoteMenu_K2Node_InputActionEvent_3
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_EmoteMenu_K2Node_InputActionEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_EmoteMenu_K2Node_InputActionEvent_3");

	struct APC_Player_C_InpActEvt_EmoteMenu_K2Node_InputActionEvent_3_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_EmoteMenu_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_8(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_8");

	struct APC_Player_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_8_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Decimal_K2Node_InputKeyEvent_9
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Decimal_K2Node_InputKeyEvent_9(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Decimal_K2Node_InputKeyEvent_9");

	struct APC_Player_C_InpActEvt_Decimal_K2Node_InputKeyEvent_9_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Decimal_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Slash_K2Node_InputKeyEvent_10
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Slash_K2Node_InputKeyEvent_10(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Slash_K2Node_InputKeyEvent_10");

	struct APC_Player_C_InpActEvt_Slash_K2Node_InputKeyEvent_10_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Slash_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_4
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Knowledge_K2Node_InputActionEvent_4(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_4");

	struct APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_4_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_5
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Knowledge_K2Node_InputActionEvent_5(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_5");

	struct APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_5_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_6
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SummonMount_K2Node_InputActionEvent_6(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_6");

	struct APC_Player_C_InpActEvt_SummonMount_K2Node_InputActionEvent_6_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SummonMount_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_7
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_DismountAction_K2Node_InputActionEvent_7(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_7");

	struct APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_7_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_8
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_DismountAction_K2Node_InputActionEvent_8(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_8");

	struct APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_8_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_9
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_9(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_9");

	struct APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_9_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_10
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_10(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_10");

	struct APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_10_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_11
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_11(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_11");

	struct APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_11_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_12
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_12(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_12");

	struct APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_12_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_13
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_13(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_13");

	struct APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_13_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_14
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_14(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_14");

	struct APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_14_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_15
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_HideHUD_K2Node_InputActionEvent_15(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_15");

	struct APC_Player_C_InpActEvt_HideHUD_K2Node_InputActionEvent_15_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_HideHUD_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_16
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChangeCharacter_K2Node_InputActionEvent_16(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_16");

	struct APC_Player_C_InpActEvt_ChangeCharacter_K2Node_InputActionEvent_16_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChangeCharacter_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_11
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_F9_K2Node_InputKeyEvent_11(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_11");

	struct APC_Player_C_InpActEvt_F9_K2Node_InputKeyEvent_11_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_F9_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_12
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Equals_K2Node_InputKeyEvent_12(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_12");

	struct APC_Player_C_InpActEvt_Equals_K2Node_InputKeyEvent_12_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Equals_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_17
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChangeInputAction_K2Node_InputActionEvent_17(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_17");

	struct APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_17_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_18
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChangeInputAction_K2Node_InputActionEvent_18(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_18");

	struct APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_18_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_13
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_F5_K2Node_InputKeyEvent_13(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_13");

	struct APC_Player_C_InpActEvt_F5_K2Node_InputKeyEvent_13_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_F5_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_19
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChoiceMenu_K2Node_InputActionEvent_19(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_19");

	struct APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_19_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_20
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChoiceMenu_K2Node_InputActionEvent_20(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_20");

	struct APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_20_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_14
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Home_K2Node_InputKeyEvent_14(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_14");

	struct APC_Player_C_InpActEvt_Home_K2Node_InputKeyEvent_14_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Home_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_21
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Technology_K2Node_InputActionEvent_21(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_21");

	struct APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_21_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_22
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Technology_K2Node_InputActionEvent_22(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_22");

	struct APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_22_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_23
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_JumpAction_K2Node_InputActionEvent_23(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_23");

	struct APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_23_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_24
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_JumpAction_K2Node_InputActionEvent_24(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_24");

	struct APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_24_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_25
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_CameraAction_K2Node_InputActionEvent_25(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_25");

	struct APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_25_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_26
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_CameraAction_K2Node_InputActionEvent_26(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_26");

	struct APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_26_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_27
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_StanceAction_K2Node_InputActionEvent_27(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_27");

	struct APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_27_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_28
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_StanceAction_K2Node_InputActionEvent_28(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_28");

	struct APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_28_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_29
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_WalkAction_K2Node_InputActionEvent_29(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_29");

	struct APC_Player_C_InpActEvt_WalkAction_K2Node_InputActionEvent_29_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_WalkAction_K2Node_InputActionEvent_29_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_30
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_30(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_30");

	struct APC_Player_C_InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_30_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_30_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_31
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_31(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_31");

	struct APC_Player_C_InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_31_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_31_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_32
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_NextSection_K2Node_InputActionEvent_32(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_32");

	struct APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_32_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_32_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_33
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_NextSection_K2Node_InputActionEvent_33(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_33");

	struct APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_33_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_33_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_34
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_34(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_34");

	struct APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_34_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_35
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_35(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_35");

	struct APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_35_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_35_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_36
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_GameMenu_K2Node_InputActionEvent_36(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_36");

	struct APC_Player_C_InpActEvt_GameMenu_K2Node_InputActionEvent_36_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_GameMenu_K2Node_InputActionEvent_36_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_37
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_37(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_37");

	struct APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_37_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_37_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_38
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_38(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_38");

	struct APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_38_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_38_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_15
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_E_K2Node_InputKeyEvent_15(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_15");

	struct APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_15_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_16
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_E_K2Node_InputKeyEvent_16(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_16");

	struct APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_16_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_39
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_39(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_39");

	struct APC_Player_C_InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_39_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_39_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_40
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InspectorMode_K2Node_InputActionEvent_40(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_40");

	struct APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_40_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_40_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_41
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InspectorMode_K2Node_InputActionEvent_41(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_41");

	struct APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_41_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_41_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_42
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SprintAction_K2Node_InputActionEvent_42(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_42");

	struct APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_42_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_42_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_43
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SprintAction_K2Node_InputActionEvent_43(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_43");

	struct APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_43_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_43_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_44
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InteractAction_K2Node_InputActionEvent_44(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_44");

	struct APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_44_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_44_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_45
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InteractAction_K2Node_InputActionEvent_45(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_45");

	struct APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_45_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_45_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_46
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot1_K2Node_InputActionEvent_46(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_46");

	struct APC_Player_C_InpActEvt_QuickSlot1_K2Node_InputActionEvent_46_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot1_K2Node_InputActionEvent_46_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_47
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot5_K2Node_InputActionEvent_47(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_47");

	struct APC_Player_C_InpActEvt_QuickSlot5_K2Node_InputActionEvent_47_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot5_K2Node_InputActionEvent_47_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_48
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot6_K2Node_InputActionEvent_48(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_48");

	struct APC_Player_C_InpActEvt_QuickSlot6_K2Node_InputActionEvent_48_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot6_K2Node_InputActionEvent_48_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_49
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot2_K2Node_InputActionEvent_49(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_49");

	struct APC_Player_C_InpActEvt_QuickSlot2_K2Node_InputActionEvent_49_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot2_K2Node_InputActionEvent_49_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_50
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot7_K2Node_InputActionEvent_50(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_50");

	struct APC_Player_C_InpActEvt_QuickSlot7_K2Node_InputActionEvent_50_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot7_K2Node_InputActionEvent_50_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_51
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot3_K2Node_InputActionEvent_51(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_51");

	struct APC_Player_C_InpActEvt_QuickSlot3_K2Node_InputActionEvent_51_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot3_K2Node_InputActionEvent_51_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_52
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot8_K2Node_InputActionEvent_52(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_52");

	struct APC_Player_C_InpActEvt_QuickSlot8_K2Node_InputActionEvent_52_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot8_K2Node_InputActionEvent_52_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_53
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot4_K2Node_InputActionEvent_53(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_53");

	struct APC_Player_C_InpActEvt_QuickSlot4_K2Node_InputActionEvent_53_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot4_K2Node_InputActionEvent_53_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_54
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RightAction_K2Node_InputActionEvent_54(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_54");

	struct APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_54_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_54_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_55
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RightAction_K2Node_InputActionEvent_55(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_55");

	struct APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_55_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_55_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_56
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LeftAction_K2Node_InputActionEvent_56(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_56");

	struct APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_56_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_56_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_57
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LeftAction_K2Node_InputActionEvent_57(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_57");

	struct APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_57_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_57_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_58
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickslotMenu_K2Node_InputActionEvent_58(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_58");

	struct APC_Player_C_InpActEvt_QuickslotMenu_K2Node_InputActionEvent_58_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickslotMenu_K2Node_InputActionEvent_58_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_59
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Torch_K2Node_InputActionEvent_59(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_59");

	struct APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_59_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_59_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_60
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Torch_K2Node_InputActionEvent_60(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_60");

	struct APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_60_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_60_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_61
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Drop_K2Node_InputActionEvent_61(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_61");

	struct APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_61_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_61_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_62
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Drop_K2Node_InputActionEvent_62(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_62");

	struct APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_62_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_62_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_17
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_17(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_17");

	struct APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_17_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_18
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_18(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_18");

	struct APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_18_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_19
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_19(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_19");

	struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_19_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_19_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_20
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_20(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_20");

	struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_20_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_63
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Management_K2Node_InputActionEvent_63(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_63");

	struct APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_63_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_63_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_64
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Management_K2Node_InputActionEvent_64(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_64");

	struct APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_64_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_64_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_21
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_21(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_21");

	struct APC_Player_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_21_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_22
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Backslash_K2Node_InputKeyEvent_22(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_22");

	struct APC_Player_C_InpActEvt_Backslash_K2Node_InputKeyEvent_22_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Backslash_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_65
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_65(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_65");

	struct APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_65_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_65_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_66
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_66(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_66");

	struct APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_66_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_66_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_67
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Left_K2Node_InputActionEvent_67(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_67");

	struct APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_67_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_67_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_68
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Left_K2Node_InputActionEvent_68(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_68");

	struct APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_68_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_68_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_69
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Right_K2Node_InputActionEvent_69(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_69");

	struct APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_69_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_69_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_70
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Right_K2Node_InputActionEvent_70(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_70");

	struct APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_70_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_70_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_71
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Down_K2Node_InputActionEvent_71(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_71");

	struct APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_71_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_71_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_72
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Down_K2Node_InputActionEvent_72(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_72");

	struct APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_72_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_72_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_73
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Up_K2Node_InputActionEvent_73(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_73");

	struct APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_73_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_73_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_74
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Up_K2Node_InputActionEvent_74(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_74");

	struct APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_74_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_74_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_75
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Confirm_K2Node_InputActionEvent_75(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_75");

	struct APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_75_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_75_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_76
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Confirm_K2Node_InputActionEvent_76(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_76");

	struct APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_76_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_76_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_77
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LastInventoryTab_K2Node_InputActionEvent_77(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_77");

	struct APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_77_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_77_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_78
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LastInventoryTab_K2Node_InputActionEvent_78(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_78");

	struct APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_78_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_78_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_79
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Journal_K2Node_InputActionEvent_79(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_79");

	struct APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_79_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_79_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_80
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Journal_K2Node_InputActionEvent_80(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_80");

	struct APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_80_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_80_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_81
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Skills_K2Node_InputActionEvent_81(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_81");

	struct APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_81_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_81_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_82
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Skills_K2Node_InputActionEvent_82(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_82");

	struct APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_82_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_82_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_83
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Map_K2Node_InputActionEvent_83(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_83");

	struct APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_83_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_83_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_84
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Map_K2Node_InputActionEvent_84(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_84");

	struct APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_84_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_84_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_23
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Multiply_K2Node_InputKeyEvent_23(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_23");

	struct APC_Player_C_InpActEvt_Multiply_K2Node_InputKeyEvent_23_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Multiply_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_85
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Inventory_K2Node_InputActionEvent_85(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_85");

	struct APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_85_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_85_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_86
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Inventory_K2Node_InputActionEvent_86(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_86");

	struct APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_86_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_86_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_24
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Subtract_K2Node_InputKeyEvent_24(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_24");

	struct APC_Player_C_InpActEvt_Subtract_K2Node_InputKeyEvent_24_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Subtract_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_25
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Add_K2Node_InputKeyEvent_25(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_25");

	struct APC_Player_C_InpActEvt_Add_K2Node_InputKeyEvent_25_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Add_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LoadingAlpha__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::LoadingAlpha__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LoadingAlpha__UpdateFunc");

	struct APC_Player_C_LoadingAlpha__UpdateFunc_Params {
	};
	APC_Player_C_LoadingAlpha__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LoadingAlpha__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::LoadingAlpha__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LoadingAlpha__FinishedFunc");

	struct APC_Player_C_LoadingAlpha__FinishedFunc_Params {
	};
	APC_Player_C_LoadingAlpha__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UserConstructionScript");

	struct APC_Player_C_UserConstructionScript_Params {
	};
	APC_Player_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChangeCrosshairStatePC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Aiming	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ChangeCrosshairStatePC(bool Aiming) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeCrosshairStatePC");

	struct APC_Player_C_ChangeCrosshairStatePC_Params {
		bool Aiming;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_ChangeCrosshairStatePC_Params params;
	params.Aiming = Aiming;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnLockFreeCam
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LockFreeCam	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::OnLockFreeCam(bool LockFreeCam) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnLockFreeCam");

	struct APC_Player_C_OnLockFreeCam_Params {
		bool LockFreeCam;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_OnLockFreeCam_Params params;
	params.LockFreeCam = LockFreeCam;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateFov
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::UpdateFov() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateFov");

	struct APC_Player_C_UpdateFov_Params {
	};
	APC_Player_C_UpdateFov_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnHeadbobbingChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnHeadbobbingChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnHeadbobbingChanged");

	struct APC_Player_C_OnHeadbobbingChanged_Params {
	};
	APC_Player_C_OnHeadbobbingChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldingWithCount
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldingWithCount() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldingWithCount");

	struct APC_Player_C_InputHoldingWithCount_Params {
	};
	APC_Player_C_InputHoldingWithCount_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ResetInputHoldingCount
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ResetInputHoldingCount() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ResetInputHoldingCount");

	struct APC_Player_C_ResetInputHoldingCount_Params {
	};
	APC_Player_C_ResetInputHoldingCount_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateInputHoldingTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UpdateInputHoldingTime(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateInputHoldingTime");

	struct APC_Player_C_UpdateInputHoldingTime_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_UpdateInputHoldingTime_Params params;
	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CheckCzechQuickslot
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CheckCzechQuickslot(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CheckCzechQuickslot");

	struct APC_Player_C_CheckCzechQuickslot_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_CheckCzechQuickslot_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ReleaseAllUIInputs
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ReleaseAllUIInputs() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ReleaseAllUIInputs");

	struct APC_Player_C_ReleaseAllUIInputs_Params {
	};
	APC_Player_C_ReleaseAllUIInputs_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnLockCameraPosition
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LockCameraPosition	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::OnLockCameraPosition(bool LockCameraPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnLockCameraPosition");

	struct APC_Player_C_OnLockCameraPosition_Params {
		bool LockCameraPosition;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_OnLockCameraPosition_Params params;
	params.LockCameraPosition = LockCameraPosition;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnDismountFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnDismountFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDismountFinished");

	struct APC_Player_C_OnDismountFinished_Params {
	};
	APC_Player_C_OnDismountFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnCameraShakesChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnCameraShakesChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnCameraShakesChanged");

	struct APC_Player_C_OnCameraShakesChanged_Params {
	};
	APC_Player_C_OnCameraShakesChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnBreathingChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnBreathingChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnBreathingChanged");

	struct APC_Player_C_OnBreathingChanged_Params {
	};
	APC_Player_C_OnBreathingChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetIsSteeringSetToGamepad
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: IsSteeringSetToGamepad	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::GetIsSteeringSetToGamepad(bool* IsSteeringSetToGamepad) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetIsSteeringSetToGamepad");

	struct APC_Player_C_GetIsSteeringSetToGamepad_Params {
		bool IsSteeringSetToGamepad;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_GetIsSteeringSetToGamepad_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsSteeringSetToGamepad != nullptr)
		*IsSteeringSetToGamepad = params.IsSteeringSetToGamepad;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ShowLoggedOutPopup
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ShowLoggedOutPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ShowLoggedOutPopup");

	struct APC_Player_C_ShowLoggedOutPopup_Params {
	};
	APC_Player_C_ShowLoggedOutPopup_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ShowReconnectPopup
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ShowReconnectPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ShowReconnectPopup");

	struct APC_Player_C_ShowReconnectPopup_Params {
	};
	APC_Player_C_ShowReconnectPopup_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RPC_GetTechnologySchemesData
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnlockedCraftingRecipes_IDs	Type: TArray<struct FName>	Flags: Parm, OutParm
// Name: UnlockedFurnitureRecipes_IDs	Type: TArray<struct FName>	Flags: Parm, OutParm
// Name: UnlockedFencesRecipes_IDs	Type: TArray<struct FName>	Flags: Parm, OutParm
// Name: UnlockedGatesRecipes_IDs	Type: TArray<struct FName>	Flags: Parm, OutParm
// Name: UnlockedPlatformsRecipes_IDs	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void APC_Player_C::RPC_GetTechnologySchemesData(TArray<struct FName>* UnlockedCraftingRecipes_IDs, TArray<struct FName>* UnlockedFurnitureRecipes_IDs, TArray<struct FName>* UnlockedFencesRecipes_IDs, TArray<struct FName>* UnlockedGatesRecipes_IDs, TArray<struct FName>* UnlockedPlatformsRecipes_IDs) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RPC_GetTechnologySchemesData");

	struct APC_Player_C_RPC_GetTechnologySchemesData_Params {
		TArray<struct FName> UnlockedCraftingRecipes_IDs;			//Offset: 0 | ElementSize: 16
		TArray<struct FName> UnlockedFurnitureRecipes_IDs;			//Offset: 16 | ElementSize: 16
		TArray<struct FName> UnlockedFencesRecipes_IDs;			//Offset: 32 | ElementSize: 16
		TArray<struct FName> UnlockedGatesRecipes_IDs;			//Offset: 48 | ElementSize: 16
		TArray<struct FName> UnlockedPlatformsRecipes_IDs;			//Offset: 64 | ElementSize: 16
	};
	APC_Player_C_RPC_GetTechnologySchemesData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (UnlockedCraftingRecipes_IDs != nullptr)
		*UnlockedCraftingRecipes_IDs = params.UnlockedCraftingRecipes_IDs;
	if (UnlockedFurnitureRecipes_IDs != nullptr)
		*UnlockedFurnitureRecipes_IDs = params.UnlockedFurnitureRecipes_IDs;
	if (UnlockedFencesRecipes_IDs != nullptr)
		*UnlockedFencesRecipes_IDs = params.UnlockedFencesRecipes_IDs;
	if (UnlockedGatesRecipes_IDs != nullptr)
		*UnlockedGatesRecipes_IDs = params.UnlockedGatesRecipes_IDs;
	if (UnlockedPlatformsRecipes_IDs != nullptr)
		*UnlockedPlatformsRecipes_IDs = params.UnlockedPlatformsRecipes_IDs;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.FakeMakeLoveTeleport
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::FakeMakeLoveTeleport() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.FakeMakeLoveTeleport");

	struct APC_Player_C_FakeMakeLoveTeleport_Params {
	};
	APC_Player_C_FakeMakeLoveTeleport_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnRotationFinish
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnRotationFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRotationFinish");

	struct APC_Player_C_OnRotationFinish_Params {
	};
	APC_Player_C_OnRotationFinish_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.FillDialogueSyncArray
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NodeId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dialogue_Events	Type: TArray<class UDialogueEvents*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::FillDialogueSyncArray(int32_t NodeId, TArray<class UDialogueEvents*>* Dialogue_Events) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.FillDialogueSyncArray");

	struct APC_Player_C_FillDialogueSyncArray_Params {
		int32_t NodeId;			//Offset: 0 | ElementSize: 4
		TArray<class UDialogueEvents*> Dialogue_Events;			//Offset: 8 | ElementSize: 16
	};
	APC_Player_C_FillDialogueSyncArray_Params params;
	params.NodeId = NodeId;

	UObject::ProcessEvent(fn, &params);
	if (Dialogue_Events != nullptr)
		*Dialogue_Events = params.Dialogue_Events;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateDialogueSyncArray
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Node_Id	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::UpdateDialogueSyncArray(int32_t Node_Id, int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateDialogueSyncArray");

	struct APC_Player_C_UpdateDialogueSyncArray_Params {
		int32_t Node_Id;			//Offset: 0 | ElementSize: 4
		int32_t Value;			//Offset: 4 | ElementSize: 4
	};
	APC_Player_C_UpdateDialogueSyncArray_Params params;
	params.Node_Id = Node_Id;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ClearDialogueSyncArray
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ClearDialogueSyncArray() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ClearDialogueSyncArray");

	struct APC_Player_C_ClearDialogueSyncArray_Params {
	};
	APC_Player_C_ClearDialogueSyncArray_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CheckForFinishedNodes
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CheckForFinishedNodes() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CheckForFinishedNodes");

	struct APC_Player_C_CheckForFinishedNodes_Params {
	};
	APC_Player_C_CheckForFinishedNodes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RunServerFallbackDialogueLogic
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RunServerFallbackDialogueLogic(class AActor* NPCActor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RunServerFallbackDialogueLogic");

	struct APC_Player_C_RunServerFallbackDialogueLogic_Params {
		class AActor* NPCActor;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RunServerFallbackDialogueLogic_Params params;
	params.NPCActor = NPCActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RunClientFallbackDialogueLogic
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::RunClientFallbackDialogueLogic(class AActor* NPCActor) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RunClientFallbackDialogueLogic");

	struct APC_Player_C_RunClientFallbackDialogueLogic_Params {
		class AActor* NPCActor;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_RunClientFallbackDialogueLogic_Params params;
	params.NPCActor = NPCActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.FillConditionsSyncArray
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NodesToCheck	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::FillConditionsSyncArray(TArray<int32_t>* NodesToCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.FillConditionsSyncArray");

	struct APC_Player_C_FillConditionsSyncArray_Params {
		TArray<int32_t> NodesToCheck;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_FillConditionsSyncArray_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NodesToCheck != nullptr)
		*NodesToCheck = params.NodesToCheck;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CheckForFinishedConditions
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CheckForFinishedConditions() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CheckForFinishedConditions");

	struct APC_Player_C_CheckForFinishedConditions_Params {
	};
	APC_Player_C_CheckForFinishedConditions_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateLoadingScreen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShowTips	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateLoadingScreen(bool ShowTips) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateLoadingScreen");

	struct APC_Player_C_CreateLoadingScreen_Params {
		bool ShowTips;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_CreateLoadingScreen_Params params;
	params.ShowTips = ShowTips;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RemoveLoadingScreen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::RemoveLoadingScreen() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RemoveLoadingScreen");

	struct APC_Player_C_RemoveLoadingScreen_Params {
	};
	APC_Player_C_RemoveLoadingScreen_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PrepareToolBufferMap
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolCost	Type: TArray<struct FST_ToolCost>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ToolActivities	Type: TArray<TEnumAsByte<E_Tools_Activity>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ToolBuffer	Type: TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	Flags: Parm, OutParm
/////////////////////////////////////////////
void APC_Player_C::PrepareToolBufferMap(TArray<struct FST_ToolCost>* ToolCost, TArray<TEnumAsByte<E_Tools_Activity>>* ToolActivities, TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>* ToolBuffer) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PrepareToolBufferMap");

	struct APC_Player_C_PrepareToolBufferMap_Params {
		TArray<struct FST_ToolCost> ToolCost;			//Offset: 0 | ElementSize: 16
		TArray<TEnumAsByte<E_Tools_Activity>> ToolActivities;			//Offset: 16 | ElementSize: 16
		TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ToolBuffer;			//Offset: 32 | ElementSize: 80
	};
	APC_Player_C_PrepareToolBufferMap_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToolCost != nullptr)
		*ToolCost = params.ToolCost;
	if (ToolActivities != nullptr)
		*ToolActivities = params.ToolActivities;
	if (ToolBuffer != nullptr)
		*ToolBuffer = params.ToolBuffer;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChoiceMenu_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ChoiceMenu_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChoiceMenu_Pressed");

	struct APC_Player_C_ChoiceMenu_Pressed_Params {
	};
	APC_Player_C_ChoiceMenu_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChoiceMenu_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ChoiceMenu_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChoiceMenu_Released");

	struct APC_Player_C_ChoiceMenu_Released_Params {
	};
	APC_Player_C_ChoiceMenu_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.EmoteMenu_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::EmoteMenu_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EmoteMenu_Pressed");

	struct APC_Player_C_EmoteMenu_Pressed_Params {
	};
	APC_Player_C_EmoteMenu_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.EmoteMenu_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::EmoteMenu_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EmoteMenu_Released");

	struct APC_Player_C_EmoteMenu_Released_Params {
	};
	APC_Player_C_EmoteMenu_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleChat_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleChat_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleChat_Pressed");

	struct APC_Player_C_ToggleChat_Pressed_Params {
	};
	APC_Player_C_ToggleChat_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RotateGhost_Input
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsRotatingLeft	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsReleased	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::RotateGhost_Input(bool IsRotatingLeft, bool IsReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RotateGhost_Input");

	struct APC_Player_C_RotateGhost_Input_Params {
		bool IsRotatingLeft;			//Offset: 0 | ElementSize: 1
		bool IsReleased;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_RotateGhost_Input_Params params;
	params.IsRotatingLeft = IsRotatingLeft;
	params.IsReleased = IsReleased;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.JumpAction_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::JumpAction_Released(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.JumpAction_Released");

	struct APC_Player_C_JumpAction_Released_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_JumpAction_Released_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.JumpAction_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::JumpAction_Pressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.JumpAction_Pressed");

	struct APC_Player_C_JumpAction_Pressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_JumpAction_Pressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DismountAction_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DismountAction_Pressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DismountAction_Pressed");

	struct APC_Player_C_DismountAction_Pressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_DismountAction_Pressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.DismountAction_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::DismountAction_Released(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DismountAction_Released");

	struct APC_Player_C_DismountAction_Released_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_DismountAction_Released_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SummonMount_Pressed
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::SummonMount_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SummonMount_Pressed");

	struct APC_Player_C_SummonMount_Pressed_Params {
	};
	APC_Player_C_SummonMount_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LookUpDownInputAxis
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::LookUpDownInputAxis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LookUpDownInputAxis");

	struct APC_Player_C_LookUpDownInputAxis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_LookUpDownInputAxis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LookLeftRightInputAxis
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::LookLeftRightInputAxis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LookLeftRightInputAxis");

	struct APC_Player_C_LookLeftRightInputAxis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_LookLeftRightInputAxis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.WalkAction_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::WalkAction_Pressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.WalkAction_Pressed");

	struct APC_Player_C_WalkAction_Pressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_WalkAction_Pressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.MouseWheelAxis
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::MouseWheelAxis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.MouseWheelAxis");

	struct APC_Player_C_MouseWheelAxis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_MouseWheelAxis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.MoveRightLeft
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::MoveRightLeft(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.MoveRightLeft");

	struct APC_Player_C_MoveRightLeft_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_MoveRightLeft_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.MoveForwardBackwards
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::MoveForwardBackwards(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.MoveForwardBackwards");

	struct APC_Player_C_MoveForwardBackwards_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_MoveForwardBackwards_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SprintAction_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SprintAction_Released(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SprintAction_Released");

	struct APC_Player_C_SprintAction_Released_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_SprintAction_Released_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SprintAction_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SprintAction_Pressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SprintAction_Pressed");

	struct APC_Player_C_SprintAction_Pressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_SprintAction_Pressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.SprintAction_Pressed_Double
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::SprintAction_Pressed_Double(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.SprintAction_Pressed_Double");

	struct APC_Player_C_SprintAction_Pressed_Double_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_SprintAction_Pressed_Double_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.StanceAction_Input
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsReleased	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::StanceAction_Input(bool IsReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.StanceAction_Input");

	struct APC_Player_C_StanceAction_Input_Params {
		bool IsReleased;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_StanceAction_Input_Params params;
	params.IsReleased = IsReleased;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.HoisterHoldableItem_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::HoisterHoldableItem_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.HoisterHoldableItem_Pressed");

	struct APC_Player_C_HoisterHoldableItem_Pressed_Params {
	};
	APC_Player_C_HoisterHoldableItem_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InteractAction_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InteractAction_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InteractAction_Released");

	struct APC_Player_C_InteractAction_Released_Params {
	};
	APC_Player_C_InteractAction_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InteractAction_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InteractAction_Pressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InteractAction_Pressed");

	struct APC_Player_C_InteractAction_Pressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InteractAction_Pressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.RightAction_Input
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Is_Released	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::RightAction_Input(bool Is_Released) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.RightAction_Input");

	struct APC_Player_C_RightAction_Input_Params {
		bool Is_Released;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_RightAction_Input_Params params;
	params.Is_Released = Is_Released;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.LeftAction_Input
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsReleased	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::LeftAction_Input(bool IsReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.LeftAction_Input");

	struct APC_Player_C_LeftAction_Input_Params {
		bool IsReleased;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_LeftAction_Input_Params params;
	params.IsReleased = IsReleased;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.QuickSlotMenu_Input
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::QuickSlotMenu_Input() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.QuickSlotMenu_Input");

	struct APC_Player_C_QuickSlotMenu_Input_Params {
	};
	APC_Player_C_QuickSlotMenu_Input_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Torch_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsReleased	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::Torch_Pressed(struct FKey Key, bool IsReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Torch_Pressed");

	struct APC_Player_C_Torch_Pressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool IsReleased;			//Offset: 24 | ElementSize: 1
	};
	APC_Player_C_Torch_Pressed_Params params;
	params.Key = Key;
	params.IsReleased = IsReleased;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OpenBookTab
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BookTab	Type: TEnumAsByte<E_InventoryMainTab>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OpenLastInventoryTab	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::OpenBookTab(TEnumAsByte<E_InventoryMainTab> BookTab, bool OpenLastInventoryTab) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OpenBookTab");

	struct APC_Player_C_OpenBookTab_Params {
		TEnumAsByte<E_InventoryMainTab> BookTab;			//Offset: 0 | ElementSize: 1
		bool OpenLastInventoryTab;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_OpenBookTab_Params params;
	params.BookTab = BookTab;
	params.OpenLastInventoryTab = OpenLastInventoryTab;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CanOpenBookTab
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Can	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CanOpenBookTab(bool* Can) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CanOpenBookTab");

	struct APC_Player_C_CanOpenBookTab_Params {
		bool Can;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_CanOpenBookTab_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Can != nullptr)
		*Can = params.Can;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnLastInventoryTab_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnLastInventoryTab_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnLastInventoryTab_Pressed");

	struct APC_Player_C_OnLastInventoryTab_Pressed_Params {
	};
	APC_Player_C_OnLastInventoryTab_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNum5_Pressed_TeleportCheat
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNum5_Pressed_TeleportCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNum5_Pressed_TeleportCheat");

	struct APC_Player_C_OnNum5_Pressed_TeleportCheat_Params {
	};
	APC_Player_C_OnNum5_Pressed_TeleportCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleYeetHitCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleYeetHitCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleYeetHitCheat");

	struct APC_Player_C_ToggleYeetHitCheat_Params {
	};
	APC_Player_C_ToggleYeetHitCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNum6_Pressed_YeetCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNum6_Pressed_YeetCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNum6_Pressed_YeetCheat");

	struct APC_Player_C_OnNum6_Pressed_YeetCheat_Params {
	};
	APC_Player_C_OnNum6_Pressed_YeetCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNum3_Pressed_FlyingCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNum3_Pressed_FlyingCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNum3_Pressed_FlyingCheat");

	struct APC_Player_C_OnNum3_Pressed_FlyingCheat_Params {
	};
	APC_Player_C_OnNum3_Pressed_FlyingCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNum8_pressed_RagdollCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNum8_pressed_RagdollCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNum8_pressed_RagdollCheat");

	struct APC_Player_C_OnNum8_pressed_RagdollCheat_Params {
	};
	APC_Player_C_OnNum8_pressed_RagdollCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNumDot_Pressed_ChangeSexCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNumDot_Pressed_ChangeSexCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNumDot_Pressed_ChangeSexCheat");

	struct APC_Player_C_OnNumDot_Pressed_ChangeSexCheat_Params {
	};
	APC_Player_C_OnNumDot_Pressed_ChangeSexCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNum4_Pressed_TeleportToMarkerCheat
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNum4_Pressed_TeleportToMarkerCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNum4_Pressed_TeleportToMarkerCheat");

	struct APC_Player_C_OnNum4_Pressed_TeleportToMarkerCheat_Params {
	};
	APC_Player_C_OnNum4_Pressed_TeleportToMarkerCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleEvent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheatStart	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheatEnd	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ToggleEvent(bool CheatStart, bool CheatEnd) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleEvent");

	struct APC_Player_C_ToggleEvent_Params {
		bool CheatStart;			//Offset: 0 | ElementSize: 1
		bool CheatEnd;			//Offset: 1 | ElementSize: 1
	};
	APC_Player_C_ToggleEvent_Params params;
	params.CheatStart = CheatStart;
	params.CheatEnd = CheatEnd;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnBackspace_Pressed_WeightCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnBackspace_Pressed_WeightCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnBackspace_Pressed_WeightCheat");

	struct APC_Player_C_OnBackspace_Pressed_WeightCheat_Params {
	};
	APC_Player_C_OnBackspace_Pressed_WeightCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.On_WeightCheatChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::On_WeightCheatChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.On_WeightCheatChanged");

	struct APC_Player_C_On_WeightCheatChanged_Params {
	};
	APC_Player_C_On_WeightCheatChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNumPlus_Pressed_AddGameSpeed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNumPlus_Pressed_AddGameSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNumPlus_Pressed_AddGameSpeed");

	struct APC_Player_C_OnNumPlus_Pressed_AddGameSpeed_Params {
	};
	APC_Player_C_OnNumPlus_Pressed_AddGameSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNUmMinus_Pressed_SubtractGameSpeed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNUmMinus_Pressed_SubtractGameSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNUmMinus_Pressed_SubtractGameSpeed");

	struct APC_Player_C_OnNUmMinus_Pressed_SubtractGameSpeed_Params {
	};
	APC_Player_C_OnNUmMinus_Pressed_SubtractGameSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnInsert_Pressed_ChangeFovCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnInsert_Pressed_ChangeFovCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnInsert_Pressed_ChangeFovCheat");

	struct APC_Player_C_OnInsert_Pressed_ChangeFovCheat_Params {
	};
	APC_Player_C_OnInsert_Pressed_ChangeFovCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChangeCharacterCheat
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ChangeCharacterCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeCharacterCheat");

	struct APC_Player_C_ChangeCharacterCheat_Params {
	};
	APC_Player_C_ChangeCharacterCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.XboxMessageDelegate
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: messageReason	Type: E_MessageReason	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::XboxMessageDelegate(E_MessageReason messageReason) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.XboxMessageDelegate");

	struct APC_Player_C_XboxMessageDelegate_Params {
		E_MessageReason messageReason;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_XboxMessageDelegate_Params params;
	params.messageReason = messageReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PS5MessageDelegate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: messageReason	Type: E_MessageReason	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::PS5MessageDelegate(E_MessageReason messageReason) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PS5MessageDelegate");

	struct APC_Player_C_PS5MessageDelegate_Params {
		E_MessageReason messageReason;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_PS5MessageDelegate_Params params;
	params.messageReason = messageReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.EnterFreeCam
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::EnterFreeCam() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EnterFreeCam");

	struct APC_Player_C_EnterFreeCam_Params {
	};
	APC_Player_C_EnterFreeCam_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleHUD
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleHUD");

	struct APC_Player_C_ToggleHUD_Params {
	};
	APC_Player_C_ToggleHUD_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleHeirHairCut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleHeirHairCut() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleHeirHairCut");

	struct APC_Player_C_ToggleHeirHairCut_Params {
	};
	APC_Player_C_ToggleHeirHairCut_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleNoticeBoard
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NoticeBoardReference	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ToggleNoticeBoard(class AActor* NoticeBoardReference) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleNoticeBoard");

	struct APC_Player_C_ToggleNoticeBoard_Params {
		class AActor* NoticeBoardReference;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_ToggleNoticeBoard_Params params;
	params.NoticeBoardReference = NoticeBoardReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleCrestCreator
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleCrestCreator() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleCrestCreator");

	struct APC_Player_C_ToggleCrestCreator_Params {
	};
	APC_Player_C_ToggleCrestCreator_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleEditVillageName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleEditVillageName() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleEditVillageName");

	struct APC_Player_C_ToggleEditVillageName_Params {
	};
	APC_Player_C_ToggleEditVillageName_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleTradingMenu
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WithNPC_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OtherInventoryComponentReference	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WithHorse_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: GiftGiving	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ToggleTradingMenu(bool WithNPC_, class UInventoryComponent_C* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleTradingMenu");

	struct APC_Player_C_ToggleTradingMenu_Params {
		bool WithNPC_;			//Offset: 0 | ElementSize: 1
		class UInventoryComponent_C* OtherInventoryComponentReference;			//Offset: 8 | ElementSize: 8
		bool WithHorse_;			//Offset: 16 | ElementSize: 1
		bool GiftGiving;			//Offset: 17 | ElementSize: 1
	};
	APC_Player_C_ToggleTradingMenu_Params params;
	params.WithNPC_ = WithNPC_;
	params.OtherInventoryComponentReference = OtherInventoryComponentReference;
	params.WithHorse_ = WithHorse_;
	params.GiftGiving = GiftGiving;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleInventory
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MainTab	Type: TEnumAsByte<E_InventoryMainTab>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OpenLastTab_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Close_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ToggleInventory(TEnumAsByte<E_InventoryMainTab> MainTab, bool OpenLastTab_, bool Close_) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleInventory");

	struct APC_Player_C_ToggleInventory_Params {
		TEnumAsByte<E_InventoryMainTab> MainTab;			//Offset: 0 | ElementSize: 1
		bool OpenLastTab_;			//Offset: 1 | ElementSize: 1
		bool Close_;			//Offset: 2 | ElementSize: 1
	};
	APC_Player_C_ToggleInventory_Params params;
	params.MainTab = MainTab;
	params.OpenLastTab_ = OpenLastTab_;
	params.Close_ = Close_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.EventToggleInventory
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::EventToggleInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EventToggleInventory");

	struct APC_Player_C_EventToggleInventory_Params {
	};
	APC_Player_C_EventToggleInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CameraActionInput
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsReleased	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CameraActionInput(struct FKey Key, bool IsReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CameraActionInput");

	struct APC_Player_C_CameraActionInput_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool IsReleased;			//Offset: 24 | ElementSize: 1
	};
	APC_Player_C_CameraActionInput_Params params;
	params.Key = Key;
	params.IsReleased = IsReleased;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateDeathScreen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeathType	Type: TEnumAsByte<E_DeathType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateDeathScreen");

	struct APC_Player_C_CreateDeathScreen_Params {
		TEnumAsByte<E_DeathType> DeathType;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_CreateDeathScreen_Params params;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateMainMenu
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CreateMainMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMainMenu");

	struct APC_Player_C_CreateMainMenu_Params {
	};
	APC_Player_C_CreateMainMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateIntro
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Oxbow_	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CreateIntro(bool Oxbow_) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateIntro");

	struct APC_Player_C_CreateIntro_Params {
		bool Oxbow_;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_CreateIntro_Params params;
	params.Oxbow_ = Oxbow_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateCutscene
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CreateCutscene() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateCutscene");

	struct APC_Player_C_CreateCutscene_Params {
	};
	APC_Player_C_CreateCutscene_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnNum9_Released_YeetEverythingCheat
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnNum9_Released_YeetEverythingCheat() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnNum9_Released_YeetEverythingCheat");

	struct APC_Player_C_OnNum9_Released_YeetEverythingCheat_Params {
	};
	APC_Player_C_OnNum9_Released_YeetEverythingCheat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateControlsSensitivity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::UpdateControlsSensitivity() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateControlsSensitivity");

	struct APC_Player_C_UpdateControlsSensitivity_Params {
	};
	APC_Player_C_UpdateControlsSensitivity_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChangeSteeringType_Event
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gamepad	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::ChangeSteeringType_Event(bool Gamepad) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeSteeringType_Event");

	struct APC_Player_C_ChangeSteeringType_Event_Params {
		bool Gamepad;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_ChangeSteeringType_Event_Params params;
	params.Gamepad = Gamepad;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Autorun
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Autorun() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Autorun");

	struct APC_Player_C_Autorun_Params {
	};
	APC_Player_C_Autorun_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetWidgetToFocusInputOn
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: WidgetToPassUIControlsTo	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetWidgetToFocusInputOn(class UObject** WidgetToPassUIControlsTo) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetWidgetToFocusInputOn");

	struct APC_Player_C_GetWidgetToFocusInputOn_Params {
		class UObject* WidgetToPassUIControlsTo;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetWidgetToFocusInputOn_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WidgetToPassUIControlsTo != nullptr)
		*WidgetToPassUIControlsTo = params.WidgetToPassUIControlsTo;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUIAdditionalInteraction_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnUIAdditionalInteraction_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUIAdditionalInteraction_Released");

	struct APC_Player_C_OnUIAdditionalInteraction_Released_Params {
	};
	APC_Player_C_OnUIAdditionalInteraction_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUISpecialAction_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnUISpecialAction_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUISpecialAction_Released");

	struct APC_Player_C_OnUISpecialAction_Released_Params {
	};
	APC_Player_C_OnUISpecialAction_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUIScrollLeftRight
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::OnUIScrollLeftRight(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUIScrollLeftRight");

	struct APC_Player_C_OnUIScrollLeftRight_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_OnUIScrollLeftRight_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUIGameMenu_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnUIGameMenu_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUIGameMenu_Pressed");

	struct APC_Player_C_OnUIGameMenu_Pressed_Params {
	};
	APC_Player_C_OnUIGameMenu_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Down
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: AxisValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::Down(float AxisValue) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Down");

	struct APC_Player_C_Down_Params {
		float AxisValue;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_Down_Params params;
	params.AxisValue = AxisValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUICancel_Pressed
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnUICancel_Pressed() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUICancel_Pressed");

	struct APC_Player_C_OnUICancel_Pressed_Params {
	};
	APC_Player_C_OnUICancel_Pressed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldAction_UI_Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop");

	struct APC_Player_C_InputHoldAction_UI_Drop_Params {
	};
	APC_Player_C_InputHoldAction_UI_Drop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldAction_UI_Confirm() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm");

	struct APC_Player_C_InputHoldAction_UI_Confirm_Params {
	};
	APC_Player_C_InputHoldAction_UI_Confirm_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldAction_UI_Special
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldAction_UI_Special() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Special");

	struct APC_Player_C_InputHoldAction_UI_Special_Params {
	};
	APC_Player_C_InputHoldAction_UI_Special_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUIDrop_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnUIDrop_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUIDrop_Released");

	struct APC_Player_C_OnUIDrop_Released_Params {
	};
	APC_Player_C_OnUIDrop_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnUIConfirm_Released
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::OnUIConfirm_Released() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnUIConfirm_Released");

	struct APC_Player_C_OnUIConfirm_Released_Params {
	};
	APC_Player_C_OnUIConfirm_Released_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetValidChildNameSelection
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ChildNameSelectionWidget	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetValidChildNameSelection(class UObject** ChildNameSelectionWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetValidChildNameSelection");

	struct APC_Player_C_GetValidChildNameSelection_Params {
		class UObject* ChildNameSelectionWidget;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetValidChildNameSelection_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ChildNameSelectionWidget != nullptr)
		*ChildNameSelectionWidget = params.ChildNameSelectionWidget;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetValidInvitationAcceptedPopup
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: InvitationAcceptedPopup	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetValidInvitationAcceptedPopup(class UObject** InvitationAcceptedPopup) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetValidInvitationAcceptedPopup");

	struct APC_Player_C_GetValidInvitationAcceptedPopup_Params {
		class UObject* InvitationAcceptedPopup;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetValidInvitationAcceptedPopup_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InvitationAcceptedPopup != nullptr)
		*InvitationAcceptedPopup = params.InvitationAcceptedPopup;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetValidCurrentTutorialWidget
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CurrentTutorialWidget	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetValidCurrentTutorialWidget(class UObject** CurrentTutorialWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetValidCurrentTutorialWidget");

	struct APC_Player_C_GetValidCurrentTutorialWidget_Params {
		class UObject* CurrentTutorialWidget;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetValidCurrentTutorialWidget_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CurrentTutorialWidget != nullptr)
		*CurrentTutorialWidget = params.CurrentTutorialWidget;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetValidCurrentMarriageNotificationWindow
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MarriageNotificationCurrentWindow	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetValidCurrentMarriageNotificationWindow(class UObject** MarriageNotificationCurrentWindow) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetValidCurrentMarriageNotificationWindow");

	struct APC_Player_C_GetValidCurrentMarriageNotificationWindow_Params {
		class UObject* MarriageNotificationCurrentWindow;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetValidCurrentMarriageNotificationWindow_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MarriageNotificationCurrentWindow != nullptr)
		*MarriageNotificationCurrentWindow = params.MarriageNotificationCurrentWindow;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetValidGameMenuUI
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: GameMenuUI	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetValidGameMenuUI(class UObject** GameMenuUI) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetValidGameMenuUI");

	struct APC_Player_C_GetValidGameMenuUI_Params {
		class UObject* GameMenuUI;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetValidGameMenuUI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GameMenuUI != nullptr)
		*GameMenuUI = params.GameMenuUI;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetValidSeasonJournalUI
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: SeasonJournalUI	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetValidSeasonJournalUI(class UObject** SeasonJournalUI) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetValidSeasonJournalUI");

	struct APC_Player_C_GetValidSeasonJournalUI_Params {
		class UObject* SeasonJournalUI;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetValidSeasonJournalUI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SeasonJournalUI != nullptr)
		*SeasonJournalUI = params.SeasonJournalUI;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChangeQuickslot
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuickslotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ChangeQuickslot(int32_t QuickslotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ChangeQuickslot");

	struct APC_Player_C_ChangeQuickslot_Params {
		int32_t QuickslotIndex;			//Offset: 0 | ElementSize: 4
	};
	APC_Player_C_ChangeQuickslot_Params params;
	params.QuickslotIndex = QuickslotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ContinueWithToggleCharacterCreator
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: RendererType	Type: TEnumAsByte<E_RendererType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreStartingPreset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HeirName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ContinueWithToggleCharacterCreator(TEnumAsByte<E_RendererType> RendererType, bool IgnoreStartingPreset, struct FName HeirName) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ContinueWithToggleCharacterCreator");

	struct APC_Player_C_ContinueWithToggleCharacterCreator_Params {
		TEnumAsByte<E_RendererType> RendererType;			//Offset: 0 | ElementSize: 1
		bool IgnoreStartingPreset;			//Offset: 1 | ElementSize: 1
		struct FName HeirName;			//Offset: 4 | ElementSize: 8
	};
	APC_Player_C_ContinueWithToggleCharacterCreator_Params params;
	params.RendererType = RendererType;
	params.IgnoreStartingPreset = IgnoreStartingPreset;
	params.HeirName = HeirName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayEmoteByCommand
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Emote	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::PlayEmoteByCommand(struct FName Emote) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayEmoteByCommand");

	struct APC_Player_C_PlayEmoteByCommand_Params {
		struct FName Emote;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_PlayEmoteByCommand_Params params;
	params.Emote = Emote;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.HandleChatEmotes
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Message	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::HandleChatEmotes(TArray<struct FString>* Message, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.HandleChatEmotes");

	struct APC_Player_C_HandleChatEmotes_Params {
		TArray<struct FString> Message;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	APC_Player_C_HandleChatEmotes_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Message != nullptr)
		*Message = params.Message;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Shenanigans
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Message	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void APC_Player_C::Shenanigans(TArray<struct FString>* Message) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Shenanigans");

	struct APC_Player_C_Shenanigans_Params {
		TArray<struct FString> Message;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_Shenanigans_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Message != nullptr)
		*Message = params.Message;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CanChatBeToggledOnHorse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::CanChatBeToggledOnHorse(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CanChatBeToggledOnHorse");

	struct APC_Player_C_CanChatBeToggledOnHorse_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_CanChatBeToggledOnHorse_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayForceFeedback
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::PlayForceFeedback(class UForceFeedbackEffect* NewForceFeedbackEffect) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayForceFeedback");

	struct APC_Player_C_PlayForceFeedback_Params {
		class UForceFeedbackEffect* NewForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_PlayForceFeedback_Params params;
	params.NewForceFeedbackEffect = NewForceFeedbackEffect;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PrepareToMount
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PrepareToMount");

	struct APC_Player_C_PrepareToMount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	APC_Player_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PrepareToDismount
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PrepareToDismount");

	struct APC_Player_C_PrepareToDismount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	APC_Player_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.IsMounted
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.IsMounted");

	struct APC_Player_C_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_IsMounted_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetCharacterPawn
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class APawn* APC_Player_C::GetCharacterPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetCharacterPawn");

	struct APC_Player_C_GetCharacterPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetCharacterPawn_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetCharacterMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AActor* APC_Player_C::GetCharacterMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetCharacterMount");

	struct APC_Player_C_GetCharacterMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetCharacterMount_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetCharacterController
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AController* APC_Player_C::GetCharacterController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetCharacterController");

	struct APC_Player_C_GetCharacterController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetCharacterController_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PossessCharacter
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: characterToPossess	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::PossessCharacter(class APawn* characterToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PossessCharacter");

	struct APC_Player_C_PossessCharacter_Params {
		class APawn* characterToPossess;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_PossessCharacter_Params params;
	params.characterToPossess = characterToPossess;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnRiderRemoved
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: removedRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::OnRiderRemoved(class AActor* removedRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRiderRemoved");

	struct APC_Player_C_OnRiderRemoved_Params {
		class AActor* removedRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	APC_Player_C_OnRiderRemoved_Params params;
	params.removedRider = removedRider;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnRiderAdded
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::OnRiderAdded(class AActor* newRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnRiderAdded");

	struct APC_Player_C_OnRiderAdded_Params {
		class AActor* newRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	APC_Player_C_OnRiderAdded_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnOtherRiderChangedSeats
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: otherRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: newSeatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: oldSeatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::OnOtherRiderChangedSeats(class AActor* otherRider, int32_t newSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnOtherRiderChangedSeats");

	struct APC_Player_C_OnOtherRiderChangedSeats_Params {
		class AActor* otherRider;			//Offset: 0 | ElementSize: 8
		int32_t newSeatId;			//Offset: 8 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 12 | ElementSize: 4
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	APC_Player_C_OnOtherRiderChangedSeats_Params params;
	params.otherRider = otherRider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnMountActionFailed
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: newLinkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, struct FMountActionResponse Response) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnMountActionFailed");

	struct APC_Player_C_OnMountActionFailed_Params {
		class AActor* newMount;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	APC_Player_C_OnMountActionFailed_Params params;
	params.newMount = newMount;
	params.newLinkedActor = newLinkedActor;
	params.Response = Response;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnDismountActionFailed
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: currentMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::OnDismountActionFailed(class AActor* currentMount, struct FMountActionResponse Response) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnDismountActionFailed");

	struct APC_Player_C_OnDismountActionFailed_Params {
		class AActor* currentMount;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	APC_Player_C_OnDismountActionFailed_Params params;
	params.currentMount = currentMount;
	params.Response = Response;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.OnChangeSeatActionFailed
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Response	Type: struct FMountActionResponse	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::OnChangeSeatActionFailed(struct FMountActionResponse Response) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.OnChangeSeatActionFailed");

	struct APC_Player_C_OnChangeSeatActionFailed_Params {
		struct FMountActionResponse Response;			//Offset: 0 | ElementSize: 3
		bool ReturnValue;			//Offset: 3 | ElementSize: 1
	};
	APC_Player_C_OnChangeSeatActionFailed_Params params;
	params.Response = Response;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetRiderControllerComponent
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class URiderControllerComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class URiderControllerComponent* APC_Player_C::GetRiderControllerComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetRiderControllerComponent");

	struct APC_Player_C_GetRiderControllerComponent_Params {
		class URiderControllerComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetRiderControllerComponent_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PNMS_PossessPawn
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: pawnToPossess	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::PNMS_PossessPawn(class APawn* pawnToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PNMS_PossessPawn");

	struct APC_Player_C_PNMS_PossessPawn_Params {
		class APawn* pawnToPossess;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	APC_Player_C_PNMS_PossessPawn_Params params;
	params.pawnToPossess = pawnToPossess;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BeginMountingActorToSeat
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::BeginMountingActorToSeat(class AActor* newMount, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BeginMountingActorToSeat");

	struct APC_Player_C_BeginMountingActorToSeat_Params {
		class AActor* newMount;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 20 | ElementSize: 3
		bool ReturnValue;			//Offset: 23 | ElementSize: 1
	};
	APC_Player_C_BeginMountingActorToSeat_Params params;
	params.newMount = newMount;
	params.linkedActor = linkedActor;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BeginMountingActor
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMount	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::BeginMountingActor(class AActor* newMount, class AActor* linkedActor, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BeginMountingActor");

	struct APC_Player_C_BeginMountingActor_Params {
		class AActor* newMount;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse mountingResponse;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	APC_Player_C_BeginMountingActor_Params params;
	params.newMount = newMount;
	params.linkedActor = linkedActor;

	UObject::ProcessEvent(fn, &params);
	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BeginDismountingActor
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::BeginDismountingActor(struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BeginDismountingActor");

	struct APC_Player_C_BeginDismountingActor_Params {
		struct FMountActionResponse Response;			//Offset: 0 | ElementSize: 3
		bool ReturnValue;			//Offset: 3 | ElementSize: 1
	};
	APC_Player_C_BeginDismountingActor_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BeginChangingSeatToIndex
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::BeginChangingSeatToIndex(int32_t seatIndex, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BeginChangingSeatToIndex");

	struct APC_Player_C_BeginChangingSeatToIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	APC_Player_C_BeginChangingSeatToIndex_Params params;
	params.seatIndex = seatIndex;

	UObject::ProcessEvent(fn, &params);
	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BeginChangingSeatById
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: mountingResponse	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::BeginChangingSeatById(int32_t seatId, struct FMountActionResponse* mountingResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BeginChangingSeatById");

	struct APC_Player_C_BeginChangingSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse mountingResponse;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	APC_Player_C_BeginChangingSeatById_Params params;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	if (mountingResponse != nullptr)
		*mountingResponse = params.mountingResponse;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.BPI_RefreshSetSteering
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::BPI_RefreshSetSteering() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.BPI_RefreshSetSteering");

	struct APC_Player_C_BPI_RefreshSetSteering_Params {
	};
	APC_Player_C_BPI_RefreshSetSteering_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetUIEventScreen_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EventScreen	Type: class UUserWidget*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetUIEventScreen_BPI(class UUserWidget** EventScreen) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetUIEventScreen_BPI");

	struct APC_Player_C_GetUIEventScreen_BPI_Params {
		class UUserWidget* EventScreen;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetUIEventScreen_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EventScreen != nullptr)
		*EventScreen = params.EventScreen;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetTimeManager_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeManager	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetTimeManager_BPI(class UObject** TimeManager) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetTimeManager_BPI");

	struct APC_Player_C_GetTimeManager_BPI_Params {
		class UObject* TimeManager;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetTimeManager_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TimeManager != nullptr)
		*TimeManager = params.TimeManager;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetVillageJournalManager_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageJournalManager	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetVillageJournalManager_BPI(class UObject** VillageJournalManager) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetVillageJournalManager_BPI");

	struct APC_Player_C_GetVillageJournalManager_BPI_Params {
		class UObject* VillageJournalManager;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetVillageJournalManager_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VillageJournalManager != nullptr)
		*VillageJournalManager = params.VillageJournalManager;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UseOnlyControllsForUI_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: UseOnlyControllsForUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void APC_Player_C::UseOnlyControllsForUI_BPI(bool* UseOnlyControllsForUI) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UseOnlyControllsForUI_BPI");

	struct APC_Player_C_UseOnlyControllsForUI_BPI_Params {
		bool UseOnlyControllsForUI;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_UseOnlyControllsForUI_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (UseOnlyControllsForUI != nullptr)
		*UseOnlyControllsForUI = params.UseOnlyControllsForUI;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetDeathScreen_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeathScreen	Type: class UUserWidget*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::GetDeathScreen_BPI(class UUserWidget** DeathScreen) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetDeathScreen_BPI");

	struct APC_Player_C_GetDeathScreen_BPI_Params {
		class UUserWidget* DeathScreen;			//Offset: 0 | ElementSize: 8
	};
	APC_Player_C_GetDeathScreen_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DeathScreen != nullptr)
		*DeathScreen = params.DeathScreen;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ProcessChatCommand_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatMessage	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Output	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::ProcessChatCommand_BPI(struct FString ChatMessage, struct FString* Output) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ProcessChatCommand_BPI");

	struct APC_Player_C_ProcessChatCommand_BPI_Params {
		struct FString ChatMessage;			//Offset: 0 | ElementSize: 16
		struct FString Output;			//Offset: 16 | ElementSize: 16
	};
	APC_Player_C_ProcessChatCommand_BPI_Params params;
	params.ChatMessage = ChatMessage;

	UObject::ProcessEvent(fn, &params);
	if (Output != nullptr)
		*Output = params.Output;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.WasActorUpdated_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool APC_Player_C::WasActorUpdated_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.WasActorUpdated_BPI");

	struct APC_Player_C_WasActorUpdated_BPI_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	APC_Player_C_WasActorUpdated_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.GetMontagesForReplicaton_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: TArray<struct FMontageDataForRep>	Flags: Parm, OutParm, ReturnParm
/////////////////////////////////////////////
TArray<struct FMontageDataForRep> APC_Player_C::GetMontagesForReplicaton_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.GetMontagesForReplicaton_BPI");

	struct APC_Player_C_GetMontagesForReplicaton_BPI_Params {
		TArray<struct FMontageDataForRep> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	APC_Player_C_GetMontagesForReplicaton_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// InputAxisDelegateBinding PC_Player.PC_Player_C.InputAxisDelegateBinding_1
// Flags: Public, Private, Delegate, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputAxisDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("InputAxisDelegateBinding PC_Player.PC_Player_C.InputAxisDelegateBinding_1");

	struct APC_Player_C_InputAxisDelegateBinding_1_Params {
	};
	APC_Player_C_InputAxisDelegateBinding_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// InputAxisKeyDelegateBinding PC_Player.PC_Player_C.InputAxisKeyDelegateBinding_1
// Flags: BlueprintCosmetic
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputAxisKeyDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("InputAxisKeyDelegateBinding PC_Player.PC_Player_C.InputAxisKeyDelegateBinding_1");

	struct APC_Player_C_InputAxisKeyDelegateBinding_1_Params {
	};
	APC_Player_C_InputAxisKeyDelegateBinding_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}