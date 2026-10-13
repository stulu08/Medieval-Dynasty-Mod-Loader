#include "../SDK.h"
#include "Skeleton.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BoneTree
// Declaration: TArray<struct FBoneNode> BoneTree
TArray<struct FBoneNode> USkeleton::M_GetBoneTree() const {
	return Read<TArray<struct FBoneNode>>((byte*)this + 56);
}
TArray<struct FBoneNode>* USkeleton::M_PtrGetBoneTree() {
	return reinterpret_cast<TArray<struct FBoneNode>*>((byte*)this + 56);
}
void USkeleton::M_SetBoneTree(const TArray<struct FBoneNode>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of RefLocalPoses
// Declaration: TArray<struct FTransform> RefLocalPoses
TArray<struct FTransform> USkeleton::M_GetRefLocalPoses() const {
	return Read<TArray<struct FTransform>>((byte*)this + 72);
}
TArray<struct FTransform>* USkeleton::M_PtrGetRefLocalPoses() {
	return reinterpret_cast<TArray<struct FTransform>*>((byte*)this + 72);
}
void USkeleton::M_SetRefLocalPoses(const TArray<struct FTransform>& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of VirtualBoneGuid
// Declaration: struct FGuid VirtualBoneGuid
struct FGuid USkeleton::M_GetVirtualBoneGuid() const {
	return Read<struct FGuid>((byte*)this + 368);
}
struct FGuid* USkeleton::M_PtrGetVirtualBoneGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 368);
}
void USkeleton::M_SetVirtualBoneGuid(const struct FGuid& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of VirtualBones
// Declaration: TArray<struct FVirtualBone> VirtualBones
TArray<struct FVirtualBone> USkeleton::M_GetVirtualBones() const {
	return Read<TArray<struct FVirtualBone>>((byte*)this + 384);
}
TArray<struct FVirtualBone>* USkeleton::M_PtrGetVirtualBones() {
	return reinterpret_cast<TArray<struct FVirtualBone>*>((byte*)this + 384);
}
void USkeleton::M_SetVirtualBones(const TArray<struct FVirtualBone>& value) {
	Write((byte*)this + 384, value);
}
// Member Getter and Setter of Sockets
// Declaration: TArray<class USkeletalMeshSocket*> Sockets
TArray<class USkeletalMeshSocket*> USkeleton::M_GetSockets() const {
	return Read<TArray<class USkeletalMeshSocket*>>((byte*)this + 400);
}
TArray<class USkeletalMeshSocket*>* USkeleton::M_PtrGetSockets() {
	return reinterpret_cast<TArray<class USkeletalMeshSocket*>*>((byte*)this + 400);
}
void USkeleton::M_SetSockets(const TArray<class USkeletalMeshSocket*>& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of SmartNames
// Declaration: struct FSmartNameContainer SmartNames
struct FSmartNameContainer USkeleton::M_GetSmartNames() const {
	return Read<struct FSmartNameContainer>((byte*)this + 496);
}
struct FSmartNameContainer* USkeleton::M_PtrGetSmartNames() {
	return reinterpret_cast<struct FSmartNameContainer*>((byte*)this + 496);
}
void USkeleton::M_SetSmartNames(const struct FSmartNameContainer& value) {
	Write((byte*)this + 496, value);
}
// Member Getter and Setter of BlendProfiles
// Declaration: TArray<class UBlendProfile*> BlendProfiles
TArray<class UBlendProfile*> USkeleton::M_GetBlendProfiles() const {
	return Read<TArray<class UBlendProfile*>>((byte*)this + 624);
}
TArray<class UBlendProfile*>* USkeleton::M_PtrGetBlendProfiles() {
	return reinterpret_cast<TArray<class UBlendProfile*>*>((byte*)this + 624);
}
void USkeleton::M_SetBlendProfiles(const TArray<class UBlendProfile*>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of SlotGroups
// Declaration: TArray<struct FAnimSlotGroup> SlotGroups
TArray<struct FAnimSlotGroup> USkeleton::M_GetSlotGroups() const {
	return Read<TArray<struct FAnimSlotGroup>>((byte*)this + 640);
}
TArray<struct FAnimSlotGroup>* USkeleton::M_PtrGetSlotGroups() {
	return reinterpret_cast<TArray<struct FAnimSlotGroup>*>((byte*)this + 640);
}
void USkeleton::M_SetSlotGroups(const TArray<struct FAnimSlotGroup>& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of AssetUserData
// Declaration: TArray<class UAssetUserData*> AssetUserData
TArray<class UAssetUserData*> USkeleton::M_GetAssetUserData() const {
	return Read<TArray<class UAssetUserData*>>((byte*)this + 896);
}
TArray<class UAssetUserData*>* USkeleton::M_PtrGetAssetUserData() {
	return reinterpret_cast<TArray<class UAssetUserData*>*>((byte*)this + 896);
}
void USkeleton::M_SetAssetUserData(const TArray<class UAssetUserData*>& value) {
	Write((byte*)this + 896, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}