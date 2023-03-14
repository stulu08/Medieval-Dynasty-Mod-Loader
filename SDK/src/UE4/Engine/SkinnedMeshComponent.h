#pragma once
#include "Structs.h"
#include "Engine/MeshComponent.h"
/////////////////////////////////////////////
// Class Engine.SkinnedMeshComponent
// Super: Class Engine.MeshComponent
// Size: 1696
// Size inherited: 1152
/////////////////////////////////////////////
namespace UE4 {
class USkinnedMeshComponent : public UMeshComponent {
public:
#pragma region Members
	//class USkeletalMesh*	SkeletalMesh;		//Offset: 1152	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USkeletalMesh* M_GetSkeletalMesh() const;
	class USkeletalMesh** M_PtrGetSkeletalMesh();
	void M_SetSkeletalMesh(const class USkeletalMesh*& value);

	//TWeakObjectPtr<class USkinnedMeshComponent>	MasterPoseComponent;		//Offset: 1160	Size: 8	Flags: BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TWeakObjectPtr<class USkinnedMeshComponent> M_GetMasterPoseComponent() const;
	TWeakObjectPtr<class USkinnedMeshComponent>* M_PtrGetMasterPoseComponent();
	void M_SetMasterPoseComponent(const TWeakObjectPtr<class USkinnedMeshComponent>& value);

	//TArray<ESkinCacheUsage>	SkinCacheUsage;		//Offset: 1168	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<ESkinCacheUsage> M_GetSkinCacheUsage() const;
	TArray<ESkinCacheUsage>* M_PtrGetSkinCacheUsage();
	void M_SetSkinCacheUsage(const TArray<ESkinCacheUsage>& value);

	//TArray<struct FVertexOffsetUsage>	VertexOffsetUsage;		//Offset: 1184	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FVertexOffsetUsage> M_GetVertexOffsetUsage() const;
	TArray<struct FVertexOffsetUsage>* M_PtrGetVertexOffsetUsage();
	void M_SetVertexOffsetUsage(const TArray<struct FVertexOffsetUsage>& value);

	//class UPhysicsAsset*	PhysicsAssetOverride;		//Offset: 1448	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicsAsset* M_GetPhysicsAssetOverride() const;
	class UPhysicsAsset** M_PtrGetPhysicsAssetOverride();
	void M_SetPhysicsAssetOverride(const class UPhysicsAsset*& value);

	//int32_t	ForcedLodModel;		//Offset: 1456	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetForcedLodModel() const;
	int32_t* M_PtrGetForcedLodModel();
	void M_SetForcedLodModel(const int32_t& value);

	//int32_t	MinLodModel;		//Offset: 1460	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetMinLodModel() const;
	int32_t* M_PtrGetMinLodModel();
	void M_SetMinLodModel(const int32_t& value);

	//float	StreamingDistanceMultiplier;		//Offset: 1472	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetStreamingDistanceMultiplier() const;
	float* M_PtrGetStreamingDistanceMultiplier();
	void M_SetStreamingDistanceMultiplier(const float& value);

	//TArray<struct FSkelMeshComponentLODInfo>	LODInfo;		//Offset: 1488	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<struct FSkelMeshComponentLODInfo> M_GetLODInfo() const;
	TArray<struct FSkelMeshComponentLODInfo>* M_PtrGetLODInfo();
	void M_SetLODInfo(const TArray<struct FSkelMeshComponentLODInfo>& value);

	//EVisibilityBasedAnimTickOption	VisibilityBasedAnimTickOption;		//Offset: 1540	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EVisibilityBasedAnimTickOption M_GetVisibilityBasedAnimTickOption() const;
	EVisibilityBasedAnimTickOption* M_PtrGetVisibilityBasedAnimTickOption();
	void M_SetVisibilityBasedAnimTickOption(const EVisibilityBasedAnimTickOption& value);

	//unsigned char	bOverrideMinLod : 1;		//Offset: 1542	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideMinLod() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideMinLod();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideMinLod(const unsigned char& value);

	//unsigned char	bUseBoundsFromMasterPoseComponent : 1;		//Offset: 1542	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseBoundsFromMasterPoseComponent() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseBoundsFromMasterPoseComponent();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseBoundsFromMasterPoseComponent(const unsigned char& value);

	//unsigned char	bForceWireframe : 1;		//Offset: 1542	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceWireframe() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceWireframe();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceWireframe(const unsigned char& value);

	//unsigned char	bDisplayBones : 1;		//Offset: 1542	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisplayBones() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisplayBones();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisplayBones(const unsigned char& value);

	//unsigned char	bDisableMorphTarget : 1;		//Offset: 1542	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisableMorphTarget() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisableMorphTarget();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisableMorphTarget(const unsigned char& value);

	//unsigned char	bHideSkin : 1;		//Offset: 1543	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHideSkin() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHideSkin();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHideSkin(const unsigned char& value);

	//unsigned char	bPerBoneMotionBlur : 1;		//Offset: 1543	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPerBoneMotionBlur() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPerBoneMotionBlur();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPerBoneMotionBlur(const unsigned char& value);

	//unsigned char	bComponentUseFixedSkelBounds : 1;		//Offset: 1543	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbComponentUseFixedSkelBounds() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbComponentUseFixedSkelBounds();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbComponentUseFixedSkelBounds(const unsigned char& value);

	//unsigned char	bConsiderAllBodiesForBounds : 1;		//Offset: 1543	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbConsiderAllBodiesForBounds() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbConsiderAllBodiesForBounds();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbConsiderAllBodiesForBounds(const unsigned char& value);

	//unsigned char	bSyncAttachParentLOD : 1;		//Offset: 1543	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSyncAttachParentLOD() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSyncAttachParentLOD();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSyncAttachParentLOD(const unsigned char& value);

	//unsigned char	bCanHighlightSelectedSections : 1;		//Offset: 1543	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCanHighlightSelectedSections() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCanHighlightSelectedSections();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCanHighlightSelectedSections(const unsigned char& value);

	//unsigned char	bRecentlyRendered : 1;		//Offset: 1543	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRecentlyRendered() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRecentlyRendered();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRecentlyRendered(const unsigned char& value);

	//unsigned char	bCastCapsuleDirectShadow : 1;		//Offset: 1543	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastCapsuleDirectShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastCapsuleDirectShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastCapsuleDirectShadow(const unsigned char& value);

	//unsigned char	bCastCapsuleIndirectShadow : 1;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastCapsuleIndirectShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastCapsuleIndirectShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastCapsuleIndirectShadow(const unsigned char& value);

	//unsigned char	bCPUSkinning : 1;		//Offset: 1544	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCPUSkinning() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCPUSkinning();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCPUSkinning(const unsigned char& value);

	//unsigned char	bEnableUpdateRateOptimizations : 1;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableUpdateRateOptimizations() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableUpdateRateOptimizations();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableUpdateRateOptimizations(const unsigned char& value);

	//unsigned char	bDisplayDebugUpdateRateOptimizations : 1;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisplayDebugUpdateRateOptimizations() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisplayDebugUpdateRateOptimizations();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisplayDebugUpdateRateOptimizations(const unsigned char& value);

	//unsigned char	bRenderStatic : 1;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRenderStatic() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRenderStatic();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRenderStatic(const unsigned char& value);

	//unsigned char	bIgnoreMasterPoseComponentLOD : 1;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIgnoreMasterPoseComponentLOD() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIgnoreMasterPoseComponentLOD();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIgnoreMasterPoseComponentLOD(const unsigned char& value);

	//unsigned char	bCachedLocalBoundsUpToDate : 1;		//Offset: 1545	Size: 1	Flags: Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCachedLocalBoundsUpToDate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCachedLocalBoundsUpToDate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCachedLocalBoundsUpToDate(const unsigned char& value);

	//unsigned char	bForceMeshObjectUpdate : 1;		//Offset: 1545	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceMeshObjectUpdate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceMeshObjectUpdate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceMeshObjectUpdate(const unsigned char& value);

	//float	CapsuleIndirectShadowMinVisibility;		//Offset: 1548	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCapsuleIndirectShadowMinVisibility() const;
	float* M_PtrGetCapsuleIndirectShadowMinVisibility();
	void M_SetCapsuleIndirectShadowMinVisibility(const float& value);

	//struct FBoxSphereBounds	CachedWorldSpaceBounds;		//Offset: 1568	Size: 28	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FBoxSphereBounds M_GetCachedWorldSpaceBounds() const;
	struct FBoxSphereBounds* M_PtrGetCachedWorldSpaceBounds();
	void M_SetCachedWorldSpaceBounds(const struct FBoxSphereBounds& value);

	//struct FMatrix	CachedWorldToLocalTransform;		//Offset: 1600	Size: 64	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FMatrix M_GetCachedWorldToLocalTransform() const;
	struct FMatrix* M_PtrGetCachedWorldToLocalTransform();
	void M_SetCachedWorldToLocalTransform(const struct FMatrix& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}

#pragma region Functions
	bool BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName)/* const*/;

	void ClearSkinWeightOverride(int32_t LODIndex);

	void ClearSkinWeightProfile();

	void ClearVertexColorOverride(int32_t LODIndex);

	struct FName FindClosestBone_K2(struct FVector TestLocation, struct FVector* BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset)/* const*/;

	int32_t GetBoneIndex(struct FName BoneName)/* const*/;

	struct FName GetBoneName(int32_t BoneIndex)/* const*/;

	struct FName GetCurrentSkinWeightProfileName()/* const*/;

	struct FTransform GetDeltaTransformFromRefPose(struct FName BoneName, struct FName BaseName)/* const*/;

	int32_t GetForcedLOD()/* const*/;

	int32_t GetNumBones()/* const*/;

	int32_t GetNumLODs()/* const*/;

	struct FName GetParentBone(struct FName BoneName)/* const*/;

	struct FVector GetRefPosePosition(int32_t BoneIndex);

	struct FName GetSocketBoneName(struct FName InSocketName)/* const*/;

	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName BoneName, float* OutTwistAngle, float* OutSwingAngle)/* const*/;

	int32_t GetVertexOffsetUsage(int32_t LODIndex)/* const*/;

	void HideBoneByName(struct FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);

	bool IsBoneHiddenByName(struct FName BoneName);

	bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex);

	bool IsUsingSkinWeightProfile()/* const*/;

	void SetCapsuleIndirectShadowMinVisibility(float NewValue);

	void SetCastCapsuleDirectShadow(bool bNewValue);

	void SetCastCapsuleIndirectShadow(bool bNewValue);

	void SetForcedLOD(int32_t InNewForcedLOD);

	void SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);

	void SetMinLOD(int32_t InNewMinLOD);

	void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);

	void SetPostSkinningOffsets(int32_t LODIndex, TArray<struct FVector> Offsets);

	void SetPreSkinningOffsets(int32_t LODIndex, TArray<struct FVector> Offsets);

	void SetRenderStatic(bool bNewValue);

	void SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose);

	void SetSkinWeightOverride(int32_t LODIndex, const TArray<struct FSkelMeshSkinWeightInfo>& SkinWeights);

	bool SetSkinWeightProfile(struct FName InProfileName);

	void SetVertexColorOverride_LinearColor(int32_t LODIndex, const TArray<struct FLinearColor>& VertexColors);

	void SetVertexOffsetUsage(int32_t LODIndex, int32_t Usage);

	void ShowAllMaterialSections(int32_t LODIndex);

	void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex);

	void TransformFromBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);

	void TransformToBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector* OutPosition, struct FRotator* OutRotation)/* const*/;

	void UnHideBoneByName(struct FName BoneName);

	void UnloadSkinWeightProfile(struct FName InProfileName);

#pragma endregion
};
};