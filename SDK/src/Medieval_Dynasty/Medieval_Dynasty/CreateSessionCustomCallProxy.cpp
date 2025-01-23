#include "../SDK.h"
#include "CreateSessionCustomCallProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UCreateSessionCustomCallProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UCreateSessionCustomCallProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UCreateSessionCustomCallProxy::M_SetOnSuccess(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnFailure
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UCreateSessionCustomCallProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UCreateSessionCustomCallProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UCreateSessionCustomCallProxy::M_SetOnFailure(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CreateSessionCustomCallProxy.CreateSession
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SessionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Password	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIsDedicated	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShouldAdvertise	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIsLANMatch	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumPublicConnections	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAllowJoinInProgress	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAllowJoinViaPresence	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUsesPresence	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUseLobbiesIfAvailable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bEnabledCrossplay	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCreateSessionCustomCallProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCreateSessionCustomCallProxy* UCreateSessionCustomCallProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName SessionName, struct FName Password, bool bIsDedicated, bool bShouldAdvertise, bool bIsLANMatch, int32_t NumPublicConnections, bool bAllowJoinInProgress, bool bAllowJoinViaPresence, bool bUsesPresence, bool bUseLobbiesIfAvailable, bool bEnabledCrossplay) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CreateSessionCustomCallProxy.CreateSession");

	struct UCreateSessionCustomCallProxy_CreateSession_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		struct FName SessionName;			//Offset: 16 | ElementSize: 8
		struct FName Password;			//Offset: 24 | ElementSize: 8
		bool bIsDedicated;			//Offset: 32 | ElementSize: 1
		bool bShouldAdvertise;			//Offset: 33 | ElementSize: 1
		bool bIsLANMatch;			//Offset: 34 | ElementSize: 1
		int32_t NumPublicConnections;			//Offset: 36 | ElementSize: 4
		bool bAllowJoinInProgress;			//Offset: 40 | ElementSize: 1
		bool bAllowJoinViaPresence;			//Offset: 41 | ElementSize: 1
		bool bUsesPresence;			//Offset: 42 | ElementSize: 1
		bool bUseLobbiesIfAvailable;			//Offset: 43 | ElementSize: 1
		bool bEnabledCrossplay;			//Offset: 44 | ElementSize: 1
		class UCreateSessionCustomCallProxy* ReturnValue;			//Offset: 48 | ElementSize: 8
	};
	UCreateSessionCustomCallProxy_CreateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SessionName = SessionName;
	params.Password = Password;
	params.bIsDedicated = bIsDedicated;
	params.bShouldAdvertise = bShouldAdvertise;
	params.bIsLANMatch = bIsLANMatch;
	params.NumPublicConnections = NumPublicConnections;
	params.bAllowJoinInProgress = bAllowJoinInProgress;
	params.bAllowJoinViaPresence = bAllowJoinViaPresence;
	params.bUsesPresence = bUsesPresence;
	params.bUseLobbiesIfAvailable = bUseLobbiesIfAvailable;
	params.bEnabledCrossplay = bEnabledCrossplay;

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