#pragma once
#include "Structs.h"
#include "Engine/OnlineBlueprintCallProxyBase.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.QueryUserPrivacySettingsForUsersProxy
// Super: Class Engine.OnlineBlueprintCallProxyBase
// Size: 96
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UQueryUserPrivacySettingsForUsersProxy : public UOnlineBlueprintCallProxyBase {
public:
#pragma region Members
	//TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>	OnFinished;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature> M_GetOnFinished() const;
	TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>* M_PtrGetOnFinished();
	void M_SetOnFinished(const TAssetPtr<class FBlueprintOnQueryUserPrivacyCompleted__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.QueryUserPrivacySettingsForUsersProxy");
		return ptr;
	}

#pragma region Functions
	static class UQueryUserPrivacySettingsForUsersProxy* QueryUserPrivacySettingsForUsers(class UObject* WorldContextObject, class APlayerController* PlayerController, TArray<struct FString> PlayersToCheck);

#pragma endregion
};
};