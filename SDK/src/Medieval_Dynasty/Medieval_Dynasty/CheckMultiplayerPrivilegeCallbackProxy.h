#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CheckMultiplayerPrivilegeCallbackProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 104
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCheckMultiplayerPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	HasPrivilege;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetHasPrivilege() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetHasPrivilege();
	void M_SetHasPrivilege(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	NoPrivilege;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetNoPrivilege() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetNoPrivilege();
	void M_SetNoPrivilege(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CheckMultiplayerPrivilegeCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UCheckMultiplayerPrivilegeCallbackProxy* CheckMultiplayerPrivileges(class UObject* WorldContextObject, class APlayerController* PlayerController, E_SystemPrivilege PrivilegeToCheck, bool ShowSystemUI);

#pragma endregion
};
};