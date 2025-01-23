#pragma once
#include "Structs.h"
#include "Engine/BlueprintAsyncActionBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.LoginCallbackProxy
// Super: Class Engine.BlueprintAsyncActionBase
// Size: 144
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class ULoginCallbackProxy : public UBlueprintAsyncActionBase {
public:
#pragma region Members
	//TAssetPtr<class FOnlineLoginResult__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnlineLoginResult__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FOnlineLoginResult__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FOnlineLoginResult__DelegateSignature>& value);

	//TAssetPtr<class FOnlineLoginResult__DelegateSignature>	OnFailure;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnlineLoginResult__DelegateSignature> M_GetOnFailure() const;
	TAssetPtr<class FOnlineLoginResult__DelegateSignature>* M_PtrGetOnFailure();
	void M_SetOnFailure(const TAssetPtr<class FOnlineLoginResult__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.LoginCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class ULoginCallbackProxy* Login(class UObject* WorldContextObject, class APlayerController* PlayerController, TEnumAsByte<E_AccountCredentials> InType, struct FString inId, struct FString inToken);

#pragma endregion
};
};