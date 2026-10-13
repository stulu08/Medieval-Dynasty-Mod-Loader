#include "../SDK.h"
#include "JoinSessionCustomCallProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UJoinSessionCustomCallProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UJoinSessionCustomCallProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UJoinSessionCustomCallProxy::M_SetOnSuccess(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> OnFailure
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UJoinSessionCustomCallProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UJoinSessionCustomCallProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UJoinSessionCustomCallProxy::M_SetOnFailure(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.JoinSessionCustomCallProxy.JoinSession
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchResult	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: TargetSessionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UJoinSessionCustomCallProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UJoinSessionCustomCallProxy* UJoinSessionCustomCallProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResultCustom& SearchResult, struct FName TargetSessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.JoinSessionCustomCallProxy.JoinSession");

	struct UJoinSessionCustomCallProxy_JoinSession_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		struct FBlueprintSessionResultCustom SearchResult;			//Offset: 16 | ElementSize: 264
		struct FName TargetSessionName;			//Offset: 280 | ElementSize: 8
		class UJoinSessionCustomCallProxy* ReturnValue;			//Offset: 288 | ElementSize: 8
	};
	UJoinSessionCustomCallProxy_JoinSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;
	params.TargetSessionName = TargetSessionName;

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