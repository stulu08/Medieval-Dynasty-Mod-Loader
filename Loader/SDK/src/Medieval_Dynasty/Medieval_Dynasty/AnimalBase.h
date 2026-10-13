#pragma once
#include "Structs.h"
#include "Engine/Character.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.AnimalBase
// Super: Class Engine.Character
// Size: 1664
// Size inherited: 1216
/////////////////////////////////////////////
namespace UE4 {
class AAnimalBase : public ACharacter {
public:
#pragma region Members
	//struct FVector_NetQuantize	replicatedVelocity;		//Offset: 1232	Size: 12	Flags: Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector_NetQuantize M_GetreplicatedVelocity() const;
	struct FVector_NetQuantize* M_PtrGetreplicatedVelocity();
	void M_SetreplicatedVelocity(const struct FVector_NetQuantize& value);

	//EAnimalMovementMode	replicatedAnimalMovementMode;		//Offset: 1244	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EAnimalMovementMode M_GetreplicatedAnimalMovementMode() const;
	EAnimalMovementMode* M_PtrGetreplicatedAnimalMovementMode();
	void M_SetreplicatedAnimalMovementMode(const EAnimalMovementMode& value);

	//EAnimalIdleType	replicatedCurrentIdleType;		//Offset: 1245	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EAnimalIdleType M_GetreplicatedCurrentIdleType() const;
	EAnimalIdleType* M_PtrGetreplicatedCurrentIdleType();
	void M_SetreplicatedCurrentIdleType(const EAnimalIdleType& value);

	//bool	replicatedHasMovedRecently;		//Offset: 1246	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetreplicatedHasMovedRecently() const;
	bool* M_PtrGetreplicatedHasMovedRecently();
	void M_SetreplicatedHasMovedRecently(const bool& value);

	//struct FVector_NetQuantize	replicatedLocation;		//Offset: 1248	Size: 12	Flags: Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector_NetQuantize M_GetreplicatedLocation() const;
	struct FVector_NetQuantize* M_PtrGetreplicatedLocation();
	void M_SetreplicatedLocation(const struct FVector_NetQuantize& value);

	//int32_t	replicatedRotationYaw;		//Offset: 1260	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetreplicatedRotationYaw() const;
	int32_t* M_PtrGetreplicatedRotationYaw();
	void M_SetreplicatedRotationYaw(const int32_t& value);

	//TArray<class AActor*>	replicatedCollisionActorsToIgnore;		//Offset: 1264	Size: 16	Flags: Net, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<class AActor*> M_GetreplicatedCollisionActorsToIgnore() const;
	TArray<class AActor*>* M_PtrGetreplicatedCollisionActorsToIgnore();
	void M_SetreplicatedCollisionActorsToIgnore(const TArray<class AActor*>& value);

	//class AActor*	replicatedLookAtTarget;		//Offset: 1280	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class AActor* M_GetreplicatedLookAtTarget() const;
	class AActor** M_PtrGetreplicatedLookAtTarget();
	void M_SetreplicatedLookAtTarget(const class AActor*& value);

	//bool	IsMoving;		//Offset: 1576	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//EAnimalMovementMode	MovementMode;		//Offset: 1577	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EAnimalMovementMode M_GetMovementMode() const;
	EAnimalMovementMode* M_PtrGetMovementMode();
	void M_SetMovementMode(const EAnimalMovementMode& value);

	//EAnimalRotationMode	RotationMode;		//Offset: 1578	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EAnimalRotationMode M_GetRotationMode() const;
	EAnimalRotationMode* M_PtrGetRotationMode();
	void M_SetRotationMode(const EAnimalRotationMode& value);

	//float	targetRotationSpeed;		//Offset: 1580	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GettargetRotationSpeed() const;
	float* M_PtrGettargetRotationSpeed();
	void M_SettargetRotationSpeed(const float& value);

	//bool	isMovementReplicated;		//Offset: 1584	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisMovementReplicated() const;
	bool* M_PtrGetisMovementReplicated();
	void M_SetisMovementReplicated(const bool& value);

	//bool	canMoveBackwards;		//Offset: 1585	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanMoveBackwards() const;
	bool* M_PtrGetcanMoveBackwards();
	void M_SetcanMoveBackwards(const bool& value);

	//float	replicatedLocationInterpolationSpeed;		//Offset: 1588	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetreplicatedLocationInterpolationSpeed() const;
	float* M_PtrGetreplicatedLocationInterpolationSpeed();
	void M_SetreplicatedLocationInterpolationSpeed(const float& value);

	//float	replicatedRotationInterpolationSpeed;		//Offset: 1592	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetreplicatedRotationInterpolationSpeed() const;
	float* M_PtrGetreplicatedRotationInterpolationSpeed();
	void M_SetreplicatedRotationInterpolationSpeed(const float& value);

	//float	replicatedVelocityInterpolationSpeed;		//Offset: 1596	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetreplicatedVelocityInterpolationSpeed() const;
	float* M_PtrGetreplicatedVelocityInterpolationSpeed();
	void M_SetreplicatedVelocityInterpolationSpeed(const float& value);

	//float	replicatedLocationSnapDistance;		//Offset: 1600	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetreplicatedLocationSnapDistance() const;
	float* M_PtrGetreplicatedLocationSnapDistance();
	void M_SetreplicatedLocationSnapDistance(const float& value);

	//bool	isCollisionEnabled;		//Offset: 1604	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisCollisionEnabled() const;
	bool* M_PtrGetisCollisionEnabled();
	void M_SetisCollisionEnabled(const bool& value);

	//float	collisionInfluenceSharpness;		//Offset: 1608	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionInfluenceSharpness() const;
	float* M_PtrGetcollisionInfluenceSharpness();
	void M_SetcollisionInfluenceSharpness(const float& value);

	//float	collisionBaseInfluenceCoefficient;		//Offset: 1612	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionBaseInfluenceCoefficient() const;
	float* M_PtrGetcollisionBaseInfluenceCoefficient();
	void M_SetcollisionBaseInfluenceCoefficient(const float& value);

	//float	collisionVelocityInfluenceCoefficient;		//Offset: 1616	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionVelocityInfluenceCoefficient() const;
	float* M_PtrGetcollisionVelocityInfluenceCoefficient();
	void M_SetcollisionVelocityInfluenceCoefficient(const float& value);

	//float	collisionMassInfluenceCoefficient;		//Offset: 1620	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionMassInfluenceCoefficient() const;
	float* M_PtrGetcollisionMassInfluenceCoefficient();
	void M_SetcollisionMassInfluenceCoefficient(const float& value);

	//TArray<struct FComponentReference>	collisionShapeComponentReferences;		//Offset: 1624	Size: 16	Flags: Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FComponentReference> M_GetcollisionShapeComponentReferences() const;
	TArray<struct FComponentReference>* M_PtrGetcollisionShapeComponentReferences();
	void M_SetcollisionShapeComponentReferences(const TArray<struct FComponentReference>& value);

	//struct FName	ragdollGetUpTargetBone;		//Offset: 1640	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetragdollGetUpTargetBone() const;
	struct FName* M_PtrGetragdollGetUpTargetBone();
	void M_SetragdollGetUpTargetBone(const struct FName& value);

	//struct FName	ragdollRootBone;		//Offset: 1648	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetragdollRootBone() const;
	struct FName* M_PtrGetragdollRootBone();
	void M_SetragdollRootBone(const struct FName& value);

	//TEnumAsByte<ETraceTypeQuery>	ragdollTraceChannel;		//Offset: 1656	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ETraceTypeQuery> M_GetragdollTraceChannel() const;
	TEnumAsByte<ETraceTypeQuery>* M_PtrGetragdollTraceChannel();
	void M_SetragdollTraceChannel(const TEnumAsByte<ETraceTypeQuery>& value);

	//bool	isRagdollReplicated;		//Offset: 1657	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisRagdollReplicated() const;
	bool* M_PtrGetisRagdollReplicated();
	void M_SetisRagdollReplicated(const bool& value);

	//bool	isDebugEnabled;		//Offset: 1658	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimalBase");
		return ptr;
	}

#pragma region Functions
	void AddCollisionIgnoredActor(class AActor* Actor);

	float CalculateDamageToReceive(float appliedDamage, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	float CalculateTargetAcceleration();

	float CalculateTargetSpeed();

	bool CanStartRagdoll();

	EAnimalIdleType GetCurrentIdleType()/* const*/;

	float GetForwardSpeed()/* const*/;

	float GetHorizontalSpeed()/* const*/;

	struct FVector2D GetHorizontalVelocityVector()/* const*/;

	class AActor* GetLookAtTarget()/* const*/;

	EAnimalMovementMode GetMovementMode()/* const*/;

	float GetSpeed()/* const*/;

	struct FVector GetVelocityVector()/* const*/;

	float GetVerticalSpeed()/* const*/;

	bool HasMovedRecently()/* const*/;

	bool IsDead()/* const*/;

	bool IsMoving()/* const*/;

	bool IsMovingBackwards()/* const*/;

	bool IsMovingHorizontally()/* const*/;

	bool IsMovingVertically()/* const*/;

	void OnAnimalMovementModeChanged(EAnimalMovementMode newAnimalMovementMode, EAnimalMovementMode previousAnimalMovementMode);

	void OnBeforePointDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const struct FHitResult& Hit, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void OnBeforeRadialDamageApplied(float damageToApply, const struct FVector& hitFromDirection, const TArray<struct FHitResult>& hits, class AController* damageInstigator, class AActor* DamageCauser, class UDamageType* DamageTypeClass)/* const*/;

	void OnPreRagdollStart();

	void OnPreRagdollStop();

	void OnRagdollStarted();

	void OnRagdollStopped();

	void OnRepLocation();

	void OnRepMovementMode();

	void OverrideRotation(const struct FRotator& NewRotation, float newOverrideRotationStrength);

	void OverrideRotationInstantly(const struct FRotator& NewRotation);

	void RemoveCollisionIgnoredActor(class AActor* Actor);

	void ReplicateAttack();

	void ReplicateHit(struct FVector& HitLocation, struct FVector& hitForce);

	void SetCanCollisionBeDormant(bool newCanCollisionBeDormant);

	void SetCanMoveBackwards(bool newCanMoveBackwards);

	void SetCurrentIdleType(EAnimalIdleType& idleType);

	void SetLookAtTarget(class AActor* newLookAtTarget);

	void SetMovementMode(EAnimalMovementMode newAnimalMovementMode);

	void SetReplicatedMovementMode(EAnimalMovementMode newReplicatedAnimalMovementMode);

	void SetReplicatedMovementParameters(struct FVector_NetQuantize& newReplicatedLocation, int32_t newReplicatedRotationYaw, struct FVector_NetQuantize& newReplicatedVelocity);

	void SetRotationMode(EAnimalRotationMode newRotationMode);

	void TakeAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	bool WasRagdollOnGround()/* const*/;

#pragma endregion
};
};