#include "../SDK.h"
#include "CAchievementWriteCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FAchievementWriteDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FAchievementWriteDelegate__DelegateSignature> UCAchievementWriteCallbackProxy::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>* UCAchievementWriteCallbackProxy::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UCAchievementWriteCallbackProxy::M_SetOnSuccess(const TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFailure
// Declaration: TAssetPtr<class FAchievementWriteDelegate__DelegateSignature> OnFailure
TAssetPtr<class FAchievementWriteDelegate__DelegateSignature> UCAchievementWriteCallbackProxy::M_GetOnFailure() const {
	return Read<TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>* UCAchievementWriteCallbackProxy::M_PtrGetOnFailure() {
	return reinterpret_cast<TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UCAchievementWriteCallbackProxy::M_SetOnFailure(const TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CAchievementWriteCallbackProxy.WriteAchievementProgress
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AchievementName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Progress	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UserTag	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCAchievementWriteCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCAchievementWriteCallbackProxy* UCAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CAchievementWriteCallbackProxy.WriteAchievementProgress");

	struct UCAchievementWriteCallbackProxy_WriteAchievementProgress_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		struct FName AchievementName;			//Offset: 16 | ElementSize: 8
		float Progress;			//Offset: 24 | ElementSize: 4
		int32_t UserTag;			//Offset: 28 | ElementSize: 4
		class UCAchievementWriteCallbackProxy* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UCAchievementWriteCallbackProxy_WriteAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.Progress = Progress;
	params.UserTag = UserTag;

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