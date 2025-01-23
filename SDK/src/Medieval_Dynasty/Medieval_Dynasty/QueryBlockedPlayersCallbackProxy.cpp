#include "../SDK.h"
#include "QueryBlockedPlayersCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of QuerySuccessful
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> QuerySuccessful
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UQueryBlockedPlayersCallbackProxy::M_GetQuerySuccessful() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UQueryBlockedPlayersCallbackProxy::M_PtrGetQuerySuccessful() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UQueryBlockedPlayersCallbackProxy::M_SetQuerySuccessful(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of QueryFailed
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> QueryFailed
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UQueryBlockedPlayersCallbackProxy::M_GetQueryFailed() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UQueryBlockedPlayersCallbackProxy::M_PtrGetQueryFailed() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UQueryBlockedPlayersCallbackProxy::M_SetQueryFailed(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.QueryBlockedPlayersCallbackProxy.QueryBlockedPlayersList
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UQueryBlockedPlayersCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UQueryBlockedPlayersCallbackProxy* UQueryBlockedPlayersCallbackProxy::QueryBlockedPlayersList(class UObject* WorldContextObject, class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.QueryBlockedPlayersCallbackProxy.QueryBlockedPlayersList");

	struct UQueryBlockedPlayersCallbackProxy_QueryBlockedPlayersList_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		class UQueryBlockedPlayersCallbackProxy* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UQueryBlockedPlayersCallbackProxy_QueryBlockedPlayersList_Params params;
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