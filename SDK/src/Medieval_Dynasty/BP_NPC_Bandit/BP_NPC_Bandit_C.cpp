#include "../SDK.h"
#include "BP_NPC_Bandit_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_NPC_Bandit_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 7688);
}
struct FPointerToUberGraphFrame* ABP_NPC_Bandit_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 7688);
}
void ABP_NPC_Bandit_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 7688, value);
}
// Member Getter and Setter of DamageCauser
// Declaration: class AActor* DamageCauser
class AActor* ABP_NPC_Bandit_C::M_GetDamageCauser() const {
	return Read<class AActor*>((byte*)this + 7696);
}
class AActor** ABP_NPC_Bandit_C::M_PtrGetDamageCauser() {
	return reinterpret_cast<class AActor**>((byte*)this + 7696);
}
void ABP_NPC_Bandit_C::M_SetDamageCauser(const class AActor*& value) {
	Write((byte*)this + 7696, value);
}
// Member Getter and Setter of HitTimer
// Declaration: struct FTimerHandle HitTimer
struct FTimerHandle ABP_NPC_Bandit_C::M_GetHitTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 7704);
}
struct FTimerHandle* ABP_NPC_Bandit_C::M_PtrGetHitTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 7704);
}
void ABP_NPC_Bandit_C::M_SetHitTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 7704, value);
}
// Member Getter and Setter of HitLocation
// Declaration: struct FVector HitLocation
struct FVector ABP_NPC_Bandit_C::M_GetHitLocation() const {
	return Read<struct FVector>((byte*)this + 7712);
}
struct FVector* ABP_NPC_Bandit_C::M_PtrGetHitLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 7712);
}
void ABP_NPC_Bandit_C::M_SetHitLocation(const struct FVector& value) {
	Write((byte*)this + 7712, value);
}
// Member Getter and Setter of HitBoneName
// Declaration: struct FName HitBoneName
struct FName ABP_NPC_Bandit_C::M_GetHitBoneName() const {
	return Read<struct FName>((byte*)this + 7724);
}
struct FName* ABP_NPC_Bandit_C::M_PtrGetHitBoneName() {
	return reinterpret_cast<struct FName*>((byte*)this + 7724);
}
void ABP_NPC_Bandit_C::M_SetHitBoneName(const struct FName& value) {
	Write((byte*)this + 7724, value);
}
// Member Getter and Setter of ShotDirection
// Declaration: struct FVector ShotDirection
struct FVector ABP_NPC_Bandit_C::M_GetShotDirection() const {
	return Read<struct FVector>((byte*)this + 7732);
}
struct FVector* ABP_NPC_Bandit_C::M_PtrGetShotDirection() {
	return reinterpret_cast<struct FVector*>((byte*)this + 7732);
}
void ABP_NPC_Bandit_C::M_SetShotDirection(const struct FVector& value) {
	Write((byte*)this + 7732, value);
}
// Member Getter and Setter of SplatTimer
// Declaration: struct FTimerHandle SplatTimer
struct FTimerHandle ABP_NPC_Bandit_C::M_GetSplatTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 7744);
}
struct FTimerHandle* ABP_NPC_Bandit_C::M_PtrGetSplatTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 7744);
}
void ABP_NPC_Bandit_C::M_SetSplatTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 7744, value);
}
// Member Getter and Setter of Time
// Declaration: struct FDateTime Time
struct FDateTime ABP_NPC_Bandit_C::M_GetTime() const {
	return Read<struct FDateTime>((byte*)this + 7752);
}
struct FDateTime* ABP_NPC_Bandit_C::M_PtrGetTime() {
	return reinterpret_cast<struct FDateTime*>((byte*)this + 7752);
}
void ABP_NPC_Bandit_C::M_SetTime(const struct FDateTime& value) {
	Write((byte*)this + 7752, value);
}
// Member Getter and Setter of SplatTime
// Declaration: int32_t SplatTime
int32_t ABP_NPC_Bandit_C::M_GetSplatTime() const {
	return Read<int32_t>((byte*)this + 7760);
}
int32_t* ABP_NPC_Bandit_C::M_PtrGetSplatTime() {
	return reinterpret_cast<int32_t*>((byte*)this + 7760);
}
void ABP_NPC_Bandit_C::M_SetSplatTime(const int32_t& value) {
	Write((byte*)this + 7760, value);
}
// Member Getter and Setter of HitBoneNames
// Declaration: TArray<struct FName> HitBoneNames
TArray<struct FName> ABP_NPC_Bandit_C::M_GetHitBoneNames() const {
	return Read<TArray<struct FName>>((byte*)this + 7768);
}
TArray<struct FName>* ABP_NPC_Bandit_C::M_PtrGetHitBoneNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 7768);
}
void ABP_NPC_Bandit_C::M_SetHitBoneNames(const TArray<struct FName>& value) {
	Write((byte*)this + 7768, value);
}
// Member Getter and Setter of CanHit
// Declaration: bool CanHit
bool ABP_NPC_Bandit_C::M_GetCanHit() const {
	return Read<bool>((byte*)this + 7784);
}
bool* ABP_NPC_Bandit_C::M_PtrGetCanHit() {
	return reinterpret_cast<bool*>((byte*)this + 7784);
}
void ABP_NPC_Bandit_C::M_SetCanHit(const bool& value) {
	Write((byte*)this + 7784, value);
}
// Member Getter and Setter of CanAvoid
// Declaration: bool CanAvoid
bool ABP_NPC_Bandit_C::M_GetCanAvoid() const {
	return Read<bool>((byte*)this + 7785);
}
bool* ABP_NPC_Bandit_C::M_PtrGetCanAvoid() {
	return reinterpret_cast<bool*>((byte*)this + 7785);
}
void ABP_NPC_Bandit_C::M_SetCanAvoid(const bool& value) {
	Write((byte*)this + 7785, value);
}
// Member Getter and Setter of AvoidDirection
// Declaration: TEnumAsByte<E_AnimDirection> AvoidDirection
TEnumAsByte<E_AnimDirection> ABP_NPC_Bandit_C::M_GetAvoidDirection() const {
	return Read<TEnumAsByte<E_AnimDirection>>((byte*)this + 7786);
}
TEnumAsByte<E_AnimDirection>* ABP_NPC_Bandit_C::M_PtrGetAvoidDirection() {
	return reinterpret_cast<TEnumAsByte<E_AnimDirection>*>((byte*)this + 7786);
}
void ABP_NPC_Bandit_C::M_SetAvoidDirection(const TEnumAsByte<E_AnimDirection>& value) {
	Write((byte*)this + 7786, value);
}
// Member Getter and Setter of AvoidMovement
// Declaration: TEnumAsByte<E_AnimMovement> AvoidMovement
TEnumAsByte<E_AnimMovement> ABP_NPC_Bandit_C::M_GetAvoidMovement() const {
	return Read<TEnumAsByte<E_AnimMovement>>((byte*)this + 7787);
}
TEnumAsByte<E_AnimMovement>* ABP_NPC_Bandit_C::M_PtrGetAvoidMovement() {
	return reinterpret_cast<TEnumAsByte<E_AnimMovement>*>((byte*)this + 7787);
}
void ABP_NPC_Bandit_C::M_SetAvoidMovement(const TEnumAsByte<E_AnimMovement>& value) {
	Write((byte*)this + 7787, value);
}
// Member Getter and Setter of TakeDamageMultiplier
// Declaration: float TakeDamageMultiplier
float ABP_NPC_Bandit_C::M_GetTakeDamageMultiplier() const {
	return Read<float>((byte*)this + 7788);
}
float* ABP_NPC_Bandit_C::M_PtrGetTakeDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 7788);
}
void ABP_NPC_Bandit_C::M_SetTakeDamageMultiplier(const float& value) {
	Write((byte*)this + 7788, value);
}
// Member Getter and Setter of StopSimulatingRagdoll
// Declaration: bool StopSimulatingRagdoll
bool ABP_NPC_Bandit_C::M_GetStopSimulatingRagdoll() const {
	return Read<bool>((byte*)this + 7792);
}
bool* ABP_NPC_Bandit_C::M_PtrGetStopSimulatingRagdoll() {
	return reinterpret_cast<bool*>((byte*)this + 7792);
}
void ABP_NPC_Bandit_C::M_SetStopSimulatingRagdoll(const bool& value) {
	Write((byte*)this + 7792, value);
}
// Member Getter and Setter of RagdollTimer
// Declaration: struct FTimerHandle RagdollTimer
struct FTimerHandle ABP_NPC_Bandit_C::M_GetRagdollTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 7800);
}
struct FTimerHandle* ABP_NPC_Bandit_C::M_PtrGetRagdollTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 7800);
}
void ABP_NPC_Bandit_C::M_SetRagdollTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 7800, value);
}
// Member Getter and Setter of DamageTooSmall
// Declaration: bool DamageTooSmall
bool ABP_NPC_Bandit_C::M_GetDamageTooSmall() const {
	return Read<bool>((byte*)this + 7808);
}
bool* ABP_NPC_Bandit_C::M_PtrGetDamageTooSmall() {
	return reinterpret_cast<bool*>((byte*)this + 7808);
}
void ABP_NPC_Bandit_C::M_SetDamageTooSmall(const bool& value) {
	Write((byte*)this + 7808, value);
}
// Member Getter and Setter of DamageParticles
// Declaration: TAssetPtr<class UParticleSystem> DamageParticles
TAssetPtr<class UParticleSystem> ABP_NPC_Bandit_C::M_GetDamageParticles() const {
	return Read<TAssetPtr<class UParticleSystem>>((byte*)this + 7816);
}
TAssetPtr<class UParticleSystem>* ABP_NPC_Bandit_C::M_PtrGetDamageParticles() {
	return reinterpret_cast<TAssetPtr<class UParticleSystem>*>((byte*)this + 7816);
}
void ABP_NPC_Bandit_C::M_SetDamageParticles(const TAssetPtr<class UParticleSystem>& value) {
	Write((byte*)this + 7816, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.ExecuteUbergraph_BP_NPC_Bandit
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::ExecuteUbergraph_BP_NPC_Bandit(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.ExecuteUbergraph_BP_NPC_Bandit");

	struct ABP_NPC_Bandit_C_ExecuteUbergraph_BP_NPC_Bandit_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_ExecuteUbergraph_BP_NPC_Bandit_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetCanAvoid
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAvoid	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_SetCanAvoid(bool CanAvoid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetCanAvoid");

	struct ABP_NPC_Bandit_C_AI_SetCanAvoid_Params {
		bool CanAvoid;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_SetCanAvoid_Params params;
	params.CanAvoid = CanAvoid;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetAvoidDirection&Movement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvoidDirection	Type: TEnumAsByte<E_AnimDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AvoidMovement	Type: TEnumAsByte<E_AnimMovement>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_SetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection> AvoidDirection, TEnumAsByte<E_AnimMovement> AvoidMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetAvoidDirection&Movement");

	struct ABP_NPC_Bandit_C_AI_SetAvoidDirection_Movement_Params {
		TEnumAsByte<E_AnimDirection> AvoidDirection;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> AvoidMovement;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_SetAvoidDirection_Movement_Params params;
	params.AvoidDirection = AvoidDirection;
	params.AvoidMovement = AvoidMovement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SeasonChanged");

	struct ABP_NPC_Bandit_C_SeasonChanged_Params {
	};
	ABP_NPC_Bandit_C_SeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.DeathPoseDoOnceReset
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::DeathPoseDoOnceReset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.DeathPoseDoOnceReset");

	struct ABP_NPC_Bandit_C_DeathPoseDoOnceReset_Params {
	};
	ABP_NPC_Bandit_C_DeathPoseDoOnceReset_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SnapshotDeathPose
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SnapshotDeathPose() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SnapshotDeathPose");

	struct ABP_NPC_Bandit_C_SnapshotDeathPose_Params {
	};
	ABP_NPC_Bandit_C_SnapshotDeathPose_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterHit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AfterHit() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterHit");

	struct ABP_NPC_Bandit_C_AfterHit_Params {
	};
	ABP_NPC_Bandit_C_AfterHit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.bLock
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::bLock() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.bLock");

	struct ABP_NPC_Bandit_C_bLock_Params {
	};
	ABP_NPC_Bandit_C_bLock_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.FinalSplat
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::FinalSplat() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.FinalSplat");

	struct ABP_NPC_Bandit_C_FinalSplat_Params {
	};
	ABP_NPC_Bandit_C_FinalSplat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Splat
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: EventName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EmitterTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ParticleTime	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Velocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Normal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PhysMat	Type: class UPhysicalMaterial*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Splat(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, class UPhysicalMaterial* PhysMat) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Splat");

	struct ABP_NPC_Bandit_C_Splat_Params {
		struct FName EventName;			//Offset: 0 | ElementSize: 8
		float EmitterTime;			//Offset: 8 | ElementSize: 4
		int32_t ParticleTime;			//Offset: 12 | ElementSize: 4
		struct FVector Location;			//Offset: 16 | ElementSize: 12
		struct FVector Velocity;			//Offset: 28 | ElementSize: 12
		struct FVector Direction;			//Offset: 40 | ElementSize: 12
		struct FVector Normal;			//Offset: 52 | ElementSize: 12
		struct FName BoneName;			//Offset: 64 | ElementSize: 8
		class UPhysicalMaterial* PhysMat;			//Offset: 72 | ElementSize: 8
	};
	ABP_NPC_Bandit_C_Splat_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.ReceivePointDamage
// Flags: BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitNormal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShotFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.ReceivePointDamage");

	struct ABP_NPC_Bandit_C_ReceivePointDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 28 | ElementSize: 12
		class UPrimitiveComponent* HitComponent;			//Offset: 40 | ElementSize: 8
		struct FName BoneName;			//Offset: 48 | ElementSize: 8
		struct FVector ShotFromDirection;			//Offset: 56 | ElementSize: 12
		class AController* InstigatedBy;			//Offset: 72 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 80 | ElementSize: 8
		struct FHitResult HitInfo;			//Offset: 88 | ElementSize: 136
	};
	ABP_NPC_Bandit_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetHitAnim
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SetHitAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetHitAnim");

	struct ABP_NPC_Bandit_C_SetHitAnim_Params {
	};
	ABP_NPC_Bandit_C_SetHitAnim_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetBanditBlackboardValues_Boolean
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardBoolean	Type: TEnumAsByte<E_NPC_Bandit_BlackboardBoolean>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Boolean_Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::GetBanditBlackboardValues_Boolean(TEnumAsByte<E_NPC_Bandit_BlackboardBoolean> BlackboardBoolean, bool* Boolean_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetBanditBlackboardValues_Boolean");

	struct ABP_NPC_Bandit_C_GetBanditBlackboardValues_Boolean_Params {
		TEnumAsByte<E_NPC_Bandit_BlackboardBoolean> BlackboardBoolean;			//Offset: 0 | ElementSize: 1
		bool Boolean_Value;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_GetBanditBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;

	UObject::ProcessEvent(fn, &params);
	if (Boolean_Value != nullptr)
		*Boolean_Value = params.Boolean_Value;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetBanditBlackboardValues_Boolean
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardBoolean	Type: TEnumAsByte<E_NPC_Bandit_BlackboardBoolean>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SetBanditBlackboardValues_Boolean(TEnumAsByte<E_NPC_Bandit_BlackboardBoolean> BlackboardBoolean, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetBanditBlackboardValues_Boolean");

	struct ABP_NPC_Bandit_C_SetBanditBlackboardValues_Boolean_Params {
		TEnumAsByte<E_NPC_Bandit_BlackboardBoolean> BlackboardBoolean;			//Offset: 0 | ElementSize: 1
		bool Value;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_SetBanditBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.CheckIfShouldSimulate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::CheckIfShouldSimulate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.CheckIfShouldSimulate");

	struct ABP_NPC_Bandit_C_CheckIfShouldSimulate_Params {
	};
	ABP_NPC_Bandit_C_CheckIfShouldSimulate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetDamageAndHealth
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SetDamageAndHealth(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetDamageAndHealth");

	struct ABP_NPC_Bandit_C_SetDamageAndHealth_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_SetDamageAndHealth_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.IncreaseReputation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::IncreaseReputation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.IncreaseReputation");

	struct ABP_NPC_Bandit_C_IncreaseReputation_Params {
	};
	ABP_NPC_Bandit_C_IncreaseReputation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.CalculateRotationYawDelta
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_NPC_Bandit_C::CalculateRotationYawDelta(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.CalculateRotationYawDelta");

	struct ABP_NPC_Bandit_C_CalculateRotationYawDelta_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_CalculateRotationYawDelta_Params params;
	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetCanAvoid
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAvoid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_GetCanAvoid(bool* CanAvoid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetCanAvoid");

	struct ABP_NPC_Bandit_C_AI_GetCanAvoid_Params {
		bool CanAvoid;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_GetCanAvoid_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanAvoid != nullptr)
		*CanAvoid = params.CanAvoid;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetAvoidDirection&Movement
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvoidDirection	Type: TEnumAsByte<E_AnimDirection>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AvoidMovement	Type: TEnumAsByte<E_AnimMovement>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_GetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection>* AvoidDirection, TEnumAsByte<E_AnimMovement>* AvoidMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetAvoidDirection&Movement");

	struct ABP_NPC_Bandit_C_AI_GetAvoidDirection_Movement_Params {
		TEnumAsByte<E_AnimDirection> AvoidDirection;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> AvoidMovement;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_GetAvoidDirection_Movement_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AvoidDirection != nullptr)
		*AvoidDirection = params.AvoidDirection;
	if (AvoidMovement != nullptr)
		*AvoidMovement = params.AvoidMovement;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.PushSFX
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::PushSFX() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.PushSFX");

	struct ABP_NPC_Bandit_C_PushSFX_Params {
	};
	ABP_NPC_Bandit_C_PushSFX_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.CloseOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::CloseOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.CloseOptimization");

	struct ABP_NPC_Bandit_C_CloseOptimization_Params {
	};
	ABP_NPC_Bandit_C_CloseOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.NoneOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::NoneOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.NoneOptimization");

	struct ABP_NPC_Bandit_C_NoneOptimization_Params {
	};
	ABP_NPC_Bandit_C_NoneOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.DisableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::DisableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.DisableNPC");

	struct ABP_NPC_Bandit_C_DisableNPC_Params {
	};
	ABP_NPC_Bandit_C_DisableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.FarOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::FarOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.FarOptimization");

	struct ABP_NPC_Bandit_C_FarOptimization_Params {
	};
	ABP_NPC_Bandit_C_FarOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.MediumOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::MediumOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.MediumOptimization");

	struct ABP_NPC_Bandit_C_MediumOptimization_Params {
	};
	ABP_NPC_Bandit_C_MediumOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Init_NPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Init_NPC(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Init_NPC");

	struct ABP_NPC_Bandit_C_Init_NPC_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_Init_NPC_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetRandomInventory
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SetRandomInventory() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetRandomInventory");

	struct ABP_NPC_Bandit_C_SetRandomInventory_Params {
	};
	ABP_NPC_Bandit_C_SetRandomInventory_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.ChooseCharacterVoiceID
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::ChooseCharacterVoiceID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.ChooseCharacterVoiceID");

	struct ABP_NPC_Bandit_C_ChooseCharacterVoiceID_Params {
	};
	ABP_NPC_Bandit_C_ChooseCharacterVoiceID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterDeath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AfterDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterDeath");

	struct ABP_NPC_Bandit_C_AfterDeath_Params {
	};
	ABP_NPC_Bandit_C_AfterDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.CharacterVoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_CharacterVoice	Type: struct FST_CharacterVoiceCues	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.CharacterVoice");

	struct ABP_NPC_Bandit_C_CharacterVoice_Params {
		struct FST_CharacterVoiceCues ST_CharacterVoice;			//Offset: 0 | ElementSize: 24
	};
	ABP_NPC_Bandit_C_CharacterVoice_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ST_CharacterVoice != nullptr)
		*ST_CharacterVoice = params.ST_CharacterVoice;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnCombatCauserStarted
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnCombatCauserStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnCombatCauserStarted");

	struct ABP_NPC_Bandit_C_OnCombatCauserStarted_Params {
	};
	ABP_NPC_Bandit_C_OnCombatCauserStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetBlocking BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::SetBlocking_BPI(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.SetBlocking BPI");

	struct ABP_NPC_Bandit_C_SetBlocking_BPI_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_SetBlocking_BPI_Params params;
	params.Blocking = Blocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Ragdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InitialRagdollVelocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Ragdoll(struct FVector InitialRagdollVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Ragdoll");

	struct ABP_NPC_Bandit_C_Ragdoll_Params {
		struct FVector InitialRagdollVelocity;			//Offset: 0 | ElementSize: 12
	};
	ABP_NPC_Bandit_C_Ragdoll_Params params;
	params.InitialRagdollVelocity = InitialRagdollVelocity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.ReceiveAnyDamage
// Flags: BlueprintAuthorityOnly, Event, Public, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.ReceiveAnyDamage");

	struct ABP_NPC_Bandit_C_ReceiveAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	ABP_NPC_Bandit_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Interact");

	struct ABP_NPC_Bandit_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool Timer;			//Offset: 144 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetInteractAction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractActionText	Type: struct FText	Flags: Parm, OutParm
// Name: InteractSecondActionText	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetInteractAction");

	struct ABP_NPC_Bandit_C_GetInteractAction_Params {
		struct FText InteractActionText;			//Offset: 0 | ElementSize: 24
		struct FText InteractSecondActionText;			//Offset: 24 | ElementSize: 24
	};
	ABP_NPC_Bandit_C_GetInteractAction_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.IsInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowPressUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowTimerUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowOnlyName	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.IsInteractable");

	struct ABP_NPC_Bandit_C_IsInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
		bool ShowPressUI;			//Offset: 10 | ElementSize: 1
		bool ShowTimerUI;			//Offset: 11 | ElementSize: 1
		bool ShowOnlyName;			//Offset: 12 | ElementSize: 1
		float Time;			//Offset: 16 | ElementSize: 4
		float Distance;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;
}

#pragma endregion
}