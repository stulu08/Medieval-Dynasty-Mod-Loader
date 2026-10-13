#include "../SDK.h"
#include "PlayerController.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Player
// Declaration: class UPlayer* Player
class UPlayer* APlayerController::M_GetPlayer() const {
	return Read<class UPlayer*>((byte*)this + 664);
}
class UPlayer** APlayerController::M_PtrGetPlayer() {
	return reinterpret_cast<class UPlayer**>((byte*)this + 664);
}
void APlayerController::M_SetPlayer(const class UPlayer*& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of AcknowledgedPawn
// Declaration: class APawn* AcknowledgedPawn
class APawn* APlayerController::M_GetAcknowledgedPawn() const {
	return Read<class APawn*>((byte*)this + 672);
}
class APawn** APlayerController::M_PtrGetAcknowledgedPawn() {
	return reinterpret_cast<class APawn**>((byte*)this + 672);
}
void APlayerController::M_SetAcknowledgedPawn(const class APawn*& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of ControllingDirTrackInst
// Declaration: class UInterpTrackInstDirector* ControllingDirTrackInst
class UInterpTrackInstDirector* APlayerController::M_GetControllingDirTrackInst() const {
	return Read<class UInterpTrackInstDirector*>((byte*)this + 680);
}
class UInterpTrackInstDirector** APlayerController::M_PtrGetControllingDirTrackInst() {
	return reinterpret_cast<class UInterpTrackInstDirector**>((byte*)this + 680);
}
void APlayerController::M_SetControllingDirTrackInst(const class UInterpTrackInstDirector*& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of MyHUD
// Declaration: class AHUD* MyHUD
class AHUD* APlayerController::M_GetMyHUD() const {
	return Read<class AHUD*>((byte*)this + 688);
}
class AHUD** APlayerController::M_PtrGetMyHUD() {
	return reinterpret_cast<class AHUD**>((byte*)this + 688);
}
void APlayerController::M_SetMyHUD(const class AHUD*& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of PlayerCameraManager
// Declaration: class APlayerCameraManager* PlayerCameraManager
class APlayerCameraManager* APlayerController::M_GetPlayerCameraManager() const {
	return Read<class APlayerCameraManager*>((byte*)this + 696);
}
class APlayerCameraManager** APlayerController::M_PtrGetPlayerCameraManager() {
	return reinterpret_cast<class APlayerCameraManager**>((byte*)this + 696);
}
void APlayerController::M_SetPlayerCameraManager(const class APlayerCameraManager*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of PlayerCameraManagerClass
// Declaration: class APlayerCameraManager* PlayerCameraManagerClass
class APlayerCameraManager* APlayerController::M_GetPlayerCameraManagerClass() const {
	return Read<class APlayerCameraManager*>((byte*)this + 704);
}
class APlayerCameraManager** APlayerController::M_PtrGetPlayerCameraManagerClass() {
	return reinterpret_cast<class APlayerCameraManager**>((byte*)this + 704);
}
void APlayerController::M_SetPlayerCameraManagerClass(const class APlayerCameraManager*& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of bAutoManageActiveCameraTarget
// Declaration: bool bAutoManageActiveCameraTarget
bool APlayerController::M_GetbAutoManageActiveCameraTarget() const {
	return Read<bool>((byte*)this + 712);
}
bool* APlayerController::M_PtrGetbAutoManageActiveCameraTarget() {
	return reinterpret_cast<bool*>((byte*)this + 712);
}
void APlayerController::M_SetbAutoManageActiveCameraTarget(const bool& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of TargetViewRotation
// Declaration: struct FRotator TargetViewRotation
struct FRotator APlayerController::M_GetTargetViewRotation() const {
	return Read<struct FRotator>((byte*)this + 716);
}
struct FRotator* APlayerController::M_PtrGetTargetViewRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 716);
}
void APlayerController::M_SetTargetViewRotation(const struct FRotator& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of SmoothTargetViewRotationSpeed
// Declaration: float SmoothTargetViewRotationSpeed
float APlayerController::M_GetSmoothTargetViewRotationSpeed() const {
	return Read<float>((byte*)this + 740);
}
float* APlayerController::M_PtrGetSmoothTargetViewRotationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 740);
}
void APlayerController::M_SetSmoothTargetViewRotationSpeed(const float& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of HiddenActors
// Declaration: TArray<class AActor*> HiddenActors
TArray<class AActor*> APlayerController::M_GetHiddenActors() const {
	return Read<TArray<class AActor*>>((byte*)this + 752);
}
TArray<class AActor*>* APlayerController::M_PtrGetHiddenActors() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 752);
}
void APlayerController::M_SetHiddenActors(const TArray<class AActor*>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of HiddenPrimitiveComponents
// Declaration: TArray<TWeakObjectPtr<class UPrimitiveComponent>> HiddenPrimitiveComponents
TArray<TWeakObjectPtr<class UPrimitiveComponent>> APlayerController::M_GetHiddenPrimitiveComponents() const {
	return Read<TArray<TWeakObjectPtr<class UPrimitiveComponent>>>((byte*)this + 768);
}
TArray<TWeakObjectPtr<class UPrimitiveComponent>>* APlayerController::M_PtrGetHiddenPrimitiveComponents() {
	return reinterpret_cast<TArray<TWeakObjectPtr<class UPrimitiveComponent>>*>((byte*)this + 768);
}
void APlayerController::M_SetHiddenPrimitiveComponents(const TArray<TWeakObjectPtr<class UPrimitiveComponent>>& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of LastSpectatorStateSynchTime
// Declaration: float LastSpectatorStateSynchTime
float APlayerController::M_GetLastSpectatorStateSynchTime() const {
	return Read<float>((byte*)this + 788);
}
float* APlayerController::M_PtrGetLastSpectatorStateSynchTime() {
	return reinterpret_cast<float*>((byte*)this + 788);
}
void APlayerController::M_SetLastSpectatorStateSynchTime(const float& value) {
	Write((byte*)this + 788, value);
}
// Member Getter and Setter of LastSpectatorSyncLocation
// Declaration: struct FVector LastSpectatorSyncLocation
struct FVector APlayerController::M_GetLastSpectatorSyncLocation() const {
	return Read<struct FVector>((byte*)this + 792);
}
struct FVector* APlayerController::M_PtrGetLastSpectatorSyncLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 792);
}
void APlayerController::M_SetLastSpectatorSyncLocation(const struct FVector& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of LastSpectatorSyncRotation
// Declaration: struct FRotator LastSpectatorSyncRotation
struct FRotator APlayerController::M_GetLastSpectatorSyncRotation() const {
	return Read<struct FRotator>((byte*)this + 804);
}
struct FRotator* APlayerController::M_PtrGetLastSpectatorSyncRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 804);
}
void APlayerController::M_SetLastSpectatorSyncRotation(const struct FRotator& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of ClientCap
// Declaration: int32_t ClientCap
int32_t APlayerController::M_GetClientCap() const {
	return Read<int32_t>((byte*)this + 816);
}
int32_t* APlayerController::M_PtrGetClientCap() {
	return reinterpret_cast<int32_t*>((byte*)this + 816);
}
void APlayerController::M_SetClientCap(const int32_t& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of CheatManager
// Declaration: class UCheatManager* CheatManager
class UCheatManager* APlayerController::M_GetCheatManager() const {
	return Read<class UCheatManager*>((byte*)this + 824);
}
class UCheatManager** APlayerController::M_PtrGetCheatManager() {
	return reinterpret_cast<class UCheatManager**>((byte*)this + 824);
}
void APlayerController::M_SetCheatManager(const class UCheatManager*& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of CheatClass
// Declaration: class UCheatManager* CheatClass
class UCheatManager* APlayerController::M_GetCheatClass() const {
	return Read<class UCheatManager*>((byte*)this + 832);
}
class UCheatManager** APlayerController::M_PtrGetCheatClass() {
	return reinterpret_cast<class UCheatManager**>((byte*)this + 832);
}
void APlayerController::M_SetCheatClass(const class UCheatManager*& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of PlayerInput
// Declaration: class UPlayerInput* PlayerInput
class UPlayerInput* APlayerController::M_GetPlayerInput() const {
	return Read<class UPlayerInput*>((byte*)this + 840);
}
class UPlayerInput** APlayerController::M_PtrGetPlayerInput() {
	return reinterpret_cast<class UPlayerInput**>((byte*)this + 840);
}
void APlayerController::M_SetPlayerInput(const class UPlayerInput*& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of ActiveForceFeedbackEffects
// Declaration: TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects
TArray<struct FActiveForceFeedbackEffect> APlayerController::M_GetActiveForceFeedbackEffects() const {
	return Read<TArray<struct FActiveForceFeedbackEffect>>((byte*)this + 848);
}
TArray<struct FActiveForceFeedbackEffect>* APlayerController::M_PtrGetActiveForceFeedbackEffects() {
	return reinterpret_cast<TArray<struct FActiveForceFeedbackEffect>*>((byte*)this + 848);
}
void APlayerController::M_SetActiveForceFeedbackEffects(const TArray<struct FActiveForceFeedbackEffect>& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of bPlayerIsWaiting
// Declaration: unsigned char bPlayerIsWaiting : 1
unsigned char APlayerController::M_GetbPlayerIsWaiting() const {
	return Read<unsigned char>((byte*)this + 976);
}
unsigned char* APlayerController::M_PtrGetbPlayerIsWaiting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 976);
}
void APlayerController::M_SetbPlayerIsWaiting(const unsigned char& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of NetPlayerIndex
// Declaration: unsigned char NetPlayerIndex
unsigned char APlayerController::M_GetNetPlayerIndex() const {
	return Read<unsigned char>((byte*)this + 980);
}
unsigned char* APlayerController::M_PtrGetNetPlayerIndex() {
	return reinterpret_cast<unsigned char*>((byte*)this + 980);
}
void APlayerController::M_SetNetPlayerIndex(const unsigned char& value) {
	Write((byte*)this + 980, value);
}
// Member Getter and Setter of PendingSwapConnection
// Declaration: class UNetConnection* PendingSwapConnection
class UNetConnection* APlayerController::M_GetPendingSwapConnection() const {
	return Read<class UNetConnection*>((byte*)this + 1040);
}
class UNetConnection** APlayerController::M_PtrGetPendingSwapConnection() {
	return reinterpret_cast<class UNetConnection**>((byte*)this + 1040);
}
void APlayerController::M_SetPendingSwapConnection(const class UNetConnection*& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of NetConnection
// Declaration: class UNetConnection* NetConnection
class UNetConnection* APlayerController::M_GetNetConnection() const {
	return Read<class UNetConnection*>((byte*)this + 1048);
}
class UNetConnection** APlayerController::M_PtrGetNetConnection() {
	return reinterpret_cast<class UNetConnection**>((byte*)this + 1048);
}
void APlayerController::M_SetNetConnection(const class UNetConnection*& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of InputYawScale
// Declaration: float InputYawScale
float APlayerController::M_GetInputYawScale() const {
	return Read<float>((byte*)this + 1068);
}
float* APlayerController::M_PtrGetInputYawScale() {
	return reinterpret_cast<float*>((byte*)this + 1068);
}
void APlayerController::M_SetInputYawScale(const float& value) {
	Write((byte*)this + 1068, value);
}
// Member Getter and Setter of InputPitchScale
// Declaration: float InputPitchScale
float APlayerController::M_GetInputPitchScale() const {
	return Read<float>((byte*)this + 1072);
}
float* APlayerController::M_PtrGetInputPitchScale() {
	return reinterpret_cast<float*>((byte*)this + 1072);
}
void APlayerController::M_SetInputPitchScale(const float& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of InputRollScale
// Declaration: float InputRollScale
float APlayerController::M_GetInputRollScale() const {
	return Read<float>((byte*)this + 1076);
}
float* APlayerController::M_PtrGetInputRollScale() {
	return reinterpret_cast<float*>((byte*)this + 1076);
}
void APlayerController::M_SetInputRollScale(const float& value) {
	Write((byte*)this + 1076, value);
}
// Member Getter and Setter of bShowMouseCursor
// Declaration: unsigned char bShowMouseCursor : 1
unsigned char APlayerController::M_GetbShowMouseCursor() const {
	return Read<unsigned char>((byte*)this + 1080);
}
unsigned char* APlayerController::M_PtrGetbShowMouseCursor() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1080);
}
void APlayerController::M_SetbShowMouseCursor(const unsigned char& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of bEnableClickEvents
// Declaration: unsigned char bEnableClickEvents : 1
unsigned char APlayerController::M_GetbEnableClickEvents() const {
	return Read<unsigned char>((byte*)this + 1080);
}
unsigned char* APlayerController::M_PtrGetbEnableClickEvents() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1080);
}
void APlayerController::M_SetbEnableClickEvents(const unsigned char& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of bEnableTouchEvents
// Declaration: unsigned char bEnableTouchEvents : 1
unsigned char APlayerController::M_GetbEnableTouchEvents() const {
	return Read<unsigned char>((byte*)this + 1080);
}
unsigned char* APlayerController::M_PtrGetbEnableTouchEvents() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1080);
}
void APlayerController::M_SetbEnableTouchEvents(const unsigned char& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of bEnableMouseOverEvents
// Declaration: unsigned char bEnableMouseOverEvents : 1
unsigned char APlayerController::M_GetbEnableMouseOverEvents() const {
	return Read<unsigned char>((byte*)this + 1080);
}
unsigned char* APlayerController::M_PtrGetbEnableMouseOverEvents() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1080);
}
void APlayerController::M_SetbEnableMouseOverEvents(const unsigned char& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of bEnableTouchOverEvents
// Declaration: unsigned char bEnableTouchOverEvents : 1
unsigned char APlayerController::M_GetbEnableTouchOverEvents() const {
	return Read<unsigned char>((byte*)this + 1080);
}
unsigned char* APlayerController::M_PtrGetbEnableTouchOverEvents() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1080);
}
void APlayerController::M_SetbEnableTouchOverEvents(const unsigned char& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of bForceFeedbackEnabled
// Declaration: unsigned char bForceFeedbackEnabled : 1
unsigned char APlayerController::M_GetbForceFeedbackEnabled() const {
	return Read<unsigned char>((byte*)this + 1080);
}
unsigned char* APlayerController::M_PtrGetbForceFeedbackEnabled() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1080);
}
void APlayerController::M_SetbForceFeedbackEnabled(const unsigned char& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of ForceFeedbackScale
// Declaration: float ForceFeedbackScale
float APlayerController::M_GetForceFeedbackScale() const {
	return Read<float>((byte*)this + 1084);
}
float* APlayerController::M_PtrGetForceFeedbackScale() {
	return reinterpret_cast<float*>((byte*)this + 1084);
}
void APlayerController::M_SetForceFeedbackScale(const float& value) {
	Write((byte*)this + 1084, value);
}
// Member Getter and Setter of ClickEventKeys
// Declaration: TArray<struct FKey> ClickEventKeys
TArray<struct FKey> APlayerController::M_GetClickEventKeys() const {
	return Read<TArray<struct FKey>>((byte*)this + 1088);
}
TArray<struct FKey>* APlayerController::M_PtrGetClickEventKeys() {
	return reinterpret_cast<TArray<struct FKey>*>((byte*)this + 1088);
}
void APlayerController::M_SetClickEventKeys(const TArray<struct FKey>& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of DefaultMouseCursor
// Declaration: TEnumAsByte<EMouseCursor> DefaultMouseCursor
TEnumAsByte<EMouseCursor> APlayerController::M_GetDefaultMouseCursor() const {
	return Read<TEnumAsByte<EMouseCursor>>((byte*)this + 1104);
}
TEnumAsByte<EMouseCursor>* APlayerController::M_PtrGetDefaultMouseCursor() {
	return reinterpret_cast<TEnumAsByte<EMouseCursor>*>((byte*)this + 1104);
}
void APlayerController::M_SetDefaultMouseCursor(const TEnumAsByte<EMouseCursor>& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of CurrentMouseCursor
// Declaration: TEnumAsByte<EMouseCursor> CurrentMouseCursor
TEnumAsByte<EMouseCursor> APlayerController::M_GetCurrentMouseCursor() const {
	return Read<TEnumAsByte<EMouseCursor>>((byte*)this + 1105);
}
TEnumAsByte<EMouseCursor>* APlayerController::M_PtrGetCurrentMouseCursor() {
	return reinterpret_cast<TEnumAsByte<EMouseCursor>*>((byte*)this + 1105);
}
void APlayerController::M_SetCurrentMouseCursor(const TEnumAsByte<EMouseCursor>& value) {
	Write((byte*)this + 1105, value);
}
// Member Getter and Setter of DefaultClickTraceChannel
// Declaration: TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel
TEnumAsByte<ECollisionChannel> APlayerController::M_GetDefaultClickTraceChannel() const {
	return Read<TEnumAsByte<ECollisionChannel>>((byte*)this + 1106);
}
TEnumAsByte<ECollisionChannel>* APlayerController::M_PtrGetDefaultClickTraceChannel() {
	return reinterpret_cast<TEnumAsByte<ECollisionChannel>*>((byte*)this + 1106);
}
void APlayerController::M_SetDefaultClickTraceChannel(const TEnumAsByte<ECollisionChannel>& value) {
	Write((byte*)this + 1106, value);
}
// Member Getter and Setter of CurrentClickTraceChannel
// Declaration: TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel
TEnumAsByte<ECollisionChannel> APlayerController::M_GetCurrentClickTraceChannel() const {
	return Read<TEnumAsByte<ECollisionChannel>>((byte*)this + 1107);
}
TEnumAsByte<ECollisionChannel>* APlayerController::M_PtrGetCurrentClickTraceChannel() {
	return reinterpret_cast<TEnumAsByte<ECollisionChannel>*>((byte*)this + 1107);
}
void APlayerController::M_SetCurrentClickTraceChannel(const TEnumAsByte<ECollisionChannel>& value) {
	Write((byte*)this + 1107, value);
}
// Member Getter and Setter of HitResultTraceDistance
// Declaration: float HitResultTraceDistance
float APlayerController::M_GetHitResultTraceDistance() const {
	return Read<float>((byte*)this + 1108);
}
float* APlayerController::M_PtrGetHitResultTraceDistance() {
	return reinterpret_cast<float*>((byte*)this + 1108);
}
void APlayerController::M_SetHitResultTraceDistance(const float& value) {
	Write((byte*)this + 1108, value);
}
// Member Getter and Setter of SeamlessTravelCount
// Declaration: uint16_t SeamlessTravelCount
uint16_t APlayerController::M_GetSeamlessTravelCount() const {
	return Read<uint16_t>((byte*)this + 1112);
}
uint16_t* APlayerController::M_PtrGetSeamlessTravelCount() {
	return reinterpret_cast<uint16_t*>((byte*)this + 1112);
}
void APlayerController::M_SetSeamlessTravelCount(const uint16_t& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of LastCompletedSeamlessTravelCount
// Declaration: uint16_t LastCompletedSeamlessTravelCount
uint16_t APlayerController::M_GetLastCompletedSeamlessTravelCount() const {
	return Read<uint16_t>((byte*)this + 1114);
}
uint16_t* APlayerController::M_PtrGetLastCompletedSeamlessTravelCount() {
	return reinterpret_cast<uint16_t*>((byte*)this + 1114);
}
void APlayerController::M_SetLastCompletedSeamlessTravelCount(const uint16_t& value) {
	Write((byte*)this + 1114, value);
}
// Member Getter and Setter of InactiveStateInputComponent
// Declaration: class UInputComponent* InactiveStateInputComponent
class UInputComponent* APlayerController::M_GetInactiveStateInputComponent() const {
	return Read<class UInputComponent*>((byte*)this + 1232);
}
class UInputComponent** APlayerController::M_PtrGetInactiveStateInputComponent() {
	return reinterpret_cast<class UInputComponent**>((byte*)this + 1232);
}
void APlayerController::M_SetInactiveStateInputComponent(const class UInputComponent*& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of bShouldPerformFullTickWhenPaused
// Declaration: unsigned char bShouldPerformFullTickWhenPaused : 1
unsigned char APlayerController::M_GetbShouldPerformFullTickWhenPaused() const {
	return Read<unsigned char>((byte*)this + 1240);
}
unsigned char* APlayerController::M_PtrGetbShouldPerformFullTickWhenPaused() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1240);
}
void APlayerController::M_SetbShouldPerformFullTickWhenPaused(const unsigned char& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of CurrentTouchInterface
// Declaration: class UTouchInterface* CurrentTouchInterface
class UTouchInterface* APlayerController::M_GetCurrentTouchInterface() const {
	return Read<class UTouchInterface*>((byte*)this + 1264);
}
class UTouchInterface** APlayerController::M_PtrGetCurrentTouchInterface() {
	return reinterpret_cast<class UTouchInterface**>((byte*)this + 1264);
}
void APlayerController::M_SetCurrentTouchInterface(const class UTouchInterface*& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of SpectatorPawn
// Declaration: class ASpectatorPawn* SpectatorPawn
class ASpectatorPawn* APlayerController::M_GetSpectatorPawn() const {
	return Read<class ASpectatorPawn*>((byte*)this + 1352);
}
class ASpectatorPawn** APlayerController::M_PtrGetSpectatorPawn() {
	return reinterpret_cast<class ASpectatorPawn**>((byte*)this + 1352);
}
void APlayerController::M_SetSpectatorPawn(const class ASpectatorPawn*& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of bIsLocalPlayerController
// Declaration: bool bIsLocalPlayerController
bool APlayerController::M_GetbIsLocalPlayerController() const {
	return Read<bool>((byte*)this + 1364);
}
bool* APlayerController::M_PtrGetbIsLocalPlayerController() {
	return reinterpret_cast<bool*>((byte*)this + 1364);
}
void APlayerController::M_SetbIsLocalPlayerController(const bool& value) {
	Write((byte*)this + 1364, value);
}
// Member Getter and Setter of SpawnLocation
// Declaration: struct FVector SpawnLocation
struct FVector APlayerController::M_GetSpawnLocation() const {
	return Read<struct FVector>((byte*)this + 1368);
}
struct FVector* APlayerController::M_PtrGetSpawnLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1368);
}
void APlayerController::M_SetSpawnLocation(const struct FVector& value) {
	Write((byte*)this + 1368, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.PlayerController.ActivateTouchInterface
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewTouchInterface	Type: class UTouchInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ActivateTouchInterface(class UTouchInterface* NewTouchInterface) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ActivateTouchInterface");

	struct APlayerController_ActivateTouchInterface_Params {
		class UTouchInterface* NewTouchInterface;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ActivateTouchInterface_Params params;
	params.NewTouchInterface = NewTouchInterface;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.AddPitchInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Val	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::AddPitchInput(float Val) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddPitchInput");

	struct APlayerController_AddPitchInput_Params {
		float Val;			//Offset: 0 | ElementSize: 4
	};
	APlayerController_AddPitchInput_Params params;
	params.Val = Val;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.AddRollInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Val	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::AddRollInput(float Val) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddRollInput");

	struct APlayerController_AddRollInput_Params {
		float Val;			//Offset: 0 | ElementSize: 4
	};
	APlayerController_AddRollInput_Params params;
	params.Val = Val;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.AddYawInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Val	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::AddYawInput(float Val) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddYawInput");

	struct APlayerController_AddYawInput_Params {
		float Val;			//Offset: 0 | ElementSize: 4
	};
	APlayerController_AddYawInput_Params params;
	params.Val = Val;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.Camera
// Flags: Exec, Native, Public
// Params:
// Name: NewMode	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::Camera(struct FName NewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Camera");

	struct APlayerController_Camera_Params {
		struct FName NewMode;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_Camera_Params params;
	params.NewMode = NewMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.CanRestartPlayer
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::CanRestartPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CanRestartPlayer");

	struct APlayerController_CanRestartPlayer_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_CanRestartPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerController::ClearAudioListenerAttenuationOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearAudioListenerAttenuationOverride");

	struct APlayerController_ClearAudioListenerAttenuationOverride_Params {
	};
	APlayerController_ClearAudioListenerAttenuationOverride_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClearAudioListenerOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerController::ClearAudioListenerOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearAudioListenerOverride");

	struct APlayerController_ClearAudioListenerOverride_Params {
	};
	APlayerController_ClearAudioListenerOverride_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientAddTextureStreamingLoc
// Flags: Final, Net, NetReliable, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: InLoc	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bOverrideLocation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientAddTextureStreamingLoc");

	struct APlayerController_ClientAddTextureStreamingLoc_Params {
		struct FVector InLoc;			//Offset: 0 | ElementSize: 12
		float Duration;			//Offset: 12 | ElementSize: 4
		bool bOverrideLocation;			//Offset: 16 | ElementSize: 1
	};
	APlayerController_ClientAddTextureStreamingLoc_Params params;
	params.InLoc = InLoc;
	params.Duration = Duration;
	params.bOverrideLocation = bOverrideLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientCancelPendingMapChange
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientCancelPendingMapChange() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCancelPendingMapChange");

	struct APlayerController_ClientCancelPendingMapChange_Params {
	};
	APlayerController_ClientCancelPendingMapChange_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientCapBandwidth
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: Cap	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientCapBandwidth(int32_t Cap) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCapBandwidth");

	struct APlayerController_ClientCapBandwidth_Params {
		int32_t Cap;			//Offset: 0 | ElementSize: 4
	};
	APlayerController_ClientCapBandwidth_Params params;
	params.Cap = Cap;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientClearCameraLensEffects
// Flags: Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerController::ClientClearCameraLensEffects() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientClearCameraLensEffects");

	struct APlayerController_ClientClearCameraLensEffects_Params {
	};
	APlayerController_ClientClearCameraLensEffects_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientCommitMapChange
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientCommitMapChange() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCommitMapChange");

	struct APlayerController_ClientCommitMapChange_Params {
	};
	APlayerController_ClientCommitMapChange_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientEnableNetworkVoice
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: bEnable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientEnableNetworkVoice(bool bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientEnableNetworkVoice");

	struct APlayerController_ClientEnableNetworkVoice_Params {
		bool bEnable;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_ClientEnableNetworkVoice_Params params;
	params.bEnable = bEnable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientEndOnlineSession
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientEndOnlineSession() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientEndOnlineSession");

	struct APlayerController_ClientEndOnlineSession_Params {
	};
	APlayerController_ClientEndOnlineSession_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientFlushLevelStreaming
// Flags: Final, Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientFlushLevelStreaming() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientFlushLevelStreaming");

	struct APlayerController_ClientFlushLevelStreaming_Params {
	};
	APlayerController_ClientFlushLevelStreaming_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientForceGarbageCollection
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientForceGarbageCollection() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientForceGarbageCollection");

	struct APlayerController_ClientForceGarbageCollection_Params {
	};
	APlayerController_ClientForceGarbageCollection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientGameEnded
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: EndGameFocus	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIsWinner	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientGameEnded");

	struct APlayerController_ClientGameEnded_Params {
		class AActor* EndGameFocus;			//Offset: 0 | ElementSize: 8
		bool bIsWinner;			//Offset: 8 | ElementSize: 1
	};
	APlayerController_ClientGameEnded_Params params;
	params.EndGameFocus = EndGameFocus;
	params.bIsWinner = bIsWinner;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientGotoState
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: NewState	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientGotoState(struct FName NewState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientGotoState");

	struct APlayerController_ClientGotoState_Params {
		struct FName NewState;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientGotoState_Params params;
	params.NewState = NewState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientIgnoreLookInput
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: bIgnore	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientIgnoreLookInput(bool bIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientIgnoreLookInput");

	struct APlayerController_ClientIgnoreLookInput_Params {
		bool bIgnore;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_ClientIgnoreLookInput_Params params;
	params.bIgnore = bIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientIgnoreMoveInput
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: bIgnore	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientIgnoreMoveInput(bool bIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientIgnoreMoveInput");

	struct APlayerController_ClientIgnoreMoveInput_Params {
		bool bIgnore;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_ClientIgnoreMoveInput_Params params;
	params.bIgnore = bIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientMessage
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: S	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Type	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MsgLifeTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientMessage(struct FString S, struct FName Type, float MsgLifeTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientMessage");

	struct APlayerController_ClientMessage_Params {
		struct FString S;			//Offset: 0 | ElementSize: 16
		struct FName Type;			//Offset: 16 | ElementSize: 8
		float MsgLifeTime;			//Offset: 24 | ElementSize: 4
	};
	APlayerController_ClientMessage_Params params;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientMutePlayer
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: PlayerId	Type: struct FUniqueNetIdRepl	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientMutePlayer(struct FUniqueNetIdRepl PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientMutePlayer");

	struct APlayerController_ClientMutePlayer_Params {
		struct FUniqueNetIdRepl PlayerId;			//Offset: 0 | ElementSize: 40
	};
	APlayerController_ClientMutePlayer_Params params;
	params.PlayerId = PlayerId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientPlayCameraAnim
// Flags: Net, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable
// Params:
// Name: AnimToPlay	Type: class UCameraAnim*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendInTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLoop	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRandomStartTime	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Space	Type: ECameraShakePlaySpace	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CustomPlaySpace	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, struct FRotator CustomPlaySpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlayCameraAnim");

	struct APlayerController_ClientPlayCameraAnim_Params {
		class UCameraAnim* AnimToPlay;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
		float Rate;			//Offset: 12 | ElementSize: 4
		float BlendInTime;			//Offset: 16 | ElementSize: 4
		float BlendOutTime;			//Offset: 20 | ElementSize: 4
		bool bLoop;			//Offset: 24 | ElementSize: 1
		bool bRandomStartTime;			//Offset: 25 | ElementSize: 1
		ECameraShakePlaySpace Space;			//Offset: 26 | ElementSize: 1
		struct FRotator CustomPlaySpace;			//Offset: 28 | ElementSize: 12
	};
	APlayerController_ClientPlayCameraAnim_Params params;
	params.AnimToPlay = AnimToPlay;
	params.Scale = Scale;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLoop = bLoop;
	params.bRandomStartTime = bRandomStartTime;
	params.Space = Space;
	params.CustomPlaySpace = CustomPlaySpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientPlayForceFeedback_Internal
// Flags: Final, Net, Native, Event, Private, NetClient
// Params:
// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Params	Type: struct FForceFeedbackParameters	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientPlayForceFeedback_Internal(class UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters Params) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlayForceFeedback_Internal");

	struct APlayerController_ClientPlayForceFeedback_Internal_Params {
		class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
		struct FForceFeedbackParameters Params;			//Offset: 8 | ElementSize: 12
	};
	APlayerController_ClientPlayForceFeedback_Internal_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Params = Params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientPlaySound
// Flags: Net, Native, Event, Public, NetClient
// Params:
// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlaySound");

	struct APlayerController_ClientPlaySound_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		float VolumeMultiplier;			//Offset: 8 | ElementSize: 4
		float PitchMultiplier;			//Offset: 12 | ElementSize: 4
	};
	APlayerController_ClientPlaySound_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientPlaySoundAtLocation
// Flags: Net, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: Sound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VolumeMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PitchMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientPlaySoundAtLocation(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlaySoundAtLocation");

	struct APlayerController_ClientPlaySoundAtLocation_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		float VolumeMultiplier;			//Offset: 20 | ElementSize: 4
		float PitchMultiplier;			//Offset: 24 | ElementSize: 4
	};
	APlayerController_ClientPlaySoundAtLocation_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientPrepareMapChange
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: LevelName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bFirst	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLast	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPrepareMapChange");

	struct APlayerController_ClientPrepareMapChange_Params {
		struct FName LevelName;			//Offset: 0 | ElementSize: 8
		bool bFirst;			//Offset: 8 | ElementSize: 1
		bool bLast;			//Offset: 9 | ElementSize: 1
	};
	APlayerController_ClientPrepareMapChange_Params params;
	params.LevelName = LevelName;
	params.bFirst = bFirst;
	params.bLast = bLast;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientPrestreamTextures
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: ForcedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ForceDuration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bEnableStreaming	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CinematicTextureGroups	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPrestreamTextures");

	struct APlayerController_ClientPrestreamTextures_Params {
		class AActor* ForcedActor;			//Offset: 0 | ElementSize: 8
		float ForceDuration;			//Offset: 8 | ElementSize: 4
		bool bEnableStreaming;			//Offset: 12 | ElementSize: 1
		int32_t CinematicTextureGroups;			//Offset: 16 | ElementSize: 4
	};
	APlayerController_ClientPrestreamTextures_Params params;
	params.ForcedActor = ForcedActor;
	params.ForceDuration = ForceDuration;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientReceiveLocalizedMessage
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: Message	Type: class ULocalMessage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SWITCH	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RelatedPlayerState	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RelatedPlayerState	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OptionalObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientReceiveLocalizedMessage(class ULocalMessage* Message, int32_t SWITCH, class APlayerState* RelatedPlayerState, class APlayerState* RelatedPlayerState_1, class UObject* OptionalObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReceiveLocalizedMessage");

	struct APlayerController_ClientReceiveLocalizedMessage_Params {
		class ULocalMessage* Message;			//Offset: 0 | ElementSize: 8
		int32_t SWITCH;			//Offset: 8 | ElementSize: 4
		class APlayerState* RelatedPlayerState;			//Offset: 16 | ElementSize: 8
		class APlayerState* RelatedPlayerState_1;			//Offset: 24 | ElementSize: 8
		class UObject* OptionalObject;			//Offset: 32 | ElementSize: 8
	};
	APlayerController_ClientReceiveLocalizedMessage_Params params;
	params.Message = Message;
	params.SWITCH = SWITCH;
	params.RelatedPlayerState = RelatedPlayerState;
	params.RelatedPlayerState = RelatedPlayerState_1;
	params.OptionalObject = OptionalObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientRepObjRef
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientRepObjRef(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientRepObjRef");

	struct APlayerController_ClientRepObjRef_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientRepObjRef_Params params;
	params.Object = Object;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientReset
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientReset() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReset");

	struct APlayerController_ClientReset_Params {
	};
	APlayerController_ClientReset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientRestart
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: NewPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientRestart(class APawn* NewPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientRestart");

	struct APlayerController_ClientRestart_Params {
		class APawn* NewPawn;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientRestart_Params params;
	params.NewPawn = NewPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientRetryClientRestart
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: NewPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientRetryClientRestart(class APawn* NewPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientRetryClientRestart");

	struct APlayerController_ClientRetryClientRestart_Params {
		class APawn* NewPawn;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientRetryClientRestart_Params params;
	params.NewPawn = NewPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientReturnToMainMenu
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: ReturnReason	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientReturnToMainMenu(struct FString ReturnReason) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReturnToMainMenu");

	struct APlayerController_ClientReturnToMainMenu_Params {
		struct FString ReturnReason;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ClientReturnToMainMenu_Params params;
	params.ReturnReason = ReturnReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: ReturnReason	Type: struct FText	Flags: ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientReturnToMainMenuWithTextReason(struct FText& ReturnReason) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason");

	struct APlayerController_ClientReturnToMainMenuWithTextReason_Params {
		struct FText ReturnReason;			//Offset: 0 | ElementSize: 24
	};
	APlayerController_ClientReturnToMainMenuWithTextReason_Params params;
	params.ReturnReason = ReturnReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientSetBlockOnAsyncLoading() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetBlockOnAsyncLoading");

	struct APlayerController_ClientSetBlockOnAsyncLoading_Params {
	};
	APlayerController_ClientSetBlockOnAsyncLoading_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetCameraFade
// Flags: Net, NetReliable, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: bEnableFading	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FadeColor	Type: struct FColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FadeAlpha	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FadeTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bFadeAudio	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHoldWhenFinished	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetCameraFade");

	struct APlayerController_ClientSetCameraFade_Params {
		bool bEnableFading;			//Offset: 0 | ElementSize: 1
		struct FColor FadeColor;			//Offset: 4 | ElementSize: 4
		struct FVector2D FadeAlpha;			//Offset: 8 | ElementSize: 8
		float FadeTime;			//Offset: 16 | ElementSize: 4
		bool bFadeAudio;			//Offset: 20 | ElementSize: 1
		bool bHoldWhenFinished;			//Offset: 21 | ElementSize: 1
	};
	APlayerController_ClientSetCameraFade_Params params;
	params.bEnableFading = bEnableFading;
	params.FadeColor = FadeColor;
	params.FadeAlpha = FadeAlpha;
	params.FadeTime = FadeTime;
	params.bFadeAudio = bFadeAudio;
	params.bHoldWhenFinished = bHoldWhenFinished;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetCameraMode
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: NewCamMode	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetCameraMode(struct FName NewCamMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetCameraMode");

	struct APlayerController_ClientSetCameraMode_Params {
		struct FName NewCamMode;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientSetCameraMode_Params params;
	params.NewCamMode = NewCamMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetCinematicMode
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: bInCinematicMode	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsMovement	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsTurning	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsHUD	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetCinematicMode");

	struct APlayerController_ClientSetCinematicMode_Params {
		bool bInCinematicMode;			//Offset: 0 | ElementSize: 1
		bool bAffectsMovement;			//Offset: 1 | ElementSize: 1
		bool bAffectsTurning;			//Offset: 2 | ElementSize: 1
		bool bAffectsHUD;			//Offset: 3 | ElementSize: 1
	};
	APlayerController_ClientSetCinematicMode_Params params;
	params.bInCinematicMode = bInCinematicMode;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;
	params.bAffectsHUD = bAffectsHUD;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ForceDuration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CinematicTextureGroups	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident");

	struct APlayerController_ClientSetForceMipLevelsToBeResident_Params {
		class UMaterialInterface* Material;			//Offset: 0 | ElementSize: 8
		float ForceDuration;			//Offset: 8 | ElementSize: 4
		int32_t CinematicTextureGroups;			//Offset: 12 | ElementSize: 4
	};
	APlayerController_ClientSetForceMipLevelsToBeResident_Params params;
	params.Material = Material;
	params.ForceDuration = ForceDuration;
	params.CinematicTextureGroups = CinematicTextureGroups;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetHUD
// Flags: Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable
// Params:
// Name: NewHUDClass	Type: class AHUD*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetHUD(class AHUD* NewHUDClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetHUD");

	struct APlayerController_ClientSetHUD_Params {
		class AHUD* NewHUDClass;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientSetHUD_Params params;
	params.NewHUDClass = NewHUDClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetSpectatorWaiting
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: bWaiting	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetSpectatorWaiting(bool bWaiting) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetSpectatorWaiting");

	struct APlayerController_ClientSetSpectatorWaiting_Params {
		bool bWaiting;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_ClientSetSpectatorWaiting_Params params;
	params.bWaiting = bWaiting;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSetViewTarget
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: A	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TransitionParams	Type: struct FViewTargetTransitionParams	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSetViewTarget(class AActor* A, struct FViewTargetTransitionParams TransitionParams) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetViewTarget");

	struct APlayerController_ClientSetViewTarget_Params {
		class AActor* A;			//Offset: 0 | ElementSize: 8
		struct FViewTargetTransitionParams TransitionParams;			//Offset: 8 | ElementSize: 16
	};
	APlayerController_ClientSetViewTarget_Params params;
	params.A = A;
	params.TransitionParams = TransitionParams;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientSpawnCameraLensEffect
// Flags: Net, Native, Event, Public, NetClient, BlueprintCallable
// Params:
// Name: LensEffectEmitterClass	Type: class AEmitterCameraLensEffectBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientSpawnCameraLensEffect(class AEmitterCameraLensEffectBase* LensEffectEmitterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSpawnCameraLensEffect");

	struct APlayerController_ClientSpawnCameraLensEffect_Params {
		class AEmitterCameraLensEffectBase* LensEffectEmitterClass;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientSpawnCameraLensEffect_Params params;
	params.LensEffectEmitterClass = LensEffectEmitterClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStartCameraShake
// Flags: Net, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable
// Params:
// Name: Shake	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaySpace	Type: ECameraShakePlaySpace	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserPlaySpaceRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientStartCameraShake(class UCameraShakeBase* Shake, float Scale, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStartCameraShake");

	struct APlayerController_ClientStartCameraShake_Params {
		class UCameraShakeBase* Shake;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
		ECameraShakePlaySpace PlaySpace;			//Offset: 12 | ElementSize: 1
		struct FRotator UserPlaySpaceRot;			//Offset: 16 | ElementSize: 12
	};
	APlayerController_ClientStartCameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStartCameraShakeFromSource
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Shake	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientStartCameraShakeFromSource(class UCameraShakeBase* Shake, class UCameraShakeSourceComponent* SourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStartCameraShakeFromSource");

	struct APlayerController_ClientStartCameraShakeFromSource_Params {
		class UCameraShakeBase* Shake;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
	};
	APlayerController_ClientStartCameraShakeFromSource_Params params;
	params.Shake = Shake;
	params.SourceComponent = SourceComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStartOnlineSession
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientStartOnlineSession() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStartOnlineSession");

	struct APlayerController_ClientStartOnlineSession_Params {
	};
	APlayerController_ClientStartOnlineSession_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStopCameraAnim
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: AnimToStop	Type: class UCameraAnim*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientStopCameraAnim(class UCameraAnim* AnimToStop) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopCameraAnim");

	struct APlayerController_ClientStopCameraAnim_Params {
		class UCameraAnim* AnimToStop;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ClientStopCameraAnim_Params params;
	params.AnimToStop = AnimToStop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStopCameraShake
// Flags: Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable
// Params:
// Name: Shake	Type: class UCameraShakeBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientStopCameraShake(class UCameraShakeBase* Shake, bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopCameraShake");

	struct APlayerController_ClientStopCameraShake_Params {
		class UCameraShakeBase* Shake;			//Offset: 0 | ElementSize: 8
		bool bImmediately;			//Offset: 8 | ElementSize: 1
	};
	APlayerController_ClientStopCameraShake_Params params;
	params.Shake = Shake;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStopCameraShakesFromSource
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bImmediately	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientStopCameraShakesFromSource(class UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopCameraShakesFromSource");

	struct APlayerController_ClientStopCameraShakesFromSource_Params {
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 0 | ElementSize: 8
		bool bImmediately;			//Offset: 8 | ElementSize: 1
	};
	APlayerController_ClientStopCameraShakesFromSource_Params params;
	params.SourceComponent = SourceComponent;
	params.bImmediately = bImmediately;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientStopForceFeedback
// Flags: Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable
// Params:
// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopForceFeedback");

	struct APlayerController_ClientStopForceFeedback_Params {
		class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
		struct FName Tag;			//Offset: 8 | ElementSize: 8
	};
	APlayerController_ClientStopForceFeedback_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientTeamMessage
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: SenderPlayerState	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: S	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Type	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MsgLifeTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientTeamMessage(class APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTeamMessage");

	struct APlayerController_ClientTeamMessage_Params {
		class APlayerState* SenderPlayerState;			//Offset: 0 | ElementSize: 8
		struct FString S;			//Offset: 8 | ElementSize: 16
		struct FName Type;			//Offset: 24 | ElementSize: 8
		float MsgLifeTime;			//Offset: 32 | ElementSize: 4
	};
	APlayerController_ClientTeamMessage_Params params;
	params.SenderPlayerState = SenderPlayerState;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientTravel
// Flags: Final, Native, Public, HasDefaults
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TravelType	Type: TEnumAsByte<ETravelType>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSeamless	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MapPackageGuid	Type: struct FGuid	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientTravel(struct FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, struct FGuid MapPackageGuid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTravel");

	struct APlayerController_ClientTravel_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<ETravelType> TravelType;			//Offset: 16 | ElementSize: 1
		bool bSeamless;			//Offset: 17 | ElementSize: 1
		struct FGuid MapPackageGuid;			//Offset: 20 | ElementSize: 16
	};
	APlayerController_ClientTravel_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientTravelInternal
// Flags: Net, NetReliable, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TravelType	Type: TEnumAsByte<ETravelType>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSeamless	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MapPackageGuid	Type: struct FGuid	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientTravelInternal(struct FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, struct FGuid MapPackageGuid) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTravelInternal");

	struct APlayerController_ClientTravelInternal_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<ETravelType> TravelType;			//Offset: 16 | ElementSize: 1
		bool bSeamless;			//Offset: 17 | ElementSize: 1
		struct FGuid MapPackageGuid;			//Offset: 20 | ElementSize: 16
	};
	APlayerController_ClientTravelInternal_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientUnmutePlayer
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: PlayerId	Type: struct FUniqueNetIdRepl	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUnmutePlayer");

	struct APlayerController_ClientUnmutePlayer_Params {
		struct FUniqueNetIdRepl PlayerId;			//Offset: 0 | ElementSize: 40
	};
	APlayerController_ClientUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: PackageName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNewShouldBeLoaded	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNewShouldBeVisible	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNewShouldBlockOnLoad	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUpdateLevelStreamingStatus");

	struct APlayerController_ClientUpdateLevelStreamingStatus_Params {
		struct FName PackageName;			//Offset: 0 | ElementSize: 8
		bool bNewShouldBeLoaded;			//Offset: 8 | ElementSize: 1
		bool bNewShouldBeVisible;			//Offset: 9 | ElementSize: 1
		bool bNewShouldBlockOnLoad;			//Offset: 10 | ElementSize: 1
		int32_t LODIndex;			//Offset: 12 | ElementSize: 4
	};
	APlayerController_ClientUpdateLevelStreamingStatus_Params params;
	params.PackageName = PackageName;
	params.bNewShouldBeLoaded = bNewShouldBeLoaded;
	params.bNewShouldBeVisible = bNewShouldBeVisible;
	params.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: LevelStatuses	Type: TArray<struct FUpdateLevelStreamingLevelStatus>	Flags: ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus>& LevelStatuses) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus");

	struct APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Params {
		TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Params params;
	params.LevelStatuses = LevelStatuses;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientVoiceHandshakeComplete
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void APlayerController::ClientVoiceHandshakeComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientVoiceHandshakeComplete");

	struct APlayerController_ClientVoiceHandshakeComplete_Params {
	};
	APlayerController_ClientVoiceHandshakeComplete_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ClientWasKicked
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: KickReason	Type: struct FText	Flags: ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ClientWasKicked(struct FText& KickReason) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientWasKicked");

	struct APlayerController_ClientWasKicked_Params {
		struct FText KickReason;			//Offset: 0 | ElementSize: 24
	};
	APlayerController_ClientWasKicked_Params params;
	params.KickReason = KickReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ConsoleKey
// Flags: Exec, Native, Public
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ConsoleKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ConsoleKey");

	struct APlayerController_ConsoleKey_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	APlayerController_ConsoleKey_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.DeprojectMousePositionToWorld
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: WorldLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WorldDirection	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.DeprojectMousePositionToWorld");

	struct APlayerController_DeprojectMousePositionToWorld_Params {
		struct FVector WorldLocation;			//Offset: 0 | ElementSize: 12
		struct FVector WorldDirection;			//Offset: 12 | ElementSize: 12
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	APlayerController_DeprojectMousePositionToWorld_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.DeprojectScreenPositionToWorld
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ScreenX	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScreenY	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WorldLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WorldDirection	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.DeprojectScreenPositionToWorld");

	struct APlayerController_DeprojectScreenPositionToWorld_Params {
		float ScreenX;			//Offset: 0 | ElementSize: 4
		float ScreenY;			//Offset: 4 | ElementSize: 4
		struct FVector WorldLocation;			//Offset: 8 | ElementSize: 12
		struct FVector WorldDirection;			//Offset: 20 | ElementSize: 12
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	APlayerController_DeprojectScreenPositionToWorld_Params params;
	params.ScreenX = ScreenX;
	params.ScreenY = ScreenY;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.EnableCheats
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void APlayerController::EnableCheats() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.EnableCheats");

	struct APlayerController_EnableCheats_Params {
	};
	APlayerController_EnableCheats_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.FOV
// Flags: Exec, Native, Public
// Params:
// Name: NewFOV	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::FOV(float NewFOV) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.FOV");

	struct APlayerController_FOV_Params {
		float NewFOV;			//Offset: 0 | ElementSize: 4
	};
	APlayerController_FOV_Params params;
	params.NewFOV = NewFOV;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetFocalLocation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector APlayerController::GetFocalLocation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetFocalLocation");

	struct APlayerController_GetFocalLocation_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	APlayerController_GetFocalLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHitResultUnderCursor
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: TraceChannel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderCursor");

	struct APlayerController_GetHitResultUnderCursor_Params {
		TEnumAsByte<ECollisionChannel> TraceChannel;			//Offset: 0 | ElementSize: 1
		bool bTraceComplex;			//Offset: 1 | ElementSize: 1
		struct FHitResult HitResult;			//Offset: 4 | ElementSize: 136
		bool ReturnValue;			//Offset: 140 | ElementSize: 1
	};
	APlayerController_GetHitResultUnderCursor_Params params;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHitResultUnderCursorByChannel
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderCursorByChannel");

	struct APlayerController_GetHitResultUnderCursorByChannel_Params {
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 0 | ElementSize: 1
		bool bTraceComplex;			//Offset: 1 | ElementSize: 1
		struct FHitResult HitResult;			//Offset: 4 | ElementSize: 136
		bool ReturnValue;			//Offset: 140 | ElementSize: 1
	};
	APlayerController_GetHitResultUnderCursorByChannel_Params params;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHitResultUnderCursorForObjects
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderCursorForObjects");

	struct APlayerController_GetHitResultUnderCursorForObjects_Params {
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 0 | ElementSize: 16
		bool bTraceComplex;			//Offset: 16 | ElementSize: 1
		struct FHitResult HitResult;			//Offset: 20 | ElementSize: 136
		bool ReturnValue;			//Offset: 156 | ElementSize: 1
	};
	APlayerController_GetHitResultUnderCursorForObjects_Params params;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHitResultUnderFinger
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderFinger");

	struct APlayerController_GetHitResultUnderFinger_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionChannel> TraceChannel;			//Offset: 1 | ElementSize: 1
		bool bTraceComplex;			//Offset: 2 | ElementSize: 1
		struct FHitResult HitResult;			//Offset: 4 | ElementSize: 136
		bool ReturnValue;			//Offset: 140 | ElementSize: 1
	};
	APlayerController_GetHitResultUnderFinger_Params params;
	params.FingerIndex = FingerIndex;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHitResultUnderFingerByChannel
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceChannel	Type: TEnumAsByte<ETraceTypeQuery>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderFingerByChannel");

	struct APlayerController_GetHitResultUnderFingerByChannel_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ETraceTypeQuery> TraceChannel;			//Offset: 1 | ElementSize: 1
		bool bTraceComplex;			//Offset: 2 | ElementSize: 1
		struct FHitResult HitResult;			//Offset: 4 | ElementSize: 136
		bool ReturnValue;			//Offset: 140 | ElementSize: 1
	};
	APlayerController_GetHitResultUnderFingerByChannel_Params params;
	params.FingerIndex = FingerIndex;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHitResultUnderFingerForObjects
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ObjectTypes	Type: TArray<TEnumAsByte<EObjectTypeQuery>>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderFingerForObjects");

	struct APlayerController_GetHitResultUnderFingerForObjects_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;			//Offset: 8 | ElementSize: 16
		bool bTraceComplex;			//Offset: 24 | ElementSize: 1
		struct FHitResult HitResult;			//Offset: 28 | ElementSize: 136
		bool ReturnValue;			//Offset: 164 | ElementSize: 1
	};
	APlayerController_GetHitResultUnderFingerForObjects_Params params;
	params.FingerIndex = FingerIndex;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetHUD
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AHUD*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AHUD* APlayerController::GetHUD()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHUD");

	struct APlayerController_GetHUD_Params {
		class AHUD* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_GetHUD_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputAnalogKeyState
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float APlayerController::GetInputAnalogKeyState(struct FKey Key)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputAnalogKeyState");

	struct APlayerController_GetInputAnalogKeyState_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	APlayerController_GetInputAnalogKeyState_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputAnalogStickState
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: WhichStick	Type: TEnumAsByte<EControllerAnalogStick>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StickX	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StickY	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputAnalogStickState");

	struct APlayerController_GetInputAnalogStickState_Params {
		TEnumAsByte<EControllerAnalogStick> WhichStick;			//Offset: 0 | ElementSize: 1
		float StickX;			//Offset: 4 | ElementSize: 4
		float StickY;			//Offset: 8 | ElementSize: 4
	};
	APlayerController_GetInputAnalogStickState_Params params;
	params.WhichStick = WhichStick;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (StickX != nullptr)
		*StickX = params.StickX;
	if (StickY != nullptr)
		*StickY = params.StickY;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputKeyTimeDown
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float APlayerController::GetInputKeyTimeDown(struct FKey Key)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputKeyTimeDown");

	struct APlayerController_GetInputKeyTimeDown_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	APlayerController_GetInputKeyTimeDown_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputMotionState
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Tilt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationRate	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Gravity	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Acceleration	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputMotionState");

	struct APlayerController_GetInputMotionState_Params {
		struct FVector Tilt;			//Offset: 0 | ElementSize: 12
		struct FVector RotationRate;			//Offset: 12 | ElementSize: 12
		struct FVector Gravity;			//Offset: 24 | ElementSize: 12
		struct FVector Acceleration;			//Offset: 36 | ElementSize: 12
	};
	APlayerController_GetInputMotionState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Tilt != nullptr)
		*Tilt = params.Tilt;
	if (RotationRate != nullptr)
		*RotationRate = params.RotationRate;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (Acceleration != nullptr)
		*Acceleration = params.Acceleration;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputMouseDelta
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: DeltaX	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DeltaY	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::GetInputMouseDelta(float* DeltaX, float* DeltaY)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputMouseDelta");

	struct APlayerController_GetInputMouseDelta_Params {
		float DeltaX;			//Offset: 0 | ElementSize: 4
		float DeltaY;			//Offset: 4 | ElementSize: 4
	};
	APlayerController_GetInputMouseDelta_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (DeltaX != nullptr)
		*DeltaX = params.DeltaX;
	if (DeltaY != nullptr)
		*DeltaY = params.DeltaY;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputTouchState
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationX	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationY	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIsCurrentlyPressed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputTouchState");

	struct APlayerController_GetInputTouchState_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
		float LocationX;			//Offset: 4 | ElementSize: 4
		float LocationY;			//Offset: 8 | ElementSize: 4
		bool bIsCurrentlyPressed;			//Offset: 12 | ElementSize: 1
	};
	APlayerController_GetInputTouchState_Params params;
	params.FingerIndex = FingerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;
	if (bIsCurrentlyPressed != nullptr)
		*bIsCurrentlyPressed = params.bIsCurrentlyPressed;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetInputVectorKeyState
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector APlayerController::GetInputVectorKeyState(struct FKey Key)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputVectorKeyState");

	struct APlayerController_GetInputVectorKeyState_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		struct FVector ReturnValue;			//Offset: 24 | ElementSize: 12
	};
	APlayerController_GetInputVectorKeyState_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetMousePosition
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: LocationX	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationY	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::GetMousePosition(float* LocationX, float* LocationY)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetMousePosition");

	struct APlayerController_GetMousePosition_Params {
		float LocationX;			//Offset: 0 | ElementSize: 4
		float LocationY;			//Offset: 4 | ElementSize: 4
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	APlayerController_GetMousePosition_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetSpectatorPawn
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class ASpectatorPawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class ASpectatorPawn* APlayerController::GetSpectatorPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetSpectatorPawn");

	struct APlayerController_GetSpectatorPawn_Params {
		class ASpectatorPawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_GetSpectatorPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.GetViewportSize
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: SizeX	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SizeY	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::GetViewportSize(int32_t* SizeX, int32_t* SizeY)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetViewportSize");

	struct APlayerController_GetViewportSize_Params {
		int32_t SizeX;			//Offset: 0 | ElementSize: 4
		int32_t SizeY;			//Offset: 4 | ElementSize: 4
	};
	APlayerController_GetViewportSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.IsInputKeyDown
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::IsInputKeyDown(struct FKey Key)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.IsInputKeyDown");

	struct APlayerController_IsInputKeyDown_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	APlayerController_IsInputKeyDown_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.K2_ClientPlayForceFeedback
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ForceFeedbackEffect	Type: class UForceFeedbackEffect*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIgnoreTimeDilation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPlayWhilePaused	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::K2_ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.K2_ClientPlayForceFeedback");

	struct APlayerController_K2_ClientPlayForceFeedback_Params {
		class UForceFeedbackEffect* ForceFeedbackEffect;			//Offset: 0 | ElementSize: 8
		struct FName Tag;			//Offset: 8 | ElementSize: 8
		bool bLooping;			//Offset: 16 | ElementSize: 1
		bool bIgnoreTimeDilation;			//Offset: 17 | ElementSize: 1
		bool bPlayWhilePaused;			//Offset: 18 | ElementSize: 1
	};
	APlayerController_K2_ClientPlayForceFeedback_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;
	params.bLooping = bLooping;
	params.bIgnoreTimeDilation = bIgnoreTimeDilation;
	params.bPlayWhilePaused = bPlayWhilePaused;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.LocalTravel
// Flags: Exec, Native, Public
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::LocalTravel(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LocalTravel");

	struct APlayerController_LocalTravel_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_LocalTravel_Params params;
	params.URL = URL;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.OnServerStartedVisualLogger
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: bIsLogging	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::OnServerStartedVisualLogger(bool bIsLogging) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.OnServerStartedVisualLogger");

	struct APlayerController_OnServerStartedVisualLogger_Params {
		bool bIsLogging;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_OnServerStartedVisualLogger_Params params;
	params.bIsLogging = bIsLogging;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.Pause
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void APlayerController::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Pause");

	struct APlayerController_Pause_Params {
	};
	APlayerController_Pause_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.PlayDynamicForceFeedback
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: Intensity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsLeftLarge	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsLeftSmall	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsRightLarge	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsRightSmall	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Action	Type: TEnumAsByte<EDynamicForceFeedbackAction>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LatentInfo	Type: struct FLatentActionInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, struct FLatentActionInfo LatentInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayDynamicForceFeedback");

	struct APlayerController_PlayDynamicForceFeedback_Params {
		float Intensity;			//Offset: 0 | ElementSize: 4
		float Duration;			//Offset: 4 | ElementSize: 4
		bool bAffectsLeftLarge;			//Offset: 8 | ElementSize: 1
		bool bAffectsLeftSmall;			//Offset: 9 | ElementSize: 1
		bool bAffectsRightLarge;			//Offset: 10 | ElementSize: 1
		bool bAffectsRightSmall;			//Offset: 11 | ElementSize: 1
		TEnumAsByte<EDynamicForceFeedbackAction> Action;			//Offset: 12 | ElementSize: 1
		struct FLatentActionInfo LatentInfo;			//Offset: 16 | ElementSize: 24
	};
	APlayerController_PlayDynamicForceFeedback_Params params;
	params.Intensity = Intensity;
	params.Duration = Duration;
	params.bAffectsLeftLarge = bAffectsLeftLarge;
	params.bAffectsLeftSmall = bAffectsLeftSmall;
	params.bAffectsRightLarge = bAffectsRightLarge;
	params.bAffectsRightSmall = bAffectsRightSmall;
	params.Action = Action;
	params.LatentInfo = LatentInfo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.PlayHapticEffect
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: HapticEffect	Type: class UHapticFeedbackEffect_Base*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Hand	Type: EControllerHand	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLoop	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayHapticEffect");

	struct APlayerController_PlayHapticEffect_Params {
		class UHapticFeedbackEffect_Base* HapticEffect;			//Offset: 0 | ElementSize: 8
		EControllerHand Hand;			//Offset: 8 | ElementSize: 1
		float Scale;			//Offset: 12 | ElementSize: 4
		bool bLoop;			//Offset: 16 | ElementSize: 1
	};
	APlayerController_PlayHapticEffect_Params params;
	params.HapticEffect = HapticEffect;
	params.Hand = Hand;
	params.Scale = Scale;
	params.bLoop = bLoop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ProjectWorldLocationToScreen
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: WorldLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScreenLocation	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPlayerViewportRelative	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D* ScreenLocation, bool bPlayerViewportRelative)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ProjectWorldLocationToScreen");

	struct APlayerController_ProjectWorldLocationToScreen_Params {
		struct FVector WorldLocation;			//Offset: 0 | ElementSize: 12
		struct FVector2D ScreenLocation;			//Offset: 12 | ElementSize: 8
		bool bPlayerViewportRelative;			//Offset: 20 | ElementSize: 1
		bool ReturnValue;			//Offset: 21 | ElementSize: 1
	};
	APlayerController_ProjectWorldLocationToScreen_Params params;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.ResetControllerLightColor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void APlayerController::ResetControllerLightColor() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ResetControllerLightColor");

	struct APlayerController_ResetControllerLightColor_Params {
	};
	APlayerController_ResetControllerLightColor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.RestartLevel
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void APlayerController::RestartLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.RestartLevel");

	struct APlayerController_RestartLevel_Params {
	};
	APlayerController_RestartLevel_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SendToConsole
// Flags: Exec, Native, Public
// Params:
// Name: Command	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SendToConsole(struct FString Command) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SendToConsole");

	struct APlayerController_SendToConsole_Params {
		struct FString Command;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_SendToConsole_Params params;
	params.Command = Command;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerAcknowledgePossession
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: P	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerAcknowledgePossession(class APawn* P) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerAcknowledgePossession");

	struct APlayerController_ServerAcknowledgePossession_Params {
		class APawn* P;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ServerAcknowledgePossession_Params params;
	params.P = P;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerCamera
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: NewMode	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerCamera(struct FName NewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerCamera");

	struct APlayerController_ServerCamera_Params {
		struct FName NewMode;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ServerCamera_Params params;
	params.NewMode = NewMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerChangeName
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: S	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerChangeName(struct FString S) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerChangeName");

	struct APlayerController_ServerChangeName_Params {
		struct FString S;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ServerChangeName_Params params;
	params.S = S;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerCheckClientPossession
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerCheckClientPossession() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerCheckClientPossession");

	struct APlayerController_ServerCheckClientPossession_Params {
	};
	APlayerController_ServerCheckClientPossession_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerCheckClientPossessionReliable
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerCheckClientPossessionReliable() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerCheckClientPossessionReliable");

	struct APlayerController_ServerCheckClientPossessionReliable_Params {
	};
	APlayerController_ServerCheckClientPossessionReliable_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerExec
// Flags: Final, Exec, Native, Public
// Params:
// Name: Msg	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerExec(struct FString Msg) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerExec");

	struct APlayerController_ServerExec_Params {
		struct FString Msg;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ServerExec_Params params;
	params.Msg = Msg;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerExecRPC
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: Msg	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerExecRPC(struct FString Msg) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerExecRPC");

	struct APlayerController_ServerExecRPC_Params {
		struct FString Msg;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ServerExecRPC_Params params;
	params.Msg = Msg;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerMutePlayer
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: PlayerId	Type: struct FUniqueNetIdRepl	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerMutePlayer(struct FUniqueNetIdRepl PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerMutePlayer");

	struct APlayerController_ServerMutePlayer_Params {
		struct FUniqueNetIdRepl PlayerId;			//Offset: 0 | ElementSize: 40
	};
	APlayerController_ServerMutePlayer_Params params;
	params.PlayerId = PlayerId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerNotifyLoadedWorld
// Flags: Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: WorldPackageName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerNotifyLoadedWorld(struct FName WorldPackageName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerNotifyLoadedWorld");

	struct APlayerController_ServerNotifyLoadedWorld_Params {
		struct FName WorldPackageName;			//Offset: 0 | ElementSize: 8
	};
	APlayerController_ServerNotifyLoadedWorld_Params params;
	params.WorldPackageName = WorldPackageName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerPause
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerPause() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerPause");

	struct APlayerController_ServerPause_Params {
	};
	APlayerController_ServerPause_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerRestartPlayer
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerRestartPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerRestartPlayer");

	struct APlayerController_ServerRestartPlayer_Params {
	};
	APlayerController_ServerRestartPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerSetSpectatorLocation
// Flags: Net, Native, Event, Public, NetServer, HasDefaults, NetValidate
// Params:
// Name: NewLoc	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewRot	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerSetSpectatorLocation");

	struct APlayerController_ServerSetSpectatorLocation_Params {
		struct FVector NewLoc;			//Offset: 0 | ElementSize: 12
		struct FRotator NewRot;			//Offset: 12 | ElementSize: 12
	};
	APlayerController_ServerSetSpectatorLocation_Params params;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerSetSpectatorWaiting
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: bWaiting	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerSetSpectatorWaiting(bool bWaiting) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerSetSpectatorWaiting");

	struct APlayerController_ServerSetSpectatorWaiting_Params {
		bool bWaiting;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_ServerSetSpectatorWaiting_Params params;
	params.bWaiting = bWaiting;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerShortTimeout
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerShortTimeout() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerShortTimeout");

	struct APlayerController_ServerShortTimeout_Params {
	};
	APlayerController_ServerShortTimeout_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerToggleAILogging
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerToggleAILogging() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerToggleAILogging");

	struct APlayerController_ServerToggleAILogging_Params {
	};
	APlayerController_ServerToggleAILogging_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerUnmutePlayer
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: PlayerId	Type: struct FUniqueNetIdRepl	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerId) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUnmutePlayer");

	struct APlayerController_ServerUnmutePlayer_Params {
		struct FUniqueNetIdRepl PlayerId;			//Offset: 0 | ElementSize: 40
	};
	APlayerController_ServerUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerUpdateCamera
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: CamLoc	Type: struct FVector_NetQuantize	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CamPitchAndYaw	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdateCamera");

	struct APlayerController_ServerUpdateCamera_Params {
		struct FVector_NetQuantize CamLoc;			//Offset: 0 | ElementSize: 12
		int32_t CamPitchAndYaw;			//Offset: 12 | ElementSize: 4
	};
	APlayerController_ServerUpdateCamera_Params params;
	params.CamLoc = CamLoc;
	params.CamPitchAndYaw = CamPitchAndYaw;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerUpdateLevelVisibility
// Flags: Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: LevelVisibility	Type: struct FUpdateLevelVisibilityLevelInfo	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdateLevelVisibility");

	struct APlayerController_ServerUpdateLevelVisibility_Params {
		struct FUpdateLevelVisibilityLevelInfo LevelVisibility;			//Offset: 0 | ElementSize: 20
	};
	APlayerController_ServerUpdateLevelVisibility_Params params;
	params.LevelVisibility = LevelVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
// Flags: Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: LevelVisibilities	Type: TArray<struct FUpdateLevelVisibilityLevelInfo>	Flags: ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility");

	struct APlayerController_ServerUpdateMultipleLevelsVisibility_Params {
		TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ServerUpdateMultipleLevelsVisibility_Params params;
	params.LevelVisibilities = LevelVisibilities;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerVerifyViewTarget
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerVerifyViewTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerVerifyViewTarget");

	struct APlayerController_ServerVerifyViewTarget_Params {
	};
	APlayerController_ServerVerifyViewTarget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerViewNextPlayer
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerViewNextPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewNextPlayer");

	struct APlayerController_ServerViewNextPlayer_Params {
	};
	APlayerController_ServerViewNextPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerViewPrevPlayer
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void APlayerController::ServerViewPrevPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewPrevPlayer");

	struct APlayerController_ServerViewPrevPlayer_Params {
	};
	APlayerController_ServerViewPrevPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ServerViewSelf
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: TransitionParams	Type: struct FViewTargetTransitionParams	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ServerViewSelf(struct FViewTargetTransitionParams TransitionParams) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewSelf");

	struct APlayerController_ServerViewSelf_Params {
		struct FViewTargetTransitionParams TransitionParams;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_ServerViewSelf_Params params;
	params.TransitionParams = TransitionParams;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetAudioListenerAttenuationOverride
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttenuationLocationOVerride	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, struct FVector AttenuationLocationOVerride) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetAudioListenerAttenuationOverride");

	struct APlayerController_SetAudioListenerAttenuationOverride_Params {
		class USceneComponent* AttachToComponent;			//Offset: 0 | ElementSize: 8
		struct FVector AttenuationLocationOVerride;			//Offset: 8 | ElementSize: 12
	};
	APlayerController_SetAudioListenerAttenuationOverride_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttenuationLocationOVerride = AttenuationLocationOVerride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetAudioListenerOverride
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: AttachToComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Rotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetAudioListenerOverride(class USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetAudioListenerOverride");

	struct APlayerController_SetAudioListenerOverride_Params {
		class USceneComponent* AttachToComponent;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 20 | ElementSize: 12
	};
	APlayerController_SetAudioListenerOverride_Params params;
	params.AttachToComponent = AttachToComponent;
	params.Location = Location;
	params.Rotation = Rotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetCinematicMode
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bInCinematicMode	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHidePlayer	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsHUD	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsMovement	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAffectsTurning	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetCinematicMode");

	struct APlayerController_SetCinematicMode_Params {
		bool bInCinematicMode;			//Offset: 0 | ElementSize: 1
		bool bHidePlayer;			//Offset: 1 | ElementSize: 1
		bool bAffectsHUD;			//Offset: 2 | ElementSize: 1
		bool bAffectsMovement;			//Offset: 3 | ElementSize: 1
		bool bAffectsTurning;			//Offset: 4 | ElementSize: 1
	};
	APlayerController_SetCinematicMode_Params params;
	params.bInCinematicMode = bInCinematicMode;
	params.bHidePlayer = bHidePlayer;
	params.bAffectsHUD = bAffectsHUD;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetControllerLightColor
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Color	Type: struct FColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetControllerLightColor(struct FColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetControllerLightColor");

	struct APlayerController_SetControllerLightColor_Params {
		struct FColor Color;			//Offset: 0 | ElementSize: 4
	};
	APlayerController_SetControllerLightColor_Params params;
	params.Color = Color;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetDisableHaptics
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewDisabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetDisableHaptics(bool bNewDisabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetDisableHaptics");

	struct APlayerController_SetDisableHaptics_Params {
		bool bNewDisabled;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_SetDisableHaptics_Params params;
	params.bNewDisabled = bNewDisabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetHapticsByValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Frequency	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Amplitude	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Hand	Type: EControllerHand	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetHapticsByValue");

	struct APlayerController_SetHapticsByValue_Params {
		float Frequency;			//Offset: 0 | ElementSize: 4
		float Amplitude;			//Offset: 4 | ElementSize: 4
		EControllerHand Hand;			//Offset: 8 | ElementSize: 1
	};
	APlayerController_SetHapticsByValue_Params params;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;
	params.Hand = Hand;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetMouseCursorWidget
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Cursor	Type: TEnumAsByte<EMouseCursor>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CursorWidget	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursor, class UUserWidget* CursorWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetMouseCursorWidget");

	struct APlayerController_SetMouseCursorWidget_Params {
		TEnumAsByte<EMouseCursor> Cursor;			//Offset: 0 | ElementSize: 1
		class UUserWidget* CursorWidget;			//Offset: 8 | ElementSize: 8
	};
	APlayerController_SetMouseCursorWidget_Params params;
	params.Cursor = Cursor;
	params.CursorWidget = CursorWidget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetMouseLocation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: X	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetMouseLocation(int32_t X, int32_t Y) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetMouseLocation");

	struct APlayerController_SetMouseLocation_Params {
		int32_t X;			//Offset: 0 | ElementSize: 4
		int32_t Y;			//Offset: 4 | ElementSize: 4
	};
	APlayerController_SetMouseLocation_Params params;
	params.X = X;
	params.Y = Y;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetName
// Flags: Exec, Native, Public
// Params:
// Name: S	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetName(struct FString S) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetName");

	struct APlayerController_SetName_Params {
		struct FString S;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_SetName_Params params;
	params.S = S;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetViewTargetWithBlend
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewViewTarget	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendFunc	Type: TEnumAsByte<EViewTargetBlendFunction>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendExp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLockOutgoing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetViewTargetWithBlend");

	struct APlayerController_SetViewTargetWithBlend_Params {
		class AActor* NewViewTarget;			//Offset: 0 | ElementSize: 8
		float BlendTime;			//Offset: 8 | ElementSize: 4
		TEnumAsByte<EViewTargetBlendFunction> BlendFunc;			//Offset: 12 | ElementSize: 1
		float BlendExp;			//Offset: 16 | ElementSize: 4
		bool bLockOutgoing;			//Offset: 20 | ElementSize: 1
	};
	APlayerController_SetViewTargetWithBlend_Params params;
	params.NewViewTarget = NewViewTarget;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SetVirtualJoystickVisibility
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bVisible	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SetVirtualJoystickVisibility(bool bVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetVirtualJoystickVisibility");

	struct APlayerController_SetVirtualJoystickVisibility_Params {
		bool bVisible;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_SetVirtualJoystickVisibility_Params params;
	params.bVisible = bVisible;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.StartFire
// Flags: Exec, Native, Public
// Params:
// Name: FireModeNum	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::StartFire(unsigned char FireModeNum) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.StartFire");

	struct APlayerController_StartFire_Params {
		unsigned char FireModeNum;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.StopHapticEffect
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Hand	Type: EControllerHand	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::StopHapticEffect(EControllerHand Hand) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.StopHapticEffect");

	struct APlayerController_StopHapticEffect_Params {
		EControllerHand Hand;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_StopHapticEffect_Params params;
	params.Hand = Hand;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.SwitchLevel
// Flags: Exec, Native, Public
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::SwitchLevel(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SwitchLevel");

	struct APlayerController_SwitchLevel_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
	};
	APlayerController_SwitchLevel_Params params;
	params.URL = URL;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.TestServerLevelVisibilityChange
// Flags: Final, Exec, Native, Private
// Params:
// Name: PackageName	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Filename	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TestServerLevelVisibilityChange");

	struct APlayerController_TestServerLevelVisibilityChange_Params {
		struct FName PackageName;			//Offset: 0 | ElementSize: 8
		struct FName Filename;			//Offset: 8 | ElementSize: 8
	};
	APlayerController_TestServerLevelVisibilityChange_Params params;
	params.PackageName = PackageName;
	params.Filename = Filename;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.ToggleSpeaking
// Flags: Exec, Native, Public
// Params:
// Name: bInSpeaking	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerController::ToggleSpeaking(bool bInSpeaking) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ToggleSpeaking");

	struct APlayerController_ToggleSpeaking_Params {
		bool bInSpeaking;			//Offset: 0 | ElementSize: 1
	};
	APlayerController_ToggleSpeaking_Params params;
	params.bInSpeaking = bInSpeaking;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerController.WasInputKeyJustPressed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::WasInputKeyJustPressed(struct FKey Key)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.WasInputKeyJustPressed");

	struct APlayerController_WasInputKeyJustPressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	APlayerController_WasInputKeyJustPressed_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerController.WasInputKeyJustReleased
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Key	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerController::WasInputKeyJustReleased(struct FKey Key)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.WasInputKeyJustReleased");

	struct APlayerController_WasInputKeyJustReleased_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	APlayerController_WasInputKeyJustReleased_Params params;
	params.Key = Key;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}