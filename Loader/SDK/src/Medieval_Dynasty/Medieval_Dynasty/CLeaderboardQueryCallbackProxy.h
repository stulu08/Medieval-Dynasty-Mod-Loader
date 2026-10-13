#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CLeaderboardQueryCallbackProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 168
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCLeaderboardQueryCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FLeaderboardQueryResult__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>& value);

	//TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>	OnFailure;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FLeaderboardQueryResult__DelegateSignature> M_GetOnFailure() const;
	TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>* M_PtrGetOnFailure();
	void M_SetOnFailure(const TAssetPtr<class FLeaderboardQueryResult__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CLeaderboardQueryCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UCLeaderboardQueryCallbackProxy* ReadLeaderboardInteger(class APlayerController* PlayerController, struct FName StatName);

#pragma endregion
};
};