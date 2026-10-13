#include "../SDK.h"
#include "AnimalBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of replicatedVelocity
// Declaration: struct FVector_NetQuantize replicatedVelocity
struct FVector_NetQuantize AAnimalBase::M_GetreplicatedVelocity() const {
	return Read<struct FVector_NetQuantize>((byte*)this + 1232);
}
struct FVector_NetQuantize* AAnimalBase::M_PtrGetreplicatedVelocity() {
	return reinterpret_cast<struct FVector_NetQuantize*>((byte*)this + 1232);
}
void AAnimalBase::M_SetreplicatedVelocity(const struct FVector_NetQuantize& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of replicatedAnimalMovementMode
// Declaration: EAnimalMovementMode replicatedAnimalMovementMode
EAnimalMovementMode AAnimalBase::M_GetreplicatedAnimalMovementMode() const {
	return Read<EAnimalMovementMode>((byte*)this + 1244);
}
EAnimalMovementMode* AAnimalBase::M_PtrGetreplicatedAnimalMovementMode() {
	return reinterpret_cast<EAnimalMovementMode*>((byte*)this + 1244);
}
void AAnimalBase::M_SetreplicatedAnimalMovementMode(const EAnimalMovementMode& value) {
	Write((byte*)this + 1244, value);
}
// Member Getter and Setter of replicatedCurrentIdleType
// Declaration: EAnimalIdleType replicatedCurrentIdleType
EAnimalIdleType AAnimalBase::M_GetreplicatedCurrentIdleType() const {
	return Read<EAnimalIdleType>((byte*)this + 1245);
}
EAnimalIdleType* AAnimalBase::M_PtrGetreplicatedCurrentIdleType() {
	return reinterpret_cast<EAnimalIdleType*>((byte*)this + 1245);
}
void AAnimalBase::M_SetreplicatedCurrentIdleType(const EAnimalIdleType& value) {
	Write((byte*)this + 1245, value);
}
// Member Getter and Setter of replicatedHasMovedRecently
// Declaration: bool replicatedHasMovedRecently
bool AAnimalBase::M_GetreplicatedHasMovedRecently() const {
	return Read<bool>((byte*)this + 1246);
}
bool* AAnimalBase::M_PtrGetreplicatedHasMovedRecently() {
	return reinterpret_cast<bool*>((byte*)this + 1246);
}
void AAnimalBase::M_SetreplicatedHasMovedRecently(const bool& value) {
	Write((byte*)this + 1246, value);
}
// Member Getter and Setter of replicatedLocation
// Declaration: struct FVector_NetQuantize replicatedLocation
struct FVector_NetQuantize AAnimalBase::M_GetreplicatedLocation() const {
	return Read<struct FVector_NetQuantize>((byte*)this + 1248);
}
struct FVector_NetQuantize* AAnimalBase::M_PtrGetreplicatedLocation() {
	return reinterpret_cast<struct FVector_NetQuantize*>((byte*)this + 1248);
}
void AAnimalBase::M_SetreplicatedLocation(const struct FVector_NetQuantize& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of replicatedRotationYaw
// Declaration: int32_t replicatedRotationYaw
int32_t AAnimalBase::M_GetreplicatedRotationYaw() const {
	return Read<int32_t>((byte*)this + 1260);
}
int32_t* AAnimalBase::M_PtrGetreplicatedRotationYaw() {
	return reinterpret_cast<int32_t*>((byte*)this + 1260);
}
void AAnimalBase::M_SetreplicatedRotationYaw(const int32_t& value) {
	Write((byte*)this + 1260, value);
}
// Member Getter and Setter of replicatedCollisionActorsToIgnore
// Declaration: TArray<class AActor*> replicatedCollisionActorsToIgnore
TArray<class AActor*> AAnimalBase::M_GetreplicatedCollisionActorsToIgnore() const {
	return Read<TArray<class AActor*>>((byte*)this + 1264);
}
TArray<class AActor*>* AAnimalBase::M_PtrGetreplicatedCollisionActorsToIgnore() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 1264);
}
void AAnimalBase::M_SetreplicatedCollisionActorsToIgnore(const TArray<class AActor*>& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of replicatedLookAtTarget
// Declaration: class AActor* replicatedLookAtTarget
class AActor* AAnimalBase::M_GetreplicatedLookAtTarget() const {
	return Read<class AActor*>((byte*)this + 1280);
}
class AActor** AAnimalBase::M_PtrGetreplicatedLookAtTarget() {
	return reinterpret_cast<class AActor**>((byte*)this + 1280);
}
void AAnimalBase::M_SetreplicatedLookAtTarget(const class AActor*& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool AAnimalBase::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 1576);
}
bool* AAnimalBase::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 1576);
}
void AAnimalBase::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 1576, value);
}
// Member Getter and Setter of MovementMode
// Declaration: EAnimalMovementMode MovementMode
EAnimalMovementMode AAnimalBase::M_GetMovementMode() const {
	return Read<EAnimalMovementMode>((byte*)this + 1577);
}
EAnimalMovementMode* AAnimalBase::M_PtrGetMovementMode() {
	return reinterpret_cast<EAnimalMovementMode*>((byte*)this + 1577);
}
void AAnimalBase::M_SetMovementMode(const EAnimalMovementMode& value) {
	Write((byte*)this + 1577, value);
}
// Member Getter and Setter of RotationMode
// Declaration: EAnimalRotationMode RotationMode
EAnimalRotationMode AAnimalBase::M_GetRotationMode() const {
	return Read<EAnimalRotationMode>((byte*)this + 1578);
}
EAnimalRotationMode* AAnimalBase::M_PtrGetRotationMode() {
	return reinterpret_cast<EAnimalRotationMode*>((byte*)this + 1578);
}
void AAnimalBase::M_SetRotationMode(const EAnimalRotationMode& value) {
	Write((byte*)this + 1578, value);
}
// Member Getter and Setter of targetRotationSpeed
// Declaration: float targetRotationSpeed
float AAnimalBase::M_GettargetRotationSpeed() const {
	return Read<float>((byte*)this + 1580);
}
float* AAnimalBase::M_PtrGettargetRotationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1580);
}
void AAnimalBase::M_SettargetRotationSpeed(const float& value) {
	Write((byte*)this + 1580, value);
}
// Member Getter and Setter of isMovementReplicated
// Declaration: bool isMovementReplicated
bool AAnimalBase::M_GetisMovementReplicated() const {
	return Read<bool>((byte*)this + 1584);
}
bool* AAnimalBase::M_PtrGetisMovementReplicated() {
	return reinterpret_cast<bool*>((byte*)this + 1584);
}
void AAnimalBase::M_SetisMovementReplicated(const bool& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of canMoveBackwards
// Declaration: bool canMoveBackwards
bool AAnimalBase::M_GetcanMoveBackwards() const {
	return Read<bool>((byte*)this + 1585);
}
bool* AAnimalBase::M_PtrGetcanMoveBackwards() {
	return reinterpret_cast<bool*>((byte*)this + 1585);
}
void AAnimalBase::M_SetcanMoveBackwards(const bool& value) {
	Write((byte*)this + 1585, value);
}
// Member Getter and Setter of replicatedLocationInterpolationSpeed
// Declaration: float replicatedLocationInterpolationSpeed
float AAnimalBase::M_GetreplicatedLocationInterpolationSpeed() const {
	return Read<float>((byte*)this + 1588);
}
float* AAnimalBase::M_PtrGetreplicatedLocationInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1588);
}
void AAnimalBase::M_SetreplicatedLocationInterpolationSpeed(const float& value) {
	Write((byte*)this + 1588, value);
}
// Member Getter and Setter of replicatedRotationInterpolationSpeed
// Declaration: float replicatedRotationInterpolationSpeed
float AAnimalBase::M_GetreplicatedRotationInterpolationSpeed() const {
	return Read<float>((byte*)this + 1592);
}
float* AAnimalBase::M_PtrGetreplicatedRotationInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1592);
}
void AAnimalBase::M_SetreplicatedRotationInterpolationSpeed(const float& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of replicatedVelocityInterpolationSpeed
// Declaration: float replicatedVelocityInterpolationSpeed
float AAnimalBase::M_GetreplicatedVelocityInterpolationSpeed() const {
	return Read<float>((byte*)this + 1596);
}
float* AAnimalBase::M_PtrGetreplicatedVelocityInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1596);
}
void AAnimalBase::M_SetreplicatedVelocityInterpolationSpeed(const float& value) {
	Write((byte*)this + 1596, value);
}
// Member Getter and Setter of replicatedLocationSnapDistance
// Declaration: float replicatedLocationSnapDistance
float AAnimalBase::M_GetreplicatedLocationSnapDistance() const {
	return Read<float>((byte*)this + 1600);
}
float* AAnimalBase::M_PtrGetreplicatedLocationSnapDistance() {
	return reinterpret_cast<float*>((byte*)this + 1600);
}
void AAnimalBase::M_SetreplicatedLocationSnapDistance(const float& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of isCollisionEnabled
// Declaration: bool isCollisionEnabled
bool AAnimalBase::M_GetisCollisionEnabled() const {
	return Read<bool>((byte*)this + 1604);
}
bool* AAnimalBase::M_PtrGetisCollisionEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1604);
}
void AAnimalBase::M_SetisCollisionEnabled(const bool& value) {
	Write((byte*)this + 1604, value);
}
// Member Getter and Setter of collisionInfluenceSharpness
// Declaration: float collisionInfluenceSharpness
float AAnimalBase::M_GetcollisionInfluenceSharpness() const {
	return Read<float>((byte*)this + 1608);
}
float* AAnimalBase::M_PtrGetcollisionInfluenceSharpness() {
	return reinterpret_cast<float*>((byte*)this + 1608);
}
void AAnimalBase::M_SetcollisionInfluenceSharpness(const float& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of collisionBaseInfluenceCoefficient
// Declaration: float collisionBaseInfluenceCoefficient
float AAnimalBase::M_GetcollisionBaseInfluenceCoefficient() const {
	return Read<float>((byte*)this + 1612);
}
float* AAnimalBase::M_PtrGetcollisionBaseInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 1612);
}
void AAnimalBase::M_SetcollisionBaseInfluenceCoefficient(const float& value) {
	Write((byte*)this + 1612, value);
}
// Member Getter and Setter of collisionVelocityInfluenceCoefficient
// Declaration: float collisionVelocityInfluenceCoefficient
float AAnimalBase::M_GetcollisionVelocityInfluenceCoefficient() const {
	return Read<float>((byte*)this + 1616);
}
float* AAnimalBase::M_PtrGetcollisionVelocityInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 1616);
}
void AAnimalBase::M_SetcollisionVelocityInfluenceCoefficient(const float& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of collisionMassInfluenceCoefficient
// Declaration: float collisionMassInfluenceCoefficient
float AAnimalBase::M_GetcollisionMassInfluenceCoefficient() const {
	return Read<float>((byte*)this + 1620);
}
float* AAnimalBase::M_PtrGetcollisionMassInfluenceCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 1620);
}
void AAnimalBase::M_SetcollisionMassInfluenceCoefficient(const float& value) {
	Write((byte*)this + 1620, value);
}
// Member Getter and Setter of collisionShapeComponentReferences
// Declaration: TArray<struct FComponentReference> collisionShapeComponentReferences
TArray<struct FComponentReference> AAnimalBase::M_GetcollisionShapeComponentReferences() const {
	return Read<TArray<struct FComponentReference>>((byte*)this + 1624);
}
TArray<struct FComponentReference>* AAnimalBase::M_PtrGetcollisionShapeComponentReferences() {
	return reinterpret_cast<TArray<struct FComponentReference>*>((byte*)this + 1624);
}
void AAnimalBase::M_SetcollisionShapeComponentReferences(const TArray<struct FComponentReference>& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of ragdollGetUpTargetBone
// Declaration: struct FName ragdollGetUpTargetBone
struct FName AAnimalBase::M_GetragdollGetUpTargetBone() const {
	return Read<struct FName>((byte*)this + 1640);
}
struct FName* AAnimalBase::M_PtrGetragdollGetUpTargetBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 1640);
}
void AAnimalBase::M_SetragdollGetUpTargetBone(const struct FName& value) {
	Write((byte*)this + 1640, value);
}
// Member Getter and Setter of ragdollRootBone
// Declaration: struct FName ragdollRootBone
struct FName AAnimalBase::M_GetragdollRootBone() const {
	return Read<struct FName>((byte*)this + 1648);
}
struct FName* AAnimalBase::M_PtrGetragdollRootBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 1648);
}
void AAnimalBase::M_SetragdollRootBone(const struct FName& value) {
	Write((byte*)this + 1648, value);
}
// Member Getter and Setter of ragdollTraceChannel
// Declaration: TEnumAsByte<ETraceTypeQuery> ragdollTraceChannel
TEnumAsByte<ETraceTypeQuery> AAnimalBase::M_GetragdollTraceChannel() const {
	return Read<TEnumAsByte<ETraceTypeQuery>>((byte*)this + 1656);
}
TEnumAsByte<ETraceTypeQuery>* AAnimalBase::M_PtrGetragdollTraceChannel() {
	return reinterpret_cast<TEnumAsByte<ETraceTypeQuery>*>((byte*)this + 1656);
}
void AAnimalBase::M_SetragdollTraceChannel(const TEnumAsByte<ETraceTypeQuery>& value) {
	Write((byte*)this + 1656, value);
}
// Member Getter and Setter of isRagdollReplicated
// Declaration: bool isRagdollReplicated
bool AAnimalBase::M_GetisRagdollReplicated() const {
	return Read<bool>((byte*)this + 1657);
}
bool* AAnimalBase::M_PtrGetisRagdollReplicated() {
	return reinterpret_cast<bool*>((byte*)this + 1657);
}
void AAnimalBase::M_SetisRagdollReplicated(const bool& value) {
	Write((byte*)this + 1657, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool AAnimalBase::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 1658);
}
bool* AAnimalBase::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1658);
}
void AAnimalBase::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 1658, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.AddCollisionIgnoredActor
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::AddCollisionIgnoredActor(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.AddCollisionIgnoredActor");

	struct AAnimalBase_AddCollisionIgnoredActor_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	AAnimalBase_AddCollisionIgnoredActor_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.CalculateDamageToReceive
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const
// Params:
// Name: appliedDamage	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hits	Type: TArray<struct FHitResult>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.CalculateDamageToReceive");

	struct AAnimalBase_CalculateDamageToReceive_Params {
		float appliedDamage;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		TArray<struct FHitResult> hits;			//Offset: 16 | ElementSize: 16
		class AController* damageInstigator;			//Offset: 32 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 40 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 48 | ElementSize: 8
		float ReturnValue;			//Offset: 56 | ElementSize: 4
	};
	AAnimalBase_CalculateDamageToReceive_Params params;
	params.appliedDamage = appliedDamage;
	params.hitFromDirection = hitFromDirection;
	params.hits = hits;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.CalculateTargetAcceleration
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::CalculateTargetAcceleration() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.CalculateTargetAcceleration");

	struct AAnimalBase_CalculateTargetAcceleration_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_CalculateTargetAcceleration_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.CalculateTargetSpeed
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::CalculateTargetSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.CalculateTargetSpeed");

	struct AAnimalBase_CalculateTargetSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_CalculateTargetSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.CanStartRagdoll
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::CanStartRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.CanStartRagdoll");

	struct AAnimalBase_CanStartRagdoll_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_CanStartRagdoll_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetCurrentIdleType
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EAnimalIdleType	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EAnimalIdleType AAnimalBase::GetCurrentIdleType()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetCurrentIdleType");

	struct AAnimalBase_GetCurrentIdleType_Params {
		EAnimalIdleType ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_GetCurrentIdleType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetForwardSpeed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::GetForwardSpeed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetForwardSpeed");

	struct AAnimalBase_GetForwardSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_GetForwardSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetHorizontalSpeed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::GetHorizontalSpeed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetHorizontalSpeed");

	struct AAnimalBase_GetHorizontalSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_GetHorizontalSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetHorizontalVelocityVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D AAnimalBase::GetHorizontalVelocityVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetHorizontalVelocityVector");

	struct AAnimalBase_GetHorizontalVelocityVector_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AAnimalBase_GetHorizontalVelocityVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetLookAtTarget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AAnimalBase::GetLookAtTarget()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetLookAtTarget");

	struct AAnimalBase_GetLookAtTarget_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AAnimalBase_GetLookAtTarget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetMovementMode
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EAnimalMovementMode	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EAnimalMovementMode AAnimalBase::GetMovementMode()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetMovementMode");

	struct AAnimalBase_GetMovementMode_Params {
		EAnimalMovementMode ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_GetMovementMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetSpeed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::GetSpeed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetSpeed");

	struct AAnimalBase_GetSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_GetSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetVelocityVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AAnimalBase::GetVelocityVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetVelocityVector");

	struct AAnimalBase_GetVelocityVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AAnimalBase_GetVelocityVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.GetVerticalSpeed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AAnimalBase::GetVerticalSpeed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.GetVerticalSpeed");

	struct AAnimalBase_GetVerticalSpeed_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_GetVerticalSpeed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.HasMovedRecently
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::HasMovedRecently()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.HasMovedRecently");

	struct AAnimalBase_HasMovedRecently_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_HasMovedRecently_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.IsDead
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::IsDead()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.IsDead");

	struct AAnimalBase_IsDead_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_IsDead_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.IsMoving
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::IsMoving()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.IsMoving");

	struct AAnimalBase_IsMoving_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_IsMoving_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.IsMovingBackwards
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::IsMovingBackwards()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.IsMovingBackwards");

	struct AAnimalBase_IsMovingBackwards_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_IsMovingBackwards_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.IsMovingHorizontally
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::IsMovingHorizontally()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.IsMovingHorizontally");

	struct AAnimalBase_IsMovingHorizontally_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_IsMovingHorizontally_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.IsMovingVertically
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::IsMovingVertically()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.IsMovingVertically");

	struct AAnimalBase_IsMovingVertically_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_IsMovingVertically_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnAnimalMovementModeChanged
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: newAnimalMovementMode	Type: EAnimalMovementMode	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: previousAnimalMovementMode	Type: EAnimalMovementMode	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::OnAnimalMovementModeChanged(EAnimalMovementMode newAnimalMovementMode, EAnimalMovementMode previousAnimalMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnAnimalMovementModeChanged");

	struct AAnimalBase_OnAnimalMovementModeChanged_Params {
		EAnimalMovementMode newAnimalMovementMode;			//Offset: 0 | ElementSize: 1
		EAnimalMovementMode previousAnimalMovementMode;			//Offset: 1 | ElementSize: 1
	};
	AAnimalBase_OnAnimalMovementModeChanged_Params params;
	params.newAnimalMovementMode = newAnimalMovementMode;
	params.previousAnimalMovementMode = previousAnimalMovementMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnBeforePointDamageApplied
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const
// Params:
// Name: damageToApply	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::OnBeforePointDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const struct FHitResult& Hit, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnBeforePointDamageApplied");

	struct AAnimalBase_OnBeforePointDamageApplied_Params {
		float damageToApply;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 16 | ElementSize: 136
		class AController* damageInstigator;			//Offset: 152 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 160 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 168 | ElementSize: 8
	};
	AAnimalBase_OnBeforePointDamageApplied_Params params;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.Hit = Hit;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnBeforeRadialDamageApplied
// Flags: Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const
// Params:
// Name: damageToApply	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitFromDirection	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hits	Type: TArray<struct FHitResult>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: damageInstigator	Type: class AController*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageTypeClass	Type: class UDamageType*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::OnBeforeRadialDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnBeforeRadialDamageApplied");

	struct AAnimalBase_OnBeforeRadialDamageApplied_Params {
		float damageToApply;			//Offset: 0 | ElementSize: 4
		struct FVector hitFromDirection;			//Offset: 4 | ElementSize: 12
		TArray<struct FHitResult> hits;			//Offset: 16 | ElementSize: 16
		class AController* damageInstigator;			//Offset: 32 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 40 | ElementSize: 8
		class UDamageType* DamageTypeClass;			//Offset: 48 | ElementSize: 8
	};
	AAnimalBase_OnBeforeRadialDamageApplied_Params params;
	params.damageToApply = damageToApply;
	params.hitFromDirection = hitFromDirection;
	params.hits = hits;
	params.damageInstigator = damageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnPreRagdollStart
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAnimalBase::OnPreRagdollStart() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnPreRagdollStart");

	struct AAnimalBase_OnPreRagdollStart_Params {
	};
	AAnimalBase_OnPreRagdollStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnPreRagdollStop
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAnimalBase::OnPreRagdollStop() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnPreRagdollStop");

	struct AAnimalBase_OnPreRagdollStop_Params {
	};
	AAnimalBase_OnPreRagdollStop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnRagdollStarted
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAnimalBase::OnRagdollStarted() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnRagdollStarted");

	struct AAnimalBase_OnRagdollStarted_Params {
	};
	AAnimalBase_OnRagdollStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnRagdollStopped
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAnimalBase::OnRagdollStopped() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnRagdollStopped");

	struct AAnimalBase_OnRagdollStopped_Params {
	};
	AAnimalBase_OnRagdollStopped_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnRepLocation
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void AAnimalBase::OnRepLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnRepLocation");

	struct AAnimalBase_OnRepLocation_Params {
	};
	AAnimalBase_OnRepLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OnRepMovementMode
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void AAnimalBase::OnRepMovementMode() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OnRepMovementMode");

	struct AAnimalBase_OnRepMovementMode_Params {
	};
	AAnimalBase_OnRepMovementMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OverrideRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: newOverrideRotationStrength	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::OverrideRotation(const struct FRotator& NewRotation, float newOverrideRotationStrength) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OverrideRotation");

	struct AAnimalBase_OverrideRotation_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
		float newOverrideRotationStrength;			//Offset: 12 | ElementSize: 4
	};
	AAnimalBase_OverrideRotation_Params params;
	params.NewRotation = NewRotation;
	params.newOverrideRotationStrength = newOverrideRotationStrength;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.OverrideRotationInstantly
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::OverrideRotationInstantly(const struct FRotator& NewRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.OverrideRotationInstantly");

	struct AAnimalBase_OverrideRotationInstantly_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
	};
	AAnimalBase_OverrideRotationInstantly_Params params;
	params.NewRotation = NewRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.RemoveCollisionIgnoredActor
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::RemoveCollisionIgnoredActor(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.RemoveCollisionIgnoredActor");

	struct AAnimalBase_RemoveCollisionIgnoredActor_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	AAnimalBase_RemoveCollisionIgnoredActor_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.ReplicateAttack
// Flags: Final, Net, Native, Event, NetMulticast, Private
// Params:
/////////////////////////////////////////////
void AAnimalBase::ReplicateAttack() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.ReplicateAttack");

	struct AAnimalBase_ReplicateAttack_Params {
	};
	AAnimalBase_ReplicateAttack_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.ReplicateHit
// Flags: Final, Net, Native, Event, NetMulticast, Private, HasDefaults
// Params:
// Name: HitLocation	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: hitForce	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::ReplicateHit(struct FVector& HitLocation, struct FVector& hitForce) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.ReplicateHit");

	struct AAnimalBase_ReplicateHit_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector hitForce;			//Offset: 12 | ElementSize: 12
	};
	AAnimalBase_ReplicateHit_Params params;
	params.HitLocation = HitLocation;
	params.hitForce = hitForce;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetCanCollisionBeDormant
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newCanCollisionBeDormant	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetCanCollisionBeDormant(bool newCanCollisionBeDormant) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetCanCollisionBeDormant");

	struct AAnimalBase_SetCanCollisionBeDormant_Params {
		bool newCanCollisionBeDormant;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_SetCanCollisionBeDormant_Params params;
	params.newCanCollisionBeDormant = newCanCollisionBeDormant;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetCanMoveBackwards
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newCanMoveBackwards	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetCanMoveBackwards(bool newCanMoveBackwards) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetCanMoveBackwards");

	struct AAnimalBase_SetCanMoveBackwards_Params {
		bool newCanMoveBackwards;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_SetCanMoveBackwards_Params params;
	params.newCanMoveBackwards = newCanMoveBackwards;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetCurrentIdleType
// Flags: Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable
// Params:
// Name: idleType	Type: EAnimalIdleType	Flags: ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetCurrentIdleType(EAnimalIdleType& idleType) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetCurrentIdleType");

	struct AAnimalBase_SetCurrentIdleType_Params {
		EAnimalIdleType idleType;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_SetCurrentIdleType_Params params;
	params.idleType = idleType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetLookAtTarget
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newLookAtTarget	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetLookAtTarget(class AActor* newLookAtTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetLookAtTarget");

	struct AAnimalBase_SetLookAtTarget_Params {
		class AActor* newLookAtTarget;			//Offset: 0 | ElementSize: 8
	};
	AAnimalBase_SetLookAtTarget_Params params;
	params.newLookAtTarget = newLookAtTarget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetMovementMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newAnimalMovementMode	Type: EAnimalMovementMode	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetMovementMode(EAnimalMovementMode newAnimalMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetMovementMode");

	struct AAnimalBase_SetMovementMode_Params {
		EAnimalMovementMode newAnimalMovementMode;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_SetMovementMode_Params params;
	params.newAnimalMovementMode = newAnimalMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetReplicatedMovementMode
// Flags: Final, Net, NetReliable, Native, Event, Private, NetServer
// Params:
// Name: newReplicatedAnimalMovementMode	Type: EAnimalMovementMode	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetReplicatedMovementMode(EAnimalMovementMode newReplicatedAnimalMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetReplicatedMovementMode");

	struct AAnimalBase_SetReplicatedMovementMode_Params {
		EAnimalMovementMode newReplicatedAnimalMovementMode;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_SetReplicatedMovementMode_Params params;
	params.newReplicatedAnimalMovementMode = newReplicatedAnimalMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetReplicatedMovementParameters
// Flags: Final, Net, Native, Event, Private, NetServer
// Params:
// Name: newReplicatedLocation	Type: struct FVector_NetQuantize	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newReplicatedRotationYaw	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newReplicatedVelocity	Type: struct FVector_NetQuantize	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetReplicatedMovementParameters(struct FVector_NetQuantize& newReplicatedLocation, int32_t newReplicatedRotationYaw, struct FVector_NetQuantize& newReplicatedVelocity) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetReplicatedMovementParameters");

	struct AAnimalBase_SetReplicatedMovementParameters_Params {
		struct FVector_NetQuantize newReplicatedLocation;			//Offset: 0 | ElementSize: 12
		int32_t newReplicatedRotationYaw;			//Offset: 12 | ElementSize: 4
		struct FVector_NetQuantize newReplicatedVelocity;			//Offset: 16 | ElementSize: 12
	};
	AAnimalBase_SetReplicatedMovementParameters_Params params;
	params.newReplicatedLocation = newReplicatedLocation;
	params.newReplicatedRotationYaw = newReplicatedRotationYaw;
	params.newReplicatedVelocity = newReplicatedVelocity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetRotationMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newRotationMode	Type: EAnimalRotationMode	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetRotationMode(EAnimalRotationMode newRotationMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetRotationMode");

	struct AAnimalBase_SetRotationMode_Params {
		EAnimalRotationMode newRotationMode;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_SetRotationMode_Params params;
	params.newRotationMode = newRotationMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.TakeAnyDamage
// Flags: Final, Native, Private
// Params:
// Name: Damage	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InstigatedBy	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::TakeAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.TakeAnyDamage");

	struct AAnimalBase_TakeAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	AAnimalBase_TakeAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.WasRagdollOnGround
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAnimalBase::WasRagdollOnGround()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.WasRagdollOnGround");

	struct AAnimalBase_WasRagdollOnGround_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAnimalBase_WasRagdollOnGround_Params params;

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