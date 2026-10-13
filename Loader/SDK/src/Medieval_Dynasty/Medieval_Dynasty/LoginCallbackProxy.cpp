#include "../SDK.h"
#include "LoginCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FOnlineLoginResult__DelegateSignature> OnSuccess
TAssetPtr<class FOnlineLoginResult__DelegateSignature> ULoginCallbackProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FOnlineLoginResult__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FOnlineLoginResult__DelegateSignature>* ULoginCallbackProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FOnlineLoginResult__DelegateSignature>*>((byte*)this + 48);
}
void ULoginCallbackProxy::M_SetOnSuccess(const TAssetPtr<class FOnlineLoginResult__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FOnlineLoginResult__DelegateSignature> OnFailure
TAssetPtr<class FOnlineLoginResult__DelegateSignature> ULoginCallbackProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FOnlineLoginResult__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FOnlineLoginResult__DelegateSignature>* ULoginCallbackProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FOnlineLoginResult__DelegateSignature>*>((byte*)this + 64);
}
void ULoginCallbackProxy::M_SetOnFailure(const TAssetPtr<class FOnlineLoginResult__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.LoginCallbackProxy.Login
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InType	Type: TEnumAsByte<E_AccountCredentials>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inId	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inToken	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class ULoginCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class ULoginCallbackProxy* ULoginCallbackProxy::Login(class UObject* WorldContextObject, class APlayerController* PlayerController, TEnumAsByte<E_AccountCredentials> InType, struct FString inId, struct FString inToken) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LoginCallbackProxy.Login");

	struct ULoginCallbackProxy_Login_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<E_AccountCredentials> InType;			//Offset: 16 | ElementSize: 1
		struct FString inId;			//Offset: 24 | ElementSize: 16
		struct FString inToken;			//Offset: 40 | ElementSize: 16
		class ULoginCallbackProxy* ReturnValue;			//Offset: 56 | ElementSize: 8
	};
	ULoginCallbackProxy_Login_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.InType = InType;
	params.inId = inId;
	params.inToken = inToken;

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