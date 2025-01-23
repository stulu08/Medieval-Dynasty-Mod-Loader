#include "../SDK.h"
#include "CheatManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of DebugCameraControllerRef
// Declaration: class ADebugCameraController* DebugCameraControllerRef
class ADebugCameraController* UCheatManager::M_GetDebugCameraControllerRef() const {
	return Read<class ADebugCameraController*>((byte*)this + 40);
}
class ADebugCameraController** UCheatManager::M_PtrGetDebugCameraControllerRef() {
	return reinterpret_cast<class ADebugCameraController**>((byte*)this + 40);
}
void UCheatManager::M_SetDebugCameraControllerRef(const class ADebugCameraController*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of DebugCameraControllerClass
// Declaration: class ADebugCameraController* DebugCameraControllerClass
class ADebugCameraController* UCheatManager::M_GetDebugCameraControllerClass() const {
	return Read<class ADebugCameraController*>((byte*)this + 48);
}
class ADebugCameraController** UCheatManager::M_PtrGetDebugCameraControllerClass() {
	return reinterpret_cast<class ADebugCameraController**>((byte*)this + 48);
}
void UCheatManager::M_SetDebugCameraControllerClass(const class ADebugCameraController*& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of CheatManagerExtensions
// Declaration: TArray<class UCheatManagerExtension*> CheatManagerExtensions
TArray<class UCheatManagerExtension*> UCheatManager::M_GetCheatManagerExtensions() const {
	return Read<TArray<class UCheatManagerExtension*>>((byte*)this + 120);
}
TArray<class UCheatManagerExtension*>* UCheatManager::M_PtrGetCheatManagerExtensions() {
	return reinterpret_cast<TArray<class UCheatManagerExtension*>*>((byte*)this + 120);
}
void UCheatManager::M_SetCheatManagerExtensions(const TArray<class UCheatManagerExtension*>& value) {
	Write((byte*)this + 120, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.CheatManager.BugIt
// Flags: Exec, Native, Public
// Params:
// Name: ScreenShotDescription	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::BugIt(struct FString ScreenShotDescription) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.BugIt");

	struct UCheatManager_BugIt_Params {
		struct FString ScreenShotDescription;			//Offset: 0 | ElementSize: 16
	};
	UCheatManager_BugIt_Params params;
	params.ScreenShotDescription = ScreenShotDescription;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.BugItGo
// Flags: Exec, Native, Public
// Params:
// Name: X	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Z	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Pitch	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Yaw	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Roll	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.BugItGo");

	struct UCheatManager_BugItGo_Params {
		float X;			//Offset: 0 | ElementSize: 4
		float Y;			//Offset: 4 | ElementSize: 4
		float Z;			//Offset: 8 | ElementSize: 4
		float Pitch;			//Offset: 12 | ElementSize: 4
		float Yaw;			//Offset: 16 | ElementSize: 4
		float Roll;			//Offset: 20 | ElementSize: 4
	};
	UCheatManager_BugItGo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.BugItStringCreator
// Flags: Exec, Native, Public, HasOutParms, HasDefaults
// Params:
// Name: ViewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ViewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: GoString	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocString	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString* GoString, struct FString* LocString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.BugItStringCreator");

	struct UCheatManager_BugItStringCreator_Params {
		struct FVector ViewLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator ViewRotation;			//Offset: 12 | ElementSize: 12
		struct FString GoString;			//Offset: 24 | ElementSize: 16
		struct FString LocString;			//Offset: 40 | ElementSize: 16
	};
	UCheatManager_BugItStringCreator_Params params;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (GoString != nullptr)
		*GoString = params.GoString;
	if (LocString != nullptr)
		*LocString = params.LocString;
}

/////////////////////////////////////////////
// Function Engine.CheatManager.ChangeSize
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
// Name: F	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::ChangeSize(float F) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ChangeSize");

	struct UCheatManager_ChangeSize_Params {
		float F;			//Offset: 0 | ElementSize: 4
	};
	UCheatManager_ChangeSize_Params params;
	params.F = F;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.CheatScript
// Flags: Final, Exec, Native, Public
// Params:
// Name: ScriptName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::CheatScript(struct FString ScriptName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.CheatScript");

	struct UCheatManager_CheatScript_Params {
		struct FString ScriptName;			//Offset: 0 | ElementSize: 16
	};
	UCheatManager_CheatScript_Params params;
	params.ScriptName = ScriptName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DamageTarget
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
// Name: DamageAmount	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::DamageTarget(float DamageAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DamageTarget");

	struct UCheatManager_DamageTarget_Params {
		float DamageAmount;			//Offset: 0 | ElementSize: 4
	};
	UCheatManager_DamageTarget_Params params;
	params.DamageAmount = DamageAmount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweep
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweep() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweep");

	struct UCheatManager_DebugCapsuleSweep_Params {
	};
	UCheatManager_DebugCapsuleSweep_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweepCapture
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweepCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweepCapture");

	struct UCheatManager_DebugCapsuleSweepCapture_Params {
	};
	UCheatManager_DebugCapsuleSweepCapture_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweepChannel
// Flags: Exec, Native, Public
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweepChannel");

	struct UCheatManager_DebugCapsuleSweepChannel_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
	};
	UCheatManager_DebugCapsuleSweepChannel_Params params;
	params.Channel = Channel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweepClear
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweepClear() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweepClear");

	struct UCheatManager_DebugCapsuleSweepClear_Params {
	};
	UCheatManager_DebugCapsuleSweepClear_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweepComplex
// Flags: Exec, Native, Public
// Params:
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweepComplex(bool bTraceComplex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweepComplex");

	struct UCheatManager_DebugCapsuleSweepComplex_Params {
		bool bTraceComplex;			//Offset: 0 | ElementSize: 1
	};
	UCheatManager_DebugCapsuleSweepComplex_Params params;
	params.bTraceComplex = bTraceComplex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweepPawn
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweepPawn() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweepPawn");

	struct UCheatManager_DebugCapsuleSweepPawn_Params {
	};
	UCheatManager_DebugCapsuleSweepPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DebugCapsuleSweepSize
// Flags: Exec, Native, Public
// Params:
// Name: HalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::DebugCapsuleSweepSize(float HalfHeight, float Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DebugCapsuleSweepSize");

	struct UCheatManager_DebugCapsuleSweepSize_Params {
		float HalfHeight;			//Offset: 0 | ElementSize: 4
		float Radius;			//Offset: 4 | ElementSize: 4
	};
	UCheatManager_DebugCapsuleSweepSize_Params params;
	params.HalfHeight = HalfHeight;
	params.Radius = Radius;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DestroyAll
// Flags: Exec, Native, Public
// Params:
// Name: aClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::DestroyAll(class AActor* aClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DestroyAll");

	struct UCheatManager_DestroyAll_Params {
		class AActor* aClass;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_DestroyAll_Params params;
	params.aClass = aClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DestroyAllPawnsExceptTarget
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DestroyAllPawnsExceptTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DestroyAllPawnsExceptTarget");

	struct UCheatManager_DestroyAllPawnsExceptTarget_Params {
	};
	UCheatManager_DestroyAllPawnsExceptTarget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DestroyPawns
// Flags: Exec, Native, Public
// Params:
// Name: aClass	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::DestroyPawns(class APawn* aClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DestroyPawns");

	struct UCheatManager_DestroyPawns_Params {
		class APawn* aClass;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_DestroyPawns_Params params;
	params.aClass = aClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DestroyServerStatReplicator
// Flags: Final, Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DestroyServerStatReplicator() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DestroyServerStatReplicator");

	struct UCheatManager_DestroyServerStatReplicator_Params {
	};
	UCheatManager_DestroyServerStatReplicator_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DestroyTarget
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::DestroyTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DestroyTarget");

	struct UCheatManager_DestroyTarget_Params {
	};
	UCheatManager_DestroyTarget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DisableDebugCamera
// Flags: Native, Protected, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::DisableDebugCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DisableDebugCamera");

	struct UCheatManager_DisableDebugCamera_Params {
	};
	UCheatManager_DisableDebugCamera_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DumpChatState
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DumpChatState() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DumpChatState");

	struct UCheatManager_DumpChatState_Params {
	};
	UCheatManager_DumpChatState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DumpOnlineSessionState
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DumpOnlineSessionState() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DumpOnlineSessionState");

	struct UCheatManager_DumpOnlineSessionState_Params {
	};
	UCheatManager_DumpOnlineSessionState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DumpPartyState
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DumpPartyState() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DumpPartyState");

	struct UCheatManager_DumpPartyState_Params {
	};
	UCheatManager_DumpPartyState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.DumpVoiceMutingState
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::DumpVoiceMutingState() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.DumpVoiceMutingState");

	struct UCheatManager_DumpVoiceMutingState_Params {
	};
	UCheatManager_DumpVoiceMutingState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.EnableDebugCamera
// Flags: Native, Protected, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::EnableDebugCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.EnableDebugCamera");

	struct UCheatManager_EnableDebugCamera_Params {
	};
	UCheatManager_EnableDebugCamera_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.FlushLog
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::FlushLog() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.FlushLog");

	struct UCheatManager_FlushLog_Params {
	};
	UCheatManager_FlushLog_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.Fly
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::Fly() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Fly");

	struct UCheatManager_Fly_Params {
	};
	UCheatManager_Fly_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.FreezeFrame
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
// Name: Delay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::FreezeFrame(float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.FreezeFrame");

	struct UCheatManager_FreezeFrame_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
	};
	UCheatManager_FreezeFrame_Params params;
	params.Delay = Delay;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.Ghost
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::Ghost() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Ghost");

	struct UCheatManager_Ghost_Params {
	};
	UCheatManager_Ghost_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.God
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::God() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.God");

	struct UCheatManager_God_Params {
	};
	UCheatManager_God_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.InvertMouse
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::InvertMouse() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.InvertMouse");

	struct UCheatManager_InvertMouse_Params {
	};
	UCheatManager_InvertMouse_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.LogLoc
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::LogLoc() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.LogLoc");

	struct UCheatManager_LogLoc_Params {
	};
	UCheatManager_LogLoc_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.OnlyLoadLevel
// Flags: Exec, Native, Public
// Params:
// Name: PackageName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::OnlyLoadLevel(struct FName PackageName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.OnlyLoadLevel");

	struct UCheatManager_OnlyLoadLevel_Params {
		struct FName PackageName;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_OnlyLoadLevel_Params params;
	params.PackageName = PackageName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.PlayersOnly
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::PlayersOnly() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.PlayersOnly");

	struct UCheatManager_PlayersOnly_Params {
	};
	UCheatManager_PlayersOnly_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ReceiveEndPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UCheatManager::ReceiveEndPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ReceiveEndPlay");

	struct UCheatManager_ReceiveEndPlay_Params {
	};
	UCheatManager_ReceiveEndPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Engine.CheatManager.ReceiveInitCheatManager
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UCheatManager::ReceiveInitCheatManager() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ReceiveInitCheatManager");

	struct UCheatManager_ReceiveInitCheatManager_Params {
	};
	UCheatManager_ReceiveInitCheatManager_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Engine.CheatManager.ServerToggleAILogging
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
/////////////////////////////////////////////
void UCheatManager::ServerToggleAILogging() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ServerToggleAILogging");

	struct UCheatManager_ServerToggleAILogging_Params {
	};
	UCheatManager_ServerToggleAILogging_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.SetMouseSensitivityToDefault
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::SetMouseSensitivityToDefault() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetMouseSensitivityToDefault");

	struct UCheatManager_SetMouseSensitivityToDefault_Params {
	};
	UCheatManager_SetMouseSensitivityToDefault_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.SetWorldOrigin
// Flags: Final, Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::SetWorldOrigin() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SetWorldOrigin");

	struct UCheatManager_SetWorldOrigin_Params {
	};
	UCheatManager_SetWorldOrigin_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.Slomo
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
// Name: NewTimeDilation	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::Slomo(float NewTimeDilation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Slomo");

	struct UCheatManager_Slomo_Params {
		float NewTimeDilation;			//Offset: 0 | ElementSize: 4
	};
	UCheatManager_Slomo_Params params;
	params.NewTimeDilation = NewTimeDilation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.SpawnServerStatReplicator
// Flags: Final, Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::SpawnServerStatReplicator() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.SpawnServerStatReplicator");

	struct UCheatManager_SpawnServerStatReplicator_Params {
	};
	UCheatManager_SpawnServerStatReplicator_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.StreamLevelIn
// Flags: Exec, Native, Public
// Params:
// Name: PackageName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::StreamLevelIn(struct FName PackageName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.StreamLevelIn");

	struct UCheatManager_StreamLevelIn_Params {
		struct FName PackageName;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_StreamLevelIn_Params params;
	params.PackageName = PackageName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.StreamLevelOut
// Flags: Exec, Native, Public
// Params:
// Name: PackageName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::StreamLevelOut(struct FName PackageName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.StreamLevelOut");

	struct UCheatManager_StreamLevelOut_Params {
		struct FName PackageName;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_StreamLevelOut_Params params;
	params.PackageName = PackageName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.Summon
// Flags: Exec, Native, Public
// Params:
// Name: ClassName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::Summon(struct FString ClassName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Summon");

	struct UCheatManager_Summon_Params {
		struct FString ClassName;			//Offset: 0 | ElementSize: 16
	};
	UCheatManager_Summon_Params params;
	params.ClassName = ClassName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.Teleport
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::Teleport() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Teleport");

	struct UCheatManager_Teleport_Params {
	};
	UCheatManager_Teleport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.TestCollisionDistance
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::TestCollisionDistance() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.TestCollisionDistance");

	struct UCheatManager_TestCollisionDistance_Params {
	};
	UCheatManager_TestCollisionDistance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ToggleAILogging
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::ToggleAILogging() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ToggleAILogging");

	struct UCheatManager_ToggleAILogging_Params {
	};
	UCheatManager_ToggleAILogging_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ToggleDebugCamera
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::ToggleDebugCamera() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ToggleDebugCamera");

	struct UCheatManager_ToggleDebugCamera_Params {
	};
	UCheatManager_ToggleDebugCamera_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite
// Flags: Final, Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::ToggleServerStatReplicatorClientOverwrite() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite");

	struct UCheatManager_ToggleServerStatReplicatorClientOverwrite_Params {
	};
	UCheatManager_ToggleServerStatReplicatorClientOverwrite_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet
// Flags: Final, Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::ToggleServerStatReplicatorUpdateStatNet() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet");

	struct UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Params {
	};
	UCheatManager_ToggleServerStatReplicatorUpdateStatNet_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.UpdateSafeArea
// Flags: Final, Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::UpdateSafeArea() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.UpdateSafeArea");

	struct UCheatManager_UpdateSafeArea_Params {
	};
	UCheatManager_UpdateSafeArea_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ViewActor
// Flags: Exec, Native, Public
// Params:
// Name: ActorName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::ViewActor(struct FName ActorName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewActor");

	struct UCheatManager_ViewActor_Params {
		struct FName ActorName;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_ViewActor_Params params;
	params.ActorName = ActorName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ViewClass
// Flags: Exec, Native, Public
// Params:
// Name: DesiredClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::ViewClass(class AActor* DesiredClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewClass");

	struct UCheatManager_ViewClass_Params {
		class AActor* DesiredClass;			//Offset: 0 | ElementSize: 8
	};
	UCheatManager_ViewClass_Params params;
	params.DesiredClass = DesiredClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ViewPlayer
// Flags: Exec, Native, Public
// Params:
// Name: S	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCheatManager::ViewPlayer(struct FString S) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewPlayer");

	struct UCheatManager_ViewPlayer_Params {
		struct FString S;			//Offset: 0 | ElementSize: 16
	};
	UCheatManager_ViewPlayer_Params params;
	params.S = S;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.ViewSelf
// Flags: Exec, Native, Public
// Params:
/////////////////////////////////////////////
void UCheatManager::ViewSelf() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.ViewSelf");

	struct UCheatManager_ViewSelf_Params {
	};
	UCheatManager_ViewSelf_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.CheatManager.Walk
// Flags: Exec, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCheatManager::Walk() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CheatManager.Walk");

	struct UCheatManager_Walk_Params {
	};
	UCheatManager_Walk_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}