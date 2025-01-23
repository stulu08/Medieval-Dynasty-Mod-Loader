#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.GetLoginStatusCallbackProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 128
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UGetLoginStatusCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	LoggedIn;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetLoggedIn() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetLoggedIn();
	void M_SetLoggedIn(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	NotLoggedIn;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetNotLoggedIn() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetNotLoggedIn();
	void M_SetNotLoggedIn(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	NoInternetConnection;		//Offset: 80	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetNoInternetConnection() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetNoInternetConnection();
	void M_SetNoInternetConnection(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	UnknownError;		//Offset: 96	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetUnknownError() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetUnknownError();
	void M_SetUnknownError(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.GetLoginStatusCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UGetLoginStatusCallbackProxy* CheckLoginStatus(class UObject* WorldContextObject, class APlayerController* PlayerController);

#pragma endregion
};
};