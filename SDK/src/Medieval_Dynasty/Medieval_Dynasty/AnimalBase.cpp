#include "../SDK.h"
#include "AnimalBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector AAnimalBase::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 1208);
}
struct FVector* AAnimalBase::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1208);
}
void AAnimalBase::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of Speed
// Declaration: float Speed
float AAnimalBase::M_GetSpeed() const {
	return Read<float>((byte*)this + 1220);
}
float* AAnimalBase::M_PtrGetSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1220);
}
void AAnimalBase::M_SetSpeed(const float& value) {
	Write((byte*)this + 1220, value);
}
// Member Getter and Setter of previousVelocity
// Declaration: struct FVector previousVelocity
struct FVector AAnimalBase::M_GetpreviousVelocity() const {
	return Read<struct FVector>((byte*)this + 1224);
}
struct FVector* AAnimalBase::M_PtrGetpreviousVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1224);
}
void AAnimalBase::M_SetpreviousVelocity(const struct FVector& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of targetMaxWalkSpeed
// Declaration: float targetMaxWalkSpeed
float AAnimalBase::M_GettargetMaxWalkSpeed() const {
	return Read<float>((byte*)this + 1236);
}
float* AAnimalBase::M_PtrGettargetMaxWalkSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1236);
}
void AAnimalBase::M_SettargetMaxWalkSpeed(const float& value) {
	Write((byte*)this + 1236, value);
}
// Member Getter and Setter of slopeSpeedMultiplier
// Declaration: float slopeSpeedMultiplier
float AAnimalBase::M_GetslopeSpeedMultiplier() const {
	return Read<float>((byte*)this + 1240);
}
float* AAnimalBase::M_PtrGetslopeSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1240);
}
void AAnimalBase::M_SetslopeSpeedMultiplier(const float& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool AAnimalBase::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 1244);
}
bool* AAnimalBase::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 1244);
}
void AAnimalBase::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 1244, value);
}
// Member Getter and Setter of lastVelocityRotation
// Declaration: struct FRotator lastVelocityRotation
struct FRotator AAnimalBase::M_GetlastVelocityRotation() const {
	return Read<struct FRotator>((byte*)this + 1248);
}
struct FRotator* AAnimalBase::M_PtrGetlastVelocityRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1248);
}
void AAnimalBase::M_SetlastVelocityRotation(const struct FRotator& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of MovementMode
// Declaration: EAnimalMovementMode MovementMode
EAnimalMovementMode AAnimalBase::M_GetMovementMode() const {
	return Read<EAnimalMovementMode>((byte*)this + 1260);
}
EAnimalMovementMode* AAnimalBase::M_PtrGetMovementMode() {
	return reinterpret_cast<EAnimalMovementMode*>((byte*)this + 1260);
}
void AAnimalBase::M_SetMovementMode(const EAnimalMovementMode& value) {
	Write((byte*)this + 1260, value);
}
// Member Getter and Setter of previousMovementMode
// Declaration: EAnimalMovementMode previousMovementMode
EAnimalMovementMode AAnimalBase::M_GetpreviousMovementMode() const {
	return Read<EAnimalMovementMode>((byte*)this + 1261);
}
EAnimalMovementMode* AAnimalBase::M_PtrGetpreviousMovementMode() {
	return reinterpret_cast<EAnimalMovementMode*>((byte*)this + 1261);
}
void AAnimalBase::M_SetpreviousMovementMode(const EAnimalMovementMode& value) {
	Write((byte*)this + 1261, value);
}
// Member Getter and Setter of RotationMode
// Declaration: EAnimalRotationMode RotationMode
EAnimalRotationMode AAnimalBase::M_GetRotationMode() const {
	return Read<EAnimalRotationMode>((byte*)this + 1262);
}
EAnimalRotationMode* AAnimalBase::M_PtrGetRotationMode() {
	return reinterpret_cast<EAnimalRotationMode*>((byte*)this + 1262);
}
void AAnimalBase::M_SetRotationMode(const EAnimalRotationMode& value) {
	Write((byte*)this + 1262, value);
}
// Member Getter and Setter of Rotation
// Declaration: struct FRotator Rotation
struct FRotator AAnimalBase::M_GetRotation() const {
	return Read<struct FRotator>((byte*)this + 1264);
}
struct FRotator* AAnimalBase::M_PtrGetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1264);
}
void AAnimalBase::M_SetRotation(const struct FRotator& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of TargetRotation
// Declaration: struct FRotator TargetRotation
struct FRotator AAnimalBase::M_GetTargetRotation() const {
	return Read<struct FRotator>((byte*)this + 1276);
}
struct FRotator* AAnimalBase::M_PtrGetTargetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1276);
}
void AAnimalBase::M_SetTargetRotation(const struct FRotator& value) {
	Write((byte*)this + 1276, value);
}
// Member Getter and Setter of jumpRotation
// Declaration: struct FRotator jumpRotation
struct FRotator AAnimalBase::M_GetjumpRotation() const {
	return Read<struct FRotator>((byte*)this + 1288);
}
struct FRotator* AAnimalBase::M_PtrGetjumpRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1288);
}
void AAnimalBase::M_SetjumpRotation(const struct FRotator& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of lookingRotation
// Declaration: struct FRotator lookingRotation
struct FRotator AAnimalBase::M_GetlookingRotation() const {
	return Read<struct FRotator>((byte*)this + 1300);
}
struct FRotator* AAnimalBase::M_PtrGetlookingRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1300);
}
void AAnimalBase::M_SetlookingRotation(const struct FRotator& value) {
	Write((byte*)this + 1300, value);
}
// Member Getter and Setter of aimYawRate
// Declaration: float aimYawRate
float AAnimalBase::M_GetaimYawRate() const {
	return Read<float>((byte*)this + 1312);
}
float* AAnimalBase::M_PtrGetaimYawRate() {
	return reinterpret_cast<float*>((byte*)this + 1312);
}
void AAnimalBase::M_SetaimYawRate(const float& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of aimYawDelta
// Declaration: float aimYawDelta
float AAnimalBase::M_GetaimYawDelta() const {
	return Read<float>((byte*)this + 1316);
}
float* AAnimalBase::M_PtrGetaimYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 1316);
}
void AAnimalBase::M_SetaimYawDelta(const float& value) {
	Write((byte*)this + 1316, value);
}
// Member Getter and Setter of rotationRateMultiplier
// Declaration: float rotationRateMultiplier
float AAnimalBase::M_GetrotationRateMultiplier() const {
	return Read<float>((byte*)this + 1320);
}
float* AAnimalBase::M_PtrGetrotationRateMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1320);
}
void AAnimalBase::M_SetrotationRateMultiplier(const float& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of isRotationManaged
// Declaration: bool isRotationManaged
bool AAnimalBase::M_GetisRotationManaged() const {
	return Read<bool>((byte*)this + 1324);
}
bool* AAnimalBase::M_PtrGetisRotationManaged() {
	return reinterpret_cast<bool*>((byte*)this + 1324);
}
void AAnimalBase::M_SetisRotationManaged(const bool& value) {
	Write((byte*)this + 1324, value);
}
// Member Getter and Setter of ragdollSpeedMultiplier
// Declaration: float ragdollSpeedMultiplier
float AAnimalBase::M_GetragdollSpeedMultiplier() const {
	return Read<float>((byte*)this + 1328);
}
float* AAnimalBase::M_PtrGetragdollSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1328);
}
void AAnimalBase::M_SetragdollSpeedMultiplier(const float& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of movementInput
// Declaration: struct FVector movementInput
struct FVector AAnimalBase::M_GetmovementInput() const {
	return Read<struct FVector>((byte*)this + 1332);
}
struct FVector* AAnimalBase::M_PtrGetmovementInput() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1332);
}
void AAnimalBase::M_SetmovementInput(const struct FVector& value) {
	Write((byte*)this + 1332, value);
}
// Member Getter and Setter of hasMovementInput
// Declaration: bool hasMovementInput
bool AAnimalBase::M_GethasMovementInput() const {
	return Read<bool>((byte*)this + 1344);
}
bool* AAnimalBase::M_PtrGethasMovementInput() {
	return reinterpret_cast<bool*>((byte*)this + 1344);
}
void AAnimalBase::M_SethasMovementInput(const bool& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of lastMovementInputRotation
// Declaration: struct FRotator lastMovementInputRotation
struct FRotator AAnimalBase::M_GetlastMovementInputRotation() const {
	return Read<struct FRotator>((byte*)this + 1348);
}
struct FRotator* AAnimalBase::M_PtrGetlastMovementInputRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1348);
}
void AAnimalBase::M_SetlastMovementInputRotation(const struct FRotator& value) {
	Write((byte*)this + 1348, value);
}
// Member Getter and Setter of movementInputVelocityDifference
// Declaration: float movementInputVelocityDifference
float AAnimalBase::M_GetmovementInputVelocityDifference() const {
	return Read<float>((byte*)this + 1360);
}
float* AAnimalBase::M_PtrGetmovementInputVelocityDifference() {
	return reinterpret_cast<float*>((byte*)this + 1360);
}
void AAnimalBase::M_SetmovementInputVelocityDifference(const float& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of controllerReference
// Declaration: class AController* controllerReference
class AController* AAnimalBase::M_GetcontrollerReference() const {
	return Read<class AController*>((byte*)this + 1368);
}
class AController** AAnimalBase::M_PtrGetcontrollerReference() {
	return reinterpret_cast<class AController**>((byte*)this + 1368);
}
void AAnimalBase::M_SetcontrollerReference(const class AController*& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of isDead
// Declaration: bool isDead
bool AAnimalBase::M_GetisDead() const {
	return Read<bool>((byte*)this + 1376);
}
bool* AAnimalBase::M_PtrGetisDead() {
	return reinterpret_cast<bool*>((byte*)this + 1376);
}
void AAnimalBase::M_SetisDead(const bool& value) {
	Write((byte*)this + 1376, value);
}
// Member Getter and Setter of isResting
// Declaration: bool isResting
bool AAnimalBase::M_GetisResting() const {
	return Read<bool>((byte*)this + 1377);
}
bool* AAnimalBase::M_PtrGetisResting() {
	return reinterpret_cast<bool*>((byte*)this + 1377);
}
void AAnimalBase::M_SetisResting(const bool& value) {
	Write((byte*)this + 1377, value);
}
// Member Getter and Setter of isLayingDown
// Declaration: bool isLayingDown
bool AAnimalBase::M_GetisLayingDown() const {
	return Read<bool>((byte*)this + 1378);
}
bool* AAnimalBase::M_PtrGetisLayingDown() {
	return reinterpret_cast<bool*>((byte*)this + 1378);
}
void AAnimalBase::M_SetisLayingDown(const bool& value) {
	Write((byte*)this + 1378, value);
}
// Member Getter and Setter of birdMovementMode
// Declaration: EBirdMovementMode birdMovementMode
EBirdMovementMode AAnimalBase::M_GetbirdMovementMode() const {
	return Read<EBirdMovementMode>((byte*)this + 1379);
}
EBirdMovementMode* AAnimalBase::M_PtrGetbirdMovementMode() {
	return reinterpret_cast<EBirdMovementMode*>((byte*)this + 1379);
}
void AAnimalBase::M_SetbirdMovementMode(const EBirdMovementMode& value) {
	Write((byte*)this + 1379, value);
}
// Member Getter and Setter of flyingRotator
// Declaration: struct FRotator flyingRotator
struct FRotator AAnimalBase::M_GetflyingRotator() const {
	return Read<struct FRotator>((byte*)this + 1380);
}
struct FRotator* AAnimalBase::M_PtrGetflyingRotator() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1380);
}
void AAnimalBase::M_SetflyingRotator(const struct FRotator& value) {
	Write((byte*)this + 1380, value);
}
// Member Getter and Setter of isGliding
// Declaration: bool isGliding
bool AAnimalBase::M_GetisGliding() const {
	return Read<bool>((byte*)this + 1392);
}
bool* AAnimalBase::M_PtrGetisGliding() {
	return reinterpret_cast<bool*>((byte*)this + 1392);
}
void AAnimalBase::M_SetisGliding(const bool& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of isLanding
// Declaration: bool isLanding
bool AAnimalBase::M_GetisLanding() const {
	return Read<bool>((byte*)this + 1393);
}
bool* AAnimalBase::M_PtrGetisLanding() {
	return reinterpret_cast<bool*>((byte*)this + 1393);
}
void AAnimalBase::M_SetisLanding(const bool& value) {
	Write((byte*)this + 1393, value);
}
// Member Getter and Setter of isWaterType
// Declaration: bool isWaterType
bool AAnimalBase::M_GetisWaterType() const {
	return Read<bool>((byte*)this + 1394);
}
bool* AAnimalBase::M_PtrGetisWaterType() {
	return reinterpret_cast<bool*>((byte*)this + 1394);
}
void AAnimalBase::M_SetisWaterType(const bool& value) {
	Write((byte*)this + 1394, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.CalculateVariables
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::CalculateVariables(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.CalculateVariables");

	struct AAnimalBase_CalculateVariables_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
	};
	AAnimalBase_CalculateVariables_Params params;
	params.DeltaTime = DeltaTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.SetRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: newTargetRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAnimalBase::SetRotation(struct FRotator newTargetRotation, bool interpRotation, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.SetRotation");

	struct AAnimalBase_SetRotation_Params {
		struct FRotator newTargetRotation;			//Offset: 0 | ElementSize: 12
		bool interpRotation;			//Offset: 12 | ElementSize: 1
		float interpSpeed;			//Offset: 16 | ElementSize: 4
	};
	AAnimalBase_SetRotation_Params params;
	params.newTargetRotation = newTargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimalBase.UpdateMovementSettings
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAnimalBase::UpdateMovementSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimalBase.UpdateMovementSettings");

	struct AAnimalBase_UpdateMovementSettings_Params {
	};
	AAnimalBase_UpdateMovementSettings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}