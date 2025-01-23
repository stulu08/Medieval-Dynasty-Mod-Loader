#include "../SDK.h"
#include "BP_WeaponDamageComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_WeaponDamageComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UBP_WeaponDamageComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UBP_WeaponDamageComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UBP_WeaponDamageComponent_C::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 184);
}
bool* UBP_WeaponDamageComponent_C::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 184);
}
void UBP_WeaponDamageComponent_C::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of CanDamageWithoutInterface
// Declaration: bool CanDamageWithoutInterface
bool UBP_WeaponDamageComponent_C::M_GetCanDamageWithoutInterface() const {
	return Read<bool>((byte*)this + 185);
}
bool* UBP_WeaponDamageComponent_C::M_PtrGetCanDamageWithoutInterface() {
	return reinterpret_cast<bool*>((byte*)this + 185);
}
void UBP_WeaponDamageComponent_C::M_SetCanDamageWithoutInterface(const bool& value) {
	Write((byte*)this + 185, value);
}
// Member Getter and Setter of AttackAngle
// Declaration: float AttackAngle
float UBP_WeaponDamageComponent_C::M_GetAttackAngle() const {
	return Read<float>((byte*)this + 188);
}
float* UBP_WeaponDamageComponent_C::M_PtrGetAttackAngle() {
	return reinterpret_cast<float*>((byte*)this + 188);
}
void UBP_WeaponDamageComponent_C::M_SetAttackAngle(const float& value) {
	Write((byte*)this + 188, value);
}
// Member Getter and Setter of AttackRange
// Declaration: float AttackRange
float UBP_WeaponDamageComponent_C::M_GetAttackRange() const {
	return Read<float>((byte*)this + 192);
}
float* UBP_WeaponDamageComponent_C::M_PtrGetAttackRange() {
	return reinterpret_cast<float*>((byte*)this + 192);
}
void UBP_WeaponDamageComponent_C::M_SetAttackRange(const float& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of AttackDamage
// Declaration: float AttackDamage
float UBP_WeaponDamageComponent_C::M_GetAttackDamage() const {
	return Read<float>((byte*)this + 196);
}
float* UBP_WeaponDamageComponent_C::M_PtrGetAttackDamage() {
	return reinterpret_cast<float*>((byte*)this + 196);
}
void UBP_WeaponDamageComponent_C::M_SetAttackDamage(const float& value) {
	Write((byte*)this + 196, value);
}
// Member Getter and Setter of DamageReductionPerHitMultiplier
// Declaration: float DamageReductionPerHitMultiplier
float UBP_WeaponDamageComponent_C::M_GetDamageReductionPerHitMultiplier() const {
	return Read<float>((byte*)this + 200);
}
float* UBP_WeaponDamageComponent_C::M_PtrGetDamageReductionPerHitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 200);
}
void UBP_WeaponDamageComponent_C::M_SetDamageReductionPerHitMultiplier(const float& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of DamageTypeClass
// Declaration: class UDamageType* DamageTypeClass
class UDamageType* UBP_WeaponDamageComponent_C::M_GetDamageTypeClass() const {
	return Read<class UDamageType*>((byte*)this + 208);
}
class UDamageType** UBP_WeaponDamageComponent_C::M_PtrGetDamageTypeClass() {
	return reinterpret_cast<class UDamageType**>((byte*)this + 208);
}
void UBP_WeaponDamageComponent_C::M_SetDamageTypeClass(const class UDamageType*& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of DamagePointLocalOffset
// Declaration: struct FVector DamagePointLocalOffset
struct FVector UBP_WeaponDamageComponent_C::M_GetDamagePointLocalOffset() const {
	return Read<struct FVector>((byte*)this + 216);
}
struct FVector* UBP_WeaponDamageComponent_C::M_PtrGetDamagePointLocalOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 216);
}
void UBP_WeaponDamageComponent_C::M_SetDamagePointLocalOffset(const struct FVector& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of ActorsToIgnore
// Declaration: TArray<class AActor*> ActorsToIgnore
TArray<class AActor*> UBP_WeaponDamageComponent_C::M_GetActorsToIgnore() const {
	return Read<TArray<class AActor*>>((byte*)this + 232);
}
TArray<class AActor*>* UBP_WeaponDamageComponent_C::M_PtrGetActorsToIgnore() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 232);
}
void UBP_WeaponDamageComponent_C::M_SetActorsToIgnore(const TArray<class AActor*>& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of ActorTagsToIgnore
// Declaration: TArray<struct FName> ActorTagsToIgnore
TArray<struct FName> UBP_WeaponDamageComponent_C::M_GetActorTagsToIgnore() const {
	return Read<TArray<struct FName>>((byte*)this + 248);
}
TArray<struct FName>* UBP_WeaponDamageComponent_C::M_PtrGetActorTagsToIgnore() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 248);
}
void UBP_WeaponDamageComponent_C::M_SetActorTagsToIgnore(const TArray<struct FName>& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of DamagedActorsDuringCurrentAttack
// Declaration: TArray<class AActor*> DamagedActorsDuringCurrentAttack
TArray<class AActor*> UBP_WeaponDamageComponent_C::M_GetDamagedActorsDuringCurrentAttack() const {
	return Read<TArray<class AActor*>>((byte*)this + 264);
}
TArray<class AActor*>* UBP_WeaponDamageComponent_C::M_PtrGetDamagedActorsDuringCurrentAttack() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 264);
}
void UBP_WeaponDamageComponent_C::M_SetDamagedActorsDuringCurrentAttack(const TArray<class AActor*>& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of DamageMultiplier
// Declaration: float DamageMultiplier
float UBP_WeaponDamageComponent_C::M_GetDamageMultiplier() const {
	return Read<float>((byte*)this + 280);
}
float* UBP_WeaponDamageComponent_C::M_PtrGetDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 280);
}
void UBP_WeaponDamageComponent_C::M_SetDamageMultiplier(const float& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of WeaponMovementDirection
// Declaration: struct FVector WeaponMovementDirection
struct FVector UBP_WeaponDamageComponent_C::M_GetWeaponMovementDirection() const {
	return Read<struct FVector>((byte*)this + 284);
}
struct FVector* UBP_WeaponDamageComponent_C::M_PtrGetWeaponMovementDirection() {
	return reinterpret_cast<struct FVector*>((byte*)this + 284);
}
void UBP_WeaponDamageComponent_C::M_SetWeaponMovementDirection(const struct FVector& value) {
	Write((byte*)this + 284, value);
}
// Member Getter and Setter of OnBeforePointDamageApplied
// Declaration: TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature> OnBeforePointDamageApplied
TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature> UBP_WeaponDamageComponent_C::M_GetOnBeforePointDamageApplied() const {
	return Read<TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>>((byte*)this + 296);
}
TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>* UBP_WeaponDamageComponent_C::M_PtrGetOnBeforePointDamageApplied() {
	return reinterpret_cast<TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>*>((byte*)this + 296);
}
void UBP_WeaponDamageComponent_C::M_SetOnBeforePointDamageApplied(const TAssetPtr<class FOnBeforePointDamageApplied__DelegateSignature>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of OnAfterPointDamageApplied
// Declaration: TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature> OnAfterPointDamageApplied
TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature> UBP_WeaponDamageComponent_C::M_GetOnAfterPointDamageApplied() const {
	return Read<TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>>((byte*)this + 312);
}
TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>* UBP_WeaponDamageComponent_C::M_PtrGetOnAfterPointDamageApplied() {
	return reinterpret_cast<TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>*>((byte*)this + 312);
}
void UBP_WeaponDamageComponent_C::M_SetOnAfterPointDamageApplied(const TAssetPtr<class FOnAfterPointDamageApplied__DelegateSignature>& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of PreviousWeaponLocation
// Declaration: struct FVector PreviousWeaponLocation
struct FVector UBP_WeaponDamageComponent_C::M_GetPreviousWeaponLocation() const {
	return Read<struct FVector>((byte*)this + 328);
}
struct FVector* UBP_WeaponDamageComponent_C::M_PtrGetPreviousWeaponLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 328);
}
void UBP_WeaponDamageComponent_C::M_SetPreviousWeaponLocation(const struct FVector& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of IsAttackFromLeftToRight
// Declaration: bool IsAttackFromLeftToRight
bool UBP_WeaponDamageComponent_C::M_GetIsAttackFromLeftToRight() const {
	return Read<bool>((byte*)this + 340);
}
bool* UBP_WeaponDamageComponent_C::M_PtrGetIsAttackFromLeftToRight() {
	return reinterpret_cast<bool*>((byte*)this + 340);
}
void UBP_WeaponDamageComponent_C::M_SetIsAttackFromLeftToRight(const bool& value) {
	Write((byte*)this + 340, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.OnAfterPointDamageApplied__DelegateSignature
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
void UBP_WeaponDamageComponent_C::OnAfterPointDamageApplied__DelegateSignature(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.OnAfterPointDamageApplied__DelegateSignature");

	struct UBP_WeaponDamageComponent_C_OnAfterPointDamageApplied__DelegateSignature_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float appliedDamage;			//Offset: 8 | ElementSize: 4
		float ReceivedDamage;			//Offset: 12 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 184 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_OnAfterPointDamageApplied__DelegateSignature_Params params;
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
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.OnBeforePointDamageApplied__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorToDamage	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: damageToApply	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::OnBeforePointDamageApplied__DelegateSignature(class AActor* ActorToDamage, float damageToApply, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.OnBeforePointDamageApplied__DelegateSignature");

	struct UBP_WeaponDamageComponent_C_OnBeforePointDamageApplied__DelegateSignature_Params {
		class AActor* ActorToDamage;			//Offset: 0 | ElementSize: 8
		float damageToApply;			//Offset: 8 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 12 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 24 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 160 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 168 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 176 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_OnBeforePointDamageApplied__DelegateSignature_Params params;
	params.ActorToDamage = ActorToDamage;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ExecuteUbergraph_BP_WeaponDamageComponent
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::ExecuteUbergraph_BP_WeaponDamageComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ExecuteUbergraph_BP_WeaponDamageComponent");

	struct UBP_WeaponDamageComponent_C_ExecuteUbergraph_BP_WeaponDamageComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_ExecuteUbergraph_BP_WeaponDamageComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ApplyPointDamage_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorToDamage	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: damageToApply	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: hitFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::ApplyPointDamage_Server(class AActor* ActorToDamage, float damageToApply, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ApplyPointDamage_Server");

	struct UBP_WeaponDamageComponent_C_ApplyPointDamage_Server_Params {
		class AActor* ActorToDamage;			//Offset: 0 | ElementSize: 8
		float damageToApply;			//Offset: 8 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 12 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 24 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 160 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 168 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 176 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_ApplyPointDamage_Server_Params params;
	params.ActorToDamage = ActorToDamage;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ReplicatePointDamageApplied_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
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
void UBP_WeaponDamageComponent_C::ReplicatePointDamageApplied_Multicast(class AActor* DamagedActor, float appliedDamage, float ReceivedDamage, struct FVector hitFromDirection, struct FHitResult HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ReplicatePointDamageApplied_Multicast");

	struct UBP_WeaponDamageComponent_C_ReplicatePointDamageApplied_Multicast_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float appliedDamage;			//Offset: 8 | ElementSize: 4
		float ReceivedDamage;			//Offset: 12 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 184 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_ReplicatePointDamageApplied_Multicast_Params params;
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
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.ReceiveTick");

	struct UBP_WeaponDamageComponent_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetAttackAngle
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AttackAngle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetAttackAngle(float AttackAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetAttackAngle");

	struct UBP_WeaponDamageComponent_C_SetAttackAngle_Params {
		float AttackAngle;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_SetAttackAngle_Params params;
	params.AttackAngle = AttackAngle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetAttackDamage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AttackDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetAttackDamage(float AttackDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetAttackDamage");

	struct UBP_WeaponDamageComponent_C_SetAttackDamage_Params {
		float AttackDamage;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_SetAttackDamage_Params params;
	params.AttackDamage = AttackDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetAttackRange
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AttackRange	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetAttackRange(float AttackRange) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetAttackRange");

	struct UBP_WeaponDamageComponent_C_SetAttackRange_Params {
		float AttackRange;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_SetAttackRange_Params params;
	params.AttackRange = AttackRange;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetDamageReductionPerHitMultiplier
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamageReductionPerHitMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetDamageReductionPerHitMultiplier(float DamageReductionPerHitMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetDamageReductionPerHitMultiplier");

	struct UBP_WeaponDamageComponent_C_SetDamageReductionPerHitMultiplier_Params {
		float DamageReductionPerHitMultiplier;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_SetDamageReductionPerHitMultiplier_Params params;
	params.DamageReductionPerHitMultiplier = DamageReductionPerHitMultiplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetDamageTypeClass
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamageTypeClass	Type: class UDamageType*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetDamageTypeClass(class UDamageType* DamageTypeClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetDamageTypeClass");

	struct UBP_WeaponDamageComponent_C_SetDamageTypeClass_Params {
		class UDamageType* DamageTypeClass;			//Offset: 0 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_SetDamageTypeClass_Params params;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetDamagePointLocalOffset
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamagePointLocalOffset	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetDamagePointLocalOffset(struct FVector DamagePointLocalOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetDamagePointLocalOffset");

	struct UBP_WeaponDamageComponent_C_SetDamagePointLocalOffset_Params {
		struct FVector DamagePointLocalOffset;			//Offset: 0 | ElementSize: 12
	};
	UBP_WeaponDamageComponent_C_SetDamagePointLocalOffset_Params params;
	params.DamagePointLocalOffset = DamagePointLocalOffset;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetActorsToIgnore
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorsToIgnore	Type: TArray<class AActor*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetActorsToIgnore(TArray<class AActor*>* ActorsToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetActorsToIgnore");

	struct UBP_WeaponDamageComponent_C_SetActorsToIgnore_Params {
		TArray<class AActor*> ActorsToIgnore;			//Offset: 0 | ElementSize: 16
	};
	UBP_WeaponDamageComponent_C_SetActorsToIgnore_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.AddActorToIgnore
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: actorToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::AddActorToIgnore(class AActor* actorToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.AddActorToIgnore");

	struct UBP_WeaponDamageComponent_C_AddActorToIgnore_Params {
		class AActor* actorToIgnore;			//Offset: 0 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_AddActorToIgnore_Params params;
	params.actorToIgnore = actorToIgnore;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.RemoveActorToIgnore
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: actorToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::RemoveActorToIgnore(class AActor* actorToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.RemoveActorToIgnore");

	struct UBP_WeaponDamageComponent_C_RemoveActorToIgnore_Params {
		class AActor* actorToIgnore;			//Offset: 0 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_RemoveActorToIgnore_Params params;
	params.actorToIgnore = actorToIgnore;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetActorTagsToIgnore
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorTagsToIgnore	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SetActorTagsToIgnore(TArray<struct FName>* ActorTagsToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SetActorTagsToIgnore");

	struct UBP_WeaponDamageComponent_C_SetActorTagsToIgnore_Params {
		TArray<struct FName> ActorTagsToIgnore;			//Offset: 0 | ElementSize: 16
	};
	UBP_WeaponDamageComponent_C_SetActorTagsToIgnore_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorTagsToIgnore != nullptr)
		*ActorTagsToIgnore = params.ActorTagsToIgnore;
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.AddActorTagToIgnore
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorTagToIgnore	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::AddActorTagToIgnore(struct FName ActorTagToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.AddActorTagToIgnore");

	struct UBP_WeaponDamageComponent_C_AddActorTagToIgnore_Params {
		struct FName ActorTagToIgnore;			//Offset: 0 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_AddActorTagToIgnore_Params params;
	params.ActorTagToIgnore = ActorTagToIgnore;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.RemoveActorTagToIgnore
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorTagToIgnore	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::RemoveActorTagToIgnore(struct FName ActorTagToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.RemoveActorTagToIgnore");

	struct UBP_WeaponDamageComponent_C_RemoveActorTagToIgnore_Params {
		struct FName ActorTagToIgnore;			//Offset: 0 | ElementSize: 8
	};
	UBP_WeaponDamageComponent_C_RemoveActorTagToIgnore_Params params;
	params.ActorTagToIgnore = ActorTagToIgnore;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.StartDealingDamage
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasStartedDealingDamage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::StartDealingDamage(bool* HasStartedDealingDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.StartDealingDamage");

	struct UBP_WeaponDamageComponent_C_StartDealingDamage_Params {
		bool HasStartedDealingDamage;			//Offset: 0 | ElementSize: 1
	};
	UBP_WeaponDamageComponent_C_StartDealingDamage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HasStartedDealingDamage != nullptr)
		*HasStartedDealingDamage = params.HasStartedDealingDamage;
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.StopDealingDamage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::StopDealingDamage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.StopDealingDamage");

	struct UBP_WeaponDamageComponent_C_StopDealingDamage_Params {
	};
	UBP_WeaponDamageComponent_C_StopDealingDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.IsDealingDamage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: IsDealingDamage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::IsDealingDamage(bool* IsDealingDamage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.IsDealingDamage");

	struct UBP_WeaponDamageComponent_C_IsDealingDamage_Params {
		bool IsDealingDamage;			//Offset: 0 | ElementSize: 1
	};
	UBP_WeaponDamageComponent_C_IsDealingDamage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsDealingDamage != nullptr)
		*IsDealingDamage = params.IsDealingDamage;
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.DamageActors
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldCheckWholeRange	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::DamageActors(bool ShouldCheckWholeRange) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.DamageActors");

	struct UBP_WeaponDamageComponent_C_DamageActors_Params {
		bool ShouldCheckWholeRange;			//Offset: 0 | ElementSize: 1
	};
	UBP_WeaponDamageComponent_C_DamageActors_Params params;
	params.ShouldCheckWholeRange = ShouldCheckWholeRange;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.AngleBetweenVectors2D
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: FromVector	Type: struct FVector2D	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToVector	Type: struct FVector2D	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AngleBetweenVectors2D	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::AngleBetweenVectors2D(struct FVector2D FromVector, struct FVector2D ToVector, float* AngleBetweenVectors2D)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.AngleBetweenVectors2D");

	struct UBP_WeaponDamageComponent_C_AngleBetweenVectors2D_Params {
		struct FVector2D FromVector;			//Offset: 0 | ElementSize: 8
		struct FVector2D ToVector;			//Offset: 8 | ElementSize: 8
		float AngleBetweenVectors2D;			//Offset: 16 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_AngleBetweenVectors2D_Params params;
	params.FromVector = FromVector;
	params.ToVector = ToVector;

	UObject::ProcessEvent(fn, &params);
	if (AngleBetweenVectors2D != nullptr)
		*AngleBetweenVectors2D = params.AngleBetweenVectors2D;
}

/////////////////////////////////////////////
// Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SignedAngleBetweenVectors2D
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: FromVector	Type: struct FVector2D	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToVector	Type: struct FVector2D	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SignedAngleBetweenVectors2D	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeaponDamageComponent_C::SignedAngleBetweenVectors2D(struct FVector2D FromVector, struct FVector2D ToVector, float* SignedAngleBetweenVectors2D)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDamageComponent.BP_WeaponDamageComponent_C.SignedAngleBetweenVectors2D");

	struct UBP_WeaponDamageComponent_C_SignedAngleBetweenVectors2D_Params {
		struct FVector2D FromVector;			//Offset: 0 | ElementSize: 8
		struct FVector2D ToVector;			//Offset: 8 | ElementSize: 8
		float SignedAngleBetweenVectors2D;			//Offset: 16 | ElementSize: 4
	};
	UBP_WeaponDamageComponent_C_SignedAngleBetweenVectors2D_Params params;
	params.FromVector = FromVector;
	params.ToVector = ToVector;

	UObject::ProcessEvent(fn, &params);
	if (SignedAngleBetweenVectors2D != nullptr)
		*SignedAngleBetweenVectors2D = params.SignedAngleBetweenVectors2D;
}

#pragma endregion
}