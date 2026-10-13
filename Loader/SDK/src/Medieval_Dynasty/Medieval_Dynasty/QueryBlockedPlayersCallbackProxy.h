#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.QueryBlockedPlayersCallbackProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 104
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UQueryBlockedPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	QuerySuccessful;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetQuerySuccessful() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetQuerySuccessful();
	void M_SetQuerySuccessful(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

	//TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>	QueryFailed;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature> M_GetQueryFailed() const;
	TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>* M_PtrGetQueryFailed();
	void M_SetQueryFailed(const TAssetPtr<class FEmptyOnlineDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.QueryBlockedPlayersCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UQueryBlockedPlayersCallbackProxy* QueryBlockedPlayersList(class UObject* WorldContextObject, class APlayerController* PlayerController);

#pragma endregion
};
};