#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Engine.SceneComponent
// Super: Class Engine.ActorComponent
// Size: 512
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class USceneComponent : public UActorComponent {
public:
#pragma region Members
	//TWeakObjectPtr<class APhysicsVolume>	PhysicsVolume;		//Offset: 184	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TWeakObjectPtr<class APhysicsVolume> M_GetPhysicsVolume() const;
	TWeakObjectPtr<class APhysicsVolume>* M_PtrGetPhysicsVolume();
	void M_SetPhysicsVolume(const TWeakObjectPtr<class APhysicsVolume>& value);

	//class USceneComponent*	AttachParent;		//Offset: 192	Size: 8	Flags: ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USceneComponent* M_GetAttachParent() const;
	class USceneComponent** M_PtrGetAttachParent();
	void M_SetAttachParent(const class USceneComponent*& value);

	//struct FName	AttachSocketName;		//Offset: 200	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FName M_GetAttachSocketName() const;
	struct FName* M_PtrGetAttachSocketName();
	void M_SetAttachSocketName(const struct FName& value);

	//TArray<class USceneComponent*>	AttachChildren;		//Offset: 208	Size: 16	Flags: ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class USceneComponent*> M_GetAttachChildren() const;
	TArray<class USceneComponent*>* M_PtrGetAttachChildren();
	void M_SetAttachChildren(const TArray<class USceneComponent*>& value);

	//TArray<class USceneComponent*>	ClientAttachedChildren;		//Offset: 224	Size: 16	Flags: ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class USceneComponent*> M_GetClientAttachedChildren() const;
	TArray<class USceneComponent*>* M_PtrGetClientAttachedChildren();
	void M_SetClientAttachedChildren(const TArray<class USceneComponent*>& value);

	//struct FVector	RelativeLocation;		//Offset: 284	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector M_GetRelativeLocation() const;
	struct FVector* M_PtrGetRelativeLocation();
	void M_SetRelativeLocation(const struct FVector& value);

	//struct FRotator	RelativeRotation;		//Offset: 296	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
	struct FRotator M_GetRelativeRotation() const;
	struct FRotator* M_PtrGetRelativeRotation();
	void M_SetRelativeRotation(const struct FRotator& value);

	//struct FVector	RelativeScale3D;		//Offset: 308	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector M_GetRelativeScale3D() const;
	struct FVector* M_PtrGetRelativeScale3D();
	void M_SetRelativeScale3D(const struct FVector& value);

	//struct FVector	ComponentVelocity;		//Offset: 320	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetComponentVelocity() const;
	struct FVector* M_PtrGetComponentVelocity();
	void M_SetComponentVelocity(const struct FVector& value);

	//unsigned char	bComponentToWorldUpdated : 1;		//Offset: 332	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbComponentToWorldUpdated() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbComponentToWorldUpdated();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbComponentToWorldUpdated(const unsigned char& value);

	//unsigned char	bAbsoluteLocation : 1;		//Offset: 332	Size: 1	Flags: Edit, BlueprintVisible, Net, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAbsoluteLocation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAbsoluteLocation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAbsoluteLocation(const unsigned char& value);

	//unsigned char	bAbsoluteRotation : 1;		//Offset: 332	Size: 1	Flags: Edit, BlueprintVisible, Net, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAbsoluteRotation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAbsoluteRotation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAbsoluteRotation(const unsigned char& value);

	//unsigned char	bAbsoluteScale : 1;		//Offset: 332	Size: 1	Flags: Edit, BlueprintVisible, Net, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAbsoluteScale() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAbsoluteScale();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAbsoluteScale(const unsigned char& value);

	//unsigned char	bVisible : 1;		//Offset: 332	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbVisible() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbVisible();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbVisible(const unsigned char& value);

	//unsigned char	bShouldBeAttached : 1;		//Offset: 332	Size: 1	Flags: Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldBeAttached() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldBeAttached();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldBeAttached(const unsigned char& value);

	//unsigned char	bShouldSnapLocationWhenAttached : 1;		//Offset: 332	Size: 1	Flags: Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldSnapLocationWhenAttached() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldSnapLocationWhenAttached();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldSnapLocationWhenAttached(const unsigned char& value);

	//unsigned char	bShouldSnapRotationWhenAttached : 1;		//Offset: 333	Size: 1	Flags: Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldSnapRotationWhenAttached() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldSnapRotationWhenAttached();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldSnapRotationWhenAttached(const unsigned char& value);

	//unsigned char	bShouldUpdatePhysicsVolume : 1;		//Offset: 333	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldUpdatePhysicsVolume() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldUpdatePhysicsVolume();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldUpdatePhysicsVolume(const unsigned char& value);

	//unsigned char	bHiddenInGame : 1;		//Offset: 333	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHiddenInGame() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHiddenInGame();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHiddenInGame(const unsigned char& value);

	//unsigned char	bBoundsChangeTriggersStreamingDataRebuild : 1;		//Offset: 333	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbBoundsChangeTriggersStreamingDataRebuild() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbBoundsChangeTriggersStreamingDataRebuild();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbBoundsChangeTriggersStreamingDataRebuild(const unsigned char& value);

	//unsigned char	bUseAttachParentBound : 1;		//Offset: 333	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseAttachParentBound() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseAttachParentBound();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseAttachParentBound(const unsigned char& value);

	//TEnumAsByte<EComponentMobility>	Mobility;		//Offset: 335	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EComponentMobility> M_GetMobility() const;
	TEnumAsByte<EComponentMobility>* M_PtrGetMobility();
	void M_SetMobility(const TEnumAsByte<EComponentMobility>& value);

	//TEnumAsByte<EDetailMode>	DetailMode;		//Offset: 336	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EDetailMode> M_GetDetailMode() const;
	TEnumAsByte<EDetailMode>* M_PtrGetDetailMode();
	void M_SetDetailMode(const TEnumAsByte<EDetailMode>& value);

	//TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>	PhysicsVolumeChangedDelegate;		//Offset: 337	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature> M_GetPhysicsVolumeChangedDelegate() const;
	TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>* M_PtrGetPhysicsVolumeChangedDelegate();
	void M_SetPhysicsVolumeChangedDelegate(const TAssetPtr<class FPhysicsVolumeChanged__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}

#pragma region Functions
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);

	bool DoesSocketExist(struct FName InSocketName)/* const*/;

	TArray<struct FName> GetAllSocketNames()/* const*/;

	class USceneComponent* GetAttachParent()/* const*/;

	struct FName GetAttachSocketName()/* const*/;

	class USceneComponent* GetChildComponent(int32_t ChildIndex)/* const*/;

	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children)/* const*/;

	struct FVector GetComponentVelocity()/* const*/;

	struct FVector GetForwardVector()/* const*/;

	int32_t GetNumChildrenComponents()/* const*/;

	void GetParentComponents(TArray<class USceneComponent*>* Parents)/* const*/;

	class APhysicsVolume* GetPhysicsVolume()/* const*/;

	struct FTransform GetRelativeTransform()/* const*/;

	struct FVector GetRightVector()/* const*/;

	bool GetShouldUpdatePhysicsVolume()/* const*/;

	struct FVector GetSocketLocation(struct FName InSocketName)/* const*/;

	struct FQuat GetSocketQuaternion(struct FName InSocketName)/* const*/;

	struct FRotator GetSocketRotation(struct FName InSocketName)/* const*/;

	struct FTransform GetSocketTransform(struct FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace)/* const*/;

	struct FVector GetUpVector()/* const*/;

	bool IsAnySimulatingPhysics()/* const*/;

	bool IsSimulatingPhysics(struct FName BoneName)/* const*/;

	bool IsVisible()/* const*/;

	void K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddWorldTransformKeepScale(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	bool K2_AttachTo(class USceneComponent* InParent, struct FName InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);

	bool K2_AttachToComponent(class USceneComponent* Parent, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);

	void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);

	struct FVector K2_GetComponentLocation()/* const*/;

	struct FRotator K2_GetComponentRotation()/* const*/;

	struct FVector K2_GetComponentScale()/* const*/;

	struct FTransform K2_GetComponentToWorld()/* const*/;

	void K2_SetRelativeLocation(struct FVector NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetWorldLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void OnRep_AttachChildren();

	void OnRep_AttachParent();

	void OnRep_AttachSocketName();

	void OnRep_Transform();

	void OnRep_Visibility(bool OldValue);

	void ResetRelativeTransform();

	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);

	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);

	void SetMobility(TEnumAsByte<EComponentMobility> NewMobility);

	void SetRelativeScale3D(struct FVector NewScale3D);

	void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);

	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);

	void SetWorldScale3D(struct FVector NewScale);

	bool SnapTo(class USceneComponent* InParent, struct FName InSocketName);

	void ToggleVisibility(bool bPropagateToChildren);

#pragma endregion
};
};