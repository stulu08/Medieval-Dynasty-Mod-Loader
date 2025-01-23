#pragma once
#include "Structs.h"
#include "Engine/BlueprintAsyncActionBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CShowLoginUICallbackProxy
// Super: Class Engine.BlueprintAsyncActionBase
// Size: 96
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
public:
#pragma region Members
	//TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>& value);

	//TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>	OnFailure;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature> M_GetOnFailure() const;
	TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>* M_PtrGetOnFailure();
	void M_SetOnFailure(const TAssetPtr<class FOnlineShowLoginUIResult__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CShowLoginUICallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UCShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);

#pragma endregion
};
};