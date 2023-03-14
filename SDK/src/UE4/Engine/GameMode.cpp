#include "../SDK.h"
#include "GameMode.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MatchState
// Declaration: struct FName MatchState
struct FName AGameMode::M_GetMatchState() const {
	return Read<struct FName>((byte*)this + 704);
}
struct FName* AGameMode::M_PtrGetMatchState() {
	return reinterpret_cast<struct FName*>((byte*)this + 704);
}
void AGameMode::M_SetMatchState(const struct FName& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of bDelayedStart
// Declaration: unsigned char bDelayedStart : 1
unsigned char AGameMode::M_GetbDelayedStart() const {
	return Read<unsigned char>((byte*)this + 712);
}
unsigned char* AGameMode::M_PtrGetbDelayedStart() {
	return reinterpret_cast<unsigned char*>((byte*)this + 712);
}
void AGameMode::M_SetbDelayedStart(const unsigned char& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of NumSpectators
// Declaration: int32_t NumSpectators
int32_t AGameMode::M_GetNumSpectators() const {
	return Read<int32_t>((byte*)this + 716);
}
int32_t* AGameMode::M_PtrGetNumSpectators() {
	return reinterpret_cast<int32_t*>((byte*)this + 716);
}
void AGameMode::M_SetNumSpectators(const int32_t& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of NumPlayers
// Declaration: int32_t NumPlayers
int32_t AGameMode::M_GetNumPlayers() const {
	return Read<int32_t>((byte*)this + 720);
}
int32_t* AGameMode::M_PtrGetNumPlayers() {
	return reinterpret_cast<int32_t*>((byte*)this + 720);
}
void AGameMode::M_SetNumPlayers(const int32_t& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of NumBots
// Declaration: int32_t NumBots
int32_t AGameMode::M_GetNumBots() const {
	return Read<int32_t>((byte*)this + 724);
}
int32_t* AGameMode::M_PtrGetNumBots() {
	return reinterpret_cast<int32_t*>((byte*)this + 724);
}
void AGameMode::M_SetNumBots(const int32_t& value) {
	Write((byte*)this + 724, value);
}
// Member Getter and Setter of MinRespawnDelay
// Declaration: float MinRespawnDelay
float AGameMode::M_GetMinRespawnDelay() const {
	return Read<float>((byte*)this + 728);
}
float* AGameMode::M_PtrGetMinRespawnDelay() {
	return reinterpret_cast<float*>((byte*)this + 728);
}
void AGameMode::M_SetMinRespawnDelay(const float& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of NumTravellingPlayers
// Declaration: int32_t NumTravellingPlayers
int32_t AGameMode::M_GetNumTravellingPlayers() const {
	return Read<int32_t>((byte*)this + 732);
}
int32_t* AGameMode::M_PtrGetNumTravellingPlayers() {
	return reinterpret_cast<int32_t*>((byte*)this + 732);
}
void AGameMode::M_SetNumTravellingPlayers(const int32_t& value) {
	Write((byte*)this + 732, value);
}
// Member Getter and Setter of EngineMessageClass
// Declaration: class ULocalMessage* EngineMessageClass
class ULocalMessage* AGameMode::M_GetEngineMessageClass() const {
	return Read<class ULocalMessage*>((byte*)this + 736);
}
class ULocalMessage** AGameMode::M_PtrGetEngineMessageClass() {
	return reinterpret_cast<class ULocalMessage**>((byte*)this + 736);
}
void AGameMode::M_SetEngineMessageClass(const class ULocalMessage*& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of InactivePlayerArray
// Declaration: TArray<class APlayerState*> InactivePlayerArray
TArray<class APlayerState*> AGameMode::M_GetInactivePlayerArray() const {
	return Read<TArray<class APlayerState*>>((byte*)this + 744);
}
TArray<class APlayerState*>* AGameMode::M_PtrGetInactivePlayerArray() {
	return reinterpret_cast<TArray<class APlayerState*>*>((byte*)this + 744);
}
void AGameMode::M_SetInactivePlayerArray(const TArray<class APlayerState*>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of InactivePlayerStateLifeSpan
// Declaration: float InactivePlayerStateLifeSpan
float AGameMode::M_GetInactivePlayerStateLifeSpan() const {
	return Read<float>((byte*)this + 760);
}
float* AGameMode::M_PtrGetInactivePlayerStateLifeSpan() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void AGameMode::M_SetInactivePlayerStateLifeSpan(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of MaxInactivePlayers
// Declaration: int32_t MaxInactivePlayers
int32_t AGameMode::M_GetMaxInactivePlayers() const {
	return Read<int32_t>((byte*)this + 764);
}
int32_t* AGameMode::M_PtrGetMaxInactivePlayers() {
	return reinterpret_cast<int32_t*>((byte*)this + 764);
}
void AGameMode::M_SetMaxInactivePlayers(const int32_t& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of bHandleDedicatedServerReplays
// Declaration: bool bHandleDedicatedServerReplays
bool AGameMode::M_GetbHandleDedicatedServerReplays() const {
	return Read<bool>((byte*)this + 768);
}
bool* AGameMode::M_PtrGetbHandleDedicatedServerReplays() {
	return reinterpret_cast<bool*>((byte*)this + 768);
}
void AGameMode::M_SetbHandleDedicatedServerReplays(const bool& value) {
	Write((byte*)this + 768, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.GameMode.AbortMatch
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameMode::AbortMatch() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.AbortMatch");

	struct AGameMode_AbortMatch_Params {
	};
	AGameMode_AbortMatch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameMode.EndMatch
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameMode::EndMatch() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.EndMatch");

	struct AGameMode_EndMatch_Params {
	};
	AGameMode_EndMatch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameMode.GetMatchState
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName AGameMode::GetMatchState()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.GetMatchState");

	struct AGameMode_GetMatchState_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AGameMode_GetMatchState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameMode.IsMatchInProgress
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameMode::IsMatchInProgress()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.IsMatchInProgress");

	struct AGameMode_IsMatchInProgress_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameMode_IsMatchInProgress_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameMode.K2_OnSetMatchState
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: NewState	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameMode::K2_OnSetMatchState(struct FName NewState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.K2_OnSetMatchState");

	struct AGameMode_K2_OnSetMatchState_Params {
		struct FName NewState;			//Offset: 0 | ElementSize: 8
	};
	AGameMode_K2_OnSetMatchState_Params params;
	params.NewState = NewState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameMode.ReadyToEndMatch
// Flags: Native, Event, Protected, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameMode::ReadyToEndMatch() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.ReadyToEndMatch");

	struct AGameMode_ReadyToEndMatch_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameMode_ReadyToEndMatch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameMode.ReadyToStartMatch
// Flags: Native, Event, Protected, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameMode::ReadyToStartMatch() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.ReadyToStartMatch");

	struct AGameMode_ReadyToStartMatch_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameMode_ReadyToStartMatch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameMode.RestartGame
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameMode::RestartGame() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.RestartGame");

	struct AGameMode_RestartGame_Params {
	};
	AGameMode_RestartGame_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameMode.Say
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
// Name: Msg	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameMode::Say(struct FString Msg) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.Say");

	struct AGameMode_Say_Params {
		struct FString Msg;			//Offset: 0 | ElementSize: 16
	};
	AGameMode_Say_Params params;
	params.Msg = Msg;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameMode.SetBandwidthLimit
// Flags: Exec, Native, Public
// Params:
// Name: AsyncIOBandwidthLimit	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AGameMode::SetBandwidthLimit(float AsyncIOBandwidthLimit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.SetBandwidthLimit");

	struct AGameMode_SetBandwidthLimit_Params {
		float AsyncIOBandwidthLimit;			//Offset: 0 | ElementSize: 4
	};
	AGameMode_SetBandwidthLimit_Params params;
	params.AsyncIOBandwidthLimit = AsyncIOBandwidthLimit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameMode.StartMatch
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AGameMode::StartMatch() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameMode.StartMatch");

	struct AGameMode_StartMatch_Params {
	};
	AGameMode_StartMatch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}