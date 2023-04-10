#pragma once
#include "Structs.h"
#include "Engine/SkinnedMeshComponent.h"
/////////////////////////////////////////////
// Class Engine.SkeletalMeshComponent
// Super: Class Engine.SkinnedMeshComponent
// Size: 3792
// Size inherited: 1696
/////////////////////////////////////////////
namespace UE4 {
class USkeletalMeshComponent : public USkinnedMeshComponent {
public:
#pragma region Members
	//class UObject*	AnimBlueprintGeneratedClass;		//Offset: 1696	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject* M_GetAnimBlueprintGeneratedClass() const;
	class UObject** M_PtrGetAnimBlueprintGeneratedClass();
	void M_SetAnimBlueprintGeneratedClass(const class UObject*& value);

	//class UAnimInstance*	AnimClass;		//Offset: 1704	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UAnimInstance* M_GetAnimClass() const;
	class UAnimInstance** M_PtrGetAnimClass();
	void M_SetAnimClass(const class UAnimInstance*& value);

	//class UAnimInstance*	AnimScriptInstance;		//Offset: 1712	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UAnimInstance* M_GetAnimScriptInstance() const;
	class UAnimInstance** M_PtrGetAnimScriptInstance();
	void M_SetAnimScriptInstance(const class UAnimInstance*& value);

	//class UAnimInstance*	PostProcessAnimInstance;		//Offset: 1720	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UAnimInstance* M_GetPostProcessAnimInstance() const;
	class UAnimInstance** M_PtrGetPostProcessAnimInstance();
	void M_SetPostProcessAnimInstance(const class UAnimInstance*& value);

	//struct FSingleAnimationPlayData	AnimationData;		//Offset: 1728	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FSingleAnimationPlayData M_GetAnimationData() const;
	struct FSingleAnimationPlayData* M_PtrGetAnimationData();
	void M_SetAnimationData(const struct FSingleAnimationPlayData& value);

	//struct FVector	RootBoneTranslation;		//Offset: 1768	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetRootBoneTranslation() const;
	struct FVector* M_PtrGetRootBoneTranslation();
	void M_SetRootBoneTranslation(const struct FVector& value);

	//struct FVector	LineCheckBoundsScale;		//Offset: 1780	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetLineCheckBoundsScale() const;
	struct FVector* M_PtrGetLineCheckBoundsScale();
	void M_SetLineCheckBoundsScale(const struct FVector& value);

	//TArray<class UAnimInstance*>	LinkedInstances;		//Offset: 1840	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	TArray<class UAnimInstance*> M_GetLinkedInstances() const;
	TArray<class UAnimInstance*>* M_PtrGetLinkedInstances();
	void M_SetLinkedInstances(const TArray<class UAnimInstance*>& value);

	//TArray<struct FTransform>	CachedBoneSpaceTransforms;		//Offset: 1856	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	TArray<struct FTransform> M_GetCachedBoneSpaceTransforms() const;
	TArray<struct FTransform>* M_PtrGetCachedBoneSpaceTransforms();
	void M_SetCachedBoneSpaceTransforms(const TArray<struct FTransform>& value);

	//TArray<struct FTransform>	CachedComponentSpaceTransforms;		//Offset: 1872	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	TArray<struct FTransform> M_GetCachedComponentSpaceTransforms() const;
	TArray<struct FTransform>* M_PtrGetCachedComponentSpaceTransforms();
	void M_SetCachedComponentSpaceTransforms(const TArray<struct FTransform>& value);

	//float	GlobalAnimRateScale;		//Offset: 2224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetGlobalAnimRateScale() const;
	float* M_PtrGetGlobalAnimRateScale();
	void M_SetGlobalAnimRateScale(const float& value);

	//TEnumAsByte<EKinematicBonesUpdateToPhysics>	KinematicBonesUpdateType;		//Offset: 2228	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EKinematicBonesUpdateToPhysics> M_GetKinematicBonesUpdateType() const;
	TEnumAsByte<EKinematicBonesUpdateToPhysics>* M_PtrGetKinematicBonesUpdateType();
	void M_SetKinematicBonesUpdateType(const TEnumAsByte<EKinematicBonesUpdateToPhysics>& value);

	//TEnumAsByte<EPhysicsTransformUpdateMode>	PhysicsTransformUpdateMode;		//Offset: 2229	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EPhysicsTransformUpdateMode> M_GetPhysicsTransformUpdateMode() const;
	TEnumAsByte<EPhysicsTransformUpdateMode>* M_PtrGetPhysicsTransformUpdateMode();
	void M_SetPhysicsTransformUpdateMode(const TEnumAsByte<EPhysicsTransformUpdateMode>& value);

	//TEnumAsByte<EAnimationMode>	AnimationMode;		//Offset: 2231	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<EAnimationMode> M_GetAnimationMode() const;
	TEnumAsByte<EAnimationMode>* M_PtrGetAnimationMode();
	void M_SetAnimationMode(const TEnumAsByte<EAnimationMode>& value);

	//unsigned char	bDisablePostProcessBlueprint : 1;		//Offset: 2233	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisablePostProcessBlueprint() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisablePostProcessBlueprint();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisablePostProcessBlueprint(const unsigned char& value);

	//unsigned char	bUpdateOverlapsOnAnimationFinalize : 1;		//Offset: 2233	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUpdateOverlapsOnAnimationFinalize() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUpdateOverlapsOnAnimationFinalize();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUpdateOverlapsOnAnimationFinalize(const unsigned char& value);

	//unsigned char	bHasValidBodies : 1;		//Offset: 2233	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasValidBodies() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasValidBodies();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasValidBodies(const unsigned char& value);

	//unsigned char	bBlendPhysics : 1;		//Offset: 2233	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbBlendPhysics() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbBlendPhysics();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbBlendPhysics(const unsigned char& value);

	//unsigned char	bEnablePhysicsOnDedicatedServer : 1;		//Offset: 2233	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnablePhysicsOnDedicatedServer() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnablePhysicsOnDedicatedServer();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnablePhysicsOnDedicatedServer(const unsigned char& value);

	//unsigned char	bUpdateJointsFromAnimation : 1;		//Offset: 2233	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUpdateJointsFromAnimation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUpdateJointsFromAnimation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUpdateJointsFromAnimation(const unsigned char& value);

	//unsigned char	bDisableClothSimulation : 1;		//Offset: 2234	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisableClothSimulation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisableClothSimulation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisableClothSimulation(const unsigned char& value);

	//unsigned char	bDisableRigidBodyAnimNode : 1;		//Offset: 2240	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisableRigidBodyAnimNode() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisableRigidBodyAnimNode();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisableRigidBodyAnimNode(const unsigned char& value);

	//unsigned char	bAllowAnimCurveEvaluation : 1;		//Offset: 2240	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowAnimCurveEvaluation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowAnimCurveEvaluation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowAnimCurveEvaluation(const unsigned char& value);

	//unsigned char	bDisableAnimCurves : 1;		//Offset: 2240	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDisableAnimCurves() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDisableAnimCurves();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDisableAnimCurves(const unsigned char& value);

	//unsigned char	bCollideWithEnvironment : 1;		//Offset: 2240	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCollideWithEnvironment() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCollideWithEnvironment();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCollideWithEnvironment(const unsigned char& value);

	//unsigned char	bCollideWithAttachedChildren : 1;		//Offset: 2241	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCollideWithAttachedChildren() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCollideWithAttachedChildren();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCollideWithAttachedChildren(const unsigned char& value);

	//unsigned char	bLocalSpaceSimulation : 1;		//Offset: 2241	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbLocalSpaceSimulation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbLocalSpaceSimulation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbLocalSpaceSimulation(const unsigned char& value);

	//unsigned char	bResetAfterTeleport : 1;		//Offset: 2241	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbResetAfterTeleport() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbResetAfterTeleport();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbResetAfterTeleport(const unsigned char& value);

	//unsigned char	bDeferKinematicBoneUpdate : 1;		//Offset: 2241	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDeferKinematicBoneUpdate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDeferKinematicBoneUpdate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDeferKinematicBoneUpdate(const unsigned char& value);

	//unsigned char	bNoSkeletonUpdate : 1;		//Offset: 2241	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNoSkeletonUpdate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNoSkeletonUpdate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNoSkeletonUpdate(const unsigned char& value);

	//unsigned char	bPauseAnims : 1;		//Offset: 2241	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPauseAnims() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPauseAnims();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPauseAnims(const unsigned char& value);

	//unsigned char	bUseRefPoseOnInitAnim : 1;		//Offset: 2241	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseRefPoseOnInitAnim() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseRefPoseOnInitAnim();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseRefPoseOnInitAnim(const unsigned char& value);

	//unsigned char	bEnablePerPolyCollision : 1;		//Offset: 2242	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnablePerPolyCollision() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnablePerPolyCollision();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnablePerPolyCollision(const unsigned char& value);

	//unsigned char	bForceRefpose : 1;		//Offset: 2242	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceRefpose() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceRefpose();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceRefpose(const unsigned char& value);

	//unsigned char	bOnlyAllowAutonomousTickPose : 1;		//Offset: 2242	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOnlyAllowAutonomousTickPose() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOnlyAllowAutonomousTickPose();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOnlyAllowAutonomousTickPose(const unsigned char& value);

	//unsigned char	bIsAutonomousTickPose : 1;		//Offset: 2242	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsAutonomousTickPose() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsAutonomousTickPose();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsAutonomousTickPose(const unsigned char& value);

	//unsigned char	bOldForceRefPose : 1;		//Offset: 2242	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOldForceRefPose() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOldForceRefPose();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOldForceRefPose(const unsigned char& value);

	//unsigned char	bShowPrePhysBones : 1;		//Offset: 2242	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbShowPrePhysBones() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbShowPrePhysBones();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbShowPrePhysBones(const unsigned char& value);

	//unsigned char	bRequiredBonesUpToDate : 1;		//Offset: 2242	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRequiredBonesUpToDate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRequiredBonesUpToDate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRequiredBonesUpToDate(const unsigned char& value);

	//unsigned char	bAnimTreeInitialised : 1;		//Offset: 2242	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAnimTreeInitialised() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAnimTreeInitialised();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAnimTreeInitialised(const unsigned char& value);

	//unsigned char	bIncludeComponentLocationIntoBounds : 1;		//Offset: 2243	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIncludeComponentLocationIntoBounds() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIncludeComponentLocationIntoBounds();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIncludeComponentLocationIntoBounds(const unsigned char& value);

	//unsigned char	bEnableLineCheckWithBounds : 1;		//Offset: 2243	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableLineCheckWithBounds() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableLineCheckWithBounds();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableLineCheckWithBounds(const unsigned char& value);

	//unsigned char	bPropagateCurvesToSlaves : 1;		//Offset: 2243	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPropagateCurvesToSlaves() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPropagateCurvesToSlaves();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPropagateCurvesToSlaves(const unsigned char& value);

	//unsigned char	bSkipKinematicUpdateWhenInterpolating : 1;		//Offset: 2243	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSkipKinematicUpdateWhenInterpolating() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSkipKinematicUpdateWhenInterpolating();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSkipKinematicUpdateWhenInterpolating(const unsigned char& value);

	//unsigned char	bSkipBoundsUpdateWhenInterpolating : 1;		//Offset: 2243	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSkipBoundsUpdateWhenInterpolating() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSkipBoundsUpdateWhenInterpolating();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSkipBoundsUpdateWhenInterpolating(const unsigned char& value);

	//unsigned char	bNeedsQueuedAnimEventsDispatched : 1;		//Offset: 2243	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNeedsQueuedAnimEventsDispatched() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNeedsQueuedAnimEventsDispatched();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNeedsQueuedAnimEventsDispatched(const unsigned char& value);

	//uint16_t	CachedAnimCurveUidVersion;		//Offset: 2246	Size: 2	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint16_t M_GetCachedAnimCurveUidVersion() const;
	uint16_t* M_PtrGetCachedAnimCurveUidVersion();
	void M_SetCachedAnimCurveUidVersion(const uint16_t& value);

	//float	ClothBlendWeight;		//Offset: 2248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetClothBlendWeight() const;
	float* M_PtrGetClothBlendWeight();
	void M_SetClothBlendWeight(const float& value);

	//bool	bWaitForParallelClothTask;		//Offset: 2252	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbWaitForParallelClothTask() const;
	bool* M_PtrGetbWaitForParallelClothTask();
	void M_SetbWaitForParallelClothTask(const bool& value);

	//TArray<struct FName>	DisallowedAnimCurves;		//Offset: 2256	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	TArray<struct FName> M_GetDisallowedAnimCurves() const;
	TArray<struct FName>* M_PtrGetDisallowedAnimCurves();
	void M_SetDisallowedAnimCurves(const TArray<struct FName>& value);

	//class UBodySetup*	BodySetup;		//Offset: 2272	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBodySetup* M_GetBodySetup() const;
	class UBodySetup** M_PtrGetBodySetup();
	void M_SetBodySetup(const class UBodySetup*& value);

	//TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>	OnConstraintBroken;		//Offset: 2288	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FConstraintBrokenSignature__DelegateSignature> M_GetOnConstraintBroken() const;
	TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>* M_PtrGetOnConstraintBroken();
	void M_SetOnConstraintBroken(const TAssetPtr<class FConstraintBrokenSignature__DelegateSignature>& value);

	//class UClothingSimulationFactory*	ClothingSimulationFactory;		//Offset: 2304	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UClothingSimulationFactory* M_GetClothingSimulationFactory() const;
	class UClothingSimulationFactory** M_PtrGetClothingSimulationFactory();
	void M_SetClothingSimulationFactory(const class UClothingSimulationFactory*& value);

	//float	TeleportDistanceThreshold;		//Offset: 2520	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetTeleportDistanceThreshold() const;
	float* M_PtrGetTeleportDistanceThreshold();
	void M_SetTeleportDistanceThreshold(const float& value);

	//float	TeleportRotationThreshold;		//Offset: 2524	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetTeleportRotationThreshold() const;
	float* M_PtrGetTeleportRotationThreshold();
	void M_SetTeleportRotationThreshold(const float& value);

	//uint32_t	LastPoseTickFrame;		//Offset: 2536	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	uint32_t M_GetLastPoseTickFrame() const;
	uint32_t* M_PtrGetLastPoseTickFrame();
	void M_SetLastPoseTickFrame(const uint32_t& value);

	//class UClothingSimulationInteractor*	ClothingInteractor;		//Offset: 2624	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UClothingSimulationInteractor* M_GetClothingInteractor() const;
	class UClothingSimulationInteractor** M_PtrGetClothingInteractor();
	void M_SetClothingInteractor(const class UClothingSimulationInteractor*& value);

	//TAssetPtr<class FOnAnimInitialized__DelegateSignature>	OnAnimInitialized;		//Offset: 2832	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnAnimInitialized__DelegateSignature> M_GetOnAnimInitialized() const;
	TAssetPtr<class FOnAnimInitialized__DelegateSignature>* M_PtrGetOnAnimInitialized();
	void M_SetOnAnimInitialized(const TAssetPtr<class FOnAnimInitialized__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}

#pragma region Functions
	void AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);

	void AddForceToAllBodiesBelow(struct FVector Force, struct FName BoneName, bool bAccelChange, bool bIncludeSelf);

	void AddImpulseToAllBodiesBelow(struct FVector Impulse, struct FName BoneName, bool bVelChange, bool bIncludeSelf);

	void AllowAnimCurveEvaluation(struct FName NameOfCurve, bool bAllow);

	void BindClothToMasterPoseComponent();

	void BreakConstraint(struct FVector Impulse, struct FVector HitLocation, struct FName InBoneName);

	void ClearMorphTargets();

	struct FName FindConstraintBoneName(int32_t ConstraintIndex);

	void ForceClothNextUpdateTeleport();

	void ForceClothNextUpdateTeleportAndReset();

	bool GetAllowedAnimCurveEvaluate()/* const*/;

	bool GetAllowRigidBodyAnimNode()/* const*/;

	TEnumAsByte<EAnimationMode> GetAnimationMode()/* const*/;

	class UObject* GetAnimClass();

	class UAnimInstance* GetAnimInstance()/* const*/;

	float GetBoneMass(struct FName BoneName, bool bScaleMass)/* const*/;

	class UClothingSimulationInteractor* GetClothingSimulationInteractor()/* const*/;

	float GetClothMaxDistanceScale()/* const*/;

	void GetCurrentJointAngles(struct FName InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle);

	bool GetDisableAnimCurves()/* const*/;

	bool GetDisablePostProcessBlueprint()/* const*/;

	bool GetFloatAttribute(const struct FName& BoneName, const struct FName& AttributeName, float DefaultValue, float* OutValue, ECustomBoneAttributeLookup LookupType);

	bool GetFloatAttribute_Ref(const struct FName& BoneName, const struct FName& AttributeName, float* OutValue, ECustomBoneAttributeLookup LookupType);

	bool GetIntegerAttribute(const struct FName& BoneName, const struct FName& AttributeName, int32_t DefaultValue, int32_t* OutValue, ECustomBoneAttributeLookup LookupType);

	bool GetIntegerAttribute_Ref(const struct FName& BoneName, const struct FName& AttributeName, int32_t* OutValue, ECustomBoneAttributeLookup LookupType);

	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag)/* const*/;

	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, TArray<class UAnimInstance*>* OutLinkedInstances)/* const*/;

	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(class UAnimInstance* InClass)/* const*/;

	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup)/* const*/;

	float GetMorphTarget(struct FName MorphTargetName)/* const*/;

	float GetPlayRate()/* const*/;

	float GetPosition()/* const*/;

	class UAnimInstance* GetPostProcessInstance()/* const*/;

	struct FVector GetSkeletalCenterOfMass()/* const*/;

	bool GetStringAttribute(const struct FName& BoneName, const struct FName& AttributeName, struct FString DefaultValue, struct FString* OutValue, ECustomBoneAttributeLookup LookupType);

	bool GetStringAttribute_Ref(const struct FName& BoneName, const struct FName& AttributeName, struct FString* OutValue, ECustomBoneAttributeLookup LookupType);

	float GetTeleportDistanceThreshold()/* const*/;

	float GetTeleportRotationThreshold()/* const*/;

	bool HasValidAnimationInstance()/* const*/;

	bool IsBodyGravityEnabled(struct FName BoneName);

	bool IsClothingSimulationSuspended()/* const*/;

	bool IsPlaying()/* const*/;

	bool K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance)/* const*/;

	void LinkAnimClassLayers(class UAnimInstance* InClass);

	void LinkAnimGraphByTag(struct FName InTag, class UAnimInstance* InClass);

	void OverrideAnimationData(class UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);

	void Play(bool bLooping);

	void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);

	void ResetAllBodiesSimulatePhysics();

	void ResetAllowedAnimCurveEvaluation();

	void ResetAnimInstanceDynamics(ETeleportType InTeleportType);

	void ResetClothTeleportMode();

	void ResumeClothingSimulation();

	void SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);

	void SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);

	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);

	void SetAllBodiesSimulatePhysics(bool bNewSimulate);

	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);

	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);

	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);

	void SetAllowAnimCurveEvaluation(bool bInAllow);

	void SetAllowedAnimCurvesEvaluation(const TArray<struct FName>& List, bool bAllow);

	void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);

	void SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);

	void SetAnimation(class UAnimationAsset* NewAnimToPlay);

	void SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);

	void SetAnimClass(class UObject* NewClass);

	void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, struct FName BoneName);

	void SetClothMaxDistanceScale(float Scale);

	void SetConstraintProfile(struct FName JointName, struct FName ProfileName, bool bDefaultIfNotFound);

	void SetConstraintProfileForAll(struct FName ProfileName, bool bDefaultIfNotFound);

	void SetDisableAnimCurves(bool bInDisableAnimCurves);

	void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);

	void SetEnableBodyGravity(bool bEnableGravity, struct FName BoneName);

	void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, struct FName BoneName, bool bIncludeSelf);

	void SetEnablePhysicsBlending(bool bNewBlendPhysics);

	void SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight);

	void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, struct FName BoneName, bool bIncludeSelf);

	void SetPhysicsBlendWeight(float PhysicsBlendWeight);

	void SetPlayRate(float Rate);

	void SetPosition(float InPos, bool bFireNotifies);

	void SetTeleportDistanceThreshold(float Threshold);

	void SetTeleportRotationThreshold(float Threshold);

	void SetUpdateAnimationInEditor(bool NewUpdateState);

	void SetUpdateClothInEditor(bool NewUpdateState);

	void SnapshotPose(struct FPoseSnapshot* Snapshot);

	void Stop();

	void SuspendClothingSimulation();

	void TermBodiesBelow(struct FName ParentBoneName);

	void ToggleDisablePostProcessBlueprint();

	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);

	void UnlinkAnimClassLayers(class UAnimInstance* InClass);

#pragma endregion
};
};