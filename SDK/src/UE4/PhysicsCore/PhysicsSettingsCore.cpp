#include "../SDK.h"
#include "PhysicsSettingsCore.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of DefaultGravityZ
// Declaration: float DefaultGravityZ
float UPhysicsSettingsCore::M_GetDefaultGravityZ() const {
	return Read<float>((byte*)this + 56);
}
float* UPhysicsSettingsCore::M_PtrGetDefaultGravityZ() {
	return reinterpret_cast<float*>((byte*)this + 56);
}
void UPhysicsSettingsCore::M_SetDefaultGravityZ(const float& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of DefaultTerminalVelocity
// Declaration: float DefaultTerminalVelocity
float UPhysicsSettingsCore::M_GetDefaultTerminalVelocity() const {
	return Read<float>((byte*)this + 60);
}
float* UPhysicsSettingsCore::M_PtrGetDefaultTerminalVelocity() {
	return reinterpret_cast<float*>((byte*)this + 60);
}
void UPhysicsSettingsCore::M_SetDefaultTerminalVelocity(const float& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of DefaultFluidFriction
// Declaration: float DefaultFluidFriction
float UPhysicsSettingsCore::M_GetDefaultFluidFriction() const {
	return Read<float>((byte*)this + 64);
}
float* UPhysicsSettingsCore::M_PtrGetDefaultFluidFriction() {
	return reinterpret_cast<float*>((byte*)this + 64);
}
void UPhysicsSettingsCore::M_SetDefaultFluidFriction(const float& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of SimulateScratchMemorySize
// Declaration: int32_t SimulateScratchMemorySize
int32_t UPhysicsSettingsCore::M_GetSimulateScratchMemorySize() const {
	return Read<int32_t>((byte*)this + 68);
}
int32_t* UPhysicsSettingsCore::M_PtrGetSimulateScratchMemorySize() {
	return reinterpret_cast<int32_t*>((byte*)this + 68);
}
void UPhysicsSettingsCore::M_SetSimulateScratchMemorySize(const int32_t& value) {
	Write((byte*)this + 68, value);
}
// Member Getter and Setter of RagdollAggregateThreshold
// Declaration: int32_t RagdollAggregateThreshold
int32_t UPhysicsSettingsCore::M_GetRagdollAggregateThreshold() const {
	return Read<int32_t>((byte*)this + 72);
}
int32_t* UPhysicsSettingsCore::M_PtrGetRagdollAggregateThreshold() {
	return reinterpret_cast<int32_t*>((byte*)this + 72);
}
void UPhysicsSettingsCore::M_SetRagdollAggregateThreshold(const int32_t& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of TriangleMeshTriangleMinAreaThreshold
// Declaration: float TriangleMeshTriangleMinAreaThreshold
float UPhysicsSettingsCore::M_GetTriangleMeshTriangleMinAreaThreshold() const {
	return Read<float>((byte*)this + 76);
}
float* UPhysicsSettingsCore::M_PtrGetTriangleMeshTriangleMinAreaThreshold() {
	return reinterpret_cast<float*>((byte*)this + 76);
}
void UPhysicsSettingsCore::M_SetTriangleMeshTriangleMinAreaThreshold(const float& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of bEnableShapeSharing
// Declaration: bool bEnableShapeSharing
bool UPhysicsSettingsCore::M_GetbEnableShapeSharing() const {
	return Read<bool>((byte*)this + 80);
}
bool* UPhysicsSettingsCore::M_PtrGetbEnableShapeSharing() {
	return reinterpret_cast<bool*>((byte*)this + 80);
}
void UPhysicsSettingsCore::M_SetbEnableShapeSharing(const bool& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of bEnablePCM
// Declaration: bool bEnablePCM
bool UPhysicsSettingsCore::M_GetbEnablePCM() const {
	return Read<bool>((byte*)this + 81);
}
bool* UPhysicsSettingsCore::M_PtrGetbEnablePCM() {
	return reinterpret_cast<bool*>((byte*)this + 81);
}
void UPhysicsSettingsCore::M_SetbEnablePCM(const bool& value) {
	Write((byte*)this + 81, value);
}
// Member Getter and Setter of bEnableStabilization
// Declaration: bool bEnableStabilization
bool UPhysicsSettingsCore::M_GetbEnableStabilization() const {
	return Read<bool>((byte*)this + 82);
}
bool* UPhysicsSettingsCore::M_PtrGetbEnableStabilization() {
	return reinterpret_cast<bool*>((byte*)this + 82);
}
void UPhysicsSettingsCore::M_SetbEnableStabilization(const bool& value) {
	Write((byte*)this + 82, value);
}
// Member Getter and Setter of bWarnMissingLocks
// Declaration: bool bWarnMissingLocks
bool UPhysicsSettingsCore::M_GetbWarnMissingLocks() const {
	return Read<bool>((byte*)this + 83);
}
bool* UPhysicsSettingsCore::M_PtrGetbWarnMissingLocks() {
	return reinterpret_cast<bool*>((byte*)this + 83);
}
void UPhysicsSettingsCore::M_SetbWarnMissingLocks(const bool& value) {
	Write((byte*)this + 83, value);
}
// Member Getter and Setter of bEnable2DPhysics
// Declaration: bool bEnable2DPhysics
bool UPhysicsSettingsCore::M_GetbEnable2DPhysics() const {
	return Read<bool>((byte*)this + 84);
}
bool* UPhysicsSettingsCore::M_PtrGetbEnable2DPhysics() {
	return reinterpret_cast<bool*>((byte*)this + 84);
}
void UPhysicsSettingsCore::M_SetbEnable2DPhysics(const bool& value) {
	Write((byte*)this + 84, value);
}
// Member Getter and Setter of bDefaultHasComplexCollision
// Declaration: bool bDefaultHasComplexCollision
bool UPhysicsSettingsCore::M_GetbDefaultHasComplexCollision() const {
	return Read<bool>((byte*)this + 85);
}
bool* UPhysicsSettingsCore::M_PtrGetbDefaultHasComplexCollision() {
	return reinterpret_cast<bool*>((byte*)this + 85);
}
void UPhysicsSettingsCore::M_SetbDefaultHasComplexCollision(const bool& value) {
	Write((byte*)this + 85, value);
}
// Member Getter and Setter of BounceThresholdVelocity
// Declaration: float BounceThresholdVelocity
float UPhysicsSettingsCore::M_GetBounceThresholdVelocity() const {
	return Read<float>((byte*)this + 88);
}
float* UPhysicsSettingsCore::M_PtrGetBounceThresholdVelocity() {
	return reinterpret_cast<float*>((byte*)this + 88);
}
void UPhysicsSettingsCore::M_SetBounceThresholdVelocity(const float& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of FrictionCombineMode
// Declaration: TEnumAsByte<EFrictionCombineMode> FrictionCombineMode
TEnumAsByte<EFrictionCombineMode> UPhysicsSettingsCore::M_GetFrictionCombineMode() const {
	return Read<TEnumAsByte<EFrictionCombineMode>>((byte*)this + 92);
}
TEnumAsByte<EFrictionCombineMode>* UPhysicsSettingsCore::M_PtrGetFrictionCombineMode() {
	return reinterpret_cast<TEnumAsByte<EFrictionCombineMode>*>((byte*)this + 92);
}
void UPhysicsSettingsCore::M_SetFrictionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value) {
	Write((byte*)this + 92, value);
}
// Member Getter and Setter of RestitutionCombineMode
// Declaration: TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode
TEnumAsByte<EFrictionCombineMode> UPhysicsSettingsCore::M_GetRestitutionCombineMode() const {
	return Read<TEnumAsByte<EFrictionCombineMode>>((byte*)this + 93);
}
TEnumAsByte<EFrictionCombineMode>* UPhysicsSettingsCore::M_PtrGetRestitutionCombineMode() {
	return reinterpret_cast<TEnumAsByte<EFrictionCombineMode>*>((byte*)this + 93);
}
void UPhysicsSettingsCore::M_SetRestitutionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value) {
	Write((byte*)this + 93, value);
}
// Member Getter and Setter of MaxAngularVelocity
// Declaration: float MaxAngularVelocity
float UPhysicsSettingsCore::M_GetMaxAngularVelocity() const {
	return Read<float>((byte*)this + 96);
}
float* UPhysicsSettingsCore::M_PtrGetMaxAngularVelocity() {
	return reinterpret_cast<float*>((byte*)this + 96);
}
void UPhysicsSettingsCore::M_SetMaxAngularVelocity(const float& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of MaxDepenetrationVelocity
// Declaration: float MaxDepenetrationVelocity
float UPhysicsSettingsCore::M_GetMaxDepenetrationVelocity() const {
	return Read<float>((byte*)this + 100);
}
float* UPhysicsSettingsCore::M_PtrGetMaxDepenetrationVelocity() {
	return reinterpret_cast<float*>((byte*)this + 100);
}
void UPhysicsSettingsCore::M_SetMaxDepenetrationVelocity(const float& value) {
	Write((byte*)this + 100, value);
}
// Member Getter and Setter of ContactOffsetMultiplier
// Declaration: float ContactOffsetMultiplier
float UPhysicsSettingsCore::M_GetContactOffsetMultiplier() const {
	return Read<float>((byte*)this + 104);
}
float* UPhysicsSettingsCore::M_PtrGetContactOffsetMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 104);
}
void UPhysicsSettingsCore::M_SetContactOffsetMultiplier(const float& value) {
	Write((byte*)this + 104, value);
}
// Member Getter and Setter of MinContactOffset
// Declaration: float MinContactOffset
float UPhysicsSettingsCore::M_GetMinContactOffset() const {
	return Read<float>((byte*)this + 108);
}
float* UPhysicsSettingsCore::M_PtrGetMinContactOffset() {
	return reinterpret_cast<float*>((byte*)this + 108);
}
void UPhysicsSettingsCore::M_SetMinContactOffset(const float& value) {
	Write((byte*)this + 108, value);
}
// Member Getter and Setter of MaxContactOffset
// Declaration: float MaxContactOffset
float UPhysicsSettingsCore::M_GetMaxContactOffset() const {
	return Read<float>((byte*)this + 112);
}
float* UPhysicsSettingsCore::M_PtrGetMaxContactOffset() {
	return reinterpret_cast<float*>((byte*)this + 112);
}
void UPhysicsSettingsCore::M_SetMaxContactOffset(const float& value) {
	Write((byte*)this + 112, value);
}
// Member Getter and Setter of bSimulateSkeletalMeshOnDedicatedServer
// Declaration: bool bSimulateSkeletalMeshOnDedicatedServer
bool UPhysicsSettingsCore::M_GetbSimulateSkeletalMeshOnDedicatedServer() const {
	return Read<bool>((byte*)this + 116);
}
bool* UPhysicsSettingsCore::M_PtrGetbSimulateSkeletalMeshOnDedicatedServer() {
	return reinterpret_cast<bool*>((byte*)this + 116);
}
void UPhysicsSettingsCore::M_SetbSimulateSkeletalMeshOnDedicatedServer(const bool& value) {
	Write((byte*)this + 116, value);
}
// Member Getter and Setter of DefaultShapeComplexity
// Declaration: TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity
TEnumAsByte<ECollisionTraceFlag> UPhysicsSettingsCore::M_GetDefaultShapeComplexity() const {
	return Read<TEnumAsByte<ECollisionTraceFlag>>((byte*)this + 117);
}
TEnumAsByte<ECollisionTraceFlag>* UPhysicsSettingsCore::M_PtrGetDefaultShapeComplexity() {
	return reinterpret_cast<TEnumAsByte<ECollisionTraceFlag>*>((byte*)this + 117);
}
void UPhysicsSettingsCore::M_SetDefaultShapeComplexity(const TEnumAsByte<ECollisionTraceFlag>& value) {
	Write((byte*)this + 117, value);
}
// Member Getter and Setter of SolverOptions
// Declaration: struct FChaosSolverConfiguration SolverOptions
struct FChaosSolverConfiguration UPhysicsSettingsCore::M_GetSolverOptions() const {
	return Read<struct FChaosSolverConfiguration>((byte*)this + 120);
}
struct FChaosSolverConfiguration* UPhysicsSettingsCore::M_PtrGetSolverOptions() {
	return reinterpret_cast<struct FChaosSolverConfiguration*>((byte*)this + 120);
}
void UPhysicsSettingsCore::M_SetSolverOptions(const struct FChaosSolverConfiguration& value) {
	Write((byte*)this + 120, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}