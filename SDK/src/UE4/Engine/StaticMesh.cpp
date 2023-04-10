#include "../SDK.h"
#include "StaticMesh.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MinLOD
// Declaration: struct FPerPlatformInt MinLOD
struct FPerPlatformInt UStaticMesh::M_GetMinLOD() const {
	return Read<struct FPerPlatformInt>((byte*)this + 128);
}
struct FPerPlatformInt* UStaticMesh::M_PtrGetMinLOD() {
	return reinterpret_cast<struct FPerPlatformInt*>((byte*)this + 128);
}
void UStaticMesh::M_SetMinLOD(const struct FPerPlatformInt& value) {
	Write((byte*)this + 128, value);
}
// Member Getter and Setter of LpvBiasMultiplier
// Declaration: float LpvBiasMultiplier
float UStaticMesh::M_GetLpvBiasMultiplier() const {
	return Read<float>((byte*)this + 132);
}
float* UStaticMesh::M_PtrGetLpvBiasMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 132);
}
void UStaticMesh::M_SetLpvBiasMultiplier(const float& value) {
	Write((byte*)this + 132, value);
}
// Member Getter and Setter of StaticMaterials
// Declaration: TArray<struct FStaticMaterial> StaticMaterials
TArray<struct FStaticMaterial> UStaticMesh::M_GetStaticMaterials() const {
	return Read<TArray<struct FStaticMaterial>>((byte*)this + 136);
}
TArray<struct FStaticMaterial>* UStaticMesh::M_PtrGetStaticMaterials() {
	return reinterpret_cast<TArray<struct FStaticMaterial>*>((byte*)this + 136);
}
void UStaticMesh::M_SetStaticMaterials(const TArray<struct FStaticMaterial>& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of LightmapUVDensity
// Declaration: float LightmapUVDensity
float UStaticMesh::M_GetLightmapUVDensity() const {
	return Read<float>((byte*)this + 152);
}
float* UStaticMesh::M_PtrGetLightmapUVDensity() {
	return reinterpret_cast<float*>((byte*)this + 152);
}
void UStaticMesh::M_SetLightmapUVDensity(const float& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of LightMapResolution
// Declaration: int32_t LightMapResolution
int32_t UStaticMesh::M_GetLightMapResolution() const {
	return Read<int32_t>((byte*)this + 156);
}
int32_t* UStaticMesh::M_PtrGetLightMapResolution() {
	return reinterpret_cast<int32_t*>((byte*)this + 156);
}
void UStaticMesh::M_SetLightMapResolution(const int32_t& value) {
	Write((byte*)this + 156, value);
}
// Member Getter and Setter of LightMapCoordinateIndex
// Declaration: int32_t LightMapCoordinateIndex
int32_t UStaticMesh::M_GetLightMapCoordinateIndex() const {
	return Read<int32_t>((byte*)this + 160);
}
int32_t* UStaticMesh::M_PtrGetLightMapCoordinateIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 160);
}
void UStaticMesh::M_SetLightMapCoordinateIndex(const int32_t& value) {
	Write((byte*)this + 160, value);
}
// Member Getter and Setter of DistanceFieldSelfShadowBias
// Declaration: float DistanceFieldSelfShadowBias
float UStaticMesh::M_GetDistanceFieldSelfShadowBias() const {
	return Read<float>((byte*)this + 164);
}
float* UStaticMesh::M_PtrGetDistanceFieldSelfShadowBias() {
	return reinterpret_cast<float*>((byte*)this + 164);
}
void UStaticMesh::M_SetDistanceFieldSelfShadowBias(const float& value) {
	Write((byte*)this + 164, value);
}
// Member Getter and Setter of BodySetup
// Declaration: class UBodySetup* BodySetup
class UBodySetup* UStaticMesh::M_GetBodySetup() const {
	return Read<class UBodySetup*>((byte*)this + 168);
}
class UBodySetup** UStaticMesh::M_PtrGetBodySetup() {
	return reinterpret_cast<class UBodySetup**>((byte*)this + 168);
}
void UStaticMesh::M_SetBodySetup(const class UBodySetup*& value) {
	Write((byte*)this + 168, value);
}
// Member Getter and Setter of LODForCollision
// Declaration: int32_t LODForCollision
int32_t UStaticMesh::M_GetLODForCollision() const {
	return Read<int32_t>((byte*)this + 176);
}
int32_t* UStaticMesh::M_PtrGetLODForCollision() {
	return reinterpret_cast<int32_t*>((byte*)this + 176);
}
void UStaticMesh::M_SetLODForCollision(const int32_t& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of bGenerateMeshDistanceField
// Declaration: unsigned char bGenerateMeshDistanceField : 1
unsigned char UStaticMesh::M_GetbGenerateMeshDistanceField() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbGenerateMeshDistanceField() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbGenerateMeshDistanceField(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bStripComplexCollisionForConsole
// Declaration: unsigned char bStripComplexCollisionForConsole : 1
unsigned char UStaticMesh::M_GetbStripComplexCollisionForConsole() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbStripComplexCollisionForConsole() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbStripComplexCollisionForConsole(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bHasNavigationData
// Declaration: unsigned char bHasNavigationData : 1
unsigned char UStaticMesh::M_GetbHasNavigationData() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbHasNavigationData() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbHasNavigationData(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bSupportUniformlyDistributedSampling
// Declaration: unsigned char bSupportUniformlyDistributedSampling : 1
unsigned char UStaticMesh::M_GetbSupportUniformlyDistributedSampling() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbSupportUniformlyDistributedSampling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbSupportUniformlyDistributedSampling(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bSupportPhysicalMaterialMasks
// Declaration: unsigned char bSupportPhysicalMaterialMasks : 1
unsigned char UStaticMesh::M_GetbSupportPhysicalMaterialMasks() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbSupportPhysicalMaterialMasks() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbSupportPhysicalMaterialMasks(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bSupportRayTracing
// Declaration: unsigned char bSupportRayTracing : 1
unsigned char UStaticMesh::M_GetbSupportRayTracing() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbSupportRayTracing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbSupportRayTracing(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bIsBuiltAtRuntime
// Declaration: unsigned char bIsBuiltAtRuntime : 1
unsigned char UStaticMesh::M_GetbIsBuiltAtRuntime() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UStaticMesh::M_PtrGetbIsBuiltAtRuntime() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UStaticMesh::M_SetbIsBuiltAtRuntime(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of bAllowCPUAccess
// Declaration: unsigned char bAllowCPUAccess : 1
unsigned char UStaticMesh::M_GetbAllowCPUAccess() const {
	return Read<unsigned char>((byte*)this + 181);
}
unsigned char* UStaticMesh::M_PtrGetbAllowCPUAccess() {
	return reinterpret_cast<unsigned char*>((byte*)this + 181);
}
void UStaticMesh::M_SetbAllowCPUAccess(const unsigned char& value) {
	Write((byte*)this + 181, value);
}
// Member Getter and Setter of bSupportGpuUniformlyDistributedSampling
// Declaration: unsigned char bSupportGpuUniformlyDistributedSampling : 1
unsigned char UStaticMesh::M_GetbSupportGpuUniformlyDistributedSampling() const {
	return Read<unsigned char>((byte*)this + 181);
}
unsigned char* UStaticMesh::M_PtrGetbSupportGpuUniformlyDistributedSampling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 181);
}
void UStaticMesh::M_SetbSupportGpuUniformlyDistributedSampling(const unsigned char& value) {
	Write((byte*)this + 181, value);
}
// Member Getter and Setter of Sockets
// Declaration: TArray<class UStaticMeshSocket*> Sockets
TArray<class UStaticMeshSocket*> UStaticMesh::M_GetSockets() const {
	return Read<TArray<class UStaticMeshSocket*>>((byte*)this + 216);
}
TArray<class UStaticMeshSocket*>* UStaticMesh::M_PtrGetSockets() {
	return reinterpret_cast<TArray<class UStaticMeshSocket*>*>((byte*)this + 216);
}
void UStaticMesh::M_SetSockets(const TArray<class UStaticMeshSocket*>& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of PositiveBoundsExtension
// Declaration: struct FVector PositiveBoundsExtension
struct FVector UStaticMesh::M_GetPositiveBoundsExtension() const {
	return Read<struct FVector>((byte*)this + 248);
}
struct FVector* UStaticMesh::M_PtrGetPositiveBoundsExtension() {
	return reinterpret_cast<struct FVector*>((byte*)this + 248);
}
void UStaticMesh::M_SetPositiveBoundsExtension(const struct FVector& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of NegativeBoundsExtension
// Declaration: struct FVector NegativeBoundsExtension
struct FVector UStaticMesh::M_GetNegativeBoundsExtension() const {
	return Read<struct FVector>((byte*)this + 260);
}
struct FVector* UStaticMesh::M_PtrGetNegativeBoundsExtension() {
	return reinterpret_cast<struct FVector*>((byte*)this + 260);
}
void UStaticMesh::M_SetNegativeBoundsExtension(const struct FVector& value) {
	Write((byte*)this + 260, value);
}
// Member Getter and Setter of ExtendedBounds
// Declaration: struct FBoxSphereBounds ExtendedBounds
struct FBoxSphereBounds UStaticMesh::M_GetExtendedBounds() const {
	return Read<struct FBoxSphereBounds>((byte*)this + 272);
}
struct FBoxSphereBounds* UStaticMesh::M_PtrGetExtendedBounds() {
	return reinterpret_cast<struct FBoxSphereBounds*>((byte*)this + 272);
}
void UStaticMesh::M_SetExtendedBounds(const struct FBoxSphereBounds& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of ElementToIgnoreForTexFactor
// Declaration: int32_t ElementToIgnoreForTexFactor
int32_t UStaticMesh::M_GetElementToIgnoreForTexFactor() const {
	return Read<int32_t>((byte*)this + 300);
}
int32_t* UStaticMesh::M_PtrGetElementToIgnoreForTexFactor() {
	return reinterpret_cast<int32_t*>((byte*)this + 300);
}
void UStaticMesh::M_SetElementToIgnoreForTexFactor(const int32_t& value) {
	Write((byte*)this + 300, value);
}
// Member Getter and Setter of AssetUserData
// Declaration: TArray<class UAssetUserData*> AssetUserData
TArray<class UAssetUserData*> UStaticMesh::M_GetAssetUserData() const {
	return Read<TArray<class UAssetUserData*>>((byte*)this + 304);
}
TArray<class UAssetUserData*>* UStaticMesh::M_PtrGetAssetUserData() {
	return reinterpret_cast<TArray<class UAssetUserData*>*>((byte*)this + 304);
}
void UStaticMesh::M_SetAssetUserData(const TArray<class UAssetUserData*>& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of EditableMesh
// Declaration: class UObject* EditableMesh
class UObject* UStaticMesh::M_GetEditableMesh() const {
	return Read<class UObject*>((byte*)this + 320);
}
class UObject** UStaticMesh::M_PtrGetEditableMesh() {
	return reinterpret_cast<class UObject**>((byte*)this + 320);
}
void UStaticMesh::M_SetEditableMesh(const class UObject*& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of NavCollision
// Declaration: class UNavCollisionBase* NavCollision
class UNavCollisionBase* UStaticMesh::M_GetNavCollision() const {
	return Read<class UNavCollisionBase*>((byte*)this + 328);
}
class UNavCollisionBase** UStaticMesh::M_PtrGetNavCollision() {
	return reinterpret_cast<class UNavCollisionBase**>((byte*)this + 328);
}
void UStaticMesh::M_SetNavCollision(const class UNavCollisionBase*& value) {
	Write((byte*)this + 328, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.StaticMesh.AddMaterial
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable
// Params:
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UStaticMesh::AddMaterial(class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.AddMaterial");

	struct UStaticMesh_AddMaterial_Params {
		class UMaterialInterface* Material;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UStaticMesh_AddMaterial_Params params;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.AddSocket
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable
// Params:
// Name: Socket	Type: class UStaticMeshSocket*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMesh::AddSocket(class UStaticMeshSocket* Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.AddSocket");

	struct UStaticMesh_AddSocket_Params {
		class UStaticMeshSocket* Socket;			//Offset: 0 | ElementSize: 8
	};
	UStaticMesh_AddSocket_Params params;
	params.Socket = Socket;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMesh.BuildFromStaticMeshDescriptions
// Flags: Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: StaticMeshDescriptions	Type: TArray<class UStaticMeshDescription*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bBuildSimpleCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMesh::BuildFromStaticMeshDescriptions(const TArray<class UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.BuildFromStaticMeshDescriptions");

	struct UStaticMesh_BuildFromStaticMeshDescriptions_Params {
		TArray<class UStaticMeshDescription*> StaticMeshDescriptions;			//Offset: 0 | ElementSize: 16
		bool bBuildSimpleCollision;			//Offset: 16 | ElementSize: 1
	};
	UStaticMesh_BuildFromStaticMeshDescriptions_Params params;
	params.StaticMeshDescriptions = StaticMeshDescriptions;
	params.bBuildSimpleCollision = bBuildSimpleCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMesh.CreateStaticMeshDescription
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: Outer	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UStaticMeshDescription*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UStaticMeshDescription* UStaticMesh::CreateStaticMeshDescription(class UObject* Outer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.CreateStaticMeshDescription");

	struct UStaticMesh_CreateStaticMeshDescription_Params {
		class UObject* Outer;			//Offset: 0 | ElementSize: 8
		class UStaticMeshDescription* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UStaticMesh_CreateStaticMeshDescription_Params params;
	params.Outer = Outer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.FindSocket
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UStaticMeshSocket*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UStaticMeshSocket* UStaticMesh::FindSocket(struct FName InSocketName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.FindSocket");

	struct UStaticMesh_FindSocket_Params {
		struct FName InSocketName;			//Offset: 0 | ElementSize: 8
		class UStaticMeshSocket* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UStaticMesh_FindSocket_Params params;
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
// Function Engine.StaticMesh.GetBoundingBox
// Flags: Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FBox	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FBox UStaticMesh::GetBoundingBox()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetBoundingBox");

	struct UStaticMesh_GetBoundingBox_Params {
		struct FBox ReturnValue;			//Offset: 0 | ElementSize: 28
	};
	UStaticMesh_GetBoundingBox_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetBounds
// Flags: Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FBoxSphereBounds	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FBoxSphereBounds UStaticMesh::GetBounds()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetBounds");

	struct UStaticMesh_GetBounds_Params {
		struct FBoxSphereBounds ReturnValue;			//Offset: 0 | ElementSize: 28
	};
	UStaticMesh_GetBounds_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetMaterial
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: MaterialIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInterface*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInterface* UStaticMesh::GetMaterial(int32_t MaterialIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetMaterial");

	struct UStaticMesh_GetMaterial_Params {
		int32_t MaterialIndex;			//Offset: 0 | ElementSize: 4
		class UMaterialInterface* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UStaticMesh_GetMaterial_Params params;
	params.MaterialIndex = MaterialIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetMaterialIndex
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: MaterialSlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UStaticMesh::GetMaterialIndex(struct FName MaterialSlotName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetMaterialIndex");

	struct UStaticMesh_GetMaterialIndex_Params {
		struct FName MaterialSlotName;			//Offset: 0 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UStaticMesh_GetMaterialIndex_Params params;
	params.MaterialSlotName = MaterialSlotName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetMinimumLODForPlatform
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: PlatformName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UStaticMesh::GetMinimumLODForPlatform(const struct FName& PlatformName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetMinimumLODForPlatform");

	struct UStaticMesh_GetMinimumLODForPlatform_Params {
		struct FName PlatformName;			//Offset: 0 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UStaticMesh_GetMinimumLODForPlatform_Params params;
	params.PlatformName = PlatformName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetMinimumLODForPlatforms
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: PlatformMinimumLODs	Type: TMap<struct FName, int32_t>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMesh::GetMinimumLODForPlatforms(TMap<struct FName, int32_t>* PlatformMinimumLODs)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetMinimumLODForPlatforms");

	struct UStaticMesh_GetMinimumLODForPlatforms_Params {
		TMap<struct FName, int32_t> PlatformMinimumLODs;			//Offset: 0 | ElementSize: 80
	};
	UStaticMesh_GetMinimumLODForPlatforms_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PlatformMinimumLODs != nullptr)
		*PlatformMinimumLODs = params.PlatformMinimumLODs;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetNumLODs
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UStaticMesh::GetNumLODs()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetNumLODs");

	struct UStaticMesh_GetNumLODs_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UStaticMesh_GetNumLODs_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetNumSections
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InLOD	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UStaticMesh::GetNumSections(int32_t InLOD)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetNumSections");

	struct UStaticMesh_GetNumSections_Params {
		int32_t InLOD;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UStaticMesh_GetNumSections_Params params;
	params.InLOD = InLOD;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.GetStaticMaterials
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<struct FStaticMaterial>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FStaticMaterial> UStaticMesh::GetStaticMaterials()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.GetStaticMaterials");

	struct UStaticMesh_GetStaticMaterials_Params {
		TArray<struct FStaticMaterial> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UStaticMesh_GetStaticMaterials_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.StaticMesh.RemoveSocket
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable
// Params:
// Name: Socket	Type: class UStaticMeshSocket*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMesh::RemoveSocket(class UStaticMeshSocket* Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.RemoveSocket");

	struct UStaticMesh_RemoveSocket_Params {
		class UStaticMeshSocket* Socket;			//Offset: 0 | ElementSize: 8
	};
	UStaticMesh_RemoveSocket_Params params;
	params.Socket = Socket;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StaticMesh.SetStaticMaterials
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InStaticMaterials	Type: TArray<struct FStaticMaterial>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStaticMesh::SetStaticMaterials(const TArray<struct FStaticMaterial>& InStaticMaterials) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMesh.SetStaticMaterials");

	struct UStaticMesh_SetStaticMaterials_Params {
		TArray<struct FStaticMaterial> InStaticMaterials;			//Offset: 0 | ElementSize: 16
	};
	UStaticMesh_SetStaticMaterials_Params params;
	params.InStaticMaterials = InStaticMaterials;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}