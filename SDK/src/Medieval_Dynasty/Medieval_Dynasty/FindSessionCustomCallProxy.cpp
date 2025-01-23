#include "../SDK.h"
#include "FindSessionCustomCallProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature> UFindSessionCustomCallProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>* UFindSessionCustomCallProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UFindSessionCustomCallProxy::M_SetOnSuccess(const TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature> OnFailure
TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature> UFindSessionCustomCallProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>* UFindSessionCustomCallProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UFindSessionCustomCallProxy::M_SetOnFailure(const TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.CancelFindSessions
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UFindSessionCustomCallProxy::CancelFindSessions(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.CancelFindSessions");

	struct UFindSessionCustomCallProxy_CancelFindSessions_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
	};
	UFindSessionCustomCallProxy_CancelFindSessions_Params params;
	params.WorldContextObject = WorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.FindSessions
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchSessionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaxResults	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseLAN	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UFindSessionCustomCallProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UFindSessionCustomCallProxy* UFindSessionCustomCallProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString SearchSessionName, int32_t MaxResults, bool bUseLAN) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.FindSessions");

	struct UFindSessionCustomCallProxy_FindSessions_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		struct FString SearchSessionName;			//Offset: 16 | ElementSize: 16
		int32_t MaxResults;			//Offset: 32 | ElementSize: 4
		bool bUseLAN;			//Offset: 36 | ElementSize: 1
		class UFindSessionCustomCallProxy* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UFindSessionCustomCallProxy_FindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchSessionName = SearchSessionName;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetCurrentPlayers
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UFindSessionCustomCallProxy::GetCurrentPlayers(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetCurrentPlayers");

	struct UFindSessionCustomCallProxy_GetCurrentPlayers_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		int32_t ReturnValue;			//Offset: 264 | ElementSize: 4
	};
	UFindSessionCustomCallProxy_GetCurrentPlayers_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetGameInitialized
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UFindSessionCustomCallProxy::GetGameInitialized(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetGameInitialized");

	struct UFindSessionCustomCallProxy_GetGameInitialized_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		bool ReturnValue;			//Offset: 264 | ElementSize: 1
	};
	UFindSessionCustomCallProxy_GetGameInitialized_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetIsCrossplay
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UFindSessionCustomCallProxy::GetIsCrossplay(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetIsCrossplay");

	struct UFindSessionCustomCallProxy_GetIsCrossplay_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		bool ReturnValue;			//Offset: 264 | ElementSize: 1
	};
	UFindSessionCustomCallProxy_GetIsCrossplay_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetMaxPlayers
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UFindSessionCustomCallProxy::GetMaxPlayers(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetMaxPlayers");

	struct UFindSessionCustomCallProxy_GetMaxPlayers_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		int32_t ReturnValue;			//Offset: 264 | ElementSize: 4
	};
	UFindSessionCustomCallProxy_GetMaxPlayers_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetPassword
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UFindSessionCustomCallProxy::GetPassword(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetPassword");

	struct UFindSessionCustomCallProxy_GetPassword_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		struct FString ReturnValue;			//Offset: 264 | ElementSize: 16
	};
	UFindSessionCustomCallProxy_GetPassword_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetPingInMs
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UFindSessionCustomCallProxy::GetPingInMs(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetPingInMs");

	struct UFindSessionCustomCallProxy_GetPingInMs_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		int32_t ReturnValue;			//Offset: 264 | ElementSize: 4
	};
	UFindSessionCustomCallProxy_GetPingInMs_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetPlatform
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UFindSessionCustomCallProxy::GetPlatform(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetPlatform");

	struct UFindSessionCustomCallProxy_GetPlatform_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		struct FName ReturnValue;			//Offset: 264 | ElementSize: 8
	};
	UFindSessionCustomCallProxy_GetPlatform_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.GetServerName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UFindSessionCustomCallProxy::GetServerName(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.GetServerName");

	struct UFindSessionCustomCallProxy_GetServerName_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		struct FString ReturnValue;			//Offset: 264 | ElementSize: 16
	};
	UFindSessionCustomCallProxy_GetServerName_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.InvalidateSessionHandle
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UFindSessionCustomCallProxy::InvalidateSessionHandle(struct FBlueprintSessionResultCustom* Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.InvalidateSessionHandle");

	struct UFindSessionCustomCallProxy_InvalidateSessionHandle_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
	};
	UFindSessionCustomCallProxy_InvalidateSessionHandle_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.FindSessionCustomCallProxy.IsValidSession
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Result	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UFindSessionCustomCallProxy::IsValidSession(const struct FBlueprintSessionResultCustom& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.FindSessionCustomCallProxy.IsValidSession");

	struct UFindSessionCustomCallProxy_IsValidSession_Params {
		struct FBlueprintSessionResultCustom Result;			//Offset: 0 | ElementSize: 264
		bool ReturnValue;			//Offset: 264 | ElementSize: 1
	};
	UFindSessionCustomCallProxy_IsValidSession_Params params;
	params.Result = Result;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}