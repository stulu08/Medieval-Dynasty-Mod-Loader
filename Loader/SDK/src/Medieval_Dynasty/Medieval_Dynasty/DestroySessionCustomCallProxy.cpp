#include "../SDK.h"
#include "DestroySessionCustomCallProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UDestroySessionCustomCallProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UDestroySessionCustomCallProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UDestroySessionCustomCallProxy::M_SetOnSuccess(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnFailure
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UDestroySessionCustomCallProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UDestroySessionCustomCallProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UDestroySessionCustomCallProxy::M_SetOnFailure(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.DestroySessionCustomCallProxy.DestroySession
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SessionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UDestroySessionCustomCallProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UDestroySessionCustomCallProxy* UDestroySessionCustomCallProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.DestroySessionCustomCallProxy.DestroySession");

	struct UDestroySessionCustomCallProxy_DestroySession_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		struct FName SessionName;			//Offset: 16 | ElementSize: 8
		class UDestroySessionCustomCallProxy* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UDestroySessionCustomCallProxy_DestroySession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

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