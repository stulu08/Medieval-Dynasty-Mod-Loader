#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.FindSessionCustomCallProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 160
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UFindSessionCustomCallProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>& value);

	//TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>	OnFailure;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature> M_GetOnFailure() const;
	TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>* M_PtrGetOnFailure();
	void M_SetOnFailure(const TAssetPtr<class FBlueprintFindSessionsResultDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.FindSessionCustomCallProxy");
		return ptr;
	}

#pragma region Functions
	static void CancelFindSessions(class UObject* WorldContextObject);

	static class UFindSessionCustomCallProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString SearchSessionName, int32_t MaxResults, bool bUseLAN);

	static int32_t GetCurrentPlayers(const struct FBlueprintSessionResultCustom& Result);

	static bool GetGameInitialized(const struct FBlueprintSessionResultCustom& Result);

	static bool GetIsCrossplay(const struct FBlueprintSessionResultCustom& Result);

	static int32_t GetMaxPlayers(const struct FBlueprintSessionResultCustom& Result);

	static struct FString GetPassword(const struct FBlueprintSessionResultCustom& Result);

	static int32_t GetPingInMs(const struct FBlueprintSessionResultCustom& Result);

	static struct FName GetPlatform(const struct FBlueprintSessionResultCustom& Result);

	static struct FString GetServerName(const struct FBlueprintSessionResultCustom& Result);

	static void InvalidateSessionHandle(struct FBlueprintSessionResultCustom* Result);

	static bool IsValidSession(const struct FBlueprintSessionResultCustom& Result);

#pragma endregion
};
};