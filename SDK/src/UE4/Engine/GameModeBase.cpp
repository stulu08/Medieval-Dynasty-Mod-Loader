#include "../SDK.h"
#include "GameModeBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OptionsString
// Declaration: struct FString OptionsString
struct FString AGameModeBase::M_GetOptionsString() const {
	return Read<struct FString>((byte*)this + 544);
}
struct FString* AGameModeBase::M_PtrGetOptionsString() {
	return reinterpret_cast<struct FString*>((byte*)this + 544);
}
void AGameModeBase::M_SetOptionsString(const struct FString& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of GameSessionClass
// Declaration: class AGameSession* GameSessionClass
class AGameSession* AGameModeBase::M_GetGameSessionClass() const {
	return Read<class AGameSession*>((byte*)this + 560);
}
class AGameSession** AGameModeBase::M_PtrGetGameSessionClass() {
	return reinterpret_cast<class AGameSession**>((byte*)this + 560);
}
void AGameModeBase::M_SetGameSessionClass(const class AGameSession*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of GameStateClass
// Declaration: class AGameStateBase* GameStateClass
class AGameStateBase* AGameModeBase::M_GetGameStateClass() const {
	return Read<class AGameStateBase*>((byte*)this + 568);
}
class AGameStateBase** AGameModeBase::M_PtrGetGameStateClass() {
	return reinterpret_cast<class AGameStateBase**>((byte*)this + 568);
}
void AGameModeBase::M_SetGameStateClass(const class AGameStateBase*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of PlayerControllerClass
// Declaration: class APlayerController* PlayerControllerClass
class APlayerController* AGameModeBase::M_GetPlayerControllerClass() const {
	return Read<class APlayerController*>((byte*)this + 576);
}
class APlayerController** AGameModeBase::M_PtrGetPlayerControllerClass() {
	return reinterpret_cast<class APlayerController**>((byte*)this + 576);
}
void AGameModeBase::M_SetPlayerControllerClass(const class APlayerController*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of PlayerStateClass
// Declaration: class APlayerState* PlayerStateClass
class APlayerState* AGameModeBase::M_GetPlayerStateClass() const {
	return Read<class APlayerState*>((byte*)this + 584);
}
class APlayerState** AGameModeBase::M_PtrGetPlayerStateClass() {
	return reinterpret_cast<class APlayerState**>((byte*)this + 584);
}
void AGameModeBase::M_SetPlayerStateClass(const class APlayerState*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of HUDClass
// Declaration: class AHUD* HUDClass
class AHUD* AGameModeBase::M_GetHUDClass() const {
	return Read<class AHUD*>((byte*)this + 592);
}
class AHUD** AGameModeBase::M_PtrGetHUDClass() {
	return reinterpret_cast<class AHUD**>((byte*)this + 592);
}
void AGameModeBase::M_SetHUDClass(const class AHUD*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of DefaultPawnClass
// Declaration: class APawn* DefaultPawnClass
class APawn* AGameModeBase::M_GetDefaultPawnClass() const {
	return Read<class APawn*>((byte*)this + 600);
}
class APawn** AGameModeBase::M_PtrGetDefaultPawnClass() {
	return reinterpret_cast<class APawn**>((byte*)this + 600);
}
void AGameModeBase::M_SetDefaultPawnClass(const class APawn*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of SpectatorClass
// Declaration: class ASpectatorPawn* SpectatorClass
class ASpectatorPawn* AGameModeBase::M_GetSpectatorClass() const {
	return Read<class ASpectatorPawn*>((byte*)this + 608);
}
class ASpectatorPawn** AGameModeBase::M_PtrGetSpectatorClass() {
	return reinterpret_cast<class ASpectatorPawn**>((byte*)this + 608);
}
void AGameModeBase::M_SetSpectatorClass(const class ASpectatorPawn*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of ReplaySpectatorPlayerControllerClass
// Declaration: class APlayerController* ReplaySpectatorPlayerControllerClass
class APlayerController* AGameModeBase::M_GetReplaySpectatorPlayerControllerClass() const {
	return Read<class APlayerController*>((byte*)this + 616);
}
class APlayerController** AGameModeBase::M_PtrGetReplaySpectatorPlayerControllerClass() {
	return reinterpret_cast<class APlayerController**>((byte*)this + 616);
}
void AGameModeBase::M_SetReplaySpectatorPlayerControllerClass(const class APlayerController*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of ServerStatReplicatorClass
// Declaration: class AServerStatReplicator* ServerStatReplicatorClass
class AServerStatReplicator* AGameModeBase::M_GetServerStatReplicatorClass() const {
	return Read<class AServerStatReplicator*>((byte*)this + 624);
}
class AServerStatReplicator** AGameModeBase::M_PtrGetServerStatReplicatorClass() {
	return reinterpret_cast<class AServerStatReplicator**>((byte*)this + 624);
}
void AGameModeBase::M_SetServerStatReplicatorClass(const class AServerStatReplicator*& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of GameSession
// Declaration: class AGameSession* GameSession
class AGameSession* AGameModeBase::M_GetGameSession() const {
	return Read<class AGameSession*>((byte*)this + 632);
}
class AGameSession** AGameModeBase::M_PtrGetGameSession() {
	return reinterpret_cast<class AGameSession**>((byte*)this + 632);
}
void AGameModeBase::M_SetGameSession(const class AGameSession*& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of GameState
// Declaration: class AGameStateBase* GameState
class AGameStateBase* AGameModeBase::M_GetGameState() const {
	return Read<class AGameStateBase*>((byte*)this + 640);
}
class AGameStateBase** AGameModeBase::M_PtrGetGameState() {
	return reinterpret_cast<class AGameStateBase**>((byte*)this + 640);
}
void AGameModeBase::M_SetGameState(const class AGameStateBase*& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of ServerStatReplicator
// Declaration: class AServerStatReplicator* ServerStatReplicator
class AServerStatReplicator* AGameModeBase::M_GetServerStatReplicator() const {
	return Read<class AServerStatReplicator*>((byte*)this + 648);
}
class AServerStatReplicator** AGameModeBase::M_PtrGetServerStatReplicator() {
	return reinterpret_cast<class AServerStatReplicator**>((byte*)this + 648);
}
void AGameModeBase::M_SetServerStatReplicator(const class AServerStatReplicator*& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of DefaultPlayerName
// Declaration: struct FText DefaultPlayerName
struct FText AGameModeBase::M_GetDefaultPlayerName() const {
	return Read<struct FText>((byte*)this + 656);
}
struct FText* AGameModeBase::M_PtrGetDefaultPlayerName() {
	return reinterpret_cast<struct FText*>((byte*)this + 656);
}
void AGameModeBase::M_SetDefaultPlayerName(const struct FText& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of bUseSeamlessTravel
// Declaration: unsigned char bUseSeamlessTravel : 1
unsigned char AGameModeBase::M_GetbUseSeamlessTravel() const {
	return Read<unsigned char>((byte*)this + 680);
}
unsigned char* AGameModeBase::M_PtrGetbUseSeamlessTravel() {
	return reinterpret_cast<unsigned char*>((byte*)this + 680);
}
void AGameModeBase::M_SetbUseSeamlessTravel(const unsigned char& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of bStartPlayersAsSpectators
// Declaration: unsigned char bStartPlayersAsSpectators : 1
unsigned char AGameModeBase::M_GetbStartPlayersAsSpectators() const {
	return Read<unsigned char>((byte*)this + 680);
}
unsigned char* AGameModeBase::M_PtrGetbStartPlayersAsSpectators() {
	return reinterpret_cast<unsigned char*>((byte*)this + 680);
}
void AGameModeBase::M_SetbStartPlayersAsSpectators(const unsigned char& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of bPauseable
// Declaration: unsigned char bPauseable : 1
unsigned char AGameModeBase::M_GetbPauseable() const {
	return Read<unsigned char>((byte*)this + 680);
}
unsigned char* AGameModeBase::M_PtrGetbPauseable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 680);
}
void AGameModeBase::M_SetbPauseable(const unsigned char& value) {
	Write((byte*)this + 680, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.GameModeBase.CanSpectate
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: Viewer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ViewTarget	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameModeBase::CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.CanSpectate");

	struct AGameModeBase_CanSpectate_Params {
		class APlayerController* Viewer;			//Offset: 0 | ElementSize: 8
		class APlayerState* ViewTarget;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	AGameModeBase_CanSpectate_Params params;
	params.Viewer = Viewer;
	params.ViewTarget = ViewTarget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.ChangeName
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Controller	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNameChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::ChangeName(class AController* Controller, struct FString NewName, bool bNameChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.ChangeName");

	struct AGameModeBase_ChangeName_Params {
		class AController* Controller;			//Offset: 0 | ElementSize: 8
		struct FString NewName;			//Offset: 8 | ElementSize: 16
		bool bNameChange;			//Offset: 24 | ElementSize: 1
	};
	AGameModeBase_ChangeName_Params params;
	params.Controller = Controller;
	params.NewName = NewName;
	params.bNameChange = bNameChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.ChoosePlayerStart
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: Player	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AGameModeBase::ChoosePlayerStart(class AController* Player) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.ChoosePlayerStart");

	struct AGameModeBase_ChoosePlayerStart_Params {
		class AController* Player;			//Offset: 0 | ElementSize: 8
		class AActor* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	AGameModeBase_ChoosePlayerStart_Params params;
	params.Player = Player;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.FindPlayerStart
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: Player	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IncomingName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AGameModeBase::FindPlayerStart(class AController* Player, struct FString IncomingName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.FindPlayerStart");

	struct AGameModeBase_FindPlayerStart_Params {
		class AController* Player;			//Offset: 0 | ElementSize: 8
		struct FString IncomingName;			//Offset: 8 | ElementSize: 16
		class AActor* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	AGameModeBase_FindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.GetDefaultPawnClassForController
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InController	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* AGameModeBase::GetDefaultPawnClassForController(class AController* InController) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.GetDefaultPawnClassForController");

	struct AGameModeBase_GetDefaultPawnClassForController_Params {
		class AController* InController;			//Offset: 0 | ElementSize: 8
		class UObject* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	AGameModeBase_GetDefaultPawnClassForController_Params params;
	params.InController = InController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.GetNumPlayers
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AGameModeBase::GetNumPlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.GetNumPlayers");

	struct AGameModeBase_GetNumPlayers_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AGameModeBase_GetNumPlayers_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.GetNumSpectators
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AGameModeBase::GetNumSpectators() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.GetNumSpectators");

	struct AGameModeBase_GetNumSpectators_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AGameModeBase_GetNumSpectators_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.HandleStartingNewPlayer
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::HandleStartingNewPlayer(class APlayerController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.HandleStartingNewPlayer");

	struct AGameModeBase_HandleStartingNewPlayer_Params {
		class APlayerController* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGameModeBase_HandleStartingNewPlayer_Params params;
	params.NewPlayer = NewPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.HasMatchEnded
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameModeBase::HasMatchEnded()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.HasMatchEnded");

	struct AGameModeBase_HasMatchEnded_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameModeBase_HasMatchEnded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.HasMatchStarted
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameModeBase::HasMatchStarted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.HasMatchStarted");

	struct AGameModeBase_HasMatchStarted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameModeBase_HasMatchStarted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.InitializeHUDForPlayer
// Flags: Native, Event, Protected, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::InitializeHUDForPlayer(class APlayerController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.InitializeHUDForPlayer");

	struct AGameModeBase_InitializeHUDForPlayer_Params {
		class APlayerController* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGameModeBase_InitializeHUDForPlayer_Params params;
	params.NewPlayer = NewPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.InitStartSpot
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: StartSpot	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::InitStartSpot(class AActor* StartSpot, class AController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.InitStartSpot");

	struct AGameModeBase_InitStartSpot_Params {
		class AActor* StartSpot;			//Offset: 0 | ElementSize: 8
		class AController* NewPlayer;			//Offset: 8 | ElementSize: 8
	};
	AGameModeBase_InitStartSpot_Params params;
	params.StartSpot = StartSpot;
	params.NewPlayer = NewPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.K2_FindPlayerStart
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Player	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IncomingName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AGameModeBase::K2_FindPlayerStart(class AController* Player, struct FString IncomingName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.K2_FindPlayerStart");

	struct AGameModeBase_K2_FindPlayerStart_Params {
		class AController* Player;			//Offset: 0 | ElementSize: 8
		struct FString IncomingName;			//Offset: 8 | ElementSize: 16
		class AActor* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	AGameModeBase_K2_FindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.K2_OnChangeName
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: Other	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNameChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::K2_OnChangeName(class AController* Other, struct FString NewName, bool bNameChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.K2_OnChangeName");

	struct AGameModeBase_K2_OnChangeName_Params {
		class AController* Other;			//Offset: 0 | ElementSize: 8
		struct FString NewName;			//Offset: 8 | ElementSize: 16
		bool bNameChange;			//Offset: 24 | ElementSize: 1
	};
	AGameModeBase_K2_OnChangeName_Params params;
	params.Other = Other;
	params.NewName = NewName;
	params.bNameChange = bNameChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.K2_OnLogout
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: ExitingController	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::K2_OnLogout(class AController* ExitingController) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.K2_OnLogout");

	struct AGameModeBase_K2_OnLogout_Params {
		class AController* ExitingController;			//Offset: 0 | ElementSize: 8
	};
	AGameModeBase_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.K2_OnRestartPlayer
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::K2_OnRestartPlayer(class AController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.K2_OnRestartPlayer");

	struct AGameModeBase_K2_OnRestartPlayer_Params {
		class AController* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGameModeBase_K2_OnRestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.K2_OnSwapPlayerControllers
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: OldPC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewPC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.K2_OnSwapPlayerControllers");

	struct AGameModeBase_K2_OnSwapPlayerControllers_Params {
		class APlayerController* OldPC;			//Offset: 0 | ElementSize: 8
		class APlayerController* NewPC;			//Offset: 8 | ElementSize: 8
	};
	AGameModeBase_K2_OnSwapPlayerControllers_Params params;
	params.OldPC = OldPC;
	params.NewPC = NewPC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.K2_PostLogin
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::K2_PostLogin(class APlayerController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.K2_PostLogin");

	struct AGameModeBase_K2_PostLogin_Params {
		class APlayerController* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGameModeBase_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.MustSpectate
// Flags: Native, Event, Public, BlueprintEvent, Const
// Params:
// Name: NewPlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameModeBase::MustSpectate(class APlayerController* NewPlayerController)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.MustSpectate");

	struct AGameModeBase_MustSpectate_Params {
		class APlayerController* NewPlayerController;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AGameModeBase_MustSpectate_Params params;
	params.NewPlayerController = NewPlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.PlayerCanRestart
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameModeBase::PlayerCanRestart(class APlayerController* Player) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.PlayerCanRestart");

	struct AGameModeBase_PlayerCanRestart_Params {
		class APlayerController* Player;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AGameModeBase_PlayerCanRestart_Params params;
	params.Player = Player;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.ResetLevel
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameModeBase::ResetLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.ResetLevel");

	struct AGameModeBase_ResetLevel_Params {
	};
	AGameModeBase_ResetLevel_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.RestartPlayer
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::RestartPlayer(class AController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.RestartPlayer");

	struct AGameModeBase_RestartPlayer_Params {
		class AController* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGameModeBase_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.RestartPlayerAtPlayerStart
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartSpot	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.RestartPlayerAtPlayerStart");

	struct AGameModeBase_RestartPlayerAtPlayerStart_Params {
		class AController* NewPlayer;			//Offset: 0 | ElementSize: 8
		class AActor* StartSpot;			//Offset: 8 | ElementSize: 8
	};
	AGameModeBase_RestartPlayerAtPlayerStart_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.RestartPlayerAtTransform
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpawnTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameModeBase::RestartPlayerAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.RestartPlayerAtTransform");

	struct AGameModeBase_RestartPlayerAtTransform_Params {
		class AController* NewPlayer;			//Offset: 0 | ElementSize: 8
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
	};
	AGameModeBase_RestartPlayerAtTransform_Params params;
	params.NewPlayer = NewPlayer;
	params.SpawnTransform = SpawnTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.ReturnToMainMenuHost
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameModeBase::ReturnToMainMenuHost() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.ReturnToMainMenuHost");

	struct AGameModeBase_ReturnToMainMenuHost_Params {
	};
	AGameModeBase_ReturnToMainMenuHost_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameModeBase.ShouldReset
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: ActorToReset	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameModeBase::ShouldReset(class AActor* ActorToReset) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.ShouldReset");

	struct AGameModeBase_ShouldReset_Params {
		class AActor* ActorToReset;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AGameModeBase_ShouldReset_Params params;
	params.ActorToReset = ActorToReset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.SpawnDefaultPawnAtTransform
// Flags: Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpawnTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* AGameModeBase::SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.SpawnDefaultPawnAtTransform");

	struct AGameModeBase_SpawnDefaultPawnAtTransform_Params {
		class AController* NewPlayer;			//Offset: 0 | ElementSize: 8
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		class APawn* ReturnValue;			//Offset: 64 | ElementSize: 8
	};
	AGameModeBase_SpawnDefaultPawnAtTransform_Params params;
	params.NewPlayer = NewPlayer;
	params.SpawnTransform = SpawnTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.SpawnDefaultPawnFor
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartSpot	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* AGameModeBase::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.SpawnDefaultPawnFor");

	struct AGameModeBase_SpawnDefaultPawnFor_Params {
		class AController* NewPlayer;			//Offset: 0 | ElementSize: 8
		class AActor* StartSpot;			//Offset: 8 | ElementSize: 8
		class APawn* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	AGameModeBase_SpawnDefaultPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameModeBase.StartPlay
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameModeBase::StartPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameModeBase.StartPlay");

	struct AGameModeBase_StartPlay_Params {
	};
	AGameModeBase_StartPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}