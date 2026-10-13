#pragma once
#include "Structs.h"
#include "Engine/SceneComponent.h"
/////////////////////////////////////////////
// Class Engine.PrimitiveComponent
// Super: Class Engine.SceneComponent
// Size: 1104
// Size inherited: 512
/////////////////////////////////////////////
namespace UE4 {
class UPrimitiveComponent : public USceneComponent {
public:
#pragma region Members
	//float	MinDrawDistance;		//Offset: 512	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDrawDistance() const;
	float* M_PtrGetMinDrawDistance();
	void M_SetMinDrawDistance(const float& value);

	//float	LDMaxDrawDistance;		//Offset: 516	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLDMaxDrawDistance() const;
	float* M_PtrGetLDMaxDrawDistance();
	void M_SetLDMaxDrawDistance(const float& value);

	//float	CachedMaxDrawDistance;		//Offset: 520	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCachedMaxDrawDistance() const;
	float* M_PtrGetCachedMaxDrawDistance();
	void M_SetCachedMaxDrawDistance(const float& value);

	//TEnumAsByte<ESceneDepthPriorityGroup>	DepthPriorityGroup;		//Offset: 524	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESceneDepthPriorityGroup> M_GetDepthPriorityGroup() const;
	TEnumAsByte<ESceneDepthPriorityGroup>* M_PtrGetDepthPriorityGroup();
	void M_SetDepthPriorityGroup(const TEnumAsByte<ESceneDepthPriorityGroup>& value);

	//TEnumAsByte<ESceneDepthPriorityGroup>	ViewOwnerDepthPriorityGroup;		//Offset: 525	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESceneDepthPriorityGroup> M_GetViewOwnerDepthPriorityGroup() const;
	TEnumAsByte<ESceneDepthPriorityGroup>* M_PtrGetViewOwnerDepthPriorityGroup();
	void M_SetViewOwnerDepthPriorityGroup(const TEnumAsByte<ESceneDepthPriorityGroup>& value);

	//TEnumAsByte<EIndirectLightingCacheQuality>	IndirectLightingCacheQuality;		//Offset: 526	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EIndirectLightingCacheQuality> M_GetIndirectLightingCacheQuality() const;
	TEnumAsByte<EIndirectLightingCacheQuality>* M_PtrGetIndirectLightingCacheQuality();
	void M_SetIndirectLightingCacheQuality(const TEnumAsByte<EIndirectLightingCacheQuality>& value);

	//ELightmapType	LightmapType;		//Offset: 527	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ELightmapType M_GetLightmapType() const;
	ELightmapType* M_PtrGetLightmapType();
	void M_SetLightmapType(const ELightmapType& value);

	//unsigned char	bUseMaxLODAsImposter : 1;		//Offset: 528	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseMaxLODAsImposter() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseMaxLODAsImposter();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseMaxLODAsImposter(const unsigned char& value);

	//unsigned char	bBatchImpostersAsInstances : 1;		//Offset: 528	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbBatchImpostersAsInstances() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbBatchImpostersAsInstances();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbBatchImpostersAsInstances(const unsigned char& value);

	//unsigned char	bNeverDistanceCull : 1;		//Offset: 528	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNeverDistanceCull() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNeverDistanceCull();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNeverDistanceCull(const unsigned char& value);

	//unsigned char	bAlwaysCreatePhysicsState : 1;		//Offset: 528	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAlwaysCreatePhysicsState() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAlwaysCreatePhysicsState();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAlwaysCreatePhysicsState(const unsigned char& value);

	//unsigned char	bGenerateOverlapEvents : 1;		//Offset: 529	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbGenerateOverlapEvents() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbGenerateOverlapEvents();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbGenerateOverlapEvents(const unsigned char& value);

	//unsigned char	bMultiBodyOverlap : 1;		//Offset: 529	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbMultiBodyOverlap() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbMultiBodyOverlap();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbMultiBodyOverlap(const unsigned char& value);

	//unsigned char	bTraceComplexOnMove : 1;		//Offset: 529	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbTraceComplexOnMove() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbTraceComplexOnMove();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbTraceComplexOnMove(const unsigned char& value);

	//unsigned char	bReturnMaterialOnMove : 1;		//Offset: 529	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReturnMaterialOnMove() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReturnMaterialOnMove();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReturnMaterialOnMove(const unsigned char& value);

	//unsigned char	bUseViewOwnerDepthPriorityGroup : 1;		//Offset: 529	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseViewOwnerDepthPriorityGroup() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseViewOwnerDepthPriorityGroup();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseViewOwnerDepthPriorityGroup(const unsigned char& value);

	//unsigned char	bAllowCullDistanceVolume : 1;		//Offset: 529	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowCullDistanceVolume() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowCullDistanceVolume();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowCullDistanceVolume(const unsigned char& value);

	//unsigned char	bHasMotionBlurVelocityMeshes : 1;		//Offset: 529	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasMotionBlurVelocityMeshes() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasMotionBlurVelocityMeshes();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasMotionBlurVelocityMeshes(const unsigned char& value);

	//unsigned char	bVisibleInReflectionCaptures : 1;		//Offset: 529	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbVisibleInReflectionCaptures() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbVisibleInReflectionCaptures();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbVisibleInReflectionCaptures(const unsigned char& value);

	//unsigned char	bVisibleInRealTimeSkyCaptures : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbVisibleInRealTimeSkyCaptures() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbVisibleInRealTimeSkyCaptures();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbVisibleInRealTimeSkyCaptures(const unsigned char& value);

	//unsigned char	bVisibleInRayTracing : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbVisibleInRayTracing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbVisibleInRayTracing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbVisibleInRayTracing(const unsigned char& value);

	//unsigned char	bRenderInMainPass : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRenderInMainPass() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRenderInMainPass();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRenderInMainPass(const unsigned char& value);

	//unsigned char	bRenderInDepthPass : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRenderInDepthPass() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRenderInDepthPass();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRenderInDepthPass(const unsigned char& value);

	//unsigned char	bReceivesDecals : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReceivesDecals() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReceivesDecals();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReceivesDecals(const unsigned char& value);

	//unsigned char	bOwnerNoSee : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOwnerNoSee() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOwnerNoSee();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOwnerNoSee(const unsigned char& value);

	//unsigned char	bOnlyOwnerSee : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOnlyOwnerSee() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOnlyOwnerSee();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOnlyOwnerSee(const unsigned char& value);

	//unsigned char	bTreatAsBackgroundForOcclusion : 1;		//Offset: 530	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbTreatAsBackgroundForOcclusion() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbTreatAsBackgroundForOcclusion();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbTreatAsBackgroundForOcclusion(const unsigned char& value);

	//unsigned char	bUseAsOccluder : 1;		//Offset: 531	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseAsOccluder() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseAsOccluder();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseAsOccluder(const unsigned char& value);

	//unsigned char	bSelectable : 1;		//Offset: 531	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSelectable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSelectable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSelectable(const unsigned char& value);

	//unsigned char	bForceMipStreaming : 1;		//Offset: 531	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceMipStreaming() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceMipStreaming();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceMipStreaming(const unsigned char& value);

	//unsigned char	bHasPerInstanceHitProxies : 1;		//Offset: 531	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasPerInstanceHitProxies() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasPerInstanceHitProxies();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasPerInstanceHitProxies(const unsigned char& value);

	//unsigned char	CastShadow : 1;		//Offset: 531	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetCastShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetCastShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetCastShadow(const unsigned char& value);

	//unsigned char	bAffectDynamicIndirectLighting : 1;		//Offset: 531	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAffectDynamicIndirectLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAffectDynamicIndirectLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAffectDynamicIndirectLighting(const unsigned char& value);

	//unsigned char	bAffectDistanceFieldLighting : 1;		//Offset: 531	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAffectDistanceFieldLighting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAffectDistanceFieldLighting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAffectDistanceFieldLighting(const unsigned char& value);

	//unsigned char	bCastDynamicShadow : 1;		//Offset: 531	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastDynamicShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastDynamicShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastDynamicShadow(const unsigned char& value);

	//unsigned char	bCastStaticShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastStaticShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastStaticShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastStaticShadow(const unsigned char& value);

	//unsigned char	bCastVolumetricTranslucentShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastVolumetricTranslucentShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastVolumetricTranslucentShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastVolumetricTranslucentShadow(const unsigned char& value);

	//unsigned char	bCastContactShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastContactShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastContactShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastContactShadow(const unsigned char& value);

	//unsigned char	bSelfShadowOnly : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSelfShadowOnly() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSelfShadowOnly();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSelfShadowOnly(const unsigned char& value);

	//unsigned char	bCastFarShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastFarShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastFarShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastFarShadow(const unsigned char& value);

	//unsigned char	bCastInsetShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastInsetShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastInsetShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastInsetShadow(const unsigned char& value);

	//unsigned char	bCastCinematicShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastCinematicShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastCinematicShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastCinematicShadow(const unsigned char& value);

	//unsigned char	bCastHiddenShadow : 1;		//Offset: 532	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastHiddenShadow() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastHiddenShadow();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastHiddenShadow(const unsigned char& value);

	//unsigned char	bCastShadowAsTwoSided : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCastShadowAsTwoSided() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCastShadowAsTwoSided();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCastShadowAsTwoSided(const unsigned char& value);

	//unsigned char	bLightAsIfStatic : 1;		//Offset: 533	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbLightAsIfStatic() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbLightAsIfStatic();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbLightAsIfStatic(const unsigned char& value);

	//unsigned char	bLightAttachmentsAsGroup : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbLightAttachmentsAsGroup() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbLightAttachmentsAsGroup();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbLightAttachmentsAsGroup(const unsigned char& value);

	//unsigned char	bExcludeFromLightAttachmentGroup : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbExcludeFromLightAttachmentGroup() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbExcludeFromLightAttachmentGroup();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbExcludeFromLightAttachmentGroup(const unsigned char& value);

	//unsigned char	bReceiveMobileCSMShadows : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReceiveMobileCSMShadows() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReceiveMobileCSMShadows();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReceiveMobileCSMShadows(const unsigned char& value);

	//unsigned char	bSingleSampleShadowFromStationaryLights : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSingleSampleShadowFromStationaryLights() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSingleSampleShadowFromStationaryLights();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSingleSampleShadowFromStationaryLights(const unsigned char& value);

	//unsigned char	bIgnoreRadialImpulse : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIgnoreRadialImpulse() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIgnoreRadialImpulse();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIgnoreRadialImpulse(const unsigned char& value);

	//unsigned char	bIgnoreRadialForce : 1;		//Offset: 533	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIgnoreRadialForce() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIgnoreRadialForce();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIgnoreRadialForce(const unsigned char& value);

	//unsigned char	bApplyImpulseOnDamage : 1;		//Offset: 534	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbApplyImpulseOnDamage() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbApplyImpulseOnDamage();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbApplyImpulseOnDamage(const unsigned char& value);

	//unsigned char	bReplicatePhysicsToAutonomousProxy : 1;		//Offset: 534	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReplicatePhysicsToAutonomousProxy() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReplicatePhysicsToAutonomousProxy();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReplicatePhysicsToAutonomousProxy(const unsigned char& value);

	//unsigned char	bFillCollisionUnderneathForNavmesh : 1;		//Offset: 534	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFillCollisionUnderneathForNavmesh() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFillCollisionUnderneathForNavmesh();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFillCollisionUnderneathForNavmesh(const unsigned char& value);

	//unsigned char	AlwaysLoadOnClient : 1;		//Offset: 534	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetAlwaysLoadOnClient() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetAlwaysLoadOnClient();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetAlwaysLoadOnClient(const unsigned char& value);

	//unsigned char	AlwaysLoadOnServer : 1;		//Offset: 534	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetAlwaysLoadOnServer() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetAlwaysLoadOnServer();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetAlwaysLoadOnServer(const unsigned char& value);

	//unsigned char	bUseEditorCompositing : 1;		//Offset: 534	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseEditorCompositing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseEditorCompositing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseEditorCompositing(const unsigned char& value);

	//unsigned char	bRenderCustomDepth : 1;		//Offset: 534	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRenderCustomDepth() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRenderCustomDepth();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRenderCustomDepth(const unsigned char& value);

	//unsigned char	bVisibleInSceneCaptureOnly : 1;		//Offset: 534	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbVisibleInSceneCaptureOnly() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbVisibleInSceneCaptureOnly();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbVisibleInSceneCaptureOnly(const unsigned char& value);

	//unsigned char	bHiddenInSceneCapture : 1;		//Offset: 535	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHiddenInSceneCapture() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHiddenInSceneCapture();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHiddenInSceneCapture(const unsigned char& value);

	//TEnumAsByte<EHasCustomNavigableGeometry>	bHasCustomNavigableGeometry;		//Offset: 536	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHasCustomNavigableGeometry> M_GetbHasCustomNavigableGeometry() const;
	TEnumAsByte<EHasCustomNavigableGeometry>* M_PtrGetbHasCustomNavigableGeometry();
	void M_SetbHasCustomNavigableGeometry(const TEnumAsByte<EHasCustomNavigableGeometry>& value);

	//TEnumAsByte<ECanBeCharacterBase>	CanCharacterStepUpOn;		//Offset: 538	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECanBeCharacterBase> M_GetCanCharacterStepUpOn() const;
	TEnumAsByte<ECanBeCharacterBase>* M_PtrGetCanCharacterStepUpOn();
	void M_SetCanCharacterStepUpOn(const TEnumAsByte<ECanBeCharacterBase>& value);

	//struct FLightingChannels	LightingChannels;		//Offset: 539	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FLightingChannels M_GetLightingChannels() const;
	struct FLightingChannels* M_PtrGetLightingChannels();
	void M_SetLightingChannels(const struct FLightingChannels& value);

	//ERendererStencilMask	CustomDepthStencilWriteMask;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERendererStencilMask M_GetCustomDepthStencilWriteMask() const;
	ERendererStencilMask* M_PtrGetCustomDepthStencilWriteMask();
	void M_SetCustomDepthStencilWriteMask(const ERendererStencilMask& value);

	//int32_t	CustomDepthStencilValue;		//Offset: 544	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetCustomDepthStencilValue() const;
	int32_t* M_PtrGetCustomDepthStencilValue();
	void M_SetCustomDepthStencilValue(const int32_t& value);

	//struct FCustomPrimitiveData	CustomPrimitiveData;		//Offset: 552	Size: 16	Flags: Edit, AdvancedDisplay, NativeAccessSpecifierPrivate
	struct FCustomPrimitiveData M_GetCustomPrimitiveData() const;
	struct FCustomPrimitiveData* M_PtrGetCustomPrimitiveData();
	void M_SetCustomPrimitiveData(const struct FCustomPrimitiveData& value);

	//struct FCustomPrimitiveData	CustomPrimitiveDataInternal;		//Offset: 568	Size: 16	Flags: Transient, NativeAccessSpecifierPrivate
	struct FCustomPrimitiveData M_GetCustomPrimitiveDataInternal() const;
	struct FCustomPrimitiveData* M_PtrGetCustomPrimitiveDataInternal();
	void M_SetCustomPrimitiveDataInternal(const struct FCustomPrimitiveData& value);

	//int32_t	TranslucencySortPriority;		//Offset: 592	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetTranslucencySortPriority() const;
	int32_t* M_PtrGetTranslucencySortPriority();
	void M_SetTranslucencySortPriority(const int32_t& value);

	//float	TranslucencySortDistanceOffset;		//Offset: 596	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTranslucencySortDistanceOffset() const;
	float* M_PtrGetTranslucencySortDistanceOffset();
	void M_SetTranslucencySortDistanceOffset(const float& value);

	//int32_t	VisibilityId;		//Offset: 600	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetVisibilityId() const;
	int32_t* M_PtrGetVisibilityId();
	void M_SetVisibilityId(const int32_t& value);

	//TArray<class URuntimeVirtualTexture*>	RuntimeVirtualTextures;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class URuntimeVirtualTexture*> M_GetRuntimeVirtualTextures() const;
	TArray<class URuntimeVirtualTexture*>* M_PtrGetRuntimeVirtualTextures();
	void M_SetRuntimeVirtualTextures(const TArray<class URuntimeVirtualTexture*>& value);

	//int8_t	VirtualTextureLodBias;		//Offset: 624	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int8_t M_GetVirtualTextureLodBias() const;
	int8_t* M_PtrGetVirtualTextureLodBias();
	void M_SetVirtualTextureLodBias(const int8_t& value);

	//int8_t	VirtualTextureCullMips;		//Offset: 625	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int8_t M_GetVirtualTextureCullMips() const;
	int8_t* M_PtrGetVirtualTextureCullMips();
	void M_SetVirtualTextureCullMips(const int8_t& value);

	//int8_t	VirtualTextureMinCoverage;		//Offset: 626	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int8_t M_GetVirtualTextureMinCoverage() const;
	int8_t* M_PtrGetVirtualTextureMinCoverage();
	void M_SetVirtualTextureMinCoverage(const int8_t& value);

	//ERuntimeVirtualTextureMainPassType	VirtualTextureRenderPassType;		//Offset: 627	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ERuntimeVirtualTextureMainPassType M_GetVirtualTextureRenderPassType() const;
	ERuntimeVirtualTextureMainPassType* M_PtrGetVirtualTextureRenderPassType();
	void M_SetVirtualTextureRenderPassType(const ERuntimeVirtualTextureMainPassType& value);

	//float	LpvBiasMultiplier;		//Offset: 632	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLpvBiasMultiplier() const;
	float* M_PtrGetLpvBiasMultiplier();
	void M_SetLpvBiasMultiplier(const float& value);

	//float	BoundsScale;		//Offset: 644	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetBoundsScale() const;
	float* M_PtrGetBoundsScale();
	void M_SetBoundsScale(const float& value);

	//TArray<class AActor*>	MoveIgnoreActors;		//Offset: 664	Size: 16	Flags: ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
	TArray<class AActor*> M_GetMoveIgnoreActors() const;
	TArray<class AActor*>* M_PtrGetMoveIgnoreActors();
	void M_SetMoveIgnoreActors(const TArray<class AActor*>& value);

	//TArray<class UPrimitiveComponent*>	MoveIgnoreComponents;		//Offset: 680	Size: 16	Flags: ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<class UPrimitiveComponent*> M_GetMoveIgnoreComponents() const;
	TArray<class UPrimitiveComponent*>* M_PtrGetMoveIgnoreComponents();
	void M_SetMoveIgnoreComponents(const TArray<class UPrimitiveComponent*>& value);

	//struct FBodyInstance	BodyInstance;		//Offset: 712	Size: 344	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FBodyInstance M_GetBodyInstance() const;
	struct FBodyInstance* M_PtrGetBodyInstance();
	void M_SetBodyInstance(const struct FBodyInstance& value);

	//TAssetPtr<class FComponentHitSignature__DelegateSignature>	OnComponentHit;		//Offset: 1056	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentHitSignature__DelegateSignature> M_GetOnComponentHit() const;
	TAssetPtr<class FComponentHitSignature__DelegateSignature>* M_PtrGetOnComponentHit();
	void M_SetOnComponentHit(const TAssetPtr<class FComponentHitSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>	OnComponentBeginOverlap;		//Offset: 1057	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature> M_GetOnComponentBeginOverlap() const;
	TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>* M_PtrGetOnComponentBeginOverlap();
	void M_SetOnComponentBeginOverlap(const TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>	OnComponentEndOverlap;		//Offset: 1058	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature> M_GetOnComponentEndOverlap() const;
	TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>* M_PtrGetOnComponentEndOverlap();
	void M_SetOnComponentEndOverlap(const TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentWakeSignature__DelegateSignature>	OnComponentWake;		//Offset: 1059	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentWakeSignature__DelegateSignature> M_GetOnComponentWake() const;
	TAssetPtr<class FComponentWakeSignature__DelegateSignature>* M_PtrGetOnComponentWake();
	void M_SetOnComponentWake(const TAssetPtr<class FComponentWakeSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentSleepSignature__DelegateSignature>	OnComponentSleep;		//Offset: 1060	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentSleepSignature__DelegateSignature> M_GetOnComponentSleep() const;
	TAssetPtr<class FComponentSleepSignature__DelegateSignature>* M_PtrGetOnComponentSleep();
	void M_SetOnComponentSleep(const TAssetPtr<class FComponentSleepSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>	OnBeginCursorOver;		//Offset: 1062	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature> M_GetOnBeginCursorOver() const;
	TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>* M_PtrGetOnBeginCursorOver();
	void M_SetOnBeginCursorOver(const TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>	OnEndCursorOver;		//Offset: 1063	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature> M_GetOnEndCursorOver() const;
	TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>* M_PtrGetOnEndCursorOver();
	void M_SetOnEndCursorOver(const TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>	OnClicked;		//Offset: 1064	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentOnClickedSignature__DelegateSignature> M_GetOnClicked() const;
	TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>* M_PtrGetOnClicked();
	void M_SetOnClicked(const TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>	OnReleased;		//Offset: 1065	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature> M_GetOnReleased() const;
	TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>* M_PtrGetOnReleased();
	void M_SetOnReleased(const TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>	OnInputTouchBegin;		//Offset: 1066	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature> M_GetOnInputTouchBegin() const;
	TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>* M_PtrGetOnInputTouchBegin();
	void M_SetOnInputTouchBegin(const TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>	OnInputTouchEnd;		//Offset: 1067	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature> M_GetOnInputTouchEnd() const;
	TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>* M_PtrGetOnInputTouchEnd();
	void M_SetOnInputTouchEnd(const TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>	OnInputTouchEnter;		//Offset: 1068	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature> M_GetOnInputTouchEnter() const;
	TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>* M_PtrGetOnInputTouchEnter();
	void M_SetOnInputTouchEnter(const TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>	OnInputTouchLeave;		//Offset: 1069	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature> M_GetOnInputTouchLeave() const;
	TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>* M_PtrGetOnInputTouchLeave();
	void M_SetOnInputTouchLeave(const TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>& value);

	//class UPrimitiveComponent*	LODParentPrimitive;		//Offset: 1096	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UPrimitiveComponent* M_GetLODParentPrimitive() const;
	class UPrimitiveComponent** M_PtrGetLODParentPrimitive();
	void M_SetLODParentPrimitive(const class UPrimitiveComponent*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}

#pragma region Functions
	void AddAngularImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange);

	void AddAngularImpulseInDegrees(struct FVector Impulse, struct FName BoneName, bool bVelChange);

	void AddAngularImpulseInRadians(struct FVector Impulse, struct FName BoneName, bool bVelChange);

	void AddForce(struct FVector Force, struct FName BoneName, bool bAccelChange);

	void AddForceAtLocation(struct FVector Force, struct FVector Location, struct FName BoneName);

	void AddForceAtLocationLocal(struct FVector Force, struct FVector Location, struct FName BoneName);

	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange);

	void AddImpulseAtLocation(struct FVector Impulse, struct FVector Location, struct FName BoneName);

	void AddRadialForce(struct FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);

	void AddRadialImpulse(struct FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);

	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange);

	void AddTorqueInDegrees(struct FVector Torque, struct FName BoneName, bool bAccelChange);

	void AddTorqueInRadians(struct FVector Torque, struct FName BoneName, bool bAccelChange);

	bool CanCharacterStepUp(class APawn* Pawn)/* const*/;

	void ClearMoveIgnoreActors();

	void ClearMoveIgnoreComponents();

	TArray<class AActor*> CopyArrayOfMoveIgnoreActors();

	TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();

	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex);

	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, class UMaterialInterface* Parent);

	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, class UMaterialInterface* SourceMaterial, struct FName OptionalName);

	float GetAngularDamping()/* const*/;

	struct FVector GetCenterOfMass(struct FName BoneName)/* const*/;

	float GetClosestPointOnCollision(const struct FVector& Point, struct FVector* OutPointOnBody, struct FName BoneName)/* const*/;

	TEnumAsByte<ECollisionEnabled> GetCollisionEnabled()/* const*/;

	TEnumAsByte<ECollisionChannel> GetCollisionObjectType()/* const*/;

	struct FName GetCollisionProfileName()/* const*/;

	TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel)/* const*/;

	bool GetGenerateOverlapEvents()/* const*/;

	struct FVector GetInertiaTensor(struct FName BoneName)/* const*/;

	float GetLinearDamping()/* const*/;

	float GetMass()/* const*/;

	float GetMassScale(struct FName BoneName)/* const*/;

	class UMaterialInterface* GetMaterial(int32_t ElementIndex)/* const*/;

	class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t* SectionIndex)/* const*/;

	int32_t GetNumMaterials()/* const*/;

	void GetOverlappingActors(TArray<class AActor*>* OverlappingActors, class AActor* ClassFilter)/* const*/;

	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)/* const*/;

	struct FVector GetPhysicsAngularVelocity(struct FName BoneName)/* const*/;

	struct FVector GetPhysicsAngularVelocityInDegrees(struct FName BoneName)/* const*/;

	struct FVector GetPhysicsAngularVelocityInRadians(struct FName BoneName)/* const*/;

	struct FVector GetPhysicsLinearVelocity(struct FName BoneName);

	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector Point, struct FName BoneName);

	struct FWalkableSlopeOverride GetWalkableSlopeOverride()/* const*/;

	void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);

	void IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore);

	bool IsAnyRigidBodyAwake();

	bool IsGravityEnabled()/* const*/;

	bool IsOverlappingActor(class AActor* Other)/* const*/;

	bool IsOverlappingComponent(class UPrimitiveComponent* OtherComp)/* const*/;

	bool K2_BoxOverlapComponent(struct FVector InBoxCentre, struct FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);

	bool K2_IsCollisionEnabled()/* const*/;

	bool K2_IsPhysicsCollisionEnabled()/* const*/;

	bool K2_IsQueryCollisionEnabled()/* const*/;

	bool K2_LineTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);

	bool K2_SphereOverlapComponent(struct FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);

	bool K2_SphereTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);

	void PutRigidBodyToSleep(struct FName BoneName);

	struct FVector ScaleByMomentOfInertia(struct FVector InputVector, struct FName BoneName)/* const*/;

	void SetAllMassScale(float InMassScale);

	void SetAllPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent);

	void SetAllPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent);

	void SetAllPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent);

	void SetAllUseCCD(bool InUseCCD);

	void SetAngularDamping(float InDamping);

	void SetBoundsScale(float NewBoundsScale);

	void SetCastHiddenShadow(bool NewCastHiddenShadow);

	void SetCastInsetShadow(bool bInCastInsetShadow);

	void SetCastShadow(bool NewCastShadow);

	void SetCenterOfMass(struct FVector CenterOfMassOffset, struct FName BoneName);

	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);

	void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);

	void SetCollisionProfileName(struct FName InCollisionProfileName, bool bUpdateOverlaps);

	void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);

	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);

	void SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);

	void SetCullDistance(float NewCullDistance);

	void SetCustomDepthStencilValue(int32_t Value);

	void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);

	void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value);

	void SetCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value);

	void SetCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value);

	void SetCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value);

	void SetDefaultCustomPrimitiveDataFloat(int32_t DataIndex, float Value);

	void SetDefaultCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value);

	void SetDefaultCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value);

	void SetDefaultCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value);

	void SetEnableGravity(bool bGravityEnabled);

	void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);

	void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);

	void SetHiddenInSceneCapture(bool bValue);

	void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);

	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);

	void SetLinearDamping(float InDamping);

	void SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass);

	void SetMassScale(struct FName BoneName, float InMassScale);

	void SetMaterial(int32_t ElementIndex, class UMaterialInterface* Material);

	void SetMaterialByName(struct FName MaterialSlotName, class UMaterialInterface* Material);

	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);

	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);

	void SetOwnerNoSee(bool bNewOwnerNoSee);

	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysicsAngularVelocityInDegrees(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysicsAngularVelocityInRadians(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName);

	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);

	void SetReceivesDecals(bool bNewReceivesDecals);

	void SetRenderCustomDepth(bool bValue);

	void SetRenderInMainPass(bool bValue);

	void SetSimulatePhysics(bool bSimulate);

	void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);

	void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset);

	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority);

	void SetUseCCD(bool InUseCCD, struct FName BoneName);

	void SetVisibleInSceneCaptureOnly(bool bValue);

	void SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);

	void WakeAllRigidBodies();

	void WakeRigidBody(struct FName BoneName);

	bool WasRecentlyRendered(float Tolerance)/* const*/;

#pragma endregion
};
};