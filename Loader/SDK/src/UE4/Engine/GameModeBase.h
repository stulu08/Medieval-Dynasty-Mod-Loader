#pragma once
#include "Structs.h"
#include "Engine/Info.h"
/////////////////////////////////////////////
// Class Engine.GameModeBase
// Super: Class Engine.Info
// Size: 704
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AGameModeBase : public AInfo {
public:
#pragma region Members
	//struct FString	OptionsString;		//Offset: 544	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString M_GetOptionsString() const;
	struct FString* M_PtrGetOptionsString();
	void M_SetOptionsString(const struct FString& value);

	//class AGameSession*	GameSessionClass;		//Offset: 560	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AGameSession* M_GetGameSessionClass() const;
	class AGameSession** M_PtrGetGameSessionClass();
	void M_SetGameSessionClass(const class AGameSession*& value);

	//class AGameStateBase*	GameStateClass;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AGameStateBase* M_GetGameStateClass() const;
	class AGameStateBase** M_PtrGetGameStateClass();
	void M_SetGameStateClass(const class AGameStateBase*& value);

	//class APlayerController*	PlayerControllerClass;		//Offset: 576	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerController* M_GetPlayerControllerClass() const;
	class APlayerController** M_PtrGetPlayerControllerClass();
	void M_SetPlayerControllerClass(const class APlayerController*& value);

	//class APlayerState*	PlayerStateClass;		//Offset: 584	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerState* M_GetPlayerStateClass() const;
	class APlayerState** M_PtrGetPlayerStateClass();
	void M_SetPlayerStateClass(const class APlayerState*& value);

	//class AHUD*	HUDClass;		//Offset: 592	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AHUD* M_GetHUDClass() const;
	class AHUD** M_PtrGetHUDClass();
	void M_SetHUDClass(const class AHUD*& value);

	//class APawn*	DefaultPawnClass;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APawn* M_GetDefaultPawnClass() const;
	class APawn** M_PtrGetDefaultPawnClass();
	void M_SetDefaultPawnClass(const class APawn*& value);

	//class ASpectatorPawn*	SpectatorClass;		//Offset: 608	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class ASpectatorPawn* M_GetSpectatorClass() const;
	class ASpectatorPawn** M_PtrGetSpectatorClass();
	void M_SetSpectatorClass(const class ASpectatorPawn*& value);

	//class APlayerController*	ReplaySpectatorPlayerControllerClass;		//Offset: 616	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerController* M_GetReplaySpectatorPlayerControllerClass() const;
	class APlayerController** M_PtrGetReplaySpectatorPlayerControllerClass();
	void M_SetReplaySpectatorPlayerControllerClass(const class APlayerController*& value);

	//class AServerStatReplicator*	ServerStatReplicatorClass;		//Offset: 624	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AServerStatReplicator* M_GetServerStatReplicatorClass() const;
	class AServerStatReplicator** M_PtrGetServerStatReplicatorClass();
	void M_SetServerStatReplicatorClass(const class AServerStatReplicator*& value);

	//class AGameSession*	GameSession;		//Offset: 632	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AGameSession* M_GetGameSession() const;
	class AGameSession** M_PtrGetGameSession();
	void M_SetGameSession(const class AGameSession*& value);

	//class AGameStateBase*	GameState;		//Offset: 640	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AGameStateBase* M_GetGameState() const;
	class AGameStateBase** M_PtrGetGameState();
	void M_SetGameState(const class AGameStateBase*& value);

	//class AServerStatReplicator*	ServerStatReplicator;		//Offset: 648	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AServerStatReplicator* M_GetServerStatReplicator() const;
	class AServerStatReplicator** M_PtrGetServerStatReplicator();
	void M_SetServerStatReplicator(const class AServerStatReplicator*& value);

	//struct FText	DefaultPlayerName;		//Offset: 656	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	struct FText M_GetDefaultPlayerName() const;
	struct FText* M_PtrGetDefaultPlayerName();
	void M_SetDefaultPlayerName(const struct FText& value);

	//unsigned char	bUseSeamlessTravel : 1;		//Offset: 680	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseSeamlessTravel() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseSeamlessTravel();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseSeamlessTravel(const unsigned char& value);

	//unsigned char	bStartPlayersAsSpectators : 1;		//Offset: 680	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbStartPlayersAsSpectators() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbStartPlayersAsSpectators();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbStartPlayersAsSpectators(const unsigned char& value);

	//unsigned char	bPauseable : 1;		//Offset: 680	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPauseable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPauseable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPauseable(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
		return ptr;
	}

#pragma region Functions
	bool CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget);

	void ChangeName(class AController* Controller, struct FString NewName, bool bNameChange);

	class AActor* ChoosePlayerStart(class AController* Player);

	class AActor* FindPlayerStart(class AController* Player, struct FString IncomingName);

	class UObject* GetDefaultPawnClassForController(class AController* InController);

	int32_t GetNumPlayers();

	int32_t GetNumSpectators();

	void HandleStartingNewPlayer(class APlayerController* NewPlayer);

	bool HasMatchEnded()/* const*/;

	bool HasMatchStarted()/* const*/;

	void InitializeHUDForPlayer(class APlayerController* NewPlayer);

	void InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);

	class AActor* K2_FindPlayerStart(class AController* Player, struct FString IncomingName);

	void K2_OnChangeName(class AController* Other, struct FString NewName, bool bNameChange);

	void K2_OnLogout(class AController* ExitingController);

	void K2_OnRestartPlayer(class AController* NewPlayer);

	void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);

	void K2_PostLogin(class APlayerController* NewPlayer);

	bool MustSpectate(class APlayerController* NewPlayerController)/* const*/;

	bool PlayerCanRestart(class APlayerController* Player);

	void ResetLevel();

	void RestartPlayer(class AController* NewPlayer);

	void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);

	void RestartPlayerAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);

	void ReturnToMainMenuHost();

	bool ShouldReset(class AActor* ActorToReset);

	class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);

	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);

	void StartPlay();

#pragma endregion
};
};