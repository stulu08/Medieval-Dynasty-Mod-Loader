#pragma once
#include "Structs.h"
#include "Engine/MaterialInterface.h"
/////////////////////////////////////////////
// Class Engine.Material
// Super: Class Engine.MaterialInterface
// Size: 1088
// Size inherited: 136
/////////////////////////////////////////////
namespace UE4 {
class UMaterial : public UMaterialInterface {
public:
#pragma region Members
	//class UPhysicalMaterial*	PhysMaterial;		//Offset: 136	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicalMaterial* M_GetPhysMaterial() const;
	class UPhysicalMaterial** M_PtrGetPhysMaterial();
	void M_SetPhysMaterial(const class UPhysicalMaterial*& value);

	//class UPhysicalMaterialMask*	PhysMaterialMask;		//Offset: 144	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicalMaterialMask* M_GetPhysMaterialMask() const;
	class UPhysicalMaterialMask** M_PtrGetPhysMaterialMask();
	void M_SetPhysMaterialMask(const class UPhysicalMaterialMask*& value);

	//class UPhysicalMaterial*	PhysicalMaterialMap[8];		//Offset: 152	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicalMaterial* M_GetPhysicalMaterialMap() const;
	class UPhysicalMaterial** M_PtrGetPhysicalMaterialMap();
	void M_SetPhysicalMaterialMap(const class UPhysicalMaterial*& value);

	//struct FScalarMaterialInput	Metallic;		//Offset: 216	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FScalarMaterialInput M_GetMetallic() const;
	struct FScalarMaterialInput* M_PtrGetMetallic();
	void M_SetMetallic(const struct FScalarMaterialInput& value);

	//struct FScalarMaterialInput	Specular;		//Offset: 236	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FScalarMaterialInput M_GetSpecular() const;
	struct FScalarMaterialInput* M_PtrGetSpecular();
	void M_SetSpecular(const struct FScalarMaterialInput& value);

	//struct FScalarMaterialInput	Anisotropy;		//Offset: 256	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FScalarMaterialInput M_GetAnisotropy() const;
	struct FScalarMaterialInput* M_PtrGetAnisotropy();
	void M_SetAnisotropy(const struct FScalarMaterialInput& value);

	//struct FVectorMaterialInput	Normal;		//Offset: 276	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FVectorMaterialInput M_GetNormal() const;
	struct FVectorMaterialInput* M_PtrGetNormal();
	void M_SetNormal(const struct FVectorMaterialInput& value);

	//struct FVectorMaterialInput	Tangent;		//Offset: 296	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FVectorMaterialInput M_GetTangent() const;
	struct FVectorMaterialInput* M_PtrGetTangent();
	void M_SetTangent(const struct FVectorMaterialInput& value);

	//struct FColorMaterialInput	EmissiveColor;		//Offset: 316	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FColorMaterialInput M_GetEmissiveColor() const;
	struct FColorMaterialInput* M_PtrGetEmissiveColor();
	void M_SetEmissiveColor(const struct FColorMaterialInput& value);

	//TEnumAsByte<EMaterialDomain>	MaterialDomain;		//Offset: 336	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMaterialDomain> M_GetMaterialDomain() const;
	TEnumAsByte<EMaterialDomain>* M_PtrGetMaterialDomain();
	void M_SetMaterialDomain(const TEnumAsByte<EMaterialDomain>& value);

	//TEnumAsByte<EBlendMode>	BlendMode;		//Offset: 337	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBlendMode> M_GetBlendMode() const;
	TEnumAsByte<EBlendMode>* M_PtrGetBlendMode();
	void M_SetBlendMode(const TEnumAsByte<EBlendMode>& value);

	//TEnumAsByte<EDecalBlendMode>	DecalBlendMode;		//Offset: 338	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EDecalBlendMode> M_GetDecalBlendMode() const;
	TEnumAsByte<EDecalBlendMode>* M_PtrGetDecalBlendMode();
	void M_SetDecalBlendMode(const TEnumAsByte<EDecalBlendMode>& value);

	//TEnumAsByte<EMaterialDecalResponse>	MaterialDecalResponse;		//Offset: 339	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMaterialDecalResponse> M_GetMaterialDecalResponse() const;
	TEnumAsByte<EMaterialDecalResponse>* M_PtrGetMaterialDecalResponse();
	void M_SetMaterialDecalResponse(const TEnumAsByte<EMaterialDecalResponse>& value);

	//TEnumAsByte<EMaterialShadingModel>	ShadingModel;		//Offset: 340	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TEnumAsByte<EMaterialShadingModel> M_GetShadingModel() const;
	TEnumAsByte<EMaterialShadingModel>* M_PtrGetShadingModel();
	void M_SetShadingModel(const TEnumAsByte<EMaterialShadingModel>& value);

	//unsigned char	bCastDynamicShadowAsMasked : 1;		//Offset: 341	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastDynamicShadowAsMasked() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastDynamicShadowAsMasked();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastDynamicShadowAsMasked(const unsigned char& value);

	//struct FMaterialShadingModelField	ShadingModels;		//Offset: 342	Size: 2	Flags: NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate
	struct FMaterialShadingModelField M_GetShadingModels() const;
	struct FMaterialShadingModelField* M_PtrGetShadingModels();
	void M_SetShadingModels(const struct FMaterialShadingModelField& value);

	//float	OpacityMaskClipValue;		//Offset: 344	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetOpacityMaskClipValue() const;
	float* M_PtrGetOpacityMaskClipValue();
	void M_SetOpacityMaskClipValue(const float& value);

	//struct FVectorMaterialInput	WorldPositionOffset;		//Offset: 348	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FVectorMaterialInput M_GetWorldPositionOffset() const;
	struct FVectorMaterialInput* M_PtrGetWorldPositionOffset();
	void M_SetWorldPositionOffset(const struct FVectorMaterialInput& value);

	//struct FScalarMaterialInput	Refraction;		//Offset: 368	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FScalarMaterialInput M_GetRefraction() const;
	struct FScalarMaterialInput* M_PtrGetRefraction();
	void M_SetRefraction(const struct FScalarMaterialInput& value);

	//struct FMaterialAttributesInput	MaterialAttributes;		//Offset: 388	Size: 24	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMaterialAttributesInput M_GetMaterialAttributes() const;
	struct FMaterialAttributesInput* M_PtrGetMaterialAttributes();
	void M_SetMaterialAttributes(const struct FMaterialAttributesInput& value);

	//struct FScalarMaterialInput	PixelDepthOffset;		//Offset: 412	Size: 20	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FScalarMaterialInput M_GetPixelDepthOffset() const;
	struct FScalarMaterialInput* M_PtrGetPixelDepthOffset();
	void M_SetPixelDepthOffset(const struct FScalarMaterialInput& value);

	//struct FShadingModelMaterialInput	ShadingModelFromMaterialExpression;		//Offset: 432	Size: 20	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FShadingModelMaterialInput M_GetShadingModelFromMaterialExpression() const;
	struct FShadingModelMaterialInput* M_PtrGetShadingModelFromMaterialExpression();
	void M_SetShadingModelFromMaterialExpression(const struct FShadingModelMaterialInput& value);

	//unsigned char	bEnableSeparateTranslucency : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableSeparateTranslucency() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableSeparateTranslucency();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableSeparateTranslucency(const unsigned char& value);

	//unsigned char	bEnableResponsiveAA : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableResponsiveAA() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableResponsiveAA();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableResponsiveAA(const unsigned char& value);

	//unsigned char	bScreenSpaceReflections : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbScreenSpaceReflections() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbScreenSpaceReflections();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbScreenSpaceReflections(const unsigned char& value);

	//unsigned char	bContactShadows : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbContactShadows() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbContactShadows();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbContactShadows(const unsigned char& value);

	//unsigned char	TwoSided : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetTwoSided() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetTwoSided();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetTwoSided(const unsigned char& value);

	//unsigned char	DitheredLODTransition : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetDitheredLODTransition() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetDitheredLODTransition();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetDitheredLODTransition(const unsigned char& value);

	//unsigned char	DitherOpacityMask : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetDitherOpacityMask() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetDitherOpacityMask();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetDitherOpacityMask(const unsigned char& value);

	//unsigned char	bAllowNegativeEmissiveColor : 1;		//Offset: 452	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowNegativeEmissiveColor() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowNegativeEmissiveColor();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowNegativeEmissiveColor(const unsigned char& value);

	//TEnumAsByte<ETranslucencyLightingMode>	TranslucencyLightingMode;		//Offset: 453	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ETranslucencyLightingMode> M_GetTranslucencyLightingMode() const;
	TEnumAsByte<ETranslucencyLightingMode>* M_PtrGetTranslucencyLightingMode();
	void M_SetTranslucencyLightingMode(const TEnumAsByte<ETranslucencyLightingMode>& value);

	//unsigned char	bEnableMobileSeparateTranslucency : 1;		//Offset: 454	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableMobileSeparateTranslucency() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableMobileSeparateTranslucency();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableMobileSeparateTranslucency(const unsigned char& value);

	//int32_t	NumCustomizedUVs;		//Offset: 456	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumCustomizedUVs() const;
	int32_t* M_PtrGetNumCustomizedUVs();
	void M_SetNumCustomizedUVs(const int32_t& value);

	//float	TranslucencyDirectionalLightingIntensity;		//Offset: 460	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucencyDirectionalLightingIntensity() const;
	float* M_PtrGetTranslucencyDirectionalLightingIntensity();
	void M_SetTranslucencyDirectionalLightingIntensity(const float& value);

	//float	TranslucentShadowDensityScale;		//Offset: 464	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucentShadowDensityScale() const;
	float* M_PtrGetTranslucentShadowDensityScale();
	void M_SetTranslucentShadowDensityScale(const float& value);

	//float	TranslucentSelfShadowDensityScale;		//Offset: 468	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucentSelfShadowDensityScale() const;
	float* M_PtrGetTranslucentSelfShadowDensityScale();
	void M_SetTranslucentSelfShadowDensityScale(const float& value);

	//float	TranslucentSelfShadowSecondDensityScale;		//Offset: 472	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucentSelfShadowSecondDensityScale() const;
	float* M_PtrGetTranslucentSelfShadowSecondDensityScale();
	void M_SetTranslucentSelfShadowSecondDensityScale(const float& value);

	//float	TranslucentSelfShadowSecondOpacity;		//Offset: 476	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucentSelfShadowSecondOpacity() const;
	float* M_PtrGetTranslucentSelfShadowSecondOpacity();
	void M_SetTranslucentSelfShadowSecondOpacity(const float& value);

	//float	TranslucentBackscatteringExponent;		//Offset: 480	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucentBackscatteringExponent() const;
	float* M_PtrGetTranslucentBackscatteringExponent();
	void M_SetTranslucentBackscatteringExponent(const float& value);

	//struct FLinearColor	TranslucentMultipleScatteringExtinction;		//Offset: 484	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetTranslucentMultipleScatteringExtinction() const;
	struct FLinearColor* M_PtrGetTranslucentMultipleScatteringExtinction();
	void M_SetTranslucentMultipleScatteringExtinction(const struct FLinearColor& value);

	//float	TranslucentShadowStartOffset;		//Offset: 500	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucentShadowStartOffset() const;
	float* M_PtrGetTranslucentShadowStartOffset();
	void M_SetTranslucentShadowStartOffset(const float& value);

	//unsigned char	bDisableDepthTest : 1;		//Offset: 504	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisableDepthTest() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisableDepthTest();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisableDepthTest(const unsigned char& value);

	//unsigned char	bWriteOnlyAlpha : 1;		//Offset: 504	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbWriteOnlyAlpha() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbWriteOnlyAlpha();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbWriteOnlyAlpha(const unsigned char& value);

	//unsigned char	bGenerateSphericalParticleNormals : 1;		//Offset: 504	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbGenerateSphericalParticleNormals() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbGenerateSphericalParticleNormals();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbGenerateSphericalParticleNormals(const unsigned char& value);

	//unsigned char	bTangentSpaceNormal : 1;		//Offset: 504	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbTangentSpaceNormal() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbTangentSpaceNormal();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbTangentSpaceNormal(const unsigned char& value);

	//unsigned char	bUseEmissiveForDynamicAreaLighting : 1;		//Offset: 504	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseEmissiveForDynamicAreaLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseEmissiveForDynamicAreaLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseEmissiveForDynamicAreaLighting(const unsigned char& value);

	//unsigned char	bBlockGI : 1;		//Offset: 504	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbBlockGI() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbBlockGI();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbBlockGI(const unsigned char& value);

	//unsigned char	bUsedAsSpecialEngineMaterial : 1;		//Offset: 504	Size: 1	Flags: DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedAsSpecialEngineMaterial() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedAsSpecialEngineMaterial();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedAsSpecialEngineMaterial(const unsigned char& value);

	//unsigned char	bUsedWithSkeletalMesh : 1;		//Offset: 504	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithSkeletalMesh() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithSkeletalMesh();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithSkeletalMesh(const unsigned char& value);

	//unsigned char	bUsedWithEditorCompositing : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithEditorCompositing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithEditorCompositing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithEditorCompositing(const unsigned char& value);

	//unsigned char	bUsedWithParticleSprites : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithParticleSprites() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithParticleSprites();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithParticleSprites(const unsigned char& value);

	//unsigned char	bUsedWithBeamTrails : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithBeamTrails() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithBeamTrails();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithBeamTrails(const unsigned char& value);

	//unsigned char	bUsedWithMeshParticles : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithMeshParticles() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithMeshParticles();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithMeshParticles(const unsigned char& value);

	//unsigned char	bUsedWithNiagaraSprites : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithNiagaraSprites() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithNiagaraSprites();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithNiagaraSprites(const unsigned char& value);

	//unsigned char	bUsedWithNiagaraRibbons : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithNiagaraRibbons() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithNiagaraRibbons();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithNiagaraRibbons(const unsigned char& value);

	//unsigned char	bUsedWithNiagaraMeshParticles : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithNiagaraMeshParticles() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithNiagaraMeshParticles();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithNiagaraMeshParticles(const unsigned char& value);

	//unsigned char	bUsedWithGeometryCache : 1;		//Offset: 505	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithGeometryCache() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithGeometryCache();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithGeometryCache(const unsigned char& value);

	//unsigned char	bUsedWithStaticLighting : 1;		//Offset: 506	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithStaticLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithStaticLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithStaticLighting(const unsigned char& value);

	//unsigned char	bUsedWithMorphTargets : 1;		//Offset: 506	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithMorphTargets() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithMorphTargets();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithMorphTargets(const unsigned char& value);

	//unsigned char	bUsedWithSplineMeshes : 1;		//Offset: 506	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithSplineMeshes() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithSplineMeshes();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithSplineMeshes(const unsigned char& value);

	//unsigned char	bUsedWithInstancedStaticMeshes : 1;		//Offset: 506	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithInstancedStaticMeshes() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithInstancedStaticMeshes();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithInstancedStaticMeshes(const unsigned char& value);

	//unsigned char	bUsedWithGeometryCollections : 1;		//Offset: 506	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithGeometryCollections() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithGeometryCollections();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithGeometryCollections(const unsigned char& value);

	//unsigned char	bUsesDistortion : 1;		//Offset: 506	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsesDistortion() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsesDistortion();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsesDistortion(const unsigned char& value);

	//unsigned char	bUsedWithClothing : 1;		//Offset: 506	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithClothing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithClothing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithClothing(const unsigned char& value);

	//unsigned char	bUsedWithWater : 1;		//Offset: 508	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithWater() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithWater();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithWater(const unsigned char& value);

	//unsigned char	bUsedWithHairStrands : 1;		//Offset: 508	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithHairStrands() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithHairStrands();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithHairStrands(const unsigned char& value);

	//unsigned char	bUsedWithLidarPointCloud : 1;		//Offset: 508	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithLidarPointCloud() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithLidarPointCloud();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithLidarPointCloud(const unsigned char& value);

	//unsigned char	bUsedWithVirtualHeightfieldMesh : 1;		//Offset: 508	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithVirtualHeightfieldMesh() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithVirtualHeightfieldMesh();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithVirtualHeightfieldMesh(const unsigned char& value);

	//unsigned char	bUsedWithUI : 1;		//Offset: 512	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsedWithUI() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsedWithUI();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsedWithUI(const unsigned char& value);

	//unsigned char	bAutomaticallySetUsageInEditor : 1;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAutomaticallySetUsageInEditor() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAutomaticallySetUsageInEditor();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAutomaticallySetUsageInEditor(const unsigned char& value);

	//unsigned char	bFullyRough : 1;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFullyRough() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFullyRough();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFullyRough(const unsigned char& value);

	//unsigned char	bUseFullPrecision : 1;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseFullPrecision() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseFullPrecision();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseFullPrecision(const unsigned char& value);

	//unsigned char	bUseLightmapDirectionality : 1;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseLightmapDirectionality() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseLightmapDirectionality();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseLightmapDirectionality(const unsigned char& value);

	//unsigned char	bUseAlphaToCoverage : 1;		//Offset: 512	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseAlphaToCoverage() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseAlphaToCoverage();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseAlphaToCoverage(const unsigned char& value);

	//unsigned char	bForwardRenderUsePreintegratedGFForSimpleIBL : 1;		//Offset: 516	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForwardRenderUsePreintegratedGFForSimpleIBL() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForwardRenderUsePreintegratedGFForSimpleIBL();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForwardRenderUsePreintegratedGFForSimpleIBL(const unsigned char& value);

	//unsigned char	bUseHQForwardReflections : 1;		//Offset: 520	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseHQForwardReflections() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseHQForwardReflections();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseHQForwardReflections(const unsigned char& value);

	//unsigned char	bForwardBlendsSkyLightCubemaps : 1;		//Offset: 520	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForwardBlendsSkyLightCubemaps() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForwardBlendsSkyLightCubemaps();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForwardBlendsSkyLightCubemaps(const unsigned char& value);

	//unsigned char	bUsePlanarForwardReflections : 1;		//Offset: 520	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsePlanarForwardReflections() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsePlanarForwardReflections();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsePlanarForwardReflections(const unsigned char& value);

	//unsigned char	bNormalCurvatureToRoughness : 1;		//Offset: 520	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNormalCurvatureToRoughness() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNormalCurvatureToRoughness();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNormalCurvatureToRoughness(const unsigned char& value);

	//TEnumAsByte<EMaterialTessellationMode>	D3D11TessellationMode;		//Offset: 521	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMaterialTessellationMode> M_GetD3D11TessellationMode() const;
	TEnumAsByte<EMaterialTessellationMode>* M_PtrGetD3D11TessellationMode();
	void M_SetD3D11TessellationMode(const TEnumAsByte<EMaterialTessellationMode>& value);

	//unsigned char	bEnableCrackFreeDisplacement : 1;		//Offset: 522	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableCrackFreeDisplacement() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableCrackFreeDisplacement();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableCrackFreeDisplacement(const unsigned char& value);

	//unsigned char	bEnableAdaptiveTessellation : 1;		//Offset: 522	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableAdaptiveTessellation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableAdaptiveTessellation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableAdaptiveTessellation(const unsigned char& value);

	//unsigned char	AllowTranslucentCustomDepthWrites : 1;		//Offset: 522	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetAllowTranslucentCustomDepthWrites() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetAllowTranslucentCustomDepthWrites();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetAllowTranslucentCustomDepthWrites(const unsigned char& value);

	//unsigned char	Wireframe : 1;		//Offset: 522	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetWireframe() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetWireframe();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetWireframe(const unsigned char& value);

	//unsigned char	WriteDepthToTranslucentMaterial : 1;		//Offset: 522	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetWriteDepthToTranslucentMaterial() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetWriteDepthToTranslucentMaterial();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetWriteDepthToTranslucentMaterial(const unsigned char& value);

	//TEnumAsByte<EMaterialShadingRate>	ShadingRate;		//Offset: 523	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMaterialShadingRate> M_GetShadingRate() const;
	TEnumAsByte<EMaterialShadingRate>* M_PtrGetShadingRate();
	void M_SetShadingRate(const TEnumAsByte<EMaterialShadingRate>& value);

	//unsigned char	bCanMaskedBeAssumedOpaque : 1;		//Offset: 524	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCanMaskedBeAssumedOpaque() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCanMaskedBeAssumedOpaque();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCanMaskedBeAssumedOpaque(const unsigned char& value);

	//unsigned char	bIsMasked : 1;		//Offset: 524	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsMasked() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsMasked();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsMasked(const unsigned char& value);

	//unsigned char	bIsPreviewMaterial : 1;		//Offset: 524	Size: 1	Flags: Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsPreviewMaterial() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsPreviewMaterial();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsPreviewMaterial(const unsigned char& value);

	//unsigned char	bIsFunctionPreviewMaterial : 1;		//Offset: 524	Size: 1	Flags: Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsFunctionPreviewMaterial() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsFunctionPreviewMaterial();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsFunctionPreviewMaterial(const unsigned char& value);

	//unsigned char	bUseMaterialAttributes : 1;		//Offset: 524	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseMaterialAttributes() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseMaterialAttributes();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseMaterialAttributes(const unsigned char& value);

	//unsigned char	bCastRayTracedShadows : 1;		//Offset: 524	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastRayTracedShadows() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastRayTracedShadows();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastRayTracedShadows(const unsigned char& value);

	//unsigned char	bUseTranslucencyVertexFog : 1;		//Offset: 524	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseTranslucencyVertexFog() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseTranslucencyVertexFog();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseTranslucencyVertexFog(const unsigned char& value);

	//unsigned char	bApplyCloudFogging : 1;		//Offset: 524	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbApplyCloudFogging() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbApplyCloudFogging();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbApplyCloudFogging(const unsigned char& value);

	//unsigned char	bIsSky : 1;		//Offset: 525	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsSky() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsSky();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsSky(const unsigned char& value);

	//unsigned char	bComputeFogPerPixel : 1;		//Offset: 525	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbComputeFogPerPixel() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbComputeFogPerPixel();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbComputeFogPerPixel(const unsigned char& value);

	//unsigned char	bOutputTranslucentVelocity : 1;		//Offset: 525	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOutputTranslucentVelocity() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOutputTranslucentVelocity();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOutputTranslucentVelocity(const unsigned char& value);

	//unsigned char	bAllowDevelopmentShaderCompile : 1;		//Offset: 525	Size: 1	Flags: Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowDevelopmentShaderCompile() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowDevelopmentShaderCompile();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowDevelopmentShaderCompile(const unsigned char& value);

	//unsigned char	bIsMaterialEditorStatsMaterial : 1;		//Offset: 525	Size: 1	Flags: Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsMaterialEditorStatsMaterial() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsMaterialEditorStatsMaterial();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsMaterialEditorStatsMaterial(const unsigned char& value);

	//TEnumAsByte<EBlendableLocation>	BlendableLocation;		//Offset: 526	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBlendableLocation> M_GetBlendableLocation() const;
	TEnumAsByte<EBlendableLocation>* M_PtrGetBlendableLocation();
	void M_SetBlendableLocation(const TEnumAsByte<EBlendableLocation>& value);

	//unsigned char	BlendableOutputAlpha : 1;		//Offset: 527	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetBlendableOutputAlpha() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetBlendableOutputAlpha();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetBlendableOutputAlpha(const unsigned char& value);

	//unsigned char	bEnableStencilTest : 1;		//Offset: 527	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableStencilTest() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableStencilTest();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableStencilTest(const unsigned char& value);

	//TEnumAsByte<EMaterialStencilCompare>	StencilCompare;		//Offset: 528	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMaterialStencilCompare> M_GetStencilCompare() const;
	TEnumAsByte<EMaterialStencilCompare>* M_PtrGetStencilCompare();
	void M_SetStencilCompare(const TEnumAsByte<EMaterialStencilCompare>& value);

	//unsigned char	StencilRefValue;		//Offset: 529	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char M_GetStencilRefValue() const;
	unsigned char* M_PtrGetStencilRefValue();
	void M_SetStencilRefValue(const unsigned char& value);

	//TEnumAsByte<ERefractionMode>	RefractionMode;		//Offset: 530	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ERefractionMode> M_GetRefractionMode() const;
	TEnumAsByte<ERefractionMode>* M_PtrGetRefractionMode();
	void M_SetRefractionMode(const TEnumAsByte<ERefractionMode>& value);

	//int32_t	BlendablePriority;		//Offset: 532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetBlendablePriority() const;
	int32_t* M_PtrGetBlendablePriority();
	void M_SetBlendablePriority(const int32_t& value);

	//unsigned char	bIsBlendable : 1;		//Offset: 536	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsBlendable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsBlendable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsBlendable(const unsigned char& value);

	//uint32_t	UsageFlagWarnings;		//Offset: 540	Size: 4	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint32_t M_GetUsageFlagWarnings() const;
	uint32_t* M_PtrGetUsageFlagWarnings();
	void M_SetUsageFlagWarnings(const uint32_t& value);

	//float	RefractionDepthBias;		//Offset: 544	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRefractionDepthBias() const;
	float* M_PtrGetRefractionDepthBias();
	void M_SetRefractionDepthBias(const float& value);

	//struct FGuid	StateId;		//Offset: 548	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FGuid M_GetStateId() const;
	struct FGuid* M_PtrGetStateId();
	void M_SetStateId(const struct FGuid& value);

	//float	MaxDisplacement;		//Offset: 564	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxDisplacement() const;
	float* M_PtrGetMaxDisplacement();
	void M_SetMaxDisplacement(const float& value);

	//struct FMaterialCachedExpressionData	CachedExpressionData;		//Offset: 616	Size: 472	Flags: NativeAccessSpecifierPrivate
	struct FMaterialCachedExpressionData M_GetCachedExpressionData() const;
	struct FMaterialCachedExpressionData* M_PtrGetCachedExpressionData();
	void M_SetCachedExpressionData(const struct FMaterialCachedExpressionData& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};