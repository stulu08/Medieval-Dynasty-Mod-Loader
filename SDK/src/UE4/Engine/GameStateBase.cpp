#include "../SDK.h"
#include "GameStateBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of GameModeClass
// Declaration: class AGameModeBase* GameModeClass
class AGameModeBase* AGameStateBase::M_GetGameModeClass() const {
	return Read<class AGameModeBase*>((byte*)this + 544);
}
class AGameModeBase** AGameStateBase::M_PtrGetGameModeClass() {
	return reinterpret_cast<class AGameModeBase**>((byte*)this + 544);
}
void AGameStateBase::M_SetGameModeClass(const class AGameModeBase*& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of AuthorityGameMode
// Declaration: class AGameModeBase* AuthorityGameMode
class AGameModeBase* AGameStateBase::M_GetAuthorityGameMode() const {
	return Read<class AGameModeBase*>((byte*)this + 552);
}
class AGameModeBase** AGameStateBase::M_PtrGetAuthorityGameMode() {
	return reinterpret_cast<class AGameModeBase**>((byte*)this + 552);
}
void AGameStateBase::M_SetAuthorityGameMode(const class AGameModeBase*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of SpectatorClass
// Declaration: class ASpectatorPawn* SpectatorClass
class ASpectatorPawn* AGameStateBase::M_GetSpectatorClass() const {
	return Read<class ASpectatorPawn*>((byte*)this + 560);
}
class ASpectatorPawn** AGameStateBase::M_PtrGetSpectatorClass() {
	return reinterpret_cast<class ASpectatorPawn**>((byte*)this + 560);
}
void AGameStateBase::M_SetSpectatorClass(const class ASpectatorPawn*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of PlayerArray
// Declaration: TArray<class APlayerState*> PlayerArray
TArray<class APlayerState*> AGameStateBase::M_GetPlayerArray() const {
	return Read<TArray<class APlayerState*>>((byte*)this + 568);
}
TArray<class APlayerState*>* AGameStateBase::M_PtrGetPlayerArray() {
	return reinterpret_cast<TArray<class APlayerState*>*>((byte*)this + 568);
}
void AGameStateBase::M_SetPlayerArray(const TArray<class APlayerState*>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of bReplicatedHasBegunPlay
// Declaration: bool bReplicatedHasBegunPlay
bool AGameStateBase::M_GetbReplicatedHasBegunPlay() const {
	return Read<bool>((byte*)this + 584);
}
bool* AGameStateBase::M_PtrGetbReplicatedHasBegunPlay() {
	return reinterpret_cast<bool*>((byte*)this + 584);
}
void AGameStateBase::M_SetbReplicatedHasBegunPlay(const bool& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of ReplicatedWorldTimeSeconds
// Declaration: float ReplicatedWorldTimeSeconds
float AGameStateBase::M_GetReplicatedWorldTimeSeconds() const {
	return Read<float>((byte*)this + 588);
}
float* AGameStateBase::M_PtrGetReplicatedWorldTimeSeconds() {
	return reinterpret_cast<float*>((byte*)this + 588);
}
void AGameStateBase::M_SetReplicatedWorldTimeSeconds(const float& value) {
	Write((byte*)this + 588, value);
}
// Member Getter and Setter of ServerWorldTimeSecondsDelta
// Declaration: float ServerWorldTimeSecondsDelta
float AGameStateBase::M_GetServerWorldTimeSecondsDelta() const {
	return Read<float>((byte*)this + 592);
}
float* AGameStateBase::M_PtrGetServerWorldTimeSecondsDelta() {
	return reinterpret_cast<float*>((byte*)this + 592);
}
void AGameStateBase::M_SetServerWorldTimeSecondsDelta(const float& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of ServerWorldTimeSecondsUpdateFrequency
// Declaration: float ServerWorldTimeSecondsUpdateFrequency
float AGameStateBase::M_GetServerWorldTimeSecondsUpdateFrequency() const {
	return Read<float>((byte*)this + 596);
}
float* AGameStateBase::M_PtrGetServerWorldTimeSecondsUpdateFrequency() {
	return reinterpret_cast<float*>((byte*)this + 596);
}
void AGameStateBase::M_SetServerWorldTimeSecondsUpdateFrequency(const float& value) {
	Write((byte*)this + 596, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.GameStateBase.GetPlayerRespawnDelay
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Controller	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AGameStateBase::GetPlayerRespawnDelay(class AController* Controller)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.GetPlayerRespawnDelay");

	struct AGameStateBase_GetPlayerRespawnDelay_Params {
		class AController* Controller;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AGameStateBase_GetPlayerRespawnDelay_Params params;
	params.Controller = Controller;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameStateBase.GetPlayerStartTime
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Controller	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AGameStateBase::GetPlayerStartTime(class AController* Controller)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.GetPlayerStartTime");

	struct AGameStateBase_GetPlayerStartTime_Params {
		class AController* Controller;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AGameStateBase_GetPlayerStartTime_Params params;
	params.Controller = Controller;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameStateBase.GetServerWorldTimeSeconds
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AGameStateBase::GetServerWorldTimeSeconds()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.GetServerWorldTimeSeconds");

	struct AGameStateBase_GetServerWorldTimeSeconds_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AGameStateBase_GetServerWorldTimeSeconds_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameStateBase.HasBegunPlay
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameStateBase::HasBegunPlay()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.HasBegunPlay");

	struct AGameStateBase_HasBegunPlay_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameStateBase_HasBegunPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameStateBase.HasMatchEnded
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameStateBase::HasMatchEnded()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.HasMatchEnded");

	struct AGameStateBase_HasMatchEnded_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameStateBase_HasMatchEnded_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameStateBase.HasMatchStarted
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AGameStateBase::HasMatchStarted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.HasMatchStarted");

	struct AGameStateBase_HasMatchStarted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGameStateBase_HasMatchStarted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.GameStateBase.OnRep_GameModeClass
// Flags: Native, Protected
// Params:
/////////////////////////////////////////////
void AGameStateBase::OnRep_GameModeClass() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.OnRep_GameModeClass");

	struct AGameStateBase_OnRep_GameModeClass_Params {
	};
	AGameStateBase_OnRep_GameModeClass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay
// Flags: Native, Protected
// Params:
/////////////////////////////////////////////
void AGameStateBase::OnRep_ReplicatedHasBegunPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay");

	struct AGameStateBase_OnRep_ReplicatedHasBegunPlay_Params {
	};
	AGameStateBase_OnRep_ReplicatedHasBegunPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds
// Flags: Native, Protected
// Params:
/////////////////////////////////////////////
void AGameStateBase::OnRep_ReplicatedWorldTimeSeconds() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds");

	struct AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Params {
	};
	AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.GameStateBase.OnRep_SpectatorClass
// Flags: Native, Protected
// Params:
/////////////////////////////////////////////
void AGameStateBase::OnRep_SpectatorClass() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.GameStateBase.OnRep_SpectatorClass");

	struct AGameStateBase_OnRep_SpectatorClass_Params {
	};
	AGameStateBase_OnRep_SpectatorClass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}