#include "../SDK.h"
#include "CAchievementQueryCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UCAchievementQueryCallbackProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UCAchievementQueryCallbackProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UCAchievementQueryCallbackProxy::M_SetOnSuccess(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnFailure
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UCAchievementQueryCallbackProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UCAchievementQueryCallbackProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UCAchievementQueryCallbackProxy::M_SetOnFailure(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CAchievementQueryCallbackProxy.CacheAchievementDescriptions
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCAchievementQueryCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCAchievementQueryCallbackProxy* UCAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CAchievementQueryCallbackProxy.CacheAchievementDescriptions");

	struct UCAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		class UCAchievementQueryCallbackProxy* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UCAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params;
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

/////////////////////////////////////////////
// Function Medieval_Dynasty.CAchievementQueryCallbackProxy.CacheAchievements
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCAchievementQueryCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCAchievementQueryCallbackProxy* UCAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CAchievementQueryCallbackProxy.CacheAchievements");

	struct UCAchievementQueryCallbackProxy_CacheAchievements_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		class UCAchievementQueryCallbackProxy* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UCAchievementQueryCallbackProxy_CacheAchievements_Params params;
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