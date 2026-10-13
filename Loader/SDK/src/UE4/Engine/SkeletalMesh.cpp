#include "../SDK.h"
#include "SkeletalMesh.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Skeleton
// Declaration: class USkeleton* Skeleton
class USkeleton* USkeletalMesh::M_GetSkeleton() const {
	return Read<class USkeleton*>((byte*)this + 128);
}
class USkeleton** USkeletalMesh::M_PtrGetSkeleton() {
	return reinterpret_cast<class USkeleton**>((byte*)this + 128);
}
void USkeletalMesh::M_SetSkeleton(const class USkeleton*& value) {
	Write((byte*)this + 128, value);
}
// Member Getter and Setter of ImportedBounds
// Declaration: struct FBoxSphereBounds ImportedBounds
struct FBoxSphereBounds USkeletalMesh::M_GetImportedBounds() const {
	return Read<struct FBoxSphereBounds>((byte*)this + 136);
}
struct FBoxSphereBounds* USkeletalMesh::M_PtrGetImportedBounds() {
	return reinterpret_cast<struct FBoxSphereBounds*>((byte*)this + 136);
}
void USkeletalMesh::M_SetImportedBounds(const struct FBoxSphereBounds& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of ExtendedBounds
// Declaration: struct FBoxSphereBounds ExtendedBounds
struct FBoxSphereBounds USkeletalMesh::M_GetExtendedBounds() const {
	return Read<struct FBoxSphereBounds>((byte*)this + 164);
}
struct FBoxSphereBounds* USkeletalMesh::M_PtrGetExtendedBounds() {
	return reinterpret_cast<struct FBoxSphereBounds*>((byte*)this + 164);
}
void USkeletalMesh::M_SetExtendedBounds(const struct FBoxSphereBounds& value) {
	Write((byte*)this + 164, value);
}
// Member Getter and Setter of PositiveBoundsExtension
// Declaration: struct FVector PositiveBoundsExtension
struct FVector USkeletalMesh::M_GetPositiveBoundsExtension() const {
	return Read<struct FVector>((byte*)this + 192);
}
struct FVector* USkeletalMesh::M_PtrGetPositiveBoundsExtension() {
	return reinterpret_cast<struct FVector*>((byte*)this + 192);
}
void USkeletalMesh::M_SetPositiveBoundsExtension(const struct FVector& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of NegativeBoundsExtension
// Declaration: struct FVector NegativeBoundsExtension
struct FVector USkeletalMesh::M_GetNegativeBoundsExtension() const {
	return Read<struct FVector>((byte*)this + 204);
}
struct FVector* USkeletalMesh::M_PtrGetNegativeBoundsExtension() {
	return reinterpret_cast<struct FVector*>((byte*)this + 204);
}
void USkeletalMesh::M_SetNegativeBoundsExtension(const struct FVector& value) {
	Write((byte*)this + 204, value);
}
// Member Getter and Setter of Materials
// Declaration: TArray<struct FSkeletalMaterial> Materials
TArray<struct FSkeletalMaterial> USkeletalMesh::M_GetMaterials() const {
	return Read<TArray<struct FSkeletalMaterial>>((byte*)this + 216);
}
TArray<struct FSkeletalMaterial>* USkeletalMesh::M_PtrGetMaterials() {
	return reinterpret_cast<TArray<struct FSkeletalMaterial>*>((byte*)this + 216);
}
void USkeletalMesh::M_SetMaterials(const TArray<struct FSkeletalMaterial>& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of SkelMirrorTable
// Declaration: TArray<struct FBoneMirrorInfo> SkelMirrorTable
TArray<struct FBoneMirrorInfo> USkeletalMesh::M_GetSkelMirrorTable() const {
	return Read<TArray<struct FBoneMirrorInfo>>((byte*)this + 232);
}
TArray<struct FBoneMirrorInfo>* USkeletalMesh::M_PtrGetSkelMirrorTable() {
	return reinterpret_cast<TArray<struct FBoneMirrorInfo>*>((byte*)this + 232);
}
void USkeletalMesh::M_SetSkelMirrorTable(const TArray<struct FBoneMirrorInfo>& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of LODInfo
// Declaration: TArray<struct FSkeletalMeshLODInfo> LODInfo
TArray<struct FSkeletalMeshLODInfo> USkeletalMesh::M_GetLODInfo() const {
	return Read<TArray<struct FSkeletalMeshLODInfo>>((byte*)this + 248);
}
TArray<struct FSkeletalMeshLODInfo>* USkeletalMesh::M_PtrGetLODInfo() {
	return reinterpret_cast<TArray<struct FSkeletalMeshLODInfo>*>((byte*)this + 248);
}
void USkeletalMesh::M_SetLODInfo(const TArray<struct FSkeletalMeshLODInfo>& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of MinLOD
// Declaration: struct FPerPlatformInt MinLOD
struct FPerPlatformInt USkeletalMesh::M_GetMinLOD() const {
	return Read<struct FPerPlatformInt>((byte*)this + 344);
}
struct FPerPlatformInt* USkeletalMesh::M_PtrGetMinLOD() {
	return reinterpret_cast<struct FPerPlatformInt*>((byte*)this + 344);
}
void USkeletalMesh::M_SetMinLOD(const struct FPerPlatformInt& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of DisableBelowMinLodStripping
// Declaration: struct FPerPlatformBool DisableBelowMinLodStripping
struct FPerPlatformBool USkeletalMesh::M_GetDisableBelowMinLodStripping() const {
	return Read<struct FPerPlatformBool>((byte*)this + 348);
}
struct FPerPlatformBool* USkeletalMesh::M_PtrGetDisableBelowMinLodStripping() {
	return reinterpret_cast<struct FPerPlatformBool*>((byte*)this + 348);
}
void USkeletalMesh::M_SetDisableBelowMinLodStripping(const struct FPerPlatformBool& value) {
	Write((byte*)this + 348, value);
}
// Member Getter and Setter of SkelMirrorAxis
// Declaration: TEnumAsByte<EAxis> SkelMirrorAxis
TEnumAsByte<EAxis> USkeletalMesh::M_GetSkelMirrorAxis() const {
	return Read<TEnumAsByte<EAxis>>((byte*)this + 349);
}
TEnumAsByte<EAxis>* USkeletalMesh::M_PtrGetSkelMirrorAxis() {
	return reinterpret_cast<TEnumAsByte<EAxis>*>((byte*)this + 349);
}
void USkeletalMesh::M_SetSkelMirrorAxis(const TEnumAsByte<EAxis>& value) {
	Write((byte*)this + 349, value);
}
// Member Getter and Setter of SkelMirrorFlipAxis
// Declaration: TEnumAsByte<EAxis> SkelMirrorFlipAxis
TEnumAsByte<EAxis> USkeletalMesh::M_GetSkelMirrorFlipAxis() const {
	return Read<TEnumAsByte<EAxis>>((byte*)this + 350);
}
TEnumAsByte<EAxis>* USkeletalMesh::M_PtrGetSkelMirrorFlipAxis() {
	return reinterpret_cast<TEnumAsByte<EAxis>*>((byte*)this + 350);
}
void USkeletalMesh::M_SetSkelMirrorFlipAxis(const TEnumAsByte<EAxis>& value) {
	Write((byte*)this + 350, value);
}
// Member Getter and Setter of bUseFullPrecisionUVs
// Declaration: unsigned char bUseFullPrecisionUVs : 1
unsigned char USkeletalMesh::M_GetbUseFullPrecisionUVs() const {
	return Read<unsigned char>((byte*)this + 351);
}
unsigned char* USkeletalMesh::M_PtrGetbUseFullPrecisionUVs() {
	return reinterpret_cast<unsigned char*>((byte*)this + 351);
}
void USkeletalMesh::M_SetbUseFullPrecisionUVs(const unsigned char& value) {
	Write((byte*)this + 351, value);
}
// Member Getter and Setter of bUseHighPrecisionTangentBasis
// Declaration: unsigned char bUseHighPrecisionTangentBasis : 1
unsigned char USkeletalMesh::M_GetbUseHighPrecisionTangentBasis() const {
	return Read<unsigned char>((byte*)this + 351);
}
unsigned char* USkeletalMesh::M_PtrGetbUseHighPrecisionTangentBasis() {
	return reinterpret_cast<unsigned char*>((byte*)this + 351);
}
void USkeletalMesh::M_SetbUseHighPrecisionTangentBasis(const unsigned char& value) {
	Write((byte*)this + 351, value);
}
// Member Getter and Setter of bHasBeenSimplified
// Declaration: unsigned char bHasBeenSimplified : 1
unsigned char USkeletalMesh::M_GetbHasBeenSimplified() const {
	return Read<unsigned char>((byte*)this + 351);
}
unsigned char* USkeletalMesh::M_PtrGetbHasBeenSimplified() {
	return reinterpret_cast<unsigned char*>((byte*)this + 351);
}
void USkeletalMesh::M_SetbHasBeenSimplified(const unsigned char& value) {
	Write((byte*)this + 351, value);
}
// Member Getter and Setter of bHasVertexColors
// Declaration: unsigned char bHasVertexColors : 1
unsigned char USkeletalMesh::M_GetbHasVertexColors() const {
	return Read<unsigned char>((byte*)this + 351);
}
unsigned char* USkeletalMesh::M_PtrGetbHasVertexColors() {
	return reinterpret_cast<unsigned char*>((byte*)this + 351);
}
void USkeletalMesh::M_SetbHasVertexColors(const unsigned char& value) {
	Write((byte*)this + 351, value);
}
// Member Getter and Setter of bEnablePerPolyCollision
// Declaration: unsigned char bEnablePerPolyCollision : 1
unsigned char USkeletalMesh::M_GetbEnablePerPolyCollision() const {
	return Read<unsigned char>((byte*)this + 351);
}
unsigned char* USkeletalMesh::M_PtrGetbEnablePerPolyCollision() {
	return reinterpret_cast<unsigned char*>((byte*)this + 351);
}
void USkeletalMesh::M_SetbEnablePerPolyCollision(const unsigned char& value) {
	Write((byte*)this + 351, value);
}
// Member Getter and Setter of BodySetup
// Declaration: class UBodySetup* BodySetup
class UBodySetup* USkeletalMesh::M_GetBodySetup() const {
	return Read<class UBodySetup*>((byte*)this + 352);
}
class UBodySetup** USkeletalMesh::M_PtrGetBodySetup() {
	return reinterpret_cast<class UBodySetup**>((byte*)this + 352);
}
void USkeletalMesh::M_SetBodySetup(const class UBodySetup*& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of PhysicsAsset
// Declaration: class UPhysicsAsset* PhysicsAsset
class UPhysicsAsset* USkeletalMesh::M_GetPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 360);
}
class UPhysicsAsset** USkeletalMesh::M_PtrGetPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 360);
}
void USkeletalMesh::M_SetPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of ShadowPhysicsAsset
// Declaration: class UPhysicsAsset* ShadowPhysicsAsset
class UPhysicsAsset* USkeletalMesh::M_GetShadowPhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 368);
}
class UPhysicsAsset** USkeletalMesh::M_PtrGetShadowPhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 368);
}
void USkeletalMesh::M_SetShadowPhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of NodeMappingData
// Declaration: TArray<class UNodeMappingContainer*> NodeMappingData
TArray<class UNodeMappingContainer*> USkeletalMesh::M_GetNodeMappingData() const {
	return Read<TArray<class UNodeMappingContainer*>>((byte*)this + 376);
}
TArray<class UNodeMappingContainer*>* USkeletalMesh::M_PtrGetNodeMappingData() {
	return reinterpret_cast<TArray<class UNodeMappingContainer*>*>((byte*)this + 376);
}
void USkeletalMesh::M_SetNodeMappingData(const TArray<class UNodeMappingContainer*>& value) {
	Write((byte*)this + 376, value);
}
// Member Getter and Setter of bSupportRayTracing
// Declaration: unsigned char bSupportRayTracing : 1
unsigned char USkeletalMesh::M_GetbSupportRayTracing() const {
	return Read<unsigned char>((byte*)this + 392);
}
unsigned char* USkeletalMesh::M_PtrGetbSupportRayTracing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 392);
}
void USkeletalMesh::M_SetbSupportRayTracing(const unsigned char& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of MorphTargets
// Declaration: TArray<class UMorphTarget*> MorphTargets
TArray<class UMorphTarget*> USkeletalMesh::M_GetMorphTargets() const {
	return Read<TArray<class UMorphTarget*>>((byte*)this + 400);
}
TArray<class UMorphTarget*>* USkeletalMesh::M_PtrGetMorphTargets() {
	return reinterpret_cast<TArray<class UMorphTarget*>*>((byte*)this + 400);
}
void USkeletalMesh::M_SetMorphTargets(const TArray<class UMorphTarget*>& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of PostProcessAnimBlueprint
// Declaration: class UAnimInstance* PostProcessAnimBlueprint
class UAnimInstance* USkeletalMesh::M_GetPostProcessAnimBlueprint() const {
	return Read<class UAnimInstance*>((byte*)this + 792);
}
class UAnimInstance** USkeletalMesh::M_PtrGetPostProcessAnimBlueprint() {
	return reinterpret_cast<class UAnimInstance**>((byte*)this + 792);
}
void USkeletalMesh::M_SetPostProcessAnimBlueprint(const class UAnimInstance*& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of MeshClothingAssets
// Declaration: TArray<class UClothingAssetBase*> MeshClothingAssets
TArray<class UClothingAssetBase*> USkeletalMesh::M_GetMeshClothingAssets() const {
	return Read<TArray<class UClothingAssetBase*>>((byte*)this + 800);
}
TArray<class UClothingAssetBase*>* USkeletalMesh::M_PtrGetMeshClothingAssets() {
	return reinterpret_cast<TArray<class UClothingAssetBase*>*>((byte*)this + 800);
}
void USkeletalMesh::M_SetMeshClothingAssets(const TArray<class UClothingAssetBase*>& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of SamplingInfo
// Declaration: struct FSkeletalMeshSamplingInfo SamplingInfo
struct FSkeletalMeshSamplingInfo USkeletalMesh::M_GetSamplingInfo() const {
	return Read<struct FSkeletalMeshSamplingInfo>((byte*)this + 816);
}
struct FSkeletalMeshSamplingInfo* USkeletalMesh::M_PtrGetSamplingInfo() {
	return reinterpret_cast<struct FSkeletalMeshSamplingInfo*>((byte*)this + 816);
}
void USkeletalMesh::M_SetSamplingInfo(const struct FSkeletalMeshSamplingInfo& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of AssetUserData
// Declaration: TArray<class UAssetUserData*> AssetUserData
TArray<class UAssetUserData*> USkeletalMesh::M_GetAssetUserData() const {
	return Read<TArray<class UAssetUserData*>>((byte*)this + 864);
}
TArray<class UAssetUserData*>* USkeletalMesh::M_PtrGetAssetUserData() {
	return reinterpret_cast<TArray<class UAssetUserData*>*>((byte*)this + 864);
}
void USkeletalMesh::M_SetAssetUserData(const TArray<class UAssetUserData*>& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of Sockets
// Declaration: TArray<class USkeletalMeshSocket*> Sockets
TArray<class USkeletalMeshSocket*> USkeletalMesh::M_GetSockets() const {
	return Read<TArray<class USkeletalMeshSocket*>>((byte*)this + 880);
}
TArray<class USkeletalMeshSocket*>* USkeletalMesh::M_PtrGetSockets() {
	return reinterpret_cast<TArray<class USkeletalMeshSocket*>*>((byte*)this + 880);
}
void USkeletalMesh::M_SetSockets(const TArray<class USkeletalMeshSocket*>& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of SkinWeightProfiles
// Declaration: TArray<struct FSkinWeightProfileInfo> SkinWeightProfiles
TArray<struct FSkinWeightProfileInfo> USkeletalMesh::M_GetSkinWeightProfiles() const {
	return Read<TArray<struct FSkinWeightProfileInfo>>((byte*)this + 912);
}
TArray<struct FSkinWeightProfileInfo>* USkeletalMesh::M_PtrGetSkinWeightProfiles() {
	return reinterpret_cast<TArray<struct FSkinWeightProfileInfo>*>((byte*)this + 912);
}
void USkeletalMesh::M_SetSkinWeightProfiles(const TArray<struct FSkinWeightProfileInfo>& value) {
	Write((byte*)this + 912, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SkeletalMesh.FindSocket
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USkeletalMeshSocket*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeletalMeshSocket* USkeletalMesh::FindSocket(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.FindSocket");

	struct USkeletalMesh_FindSocket_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		class USkeletalMeshSocket* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMesh_FindSocket_Params params;
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
// Function Engine.SkeletalMesh.FindSocketAndIndex
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USkeletalMeshSocket*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeletalMeshSocket* USkeletalMesh::FindSocketAndIndex(struct FName InSocketName, int32_t* OutIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.FindSocketAndIndex");

	struct USkeletalMesh_FindSocketAndIndex_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		int32_t OutIndex;			//Offset: 8 | ElementSize: 4
		class USkeletalMeshSocket* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	USkeletalMesh_FindSocketAndIndex_Params params;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.FindSocketInfo
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: OutBoneIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USkeletalMeshSocket*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeletalMeshSocket* USkeletalMesh::FindSocketInfo(struct FName InSocketName, struct FTransform* OutTransform, int32_t* OutBoneIndex, int32_t* OutIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.FindSocketInfo");

	struct USkeletalMesh_FindSocketInfo_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		struct FTransform OutTransform;			//Offset: 16 | ElementSize: 48
		int32_t OutBoneIndex;			//Offset: 64 | ElementSize: 4
		int32_t OutIndex;			//Offset: 68 | ElementSize: 4
		class USkeletalMeshSocket* ReturnValue;			//Offset: 72 | ElementSize: 8
	};
	USkeletalMesh_FindSocketInfo_Params params;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
	if (OutBoneIndex != nullptr)
		*OutBoneIndex = params.OutBoneIndex;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetBounds
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FBoxSphereBounds	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FBoxSphereBounds USkeletalMesh::GetBounds()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetBounds");

	struct USkeletalMesh_GetBounds_Params {
		struct FBoxSphereBounds ReturnValue;			//Offset: 0 | ElementSize: 28
	};
	USkeletalMesh_GetBounds_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetDefaultAnimatingRig
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TAssetPtr<class UObject>	Flags: Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TAssetPtr<class UObject> USkeletalMesh::GetDefaultAnimatingRig()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetDefaultAnimatingRig");

	struct USkeletalMesh_GetDefaultAnimatingRig_Params {
		TAssetPtr<class UObject> ReturnValue;			//Offset: 0 | ElementSize: 40
	};
	USkeletalMesh_GetDefaultAnimatingRig_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetImportedBounds
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FBoxSphereBounds	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FBoxSphereBounds USkeletalMesh::GetImportedBounds()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetImportedBounds");

	struct USkeletalMesh_GetImportedBounds_Params {
		struct FBoxSphereBounds ReturnValue;			//Offset: 0 | ElementSize: 28
	};
	USkeletalMesh_GetImportedBounds_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetLODSettings
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class USkeletalMeshLODSettings*	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeletalMeshLODSettings* USkeletalMesh::GetLODSettings()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetLODSettings");

	struct USkeletalMesh_GetLODSettings_Params {
		class USkeletalMeshLODSettings* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMesh_GetLODSettings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetMaterials
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<struct FSkeletalMaterial>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FSkeletalMaterial> USkeletalMesh::GetMaterials()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetMaterials");

	struct USkeletalMesh_GetMaterials_Params {
		TArray<struct FSkeletalMaterial> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_GetMaterials_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetMeshClothingAssets
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UClothingAssetBase*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UClothingAssetBase*> USkeletalMesh::GetMeshClothingAssets()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetMeshClothingAssets");

	struct USkeletalMesh_GetMeshClothingAssets_Params {
		TArray<class UClothingAssetBase*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_GetMeshClothingAssets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetMorphTargets
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UMorphTarget*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UMorphTarget*> USkeletalMesh::GetMorphTargets()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetMorphTargets");

	struct USkeletalMesh_GetMorphTargets_Params {
		TArray<class UMorphTarget*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_GetMorphTargets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetNodeMappingContainer
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: SourceAsset	Type: class UBlueprint*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UNodeMappingContainer*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UNodeMappingContainer* USkeletalMesh::GetNodeMappingContainer(class UBlueprint* SourceAsset)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetNodeMappingContainer");

	struct USkeletalMesh_GetNodeMappingContainer_Params {
		class UBlueprint* SourceAsset;			//Offset: 0 | ElementSize: 8
		class UNodeMappingContainer* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMesh_GetNodeMappingContainer_Params params;
	params.SourceAsset = SourceAsset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetNodeMappingData
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UNodeMappingContainer*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UNodeMappingContainer*> USkeletalMesh::GetNodeMappingData()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetNodeMappingData");

	struct USkeletalMesh_GetNodeMappingData_Params {
		TArray<class UNodeMappingContainer*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_GetNodeMappingData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetPhysicsAsset
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UPhysicsAsset*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicsAsset* USkeletalMesh::GetPhysicsAsset()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetPhysicsAsset");

	struct USkeletalMesh_GetPhysicsAsset_Params {
		class UPhysicsAsset* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMesh_GetPhysicsAsset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetShadowPhysicsAsset
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UPhysicsAsset*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicsAsset* USkeletalMesh::GetShadowPhysicsAsset()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetShadowPhysicsAsset");

	struct USkeletalMesh_GetShadowPhysicsAsset_Params {
		class UPhysicsAsset* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMesh_GetShadowPhysicsAsset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetSkeleton
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class USkeleton*	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeleton* USkeletalMesh::GetSkeleton()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetSkeleton");

	struct USkeletalMesh_GetSkeleton_Params {
		class USkeleton* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMesh_GetSkeleton_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.GetSocketByIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USkeletalMeshSocket*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeletalMeshSocket* USkeletalMesh::GetSocketByIndex(int32_t Index)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.GetSocketByIndex");

	struct USkeletalMesh_GetSocketByIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		class USkeletalMeshSocket* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMesh_GetSocketByIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.IsSectionUsingCloth
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSectionIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bCheckCorrespondingSections	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMesh::IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.IsSectionUsingCloth");

	struct USkeletalMesh_IsSectionUsingCloth_Params {
		int32_t InSectionIndex;			//Offset: 0 | ElementSize: 4
		bool bCheckCorrespondingSections;			//Offset: 4 | ElementSize: 1
		bool ReturnValue;			//Offset: 5 | ElementSize: 1
	};
	USkeletalMesh_IsSectionUsingCloth_Params params;
	params.InSectionIndex = InSectionIndex;
	params.bCheckCorrespondingSections = bCheckCorrespondingSections;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.K2_GetAllMorphTargetNames
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> USkeletalMesh::K2_GetAllMorphTargetNames()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.K2_GetAllMorphTargetNames");

	struct USkeletalMesh_K2_GetAllMorphTargetNames_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_K2_GetAllMorphTargetNames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.NumSockets
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t USkeletalMesh::NumSockets()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.NumSockets");

	struct USkeletalMesh_NumSockets_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMesh_NumSockets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.SetDefaultAnimatingRig
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAnimatingRig	Type: TAssetPtr<class UObject>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMesh::SetDefaultAnimatingRig(TAssetPtr<class UObject> InAnimatingRig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.SetDefaultAnimatingRig");

	struct USkeletalMesh_SetDefaultAnimatingRig_Params {
		TAssetPtr<class UObject> InAnimatingRig;			//Offset: 0 | ElementSize: 40
	};
	USkeletalMesh_SetDefaultAnimatingRig_Params params;
	params.InAnimatingRig = InAnimatingRig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.SetLODSettings
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InLODSettings	Type: class USkeletalMeshLODSettings*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMesh::SetLODSettings(class USkeletalMeshLODSettings* InLODSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.SetLODSettings");

	struct USkeletalMesh_SetLODSettings_Params {
		class USkeletalMeshLODSettings* InLODSettings;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMesh_SetLODSettings_Params params;
	params.InLODSettings = InLODSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.SetMaterials
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InMaterials	Type: TArray<struct FSkeletalMaterial>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMesh::SetMaterials(const TArray<struct FSkeletalMaterial>& InMaterials) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.SetMaterials");

	struct USkeletalMesh_SetMaterials_Params {
		TArray<struct FSkeletalMaterial> InMaterials;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_SetMaterials_Params params;
	params.InMaterials = InMaterials;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.SetMeshClothingAssets
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InMeshClothingAssets	Type: TArray<class UClothingAssetBase*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMesh::SetMeshClothingAssets(const TArray<class UClothingAssetBase*>& InMeshClothingAssets) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.SetMeshClothingAssets");

	struct USkeletalMesh_SetMeshClothingAssets_Params {
		TArray<class UClothingAssetBase*> InMeshClothingAssets;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_SetMeshClothingAssets_Params params;
	params.InMeshClothingAssets = InMeshClothingAssets;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMesh.SetMorphTargets
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InMorphTargets	Type: TArray<class UMorphTarget*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMesh::SetMorphTargets(const TArray<class UMorphTarget*>& InMorphTargets) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMesh.SetMorphTargets");

	struct USkeletalMesh_SetMorphTargets_Params {
		TArray<class UMorphTarget*> InMorphTargets;			//Offset: 0 | ElementSize: 16
	};
	USkeletalMesh_SetMorphTargets_Params params;
	params.InMorphTargets = InMorphTargets;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}