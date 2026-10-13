#include "../SDK.h"
#include "SkeletalMeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimBlueprintGeneratedClass
// Declaration: class UObject* AnimBlueprintGeneratedClass
class UObject* USkeletalMeshComponent::M_GetAnimBlueprintGeneratedClass() const {
	return Read<class UObject*>((byte*)this + 1696);
}
class UObject** USkeletalMeshComponent::M_PtrGetAnimBlueprintGeneratedClass() {
	return reinterpret_cast<class UObject**>((byte*)this + 1696);
}
void USkeletalMeshComponent::M_SetAnimBlueprintGeneratedClass(const class UObject*& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of AnimClass
// Declaration: class UAnimInstance* AnimClass
class UAnimInstance* USkeletalMeshComponent::M_GetAnimClass() const {
	return Read<class UAnimInstance*>((byte*)this + 1704);
}
class UAnimInstance** USkeletalMeshComponent::M_PtrGetAnimClass() {
	return reinterpret_cast<class UAnimInstance**>((byte*)this + 1704);
}
void USkeletalMeshComponent::M_SetAnimClass(const class UAnimInstance*& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of AnimScriptInstance
// Declaration: class UAnimInstance* AnimScriptInstance
class UAnimInstance* USkeletalMeshComponent::M_GetAnimScriptInstance() const {
	return Read<class UAnimInstance*>((byte*)this + 1712);
}
class UAnimInstance** USkeletalMeshComponent::M_PtrGetAnimScriptInstance() {
	return reinterpret_cast<class UAnimInstance**>((byte*)this + 1712);
}
void USkeletalMeshComponent::M_SetAnimScriptInstance(const class UAnimInstance*& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of PostProcessAnimInstance
// Declaration: class UAnimInstance* PostProcessAnimInstance
class UAnimInstance* USkeletalMeshComponent::M_GetPostProcessAnimInstance() const {
	return Read<class UAnimInstance*>((byte*)this + 1720);
}
class UAnimInstance** USkeletalMeshComponent::M_PtrGetPostProcessAnimInstance() {
	return reinterpret_cast<class UAnimInstance**>((byte*)this + 1720);
}
void USkeletalMeshComponent::M_SetPostProcessAnimInstance(const class UAnimInstance*& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of AnimationData
// Declaration: struct FSingleAnimationPlayData AnimationData
struct FSingleAnimationPlayData USkeletalMeshComponent::M_GetAnimationData() const {
	return Read<struct FSingleAnimationPlayData>((byte*)this + 1728);
}
struct FSingleAnimationPlayData* USkeletalMeshComponent::M_PtrGetAnimationData() {
	return reinterpret_cast<struct FSingleAnimationPlayData*>((byte*)this + 1728);
}
void USkeletalMeshComponent::M_SetAnimationData(const struct FSingleAnimationPlayData& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of RootBoneTranslation
// Declaration: struct FVector RootBoneTranslation
struct FVector USkeletalMeshComponent::M_GetRootBoneTranslation() const {
	return Read<struct FVector>((byte*)this + 1768);
}
struct FVector* USkeletalMeshComponent::M_PtrGetRootBoneTranslation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1768);
}
void USkeletalMeshComponent::M_SetRootBoneTranslation(const struct FVector& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of LineCheckBoundsScale
// Declaration: struct FVector LineCheckBoundsScale
struct FVector USkeletalMeshComponent::M_GetLineCheckBoundsScale() const {
	return Read<struct FVector>((byte*)this + 1780);
}
struct FVector* USkeletalMeshComponent::M_PtrGetLineCheckBoundsScale() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1780);
}
void USkeletalMeshComponent::M_SetLineCheckBoundsScale(const struct FVector& value) {
	Write((byte*)this + 1780, value);
}
// Member Getter and Setter of LinkedInstances
// Declaration: TArray<class UAnimInstance*> LinkedInstances
TArray<class UAnimInstance*> USkeletalMeshComponent::M_GetLinkedInstances() const {
	return Read<TArray<class UAnimInstance*>>((byte*)this + 1840);
}
TArray<class UAnimInstance*>* USkeletalMeshComponent::M_PtrGetLinkedInstances() {
	return reinterpret_cast<TArray<class UAnimInstance*>*>((byte*)this + 1840);
}
void USkeletalMeshComponent::M_SetLinkedInstances(const TArray<class UAnimInstance*>& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of CachedBoneSpaceTransforms
// Declaration: TArray<struct FTransform> CachedBoneSpaceTransforms
TArray<struct FTransform> USkeletalMeshComponent::M_GetCachedBoneSpaceTransforms() const {
	return Read<TArray<struct FTransform>>((byte*)this + 1856);
}
TArray<struct FTransform>* USkeletalMeshComponent::M_PtrGetCachedBoneSpaceTransforms() {
	return reinterpret_cast<TArray<struct FTransform>*>((byte*)this + 1856);
}
void USkeletalMeshComponent::M_SetCachedBoneSpaceTransforms(const TArray<struct FTransform>& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of CachedComponentSpaceTransforms
// Declaration: TArray<struct FTransform> CachedComponentSpaceTransforms
TArray<struct FTransform> USkeletalMeshComponent::M_GetCachedComponentSpaceTransforms() const {
	return Read<TArray<struct FTransform>>((byte*)this + 1872);
}
TArray<struct FTransform>* USkeletalMeshComponent::M_PtrGetCachedComponentSpaceTransforms() {
	return reinterpret_cast<TArray<struct FTransform>*>((byte*)this + 1872);
}
void USkeletalMeshComponent::M_SetCachedComponentSpaceTransforms(const TArray<struct FTransform>& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of GlobalAnimRateScale
// Declaration: float GlobalAnimRateScale
float USkeletalMeshComponent::M_GetGlobalAnimRateScale() const {
	return Read<float>((byte*)this + 2224);
}
float* USkeletalMeshComponent::M_PtrGetGlobalAnimRateScale() {
	return reinterpret_cast<float*>((byte*)this + 2224);
}
void USkeletalMeshComponent::M_SetGlobalAnimRateScale(const float& value) {
	Write((byte*)this + 2224, value);
}
// Member Getter and Setter of KinematicBonesUpdateType
// Declaration: TEnumAsByte<EKinematicBonesUpdateToPhysics> KinematicBonesUpdateType
TEnumAsByte<EKinematicBonesUpdateToPhysics> USkeletalMeshComponent::M_GetKinematicBonesUpdateType() const {
	return Read<TEnumAsByte<EKinematicBonesUpdateToPhysics>>((byte*)this + 2228);
}
TEnumAsByte<EKinematicBonesUpdateToPhysics>* USkeletalMeshComponent::M_PtrGetKinematicBonesUpdateType() {
	return reinterpret_cast<TEnumAsByte<EKinematicBonesUpdateToPhysics>*>((byte*)this + 2228);
}
void USkeletalMeshComponent::M_SetKinematicBonesUpdateType(const TEnumAsByte<EKinematicBonesUpdateToPhysics>& value) {
	Write((byte*)this + 2228, value);
}
// Member Getter and Setter of PhysicsTransformUpdateMode
// Declaration: TEnumAsByte<EPhysicsTransformUpdateMode> PhysicsTransformUpdateMode
TEnumAsByte<EPhysicsTransformUpdateMode> USkeletalMeshComponent::M_GetPhysicsTransformUpdateMode() const {
	return Read<TEnumAsByte<EPhysicsTransformUpdateMode>>((byte*)this + 2229);
}
TEnumAsByte<EPhysicsTransformUpdateMode>* USkeletalMeshComponent::M_PtrGetPhysicsTransformUpdateMode() {
	return reinterpret_cast<TEnumAsByte<EPhysicsTransformUpdateMode>*>((byte*)this + 2229);
}
void USkeletalMeshComponent::M_SetPhysicsTransformUpdateMode(const TEnumAsByte<EPhysicsTransformUpdateMode>& value) {
	Write((byte*)this + 2229, value);
}
// Member Getter and Setter of AnimationMode
// Declaration: TEnumAsByte<EAnimationMode> AnimationMode
TEnumAsByte<EAnimationMode> USkeletalMeshComponent::M_GetAnimationMode() const {
	return Read<TEnumAsByte<EAnimationMode>>((byte*)this + 2231);
}
TEnumAsByte<EAnimationMode>* USkeletalMeshComponent::M_PtrGetAnimationMode() {
	return reinterpret_cast<TEnumAsByte<EAnimationMode>*>((byte*)this + 2231);
}
void USkeletalMeshComponent::M_SetAnimationMode(const TEnumAsByte<EAnimationMode>& value) {
	Write((byte*)this + 2231, value);
}
// Member Getter and Setter of bDisablePostProcessBlueprint
// Declaration: unsigned char bDisablePostProcessBlueprint : 1
unsigned char USkeletalMeshComponent::M_GetbDisablePostProcessBlueprint() const {
	return Read<unsigned char>((byte*)this + 2233);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbDisablePostProcessBlueprint() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2233);
}
void USkeletalMeshComponent::M_SetbDisablePostProcessBlueprint(const unsigned char& value) {
	Write((byte*)this + 2233, value);
}
// Member Getter and Setter of bUpdateOverlapsOnAnimationFinalize
// Declaration: unsigned char bUpdateOverlapsOnAnimationFinalize : 1
unsigned char USkeletalMeshComponent::M_GetbUpdateOverlapsOnAnimationFinalize() const {
	return Read<unsigned char>((byte*)this + 2233);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbUpdateOverlapsOnAnimationFinalize() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2233);
}
void USkeletalMeshComponent::M_SetbUpdateOverlapsOnAnimationFinalize(const unsigned char& value) {
	Write((byte*)this + 2233, value);
}
// Member Getter and Setter of bHasValidBodies
// Declaration: unsigned char bHasValidBodies : 1
unsigned char USkeletalMeshComponent::M_GetbHasValidBodies() const {
	return Read<unsigned char>((byte*)this + 2233);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbHasValidBodies() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2233);
}
void USkeletalMeshComponent::M_SetbHasValidBodies(const unsigned char& value) {
	Write((byte*)this + 2233, value);
}
// Member Getter and Setter of bBlendPhysics
// Declaration: unsigned char bBlendPhysics : 1
unsigned char USkeletalMeshComponent::M_GetbBlendPhysics() const {
	return Read<unsigned char>((byte*)this + 2233);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbBlendPhysics() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2233);
}
void USkeletalMeshComponent::M_SetbBlendPhysics(const unsigned char& value) {
	Write((byte*)this + 2233, value);
}
// Member Getter and Setter of bEnablePhysicsOnDedicatedServer
// Declaration: unsigned char bEnablePhysicsOnDedicatedServer : 1
unsigned char USkeletalMeshComponent::M_GetbEnablePhysicsOnDedicatedServer() const {
	return Read<unsigned char>((byte*)this + 2233);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbEnablePhysicsOnDedicatedServer() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2233);
}
void USkeletalMeshComponent::M_SetbEnablePhysicsOnDedicatedServer(const unsigned char& value) {
	Write((byte*)this + 2233, value);
}
// Member Getter and Setter of bUpdateJointsFromAnimation
// Declaration: unsigned char bUpdateJointsFromAnimation : 1
unsigned char USkeletalMeshComponent::M_GetbUpdateJointsFromAnimation() const {
	return Read<unsigned char>((byte*)this + 2233);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbUpdateJointsFromAnimation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2233);
}
void USkeletalMeshComponent::M_SetbUpdateJointsFromAnimation(const unsigned char& value) {
	Write((byte*)this + 2233, value);
}
// Member Getter and Setter of bDisableClothSimulation
// Declaration: unsigned char bDisableClothSimulation : 1
unsigned char USkeletalMeshComponent::M_GetbDisableClothSimulation() const {
	return Read<unsigned char>((byte*)this + 2234);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbDisableClothSimulation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2234);
}
void USkeletalMeshComponent::M_SetbDisableClothSimulation(const unsigned char& value) {
	Write((byte*)this + 2234, value);
}
// Member Getter and Setter of bDisableRigidBodyAnimNode
// Declaration: unsigned char bDisableRigidBodyAnimNode : 1
unsigned char USkeletalMeshComponent::M_GetbDisableRigidBodyAnimNode() const {
	return Read<unsigned char>((byte*)this + 2240);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbDisableRigidBodyAnimNode() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2240);
}
void USkeletalMeshComponent::M_SetbDisableRigidBodyAnimNode(const unsigned char& value) {
	Write((byte*)this + 2240, value);
}
// Member Getter and Setter of bAllowAnimCurveEvaluation
// Declaration: unsigned char bAllowAnimCurveEvaluation : 1
unsigned char USkeletalMeshComponent::M_GetbAllowAnimCurveEvaluation() const {
	return Read<unsigned char>((byte*)this + 2240);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbAllowAnimCurveEvaluation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2240);
}
void USkeletalMeshComponent::M_SetbAllowAnimCurveEvaluation(const unsigned char& value) {
	Write((byte*)this + 2240, value);
}
// Member Getter and Setter of bDisableAnimCurves
// Declaration: unsigned char bDisableAnimCurves : 1
unsigned char USkeletalMeshComponent::M_GetbDisableAnimCurves() const {
	return Read<unsigned char>((byte*)this + 2240);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbDisableAnimCurves() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2240);
}
void USkeletalMeshComponent::M_SetbDisableAnimCurves(const unsigned char& value) {
	Write((byte*)this + 2240, value);
}
// Member Getter and Setter of bCollideWithEnvironment
// Declaration: unsigned char bCollideWithEnvironment : 1
unsigned char USkeletalMeshComponent::M_GetbCollideWithEnvironment() const {
	return Read<unsigned char>((byte*)this + 2240);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbCollideWithEnvironment() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2240);
}
void USkeletalMeshComponent::M_SetbCollideWithEnvironment(const unsigned char& value) {
	Write((byte*)this + 2240, value);
}
// Member Getter and Setter of bCollideWithAttachedChildren
// Declaration: unsigned char bCollideWithAttachedChildren : 1
unsigned char USkeletalMeshComponent::M_GetbCollideWithAttachedChildren() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbCollideWithAttachedChildren() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbCollideWithAttachedChildren(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bLocalSpaceSimulation
// Declaration: unsigned char bLocalSpaceSimulation : 1
unsigned char USkeletalMeshComponent::M_GetbLocalSpaceSimulation() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbLocalSpaceSimulation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbLocalSpaceSimulation(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bResetAfterTeleport
// Declaration: unsigned char bResetAfterTeleport : 1
unsigned char USkeletalMeshComponent::M_GetbResetAfterTeleport() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbResetAfterTeleport() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbResetAfterTeleport(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bDeferKinematicBoneUpdate
// Declaration: unsigned char bDeferKinematicBoneUpdate : 1
unsigned char USkeletalMeshComponent::M_GetbDeferKinematicBoneUpdate() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbDeferKinematicBoneUpdate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbDeferKinematicBoneUpdate(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bNoSkeletonUpdate
// Declaration: unsigned char bNoSkeletonUpdate : 1
unsigned char USkeletalMeshComponent::M_GetbNoSkeletonUpdate() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbNoSkeletonUpdate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbNoSkeletonUpdate(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bPauseAnims
// Declaration: unsigned char bPauseAnims : 1
unsigned char USkeletalMeshComponent::M_GetbPauseAnims() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbPauseAnims() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbPauseAnims(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bUseRefPoseOnInitAnim
// Declaration: unsigned char bUseRefPoseOnInitAnim : 1
unsigned char USkeletalMeshComponent::M_GetbUseRefPoseOnInitAnim() const {
	return Read<unsigned char>((byte*)this + 2241);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbUseRefPoseOnInitAnim() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2241);
}
void USkeletalMeshComponent::M_SetbUseRefPoseOnInitAnim(const unsigned char& value) {
	Write((byte*)this + 2241, value);
}
// Member Getter and Setter of bEnablePerPolyCollision
// Declaration: unsigned char bEnablePerPolyCollision : 1
unsigned char USkeletalMeshComponent::M_GetbEnablePerPolyCollision() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbEnablePerPolyCollision() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbEnablePerPolyCollision(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bForceRefpose
// Declaration: unsigned char bForceRefpose : 1
unsigned char USkeletalMeshComponent::M_GetbForceRefpose() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbForceRefpose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbForceRefpose(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bOnlyAllowAutonomousTickPose
// Declaration: unsigned char bOnlyAllowAutonomousTickPose : 1
unsigned char USkeletalMeshComponent::M_GetbOnlyAllowAutonomousTickPose() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbOnlyAllowAutonomousTickPose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbOnlyAllowAutonomousTickPose(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bIsAutonomousTickPose
// Declaration: unsigned char bIsAutonomousTickPose : 1
unsigned char USkeletalMeshComponent::M_GetbIsAutonomousTickPose() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbIsAutonomousTickPose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbIsAutonomousTickPose(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bOldForceRefPose
// Declaration: unsigned char bOldForceRefPose : 1
unsigned char USkeletalMeshComponent::M_GetbOldForceRefPose() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbOldForceRefPose() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbOldForceRefPose(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bShowPrePhysBones
// Declaration: unsigned char bShowPrePhysBones : 1
unsigned char USkeletalMeshComponent::M_GetbShowPrePhysBones() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbShowPrePhysBones() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbShowPrePhysBones(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bRequiredBonesUpToDate
// Declaration: unsigned char bRequiredBonesUpToDate : 1
unsigned char USkeletalMeshComponent::M_GetbRequiredBonesUpToDate() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbRequiredBonesUpToDate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbRequiredBonesUpToDate(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bAnimTreeInitialised
// Declaration: unsigned char bAnimTreeInitialised : 1
unsigned char USkeletalMeshComponent::M_GetbAnimTreeInitialised() const {
	return Read<unsigned char>((byte*)this + 2242);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbAnimTreeInitialised() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2242);
}
void USkeletalMeshComponent::M_SetbAnimTreeInitialised(const unsigned char& value) {
	Write((byte*)this + 2242, value);
}
// Member Getter and Setter of bIncludeComponentLocationIntoBounds
// Declaration: unsigned char bIncludeComponentLocationIntoBounds : 1
unsigned char USkeletalMeshComponent::M_GetbIncludeComponentLocationIntoBounds() const {
	return Read<unsigned char>((byte*)this + 2243);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbIncludeComponentLocationIntoBounds() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2243);
}
void USkeletalMeshComponent::M_SetbIncludeComponentLocationIntoBounds(const unsigned char& value) {
	Write((byte*)this + 2243, value);
}
// Member Getter and Setter of bEnableLineCheckWithBounds
// Declaration: unsigned char bEnableLineCheckWithBounds : 1
unsigned char USkeletalMeshComponent::M_GetbEnableLineCheckWithBounds() const {
	return Read<unsigned char>((byte*)this + 2243);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbEnableLineCheckWithBounds() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2243);
}
void USkeletalMeshComponent::M_SetbEnableLineCheckWithBounds(const unsigned char& value) {
	Write((byte*)this + 2243, value);
}
// Member Getter and Setter of bPropagateCurvesToSlaves
// Declaration: unsigned char bPropagateCurvesToSlaves : 1
unsigned char USkeletalMeshComponent::M_GetbPropagateCurvesToSlaves() const {
	return Read<unsigned char>((byte*)this + 2243);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbPropagateCurvesToSlaves() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2243);
}
void USkeletalMeshComponent::M_SetbPropagateCurvesToSlaves(const unsigned char& value) {
	Write((byte*)this + 2243, value);
}
// Member Getter and Setter of bSkipKinematicUpdateWhenInterpolating
// Declaration: unsigned char bSkipKinematicUpdateWhenInterpolating : 1
unsigned char USkeletalMeshComponent::M_GetbSkipKinematicUpdateWhenInterpolating() const {
	return Read<unsigned char>((byte*)this + 2243);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbSkipKinematicUpdateWhenInterpolating() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2243);
}
void USkeletalMeshComponent::M_SetbSkipKinematicUpdateWhenInterpolating(const unsigned char& value) {
	Write((byte*)this + 2243, value);
}
// Member Getter and Setter of bSkipBoundsUpdateWhenInterpolating
// Declaration: unsigned char bSkipBoundsUpdateWhenInterpolating : 1
unsigned char USkeletalMeshComponent::M_GetbSkipBoundsUpdateWhenInterpolating() const {
	return Read<unsigned char>((byte*)this + 2243);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbSkipBoundsUpdateWhenInterpolating() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2243);
}
void USkeletalMeshComponent::M_SetbSkipBoundsUpdateWhenInterpolating(const unsigned char& value) {
	Write((byte*)this + 2243, value);
}
// Member Getter and Setter of bNeedsQueuedAnimEventsDispatched
// Declaration: unsigned char bNeedsQueuedAnimEventsDispatched : 1
unsigned char USkeletalMeshComponent::M_GetbNeedsQueuedAnimEventsDispatched() const {
	return Read<unsigned char>((byte*)this + 2243);
}
unsigned char* USkeletalMeshComponent::M_PtrGetbNeedsQueuedAnimEventsDispatched() {
	return reinterpret_cast<unsigned char*>((byte*)this + 2243);
}
void USkeletalMeshComponent::M_SetbNeedsQueuedAnimEventsDispatched(const unsigned char& value) {
	Write((byte*)this + 2243, value);
}
// Member Getter and Setter of CachedAnimCurveUidVersion
// Declaration: uint16_t CachedAnimCurveUidVersion
uint16_t USkeletalMeshComponent::M_GetCachedAnimCurveUidVersion() const {
	return Read<uint16_t>((byte*)this + 2246);
}
uint16_t* USkeletalMeshComponent::M_PtrGetCachedAnimCurveUidVersion() {
	return reinterpret_cast<uint16_t*>((byte*)this + 2246);
}
void USkeletalMeshComponent::M_SetCachedAnimCurveUidVersion(const uint16_t& value) {
	Write((byte*)this + 2246, value);
}
// Member Getter and Setter of ClothBlendWeight
// Declaration: float ClothBlendWeight
float USkeletalMeshComponent::M_GetClothBlendWeight() const {
	return Read<float>((byte*)this + 2248);
}
float* USkeletalMeshComponent::M_PtrGetClothBlendWeight() {
	return reinterpret_cast<float*>((byte*)this + 2248);
}
void USkeletalMeshComponent::M_SetClothBlendWeight(const float& value) {
	Write((byte*)this + 2248, value);
}
// Member Getter and Setter of bWaitForParallelClothTask
// Declaration: bool bWaitForParallelClothTask
bool USkeletalMeshComponent::M_GetbWaitForParallelClothTask() const {
	return Read<bool>((byte*)this + 2252);
}
bool* USkeletalMeshComponent::M_PtrGetbWaitForParallelClothTask() {
	return reinterpret_cast<bool*>((byte*)this + 2252);
}
void USkeletalMeshComponent::M_SetbWaitForParallelClothTask(const bool& value) {
	Write((byte*)this + 2252, value);
}
// Member Getter and Setter of DisallowedAnimCurves
// Declaration: TArray<struct FName> DisallowedAnimCurves
TArray<struct FName> USkeletalMeshComponent::M_GetDisallowedAnimCurves() const {
	return Read<TArray<struct FName>>((byte*)this + 2256);
}
TArray<struct FName>* USkeletalMeshComponent::M_PtrGetDisallowedAnimCurves() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 2256);
}
void USkeletalMeshComponent::M_SetDisallowedAnimCurves(const TArray<struct FName>& value) {
	Write((byte*)this + 2256, value);
}
// Member Getter and Setter of BodySetup
// Declaration: class UBodySetup* BodySetup
class UBodySetup* USkeletalMeshComponent::M_GetBodySetup() const {
	return Read<class UBodySetup*>((byte*)this + 2272);
}
class UBodySetup** USkeletalMeshComponent::M_PtrGetBodySetup() {
	return reinterpret_cast<class UBodySetup**>((byte*)this + 2272);
}
void USkeletalMeshComponent::M_SetBodySetup(const class UBodySetup*& value) {
	Write((byte*)this + 2272, value);
}
// Member Getter and Setter of OnConstraintBroken
// Declaration: TAssetPtr<class FConstraintBrokenSignature__DelegateSignature> OnConstraintBroken
TAssetPtr<class FConstraintBrokenSignature__DelegateSignature> USkeletalMeshComponent::M_GetOnConstraintBroken() const {
	return Read<TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>>((byte*)this + 2288);
}
TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>* USkeletalMeshComponent::M_PtrGetOnConstraintBroken() {
	return reinterpret_cast<TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>*>((byte*)this + 2288);
}
void USkeletalMeshComponent::M_SetOnConstraintBroken(const TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>& value) {
	Write((byte*)this + 2288, value);
}
// Member Getter and Setter of ClothingSimulationFactory
// Declaration: class UClothingSimulationFactory* ClothingSimulationFactory
class UClothingSimulationFactory* USkeletalMeshComponent::M_GetClothingSimulationFactory() const {
	return Read<class UClothingSimulationFactory*>((byte*)this + 2304);
}
class UClothingSimulationFactory** USkeletalMeshComponent::M_PtrGetClothingSimulationFactory() {
	return reinterpret_cast<class UClothingSimulationFactory**>((byte*)this + 2304);
}
void USkeletalMeshComponent::M_SetClothingSimulationFactory(const class UClothingSimulationFactory*& value) {
	Write((byte*)this + 2304, value);
}
// Member Getter and Setter of TeleportDistanceThreshold
// Declaration: float TeleportDistanceThreshold
float USkeletalMeshComponent::M_GetTeleportDistanceThreshold() const {
	return Read<float>((byte*)this + 2520);
}
float* USkeletalMeshComponent::M_PtrGetTeleportDistanceThreshold() {
	return reinterpret_cast<float*>((byte*)this + 2520);
}
void USkeletalMeshComponent::M_SetTeleportDistanceThreshold(const float& value) {
	Write((byte*)this + 2520, value);
}
// Member Getter and Setter of TeleportRotationThreshold
// Declaration: float TeleportRotationThreshold
float USkeletalMeshComponent::M_GetTeleportRotationThreshold() const {
	return Read<float>((byte*)this + 2524);
}
float* USkeletalMeshComponent::M_PtrGetTeleportRotationThreshold() {
	return reinterpret_cast<float*>((byte*)this + 2524);
}
void USkeletalMeshComponent::M_SetTeleportRotationThreshold(const float& value) {
	Write((byte*)this + 2524, value);
}
// Member Getter and Setter of LastPoseTickFrame
// Declaration: uint32_t LastPoseTickFrame
uint32_t USkeletalMeshComponent::M_GetLastPoseTickFrame() const {
	return Read<uint32_t>((byte*)this + 2536);
}
uint32_t* USkeletalMeshComponent::M_PtrGetLastPoseTickFrame() {
	return reinterpret_cast<uint32_t*>((byte*)this + 2536);
}
void USkeletalMeshComponent::M_SetLastPoseTickFrame(const uint32_t& value) {
	Write((byte*)this + 2536, value);
}
// Member Getter and Setter of ClothingInteractor
// Declaration: class UClothingSimulationInteractor* ClothingInteractor
class UClothingSimulationInteractor* USkeletalMeshComponent::M_GetClothingInteractor() const {
	return Read<class UClothingSimulationInteractor*>((byte*)this + 2624);
}
class UClothingSimulationInteractor** USkeletalMeshComponent::M_PtrGetClothingInteractor() {
	return reinterpret_cast<class UClothingSimulationInteractor**>((byte*)this + 2624);
}
void USkeletalMeshComponent::M_SetClothingInteractor(const class UClothingSimulationInteractor*& value) {
	Write((byte*)this + 2624, value);
}
// Member Getter and Setter of OnAnimInitialized
// Declaration: TAssetPtr<class FOnAnimInitialized__DelegateSignature> OnAnimInitialized
TAssetPtr<class FOnAnimInitialized__DelegateSignature> USkeletalMeshComponent::M_GetOnAnimInitialized() const {
	return Read<TAssetPtr<class FOnAnimInitialized__DelegateSignature>>((byte*)this + 2832);
}
TAssetPtr<class FOnAnimInitialized__DelegateSignature>* USkeletalMeshComponent::M_PtrGetOnAnimInitialized() {
	return reinterpret_cast<TAssetPtr<class FOnAnimInitialized__DelegateSignature>*>((byte*)this + 2832);
}
void USkeletalMeshComponent::M_SetOnAnimInitialized(const TAssetPtr<class FOnAnimInitialized__DelegateSignature>& value) {
	Write((byte*)this + 2832, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AddPhysicsBlendWeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSkipCustomPhysicsType	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight");

	struct USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params {
		struct FName InBoneName;			//Offset: 0 | ElementSize: 8
		float AddPhysicsBlendWeight;			//Offset: 8 | ElementSize: 4
		bool bSkipCustomPhysicsType;			//Offset: 12 | ElementSize: 1
	};
	USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params params;
	params.InBoneName = InBoneName;
	params.AddPhysicsBlendWeight = AddPhysicsBlendWeight;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Force	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAccelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::AddForceToAllBodiesBelow(struct FVector Force, struct FName BoneName, bool bAccelChange, bool bIncludeSelf) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow");

	struct USkeletalMeshComponent_AddForceToAllBodiesBelow_Params {
		struct FVector Force;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bAccelChange;			//Offset: 20 | ElementSize: 1
		bool bIncludeSelf;			//Offset: 21 | ElementSize: 1
	};
	USkeletalMeshComponent_AddForceToAllBodiesBelow_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;
	params.bIncludeSelf = bIncludeSelf;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bVelChange	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::AddImpulseToAllBodiesBelow(struct FVector Impulse, struct FName BoneName, bool bVelChange, bool bIncludeSelf) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow");

	struct USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FName BoneName;			//Offset: 12 | ElementSize: 8
		bool bVelChange;			//Offset: 20 | ElementSize: 1
		bool bIncludeSelf;			//Offset: 21 | ElementSize: 1
	};
	USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;
	params.bIncludeSelf = bIncludeSelf;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NameOfCurve	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAllow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::AllowAnimCurveEvaluation(struct FName NameOfCurve, bool bAllow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation");

	struct USkeletalMeshComponent_AllowAnimCurveEvaluation_Params {
		struct FName NameOfCurve;			//Offset: 0 | ElementSize: 8
		bool bAllow;			//Offset: 8 | ElementSize: 1
	};
	USkeletalMeshComponent_AllowAnimCurveEvaluation_Params params;
	params.NameOfCurve = NameOfCurve;
	params.bAllow = bAllow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::BindClothToMasterPoseComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent");

	struct USkeletalMeshComponent_BindClothToMasterPoseComponent_Params {
	};
	USkeletalMeshComponent_BindClothToMasterPoseComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.BreakConstraint
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Impulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::BreakConstraint(struct FVector Impulse, struct FVector HitLocation, struct FName InBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.BreakConstraint");

	struct USkeletalMeshComponent_BreakConstraint_Params {
		struct FVector Impulse;			//Offset: 0 | ElementSize: 12
		struct FVector HitLocation;			//Offset: 12 | ElementSize: 12
		struct FName InBoneName;			//Offset: 24 | ElementSize: 8
	};
	USkeletalMeshComponent_BreakConstraint_Params params;
	params.Impulse = Impulse;
	params.HitLocation = HitLocation;
	params.InBoneName = InBoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ClearMorphTargets
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ClearMorphTargets() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ClearMorphTargets");

	struct USkeletalMeshComponent_ClearMorphTargets_Params {
	};
	USkeletalMeshComponent_ClearMorphTargets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.FindConstraintBoneName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ConstraintIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName USkeletalMeshComponent::FindConstraintBoneName(int32_t ConstraintIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.FindConstraintBoneName");

	struct USkeletalMeshComponent_FindConstraintBoneName_Params {
		int32_t ConstraintIndex;			//Offset: 0 | ElementSize: 4
		struct FName ReturnValue;			//Offset: 4 | ElementSize: 8
	};
	USkeletalMeshComponent_FindConstraintBoneName_Params params;
	params.ConstraintIndex = ConstraintIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ForceClothNextUpdateTeleport() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport");

	struct USkeletalMeshComponent_ForceClothNextUpdateTeleport_Params {
	};
	USkeletalMeshComponent_ForceClothNextUpdateTeleport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ForceClothNextUpdateTeleportAndReset() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset");

	struct USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params {
	};
	USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetAllowedAnimCurveEvaluate()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate");

	struct USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetAllowRigidBodyAnimNode
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetAllowRigidBodyAnimNode()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetAllowRigidBodyAnimNode");

	struct USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetAnimationMode
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<EAnimationMode>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EAnimationMode> USkeletalMeshComponent::GetAnimationMode()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetAnimationMode");

	struct USkeletalMeshComponent_GetAnimationMode_Params {
		TEnumAsByte<EAnimationMode> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_GetAnimationMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetAnimClass
// Flags: Final, Native, Public
// Params:
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* USkeletalMeshComponent::GetAnimClass() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetAnimClass");

	struct USkeletalMeshComponent_GetAnimClass_Params {
		class UObject* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_GetAnimClass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetAnimInstance
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* USkeletalMeshComponent::GetAnimInstance()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetAnimInstance");

	struct USkeletalMeshComponent_GetAnimInstance_Params {
		class UAnimInstance* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_GetAnimInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetBoneMass
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bScaleMass	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetBoneMass(struct FName BoneName, bool bScaleMass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetBoneMass");

	struct USkeletalMeshComponent_GetBoneMass_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		bool bScaleMass;			//Offset: 8 | ElementSize: 1
		float ReturnValue;			//Offset: 12 | ElementSize: 4
	};
	USkeletalMeshComponent_GetBoneMass_Params params;
	params.BoneName = BoneName;
	params.bScaleMass = bScaleMass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UClothingSimulationInteractor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UClothingSimulationInteractor* USkeletalMeshComponent::GetClothingSimulationInteractor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor");

	struct USkeletalMeshComponent_GetClothingSimulationInteractor_Params {
		class UClothingSimulationInteractor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_GetClothingSimulationInteractor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetClothMaxDistanceScale()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale");

	struct USkeletalMeshComponent_GetClothMaxDistanceScale_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_GetClothMaxDistanceScale_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetCurrentJointAngles
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Swing1Angle	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TwistAngle	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Swing2Angle	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::GetCurrentJointAngles(struct FName InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetCurrentJointAngles");

	struct USkeletalMeshComponent_GetCurrentJointAngles_Params {
		struct FName InBoneName;			//Offset: 0 | ElementSize: 8
		float Swing1Angle;			//Offset: 8 | ElementSize: 4
		float TwistAngle;			//Offset: 12 | ElementSize: 4
		float Swing2Angle;			//Offset: 16 | ElementSize: 4
	};
	USkeletalMeshComponent_GetCurrentJointAngles_Params params;
	params.InBoneName = InBoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Swing1Angle != nullptr)
		*Swing1Angle = params.Swing1Angle;
	if (TwistAngle != nullptr)
		*TwistAngle = params.TwistAngle;
	if (Swing2Angle != nullptr)
		*Swing2Angle = params.Swing2Angle;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetDisableAnimCurves
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetDisableAnimCurves()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetDisableAnimCurves");

	struct USkeletalMeshComponent_GetDisableAnimCurves_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_GetDisableAnimCurves_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetDisablePostProcessBlueprint()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint");

	struct USkeletalMeshComponent_GetDisablePostProcessBlueprint_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_GetDisablePostProcessBlueprint_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetFloatAttribute
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttributeName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DefaultValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookupType	Type: ECustomBoneAttributeLookup	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetFloatAttribute(const struct FName& BoneName, const struct FName& AttributeName, float DefaultValue, float* OutValue, ECustomBoneAttributeLookup LookupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetFloatAttribute");

	struct USkeletalMeshComponent_GetFloatAttribute_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName AttributeName;			//Offset: 8 | ElementSize: 8
		float DefaultValue;			//Offset: 16 | ElementSize: 4
		float OutValue;			//Offset: 20 | ElementSize: 4
		ECustomBoneAttributeLookup LookupType;			//Offset: 24 | ElementSize: 1
		bool ReturnValue;			//Offset: 25 | ElementSize: 1
	};
	USkeletalMeshComponent_GetFloatAttribute_Params params;
	params.BoneName = BoneName;
	params.AttributeName = AttributeName;
	params.DefaultValue = DefaultValue;
	params.LookupType = LookupType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetFloatAttribute_Ref
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttributeName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookupType	Type: ECustomBoneAttributeLookup	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetFloatAttribute_Ref(const struct FName& BoneName, const struct FName& AttributeName, float* OutValue, ECustomBoneAttributeLookup LookupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetFloatAttribute_Ref");

	struct USkeletalMeshComponent_GetFloatAttribute_Ref_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName AttributeName;			//Offset: 8 | ElementSize: 8
		float OutValue;			//Offset: 16 | ElementSize: 4
		ECustomBoneAttributeLookup LookupType;			//Offset: 20 | ElementSize: 1
		bool ReturnValue;			//Offset: 21 | ElementSize: 1
	};
	USkeletalMeshComponent_GetFloatAttribute_Ref_Params params;
	params.BoneName = BoneName;
	params.AttributeName = AttributeName;
	params.LookupType = LookupType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetIntegerAttribute
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttributeName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DefaultValue	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookupType	Type: ECustomBoneAttributeLookup	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetIntegerAttribute(const struct FName& BoneName, const struct FName& AttributeName, int32_t DefaultValue, int32_t* OutValue, ECustomBoneAttributeLookup LookupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetIntegerAttribute");

	struct USkeletalMeshComponent_GetIntegerAttribute_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName AttributeName;			//Offset: 8 | ElementSize: 8
		int32_t DefaultValue;			//Offset: 16 | ElementSize: 4
		int32_t OutValue;			//Offset: 20 | ElementSize: 4
		ECustomBoneAttributeLookup LookupType;			//Offset: 24 | ElementSize: 1
		bool ReturnValue;			//Offset: 25 | ElementSize: 1
	};
	USkeletalMeshComponent_GetIntegerAttribute_Params params;
	params.BoneName = BoneName;
	params.AttributeName = AttributeName;
	params.DefaultValue = DefaultValue;
	params.LookupType = LookupType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetIntegerAttribute_Ref
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttributeName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookupType	Type: ECustomBoneAttributeLookup	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetIntegerAttribute_Ref(const struct FName& BoneName, const struct FName& AttributeName, int32_t* OutValue, ECustomBoneAttributeLookup LookupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetIntegerAttribute_Ref");

	struct USkeletalMeshComponent_GetIntegerAttribute_Ref_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName AttributeName;			//Offset: 8 | ElementSize: 8
		int32_t OutValue;			//Offset: 16 | ElementSize: 4
		ECustomBoneAttributeLookup LookupType;			//Offset: 20 | ElementSize: 1
		bool ReturnValue;			//Offset: 21 | ElementSize: 1
	};
	USkeletalMeshComponent_GetIntegerAttribute_Ref_Params params;
	params.BoneName = BoneName;
	params.AttributeName = AttributeName;
	params.LookupType = LookupType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstanceByTag
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* USkeletalMeshComponent::GetLinkedAnimGraphInstanceByTag(struct FName InTag)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstanceByTag");

	struct USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Params {
		struct FName InTag;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Params params;
	params.InTag = InTag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstancesByTag
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutLinkedInstances	Type: TArray<class UAnimInstance*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::GetLinkedAnimGraphInstancesByTag(struct FName InTag, TArray<class UAnimInstance*>* OutLinkedInstances)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstancesByTag");

	struct USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Params {
		struct FName InTag;			//Offset: 0 | ElementSize: 8
		TArray<class UAnimInstance*> OutLinkedInstances;			//Offset: 8 | ElementSize: 16
	};
	USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Params params;
	params.InTag = InTag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutLinkedInstances != nullptr)
		*OutLinkedInstances = params.OutLinkedInstances;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByClass
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* USkeletalMeshComponent::GetLinkedAnimLayerInstanceByClass(class UAnimInstance* InClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByClass");

	struct USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Params {
		class UAnimInstance* InClass;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Params params;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByGroup
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InGroup	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* USkeletalMeshComponent::GetLinkedAnimLayerInstanceByGroup(struct FName InGroup)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByGroup");

	struct USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Params {
		struct FName InGroup;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Params params;
	params.InGroup = InGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetMorphTarget
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: MorphTargetName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetMorphTarget(struct FName MorphTargetName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetMorphTarget");

	struct USkeletalMeshComponent_GetMorphTarget_Params {
		struct FName MorphTargetName;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	USkeletalMeshComponent_GetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetPlayRate
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetPlayRate()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetPlayRate");

	struct USkeletalMeshComponent_GetPlayRate_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_GetPlayRate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetPosition
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetPosition()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetPosition");

	struct USkeletalMeshComponent_GetPosition_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_GetPosition_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetPostProcessInstance
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* USkeletalMeshComponent::GetPostProcessInstance()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetPostProcessInstance");

	struct USkeletalMeshComponent_GetPostProcessInstance_Params {
		class UAnimInstance* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_GetPostProcessInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USkeletalMeshComponent::GetSkeletalCenterOfMass()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass");

	struct USkeletalMeshComponent_GetSkeletalCenterOfMass_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	USkeletalMeshComponent_GetSkeletalCenterOfMass_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetStringAttribute
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttributeName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DefaultValue	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookupType	Type: ECustomBoneAttributeLookup	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetStringAttribute(const struct FName& BoneName, const struct FName& AttributeName, struct FString DefaultValue, struct FString* OutValue, ECustomBoneAttributeLookup LookupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetStringAttribute");

	struct USkeletalMeshComponent_GetStringAttribute_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName AttributeName;			//Offset: 8 | ElementSize: 8
		struct FString DefaultValue;			//Offset: 16 | ElementSize: 16
		struct FString OutValue;			//Offset: 32 | ElementSize: 16
		ECustomBoneAttributeLookup LookupType;			//Offset: 48 | ElementSize: 1
		bool ReturnValue;			//Offset: 49 | ElementSize: 1
	};
	USkeletalMeshComponent_GetStringAttribute_Params params;
	params.BoneName = BoneName;
	params.AttributeName = AttributeName;
	params.DefaultValue = DefaultValue;
	params.LookupType = LookupType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetStringAttribute_Ref
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttributeName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LookupType	Type: ECustomBoneAttributeLookup	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::GetStringAttribute_Ref(const struct FName& BoneName, const struct FName& AttributeName, struct FString* OutValue, ECustomBoneAttributeLookup LookupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetStringAttribute_Ref");

	struct USkeletalMeshComponent_GetStringAttribute_Ref_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		struct FName AttributeName;			//Offset: 8 | ElementSize: 8
		struct FString OutValue;			//Offset: 16 | ElementSize: 16
		ECustomBoneAttributeLookup LookupType;			//Offset: 32 | ElementSize: 1
		bool ReturnValue;			//Offset: 33 | ElementSize: 1
	};
	USkeletalMeshComponent_GetStringAttribute_Ref_Params params;
	params.BoneName = BoneName;
	params.AttributeName = AttributeName;
	params.LookupType = LookupType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetTeleportDistanceThreshold()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold");

	struct USkeletalMeshComponent_GetTeleportDistanceThreshold_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_GetTeleportDistanceThreshold_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float USkeletalMeshComponent::GetTeleportRotationThreshold()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold");

	struct USkeletalMeshComponent_GetTeleportRotationThreshold_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_GetTeleportRotationThreshold_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.HasValidAnimationInstance
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::HasValidAnimationInstance()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.HasValidAnimationInstance");

	struct USkeletalMeshComponent_HasValidAnimationInstance_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_HasValidAnimationInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::IsBodyGravityEnabled(struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled");

	struct USkeletalMeshComponent_IsBodyGravityEnabled_Params {
		struct FName BoneName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	USkeletalMeshComponent_IsBodyGravityEnabled_Params params;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::IsClothingSimulationSuspended()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended");

	struct USkeletalMeshComponent_IsClothingSimulationSuspended_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_IsClothingSimulationSuspended_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.IsPlaying
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::IsPlaying()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.IsPlaying");

	struct USkeletalMeshComponent_IsPlaying_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_IsPlaying_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: WorldPosition	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClosestWorldPosition	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Normal	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool USkeletalMeshComponent::K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset");

	struct USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params {
		struct FVector WorldPosition;			//Offset: 0 | ElementSize: 12
		struct FVector ClosestWorldPosition;			//Offset: 12 | ElementSize: 12
		struct FVector Normal;			//Offset: 24 | ElementSize: 12
		struct FName BoneName;			//Offset: 36 | ElementSize: 8
		float Distance;			//Offset: 44 | ElementSize: 4
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params params;
	params.WorldPosition = WorldPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ClosestWorldPosition != nullptr)
		*ClosestWorldPosition = params.ClosestWorldPosition;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (Distance != nullptr)
		*Distance = params.Distance;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.LinkAnimClassLayers
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::LinkAnimClassLayers(class UAnimInstance* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.LinkAnimClassLayers");

	struct USkeletalMeshComponent_LinkAnimClassLayers_Params {
		class UAnimInstance* InClass;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_LinkAnimClassLayers_Params params;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.LinkAnimGraphByTag
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::LinkAnimGraphByTag(struct FName InTag, class UAnimInstance* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.LinkAnimGraphByTag");

	struct USkeletalMeshComponent_LinkAnimGraphByTag_Params {
		struct FName InTag;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* InClass;			//Offset: 8 | ElementSize: 8
	};
	USkeletalMeshComponent_LinkAnimGraphByTag_Params params;
	params.InTag = InTag;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.OverrideAnimationData
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAnimToPlay	Type: class UAnimationAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIsLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIsPlaying	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Position	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::OverrideAnimationData(class UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.OverrideAnimationData");

	struct USkeletalMeshComponent_OverrideAnimationData_Params {
		class UAnimationAsset* InAnimToPlay;			//Offset: 0 | ElementSize: 8
		bool bIsLooping;			//Offset: 8 | ElementSize: 1
		bool bIsPlaying;			//Offset: 9 | ElementSize: 1
		float Position;			//Offset: 12 | ElementSize: 4
		float PlayRate;			//Offset: 16 | ElementSize: 4
	};
	USkeletalMeshComponent_OverrideAnimationData_Params params;
	params.InAnimToPlay = InAnimToPlay;
	params.bIsLooping = bIsLooping;
	params.bIsPlaying = bIsPlaying;
	params.Position = Position;
	params.PlayRate = PlayRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.Play
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::Play(bool bLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.Play");

	struct USkeletalMeshComponent_Play_Params {
		bool bLooping;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_Play_Params params;
	params.bLooping = bLooping;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.PlayAnimation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewAnimToPlay	Type: class UAnimationAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLooping	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.PlayAnimation");

	struct USkeletalMeshComponent_PlayAnimation_Params {
		class UAnimationAsset* NewAnimToPlay;			//Offset: 0 | ElementSize: 8
		bool bLooping;			//Offset: 8 | ElementSize: 1
	};
	USkeletalMeshComponent_PlayAnimation_Params params;
	params.NewAnimToPlay = NewAnimToPlay;
	params.bLooping = bLooping;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ResetAllBodiesSimulatePhysics() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics");

	struct USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params {
	};
	USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ResetAllowedAnimCurveEvaluation() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation");

	struct USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Params {
	};
	USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTeleportType	Type: ETeleportType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::ResetAnimInstanceDynamics(ETeleportType InTeleportType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics");

	struct USkeletalMeshComponent_ResetAnimInstanceDynamics_Params {
		ETeleportType InTeleportType;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_ResetAnimInstanceDynamics_Params params;
	params.InTeleportType = InTeleportType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ResetClothTeleportMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ResetClothTeleportMode() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ResetClothTeleportMode");

	struct USkeletalMeshComponent_ResetClothTeleportMode_Params {
	};
	USkeletalMeshComponent_ResetClothTeleportMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ResumeClothingSimulation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ResumeClothingSimulation() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ResumeClothingSimulation");

	struct USkeletalMeshComponent_ResumeClothingSimulation_Params {
	};
	USkeletalMeshComponent_ResumeClothingSimulation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PhysicsBlendWeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSkipCustomPhysicsType	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight");

	struct USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params {
		struct FName InBoneName;			//Offset: 0 | ElementSize: 8
		float PhysicsBlendWeight;			//Offset: 8 | ElementSize: 4
		bool bSkipCustomPhysicsType;			//Offset: 12 | ElementSize: 1
		bool bIncludeSelf;			//Offset: 13 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params params;
	params.InBoneName = InBoneName;
	params.PhysicsBlendWeight = PhysicsBlendWeight;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;
	params.bIncludeSelf = bIncludeSelf;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBoneName	Type: struct FName	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bNewSimulate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics");

	struct USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params {
		struct FName InBoneName;			//Offset: 0 | ElementSize: 8
		bool bNewSimulate;			//Offset: 8 | ElementSize: 1
		bool bIncludeSelf;			//Offset: 9 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params params;
	params.InBoneName = InBoneName;
	params.bNewSimulate = bNewSimulate;
	params.bIncludeSelf = bIncludeSelf;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PhysicsBlendWeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSkipCustomPhysicsType	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight");

	struct USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params {
		float PhysicsBlendWeight;			//Offset: 0 | ElementSize: 4
		bool bSkipCustomPhysicsType;			//Offset: 4 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params params;
	params.PhysicsBlendWeight = PhysicsBlendWeight;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewSimulate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllBodiesSimulatePhysics(bool bNewSimulate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics");

	struct USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params {
		bool bNewSimulate;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params params;
	params.bNewSimulate = bNewSimulate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InSpring	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InDamping	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InForceLimit	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSkipCustomPhysicsType	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams");

	struct USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params {
		float InSpring;			//Offset: 0 | ElementSize: 4
		float InDamping;			//Offset: 4 | ElementSize: 4
		float InForceLimit;			//Offset: 8 | ElementSize: 4
		bool bSkipCustomPhysicsType;			//Offset: 12 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params params;
	params.InSpring = InSpring;
	params.InDamping = InDamping;
	params.InForceLimit = InForceLimit;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnableSwingDrive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bEnableTwistDrive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSkipCustomPhysicsType	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive");

	struct USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params {
		bool bEnableSwingDrive;			//Offset: 0 | ElementSize: 1
		bool bEnableTwistDrive;			//Offset: 1 | ElementSize: 1
		bool bSkipCustomPhysicsType;			//Offset: 2 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params params;
	params.bEnableSwingDrive = bEnableSwingDrive;
	params.bEnableTwistDrive = bEnableTwistDrive;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnableSwingDrive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bEnableTwistDrive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSkipCustomPhysicsType	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive");

	struct USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params {
		bool bEnableSwingDrive;			//Offset: 0 | ElementSize: 1
		bool bEnableTwistDrive;			//Offset: 1 | ElementSize: 1
		bool bSkipCustomPhysicsType;			//Offset: 2 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params params;
	params.bEnableSwingDrive = bEnableSwingDrive;
	params.bEnableTwistDrive = bEnableTwistDrive;
	params.bSkipCustomPhysicsType = bSkipCustomPhysicsType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAllow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllowAnimCurveEvaluation(bool bInAllow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation");

	struct USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Params {
		bool bInAllow;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Params params;
	params.bInAllow = bInAllow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: List	Type: TArray<struct FName>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bAllow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllowedAnimCurvesEvaluation(const TArray<struct FName>& List, bool bAllow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation");

	struct USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Params {
		TArray<struct FName> List;			//Offset: 0 | ElementSize: 16
		bool bAllow;			//Offset: 16 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Params params;
	params.List = List;
	params.bAllow = bAllow;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAllowRigidBodyAnimNode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAllow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bReinitAnim	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAllowRigidBodyAnimNode");

	struct USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Params {
		bool bInAllow;			//Offset: 0 | ElementSize: 1
		bool bReinitAnim;			//Offset: 1 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Params params;
	params.bInAllow = bInAllow;
	params.bReinitAnim = bReinitAnim;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAngularLimits
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Swing1LimitAngle	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TwistLimitAngle	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Swing2LimitAngle	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAngularLimits");

	struct USkeletalMeshComponent_SetAngularLimits_Params {
		struct FName InBoneName;			//Offset: 0 | ElementSize: 8
		float Swing1LimitAngle;			//Offset: 8 | ElementSize: 4
		float TwistLimitAngle;			//Offset: 12 | ElementSize: 4
		float Swing2LimitAngle;			//Offset: 16 | ElementSize: 4
	};
	USkeletalMeshComponent_SetAngularLimits_Params params;
	params.InBoneName = InBoneName;
	params.Swing1LimitAngle = Swing1LimitAngle;
	params.TwistLimitAngle = TwistLimitAngle;
	params.Swing2LimitAngle = Swing2LimitAngle;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAnimation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewAnimToPlay	Type: class UAnimationAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAnimation(class UAnimationAsset* NewAnimToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAnimation");

	struct USkeletalMeshComponent_SetAnimation_Params {
		class UAnimationAsset* NewAnimToPlay;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_SetAnimation_Params params;
	params.NewAnimToPlay = NewAnimToPlay;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAnimationMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAnimationMode	Type: TEnumAsByte<EAnimationMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAnimationMode");

	struct USkeletalMeshComponent_SetAnimationMode_Params {
		TEnumAsByte<EAnimationMode> InAnimationMode;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetAnimationMode_Params params;
	params.InAnimationMode = InAnimationMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetAnimClass
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewClass	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetAnimClass(class UObject* NewClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetAnimClass");

	struct USkeletalMeshComponent_SetAnimClass_Params {
		class UObject* NewClass;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_SetAnimClass_Params params;
	params.NewClass = NewClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewNotifyRigidBodyCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision");

	struct USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Params {
		bool bNewNotifyRigidBodyCollision;			//Offset: 0 | ElementSize: 1
		struct FName BoneName;			//Offset: 4 | ElementSize: 8
	};
	USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Scale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetClothMaxDistanceScale(float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale");

	struct USkeletalMeshComponent_SetClothMaxDistanceScale_Params {
		float Scale;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_SetClothMaxDistanceScale_Params params;
	params.Scale = Scale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetConstraintProfile
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: JointName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bDefaultIfNotFound	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetConstraintProfile(struct FName JointName, struct FName ProfileName, bool bDefaultIfNotFound) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetConstraintProfile");

	struct USkeletalMeshComponent_SetConstraintProfile_Params {
		struct FName JointName;			//Offset: 0 | ElementSize: 8
		struct FName ProfileName;			//Offset: 8 | ElementSize: 8
		bool bDefaultIfNotFound;			//Offset: 16 | ElementSize: 1
	};
	USkeletalMeshComponent_SetConstraintProfile_Params params;
	params.JointName = JointName;
	params.ProfileName = ProfileName;
	params.bDefaultIfNotFound = bDefaultIfNotFound;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ProfileName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bDefaultIfNotFound	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetConstraintProfileForAll(struct FName ProfileName, bool bDefaultIfNotFound) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll");

	struct USkeletalMeshComponent_SetConstraintProfileForAll_Params {
		struct FName ProfileName;			//Offset: 0 | ElementSize: 8
		bool bDefaultIfNotFound;			//Offset: 8 | ElementSize: 1
	};
	USkeletalMeshComponent_SetConstraintProfileForAll_Params params;
	params.ProfileName = ProfileName;
	params.bDefaultIfNotFound = bDefaultIfNotFound;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetDisableAnimCurves
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInDisableAnimCurves	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetDisableAnimCurves(bool bInDisableAnimCurves) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetDisableAnimCurves");

	struct USkeletalMeshComponent_SetDisableAnimCurves_Params {
		bool bInDisableAnimCurves;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetDisableAnimCurves_Params params;
	params.bInDisableAnimCurves = bInDisableAnimCurves;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInDisablePostProcess	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetDisablePostProcessBlueprint(bool bInDisablePostProcess) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint");

	struct USkeletalMeshComponent_SetDisablePostProcessBlueprint_Params {
		bool bInDisablePostProcess;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetDisablePostProcessBlueprint_Params params;
	params.bInDisablePostProcess = bInDisablePostProcess;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetEnableBodyGravity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnableGravity	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetEnableBodyGravity(bool bEnableGravity, struct FName BoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetEnableBodyGravity");

	struct USkeletalMeshComponent_SetEnableBodyGravity_Params {
		bool bEnableGravity;			//Offset: 0 | ElementSize: 1
		struct FName BoneName;			//Offset: 4 | ElementSize: 8
	};
	USkeletalMeshComponent_SetEnableBodyGravity_Params params;
	params.bEnableGravity = bEnableGravity;
	params.BoneName = BoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnableGravity	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, struct FName BoneName, bool bIncludeSelf) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow");

	struct USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Params {
		bool bEnableGravity;			//Offset: 0 | ElementSize: 1
		struct FName BoneName;			//Offset: 4 | ElementSize: 8
		bool bIncludeSelf;			//Offset: 12 | ElementSize: 1
	};
	USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Params params;
	params.bEnableGravity = bEnableGravity;
	params.BoneName = BoneName;
	params.bIncludeSelf = bIncludeSelf;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewBlendPhysics	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetEnablePhysicsBlending(bool bNewBlendPhysics) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending");

	struct USkeletalMeshComponent_SetEnablePhysicsBlending_Params {
		bool bNewBlendPhysics;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetEnablePhysicsBlending_Params params;
	params.bNewBlendPhysics = bNewBlendPhysics;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetMorphTarget
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: MorphTargetName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRemoveZeroWeight	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetMorphTarget");

	struct USkeletalMeshComponent_SetMorphTarget_Params {
		struct FName MorphTargetName;			//Offset: 0 | ElementSize: 8
		float Value;			//Offset: 8 | ElementSize: 4
		bool bRemoveZeroWeight;			//Offset: 12 | ElementSize: 1
	};
	USkeletalMeshComponent_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.Value = Value;
	params.bRemoveZeroWeight = bRemoveZeroWeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewNotifyRigidBodyCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeSelf	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, struct FName BoneName, bool bIncludeSelf) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow");

	struct USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Params {
		bool bNewNotifyRigidBodyCollision;			//Offset: 0 | ElementSize: 1
		struct FName BoneName;			//Offset: 4 | ElementSize: 8
		bool bIncludeSelf;			//Offset: 12 | ElementSize: 1
	};
	USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;
	params.BoneName = BoneName;
	params.bIncludeSelf = bIncludeSelf;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PhysicsBlendWeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetPhysicsBlendWeight(float PhysicsBlendWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight");

	struct USkeletalMeshComponent_SetPhysicsBlendWeight_Params {
		float PhysicsBlendWeight;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_SetPhysicsBlendWeight_Params params;
	params.PhysicsBlendWeight = PhysicsBlendWeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetPlayRate
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Rate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetPlayRate(float Rate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetPlayRate");

	struct USkeletalMeshComponent_SetPlayRate_Params {
		float Rate;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_SetPlayRate_Params params;
	params.Rate = Rate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetPosition
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPos	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bFireNotifies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetPosition(float InPos, bool bFireNotifies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetPosition");

	struct USkeletalMeshComponent_SetPosition_Params {
		float InPos;			//Offset: 0 | ElementSize: 4
		bool bFireNotifies;			//Offset: 4 | ElementSize: 1
	};
	USkeletalMeshComponent_SetPosition_Params params;
	params.InPos = InPos;
	params.bFireNotifies = bFireNotifies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Threshold	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetTeleportDistanceThreshold(float Threshold) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold");

	struct USkeletalMeshComponent_SetTeleportDistanceThreshold_Params {
		float Threshold;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_SetTeleportDistanceThreshold_Params params;
	params.Threshold = Threshold;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Threshold	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetTeleportRotationThreshold(float Threshold) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold");

	struct USkeletalMeshComponent_SetTeleportRotationThreshold_Params {
		float Threshold;			//Offset: 0 | ElementSize: 4
	};
	USkeletalMeshComponent_SetTeleportRotationThreshold_Params params;
	params.Threshold = Threshold;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUpdateState	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetUpdateAnimationInEditor(bool NewUpdateState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor");

	struct USkeletalMeshComponent_SetUpdateAnimationInEditor_Params {
		bool NewUpdateState;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetUpdateAnimationInEditor_Params params;
	params.NewUpdateState = NewUpdateState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SetUpdateClothInEditor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewUpdateState	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SetUpdateClothInEditor(bool NewUpdateState) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SetUpdateClothInEditor");

	struct USkeletalMeshComponent_SetUpdateClothInEditor_Params {
		bool NewUpdateState;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_SetUpdateClothInEditor_Params params;
	params.NewUpdateState = NewUpdateState;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SnapshotPose
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Snapshot	Type: struct FPoseSnapshot	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::SnapshotPose(struct FPoseSnapshot* Snapshot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SnapshotPose");

	struct USkeletalMeshComponent_SnapshotPose_Params {
		struct FPoseSnapshot Snapshot;			//Offset: 0 | ElementSize: 56
	};
	USkeletalMeshComponent_SnapshotPose_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.Stop
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.Stop");

	struct USkeletalMeshComponent_Stop_Params {
	};
	USkeletalMeshComponent_Stop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.SuspendClothingSimulation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::SuspendClothingSimulation() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.SuspendClothingSimulation");

	struct USkeletalMeshComponent_SuspendClothingSimulation_Params {
	};
	USkeletalMeshComponent_SuspendClothingSimulation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.TermBodiesBelow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ParentBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::TermBodiesBelow(struct FName ParentBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.TermBodiesBelow");

	struct USkeletalMeshComponent_TermBodiesBelow_Params {
		struct FName ParentBoneName;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_TermBodiesBelow_Params params;
	params.ParentBoneName = ParentBoneName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USkeletalMeshComponent::ToggleDisablePostProcessBlueprint() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint");

	struct USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Params {
	};
	USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bRestoreSimulationSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent");

	struct USkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params {
		bool bRestoreSimulationSpace;			//Offset: 0 | ElementSize: 1
	};
	USkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params params;
	params.bRestoreSimulationSpace = bRestoreSimulationSpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshComponent::UnlinkAnimClassLayers(class UAnimInstance* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers");

	struct USkeletalMeshComponent_UnlinkAnimClassLayers_Params {
		class UAnimInstance* InClass;			//Offset: 0 | ElementSize: 8
	};
	USkeletalMeshComponent_UnlinkAnimClassLayers_Params params;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}