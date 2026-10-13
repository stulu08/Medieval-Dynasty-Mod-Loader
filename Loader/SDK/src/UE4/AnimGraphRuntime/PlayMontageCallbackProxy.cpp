#include "../SDK.h"
#include "PlayMontageCallbackProxy.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnCompleted
// Declaration: TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> OnCompleted
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> UPlayMontageCallbackProxy::M_GetOnCompleted() const {
	return Read<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>>((byte*)this + 40);
}
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* UPlayMontageCallbackProxy::M_PtrGetOnCompleted() {
	return reinterpret_cast<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>*>((byte*)this + 40);
}
void UPlayMontageCallbackProxy::M_SetOnCompleted(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of OnBlendOut
// Declaration: TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> OnBlendOut
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> UPlayMontageCallbackProxy::M_GetOnBlendOut() const {
	return Read<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>>((byte*)this + 56);
}
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* UPlayMontageCallbackProxy::M_PtrGetOnBlendOut() {
	return reinterpret_cast<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>*>((byte*)this + 56);
}
void UPlayMontageCallbackProxy::M_SetOnBlendOut(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of OnInterrupted
// Declaration: TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> OnInterrupted
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> UPlayMontageCallbackProxy::M_GetOnInterrupted() const {
	return Read<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>>((byte*)this + 72);
}
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* UPlayMontageCallbackProxy::M_PtrGetOnInterrupted() {
	return reinterpret_cast<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>*>((byte*)this + 72);
}
void UPlayMontageCallbackProxy::M_SetOnInterrupted(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of OnNotifyBegin
// Declaration: TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> OnNotifyBegin
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> UPlayMontageCallbackProxy::M_GetOnNotifyBegin() const {
	return Read<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>>((byte*)this + 88);
}
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* UPlayMontageCallbackProxy::M_PtrGetOnNotifyBegin() {
	return reinterpret_cast<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>*>((byte*)this + 88);
}
void UPlayMontageCallbackProxy::M_SetOnNotifyBegin(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of OnNotifyEnd
// Declaration: TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> OnNotifyEnd
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature> UPlayMontageCallbackProxy::M_GetOnNotifyEnd() const {
	return Read<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>>((byte*)this + 104);
}
TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>* UPlayMontageCallbackProxy::M_PtrGetOnNotifyEnd() {
	return reinterpret_cast<TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>*>((byte*)this + 104);
}
void UPlayMontageCallbackProxy::M_SetOnNotifyEnd(const TAssetPtr<class FOnMontagePlayDelegate__DelegateSignature>& value) {
	Write((byte*)this + 104, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: InSkeletalMeshComponent	Type: class USkeletalMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartingPosition	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartingSection	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UPlayMontageCallbackProxy*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params {
		class USkeletalMeshComponent* InSkeletalMeshComponent;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
		class UPlayMontageCallbackProxy* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// Flags: Final, Native, Protected
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bInterrupted	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool bInterrupted;			//Offset: 8 | ElementSize: 1
	};
	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// Flags: Final, Native, Protected
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bInterrupted	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	struct UPlayMontageCallbackProxy_OnMontageEnded_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool bInterrupted;			//Offset: 8 | ElementSize: 1
	};
	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// Flags: Final, Native, Protected, HasOutParms
// Params:
// Name: NotifyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BranchingPointNotifyPayload	Type: struct FBranchingPointNotifyPayload	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params {
		struct FName NotifyName;			//Offset: 0 | ElementSize: 8
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;			//Offset: 8 | ElementSize: 32
	};
	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// Flags: Final, Native, Protected, HasOutParms
// Params:
// Name: NotifyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BranchingPointNotifyPayload	Type: struct FBranchingPointNotifyPayload	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params {
		struct FName NotifyName;			//Offset: 0 | ElementSize: 8
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;			//Offset: 8 | ElementSize: 32
	};
	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}