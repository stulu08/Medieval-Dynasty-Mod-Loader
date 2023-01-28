#include "../SDK.h"
#include "PrimitiveComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MinDrawDistance
// Declaration: float MinDrawDistance
float UPrimitiveComponent::M_GetMinDrawDistance() const {
	return Read<float>((byte*)this + 512);
}
float* UPrimitiveComponent::M_PtrGetMinDrawDistance() {
	return reinterpret_cast<float*>((byte*)this + 512);
}
void UPrimitiveComponent::M_SetMinDrawDistance(const float& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of LDMaxDrawDistance
// Declaration: float LDMaxDrawDistance
float UPrimitiveComponent::M_GetLDMaxDrawDistance() const {
	return Read<float>((byte*)this + 516);
}
float* UPrimitiveComponent::M_PtrGetLDMaxDrawDistance() {
	return reinterpret_cast<float*>((byte*)this + 516);
}
void UPrimitiveComponent::M_SetLDMaxDrawDistance(const float& value) {
	Write((byte*)this + 516, value);
}
// Member Getter and Setter of CachedMaxDrawDistance
// Declaration: float CachedMaxDrawDistance
float UPrimitiveComponent::M_GetCachedMaxDrawDistance() const {
	return Read<float>((byte*)this + 520);
}
float* UPrimitiveComponent::M_PtrGetCachedMaxDrawDistance() {
	return reinterpret_cast<float*>((byte*)this + 520);
}
void UPrimitiveComponent::M_SetCachedMaxDrawDistance(const float& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of DepthPriorityGroup
// Declaration: TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup
TEnumAsByte<ESceneDepthPriorityGroup> UPrimitiveComponent::M_GetDepthPriorityGroup() const {
	return Read<TEnumAsByte<ESceneDepthPriorityGroup>>((byte*)this + 524);
}
TEnumAsByte<ESceneDepthPriorityGroup>* UPrimitiveComponent::M_PtrGetDepthPriorityGroup() {
	return reinterpret_cast<TEnumAsByte<ESceneDepthPriorityGroup>*>((byte*)this + 524);
}
void UPrimitiveComponent::M_SetDepthPriorityGroup(const TEnumAsByte<ESceneDepthPriorityGroup>& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of ViewOwnerDepthPriorityGroup
// Declaration: TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup
TEnumAsByte<ESceneDepthPriorityGroup> UPrimitiveComponent::M_GetViewOwnerDepthPriorityGroup() const {
	return Read<TEnumAsByte<ESceneDepthPriorityGroup>>((byte*)this + 525);
}
TEnumAsByte<ESceneDepthPriorityGroup>* UPrimitiveComponent::M_PtrGetViewOwnerDepthPriorityGroup() {
	return reinterpret_cast<TEnumAsByte<ESceneDepthPriorityGroup>*>((byte*)this + 525);
}
void UPrimitiveComponent::M_SetViewOwnerDepthPriorityGroup(const TEnumAsByte<ESceneDepthPriorityGroup>& value) {
	Write((byte*)this + 525, value);
}
// Member Getter and Setter of IndirectLightingCacheQuality
// Declaration: TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality
TEnumAsByte<EIndirectLightingCacheQuality> UPrimitiveComponent::M_GetIndirectLightingCacheQuality() const {
	return Read<TEnumAsByte<EIndirectLightingCacheQuality>>((byte*)this + 526);
}
TEnumAsByte<EIndirectLightingCacheQuality>* UPrimitiveComponent::M_PtrGetIndirectLightingCacheQuality() {
	return reinterpret_cast<TEnumAsByte<EIndirectLightingCacheQuality>*>((byte*)this + 526);
}
void UPrimitiveComponent::M_SetIndirectLightingCacheQuality(const TEnumAsByte<EIndirectLightingCacheQuality>& value) {
	Write((byte*)this + 526, value);
}
// Member Getter and Setter of LightmapType
// Declaration: ELightmapType LightmapType
ELightmapType UPrimitiveComponent::M_GetLightmapType() const {
	return Read<ELightmapType>((byte*)this + 527);
}
ELightmapType* UPrimitiveComponent::M_PtrGetLightmapType() {
	return reinterpret_cast<ELightmapType*>((byte*)this + 527);
}
void UPrimitiveComponent::M_SetLightmapType(const ELightmapType& value) {
	Write((byte*)this + 527, value);
}
// Member Getter and Setter of bUseMaxLODAsImposter
// Declaration: unsigned char bUseMaxLODAsImposter : 1
unsigned char UPrimitiveComponent::M_GetbUseMaxLODAsImposter() const {
	return Read<unsigned char>((byte*)this + 528);
}
unsigned char* UPrimitiveComponent::M_PtrGetbUseMaxLODAsImposter() {
	return reinterpret_cast<unsigned char*>((byte*)this + 528);
}
void UPrimitiveComponent::M_SetbUseMaxLODAsImposter(const unsigned char& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of bBatchImpostersAsInstances
// Declaration: unsigned char bBatchImpostersAsInstances : 1
unsigned char UPrimitiveComponent::M_GetbBatchImpostersAsInstances() const {
	return Read<unsigned char>((byte*)this + 528);
}
unsigned char* UPrimitiveComponent::M_PtrGetbBatchImpostersAsInstances() {
	return reinterpret_cast<unsigned char*>((byte*)this + 528);
}
void UPrimitiveComponent::M_SetbBatchImpostersAsInstances(const unsigned char& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of bNeverDistanceCull
// Declaration: unsigned char bNeverDistanceCull : 1
unsigned char UPrimitiveComponent::M_GetbNeverDistanceCull() const {
	return Read<unsigned char>((byte*)this + 528);
}
unsigned char* UPrimitiveComponent::M_PtrGetbNeverDistanceCull() {
	return reinterpret_cast<unsigned char*>((byte*)this + 528);
}
void UPrimitiveComponent::M_SetbNeverDistanceCull(const unsigned char& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of bAlwaysCreatePhysicsState
// Declaration: unsigned char bAlwaysCreatePhysicsState : 1
unsigned char UPrimitiveComponent::M_GetbAlwaysCreatePhysicsState() const {
	return Read<unsigned char>((byte*)this + 528);
}
unsigned char* UPrimitiveComponent::M_PtrGetbAlwaysCreatePhysicsState() {
	return reinterpret_cast<unsigned char*>((byte*)this + 528);
}
void UPrimitiveComponent::M_SetbAlwaysCreatePhysicsState(const unsigned char& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of bGenerateOverlapEvents
// Declaration: unsigned char bGenerateOverlapEvents : 1
unsigned char UPrimitiveComponent::M_GetbGenerateOverlapEvents() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbGenerateOverlapEvents() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbGenerateOverlapEvents(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bMultiBodyOverlap
// Declaration: unsigned char bMultiBodyOverlap : 1
unsigned char UPrimitiveComponent::M_GetbMultiBodyOverlap() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbMultiBodyOverlap() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbMultiBodyOverlap(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bTraceComplexOnMove
// Declaration: unsigned char bTraceComplexOnMove : 1
unsigned char UPrimitiveComponent::M_GetbTraceComplexOnMove() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbTraceComplexOnMove() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbTraceComplexOnMove(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bReturnMaterialOnMove
// Declaration: unsigned char bReturnMaterialOnMove : 1
unsigned char UPrimitiveComponent::M_GetbReturnMaterialOnMove() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbReturnMaterialOnMove() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbReturnMaterialOnMove(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bUseViewOwnerDepthPriorityGroup
// Declaration: unsigned char bUseViewOwnerDepthPriorityGroup : 1
unsigned char UPrimitiveComponent::M_GetbUseViewOwnerDepthPriorityGroup() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbUseViewOwnerDepthPriorityGroup() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbUseViewOwnerDepthPriorityGroup(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bAllowCullDistanceVolume
// Declaration: unsigned char bAllowCullDistanceVolume : 1
unsigned char UPrimitiveComponent::M_GetbAllowCullDistanceVolume() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbAllowCullDistanceVolume() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbAllowCullDistanceVolume(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bHasMotionBlurVelocityMeshes
// Declaration: unsigned char bHasMotionBlurVelocityMeshes : 1
unsigned char UPrimitiveComponent::M_GetbHasMotionBlurVelocityMeshes() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbHasMotionBlurVelocityMeshes() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbHasMotionBlurVelocityMeshes(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bVisibleInReflectionCaptures
// Declaration: unsigned char bVisibleInReflectionCaptures : 1
unsigned char UPrimitiveComponent::M_GetbVisibleInReflectionCaptures() const {
	return Read<unsigned char>((byte*)this + 529);
}
unsigned char* UPrimitiveComponent::M_PtrGetbVisibleInReflectionCaptures() {
	return reinterpret_cast<unsigned char*>((byte*)this + 529);
}
void UPrimitiveComponent::M_SetbVisibleInReflectionCaptures(const unsigned char& value) {
	Write((byte*)this + 529, value);
}
// Member Getter and Setter of bVisibleInRealTimeSkyCaptures
// Declaration: unsigned char bVisibleInRealTimeSkyCaptures : 1
unsigned char UPrimitiveComponent::M_GetbVisibleInRealTimeSkyCaptures() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbVisibleInRealTimeSkyCaptures() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbVisibleInRealTimeSkyCaptures(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bVisibleInRayTracing
// Declaration: unsigned char bVisibleInRayTracing : 1
unsigned char UPrimitiveComponent::M_GetbVisibleInRayTracing() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbVisibleInRayTracing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbVisibleInRayTracing(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bRenderInMainPass
// Declaration: unsigned char bRenderInMainPass : 1
unsigned char UPrimitiveComponent::M_GetbRenderInMainPass() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbRenderInMainPass() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbRenderInMainPass(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bRenderInDepthPass
// Declaration: unsigned char bRenderInDepthPass : 1
unsigned char UPrimitiveComponent::M_GetbRenderInDepthPass() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbRenderInDepthPass() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbRenderInDepthPass(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bReceivesDecals
// Declaration: unsigned char bReceivesDecals : 1
unsigned char UPrimitiveComponent::M_GetbReceivesDecals() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbReceivesDecals() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbReceivesDecals(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bOwnerNoSee
// Declaration: unsigned char bOwnerNoSee : 1
unsigned char UPrimitiveComponent::M_GetbOwnerNoSee() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbOwnerNoSee() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbOwnerNoSee(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bOnlyOwnerSee
// Declaration: unsigned char bOnlyOwnerSee : 1
unsigned char UPrimitiveComponent::M_GetbOnlyOwnerSee() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbOnlyOwnerSee() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbOnlyOwnerSee(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bTreatAsBackgroundForOcclusion
// Declaration: unsigned char bTreatAsBackgroundForOcclusion : 1
unsigned char UPrimitiveComponent::M_GetbTreatAsBackgroundForOcclusion() const {
	return Read<unsigned char>((byte*)this + 530);
}
unsigned char* UPrimitiveComponent::M_PtrGetbTreatAsBackgroundForOcclusion() {
	return reinterpret_cast<unsigned char*>((byte*)this + 530);
}
void UPrimitiveComponent::M_SetbTreatAsBackgroundForOcclusion(const unsigned char& value) {
	Write((byte*)this + 530, value);
}
// Member Getter and Setter of bUseAsOccluder
// Declaration: unsigned char bUseAsOccluder : 1
unsigned char UPrimitiveComponent::M_GetbUseAsOccluder() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbUseAsOccluder() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbUseAsOccluder(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bSelectable
// Declaration: unsigned char bSelectable : 1
unsigned char UPrimitiveComponent::M_GetbSelectable() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbSelectable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbSelectable(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bForceMipStreaming
// Declaration: unsigned char bForceMipStreaming : 1
unsigned char UPrimitiveComponent::M_GetbForceMipStreaming() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbForceMipStreaming() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbForceMipStreaming(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bHasPerInstanceHitProxies
// Declaration: unsigned char bHasPerInstanceHitProxies : 1
unsigned char UPrimitiveComponent::M_GetbHasPerInstanceHitProxies() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbHasPerInstanceHitProxies() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbHasPerInstanceHitProxies(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of CastShadow
// Declaration: unsigned char CastShadow : 1
unsigned char UPrimitiveComponent::M_GetCastShadow() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetCastShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetCastShadow(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bAffectDynamicIndirectLighting
// Declaration: unsigned char bAffectDynamicIndirectLighting : 1
unsigned char UPrimitiveComponent::M_GetbAffectDynamicIndirectLighting() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbAffectDynamicIndirectLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbAffectDynamicIndirectLighting(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bAffectDistanceFieldLighting
// Declaration: unsigned char bAffectDistanceFieldLighting : 1
unsigned char UPrimitiveComponent::M_GetbAffectDistanceFieldLighting() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbAffectDistanceFieldLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbAffectDistanceFieldLighting(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bCastDynamicShadow
// Declaration: unsigned char bCastDynamicShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastDynamicShadow() const {
	return Read<unsigned char>((byte*)this + 531);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastDynamicShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 531);
}
void UPrimitiveComponent::M_SetbCastDynamicShadow(const unsigned char& value) {
	Write((byte*)this + 531, value);
}
// Member Getter and Setter of bCastStaticShadow
// Declaration: unsigned char bCastStaticShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastStaticShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastStaticShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastStaticShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastVolumetricTranslucentShadow
// Declaration: unsigned char bCastVolumetricTranslucentShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastVolumetricTranslucentShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastVolumetricTranslucentShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastVolumetricTranslucentShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastContactShadow
// Declaration: unsigned char bCastContactShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastContactShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastContactShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastContactShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bSelfShadowOnly
// Declaration: unsigned char bSelfShadowOnly : 1
unsigned char UPrimitiveComponent::M_GetbSelfShadowOnly() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbSelfShadowOnly() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbSelfShadowOnly(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastFarShadow
// Declaration: unsigned char bCastFarShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastFarShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastFarShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastFarShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastInsetShadow
// Declaration: unsigned char bCastInsetShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastInsetShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastInsetShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastInsetShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastCinematicShadow
// Declaration: unsigned char bCastCinematicShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastCinematicShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastCinematicShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastCinematicShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastHiddenShadow
// Declaration: unsigned char bCastHiddenShadow : 1
unsigned char UPrimitiveComponent::M_GetbCastHiddenShadow() const {
	return Read<unsigned char>((byte*)this + 532);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastHiddenShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 532);
}
void UPrimitiveComponent::M_SetbCastHiddenShadow(const unsigned char& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of bCastShadowAsTwoSided
// Declaration: unsigned char bCastShadowAsTwoSided : 1
unsigned char UPrimitiveComponent::M_GetbCastShadowAsTwoSided() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbCastShadowAsTwoSided() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbCastShadowAsTwoSided(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bLightAsIfStatic
// Declaration: unsigned char bLightAsIfStatic : 1
unsigned char UPrimitiveComponent::M_GetbLightAsIfStatic() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbLightAsIfStatic() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbLightAsIfStatic(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bLightAttachmentsAsGroup
// Declaration: unsigned char bLightAttachmentsAsGroup : 1
unsigned char UPrimitiveComponent::M_GetbLightAttachmentsAsGroup() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbLightAttachmentsAsGroup() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbLightAttachmentsAsGroup(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bExcludeFromLightAttachmentGroup
// Declaration: unsigned char bExcludeFromLightAttachmentGroup : 1
unsigned char UPrimitiveComponent::M_GetbExcludeFromLightAttachmentGroup() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbExcludeFromLightAttachmentGroup() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbExcludeFromLightAttachmentGroup(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bReceiveMobileCSMShadows
// Declaration: unsigned char bReceiveMobileCSMShadows : 1
unsigned char UPrimitiveComponent::M_GetbReceiveMobileCSMShadows() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbReceiveMobileCSMShadows() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbReceiveMobileCSMShadows(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bSingleSampleShadowFromStationaryLights
// Declaration: unsigned char bSingleSampleShadowFromStationaryLights : 1
unsigned char UPrimitiveComponent::M_GetbSingleSampleShadowFromStationaryLights() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbSingleSampleShadowFromStationaryLights() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbSingleSampleShadowFromStationaryLights(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bIgnoreRadialImpulse
// Declaration: unsigned char bIgnoreRadialImpulse : 1
unsigned char UPrimitiveComponent::M_GetbIgnoreRadialImpulse() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbIgnoreRadialImpulse() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbIgnoreRadialImpulse(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bIgnoreRadialForce
// Declaration: unsigned char bIgnoreRadialForce : 1
unsigned char UPrimitiveComponent::M_GetbIgnoreRadialForce() const {
	return Read<unsigned char>((byte*)this + 533);
}
unsigned char* UPrimitiveComponent::M_PtrGetbIgnoreRadialForce() {
	return reinterpret_cast<unsigned char*>((byte*)this + 533);
}
void UPrimitiveComponent::M_SetbIgnoreRadialForce(const unsigned char& value) {
	Write((byte*)this + 533, value);
}
// Member Getter and Setter of bApplyImpulseOnDamage
// Declaration: unsigned char bApplyImpulseOnDamage : 1
unsigned char UPrimitiveComponent::M_GetbApplyImpulseOnDamage() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetbApplyImpulseOnDamage() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetbApplyImpulseOnDamage(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of bReplicatePhysicsToAutonomousProxy
// Declaration: unsigned char bReplicatePhysicsToAutonomousProxy : 1
unsigned char UPrimitiveComponent::M_GetbReplicatePhysicsToAutonomousProxy() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetbReplicatePhysicsToAutonomousProxy() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetbReplicatePhysicsToAutonomousProxy(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of bFillCollisionUnderneathForNavmesh
// Declaration: unsigned char bFillCollisionUnderneathForNavmesh : 1
unsigned char UPrimitiveComponent::M_GetbFillCollisionUnderneathForNavmesh() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetbFillCollisionUnderneathForNavmesh() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetbFillCollisionUnderneathForNavmesh(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of AlwaysLoadOnClient
// Declaration: unsigned char AlwaysLoadOnClient : 1
unsigned char UPrimitiveComponent::M_GetAlwaysLoadOnClient() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetAlwaysLoadOnClient() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetAlwaysLoadOnClient(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of AlwaysLoadOnServer
// Declaration: unsigned char AlwaysLoadOnServer : 1
unsigned char UPrimitiveComponent::M_GetAlwaysLoadOnServer() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetAlwaysLoadOnServer() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetAlwaysLoadOnServer(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of bUseEditorCompositing
// Declaration: unsigned char bUseEditorCompositing : 1
unsigned char UPrimitiveComponent::M_GetbUseEditorCompositing() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetbUseEditorCompositing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetbUseEditorCompositing(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of bRenderCustomDepth
// Declaration: unsigned char bRenderCustomDepth : 1
unsigned char UPrimitiveComponent::M_GetbRenderCustomDepth() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetbRenderCustomDepth() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetbRenderCustomDepth(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of bVisibleInSceneCaptureOnly
// Declaration: unsigned char bVisibleInSceneCaptureOnly : 1
unsigned char UPrimitiveComponent::M_GetbVisibleInSceneCaptureOnly() const {
	return Read<unsigned char>((byte*)this + 534);
}
unsigned char* UPrimitiveComponent::M_PtrGetbVisibleInSceneCaptureOnly() {
	return reinterpret_cast<unsigned char*>((byte*)this + 534);
}
void UPrimitiveComponent::M_SetbVisibleInSceneCaptureOnly(const unsigned char& value) {
	Write((byte*)this + 534, value);
}
// Member Getter and Setter of bHiddenInSceneCapture
// Declaration: unsigned char bHiddenInSceneCapture : 1
unsigned char UPrimitiveComponent::M_GetbHiddenInSceneCapture() const {
	return Read<unsigned char>((byte*)this + 535);
}
unsigned char* UPrimitiveComponent::M_PtrGetbHiddenInSceneCapture() {
	return reinterpret_cast<unsigned char*>((byte*)this + 535);
}
void UPrimitiveComponent::M_SetbHiddenInSceneCapture(const unsigned char& value) {
	Write((byte*)this + 535, value);
}
// Member Getter and Setter of bHasCustomNavigableGeometry
// Declaration: TEnumAsByte<EHasCustomNavigableGeometry> bHasCustomNavigableGeometry
TEnumAsByte<EHasCustomNavigableGeometry> UPrimitiveComponent::M_GetbHasCustomNavigableGeometry() const {
	return Read<TEnumAsByte<EHasCustomNavigableGeometry>>((byte*)this + 536);
}
TEnumAsByte<EHasCustomNavigableGeometry>* UPrimitiveComponent::M_PtrGetbHasCustomNavigableGeometry() {
	return reinterpret_cast<TEnumAsByte<EHasCustomNavigableGeometry>*>((byte*)this + 536);
}
void UPrimitiveComponent::M_SetbHasCustomNavigableGeometry(const TEnumAsByte<EHasCustomNavigableGeometry>& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of CanCharacterStepUpOn
// Declaration: TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn
TEnumAsByte<ECanBeCharacterBase> UPrimitiveComponent::M_GetCanCharacterStepUpOn() const {
	return Read<TEnumAsByte<ECanBeCharacterBase>>((byte*)this + 538);
}
TEnumAsByte<ECanBeCharacterBase>* UPrimitiveComponent::M_PtrGetCanCharacterStepUpOn() {
	return reinterpret_cast<TEnumAsByte<ECanBeCharacterBase>*>((byte*)this + 538);
}
void UPrimitiveComponent::M_SetCanCharacterStepUpOn(const TEnumAsByte<ECanBeCharacterBase>& value) {
	Write((byte*)this + 538, value);
}
// Member Getter and Setter of LightingChannels
// Declaration: struct FLightingChannels LightingChannels
struct FLightingChannels UPrimitiveComponent::M_GetLightingChannels() const {
	return Read<struct FLightingChannels>((byte*)this + 539);
}
struct FLightingChannels* UPrimitiveComponent::M_PtrGetLightingChannels() {
	return reinterpret_cast<struct FLightingChannels*>((byte*)this + 539);
}
void UPrimitiveComponent::M_SetLightingChannels(const struct FLightingChannels& value) {
	Write((byte*)this + 539, value);
}
// Member Getter and Setter of CustomDepthStencilWriteMask
// Declaration: ERendererStencilMask CustomDepthStencilWriteMask
ERendererStencilMask UPrimitiveComponent::M_GetCustomDepthStencilWriteMask() const {
	return Read<ERendererStencilMask>((byte*)this + 540);
}
ERendererStencilMask* UPrimitiveComponent::M_PtrGetCustomDepthStencilWriteMask() {
	return reinterpret_cast<ERendererStencilMask*>((byte*)this + 540);
}
void UPrimitiveComponent::M_SetCustomDepthStencilWriteMask(const ERendererStencilMask& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of CustomDepthStencilValue
// Declaration: int32_t CustomDepthStencilValue
int32_t UPrimitiveComponent::M_GetCustomDepthStencilValue() const {
	return Read<int32_t>((byte*)this + 544);
}
int32_t* UPrimitiveComponent::M_PtrGetCustomDepthStencilValue() {
	return reinterpret_cast<int32_t*>((byte*)this + 544);
}
void UPrimitiveComponent::M_SetCustomDepthStencilValue(const int32_t& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of CustomPrimitiveData
// Declaration: struct FCustomPrimitiveData CustomPrimitiveData
struct FCustomPrimitiveData UPrimitiveComponent::M_GetCustomPrimitiveData() const {
	return Read<struct FCustomPrimitiveData>((byte*)this + 552);
}
struct FCustomPrimitiveData* UPrimitiveComponent::M_PtrGetCustomPrimitiveData() {
	return reinterpret_cast<struct FCustomPrimitiveData*>((byte*)this + 552);
}
void UPrimitiveComponent::M_SetCustomPrimitiveData(const struct FCustomPrimitiveData& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of CustomPrimitiveDataInternal
// Declaration: struct FCustomPrimitiveData CustomPrimitiveDataInternal
struct FCustomPrimitiveData UPrimitiveComponent::M_GetCustomPrimitiveDataInternal() const {
	return Read<struct FCustomPrimitiveData>((byte*)this + 568);
}
struct FCustomPrimitiveData* UPrimitiveComponent::M_PtrGetCustomPrimitiveDataInternal() {
	return reinterpret_cast<struct FCustomPrimitiveData*>((byte*)this + 568);
}
void UPrimitiveComponent::M_SetCustomPrimitiveDataInternal(const struct FCustomPrimitiveData& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of TranslucencySortPriority
// Declaration: int32_t TranslucencySortPriority
int32_t UPrimitiveComponent::M_GetTranslucencySortPriority() const {
	return Read<int32_t>((byte*)this + 592);
}
int32_t* UPrimitiveComponent::M_PtrGetTranslucencySortPriority() {
	return reinterpret_cast<int32_t*>((byte*)this + 592);
}
void UPrimitiveComponent::M_SetTranslucencySortPriority(const int32_t& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of TranslucencySortDistanceOffset
// Declaration: float TranslucencySortDistanceOffset
float UPrimitiveComponent::M_GetTranslucencySortDistanceOffset() const {
	return Read<float>((byte*)this + 596);
}
float* UPrimitiveComponent::M_PtrGetTranslucencySortDistanceOffset() {
	return reinterpret_cast<float*>((byte*)this + 596);
}
void UPrimitiveComponent::M_SetTranslucencySortDistanceOffset(const float& value) {
	Write((byte*)this + 596, value);
}
// Member Getter and Setter of VisibilityId
// Declaration: int32_t VisibilityId
int32_t UPrimitiveComponent::M_GetVisibilityId() const {
	return Read<int32_t>((byte*)this + 600);
}
int32_t* UPrimitiveComponent::M_PtrGetVisibilityId() {
	return reinterpret_cast<int32_t*>((byte*)this + 600);
}
void UPrimitiveComponent::M_SetVisibilityId(const int32_t& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of RuntimeVirtualTextures
// Declaration: TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures
TArray<class URuntimeVirtualTexture*> UPrimitiveComponent::M_GetRuntimeVirtualTextures() const {
	return Read<TArray<class URuntimeVirtualTexture*>>((byte*)this + 608);
}
TArray<class URuntimeVirtualTexture*>* UPrimitiveComponent::M_PtrGetRuntimeVirtualTextures() {
	return reinterpret_cast<TArray<class URuntimeVirtualTexture*>*>((byte*)this + 608);
}
void UPrimitiveComponent::M_SetRuntimeVirtualTextures(const TArray<class URuntimeVirtualTexture*>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of VirtualTextureLodBias
// Declaration: int8_t VirtualTextureLodBias
int8_t UPrimitiveComponent::M_GetVirtualTextureLodBias() const {
	return Read<int8_t>((byte*)this + 624);
}
int8_t* UPrimitiveComponent::M_PtrGetVirtualTextureLodBias() {
	return reinterpret_cast<int8_t*>((byte*)this + 624);
}
void UPrimitiveComponent::M_SetVirtualTextureLodBias(const int8_t& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of VirtualTextureCullMips
// Declaration: int8_t VirtualTextureCullMips
int8_t UPrimitiveComponent::M_GetVirtualTextureCullMips() const {
	return Read<int8_t>((byte*)this + 625);
}
int8_t* UPrimitiveComponent::M_PtrGetVirtualTextureCullMips() {
	return reinterpret_cast<int8_t*>((byte*)this + 625);
}
void UPrimitiveComponent::M_SetVirtualTextureCullMips(const int8_t& value) {
	Write((byte*)this + 625, value);
}
// Member Getter and Setter of VirtualTextureMinCoverage
// Declaration: int8_t VirtualTextureMinCoverage
int8_t UPrimitiveComponent::M_GetVirtualTextureMinCoverage() const {
	return Read<int8_t>((byte*)this + 626);
}
int8_t* UPrimitiveComponent::M_PtrGetVirtualTextureMinCoverage() {
	return reinterpret_cast<int8_t*>((byte*)this + 626);
}
void UPrimitiveComponent::M_SetVirtualTextureMinCoverage(const int8_t& value) {
	Write((byte*)this + 626, value);
}
// Member Getter and Setter of VirtualTextureRenderPassType
// Declaration: ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType
ERuntimeVirtualTextureMainPassType UPrimitiveComponent::M_GetVirtualTextureRenderPassType() const {
	return Read<ERuntimeVirtualTextureMainPassType>((byte*)this + 627);
}
ERuntimeVirtualTextureMainPassType* UPrimitiveComponent::M_PtrGetVirtualTextureRenderPassType() {
	return reinterpret_cast<ERuntimeVirtualTextureMainPassType*>((byte*)this + 627);
}
void UPrimitiveComponent::M_SetVirtualTextureRenderPassType(const ERuntimeVirtualTextureMainPassType& value) {
	Write((byte*)this + 627, value);
}
// Member Getter and Setter of LpvBiasMultiplier
// Declaration: float LpvBiasMultiplier
float UPrimitiveComponent::M_GetLpvBiasMultiplier() const {
	return Read<float>((byte*)this + 632);
}
float* UPrimitiveComponent::M_PtrGetLpvBiasMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 632);
}
void UPrimitiveComponent::M_SetLpvBiasMultiplier(const float& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of BoundsScale
// Declaration: float BoundsScale
float UPrimitiveComponent::M_GetBoundsScale() const {
	return Read<float>((byte*)this + 644);
}
float* UPrimitiveComponent::M_PtrGetBoundsScale() {
	return reinterpret_cast<float*>((byte*)this + 644);
}
void UPrimitiveComponent::M_SetBoundsScale(const float& value) {
	Write((byte*)this + 644, value);
}
// Member Getter and Setter of MoveIgnoreActors
// Declaration: TArray<class AActor*> MoveIgnoreActors
TArray<class AActor*> UPrimitiveComponent::M_GetMoveIgnoreActors() const {
	return Read<TArray<class AActor*>>((byte*)this + 664);
}
TArray<class AActor*>* UPrimitiveComponent::M_PtrGetMoveIgnoreActors() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 664);
}
void UPrimitiveComponent::M_SetMoveIgnoreActors(const TArray<class AActor*>& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of MoveIgnoreComponents
// Declaration: TArray<class UPrimitiveComponent*> MoveIgnoreComponents
TArray<class UPrimitiveComponent*> UPrimitiveComponent::M_GetMoveIgnoreComponents() const {
	return Read<TArray<class UPrimitiveComponent*>>((byte*)this + 680);
}
TArray<class UPrimitiveComponent*>* UPrimitiveComponent::M_PtrGetMoveIgnoreComponents() {
	return reinterpret_cast<TArray<class UPrimitiveComponent*>*>((byte*)this + 680);
}
void UPrimitiveComponent::M_SetMoveIgnoreComponents(const TArray<class UPrimitiveComponent*>& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of BodyInstance
// Declaration: struct FBodyInstance BodyInstance
struct FBodyInstance UPrimitiveComponent::M_GetBodyInstance() const {
	return Read<struct FBodyInstance>((byte*)this + 712);
}
struct FBodyInstance* UPrimitiveComponent::M_PtrGetBodyInstance() {
	return reinterpret_cast<struct FBodyInstance*>((byte*)this + 712);
}
void UPrimitiveComponent::M_SetBodyInstance(const struct FBodyInstance& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of OnComponentHit
// Declaration: TAssetPtr<class FComponentHitSignature__DelegateSignature> OnComponentHit
TAssetPtr<class FComponentHitSignature__DelegateSignature> UPrimitiveComponent::M_GetOnComponentHit() const {
	return Read<TAssetPtr<class FComponentHitSignature__DelegateSignature>>((byte*)this + 1056);
}
TAssetPtr<class FComponentHitSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnComponentHit() {
	return reinterpret_cast<TAssetPtr<class FComponentHitSignature__DelegateSignature>*>((byte*)this + 1056);
}
void UPrimitiveComponent::M_SetOnComponentHit(const TAssetPtr<class FComponentHitSignature__DelegateSignature>& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of OnComponentBeginOverlap
// Declaration: TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature> OnComponentBeginOverlap
TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature> UPrimitiveComponent::M_GetOnComponentBeginOverlap() const {
	return Read<TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>>((byte*)this + 1057);
}
TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnComponentBeginOverlap() {
	return reinterpret_cast<TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>*>((byte*)this + 1057);
}
void UPrimitiveComponent::M_SetOnComponentBeginOverlap(const TAssetPtr<class FComponentBeginOverlapSignature__DelegateSignature>& value) {
	Write((byte*)this + 1057, value);
}
// Member Getter and Setter of OnComponentEndOverlap
// Declaration: TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature> OnComponentEndOverlap
TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature> UPrimitiveComponent::M_GetOnComponentEndOverlap() const {
	return Read<TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>>((byte*)this + 1058);
}
TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnComponentEndOverlap() {
	return reinterpret_cast<TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>*>((byte*)this + 1058);
}
void UPrimitiveComponent::M_SetOnComponentEndOverlap(const TAssetPtr<class FComponentEndOverlapSignature__DelegateSignature>& value) {
	Write((byte*)this + 1058, value);
}
// Member Getter and Setter of OnComponentWake
// Declaration: TAssetPtr<class FComponentWakeSignature__DelegateSignature> OnComponentWake
TAssetPtr<class FComponentWakeSignature__DelegateSignature> UPrimitiveComponent::M_GetOnComponentWake() const {
	return Read<TAssetPtr<class FComponentWakeSignature__DelegateSignature>>((byte*)this + 1059);
}
TAssetPtr<class FComponentWakeSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnComponentWake() {
	return reinterpret_cast<TAssetPtr<class FComponentWakeSignature__DelegateSignature>*>((byte*)this + 1059);
}
void UPrimitiveComponent::M_SetOnComponentWake(const TAssetPtr<class FComponentWakeSignature__DelegateSignature>& value) {
	Write((byte*)this + 1059, value);
}
// Member Getter and Setter of OnComponentSleep
// Declaration: TAssetPtr<class FComponentSleepSignature__DelegateSignature> OnComponentSleep
TAssetPtr<class FComponentSleepSignature__DelegateSignature> UPrimitiveComponent::M_GetOnComponentSleep() const {
	return Read<TAssetPtr<class FComponentSleepSignature__DelegateSignature>>((byte*)this + 1060);
}
TAssetPtr<class FComponentSleepSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnComponentSleep() {
	return reinterpret_cast<TAssetPtr<class FComponentSleepSignature__DelegateSignature>*>((byte*)this + 1060);
}
void UPrimitiveComponent::M_SetOnComponentSleep(const TAssetPtr<class FComponentSleepSignature__DelegateSignature>& value) {
	Write((byte*)this + 1060, value);
}
// Member Getter and Setter of OnBeginCursorOver
// Declaration: TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature> OnBeginCursorOver
TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature> UPrimitiveComponent::M_GetOnBeginCursorOver() const {
	return Read<TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>>((byte*)this + 1062);
}
TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnBeginCursorOver() {
	return reinterpret_cast<TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>*>((byte*)this + 1062);
}
void UPrimitiveComponent::M_SetOnBeginCursorOver(const TAssetPtr<class FComponentBeginCursorOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 1062, value);
}
// Member Getter and Setter of OnEndCursorOver
// Declaration: TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature> OnEndCursorOver
TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature> UPrimitiveComponent::M_GetOnEndCursorOver() const {
	return Read<TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>>((byte*)this + 1063);
}
TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnEndCursorOver() {
	return reinterpret_cast<TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>*>((byte*)this + 1063);
}
void UPrimitiveComponent::M_SetOnEndCursorOver(const TAssetPtr<class FComponentEndCursorOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 1063, value);
}
// Member Getter and Setter of OnClicked
// Declaration: TAssetPtr<class FComponentOnClickedSignature__DelegateSignature> OnClicked
TAssetPtr<class FComponentOnClickedSignature__DelegateSignature> UPrimitiveComponent::M_GetOnClicked() const {
	return Read<TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>>((byte*)this + 1064);
}
TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnClicked() {
	return reinterpret_cast<TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>*>((byte*)this + 1064);
}
void UPrimitiveComponent::M_SetOnClicked(const TAssetPtr<class FComponentOnClickedSignature__DelegateSignature>& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of OnReleased
// Declaration: TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature> OnReleased
TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature> UPrimitiveComponent::M_GetOnReleased() const {
	return Read<TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>>((byte*)this + 1065);
}
TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnReleased() {
	return reinterpret_cast<TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>*>((byte*)this + 1065);
}
void UPrimitiveComponent::M_SetOnReleased(const TAssetPtr<class FComponentOnReleasedSignature__DelegateSignature>& value) {
	Write((byte*)this + 1065, value);
}
// Member Getter and Setter of OnInputTouchBegin
// Declaration: TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature> OnInputTouchBegin
TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature> UPrimitiveComponent::M_GetOnInputTouchBegin() const {
	return Read<TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>>((byte*)this + 1066);
}
TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnInputTouchBegin() {
	return reinterpret_cast<TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>*>((byte*)this + 1066);
}
void UPrimitiveComponent::M_SetOnInputTouchBegin(const TAssetPtr<class FComponentOnInputTouchBeginSignature__DelegateSignature>& value) {
	Write((byte*)this + 1066, value);
}
// Member Getter and Setter of OnInputTouchEnd
// Declaration: TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature> OnInputTouchEnd
TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature> UPrimitiveComponent::M_GetOnInputTouchEnd() const {
	return Read<TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>>((byte*)this + 1067);
}
TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnInputTouchEnd() {
	return reinterpret_cast<TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>*>((byte*)this + 1067);
}
void UPrimitiveComponent::M_SetOnInputTouchEnd(const TAssetPtr<class FComponentOnInputTouchEndSignature__DelegateSignature>& value) {
	Write((byte*)this + 1067, value);
}
// Member Getter and Setter of OnInputTouchEnter
// Declaration: TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature> OnInputTouchEnter
TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature> UPrimitiveComponent::M_GetOnInputTouchEnter() const {
	return Read<TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>>((byte*)this + 1068);
}
TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnInputTouchEnter() {
	return reinterpret_cast<TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>*>((byte*)this + 1068);
}
void UPrimitiveComponent::M_SetOnInputTouchEnter(const TAssetPtr<class FComponentBeginTouchOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 1068, value);
}
// Member Getter and Setter of OnInputTouchLeave
// Declaration: TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature> OnInputTouchLeave
TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature> UPrimitiveComponent::M_GetOnInputTouchLeave() const {
	return Read<TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>>((byte*)this + 1069);
}
TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>* UPrimitiveComponent::M_PtrGetOnInputTouchLeave() {
	return reinterpret_cast<TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>*>((byte*)this + 1069);
}
void UPrimitiveComponent::M_SetOnInputTouchLeave(const TAssetPtr<class FComponentEndTouchOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 1069, value);
}
// Member Getter and Setter of LODParentPrimitive
// Declaration: class UPrimitiveComponent* LODParentPrimitive
class UPrimitiveComponent* UPrimitiveComponent::M_GetLODParentPrimitive() const {
	return Read<class UPrimitiveComponent*>((byte*)this + 1096);
}
class UPrimitiveComponent** UPrimitiveComponent::M_PtrGetLODParentPrimitive() {
	return reinterpret_cast<class UPrimitiveComponent**>((byte*)this + 1096);
}
void UPrimitiveComponent::M_SetLODParentPrimitive(const class UPrimitiveComponent*& value) {
	Write((byte*)this + 1096, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddAngularImpulse
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bVelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddAngularImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulse");

	struct UPrimitiveComponent_AddAngularImpulse_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bVelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bVelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddAngularImpulseInDegrees(struct FVector Impulse, struct FName BoneName, bool bVelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees");

	struct UPrimitiveComponent_AddAngularImpulseInDegrees_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bVelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bVelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddAngularImpulseInRadians(struct FVector Impulse, struct FName BoneName, bool bVelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians");

	struct UPrimitiveComponent_AddAngularImpulseInRadians_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bVelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddForce
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Force	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAccelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddForce(struct FVector Force, struct FName BoneName, bool bAccelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForce");

	struct UPrimitiveComponent_AddForce_Params {
		struct FVector Force;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bAccelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddForceAtLocation
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Force	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddForceAtLocation(struct FVector Force, struct FVector Location, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocation");

	struct UPrimitiveComponent_AddForceAtLocation_Params {
		struct FVector Force;			//Offset: 0 | ElementSize: 12
		struct FVector Location;			//Offset: 12 | ElementSize: 12
		struct FName BoneName;			//Offset: 24 | ElementSize: 8
	};
	UPrimitiveComponent_AddForceAtLocation_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Force	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddForceAtLocationLocal(struct FVector Force, struct FVector Location, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocationLocal");

	struct UPrimitiveComponent_AddForceAtLocationLocal_Params {
		struct FVector Force;			//Offset: 0 | ElementSize: 12
		struct FVector Location;			//Offset: 12 | ElementSize: 12
		struct FName BoneName;			//Offset: 24 | ElementSize: 8
	};
	UPrimitiveComponent_AddForceAtLocationLocal_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddImpulse
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bVelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulse");

	struct UPrimitiveComponent_AddImpulse_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bVelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddImpulseAtLocation(struct FVector Impulse, struct FVector Location, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulseAtLocation");

	struct UPrimitiveComponent_AddImpulseAtLocation_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FVector Location;			//Offset: 12 | ElementSize: 12
		struct FName BoneName;			//Offset: 24 | ElementSize: 8
	};
	UPrimitiveComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddRadialForce
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Origin	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Strength	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Falloff	Type: TEnumAsByte<ERadialImpulseFalloff>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAccelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddRadialForce(struct FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialForce");

	struct UPrimitiveComponent_AddRadialForce_Params {
		struct FVector Origin;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		float Strength;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<ERadialImpulseFalloff> Falloff;			//Offset: 20 | ElementSize: 1
		bool bAccelChange;			//Offset: 21 | ElementSize: 1
	};
	UPrimitiveComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddRadialImpulse
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Origin	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Strength	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Falloff	Type: TEnumAsByte<ERadialImpulseFalloff>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bVelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddRadialImpulse(struct FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialImpulse");

	struct UPrimitiveComponent_AddRadialImpulse_Params {
		struct FVector Origin;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		float Strength;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<ERadialImpulseFalloff> Falloff;			//Offset: 20 | ElementSize: 1
		bool bVelChange;			//Offset: 21 | ElementSize: 1
	};
	UPrimitiveComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddTorque
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Torque	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAccelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorque");

	struct UPrimitiveComponent_AddTorque_Params {
		struct FVector Torque;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bAccelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Torque	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAccelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddTorqueInDegrees(struct FVector Torque, struct FName BoneName, bool bAccelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInDegrees");

	struct UPrimitiveComponent_AddTorqueInDegrees_Params {
		struct FVector Torque;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bAccelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.AddTorqueInRadians
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Torque	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAccelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::AddTorqueInRadians(struct FVector Torque, struct FName BoneName, bool bAccelChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInRadians");

	struct UPrimitiveComponent_AddTorqueInRadians_Params {
		struct FVector Torque;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bAccelChange;			//Offset: 20 | ElementSize: 1
	};
	UPrimitiveComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.CanCharacterStepUp
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Pawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::CanCharacterStepUp(class APawn* Pawn)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CanCharacterStepUp");

	struct UPrimitiveComponent_CanCharacterStepUp_Params {
		class APawn* Pawn;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPrimitiveComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UPrimitiveComponent::ClearMoveIgnoreActors() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors");

	struct UPrimitiveComponent_ClearMoveIgnoreActors_Params {
	};
	UPrimitiveComponent_ClearMoveIgnoreActors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UPrimitiveComponent::ClearMoveIgnoreComponents() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents");

	struct UPrimitiveComponent_ClearMoveIgnoreComponents_Params {
	};
	UPrimitiveComponent_ClearMoveIgnoreComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class AActor*> UPrimitiveComponent::CopyArrayOfMoveIgnoreActors() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors");

	struct UPrimitiveComponent_CopyArrayOfMoveIgnoreActors_Params {
		TArray<class AActor*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UPrimitiveComponent_CopyArrayOfMoveIgnoreActors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: TArray<class UPrimitiveComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UPrimitiveComponent*> UPrimitiveComponent::CopyArrayOfMoveIgnoreComponents() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents");

	struct UPrimitiveComponent_CopyArrayOfMoveIgnoreComponents_Params {
		TArray<class UPrimitiveComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UPrimitiveComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ElementIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic");

	struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Params {
		int32_t ElementIndex;			//Offset: 0 | ElementSize: 4
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ElementIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Parent	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, class UMaterialInterface* Parent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial");

	struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params {
		int32_t ElementIndex;			//Offset: 0 | ElementSize: 4
		class UMaterialInterface* Parent;			//Offset: 8 | ElementSize: 8
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UPrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ElementIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SourceMaterial	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OptionalName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UPrimitiveComponent::CreateDynamicMaterialInstance(int32_t ElementIndex, class UMaterialInterface* SourceMaterial, struct FName OptionalName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance");

	struct UPrimitiveComponent_CreateDynamicMaterialInstance_Params {
		int32_t ElementIndex;			//Offset: 0 | ElementSize: 4
		class UMaterialInterface* SourceMaterial;			//Offset: 8 | ElementSize: 8
		struct FName OptionalName;			//Offset: 16 | ElementSize: 8
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UPrimitiveComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetAngularDamping
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPrimitiveComponent::GetAngularDamping()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetAngularDamping");

	struct UPrimitiveComponent_GetAngularDamping_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_GetAngularDamping_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetCenterOfMass
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetCenterOfMass(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCenterOfMass");

	struct UPrimitiveComponent_GetCenterOfMass_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	UPrimitiveComponent_GetCenterOfMass_Params params;
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
// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Point	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPointOnBody	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPrimitiveComponent::GetClosestPointOnCollision(const struct FVector& Point, struct FVector* OutPointOnBody, struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetClosestPointOnCollision");

	struct UPrimitiveComponent_GetClosestPointOnCollision_Params {
		struct FVector Point;			//Offset: 0 | ElementSize: 12
		struct FVector OutPointOnBody;			//Offset: 12 | ElementSize: 12
		struct FName BoneName;			//Offset: 24 | ElementSize: 8
		float ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UPrimitiveComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetCollisionEnabled
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<ECollisionEnabled>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<ECollisionEnabled> UPrimitiveComponent::GetCollisionEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionEnabled");

	struct UPrimitiveComponent_GetCollisionEnabled_Params {
		TEnumAsByte<ECollisionEnabled> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_GetCollisionEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetCollisionObjectType
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<ECollisionChannel> UPrimitiveComponent::GetCollisionObjectType()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionObjectType");

	struct UPrimitiveComponent_GetCollisionObjectType_Params {
		TEnumAsByte<ECollisionChannel> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_GetCollisionObjectType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetCollisionProfileName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UPrimitiveComponent::GetCollisionProfileName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionProfileName");

	struct UPrimitiveComponent_GetCollisionProfileName_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UPrimitiveComponent_GetCollisionProfileName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TEnumAsByte<ECollisionResponse>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<ECollisionResponse> UPrimitiveComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel");

	struct UPrimitiveComponent_GetCollisionResponseToChannel_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UPrimitiveComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::GetGenerateOverlapEvents()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents");

	struct UPrimitiveComponent_GetGenerateOverlapEvents_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_GetGenerateOverlapEvents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetInertiaTensor
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetInertiaTensor(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetInertiaTensor");

	struct UPrimitiveComponent_GetInertiaTensor_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	UPrimitiveComponent_GetInertiaTensor_Params params;
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
// Function Engine.PrimitiveComponent.GetLinearDamping
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPrimitiveComponent::GetLinearDamping()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetLinearDamping");

	struct UPrimitiveComponent_GetLinearDamping_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_GetLinearDamping_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetMass
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPrimitiveComponent::GetMass()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMass");

	struct UPrimitiveComponent_GetMass_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_GetMass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetMassScale
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPrimitiveComponent::GetMassScale(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMassScale");

	struct UPrimitiveComponent_GetMassScale_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UPrimitiveComponent_GetMassScale_Params params;
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
// Function Engine.PrimitiveComponent.GetMaterial
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ElementIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInterface*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInterface* UPrimitiveComponent::GetMaterial(int32_t ElementIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterial");

	struct UPrimitiveComponent_GetMaterial_Params {
		int32_t ElementIndex;			//Offset: 0 | ElementSize: 4
		class UMaterialInterface* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// Flags: Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: FaceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SectionIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInterface*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInterface* UPrimitiveComponent::GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t* SectionIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex");

	struct UPrimitiveComponent_GetMaterialFromCollisionFaceIndex_Params {
		int32_t FaceIndex;			//Offset: 0 | ElementSize: 4
		int32_t SectionIndex;			//Offset: 4 | ElementSize: 4
		class UMaterialInterface* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetNumMaterials
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UPrimitiveComponent::GetNumMaterials()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetNumMaterials");

	struct UPrimitiveComponent_GetNumMaterials_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_GetNumMaterials_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetOverlappingActors
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OverlappingActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ClassFilter	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::GetOverlappingActors(TArray<class AActor*>* OverlappingActors, class AActor* ClassFilter)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingActors");

	struct UPrimitiveComponent_GetOverlappingActors_Params {
		TArray<class AActor*> OverlappingActors;			//Offset: 0 | ElementSize: 16
		class AActor* ClassFilter;			//Offset: 16 | ElementSize: 8
	};
	UPrimitiveComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetOverlappingComponents
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OutOverlappingComponents	Type: TArray<class UPrimitiveComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingComponents");

	struct UPrimitiveComponent_GetOverlappingComponents_Params {
		TArray<class UPrimitiveComponent*> OutOverlappingComponents;			//Offset: 0 | ElementSize: 16
	};
	UPrimitiveComponent_GetOverlappingComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetPhysicsAngularVelocity(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity");

	struct UPrimitiveComponent_GetPhysicsAngularVelocity_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	UPrimitiveComponent_GetPhysicsAngularVelocity_Params params;
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
// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetPhysicsAngularVelocityInDegrees(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees");

	struct UPrimitiveComponent_GetPhysicsAngularVelocityInDegrees_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	UPrimitiveComponent_GetPhysicsAngularVelocityInDegrees_Params params;
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
// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians");

	struct UPrimitiveComponent_GetPhysicsAngularVelocityInRadians_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	UPrimitiveComponent_GetPhysicsAngularVelocityInRadians_Params params;
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
// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetPhysicsLinearVelocity(struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity");

	struct UPrimitiveComponent_GetPhysicsLinearVelocity_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	UPrimitiveComponent_GetPhysicsLinearVelocity_Params params;
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
// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Point	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint(struct FVector Point, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint");

	struct UPrimitiveComponent_GetPhysicsLinearVelocityAtPoint_Params {
		struct FVector Point;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 20 | ElementSize: 12
	};
	UPrimitiveComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
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
// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FWalkableSlopeOverride	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FWalkableSlopeOverride UPrimitiveComponent::GetWalkableSlopeOverride()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride");

	struct UPrimitiveComponent_GetWalkableSlopeOverride_Params {
		struct FWalkableSlopeOverride ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UPrimitiveComponent_GetWalkableSlopeOverride_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShouldIgnore	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving");

	struct UPrimitiveComponent_IgnoreActorWhenMoving_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		bool bShouldIgnore;			//Offset: 8 | ElementSize: 1
	};
	UPrimitiveComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Component	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShouldIgnore	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving");

	struct UPrimitiveComponent_IgnoreComponentWhenMoving_Params {
		class UPrimitiveComponent* Component;			//Offset: 0 | ElementSize: 8
		bool bShouldIgnore;			//Offset: 8 | ElementSize: 1
	};
	UPrimitiveComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// Flags: Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::IsAnyRigidBodyAwake() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake");

	struct UPrimitiveComponent_IsAnyRigidBodyAwake_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_IsAnyRigidBodyAwake_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.IsGravityEnabled
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::IsGravityEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsGravityEnabled");

	struct UPrimitiveComponent_IsGravityEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_IsGravityEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.IsOverlappingActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Other	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::IsOverlappingActor(class AActor* Other)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingActor");

	struct UPrimitiveComponent_IsOverlappingActor_Params {
		class AActor* Other;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPrimitiveComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.IsOverlappingComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::IsOverlappingComponent(class UPrimitiveComponent* OtherComp)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingComponent");

	struct UPrimitiveComponent_IsOverlappingComponent_Params {
		class UPrimitiveComponent* OtherComp;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPrimitiveComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InBoxCentre	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InBox	Type: struct FBox	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPersistentShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitNormal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_BoxOverlapComponent(struct FVector InBoxCentre, struct FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent");

	struct UPrimitiveComponent_K2_BoxOverlapComponent_Params {
		struct FVector InBoxCentre;			//Offset: 0 | ElementSize: 12
		struct FBox InBox;			//Offset: 12 | ElementSize: 28
		bool bTraceComplex;			//Offset: 40 | ElementSize: 1
		bool bShowTrace;			//Offset: 41 | ElementSize: 1
		bool bPersistentShowTrace;			//Offset: 42 | ElementSize: 1
		struct FVector HitLocation;			//Offset: 44 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 56 | ElementSize: 12
		struct FName BoneName;			//Offset: 68 | ElementSize: 8
		struct FHitResult OutHit;			//Offset: 76 | ElementSize: 136
		bool ReturnValue;			//Offset: 212 | ElementSize: 1
	};
	UPrimitiveComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_IsCollisionEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled");

	struct UPrimitiveComponent_K2_IsCollisionEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_K2_IsCollisionEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_IsPhysicsCollisionEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled");

	struct UPrimitiveComponent_K2_IsPhysicsCollisionEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_K2_IsPhysicsCollisionEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_IsQueryCollisionEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled");

	struct UPrimitiveComponent_K2_IsQueryCollisionEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_K2_IsQueryCollisionEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: TraceStart	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceEnd	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPersistentShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitNormal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_LineTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_LineTraceComponent");

	struct UPrimitiveComponent_K2_LineTraceComponent_Params {
		struct FVector TraceStart;			//Offset: 0 | ElementSize: 12
		struct FVector TraceEnd;			//Offset: 12 | ElementSize: 12
		bool bTraceComplex;			//Offset: 24 | ElementSize: 1
		bool bShowTrace;			//Offset: 25 | ElementSize: 1
		bool bPersistentShowTrace;			//Offset: 26 | ElementSize: 1
		struct FVector HitLocation;			//Offset: 28 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 40 | ElementSize: 12
		struct FName BoneName;			//Offset: 52 | ElementSize: 8
		struct FHitResult OutHit;			//Offset: 60 | ElementSize: 136
		bool ReturnValue;			//Offset: 196 | ElementSize: 1
	};
	UPrimitiveComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InSphereCentre	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSphereRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPersistentShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitNormal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_SphereOverlapComponent(struct FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent");

	struct UPrimitiveComponent_K2_SphereOverlapComponent_Params {
		struct FVector InSphereCentre;			//Offset: 0 | ElementSize: 12
		float InSphereRadius;			//Offset: 12 | ElementSize: 4
		bool bTraceComplex;			//Offset: 16 | ElementSize: 1
		bool bShowTrace;			//Offset: 17 | ElementSize: 1
		bool bPersistentShowTrace;			//Offset: 18 | ElementSize: 1
		struct FVector HitLocation;			//Offset: 20 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 32 | ElementSize: 12
		struct FName BoneName;			//Offset: 44 | ElementSize: 8
		struct FHitResult OutHit;			//Offset: 52 | ElementSize: 136
		bool ReturnValue;			//Offset: 188 | ElementSize: 1
	};
	UPrimitiveComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: TraceStart	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TraceEnd	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SphereRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTraceComplex	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPersistentShowTrace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitNormal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutHit	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::K2_SphereTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereTraceComponent");

	struct UPrimitiveComponent_K2_SphereTraceComponent_Params {
		struct FVector TraceStart;			//Offset: 0 | ElementSize: 12
		struct FVector TraceEnd;			//Offset: 12 | ElementSize: 12
		float SphereRadius;			//Offset: 24 | ElementSize: 4
		bool bTraceComplex;			//Offset: 28 | ElementSize: 1
		bool bShowTrace;			//Offset: 29 | ElementSize: 1
		bool bPersistentShowTrace;			//Offset: 30 | ElementSize: 1
		struct FVector HitLocation;			//Offset: 32 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 44 | ElementSize: 12
		struct FName BoneName;			//Offset: 56 | ElementSize: 8
		struct FHitResult OutHit;			//Offset: 64 | ElementSize: 136
		bool ReturnValue;			//Offset: 200 | ElementSize: 1
	};
	UPrimitiveComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::PutRigidBodyToSleep(struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.PutRigidBodyToSleep");

	struct UPrimitiveComponent_PutRigidBodyToSleep_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
	};
	UPrimitiveComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InputVector	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UPrimitiveComponent::ScaleByMomentOfInertia(struct FVector InputVector, struct FName BoneName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia");

	struct UPrimitiveComponent_ScaleByMomentOfInertia_Params {
		struct FVector InputVector;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 20 | ElementSize: 12
	};
	UPrimitiveComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
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
// Function Engine.PrimitiveComponent.SetAllMassScale
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InMassScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetAllMassScale(float InMassScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllMassScale");

	struct UPrimitiveComponent_SetAllMassScale_Params {
		float InMassScale;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewAngVel	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees");

	struct UPrimitiveComponent_SetAllPhysicsAngularVelocityInDegrees_Params {
		struct FVector NewAngVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
	};
	UPrimitiveComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewAngVel	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetAllPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians");

	struct UPrimitiveComponent_SetAllPhysicsAngularVelocityInRadians_Params {
		struct FVector NewAngVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
	};
	UPrimitiveComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewVel	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetAllPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity");

	struct UPrimitiveComponent_SetAllPhysicsLinearVelocity_Params {
		struct FVector NewVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
	};
	UPrimitiveComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetAllUseCCD
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InUseCCD	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetAllUseCCD(bool InUseCCD) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllUseCCD");

	struct UPrimitiveComponent_SetAllUseCCD_Params {
		bool InUseCCD;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetAngularDamping
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InDamping	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetAngularDamping(float InDamping) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAngularDamping");

	struct UPrimitiveComponent_SetAngularDamping_Params {
		float InDamping;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetBoundsScale
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewBoundsScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetBoundsScale(float NewBoundsScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetBoundsScale");

	struct UPrimitiveComponent_SetBoundsScale_Params {
		float NewBoundsScale;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCastHiddenShadow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewCastHiddenShadow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCastHiddenShadow(bool NewCastHiddenShadow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastHiddenShadow");

	struct UPrimitiveComponent_SetCastHiddenShadow_Params {
		bool NewCastHiddenShadow;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCastHiddenShadow_Params params;
	params.NewCastHiddenShadow = NewCastHiddenShadow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCastInsetShadow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInCastInsetShadow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCastInsetShadow(bool bInCastInsetShadow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastInsetShadow");

	struct UPrimitiveComponent_SetCastInsetShadow_Params {
		bool bInCastInsetShadow;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCastInsetShadow_Params params;
	params.bInCastInsetShadow = bInCastInsetShadow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCastShadow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewCastShadow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCastShadow(bool NewCastShadow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastShadow");

	struct UPrimitiveComponent_SetCastShadow_Params {
		bool NewCastShadow;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCenterOfMass
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: CenterOfMassOffset	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCenterOfMass(struct FVector CenterOfMassOffset, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCenterOfMass");

	struct UPrimitiveComponent_SetCenterOfMass_Params {
		struct FVector CenterOfMassOffset;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
	};
	UPrimitiveComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCollisionEnabled
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewType	Type: TEnumAsByte<ECollisionEnabled>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionEnabled");

	struct UPrimitiveComponent_SetCollisionEnabled_Params {
		TEnumAsByte<ECollisionEnabled> NewType;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCollisionObjectType
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionObjectType");

	struct UPrimitiveComponent_SetCollisionObjectType_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCollisionProfileName
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InCollisionProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUpdateOverlaps	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCollisionProfileName(struct FName InCollisionProfileName, bool bUpdateOverlaps) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionProfileName");

	struct UPrimitiveComponent_SetCollisionProfileName_Params {
		struct FName InCollisionProfileName;			//Offset: 0 | ElementSize: 8
		bool bUpdateOverlaps;			//Offset: 8 | ElementSize: 1
	};
	UPrimitiveComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;
	params.bUpdateOverlaps = bUpdateOverlaps;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewResponse	Type: TEnumAsByte<ECollisionResponse>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels");

	struct UPrimitiveComponent_SetCollisionResponseToAllChannels_Params {
		TEnumAsByte<ECollisionResponse> NewResponse;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewResponse	Type: TEnumAsByte<ECollisionResponse>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel");

	struct UPrimitiveComponent_SetCollisionResponseToChannel_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> NewResponse;			//Offset: 1 | ElementSize: 1
	};
	UPrimitiveComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetConstraintMode
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ConstraintMode	Type: TEnumAsByte<EDOFMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetConstraintMode");

	struct UPrimitiveComponent_SetConstraintMode_Params {
		TEnumAsByte<EDOFMode> ConstraintMode;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCullDistance
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewCullDistance	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCullDistance(float NewCullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCullDistance");

	struct UPrimitiveComponent_SetCullDistance_Params {
		float NewCullDistance;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Value	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCustomDepthStencilValue(int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue");

	struct UPrimitiveComponent_SetCustomDepthStencilValue_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: WriteMaskBit	Type: ERendererStencilMask	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask");

	struct UPrimitiveComponent_SetCustomDepthStencilWriteMask_Params {
		ERendererStencilMask WriteMaskBit;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat");

	struct UPrimitiveComponent_SetCustomPrimitiveDataFloat_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		float Value;			//Offset: 4 | ElementSize: 4
	};
	UPrimitiveComponent_SetCustomPrimitiveDataFloat_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2");

	struct UPrimitiveComponent_SetCustomPrimitiveDataVector2_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		struct FVector2D Value;			//Offset: 4 | ElementSize: 8
	};
	UPrimitiveComponent_SetCustomPrimitiveDataVector2_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3");

	struct UPrimitiveComponent_SetCustomPrimitiveDataVector3_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		struct FVector Value;			//Offset: 4 | ElementSize: 12
	};
	UPrimitiveComponent_SetCustomPrimitiveDataVector3_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector4	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4");

	struct UPrimitiveComponent_SetCustomPrimitiveDataVector4_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		struct FVector4 Value;			//Offset: 16 | ElementSize: 16
	};
	UPrimitiveComponent_SetCustomPrimitiveDataVector4_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataFloat
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataFloat(int32_t DataIndex, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataFloat");

	struct UPrimitiveComponent_SetDefaultCustomPrimitiveDataFloat_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		float Value;			//Offset: 4 | ElementSize: 4
	};
	UPrimitiveComponent_SetDefaultCustomPrimitiveDataFloat_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector2
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector2");

	struct UPrimitiveComponent_SetDefaultCustomPrimitiveDataVector2_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		struct FVector2D Value;			//Offset: 4 | ElementSize: 8
	};
	UPrimitiveComponent_SetDefaultCustomPrimitiveDataVector2_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector3
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector3");

	struct UPrimitiveComponent_SetDefaultCustomPrimitiveDataVector3_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		struct FVector Value;			//Offset: 4 | ElementSize: 12
	};
	UPrimitiveComponent_SetDefaultCustomPrimitiveDataVector3_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector4
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: struct FVector4	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetDefaultCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector4");

	struct UPrimitiveComponent_SetDefaultCustomPrimitiveDataVector4_Params {
		int32_t DataIndex;			//Offset: 0 | ElementSize: 4
		struct FVector4 Value;			//Offset: 16 | ElementSize: 16
	};
	UPrimitiveComponent_SetDefaultCustomPrimitiveDataVector4_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetEnableGravity
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bGravityEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetEnableGravity(bool bGravityEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetEnableGravity");

	struct UPrimitiveComponent_SetEnableGravity_Params {
		bool bGravityEnabled;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInExcludeFromLightAttachmentGroup	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup");

	struct UPrimitiveComponent_SetExcludeFromLightAttachmentGroup_Params {
		bool bInExcludeFromLightAttachmentGroup;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetExcludeFromLightAttachmentGroup_Params params;
	params.bInExcludeFromLightAttachmentGroup = bInExcludeFromLightAttachmentGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInGenerateOverlapEvents	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents");

	struct UPrimitiveComponent_SetGenerateOverlapEvents_Params {
		bool bInGenerateOverlapEvents;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetHiddenInSceneCapture
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetHiddenInSceneCapture(bool bValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetHiddenInSceneCapture");

	struct UPrimitiveComponent_SetHiddenInSceneCapture_Params {
		bool bValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetHiddenInSceneCapture_Params params;
	params.bValue = bValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInLightAttachmentsAsGroup	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup");

	struct UPrimitiveComponent_SetLightAttachmentsAsGroup_Params {
		bool bInLightAttachmentsAsGroup;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetLightAttachmentsAsGroup_Params params;
	params.bInLightAttachmentsAsGroup = bInLightAttachmentsAsGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetLightingChannels
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bChannel0	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bChannel1	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bChannel2	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLightingChannels");

	struct UPrimitiveComponent_SetLightingChannels_Params {
		bool bChannel0;			//Offset: 0 | ElementSize: 1
		bool bChannel1;			//Offset: 1 | ElementSize: 1
		bool bChannel2;			//Offset: 2 | ElementSize: 1
	};
	UPrimitiveComponent_SetLightingChannels_Params params;
	params.bChannel0 = bChannel0;
	params.bChannel1 = bChannel1;
	params.bChannel2 = bChannel2;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetLinearDamping
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InDamping	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetLinearDamping(float InDamping) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLinearDamping");

	struct UPrimitiveComponent_SetLinearDamping_Params {
		float InDamping;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MassInKg	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bOverrideMass	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassOverrideInKg");

	struct UPrimitiveComponent_SetMassOverrideInKg_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		float MassInKg;			//Offset: 8 | ElementSize: 4
		bool bOverrideMass;			//Offset: 12 | ElementSize: 1
	};
	UPrimitiveComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetMassScale
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InMassScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetMassScale(struct FName BoneName, float InMassScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassScale");

	struct UPrimitiveComponent_SetMassScale_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		float InMassScale;			//Offset: 8 | ElementSize: 4
	};
	UPrimitiveComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetMaterial
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: ElementIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetMaterial(int32_t ElementIndex, class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterial");

	struct UPrimitiveComponent_SetMaterial_Params {
		int32_t ElementIndex;			//Offset: 0 | ElementSize: 4
		class UMaterialInterface* Material;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetMaterialByName
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: MaterialSlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetMaterialByName(struct FName MaterialSlotName, class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterialByName");

	struct UPrimitiveComponent_SetMaterialByName_Params {
		struct FName MaterialSlotName;			//Offset: 0 | ElementSize: 8
		class UMaterialInterface* Material;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewNotifyRigidBodyCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision");

	struct UPrimitiveComponent_SetNotifyRigidBodyCollision_Params {
		bool bNewNotifyRigidBodyCollision;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewOnlyOwnerSee	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOnlyOwnerSee");

	struct UPrimitiveComponent_SetOnlyOwnerSee_Params {
		bool bNewOnlyOwnerSee;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetOwnerNoSee
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewOwnerNoSee	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetOwnerNoSee(bool bNewOwnerNoSee) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOwnerNoSee");

	struct UPrimitiveComponent_SetOwnerNoSee_Params {
		bool bNewOwnerNoSee;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewAngVel	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity");

	struct UPrimitiveComponent_SetPhysicsAngularVelocity_Params {
		struct FVector NewAngVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
		struct FName BoneName;			//Offset: 16 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewAngVel	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsAngularVelocityInDegrees(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees");

	struct UPrimitiveComponent_SetPhysicsAngularVelocityInDegrees_Params {
		struct FVector NewAngVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
		struct FName BoneName;			//Offset: 16 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewAngVel	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsAngularVelocityInRadians(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians");

	struct UPrimitiveComponent_SetPhysicsAngularVelocityInRadians_Params {
		struct FVector NewAngVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
		struct FName BoneName;			//Offset: 16 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewVel	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity");

	struct UPrimitiveComponent_SetPhysicsLinearVelocity_Params {
		struct FVector NewVel;			//Offset: 0 | ElementSize: 12
		bool bAddToCurrent;			//Offset: 12 | ElementSize: 1
		struct FName BoneName;			//Offset: 16 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewMaxAngVel	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity");

	struct UPrimitiveComponent_SetPhysicsMaxAngularVelocity_Params {
		float NewMaxAngVel;			//Offset: 0 | ElementSize: 4
		bool bAddToCurrent;			//Offset: 4 | ElementSize: 1
		struct FName BoneName;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewMaxAngVel	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees");

	struct UPrimitiveComponent_SetPhysicsMaxAngularVelocityInDegrees_Params {
		float NewMaxAngVel;			//Offset: 0 | ElementSize: 4
		bool bAddToCurrent;			//Offset: 4 | ElementSize: 1
		struct FName BoneName;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewMaxAngVel	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAddToCurrent	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians");

	struct UPrimitiveComponent_SetPhysicsMaxAngularVelocityInRadians_Params {
		float NewMaxAngVel;			//Offset: 0 | ElementSize: 4
		bool bAddToCurrent;			//Offset: 4 | ElementSize: 1
		struct FName BoneName;			//Offset: 8 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewPhysMaterial	Type: class UPhysicalMaterial*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysMaterialOverride");

	struct UPrimitiveComponent_SetPhysMaterialOverride_Params {
		class UPhysicalMaterial* NewPhysMaterial;			//Offset: 0 | ElementSize: 8
	};
	UPrimitiveComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetReceivesDecals
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewReceivesDecals	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetReceivesDecals(bool bNewReceivesDecals) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetReceivesDecals");

	struct UPrimitiveComponent_SetReceivesDecals_Params {
		bool bNewReceivesDecals;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetRenderCustomDepth(bool bValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderCustomDepth");

	struct UPrimitiveComponent_SetRenderCustomDepth_Params {
		bool bValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetRenderInMainPass
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetRenderInMainPass(bool bValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMainPass");

	struct UPrimitiveComponent_SetRenderInMainPass_Params {
		bool bValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetSimulatePhysics
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bSimulate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetSimulatePhysics(bool bSimulate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSimulatePhysics");

	struct UPrimitiveComponent_SetSimulatePhysics_Params {
		bool bSimulate;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewSingleSampleShadowFromStationaryLights	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights");

	struct UPrimitiveComponent_SetSingleSampleShadowFromStationaryLights_Params {
		bool bNewSingleSampleShadowFromStationaryLights;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetTranslucencySortDistanceOffset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewTranslucencySortDistanceOffset	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucencySortDistanceOffset");

	struct UPrimitiveComponent_SetTranslucencySortDistanceOffset_Params {
		float NewTranslucencySortDistanceOffset;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetTranslucencySortDistanceOffset_Params params;
	params.NewTranslucencySortDistanceOffset = NewTranslucencySortDistanceOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewTranslucentSortPriority	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetTranslucentSortPriority(int32_t NewTranslucentSortPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucentSortPriority");

	struct UPrimitiveComponent_SetTranslucentSortPriority_Params {
		int32_t NewTranslucentSortPriority;			//Offset: 0 | ElementSize: 4
	};
	UPrimitiveComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetUseCCD
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InUseCCD	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetUseCCD(bool InUseCCD, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetUseCCD");

	struct UPrimitiveComponent_SetUseCCD_Params {
		bool InUseCCD;			//Offset: 0 | ElementSize: 1
		struct FName BoneName;			//Offset: 4 | ElementSize: 8
	};
	UPrimitiveComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetVisibleInSceneCaptureOnly
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetVisibleInSceneCaptureOnly(bool bValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetVisibleInSceneCaptureOnly");

	struct UPrimitiveComponent_SetVisibleInSceneCaptureOnly_Params {
		bool bValue;			//Offset: 0 | ElementSize: 1
	};
	UPrimitiveComponent_SetVisibleInSceneCaptureOnly_Params params;
	params.bValue = bValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// Flags: Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: NewOverride	Type: struct FWalkableSlopeOverride	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride");

	struct UPrimitiveComponent_SetWalkableSlopeOverride_Params {
		struct FWalkableSlopeOverride NewOverride;			//Offset: 0 | ElementSize: 16
	};
	UPrimitiveComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UPrimitiveComponent::WakeAllRigidBodies() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeAllRigidBodies");

	struct UPrimitiveComponent_WakeAllRigidBodies_Params {
	};
	UPrimitiveComponent_WakeAllRigidBodies_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.WakeRigidBody
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPrimitiveComponent::WakeRigidBody(struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeRigidBody");

	struct UPrimitiveComponent_WakeRigidBody_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
	};
	UPrimitiveComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.PrimitiveComponent.WasRecentlyRendered
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Tolerance	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPrimitiveComponent::WasRecentlyRendered(float Tolerance)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WasRecentlyRendered");

	struct UPrimitiveComponent_WasRecentlyRendered_Params {
		float Tolerance;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UPrimitiveComponent_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}