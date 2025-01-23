#include "../SDK.h"
#include "GetLoginStatusCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of LoggedIn
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> LoggedIn
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UGetLoginStatusCallbackProxy::M_GetLoggedIn() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UGetLoginStatusCallbackProxy::M_PtrGetLoggedIn() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UGetLoginStatusCallbackProxy::M_SetLoggedIn(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of NotLoggedIn
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> NotLoggedIn
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UGetLoginStatusCallbackProxy::M_GetNotLoggedIn() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UGetLoginStatusCallbackProxy::M_PtrGetNotLoggedIn() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UGetLoginStatusCallbackProxy::M_SetNotLoggedIn(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of NoInternetConnection
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> NoInternetConnection
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UGetLoginStatusCallbackProxy::M_GetNoInternetConnection() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 80);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UGetLoginStatusCallbackProxy::M_PtrGetNoInternetConnection() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 80);
}
void UGetLoginStatusCallbackProxy::M_SetNoInternetConnection(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of UnknownError
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UnknownError
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UGetLoginStatusCallbackProxy::M_GetUnknownError() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 96);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UGetLoginStatusCallbackProxy::M_PtrGetUnknownError() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 96);
}
void UGetLoginStatusCallbackProxy::M_SetUnknownError(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 96, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.GetLoginStatusCallbackProxy.CheckLoginStatus
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UGetLoginStatusCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UGetLoginStatusCallbackProxy* UGetLoginStatusCallbackProxy::CheckLoginStatus(class UObject* WorldContextObject, class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.GetLoginStatusCallbackProxy.CheckLoginStatus");

	struct UGetLoginStatusCallbackProxy_CheckLoginStatus_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		class UGetLoginStatusCallbackProxy* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UGetLoginStatusCallbackProxy_CheckLoginStatus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

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