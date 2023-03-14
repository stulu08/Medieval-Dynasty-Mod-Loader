#pragma once
#include "Structs.h"
#include "Engine/StreamableRenderAsset.h"
/////////////////////////////////////////////
// Class Engine.SkeletalMesh
// Super: Class Engine.StreamableRenderAsset
// Size: 928
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class USkeletalMesh : public UStreamableRenderAsset {
public:
#pragma region Members
	//class USkeleton*	Skeleton;		//Offset: 128	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USkeleton* M_GetSkeleton() const;
	class USkeleton** M_PtrGetSkeleton();
	void M_SetSkeleton(const class USkeleton*& value);

	//struct FBoxSphereBounds	ImportedBounds;		//Offset: 136	Size: 28	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	struct FBoxSphereBounds M_GetImportedBounds() const;
	struct FBoxSphereBounds* M_PtrGetImportedBounds();
	void M_SetImportedBounds(const struct FBoxSphereBounds& value);

	//struct FBoxSphereBounds	ExtendedBounds;		//Offset: 164	Size: 28	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	struct FBoxSphereBounds M_GetExtendedBounds() const;
	struct FBoxSphereBounds* M_PtrGetExtendedBounds();
	void M_SetExtendedBounds(const struct FBoxSphereBounds& value);

	//struct FVector	PositiveBoundsExtension;		//Offset: 192	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetPositiveBoundsExtension() const;
	struct FVector* M_PtrGetPositiveBoundsExtension();
	void M_SetPositiveBoundsExtension(const struct FVector& value);

	//struct FVector	NegativeBoundsExtension;		//Offset: 204	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetNegativeBoundsExtension() const;
	struct FVector* M_PtrGetNegativeBoundsExtension();
	void M_SetNegativeBoundsExtension(const struct FVector& value);

	//TArray<struct FSkeletalMaterial>	Materials;		//Offset: 216	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
	TArray<struct FSkeletalMaterial> M_GetMaterials() const;
	TArray<struct FSkeletalMaterial>* M_PtrGetMaterials();
	void M_SetMaterials(const TArray<struct FSkeletalMaterial>& value);

	//TArray<struct FBoneMirrorInfo>	SkelMirrorTable;		//Offset: 232	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FBoneMirrorInfo> M_GetSkelMirrorTable() const;
	TArray<struct FBoneMirrorInfo>* M_PtrGetSkelMirrorTable();
	void M_SetSkelMirrorTable(const TArray<struct FBoneMirrorInfo>& value);

	//TArray<struct FSkeletalMeshLODInfo>	LODInfo;		//Offset: 248	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FSkeletalMeshLODInfo> M_GetLODInfo() const;
	TArray<struct FSkeletalMeshLODInfo>* M_PtrGetLODInfo();
	void M_SetLODInfo(const TArray<struct FSkeletalMeshLODInfo>& value);

	//struct FPerPlatformInt	MinLOD;		//Offset: 344	Size: 4	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FPerPlatformInt M_GetMinLOD() const;
	struct FPerPlatformInt* M_PtrGetMinLOD();
	void M_SetMinLOD(const struct FPerPlatformInt& value);

	//struct FPerPlatformBool	DisableBelowMinLodStripping;		//Offset: 348	Size: 1	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FPerPlatformBool M_GetDisableBelowMinLodStripping() const;
	struct FPerPlatformBool* M_PtrGetDisableBelowMinLodStripping();
	void M_SetDisableBelowMinLodStripping(const struct FPerPlatformBool& value);

	//TEnumAsByte<EAxis>	SkelMirrorAxis;		//Offset: 349	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EAxis> M_GetSkelMirrorAxis() const;
	TEnumAsByte<EAxis>* M_PtrGetSkelMirrorAxis();
	void M_SetSkelMirrorAxis(const TEnumAsByte<EAxis>& value);

	//TEnumAsByte<EAxis>	SkelMirrorFlipAxis;		//Offset: 350	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EAxis> M_GetSkelMirrorFlipAxis() const;
	TEnumAsByte<EAxis>* M_PtrGetSkelMirrorFlipAxis();
	void M_SetSkelMirrorFlipAxis(const TEnumAsByte<EAxis>& value);

	//unsigned char	bUseFullPrecisionUVs : 1;		//Offset: 351	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseFullPrecisionUVs() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseFullPrecisionUVs();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseFullPrecisionUVs(const unsigned char& value);

	//unsigned char	bUseHighPrecisionTangentBasis : 1;		//Offset: 351	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseHighPrecisionTangentBasis() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseHighPrecisionTangentBasis();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseHighPrecisionTangentBasis(const unsigned char& value);

	//unsigned char	bHasBeenSimplified : 1;		//Offset: 351	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasBeenSimplified() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasBeenSimplified();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasBeenSimplified(const unsigned char& value);

	//unsigned char	bHasVertexColors : 1;		//Offset: 351	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasVertexColors() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasVertexColors();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasVertexColors(const unsigned char& value);

	//unsigned char	bEnablePerPolyCollision : 1;		//Offset: 351	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnablePerPolyCollision() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnablePerPolyCollision();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnablePerPolyCollision(const unsigned char& value);

	//class UBodySetup*	BodySetup;		//Offset: 352	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBodySetup* M_GetBodySetup() const;
	class UBodySetup** M_PtrGetBodySetup();
	void M_SetBodySetup(const class UBodySetup*& value);

	//class UPhysicsAsset*	PhysicsAsset;		//Offset: 360	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicsAsset* M_GetPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetPhysicsAsset();
	void M_SetPhysicsAsset(const class UPhysicsAsset*& value);

	//class UPhysicsAsset*	ShadowPhysicsAsset;		//Offset: 368	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicsAsset* M_GetShadowPhysicsAsset() const;
	class UPhysicsAsset** M_PtrGetShadowPhysicsAsset();
	void M_SetShadowPhysicsAsset(const class UPhysicsAsset*& value);

	//TArray<class UNodeMappingContainer*>	NodeMappingData;		//Offset: 376	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UNodeMappingContainer*> M_GetNodeMappingData() const;
	TArray<class UNodeMappingContainer*>* M_PtrGetNodeMappingData();
	void M_SetNodeMappingData(const TArray<class UNodeMappingContainer*>& value);

	//unsigned char	bSupportRayTracing : 1;		//Offset: 392	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSupportRayTracing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSupportRayTracing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSupportRayTracing(const unsigned char& value);

	//TArray<class UMorphTarget*>	MorphTargets;		//Offset: 400	Size: 16	Flags: BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UMorphTarget*> M_GetMorphTargets() const;
	TArray<class UMorphTarget*>* M_PtrGetMorphTargets();
	void M_SetMorphTargets(const TArray<class UMorphTarget*>& value);

	//class UAnimInstance*	PostProcessAnimBlueprint;		//Offset: 792	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UAnimInstance* M_GetPostProcessAnimBlueprint() const;
	class UAnimInstance** M_PtrGetPostProcessAnimBlueprint();
	void M_SetPostProcessAnimBlueprint(const class UAnimInstance*& value);

	//TArray<class UClothingAssetBase*>	MeshClothingAssets;		//Offset: 800	Size: 16	Flags: Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UClothingAssetBase*> M_GetMeshClothingAssets() const;
	TArray<class UClothingAssetBase*>* M_PtrGetMeshClothingAssets();
	void M_SetMeshClothingAssets(const TArray<class UClothingAssetBase*>& value);

	//struct FSkeletalMeshSamplingInfo	SamplingInfo;		//Offset: 816	Size: 48	Flags: Edit, Protected, NativeAccessSpecifierProtected
	struct FSkeletalMeshSamplingInfo M_GetSamplingInfo() const;
	struct FSkeletalMeshSamplingInfo* M_PtrGetSamplingInfo();
	void M_SetSamplingInfo(const struct FSkeletalMeshSamplingInfo& value);

	//TArray<class UAssetUserData*>	AssetUserData;		//Offset: 864	Size: 16	Flags: Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
	TArray<class UAssetUserData*> M_GetAssetUserData() const;
	TArray<class UAssetUserData*>* M_PtrGetAssetUserData();
	void M_SetAssetUserData(const TArray<class UAssetUserData*>& value);

	//TArray<class USkeletalMeshSocket*>	Sockets;		//Offset: 880	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<class USkeletalMeshSocket*> M_GetSockets() const;
	TArray<class USkeletalMeshSocket*>* M_PtrGetSockets();
	void M_SetSockets(const TArray<class USkeletalMeshSocket*>& value);

	//TArray<struct FSkinWeightProfileInfo>	SkinWeightProfiles;		//Offset: 912	Size: 16	Flags: Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FSkinWeightProfileInfo> M_GetSkinWeightProfiles() const;
	TArray<struct FSkinWeightProfileInfo>* M_PtrGetSkinWeightProfiles();
	void M_SetSkinWeightProfiles(const TArray<struct FSkinWeightProfileInfo>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}

#pragma region Functions
	class USkeletalMeshSocket* FindSocket(struct FName InSocketName)/* const*/;

	class USkeletalMeshSocket* FindSocketAndIndex(struct FName InSocketName, int32_t* OutIndex)/* const*/;

	class USkeletalMeshSocket* FindSocketInfo(struct FName InSocketName, struct FTransform* OutTransform, int32_t* OutBoneIndex, int32_t* OutIndex)/* const*/;

	struct FBoxSphereBounds GetBounds()/* const*/;

	TAssetPtr<class UObject> GetDefaultAnimatingRig()/* const*/;

	struct FBoxSphereBounds GetImportedBounds()/* const*/;

	class USkeletalMeshLODSettings* GetLODSettings()/* const*/;

	TArray<struct FSkeletalMaterial> GetMaterials()/* const*/;

	TArray<class UClothingAssetBase*> GetMeshClothingAssets()/* const*/;

	TArray<class UMorphTarget*> GetMorphTargets()/* const*/;

	class UNodeMappingContainer* GetNodeMappingContainer(class UBlueprint* SourceAsset)/* const*/;

	TArray<class UNodeMappingContainer*> GetNodeMappingData()/* const*/;

	class UPhysicsAsset* GetPhysicsAsset()/* const*/;

	class UPhysicsAsset* GetShadowPhysicsAsset()/* const*/;

	class USkeleton* GetSkeleton()/* const*/;

	class USkeletalMeshSocket* GetSocketByIndex(int32_t Index)/* const*/;

	bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections)/* const*/;

	TArray<struct FString> K2_GetAllMorphTargetNames()/* const*/;

	int32_t NumSockets()/* const*/;

	void SetDefaultAnimatingRig(TAssetPtr<class UObject> InAnimatingRig);

	void SetLODSettings(class USkeletalMeshLODSettings* InLODSettings);

	void SetMaterials(const TArray<struct FSkeletalMaterial>& InMaterials);

	void SetMeshClothingAssets(const TArray<class UClothingAssetBase*>& InMeshClothingAssets);

	void SetMorphTargets(const TArray<class UMorphTarget*>& InMorphTargets);

#pragma endregion
};
};