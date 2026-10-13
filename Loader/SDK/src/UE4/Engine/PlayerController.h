#pragma once
#include "Structs.h"
#include "Engine/Controller.h"
/////////////////////////////////////////////
// Class Engine.PlayerController
// Super: Class Engine.Controller
// Size: 1392
// Size inherited: 664
/////////////////////////////////////////////
namespace UE4 {
class APlayerController : public AController {
public:
#pragma region Members
	//class UPlayer*	Player;		//Offset: 664	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPlayer* M_GetPlayer() const;
	class UPlayer** M_PtrGetPlayer();
	void M_SetPlayer(const class UPlayer*& value);

	//class APawn*	AcknowledgedPawn;		//Offset: 672	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APawn* M_GetAcknowledgedPawn() const;
	class APawn** M_PtrGetAcknowledgedPawn();
	void M_SetAcknowledgedPawn(const class APawn*& value);

	//class UInterpTrackInstDirector*	ControllingDirTrackInst;		//Offset: 680	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UInterpTrackInstDirector* M_GetControllingDirTrackInst() const;
	class UInterpTrackInstDirector** M_PtrGetControllingDirTrackInst();
	void M_SetControllingDirTrackInst(const class UInterpTrackInstDirector*& value);

	//class AHUD*	MyHUD;		//Offset: 688	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AHUD* M_GetMyHUD() const;
	class AHUD** M_PtrGetMyHUD();
	void M_SetMyHUD(const class AHUD*& value);

	//class APlayerCameraManager*	PlayerCameraManager;		//Offset: 696	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerCameraManager* M_GetPlayerCameraManager() const;
	class APlayerCameraManager** M_PtrGetPlayerCameraManager();
	void M_SetPlayerCameraManager(const class APlayerCameraManager*& value);

	//class APlayerCameraManager*	PlayerCameraManagerClass;		//Offset: 704	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerCameraManager* M_GetPlayerCameraManagerClass() const;
	class APlayerCameraManager** M_PtrGetPlayerCameraManagerClass();
	void M_SetPlayerCameraManagerClass(const class APlayerCameraManager*& value);

	//bool	bAutoManageActiveCameraTarget;		//Offset: 712	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAutoManageActiveCameraTarget() const;
	bool* M_PtrGetbAutoManageActiveCameraTarget();
	void M_SetbAutoManageActiveCameraTarget(const bool& value);

	//struct FRotator	TargetViewRotation;		//Offset: 716	Size: 12	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetTargetViewRotation() const;
	struct FRotator* M_PtrGetTargetViewRotation();
	void M_SetTargetViewRotation(const struct FRotator& value);

	//float	SmoothTargetViewRotationSpeed;		//Offset: 740	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSmoothTargetViewRotationSpeed() const;
	float* M_PtrGetSmoothTargetViewRotationSpeed();
	void M_SetSmoothTargetViewRotationSpeed(const float& value);

	//TArray<class AActor*>	HiddenActors;		//Offset: 752	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class AActor*> M_GetHiddenActors() const;
	TArray<class AActor*>* M_PtrGetHiddenActors();
	void M_SetHiddenActors(const TArray<class AActor*>& value);

	//TArray<TWeakObjectPtr<class UPrimitiveComponent>>	HiddenPrimitiveComponents;		//Offset: 768	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> M_GetHiddenPrimitiveComponents() const;
	TArray<TWeakObjectPtr<class UPrimitiveComponent>>* M_PtrGetHiddenPrimitiveComponents();
	void M_SetHiddenPrimitiveComponents(const TArray<TWeakObjectPtr<class UPrimitiveComponent>>& value);

	//float	LastSpectatorStateSynchTime;		//Offset: 788	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLastSpectatorStateSynchTime() const;
	float* M_PtrGetLastSpectatorStateSynchTime();
	void M_SetLastSpectatorStateSynchTime(const float& value);

	//struct FVector	LastSpectatorSyncLocation;		//Offset: 792	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetLastSpectatorSyncLocation() const;
	struct FVector* M_PtrGetLastSpectatorSyncLocation();
	void M_SetLastSpectatorSyncLocation(const struct FVector& value);

	//struct FRotator	LastSpectatorSyncRotation;		//Offset: 804	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetLastSpectatorSyncRotation() const;
	struct FRotator* M_PtrGetLastSpectatorSyncRotation();
	void M_SetLastSpectatorSyncRotation(const struct FRotator& value);

	//int32_t	ClientCap;		//Offset: 816	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetClientCap() const;
	int32_t* M_PtrGetClientCap();
	void M_SetClientCap(const int32_t& value);

	//class UCheatManager*	CheatManager;		//Offset: 824	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCheatManager* M_GetCheatManager() const;
	class UCheatManager** M_PtrGetCheatManager();
	void M_SetCheatManager(const class UCheatManager*& value);

	//class UCheatManager*	CheatClass;		//Offset: 832	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCheatManager* M_GetCheatClass() const;
	class UCheatManager** M_PtrGetCheatClass();
	void M_SetCheatClass(const class UCheatManager*& value);

	//class UPlayerInput*	PlayerInput;		//Offset: 840	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPlayerInput* M_GetPlayerInput() const;
	class UPlayerInput** M_PtrGetPlayerInput();
	void M_SetPlayerInput(const class UPlayerInput*& value);

	//TArray<struct FActiveForceFeedbackEffect>	ActiveForceFeedbackEffects;		//Offset: 848	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<struct FActiveForceFeedbackEffect> M_GetActiveForceFeedbackEffects() const;
	TArray<struct FActiveForceFeedbackEffect>* M_PtrGetActiveForceFeedbackEffects();
	void M_SetActiveForceFeedbackEffects(const TArray<struct FActiveForceFeedbackEffect>& value);

	//unsigned char	bPlayerIsWaiting : 1;		//Offset: 976	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPlayerIsWaiting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPlayerIsWaiting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPlayerIsWaiting(const unsigned char& value);

	//unsigned char	NetPlayerIndex;		//Offset: 980	Size: 1	Flags: ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char M_GetNetPlayerIndex() const;
	unsigned char* M_PtrGetNetPlayerIndex();
	void M_SetNetPlayerIndex(const unsigned char& value);

	//class UNetConnection*	PendingSwapConnection;		//Offset: 1040	Size: 8	Flags: ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UNetConnection* M_GetPendingSwapConnection() const;
	class UNetConnection** M_PtrGetPendingSwapConnection();
	void M_SetPendingSwapConnection(const class UNetConnection*& value);

	//class UNetConnection*	NetConnection;		//Offset: 1048	Size: 8	Flags: ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UNetConnection* M_GetNetConnection() const;
	class UNetConnection** M_PtrGetNetConnection();
	void M_SetNetConnection(const class UNetConnection*& value);

	//float	InputYawScale;		//Offset: 1068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetInputYawScale() const;
	float* M_PtrGetInputYawScale();
	void M_SetInputYawScale(const float& value);

	//float	InputPitchScale;		//Offset: 1072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetInputPitchScale() const;
	float* M_PtrGetInputPitchScale();
	void M_SetInputPitchScale(const float& value);

	//float	InputRollScale;		//Offset: 1076	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetInputRollScale() const;
	float* M_PtrGetInputRollScale();
	void M_SetInputRollScale(const float& value);

	//unsigned char	bShowMouseCursor : 1;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShowMouseCursor() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShowMouseCursor();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShowMouseCursor(const unsigned char& value);

	//unsigned char	bEnableClickEvents : 1;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableClickEvents() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableClickEvents();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableClickEvents(const unsigned char& value);

	//unsigned char	bEnableTouchEvents : 1;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableTouchEvents() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableTouchEvents();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableTouchEvents(const unsigned char& value);

	//unsigned char	bEnableMouseOverEvents : 1;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableMouseOverEvents() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableMouseOverEvents();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableMouseOverEvents(const unsigned char& value);

	//unsigned char	bEnableTouchOverEvents : 1;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableTouchOverEvents() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableTouchOverEvents();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableTouchOverEvents(const unsigned char& value);

	//unsigned char	bForceFeedbackEnabled : 1;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceFeedbackEnabled() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceFeedbackEnabled();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceFeedbackEnabled(const unsigned char& value);

	//float	ForceFeedbackScale;		//Offset: 1084	Size: 4	Flags: ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetForceFeedbackScale() const;
	float* M_PtrGetForceFeedbackScale();
	void M_SetForceFeedbackScale(const float& value);

	//TArray<struct FKey>	ClickEventKeys;		//Offset: 1088	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FKey> M_GetClickEventKeys() const;
	TArray<struct FKey>* M_PtrGetClickEventKeys();
	void M_SetClickEventKeys(const TArray<struct FKey>& value);

	//TEnumAsByte<EMouseCursor>	DefaultMouseCursor;		//Offset: 1104	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMouseCursor> M_GetDefaultMouseCursor() const;
	TEnumAsByte<EMouseCursor>* M_PtrGetDefaultMouseCursor();
	void M_SetDefaultMouseCursor(const TEnumAsByte<EMouseCursor>& value);

	//TEnumAsByte<EMouseCursor>	CurrentMouseCursor;		//Offset: 1105	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMouseCursor> M_GetCurrentMouseCursor() const;
	TEnumAsByte<EMouseCursor>* M_PtrGetCurrentMouseCursor();
	void M_SetCurrentMouseCursor(const TEnumAsByte<EMouseCursor>& value);

	//TEnumAsByte<ECollisionChannel>	DefaultClickTraceChannel;		//Offset: 1106	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel> M_GetDefaultClickTraceChannel() const;
	TEnumAsByte<ECollisionChannel>* M_PtrGetDefaultClickTraceChannel();
	void M_SetDefaultClickTraceChannel(const TEnumAsByte<ECollisionChannel>& value);

	//TEnumAsByte<ECollisionChannel>	CurrentClickTraceChannel;		//Offset: 1107	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel> M_GetCurrentClickTraceChannel() const;
	TEnumAsByte<ECollisionChannel>* M_PtrGetCurrentClickTraceChannel();
	void M_SetCurrentClickTraceChannel(const TEnumAsByte<ECollisionChannel>& value);

	//float	HitResultTraceDistance;		//Offset: 1108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetHitResultTraceDistance() const;
	float* M_PtrGetHitResultTraceDistance();
	void M_SetHitResultTraceDistance(const float& value);

	//uint16_t	SeamlessTravelCount;		//Offset: 1112	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint16_t M_GetSeamlessTravelCount() const;
	uint16_t* M_PtrGetSeamlessTravelCount();
	void M_SetSeamlessTravelCount(const uint16_t& value);

	//uint16_t	LastCompletedSeamlessTravelCount;		//Offset: 1114	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint16_t M_GetLastCompletedSeamlessTravelCount() const;
	uint16_t* M_PtrGetLastCompletedSeamlessTravelCount();
	void M_SetLastCompletedSeamlessTravelCount(const uint16_t& value);

	//class UInputComponent*	InactiveStateInputComponent;		//Offset: 1232	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UInputComponent* M_GetInactiveStateInputComponent() const;
	class UInputComponent** M_PtrGetInactiveStateInputComponent();
	void M_SetInactiveStateInputComponent(const class UInputComponent*& value);

	//unsigned char	bShouldPerformFullTickWhenPaused : 1;		//Offset: 1240	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldPerformFullTickWhenPaused() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldPerformFullTickWhenPaused();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldPerformFullTickWhenPaused(const unsigned char& value);

	//class UTouchInterface*	CurrentTouchInterface;		//Offset: 1264	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UTouchInterface* M_GetCurrentTouchInterface() const;
	class UTouchInterface** M_PtrGetCurrentTouchInterface();
	void M_SetCurrentTouchInterface(const class UTouchInterface*& value);

	//class ASpectatorPawn*	SpectatorPawn;		//Offset: 1352	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class ASpectatorPawn* M_GetSpectatorPawn() const;
	class ASpectatorPawn** M_PtrGetSpectatorPawn();
	void M_SetSpectatorPawn(const class ASpectatorPawn*& value);

	//bool	bIsLocalPlayerController;		//Offset: 1364	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbIsLocalPlayerController() const;
	bool* M_PtrGetbIsLocalPlayerController();
	void M_SetbIsLocalPlayerController(const bool& value);

	//struct FVector	SpawnLocation;		//Offset: 1368	Size: 12	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetSpawnLocation() const;
	struct FVector* M_PtrGetSpawnLocation();
	void M_SetSpawnLocation(const struct FVector& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}

#pragma region Functions
	void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);

	void AddPitchInput(float Val);

	void AddRollInput(float Val);

	void AddYawInput(float Val);

	void Camera(struct FName NewMode);

	bool CanRestartPlayer();

	void ClearAudioListenerAttenuationOverride();

	void ClearAudioListenerOverride();

	void ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation);

	void ClientCancelPendingMapChange();

	void ClientCapBandwidth(int32_t Cap);

	void ClientClearCameraLensEffects();

	void ClientCommitMapChange();

	void ClientEnableNetworkVoice(bool bEnable);

	void ClientEndOnlineSession();

	void ClientFlushLevelStreaming();

	void ClientForceGarbageCollection();

	void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);

	void ClientGotoState(struct FName NewState);

	void ClientIgnoreLookInput(bool bIgnore);

	void ClientIgnoreMoveInput(bool bIgnore);

	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime);

	void ClientMutePlayer(struct FUniqueNetIdRepl PlayerId);

	void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, struct FRotator CustomPlaySpace);

	void ClientPlayForceFeedback_Internal(class UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters Params);

	void ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);

	void ClientPlaySoundAtLocation(class USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier);

	void ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast);

	void ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups);

	void ClientReceiveLocalizedMessage(class ULocalMessage* Message, int32_t SWITCH, class APlayerState* RelatedPlayerState, class APlayerState* RelatedPlayerState_1, class UObject* OptionalObject);

	void ClientRepObjRef(class UObject* Object);

	void ClientReset();

	void ClientRestart(class APawn* NewPawn);

	void ClientRetryClientRestart(class APawn* NewPawn);

	void ClientReturnToMainMenu(struct FString ReturnReason);

	void ClientReturnToMainMenuWithTextReason(struct FText& ReturnReason);

	void ClientSetBlockOnAsyncLoading();

	void ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);

	void ClientSetCameraMode(struct FName NewCamMode);

	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);

	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups);

	void ClientSetHUD(class AHUD* NewHUDClass);

	void ClientSetSpectatorWaiting(bool bWaiting);

	void ClientSetViewTarget(class AActor* A, struct FViewTargetTransitionParams TransitionParams);

	void ClientSpawnCameraLensEffect(class AEmitterCameraLensEffectBase* LensEffectEmitterClass);

	void ClientStartCameraShake(class UCameraShakeBase* Shake, float Scale, ECameraShakePlaySpace PlaySpace, struct FRotator UserPlaySpaceRot);

	void ClientStartCameraShakeFromSource(class UCameraShakeBase* Shake, class UCameraShakeSourceComponent* SourceComponent);

	void ClientStartOnlineSession();

	void ClientStopCameraAnim(class UCameraAnim* AnimToStop);

	void ClientStopCameraShake(class UCameraShakeBase* Shake, bool bImmediately);

	void ClientStopCameraShakesFromSource(class UCameraShakeSourceComponent* SourceComponent, bool bImmediately);

	void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag);

	void ClientTeamMessage(class APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime);

	void ClientTravel(struct FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, struct FGuid MapPackageGuid);

	void ClientTravelInternal(struct FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, struct FGuid MapPackageGuid);

	void ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerId);

	void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex);

	void ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus>& LevelStatuses);

	void ClientVoiceHandshakeComplete();

	void ClientWasKicked(struct FText& KickReason);

	void ConsoleKey(struct FKey Key);

	bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection)/* const*/;

	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection)/* const*/;

	void EnableCheats();

	void FOV(float NewFOV);

	struct FVector GetFocalLocation()/* const*/;

	bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/;

	bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/;

	bool GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult)/* const*/;

	bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/;

	bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult)/* const*/;

	bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult)/* const*/;

	class AHUD* GetHUD()/* const*/;

	float GetInputAnalogKeyState(struct FKey Key)/* const*/;

	void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY)/* const*/;

	float GetInputKeyTimeDown(struct FKey Key)/* const*/;

	void GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration)/* const*/;

	void GetInputMouseDelta(float* DeltaX, float* DeltaY)/* const*/;

	void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed)/* const*/;

	struct FVector GetInputVectorKeyState(struct FKey Key)/* const*/;

	bool GetMousePosition(float* LocationX, float* LocationY)/* const*/;

	class ASpectatorPawn* GetSpectatorPawn()/* const*/;

	void GetViewportSize(int32_t* SizeX, int32_t* SizeY)/* const*/;

	bool IsInputKeyDown(struct FKey Key)/* const*/;

	void K2_ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);

	void LocalTravel(struct FString URL);

	void OnServerStartedVisualLogger(bool bIsLogging);

	void Pause();

	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, struct FLatentActionInfo LatentInfo);

	void PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);

	bool ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D* ScreenLocation, bool bPlayerViewportRelative)/* const*/;

	void ResetControllerLightColor();

	void RestartLevel();

	void SendToConsole(struct FString Command);

	void ServerAcknowledgePossession(class APawn* P);

	void ServerCamera(struct FName NewMode);

	void ServerChangeName(struct FString S);

	void ServerCheckClientPossession();

	void ServerCheckClientPossessionReliable();

	void ServerExec(struct FString Msg);

	void ServerExecRPC(struct FString Msg);

	void ServerMutePlayer(struct FUniqueNetIdRepl PlayerId);

	void ServerNotifyLoadedWorld(struct FName WorldPackageName);

	void ServerPause();

	void ServerRestartPlayer();

	void ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot);

	void ServerSetSpectatorWaiting(bool bWaiting);

	void ServerShortTimeout();

	void ServerToggleAILogging();

	void ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerId);

	void ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw);

	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);

	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);

	void ServerVerifyViewTarget();

	void ServerViewNextPlayer();

	void ServerViewPrevPlayer();

	void ServerViewSelf(struct FViewTargetTransitionParams TransitionParams);

	void SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, struct FVector AttenuationLocationOVerride);

	void SetAudioListenerOverride(class USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation);

	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);

	void SetControllerLightColor(struct FColor Color);

	void SetDisableHaptics(bool bNewDisabled);

	void SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand);

	void SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursor, class UUserWidget* CursorWidget);

	void SetMouseLocation(int32_t X, int32_t Y);

	void SetName(struct FString S);

	void SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);

	void SetVirtualJoystickVisibility(bool bVisible);

	void StartFire(unsigned char FireModeNum);

	void StopHapticEffect(EControllerHand Hand);

	void SwitchLevel(struct FString URL);

	void TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename);

	void ToggleSpeaking(bool bInSpeaking);

	bool WasInputKeyJustPressed(struct FKey Key)/* const*/;

	bool WasInputKeyJustReleased(struct FKey Key)/* const*/;

#pragma endregion
};
};