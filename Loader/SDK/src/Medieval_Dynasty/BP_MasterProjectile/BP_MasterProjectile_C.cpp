#include "../SDK.h"
#include "BP_MasterProjectile_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_MasterProjectile_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_MasterProjectile_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_MasterProjectile_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of PerceptionStimuliSource
// Declaration: class UPerceptionStimuliSourceComponent* PerceptionStimuliSource
class UPerceptionStimuliSourceComponent* ABP_MasterProjectile_C::M_GetPerceptionStimuliSource() const {
	return Read<class UPerceptionStimuliSourceComponent*>((byte*)this + 552);
}
class UPerceptionStimuliSourceComponent** ABP_MasterProjectile_C::M_PtrGetPerceptionStimuliSource() {
	return reinterpret_cast<class UPerceptionStimuliSourceComponent**>((byte*)this + 552);
}
void ABP_MasterProjectile_C::M_SetPerceptionStimuliSource(const class UPerceptionStimuliSourceComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of Audio
// Declaration: class UAudioComponent* Audio
class UAudioComponent* ABP_MasterProjectile_C::M_GetAudio() const {
	return Read<class UAudioComponent*>((byte*)this + 560);
}
class UAudioComponent** ABP_MasterProjectile_C::M_PtrGetAudio() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 560);
}
void ABP_MasterProjectile_C::M_SetAudio(const class UAudioComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of Mesh
// Declaration: class UStaticMeshComponent* Mesh
class UStaticMeshComponent* ABP_MasterProjectile_C::M_GetMesh() const {
	return Read<class UStaticMeshComponent*>((byte*)this + 568);
}
class UStaticMeshComponent** ABP_MasterProjectile_C::M_PtrGetMesh() {
	return reinterpret_cast<class UStaticMeshComponent**>((byte*)this + 568);
}
void ABP_MasterProjectile_C::M_SetMesh(const class UStaticMeshComponent*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of ProjectileMovement
// Declaration: class UProjectileMovementComponent* ProjectileMovement
class UProjectileMovementComponent* ABP_MasterProjectile_C::M_GetProjectileMovement() const {
	return Read<class UProjectileMovementComponent*>((byte*)this + 576);
}
class UProjectileMovementComponent** ABP_MasterProjectile_C::M_PtrGetProjectileMovement() {
	return reinterpret_cast<class UProjectileMovementComponent**>((byte*)this + 576);
}
void ABP_MasterProjectile_C::M_SetProjectileMovement(const class UProjectileMovementComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of DamageTypeClass
// Declaration: class UDamageType* DamageTypeClass
class UDamageType* ABP_MasterProjectile_C::M_GetDamageTypeClass() const {
	return Read<class UDamageType*>((byte*)this + 584);
}
class UDamageType** ABP_MasterProjectile_C::M_PtrGetDamageTypeClass() {
	return reinterpret_cast<class UDamageType**>((byte*)this + 584);
}
void ABP_MasterProjectile_C::M_SetDamageTypeClass(const class UDamageType*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of InitialSpeed
// Declaration: float InitialSpeed
float ABP_MasterProjectile_C::M_GetInitialSpeed() const {
	return Read<float>((byte*)this + 592);
}
float* ABP_MasterProjectile_C::M_PtrGetInitialSpeed() {
	return reinterpret_cast<float*>((byte*)this + 592);
}
void ABP_MasterProjectile_C::M_SetInitialSpeed(const float& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of LifeTime
// Declaration: float LifeTime
float ABP_MasterProjectile_C::M_GetLifeTime() const {
	return Read<float>((byte*)this + 596);
}
float* ABP_MasterProjectile_C::M_PtrGetLifeTime() {
	return reinterpret_cast<float*>((byte*)this + 596);
}
void ABP_MasterProjectile_C::M_SetLifeTime(const float& value) {
	Write((byte*)this + 596, value);
}
// Member Getter and Setter of TraceRadius
// Declaration: float TraceRadius
float ABP_MasterProjectile_C::M_GetTraceRadius() const {
	return Read<float>((byte*)this + 600);
}
float* ABP_MasterProjectile_C::M_PtrGetTraceRadius() {
	return reinterpret_cast<float*>((byte*)this + 600);
}
void ABP_MasterProjectile_C::M_SetTraceRadius(const float& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of IgnoredCollisionProfileNames
// Declaration: TArray<struct FName> IgnoredCollisionProfileNames
TArray<struct FName> ABP_MasterProjectile_C::M_GetIgnoredCollisionProfileNames() const {
	return Read<TArray<struct FName>>((byte*)this + 608);
}
TArray<struct FName>* ABP_MasterProjectile_C::M_PtrGetIgnoredCollisionProfileNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 608);
}
void ABP_MasterProjectile_C::M_SetIgnoredCollisionProfileNames(const TArray<struct FName>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of IsActivatingMeshCollisions
// Declaration: bool IsActivatingMeshCollisions
bool ABP_MasterProjectile_C::M_GetIsActivatingMeshCollisions() const {
	return Read<bool>((byte*)this + 624);
}
bool* ABP_MasterProjectile_C::M_PtrGetIsActivatingMeshCollisions() {
	return reinterpret_cast<bool*>((byte*)this + 624);
}
void ABP_MasterProjectile_C::M_SetIsActivatingMeshCollisions(const bool& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of TracePointSocketName
// Declaration: struct FName TracePointSocketName
struct FName ABP_MasterProjectile_C::M_GetTracePointSocketName() const {
	return Read<struct FName>((byte*)this + 628);
}
struct FName* ABP_MasterProjectile_C::M_PtrGetTracePointSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 628);
}
void ABP_MasterProjectile_C::M_SetTracePointSocketName(const struct FName& value) {
	Write((byte*)this + 628, value);
}
// Member Getter and Setter of TraceStartLocation
// Declaration: struct FVector TraceStartLocation
struct FVector ABP_MasterProjectile_C::M_GetTraceStartLocation() const {
	return Read<struct FVector>((byte*)this + 636);
}
struct FVector* ABP_MasterProjectile_C::M_PtrGetTraceStartLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 636);
}
void ABP_MasterProjectile_C::M_SetTraceStartLocation(const struct FVector& value) {
	Write((byte*)this + 636, value);
}
// Member Getter and Setter of TraceEndLocation
// Declaration: struct FVector TraceEndLocation
struct FVector ABP_MasterProjectile_C::M_GetTraceEndLocation() const {
	return Read<struct FVector>((byte*)this + 648);
}
struct FVector* ABP_MasterProjectile_C::M_PtrGetTraceEndLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 648);
}
void ABP_MasterProjectile_C::M_SetTraceEndLocation(const struct FVector& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of ActorsToIgnore
// Declaration: TArray<class AActor*> ActorsToIgnore
TArray<class AActor*> ABP_MasterProjectile_C::M_GetActorsToIgnore() const {
	return Read<TArray<class AActor*>>((byte*)this + 664);
}
TArray<class AActor*>* ABP_MasterProjectile_C::M_PtrGetActorsToIgnore() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 664);
}
void ABP_MasterProjectile_C::M_SetActorsToIgnore(const TArray<class AActor*>& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of Item
// Declaration: struct FDataTableRowHandle Item
struct FDataTableRowHandle ABP_MasterProjectile_C::M_GetItem() const {
	return Read<struct FDataTableRowHandle>((byte*)this + 680);
}
struct FDataTableRowHandle* ABP_MasterProjectile_C::M_PtrGetItem() {
	return reinterpret_cast<struct FDataTableRowHandle*>((byte*)this + 680);
}
void ABP_MasterProjectile_C::M_SetItem(const struct FDataTableRowHandle& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of ItemUnpoisoned
// Declaration: struct FDataTableRowHandle ItemUnpoisoned
struct FDataTableRowHandle ABP_MasterProjectile_C::M_GetItemUnpoisoned() const {
	return Read<struct FDataTableRowHandle>((byte*)this + 696);
}
struct FDataTableRowHandle* ABP_MasterProjectile_C::M_PtrGetItemUnpoisoned() {
	return reinterpret_cast<struct FDataTableRowHandle*>((byte*)this + 696);
}
void ABP_MasterProjectile_C::M_SetItemUnpoisoned(const struct FDataTableRowHandle& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of ItemHP
// Declaration: float ItemHP
float ABP_MasterProjectile_C::M_GetItemHP() const {
	return Read<float>((byte*)this + 712);
}
float* ABP_MasterProjectile_C::M_PtrGetItemHP() {
	return reinterpret_cast<float*>((byte*)this + 712);
}
void ABP_MasterProjectile_C::M_SetItemHP(const float& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of InitialLocation
// Declaration: struct FVector InitialLocation
struct FVector ABP_MasterProjectile_C::M_GetInitialLocation() const {
	return Read<struct FVector>((byte*)this + 716);
}
struct FVector* ABP_MasterProjectile_C::M_PtrGetInitialLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 716);
}
void ABP_MasterProjectile_C::M_SetInitialLocation(const struct FVector& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of HitLocation
// Declaration: struct FVector HitLocation
struct FVector ABP_MasterProjectile_C::M_GetHitLocation() const {
	return Read<struct FVector>((byte*)this + 728);
}
struct FVector* ABP_MasterProjectile_C::M_PtrGetHitLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 728);
}
void ABP_MasterProjectile_C::M_SetHitLocation(const struct FVector& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of PullPercent
// Declaration: float PullPercent
float ABP_MasterProjectile_C::M_GetPullPercent() const {
	return Read<float>((byte*)this + 740);
}
float* ABP_MasterProjectile_C::M_PtrGetPullPercent() {
	return reinterpret_cast<float*>((byte*)this + 740);
}
void ABP_MasterProjectile_C::M_SetPullPercent(const float& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of ToolDamage
// Declaration: float ToolDamage
float ABP_MasterProjectile_C::M_GetToolDamage() const {
	return Read<float>((byte*)this + 744);
}
float* ABP_MasterProjectile_C::M_PtrGetToolDamage() {
	return reinterpret_cast<float*>((byte*)this + 744);
}
void ABP_MasterProjectile_C::M_SetToolDamage(const float& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of UseDestroyChance
// Declaration: bool UseDestroyChance
bool ABP_MasterProjectile_C::M_GetUseDestroyChance() const {
	return Read<bool>((byte*)this + 748);
}
bool* ABP_MasterProjectile_C::M_PtrGetUseDestroyChance() {
	return reinterpret_cast<bool*>((byte*)this + 748);
}
void ABP_MasterProjectile_C::M_SetUseDestroyChance(const bool& value) {
	Write((byte*)this + 748, value);
}
// Member Getter and Setter of ChanceToDestroyOnHit
// Declaration: float ChanceToDestroyOnHit
float ABP_MasterProjectile_C::M_GetChanceToDestroyOnHit() const {
	return Read<float>((byte*)this + 752);
}
float* ABP_MasterProjectile_C::M_PtrGetChanceToDestroyOnHit() {
	return reinterpret_cast<float*>((byte*)this + 752);
}
void ABP_MasterProjectile_C::M_SetChanceToDestroyOnHit(const float& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of CausesBleeding
// Declaration: bool CausesBleeding
bool ABP_MasterProjectile_C::M_GetCausesBleeding() const {
	return Read<bool>((byte*)this + 756);
}
bool* ABP_MasterProjectile_C::M_PtrGetCausesBleeding() {
	return reinterpret_cast<bool*>((byte*)this + 756);
}
void ABP_MasterProjectile_C::M_SetCausesBleeding(const bool& value) {
	Write((byte*)this + 756, value);
}
// Member Getter and Setter of BleedDamage
// Declaration: float BleedDamage
float ABP_MasterProjectile_C::M_GetBleedDamage() const {
	return Read<float>((byte*)this + 760);
}
float* ABP_MasterProjectile_C::M_PtrGetBleedDamage() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void ABP_MasterProjectile_C::M_SetBleedDamage(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of BleedDuration
// Declaration: float BleedDuration
float ABP_MasterProjectile_C::M_GetBleedDuration() const {
	return Read<float>((byte*)this + 764);
}
float* ABP_MasterProjectile_C::M_PtrGetBleedDuration() {
	return reinterpret_cast<float*>((byte*)this + 764);
}
void ABP_MasterProjectile_C::M_SetBleedDuration(const float& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of AlwaysBounceOffTags
// Declaration: TArray<struct FName> AlwaysBounceOffTags
TArray<struct FName> ABP_MasterProjectile_C::M_GetAlwaysBounceOffTags() const {
	return Read<TArray<struct FName>>((byte*)this + 768);
}
TArray<struct FName>* ABP_MasterProjectile_C::M_PtrGetAlwaysBounceOffTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 768);
}
void ABP_MasterProjectile_C::M_SetAlwaysBounceOffTags(const TArray<struct FName>& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of DestroyPreventionTags
// Declaration: TArray<struct FName> DestroyPreventionTags
TArray<struct FName> ABP_MasterProjectile_C::M_GetDestroyPreventionTags() const {
	return Read<TArray<struct FName>>((byte*)this + 784);
}
TArray<struct FName>* ABP_MasterProjectile_C::M_PtrGetDestroyPreventionTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 784);
}
void ABP_MasterProjectile_C::M_SetDestroyPreventionTags(const TArray<struct FName>& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_MasterProjectile_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 800);
}
TEnumAsByte<E_Ownership>* ABP_MasterProjectile_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 800);
}
void ABP_MasterProjectile_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of HasAppliedDamage
// Declaration: bool HasAppliedDamage
bool ABP_MasterProjectile_C::M_GetHasAppliedDamage() const {
	return Read<bool>((byte*)this + 801);
}
bool* ABP_MasterProjectile_C::M_PtrGetHasAppliedDamage() {
	return reinterpret_cast<bool*>((byte*)this + 801);
}
void ABP_MasterProjectile_C::M_SetHasAppliedDamage(const bool& value) {
	Write((byte*)this + 801, value);
}
// Member Getter and Setter of ProjectileGravityScale
// Declaration: float ProjectileGravityScale
float ABP_MasterProjectile_C::M_GetProjectileGravityScale() const {
	return Read<float>((byte*)this + 804);
}
float* ABP_MasterProjectile_C::M_PtrGetProjectileGravityScale() {
	return reinterpret_cast<float*>((byte*)this + 804);
}
void ABP_MasterProjectile_C::M_SetProjectileGravityScale(const float& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of ProjectileTypeGravityModifier
// Declaration: float ProjectileTypeGravityModifier
float ABP_MasterProjectile_C::M_GetProjectileTypeGravityModifier() const {
	return Read<float>((byte*)this + 808);
}
float* ABP_MasterProjectile_C::M_PtrGetProjectileTypeGravityModifier() {
	return reinterpret_cast<float*>((byte*)this + 808);
}
void ABP_MasterProjectile_C::M_SetProjectileTypeGravityModifier(const float& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool ABP_MasterProjectile_C::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 812);
}
bool* ABP_MasterProjectile_C::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 812);
}
void ABP_MasterProjectile_C::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of AttachChance
// Declaration: float AttachChance
float ABP_MasterProjectile_C::M_GetAttachChance() const {
	return Read<float>((byte*)this + 816);
}
float* ABP_MasterProjectile_C::M_PtrGetAttachChance() {
	return reinterpret_cast<float*>((byte*)this + 816);
}
void ABP_MasterProjectile_C::M_SetAttachChance(const float& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of SurfacePhysicsSimulation
// Declaration: TMap<TEnumAsByte<EPhysicalSurface>, bool> SurfacePhysicsSimulation
TMap<TEnumAsByte<EPhysicalSurface>, bool> ABP_MasterProjectile_C::M_GetSurfacePhysicsSimulation() const {
	return Read<TMap<TEnumAsByte<EPhysicalSurface>, bool>>((byte*)this + 824);
}
TMap<TEnumAsByte<EPhysicalSurface>, bool>* ABP_MasterProjectile_C::M_PtrGetSurfacePhysicsSimulation() {
	return reinterpret_cast<TMap<TEnumAsByte<EPhysicalSurface>, bool>*>((byte*)this + 824);
}
void ABP_MasterProjectile_C::M_SetSurfacePhysicsSimulation(const TMap<TEnumAsByte<EPhysicalSurface>, bool>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of OnPointDamageApplied
// Declaration: TAssetPtr<class FOnPointDamageApplied__DelegateSignature> OnPointDamageApplied
TAssetPtr<class FOnPointDamageApplied__DelegateSignature> ABP_MasterProjectile_C::M_GetOnPointDamageApplied() const {
	return Read<TAssetPtr<class FOnPointDamageApplied__DelegateSignature>>((byte*)this + 904);
}
TAssetPtr<class FOnPointDamageApplied__DelegateSignature>* ABP_MasterProjectile_C::M_PtrGetOnPointDamageApplied() {
	return reinterpret_cast<TAssetPtr<class FOnPointDamageApplied__DelegateSignature>*>((byte*)this + 904);
}
void ABP_MasterProjectile_C::M_SetOnPointDamageApplied(const TAssetPtr<class FOnPointDamageApplied__DelegateSignature>& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of MaxDamageSpeed
// Declaration: float MaxDamageSpeed
float ABP_MasterProjectile_C::M_GetMaxDamageSpeed() const {
	return Read<float>((byte*)this + 920);
}
float* ABP_MasterProjectile_C::M_PtrGetMaxDamageSpeed() {
	return reinterpret_cast<float*>((byte*)this + 920);
}
void ABP_MasterProjectile_C::M_SetMaxDamageSpeed(const float& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of SC_Hit
// Declaration: class USoundBase* SC_Hit
class USoundBase* ABP_MasterProjectile_C::M_GetSC_Hit() const {
	return Read<class USoundBase*>((byte*)this + 928);
}
class USoundBase** ABP_MasterProjectile_C::M_PtrGetSC_Hit() {
	return reinterpret_cast<class USoundBase**>((byte*)this + 928);
}
void ABP_MasterProjectile_C::M_SetSC_Hit(const class USoundBase*& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of FX_Hit
// Declaration: class UNiagaraSystem* FX_Hit
class UNiagaraSystem* ABP_MasterProjectile_C::M_GetFX_Hit() const {
	return Read<class UNiagaraSystem*>((byte*)this + 936);
}
class UNiagaraSystem** ABP_MasterProjectile_C::M_PtrGetFX_Hit() {
	return reinterpret_cast<class UNiagaraSystem**>((byte*)this + 936);
}
void ABP_MasterProjectile_C::M_SetFX_Hit(const class UNiagaraSystem*& value) {
	Write((byte*)this + 936, value);
}
// Member Getter and Setter of EffectsIntensity
// Declaration: float EffectsIntensity
float ABP_MasterProjectile_C::M_GetEffectsIntensity() const {
	return Read<float>((byte*)this + 944);
}
float* ABP_MasterProjectile_C::M_PtrGetEffectsIntensity() {
	return reinterpret_cast<float*>((byte*)this + 944);
}
void ABP_MasterProjectile_C::M_SetEffectsIntensity(const float& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of OwnerController
// Declaration: class AController* OwnerController
class AController* ABP_MasterProjectile_C::M_GetOwnerController() const {
	return Read<class AController*>((byte*)this + 952);
}
class AController** ABP_MasterProjectile_C::M_PtrGetOwnerController() {
	return reinterpret_cast<class AController**>((byte*)this + 952);
}
void ABP_MasterProjectile_C::M_SetOwnerController(const class AController*& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of ProjectileDamage
// Declaration: float ProjectileDamage
float ABP_MasterProjectile_C::M_GetProjectileDamage() const {
	return Read<float>((byte*)this + 960);
}
float* ABP_MasterProjectile_C::M_PtrGetProjectileDamage() {
	return reinterpret_cast<float*>((byte*)this + 960);
}
void ABP_MasterProjectile_C::M_SetProjectileDamage(const float& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of ProjectileHalfLength
// Declaration: float ProjectileHalfLength
float ABP_MasterProjectile_C::M_GetProjectileHalfLength() const {
	return Read<float>((byte*)this + 964);
}
float* ABP_MasterProjectile_C::M_PtrGetProjectileHalfLength() {
	return reinterpret_cast<float*>((byte*)this + 964);
}
void ABP_MasterProjectile_C::M_SetProjectileHalfLength(const float& value) {
	Write((byte*)this + 964, value);
}
// Member Getter and Setter of TrailParticleSystem
// Declaration: class UParticleSystemComponent* TrailParticleSystem
class UParticleSystemComponent* ABP_MasterProjectile_C::M_GetTrailParticleSystem() const {
	return Read<class UParticleSystemComponent*>((byte*)this + 968);
}
class UParticleSystemComponent** ABP_MasterProjectile_C::M_PtrGetTrailParticleSystem() {
	return reinterpret_cast<class UParticleSystemComponent**>((byte*)this + 968);
}
void ABP_MasterProjectile_C::M_SetTrailParticleSystem(const class UParticleSystemComponent*& value) {
	Write((byte*)this + 968, value);
}
// Member Getter and Setter of TraceForwardArea
// Declaration: float TraceForwardArea
float ABP_MasterProjectile_C::M_GetTraceForwardArea() const {
	return Read<float>((byte*)this + 976);
}
float* ABP_MasterProjectile_C::M_PtrGetTraceForwardArea() {
	return reinterpret_cast<float*>((byte*)this + 976);
}
void ABP_MasterProjectile_C::M_SetTraceForwardArea(const float& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of ProjectileData
// Declaration: struct FST_ProjectileData ProjectileData
struct FST_ProjectileData ABP_MasterProjectile_C::M_GetProjectileData() const {
	return Read<struct FST_ProjectileData>((byte*)this + 984);
}
struct FST_ProjectileData* ABP_MasterProjectile_C::M_PtrGetProjectileData() {
	return reinterpret_cast<struct FST_ProjectileData*>((byte*)this + 984);
}
void ABP_MasterProjectile_C::M_SetProjectileData(const struct FST_ProjectileData& value) {
	Write((byte*)this + 984, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.OnPointDamageApplied__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::OnPointDamageApplied__DelegateSignature(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.OnPointDamageApplied__DelegateSignature");

	struct ABP_MasterProjectile_C_OnPointDamageApplied__DelegateSignature_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float appliedDamage;			//Offset: 8 | ElementSize: 4
		float ReceivedDamage;			//Offset: 12 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 184 | ElementSize: 8
	};
	ABP_MasterProjectile_C_OnPointDamageApplied__DelegateSignature_Params params;
	params.DamagedActor = DamagedActor;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::ExecuteUbergraph_BP_MasterProjectile(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile");

	struct ABP_MasterProjectile_C_ExecuteUbergraph_BP_MasterProjectile_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterProjectile_C_ExecuteUbergraph_BP_MasterProjectile_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitEffects_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnHitEffects_Multicast(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitEffects_Multicast");

	struct ABP_MasterProjectile_C_SpawnHitEffects_Multicast_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		float ReceivedDamage;			//Offset: 4 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 8 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 20 | ElementSize: 136
		class UDamageType* DamageTypeClass;			//Offset: 160 | ElementSize: 8
	};
	ABP_MasterProjectile_C_SpawnHitEffects_Multicast_Params params;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitEffects_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnHitEffects_Server(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitEffects_Server");

	struct ABP_MasterProjectile_C_SpawnHitEffects_Server_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		float ReceivedDamage;			//Offset: 4 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 8 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 20 | ElementSize: 136
		class UDamageType* DamageTypeClass;			//Offset: 160 | ElementSize: 8
	};
	ABP_MasterProjectile_C_SpawnHitEffects_Server_Params params;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveEndPlay");

	struct ABP_MasterProjectile_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterProjectile_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.DisableCollision_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::DisableCollision_Multicast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.DisableCollision_Multicast");

	struct ABP_MasterProjectile_C_DisableCollision_Multicast_Params {
	};
	ABP_MasterProjectile_C_DisableCollision_Multicast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveTick");

	struct ABP_MasterProjectile_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay");

	struct ABP_MasterProjectile_C_ReceiveBeginPlay_Params {
	};
	ABP_MasterProjectile_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.Initialize
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::Initialize() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.Initialize");

	struct ABP_MasterProjectile_C_Initialize_Params {
	};
	ABP_MasterProjectile_C_Initialize_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.Update
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::Update(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.Update");

	struct ABP_MasterProjectile_C_Update_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterProjectile_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateEffects
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::UpdateEffects() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateEffects");

	struct ABP_MasterProjectile_C_UpdateEffects_Params {
	};
	ABP_MasterProjectile_C_UpdateEffects_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateMovement
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::UpdateMovement(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateMovement");

	struct ABP_MasterProjectile_C_UpdateMovement_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterProjectile_C_UpdateMovement_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.TryHit
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: HitVelocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldSpawnItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnedItem	Type: class ABP_MasterItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasHit	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HasImpaledItem	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterProjectile_C::TryHit(struct FHitResult Hit, struct FVector HitVelocity, bool ShouldSpawnItem, class ABP_MasterItem_C** SpawnedItem, bool* HasHit, bool* HasImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.TryHit");

	struct ABP_MasterProjectile_C_TryHit_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		struct FVector HitVelocity;			//Offset: 136 | ElementSize: 12
		bool ShouldSpawnItem;			//Offset: 148 | ElementSize: 1
		class ABP_MasterItem_C* SpawnedItem;			//Offset: 152 | ElementSize: 8
		bool HasHit;			//Offset: 160 | ElementSize: 1
		bool HasImpaledItem;			//Offset: 161 | ElementSize: 1
	};
	ABP_MasterProjectile_C_TryHit_Params params;
	params.Hit = Hit;
	params.HitVelocity = HitVelocity;
	params.ShouldSpawnItem = ShouldSpawnItem;

	UObject::ProcessEvent(fn, &params);
	if (SpawnedItem != nullptr)
		*SpawnedItem = params.SpawnedItem;
	if (HasHit != nullptr)
		*HasHit = params.HasHit;
	if (HasImpaledItem != nullptr)
		*HasImpaledItem = params.HasImpaledItem;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnItem
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitNormal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitPhysicalMaterial	Type: class UPhysicalMaterial*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitVelocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnedItem	Type: class ABP_MasterItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasImpaledItem	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnItem(struct FVector HitLocation, struct FVector HitNormal, class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FName HitBoneName, class UPhysicalMaterial* HitPhysicalMaterial, struct FVector HitVelocity, class ABP_MasterItem_C** SpawnedItem, bool* HasImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnItem");

	struct ABP_MasterProjectile_C_SpawnItem_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 12 | ElementSize: 12
		class AActor* HitActor;			//Offset: 24 | ElementSize: 8
		class UPrimitiveComponent* HitComponent;			//Offset: 32 | ElementSize: 8
		struct FName HitBoneName;			//Offset: 40 | ElementSize: 8
		class UPhysicalMaterial* HitPhysicalMaterial;			//Offset: 48 | ElementSize: 8
		struct FVector HitVelocity;			//Offset: 56 | ElementSize: 12
		class ABP_MasterItem_C* SpawnedItem;			//Offset: 72 | ElementSize: 8
		bool HasImpaledItem;			//Offset: 80 | ElementSize: 1
	};
	ABP_MasterProjectile_C_SpawnItem_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;
	params.HitBoneName = HitBoneName;
	params.HitPhysicalMaterial = HitPhysicalMaterial;
	params.HitVelocity = HitVelocity;

	UObject::ProcessEvent(fn, &params);
	if (SpawnedItem != nullptr)
		*SpawnedItem = params.SpawnedItem;
	if (HasImpaledItem != nullptr)
		*HasImpaledItem = params.HasImpaledItem;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.GetBoneDamageMultiplier
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::GetBoneDamageMultiplier(struct FName HitBoneName, float* DamageMultiplier)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.GetBoneDamageMultiplier");

	struct ABP_MasterProjectile_C_GetBoneDamageMultiplier_Params {
		struct FName HitBoneName;			//Offset: 0 | ElementSize: 8
		float DamageMultiplier;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterProjectile_C_GetBoneDamageMultiplier_Params params;
	params.HitBoneName = HitBoneName;

	UObject::ProcessEvent(fn, &params);
	if (DamageMultiplier != nullptr)
		*DamageMultiplier = params.DamageMultiplier;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.HasDestroyPreventionTag
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterProjectile_C::HasDestroyPreventionTag(class AActor* Actor, bool* Success)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.HasDestroyPreventionTag");

	struct ABP_MasterProjectile_C_HasDestroyPreventionTag_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterProjectile_C_HasDestroyPreventionTag_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.HasAlwaysBounceOffTag
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Component	Type: class UActorComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasAlwaysBounceOffTag	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterProjectile_C::HasAlwaysBounceOffTag(class AActor* Actor, class UActorComponent* Component, bool* HasAlwaysBounceOffTag)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.HasAlwaysBounceOffTag");

	struct ABP_MasterProjectile_C_HasAlwaysBounceOffTag_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		class UActorComponent* Component;			//Offset: 8 | ElementSize: 8
		bool HasAlwaysBounceOffTag;			//Offset: 16 | ElementSize: 1
	};
	ABP_MasterProjectile_C_HasAlwaysBounceOffTag_Params params;
	params.Actor = Actor;
	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
	if (HasAlwaysBounceOffTag != nullptr)
		*HasAlwaysBounceOffTag = params.HasAlwaysBounceOffTag;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.ShouldSimulatePhysics
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: HitActor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UActorComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitSurfaceType	Type: TEnumAsByte<EPhysicalSurface>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ImpaleDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldSimulatePhysics	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterProjectile_C::ShouldSimulatePhysics(class AActor* HitActor, class UActorComponent* HitComponent, TEnumAsByte<EPhysicalSurface> HitSurfaceType, float ImpaleDistance, bool* ShouldSimulatePhysics)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ShouldSimulatePhysics");

	struct ABP_MasterProjectile_C_ShouldSimulatePhysics_Params {
		class AActor* HitActor;			//Offset: 0 | ElementSize: 8
		class UActorComponent* HitComponent;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<EPhysicalSurface> HitSurfaceType;			//Offset: 16 | ElementSize: 1
		float ImpaleDistance;			//Offset: 20 | ElementSize: 4
		bool ShouldSimulatePhysics;			//Offset: 24 | ElementSize: 1
	};
	ABP_MasterProjectile_C_ShouldSimulatePhysics_Params params;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;
	params.HitSurfaceType = HitSurfaceType;
	params.ImpaleDistance = ImpaleDistance;

	UObject::ProcessEvent(fn, &params);
	if (ShouldSimulatePhysics != nullptr)
		*ShouldSimulatePhysics = params.ShouldSimulatePhysics;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.TryApplyPoison
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorToPoison	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::TryApplyPoison(class AActor* ActorToPoison) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.TryApplyPoison");

	struct ABP_MasterProjectile_C_TryApplyPoison_Params {
		class AActor* ActorToPoison;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterProjectile_C_TryApplyPoison_Params params;
	params.ActorToPoison = ActorToPoison;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.CalculateDamage
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: HitVelocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_MasterProjectile_C::CalculateDamage(const struct FHitResult& Hit, struct FVector HitVelocity)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.CalculateDamage");

	struct ABP_MasterProjectile_C_CalculateDamage_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		struct FVector HitVelocity;			//Offset: 136 | ElementSize: 12
		float ReturnValue;			//Offset: 148 | ElementSize: 4
	};
	ABP_MasterProjectile_C_CalculateDamage_Params params;
	params.Hit = Hit;
	params.HitVelocity = HitVelocity;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.IsActorDead
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_MasterProjectile_C::IsActorDead(class AActor* Actor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.IsActorDead");

	struct ABP_MasterProjectile_C_IsActorDead_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterProjectile_C_IsActorDead_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnFishItem
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitFishActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FishAttachItem	Type: class ABP_MasterItem_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnFishItem(class AActor* HitFishActor, class ABP_MasterItem_C* FishAttachItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnFishItem");

	struct ABP_MasterProjectile_C_SpawnFishItem_Params {
		class AActor* HitFishActor;			//Offset: 0 | ElementSize: 8
		class ABP_MasterItem_C* FishAttachItem;			//Offset: 8 | ElementSize: 8
	};
	ABP_MasterProjectile_C_SpawnFishItem_Params params;
	params.HitFishActor = HitFishActor;
	params.FishAttachItem = FishAttachItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.Trace
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::Trace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.Trace");

	struct ABP_MasterProjectile_C_Trace_Params {
	};
	ABP_MasterProjectile_C_Trace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.OnTraceNoCollision
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::OnTraceNoCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.OnTraceNoCollision");

	struct ABP_MasterProjectile_C_OnTraceNoCollision_Params {
	};
	ABP_MasterProjectile_C_OnTraceNoCollision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.StopIgnoringOwner
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::StopIgnoringOwner() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.StopIgnoringOwner");

	struct ABP_MasterProjectile_C_StopIgnoringOwner_Params {
	};
	ABP_MasterProjectile_C_StopIgnoringOwner_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.ActivateMeshCollisionsForNearbyActors
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
/////////////////////////////////////////////
void ABP_MasterProjectile_C::ActivateMeshCollisionsForNearbyActors()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ActivateMeshCollisionsForNearbyActors");

	struct ABP_MasterProjectile_C_ActivateMeshCollisionsForNearbyActors_Params {
	};
	ABP_MasterProjectile_C_ActivateMeshCollisionsForNearbyActors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.GetTracePointSocketLocation
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: TracePointSocketLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::GetTracePointSocketLocation(struct FVector* TracePointSocketLocation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.GetTracePointSocketLocation");

	struct ABP_MasterProjectile_C_GetTracePointSocketLocation_Params {
		struct FVector TracePointSocketLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_MasterProjectile_C_GetTracePointSocketLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TracePointSocketLocation != nullptr)
		*TracePointSocketLocation = params.TracePointSocketLocation;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitParticles
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnHitParticles(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, const struct FHitResult& Hit, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitParticles");

	struct ABP_MasterProjectile_C_SpawnHitParticles_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		float ReceivedDamage;			//Offset: 4 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 8 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 20 | ElementSize: 136
		class UDamageType* DamageTypeClass;			//Offset: 160 | ElementSize: 8
	};
	ABP_MasterProjectile_C_SpawnHitParticles_Params params;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSound
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnHitSound(float appliedDamage, float ReceivedDamage, const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitSound");

	struct ABP_MasterProjectile_C_SpawnHitSound_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		float ReceivedDamage;			//Offset: 4 | ElementSize: 4
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
	};
	ABP_MasterProjectile_C_SpawnHitSound_Params params;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitEffects
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: appliedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::SpawnHitEffects(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnHitEffects");

	struct ABP_MasterProjectile_C_SpawnHitEffects_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		float ReceivedDamage;			//Offset: 4 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 8 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 20 | ElementSize: 136
		class UDamageType* DamageTypeClass;			//Offset: 160 | ElementSize: 8
	};
	ABP_MasterProjectile_C_SpawnHitEffects_Params params;
	params.appliedDamage = appliedDamage;
	params.ReceivedDamage = ReceivedDamage;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.OverrideProjectileDamage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProjectileDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::OverrideProjectileDamage(float ProjectileDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.OverrideProjectileDamage");

	struct ABP_MasterProjectile_C_OverrideProjectileDamage_Params {
		float ProjectileDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterProjectile_C_OverrideProjectileDamage_Params params;
	params.ProjectileDamage = ProjectileDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.GetName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Name	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterProjectile_C::GetName(struct FName* Name)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.GetName");

	struct ABP_MasterProjectile_C_GetName_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterProjectile_C_GetName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
}

/////////////////////////////////////////////
// Function BP_MasterProjectile.BP_MasterProjectile_C.GetDisplayName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: DisplayName	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterProjectile_C::GetDisplayName(struct FText* DisplayName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.GetDisplayName");

	struct ABP_MasterProjectile_C_GetDisplayName_Params {
		struct FText DisplayName;			//Offset: 0 | ElementSize: 24
	};
	ABP_MasterProjectile_C_GetDisplayName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}

#pragma endregion
}