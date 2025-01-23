#include "../SDK.h"
#include "CollisionComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of replicatedCollisionActorsToIgnore
// Declaration: TArray<class AActor*> replicatedCollisionActorsToIgnore
TArray<class AActor*> UCollisionComponent::M_GetreplicatedCollisionActorsToIgnore() const {
	return Read<TArray<class AActor*>>((byte*)this + 176);
}
TArray<class AActor*>* UCollisionComponent::M_PtrGetreplicatedCollisionActorsToIgnore() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 176);
}
void UCollisionComponent::M_SetreplicatedCollisionActorsToIgnore(const TArray<class AActor*>& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of isCollisionDormant
// Declaration: bool isCollisionDormant
bool UCollisionComponent::M_GetisCollisionDormant() const {
	return Read<bool>((byte*)this + 192);
}
bool* UCollisionComponent::M_PtrGetisCollisionDormant() {
	return reinterpret_cast<bool*>((byte*)this + 192);
}
void UCollisionComponent::M_SetisCollisionDormant(const bool& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of isCollisionEnabled
// Declaration: bool isCollisionEnabled
bool UCollisionComponent::M_GetisCollisionEnabled() const {
	return Read<bool>((byte*)this + 325);
}
bool* UCollisionComponent::M_PtrGetisCollisionEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 325);
}
void UCollisionComponent::M_SetisCollisionEnabled(const bool& value) {
	Write((byte*)this + 325, value);
}
// Member Getter and Setter of canBePushed
// Declaration: bool canBePushed
bool UCollisionComponent::M_GetcanBePushed() const {
	return Read<bool>((byte*)this + 326);
}
bool* UCollisionComponent::M_PtrGetcanBePushed() {
	return reinterpret_cast<bool*>((byte*)this + 326);
}
void UCollisionComponent::M_SetcanBePushed(const bool& value) {
	Write((byte*)this + 326, value);
}
// Member Getter and Setter of canBePushedStationary
// Declaration: bool canBePushedStationary
bool UCollisionComponent::M_GetcanBePushedStationary() const {
	return Read<bool>((byte*)this + 327);
}
bool* UCollisionComponent::M_PtrGetcanBePushedStationary() {
	return reinterpret_cast<bool*>((byte*)this + 327);
}
void UCollisionComponent::M_SetcanBePushedStationary(const bool& value) {
	Write((byte*)this + 327, value);
}
// Member Getter and Setter of canPushOthers
// Declaration: bool canPushOthers
bool UCollisionComponent::M_GetcanPushOthers() const {
	return Read<bool>((byte*)this + 328);
}
bool* UCollisionComponent::M_PtrGetcanPushOthers() {
	return reinterpret_cast<bool*>((byte*)this + 328);
}
void UCollisionComponent::M_SetcanPushOthers(const bool& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of collisionInfluenceSharpness
// Declaration: float collisionInfluenceSharpness
float UCollisionComponent::M_GetcollisionInfluenceSharpness() const {
	return Read<float>((byte*)this + 332);
}
float* UCollisionComponent::M_PtrGetcollisionInfluenceSharpness() {
	return reinterpret_cast<float*>((byte*)this + 332);
}
void UCollisionComponent::M_SetcollisionInfluenceSharpness(const float& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of collisionBaseInfluenceCoefficient
// Declaration: float collisionBaseInfluenceCoefficient
float UCollisionComponent::M_GetcollisionBaseInfluenceCoefficient() const {
	return Read<float>((byte*)this + 336);
}
float* UCollisionComponent::M_PtrGetcollisionBaseInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 336);
}
void UCollisionComponent::M_SetcollisionBaseInfluenceCoefficient(const float& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of collisionVelocityInfluenceCoefficient
// Declaration: float collisionVelocityInfluenceCoefficient
float UCollisionComponent::M_GetcollisionVelocityInfluenceCoefficient() const {
	return Read<float>((byte*)this + 340);
}
float* UCollisionComponent::M_PtrGetcollisionVelocityInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 340);
}
void UCollisionComponent::M_SetcollisionVelocityInfluenceCoefficient(const float& value) {
	Write((byte*)this + 340, value);
}
// Member Getter and Setter of collisionMassInfluenceCoefficient
// Declaration: float collisionMassInfluenceCoefficient
float UCollisionComponent::M_GetcollisionMassInfluenceCoefficient() const {
	return Read<float>((byte*)this + 344);
}
float* UCollisionComponent::M_PtrGetcollisionMassInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 344);
}
void UCollisionComponent::M_SetcollisionMassInfluenceCoefficient(const float& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of collisionShapeComponentReferences
// Declaration: TArray<struct FComponentReference> collisionShapeComponentReferences
TArray<struct FComponentReference> UCollisionComponent::M_GetcollisionShapeComponentReferences() const {
	return Read<TArray<struct FComponentReference>>((byte*)this + 352);
}
TArray<struct FComponentReference>* UCollisionComponent::M_PtrGetcollisionShapeComponentReferences() {
	return reinterpret_cast<TArray<struct FComponentReference>*>((byte*)this + 352);
}
void UCollisionComponent::M_SetcollisionShapeComponentReferences(const TArray<struct FComponentReference>& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UCollisionComponent::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 368);
}
bool* UCollisionComponent::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 368);
}
void UCollisionComponent::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of onPushAttempt
// Declaration: TAssetPtr<class FOnPushAttempt__DelegateSignature> onPushAttempt
TAssetPtr<class FOnPushAttempt__DelegateSignature> UCollisionComponent::M_GetonPushAttempt() const {
	return Read<TAssetPtr<class FOnPushAttempt__DelegateSignature>>((byte*)this + 376);
}
TAssetPtr<class FOnPushAttempt__DelegateSignature>* UCollisionComponent::M_PtrGetonPushAttempt() {
	return reinterpret_cast<TAssetPtr<class FOnPushAttempt__DelegateSignature>*>((byte*)this + 376);
}
void UCollisionComponent::M_SetonPushAttempt(const TAssetPtr<class FOnPushAttempt__DelegateSignature>& value) {
	Write((byte*)this + 376, value);
}
// Member Getter and Setter of onPush
// Declaration: TAssetPtr<class FOnPush__DelegateSignature> onPush
TAssetPtr<class FOnPush__DelegateSignature> UCollisionComponent::M_GetonPush() const {
	return Read<TAssetPtr<class FOnPush__DelegateSignature>>((byte*)this + 392);
}
TAssetPtr<class FOnPush__DelegateSignature>* UCollisionComponent::M_PtrGetonPush() {
	return reinterpret_cast<TAssetPtr<class FOnPush__DelegateSignature>*>((byte*)this + 392);
}
void UCollisionComponent::M_SetonPush(const TAssetPtr<class FOnPush__DelegateSignature>& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of onPushFailed
// Declaration: TAssetPtr<class FOnPushFailed__DelegateSignature> onPushFailed
TAssetPtr<class FOnPushFailed__DelegateSignature> UCollisionComponent::M_GetonPushFailed() const {
	return Read<TAssetPtr<class FOnPushFailed__DelegateSignature>>((byte*)this + 408);
}
TAssetPtr<class FOnPushFailed__DelegateSignature>* UCollisionComponent::M_PtrGetonPushFailed() {
	return reinterpret_cast<TAssetPtr<class FOnPushFailed__DelegateSignature>*>((byte*)this + 408);
}
void UCollisionComponent::M_SetonPushFailed(const TAssetPtr<class FOnPushFailed__DelegateSignature>& value) {
	Write((byte*)this + 408, value);
}
// Member Getter and Setter of onCollision
// Declaration: TAssetPtr<class FOnCollision__DelegateSignature> onCollision
TAssetPtr<class FOnCollision__DelegateSignature> UCollisionComponent::M_GetonCollision() const {
	return Read<TAssetPtr<class FOnCollision__DelegateSignature>>((byte*)this + 424);
}
TAssetPtr<class FOnCollision__DelegateSignature>* UCollisionComponent::M_PtrGetonCollision() {
	return reinterpret_cast<TAssetPtr<class FOnCollision__DelegateSignature>*>((byte*)this + 424);
}
void UCollisionComponent::M_SetonCollision(const TAssetPtr<class FOnCollision__DelegateSignature>& value) {
	Write((byte*)this + 424, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.AddCollisionIgnoredActor
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::AddCollisionIgnoredActor(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.AddCollisionIgnoredActor");

	struct UCollisionComponent_AddCollisionIgnoredActor_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	UCollisionComponent_AddCollisionIgnoredActor_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.GetCanBePushed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCollisionComponent::GetCanBePushed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.GetCanBePushed");

	struct UCollisionComponent_GetCanBePushed_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_GetCanBePushed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.GetCanCollisionBeDormant
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCollisionComponent::GetCanCollisionBeDormant()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.GetCanCollisionBeDormant");

	struct UCollisionComponent_GetCanCollisionBeDormant_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_GetCanCollisionBeDormant_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.GetCanPushOthers
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCollisionComponent::GetCanPushOthers()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.GetCanPushOthers");

	struct UCollisionComponent_GetCanPushOthers_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_GetCanPushOthers_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.GetCollisionIgnoredActors
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class AActor*> UCollisionComponent::GetCollisionIgnoredActors()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.GetCollisionIgnoredActors");

	struct UCollisionComponent_GetCollisionIgnoredActors_Params {
		TArray<class AActor*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UCollisionComponent_GetCollisionIgnoredActors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.GetIsCollisionDormant
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCollisionComponent::GetIsCollisionDormant()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.GetIsCollisionDormant");

	struct UCollisionComponent_GetIsCollisionDormant_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_GetIsCollisionDormant_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.GetIsCollisionEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCollisionComponent::GetIsCollisionEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.GetIsCollisionEnabled");

	struct UCollisionComponent_GetIsCollisionEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_GetIsCollisionEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.OnRepIsCollisionEnabled
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void UCollisionComponent::OnRepIsCollisionEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.OnRepIsCollisionEnabled");

	struct UCollisionComponent_OnRepIsCollisionEnabled_Params {
	};
	UCollisionComponent_OnRepIsCollisionEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.RemoveCollisionIgnoredActor
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::RemoveCollisionIgnoredActor(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.RemoveCollisionIgnoredActor");

	struct UCollisionComponent_RemoveCollisionIgnoredActor_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	UCollisionComponent_RemoveCollisionIgnoredActor_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.ReplicateCollisionMove
// Flags: Final, Net, Native, Event, NetMulticast, Private
// Params:
// Name: moveVelocity	Type: struct FVector_NetQuantize	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: moveTime	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::ReplicateCollisionMove(struct FVector_NetQuantize& moveVelocity, float moveTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.ReplicateCollisionMove");

	struct UCollisionComponent_ReplicateCollisionMove_Params {
		struct FVector_NetQuantize moveVelocity;			//Offset: 0 | ElementSize: 12
		float moveTime;			//Offset: 12 | ElementSize: 4
	};
	UCollisionComponent_ReplicateCollisionMove_Params params;
	params.moveVelocity = moveVelocity;
	params.moveTime = moveTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.ServerCollisionMove
// Flags: Final, Net, Native, Event, Private, NetServer
// Params:
// Name: moveVelocity	Type: struct FVector_NetQuantize	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: moveTime	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::ServerCollisionMove(struct FVector_NetQuantize& moveVelocity, float moveTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.ServerCollisionMove");

	struct UCollisionComponent_ServerCollisionMove_Params {
		struct FVector_NetQuantize moveVelocity;			//Offset: 0 | ElementSize: 12
		float moveTime;			//Offset: 12 | ElementSize: 4
	};
	UCollisionComponent_ServerCollisionMove_Params params;
	params.moveVelocity = moveVelocity;
	params.moveTime = moveTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.SetCanBePushed
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: newCanBePushed	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::SetCanBePushed(bool newCanBePushed) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.SetCanBePushed");

	struct UCollisionComponent_SetCanBePushed_Params {
		bool newCanBePushed;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_SetCanBePushed_Params params;
	params.newCanBePushed = newCanBePushed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.SetCanCollisionBeDormant
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: newCanCollisionBeDormant	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::SetCanCollisionBeDormant(bool newCanCollisionBeDormant) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.SetCanCollisionBeDormant");

	struct UCollisionComponent_SetCanCollisionBeDormant_Params {
		bool newCanCollisionBeDormant;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_SetCanCollisionBeDormant_Params params;
	params.newCanCollisionBeDormant = newCanCollisionBeDormant;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.SetCanPushOthers
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: newCanPushOthers	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::SetCanPushOthers(bool newCanPushOthers) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.SetCanPushOthers");

	struct UCollisionComponent_SetCanPushOthers_Params {
		bool newCanPushOthers;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_SetCanPushOthers_Params params;
	params.newCanPushOthers = newCanPushOthers;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CollisionComponent.SetIsCollisionEnabled
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: newIsCollisionEnabled	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCollisionComponent::SetIsCollisionEnabled(bool newIsCollisionEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CollisionComponent.SetIsCollisionEnabled");

	struct UCollisionComponent_SetIsCollisionEnabled_Params {
		bool newIsCollisionEnabled;			//Offset: 0 | ElementSize: 1
	};
	UCollisionComponent_SetIsCollisionEnabled_Params params;
	params.newIsCollisionEnabled = newIsCollisionEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}