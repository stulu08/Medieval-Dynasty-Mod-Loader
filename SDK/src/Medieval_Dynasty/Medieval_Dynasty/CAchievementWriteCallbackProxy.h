#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CAchievementWriteCallbackProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 128
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FAchievementWriteDelegate__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>& value);

	//TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>	OnFailure;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FAchievementWriteDelegate__DelegateSignature> M_GetOnFailure() const;
	TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>* M_PtrGetOnFailure();
	void M_SetOnFailure(const TAssetPtr<class FAchievementWriteDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CAchievementWriteCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UCAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag);

#pragma endregion
};
};