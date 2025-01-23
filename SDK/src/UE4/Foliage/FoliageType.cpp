#include "../SDK.h"
#include "FoliageType.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UpdateGuid
// Declaration: struct FGuid UpdateGuid
struct FGuid UFoliageType::M_GetUpdateGuid() const {
	return Read<struct FGuid>((byte*)this + 40);
}
struct FGuid* UFoliageType::M_PtrGetUpdateGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 40);
}
void UFoliageType::M_SetUpdateGuid(const struct FGuid& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Density
// Declaration: float Density
float UFoliageType::M_GetDensity() const {
	return Read<float>((byte*)this + 56);
}
float* UFoliageType::M_PtrGetDensity() {
	return reinterpret_cast<float*>((byte*)this + 56);
}
void UFoliageType::M_SetDensity(const float& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of DensityAdjustmentFactor
// Declaration: float DensityAdjustmentFactor
float UFoliageType::M_GetDensityAdjustmentFactor() const {
	return Read<float>((byte*)this + 60);
}
float* UFoliageType::M_PtrGetDensityAdjustmentFactor() {
	return reinterpret_cast<float*>((byte*)this + 60);
}
void UFoliageType::M_SetDensityAdjustmentFactor(const float& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of Radius
// Declaration: float Radius
float UFoliageType::M_GetRadius() const {
	return Read<float>((byte*)this + 64);
}
float* UFoliageType::M_PtrGetRadius() {
	return reinterpret_cast<float*>((byte*)this + 64);
}
void UFoliageType::M_SetRadius(const float& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of bSingleInstanceModeOverrideRadius
// Declaration: bool bSingleInstanceModeOverrideRadius
bool UFoliageType::M_GetbSingleInstanceModeOverrideRadius() const {
	return Read<bool>((byte*)this + 68);
}
bool* UFoliageType::M_PtrGetbSingleInstanceModeOverrideRadius() {
	return reinterpret_cast<bool*>((byte*)this + 68);
}
void UFoliageType::M_SetbSingleInstanceModeOverrideRadius(const bool& value) {
	Write((byte*)this + 68, value);
}
// Member Getter and Setter of SingleInstanceModeRadius
// Declaration: float SingleInstanceModeRadius
float UFoliageType::M_GetSingleInstanceModeRadius() const {
	return Read<float>((byte*)this + 72);
}
float* UFoliageType::M_PtrGetSingleInstanceModeRadius() {
	return reinterpret_cast<float*>((byte*)this + 72);
}
void UFoliageType::M_SetSingleInstanceModeRadius(const float& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of Scaling
// Declaration: EFoliageScaling Scaling
EFoliageScaling UFoliageType::M_GetScaling() const {
	return Read<EFoliageScaling>((byte*)this + 76);
}
EFoliageScaling* UFoliageType::M_PtrGetScaling() {
	return reinterpret_cast<EFoliageScaling*>((byte*)this + 76);
}
void UFoliageType::M_SetScaling(const EFoliageScaling& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of ScaleX
// Declaration: struct FFloatInterval ScaleX
struct FFloatInterval UFoliageType::M_GetScaleX() const {
	return Read<struct FFloatInterval>((byte*)this + 80);
}
struct FFloatInterval* UFoliageType::M_PtrGetScaleX() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 80);
}
void UFoliageType::M_SetScaleX(const struct FFloatInterval& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of ScaleY
// Declaration: struct FFloatInterval ScaleY
struct FFloatInterval UFoliageType::M_GetScaleY() const {
	return Read<struct FFloatInterval>((byte*)this + 88);
}
struct FFloatInterval* UFoliageType::M_PtrGetScaleY() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 88);
}
void UFoliageType::M_SetScaleY(const struct FFloatInterval& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of ScaleZ
// Declaration: struct FFloatInterval ScaleZ
struct FFloatInterval UFoliageType::M_GetScaleZ() const {
	return Read<struct FFloatInterval>((byte*)this + 96);
}
struct FFloatInterval* UFoliageType::M_PtrGetScaleZ() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 96);
}
void UFoliageType::M_SetScaleZ(const struct FFloatInterval& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of VertexColorMaskByChannel
// Declaration: struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[4]
struct FFoliageVertexColorChannelMask UFoliageType::M_GetVertexColorMaskByChannel() const {
	return Read<struct FFoliageVertexColorChannelMask>((byte*)this + 104);
}
struct FFoliageVertexColorChannelMask* UFoliageType::M_PtrGetVertexColorMaskByChannel() {
	return reinterpret_cast<struct FFoliageVertexColorChannelMask*>((byte*)this + 104);
}
void UFoliageType::M_SetVertexColorMaskByChannel(const struct FFoliageVertexColorChannelMask& value) {
	Write((byte*)this + 104, value);
}
// Member Getter and Setter of VertexColorMask
// Declaration: TEnumAsByte<EFoliageVertexColorMask> VertexColorMask
TEnumAsByte<EFoliageVertexColorMask> UFoliageType::M_GetVertexColorMask() const {
	return Read<TEnumAsByte<EFoliageVertexColorMask>>((byte*)this + 152);
}
TEnumAsByte<EFoliageVertexColorMask>* UFoliageType::M_PtrGetVertexColorMask() {
	return reinterpret_cast<TEnumAsByte<EFoliageVertexColorMask>*>((byte*)this + 152);
}
void UFoliageType::M_SetVertexColorMask(const TEnumAsByte<EFoliageVertexColorMask>& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of VertexColorMaskThreshold
// Declaration: float VertexColorMaskThreshold
float UFoliageType::M_GetVertexColorMaskThreshold() const {
	return Read<float>((byte*)this + 156);
}
float* UFoliageType::M_PtrGetVertexColorMaskThreshold() {
	return reinterpret_cast<float*>((byte*)this + 156);
}
void UFoliageType::M_SetVertexColorMaskThreshold(const float& value) {
	Write((byte*)this + 156, value);
}
// Member Getter and Setter of VertexColorMaskInvert
// Declaration: unsigned char VertexColorMaskInvert : 1
unsigned char UFoliageType::M_GetVertexColorMaskInvert() const {
	return Read<unsigned char>((byte*)this + 160);
}
unsigned char* UFoliageType::M_PtrGetVertexColorMaskInvert() {
	return reinterpret_cast<unsigned char*>((byte*)this + 160);
}
void UFoliageType::M_SetVertexColorMaskInvert(const unsigned char& value) {
	Write((byte*)this + 160, value);
}
// Member Getter and Setter of ZOffset
// Declaration: struct FFloatInterval ZOffset
struct FFloatInterval UFoliageType::M_GetZOffset() const {
	return Read<struct FFloatInterval>((byte*)this + 164);
}
struct FFloatInterval* UFoliageType::M_PtrGetZOffset() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 164);
}
void UFoliageType::M_SetZOffset(const struct FFloatInterval& value) {
	Write((byte*)this + 164, value);
}
// Member Getter and Setter of AlignToNormal
// Declaration: unsigned char AlignToNormal : 1
unsigned char UFoliageType::M_GetAlignToNormal() const {
	return Read<unsigned char>((byte*)this + 172);
}
unsigned char* UFoliageType::M_PtrGetAlignToNormal() {
	return reinterpret_cast<unsigned char*>((byte*)this + 172);
}
void UFoliageType::M_SetAlignToNormal(const unsigned char& value) {
	Write((byte*)this + 172, value);
}
// Member Getter and Setter of AlignMaxAngle
// Declaration: float AlignMaxAngle
float UFoliageType::M_GetAlignMaxAngle() const {
	return Read<float>((byte*)this + 176);
}
float* UFoliageType::M_PtrGetAlignMaxAngle() {
	return reinterpret_cast<float*>((byte*)this + 176);
}
void UFoliageType::M_SetAlignMaxAngle(const float& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of RandomYaw
// Declaration: unsigned char RandomYaw : 1
unsigned char UFoliageType::M_GetRandomYaw() const {
	return Read<unsigned char>((byte*)this + 180);
}
unsigned char* UFoliageType::M_PtrGetRandomYaw() {
	return reinterpret_cast<unsigned char*>((byte*)this + 180);
}
void UFoliageType::M_SetRandomYaw(const unsigned char& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of RandomPitchAngle
// Declaration: float RandomPitchAngle
float UFoliageType::M_GetRandomPitchAngle() const {
	return Read<float>((byte*)this + 184);
}
float* UFoliageType::M_PtrGetRandomPitchAngle() {
	return reinterpret_cast<float*>((byte*)this + 184);
}
void UFoliageType::M_SetRandomPitchAngle(const float& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of GroundSlopeAngle
// Declaration: struct FFloatInterval GroundSlopeAngle
struct FFloatInterval UFoliageType::M_GetGroundSlopeAngle() const {
	return Read<struct FFloatInterval>((byte*)this + 188);
}
struct FFloatInterval* UFoliageType::M_PtrGetGroundSlopeAngle() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 188);
}
void UFoliageType::M_SetGroundSlopeAngle(const struct FFloatInterval& value) {
	Write((byte*)this + 188, value);
}
// Member Getter and Setter of Height
// Declaration: struct FFloatInterval Height
struct FFloatInterval UFoliageType::M_GetHeight() const {
	return Read<struct FFloatInterval>((byte*)this + 196);
}
struct FFloatInterval* UFoliageType::M_PtrGetHeight() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 196);
}
void UFoliageType::M_SetHeight(const struct FFloatInterval& value) {
	Write((byte*)this + 196, value);
}
// Member Getter and Setter of LandscapeLayers
// Declaration: TArray<struct FName> LandscapeLayers
TArray<struct FName> UFoliageType::M_GetLandscapeLayers() const {
	return Read<TArray<struct FName>>((byte*)this + 208);
}
TArray<struct FName>* UFoliageType::M_PtrGetLandscapeLayers() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 208);
}
void UFoliageType::M_SetLandscapeLayers(const TArray<struct FName>& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of MinimumLayerWeight
// Declaration: float MinimumLayerWeight
float UFoliageType::M_GetMinimumLayerWeight() const {
	return Read<float>((byte*)this + 224);
}
float* UFoliageType::M_PtrGetMinimumLayerWeight() {
	return reinterpret_cast<float*>((byte*)this + 224);
}
void UFoliageType::M_SetMinimumLayerWeight(const float& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of ExclusionLandscapeLayers
// Declaration: TArray<struct FName> ExclusionLandscapeLayers
TArray<struct FName> UFoliageType::M_GetExclusionLandscapeLayers() const {
	return Read<TArray<struct FName>>((byte*)this + 232);
}
TArray<struct FName>* UFoliageType::M_PtrGetExclusionLandscapeLayers() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 232);
}
void UFoliageType::M_SetExclusionLandscapeLayers(const TArray<struct FName>& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of MinimumExclusionLayerWeight
// Declaration: float MinimumExclusionLayerWeight
float UFoliageType::M_GetMinimumExclusionLayerWeight() const {
	return Read<float>((byte*)this + 248);
}
float* UFoliageType::M_PtrGetMinimumExclusionLayerWeight() {
	return reinterpret_cast<float*>((byte*)this + 248);
}
void UFoliageType::M_SetMinimumExclusionLayerWeight(const float& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of LandscapeLayer
// Declaration: struct FName LandscapeLayer
struct FName UFoliageType::M_GetLandscapeLayer() const {
	return Read<struct FName>((byte*)this + 252);
}
struct FName* UFoliageType::M_PtrGetLandscapeLayer() {
	return reinterpret_cast<struct FName*>((byte*)this + 252);
}
void UFoliageType::M_SetLandscapeLayer(const struct FName& value) {
	Write((byte*)this + 252, value);
}
// Member Getter and Setter of CollisionWithWorld
// Declaration: unsigned char CollisionWithWorld : 1
unsigned char UFoliageType::M_GetCollisionWithWorld() const {
	return Read<unsigned char>((byte*)this + 260);
}
unsigned char* UFoliageType::M_PtrGetCollisionWithWorld() {
	return reinterpret_cast<unsigned char*>((byte*)this + 260);
}
void UFoliageType::M_SetCollisionWithWorld(const unsigned char& value) {
	Write((byte*)this + 260, value);
}
// Member Getter and Setter of CollisionScale
// Declaration: struct FVector CollisionScale
struct FVector UFoliageType::M_GetCollisionScale() const {
	return Read<struct FVector>((byte*)this + 264);
}
struct FVector* UFoliageType::M_PtrGetCollisionScale() {
	return reinterpret_cast<struct FVector*>((byte*)this + 264);
}
void UFoliageType::M_SetCollisionScale(const struct FVector& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of MeshBounds
// Declaration: struct FBoxSphereBounds MeshBounds
struct FBoxSphereBounds UFoliageType::M_GetMeshBounds() const {
	return Read<struct FBoxSphereBounds>((byte*)this + 276);
}
struct FBoxSphereBounds* UFoliageType::M_PtrGetMeshBounds() {
	return reinterpret_cast<struct FBoxSphereBounds*>((byte*)this + 276);
}
void UFoliageType::M_SetMeshBounds(const struct FBoxSphereBounds& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of LowBoundOriginRadius
// Declaration: struct FVector LowBoundOriginRadius
struct FVector UFoliageType::M_GetLowBoundOriginRadius() const {
	return Read<struct FVector>((byte*)this + 304);
}
struct FVector* UFoliageType::M_PtrGetLowBoundOriginRadius() {
	return reinterpret_cast<struct FVector*>((byte*)this + 304);
}
void UFoliageType::M_SetLowBoundOriginRadius(const struct FVector& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of Mobility
// Declaration: TEnumAsByte<EComponentMobility> Mobility
TEnumAsByte<EComponentMobility> UFoliageType::M_GetMobility() const {
	return Read<TEnumAsByte<EComponentMobility>>((byte*)this + 316);
}
TEnumAsByte<EComponentMobility>* UFoliageType::M_PtrGetMobility() {
	return reinterpret_cast<TEnumAsByte<EComponentMobility>*>((byte*)this + 316);
}
void UFoliageType::M_SetMobility(const TEnumAsByte<EComponentMobility>& value) {
	Write((byte*)this + 316, value);
}
// Member Getter and Setter of CullDistance
// Declaration: struct FInt32Interval CullDistance
struct FInt32Interval UFoliageType::M_GetCullDistance() const {
	return Read<struct FInt32Interval>((byte*)this + 320);
}
struct FInt32Interval* UFoliageType::M_PtrGetCullDistance() {
	return reinterpret_cast<struct FInt32Interval*>((byte*)this + 320);
}
void UFoliageType::M_SetCullDistance(const struct FInt32Interval& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of bEnableStaticLighting
// Declaration: unsigned char bEnableStaticLighting : 1
unsigned char UFoliageType::M_GetbEnableStaticLighting() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbEnableStaticLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbEnableStaticLighting(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of CastShadow
// Declaration: unsigned char CastShadow : 1
unsigned char UFoliageType::M_GetCastShadow() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetCastShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetCastShadow(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bAffectDynamicIndirectLighting
// Declaration: unsigned char bAffectDynamicIndirectLighting : 1
unsigned char UFoliageType::M_GetbAffectDynamicIndirectLighting() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbAffectDynamicIndirectLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbAffectDynamicIndirectLighting(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bAffectDistanceFieldLighting
// Declaration: unsigned char bAffectDistanceFieldLighting : 1
unsigned char UFoliageType::M_GetbAffectDistanceFieldLighting() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbAffectDistanceFieldLighting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbAffectDistanceFieldLighting(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bCastDynamicShadow
// Declaration: unsigned char bCastDynamicShadow : 1
unsigned char UFoliageType::M_GetbCastDynamicShadow() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbCastDynamicShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbCastDynamicShadow(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bCastStaticShadow
// Declaration: unsigned char bCastStaticShadow : 1
unsigned char UFoliageType::M_GetbCastStaticShadow() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbCastStaticShadow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbCastStaticShadow(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bCastShadowAsTwoSided
// Declaration: unsigned char bCastShadowAsTwoSided : 1
unsigned char UFoliageType::M_GetbCastShadowAsTwoSided() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbCastShadowAsTwoSided() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbCastShadowAsTwoSided(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bReceivesDecals
// Declaration: unsigned char bReceivesDecals : 1
unsigned char UFoliageType::M_GetbReceivesDecals() const {
	return Read<unsigned char>((byte*)this + 328);
}
unsigned char* UFoliageType::M_PtrGetbReceivesDecals() {
	return reinterpret_cast<unsigned char*>((byte*)this + 328);
}
void UFoliageType::M_SetbReceivesDecals(const unsigned char& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bOverrideLightMapRes
// Declaration: unsigned char bOverrideLightMapRes : 1
unsigned char UFoliageType::M_GetbOverrideLightMapRes() const {
	return Read<unsigned char>((byte*)this + 329);
}
unsigned char* UFoliageType::M_PtrGetbOverrideLightMapRes() {
	return reinterpret_cast<unsigned char*>((byte*)this + 329);
}
void UFoliageType::M_SetbOverrideLightMapRes(const unsigned char& value) {
	Write((byte*)this + 329, value);
}
// Member Getter and Setter of OverriddenLightMapRes
// Declaration: int32_t OverriddenLightMapRes
int32_t UFoliageType::M_GetOverriddenLightMapRes() const {
	return Read<int32_t>((byte*)this + 332);
}
int32_t* UFoliageType::M_PtrGetOverriddenLightMapRes() {
	return reinterpret_cast<int32_t*>((byte*)this + 332);
}
void UFoliageType::M_SetOverriddenLightMapRes(const int32_t& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of LightmapType
// Declaration: ELightmapType LightmapType
ELightmapType UFoliageType::M_GetLightmapType() const {
	return Read<ELightmapType>((byte*)this + 336);
}
ELightmapType* UFoliageType::M_PtrGetLightmapType() {
	return reinterpret_cast<ELightmapType*>((byte*)this + 336);
}
void UFoliageType::M_SetLightmapType(const ELightmapType& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bUseAsOccluder
// Declaration: unsigned char bUseAsOccluder : 1
unsigned char UFoliageType::M_GetbUseAsOccluder() const {
	return Read<unsigned char>((byte*)this + 340);
}
unsigned char* UFoliageType::M_PtrGetbUseAsOccluder() {
	return reinterpret_cast<unsigned char*>((byte*)this + 340);
}
void UFoliageType::M_SetbUseAsOccluder(const unsigned char& value) {
	Write((byte*)this + 340, value);
}
// Member Getter and Setter of bVisibleInRayTracing
// Declaration: unsigned char bVisibleInRayTracing : 1
unsigned char UFoliageType::M_GetbVisibleInRayTracing() const {
	return Read<unsigned char>((byte*)this + 344);
}
unsigned char* UFoliageType::M_PtrGetbVisibleInRayTracing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 344);
}
void UFoliageType::M_SetbVisibleInRayTracing(const unsigned char& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of bEvaluateWorldPositionOffset
// Declaration: unsigned char bEvaluateWorldPositionOffset : 1
unsigned char UFoliageType::M_GetbEvaluateWorldPositionOffset() const {
	return Read<unsigned char>((byte*)this + 344);
}
unsigned char* UFoliageType::M_PtrGetbEvaluateWorldPositionOffset() {
	return reinterpret_cast<unsigned char*>((byte*)this + 344);
}
void UFoliageType::M_SetbEvaluateWorldPositionOffset(const unsigned char& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of BodyInstance
// Declaration: struct FBodyInstance BodyInstance
struct FBodyInstance UFoliageType::M_GetBodyInstance() const {
	return Read<struct FBodyInstance>((byte*)this + 352);
}
struct FBodyInstance* UFoliageType::M_PtrGetBodyInstance() {
	return reinterpret_cast<struct FBodyInstance*>((byte*)this + 352);
}
void UFoliageType::M_SetBodyInstance(const struct FBodyInstance& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of CustomNavigableGeometry
// Declaration: TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry
TEnumAsByte<EHasCustomNavigableGeometry> UFoliageType::M_GetCustomNavigableGeometry() const {
	return Read<TEnumAsByte<EHasCustomNavigableGeometry>>((byte*)this + 696);
}
TEnumAsByte<EHasCustomNavigableGeometry>* UFoliageType::M_PtrGetCustomNavigableGeometry() {
	return reinterpret_cast<TEnumAsByte<EHasCustomNavigableGeometry>*>((byte*)this + 696);
}
void UFoliageType::M_SetCustomNavigableGeometry(const TEnumAsByte<EHasCustomNavigableGeometry>& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of LightingChannels
// Declaration: struct FLightingChannels LightingChannels
struct FLightingChannels UFoliageType::M_GetLightingChannels() const {
	return Read<struct FLightingChannels>((byte*)this + 697);
}
struct FLightingChannels* UFoliageType::M_PtrGetLightingChannels() {
	return reinterpret_cast<struct FLightingChannels*>((byte*)this + 697);
}
void UFoliageType::M_SetLightingChannels(const struct FLightingChannels& value) {
	Write((byte*)this + 697, value);
}
// Member Getter and Setter of bRenderCustomDepth
// Declaration: unsigned char bRenderCustomDepth : 1
unsigned char UFoliageType::M_GetbRenderCustomDepth() const {
	return Read<unsigned char>((byte*)this + 700);
}
unsigned char* UFoliageType::M_PtrGetbRenderCustomDepth() {
	return reinterpret_cast<unsigned char*>((byte*)this + 700);
}
void UFoliageType::M_SetbRenderCustomDepth(const unsigned char& value) {
	Write((byte*)this + 700, value);
}
// Member Getter and Setter of CustomDepthStencilWriteMask
// Declaration: ERendererStencilMask CustomDepthStencilWriteMask
ERendererStencilMask UFoliageType::M_GetCustomDepthStencilWriteMask() const {
	return Read<ERendererStencilMask>((byte*)this + 704);
}
ERendererStencilMask* UFoliageType::M_PtrGetCustomDepthStencilWriteMask() {
	return reinterpret_cast<ERendererStencilMask*>((byte*)this + 704);
}
void UFoliageType::M_SetCustomDepthStencilWriteMask(const ERendererStencilMask& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of CustomDepthStencilValue
// Declaration: int32_t CustomDepthStencilValue
int32_t UFoliageType::M_GetCustomDepthStencilValue() const {
	return Read<int32_t>((byte*)this + 708);
}
int32_t* UFoliageType::M_PtrGetCustomDepthStencilValue() {
	return reinterpret_cast<int32_t*>((byte*)this + 708);
}
void UFoliageType::M_SetCustomDepthStencilValue(const int32_t& value) {
	Write((byte*)this + 708, value);
}
// Member Getter and Setter of TranslucencySortPriority
// Declaration: int32_t TranslucencySortPriority
int32_t UFoliageType::M_GetTranslucencySortPriority() const {
	return Read<int32_t>((byte*)this + 712);
}
int32_t* UFoliageType::M_PtrGetTranslucencySortPriority() {
	return reinterpret_cast<int32_t*>((byte*)this + 712);
}
void UFoliageType::M_SetTranslucencySortPriority(const int32_t& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of CollisionRadius
// Declaration: float CollisionRadius
float UFoliageType::M_GetCollisionRadius() const {
	return Read<float>((byte*)this + 716);
}
float* UFoliageType::M_PtrGetCollisionRadius() {
	return reinterpret_cast<float*>((byte*)this + 716);
}
void UFoliageType::M_SetCollisionRadius(const float& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of ShadeRadius
// Declaration: float ShadeRadius
float UFoliageType::M_GetShadeRadius() const {
	return Read<float>((byte*)this + 720);
}
float* UFoliageType::M_PtrGetShadeRadius() {
	return reinterpret_cast<float*>((byte*)this + 720);
}
void UFoliageType::M_SetShadeRadius(const float& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of NumSteps
// Declaration: int32_t NumSteps
int32_t UFoliageType::M_GetNumSteps() const {
	return Read<int32_t>((byte*)this + 724);
}
int32_t* UFoliageType::M_PtrGetNumSteps() {
	return reinterpret_cast<int32_t*>((byte*)this + 724);
}
void UFoliageType::M_SetNumSteps(const int32_t& value) {
	Write((byte*)this + 724, value);
}
// Member Getter and Setter of InitialSeedDensity
// Declaration: float InitialSeedDensity
float UFoliageType::M_GetInitialSeedDensity() const {
	return Read<float>((byte*)this + 728);
}
float* UFoliageType::M_PtrGetInitialSeedDensity() {
	return reinterpret_cast<float*>((byte*)this + 728);
}
void UFoliageType::M_SetInitialSeedDensity(const float& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of AverageSpreadDistance
// Declaration: float AverageSpreadDistance
float UFoliageType::M_GetAverageSpreadDistance() const {
	return Read<float>((byte*)this + 732);
}
float* UFoliageType::M_PtrGetAverageSpreadDistance() {
	return reinterpret_cast<float*>((byte*)this + 732);
}
void UFoliageType::M_SetAverageSpreadDistance(const float& value) {
	Write((byte*)this + 732, value);
}
// Member Getter and Setter of SpreadVariance
// Declaration: float SpreadVariance
float UFoliageType::M_GetSpreadVariance() const {
	return Read<float>((byte*)this + 736);
}
float* UFoliageType::M_PtrGetSpreadVariance() {
	return reinterpret_cast<float*>((byte*)this + 736);
}
void UFoliageType::M_SetSpreadVariance(const float& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of SeedsPerStep
// Declaration: int32_t SeedsPerStep
int32_t UFoliageType::M_GetSeedsPerStep() const {
	return Read<int32_t>((byte*)this + 740);
}
int32_t* UFoliageType::M_PtrGetSeedsPerStep() {
	return reinterpret_cast<int32_t*>((byte*)this + 740);
}
void UFoliageType::M_SetSeedsPerStep(const int32_t& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of DistributionSeed
// Declaration: int32_t DistributionSeed
int32_t UFoliageType::M_GetDistributionSeed() const {
	return Read<int32_t>((byte*)this + 744);
}
int32_t* UFoliageType::M_PtrGetDistributionSeed() {
	return reinterpret_cast<int32_t*>((byte*)this + 744);
}
void UFoliageType::M_SetDistributionSeed(const int32_t& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of MaxInitialSeedOffset
// Declaration: float MaxInitialSeedOffset
float UFoliageType::M_GetMaxInitialSeedOffset() const {
	return Read<float>((byte*)this + 748);
}
float* UFoliageType::M_PtrGetMaxInitialSeedOffset() {
	return reinterpret_cast<float*>((byte*)this + 748);
}
void UFoliageType::M_SetMaxInitialSeedOffset(const float& value) {
	Write((byte*)this + 748, value);
}
// Member Getter and Setter of bCanGrowInShade
// Declaration: bool bCanGrowInShade
bool UFoliageType::M_GetbCanGrowInShade() const {
	return Read<bool>((byte*)this + 752);
}
bool* UFoliageType::M_PtrGetbCanGrowInShade() {
	return reinterpret_cast<bool*>((byte*)this + 752);
}
void UFoliageType::M_SetbCanGrowInShade(const bool& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of bSpawnsInShade
// Declaration: bool bSpawnsInShade
bool UFoliageType::M_GetbSpawnsInShade() const {
	return Read<bool>((byte*)this + 753);
}
bool* UFoliageType::M_PtrGetbSpawnsInShade() {
	return reinterpret_cast<bool*>((byte*)this + 753);
}
void UFoliageType::M_SetbSpawnsInShade(const bool& value) {
	Write((byte*)this + 753, value);
}
// Member Getter and Setter of MaxInitialAge
// Declaration: float MaxInitialAge
float UFoliageType::M_GetMaxInitialAge() const {
	return Read<float>((byte*)this + 756);
}
float* UFoliageType::M_PtrGetMaxInitialAge() {
	return reinterpret_cast<float*>((byte*)this + 756);
}
void UFoliageType::M_SetMaxInitialAge(const float& value) {
	Write((byte*)this + 756, value);
}
// Member Getter and Setter of MaxAge
// Declaration: float MaxAge
float UFoliageType::M_GetMaxAge() const {
	return Read<float>((byte*)this + 760);
}
float* UFoliageType::M_PtrGetMaxAge() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void UFoliageType::M_SetMaxAge(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of OverlapPriority
// Declaration: float OverlapPriority
float UFoliageType::M_GetOverlapPriority() const {
	return Read<float>((byte*)this + 764);
}
float* UFoliageType::M_PtrGetOverlapPriority() {
	return reinterpret_cast<float*>((byte*)this + 764);
}
void UFoliageType::M_SetOverlapPriority(const float& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of ProceduralScale
// Declaration: struct FFloatInterval ProceduralScale
struct FFloatInterval UFoliageType::M_GetProceduralScale() const {
	return Read<struct FFloatInterval>((byte*)this + 768);
}
struct FFloatInterval* UFoliageType::M_PtrGetProceduralScale() {
	return reinterpret_cast<struct FFloatInterval*>((byte*)this + 768);
}
void UFoliageType::M_SetProceduralScale(const struct FFloatInterval& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of ScaleCurve
// Declaration: struct FRuntimeFloatCurve ScaleCurve
struct FRuntimeFloatCurve UFoliageType::M_GetScaleCurve() const {
	return Read<struct FRuntimeFloatCurve>((byte*)this + 776);
}
struct FRuntimeFloatCurve* UFoliageType::M_PtrGetScaleCurve() {
	return reinterpret_cast<struct FRuntimeFloatCurve*>((byte*)this + 776);
}
void UFoliageType::M_SetScaleCurve(const struct FRuntimeFloatCurve& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of ChangeCount
// Declaration: int32_t ChangeCount
int32_t UFoliageType::M_GetChangeCount() const {
	return Read<int32_t>((byte*)this + 912);
}
int32_t* UFoliageType::M_PtrGetChangeCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 912);
}
void UFoliageType::M_SetChangeCount(const int32_t& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of ReapplyDensity
// Declaration: unsigned char ReapplyDensity : 1
unsigned char UFoliageType::M_GetReapplyDensity() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyDensity() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyDensity(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyRadius
// Declaration: unsigned char ReapplyRadius : 1
unsigned char UFoliageType::M_GetReapplyRadius() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyRadius() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyRadius(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyAlignToNormal
// Declaration: unsigned char ReapplyAlignToNormal : 1
unsigned char UFoliageType::M_GetReapplyAlignToNormal() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyAlignToNormal() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyAlignToNormal(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyRandomYaw
// Declaration: unsigned char ReapplyRandomYaw : 1
unsigned char UFoliageType::M_GetReapplyRandomYaw() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyRandomYaw() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyRandomYaw(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyScaling
// Declaration: unsigned char ReapplyScaling : 1
unsigned char UFoliageType::M_GetReapplyScaling() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyScaling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyScaling(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyScaleX
// Declaration: unsigned char ReapplyScaleX : 1
unsigned char UFoliageType::M_GetReapplyScaleX() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyScaleX() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyScaleX(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyScaleY
// Declaration: unsigned char ReapplyScaleY : 1
unsigned char UFoliageType::M_GetReapplyScaleY() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyScaleY() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyScaleY(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyScaleZ
// Declaration: unsigned char ReapplyScaleZ : 1
unsigned char UFoliageType::M_GetReapplyScaleZ() const {
	return Read<unsigned char>((byte*)this + 916);
}
unsigned char* UFoliageType::M_PtrGetReapplyScaleZ() {
	return reinterpret_cast<unsigned char*>((byte*)this + 916);
}
void UFoliageType::M_SetReapplyScaleZ(const unsigned char& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ReapplyRandomPitchAngle
// Declaration: unsigned char ReapplyRandomPitchAngle : 1
unsigned char UFoliageType::M_GetReapplyRandomPitchAngle() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyRandomPitchAngle() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyRandomPitchAngle(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of ReapplyGroundSlope
// Declaration: unsigned char ReapplyGroundSlope : 1
unsigned char UFoliageType::M_GetReapplyGroundSlope() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyGroundSlope() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyGroundSlope(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of ReapplyHeight
// Declaration: unsigned char ReapplyHeight : 1
unsigned char UFoliageType::M_GetReapplyHeight() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyHeight() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyHeight(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of ReapplyLandscapeLayers
// Declaration: unsigned char ReapplyLandscapeLayers : 1
unsigned char UFoliageType::M_GetReapplyLandscapeLayers() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyLandscapeLayers() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyLandscapeLayers(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of ReapplyZOffset
// Declaration: unsigned char ReapplyZOffset : 1
unsigned char UFoliageType::M_GetReapplyZOffset() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyZOffset() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyZOffset(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of ReapplyCollisionWithWorld
// Declaration: unsigned char ReapplyCollisionWithWorld : 1
unsigned char UFoliageType::M_GetReapplyCollisionWithWorld() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyCollisionWithWorld() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyCollisionWithWorld(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of ReapplyVertexColorMask
// Declaration: unsigned char ReapplyVertexColorMask : 1
unsigned char UFoliageType::M_GetReapplyVertexColorMask() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetReapplyVertexColorMask() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetReapplyVertexColorMask(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of bEnableDensityScaling
// Declaration: unsigned char bEnableDensityScaling : 1
unsigned char UFoliageType::M_GetbEnableDensityScaling() const {
	return Read<unsigned char>((byte*)this + 917);
}
unsigned char* UFoliageType::M_PtrGetbEnableDensityScaling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 917);
}
void UFoliageType::M_SetbEnableDensityScaling(const unsigned char& value) {
	Write((byte*)this + 917, value);
}
// Member Getter and Setter of bEnableDiscardOnLoad
// Declaration: unsigned char bEnableDiscardOnLoad : 1
unsigned char UFoliageType::M_GetbEnableDiscardOnLoad() const {
	return Read<unsigned char>((byte*)this + 918);
}
unsigned char* UFoliageType::M_PtrGetbEnableDiscardOnLoad() {
	return reinterpret_cast<unsigned char*>((byte*)this + 918);
}
void UFoliageType::M_SetbEnableDiscardOnLoad(const unsigned char& value) {
	Write((byte*)this + 918, value);
}
// Member Getter and Setter of RuntimeVirtualTextures
// Declaration: TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures
TArray<class URuntimeVirtualTexture*> UFoliageType::M_GetRuntimeVirtualTextures() const {
	return Read<TArray<class URuntimeVirtualTexture*>>((byte*)this + 920);
}
TArray<class URuntimeVirtualTexture*>* UFoliageType::M_PtrGetRuntimeVirtualTextures() {
	return reinterpret_cast<TArray<class URuntimeVirtualTexture*>*>((byte*)this + 920);
}
void UFoliageType::M_SetRuntimeVirtualTextures(const TArray<class URuntimeVirtualTexture*>& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of VirtualTextureCullMips
// Declaration: int32_t VirtualTextureCullMips
int32_t UFoliageType::M_GetVirtualTextureCullMips() const {
	return Read<int32_t>((byte*)this + 936);
}
int32_t* UFoliageType::M_PtrGetVirtualTextureCullMips() {
	return reinterpret_cast<int32_t*>((byte*)this + 936);
}
void UFoliageType::M_SetVirtualTextureCullMips(const int32_t& value) {
	Write((byte*)this + 936, value);
}
// Member Getter and Setter of VirtualTextureRenderPassType
// Declaration: ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType
ERuntimeVirtualTextureMainPassType UFoliageType::M_GetVirtualTextureRenderPassType() const {
	return Read<ERuntimeVirtualTextureMainPassType>((byte*)this + 940);
}
ERuntimeVirtualTextureMainPassType* UFoliageType::M_PtrGetVirtualTextureRenderPassType() {
	return reinterpret_cast<ERuntimeVirtualTextureMainPassType*>((byte*)this + 940);
}
void UFoliageType::M_SetVirtualTextureRenderPassType(const ERuntimeVirtualTextureMainPassType& value) {
	Write((byte*)this + 940, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}