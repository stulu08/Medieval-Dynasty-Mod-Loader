#include "../SDK.h"
#include "AnimInstanceGroundAnimal.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimalBase
// Declaration: class AAnimalBase* AnimalBase
class AAnimalBase* UAnimInstanceGroundAnimal::M_GetAnimalBase() const {
	return Read<class AAnimalBase*>((byte*)this + 1008);
}
class AAnimalBase** UAnimInstanceGroundAnimal::M_PtrGetAnimalBase() {
	return reinterpret_cast<class AAnimalBase**>((byte*)this + 1008);
}
void UAnimInstanceGroundAnimal::M_SetAnimalBase(const class AAnimalBase*& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of bodyLength
// Declaration: float bodyLength
float UAnimInstanceGroundAnimal::M_GetbodyLength() const {
	return Read<float>((byte*)this + 1016);
}
float* UAnimInstanceGroundAnimal::M_PtrGetbodyLength() {
	return reinterpret_cast<float*>((byte*)this + 1016);
}
void UAnimInstanceGroundAnimal::M_SetbodyLength(const float& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of animationsAttack
// Declaration: TArray<class UAnimSequenceBase*> animationsAttack
TArray<class UAnimSequenceBase*> UAnimInstanceGroundAnimal::M_GetanimationsAttack() const {
	return Read<TArray<class UAnimSequenceBase*>>((byte*)this + 1024);
}
TArray<class UAnimSequenceBase*>* UAnimInstanceGroundAnimal::M_PtrGetanimationsAttack() {
	return reinterpret_cast<TArray<class UAnimSequenceBase*>*>((byte*)this + 1024);
}
void UAnimInstanceGroundAnimal::M_SetanimationsAttack(const TArray<class UAnimSequenceBase*>& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of lastAttackTime
// Declaration: float lastAttackTime
float UAnimInstanceGroundAnimal::M_GetlastAttackTime() const {
	return Read<float>((byte*)this + 1040);
}
float* UAnimInstanceGroundAnimal::M_PtrGetlastAttackTime() {
	return reinterpret_cast<float*>((byte*)this + 1040);
}
void UAnimInstanceGroundAnimal::M_SetlastAttackTime(const float& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of timeSinceLastAttack
// Declaration: float timeSinceLastAttack
float UAnimInstanceGroundAnimal::M_GettimeSinceLastAttack() const {
	return Read<float>((byte*)this + 1044);
}
float* UAnimInstanceGroundAnimal::M_PtrGettimeSinceLastAttack() {
	return reinterpret_cast<float*>((byte*)this + 1044);
}
void UAnimInstanceGroundAnimal::M_SettimeSinceLastAttack(const float& value) {
	Write((byte*)this + 1044, value);
}
// Member Getter and Setter of animationsHit
// Declaration: TArray<class UAnimSequenceBase*> animationsHit
TArray<class UAnimSequenceBase*> UAnimInstanceGroundAnimal::M_GetanimationsHit() const {
	return Read<TArray<class UAnimSequenceBase*>>((byte*)this + 1048);
}
TArray<class UAnimSequenceBase*>* UAnimInstanceGroundAnimal::M_PtrGetanimationsHit() {
	return reinterpret_cast<TArray<class UAnimSequenceBase*>*>((byte*)this + 1048);
}
void UAnimInstanceGroundAnimal::M_SetanimationsHit(const TArray<class UAnimSequenceBase*>& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of lastHitTime
// Declaration: float lastHitTime
float UAnimInstanceGroundAnimal::M_GetlastHitTime() const {
	return Read<float>((byte*)this + 1064);
}
float* UAnimInstanceGroundAnimal::M_PtrGetlastHitTime() {
	return reinterpret_cast<float*>((byte*)this + 1064);
}
void UAnimInstanceGroundAnimal::M_SetlastHitTime(const float& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of timeSinceLastHit
// Declaration: float timeSinceLastHit
float UAnimInstanceGroundAnimal::M_GettimeSinceLastHit() const {
	return Read<float>((byte*)this + 1068);
}
float* UAnimInstanceGroundAnimal::M_PtrGettimeSinceLastHit() {
	return reinterpret_cast<float*>((byte*)this + 1068);
}
void UAnimInstanceGroundAnimal::M_SettimeSinceLastHit(const float& value) {
	Write((byte*)this + 1068, value);
}
// Member Getter and Setter of movementAnimationSpeeds
// Declaration: TArray<float> movementAnimationSpeeds
TArray<float> UAnimInstanceGroundAnimal::M_GetmovementAnimationSpeeds() const {
	return Read<TArray<float>>((byte*)this + 1072);
}
TArray<float>* UAnimInstanceGroundAnimal::M_PtrGetmovementAnimationSpeeds() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1072);
}
void UAnimInstanceGroundAnimal::M_SetmovementAnimationSpeeds(const TArray<float>& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of movementAnimationID
// Declaration: float movementAnimationID
float UAnimInstanceGroundAnimal::M_GetmovementAnimationID() const {
	return Read<float>((byte*)this + 1088);
}
float* UAnimInstanceGroundAnimal::M_PtrGetmovementAnimationID() {
	return reinterpret_cast<float*>((byte*)this + 1088);
}
void UAnimInstanceGroundAnimal::M_SetmovementAnimationID(const float& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of movementAnimationPlayRate
// Declaration: float movementAnimationPlayRate
float UAnimInstanceGroundAnimal::M_GetmovementAnimationPlayRate() const {
	return Read<float>((byte*)this + 1092);
}
float* UAnimInstanceGroundAnimal::M_PtrGetmovementAnimationPlayRate() {
	return reinterpret_cast<float*>((byte*)this + 1092);
}
void UAnimInstanceGroundAnimal::M_SetmovementAnimationPlayRate(const float& value) {
	Write((byte*)this + 1092, value);
}
// Member Getter and Setter of speedCurve
// Declaration: class UCurveFloat* speedCurve
class UCurveFloat* UAnimInstanceGroundAnimal::M_GetspeedCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 1096);
}
class UCurveFloat** UAnimInstanceGroundAnimal::M_PtrGetspeedCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 1096);
}
void UAnimInstanceGroundAnimal::M_SetspeedCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of evaluatedCurveForwardSpeed
// Declaration: float evaluatedCurveForwardSpeed
float UAnimInstanceGroundAnimal::M_GetevaluatedCurveForwardSpeed() const {
	return Read<float>((byte*)this + 1104);
}
float* UAnimInstanceGroundAnimal::M_PtrGetevaluatedCurveForwardSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1104);
}
void UAnimInstanceGroundAnimal::M_SetevaluatedCurveForwardSpeed(const float& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of forwardSpeed
// Declaration: float forwardSpeed
float UAnimInstanceGroundAnimal::M_GetforwardSpeed() const {
	return Read<float>((byte*)this + 1108);
}
float* UAnimInstanceGroundAnimal::M_PtrGetforwardSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1108);
}
void UAnimInstanceGroundAnimal::M_SetforwardSpeed(const float& value) {
	Write((byte*)this + 1108, value);
}
// Member Getter and Setter of verticalSpeed
// Declaration: float verticalSpeed
float UAnimInstanceGroundAnimal::M_GetverticalSpeed() const {
	return Read<float>((byte*)this + 1112);
}
float* UAnimInstanceGroundAnimal::M_PtrGetverticalSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1112);
}
void UAnimInstanceGroundAnimal::M_SetverticalSpeed(const float& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of TurnSpeed
// Declaration: float TurnSpeed
float UAnimInstanceGroundAnimal::M_GetTurnSpeed() const {
	return Read<float>((byte*)this + 1116);
}
float* UAnimInstanceGroundAnimal::M_PtrGetTurnSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1116);
}
void UAnimInstanceGroundAnimal::M_SetTurnSpeed(const float& value) {
	Write((byte*)this + 1116, value);
}
// Member Getter and Setter of maxTurnSpeed
// Declaration: float maxTurnSpeed
float UAnimInstanceGroundAnimal::M_GetmaxTurnSpeed() const {
	return Read<float>((byte*)this + 1120);
}
float* UAnimInstanceGroundAnimal::M_PtrGetmaxTurnSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1120);
}
void UAnimInstanceGroundAnimal::M_SetmaxTurnSpeed(const float& value) {
	Write((byte*)this + 1120, value);
}
// Member Getter and Setter of maxTurnAngle
// Declaration: float maxTurnAngle
float UAnimInstanceGroundAnimal::M_GetmaxTurnAngle() const {
	return Read<float>((byte*)this + 1124);
}
float* UAnimInstanceGroundAnimal::M_PtrGetmaxTurnAngle() {
	return reinterpret_cast<float*>((byte*)this + 1124);
}
void UAnimInstanceGroundAnimal::M_SetmaxTurnAngle(const float& value) {
	Write((byte*)this + 1124, value);
}
// Member Getter and Setter of turnAngle
// Declaration: float turnAngle
float UAnimInstanceGroundAnimal::M_GetturnAngle() const {
	return Read<float>((byte*)this + 1128);
}
float* UAnimInstanceGroundAnimal::M_PtrGetturnAngle() {
	return reinterpret_cast<float*>((byte*)this + 1128);
}
void UAnimInstanceGroundAnimal::M_SetturnAngle(const float& value) {
	Write((byte*)this + 1128, value);
}
// Member Getter and Setter of IsMoving
// Declaration: bool IsMoving
bool UAnimInstanceGroundAnimal::M_GetIsMoving() const {
	return Read<bool>((byte*)this + 1132);
}
bool* UAnimInstanceGroundAnimal::M_PtrGetIsMoving() {
	return reinterpret_cast<bool*>((byte*)this + 1132);
}
void UAnimInstanceGroundAnimal::M_SetIsMoving(const bool& value) {
	Write((byte*)this + 1132, value);
}
// Member Getter and Setter of currentIdleType
// Declaration: EAnimalIdleType currentIdleType
EAnimalIdleType UAnimInstanceGroundAnimal::M_GetcurrentIdleType() const {
	return Read<EAnimalIdleType>((byte*)this + 1133);
}
EAnimalIdleType* UAnimInstanceGroundAnimal::M_PtrGetcurrentIdleType() {
	return reinterpret_cast<EAnimalIdleType*>((byte*)this + 1133);
}
void UAnimInstanceGroundAnimal::M_SetcurrentIdleType(const EAnimalIdleType& value) {
	Write((byte*)this + 1133, value);
}
// Member Getter and Setter of lookFromOffset
// Declaration: struct FVector lookFromOffset
struct FVector UAnimInstanceGroundAnimal::M_GetlookFromOffset() const {
	return Read<struct FVector>((byte*)this + 1136);
}
struct FVector* UAnimInstanceGroundAnimal::M_PtrGetlookFromOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1136);
}
void UAnimInstanceGroundAnimal::M_SetlookFromOffset(const struct FVector& value) {
	Write((byte*)this + 1136, value);
}
// Member Getter and Setter of headAngleHorizontal
// Declaration: float headAngleHorizontal
float UAnimInstanceGroundAnimal::M_GetheadAngleHorizontal() const {
	return Read<float>((byte*)this + 1148);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleHorizontal() {
	return reinterpret_cast<float*>((byte*)this + 1148);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleHorizontal(const float& value) {
	Write((byte*)this + 1148, value);
}
// Member Getter and Setter of headAngleHorizontalMin
// Declaration: float headAngleHorizontalMin
float UAnimInstanceGroundAnimal::M_GetheadAngleHorizontalMin() const {
	return Read<float>((byte*)this + 1152);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleHorizontalMin() {
	return reinterpret_cast<float*>((byte*)this + 1152);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleHorizontalMin(const float& value) {
	Write((byte*)this + 1152, value);
}
// Member Getter and Setter of headAngleHorizontalMax
// Declaration: float headAngleHorizontalMax
float UAnimInstanceGroundAnimal::M_GetheadAngleHorizontalMax() const {
	return Read<float>((byte*)this + 1156);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleHorizontalMax() {
	return reinterpret_cast<float*>((byte*)this + 1156);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleHorizontalMax(const float& value) {
	Write((byte*)this + 1156, value);
}
// Member Getter and Setter of headAngleVertical
// Declaration: float headAngleVertical
float UAnimInstanceGroundAnimal::M_GetheadAngleVertical() const {
	return Read<float>((byte*)this + 1160);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleVertical() {
	return reinterpret_cast<float*>((byte*)this + 1160);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleVertical(const float& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of headAngleVerticalMin
// Declaration: float headAngleVerticalMin
float UAnimInstanceGroundAnimal::M_GetheadAngleVerticalMin() const {
	return Read<float>((byte*)this + 1164);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleVerticalMin() {
	return reinterpret_cast<float*>((byte*)this + 1164);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleVerticalMin(const float& value) {
	Write((byte*)this + 1164, value);
}
// Member Getter and Setter of headAngleVerticalMax
// Declaration: float headAngleVerticalMax
float UAnimInstanceGroundAnimal::M_GetheadAngleVerticalMax() const {
	return Read<float>((byte*)this + 1168);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleVerticalMax() {
	return reinterpret_cast<float*>((byte*)this + 1168);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleVerticalMax(const float& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of headAngleInterpolationSpeed
// Declaration: float headAngleInterpolationSpeed
float UAnimInstanceGroundAnimal::M_GetheadAngleInterpolationSpeed() const {
	return Read<float>((byte*)this + 1172);
}
float* UAnimInstanceGroundAnimal::M_PtrGetheadAngleInterpolationSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1172);
}
void UAnimInstanceGroundAnimal::M_SetheadAngleInterpolationSpeed(const float& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of frontGroundCheckOffset
// Declaration: struct FVector frontGroundCheckOffset
struct FVector UAnimInstanceGroundAnimal::M_GetfrontGroundCheckOffset() const {
	return Read<struct FVector>((byte*)this + 1176);
}
struct FVector* UAnimInstanceGroundAnimal::M_PtrGetfrontGroundCheckOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1176);
}
void UAnimInstanceGroundAnimal::M_SetfrontGroundCheckOffset(const struct FVector& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of rearGroundCheckOffset
// Declaration: struct FVector rearGroundCheckOffset
struct FVector UAnimInstanceGroundAnimal::M_GetrearGroundCheckOffset() const {
	return Read<struct FVector>((byte*)this + 1188);
}
struct FVector* UAnimInstanceGroundAnimal::M_PtrGetrearGroundCheckOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1188);
}
void UAnimInstanceGroundAnimal::M_SetrearGroundCheckOffset(const struct FVector& value) {
	Write((byte*)this + 1188, value);
}
// Member Getter and Setter of groundCheckLength
// Declaration: float groundCheckLength
float UAnimInstanceGroundAnimal::M_GetgroundCheckLength() const {
	return Read<float>((byte*)this + 1200);
}
float* UAnimInstanceGroundAnimal::M_PtrGetgroundCheckLength() {
	return reinterpret_cast<float*>((byte*)this + 1200);
}
void UAnimInstanceGroundAnimal::M_SetgroundCheckLength(const float& value) {
	Write((byte*)this + 1200, value);
}
// Member Getter and Setter of groundAlignStrength
// Declaration: float groundAlignStrength
float UAnimInstanceGroundAnimal::M_GetgroundAlignStrength() const {
	return Read<float>((byte*)this + 1204);
}
float* UAnimInstanceGroundAnimal::M_PtrGetgroundAlignStrength() {
	return reinterpret_cast<float*>((byte*)this + 1204);
}
void UAnimInstanceGroundAnimal::M_SetgroundAlignStrength(const float& value) {
	Write((byte*)this + 1204, value);
}
// Member Getter and Setter of groundObjectTypes
// Declaration: TArray<TEnumAsByte<EObjectTypeQuery>> groundObjectTypes
TArray<TEnumAsByte<EObjectTypeQuery>> UAnimInstanceGroundAnimal::M_GetgroundObjectTypes() const {
	return Read<TArray<TEnumAsByte<EObjectTypeQuery>>>((byte*)this + 1208);
}
TArray<TEnumAsByte<EObjectTypeQuery>>* UAnimInstanceGroundAnimal::M_PtrGetgroundObjectTypes() {
	return reinterpret_cast<TArray<TEnumAsByte<EObjectTypeQuery>>*>((byte*)this + 1208);
}
void UAnimInstanceGroundAnimal::M_SetgroundObjectTypes(const TArray<TEnumAsByte<EObjectTypeQuery>>& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of groundAlignPitchAngle
// Declaration: float groundAlignPitchAngle
float UAnimInstanceGroundAnimal::M_GetgroundAlignPitchAngle() const {
	return Read<float>((byte*)this + 1224);
}
float* UAnimInstanceGroundAnimal::M_PtrGetgroundAlignPitchAngle() {
	return reinterpret_cast<float*>((byte*)this + 1224);
}
void UAnimInstanceGroundAnimal::M_SetgroundAlignPitchAngle(const float& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of groundAlignLocationOffset
// Declaration: struct FVector groundAlignLocationOffset
struct FVector UAnimInstanceGroundAnimal::M_GetgroundAlignLocationOffset() const {
	return Read<struct FVector>((byte*)this + 1228);
}
struct FVector* UAnimInstanceGroundAnimal::M_PtrGetgroundAlignLocationOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1228);
}
void UAnimInstanceGroundAnimal::M_SetgroundAlignLocationOffset(const struct FVector& value) {
	Write((byte*)this + 1228, value);
}
// Member Getter and Setter of groundAlignPivotOffset
// Declaration: struct FVector groundAlignPivotOffset
struct FVector UAnimInstanceGroundAnimal::M_GetgroundAlignPivotOffset() const {
	return Read<struct FVector>((byte*)this + 1240);
}
struct FVector* UAnimInstanceGroundAnimal::M_PtrGetgroundAlignPivotOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1240);
}
void UAnimInstanceGroundAnimal::M_SetgroundAlignPivotOffset(const struct FVector& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of isInverseKinematicsEnabled
// Declaration: bool isInverseKinematicsEnabled
bool UAnimInstanceGroundAnimal::M_GetisInverseKinematicsEnabled() const {
	return Read<bool>((byte*)this + 1252);
}
bool* UAnimInstanceGroundAnimal::M_PtrGetisInverseKinematicsEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1252);
}
void UAnimInstanceGroundAnimal::M_SetisInverseKinematicsEnabled(const bool& value) {
	Write((byte*)this + 1252, value);
}
// Member Getter and Setter of feetAlpha
// Declaration: float feetAlpha
float UAnimInstanceGroundAnimal::M_GetfeetAlpha() const {
	return Read<float>((byte*)this + 1256);
}
float* UAnimInstanceGroundAnimal::M_PtrGetfeetAlpha() {
	return reinterpret_cast<float*>((byte*)this + 1256);
}
void UAnimInstanceGroundAnimal::M_SetfeetAlpha(const float& value) {
	Write((byte*)this + 1256, value);
}
// Member Getter and Setter of feetAlphaStationary
// Declaration: float feetAlphaStationary
float UAnimInstanceGroundAnimal::M_GetfeetAlphaStationary() const {
	return Read<float>((byte*)this + 1260);
}
float* UAnimInstanceGroundAnimal::M_PtrGetfeetAlphaStationary() {
	return reinterpret_cast<float*>((byte*)this + 1260);
}
void UAnimInstanceGroundAnimal::M_SetfeetAlphaStationary(const float& value) {
	Write((byte*)this + 1260, value);
}
// Member Getter and Setter of feetAlphaMoving
// Declaration: float feetAlphaMoving
float UAnimInstanceGroundAnimal::M_GetfeetAlphaMoving() const {
	return Read<float>((byte*)this + 1264);
}
float* UAnimInstanceGroundAnimal::M_PtrGetfeetAlphaMoving() {
	return reinterpret_cast<float*>((byte*)this + 1264);
}
void UAnimInstanceGroundAnimal::M_SetfeetAlphaMoving(const float& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of pelvisOffsetZ
// Declaration: float pelvisOffsetZ
float UAnimInstanceGroundAnimal::M_GetpelvisOffsetZ() const {
	return Read<float>((byte*)this + 1268);
}
float* UAnimInstanceGroundAnimal::M_PtrGetpelvisOffsetZ() {
	return reinterpret_cast<float*>((byte*)this + 1268);
}
void UAnimInstanceGroundAnimal::M_SetpelvisOffsetZ(const float& value) {
	Write((byte*)this + 1268, value);
}
// Member Getter and Setter of pelvisOffsetZStationary
// Declaration: float pelvisOffsetZStationary
float UAnimInstanceGroundAnimal::M_GetpelvisOffsetZStationary() const {
	return Read<float>((byte*)this + 1272);
}
float* UAnimInstanceGroundAnimal::M_PtrGetpelvisOffsetZStationary() {
	return reinterpret_cast<float*>((byte*)this + 1272);
}
void UAnimInstanceGroundAnimal::M_SetpelvisOffsetZStationary(const float& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of pelvisOffsetZMoving
// Declaration: float pelvisOffsetZMoving
float UAnimInstanceGroundAnimal::M_GetpelvisOffsetZMoving() const {
	return Read<float>((byte*)this + 1276);
}
float* UAnimInstanceGroundAnimal::M_PtrGetpelvisOffsetZMoving() {
	return reinterpret_cast<float*>((byte*)this + 1276);
}
void UAnimInstanceGroundAnimal::M_SetpelvisOffsetZMoving(const float& value) {
	Write((byte*)this + 1276, value);
}
// Member Getter and Setter of chestDipUpSlopes
// Declaration: float chestDipUpSlopes
float UAnimInstanceGroundAnimal::M_GetchestDipUpSlopes() const {
	return Read<float>((byte*)this + 1280);
}
float* UAnimInstanceGroundAnimal::M_PtrGetchestDipUpSlopes() {
	return reinterpret_cast<float*>((byte*)this + 1280);
}
void UAnimInstanceGroundAnimal::M_SetchestDipUpSlopes(const float& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of chestDipUpSlopesStationary
// Declaration: float chestDipUpSlopesStationary
float UAnimInstanceGroundAnimal::M_GetchestDipUpSlopesStationary() const {
	return Read<float>((byte*)this + 1284);
}
float* UAnimInstanceGroundAnimal::M_PtrGetchestDipUpSlopesStationary() {
	return reinterpret_cast<float*>((byte*)this + 1284);
}
void UAnimInstanceGroundAnimal::M_SetchestDipUpSlopesStationary(const float& value) {
	Write((byte*)this + 1284, value);
}
// Member Getter and Setter of chestDipUpSlopesMoving
// Declaration: float chestDipUpSlopesMoving
float UAnimInstanceGroundAnimal::M_GetchestDipUpSlopesMoving() const {
	return Read<float>((byte*)this + 1288);
}
float* UAnimInstanceGroundAnimal::M_PtrGetchestDipUpSlopesMoving() {
	return reinterpret_cast<float*>((byte*)this + 1288);
}
void UAnimInstanceGroundAnimal::M_SetchestDipUpSlopesMoving(const float& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of chestDipDownSlopes
// Declaration: float chestDipDownSlopes
float UAnimInstanceGroundAnimal::M_GetchestDipDownSlopes() const {
	return Read<float>((byte*)this + 1292);
}
float* UAnimInstanceGroundAnimal::M_PtrGetchestDipDownSlopes() {
	return reinterpret_cast<float*>((byte*)this + 1292);
}
void UAnimInstanceGroundAnimal::M_SetchestDipDownSlopes(const float& value) {
	Write((byte*)this + 1292, value);
}
// Member Getter and Setter of chestDipDownSlopesStationary
// Declaration: float chestDipDownSlopesStationary
float UAnimInstanceGroundAnimal::M_GetchestDipDownSlopesStationary() const {
	return Read<float>((byte*)this + 1296);
}
float* UAnimInstanceGroundAnimal::M_PtrGetchestDipDownSlopesStationary() {
	return reinterpret_cast<float*>((byte*)this + 1296);
}
void UAnimInstanceGroundAnimal::M_SetchestDipDownSlopesStationary(const float& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of chestDipDownSlopesMoving
// Declaration: float chestDipDownSlopesMoving
float UAnimInstanceGroundAnimal::M_GetchestDipDownSlopesMoving() const {
	return Read<float>((byte*)this + 1300);
}
float* UAnimInstanceGroundAnimal::M_PtrGetchestDipDownSlopesMoving() {
	return reinterpret_cast<float*>((byte*)this + 1300);
}
void UAnimInstanceGroundAnimal::M_SetchestDipDownSlopesMoving(const float& value) {
	Write((byte*)this + 1300, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UAnimInstanceGroundAnimal::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 1304);
}
bool* UAnimInstanceGroundAnimal::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 1304);
}
void UAnimInstanceGroundAnimal::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 1304, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.AnimInstanceGroundAnimal.ShouldEnableInverseKinematics
// Flags: Native, Event, Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstanceGroundAnimal::ShouldEnableInverseKinematics() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.AnimInstanceGroundAnimal.ShouldEnableInverseKinematics");

	struct UAnimInstanceGroundAnimal_ShouldEnableInverseKinematics_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstanceGroundAnimal_ShouldEnableInverseKinematics_Params params;

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