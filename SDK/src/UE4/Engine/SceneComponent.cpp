#include "../SDK.h"
#include "SceneComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PhysicsVolume
// Declaration: TWeakObjectPtr<class APhysicsVolume> PhysicsVolume
TWeakObjectPtr<class APhysicsVolume> USceneComponent::M_GetPhysicsVolume() const {
	return Read<TWeakObjectPtr<class APhysicsVolume>>((byte*)this + 184);
}
TWeakObjectPtr<class APhysicsVolume>* USceneComponent::M_PtrGetPhysicsVolume() {
	return reinterpret_cast<TWeakObjectPtr<class APhysicsVolume>*>((byte*)this + 184);
}
void USceneComponent::M_SetPhysicsVolume(const TWeakObjectPtr<class APhysicsVolume>& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of AttachParent
// Declaration: class USceneComponent* AttachParent
class USceneComponent* USceneComponent::M_GetAttachParent() const {
	return Read<class USceneComponent*>((byte*)this + 192);
}
class USceneComponent** USceneComponent::M_PtrGetAttachParent() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 192);
}
void USceneComponent::M_SetAttachParent(const class USceneComponent*& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of AttachSocketName
// Declaration: struct FName AttachSocketName
struct FName USceneComponent::M_GetAttachSocketName() const {
	return Read<struct FName>((byte*)this + 200);
}
struct FName* USceneComponent::M_PtrGetAttachSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 200);
}
void USceneComponent::M_SetAttachSocketName(const struct FName& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of AttachChildren
// Declaration: TArray<class USceneComponent*> AttachChildren
TArray<class USceneComponent*> USceneComponent::M_GetAttachChildren() const {
	return Read<TArray<class USceneComponent*>>((byte*)this + 208);
}
TArray<class USceneComponent*>* USceneComponent::M_PtrGetAttachChildren() {
	return reinterpret_cast<TArray<class USceneComponent*>*>((byte*)this + 208);
}
void USceneComponent::M_SetAttachChildren(const TArray<class USceneComponent*>& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of ClientAttachedChildren
// Declaration: TArray<class USceneComponent*> ClientAttachedChildren
TArray<class USceneComponent*> USceneComponent::M_GetClientAttachedChildren() const {
	return Read<TArray<class USceneComponent*>>((byte*)this + 224);
}
TArray<class USceneComponent*>* USceneComponent::M_PtrGetClientAttachedChildren() {
	return reinterpret_cast<TArray<class USceneComponent*>*>((byte*)this + 224);
}
void USceneComponent::M_SetClientAttachedChildren(const TArray<class USceneComponent*>& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of RelativeLocation
// Declaration: struct FVector RelativeLocation
struct FVector USceneComponent::M_GetRelativeLocation() const {
	return Read<struct FVector>((byte*)this + 284);
}
struct FVector* USceneComponent::M_PtrGetRelativeLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 284);
}
void USceneComponent::M_SetRelativeLocation(const struct FVector& value) {
	Write((byte*)this + 284, value);
}
// Member Getter and Setter of RelativeRotation
// Declaration: struct FRotator RelativeRotation
struct FRotator USceneComponent::M_GetRelativeRotation() const {
	return Read<struct FRotator>((byte*)this + 296);
}
struct FRotator* USceneComponent::M_PtrGetRelativeRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 296);
}
void USceneComponent::M_SetRelativeRotation(const struct FRotator& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of RelativeScale3D
// Declaration: struct FVector RelativeScale3D
struct FVector USceneComponent::M_GetRelativeScale3D() const {
	return Read<struct FVector>((byte*)this + 308);
}
struct FVector* USceneComponent::M_PtrGetRelativeScale3D() {
	return reinterpret_cast<struct FVector*>((byte*)this + 308);
}
void USceneComponent::M_SetRelativeScale3D(const struct FVector& value) {
	Write((byte*)this + 308, value);
}
// Member Getter and Setter of ComponentVelocity
// Declaration: struct FVector ComponentVelocity
struct FVector USceneComponent::M_GetComponentVelocity() const {
	return Read<struct FVector>((byte*)this + 320);
}
struct FVector* USceneComponent::M_PtrGetComponentVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 320);
}
void USceneComponent::M_SetComponentVelocity(const struct FVector& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of bComponentToWorldUpdated
// Declaration: unsigned char bComponentToWorldUpdated : 1
unsigned char USceneComponent::M_GetbComponentToWorldUpdated() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbComponentToWorldUpdated() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbComponentToWorldUpdated(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bAbsoluteLocation
// Declaration: unsigned char bAbsoluteLocation : 1
unsigned char USceneComponent::M_GetbAbsoluteLocation() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbAbsoluteLocation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbAbsoluteLocation(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bAbsoluteRotation
// Declaration: unsigned char bAbsoluteRotation : 1
unsigned char USceneComponent::M_GetbAbsoluteRotation() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbAbsoluteRotation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbAbsoluteRotation(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bAbsoluteScale
// Declaration: unsigned char bAbsoluteScale : 1
unsigned char USceneComponent::M_GetbAbsoluteScale() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbAbsoluteScale() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbAbsoluteScale(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bVisible
// Declaration: unsigned char bVisible : 1
unsigned char USceneComponent::M_GetbVisible() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbVisible() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbVisible(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bShouldBeAttached
// Declaration: unsigned char bShouldBeAttached : 1
unsigned char USceneComponent::M_GetbShouldBeAttached() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbShouldBeAttached() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbShouldBeAttached(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bShouldSnapLocationWhenAttached
// Declaration: unsigned char bShouldSnapLocationWhenAttached : 1
unsigned char USceneComponent::M_GetbShouldSnapLocationWhenAttached() const {
	return Read<unsigned char>((byte*)this + 332);
}
unsigned char* USceneComponent::M_PtrGetbShouldSnapLocationWhenAttached() {
	return reinterpret_cast<unsigned char*>((byte*)this + 332);
}
void USceneComponent::M_SetbShouldSnapLocationWhenAttached(const unsigned char& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bShouldSnapRotationWhenAttached
// Declaration: unsigned char bShouldSnapRotationWhenAttached : 1
unsigned char USceneComponent::M_GetbShouldSnapRotationWhenAttached() const {
	return Read<unsigned char>((byte*)this + 333);
}
unsigned char* USceneComponent::M_PtrGetbShouldSnapRotationWhenAttached() {
	return reinterpret_cast<unsigned char*>((byte*)this + 333);
}
void USceneComponent::M_SetbShouldSnapRotationWhenAttached(const unsigned char& value) {
	Write((byte*)this + 333, value);
}
// Member Getter and Setter of bShouldUpdatePhysicsVolume
// Declaration: unsigned char bShouldUpdatePhysicsVolume : 1
unsigned char USceneComponent::M_GetbShouldUpdatePhysicsVolume() const {
	return Read<unsigned char>((byte*)this + 333);
}
unsigned char* USceneComponent::M_PtrGetbShouldUpdatePhysicsVolume() {
	return reinterpret_cast<unsigned char*>((byte*)this + 333);
}
void USceneComponent::M_SetbShouldUpdatePhysicsVolume(const unsigned char& value) {
	Write((byte*)this + 333, value);
}
// Member Getter and Setter of bHiddenInGame
// Declaration: unsigned char bHiddenInGame : 1
unsigned char USceneComponent::M_GetbHiddenInGame() const {
	return Read<unsigned char>((byte*)this + 333);
}
unsigned char* USceneComponent::M_PtrGetbHiddenInGame() {
	return reinterpret_cast<unsigned char*>((byte*)this + 333);
}
void USceneComponent::M_SetbHiddenInGame(const unsigned char& value) {
	Write((byte*)this + 333, value);
}
// Member Getter and Setter of bBoundsChangeTriggersStreamingDataRebuild
// Declaration: unsigned char bBoundsChangeTriggersStreamingDataRebuild : 1
unsigned char USceneComponent::M_GetbBoundsChangeTriggersStreamingDataRebuild() const {
	return Read<unsigned char>((byte*)this + 333);
}
unsigned char* USceneComponent::M_PtrGetbBoundsChangeTriggersStreamingDataRebuild() {
	return reinterpret_cast<unsigned char*>((byte*)this + 333);
}
void USceneComponent::M_SetbBoundsChangeTriggersStreamingDataRebuild(const unsigned char& value) {
	Write((byte*)this + 333, value);
}
// Member Getter and Setter of bUseAttachParentBound
// Declaration: unsigned char bUseAttachParentBound : 1
unsigned char USceneComponent::M_GetbUseAttachParentBound() const {
	return Read<unsigned char>((byte*)this + 333);
}
unsigned char* USceneComponent::M_PtrGetbUseAttachParentBound() {
	return reinterpret_cast<unsigned char*>((byte*)this + 333);
}
void USceneComponent::M_SetbUseAttachParentBound(const unsigned char& value) {
	Write((byte*)this + 333, value);
}
// Member Getter and Setter of Mobility
// Declaration: TEnumAsByte<EComponentMobility> Mobility
TEnumAsByte<EComponentMobility> USceneComponent::M_GetMobility() const {
	return Read<TEnumAsByte<EComponentMobility>>((byte*)this + 335);
}
TEnumAsByte<EComponentMobility>* USceneComponent::M_PtrGetMobility() {
	return reinterpret_cast<TEnumAsByte<EComponentMobility>*>((byte*)this + 335);
}
void USceneComponent::M_SetMobility(const TEnumAsByte<EComponentMobility>& value) {
	Write((byte*)this + 335, value);
}
// Member Getter and Setter of DetailMode
// Declaration: TEnumAsByte<EDetailMode> DetailMode
TEnumAsByte<EDetailMode> USceneComponent::M_GetDetailMode() const {
	return Read<TEnumAsByte<EDetailMode>>((byte*)this + 336);
}
TEnumAsByte<EDetailMode>* USceneComponent::M_PtrGetDetailMode() {
	return reinterpret_cast<TEnumAsByte<EDetailMode>*>((byte*)this + 336);
}
void USceneComponent::M_SetDetailMode(const TEnumAsByte<EDetailMode>& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of PhysicsVolumeChangedDelegate
// Declaration: TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature> PhysicsVolumeChangedDelegate
TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature> USceneComponent::M_GetPhysicsVolumeChangedDelegate() const {
	return Read<TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>>((byte*)this + 337);
}
TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>* USceneComponent::M_PtrGetPhysicsVolumeChangedDelegate() {
	return reinterpret_cast<TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>*>((byte*)this + 337);
}
void USceneComponent::M_SetPhysicsVolumeChangedDelegate(const TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>& value) {
	Write((byte*)this + 337, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SceneComponent.DetachFromParent
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bMaintainWorldPosition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bCallModify	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.DetachFromParent");

	struct USceneComponent_DetachFromParent_Params {
		bool bMaintainWorldPosition;			//Offset: 0 | ElementSize: 1
		bool bCallModify;			//Offset: 1 | ElementSize: 1
	};
	USceneComponent_DetachFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;
	params.bCallModify = bCallModify;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.DoesSocketExist
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::DoesSocketExist(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.DoesSocketExist");

	struct USceneComponent_DoesSocketExist_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	USceneComponent_DoesSocketExist_Params params;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetAllSocketNames
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FName> USceneComponent::GetAllSocketNames()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetAllSocketNames");

	struct USceneComponent_GetAllSocketNames_Params {
		TArray<struct FName> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	USceneComponent_GetAllSocketNames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetAttachParent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class USceneComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USceneComponent* USceneComponent::GetAttachParent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetAttachParent");

	struct USceneComponent_GetAttachParent_Params {
		class USceneComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USceneComponent_GetAttachParent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetAttachSocketName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USceneComponent::GetAttachSocketName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetAttachSocketName");

	struct USceneComponent_GetAttachSocketName_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USceneComponent_GetAttachSocketName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetChildComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ChildIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USceneComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USceneComponent* USceneComponent::GetChildComponent(int32_t ChildIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetChildComponent");

	struct USceneComponent_GetChildComponent_Params {
		int32_t ChildIndex;			//Offset: 0 | ElementSize: 4
		class USceneComponent* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USceneComponent_GetChildComponent_Params params;
	params.ChildIndex = ChildIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetChildrenComponents
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: bIncludeAllDescendants	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Children	Type: TArray<class USceneComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetChildrenComponents");

	struct USceneComponent_GetChildrenComponents_Params {
		bool bIncludeAllDescendants;			//Offset: 0 | ElementSize: 1
		TArray<class USceneComponent*> Children;			//Offset: 8 | ElementSize: 16
	};
	USceneComponent_GetChildrenComponents_Params params;
	params.bIncludeAllDescendants = bIncludeAllDescendants;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Children != nullptr)
		*Children = params.Children;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetComponentVelocity
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::GetComponentVelocity()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetComponentVelocity");

	struct USceneComponent_GetComponentVelocity_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_GetComponentVelocity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetForwardVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::GetForwardVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetForwardVector");

	struct USceneComponent_GetForwardVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_GetForwardVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetNumChildrenComponents
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USceneComponent::GetNumChildrenComponents()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetNumChildrenComponents");

	struct USceneComponent_GetNumChildrenComponents_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USceneComponent_GetNumChildrenComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetParentComponents
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Parents	Type: TArray<class USceneComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::GetParentComponents(TArray<class USceneComponent*>* Parents)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetParentComponents");

	struct USceneComponent_GetParentComponents_Params {
		TArray<class USceneComponent*> Parents;			//Offset: 0 | ElementSize: 16
	};
	USceneComponent_GetParentComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Parents != nullptr)
		*Parents = params.Parents;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetPhysicsVolume
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APhysicsVolume*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APhysicsVolume* USceneComponent::GetPhysicsVolume()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetPhysicsVolume");

	struct USceneComponent_GetPhysicsVolume_Params {
		class APhysicsVolume* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USceneComponent_GetPhysicsVolume_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetRelativeTransform
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FTransform	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform USceneComponent::GetRelativeTransform()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetRelativeTransform");

	struct USceneComponent_GetRelativeTransform_Params {
		struct FTransform ReturnValue;			//Offset: 0 | ElementSize: 48
	};
	USceneComponent_GetRelativeTransform_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetRightVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::GetRightVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetRightVector");

	struct USceneComponent_GetRightVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_GetRightVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::GetShouldUpdatePhysicsVolume()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume");

	struct USceneComponent_GetShouldUpdatePhysicsVolume_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_GetShouldUpdatePhysicsVolume_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetSocketLocation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::GetSocketLocation(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetSocketLocation");

	struct USceneComponent_GetSocketLocation_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	USceneComponent_GetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetSocketQuaternion
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FQuat	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FQuat USceneComponent::GetSocketQuaternion(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetSocketQuaternion");

	struct USceneComponent_GetSocketQuaternion_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		struct FQuat ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	USceneComponent_GetSocketQuaternion_Params params;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetSocketRotation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator USceneComponent::GetSocketRotation(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetSocketRotation");

	struct USceneComponent_GetSocketRotation_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		struct FRotator ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	USceneComponent_GetSocketRotation_Params params;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetSocketTransform
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TransformSpace	Type: TEnumAsByte<ERelativeTransformSpace>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTransform	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform USceneComponent::GetSocketTransform(struct FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetSocketTransform");

	struct USceneComponent_GetSocketTransform_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<ERelativeTransformSpace> TransformSpace;			//Offset: 8 | ElementSize: 1
		struct FTransform ReturnValue;			//Offset: 16 | ElementSize: 48
	};
	USceneComponent_GetSocketTransform_Params params;
	params.InSocketName = InSocketName;
	params.TransformSpace = TransformSpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.GetUpVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::GetUpVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.GetUpVector");

	struct USceneComponent_GetUpVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_GetUpVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.IsAnySimulatingPhysics
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::IsAnySimulatingPhysics()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.IsAnySimulatingPhysics");

	struct USceneComponent_IsAnySimulatingPhysics_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_IsAnySimulatingPhysics_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.IsSimulatingPhysics
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::IsSimulatingPhysics(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.IsSimulatingPhysics");

	struct USceneComponent_IsSimulatingPhysics_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	USceneComponent_IsSimulatingPhysics_Params params;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.IsVisible
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::IsVisible()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.IsVisible");

	struct USceneComponent_IsVisible_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_IsVisible_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddLocalOffset
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddLocalOffset");

	struct USceneComponent_K2_AddLocalOffset_Params {
		struct FVector DeltaLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_AddLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddLocalRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddLocalRotation");

	struct USceneComponent_K2_AddLocalRotation_Params {
		struct FRotator DeltaRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_AddLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddLocalTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddLocalTransform");

	struct USceneComponent_K2_AddLocalTransform_Params {
		struct FTransform DeltaTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	USceneComponent_K2_AddLocalTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddRelativeLocation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddRelativeLocation");

	struct USceneComponent_K2_AddRelativeLocation_Params {
		struct FVector DeltaLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_AddRelativeLocation_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddRelativeRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddRelativeRotation");

	struct USceneComponent_K2_AddRelativeRotation_Params {
		struct FRotator DeltaRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_AddRelativeRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddWorldOffset
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddWorldOffset");

	struct USceneComponent_K2_AddWorldOffset_Params {
		struct FVector DeltaLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_AddWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddWorldRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddWorldRotation");

	struct USceneComponent_K2_AddWorldRotation_Params {
		struct FRotator DeltaRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_AddWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddWorldTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddWorldTransform");

	struct USceneComponent_K2_AddWorldTransform_Params {
		struct FTransform DeltaTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	USceneComponent_K2_AddWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AddWorldTransformKeepScale
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_AddWorldTransformKeepScale(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AddWorldTransformKeepScale");

	struct USceneComponent_K2_AddWorldTransformKeepScale_Params {
		struct FTransform DeltaTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	USceneComponent_K2_AddWorldTransformKeepScale_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AttachTo
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttachType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWeldSimulatedBodies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::K2_AttachTo(class USceneComponent* InParent, struct FName InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AttachTo");

	struct USceneComponent_K2_AttachTo_Params {
		class USceneComponent* InParent;			//Offset: 0 | ElementSize: 8
		struct FName InSocketName;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<EAttachLocation> AttachType;			//Offset: 16 | ElementSize: 1
		bool bWeldSimulatedBodies;			//Offset: 17 | ElementSize: 1
		bool ReturnValue;			//Offset: 18 | ElementSize: 1
	};
	USceneComponent_K2_AttachTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachType = AttachType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_AttachToComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Parent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaleRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWeldSimulatedBodies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::K2_AttachToComponent(class USceneComponent* Parent, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_AttachToComponent");

	struct USceneComponent_K2_AttachToComponent_Params {
		class USceneComponent* Parent;			//Offset: 0 | ElementSize: 8
		struct FName SocketName;			//Offset: 8 | ElementSize: 8
		EAttachmentRule LocationRule;			//Offset: 16 | ElementSize: 1
		EAttachmentRule RotationRule;			//Offset: 17 | ElementSize: 1
		EAttachmentRule ScaleRule;			//Offset: 18 | ElementSize: 1
		bool bWeldSimulatedBodies;			//Offset: 19 | ElementSize: 1
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	USceneComponent_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_DetachFromComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LocationRule	Type: EDetachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationRule	Type: EDetachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaleRule	Type: EDetachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bCallModify	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_DetachFromComponent");

	struct USceneComponent_K2_DetachFromComponent_Params {
		EDetachmentRule LocationRule;			//Offset: 0 | ElementSize: 1
		EDetachmentRule RotationRule;			//Offset: 1 | ElementSize: 1
		EDetachmentRule ScaleRule;			//Offset: 2 | ElementSize: 1
		bool bCallModify;			//Offset: 3 | ElementSize: 1
	};
	USceneComponent_K2_DetachFromComponent_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bCallModify = bCallModify;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_GetComponentLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::K2_GetComponentLocation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_GetComponentLocation");

	struct USceneComponent_K2_GetComponentLocation_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_K2_GetComponentLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_GetComponentRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator USceneComponent::K2_GetComponentRotation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_GetComponentRotation");

	struct USceneComponent_K2_GetComponentRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_K2_GetComponentRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_GetComponentScale
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USceneComponent::K2_GetComponentScale()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_GetComponentScale");

	struct USceneComponent_K2_GetComponentScale_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_K2_GetComponentScale_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_GetComponentToWorld
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FTransform	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform USceneComponent::K2_GetComponentToWorld()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_GetComponentToWorld");

	struct USceneComponent_K2_GetComponentToWorld_Params {
		struct FTransform ReturnValue;			//Offset: 0 | ElementSize: 48
	};
	USceneComponent_K2_GetComponentToWorld_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetRelativeLocation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetRelativeLocation(struct FVector NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetRelativeLocation");

	struct USceneComponent_K2_SetRelativeLocation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_SetRelativeLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation");

	struct USceneComponent_K2_SetRelativeLocationAndRotation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 12 | ElementSize: 12
		bool bSweep;			//Offset: 24 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 28 | ElementSize: 136
		bool bTeleport;			//Offset: 164 | ElementSize: 1
	};
	USceneComponent_K2_SetRelativeLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetRelativeRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetRelativeRotation");

	struct USceneComponent_K2_SetRelativeRotation_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_SetRelativeRotation_Params params;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetRelativeTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetRelativeTransform");

	struct USceneComponent_K2_SetRelativeTransform_Params {
		struct FTransform NewTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	USceneComponent_K2_SetRelativeTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetWorldLocation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetWorldLocation");

	struct USceneComponent_K2_SetWorldLocation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_SetWorldLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetWorldLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetWorldLocationAndRotation");

	struct USceneComponent_K2_SetWorldLocationAndRotation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 12 | ElementSize: 12
		bool bSweep;			//Offset: 24 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 28 | ElementSize: 136
		bool bTeleport;			//Offset: 164 | ElementSize: 1
	};
	USceneComponent_K2_SetWorldLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetWorldRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetWorldRotation");

	struct USceneComponent_K2_SetWorldRotation_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	USceneComponent_K2_SetWorldRotation_Params params;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.K2_SetWorldTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.K2_SetWorldTransform");

	struct USceneComponent_K2_SetWorldTransform_Params {
		struct FTransform NewTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	USceneComponent_K2_SetWorldTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.OnRep_AttachChildren
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void USceneComponent::OnRep_AttachChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.OnRep_AttachChildren");

	struct USceneComponent_OnRep_AttachChildren_Params {
	};
	USceneComponent_OnRep_AttachChildren_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.OnRep_AttachParent
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void USceneComponent::OnRep_AttachParent() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.OnRep_AttachParent");

	struct USceneComponent_OnRep_AttachParent_Params {
	};
	USceneComponent_OnRep_AttachParent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.OnRep_AttachSocketName
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void USceneComponent::OnRep_AttachSocketName() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.OnRep_AttachSocketName");

	struct USceneComponent_OnRep_AttachSocketName_Params {
	};
	USceneComponent_OnRep_AttachSocketName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.OnRep_Transform
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void USceneComponent::OnRep_Transform() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.OnRep_Transform");

	struct USceneComponent_OnRep_Transform_Params {
	};
	USceneComponent_OnRep_Transform_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.OnRep_Visibility
// Flags: Final, Native, Private
// Params:
// Name: OldValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::OnRep_Visibility(bool OldValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.OnRep_Visibility");

	struct USceneComponent_OnRep_Visibility_Params {
		bool OldValue;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_OnRep_Visibility_Params params;
	params.OldValue = OldValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.ResetRelativeTransform
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USceneComponent::ResetRelativeTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.ResetRelativeTransform");

	struct USceneComponent_ResetRelativeTransform_Params {
	};
	USceneComponent_ResetRelativeTransform_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetAbsolute
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewAbsoluteLocation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNewAbsoluteRotation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNewAbsoluteScale	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetAbsolute");

	struct USceneComponent_SetAbsolute_Params {
		bool bNewAbsoluteLocation;			//Offset: 0 | ElementSize: 1
		bool bNewAbsoluteRotation;			//Offset: 1 | ElementSize: 1
		bool bNewAbsoluteScale;			//Offset: 2 | ElementSize: 1
	};
	USceneComponent_SetAbsolute_Params params;
	params.bNewAbsoluteLocation = bNewAbsoluteLocation;
	params.bNewAbsoluteRotation = bNewAbsoluteRotation;
	params.bNewAbsoluteScale = bNewAbsoluteScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetHiddenInGame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewHidden	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPropagateToChildren	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetHiddenInGame");

	struct USceneComponent_SetHiddenInGame_Params {
		bool NewHidden;			//Offset: 0 | ElementSize: 1
		bool bPropagateToChildren;			//Offset: 1 | ElementSize: 1
	};
	USceneComponent_SetHiddenInGame_Params params;
	params.NewHidden = NewHidden;
	params.bPropagateToChildren = bPropagateToChildren;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetMobility
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewMobility	Type: TEnumAsByte<EComponentMobility>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetMobility(TEnumAsByte<EComponentMobility> NewMobility) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetMobility");

	struct USceneComponent_SetMobility_Params {
		TEnumAsByte<EComponentMobility> NewMobility;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_SetMobility_Params params;
	params.NewMobility = NewMobility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetRelativeScale3D
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewScale3D	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetRelativeScale3D(struct FVector NewScale3D) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetRelativeScale3D");

	struct USceneComponent_SetRelativeScale3D_Params {
		struct FVector NewScale3D;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_SetRelativeScale3D_Params params;
	params.NewScale3D = NewScale3D;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInShouldUpdatePhysicsVolume	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume");

	struct USceneComponent_SetShouldUpdatePhysicsVolume_Params {
		bool bInShouldUpdatePhysicsVolume;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_SetShouldUpdatePhysicsVolume_Params params;
	params.bInShouldUpdatePhysicsVolume = bInShouldUpdatePhysicsVolume;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewVisibility	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPropagateToChildren	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetVisibility");

	struct USceneComponent_SetVisibility_Params {
		bool bNewVisibility;			//Offset: 0 | ElementSize: 1
		bool bPropagateToChildren;			//Offset: 1 | ElementSize: 1
	};
	USceneComponent_SetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SetWorldScale3D
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewScale	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::SetWorldScale3D(struct FVector NewScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SetWorldScale3D");

	struct USceneComponent_SetWorldScale3D_Params {
		struct FVector NewScale;			//Offset: 0 | ElementSize: 12
	};
	USceneComponent_SetWorldScale3D_Params params;
	params.NewScale = NewScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SceneComponent.SnapTo
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USceneComponent::SnapTo(class USceneComponent* InParent, struct FName InSocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.SnapTo");

	struct USceneComponent_SnapTo_Params {
		class USceneComponent* InParent;			//Offset: 0 | ElementSize: 8
		struct FName InSocketName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	USceneComponent_SnapTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SceneComponent.ToggleVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bPropagateToChildren	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USceneComponent::ToggleVisibility(bool bPropagateToChildren) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneComponent.ToggleVisibility");

	struct USceneComponent_ToggleVisibility_Params {
		bool bPropagateToChildren;			//Offset: 0 | ElementSize: 1
	};
	USceneComponent_ToggleVisibility_Params params;
	params.bPropagateToChildren = bPropagateToChildren;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}