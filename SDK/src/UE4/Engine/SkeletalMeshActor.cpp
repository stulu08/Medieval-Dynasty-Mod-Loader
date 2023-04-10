#include "../SDK.h"
#include "SkeletalMeshActor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bShouldDoAnimNotifies
// Declaration: unsigned char bShouldDoAnimNotifies : 1
unsigned char ASkeletalMeshActor::M_GetbShouldDoAnimNotifies() const {
	return Read<unsigned char>((byte*)this + 552);
}
unsigned char* ASkeletalMeshActor::M_PtrGetbShouldDoAnimNotifies() {
	return reinterpret_cast<unsigned char*>((byte*)this + 552);
}
void ASkeletalMeshActor::M_SetbShouldDoAnimNotifies(const unsigned char& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of bWakeOnLevelStart
// Declaration: unsigned char bWakeOnLevelStart : 1
unsigned char ASkeletalMeshActor::M_GetbWakeOnLevelStart() const {
	return Read<unsigned char>((byte*)this + 552);
}
unsigned char* ASkeletalMeshActor::M_PtrGetbWakeOnLevelStart() {
	return reinterpret_cast<unsigned char*>((byte*)this + 552);
}
void ASkeletalMeshActor::M_SetbWakeOnLevelStart(const unsigned char& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of SkeletalMeshComponent
// Declaration: class USkeletalMeshComponent* SkeletalMeshComponent
class USkeletalMeshComponent* ASkeletalMeshActor::M_GetSkeletalMeshComponent() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 560);
}
class USkeletalMeshComponent** ASkeletalMeshActor::M_PtrGetSkeletalMeshComponent() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 560);
}
void ASkeletalMeshActor::M_SetSkeletalMeshComponent(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of ReplicatedMesh
// Declaration: class USkeletalMesh* ReplicatedMesh
class USkeletalMesh* ASkeletalMeshActor::M_GetReplicatedMesh() const {
	return Read<class USkeletalMesh*>((byte*)this + 568);
}
class USkeletalMesh** ASkeletalMeshActor::M_PtrGetReplicatedMesh() {
	return reinterpret_cast<class USkeletalMesh**>((byte*)this + 568);
}
void ASkeletalMeshActor::M_SetReplicatedMesh(const class USkeletalMesh*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of ReplicatedPhysAsset
// Declaration: class UPhysicsAsset* ReplicatedPhysAsset
class UPhysicsAsset* ASkeletalMeshActor::M_GetReplicatedPhysAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 576);
}
class UPhysicsAsset** ASkeletalMeshActor::M_PtrGetReplicatedPhysAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 576);
}
void ASkeletalMeshActor::M_SetReplicatedPhysAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of ReplicatedMaterial0
// Declaration: class UMaterialInterface* ReplicatedMaterial0
class UMaterialInterface* ASkeletalMeshActor::M_GetReplicatedMaterial0() const {
	return Read<class UMaterialInterface*>((byte*)this + 584);
}
class UMaterialInterface** ASkeletalMeshActor::M_PtrGetReplicatedMaterial0() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 584);
}
void ASkeletalMeshActor::M_SetReplicatedMaterial0(const class UMaterialInterface*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of ReplicatedMaterial1
// Declaration: class UMaterialInterface* ReplicatedMaterial1
class UMaterialInterface* ASkeletalMeshActor::M_GetReplicatedMaterial1() const {
	return Read<class UMaterialInterface*>((byte*)this + 592);
}
class UMaterialInterface** ASkeletalMeshActor::M_PtrGetReplicatedMaterial1() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 592);
}
void ASkeletalMeshActor::M_SetReplicatedMaterial1(const class UMaterialInterface*& value) {
	Write((byte*)this + 592, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void ASkeletalMeshActor::OnRep_ReplicatedMaterial0() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0");

	struct ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Params {
	};
	ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void ASkeletalMeshActor::OnRep_ReplicatedMaterial1() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1");

	struct ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Params {
	};
	ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void ASkeletalMeshActor::OnRep_ReplicatedMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh");

	struct ASkeletalMeshActor_OnRep_ReplicatedMesh_Params {
	};
	ASkeletalMeshActor_OnRep_ReplicatedMesh_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void ASkeletalMeshActor::OnRep_ReplicatedPhysAsset() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset");

	struct ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Params {
	};
	ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}