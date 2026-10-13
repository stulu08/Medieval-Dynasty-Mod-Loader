#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.Skeleton
// Super: Class CoreUObject.Object
// Size: 912
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USkeleton : public UObject {
public:
#pragma region Members
	//TArray<struct FBoneNode>	BoneTree;		//Offset: 56	Size: 16	Flags: Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
	TArray<struct FBoneNode> M_GetBoneTree() const;
	TArray<struct FBoneNode>* M_PtrGetBoneTree();
	void M_SetBoneTree(const TArray<struct FBoneNode>& value);

	//TArray<struct FTransform>	RefLocalPoses;		//Offset: 72	Size: 16	Flags: ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
	TArray<struct FTransform> M_GetRefLocalPoses() const;
	TArray<struct FTransform>* M_PtrGetRefLocalPoses();
	void M_SetRefLocalPoses(const TArray<struct FTransform>& value);

	//struct FGuid	VirtualBoneGuid;		//Offset: 368	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FGuid M_GetVirtualBoneGuid() const;
	struct FGuid* M_PtrGetVirtualBoneGuid();
	void M_SetVirtualBoneGuid(const struct FGuid& value);

	//TArray<struct FVirtualBone>	VirtualBones;		//Offset: 384	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FVirtualBone> M_GetVirtualBones() const;
	TArray<struct FVirtualBone>* M_PtrGetVirtualBones();
	void M_SetVirtualBones(const TArray<struct FVirtualBone>& value);

	//TArray<class USkeletalMeshSocket*>	Sockets;		//Offset: 400	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class USkeletalMeshSocket*> M_GetSockets() const;
	TArray<class USkeletalMeshSocket*>* M_PtrGetSockets();
	void M_SetSockets(const TArray<class USkeletalMeshSocket*>& value);

	//struct FSmartNameContainer	SmartNames;		//Offset: 496	Size: 80	Flags: Protected, NativeAccessSpecifierProtected
	struct FSmartNameContainer M_GetSmartNames() const;
	struct FSmartNameContainer* M_PtrGetSmartNames();
	void M_SetSmartNames(const struct FSmartNameContainer& value);

	//TArray<class UBlendProfile*>	BlendProfiles;		//Offset: 624	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<class UBlendProfile*> M_GetBlendProfiles() const;
	TArray<class UBlendProfile*>* M_PtrGetBlendProfiles();
	void M_SetBlendProfiles(const TArray<class UBlendProfile*>& value);

	//TArray<struct FAnimSlotGroup>	SlotGroups;		//Offset: 640	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FAnimSlotGroup> M_GetSlotGroups() const;
	TArray<struct FAnimSlotGroup>* M_PtrGetSlotGroups();
	void M_SetSlotGroups(const TArray<struct FAnimSlotGroup>& value);

	//TArray<class UAssetUserData*>	AssetUserData;		//Offset: 896	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	TArray<class UAssetUserData*> M_GetAssetUserData() const;
	TArray<class UAssetUserData*>* M_PtrGetAssetUserData();
	void M_SetAssetUserData(const TArray<class UAssetUserData*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};