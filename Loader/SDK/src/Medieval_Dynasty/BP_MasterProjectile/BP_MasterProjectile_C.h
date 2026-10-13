#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C
// Super: Class Engine.Actor
// Size: 1000
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_MasterProjectile_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UPerceptionStimuliSourceComponent*	PerceptionStimuliSource;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UPerceptionStimuliSourceComponent* M_GetPerceptionStimuliSource() const;
	class UPerceptionStimuliSourceComponent** M_PtrGetPerceptionStimuliSource();
	void M_SetPerceptionStimuliSource(const class UPerceptionStimuliSourceComponent*& value);

	//class UAudioComponent*	Audio;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetAudio() const;
	class UAudioComponent** M_PtrGetAudio();
	void M_SetAudio(const class UAudioComponent*& value);

	//class UStaticMeshComponent*	Mesh;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UStaticMeshComponent* M_GetMesh() const;
	class UStaticMeshComponent** M_PtrGetMesh();
	void M_SetMesh(const class UStaticMeshComponent*& value);

	//class UProjectileMovementComponent*	ProjectileMovement;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UProjectileMovementComponent* M_GetProjectileMovement() const;
	class UProjectileMovementComponent** M_PtrGetProjectileMovement();
	void M_SetProjectileMovement(const class UProjectileMovementComponent*& value);

	//class UDamageType*	DamageTypeClass;		//Offset: 584	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UDamageType* M_GetDamageTypeClass() const;
	class UDamageType** M_PtrGetDamageTypeClass();
	void M_SetDamageTypeClass(const class UDamageType*& value);

	//float	InitialSpeed;		//Offset: 592	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetInitialSpeed() const;
	float* M_PtrGetInitialSpeed();
	void M_SetInitialSpeed(const float& value);

	//float	LifeTime;		//Offset: 596	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLifeTime() const;
	float* M_PtrGetLifeTime();
	void M_SetLifeTime(const float& value);

	//float	TraceRadius;		//Offset: 600	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTraceRadius() const;
	float* M_PtrGetTraceRadius();
	void M_SetTraceRadius(const float& value);

	//TArray<struct FName>	IgnoredCollisionProfileNames;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName> M_GetIgnoredCollisionProfileNames() const;
	TArray<struct FName>* M_PtrGetIgnoredCollisionProfileNames();
	void M_SetIgnoredCollisionProfileNames(const TArray<struct FName>& value);

	//bool	IsActivatingMeshCollisions;		//Offset: 624	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIsActivatingMeshCollisions() const;
	bool* M_PtrGetIsActivatingMeshCollisions();
	void M_SetIsActivatingMeshCollisions(const bool& value);

	//struct FName	TracePointSocketName;		//Offset: 628	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetTracePointSocketName() const;
	struct FName* M_PtrGetTracePointSocketName();
	void M_SetTracePointSocketName(const struct FName& value);

	//struct FVector	TraceStartLocation;		//Offset: 636	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetTraceStartLocation() const;
	struct FVector* M_PtrGetTraceStartLocation();
	void M_SetTraceStartLocation(const struct FVector& value);

	//struct FVector	TraceEndLocation;		//Offset: 648	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetTraceEndLocation() const;
	struct FVector* M_PtrGetTraceEndLocation();
	void M_SetTraceEndLocation(const struct FVector& value);

	//TArray<class AActor*>	ActorsToIgnore;		//Offset: 664	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetActorsToIgnore() const;
	TArray<class AActor*>* M_PtrGetActorsToIgnore();
	void M_SetActorsToIgnore(const TArray<class AActor*>& value);

	//struct FDataTableRowHandle	Item;		//Offset: 680	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FDataTableRowHandle M_GetItem() const;
	struct FDataTableRowHandle* M_PtrGetItem();
	void M_SetItem(const struct FDataTableRowHandle& value);

	//struct FDataTableRowHandle	ItemUnpoisoned;		//Offset: 696	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor
	struct FDataTableRowHandle M_GetItemUnpoisoned() const;
	struct FDataTableRowHandle* M_PtrGetItemUnpoisoned();
	void M_SetItemUnpoisoned(const struct FDataTableRowHandle& value);

	//float	ItemHP;		//Offset: 712	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetItemHP() const;
	float* M_PtrGetItemHP();
	void M_SetItemHP(const float& value);

	//struct FVector	InitialLocation;		//Offset: 716	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetInitialLocation() const;
	struct FVector* M_PtrGetInitialLocation();
	void M_SetInitialLocation(const struct FVector& value);

	//struct FVector	HitLocation;		//Offset: 728	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetHitLocation() const;
	struct FVector* M_PtrGetHitLocation();
	void M_SetHitLocation(const struct FVector& value);

	//float	PullPercent;		//Offset: 740	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetPullPercent() const;
	float* M_PtrGetPullPercent();
	void M_SetPullPercent(const float& value);

	//float	ToolDamage;		//Offset: 744	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetToolDamage() const;
	float* M_PtrGetToolDamage();
	void M_SetToolDamage(const float& value);

	//bool	UseDestroyChance;		//Offset: 748	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseDestroyChance() const;
	bool* M_PtrGetUseDestroyChance();
	void M_SetUseDestroyChance(const bool& value);

	//float	ChanceToDestroyOnHit;		//Offset: 752	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetChanceToDestroyOnHit() const;
	float* M_PtrGetChanceToDestroyOnHit();
	void M_SetChanceToDestroyOnHit(const float& value);

	//bool	CausesBleeding;		//Offset: 756	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCausesBleeding() const;
	bool* M_PtrGetCausesBleeding();
	void M_SetCausesBleeding(const bool& value);

	//float	BleedDamage;		//Offset: 760	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBleedDamage() const;
	float* M_PtrGetBleedDamage();
	void M_SetBleedDamage(const float& value);

	//float	BleedDuration;		//Offset: 764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBleedDuration() const;
	float* M_PtrGetBleedDuration();
	void M_SetBleedDuration(const float& value);

	//TArray<struct FName>	AlwaysBounceOffTags;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName> M_GetAlwaysBounceOffTags() const;
	TArray<struct FName>* M_PtrGetAlwaysBounceOffTags();
	void M_SetAlwaysBounceOffTags(const TArray<struct FName>& value);

	//TArray<struct FName>	DestroyPreventionTags;		//Offset: 784	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FName> M_GetDestroyPreventionTags() const;
	TArray<struct FName>* M_PtrGetDestroyPreventionTags();
	void M_SetDestroyPreventionTags(const TArray<struct FName>& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 800	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//bool	HasAppliedDamage;		//Offset: 801	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasAppliedDamage() const;
	bool* M_PtrGetHasAppliedDamage();
	void M_SetHasAppliedDamage(const bool& value);

	//float	ProjectileGravityScale;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetProjectileGravityScale() const;
	float* M_PtrGetProjectileGravityScale();
	void M_SetProjectileGravityScale(const float& value);

	//float	ProjectileTypeGravityModifier;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetProjectileTypeGravityModifier() const;
	float* M_PtrGetProjectileTypeGravityModifier();
	void M_SetProjectileTypeGravityModifier(const float& value);

	//bool	isDebugEnabled;		//Offset: 812	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

	//float	AttachChance;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAttachChance() const;
	float* M_PtrGetAttachChance();
	void M_SetAttachChance(const float& value);

	//TMap<TEnumAsByte<EPhysicalSurface>, bool>	SurfacePhysicsSimulation;		//Offset: 824	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<EPhysicalSurface>, bool> M_GetSurfacePhysicsSimulation() const;
	TMap<TEnumAsByte<EPhysicalSurface>, bool>* M_PtrGetSurfacePhysicsSimulation();
	void M_SetSurfacePhysicsSimulation(const TMap<TEnumAsByte<EPhysicalSurface>, bool>& value);

	//TAssetPtr<class FOnPointDamageApplied__DelegateSignature>	OnPointDamageApplied;		//Offset: 904	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPointDamageApplied__DelegateSignature> M_GetOnPointDamageApplied() const;
	TAssetPtr<class FOnPointDamageApplied__DelegateSignature>* M_PtrGetOnPointDamageApplied();
	void M_SetOnPointDamageApplied(const TAssetPtr<class FOnPointDamageApplied__DelegateSignature>& value);

	//float	MaxDamageSpeed;		//Offset: 920	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetMaxDamageSpeed() const;
	float* M_PtrGetMaxDamageSpeed();
	void M_SetMaxDamageSpeed(const float& value);

	//class USoundBase*	SC_Hit;		//Offset: 928	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USoundBase* M_GetSC_Hit() const;
	class USoundBase** M_PtrGetSC_Hit();
	void M_SetSC_Hit(const class USoundBase*& value);

	//class UNiagaraSystem*	FX_Hit;		//Offset: 936	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UNiagaraSystem* M_GetFX_Hit() const;
	class UNiagaraSystem** M_PtrGetFX_Hit();
	void M_SetFX_Hit(const class UNiagaraSystem*& value);

	//float	EffectsIntensity;		//Offset: 944	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEffectsIntensity() const;
	float* M_PtrGetEffectsIntensity();
	void M_SetEffectsIntensity(const float& value);

	//class AController*	OwnerController;		//Offset: 952	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AController* M_GetOwnerController() const;
	class AController** M_PtrGetOwnerController();
	void M_SetOwnerController(const class AController*& value);

	//float	ProjectileDamage;		//Offset: 960	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetProjectileDamage() const;
	float* M_PtrGetProjectileDamage();
	void M_SetProjectileDamage(const float& value);

	//float	ProjectileHalfLength;		//Offset: 964	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetProjectileHalfLength() const;
	float* M_PtrGetProjectileHalfLength();
	void M_SetProjectileHalfLength(const float& value);

	//class UParticleSystemComponent*	TrailParticleSystem;		//Offset: 968	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UParticleSystemComponent* M_GetTrailParticleSystem() const;
	class UParticleSystemComponent** M_PtrGetTrailParticleSystem();
	void M_SetTrailParticleSystem(const class UParticleSystemComponent*& value);

	//float	TraceForwardArea;		//Offset: 976	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTraceForwardArea() const;
	float* M_PtrGetTraceForwardArea();
	void M_SetTraceForwardArea(const float& value);

	//struct FST_ProjectileData	ProjectileData;		//Offset: 984	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_ProjectileData M_GetProjectileData() const;
	struct FST_ProjectileData* M_PtrGetProjectileData();
	void M_SetProjectileData(const struct FST_ProjectileData& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterProjectile.BP_MasterProjectile_C");
		return ptr;
	}

#pragma region Functions
	void OnPointDamageApplied__DelegateSignature(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass);

	void ExecuteUbergraph_BP_MasterProjectile(int32_t EntryPoint);

	void SpawnHitEffects_Multicast(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class UDamageType* DamageTypeClass);

	void SpawnHitEffects_Server(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class UDamageType* DamageTypeClass);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void DisableCollision_Multicast();

	void ReceiveTick(float DeltaSeconds);

	void ReceiveBeginPlay();

	void Initialize();

	void Update(float DeltaSeconds);

	void UpdateEffects();

	void UpdateMovement(float DeltaSeconds);

	void TryHit(struct FHitResult Hit, struct FVector HitVelocity, bool ShouldSpawnItem, class ABP_MasterItem_C** SpawnedItem, bool* HasHit, bool* HasImpaledItem);

	void SpawnItem(struct FVector HitLocation, struct FVector HitNormal, class AActor* HitActor, class UPrimitiveComponent* HitComponent, struct FName HitBoneName, class UPhysicalMaterial* HitPhysicalMaterial, struct FVector HitVelocity, class ABP_MasterItem_C** SpawnedItem, bool* HasImpaledItem);

	void GetBoneDamageMultiplier(struct FName HitBoneName, float* DamageMultiplier)/* const*/;

	void HasDestroyPreventionTag(class AActor* Actor, bool* Success)/* const*/;

	void HasAlwaysBounceOffTag(class AActor* Actor, class UActorComponent* Component, bool* HasAlwaysBounceOffTag)/* const*/;

	void ShouldSimulatePhysics(class AActor* HitActor, class UActorComponent* HitComponent, TEnumAsByte<EPhysicalSurface> HitSurfaceType, float ImpaleDistance, bool* ShouldSimulatePhysics)/* const*/;

	void TryApplyPoison(class AActor* ActorToPoison);

	float CalculateDamage(const struct FHitResult& Hit, struct FVector HitVelocity)/* const*/;

	bool IsActorDead(class AActor* Actor)/* const*/;

	void SpawnFishItem(class AActor* HitFishActor, class ABP_MasterItem_C* FishAttachItem);

	void Trace();

	void OnTraceNoCollision();

	void StopIgnoringOwner();

	void ActivateMeshCollisionsForNearbyActors()/* const*/;

	void GetTracePointSocketLocation(struct FVector* TracePointSocketLocation)/* const*/;

	void SpawnHitParticles(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, const struct FHitResult& Hit, class UDamageType* DamageTypeClass);

	void SpawnHitSound(float appliedDamage, float ReceivedDamage, const struct FHitResult& Hit);

	void SpawnHitEffects(float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult Hit, class UDamageType* DamageTypeClass);

	void OverrideProjectileDamage(float ProjectileDamage);

	void GetName(struct FName* Name)/* const*/;

	void GetDisplayName(struct FText* DisplayName)/* const*/;

#pragma endregion
};
};