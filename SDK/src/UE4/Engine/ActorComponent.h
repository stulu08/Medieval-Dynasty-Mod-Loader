#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.ActorComponent
// Super: Class CoreUObject.Object
// Size: 176
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UActorComponent : public UObject {
public:
#pragma region Members
	//struct FActorComponentTickFunction	PrimaryComponentTick;		//Offset: 48	Size: 48	Flags: Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	struct FActorComponentTickFunction M_GetPrimaryComponentTick() const;
	struct FActorComponentTickFunction* M_PtrGetPrimaryComponentTick();
	void M_SetPrimaryComponentTick(const struct FActorComponentTickFunction& value);

	//TArray<struct FName>	ComponentTags;		//Offset: 96	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FName> M_GetComponentTags() const;
	TArray<struct FName>* M_PtrGetComponentTags();
	void M_SetComponentTags(const TArray<struct FName>& value);

	//TArray<class UAssetUserData*>	AssetUserData;		//Offset: 112	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	TArray<class UAssetUserData*> M_GetAssetUserData() const;
	TArray<class UAssetUserData*>* M_PtrGetAssetUserData();
	void M_SetAssetUserData(const TArray<class UAssetUserData*>& value);

	//int32_t	UCSSerializationIndex;		//Offset: 132	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetUCSSerializationIndex() const;
	int32_t* M_PtrGetUCSSerializationIndex();
	void M_SetUCSSerializationIndex(const int32_t& value);

	//unsigned char	bNetAddressable : 1;		//Offset: 136	Size: 1	Flags: NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNetAddressable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNetAddressable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNetAddressable(const unsigned char& value);

	//unsigned char	bReplicates : 1;		//Offset: 136	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReplicates() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReplicates();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReplicates(const unsigned char& value);

	//unsigned char	bAutoActivate : 1;		//Offset: 137	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAutoActivate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAutoActivate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAutoActivate(const unsigned char& value);

	//unsigned char	bIsActive : 1;		//Offset: 138	Size: 1	Flags: Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsActive() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsActive();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsActive(const unsigned char& value);

	//unsigned char	bEditableWhenInherited : 1;		//Offset: 138	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEditableWhenInherited() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEditableWhenInherited();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEditableWhenInherited(const unsigned char& value);

	//unsigned char	bCanEverAffectNavigation : 1;		//Offset: 138	Size: 1	Flags: Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCanEverAffectNavigation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCanEverAffectNavigation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCanEverAffectNavigation(const unsigned char& value);

	//unsigned char	bIsEditorOnly : 1;		//Offset: 138	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsEditorOnly() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsEditorOnly();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsEditorOnly(const unsigned char& value);

	//EComponentCreationMethod	CreationMethod;		//Offset: 140	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EComponentCreationMethod M_GetCreationMethod() const;
	EComponentCreationMethod* M_PtrGetCreationMethod();
	void M_SetCreationMethod(const EComponentCreationMethod& value);

	//TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>	OnComponentActivated;		//Offset: 141	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature> M_GetOnComponentActivated() const;
	TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>* M_PtrGetOnComponentActivated();
	void M_SetOnComponentActivated(const TAssetPtr<class FActorComponentActivatedSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>	OnComponentDeactivated;		//Offset: 142	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature> M_GetOnComponentDeactivated() const;
	TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>* M_PtrGetOnComponentDeactivated();
	void M_SetOnComponentDeactivated(const TAssetPtr<class FActorComponentDeactivateSignature__DelegateSignature>& value);

	//TArray<struct FSimpleMemberReference>	UCSModifiedProperties;		//Offset: 144	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FSimpleMemberReference> M_GetUCSModifiedProperties() const;
	TArray<struct FSimpleMemberReference>* M_PtrGetUCSModifiedProperties();
	void M_SetUCSModifiedProperties(const TArray<struct FSimpleMemberReference>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}

#pragma region Functions
	void Activate(bool bReset);

	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);

	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);

	bool ComponentHasTag(struct FName Tag)/* const*/;

	void Deactivate();

	float GetComponentTickInterval()/* const*/;

	class AActor* GetOwner()/* const*/;

	bool IsActive()/* const*/;

	bool IsBeingDestroyed()/* const*/;

	bool IsComponentTickEnabled()/* const*/;

	void K2_DestroyComponent(class UObject* Object);

	void OnRep_IsActive();

	void ReceiveBeginPlay();

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void ReceiveTick(float DeltaSeconds);

	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);

	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);

	void SetActive(bool bNewActive, bool bReset);

	void SetAutoActivate(bool bNewAutoActivate);

	void SetComponentTickEnabled(bool bEnabled);

	void SetComponentTickInterval(float TickInterval);

	void SetComponentTickIntervalAndCooldown(float TickInterval);

	void SetIsReplicated(bool ShouldReplicate);

	void SetTickableWhenPaused(bool bTickableWhenPaused);

	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);

	void ToggleActive();

#pragma endregion
};
};