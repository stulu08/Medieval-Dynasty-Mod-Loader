#include "../SDK.h"
#include "Material.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PhysMaterial
// Declaration: class UPhysicalMaterial* PhysMaterial
class UPhysicalMaterial* UMaterial::M_GetPhysMaterial() const {
	return Read<class UPhysicalMaterial*>((byte*)this + 136);
}
class UPhysicalMaterial** UMaterial::M_PtrGetPhysMaterial() {
	return reinterpret_cast<class UPhysicalMaterial**>((byte*)this + 136);
}
void UMaterial::M_SetPhysMaterial(const class UPhysicalMaterial*& value) {
	Write((byte*)this + 136, value);
}
// Member Getter and Setter of PhysMaterialMask
// Declaration: class UPhysicalMaterialMask* PhysMaterialMask
class UPhysicalMaterialMask* UMaterial::M_GetPhysMaterialMask() const {
	return Read<class UPhysicalMaterialMask*>((byte*)this + 144);
}
class UPhysicalMaterialMask** UMaterial::M_PtrGetPhysMaterialMask() {
	return reinterpret_cast<class UPhysicalMaterialMask**>((byte*)this + 144);
}
void UMaterial::M_SetPhysMaterialMask(const class UPhysicalMaterialMask*& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of PhysicalMaterialMap
// Declaration: class UPhysicalMaterial* PhysicalMaterialMap[8]
class UPhysicalMaterial* UMaterial::M_GetPhysicalMaterialMap() const {
	return Read<class UPhysicalMaterial*>((byte*)this + 152);
}
class UPhysicalMaterial** UMaterial::M_PtrGetPhysicalMaterialMap() {
	return reinterpret_cast<class UPhysicalMaterial**>((byte*)this + 152);
}
void UMaterial::M_SetPhysicalMaterialMap(const class UPhysicalMaterial*& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of Metallic
// Declaration: struct FScalarMaterialInput Metallic
struct FScalarMaterialInput UMaterial::M_GetMetallic() const {
	return Read<struct FScalarMaterialInput>((byte*)this + 216);
}
struct FScalarMaterialInput* UMaterial::M_PtrGetMetallic() {
	return reinterpret_cast<struct FScalarMaterialInput*>((byte*)this + 216);
}
void UMaterial::M_SetMetallic(const struct FScalarMaterialInput& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of Specular
// Declaration: struct FScalarMaterialInput Specular
struct FScalarMaterialInput UMaterial::M_GetSpecular() const {
	return Read<struct FScalarMaterialInput>((byte*)this + 236);
}
struct FScalarMaterialInput* UMaterial::M_PtrGetSpecular() {
	return reinterpret_cast<struct FScalarMaterialInput*>((byte*)this + 236);
}
void UMaterial::M_SetSpecular(const struct FScalarMaterialInput& value) {
	Write((byte*)this + 236, value);
}
// Member Getter and Setter of Anisotropy
// Declaration: struct FScalarMaterialInput Anisotropy
struct FScalarMaterialInput UMaterial::M_GetAnisotropy() const {
	return Read<struct FScalarMaterialInput>((byte*)this + 256);
}
struct FScalarMaterialInput* UMaterial::M_PtrGetAnisotropy() {
	return reinterpret_cast<struct FScalarMaterialInput*>((byte*)this + 256);
}
void UMaterial::M_SetAnisotropy(const struct FScalarMaterialInput& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of Normal
// Declaration: struct FVectorMaterialInput Normal
struct FVectorMaterialInput UMaterial::M_GetNormal() const {
	return Read<struct FVectorMaterialInput>((byte*)this + 276);
}
struct FVectorMaterialInput* UMaterial::M_PtrGetNormal() {
	return reinterpret_cast<struct FVectorMaterialInput*>((byte*)this + 276);
}
void UMaterial::M_SetNormal(const struct FVectorMaterialInput& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of Tangent
// Declaration: struct FVectorMaterialInput Tangent
struct FVectorMaterialInput UMaterial::M_GetTangent() const {
	return Read<struct FVectorMaterialInput>((byte*)this + 296);
}
struct FVectorMaterialInput* UMaterial::M_PtrGetTangent() {
	return reinterpret_cast<struct FVectorMaterialInput*>((byte*)this + 296);
}
void UMaterial::M_SetTangent(const struct FVectorMaterialInput& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of EmissiveColor
// Declaration: struct FColorMaterialInput EmissiveColor
struct FColorMaterialInput UMaterial::M_GetEmissiveColor() const {
	return Read<struct FColorMaterialInput>((byte*)this + 316);
}
struct FColorMaterialInput* UMaterial::M_PtrGetEmissiveColor() {
	return reinterpret_cast<struct FColorMaterialInput*>((byte*)this + 316);
}
void UMaterial::M_SetEmissiveColor(const struct FColorMaterialInput& value) {
	Write((byte*)this + 316, value);
}
// Member Getter and Setter of MaterialDomain
// Declaration: TEnumAsByte<EMaterialDomain> MaterialDomain
TEnumAsByte<EMaterialDomain> UMaterial::M_GetMaterialDomain() const {
	return Read<TEnumAsByte<EMaterialDomain>>((byte*)this + 336);
}
TEnumAsByte<EMaterialDomain>* UMaterial::M_PtrGetMaterialDomain() {
	return reinterpret_cast<TEnumAsByte<EMaterialDomain>*>((byte*)this + 336);
}
void UMaterial::M_SetMaterialDomain(const TEnumAsByte<EMaterialDomain>& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of BlendMode
// Declaration: TEnumAsByte<EBlendMode> BlendMode
TEnumAsByte<EBlendMode> UMaterial::M_GetBlendMode() const {
	return Read<TEnumAsByte<EBlendMode>>((byte*)this + 337);
}
TEnumAsByte<EBlendMode>* UMaterial::M_PtrGetBlendMode() {
	return reinterpret_cast<TEnumAsByte<EBlendMode>*>((byte*)this + 337);
}
void UMaterial::M_SetBlendMode(const TEnumAsByte<EBlendMode>& value) {
	Write((byte*)this + 337, value);
}
// Member Getter and Setter of DecalBlendMode
// Declaration: TEnumAsByte<EDecalBlendMode> DecalBlendMode
TEnumAsByte<EDecalBlendMode> UMaterial::M_GetDecalBlendMode() const {
	return Read<TEnumAsByte<EDecalBlendMode>>((byte*)this + 338);
}
TEnumAsByte<EDecalBlendMode>* UMaterial::M_PtrGetDecalBlendMode() {
	return reinterpret_cast<TEnumAsByte<EDecalBlendMode>*>((byte*)this + 338);
}
void UMaterial::M_SetDecalBlendMode(const TEnumAsByte<EDecalBlendMode>& value) {
	Write((byte*)this + 338, value);
}
// Member Getter and Setter of MaterialDecalResponse
// Declaration: TEnumAsByte<EMaterialDecalResponse> MaterialDecalResponse
TEnumAsByte<EMaterialDecalResponse> UMaterial::M_GetMaterialDecalResponse() const {
	return Read<TEnumAsByte<EMaterialDecalResponse>>((byte*)this + 339);
}
TEnumAsByte<EMaterialDecalResponse>* UMaterial::M_PtrGetMaterialDecalResponse() {
	return reinterpret_cast<TEnumAsByte<EMaterialDecalResponse>*>((byte*)this + 339);
}
void UMaterial::M_SetMaterialDecalResponse(const TEnumAsByte<EMaterialDecalResponse>& value) {
	Write((byte*)this + 339, value);
}
// Member Getter and Setter of ShadingModel
// Declaration: TEnumAsByte<EMaterialShadingModel> ShadingModel
TEnumAsByte<EMaterialShadingModel> UMaterial::M_GetShadingModel() const {
	return Read<TEnumAsByte<EMaterialShadingModel>>((byte*)this + 340);
}
TEnumAsByte<EMaterialShadingModel>* UMaterial::M_PtrGetShadingModel() {
	return reinterpret_cast<TEnumAsByte<EMaterialShadingModel>*>((byte*)this + 340);
}
void UMaterial::M_SetShadingModel(const TEnumAsByte<EMaterialShadingModel>& value) {
	Write((byte*)this + 340, value);
}
// Member Getter and Setter of bCastDynamicShadowAsMasked
// Declaration: unsigned char bCastDynamicShadowAsMasked : 1
unsigned char UMaterial::M_GetbCastDynamicShadowAsMasked() const {
	return Read<unsigned char>((byte*)this + 341);
}
unsigned char* UMaterial::M_PtrGetbCastDynamicShadowAsMasked() {
	return reinterpret_cast<unsigned char*>((byte*)this + 341);
}
void UMaterial::M_SetbCastDynamicShadowAsMasked(const unsigned char& value) {
	Write((byte*)this + 341, value);
}
// Member Getter and Setter of ShadingModels
// Declaration: struct FMaterialShadingModelField ShadingModels
struct FMaterialShadingModelField UMaterial::M_GetShadingModels() const {
	return Read<struct FMaterialShadingModelField>((byte*)this + 342);
}
struct FMaterialShadingModelField* UMaterial::M_PtrGetShadingModels() {
	return reinterpret_cast<struct FMaterialShadingModelField*>((byte*)this + 342);
}
void UMaterial::M_SetShadingModels(const struct FMaterialShadingModelField& value) {
	Write((byte*)this + 342, value);
}
// Member Getter and Setter of OpacityMaskClipValue
// Declaration: float OpacityMaskClipValue
float UMaterial::M_GetOpacityMaskClipValue() const {
	return Read<float>((byte*)this + 344);
}
float* UMaterial::M_PtrGetOpacityMaskClipValue() {
	return reinterpret_cast<float*>((byte*)this + 344);
}
void UMaterial::M_SetOpacityMaskClipValue(const float& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of WorldPositionOffset
// Declaration: struct FVectorMaterialInput WorldPositionOffset
struct FVectorMaterialInput UMaterial::M_GetWorldPositionOffset() const {
	return Read<struct FVectorMaterialInput>((byte*)this + 348);
}
struct FVectorMaterialInput* UMaterial::M_PtrGetWorldPositionOffset() {
	return reinterpret_cast<struct FVectorMaterialInput*>((byte*)this + 348);
}
void UMaterial::M_SetWorldPositionOffset(const struct FVectorMaterialInput& value) {
	Write((byte*)this + 348, value);
}
// Member Getter and Setter of Refraction
// Declaration: struct FScalarMaterialInput Refraction
struct FScalarMaterialInput UMaterial::M_GetRefraction() const {
	return Read<struct FScalarMaterialInput>((byte*)this + 368);
}
struct FScalarMaterialInput* UMaterial::M_PtrGetRefraction() {
	return reinterpret_cast<struct FScalarMaterialInput*>((byte*)this + 368);
}
void UMaterial::M_SetRefraction(const struct FScalarMaterialInput& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of MaterialAttributes
// Declaration: struct FMaterialAttributesInput MaterialAttributes
struct FMaterialAttributesInput UMaterial::M_GetMaterialAttributes() const {
	return Read<struct FMaterialAttributesInput>((byte*)this + 388);
}
struct FMaterialAttributesInput* UMaterial::M_PtrGetMaterialAttributes() {
	return reinterpret_cast<struct FMaterialAttributesInput*>((byte*)this + 388);
}
void UMaterial::M_SetMaterialAttributes(const struct FMaterialAttributesInput& value) {
	Write((byte*)this + 388, value);
}
// Member Getter and Setter of PixelDepthOffset
// Declaration: struct FScalarMaterialInput PixelDepthOffset
struct FScalarMaterialInput UMaterial::M_GetPixelDepthOffset() const {
	return Read<struct FScalarMaterialInput>((byte*)this + 412);
}
struct FScalarMaterialInput* UMaterial::M_PtrGetPixelDepthOffset() {
	return reinterpret_cast<struct FScalarMaterialInput*>((byte*)this + 412);
}
void UMaterial::M_SetPixelDepthOffset(const struct FScalarMaterialInput& value) {
	Write((byte*)this + 412, value);
}
// Member Getter and Setter of ShadingModelFromMaterialExpression
// Declaration: struct FShadingModelMaterialInput ShadingModelFromMaterialExpression
struct FShadingModelMaterialInput UMaterial::M_GetShadingModelFromMaterialExpression() const {
	return Read<struct FShadingModelMaterialInput>((byte*)this + 432);
}
struct FShadingModelMaterialInput* UMaterial::M_PtrGetShadingModelFromMaterialExpression() {
	return reinterpret_cast<struct FShadingModelMaterialInput*>((byte*)this + 432);
}
void UMaterial::M_SetShadingModelFromMaterialExpression(const struct FShadingModelMaterialInput& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of bEnableSeparateTranslucency
// Declaration: unsigned char bEnableSeparateTranslucency : 1
unsigned char UMaterial::M_GetbEnableSeparateTranslucency() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetbEnableSeparateTranslucency() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetbEnableSeparateTranslucency(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of bEnableResponsiveAA
// Declaration: unsigned char bEnableResponsiveAA : 1
unsigned char UMaterial::M_GetbEnableResponsiveAA() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetbEnableResponsiveAA() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetbEnableResponsiveAA(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of bScreenSpaceReflections
// Declaration: unsigned char bScreenSpaceReflections : 1
unsigned char UMaterial::M_GetbScreenSpaceReflections() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetbScreenSpaceReflections() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetbScreenSpaceReflections(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of bContactShadows
// Declaration: unsigned char bContactShadows : 1
unsigned char UMaterial::M_GetbContactShadows() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetbContactShadows() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetbContactShadows(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of TwoSided
// Declaration: unsigned char TwoSided : 1
unsigned char UMaterial::M_GetTwoSided() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetTwoSided() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetTwoSided(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of DitheredLODTransition
// Declaration: unsigned char DitheredLODTransition : 1
unsigned char UMaterial::M_GetDitheredLODTransition() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetDitheredLODTransition() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetDitheredLODTransition(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of DitherOpacityMask
// Declaration: unsigned char DitherOpacityMask : 1
unsigned char UMaterial::M_GetDitherOpacityMask() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetDitherOpacityMask() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetDitherOpacityMask(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of bAllowNegativeEmissiveColor
// Declaration: unsigned char bAllowNegativeEmissiveColor : 1
unsigned char UMaterial::M_GetbAllowNegativeEmissiveColor() const {
	return Read<unsigned char>((byte*)this + 452);
}
unsigned char* UMaterial::M_PtrGetbAllowNegativeEmissiveColor() {
	return reinterpret_cast<unsigned char*>((byte*)this + 452);
}
void UMaterial::M_SetbAllowNegativeEmissiveColor(const unsigned char& value) {
	Write((byte*)this + 452, value);
}
// Member Getter and Setter of TranslucencyLightingMode
// Declaration: TEnumAsByte<ETranslucencyLightingMode> TranslucencyLightingMode
TEnumAsByte<ETranslucencyLightingMode> UMaterial::M_GetTranslucencyLightingMode() const {
	return Read<TEnumAsByte<ETranslucencyLightingMode>>((byte*)this + 453);
}
TEnumAsByte<ETranslucencyLightingMode>* UMaterial::M_PtrGetTranslucencyLightingMode() {
	return reinterpret_cast<TEnumAsByte<ETranslucencyLightingMode>*>((byte*)this + 453);
}
void UMaterial::M_SetTranslucencyLightingMode(const TEnumAsByte<ETranslucencyLightingMode>& value) {
	Write((byte*)this + 453, value);
}
// Member Getter and Setter of bEnableMobileSeparateTranslucency
// Declaration: unsigned char bEnableMobileSeparateTranslucency : 1
unsigned char UMaterial::M_GetbEnableMobileSeparateTranslucency() const {
	return Read<unsigned char>((byte*)this + 454);
}
unsigned char* UMaterial::M_PtrGetbEnableMobileSeparateTranslucency() {
	return reinterpret_cast<unsigned char*>((byte*)this + 454);
}
void UMaterial::M_SetbEnableMobileSeparateTranslucency(const unsigned char& value) {
	Write((byte*)this + 454, value);
}
// Member Getter and Setter of NumCustomizedUVs
// Declaration: int32_t NumCustomizedUVs
int32_t UMaterial::M_GetNumCustomizedUVs() const {
	return Read<int32_t>((byte*)this + 456);
}
int32_t* UMaterial::M_PtrGetNumCustomizedUVs() {
	return reinterpret_cast<int32_t*>((byte*)this + 456);
}
void UMaterial::M_SetNumCustomizedUVs(const int32_t& value) {
	Write((byte*)this + 456, value);
}
// Member Getter and Setter of TranslucencyDirectionalLightingIntensity
// Declaration: float TranslucencyDirectionalLightingIntensity
float UMaterial::M_GetTranslucencyDirectionalLightingIntensity() const {
	return Read<float>((byte*)this + 460);
}
float* UMaterial::M_PtrGetTranslucencyDirectionalLightingIntensity() {
	return reinterpret_cast<float*>((byte*)this + 460);
}
void UMaterial::M_SetTranslucencyDirectionalLightingIntensity(const float& value) {
	Write((byte*)this + 460, value);
}
// Member Getter and Setter of TranslucentShadowDensityScale
// Declaration: float TranslucentShadowDensityScale
float UMaterial::M_GetTranslucentShadowDensityScale() const {
	return Read<float>((byte*)this + 464);
}
float* UMaterial::M_PtrGetTranslucentShadowDensityScale() {
	return reinterpret_cast<float*>((byte*)this + 464);
}
void UMaterial::M_SetTranslucentShadowDensityScale(const float& value) {
	Write((byte*)this + 464, value);
}
// Member Getter and Setter of TranslucentSelfShadowDensityScale
// Declaration: float TranslucentSelfShadowDensityScale
float UMaterial::M_GetTranslucentSelfShadowDensityScale() const {
	return Read<float>((byte*)this + 468);
}
float* UMaterial::M_PtrGetTranslucentSelfShadowDensityScale() {
	return reinterpret_cast<float*>((byte*)this + 468);
}
void UMaterial::M_SetTranslucentSelfShadowDensityScale(const float& value) {
	Write((byte*)this + 468, value);
}
// Member Getter and Setter of TranslucentSelfShadowSecondDensityScale
// Declaration: float TranslucentSelfShadowSecondDensityScale
float UMaterial::M_GetTranslucentSelfShadowSecondDensityScale() const {
	return Read<float>((byte*)this + 472);
}
float* UMaterial::M_PtrGetTranslucentSelfShadowSecondDensityScale() {
	return reinterpret_cast<float*>((byte*)this + 472);
}
void UMaterial::M_SetTranslucentSelfShadowSecondDensityScale(const float& value) {
	Write((byte*)this + 472, value);
}
// Member Getter and Setter of TranslucentSelfShadowSecondOpacity
// Declaration: float TranslucentSelfShadowSecondOpacity
float UMaterial::M_GetTranslucentSelfShadowSecondOpacity() const {
	return Read<float>((byte*)this + 476);
}
float* UMaterial::M_PtrGetTranslucentSelfShadowSecondOpacity() {
	return reinterpret_cast<float*>((byte*)this + 476);
}
void UMaterial::M_SetTranslucentSelfShadowSecondOpacity(const float& value) {
	Write((byte*)this + 476, value);
}
// Member Getter and Setter of TranslucentBackscatteringExponent
// Declaration: float TranslucentBackscatteringExponent
float UMaterial::M_GetTranslucentBackscatteringExponent() const {
	return Read<float>((byte*)this + 480);
}
float* UMaterial::M_PtrGetTranslucentBackscatteringExponent() {
	return reinterpret_cast<float*>((byte*)this + 480);
}
void UMaterial::M_SetTranslucentBackscatteringExponent(const float& value) {
	Write((byte*)this + 480, value);
}
// Member Getter and Setter of TranslucentMultipleScatteringExtinction
// Declaration: struct FLinearColor TranslucentMultipleScatteringExtinction
struct FLinearColor UMaterial::M_GetTranslucentMultipleScatteringExtinction() const {
	return Read<struct FLinearColor>((byte*)this + 484);
}
struct FLinearColor* UMaterial::M_PtrGetTranslucentMultipleScatteringExtinction() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 484);
}
void UMaterial::M_SetTranslucentMultipleScatteringExtinction(const struct FLinearColor& value) {
	Write((byte*)this + 484, value);
}
// Member Getter and Setter of TranslucentShadowStartOffset
// Declaration: float TranslucentShadowStartOffset
float UMaterial::M_GetTranslucentShadowStartOffset() const {
	return Read<float>((byte*)this + 500);
}
float* UMaterial::M_PtrGetTranslucentShadowStartOffset() {
	return reinterpret_cast<float*>((byte*)this + 500);
}
void UMaterial::M_SetTranslucentShadowStartOffset(const float& value) {
	Write((byte*)this + 500, value);
}
// Member Getter and Setter of bDisableDepthTest
// Declaration: unsigned char bDisableDepthTest : 1
unsigned char UMaterial::M_GetbDisableDepthTest() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbDisableDepthTest() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbDisableDepthTest(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bWriteOnlyAlpha
// Declaration: unsigned char bWriteOnlyAlpha : 1
unsigned char UMaterial::M_GetbWriteOnlyAlpha() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbWriteOnlyAlpha() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbWriteOnlyAlpha(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bGenerateSphericalParticleNormals
// Declaration: unsigned char bGenerateSphericalParticleNormals : 1
unsigned char UMaterial::M_GetbGenerateSphericalParticleNormals() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbGenerateSphericalParticleNormals() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbGenerateSphericalParticleNormals(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bTangentSpaceNormal
// Declaration: unsigned char bTangentSpaceNormal : 1
unsigned char UMaterial::M_GetbTangentSpaceNormal() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbTangentSpaceNormal() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbTangentSpaceNormal(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bUseEmissiveForDynamicAreaLighting
// Declaration: unsigned char bUseEmissiveForDynamicAreaLighting : 1
unsigned char UMaterial::M_GetbUseEmissiveForDynamicAreaLighting() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbUseEmissiveForDynamicAreaLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbUseEmissiveForDynamicAreaLighting(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bBlockGI
// Declaration: unsigned char bBlockGI : 1
unsigned char UMaterial::M_GetbBlockGI() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbBlockGI() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbBlockGI(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bUsedAsSpecialEngineMaterial
// Declaration: unsigned char bUsedAsSpecialEngineMaterial : 1
unsigned char UMaterial::M_GetbUsedAsSpecialEngineMaterial() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbUsedAsSpecialEngineMaterial() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbUsedAsSpecialEngineMaterial(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bUsedWithSkeletalMesh
// Declaration: unsigned char bUsedWithSkeletalMesh : 1
unsigned char UMaterial::M_GetbUsedWithSkeletalMesh() const {
	return Read<unsigned char>((byte*)this + 504);
}
unsigned char* UMaterial::M_PtrGetbUsedWithSkeletalMesh() {
	return reinterpret_cast<unsigned char*>((byte*)this + 504);
}
void UMaterial::M_SetbUsedWithSkeletalMesh(const unsigned char& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of bUsedWithEditorCompositing
// Declaration: unsigned char bUsedWithEditorCompositing : 1
unsigned char UMaterial::M_GetbUsedWithEditorCompositing() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithEditorCompositing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithEditorCompositing(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithParticleSprites
// Declaration: unsigned char bUsedWithParticleSprites : 1
unsigned char UMaterial::M_GetbUsedWithParticleSprites() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithParticleSprites() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithParticleSprites(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithBeamTrails
// Declaration: unsigned char bUsedWithBeamTrails : 1
unsigned char UMaterial::M_GetbUsedWithBeamTrails() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithBeamTrails() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithBeamTrails(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithMeshParticles
// Declaration: unsigned char bUsedWithMeshParticles : 1
unsigned char UMaterial::M_GetbUsedWithMeshParticles() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithMeshParticles() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithMeshParticles(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithNiagaraSprites
// Declaration: unsigned char bUsedWithNiagaraSprites : 1
unsigned char UMaterial::M_GetbUsedWithNiagaraSprites() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithNiagaraSprites() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithNiagaraSprites(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithNiagaraRibbons
// Declaration: unsigned char bUsedWithNiagaraRibbons : 1
unsigned char UMaterial::M_GetbUsedWithNiagaraRibbons() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithNiagaraRibbons() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithNiagaraRibbons(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithNiagaraMeshParticles
// Declaration: unsigned char bUsedWithNiagaraMeshParticles : 1
unsigned char UMaterial::M_GetbUsedWithNiagaraMeshParticles() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithNiagaraMeshParticles() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithNiagaraMeshParticles(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithGeometryCache
// Declaration: unsigned char bUsedWithGeometryCache : 1
unsigned char UMaterial::M_GetbUsedWithGeometryCache() const {
	return Read<unsigned char>((byte*)this + 505);
}
unsigned char* UMaterial::M_PtrGetbUsedWithGeometryCache() {
	return reinterpret_cast<unsigned char*>((byte*)this + 505);
}
void UMaterial::M_SetbUsedWithGeometryCache(const unsigned char& value) {
	Write((byte*)this + 505, value);
}
// Member Getter and Setter of bUsedWithStaticLighting
// Declaration: unsigned char bUsedWithStaticLighting : 1
unsigned char UMaterial::M_GetbUsedWithStaticLighting() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsedWithStaticLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsedWithStaticLighting(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsedWithMorphTargets
// Declaration: unsigned char bUsedWithMorphTargets : 1
unsigned char UMaterial::M_GetbUsedWithMorphTargets() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsedWithMorphTargets() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsedWithMorphTargets(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsedWithSplineMeshes
// Declaration: unsigned char bUsedWithSplineMeshes : 1
unsigned char UMaterial::M_GetbUsedWithSplineMeshes() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsedWithSplineMeshes() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsedWithSplineMeshes(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsedWithInstancedStaticMeshes
// Declaration: unsigned char bUsedWithInstancedStaticMeshes : 1
unsigned char UMaterial::M_GetbUsedWithInstancedStaticMeshes() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsedWithInstancedStaticMeshes() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsedWithInstancedStaticMeshes(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsedWithGeometryCollections
// Declaration: unsigned char bUsedWithGeometryCollections : 1
unsigned char UMaterial::M_GetbUsedWithGeometryCollections() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsedWithGeometryCollections() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsedWithGeometryCollections(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsesDistortion
// Declaration: unsigned char bUsesDistortion : 1
unsigned char UMaterial::M_GetbUsesDistortion() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsesDistortion() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsesDistortion(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsedWithClothing
// Declaration: unsigned char bUsedWithClothing : 1
unsigned char UMaterial::M_GetbUsedWithClothing() const {
	return Read<unsigned char>((byte*)this + 506);
}
unsigned char* UMaterial::M_PtrGetbUsedWithClothing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 506);
}
void UMaterial::M_SetbUsedWithClothing(const unsigned char& value) {
	Write((byte*)this + 506, value);
}
// Member Getter and Setter of bUsedWithWater
// Declaration: unsigned char bUsedWithWater : 1
unsigned char UMaterial::M_GetbUsedWithWater() const {
	return Read<unsigned char>((byte*)this + 508);
}
unsigned char* UMaterial::M_PtrGetbUsedWithWater() {
	return reinterpret_cast<unsigned char*>((byte*)this + 508);
}
void UMaterial::M_SetbUsedWithWater(const unsigned char& value) {
	Write((byte*)this + 508, value);
}
// Member Getter and Setter of bUsedWithHairStrands
// Declaration: unsigned char bUsedWithHairStrands : 1
unsigned char UMaterial::M_GetbUsedWithHairStrands() const {
	return Read<unsigned char>((byte*)this + 508);
}
unsigned char* UMaterial::M_PtrGetbUsedWithHairStrands() {
	return reinterpret_cast<unsigned char*>((byte*)this + 508);
}
void UMaterial::M_SetbUsedWithHairStrands(const unsigned char& value) {
	Write((byte*)this + 508, value);
}
// Member Getter and Setter of bUsedWithLidarPointCloud
// Declaration: unsigned char bUsedWithLidarPointCloud : 1
unsigned char UMaterial::M_GetbUsedWithLidarPointCloud() const {
	return Read<unsigned char>((byte*)this + 508);
}
unsigned char* UMaterial::M_PtrGetbUsedWithLidarPointCloud() {
	return reinterpret_cast<unsigned char*>((byte*)this + 508);
}
void UMaterial::M_SetbUsedWithLidarPointCloud(const unsigned char& value) {
	Write((byte*)this + 508, value);
}
// Member Getter and Setter of bUsedWithVirtualHeightfieldMesh
// Declaration: unsigned char bUsedWithVirtualHeightfieldMesh : 1
unsigned char UMaterial::M_GetbUsedWithVirtualHeightfieldMesh() const {
	return Read<unsigned char>((byte*)this + 508);
}
unsigned char* UMaterial::M_PtrGetbUsedWithVirtualHeightfieldMesh() {
	return reinterpret_cast<unsigned char*>((byte*)this + 508);
}
void UMaterial::M_SetbUsedWithVirtualHeightfieldMesh(const unsigned char& value) {
	Write((byte*)this + 508, value);
}
// Member Getter and Setter of bUsedWithUI
// Declaration: unsigned char bUsedWithUI : 1
unsigned char UMaterial::M_GetbUsedWithUI() const {
	return Read<unsigned char>((byte*)this + 512);
}
unsigned char* UMaterial::M_PtrGetbUsedWithUI() {
	return reinterpret_cast<unsigned char*>((byte*)this + 512);
}
void UMaterial::M_SetbUsedWithUI(const unsigned char& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of bAutomaticallySetUsageInEditor
// Declaration: unsigned char bAutomaticallySetUsageInEditor : 1
unsigned char UMaterial::M_GetbAutomaticallySetUsageInEditor() const {
	return Read<unsigned char>((byte*)this + 512);
}
unsigned char* UMaterial::M_PtrGetbAutomaticallySetUsageInEditor() {
	return reinterpret_cast<unsigned char*>((byte*)this + 512);
}
void UMaterial::M_SetbAutomaticallySetUsageInEditor(const unsigned char& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of bFullyRough
// Declaration: unsigned char bFullyRough : 1
unsigned char UMaterial::M_GetbFullyRough() const {
	return Read<unsigned char>((byte*)this + 512);
}
unsigned char* UMaterial::M_PtrGetbFullyRough() {
	return reinterpret_cast<unsigned char*>((byte*)this + 512);
}
void UMaterial::M_SetbFullyRough(const unsigned char& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of bUseFullPrecision
// Declaration: unsigned char bUseFullPrecision : 1
unsigned char UMaterial::M_GetbUseFullPrecision() const {
	return Read<unsigned char>((byte*)this + 512);
}
unsigned char* UMaterial::M_PtrGetbUseFullPrecision() {
	return reinterpret_cast<unsigned char*>((byte*)this + 512);
}
void UMaterial::M_SetbUseFullPrecision(const unsigned char& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of bUseLightmapDirectionality
// Declaration: unsigned char bUseLightmapDirectionality : 1
unsigned char UMaterial::M_GetbUseLightmapDirectionality() const {
	return Read<unsigned char>((byte*)this + 512);
}
unsigned char* UMaterial::M_PtrGetbUseLightmapDirectionality() {
	return reinterpret_cast<unsigned char*>((byte*)this + 512);
}
void UMaterial::M_SetbUseLightmapDirectionality(const unsigned char& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of bUseAlphaToCoverage
// Declaration: unsigned char bUseAlphaToCoverage : 1
unsigned char UMaterial::M_GetbUseAlphaToCoverage() const {
	return Read<unsigned char>((byte*)this + 512);
}
unsigned char* UMaterial::M_PtrGetbUseAlphaToCoverage() {
	return reinterpret_cast<unsigned char*>((byte*)this + 512);
}
void UMaterial::M_SetbUseAlphaToCoverage(const unsigned char& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of bForwardRenderUsePreintegratedGFForSimpleIBL
// Declaration: unsigned char bForwardRenderUsePreintegratedGFForSimpleIBL : 1
unsigned char UMaterial::M_GetbForwardRenderUsePreintegratedGFForSimpleIBL() const {
	return Read<unsigned char>((byte*)this + 516);
}
unsigned char* UMaterial::M_PtrGetbForwardRenderUsePreintegratedGFForSimpleIBL() {
	return reinterpret_cast<unsigned char*>((byte*)this + 516);
}
void UMaterial::M_SetbForwardRenderUsePreintegratedGFForSimpleIBL(const unsigned char& value) {
	Write((byte*)this + 516, value);
}
// Member Getter and Setter of bUseHQForwardReflections
// Declaration: unsigned char bUseHQForwardReflections : 1
unsigned char UMaterial::M_GetbUseHQForwardReflections() const {
	return Read<unsigned char>((byte*)this + 520);
}
unsigned char* UMaterial::M_PtrGetbUseHQForwardReflections() {
	return reinterpret_cast<unsigned char*>((byte*)this + 520);
}
void UMaterial::M_SetbUseHQForwardReflections(const unsigned char& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of bForwardBlendsSkyLightCubemaps
// Declaration: unsigned char bForwardBlendsSkyLightCubemaps : 1
unsigned char UMaterial::M_GetbForwardBlendsSkyLightCubemaps() const {
	return Read<unsigned char>((byte*)this + 520);
}
unsigned char* UMaterial::M_PtrGetbForwardBlendsSkyLightCubemaps() {
	return reinterpret_cast<unsigned char*>((byte*)this + 520);
}
void UMaterial::M_SetbForwardBlendsSkyLightCubemaps(const unsigned char& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of bUsePlanarForwardReflections
// Declaration: unsigned char bUsePlanarForwardReflections : 1
unsigned char UMaterial::M_GetbUsePlanarForwardReflections() const {
	return Read<unsigned char>((byte*)this + 520);
}
unsigned char* UMaterial::M_PtrGetbUsePlanarForwardReflections() {
	return reinterpret_cast<unsigned char*>((byte*)this + 520);
}
void UMaterial::M_SetbUsePlanarForwardReflections(const unsigned char& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of bNormalCurvatureToRoughness
// Declaration: unsigned char bNormalCurvatureToRoughness : 1
unsigned char UMaterial::M_GetbNormalCurvatureToRoughness() const {
	return Read<unsigned char>((byte*)this + 520);
}
unsigned char* UMaterial::M_PtrGetbNormalCurvatureToRoughness() {
	return reinterpret_cast<unsigned char*>((byte*)this + 520);
}
void UMaterial::M_SetbNormalCurvatureToRoughness(const unsigned char& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of D3D11TessellationMode
// Declaration: TEnumAsByte<EMaterialTessellationMode> D3D11TessellationMode
TEnumAsByte<EMaterialTessellationMode> UMaterial::M_GetD3D11TessellationMode() const {
	return Read<TEnumAsByte<EMaterialTessellationMode>>((byte*)this + 521);
}
TEnumAsByte<EMaterialTessellationMode>* UMaterial::M_PtrGetD3D11TessellationMode() {
	return reinterpret_cast<TEnumAsByte<EMaterialTessellationMode>*>((byte*)this + 521);
}
void UMaterial::M_SetD3D11TessellationMode(const TEnumAsByte<EMaterialTessellationMode>& value) {
	Write((byte*)this + 521, value);
}
// Member Getter and Setter of bEnableCrackFreeDisplacement
// Declaration: unsigned char bEnableCrackFreeDisplacement : 1
unsigned char UMaterial::M_GetbEnableCrackFreeDisplacement() const {
	return Read<unsigned char>((byte*)this + 522);
}
unsigned char* UMaterial::M_PtrGetbEnableCrackFreeDisplacement() {
	return reinterpret_cast<unsigned char*>((byte*)this + 522);
}
void UMaterial::M_SetbEnableCrackFreeDisplacement(const unsigned char& value) {
	Write((byte*)this + 522, value);
}
// Member Getter and Setter of bEnableAdaptiveTessellation
// Declaration: unsigned char bEnableAdaptiveTessellation : 1
unsigned char UMaterial::M_GetbEnableAdaptiveTessellation() const {
	return Read<unsigned char>((byte*)this + 522);
}
unsigned char* UMaterial::M_PtrGetbEnableAdaptiveTessellation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 522);
}
void UMaterial::M_SetbEnableAdaptiveTessellation(const unsigned char& value) {
	Write((byte*)this + 522, value);
}
// Member Getter and Setter of AllowTranslucentCustomDepthWrites
// Declaration: unsigned char AllowTranslucentCustomDepthWrites : 1
unsigned char UMaterial::M_GetAllowTranslucentCustomDepthWrites() const {
	return Read<unsigned char>((byte*)this + 522);
}
unsigned char* UMaterial::M_PtrGetAllowTranslucentCustomDepthWrites() {
	return reinterpret_cast<unsigned char*>((byte*)this + 522);
}
void UMaterial::M_SetAllowTranslucentCustomDepthWrites(const unsigned char& value) {
	Write((byte*)this + 522, value);
}
// Member Getter and Setter of Wireframe
// Declaration: unsigned char Wireframe : 1
unsigned char UMaterial::M_GetWireframe() const {
	return Read<unsigned char>((byte*)this + 522);
}
unsigned char* UMaterial::M_PtrGetWireframe() {
	return reinterpret_cast<unsigned char*>((byte*)this + 522);
}
void UMaterial::M_SetWireframe(const unsigned char& value) {
	Write((byte*)this + 522, value);
}
// Member Getter and Setter of WriteDepthToTranslucentMaterial
// Declaration: unsigned char WriteDepthToTranslucentMaterial : 1
unsigned char UMaterial::M_GetWriteDepthToTranslucentMaterial() const {
	return Read<unsigned char>((byte*)this + 522);
}
unsigned char* UMaterial::M_PtrGetWriteDepthToTranslucentMaterial() {
	return reinterpret_cast<unsigned char*>((byte*)this + 522);
}
void UMaterial::M_SetWriteDepthToTranslucentMaterial(const unsigned char& value) {
	Write((byte*)this + 522, value);
}
// Member Getter and Setter of ShadingRate
// Declaration: TEnumAsByte<EMaterialShadingRate> ShadingRate
TEnumAsByte<EMaterialShadingRate> UMaterial::M_GetShadingRate() const {
	return Read<TEnumAsByte<EMaterialShadingRate>>((byte*)this + 523);
}
TEnumAsByte<EMaterialShadingRate>* UMaterial::M_PtrGetShadingRate() {
	return reinterpret_cast<TEnumAsByte<EMaterialShadingRate>*>((byte*)this + 523);
}
void UMaterial::M_SetShadingRate(const TEnumAsByte<EMaterialShadingRate>& value) {
	Write((byte*)this + 523, value);
}
// Member Getter and Setter of bCanMaskedBeAssumedOpaque
// Declaration: unsigned char bCanMaskedBeAssumedOpaque : 1
unsigned char UMaterial::M_GetbCanMaskedBeAssumedOpaque() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbCanMaskedBeAssumedOpaque() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbCanMaskedBeAssumedOpaque(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bIsMasked
// Declaration: unsigned char bIsMasked : 1
unsigned char UMaterial::M_GetbIsMasked() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbIsMasked() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbIsMasked(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bIsPreviewMaterial
// Declaration: unsigned char bIsPreviewMaterial : 1
unsigned char UMaterial::M_GetbIsPreviewMaterial() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbIsPreviewMaterial() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbIsPreviewMaterial(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bIsFunctionPreviewMaterial
// Declaration: unsigned char bIsFunctionPreviewMaterial : 1
unsigned char UMaterial::M_GetbIsFunctionPreviewMaterial() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbIsFunctionPreviewMaterial() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbIsFunctionPreviewMaterial(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bUseMaterialAttributes
// Declaration: unsigned char bUseMaterialAttributes : 1
unsigned char UMaterial::M_GetbUseMaterialAttributes() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbUseMaterialAttributes() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbUseMaterialAttributes(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bCastRayTracedShadows
// Declaration: unsigned char bCastRayTracedShadows : 1
unsigned char UMaterial::M_GetbCastRayTracedShadows() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbCastRayTracedShadows() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbCastRayTracedShadows(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bUseTranslucencyVertexFog
// Declaration: unsigned char bUseTranslucencyVertexFog : 1
unsigned char UMaterial::M_GetbUseTranslucencyVertexFog() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbUseTranslucencyVertexFog() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbUseTranslucencyVertexFog(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bApplyCloudFogging
// Declaration: unsigned char bApplyCloudFogging : 1
unsigned char UMaterial::M_GetbApplyCloudFogging() const {
	return Read<unsigned char>((byte*)this + 524);
}
unsigned char* UMaterial::M_PtrGetbApplyCloudFogging() {
	return reinterpret_cast<unsigned char*>((byte*)this + 524);
}
void UMaterial::M_SetbApplyCloudFogging(const unsigned char& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of bIsSky
// Declaration: unsigned char bIsSky : 1
unsigned char UMaterial::M_GetbIsSky() const {
	return Read<unsigned char>((byte*)this + 525);
}
unsigned char* UMaterial::M_PtrGetbIsSky() {
	return reinterpret_cast<unsigned char*>((byte*)this + 525);
}
void UMaterial::M_SetbIsSky(const unsigned char& value) {
	Write((byte*)this + 525, value);
}
// Member Getter and Setter of bComputeFogPerPixel
// Declaration: unsigned char bComputeFogPerPixel : 1
unsigned char UMaterial::M_GetbComputeFogPerPixel() const {
	return Read<unsigned char>((byte*)this + 525);
}
unsigned char* UMaterial::M_PtrGetbComputeFogPerPixel() {
	return reinterpret_cast<unsigned char*>((byte*)this + 525);
}
void UMaterial::M_SetbComputeFogPerPixel(const unsigned char& value) {
	Write((byte*)this + 525, value);
}
// Member Getter and Setter of bOutputTranslucentVelocity
// Declaration: unsigned char bOutputTranslucentVelocity : 1
unsigned char UMaterial::M_GetbOutputTranslucentVelocity() const {
	return Read<unsigned char>((byte*)this + 525);
}
unsigned char* UMaterial::M_PtrGetbOutputTranslucentVelocity() {
	return reinterpret_cast<unsigned char*>((byte*)this + 525);
}
void UMaterial::M_SetbOutputTranslucentVelocity(const unsigned char& value) {
	Write((byte*)this + 525, value);
}
// Member Getter and Setter of bAllowDevelopmentShaderCompile
// Declaration: unsigned char bAllowDevelopmentShaderCompile : 1
unsigned char UMaterial::M_GetbAllowDevelopmentShaderCompile() const {
	return Read<unsigned char>((byte*)this + 525);
}
unsigned char* UMaterial::M_PtrGetbAllowDevelopmentShaderCompile() {
	return reinterpret_cast<unsigned char*>((byte*)this + 525);
}
void UMaterial::M_SetbAllowDevelopmentShaderCompile(const unsigned char& value) {
	Write((byte*)this + 525, value);
}
// Member Getter and Setter of bIsMaterialEditorStatsMaterial
// Declaration: unsigned char bIsMaterialEditorStatsMaterial : 1
unsigned char UMaterial::M_GetbIsMaterialEditorStatsMaterial() const {
	return Read<unsigned char>((byte*)this + 525);
}
unsigned char* UMaterial::M_PtrGetbIsMaterialEditorStatsMaterial() {
	return reinterpret_cast<unsigned char*>((byte*)this + 525);
}
void UMaterial::M_SetbIsMaterialEditorStatsMaterial(const unsigned char& value) {
	Write((byte*)this + 525, value);
}
// Member Getter and Setter of BlendableLocation
// Declaration: TEnumAsByte<EBlendableLocation> BlendableLocation
TEnumAsByte<EBlendableLocation> UMaterial::M_GetBlendableLocation() const {
	return Read<TEnumAsByte<EBlendableLocation>>((byte*)this + 526);
}
TEnumAsByte<EBlendableLocation>* UMaterial::M_PtrGetBlendableLocation() {
	return reinterpret_cast<TEnumAsByte<EBlendableLocation>*>((byte*)this + 526);
}
void UMaterial::M_SetBlendableLocation(const TEnumAsByte<EBlendableLocation>& value) {
	Write((byte*)this + 526, value);
}
// Member Getter and Setter of BlendableOutputAlpha
// Declaration: unsigned char BlendableOutputAlpha : 1
unsigned char UMaterial::M_GetBlendableOutputAlpha() const {
	return Read<unsigned char>((byte*)this + 527);
}
unsigned char* UMaterial::M_PtrGetBlendableOutputAlpha() {
	return reinterpret_cast<unsigned char*>((byte*)this + 527);
}
void UMaterial::M_SetBlendableOutputAlpha(const unsigned char& value) {
	Write((byte*)this + 527, value);
}
// Member Getter and Setter of bEnableStencilTest
// Declaration: unsigned char bEnableStencilTest : 1
unsigned char UMaterial::M_GetbEnableStencilTest() const {
	return Read<unsigned char>((byte*)this + 527);
}
unsigned char* UMaterial::M_PtrGetbEnableStencilTest() {
	return reinterpret_cast<unsigned char*>((byte*)this + 527);
}
void UMaterial::M_SetbEnableStencilTest(const unsigned char& value) {
	Write((byte*)this + 527, value);
}
// Member Getter and Setter of StencilCompare
// Declaration: TEnumAsByte<EMaterialStencilCompare> StencilCompare
TEnumAsByte<EMaterialStencilCompare> UMaterial::M_GetStencilCompare() const {
	return Read<TEnumAsByte<EMaterialStencilCompare>>((byte*)this + 528);
}
TEnumAsByte<EMaterialStencilCompare>* UMaterial::M_PtrGetStencilCompare() {
	return reinterpret_cast<TEnumAsByte<EMaterialStencilCompare>*>((byte*)this + 528);
}
void UMaterial::M_SetStencilCompare(const TEnumAsByte<EMaterialStencilCompare>& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of StencilRefValue
// Declaration: unsigned char StencilRefValue
unsigned char UMaterial::M_GetStencilRefValue() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UMaterial::M_PtrGetStencilRefValue() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UMaterial::M_SetStencilRefValue(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of RefractionMode
// Declaration: TEnumAsByte<ERefractionMode> RefractionMode
TEnumAsByte<ERefractionMode> UMaterial::M_GetRefractionMode() const {
	return Read<TEnumAsByte<ERefractionMode>>((byte*)this + 530);
}
TEnumAsByte<ERefractionMode>* UMaterial::M_PtrGetRefractionMode() {
	return reinterpret_cast<TEnumAsByte<ERefractionMode>*>((byte*)this + 530);
}
void UMaterial::M_SetRefractionMode(const TEnumAsByte<ERefractionMode>& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of BlendablePriority
// Declaration: int32_t BlendablePriority
int32_t UMaterial::M_GetBlendablePriority() const {
	return Read<int32_t>((byte*)this + 532);
}
int32_t* UMaterial::M_PtrGetBlendablePriority() {
	return reinterpret_cast<int32_t*>((byte*)this + 532);
}
void UMaterial::M_SetBlendablePriority(const int32_t& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bIsBlendable
// Declaration: unsigned char bIsBlendable : 1
unsigned char UMaterial::M_GetbIsBlendable() const {
	return Read<unsigned char>((byte*)this + 536);
}
unsigned char* UMaterial::M_PtrGetbIsBlendable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 536);
}
void UMaterial::M_SetbIsBlendable(const unsigned char& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of UsageFlagWarnings
// Declaration: uint32_t UsageFlagWarnings
uint32_t UMaterial::M_GetUsageFlagWarnings() const {
	return Read<uint32_t>((byte*)this + 540);
}
uint32_t* UMaterial::M_PtrGetUsageFlagWarnings() {
	return reinterpret_cast<uint32_t*>((byte*)this + 540);
}
void UMaterial::M_SetUsageFlagWarnings(const uint32_t& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of RefractionDepthBias
// Declaration: float RefractionDepthBias
float UMaterial::M_GetRefractionDepthBias() const {
	return Read<float>((byte*)this + 544);
}
float* UMaterial::M_PtrGetRefractionDepthBias() {
	return reinterpret_cast<float*>((byte*)this + 544);
}
void UMaterial::M_SetRefractionDepthBias(const float& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of StateId
// Declaration: struct FGuid StateId
struct FGuid UMaterial::M_GetStateId() const {
	return Read<struct FGuid>((byte*)this + 548);
}
struct FGuid* UMaterial::M_PtrGetStateId() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 548);
}
void UMaterial::M_SetStateId(const struct FGuid& value) {
	Write((byte*)this + 548, value);
}
// Member Getter and Setter of MaxDisplacement
// Declaration: float MaxDisplacement
float UMaterial::M_GetMaxDisplacement() const {
	return Read<float>((byte*)this + 564);
}
float* UMaterial::M_PtrGetMaxDisplacement() {
	return reinterpret_cast<float*>((byte*)this + 564);
}
void UMaterial::M_SetMaxDisplacement(const float& value) {
	Write((byte*)this + 564, value);
}
// Member Getter and Setter of CachedExpressionData
// Declaration: struct FMaterialCachedExpressionData CachedExpressionData
struct FMaterialCachedExpressionData UMaterial::M_GetCachedExpressionData() const {
	return Read<struct FMaterialCachedExpressionData>((byte*)this + 616);
}
struct FMaterialCachedExpressionData* UMaterial::M_PtrGetCachedExpressionData() {
	return reinterpret_cast<struct FMaterialCachedExpressionData*>((byte*)this + 616);
}
void UMaterial::M_SetCachedExpressionData(const struct FMaterialCachedExpressionData& value) {
	Write((byte*)this + 616, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}