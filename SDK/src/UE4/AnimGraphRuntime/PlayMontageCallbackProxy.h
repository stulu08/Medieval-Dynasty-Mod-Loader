#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Super: Class CoreUObject.Object
// Size: 168
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UPlayMontageCallbackProxy : public UObject {
public:
#pragma region Members
	//TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>	OnCompleted;		//Offset: 40	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> M_GetOnCompleted() const;
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* M_PtrGetOnCompleted();
	void M_SetOnCompleted(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>	OnBlendOut;		//Offset: 56	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> M_GetOnBlendOut() const;
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* M_PtrGetOnBlendOut();
	void M_SetOnBlendOut(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>	OnInterrupted;		//Offset: 72	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> M_GetOnInterrupted() const;
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* M_PtrGetOnInterrupted();
	void M_SetOnInterrupted(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>	OnNotifyBegin;		//Offset: 88	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> M_GetOnNotifyBegin() const;
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* M_PtrGetOnNotifyBegin();
	void M_SetOnNotifyBegin(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value);

	//TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>	OnNotifyEnd;		//Offset: 104	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> M_GetOnNotifyEnd() const;
	TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* M_PtrGetOnNotifyEnd();
	void M_SetOnNotifyEnd(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}

#pragma region Functions
	static class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);

	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);

	void OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	void OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

#pragma endregion
};
};