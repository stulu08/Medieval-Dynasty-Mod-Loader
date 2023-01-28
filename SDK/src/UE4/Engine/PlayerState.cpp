#include "../SDK.h"
#include "PlayerState.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Score
// Declaration: float Score
float APlayerState::M_GetScore() const {
	return Read<float>((byte*)this + 544);
}
float* APlayerState::M_PtrGetScore() {
	return reinterpret_cast<float*>((byte*)this + 544);
}
void APlayerState::M_SetScore(const float& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of PlayerId
// Declaration: int32_t PlayerId
int32_t APlayerState::M_GetPlayerId() const {
	return Read<int32_t>((byte*)this + 548);
}
int32_t* APlayerState::M_PtrGetPlayerId() {
	return reinterpret_cast<int32_t*>((byte*)this + 548);
}
void APlayerState::M_SetPlayerId(const int32_t& value) {
	Write((byte*)this + 548, value);
}
// Member Getter and Setter of Ping
// Declaration: unsigned char Ping
unsigned char APlayerState::M_GetPing() const {
	return Read<unsigned char>((byte*)this + 552);
}
unsigned char* APlayerState::M_PtrGetPing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 552);
}
void APlayerState::M_SetPing(const unsigned char& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of bShouldUpdateReplicatedPing
// Declaration: unsigned char bShouldUpdateReplicatedPing : 1
unsigned char APlayerState::M_GetbShouldUpdateReplicatedPing() const {
	return Read<unsigned char>((byte*)this + 554);
}
unsigned char* APlayerState::M_PtrGetbShouldUpdateReplicatedPing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 554);
}
void APlayerState::M_SetbShouldUpdateReplicatedPing(const unsigned char& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of bIsSpectator
// Declaration: unsigned char bIsSpectator : 1
unsigned char APlayerState::M_GetbIsSpectator() const {
	return Read<unsigned char>((byte*)this + 554);
}
unsigned char* APlayerState::M_PtrGetbIsSpectator() {
	return reinterpret_cast<unsigned char*>((byte*)this + 554);
}
void APlayerState::M_SetbIsSpectator(const unsigned char& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of bOnlySpectator
// Declaration: unsigned char bOnlySpectator : 1
unsigned char APlayerState::M_GetbOnlySpectator() const {
	return Read<unsigned char>((byte*)this + 554);
}
unsigned char* APlayerState::M_PtrGetbOnlySpectator() {
	return reinterpret_cast<unsigned char*>((byte*)this + 554);
}
void APlayerState::M_SetbOnlySpectator(const unsigned char& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of bIsABot
// Declaration: unsigned char bIsABot : 1
unsigned char APlayerState::M_GetbIsABot() const {
	return Read<unsigned char>((byte*)this + 554);
}
unsigned char* APlayerState::M_PtrGetbIsABot() {
	return reinterpret_cast<unsigned char*>((byte*)this + 554);
}
void APlayerState::M_SetbIsABot(const unsigned char& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of bIsInactive
// Declaration: unsigned char bIsInactive : 1
unsigned char APlayerState::M_GetbIsInactive() const {
	return Read<unsigned char>((byte*)this + 554);
}
unsigned char* APlayerState::M_PtrGetbIsInactive() {
	return reinterpret_cast<unsigned char*>((byte*)this + 554);
}
void APlayerState::M_SetbIsInactive(const unsigned char& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of bFromPreviousLevel
// Declaration: unsigned char bFromPreviousLevel : 1
unsigned char APlayerState::M_GetbFromPreviousLevel() const {
	return Read<unsigned char>((byte*)this + 554);
}
unsigned char* APlayerState::M_PtrGetbFromPreviousLevel() {
	return reinterpret_cast<unsigned char*>((byte*)this + 554);
}
void APlayerState::M_SetbFromPreviousLevel(const unsigned char& value) {
	Write((byte*)this + 554, value);
}
// Member Getter and Setter of StartTime
// Declaration: int32_t StartTime
int32_t APlayerState::M_GetStartTime() const {
	return Read<int32_t>((byte*)this + 556);
}
int32_t* APlayerState::M_PtrGetStartTime() {
	return reinterpret_cast<int32_t*>((byte*)this + 556);
}
void APlayerState::M_SetStartTime(const int32_t& value) {
	Write((byte*)this + 556, value);
}
// Member Getter and Setter of EngineMessageClass
// Declaration: class ULocalMessage* EngineMessageClass
class ULocalMessage* APlayerState::M_GetEngineMessageClass() const {
	return Read<class ULocalMessage*>((byte*)this + 560);
}
class ULocalMessage** APlayerState::M_PtrGetEngineMessageClass() {
	return reinterpret_cast<class ULocalMessage**>((byte*)this + 560);
}
void APlayerState::M_SetEngineMessageClass(const class ULocalMessage*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of SavedNetworkAddress
// Declaration: struct FString SavedNetworkAddress
struct FString APlayerState::M_GetSavedNetworkAddress() const {
	return Read<struct FString>((byte*)this + 576);
}
struct FString* APlayerState::M_PtrGetSavedNetworkAddress() {
	return reinterpret_cast<struct FString*>((byte*)this + 576);
}
void APlayerState::M_SetSavedNetworkAddress(const struct FString& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of UniqueId
// Declaration: struct FUniqueNetIdRepl UniqueId
struct FUniqueNetIdRepl APlayerState::M_GetUniqueId() const {
	return Read<struct FUniqueNetIdRepl>((byte*)this + 592);
}
struct FUniqueNetIdRepl* APlayerState::M_PtrGetUniqueId() {
	return reinterpret_cast<struct FUniqueNetIdRepl*>((byte*)this + 592);
}
void APlayerState::M_SetUniqueId(const struct FUniqueNetIdRepl& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of PawnPrivate
// Declaration: class APawn* PawnPrivate
class APawn* APlayerState::M_GetPawnPrivate() const {
	return Read<class APawn*>((byte*)this + 640);
}
class APawn** APlayerState::M_PtrGetPawnPrivate() {
	return reinterpret_cast<class APawn**>((byte*)this + 640);
}
void APlayerState::M_SetPawnPrivate(const class APawn*& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of PlayerNamePrivate
// Declaration: struct FString PlayerNamePrivate
struct FString APlayerState::M_GetPlayerNamePrivate() const {
	return Read<struct FString>((byte*)this + 768);
}
struct FString* APlayerState::M_PtrGetPlayerNamePrivate() {
	return reinterpret_cast<struct FString*>((byte*)this + 768);
}
void APlayerState::M_SetPlayerNamePrivate(const struct FString& value) {
	Write((byte*)this + 768, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.PlayerState.GetPlayerName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString APlayerState::GetPlayerName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.GetPlayerName");

	struct APlayerState_GetPlayerName_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	APlayerState_GetPlayerName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerState.IsOnlyASpectator
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool APlayerState::IsOnlyASpectator()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.IsOnlyASpectator");

	struct APlayerState_IsOnlyASpectator_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	APlayerState_IsOnlyASpectator_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PlayerState.OnRep_bIsInactive
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void APlayerState::OnRep_bIsInactive() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.OnRep_bIsInactive");

	struct APlayerState_OnRep_bIsInactive_Params {
	};
	APlayerState_OnRep_bIsInactive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerState.OnRep_PlayerId
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void APlayerState::OnRep_PlayerId() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.OnRep_PlayerId");

	struct APlayerState_OnRep_PlayerId_Params {
	};
	APlayerState_OnRep_PlayerId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerState.OnRep_PlayerName
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void APlayerState::OnRep_PlayerName() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.OnRep_PlayerName");

	struct APlayerState_OnRep_PlayerName_Params {
	};
	APlayerState_OnRep_PlayerName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerState.OnRep_Score
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void APlayerState::OnRep_Score() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.OnRep_Score");

	struct APlayerState_OnRep_Score_Params {
	};
	APlayerState_OnRep_Score_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerState.OnRep_UniqueId
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void APlayerState::OnRep_UniqueId() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.OnRep_UniqueId");

	struct APlayerState_OnRep_UniqueId_Params {
	};
	APlayerState_OnRep_UniqueId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerState.ReceiveCopyProperties
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: NewPlayerState	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerState::ReceiveCopyProperties(class APlayerState* NewPlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.ReceiveCopyProperties");

	struct APlayerState_ReceiveCopyProperties_Params {
		class APlayerState* NewPlayerState;			//Offset: 0 | ElementSize: 8
	};
	APlayerState_ReceiveCopyProperties_Params params;
	params.NewPlayerState = NewPlayerState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PlayerState.ReceiveOverrideWith
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: OldPlayerState	Type: class APlayerState*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void APlayerState::ReceiveOverrideWith(class APlayerState* OldPlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerState.ReceiveOverrideWith");

	struct APlayerState_ReceiveOverrideWith_Params {
		class APlayerState* OldPlayerState;			//Offset: 0 | ElementSize: 8
	};
	APlayerState_ReceiveOverrideWith_Params params;
	params.OldPlayerState = OldPlayerState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}