#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.SkeletalMeshActor
// Super: Class Engine.Actor
// Size: 680
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ASkeletalMeshActor : public AActor {
public:
#pragma region Members
	//unsigned char	bShouldDoAnimNotifies : 1;		//Offset: 552	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShouldDoAnimNotifies() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShouldDoAnimNotifies();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShouldDoAnimNotifies(const unsigned char& value);

	//unsigned char	bWakeOnLevelStart : 1;		//Offset: 552	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbWakeOnLevelStart() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbWakeOnLevelStart();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbWakeOnLevelStart(const unsigned char& value);

	//class USkeletalMeshComponent*	SkeletalMeshComponent;		//Offset: 560	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USkeletalMeshComponent* M_GetSkeletalMeshComponent() const;
	class USkeletalMeshComponent** M_PtrGetSkeletalMeshComponent();
	void M_SetSkeletalMeshComponent(const class USkeletalMeshComponent*& value);

	//class USkeletalMesh*	ReplicatedMesh;		//Offset: 568	Size: 8	Flags: Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USkeletalMesh* M_GetReplicatedMesh() const;
	class USkeletalMesh** M_PtrGetReplicatedMesh();
	void M_SetReplicatedMesh(const class USkeletalMesh*& value);

	//class UPhysicsAsset*	ReplicatedPhysAsset;		//Offset: 576	Size: 8	Flags: Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicsAsset* M_GetReplicatedPhysAsset() const;
	class UPhysicsAsset** M_PtrGetReplicatedPhysAsset();
	void M_SetReplicatedPhysAsset(const class UPhysicsAsset*& value);

	//class UMaterialInterface*	ReplicatedMaterial0;		//Offset: 584	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMaterialInterface* M_GetReplicatedMaterial0() const;
	class UMaterialInterface** M_PtrGetReplicatedMaterial0();
	void M_SetReplicatedMaterial0(const class UMaterialInterface*& value);

	//class UMaterialInterface*	ReplicatedMaterial1;		//Offset: 592	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMaterialInterface* M_GetReplicatedMaterial1() const;
	class UMaterialInterface** M_PtrGetReplicatedMaterial1();
	void M_SetReplicatedMaterial1(const class UMaterialInterface*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}

#pragma region Functions
	void OnRep_ReplicatedMaterial0();

	void OnRep_ReplicatedMaterial1();

	void OnRep_ReplicatedMesh();

	void OnRep_ReplicatedPhysAsset();

#pragma endregion
};
};