#include "../SDK.h"
#include "MaterialInstance.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PhysMaterial
// Declaration: class UPhysicalMaterial* PhysMaterial
class UPhysicalMaterial* UMaterialInstance::M_GetPhysMaterial() const {
	return Read<class UPhysicalMaterial*>((byte*)this + 136);
}
class UPhysicalMaterial** UMaterialInstance::M_PtrGetPhysMaterial() {
	return reinterpret_cast<class UPhysicalMaterial**>((byte*)this + 136);
}
void UMaterialInstance::M_SetPhysMaterial(const class UPhysicalMaterial*& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of PhysicalMaterialMap
// Declaration: class UPhysicalMaterial* PhysicalMaterialMap[8]
class UPhysicalMaterial* UMaterialInstance::M_GetPhysicalMaterialMap() const {
	return Read<class UPhysicalMaterial*>((byte*)this + 144);
}
class UPhysicalMaterial** UMaterialInstance::M_PtrGetPhysicalMaterialMap() {
	return reinterpret_cast<class UPhysicalMaterial**>((byte*)this + 144);
}
void UMaterialInstance::M_SetPhysicalMaterialMap(const class UPhysicalMaterial*& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of Parent
// Declaration: class UMaterialInterface* Parent
class UMaterialInterface* UMaterialInstance::M_GetParent() const {
	return Read<class UMaterialInterface*>((byte*)this + 208);
}
class UMaterialInterface** UMaterialInstance::M_PtrGetParent() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 208);
}
void UMaterialInstance::M_SetParent(const class UMaterialInterface*& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of bHasStaticPermutationResource
// Declaration: unsigned char bHasStaticPermutationResource : 1
unsigned char UMaterialInstance::M_GetbHasStaticPermutationResource() const {
	return Read<unsigned char>((byte*)this + 216);
}
unsigned char* UMaterialInstance::M_PtrGetbHasStaticPermutationResource() {
	return reinterpret_cast<unsigned char*>((byte*)this + 216);
}
void UMaterialInstance::M_SetbHasStaticPermutationResource(const unsigned char& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of bOverrideSubsurfaceProfile
// Declaration: unsigned char bOverrideSubsurfaceProfile : 1
unsigned char UMaterialInstance::M_GetbOverrideSubsurfaceProfile() const {
	return Read<unsigned char>((byte*)this + 216);
}
unsigned char* UMaterialInstance::M_PtrGetbOverrideSubsurfaceProfile() {
	return reinterpret_cast<unsigned char*>((byte*)this + 216);
}
void UMaterialInstance::M_SetbOverrideSubsurfaceProfile(const unsigned char& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of ScalarParameterValues
// Declaration: TArray<struct FScalarParameterValue> ScalarParameterValues
TArray<struct FScalarParameterValue> UMaterialInstance::M_GetScalarParameterValues() const {
	return Read<TArray<struct FScalarParameterValue>>((byte*)this + 224);
}
TArray<struct FScalarParameterValue>* UMaterialInstance::M_PtrGetScalarParameterValues() {
	return reinterpret_cast<TArray<struct FScalarParameterValue>*>((byte*)this + 224);
}
void UMaterialInstance::M_SetScalarParameterValues(const TArray<struct FScalarParameterValue>& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of VectorParameterValues
// Declaration: TArray<struct FVectorParameterValue> VectorParameterValues
TArray<struct FVectorParameterValue> UMaterialInstance::M_GetVectorParameterValues() const {
	return Read<TArray<struct FVectorParameterValue>>((byte*)this + 240);
}
TArray<struct FVectorParameterValue>* UMaterialInstance::M_PtrGetVectorParameterValues() {
	return reinterpret_cast<TArray<struct FVectorParameterValue>*>((byte*)this + 240);
}
void UMaterialInstance::M_SetVectorParameterValues(const TArray<struct FVectorParameterValue>& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of TextureParameterValues
// Declaration: TArray<struct FTextureParameterValue> TextureParameterValues
TArray<struct FTextureParameterValue> UMaterialInstance::M_GetTextureParameterValues() const {
	return Read<TArray<struct FTextureParameterValue>>((byte*)this + 256);
}
TArray<struct FTextureParameterValue>* UMaterialInstance::M_PtrGetTextureParameterValues() {
	return reinterpret_cast<TArray<struct FTextureParameterValue>*>((byte*)this + 256);
}
void UMaterialInstance::M_SetTextureParameterValues(const TArray<struct FTextureParameterValue>& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of RuntimeVirtualTextureParameterValues
// Declaration: TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues
TArray<struct FRuntimeVirtualTextureParameterValue> UMaterialInstance::M_GetRuntimeVirtualTextureParameterValues() const {
	return Read<TArray<struct FRuntimeVirtualTextureParameterValue>>((byte*)this + 272);
}
TArray<struct FRuntimeVirtualTextureParameterValue>* UMaterialInstance::M_PtrGetRuntimeVirtualTextureParameterValues() {
	return reinterpret_cast<TArray<struct FRuntimeVirtualTextureParameterValue>*>((byte*)this + 272);
}
void UMaterialInstance::M_SetRuntimeVirtualTextureParameterValues(const TArray<struct FRuntimeVirtualTextureParameterValue>& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of FontParameterValues
// Declaration: TArray<struct FFontParameterValue> FontParameterValues
TArray<struct FFontParameterValue> UMaterialInstance::M_GetFontParameterValues() const {
	return Read<TArray<struct FFontParameterValue>>((byte*)this + 288);
}
TArray<struct FFontParameterValue>* UMaterialInstance::M_PtrGetFontParameterValues() {
	return reinterpret_cast<TArray<struct FFontParameterValue>*>((byte*)this + 288);
}
void UMaterialInstance::M_SetFontParameterValues(const TArray<struct FFontParameterValue>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of BasePropertyOverrides
// Declaration: struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides
struct FMaterialInstanceBasePropertyOverrides UMaterialInstance::M_GetBasePropertyOverrides() const {
	return Read<struct FMaterialInstanceBasePropertyOverrides>((byte*)this + 304);
}
struct FMaterialInstanceBasePropertyOverrides* UMaterialInstance::M_PtrGetBasePropertyOverrides() {
	return reinterpret_cast<struct FMaterialInstanceBasePropertyOverrides*>((byte*)this + 304);
}
void UMaterialInstance::M_SetBasePropertyOverrides(const struct FMaterialInstanceBasePropertyOverrides& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of StaticParameters
// Declaration: struct FStaticParameterSet StaticParameters
struct FStaticParameterSet UMaterialInstance::M_GetStaticParameters() const {
	return Read<struct FStaticParameterSet>((byte*)this + 328);
}
struct FStaticParameterSet* UMaterialInstance::M_PtrGetStaticParameters() {
	return reinterpret_cast<struct FStaticParameterSet*>((byte*)this + 328);
}
void UMaterialInstance::M_SetStaticParameters(const struct FStaticParameterSet& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of CachedLayerParameters
// Declaration: struct FMaterialCachedParameters CachedLayerParameters
struct FMaterialCachedParameters UMaterialInstance::M_GetCachedLayerParameters() const {
	return Read<struct FMaterialCachedParameters>((byte*)this + 392);
}
struct FMaterialCachedParameters* UMaterialInstance::M_PtrGetCachedLayerParameters() {
	return reinterpret_cast<struct FMaterialCachedParameters*>((byte*)this + 392);
}
void UMaterialInstance::M_SetCachedLayerParameters(const struct FMaterialCachedParameters& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of CachedReferencedTextures
// Declaration: TArray<class UObject*> CachedReferencedTextures
TArray<class UObject*> UMaterialInstance::M_GetCachedReferencedTextures() const {
	return Read<TArray<class UObject*>>((byte*)this + 728);
}
TArray<class UObject*>* UMaterialInstance::M_PtrGetCachedReferencedTextures() {
	return reinterpret_cast<TArray<class UObject*>*>((byte*)this + 728);
}
void UMaterialInstance::M_SetCachedReferencedTextures(const TArray<class UObject*>& value) {
	Write((byte*)this + 728, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}