#include "../SDK.h"
#include "SkinnedMeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SkeletalMesh
// Declaration: class USkeletalMesh* SkeletalMesh
class USkeletalMesh* USkinnedMeshComponent::M_GetSkeletalMesh() const {
	return Read<class USkeletalMesh*>((byte*)this + 1152);
}
class USkeletalMesh** USkinnedMeshComponent::M_PtrGetSkeletalMesh() {
	return reinterpret_cast<class USkeletalMesh**>((byte*)this + 1152);
}
void USkinnedMeshComponent::M_SetSkeletalMesh(const class USkeletalMesh*& value) {
	Write((byte*)this + 1152, value);
}
// Member Getter and Setter of MasterPoseComponent
// Declaration: TWeakObjectPtr<class USkinnedMeshComponent> MasterPoseComponent
TWeakObjectPtr<class USkinnedMeshComponent> USkinnedMeshComponent::M_GetMasterPoseComponent() const {
	return Read<TWeakObjectPtr<class USkinnedMeshComponent>>((byte*)this + 1160);
}
TWeakObjectPtr<class USkinnedMeshComponent>* USkinnedMeshComponent::M_PtrGetMasterPoseComponent() {
	return reinterpret_cast<TWeakObjectPtr<class USkinnedMeshComponent>*>((byte*)this + 1160);
}
void USkinnedMeshComponent::M_SetMasterPoseComponent(const TWeakObjectPtr<class USkinnedMeshComponent>& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of SkinCacheUsage
// Declaration: TArray<ESkinCacheUsage> SkinCacheUsage
TArray<ESkinCacheUsage> USkinnedMeshComponent::M_GetSkinCacheUsage() const {
	return Read<TArray<ESkinCacheUsage>>((byte*)this + 1168);
}
TArray<ESkinCacheUsage>* USkinnedMeshComponent::M_PtrGetSkinCacheUsage() {
	return reinterpret_cast<TArray<ESkinCacheUsage>*>((byte*)this + 1168);
}
void USkinnedMeshComponent::M_SetSkinCacheUsage(const TArray<ESkinCacheUsage>& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of VertexOffsetUsage
// Declaration: TArray<struct FVertexOffsetUsage> VertexOffsetUsage
TArray<struct FVertexOffsetUsage> USkinnedMeshComponent::M_GetVertexOffsetUsage() const {
	return Read<TArray<struct FVertexOffsetUsage>>((byte*)this + 1184);
}
TArray<struct FVertexOffsetUsage>* USkinnedMeshComponent::M_PtrGetVertexOffsetUsage() {
	return reinterpret_cast<TArray<struct FVertexOffsetUsage>*>((byte*)this + 1184);
}
void USkinnedMeshComponent::M_SetVertexOffsetUsage(const TArray<struct FVertexOffsetUsage>& value) {
	Write((byte*)this + 1184, value);
}
// Member Getter and Setter of PhysicsAssetOverride
// Declaration: class UPhysicsAsset* PhysicsAssetOverride
class UPhysicsAsset* USkinnedMeshComponent::M_GetPhysicsAssetOverride() const {
	return Read<class UPhysicsAsset*>((byte*)this + 1448);
}
class UPhysicsAsset** USkinnedMeshComponent::M_PtrGetPhysicsAssetOverride() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 1448);
}
void USkinnedMeshComponent::M_SetPhysicsAssetOverride(const class UPhysicsAsset*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of ForcedLodModel
// Declaration: int32_t ForcedLodModel
int32_t USkinnedMeshComponent::M_GetForcedLodModel() const {
	return Read<int32_t>((byte*)this + 1456);
}
int32_t* USkinnedMeshComponent::M_PtrGetForcedLodModel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1456);
}
void USkinnedMeshComponent::M_SetForcedLodModel(const int32_t& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of MinLodModel
// Declaration: int32_t MinLodModel
int32_t USkinnedMeshComponent::M_GetMinLodModel() const {
	return Read<int32_t>((byte*)this + 1460);
}
int32_t* USkinnedMeshComponent::M_PtrGetMinLodModel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1460);
}
void USkinnedMeshComponent::M_SetMinLodModel(const int32_t& value) {
	Write((byte*)this + 1460, value);
}
// Member Getter and Setter of StreamingDistanceMultiplier
// Declaration: float StreamingDistanceMultiplier
float USkinnedMeshComponent::M_GetStreamingDistanceMultiplier() const {
	return Read<float>((byte*)this + 1472);
}
float* USkinnedMeshComponent::M_PtrGetStreamingDistanceMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1472);
}
void USkinnedMeshComponent::M_SetStreamingDistanceMultiplier(const float& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of LODInfo
// Declaration: TArray<struct FSkelMeshComponentLODInfo> LODInfo
TArray<struct FSkelMeshComponentLODInfo> USkinnedMeshComponent::M_GetLODInfo() const {
	return Read<TArray<struct FSkelMeshComponentLODInfo>>((byte*)this + 1488);
}
TArray<struct FSkelMeshComponentLODInfo>* USkinnedMeshComponent::M_PtrGetLODInfo() {
	return reinterpret_cast<TArray<struct FSkelMeshComponentLODInfo>*>((byte*)this + 1488);
}
void USkinnedMeshComponent::M_SetLODInfo(const TArray<struct FSkelMeshComponentLODInfo>& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of VisibilityBasedAnimTickOption
// Declaration: EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption
EVisibilityBasedAnimTickOption USkinnedMeshComponent::M_GetVisibilityBasedAnimTickOption() const {
	return Read<EVisibilityBasedAnimTickOption>((byte*)this + 1540);
}
EVisibilityBasedAnimTickOption* USkinnedMeshComponent::M_PtrGetVisibilityBasedAnimTickOption() {
	return reinterpret_cast<EVisibilityBasedAnimTickOption*>((byte*)this + 1540);
}
void USkinnedMeshComponent::M_SetVisibilityBasedAnimTickOption(const EVisibilityBasedAnimTickOption& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of bOverrideMinLod
// Declaration: unsigned char bOverrideMinLod : 1
unsigned char USkinnedMeshComponent::M_GetbOverrideMinLod() const {
	return Read<unsigned char>((byte*)this + 1542);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbOverrideMinLod() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1542);
}
void USkinnedMeshComponent::M_SetbOverrideMinLod(const unsigned char& value) {
	Write((byte*)this + 1542, value);
}
// Member Getter and Setter of bUseBoundsFromMasterPoseComponent
// Declaration: unsigned char bUseBoundsFromMasterPoseComponent : 1
unsigned char USkinnedMeshComponent::M_GetbUseBoundsFromMasterPoseComponent() const {
	return Read<unsigned char>((byte*)this + 1542);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbUseBoundsFromMasterPoseComponent() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1542);
}
void USkinnedMeshComponent::M_SetbUseBoundsFromMasterPoseComponent(const unsigned char& value) {
	Write((byte*)this + 1542, value);
}
// Member Getter and Setter of bForceWireframe
// Declaration: unsigned char bForceWireframe : 1
unsigned char USkinnedMeshComponent::M_GetbForceWireframe() const {
	return Read<unsigned char>((byte*)this + 1542);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbForceWireframe() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1542);
}
void USkinnedMeshComponent::M_SetbForceWireframe(const unsigned char& value) {
	Write((byte*)this + 1542, value);
}
// Member Getter and Setter of bDisplayBones
// Declaration: unsigned char bDisplayBones : 1
unsigned char USkinnedMeshComponent::M_GetbDisplayBones() const {
	return Read<unsigned char>((byte*)this + 1542);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbDisplayBones() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1542);
}
void USkinnedMeshComponent::M_SetbDisplayBones(const unsigned char& value) {
	Write((byte*)this + 1542, value);
}
// Member Getter and Setter of bDisableMorphTarget
// Declaration: unsigned char bDisableMorphTarget : 1
unsigned char USkinnedMeshComponent::M_GetbDisableMorphTarget() const {
	return Read<unsigned char>((byte*)this + 1542);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbDisableMorphTarget() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1542);
}
void USkinnedMeshComponent::M_SetbDisableMorphTarget(const unsigned char& value) {
	Write((byte*)this + 1542, value);
}
// Member Getter and Setter of bHideSkin
// Declaration: unsigned char bHideSkin : 1
unsigned char USkinnedMeshComponent::M_GetbHideSkin() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbHideSkin() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbHideSkin(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bPerBoneMotionBlur
// Declaration: unsigned char bPerBoneMotionBlur : 1
unsigned char USkinnedMeshComponent::M_GetbPerBoneMotionBlur() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbPerBoneMotionBlur() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbPerBoneMotionBlur(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bComponentUseFixedSkelBounds
// Declaration: unsigned char bComponentUseFixedSkelBounds : 1
unsigned char USkinnedMeshComponent::M_GetbComponentUseFixedSkelBounds() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbComponentUseFixedSkelBounds() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbComponentUseFixedSkelBounds(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bConsiderAllBodiesForBounds
// Declaration: unsigned char bConsiderAllBodiesForBounds : 1
unsigned char USkinnedMeshComponent::M_GetbConsiderAllBodiesForBounds() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbConsiderAllBodiesForBounds() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbConsiderAllBodiesForBounds(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bSyncAttachParentLOD
// Declaration: unsigned char bSyncAttachParentLOD : 1
unsigned char USkinnedMeshComponent::M_GetbSyncAttachParentLOD() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbSyncAttachParentLOD() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbSyncAttachParentLOD(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bCanHighlightSelectedSections
// Declaration: unsigned char bCanHighlightSelectedSections : 1
unsigned char USkinnedMeshComponent::M_GetbCanHighlightSelectedSections() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbCanHighlightSelectedSections() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbCanHighlightSelectedSections(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bRecentlyRendered
// Declaration: unsigned char bRecentlyRendered : 1
unsigned char USkinnedMeshComponent::M_GetbRecentlyRendered() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbRecentlyRendered() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbRecentlyRendered(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bCastCapsuleDirectShadow
// Declaration: unsigned char bCastCapsuleDirectShadow : 1
unsigned char USkinnedMeshComponent::M_GetbCastCapsuleDirectShadow() const {
	return Read<unsigned char>((byte*)this + 1543);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbCastCapsuleDirectShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1543);
}
void USkinnedMeshComponent::M_SetbCastCapsuleDirectShadow(const unsigned char& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of bCastCapsuleIndirectShadow
// Declaration: unsigned char bCastCapsuleIndirectShadow : 1
unsigned char USkinnedMeshComponent::M_GetbCastCapsuleIndirectShadow() const {
	return Read<unsigned char>((byte*)this + 1544);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbCastCapsuleIndirectShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1544);
}
void USkinnedMeshComponent::M_SetbCastCapsuleIndirectShadow(const unsigned char& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of bCPUSkinning
// Declaration: unsigned char bCPUSkinning : 1
unsigned char USkinnedMeshComponent::M_GetbCPUSkinning() const {
	return Read<unsigned char>((byte*)this + 1544);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbCPUSkinning() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1544);
}
void USkinnedMeshComponent::M_SetbCPUSkinning(const unsigned char& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of bEnableUpdateRateOptimizations
// Declaration: unsigned char bEnableUpdateRateOptimizations : 1
unsigned char USkinnedMeshComponent::M_GetbEnableUpdateRateOptimizations() const {
	return Read<unsigned char>((byte*)this + 1544);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbEnableUpdateRateOptimizations() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1544);
}
void USkinnedMeshComponent::M_SetbEnableUpdateRateOptimizations(const unsigned char& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of bDisplayDebugUpdateRateOptimizations
// Declaration: unsigned char bDisplayDebugUpdateRateOptimizations : 1
unsigned char USkinnedMeshComponent::M_GetbDisplayDebugUpdateRateOptimizations() const {
	return Read<unsigned char>((byte*)this + 1544);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbDisplayDebugUpdateRateOptimizations() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1544);
}
void USkinnedMeshComponent::M_SetbDisplayDebugUpdateRateOptimizations(const unsigned char& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of bRenderStatic
// Declaration: unsigned char bRenderStatic : 1
unsigned char USkinnedMeshComponent::M_GetbRenderStatic() const {
	return Read<unsigned char>((byte*)this + 1544);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbRenderStatic() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1544);
}
void USkinnedMeshComponent::M_SetbRenderStatic(const unsigned char& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of bIgnoreMasterPoseComponentLOD
// Declaration: unsigned char bIgnoreMasterPoseComponentLOD : 1
unsigned char USkinnedMeshComponent::M_GetbIgnoreMasterPoseComponentLOD() const {
	return Read<unsigned char>((byte*)this + 1544);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbIgnoreMasterPoseComponentLOD() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1544);
}
void USkinnedMeshComponent::M_SetbIgnoreMasterPoseComponentLOD(const unsigned char& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of bCachedLocalBoundsUpToDate
// Declaration: unsigned char bCachedLocalBoundsUpToDate : 1
unsigned char USkinnedMeshComponent::M_GetbCachedLocalBoundsUpToDate() const {
	return Read<unsigned char>((byte*)this + 1545);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbCachedLocalBoundsUpToDate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1545);
}
void USkinnedMeshComponent::M_SetbCachedLocalBoundsUpToDate(const unsigned char& value) {
	Write((byte*)this + 1545, value);
}
// Member Getter and Setter of bForceMeshObjectUpdate
// Declaration: unsigned char bForceMeshObjectUpdate : 1
unsigned char USkinnedMeshComponent::M_GetbForceMeshObjectUpdate() const {
	return Read<unsigned char>((byte*)this + 1545);
}
unsigned char* USkinnedMeshComponent::M_PtrGetbForceMeshObjectUpdate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1545);
}
void USkinnedMeshComponent::M_SetbForceMeshObjectUpdate(const unsigned char& value) {
	Write((byte*)this + 1545, value);
}
// Member Getter and Setter of CapsuleIndirectShadowMinVisibility
// Declaration: float CapsuleIndirectShadowMinVisibility
float USkinnedMeshComponent::M_GetCapsuleIndirectShadowMinVisibility() const {
	return Read<float>((byte*)this + 1548);
}
float* USkinnedMeshComponent::M_PtrGetCapsuleIndirectShadowMinVisibility() {
	return reinterpret_cast<float*>((byte*)this + 1548);
}
void USkinnedMeshComponent::M_SetCapsuleIndirectShadowMinVisibility(const float& value) {
	Write((byte*)this + 1548, value);
}
// Member Getter and Setter of CachedWorldSpaceBounds
// Declaration: struct FBoxSphereBounds CachedWorldSpaceBounds
struct FBoxSphereBounds USkinnedMeshComponent::M_GetCachedWorldSpaceBounds() const {
	return Read<struct FBoxSphereBounds>((byte*)this + 1568);
}
struct FBoxSphereBounds* USkinnedMeshComponent::M_PtrGetCachedWorldSpaceBounds() {
	return reinterpret_cast<struct FBoxSphereBounds*>((byte*)this + 1568);
}
void USkinnedMeshComponent::M_SetCachedWorldSpaceBounds(const struct FBoxSphereBounds& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of CachedWorldToLocalTransform
// Declaration: struct FMatrix CachedWorldToLocalTransform
struct FMatrix USkinnedMeshComponent::M_GetCachedWorldToLocalTransform() const {
	return Read<struct FMatrix>((byte*)this + 1600);
}
struct FMatrix* USkinnedMeshComponent::M_PtrGetCachedWorldToLocalTransform() {
	return reinterpret_cast<struct FMatrix*>((byte*)this + 1600);
}
void USkinnedMeshComponent::M_SetCachedWorldToLocalTransform(const struct FMatrix& value) {
	Write((byte*)this + 1600, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.BoneIsChildOf
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParentBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkinnedMeshComponent::BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.BoneIsChildOf");

	struct USkinnedMeshComponent_BoneIsChildOf_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName ParentBoneName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	USkinnedMeshComponent_BoneIsChildOf_Params params;
	params.BoneName = BoneName;
	params.ParentBoneName = ParentBoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.ClearSkinWeightOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::ClearSkinWeightOverride(int32_t LODIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.ClearSkinWeightOverride");

	struct USkinnedMeshComponent_ClearSkinWeightOverride_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_ClearSkinWeightOverride_Params params;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.ClearSkinWeightProfile
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkinnedMeshComponent::ClearSkinWeightProfile() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.ClearSkinWeightProfile");

	struct USkinnedMeshComponent_ClearSkinWeightProfile_Params {
	};
	USkinnedMeshComponent_ClearSkinWeightProfile_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.ClearVertexColorOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::ClearVertexColorOverride(int32_t LODIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.ClearVertexColorOverride");

	struct USkinnedMeshComponent_ClearVertexColorOverride_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_ClearVertexColorOverride_Params params;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.FindClosestBone_K2
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: TestLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IgnoreScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRequirePhysicsAsset	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USkinnedMeshComponent::FindClosestBone_K2(struct FVector TestLocation, struct FVector* BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.FindClosestBone_K2");

	struct USkinnedMeshComponent_FindClosestBone_K2_Params {
		struct FVector TestLocation;			//Offset: 0 | ElementSize: 12
		struct FVector BoneLocation;			//Offset: 12 | ElementSize: 12
		float IgnoreScale;			//Offset: 24 | ElementSize: 4
		bool bRequirePhysicsAsset;			//Offset: 28 | ElementSize: 1
		struct FName ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	USkinnedMeshComponent_FindClosestBone_K2_Params params;
	params.TestLocation = TestLocation;
	params.IgnoreScale = IgnoreScale;
	params.bRequirePhysicsAsset = bRequirePhysicsAsset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (BoneLocation != nullptr)
		*BoneLocation = params.BoneLocation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetBoneIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USkinnedMeshComponent::GetBoneIndex(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetBoneIndex");

	struct USkinnedMeshComponent_GetBoneIndex_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	USkinnedMeshComponent_GetBoneIndex_Params params;
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
// Function Engine.SkinnedMeshComponent.GetBoneName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USkinnedMeshComponent::GetBoneName(int32_t BoneIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetBoneName");

	struct USkinnedMeshComponent_GetBoneName_Params {
		int32_t BoneIndex;			//Offset: 0 | ElementSize: 4
		struct FName ReturnValue;			//Offset: 4 | ElementSize: 8
	};
	USkinnedMeshComponent_GetBoneName_Params params;
	params.BoneIndex = BoneIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USkinnedMeshComponent::GetCurrentSkinWeightProfileName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName");

	struct USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BaseName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FTransform	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform USkinnedMeshComponent::GetDeltaTransformFromRefPose(struct FName BoneName, struct FName BaseName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose");

	struct USkinnedMeshComponent_GetDeltaTransformFromRefPose_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName BaseName;			//Offset: 8 | ElementSize: 8
		struct FTransform ReturnValue;			//Offset: 16 | ElementSize: 48
	};
	USkinnedMeshComponent_GetDeltaTransformFromRefPose_Params params;
	params.BoneName = BoneName;
	params.BaseName = BaseName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetForcedLOD
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USkinnedMeshComponent::GetForcedLOD()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetForcedLOD");

	struct USkinnedMeshComponent_GetForcedLOD_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_GetForcedLOD_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetNumBones
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USkinnedMeshComponent::GetNumBones()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetNumBones");

	struct USkinnedMeshComponent_GetNumBones_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_GetNumBones_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetNumLODs
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USkinnedMeshComponent::GetNumLODs()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetNumLODs");

	struct USkinnedMeshComponent_GetNumLODs_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_GetNumLODs_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetParentBone
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USkinnedMeshComponent::GetParentBone(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetParentBone");

	struct USkinnedMeshComponent_GetParentBone_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkinnedMeshComponent_GetParentBone_Params params;
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
// Function Engine.SkinnedMeshComponent.GetRefPosePosition
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: BoneIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USkinnedMeshComponent::GetRefPosePosition(int32_t BoneIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetRefPosePosition");

	struct USkinnedMeshComponent_GetRefPosePosition_Params {
		int32_t BoneIndex;			//Offset: 0 | ElementSize: 4
		struct FVector ReturnValue;			//Offset: 4 | ElementSize: 12
	};
	USkinnedMeshComponent_GetRefPosePosition_Params params;
	params.BoneIndex = BoneIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetSocketBoneName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USkinnedMeshComponent::GetSocketBoneName(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetSocketBoneName");

	struct USkinnedMeshComponent_GetSocketBoneName_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkinnedMeshComponent_GetSocketBoneName_Params params;
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
// Function Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutTwistAngle	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutSwingAngle	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkinnedMeshComponent::GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName BoneName, float* OutTwistAngle, float* OutSwingAngle)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose");

	struct USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		float OutTwistAngle;			//Offset: 8 | ElementSize: 4
		float OutSwingAngle;			//Offset: 12 | ElementSize: 4
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Params params;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutTwistAngle != nullptr)
		*OutTwistAngle = params.OutTwistAngle;
	if (OutSwingAngle != nullptr)
		*OutSwingAngle = params.OutSwingAngle;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.GetVertexOffsetUsage
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USkinnedMeshComponent::GetVertexOffsetUsage(int32_t LODIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.GetVertexOffsetUsage");

	struct USkinnedMeshComponent_GetVertexOffsetUsage_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	USkinnedMeshComponent_GetVertexOffsetUsage_Params params;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.HideBoneByName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PhysBodyOption	Type: TEnumAsByte<EPhysBodyOp>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::HideBoneByName(struct FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.HideBoneByName");

	struct USkinnedMeshComponent_HideBoneByName_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EPhysBodyOp> PhysBodyOption;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_HideBoneByName_Params params;
	params.BoneName = BoneName;
	params.PhysBodyOption = PhysBodyOption;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.IsBoneHiddenByName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkinnedMeshComponent::IsBoneHiddenByName(struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.IsBoneHiddenByName");

	struct USkinnedMeshComponent_IsBoneHiddenByName_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_IsBoneHiddenByName_Params params;
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
// Function Engine.SkinnedMeshComponent.IsMaterialSectionShown
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: MaterialID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkinnedMeshComponent::IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.IsMaterialSectionShown");

	struct USkinnedMeshComponent_IsMaterialSectionShown_Params {
		int32_t MaterialID;			//Offset: 0 | ElementSize: 4
		int32_t LODIndex;			//Offset: 4 | ElementSize: 4
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_IsMaterialSectionShown_Params params;
	params.MaterialID = MaterialID;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkinnedMeshComponent::IsUsingSkinWeightProfile()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile");

	struct USkinnedMeshComponent_IsUsingSkinWeightProfile_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkinnedMeshComponent_IsUsingSkinWeightProfile_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetCapsuleIndirectShadowMinVisibility(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility");

	struct USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Params params;
	params.NewValue = NewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetCastCapsuleDirectShadow(bool bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow");

	struct USkinnedMeshComponent_SetCastCapsuleDirectShadow_Params {
		bool bNewValue;			//Offset: 0 | ElementSize: 1
	};
	USkinnedMeshComponent_SetCastCapsuleDirectShadow_Params params;
	params.bNewValue = bNewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetCastCapsuleIndirectShadow(bool bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow");

	struct USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Params {
		bool bNewValue;			//Offset: 0 | ElementSize: 1
	};
	USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Params params;
	params.bNewValue = bNewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetForcedLOD
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InNewForcedLOD	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetForcedLOD(int32_t InNewForcedLOD) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetForcedLOD");

	struct USkinnedMeshComponent_SetForcedLOD_Params {
		int32_t InNewForcedLOD;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_SetForcedLOD_Params params;
	params.InNewForcedLOD = InNewForcedLOD;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetMasterPoseComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewMasterBoneComponent	Type: class USkinnedMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bForceUpdate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetMasterPoseComponent");

	struct USkinnedMeshComponent_SetMasterPoseComponent_Params {
		class USkinnedMeshComponent* NewMasterBoneComponent;			//Offset: 0 | ElementSize: 8
		bool bForceUpdate;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_SetMasterPoseComponent_Params params;
	params.NewMasterBoneComponent = NewMasterBoneComponent;
	params.bForceUpdate = bForceUpdate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetMinLOD
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InNewMinLOD	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetMinLOD(int32_t InNewMinLOD) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetMinLOD");

	struct USkinnedMeshComponent_SetMinLOD_Params {
		int32_t InNewMinLOD;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_SetMinLOD_Params params;
	params.InNewMinLOD = InNewMinLOD;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetPhysicsAsset
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewPhysicsAsset	Type: class UPhysicsAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bForceReInit	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetPhysicsAsset");

	struct USkinnedMeshComponent_SetPhysicsAsset_Params {
		class UPhysicsAsset* NewPhysicsAsset;			//Offset: 0 | ElementSize: 8
		bool bForceReInit;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_SetPhysicsAsset_Params params;
	params.NewPhysicsAsset = NewPhysicsAsset;
	params.bForceReInit = bForceReInit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetPostSkinningOffsets
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Offsets	Type: TArray<struct FVector>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetPostSkinningOffsets(int32_t LODIndex, TArray<struct FVector> Offsets) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetPostSkinningOffsets");

	struct USkinnedMeshComponent_SetPostSkinningOffsets_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FVector> Offsets;			//Offset: 8 | ElementSize: 16
	};
	USkinnedMeshComponent_SetPostSkinningOffsets_Params params;
	params.LODIndex = LODIndex;
	params.Offsets = Offsets;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetPreSkinningOffsets
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Offsets	Type: TArray<struct FVector>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetPreSkinningOffsets(int32_t LODIndex, TArray<struct FVector> Offsets) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetPreSkinningOffsets");

	struct USkinnedMeshComponent_SetPreSkinningOffsets_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FVector> Offsets;			//Offset: 8 | ElementSize: 16
	};
	USkinnedMeshComponent_SetPreSkinningOffsets_Params params;
	params.LODIndex = LODIndex;
	params.Offsets = Offsets;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetRenderStatic
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetRenderStatic(bool bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetRenderStatic");

	struct USkinnedMeshComponent_SetRenderStatic_Params {
		bool bNewValue;			//Offset: 0 | ElementSize: 1
	};
	USkinnedMeshComponent_SetRenderStatic_Params params;
	params.bNewValue = bNewValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetSkeletalMesh
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewMesh	Type: class USkeletalMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bReinitPose	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetSkeletalMesh");

	struct USkinnedMeshComponent_SetSkeletalMesh_Params {
		class USkeletalMesh* NewMesh;			//Offset: 0 | ElementSize: 8
		bool bReinitPose;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_SetSkeletalMesh_Params params;
	params.NewMesh = NewMesh;
	params.bReinitPose = bReinitPose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetSkinWeightOverride
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SkinWeights	Type: TArray<struct FSkelMeshSkinWeightInfo>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetSkinWeightOverride(int32_t LODIndex, const TArray<struct FSkelMeshSkinWeightInfo>& SkinWeights) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetSkinWeightOverride");

	struct USkinnedMeshComponent_SetSkinWeightOverride_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FSkelMeshSkinWeightInfo> SkinWeights;			//Offset: 8 | ElementSize: 16
	};
	USkinnedMeshComponent_SetSkinWeightOverride_Params params;
	params.LODIndex = LODIndex;
	params.SkinWeights = SkinWeights;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetSkinWeightProfile
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkinnedMeshComponent::SetSkinWeightProfile(struct FName InProfileName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetSkinWeightProfile");

	struct USkinnedMeshComponent_SetSkinWeightProfile_Params {
		struct FName InProfileName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	USkinnedMeshComponent_SetSkinWeightProfile_Params params;
	params.InProfileName = InProfileName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: VertexColors	Type: TArray<struct FLinearColor>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetVertexColorOverride_LinearColor(int32_t LODIndex, const TArray<struct FLinearColor>& VertexColors) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor");

	struct USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FLinearColor> VertexColors;			//Offset: 8 | ElementSize: 16
	};
	USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Params params;
	params.LODIndex = LODIndex;
	params.VertexColors = VertexColors;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.SetVertexOffsetUsage
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Usage	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::SetVertexOffsetUsage(int32_t LODIndex, int32_t Usage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.SetVertexOffsetUsage");

	struct USkinnedMeshComponent_SetVertexOffsetUsage_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
		int32_t Usage;			//Offset: 4 | ElementSize: 4
	};
	USkinnedMeshComponent_SetVertexOffsetUsage_Params params;
	params.LODIndex = LODIndex;
	params.Usage = Usage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.ShowAllMaterialSections
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::ShowAllMaterialSections(int32_t LODIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.ShowAllMaterialSections");

	struct USkinnedMeshComponent_ShowAllMaterialSections_Params {
		int32_t LODIndex;			//Offset: 0 | ElementSize: 4
	};
	USkinnedMeshComponent_ShowAllMaterialSections_Params params;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.ShowMaterialSection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: MaterialID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SectionIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LODIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.ShowMaterialSection");

	struct USkinnedMeshComponent_ShowMaterialSection_Params {
		int32_t MaterialID;			//Offset: 0 | ElementSize: 4
		int32_t SectionIndex;			//Offset: 4 | ElementSize: 4
		bool bShow;			//Offset: 8 | ElementSize: 1
		int32_t LODIndex;			//Offset: 12 | ElementSize: 4
	};
	USkinnedMeshComponent_ShowMaterialSection_Params params;
	params.MaterialID = MaterialID;
	params.SectionIndex = SectionIndex;
	params.bShow = bShow;
	params.LODIndex = LODIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.TransformFromBoneSpace
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPosition	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: OutPosition	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::TransformFromBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector* OutPosition, struct FRotator* OutRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.TransformFromBoneSpace");

	struct USkinnedMeshComponent_TransformFromBoneSpace_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector InPosition;			//Offset: 8 | ElementSize: 12
		struct FRotator InRotation;			//Offset: 20 | ElementSize: 12
		struct FVector OutPosition;			//Offset: 32 | ElementSize: 12
		struct FRotator OutRotation;			//Offset: 44 | ElementSize: 12
	};
	USkinnedMeshComponent_TransformFromBoneSpace_Params params;
	params.BoneName = BoneName;
	params.InPosition = InPosition;
	params.InRotation = InRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.TransformToBoneSpace
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPosition	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: OutPosition	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::TransformToBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector* OutPosition, struct FRotator* OutRotation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.TransformToBoneSpace");

	struct USkinnedMeshComponent_TransformToBoneSpace_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector InPosition;			//Offset: 8 | ElementSize: 12
		struct FRotator InRotation;			//Offset: 20 | ElementSize: 12
		struct FVector OutPosition;			//Offset: 32 | ElementSize: 12
		struct FRotator OutRotation;			//Offset: 44 | ElementSize: 12
	};
	USkinnedMeshComponent_TransformToBoneSpace_Params params;
	params.BoneName = BoneName;
	params.InPosition = InPosition;
	params.InRotation = InRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.UnHideBoneByName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::UnHideBoneByName(struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.UnHideBoneByName");

	struct USkinnedMeshComponent_UnHideBoneByName_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
	};
	USkinnedMeshComponent_UnHideBoneByName_Params params;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkinnedMeshComponent::UnloadSkinWeightProfile(struct FName InProfileName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile");

	struct USkinnedMeshComponent_UnloadSkinWeightProfile_Params {
		struct FName InProfileName;			//Offset: 0 | ElementSize: 8
	};
	USkinnedMeshComponent_UnloadSkinWeightProfile_Params params;
	params.InProfileName = InProfileName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}