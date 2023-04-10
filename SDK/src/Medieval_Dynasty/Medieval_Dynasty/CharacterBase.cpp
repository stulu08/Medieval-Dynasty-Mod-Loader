#include "../SDK.h"
#include "CharacterBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of isMovementInterpolationEnabled
// Declaration: bool isMovementInterpolationEnabled
bool ACharacterBase::M_GetisMovementInterpolationEnabled() const {
	return Read<bool>((byte*)this + 1292);
}
bool* ACharacterBase::M_PtrGetisMovementInterpolationEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1292);
}
void ACharacterBase::M_SetisMovementInterpolationEnabled(const bool& value) {
	Write((byte*)this + 1292, value);
}
// Member Getter and Setter of Velocity
// Declaration: struct FVector Velocity
struct FVector ACharacterBase::M_GetVelocity() const {
	return Read<struct FVector>((byte*)this + 1296);
}
struct FVector* ACharacterBase::M_PtrGetVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1296);
}
void ACharacterBase::M_SetVelocity(const struct FVector& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of Speed
// Declaration: float Speed
float ACharacterBase::M_GetSpeed() const {
	return Read<float>((byte*)this + 1308);
}
float* ACharacterBase::M_PtrGetSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1308);
}
void ACharacterBase::M_SetSpeed(const float& value) {
	Write((byte*)this + 1308, value);
}
// Member Getter and Setter of previousVelocity
// Declaration: struct FVector previousVelocity
struct FVector ACharacterBase::M_GetpreviousVelocity() const {
	return Read<struct FVector>((byte*)this + 1312);
}
struct FVector* ACharacterBase::M_PtrGetpreviousVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1312);
}
void ACharacterBase::M_SetpreviousVelocity(const struct FVector& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of randomSpeedMultiplier
// Declaration: float randomSpeedMultiplier
float ACharacterBase::M_GetrandomSpeedMultiplier() const {
	return Read<float>((byte*)this + 1324);
}
float* ACharacterBase::M_PtrGetrandomSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1324);
}
void ACharacterBase::M_SetrandomSpeedMultiplier(const float& value) {
	Write((byte*)this + 1324, value);
}
// Member Getter and Setter of pushSpeedMultiplier
// Declaration: float pushSpeedMultiplier
float ACharacterBase::M_GetpushSpeedMultiplier() const {
	return Read<float>((byte*)this + 1328);
}
float* ACharacterBase::M_PtrGetpushSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1328);
}
void ACharacterBase::M_SetpushSpeedMultiplier(const float& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of hitSpeedMultiplier
// Declaration: float hitSpeedMultiplier
float ACharacterBase::M_GethitSpeedMultiplier() const {
	return Read<float>((byte*)this + 1332);
}
float* ACharacterBase::M_PtrGethitSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1332);
}
void ACharacterBase::M_SethitSpeedMultiplier(const float& value) {
	Write((byte*)this + 1332, value);
}
// Member Getter and Setter of inWaterIntensity
// Declaration: float inWaterIntensity
float ACharacterBase::M_GetinWaterIntensity() const {
	return Read<float>((byte*)this + 1336);
}
float* ACharacterBase::M_PtrGetinWaterIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1336);
}
void ACharacterBase::M_SetinWaterIntensity(const float& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of WalkingSpeed
// Declaration: float WalkingSpeed
float ACharacterBase::M_GetWalkingSpeed() const {
	return Read<float>((byte*)this + 1340);
}
float* ACharacterBase::M_PtrGetWalkingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1340);
}
void ACharacterBase::M_SetWalkingSpeed(const float& value) {
	Write((byte*)this + 1340, value);
}
// Member Getter and Setter of runningSpeed
// Declaration: float runningSpeed
float ACharacterBase::M_GetrunningSpeed() const {
	return Read<float>((byte*)this + 1344);
}
float* ACharacterBase::M_PtrGetrunningSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1344);
}
void ACharacterBase::M_SetrunningSpeed(const float& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of sprintingSpeed
// Declaration: float sprintingSpeed
float ACharacterBase::M_GetsprintingSpeed() const {
	return Read<float>((byte*)this + 1348);
}
float* ACharacterBase::M_PtrGetsprintingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1348);
}
void ACharacterBase::M_SetsprintingSpeed(const float& value) {
	Write((byte*)this + 1348, value);
}
// Member Getter and Setter of crouchingSpeed
// Declaration: float crouchingSpeed
float ACharacterBase::M_GetcrouchingSpeed() const {
	return Read<float>((byte*)this + 1352);
}
float* ACharacterBase::M_PtrGetcrouchingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1352);
}
void ACharacterBase::M_SetcrouchingSpeed(const float& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of WalkingAcceleration
// Declaration: float WalkingAcceleration
float ACharacterBase::M_GetWalkingAcceleration() const {
	return Read<float>((byte*)this + 1356);
}
float* ACharacterBase::M_PtrGetWalkingAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 1356);
}
void ACharacterBase::M_SetWalkingAcceleration(const float& value) {
	Write((byte*)this + 1356, value);
}
// Member Getter and Setter of runningAcceleration
// Declaration: float runningAcceleration
float ACharacterBase::M_GetrunningAcceleration() const {
	return Read<float>((byte*)this + 1360);
}
float* ACharacterBase::M_PtrGetrunningAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 1360);
}
void ACharacterBase::M_SetrunningAcceleration(const float& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of walkingDeceleration
// Declaration: float walkingDeceleration
float ACharacterBase::M_GetwalkingDeceleration() const {
	return Read<float>((byte*)this + 1364);
}
float* ACharacterBase::M_PtrGetwalkingDeceleration() {
	return reinterpret_cast<float*>((byte*)this + 1364);
}
void ACharacterBase::M_SetwalkingDeceleration(const float& value) {
	Write((byte*)this + 1364, value);
}
// Member Getter and Setter of runningDeceleration
// Declaration: float runningDeceleration
float ACharacterBase::M_GetrunningDeceleration() const {
	return Read<float>((byte*)this + 1368);
}
float* ACharacterBase::M_PtrGetrunningDeceleration() {
	return reinterpret_cast<float*>((byte*)this + 1368);
}
void ACharacterBase::M_SetrunningDeceleration(const float& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of walkingGroundFriction
// Declaration: float walkingGroundFriction
float ACharacterBase::M_GetwalkingGroundFriction() const {
	return Read<float>((byte*)this + 1372);
}
float* ACharacterBase::M_PtrGetwalkingGroundFriction() {
	return reinterpret_cast<float*>((byte*)this + 1372);
}
void ACharacterBase::M_SetwalkingGroundFriction(const float& value) {
	Write((byte*)this + 1372, value);
}
// Member Getter and Setter of runningGroundFriction
// Declaration: float runningGroundFriction
float ACharacterBase::M_GetrunningGroundFriction() const {
	return Read<float>((byte*)this + 1376);
}
float* ACharacterBase::M_PtrGetrunningGroundFriction() {
	return reinterpret_cast<float*>((byte*)this + 1376);
}
void ACharacterBase::M_SetrunningGroundFriction(const float& value) {
	Write((byte*)this + 1376, value);
}
// Member Getter and Setter of slopeSpeedMultiplier
// Declaration: float slopeSpeedMultiplier
float ACharacterBase::M_GetslopeSpeedMultiplier() const {
	return Read<float>((byte*)this + 1380);
}
float* ACharacterBase::M_PtrGetslopeSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1380);
}
void ACharacterBase::M_SetslopeSpeedMultiplier(const float& value) {
	Write((byte*)this + 1380, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool ACharacterBase::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 1384);
}
bool* ACharacterBase::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 1384);
}
void ACharacterBase::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of lastVelocityRotation
// Declaration: struct FRotator lastVelocityRotation
struct FRotator ACharacterBase::M_GetlastVelocityRotation() const {
	return Read<struct FRotator>((byte*)this + 1388);
}
struct FRotator* ACharacterBase::M_PtrGetlastVelocityRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1388);
}
void ACharacterBase::M_SetlastVelocityRotation(const struct FRotator& value) {
	Write((byte*)this + 1388, value);
}
// Member Getter and Setter of MovementMode
// Declaration: ECharacterMovementMode MovementMode
ECharacterMovementMode ACharacterBase::M_GetMovementMode() const {
	return Read<ECharacterMovementMode>((byte*)this + 1400);
}
ECharacterMovementMode* ACharacterBase::M_PtrGetMovementMode() {
	return reinterpret_cast<ECharacterMovementMode*>((byte*)this + 1400);
}
void ACharacterBase::M_SetMovementMode(const ECharacterMovementMode& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of previousMovementMode
// Declaration: ECharacterMovementMode previousMovementMode
ECharacterMovementMode ACharacterBase::M_GetpreviousMovementMode() const {
	return Read<ECharacterMovementMode>((byte*)this + 1401);
}
ECharacterMovementMode* ACharacterBase::M_PtrGetpreviousMovementMode() {
	return reinterpret_cast<ECharacterMovementMode*>((byte*)this + 1401);
}
void ACharacterBase::M_SetpreviousMovementMode(const ECharacterMovementMode& value) {
	Write((byte*)this + 1401, value);
}
// Member Getter and Setter of RotationMode
// Declaration: ECharacterRotationMode RotationMode
ECharacterRotationMode ACharacterBase::M_GetRotationMode() const {
	return Read<ECharacterRotationMode>((byte*)this + 1402);
}
ECharacterRotationMode* ACharacterBase::M_PtrGetRotationMode() {
	return reinterpret_cast<ECharacterRotationMode*>((byte*)this + 1402);
}
void ACharacterBase::M_SetRotationMode(const ECharacterRotationMode& value) {
	Write((byte*)this + 1402, value);
}
// Member Getter and Setter of stance
// Declaration: ECharacterStance stance
ECharacterStance ACharacterBase::M_Getstance() const {
	return Read<ECharacterStance>((byte*)this + 1403);
}
ECharacterStance* ACharacterBase::M_PtrGetstance() {
	return reinterpret_cast<ECharacterStance*>((byte*)this + 1403);
}
void ACharacterBase::M_Setstance(const ECharacterStance& value) {
	Write((byte*)this + 1403, value);
}
// Member Getter and Setter of gait
// Declaration: ECharacterGait gait
ECharacterGait ACharacterBase::M_Getgait() const {
	return Read<ECharacterGait>((byte*)this + 1404);
}
ECharacterGait* ACharacterBase::M_PtrGetgait() {
	return reinterpret_cast<ECharacterGait*>((byte*)this + 1404);
}
void ACharacterBase::M_Setgait(const ECharacterGait& value) {
	Write((byte*)this + 1404, value);
}
// Member Getter and Setter of Rotation
// Declaration: struct FRotator Rotation
struct FRotator ACharacterBase::M_GetRotation() const {
	return Read<struct FRotator>((byte*)this + 1408);
}
struct FRotator* ACharacterBase::M_PtrGetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1408);
}
void ACharacterBase::M_SetRotation(const struct FRotator& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of TargetRotation
// Declaration: struct FRotator TargetRotation
struct FRotator ACharacterBase::M_GetTargetRotation() const {
	return Read<struct FRotator>((byte*)this + 1420);
}
struct FRotator* ACharacterBase::M_PtrGetTargetRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1420);
}
void ACharacterBase::M_SetTargetRotation(const struct FRotator& value) {
	Write((byte*)this + 1420, value);
}
// Member Getter and Setter of jumpRotation
// Declaration: struct FRotator jumpRotation
struct FRotator ACharacterBase::M_GetjumpRotation() const {
	return Read<struct FRotator>((byte*)this + 1432);
}
struct FRotator* ACharacterBase::M_PtrGetjumpRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1432);
}
void ACharacterBase::M_SetjumpRotation(const struct FRotator& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of lookingRotation
// Declaration: struct FRotator lookingRotation
struct FRotator ACharacterBase::M_GetlookingRotation() const {
	return Read<struct FRotator>((byte*)this + 1444);
}
struct FRotator* ACharacterBase::M_PtrGetlookingRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1444);
}
void ACharacterBase::M_SetlookingRotation(const struct FRotator& value) {
	Write((byte*)this + 1444, value);
}
// Member Getter and Setter of cardinalDirection
// Declaration: ECharacterCardinalDirection cardinalDirection
ECharacterCardinalDirection ACharacterBase::M_GetcardinalDirection() const {
	return Read<ECharacterCardinalDirection>((byte*)this + 1456);
}
ECharacterCardinalDirection* ACharacterBase::M_PtrGetcardinalDirection() {
	return reinterpret_cast<ECharacterCardinalDirection*>((byte*)this + 1456);
}
void ACharacterBase::M_SetcardinalDirection(const ECharacterCardinalDirection& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of RotationOffset
// Declaration: float RotationOffset
float ACharacterBase::M_GetRotationOffset() const {
	return Read<float>((byte*)this + 1460);
}
float* ACharacterBase::M_PtrGetRotationOffset() {
	return reinterpret_cast<float*>((byte*)this + 1460);
}
void ACharacterBase::M_SetRotationOffset(const float& value) {
	Write((byte*)this + 1460, value);
}
// Member Getter and Setter of rotationRateMultiplier
// Declaration: float rotationRateMultiplier
float ACharacterBase::M_GetrotationRateMultiplier() const {
	return Read<float>((byte*)this + 1464);
}
float* ACharacterBase::M_PtrGetrotationRateMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1464);
}
void ACharacterBase::M_SetrotationRateMultiplier(const float& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of targetRotationDifference
// Declaration: float targetRotationDifference
float ACharacterBase::M_GettargetRotationDifference() const {
	return Read<float>((byte*)this + 1468);
}
float* ACharacterBase::M_PtrGettargetRotationDifference() {
	return reinterpret_cast<float*>((byte*)this + 1468);
}
void ACharacterBase::M_SettargetRotationDifference(const float& value) {
	Write((byte*)this + 1468, value);
}
// Member Getter and Setter of aimYawRate
// Declaration: float aimYawRate
float ACharacterBase::M_GetaimYawRate() const {
	return Read<float>((byte*)this + 1472);
}
float* ACharacterBase::M_PtrGetaimYawRate() {
	return reinterpret_cast<float*>((byte*)this + 1472);
}
void ACharacterBase::M_SetaimYawRate(const float& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of aimYawDelta
// Declaration: float aimYawDelta
float ACharacterBase::M_GetaimYawDelta() const {
	return Read<float>((byte*)this + 1476);
}
float* ACharacterBase::M_PtrGetaimYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 1476);
}
void ACharacterBase::M_SetaimYawDelta(const float& value) {
	Write((byte*)this + 1476, value);
}
// Member Getter and Setter of rotationYawDelta
// Declaration: float rotationYawDelta
float ACharacterBase::M_GetrotationYawDelta() const {
	return Read<float>((byte*)this + 1480);
}
float* ACharacterBase::M_PtrGetrotationYawDelta() {
	return reinterpret_cast<float*>((byte*)this + 1480);
}
void ACharacterBase::M_SetrotationYawDelta(const float& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of lookAtCharactersMinDistance
// Declaration: float lookAtCharactersMinDistance
float ACharacterBase::M_GetlookAtCharactersMinDistance() const {
	return Read<float>((byte*)this + 1484);
}
float* ACharacterBase::M_PtrGetlookAtCharactersMinDistance() {
	return reinterpret_cast<float*>((byte*)this + 1484);
}
void ACharacterBase::M_SetlookAtCharactersMinDistance(const float& value) {
	Write((byte*)this + 1484, value);
}
// Member Getter and Setter of smoothRotationYawDeltaInterpolationSpeed
// Declaration: float smoothRotationYawDeltaInterpolationSpeed
float ACharacterBase::M_GetsmoothRotationYawDeltaInterpolationSpeed() const {
	return Read<float>((byte*)this + 1488);
}
float* ACharacterBase::M_PtrGetsmoothRotationYawDeltaInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1488);
}
void ACharacterBase::M_SetsmoothRotationYawDeltaInterpolationSpeed(const float& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of useSmoothRotationYawDelta
// Declaration: bool useSmoothRotationYawDelta
bool ACharacterBase::M_GetuseSmoothRotationYawDelta() const {
	return Read<bool>((byte*)this + 1492);
}
bool* ACharacterBase::M_PtrGetuseSmoothRotationYawDelta() {
	return reinterpret_cast<bool*>((byte*)this + 1492);
}
void ACharacterBase::M_SetuseSmoothRotationYawDelta(const bool& value) {
	Write((byte*)this + 1492, value);
}
// Member Getter and Setter of lookAtCharacters
// Declaration: bool lookAtCharacters
bool ACharacterBase::M_GetlookAtCharacters() const {
	return Read<bool>((byte*)this + 1493);
}
bool* ACharacterBase::M_PtrGetlookAtCharacters() {
	return reinterpret_cast<bool*>((byte*)this + 1493);
}
void ACharacterBase::M_SetlookAtCharacters(const bool& value) {
	Write((byte*)this + 1493, value);
}
// Member Getter and Setter of LookAtTarget
// Declaration: bool LookAtTarget
bool ACharacterBase::M_GetLookAtTarget() const {
	return Read<bool>((byte*)this + 1494);
}
bool* ACharacterBase::M_PtrGetLookAtTarget() {
	return reinterpret_cast<bool*>((byte*)this + 1494);
}
void ACharacterBase::M_SetLookAtTarget(const bool& value) {
	Write((byte*)this + 1494, value);
}
// Member Getter and Setter of isRotationManaged
// Declaration: bool isRotationManaged
bool ACharacterBase::M_GetisRotationManaged() const {
	return Read<bool>((byte*)this + 1495);
}
bool* ACharacterBase::M_PtrGetisRotationManaged() {
	return reinterpret_cast<bool*>((byte*)this + 1495);
}
void ACharacterBase::M_SetisRotationManaged(const bool& value) {
	Write((byte*)this + 1495, value);
}
// Member Getter and Setter of isInWater
// Declaration: bool isInWater
bool ACharacterBase::M_GetisInWater() const {
	return Read<bool>((byte*)this + 1496);
}
bool* ACharacterBase::M_PtrGetisInWater() {
	return reinterpret_cast<bool*>((byte*)this + 1496);
}
void ACharacterBase::M_SetisInWater(const bool& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of movementInput
// Declaration: struct FVector movementInput
struct FVector ACharacterBase::M_GetmovementInput() const {
	return Read<struct FVector>((byte*)this + 1500);
}
struct FVector* ACharacterBase::M_PtrGetmovementInput() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1500);
}
void ACharacterBase::M_SetmovementInput(const struct FVector& value) {
	Write((byte*)this + 1500, value);
}
// Member Getter and Setter of hasMovementInput
// Declaration: bool hasMovementInput
bool ACharacterBase::M_GethasMovementInput() const {
	return Read<bool>((byte*)this + 1512);
}
bool* ACharacterBase::M_PtrGethasMovementInput() {
	return reinterpret_cast<bool*>((byte*)this + 1512);
}
void ACharacterBase::M_SethasMovementInput(const bool& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of lastMovementInputRotation
// Declaration: struct FRotator lastMovementInputRotation
struct FRotator ACharacterBase::M_GetlastMovementInputRotation() const {
	return Read<struct FRotator>((byte*)this + 1516);
}
struct FRotator* ACharacterBase::M_PtrGetlastMovementInputRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1516);
}
void ACharacterBase::M_SetlastMovementInputRotation(const struct FRotator& value) {
	Write((byte*)this + 1516, value);
}
// Member Getter and Setter of movementInputVelocityDifference
// Declaration: float movementInputVelocityDifference
float ACharacterBase::M_GetmovementInputVelocityDifference() const {
	return Read<float>((byte*)this + 1528);
}
float* ACharacterBase::M_PtrGetmovementInputVelocityDifference() {
	return reinterpret_cast<float*>((byte*)this + 1528);
}
void ACharacterBase::M_SetmovementInputVelocityDifference(const float& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of isDistanceMeshCollisionOptimizationEnabled
// Declaration: bool isDistanceMeshCollisionOptimizationEnabled
bool ACharacterBase::M_GetisDistanceMeshCollisionOptimizationEnabled() const {
	return Read<bool>((byte*)this + 1532);
}
bool* ACharacterBase::M_PtrGetisDistanceMeshCollisionOptimizationEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1532);
}
void ACharacterBase::M_SetisDistanceMeshCollisionOptimizationEnabled(const bool& value) {
	Write((byte*)this + 1532, value);
}
// Member Getter and Setter of isPhysicsAssetSwitchingEnabled
// Declaration: bool isPhysicsAssetSwitchingEnabled
bool ACharacterBase::M_GetisPhysicsAssetSwitchingEnabled() const {
	return Read<bool>((byte*)this + 1533);
}
bool* ACharacterBase::M_PtrGetisPhysicsAssetSwitchingEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1533);
}
void ACharacterBase::M_SetisPhysicsAssetSwitchingEnabled(const bool& value) {
	Write((byte*)this + 1533, value);
}
// Member Getter and Setter of targetMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> targetMeshCollisionType
TEnumAsByte<ECollisionEnabled> ACharacterBase::M_GettargetMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 1534);
}
TEnumAsByte<ECollisionEnabled>* ACharacterBase::M_PtrGettargetMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 1534);
}
void ACharacterBase::M_SettargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 1534, value);
}
// Member Getter and Setter of previousMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> previousMeshCollisionType
TEnumAsByte<ECollisionEnabled> ACharacterBase::M_GetpreviousMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 1535);
}
TEnumAsByte<ECollisionEnabled>* ACharacterBase::M_PtrGetpreviousMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 1535);
}
void ACharacterBase::M_SetpreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 1535, value);
}
// Member Getter and Setter of meshCollisionDisableTime
// Declaration: float meshCollisionDisableTime
float ACharacterBase::M_GetmeshCollisionDisableTime() const {
	return Read<float>((byte*)this + 1536);
}
float* ACharacterBase::M_PtrGetmeshCollisionDisableTime() {
	return reinterpret_cast<float*>((byte*)this + 1536);
}
void ACharacterBase::M_SetmeshCollisionDisableTime(const float& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of isFirstPerson
// Declaration: bool isFirstPerson
bool ACharacterBase::M_GetisFirstPerson() const {
	return Read<bool>((byte*)this + 1540);
}
bool* ACharacterBase::M_PtrGetisFirstPerson() {
	return reinterpret_cast<bool*>((byte*)this + 1540);
}
void ACharacterBase::M_SetisFirstPerson(const bool& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of isAiming
// Declaration: bool isAiming
bool ACharacterBase::M_GetisAiming() const {
	return Read<bool>((byte*)this + 1541);
}
bool* ACharacterBase::M_PtrGetisAiming() {
	return reinterpret_cast<bool*>((byte*)this + 1541);
}
void ACharacterBase::M_SetisAiming(const bool& value) {
	Write((byte*)this + 1541, value);
}
// Member Getter and Setter of isMountedOnAnotherPawn
// Declaration: bool isMountedOnAnotherPawn
bool ACharacterBase::M_GetisMountedOnAnotherPawn() const {
	return Read<bool>((byte*)this + 1542);
}
bool* ACharacterBase::M_PtrGetisMountedOnAnotherPawn() {
	return reinterpret_cast<bool*>((byte*)this + 1542);
}
void ACharacterBase::M_SetisMountedOnAnotherPawn(const bool& value) {
	Write((byte*)this + 1542, value);
}
// Member Getter and Setter of isInDialog
// Declaration: bool isInDialog
bool ACharacterBase::M_GetisInDialog() const {
	return Read<bool>((byte*)this + 1543);
}
bool* ACharacterBase::M_PtrGetisInDialog() {
	return reinterpret_cast<bool*>((byte*)this + 1543);
}
void ACharacterBase::M_SetisInDialog(const bool& value) {
	Write((byte*)this + 1543, value);
}
// Member Getter and Setter of eyesLocation
// Declaration: struct FVector eyesLocation
struct FVector ACharacterBase::M_GeteyesLocation() const {
	return Read<struct FVector>((byte*)this + 1544);
}
struct FVector* ACharacterBase::M_PtrGeteyesLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1544);
}
void ACharacterBase::M_SeteyesLocation(const struct FVector& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of currentLookAtTargetLocation
// Declaration: struct FVector currentLookAtTargetLocation
struct FVector ACharacterBase::M_GetcurrentLookAtTargetLocation() const {
	return Read<struct FVector>((byte*)this + 1556);
}
struct FVector* ACharacterBase::M_PtrGetcurrentLookAtTargetLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1556);
}
void ACharacterBase::M_SetcurrentLookAtTargetLocation(const struct FVector& value) {
	Write((byte*)this + 1556, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateBaseLookingRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator ACharacterBase::CalculateBaseLookingRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateBaseLookingRotation");

	struct ACharacterBase_CalculateBaseLookingRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacterBase_CalculateBaseLookingRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateLookingAtCharacterRotation
// Flags: Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator ACharacterBase::CalculateLookingAtCharacterRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateLookingAtCharacterRotation");

	struct ACharacterBase_CalculateLookingAtCharacterRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacterBase_CalculateLookingAtCharacterRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateLookingAtRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator ACharacterBase::CalculateLookingAtRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateLookingAtRotation");

	struct ACharacterBase_CalculateLookingAtRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacterBase_CalculateLookingAtRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateLookingAtTargetRotation
// Flags: Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator ACharacterBase::CalculateLookingAtTargetRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateLookingAtTargetRotation");

	struct ACharacterBase_CalculateLookingAtTargetRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacterBase_CalculateLookingAtTargetRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateLookingRotation
// Flags: Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator ACharacterBase::CalculateLookingRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateLookingRotation");

	struct ACharacterBase_CalculateLookingRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacterBase_CalculateLookingRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateRotationYawDelta
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float ACharacterBase::CalculateRotationYawDelta(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateRotationYawDelta");

	struct ACharacterBase_CalculateRotationYawDelta_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	ACharacterBase_CalculateRotationYawDelta_Params params;
	params.DeltaTime = DeltaTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CalculateVariables
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::CalculateVariables(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CalculateVariables");

	struct ACharacterBase_CalculateVariables_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
	};
	ACharacterBase_CalculateVariables_Params params;
	params.DeltaTime = DeltaTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.CheckAvailabilityOfLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: checkLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: actorToIgnore	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector ACharacterBase::CheckAvailabilityOfLocation(struct FVector checkLocation, class AActor* actorToIgnore) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.CheckAvailabilityOfLocation");

	struct ACharacterBase_CheckAvailabilityOfLocation_Params {
		struct FVector checkLocation;			//Offset: 0 | ElementSize: 12
		class AActor* actorToIgnore;			//Offset: 16 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 24 | ElementSize: 12
	};
	ACharacterBase_CheckAvailabilityOfLocation_Params params;
	params.checkLocation = checkLocation;
	params.actorToIgnore = actorToIgnore;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.ChooseInactivePhysicsAsset
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: class UPhysicsAsset*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPhysicsAsset* ACharacterBase::ChooseInactivePhysicsAsset() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.ChooseInactivePhysicsAsset");

	struct ACharacterBase_ChooseInactivePhysicsAsset_Params {
		class UPhysicsAsset* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ACharacterBase_ChooseInactivePhysicsAsset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.DisableMovementInterpolation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ACharacterBase::DisableMovementInterpolation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.DisableMovementInterpolation");

	struct ACharacterBase_DisableMovementInterpolation_Params {
	};
	ACharacterBase_DisableMovementInterpolation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.EnableMovementInterpolation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ACharacterBase::EnableMovementInterpolation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.EnableMovementInterpolation");

	struct ACharacterBase_EnableMovementInterpolation_Params {
	};
	ACharacterBase_EnableMovementInterpolation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.ManageGroundedRotation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ACharacterBase::ManageGroundedRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.ManageGroundedRotation");

	struct ACharacterBase_ManageGroundedRotation_Params {
	};
	ACharacterBase_ManageGroundedRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.ManageRagdoll
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ACharacterBase::ManageRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.ManageRagdoll");

	struct ACharacterBase_ManageRagdoll_Params {
	};
	ACharacterBase_ManageRagdoll_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.SetMeshCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: CollisionType	Type: TEnumAsByte<ECollisionEnabled>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::SetMeshCollision(TEnumAsByte<ECollisionEnabled> CollisionType) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.SetMeshCollision");

	struct ACharacterBase_SetMeshCollision_Params {
		TEnumAsByte<ECollisionEnabled> CollisionType;			//Offset: 0 | ElementSize: 1
	};
	ACharacterBase_SetMeshCollision_Params params;
	params.CollisionType = CollisionType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.SetMeshCollisionKeepTime
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: keepTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::SetMeshCollisionKeepTime(float keepTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.SetMeshCollisionKeepTime");

	struct ACharacterBase_SetMeshCollisionKeepTime_Params {
		float keepTime;			//Offset: 0 | ElementSize: 4
	};
	ACharacterBase_SetMeshCollisionKeepTime_Params params;
	params.keepTime = keepTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CharacterBase.SetRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: newTargetRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacterBase::SetRotation(struct FRotator newTargetRotation, bool interpRotation, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.SetRotation");

	struct ACharacterBase_SetRotation_Params {
		struct FRotator newTargetRotation;			//Offset: 0 | ElementSize: 12
		bool interpRotation;			//Offset: 12 | ElementSize: 1
		float interpSpeed;			//Offset: 16 | ElementSize: 4
	};
	ACharacterBase_SetRotation_Params params;
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
// Function Medieval_Dynasty.CharacterBase.UpdateMovementSettings
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ACharacterBase::UpdateMovementSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CharacterBase.UpdateMovementSettings");

	struct ACharacterBase_UpdateMovementSettings_Params {
	};
	ACharacterBase_UpdateMovementSettings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}