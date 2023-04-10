#pragma once
#include "Structs.h"
#include "Engine/Character.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CharacterBase
// Super: Class Engine.Character
// Size: 1568
// Size inherited: 1216
/////////////////////////////////////////////
namespace UE4 {
class ACharacterBase : public ACharacter {
public:
#pragma region Members
	//bool	isMovementInterpolationEnabled;		//Offset: 1292	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisMovementInterpolationEnabled() const;
	bool* M_PtrGetisMovementInterpolationEnabled();
	void M_SetisMovementInterpolationEnabled(const bool& value);

	//struct FVector	Velocity;		//Offset: 1296	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetVelocity() const;
	struct FVector* M_PtrGetVelocity();
	void M_SetVelocity(const struct FVector& value);

	//float	Speed;		//Offset: 1308	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetSpeed() const;
	float* M_PtrGetSpeed();
	void M_SetSpeed(const float& value);

	//struct FVector	previousVelocity;		//Offset: 1312	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetpreviousVelocity() const;
	struct FVector* M_PtrGetpreviousVelocity();
	void M_SetpreviousVelocity(const struct FVector& value);

	//float	randomSpeedMultiplier;		//Offset: 1324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrandomSpeedMultiplier() const;
	float* M_PtrGetrandomSpeedMultiplier();
	void M_SetrandomSpeedMultiplier(const float& value);

	//float	pushSpeedMultiplier;		//Offset: 1328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpushSpeedMultiplier() const;
	float* M_PtrGetpushSpeedMultiplier();
	void M_SetpushSpeedMultiplier(const float& value);

	//float	hitSpeedMultiplier;		//Offset: 1332	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GethitSpeedMultiplier() const;
	float* M_PtrGethitSpeedMultiplier();
	void M_SethitSpeedMultiplier(const float& value);

	//float	inWaterIntensity;		//Offset: 1336	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetinWaterIntensity() const;
	float* M_PtrGetinWaterIntensity();
	void M_SetinWaterIntensity(const float& value);

	//float	WalkingSpeed;		//Offset: 1340	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetWalkingSpeed() const;
	float* M_PtrGetWalkingSpeed();
	void M_SetWalkingSpeed(const float& value);

	//float	runningSpeed;		//Offset: 1344	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrunningSpeed() const;
	float* M_PtrGetrunningSpeed();
	void M_SetrunningSpeed(const float& value);

	//float	sprintingSpeed;		//Offset: 1348	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetsprintingSpeed() const;
	float* M_PtrGetsprintingSpeed();
	void M_SetsprintingSpeed(const float& value);

	//float	crouchingSpeed;		//Offset: 1352	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcrouchingSpeed() const;
	float* M_PtrGetcrouchingSpeed();
	void M_SetcrouchingSpeed(const float& value);

	//float	WalkingAcceleration;		//Offset: 1356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetWalkingAcceleration() const;
	float* M_PtrGetWalkingAcceleration();
	void M_SetWalkingAcceleration(const float& value);

	//float	runningAcceleration;		//Offset: 1360	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrunningAcceleration() const;
	float* M_PtrGetrunningAcceleration();
	void M_SetrunningAcceleration(const float& value);

	//float	walkingDeceleration;		//Offset: 1364	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetwalkingDeceleration() const;
	float* M_PtrGetwalkingDeceleration();
	void M_SetwalkingDeceleration(const float& value);

	//float	runningDeceleration;		//Offset: 1368	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrunningDeceleration() const;
	float* M_PtrGetrunningDeceleration();
	void M_SetrunningDeceleration(const float& value);

	//float	walkingGroundFriction;		//Offset: 1372	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetwalkingGroundFriction() const;
	float* M_PtrGetwalkingGroundFriction();
	void M_SetwalkingGroundFriction(const float& value);

	//float	runningGroundFriction;		//Offset: 1376	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrunningGroundFriction() const;
	float* M_PtrGetrunningGroundFriction();
	void M_SetrunningGroundFriction(const float& value);

	//float	slopeSpeedMultiplier;		//Offset: 1380	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetslopeSpeedMultiplier() const;
	float* M_PtrGetslopeSpeedMultiplier();
	void M_SetslopeSpeedMultiplier(const float& value);

	//bool	IsMoving;		//Offset: 1384	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//struct FRotator	lastVelocityRotation;		//Offset: 1388	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlastVelocityRotation() const;
	struct FRotator* M_PtrGetlastVelocityRotation();
	void M_SetlastVelocityRotation(const struct FRotator& value);

	//ECharacterMovementMode	MovementMode;		//Offset: 1400	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ECharacterMovementMode M_GetMovementMode() const;
	ECharacterMovementMode* M_PtrGetMovementMode();
	void M_SetMovementMode(const ECharacterMovementMode& value);

	//ECharacterMovementMode	previousMovementMode;		//Offset: 1401	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ECharacterMovementMode M_GetpreviousMovementMode() const;
	ECharacterMovementMode* M_PtrGetpreviousMovementMode();
	void M_SetpreviousMovementMode(const ECharacterMovementMode& value);

	//ECharacterRotationMode	RotationMode;		//Offset: 1402	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ECharacterRotationMode M_GetRotationMode() const;
	ECharacterRotationMode* M_PtrGetRotationMode();
	void M_SetRotationMode(const ECharacterRotationMode& value);

	//ECharacterStance	stance;		//Offset: 1403	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ECharacterStance M_Getstance() const;
	ECharacterStance* M_PtrGetstance();
	void M_Setstance(const ECharacterStance& value);

	//ECharacterGait	gait;		//Offset: 1404	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ECharacterGait M_Getgait() const;
	ECharacterGait* M_PtrGetgait();
	void M_Setgait(const ECharacterGait& value);

	//struct FRotator	Rotation;		//Offset: 1408	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetRotation() const;
	struct FRotator* M_PtrGetRotation();
	void M_SetRotation(const struct FRotator& value);

	//struct FRotator	TargetRotation;		//Offset: 1420	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetTargetRotation() const;
	struct FRotator* M_PtrGetTargetRotation();
	void M_SetTargetRotation(const struct FRotator& value);

	//struct FRotator	jumpRotation;		//Offset: 1432	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetjumpRotation() const;
	struct FRotator* M_PtrGetjumpRotation();
	void M_SetjumpRotation(const struct FRotator& value);

	//struct FRotator	lookingRotation;		//Offset: 1444	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlookingRotation() const;
	struct FRotator* M_PtrGetlookingRotation();
	void M_SetlookingRotation(const struct FRotator& value);

	//ECharacterCardinalDirection	cardinalDirection;		//Offset: 1456	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ECharacterCardinalDirection M_GetcardinalDirection() const;
	ECharacterCardinalDirection* M_PtrGetcardinalDirection();
	void M_SetcardinalDirection(const ECharacterCardinalDirection& value);

	//float	RotationOffset;		//Offset: 1460	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetRotationOffset() const;
	float* M_PtrGetRotationOffset();
	void M_SetRotationOffset(const float& value);

	//float	rotationRateMultiplier;		//Offset: 1464	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrotationRateMultiplier() const;
	float* M_PtrGetrotationRateMultiplier();
	void M_SetrotationRateMultiplier(const float& value);

	//float	targetRotationDifference;		//Offset: 1468	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GettargetRotationDifference() const;
	float* M_PtrGettargetRotationDifference();
	void M_SettargetRotationDifference(const float& value);

	//float	aimYawRate;		//Offset: 1472	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetaimYawRate() const;
	float* M_PtrGetaimYawRate();
	void M_SetaimYawRate(const float& value);

	//float	aimYawDelta;		//Offset: 1476	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetaimYawDelta() const;
	float* M_PtrGetaimYawDelta();
	void M_SetaimYawDelta(const float& value);

	//float	rotationYawDelta;		//Offset: 1480	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrotationYawDelta() const;
	float* M_PtrGetrotationYawDelta();
	void M_SetrotationYawDelta(const float& value);

	//float	lookAtCharactersMinDistance;		//Offset: 1484	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetlookAtCharactersMinDistance() const;
	float* M_PtrGetlookAtCharactersMinDistance();
	void M_SetlookAtCharactersMinDistance(const float& value);

	//float	smoothRotationYawDeltaInterpolationSpeed;		//Offset: 1488	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetsmoothRotationYawDeltaInterpolationSpeed() const;
	float* M_PtrGetsmoothRotationYawDeltaInterpolationSpeed();
	void M_SetsmoothRotationYawDeltaInterpolationSpeed(const float& value);

	//bool	useSmoothRotationYawDelta;		//Offset: 1492	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetuseSmoothRotationYawDelta() const;
	bool* M_PtrGetuseSmoothRotationYawDelta();
	void M_SetuseSmoothRotationYawDelta(const bool& value);

	//bool	lookAtCharacters;		//Offset: 1493	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetlookAtCharacters() const;
	bool* M_PtrGetlookAtCharacters();
	void M_SetlookAtCharacters(const bool& value);

	//bool	LookAtTarget;		//Offset: 1494	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetLookAtTarget() const;
	bool* M_PtrGetLookAtTarget();
	void M_SetLookAtTarget(const bool& value);

	//bool	isRotationManaged;		//Offset: 1495	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisRotationManaged() const;
	bool* M_PtrGetisRotationManaged();
	void M_SetisRotationManaged(const bool& value);

	//bool	isInWater;		//Offset: 1496	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisInWater() const;
	bool* M_PtrGetisInWater();
	void M_SetisInWater(const bool& value);

	//struct FVector	movementInput;		//Offset: 1500	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetmovementInput() const;
	struct FVector* M_PtrGetmovementInput();
	void M_SetmovementInput(const struct FVector& value);

	//bool	hasMovementInput;		//Offset: 1512	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GethasMovementInput() const;
	bool* M_PtrGethasMovementInput();
	void M_SethasMovementInput(const bool& value);

	//struct FRotator	lastMovementInputRotation;		//Offset: 1516	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlastMovementInputRotation() const;
	struct FRotator* M_PtrGetlastMovementInputRotation();
	void M_SetlastMovementInputRotation(const struct FRotator& value);

	//float	movementInputVelocityDifference;		//Offset: 1528	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmovementInputVelocityDifference() const;
	float* M_PtrGetmovementInputVelocityDifference();
	void M_SetmovementInputVelocityDifference(const float& value);

	//bool	isDistanceMeshCollisionOptimizationEnabled;		//Offset: 1532	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDistanceMeshCollisionOptimizationEnabled() const;
	bool* M_PtrGetisDistanceMeshCollisionOptimizationEnabled();
	void M_SetisDistanceMeshCollisionOptimizationEnabled(const bool& value);

	//bool	isPhysicsAssetSwitchingEnabled;		//Offset: 1533	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisPhysicsAssetSwitchingEnabled() const;
	bool* M_PtrGetisPhysicsAssetSwitchingEnabled();
	void M_SetisPhysicsAssetSwitchingEnabled(const bool& value);

	//TEnumAsByte<ECollisionEnabled>	targetMeshCollisionType;		//Offset: 1534	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ECollisionEnabled> M_GettargetMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGettargetMeshCollisionType();
	void M_SettargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//TEnumAsByte<ECollisionEnabled>	previousMeshCollisionType;		//Offset: 1535	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ECollisionEnabled> M_GetpreviousMeshCollisionType() const;
	TEnumAsByte<ECollisionEnabled>* M_PtrGetpreviousMeshCollisionType();
	void M_SetpreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value);

	//float	meshCollisionDisableTime;		//Offset: 1536	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmeshCollisionDisableTime() const;
	float* M_PtrGetmeshCollisionDisableTime();
	void M_SetmeshCollisionDisableTime(const float& value);

	//bool	isFirstPerson;		//Offset: 1540	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisFirstPerson() const;
	bool* M_PtrGetisFirstPerson();
	void M_SetisFirstPerson(const bool& value);

	//bool	isAiming;		//Offset: 1541	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisAiming() const;
	bool* M_PtrGetisAiming();
	void M_SetisAiming(const bool& value);

	//bool	isMountedOnAnotherPawn;		//Offset: 1542	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisMountedOnAnotherPawn() const;
	bool* M_PtrGetisMountedOnAnotherPawn();
	void M_SetisMountedOnAnotherPawn(const bool& value);

	//bool	isInDialog;		//Offset: 1543	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisInDialog() const;
	bool* M_PtrGetisInDialog();
	void M_SetisInDialog(const bool& value);

	//struct FVector	eyesLocation;		//Offset: 1544	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GeteyesLocation() const;
	struct FVector* M_PtrGeteyesLocation();
	void M_SeteyesLocation(const struct FVector& value);

	//struct FVector	currentLookAtTargetLocation;		//Offset: 1556	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetcurrentLookAtTargetLocation() const;
	struct FVector* M_PtrGetcurrentLookAtTargetLocation();
	void M_SetcurrentLookAtTargetLocation(const struct FVector& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CharacterBase");
		return ptr;
	}

#pragma region Functions
	struct FRotator CalculateBaseLookingRotation();

	struct FRotator CalculateLookingAtCharacterRotation();

	struct FRotator CalculateLookingAtRotation();

	struct FRotator CalculateLookingAtTargetRotation();

	struct FRotator CalculateLookingRotation();

	float CalculateRotationYawDelta(float DeltaTime);

	void CalculateVariables(float DeltaTime);

	struct FVector CheckAvailabilityOfLocation(struct FVector checkLocation, class AActor* actorToIgnore);

	class UPhysicsAsset* ChooseInactivePhysicsAsset();

	void DisableMovementInterpolation();

	void EnableMovementInterpolation();

	void ManageGroundedRotation();

	void ManageRagdoll();

	void SetMeshCollision(TEnumAsByte<ECollisionEnabled> CollisionType);

	void SetMeshCollisionKeepTime(float keepTime);

	void SetRotation(struct FRotator newTargetRotation, bool interpRotation, float interpSpeed);

	void UpdateMovementSettings();

#pragma endregion
};
};