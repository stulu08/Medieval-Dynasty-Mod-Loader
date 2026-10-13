#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.JoinSessionCustomCallProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 392
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UJoinSessionCustomCallProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	OnFailure;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetOnFailure() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetOnFailure();
	void M_SetOnFailure(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.JoinSessionCustomCallProxy");
		return ptr;
	}

#pragma region Functions
	static class UJoinSessionCustomCallProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResultCustom& SearchResult, struct FName TargetSessionName);

#pragma endregion
};
};