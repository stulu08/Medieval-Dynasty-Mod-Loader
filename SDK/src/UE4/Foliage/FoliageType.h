#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Foliage.FoliageType
// Super: Class CoreUObject.Object
// Size: 944
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UFoliageType : public UObject {
public:
#pragma region Members
	//struct FGuid	UpdateGuid;		//Offset: 40	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FGuid M_GetUpdateGuid() const;
	struct FGuid* M_PtrGetUpdateGuid();
	void M_SetUpdateGuid(const struct FGuid& value);

	//float	Density;		//Offset: 56	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDensity() const;
	float* M_PtrGetDensity();
	void M_SetDensity(const float& value);

	//float	DensityAdjustmentFactor;		//Offset: 60	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDensityAdjustmentFactor() const;
	float* M_PtrGetDensityAdjustmentFactor();
	void M_SetDensityAdjustmentFactor(const float& value);

	//float	Radius;		//Offset: 64	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRadius() const;
	float* M_PtrGetRadius();
	void M_SetRadius(const float& value);

	//bool	bSingleInstanceModeOverrideRadius;		//Offset: 68	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbSingleInstanceModeOverrideRadius() const;
	bool* M_PtrGetbSingleInstanceModeOverrideRadius();
	void M_SetbSingleInstanceModeOverrideRadius(const bool& value);

	//float	SingleInstanceModeRadius;		//Offset: 72	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSingleInstanceModeRadius() const;
	float* M_PtrGetSingleInstanceModeRadius();
	void M_SetSingleInstanceModeRadius(const float& value);

	//EFoliageScaling	Scaling;		//Offset: 76	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EFoliageScaling M_GetScaling() const;
	EFoliageScaling* M_PtrGetScaling();
	void M_SetScaling(const EFoliageScaling& value);

	//struct FFloatInterval	ScaleX;		//Offset: 80	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetScaleX() const;
	struct FFloatInterval* M_PtrGetScaleX();
	void M_SetScaleX(const struct FFloatInterval& value);

	//struct FFloatInterval	ScaleY;		//Offset: 88	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetScaleY() const;
	struct FFloatInterval* M_PtrGetScaleY();
	void M_SetScaleY(const struct FFloatInterval& value);

	//struct FFloatInterval	ScaleZ;		//Offset: 96	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetScaleZ() const;
	struct FFloatInterval* M_PtrGetScaleZ();
	void M_SetScaleZ(const struct FFloatInterval& value);

	//struct FFoliageVertexColorChannelMask	VertexColorMaskByChannel[4];		//Offset: 104	Size: 12	Flags: Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FFoliageVertexColorChannelMask M_GetVertexColorMaskByChannel() const;
	struct FFoliageVertexColorChannelMask* M_PtrGetVertexColorMaskByChannel();
	void M_SetVertexColorMaskByChannel(const struct FFoliageVertexColorChannelMask& value);

	//TEnumAsByte<EFoliageVertexColorMask>	VertexColorMask;		//Offset: 152	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EFoliageVertexColorMask> M_GetVertexColorMask() const;
	TEnumAsByte<EFoliageVertexColorMask>* M_PtrGetVertexColorMask();
	void M_SetVertexColorMask(const TEnumAsByte<EFoliageVertexColorMask>& value);

	//float	VertexColorMaskThreshold;		//Offset: 156	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetVertexColorMaskThreshold() const;
	float* M_PtrGetVertexColorMaskThreshold();
	void M_SetVertexColorMaskThreshold(const float& value);

	//unsigned char	VertexColorMaskInvert : 1;		//Offset: 160	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetVertexColorMaskInvert() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetVertexColorMaskInvert();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetVertexColorMaskInvert(const unsigned char& value);

	//struct FFloatInterval	ZOffset;		//Offset: 164	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetZOffset() const;
	struct FFloatInterval* M_PtrGetZOffset();
	void M_SetZOffset(const struct FFloatInterval& value);

	//unsigned char	AlignToNormal : 1;		//Offset: 172	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetAlignToNormal() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetAlignToNormal();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetAlignToNormal(const unsigned char& value);

	//float	AlignMaxAngle;		//Offset: 176	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetAlignMaxAngle() const;
	float* M_PtrGetAlignMaxAngle();
	void M_SetAlignMaxAngle(const float& value);

	//unsigned char	RandomYaw : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetRandomYaw() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetRandomYaw();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetRandomYaw(const unsigned char& value);

	//float	RandomPitchAngle;		//Offset: 184	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRandomPitchAngle() const;
	float* M_PtrGetRandomPitchAngle();
	void M_SetRandomPitchAngle(const float& value);

	//struct FFloatInterval	GroundSlopeAngle;		//Offset: 188	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetGroundSlopeAngle() const;
	struct FFloatInterval* M_PtrGetGroundSlopeAngle();
	void M_SetGroundSlopeAngle(const struct FFloatInterval& value);

	//struct FFloatInterval	Height;		//Offset: 196	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetHeight() const;
	struct FFloatInterval* M_PtrGetHeight();
	void M_SetHeight(const struct FFloatInterval& value);

	//TArray<struct FName>	LandscapeLayers;		//Offset: 208	Size: 16	Flags: Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<struct FName> M_GetLandscapeLayers() const;
	TArray<struct FName>* M_PtrGetLandscapeLayers();
	void M_SetLandscapeLayers(const TArray<struct FName>& value);

	//float	MinimumLayerWeight;		//Offset: 224	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinimumLayerWeight() const;
	float* M_PtrGetMinimumLayerWeight();
	void M_SetMinimumLayerWeight(const float& value);

	//TArray<struct FName>	ExclusionLandscapeLayers;		//Offset: 232	Size: 16	Flags: Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<struct FName> M_GetExclusionLandscapeLayers() const;
	TArray<struct FName>* M_PtrGetExclusionLandscapeLayers();
	void M_SetExclusionLandscapeLayers(const TArray<struct FName>& value);

	//float	MinimumExclusionLayerWeight;		//Offset: 248	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinimumExclusionLayerWeight() const;
	float* M_PtrGetMinimumExclusionLayerWeight();
	void M_SetMinimumExclusionLayerWeight(const float& value);

	//struct FName	LandscapeLayer;		//Offset: 252	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetLandscapeLayer() const;
	struct FName* M_PtrGetLandscapeLayer();
	void M_SetLandscapeLayer(const struct FName& value);

	//unsigned char	CollisionWithWorld : 1;		//Offset: 260	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetCollisionWithWorld() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetCollisionWithWorld();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetCollisionWithWorld(const unsigned char& value);

	//struct FVector	CollisionScale;		//Offset: 264	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetCollisionScale() const;
	struct FVector* M_PtrGetCollisionScale();
	void M_SetCollisionScale(const struct FVector& value);

	//struct FBoxSphereBounds	MeshBounds;		//Offset: 276	Size: 28	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FBoxSphereBounds M_GetMeshBounds() const;
	struct FBoxSphereBounds* M_PtrGetMeshBounds();
	void M_SetMeshBounds(const struct FBoxSphereBounds& value);

	//struct FVector	LowBoundOriginRadius;		//Offset: 304	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetLowBoundOriginRadius() const;
	struct FVector* M_PtrGetLowBoundOriginRadius();
	void M_SetLowBoundOriginRadius(const struct FVector& value);

	//TEnumAsByte<EComponentMobility>	Mobility;		//Offset: 316	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EComponentMobility> M_GetMobility() const;
	TEnumAsByte<EComponentMobility>* M_PtrGetMobility();
	void M_SetMobility(const TEnumAsByte<EComponentMobility>& value);

	//struct FInt32Interval	CullDistance;		//Offset: 320	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FInt32Interval M_GetCullDistance() const;
	struct FInt32Interval* M_PtrGetCullDistance();
	void M_SetCullDistance(const struct FInt32Interval& value);

	//unsigned char	bEnableStaticLighting : 1;		//Offset: 328	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableStaticLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableStaticLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableStaticLighting(const unsigned char& value);

	//unsigned char	CastShadow : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetCastShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetCastShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetCastShadow(const unsigned char& value);

	//unsigned char	bAffectDynamicIndirectLighting : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAffectDynamicIndirectLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAffectDynamicIndirectLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAffectDynamicIndirectLighting(const unsigned char& value);

	//unsigned char	bAffectDistanceFieldLighting : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAffectDistanceFieldLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAffectDistanceFieldLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAffectDistanceFieldLighting(const unsigned char& value);

	//unsigned char	bCastDynamicShadow : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastDynamicShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastDynamicShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastDynamicShadow(const unsigned char& value);

	//unsigned char	bCastStaticShadow : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastStaticShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastStaticShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastStaticShadow(const unsigned char& value);

	//unsigned char	bCastShadowAsTwoSided : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastShadowAsTwoSided() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastShadowAsTwoSided();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastShadowAsTwoSided(const unsigned char& value);

	//unsigned char	bReceivesDecals : 1;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReceivesDecals() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReceivesDecals();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReceivesDecals(const unsigned char& value);

	//unsigned char	bOverrideLightMapRes : 1;		//Offset: 329	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverrideLightMapRes() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverrideLightMapRes();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverrideLightMapRes(const unsigned char& value);

	//int32_t	OverriddenLightMapRes;		//Offset: 332	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetOverriddenLightMapRes() const;
	int32_t* M_PtrGetOverriddenLightMapRes();
	void M_SetOverriddenLightMapRes(const int32_t& value);

	//ELightmapType	LightmapType;		//Offset: 336	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ELightmapType M_GetLightmapType() const;
	ELightmapType* M_PtrGetLightmapType();
	void M_SetLightmapType(const ELightmapType& value);

	//unsigned char	bUseAsOccluder : 1;		//Offset: 340	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseAsOccluder() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseAsOccluder();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseAsOccluder(const unsigned char& value);

	//unsigned char	bVisibleInRayTracing : 1;		//Offset: 344	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbVisibleInRayTracing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbVisibleInRayTracing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbVisibleInRayTracing(const unsigned char& value);

	//unsigned char	bEvaluateWorldPositionOffset : 1;		//Offset: 344	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEvaluateWorldPositionOffset() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEvaluateWorldPositionOffset();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEvaluateWorldPositionOffset(const unsigned char& value);

	//struct FBodyInstance	BodyInstance;		//Offset: 352	Size: 344	Flags: Edit, NativeAccessSpecifierPublic
	struct FBodyInstance M_GetBodyInstance() const;
	struct FBodyInstance* M_PtrGetBodyInstance();
	void M_SetBodyInstance(const struct FBodyInstance& value);

	//TEnumAsByte<EHasCustomNavigableGeometry>	CustomNavigableGeometry;		//Offset: 696	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHasCustomNavigableGeometry> M_GetCustomNavigableGeometry() const;
	TEnumAsByte<EHasCustomNavigableGeometry>* M_PtrGetCustomNavigableGeometry();
	void M_SetCustomNavigableGeometry(const TEnumAsByte<EHasCustomNavigableGeometry>& value);

	//struct FLightingChannels	LightingChannels;		//Offset: 697	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FLightingChannels M_GetLightingChannels() const;
	struct FLightingChannels* M_PtrGetLightingChannels();
	void M_SetLightingChannels(const struct FLightingChannels& value);

	//unsigned char	bRenderCustomDepth : 1;		//Offset: 700	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRenderCustomDepth() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRenderCustomDepth();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRenderCustomDepth(const unsigned char& value);

	//ERendererStencilMask	CustomDepthStencilWriteMask;		//Offset: 704	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERendererStencilMask M_GetCustomDepthStencilWriteMask() const;
	ERendererStencilMask* M_PtrGetCustomDepthStencilWriteMask();
	void M_SetCustomDepthStencilWriteMask(const ERendererStencilMask& value);

	//int32_t	CustomDepthStencilValue;		//Offset: 708	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetCustomDepthStencilValue() const;
	int32_t* M_PtrGetCustomDepthStencilValue();
	void M_SetCustomDepthStencilValue(const int32_t& value);

	//int32_t	TranslucencySortPriority;		//Offset: 712	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetTranslucencySortPriority() const;
	int32_t* M_PtrGetTranslucencySortPriority();
	void M_SetTranslucencySortPriority(const int32_t& value);

	//float	CollisionRadius;		//Offset: 716	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCollisionRadius() const;
	float* M_PtrGetCollisionRadius();
	void M_SetCollisionRadius(const float& value);

	//float	ShadeRadius;		//Offset: 720	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetShadeRadius() const;
	float* M_PtrGetShadeRadius();
	void M_SetShadeRadius(const float& value);

	//int32_t	NumSteps;		//Offset: 724	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumSteps() const;
	int32_t* M_PtrGetNumSteps();
	void M_SetNumSteps(const int32_t& value);

	//float	InitialSeedDensity;		//Offset: 728	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetInitialSeedDensity() const;
	float* M_PtrGetInitialSeedDensity();
	void M_SetInitialSeedDensity(const float& value);

	//float	AverageSpreadDistance;		//Offset: 732	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetAverageSpreadDistance() const;
	float* M_PtrGetAverageSpreadDistance();
	void M_SetAverageSpreadDistance(const float& value);

	//float	SpreadVariance;		//Offset: 736	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSpreadVariance() const;
	float* M_PtrGetSpreadVariance();
	void M_SetSpreadVariance(const float& value);

	//int32_t	SeedsPerStep;		//Offset: 740	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetSeedsPerStep() const;
	int32_t* M_PtrGetSeedsPerStep();
	void M_SetSeedsPerStep(const int32_t& value);

	//int32_t	DistributionSeed;		//Offset: 744	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetDistributionSeed() const;
	int32_t* M_PtrGetDistributionSeed();
	void M_SetDistributionSeed(const int32_t& value);

	//float	MaxInitialSeedOffset;		//Offset: 748	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxInitialSeedOffset() const;
	float* M_PtrGetMaxInitialSeedOffset();
	void M_SetMaxInitialSeedOffset(const float& value);

	//bool	bCanGrowInShade;		//Offset: 752	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbCanGrowInShade() const;
	bool* M_PtrGetbCanGrowInShade();
	void M_SetbCanGrowInShade(const bool& value);

	//bool	bSpawnsInShade;		//Offset: 753	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbSpawnsInShade() const;
	bool* M_PtrGetbSpawnsInShade();
	void M_SetbSpawnsInShade(const bool& value);

	//float	MaxInitialAge;		//Offset: 756	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxInitialAge() const;
	float* M_PtrGetMaxInitialAge();
	void M_SetMaxInitialAge(const float& value);

	//float	MaxAge;		//Offset: 760	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxAge() const;
	float* M_PtrGetMaxAge();
	void M_SetMaxAge(const float& value);

	//float	OverlapPriority;		//Offset: 764	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetOverlapPriority() const;
	float* M_PtrGetOverlapPriority();
	void M_SetOverlapPriority(const float& value);

	//struct FFloatInterval	ProceduralScale;		//Offset: 768	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatInterval M_GetProceduralScale() const;
	struct FFloatInterval* M_PtrGetProceduralScale();
	void M_SetProceduralScale(const struct FFloatInterval& value);

	//struct FRuntimeFloatCurve	ScaleCurve;		//Offset: 776	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FRuntimeFloatCurve M_GetScaleCurve() const;
	struct FRuntimeFloatCurve* M_PtrGetScaleCurve();
	void M_SetScaleCurve(const struct FRuntimeFloatCurve& value);

	//int32_t	ChangeCount;		//Offset: 912	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetChangeCount() const;
	int32_t* M_PtrGetChangeCount();
	void M_SetChangeCount(const int32_t& value);

	//unsigned char	ReapplyDensity : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyDensity() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyDensity();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyDensity(const unsigned char& value);

	//unsigned char	ReapplyRadius : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyRadius() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyRadius();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyRadius(const unsigned char& value);

	//unsigned char	ReapplyAlignToNormal : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyAlignToNormal() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyAlignToNormal();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyAlignToNormal(const unsigned char& value);

	//unsigned char	ReapplyRandomYaw : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyRandomYaw() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyRandomYaw();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyRandomYaw(const unsigned char& value);

	//unsigned char	ReapplyScaling : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyScaling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyScaling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyScaling(const unsigned char& value);

	//unsigned char	ReapplyScaleX : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyScaleX() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyScaleX();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyScaleX(const unsigned char& value);

	//unsigned char	ReapplyScaleY : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyScaleY() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyScaleY();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyScaleY(const unsigned char& value);

	//unsigned char	ReapplyScaleZ : 1;		//Offset: 916	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyScaleZ() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyScaleZ();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyScaleZ(const unsigned char& value);

	//unsigned char	ReapplyRandomPitchAngle : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyRandomPitchAngle() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyRandomPitchAngle();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyRandomPitchAngle(const unsigned char& value);

	//unsigned char	ReapplyGroundSlope : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyGroundSlope() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyGroundSlope();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyGroundSlope(const unsigned char& value);

	//unsigned char	ReapplyHeight : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyHeight() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyHeight();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyHeight(const unsigned char& value);

	//unsigned char	ReapplyLandscapeLayers : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyLandscapeLayers() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyLandscapeLayers();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyLandscapeLayers(const unsigned char& value);

	//unsigned char	ReapplyZOffset : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyZOffset() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyZOffset();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyZOffset(const unsigned char& value);

	//unsigned char	ReapplyCollisionWithWorld : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyCollisionWithWorld() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyCollisionWithWorld();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyCollisionWithWorld(const unsigned char& value);

	//unsigned char	ReapplyVertexColorMask : 1;		//Offset: 917	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetReapplyVertexColorMask() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetReapplyVertexColorMask();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetReapplyVertexColorMask(const unsigned char& value);

	//unsigned char	bEnableDensityScaling : 1;		//Offset: 917	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableDensityScaling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableDensityScaling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableDensityScaling(const unsigned char& value);

	//unsigned char	bEnableDiscardOnLoad : 1;		//Offset: 918	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableDiscardOnLoad() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableDiscardOnLoad();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableDiscardOnLoad(const unsigned char& value);

	//TArray<class URuntimeVirtualTexture*>	RuntimeVirtualTextures;		//Offset: 920	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class URuntimeVirtualTexture*> M_GetRuntimeVirtualTextures() const;
	TArray<class URuntimeVirtualTexture*>* M_PtrGetRuntimeVirtualTextures();
	void M_SetRuntimeVirtualTextures(const TArray<class URuntimeVirtualTexture*>& value);

	//int32_t	VirtualTextureCullMips;		//Offset: 936	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetVirtualTextureCullMips() const;
	int32_t* M_PtrGetVirtualTextureCullMips();
	void M_SetVirtualTextureCullMips(const int32_t& value);

	//ERuntimeVirtualTextureMainPassType	VirtualTextureRenderPassType;		//Offset: 940	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERuntimeVirtualTextureMainPassType M_GetVirtualTextureRenderPassType() const;
	ERuntimeVirtualTextureMainPassType* M_PtrGetVirtualTextureRenderPassType();
	void M_SetVirtualTextureRenderPassType(const ERuntimeVirtualTextureMainPassType& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};