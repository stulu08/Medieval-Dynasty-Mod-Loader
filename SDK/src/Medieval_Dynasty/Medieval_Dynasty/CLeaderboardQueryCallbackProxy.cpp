#include "../SDK.h"
#include "CLeaderboardQueryCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FLeaderboardQueryResult__DelegateSignature> OnSuccess
TAssetPtr<class FLeaderboardQueryResult__DelegateSignature> UCLeaderboardQueryCallbackProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>* UCLeaderboardQueryCallbackProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>*>((byte*)this + 48);
}
void UCLeaderboardQueryCallbackProxy::M_SetOnSuccess(const TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FLeaderboardQueryResult__DelegateSignature> OnFailure
TAssetPtr<class FLeaderboardQueryResult__DelegateSignature> UCLeaderboardQueryCallbackProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>* UCLeaderboardQueryCallbackProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>*>((byte*)this + 64);
}
void UCLeaderboardQueryCallbackProxy::M_SetOnFailure(const TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CLeaderboardQueryCallbackProxy.ReadLeaderboardInteger
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StatName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCLeaderboardQueryCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCLeaderboardQueryCallbackProxy* UCLeaderboardQueryCallbackProxy::ReadLeaderboardInteger(class APlayerController* PlayerController, struct FName StatName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CLeaderboardQueryCallbackProxy.ReadLeaderboardInteger");

	struct UCLeaderboardQueryCallbackProxy_ReadLeaderboardInteger_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		struct FName StatName;			//Offset: 8 | ElementSize: 8
		class UCLeaderboardQueryCallbackProxy* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UCLeaderboardQueryCallbackProxy_ReadLeaderboardInteger_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;

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