#include "../SDK.h"
#include "CShowLoginUICallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature> OnSuccess
TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature> UCShowLoginUICallbackProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>* UCShowLoginUICallbackProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>*>((byte*)this + 48);
}
void UCShowLoginUICallbackProxy::M_SetOnSuccess(const TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature> OnFailure
TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature> UCShowLoginUICallbackProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>* UCShowLoginUICallbackProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>*>((byte*)this + 64);
}
void UCShowLoginUICallbackProxy::M_SetOnFailure(const TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CShowLoginUICallbackProxy.ShowExternalLoginUI
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCShowLoginUICallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCShowLoginUICallbackProxy* UCShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CShowLoginUICallbackProxy.ShowExternalLoginUI");

	struct UCShowLoginUICallbackProxy_ShowExternalLoginUI_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* InPlayerController;			//Offset: 8 | ElementSize: 8
		class UCShowLoginUICallbackProxy* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UCShowLoginUICallbackProxy_ShowExternalLoginUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

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