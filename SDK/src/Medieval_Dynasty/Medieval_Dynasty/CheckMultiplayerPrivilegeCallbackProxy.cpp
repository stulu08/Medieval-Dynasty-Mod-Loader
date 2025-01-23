#include "../SDK.h"
#include "CheckMultiplayerPrivilegeCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of HasPrivilege
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> HasPrivilege
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UCheckMultiplayerPrivilegeCallbackProxy::M_GetHasPrivilege() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UCheckMultiplayerPrivilegeCallbackProxy::M_PtrGetHasPrivilege() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UCheckMultiplayerPrivilegeCallbackProxy::M_SetHasPrivilege(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of NoPrivilege
// Declaration: TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> NoPrivilege
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> UCheckMultiplayerPrivilegeCallbackProxy::M_GetNoPrivilege() const {
	return Read<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* UCheckMultiplayerPrivilegeCallbackProxy::M_PtrGetNoPrivilege() {
	return reinterpret_cast<TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UCheckMultiplayerPrivilegeCallbackProxy::M_SetNoPrivilege(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CheckMultiplayerPrivilegeCallbackProxy.CheckMultiplayerPrivileges
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PrivilegeToCheck	Type: E_SystemPrivilege	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ShowSystemUI	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCheckMultiplayerPrivilegeCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCheckMultiplayerPrivilegeCallbackProxy* UCheckMultiplayerPrivilegeCallbackProxy::CheckMultiplayerPrivileges(class UObject* WorldContextObject, class APlayerController* PlayerController, E_SystemPrivilege PrivilegeToCheck, bool ShowSystemUI) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CheckMultiplayerPrivilegeCallbackProxy.CheckMultiplayerPrivileges");

	struct UCheckMultiplayerPrivilegeCallbackProxy_CheckMultiplayerPrivileges_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class APlayerController* PlayerController;			//Offset: 8 | ElementSize: 8
		E_SystemPrivilege PrivilegeToCheck;			//Offset: 16 | ElementSize: 1
		bool ShowSystemUI;			//Offset: 17 | ElementSize: 1
		class UCheckMultiplayerPrivilegeCallbackProxy* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UCheckMultiplayerPrivilegeCallbackProxy_CheckMultiplayerPrivileges_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PrivilegeToCheck = PrivilegeToCheck;
	params.ShowSystemUI = ShowSystemUI;

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