#include "../SDK.h"
#include "PC_Player_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame APC_Player_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 1392);
}
struct FPointerToUberGraphFrame* APC_Player_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 1392);
}
void APC_Player_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of riderController
// Declaration: class URiderControllerComponent* riderController
class URiderControllerComponent* APC_Player_C::M_GetriderController() const {
	return Read<class URiderControllerComponent*>((byte*)this + 1400);
}
class URiderControllerComponent** APC_Player_C::M_PtrGetriderController() {
	return reinterpret_cast<class URiderControllerComponent**>((byte*)this + 1400);
}
void APC_Player_C::M_SetriderController(const class URiderControllerComponent*& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of UI_PlayerHUDReference
// Declaration: class UUI_HUD_C* UI_PlayerHUDReference
class UUI_HUD_C* APC_Player_C::M_GetUI_PlayerHUDReference() const {
	return Read<class UUI_HUD_C*>((byte*)this + 1408);
}
class UUI_HUD_C** APC_Player_C::M_PtrGetUI_PlayerHUDReference() {
	return reinterpret_cast<class UUI_HUD_C**>((byte*)this + 1408);
}
void APC_Player_C::M_SetUI_PlayerHUDReference(const class UUI_HUD_C*& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of UI_TradingMenuReference
// Declaration: class UUI_Trading_C* UI_TradingMenuReference
class UUI_Trading_C* APC_Player_C::M_GetUI_TradingMenuReference() const {
	return Read<class UUI_Trading_C*>((byte*)this + 1416);
}
class UUI_Trading_C** APC_Player_C::M_PtrGetUI_TradingMenuReference() {
	return reinterpret_cast<class UUI_Trading_C**>((byte*)this + 1416);
}
void APC_Player_C::M_SetUI_TradingMenuReference(const class UUI_Trading_C*& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of UI_ReconnectController
// Declaration: class UUserWidget* UI_ReconnectController
class UUserWidget* APC_Player_C::M_GetUI_ReconnectController() const {
	return Read<class UUserWidget*>((byte*)this + 1424);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_ReconnectController() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1424);
}
void APC_Player_C::M_SetUI_ReconnectController(const class UUserWidget*& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of UI_UserLoggedOut
// Declaration: class UUserWidget* UI_UserLoggedOut
class UUserWidget* APC_Player_C::M_GetUI_UserLoggedOut() const {
	return Read<class UUserWidget*>((byte*)this + 1432);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_UserLoggedOut() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1432);
}
void APC_Player_C::M_SetUI_UserLoggedOut(const class UUserWidget*& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of UI_DialogueChangeToHeirUIReference
// Declaration: class UUserWidget* UI_DialogueChangeToHeirUIReference
class UUserWidget* APC_Player_C::M_GetUI_DialogueChangeToHeirUIReference() const {
	return Read<class UUserWidget*>((byte*)this + 1440);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_DialogueChangeToHeirUIReference() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1440);
}
void APC_Player_C::M_SetUI_DialogueChangeToHeirUIReference(const class UUserWidget*& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of GameInstanceReference
// Declaration: class UGI_MedievalDynasty_C* GameInstanceReference
class UGI_MedievalDynasty_C* APC_Player_C::M_GetGameInstanceReference() const {
	return Read<class UGI_MedievalDynasty_C*>((byte*)this + 1448);
}
class UGI_MedievalDynasty_C** APC_Player_C::M_PtrGetGameInstanceReference() {
	return reinterpret_cast<class UGI_MedievalDynasty_C**>((byte*)this + 1448);
}
void APC_Player_C::M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of IsInFreeMode
// Declaration: bool IsInFreeMode
bool APC_Player_C::M_GetIsInFreeMode() const {
	return Read<bool>((byte*)this + 1456);
}
bool* APC_Player_C::M_PtrGetIsInFreeMode() {
	return reinterpret_cast<bool*>((byte*)this + 1456);
}
void APC_Player_C::M_SetIsInFreeMode(const bool& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of SpectatorPawnReference
// Declaration: class AP_Spectator_C* SpectatorPawnReference
class AP_Spectator_C* APC_Player_C::M_GetSpectatorPawnReference() const {
	return Read<class AP_Spectator_C*>((byte*)this + 1464);
}
class AP_Spectator_C** APC_Player_C::M_PtrGetSpectatorPawnReference() {
	return reinterpret_cast<class AP_Spectator_C**>((byte*)this + 1464);
}
void APC_Player_C::M_SetSpectatorPawnReference(const class AP_Spectator_C*& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of PlayerCharacterReference
// Declaration: class ABP_PlayerCharacter_C* PlayerCharacterReference
class ABP_PlayerCharacter_C* APC_Player_C::M_GetPlayerCharacterReference() const {
	return Read<class ABP_PlayerCharacter_C*>((byte*)this + 1472);
}
class ABP_PlayerCharacter_C** APC_Player_C::M_PtrGetPlayerCharacterReference() {
	return reinterpret_cast<class ABP_PlayerCharacter_C**>((byte*)this + 1472);
}
void APC_Player_C::M_SetPlayerCharacterReference(const class ABP_PlayerCharacter_C*& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of IsGameMenuActive
// Declaration: bool IsGameMenuActive
bool APC_Player_C::M_GetIsGameMenuActive() const {
	return Read<bool>((byte*)this + 1480);
}
bool* APC_Player_C::M_PtrGetIsGameMenuActive() {
	return reinterpret_cast<bool*>((byte*)this + 1480);
}
void APC_Player_C::M_SetIsGameMenuActive(const bool& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of IsInventoryKeyDown
// Declaration: bool IsInventoryKeyDown
bool APC_Player_C::M_GetIsInventoryKeyDown() const {
	return Read<bool>((byte*)this + 1481);
}
bool* APC_Player_C::M_PtrGetIsInventoryKeyDown() {
	return reinterpret_cast<bool*>((byte*)this + 1481);
}
void APC_Player_C::M_SetIsInventoryKeyDown(const bool& value) {
	Write((byte*)this + 1481, value);
}
// Member Getter and Setter of AnotherDialogue
// Declaration: bool AnotherDialogue
bool APC_Player_C::M_GetAnotherDialogue() const {
	return Read<bool>((byte*)this + 1482);
}
bool* APC_Player_C::M_PtrGetAnotherDialogue() {
	return reinterpret_cast<bool*>((byte*)this + 1482);
}
void APC_Player_C::M_SetAnotherDialogue(const bool& value) {
	Write((byte*)this + 1482, value);
}
// Member Getter and Setter of UI_EventScreen
// Declaration: class UUserWidget* UI_EventScreen
class UUserWidget* APC_Player_C::M_GetUI_EventScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1488);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_EventScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1488);
}
void APC_Player_C::M_SetUI_EventScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of IsMainMenuActive
// Declaration: bool IsMainMenuActive
bool APC_Player_C::M_GetIsMainMenuActive() const {
	return Read<bool>((byte*)this + 1496);
}
bool* APC_Player_C::M_PtrGetIsMainMenuActive() {
	return reinterpret_cast<bool*>((byte*)this + 1496);
}
void APC_Player_C::M_SetIsMainMenuActive(const bool& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of IsEventActive
// Declaration: bool IsEventActive
bool APC_Player_C::M_GetIsEventActive() const {
	return Read<bool>((byte*)this + 1497);
}
bool* APC_Player_C::M_PtrGetIsEventActive() {
	return reinterpret_cast<bool*>((byte*)this + 1497);
}
void APC_Player_C::M_SetIsEventActive(const bool& value) {
	Write((byte*)this + 1497, value);
}
// Member Getter and Setter of CancelButtonPressed
// Declaration: bool CancelButtonPressed
bool APC_Player_C::M_GetCancelButtonPressed() const {
	return Read<bool>((byte*)this + 1498);
}
bool* APC_Player_C::M_PtrGetCancelButtonPressed() {
	return reinterpret_cast<bool*>((byte*)this + 1498);
}
void APC_Player_C::M_SetCancelButtonPressed(const bool& value) {
	Write((byte*)this + 1498, value);
}
// Member Getter and Setter of Goal
// Declaration: struct FVector Goal
struct FVector APC_Player_C::M_GetGoal() const {
	return Read<struct FVector>((byte*)this + 1500);
}
struct FVector* APC_Player_C::M_PtrGetGoal() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1500);
}
void APC_Player_C::M_SetGoal(const struct FVector& value) {
	Write((byte*)this + 1500, value);
}
// Member Getter and Setter of RotateToGoal
// Declaration: struct FVector RotateToGoal
struct FVector APC_Player_C::M_GetRotateToGoal() const {
	return Read<struct FVector>((byte*)this + 1512);
}
struct FVector* APC_Player_C::M_PtrGetRotateToGoal() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1512);
}
void APC_Player_C::M_SetRotateToGoal(const struct FVector& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of InventoryTabToOpen
// Declaration: TEnumAsByte<E_InventoryMainTab> InventoryTabToOpen
TEnumAsByte<E_InventoryMainTab> APC_Player_C::M_GetInventoryTabToOpen() const {
	return Read<TEnumAsByte<E_InventoryMainTab>>((byte*)this + 1524);
}
TEnumAsByte<E_InventoryMainTab>* APC_Player_C::M_PtrGetInventoryTabToOpen() {
	return reinterpret_cast<TEnumAsByte<E_InventoryMainTab>*>((byte*)this + 1524);
}
void APC_Player_C::M_SetInventoryTabToOpen(const TEnumAsByte<E_InventoryMainTab>& value) {
	Write((byte*)this + 1524, value);
}
// Member Getter and Setter of ShouldOpenLastTab_
// Declaration: bool ShouldOpenLastTab_
bool APC_Player_C::M_GetShouldOpenLastTab_() const {
	return Read<bool>((byte*)this + 1525);
}
bool* APC_Player_C::M_PtrGetShouldOpenLastTab_() {
	return reinterpret_cast<bool*>((byte*)this + 1525);
}
void APC_Player_C::M_SetShouldOpenLastTab_(const bool& value) {
	Write((byte*)this + 1525, value);
}
// Member Getter and Setter of ClosingInventory_
// Declaration: bool ClosingInventory_
bool APC_Player_C::M_GetClosingInventory_() const {
	return Read<bool>((byte*)this + 1526);
}
bool* APC_Player_C::M_PtrGetClosingInventory_() {
	return reinterpret_cast<bool*>((byte*)this + 1526);
}
void APC_Player_C::M_SetClosingInventory_(const bool& value) {
	Write((byte*)this + 1526, value);
}
// Member Getter and Setter of LookAtActor
// Declaration: class AActor* LookAtActor
class AActor* APC_Player_C::M_GetLookAtActor() const {
	return Read<class AActor*>((byte*)this + 1528);
}
class AActor** APC_Player_C::M_PtrGetLookAtActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 1528);
}
void APC_Player_C::M_SetLookAtActor(const class AActor*& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of FinishedMovement
// Declaration: bool FinishedMovement
bool APC_Player_C::M_GetFinishedMovement() const {
	return Read<bool>((byte*)this + 1536);
}
bool* APC_Player_C::M_PtrGetFinishedMovement() {
	return reinterpret_cast<bool*>((byte*)this + 1536);
}
void APC_Player_C::M_SetFinishedMovement(const bool& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of RotateDuringMovement
// Declaration: bool RotateDuringMovement
bool APC_Player_C::M_GetRotateDuringMovement() const {
	return Read<bool>((byte*)this + 1537);
}
bool* APC_Player_C::M_PtrGetRotateDuringMovement() {
	return reinterpret_cast<bool*>((byte*)this + 1537);
}
void APC_Player_C::M_SetRotateDuringMovement(const bool& value) {
	Write((byte*)this + 1537, value);
}
// Member Getter and Setter of UsePlayerLookAt
// Declaration: bool UsePlayerLookAt
bool APC_Player_C::M_GetUsePlayerLookAt() const {
	return Read<bool>((byte*)this + 1538);
}
bool* APC_Player_C::M_PtrGetUsePlayerLookAt() {
	return reinterpret_cast<bool*>((byte*)this + 1538);
}
void APC_Player_C::M_SetUsePlayerLookAt(const bool& value) {
	Write((byte*)this + 1538, value);
}
// Member Getter and Setter of FadeStopped
// Declaration: bool FadeStopped
bool APC_Player_C::M_GetFadeStopped() const {
	return Read<bool>((byte*)this + 1539);
}
bool* APC_Player_C::M_PtrGetFadeStopped() {
	return reinterpret_cast<bool*>((byte*)this + 1539);
}
void APC_Player_C::M_SetFadeStopped(const bool& value) {
	Write((byte*)this + 1539, value);
}
// Member Getter and Setter of DeathScreenActive
// Declaration: bool DeathScreenActive
bool APC_Player_C::M_GetDeathScreenActive() const {
	return Read<bool>((byte*)this + 1540);
}
bool* APC_Player_C::M_PtrGetDeathScreenActive() {
	return reinterpret_cast<bool*>((byte*)this + 1540);
}
void APC_Player_C::M_SetDeathScreenActive(const bool& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of UI_IntroScreen
// Declaration: class UUserWidget* UI_IntroScreen
class UUserWidget* APC_Player_C::M_GetUI_IntroScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1544);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_IntroScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1544);
}
void APC_Player_C::M_SetUI_IntroScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of UI_Dialogue
// Declaration: class UUserWidget* UI_Dialogue
class UUserWidget* APC_Player_C::M_GetUI_Dialogue() const {
	return Read<class UUserWidget*>((byte*)this + 1552);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_Dialogue() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1552);
}
void APC_Player_C::M_SetUI_Dialogue(const class UUserWidget*& value) {
	Write((byte*)this + 1552, value);
}
// Member Getter and Setter of FovMode
// Declaration: unsigned char FovMode
unsigned char APC_Player_C::M_GetFovMode() const {
	return Read<unsigned char>((byte*)this + 1560);
}
unsigned char* APC_Player_C::M_PtrGetFovMode() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1560);
}
void APC_Player_C::M_SetFovMode(const unsigned char& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of LockFreeCam
// Declaration: bool LockFreeCam
bool APC_Player_C::M_GetLockFreeCam() const {
	return Read<bool>((byte*)this + 1561);
}
bool* APC_Player_C::M_PtrGetLockFreeCam() {
	return reinterpret_cast<bool*>((byte*)this + 1561);
}
void APC_Player_C::M_SetLockFreeCam(const bool& value) {
	Write((byte*)this + 1561, value);
}
// Member Getter and Setter of RotationBeforeFreeMode
// Declaration: struct FRotator RotationBeforeFreeMode
struct FRotator APC_Player_C::M_GetRotationBeforeFreeMode() const {
	return Read<struct FRotator>((byte*)this + 1564);
}
struct FRotator* APC_Player_C::M_PtrGetRotationBeforeFreeMode() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1564);
}
void APC_Player_C::M_SetRotationBeforeFreeMode(const struct FRotator& value) {
	Write((byte*)this + 1564, value);
}
// Member Getter and Setter of RotationInFreeMode
// Declaration: struct FRotator RotationInFreeMode
struct FRotator APC_Player_C::M_GetRotationInFreeMode() const {
	return Read<struct FRotator>((byte*)this + 1576);
}
struct FRotator* APC_Player_C::M_PtrGetRotationInFreeMode() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1576);
}
void APC_Player_C::M_SetRotationInFreeMode(const struct FRotator& value) {
	Write((byte*)this + 1576, value);
}
// Member Getter and Setter of ChangeSteeringType
// Declaration: TAssetPtr<class FChangeSteeringType__DelegateSignature> ChangeSteeringType
TAssetPtr<class FChangeSteeringType__DelegateSignature> APC_Player_C::M_GetChangeSteeringType() const {
	return Read<TAssetPtr<class FChangeSteeringType__DelegateSignature>>((byte*)this + 1592);
}
TAssetPtr<class FChangeSteeringType__DelegateSignature>* APC_Player_C::M_PtrGetChangeSteeringType() {
	return reinterpret_cast<TAssetPtr<class FChangeSteeringType__DelegateSignature>*>((byte*)this + 1592);
}
void APC_Player_C::M_SetChangeSteeringType(const TAssetPtr<class FChangeSteeringType__DelegateSignature>& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of IsSteeringSetToGamepad_
// Declaration: bool IsSteeringSetToGamepad_
bool APC_Player_C::M_GetIsSteeringSetToGamepad_() const {
	return Read<bool>((byte*)this + 1608);
}
bool* APC_Player_C::M_PtrGetIsSteeringSetToGamepad_() {
	return reinterpret_cast<bool*>((byte*)this + 1608);
}
void APC_Player_C::M_SetIsSteeringSetToGamepad_(const bool& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of IgnoreTechnologyCost
// Declaration: bool IgnoreTechnologyCost
bool APC_Player_C::M_GetIgnoreTechnologyCost() const {
	return Read<bool>((byte*)this + 1609);
}
bool* APC_Player_C::M_PtrGetIgnoreTechnologyCost() {
	return reinterpret_cast<bool*>((byte*)this + 1609);
}
void APC_Player_C::M_SetIgnoreTechnologyCost(const bool& value) {
	Write((byte*)this + 1609, value);
}
// Member Getter and Setter of IgnoreCraftingCost
// Declaration: bool IgnoreCraftingCost
bool APC_Player_C::M_GetIgnoreCraftingCost() const {
	return Read<bool>((byte*)this + 1610);
}
bool* APC_Player_C::M_PtrGetIgnoreCraftingCost() {
	return reinterpret_cast<bool*>((byte*)this + 1610);
}
void APC_Player_C::M_SetIgnoreCraftingCost(const bool& value) {
	Write((byte*)this + 1610, value);
}
// Member Getter and Setter of UI_ChangeToHeirScreen
// Declaration: class UUserWidget* UI_ChangeToHeirScreen
class UUserWidget* APC_Player_C::M_GetUI_ChangeToHeirScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1616);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_ChangeToHeirScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1616);
}
void APC_Player_C::M_SetUI_ChangeToHeirScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of OnInputKeybindChange
// Declaration: TAssetPtr<class FOnInputKeybindChange__DelegateSignature> OnInputKeybindChange
TAssetPtr<class FOnInputKeybindChange__DelegateSignature> APC_Player_C::M_GetOnInputKeybindChange() const {
	return Read<TAssetPtr<class FOnInputKeybindChange__DelegateSignature>>((byte*)this + 1624);
}
TAssetPtr<class FOnInputKeybindChange__DelegateSignature>* APC_Player_C::M_PtrGetOnInputKeybindChange() {
	return reinterpret_cast<TAssetPtr<class FOnInputKeybindChange__DelegateSignature>*>((byte*)this + 1624);
}
void APC_Player_C::M_SetOnInputKeybindChange(const TAssetPtr<class FOnInputKeybindChange__DelegateSignature>& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of UI_UP_Pressed
// Declaration: bool UI_UP_Pressed
bool APC_Player_C::M_GetUI_UP_Pressed() const {
	return Read<bool>((byte*)this + 1640);
}
bool* APC_Player_C::M_PtrGetUI_UP_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1640);
}
void APC_Player_C::M_SetUI_UP_Pressed(const bool& value) {
	Write((byte*)this + 1640, value);
}
// Member Getter and Setter of UI_Down_Pressed
// Declaration: bool UI_Down_Pressed
bool APC_Player_C::M_GetUI_Down_Pressed() const {
	return Read<bool>((byte*)this + 1641);
}
bool* APC_Player_C::M_PtrGetUI_Down_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1641);
}
void APC_Player_C::M_SetUI_Down_Pressed(const bool& value) {
	Write((byte*)this + 1641, value);
}
// Member Getter and Setter of UI_Left_Pressed
// Declaration: bool UI_Left_Pressed
bool APC_Player_C::M_GetUI_Left_Pressed() const {
	return Read<bool>((byte*)this + 1642);
}
bool* APC_Player_C::M_PtrGetUI_Left_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1642);
}
void APC_Player_C::M_SetUI_Left_Pressed(const bool& value) {
	Write((byte*)this + 1642, value);
}
// Member Getter and Setter of UI_Right_Pressed
// Declaration: bool UI_Right_Pressed
bool APC_Player_C::M_GetUI_Right_Pressed() const {
	return Read<bool>((byte*)this + 1643);
}
bool* APC_Player_C::M_PtrGetUI_Right_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1643);
}
void APC_Player_C::M_SetUI_Right_Pressed(const bool& value) {
	Write((byte*)this + 1643, value);
}
// Member Getter and Setter of UI_Previous_Pressed
// Declaration: bool UI_Previous_Pressed
bool APC_Player_C::M_GetUI_Previous_Pressed() const {
	return Read<bool>((byte*)this + 1644);
}
bool* APC_Player_C::M_PtrGetUI_Previous_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1644);
}
void APC_Player_C::M_SetUI_Previous_Pressed(const bool& value) {
	Write((byte*)this + 1644, value);
}
// Member Getter and Setter of UI_Next_Pressed
// Declaration: bool UI_Next_Pressed
bool APC_Player_C::M_GetUI_Next_Pressed() const {
	return Read<bool>((byte*)this + 1645);
}
bool* APC_Player_C::M_PtrGetUI_Next_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1645);
}
void APC_Player_C::M_SetUI_Next_Pressed(const bool& value) {
	Write((byte*)this + 1645, value);
}
// Member Getter and Setter of UI_Drop_Pressed
// Declaration: bool UI_Drop_Pressed
bool APC_Player_C::M_GetUI_Drop_Pressed() const {
	return Read<bool>((byte*)this + 1646);
}
bool* APC_Player_C::M_PtrGetUI_Drop_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1646);
}
void APC_Player_C::M_SetUI_Drop_Pressed(const bool& value) {
	Write((byte*)this + 1646, value);
}
// Member Getter and Setter of UI_Confirm_Pressed
// Declaration: bool UI_Confirm_Pressed
bool APC_Player_C::M_GetUI_Confirm_Pressed() const {
	return Read<bool>((byte*)this + 1647);
}
bool* APC_Player_C::M_PtrGetUI_Confirm_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1647);
}
void APC_Player_C::M_SetUI_Confirm_Pressed(const bool& value) {
	Write((byte*)this + 1647, value);
}
// Member Getter and Setter of UI_Special_Pressed
// Declaration: bool UI_Special_Pressed
bool APC_Player_C::M_GetUI_Special_Pressed() const {
	return Read<bool>((byte*)this + 1648);
}
bool* APC_Player_C::M_PtrGetUI_Special_Pressed() {
	return reinterpret_cast<bool*>((byte*)this + 1648);
}
void APC_Player_C::M_SetUI_Special_Pressed(const bool& value) {
	Write((byte*)this + 1648, value);
}
// Member Getter and Setter of CheckDropHold
// Declaration: bool CheckDropHold
bool APC_Player_C::M_GetCheckDropHold() const {
	return Read<bool>((byte*)this + 1649);
}
bool* APC_Player_C::M_PtrGetCheckDropHold() {
	return reinterpret_cast<bool*>((byte*)this + 1649);
}
void APC_Player_C::M_SetCheckDropHold(const bool& value) {
	Write((byte*)this + 1649, value);
}
// Member Getter and Setter of CheckConfirmHold
// Declaration: bool CheckConfirmHold
bool APC_Player_C::M_GetCheckConfirmHold() const {
	return Read<bool>((byte*)this + 1650);
}
bool* APC_Player_C::M_PtrGetCheckConfirmHold() {
	return reinterpret_cast<bool*>((byte*)this + 1650);
}
void APC_Player_C::M_SetCheckConfirmHold(const bool& value) {
	Write((byte*)this + 1650, value);
}
// Member Getter and Setter of CheckSpecialHold
// Declaration: bool CheckSpecialHold
bool APC_Player_C::M_GetCheckSpecialHold() const {
	return Read<bool>((byte*)this + 1651);
}
bool* APC_Player_C::M_PtrGetCheckSpecialHold() {
	return reinterpret_cast<bool*>((byte*)this + 1651);
}
void APC_Player_C::M_SetCheckSpecialHold(const bool& value) {
	Write((byte*)this + 1651, value);
}
// Member Getter and Setter of UI_Drop_HeldTime
// Declaration: float UI_Drop_HeldTime
float APC_Player_C::M_GetUI_Drop_HeldTime() const {
	return Read<float>((byte*)this + 1652);
}
float* APC_Player_C::M_PtrGetUI_Drop_HeldTime() {
	return reinterpret_cast<float*>((byte*)this + 1652);
}
void APC_Player_C::M_SetUI_Drop_HeldTime(const float& value) {
	Write((byte*)this + 1652, value);
}
// Member Getter and Setter of UI_Confirm_HeldTime
// Declaration: float UI_Confirm_HeldTime
float APC_Player_C::M_GetUI_Confirm_HeldTime() const {
	return Read<float>((byte*)this + 1656);
}
float* APC_Player_C::M_PtrGetUI_Confirm_HeldTime() {
	return reinterpret_cast<float*>((byte*)this + 1656);
}
void APC_Player_C::M_SetUI_Confirm_HeldTime(const float& value) {
	Write((byte*)this + 1656, value);
}
// Member Getter and Setter of UI_Special_HeldTime
// Declaration: float UI_Special_HeldTime
float APC_Player_C::M_GetUI_Special_HeldTime() const {
	return Read<float>((byte*)this + 1660);
}
float* APC_Player_C::M_PtrGetUI_Special_HeldTime() {
	return reinterpret_cast<float*>((byte*)this + 1660);
}
void APC_Player_C::M_SetUI_Special_HeldTime(const float& value) {
	Write((byte*)this + 1660, value);
}
// Member Getter and Setter of InputsDelay
// Declaration: float InputsDelay
float APC_Player_C::M_GetInputsDelay() const {
	return Read<float>((byte*)this + 1664);
}
float* APC_Player_C::M_PtrGetInputsDelay() {
	return reinterpret_cast<float*>((byte*)this + 1664);
}
void APC_Player_C::M_SetInputsDelay(const float& value) {
	Write((byte*)this + 1664, value);
}
// Member Getter and Setter of InputHeldCount
// Declaration: int32_t InputHeldCount
int32_t APC_Player_C::M_GetInputHeldCount() const {
	return Read<int32_t>((byte*)this + 1668);
}
int32_t* APC_Player_C::M_PtrGetInputHeldCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 1668);
}
void APC_Player_C::M_SetInputHeldCount(const int32_t& value) {
	Write((byte*)this + 1668, value);
}
// Member Getter and Setter of BaseInputsDelay
// Declaration: float BaseInputsDelay
float APC_Player_C::M_GetBaseInputsDelay() const {
	return Read<float>((byte*)this + 1672);
}
float* APC_Player_C::M_PtrGetBaseInputsDelay() {
	return reinterpret_cast<float*>((byte*)this + 1672);
}
void APC_Player_C::M_SetBaseInputsDelay(const float& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of SliderStepSizeMultiplier
// Declaration: float SliderStepSizeMultiplier
float APC_Player_C::M_GetSliderStepSizeMultiplier() const {
	return Read<float>((byte*)this + 1676);
}
float* APC_Player_C::M_PtrGetSliderStepSizeMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1676);
}
void APC_Player_C::M_SetSliderStepSizeMultiplier(const float& value) {
	Write((byte*)this + 1676, value);
}
// Member Getter and Setter of InputMode
// Declaration: TEnumAsByte<E_InputMode> InputMode
TEnumAsByte<E_InputMode> APC_Player_C::M_GetInputMode() const {
	return Read<TEnumAsByte<E_InputMode>>((byte*)this + 1680);
}
TEnumAsByte<E_InputMode>* APC_Player_C::M_PtrGetInputMode() {
	return reinterpret_cast<TEnumAsByte<E_InputMode>*>((byte*)this + 1680);
}
void APC_Player_C::M_SetInputMode(const TEnumAsByte<E_InputMode>& value) {
	Write((byte*)this + 1680, value);
}
// Member Getter and Setter of TimeForHoldAction
// Declaration: float TimeForHoldAction
float APC_Player_C::M_GetTimeForHoldAction() const {
	return Read<float>((byte*)this + 1684);
}
float* APC_Player_C::M_PtrGetTimeForHoldAction() {
	return reinterpret_cast<float*>((byte*)this + 1684);
}
void APC_Player_C::M_SetTimeForHoldAction(const float& value) {
	Write((byte*)this + 1684, value);
}
// Member Getter and Setter of MousePositionForSteering
// Declaration: struct FVector2D MousePositionForSteering
struct FVector2D APC_Player_C::M_GetMousePositionForSteering() const {
	return Read<struct FVector2D>((byte*)this + 1688);
}
struct FVector2D* APC_Player_C::M_PtrGetMousePositionForSteering() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 1688);
}
void APC_Player_C::M_SetMousePositionForSteering(const struct FVector2D& value) {
	Write((byte*)this + 1688, value);
}
// Member Getter and Setter of CheckMouseSteering
// Declaration: bool CheckMouseSteering
bool APC_Player_C::M_GetCheckMouseSteering() const {
	return Read<bool>((byte*)this + 1696);
}
bool* APC_Player_C::M_PtrGetCheckMouseSteering() {
	return reinterpret_cast<bool*>((byte*)this + 1696);
}
void APC_Player_C::M_SetCheckMouseSteering(const bool& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of IsAutorunOn
// Declaration: bool IsAutorunOn
bool APC_Player_C::M_GetIsAutorunOn() const {
	return Read<bool>((byte*)this + 1697);
}
bool* APC_Player_C::M_PtrGetIsAutorunOn() {
	return reinterpret_cast<bool*>((byte*)this + 1697);
}
void APC_Player_C::M_SetIsAutorunOn(const bool& value) {
	Write((byte*)this + 1697, value);
}
// Member Getter and Setter of ShouldHUDBeHidden
// Declaration: bool ShouldHUDBeHidden
bool APC_Player_C::M_GetShouldHUDBeHidden() const {
	return Read<bool>((byte*)this + 1698);
}
bool* APC_Player_C::M_PtrGetShouldHUDBeHidden() {
	return reinterpret_cast<bool*>((byte*)this + 1698);
}
void APC_Player_C::M_SetShouldHUDBeHidden(const bool& value) {
	Write((byte*)this + 1698, value);
}
// Member Getter and Setter of LeftActionPressed
// Declaration: bool LeftActionPressed
bool APC_Player_C::M_GetLeftActionPressed() const {
	return Read<bool>((byte*)this + 1699);
}
bool* APC_Player_C::M_PtrGetLeftActionPressed() {
	return reinterpret_cast<bool*>((byte*)this + 1699);
}
void APC_Player_C::M_SetLeftActionPressed(const bool& value) {
	Write((byte*)this + 1699, value);
}
// Member Getter and Setter of RightActionPressed
// Declaration: bool RightActionPressed
bool APC_Player_C::M_GetRightActionPressed() const {
	return Read<bool>((byte*)this + 1700);
}
bool* APC_Player_C::M_PtrGetRightActionPressed() {
	return reinterpret_cast<bool*>((byte*)this + 1700);
}
void APC_Player_C::M_SetRightActionPressed(const bool& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of UI_Cutscene
// Declaration: class UUserWidget* UI_Cutscene
class UUserWidget* APC_Player_C::M_GetUI_Cutscene() const {
	return Read<class UUserWidget*>((byte*)this + 1704);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_Cutscene() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1704);
}
void APC_Player_C::M_SetUI_Cutscene(const class UUserWidget*& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of CameraTransform
// Declaration: struct FTransform CameraTransform
struct FTransform APC_Player_C::M_GetCameraTransform() const {
	return Read<struct FTransform>((byte*)this + 1712);
}
struct FTransform* APC_Player_C::M_PtrGetCameraTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 1712);
}
void APC_Player_C::M_SetCameraTransform(const struct FTransform& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of LockCameraPosition
// Declaration: bool LockCameraPosition
bool APC_Player_C::M_GetLockCameraPosition() const {
	return Read<bool>((byte*)this + 1760);
}
bool* APC_Player_C::M_PtrGetLockCameraPosition() {
	return reinterpret_cast<bool*>((byte*)this + 1760);
}
void APC_Player_C::M_SetLockCameraPosition(const bool& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of IsMovingForInteraction
// Declaration: bool IsMovingForInteraction
bool APC_Player_C::M_GetIsMovingForInteraction() const {
	return Read<bool>((byte*)this + 1761);
}
bool* APC_Player_C::M_PtrGetIsMovingForInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 1761);
}
void APC_Player_C::M_SetIsMovingForInteraction(const bool& value) {
	Write((byte*)this + 1761, value);
}
// Member Getter and Setter of UI_MainMenu
// Declaration: class UUserWidget* UI_MainMenu
class UUserWidget* APC_Player_C::M_GetUI_MainMenu() const {
	return Read<class UUserWidget*>((byte*)this + 1768);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_MainMenu() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1768);
}
void APC_Player_C::M_SetUI_MainMenu(const class UUserWidget*& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of UI_DeathScreen
// Declaration: class UUserWidget* UI_DeathScreen
class UUserWidget* APC_Player_C::M_GetUI_DeathScreen() const {
	return Read<class UUserWidget*>((byte*)this + 1776);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_DeathScreen() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1776);
}
void APC_Player_C::M_SetUI_DeathScreen(const class UUserWidget*& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of UI_CheatMenu
// Declaration: class UUserWidget* UI_CheatMenu
class UUserWidget* APC_Player_C::M_GetUI_CheatMenu() const {
	return Read<class UUserWidget*>((byte*)this + 1784);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_CheatMenu() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1784);
}
void APC_Player_C::M_SetUI_CheatMenu(const class UUserWidget*& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of UI_HeirHairCut
// Declaration: class UUserWidget* UI_HeirHairCut
class UUserWidget* APC_Player_C::M_GetUI_HeirHairCut() const {
	return Read<class UUserWidget*>((byte*)this + 1792);
}
class UUserWidget** APC_Player_C::M_PtrGetUI_HeirHairCut() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 1792);
}
void APC_Player_C::M_SetUI_HeirHairCut(const class UUserWidget*& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of KeysToIgnoreOnConsoleInitialLaunch
// Declaration: TArray<struct FKey> KeysToIgnoreOnConsoleInitialLaunch
TArray<struct FKey> APC_Player_C::M_GetKeysToIgnoreOnConsoleInitialLaunch() const {
	return Read<TArray<struct FKey>>((byte*)this + 1800);
}
TArray<struct FKey>* APC_Player_C::M_PtrGetKeysToIgnoreOnConsoleInitialLaunch() {
	return reinterpret_cast<TArray<struct FKey>*>((byte*)this + 1800);
}
void APC_Player_C::M_SetKeysToIgnoreOnConsoleInitialLaunch(const TArray<struct FKey>& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of ForceDisplayedInputs
// Declaration: unsigned char ForceDisplayedInputs
unsigned char APC_Player_C::M_GetForceDisplayedInputs() const {
	return Read<unsigned char>((byte*)this + 1816);
}
unsigned char* APC_Player_C::M_PtrGetForceDisplayedInputs() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1816);
}
void APC_Player_C::M_SetForceDisplayedInputs(const unsigned char& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of ReconnectControlerUIOpen
// Declaration: bool ReconnectControlerUIOpen
bool APC_Player_C::M_GetReconnectControlerUIOpen() const {
	return Read<bool>((byte*)this + 1817);
}
bool* APC_Player_C::M_PtrGetReconnectControlerUIOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1817);
}
void APC_Player_C::M_SetReconnectControlerUIOpen(const bool& value) {
	Write((byte*)this + 1817, value);
}
// Member Getter and Setter of UserLoggedOutUIOpen
// Declaration: bool UserLoggedOutUIOpen
bool APC_Player_C::M_GetUserLoggedOutUIOpen() const {
	return Read<bool>((byte*)this + 1818);
}
bool* APC_Player_C::M_PtrGetUserLoggedOutUIOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1818);
}
void APC_Player_C::M_SetUserLoggedOutUIOpen(const bool& value) {
	Write((byte*)this + 1818, value);
}
// Member Getter and Setter of DialogueChangeToHeirUIOpen
// Declaration: bool DialogueChangeToHeirUIOpen
bool APC_Player_C::M_GetDialogueChangeToHeirUIOpen() const {
	return Read<bool>((byte*)this + 1819);
}
bool* APC_Player_C::M_PtrGetDialogueChangeToHeirUIOpen() {
	return reinterpret_cast<bool*>((byte*)this + 1819);
}
void APC_Player_C::M_SetDialogueChangeToHeirUIOpen(const bool& value) {
	Write((byte*)this + 1819, value);
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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
/////////////////////////////////////////////
void APC_Player_C::DialogueEventFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.DialogueEventFade");

	struct APC_Player_C_DialogueEventFade_Params {
		float FromAlpha;			//Offset: 0 | ElementSize: 4
		float ToAlpha;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		bool bShouldFadeAudio;			//Offset: 28 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 29 | ElementSize: 1
		bool ReverseOnFinish;			//Offset: 30 | ElementSize: 1
	};
	APC_Player_C_DialogueEventFade_Params params;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.Duration = Duration;
	params.Color = Color;
	params.bShouldFadeAudio = bShouldFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;
	params.ReverseOnFinish = ReverseOnFinish;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleHUD
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleHUD");

	struct APC_Player_C_ToggleHUD_Params {
	};
	APC_Player_C_ToggleHUD_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.XboxMessageDelegate
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleHeirHairCut
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::ToggleHeirHairCut() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.ToggleHeirHairCut");

	struct APC_Player_C_ToggleHeirHairCut_Params {
	};
	APC_Player_C_ToggleHeirHairCut_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldAction_UI_Special
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldAction_UI_Special() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Special");

	struct APC_Player_C_InputHoldAction_UI_Special_Params {
	};
	APC_Player_C_InputHoldAction_UI_Special_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputKnowledgeTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputKnowledgeTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputKnowledgeTab");

	struct APC_Player_C_InputKnowledgeTab_Params {
	};
	APC_Player_C_InputKnowledgeTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CreateCutscene() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateCutscene");

	struct APC_Player_C_CreateCutscene_Params {
	};
	APC_Player_C_CreateCutscene_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Autorun
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::Autorun() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.Autorun");

	struct APC_Player_C_Autorun_Params {
	};
	APC_Player_C_Autorun_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldAction_UI_Confirm() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm");

	struct APC_Player_C_InputHoldAction_UI_Confirm_Params {
	};
	APC_Player_C_InputHoldAction_UI_Confirm_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputHoldAction_UI_Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop");

	struct APC_Player_C_InputHoldAction_UI_Drop_Params {
	};
	APC_Player_C_InputHoldAction_UI_Drop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ChangeSteeringType_Event
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::PlayerLookAt_Interrupt_Event() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event");

	struct APC_Player_C_PlayerLookAt_Interrupt_Event_Params {
	};
	APC_Player_C_PlayerLookAt_Interrupt_Event_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.PlayerLookAt Event
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateControlsSensitivity
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::UpdateControlsSensitivity() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateControlsSensitivity");

	struct APC_Player_C_UpdateControlsSensitivity_Params {
	};
	APC_Player_C_UpdateControlsSensitivity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.EnterFreeCam
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::EnterFreeCam() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EnterFreeCam");

	struct APC_Player_C_EnterFreeCam_Params {
	};
	APC_Player_C_EnterFreeCam_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CreateIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateIntro");

	struct APC_Player_C_CreateIntro_Params {
	};
	APC_Player_C_CreateIntro_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateMainMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::CreateMainMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.CreateMainMenu");

	struct APC_Player_C_CreateMainMenu_Params {
	};
	APC_Player_C_CreateMainMenu_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.CreateDeathScreen
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputTechnologyTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputTechnologyTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputTechnologyTab");

	struct APC_Player_C_InputTechnologyTab_Params {
	};
	APC_Player_C_InputTechnologyTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.EventToggleInventory
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::EventToggleInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.EventToggleInventory");

	struct APC_Player_C_EventToggleInventory_Params {
	};
	APC_Player_C_EventToggleInventory_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputInventoryTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputInventoryTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputInventoryTab");

	struct APC_Player_C_InputInventoryTab_Params {
	};
	APC_Player_C_InputInventoryTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputMapTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputMapTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputMapTab");

	struct APC_Player_C_InputMapTab_Params {
	};
	APC_Player_C_InputMapTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputSkillsTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputSkillsTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputSkillsTab");

	struct APC_Player_C_InputSkillsTab_Params {
	};
	APC_Player_C_InputSkillsTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputJournalTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputJournalTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputJournalTab");

	struct APC_Player_C_InputJournalTab_Params {
	};
	APC_Player_C_InputJournalTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputManagementTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputManagementTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputManagementTab");

	struct APC_Player_C_InputManagementTab_Params {
	};
	APC_Player_C_InputManagementTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InputLastInventoryTab
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputLastInventoryTab() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InputLastInventoryTab");

	struct APC_Player_C_InputLastInventoryTab_Params {
	};
	APC_Player_C_InputLastInventoryTab_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.Player Move For Interaction
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleTradingMenu
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleEvent
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.ToggleInventory
// Flags: BlueprintCallable, BlueprintEvent
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Slash_K2Node_InputKeyEvent_1
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Slash_K2Node_InputKeyEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Slash_K2Node_InputKeyEvent_1");

	struct APC_Player_C_InpActEvt_Slash_K2Node_InputKeyEvent_1_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Slash_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_1
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Knowledge_K2Node_InputActionEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_1");

	struct APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_1_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_2
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Knowledge_K2Node_InputActionEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Knowledge_K2Node_InputActionEvent_2");

	struct APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_2_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Knowledge_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_3
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SummonMount_K2Node_InputActionEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_3");

	struct APC_Player_C_InpActEvt_SummonMount_K2Node_InputActionEvent_3_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SummonMount_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_4
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_DismountAction_K2Node_InputActionEvent_4(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_4");

	struct APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_4_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_5
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_DismountAction_K2Node_InputActionEvent_5(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_5");

	struct APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_5_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_6
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_6(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_6");

	struct APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_6_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_7
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_7(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_7");

	struct APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_7_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_8
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_8(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_8");

	struct APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_8_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_9
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_9(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_9");

	struct APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_9_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_10
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_10(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_10");

	struct APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_10_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_11
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_11(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_11");

	struct APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_11_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_12
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_HideHUD_K2Node_InputActionEvent_12(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_12");

	struct APC_Player_C_InpActEvt_HideHUD_K2Node_InputActionEvent_12_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_HideHUD_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_13
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChangeCharacter_K2Node_InputActionEvent_13(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_13");

	struct APC_Player_C_InpActEvt_ChangeCharacter_K2Node_InputActionEvent_13_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChangeCharacter_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_2
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_F9_K2Node_InputKeyEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_2");

	struct APC_Player_C_InpActEvt_F9_K2Node_InputKeyEvent_2_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_F9_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_3
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Equals_K2Node_InputKeyEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_3");

	struct APC_Player_C_InpActEvt_Equals_K2Node_InputKeyEvent_3_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Equals_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_14
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChangeInputAction_K2Node_InputActionEvent_14(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_14");

	struct APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_14_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_15
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChangeInputAction_K2Node_InputActionEvent_15(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_15");

	struct APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_15_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_4
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_F5_K2Node_InputKeyEvent_4(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_4");

	struct APC_Player_C_InpActEvt_F5_K2Node_InputKeyEvent_4_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_F5_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_16
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChoiceMenu_K2Node_InputActionEvent_16(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_16");

	struct APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_16_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_17
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_ChoiceMenu_K2Node_InputActionEvent_17(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_17");

	struct APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_17_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Insert_K2Node_InputKeyEvent_5
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Insert_K2Node_InputKeyEvent_5(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Insert_K2Node_InputKeyEvent_5");

	struct APC_Player_C_InpActEvt_Insert_K2Node_InputKeyEvent_5_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Insert_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_6
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Home_K2Node_InputKeyEvent_6(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_6");

	struct APC_Player_C_InpActEvt_Home_K2Node_InputKeyEvent_6_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Home_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_18
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Technology_K2Node_InputActionEvent_18(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_18");

	struct APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_18_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_19
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Technology_K2Node_InputActionEvent_19(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_19");

	struct APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_19_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_20
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_JumpAction_K2Node_InputActionEvent_20(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_20");

	struct APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_20_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_21
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_JumpAction_K2Node_InputActionEvent_21(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_21");

	struct APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_21_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_22
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_CameraAction_K2Node_InputActionEvent_22(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_22");

	struct APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_22_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_23
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_CameraAction_K2Node_InputActionEvent_23(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_23");

	struct APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_23_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_24
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_StanceAction_K2Node_InputActionEvent_24(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_24");

	struct APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_24_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_25
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_StanceAction_K2Node_InputActionEvent_25(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_25");

	struct APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_25_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_26
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_WalkAction_K2Node_InputActionEvent_26(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_26");

	struct APC_Player_C_InpActEvt_WalkAction_K2Node_InputActionEvent_26_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_WalkAction_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_27
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_27(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_27");

	struct APC_Player_C_InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_27_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_28
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_28(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_28");

	struct APC_Player_C_InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_28_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_29
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_NextSection_K2Node_InputActionEvent_29(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_29");

	struct APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_29_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_29_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_30
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_NextSection_K2Node_InputActionEvent_30(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_30");

	struct APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_30_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_30_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_31
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_31(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_31");

	struct APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_31_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_31_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_32
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_32(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_32");

	struct APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_32_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_32_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_33
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_GameMenu_K2Node_InputActionEvent_33(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_33");

	struct APC_Player_C_InpActEvt_GameMenu_K2Node_InputActionEvent_33_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_GameMenu_K2Node_InputActionEvent_33_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_34
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_34(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_34");

	struct APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_34_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_35
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_35(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_35");

	struct APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_35_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_35_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_7
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_E_K2Node_InputKeyEvent_7(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_7");

	struct APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_7_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_8
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_E_K2Node_InputKeyEvent_8(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_8");

	struct APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_8_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_36
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_36(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_36");

	struct APC_Player_C_InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_36_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_36_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_37
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InspectorMode_K2Node_InputActionEvent_37(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_37");

	struct APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_37_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_37_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_38
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InspectorMode_K2Node_InputActionEvent_38(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_38");

	struct APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_38_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_38_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_39
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SprintAction_K2Node_InputActionEvent_39(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_39");

	struct APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_39_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_39_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_40
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_SprintAction_K2Node_InputActionEvent_40(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_40");

	struct APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_40_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_40_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_41
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InteractAction_K2Node_InputActionEvent_41(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_41");

	struct APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_41_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_41_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_42
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_InteractAction_K2Node_InputActionEvent_42(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_42");

	struct APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_42_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_42_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_43
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot1_K2Node_InputActionEvent_43(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_43");

	struct APC_Player_C_InpActEvt_QuickSlot1_K2Node_InputActionEvent_43_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot1_K2Node_InputActionEvent_43_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_44
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot5_K2Node_InputActionEvent_44(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_44");

	struct APC_Player_C_InpActEvt_QuickSlot5_K2Node_InputActionEvent_44_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot5_K2Node_InputActionEvent_44_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_45
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot6_K2Node_InputActionEvent_45(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_45");

	struct APC_Player_C_InpActEvt_QuickSlot6_K2Node_InputActionEvent_45_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot6_K2Node_InputActionEvent_45_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_46
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot2_K2Node_InputActionEvent_46(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_46");

	struct APC_Player_C_InpActEvt_QuickSlot2_K2Node_InputActionEvent_46_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot2_K2Node_InputActionEvent_46_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_47
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot7_K2Node_InputActionEvent_47(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_47");

	struct APC_Player_C_InpActEvt_QuickSlot7_K2Node_InputActionEvent_47_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot7_K2Node_InputActionEvent_47_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_48
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot3_K2Node_InputActionEvent_48(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_48");

	struct APC_Player_C_InpActEvt_QuickSlot3_K2Node_InputActionEvent_48_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot3_K2Node_InputActionEvent_48_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_49
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot8_K2Node_InputActionEvent_49(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_49");

	struct APC_Player_C_InpActEvt_QuickSlot8_K2Node_InputActionEvent_49_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot8_K2Node_InputActionEvent_49_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_50
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickSlot4_K2Node_InputActionEvent_50(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_50");

	struct APC_Player_C_InpActEvt_QuickSlot4_K2Node_InputActionEvent_50_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickSlot4_K2Node_InputActionEvent_50_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_51
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RightAction_K2Node_InputActionEvent_51(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_51");

	struct APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_51_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_51_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_52
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_RightAction_K2Node_InputActionEvent_52(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_52");

	struct APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_52_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_52_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_53
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LeftAction_K2Node_InputActionEvent_53(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_53");

	struct APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_53_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_53_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_54
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LeftAction_K2Node_InputActionEvent_54(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_54");

	struct APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_54_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_54_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_55
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_QuickslotMenu_K2Node_InputActionEvent_55(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_55");

	struct APC_Player_C_InpActEvt_QuickslotMenu_K2Node_InputActionEvent_55_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_QuickslotMenu_K2Node_InputActionEvent_55_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_56
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Torch_K2Node_InputActionEvent_56(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_56");

	struct APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_56_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_56_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_57
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Drop_K2Node_InputActionEvent_57(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_57");

	struct APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_57_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_57_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_58
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Drop_K2Node_InputActionEvent_58(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_58");

	struct APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_58_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_58_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_9(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9");

	struct APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_10(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10");

	struct APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_10_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_11(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11");

	struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_12(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12");

	struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_12_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_13
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_13(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_13");

	struct APC_Player_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_13_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_59
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Management_K2Node_InputActionEvent_59(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_59");

	struct APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_59_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_59_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_60
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Management_K2Node_InputActionEvent_60(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_60");

	struct APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_60_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_60_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_14(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14");

	struct APC_Player_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_14_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_15
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Backslash_K2Node_InputKeyEvent_15(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_15");

	struct APC_Player_C_InpActEvt_Backslash_K2Node_InputKeyEvent_15_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Backslash_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_61
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_61(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_61");

	struct APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_61_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_61_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_62
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_62(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_62");

	struct APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_62_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_62_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_63
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Left_K2Node_InputActionEvent_63(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_63");

	struct APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_63_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_63_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_64
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Left_K2Node_InputActionEvent_64(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_64");

	struct APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_64_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_64_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_65
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Right_K2Node_InputActionEvent_65(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_65");

	struct APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_65_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_65_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_66
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Right_K2Node_InputActionEvent_66(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_66");

	struct APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_66_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_66_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_67
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Down_K2Node_InputActionEvent_67(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_67");

	struct APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_67_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_67_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_68
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Down_K2Node_InputActionEvent_68(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_68");

	struct APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_68_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_68_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_69
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Up_K2Node_InputActionEvent_69(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_69");

	struct APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_69_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_69_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_70
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Up_K2Node_InputActionEvent_70(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_70");

	struct APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_70_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_70_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_71
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Confirm_K2Node_InputActionEvent_71(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_71");

	struct APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_71_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_71_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_72
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_UI_Confirm_K2Node_InputActionEvent_72(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_72");

	struct APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_72_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_72_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_73
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LastInventoryTab_K2Node_InputActionEvent_73(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_73");

	struct APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_73_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_73_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_74
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_LastInventoryTab_K2Node_InputActionEvent_74(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_74");

	struct APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_74_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_74_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_75
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Journal_K2Node_InputActionEvent_75(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_75");

	struct APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_75_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_75_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_76
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Journal_K2Node_InputActionEvent_76(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_76");

	struct APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_76_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_76_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_77
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Skills_K2Node_InputActionEvent_77(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_77");

	struct APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_77_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_77_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_78
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Skills_K2Node_InputActionEvent_78(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_78");

	struct APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_78_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_78_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_79
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Map_K2Node_InputActionEvent_79(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_79");

	struct APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_79_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_79_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_80
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Map_K2Node_InputActionEvent_80(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_80");

	struct APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_80_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_80_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_16
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Multiply_K2Node_InputKeyEvent_16(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_16");

	struct APC_Player_C_InpActEvt_Multiply_K2Node_InputKeyEvent_16_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Multiply_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_81
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Inventory_K2Node_InputActionEvent_81(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_81");

	struct APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_81_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_81_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_82
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Inventory_K2Node_InputActionEvent_82(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_82");

	struct APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_82_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_82_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_17
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Subtract_K2Node_InputKeyEvent_17(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_17");

	struct APC_Player_C_InpActEvt_Subtract_K2Node_InputKeyEvent_17_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Subtract_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_18
// Flags: BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void APC_Player_C::InpActEvt_Add_K2Node_InputKeyEvent_18(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_18");

	struct APC_Player_C_InpActEvt_Add_K2Node_InputKeyEvent_18_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APC_Player_C_InpActEvt_Add_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function PC_Player.PC_Player_C.UpdateFoV
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void APC_Player_C::UpdateFoV() {
	static auto fn = UObject::FindObject<UFunction>("Function PC_Player.PC_Player_C.UpdateFoV");

	struct APC_Player_C_UpdateFoV_Params {
	};
	APC_Player_C_UpdateFoV_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// InputAxisDelegateBinding PC_Player.PC_Player_C.InputAxisDelegateBinding_1
// Flags: Final, Public, Private, Delegate, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APC_Player_C::InputAxisDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("InputAxisDelegateBinding PC_Player.PC_Player_C.InputAxisDelegateBinding_1");

	struct APC_Player_C_InputAxisDelegateBinding_1_Params {
	};
	APC_Player_C_InputAxisDelegateBinding_1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}