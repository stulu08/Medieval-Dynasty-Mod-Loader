#include "../SDK.h"
#include "QueryUserPrivacySettingsForUsersProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnFinished
// Declaration: TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature> OnFinished
TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature> UQueryUserPrivacySettingsForUsersProxy::M_GetOnFinished() const {
	return Read<TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>* UQueryUserPrivacySettingsForUsersProxy::M_PtrGetOnFinished() {
	return reinterpret_cast<TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>*>((byte*)this + 48);
}
void UQueryUserPrivacySettingsForUsersProxy::M_SetOnFinished(const TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.QueryUserPrivacySettingsForUsersProxy.QueryUserPrivacySettingsForUsers
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayersToCheck	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UQueryUserPrivacySettingsForUsersProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UQueryUserPrivacySettingsForUsersProxy* UQueryUserPrivacySettingsForUsersProxy::QueryUserPrivacySettingsForUsers(class UObject* WorldContextObject, class APlayerController* PlayerController, TArray<struct FString> PlayersToCheck) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.QueryUserPrivacySettingsForUsersProxy.QueryUserPrivacySettingsForUsers");

	struct UQueryUserPrivacySettingsForUsersProxy_QueryUserPrivacySettingsForUsers_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		TArray<struct FString> PlayersToCheck;			//Offset: 16 | ElementSize: 16
		class UQueryUserPrivacySettingsForUsersProxy* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UQueryUserPrivacySettingsForUsersProxy_QueryUserPrivacySettingsForUsers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PlayersToCheck = PlayersToCheck;

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