#include "../SDK.h"
#include "ActorComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PrimaryComponentTick
// Declaration: struct FActorComponentTickFunction PrimaryComponentTick
struct FActorComponentTickFunction UActorComponent::M_GetPrimaryComponentTick() const {
	return Read<struct FActorComponentTickFunction>((byte*)this + 48);
}
struct FActorComponentTickFunction* UActorComponent::M_PtrGetPrimaryComponentTick() {
	return reinterpret_cast<struct FActorComponentTickFunction*>((byte*)this + 48);
}
void UActorComponent::M_SetPrimaryComponentTick(const struct FActorComponentTickFunction& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of ComponentTags
// Declaration: TArray<struct FName> ComponentTags
TArray<struct FName> UActorComponent::M_GetComponentTags() const {
	return Read<TArray<struct FName>>((byte*)this + 96);
}
TArray<struct FName>* UActorComponent::M_PtrGetComponentTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 96);
}
void UActorComponent::M_SetComponentTags(const TArray<struct FName>& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of AssetUserData
// Declaration: TArray<class UAssetUserData*> AssetUserData
TArray<class UAssetUserData*> UActorComponent::M_GetAssetUserData() const {
	return Read<TArray<class UAssetUserData*>>((byte*)this + 112);
}
TArray<class UAssetUserData*>* UActorComponent::M_PtrGetAssetUserData() {
	return reinterpret_cast<TArray<class UAssetUserData*>*>((byte*)this + 112);
}
void UActorComponent::M_SetAssetUserData(const TArray<class UAssetUserData*>& value) {
	Write((byte*)this + 112, value);
}
// Member Getter and Setter of UCSSerializationIndex
// Declaration: int32_t UCSSerializationIndex
int32_t UActorComponent::M_GetUCSSerializationIndex() const {
	return Read<int32_t>((byte*)this + 132);
}
int32_t* UActorComponent::M_PtrGetUCSSerializationIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 132);
}
void UActorComponent::M_SetUCSSerializationIndex(const int32_t& value) {
	Write((byte*)this + 132, value);
}
// Member Getter and Setter of bNetAddressable
// Declaration: unsigned char bNetAddressable : 1
unsigned char UActorComponent::M_GetbNetAddressable() const {
	return Read<unsigned char>((byte*)this + 136);
}
unsigned char* UActorComponent::M_PtrGetbNetAddressable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 136);
}
void UActorComponent::M_SetbNetAddressable(const unsigned char& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of bReplicates
// Declaration: unsigned char bReplicates : 1
unsigned char UActorComponent::M_GetbReplicates() const {
	return Read<unsigned char>((byte*)this + 136);
}
unsigned char* UActorComponent::M_PtrGetbReplicates() {
	return reinterpret_cast<unsigned char*>((byte*)this + 136);
}
void UActorComponent::M_SetbReplicates(const unsigned char& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of bAutoActivate
// Declaration: unsigned char bAutoActivate : 1
unsigned char UActorComponent::M_GetbAutoActivate() const {
	return Read<unsigned char>((byte*)this + 137);
}
unsigned char* UActorComponent::M_PtrGetbAutoActivate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 137);
}
void UActorComponent::M_SetbAutoActivate(const unsigned char& value) {
	Write((byte*)this + 137, value);
}
// Member Getter and Setter of bIsActive
// Declaration: unsigned char bIsActive : 1
unsigned char UActorComponent::M_GetbIsActive() const {
	return Read<unsigned char>((byte*)this + 138);
}
unsigned char* UActorComponent::M_PtrGetbIsActive() {
	return reinterpret_cast<unsigned char*>((byte*)this + 138);
}
void UActorComponent::M_SetbIsActive(const unsigned char& value) {
	Write((byte*)this + 138, value);
}
// Member Getter and Setter of bEditableWhenInherited
// Declaration: unsigned char bEditableWhenInherited : 1
unsigned char UActorComponent::M_GetbEditableWhenInherited() const {
	return Read<unsigned char>((byte*)this + 138);
}
unsigned char* UActorComponent::M_PtrGetbEditableWhenInherited() {
	return reinterpret_cast<unsigned char*>((byte*)this + 138);
}
void UActorComponent::M_SetbEditableWhenInherited(const unsigned char& value) {
	Write((byte*)this + 138, value);
}
// Member Getter and Setter of bCanEverAffectNavigation
// Declaration: unsigned char bCanEverAffectNavigation : 1
unsigned char UActorComponent::M_GetbCanEverAffectNavigation() const {
	return Read<unsigned char>((byte*)this + 138);
}
unsigned char* UActorComponent::M_PtrGetbCanEverAffectNavigation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 138);
}
void UActorComponent::M_SetbCanEverAffectNavigation(const unsigned char& value) {
	Write((byte*)this + 138, value);
}
// Member Getter and Setter of bIsEditorOnly
// Declaration: unsigned char bIsEditorOnly : 1
unsigned char UActorComponent::M_GetbIsEditorOnly() const {
	return Read<unsigned char>((byte*)this + 138);
}
unsigned char* UActorComponent::M_PtrGetbIsEditorOnly() {
	return reinterpret_cast<unsigned char*>((byte*)this + 138);
}
void UActorComponent::M_SetbIsEditorOnly(const unsigned char& value) {
	Write((byte*)this + 138, value);
}
// Member Getter and Setter of CreationMethod
// Declaration: EComponentCreationMethod CreationMethod
EComponentCreationMethod UActorComponent::M_GetCreationMethod() const {
	return Read<EComponentCreationMethod>((byte*)this + 140);
}
EComponentCreationMethod* UActorComponent::M_PtrGetCreationMethod() {
	return reinterpret_cast<EComponentCreationMethod*>((byte*)this + 140);
}
void UActorComponent::M_SetCreationMethod(const EComponentCreationMethod& value) {
	Write((byte*)this + 140, value);
}
// Member Getter and Setter of OnComponentActivated
// Declaration: TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature> OnComponentActivated
TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature> UActorComponent::M_GetOnComponentActivated() const {
	return Read<TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>>((byte*)this + 141);
}
TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>* UActorComponent::M_PtrGetOnComponentActivated() {
	return reinterpret_cast<TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>*>((byte*)this + 141);
}
void UActorComponent::M_SetOnComponentActivated(const TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>& value) {
	Write((byte*)this + 141, value);
}
// Member Getter and Setter of OnComponentDeactivated
// Declaration: TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature> OnComponentDeactivated
TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature> UActorComponent::M_GetOnComponentDeactivated() const {
	return Read<TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>>((byte*)this + 142);
}
TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>* UActorComponent::M_PtrGetOnComponentDeactivated() {
	return reinterpret_cast<TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>*>((byte*)this + 142);
}
void UActorComponent::M_SetOnComponentDeactivated(const TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>& value) {
	Write((byte*)this + 142, value);
}
// Member Getter and Setter of UCSModifiedProperties
// Declaration: TArray<struct FSimpleMemberReference> UCSModifiedProperties
TArray<struct FSimpleMemberReference> UActorComponent::M_GetUCSModifiedProperties() const {
	return Read<TArray<struct FSimpleMemberReference>>((byte*)this + 144);
}
TArray<struct FSimpleMemberReference>* UActorComponent::M_PtrGetUCSModifiedProperties() {
	return reinterpret_cast<TArray<struct FSimpleMemberReference>*>((byte*)this + 144);
}
void UActorComponent::M_SetUCSModifiedProperties(const TArray<struct FSimpleMemberReference>& value) {
	Write((byte*)this + 144, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.ActorComponent.Activate
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bReset	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::Activate(bool bReset) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.Activate");

	struct UActorComponent_Activate_Params {
		bool bReset;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_Activate_Params params;
	params.bReset = bReset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.AddTickPrerequisiteActor
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::AddTickPrerequisiteActor(class AActor* PrerequisiteActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.AddTickPrerequisiteActor");

	struct UActorComponent_AddTickPrerequisiteActor_Params {
		class AActor* PrerequisiteActor;			//Offset: 0 | ElementSize: 8
	};
	UActorComponent_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.AddTickPrerequisiteComponent
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteComponent	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.AddTickPrerequisiteComponent");

	struct UActorComponent_AddTickPrerequisiteComponent_Params {
		class UActorComponent* PrerequisiteComponent;			//Offset: 0 | ElementSize: 8
	};
	UActorComponent_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.ComponentHasTag
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UActorComponent::ComponentHasTag(struct FName Tag)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ComponentHasTag");

	struct UActorComponent_ComponentHasTag_Params {
		struct FName Tag;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UActorComponent_ComponentHasTag_Params params;
	params.Tag = Tag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.ActorComponent.Deactivate
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UActorComponent::Deactivate() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.Deactivate");

	struct UActorComponent_Deactivate_Params {
	};
	UActorComponent_Deactivate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.GetComponentTickInterval
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UActorComponent::GetComponentTickInterval()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.GetComponentTickInterval");

	struct UActorComponent_GetComponentTickInterval_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UActorComponent_GetComponentTickInterval_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.ActorComponent.GetOwner
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UActorComponent::GetOwner()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.GetOwner");

	struct UActorComponent_GetOwner_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UActorComponent_GetOwner_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.ActorComponent.IsActive
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UActorComponent::IsActive()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.IsActive");

	struct UActorComponent_IsActive_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_IsActive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.ActorComponent.IsBeingDestroyed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UActorComponent::IsBeingDestroyed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.IsBeingDestroyed");

	struct UActorComponent_IsBeingDestroyed_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_IsBeingDestroyed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.ActorComponent.IsComponentTickEnabled
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UActorComponent::IsComponentTickEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.IsComponentTickEnabled");

	struct UActorComponent_IsComponentTickEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_IsComponentTickEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.ActorComponent.K2_DestroyComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::K2_DestroyComponent(class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.K2_DestroyComponent");

	struct UActorComponent_K2_DestroyComponent_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
	};
	UActorComponent_K2_DestroyComponent_Params params;
	params.Object = Object;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.OnRep_IsActive
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void UActorComponent::OnRep_IsActive() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.OnRep_IsActive");

	struct UActorComponent_OnRep_IsActive_Params {
	};
	UActorComponent_OnRep_IsActive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.ReceiveBeginPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UActorComponent::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ReceiveBeginPlay");

	struct UActorComponent_ReceiveBeginPlay_Params {
	};
	UActorComponent_ReceiveBeginPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.ReceiveEndPlay
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ReceiveEndPlay");

	struct UActorComponent_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ReceiveTick");

	struct UActorComponent_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	UActorComponent_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.RemoveTickPrerequisiteActor");

	struct UActorComponent_RemoveTickPrerequisiteActor_Params {
		class AActor* PrerequisiteActor;			//Offset: 0 | ElementSize: 8
	};
	UActorComponent_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteComponent	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent");

	struct UActorComponent_RemoveTickPrerequisiteComponent_Params {
		class UActorComponent* PrerequisiteComponent;			//Offset: 0 | ElementSize: 8
	};
	UActorComponent_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetActive
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewActive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bReset	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetActive(bool bNewActive, bool bReset) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetActive");

	struct UActorComponent_SetActive_Params {
		bool bNewActive;			//Offset: 0 | ElementSize: 1
		bool bReset;			//Offset: 1 | ElementSize: 1
	};
	UActorComponent_SetActive_Params params;
	params.bNewActive = bNewActive;
	params.bReset = bReset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetAutoActivate
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewAutoActivate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetAutoActivate(bool bNewAutoActivate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetAutoActivate");

	struct UActorComponent_SetAutoActivate_Params {
		bool bNewAutoActivate;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_SetAutoActivate_Params params;
	params.bNewAutoActivate = bNewAutoActivate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetComponentTickEnabled
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetComponentTickEnabled(bool bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetComponentTickEnabled");

	struct UActorComponent_SetComponentTickEnabled_Params {
		bool bEnabled;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_SetComponentTickEnabled_Params params;
	params.bEnabled = bEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetComponentTickInterval
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TickInterval	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetComponentTickInterval(float TickInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetComponentTickInterval");

	struct UActorComponent_SetComponentTickInterval_Params {
		float TickInterval;			//Offset: 0 | ElementSize: 4
	};
	UActorComponent_SetComponentTickInterval_Params params;
	params.TickInterval = TickInterval;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetComponentTickIntervalAndCooldown
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TickInterval	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetComponentTickIntervalAndCooldown(float TickInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetComponentTickIntervalAndCooldown");

	struct UActorComponent_SetComponentTickIntervalAndCooldown_Params {
		float TickInterval;			//Offset: 0 | ElementSize: 4
	};
	UActorComponent_SetComponentTickIntervalAndCooldown_Params params;
	params.TickInterval = TickInterval;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetIsReplicated
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ShouldReplicate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetIsReplicated(bool ShouldReplicate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetIsReplicated");

	struct UActorComponent_SetIsReplicated_Params {
		bool ShouldReplicate;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_SetIsReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetTickableWhenPaused
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bTickableWhenPaused	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetTickableWhenPaused(bool bTickableWhenPaused) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetTickableWhenPaused");

	struct UActorComponent_SetTickableWhenPaused_Params {
		bool bTickableWhenPaused;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.SetTickGroup
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewTickGroup	Type: TEnumAsByte<ETickingGroup>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UActorComponent::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetTickGroup");

	struct UActorComponent_SetTickGroup_Params {
		TEnumAsByte<ETickingGroup> NewTickGroup;			//Offset: 0 | ElementSize: 1
	};
	UActorComponent_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.ActorComponent.ToggleActive
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UActorComponent::ToggleActive() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ToggleActive");

	struct UActorComponent_ToggleActive_Params {
	};
	UActorComponent_ToggleActive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}