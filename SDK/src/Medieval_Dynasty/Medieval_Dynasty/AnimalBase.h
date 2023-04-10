#pragma once
#include "Structs.h"
#include "Engine/Character.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.AnimalBase
// Super: Class Engine.Character
// Size: 1408
// Size inherited: 1216
/////////////////////////////////////////////
namespace UE4 {
class AAnimalBase : public ACharacter {
public:
#pragma region Members
	//struct FVector	Velocity;		//Offset: 1208	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetVelocity() const;
	struct FVector* M_PtrGetVelocity();
	void M_SetVelocity(const struct FVector& value);

	//float	Speed;		//Offset: 1220	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetSpeed() const;
	float* M_PtrGetSpeed();
	void M_SetSpeed(const float& value);

	//struct FVector	previousVelocity;		//Offset: 1224	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetpreviousVelocity() const;
	struct FVector* M_PtrGetpreviousVelocity();
	void M_SetpreviousVelocity(const struct FVector& value);

	//float	targetMaxWalkSpeed;		//Offset: 1236	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GettargetMaxWalkSpeed() const;
	float* M_PtrGettargetMaxWalkSpeed();
	void M_SettargetMaxWalkSpeed(const float& value);

	//float	slopeSpeedMultiplier;		//Offset: 1240	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetslopeSpeedMultiplier() const;
	float* M_PtrGetslopeSpeedMultiplier();
	void M_SetslopeSpeedMultiplier(const float& value);

	//bool	IsMoving;		//Offset: 1244	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//struct FRotator	lastVelocityRotation;		//Offset: 1248	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlastVelocityRotation() const;
	struct FRotator* M_PtrGetlastVelocityRotation();
	void M_SetlastVelocityRotation(const struct FRotator& value);

	//EAnimalMovementMode	MovementMode;		//Offset: 1260	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EAnimalMovementMode M_GetMovementMode() const;
	EAnimalMovementMode* M_PtrGetMovementMode();
	void M_SetMovementMode(const EAnimalMovementMode& value);

	//EAnimalMovementMode	previousMovementMode;		//Offset: 1261	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EAnimalMovementMode M_GetpreviousMovementMode() const;
	EAnimalMovementMode* M_PtrGetpreviousMovementMode();
	void M_SetpreviousMovementMode(const EAnimalMovementMode& value);

	//EAnimalRotationMode	RotationMode;		//Offset: 1262	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EAnimalRotationMode M_GetRotationMode() const;
	EAnimalRotationMode* M_PtrGetRotationMode();
	void M_SetRotationMode(const EAnimalRotationMode& value);

	//struct FRotator	Rotation;		//Offset: 1264	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetRotation() const;
	struct FRotator* M_PtrGetRotation();
	void M_SetRotation(const struct FRotator& value);

	//struct FRotator	TargetRotation;		//Offset: 1276	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetTargetRotation() const;
	struct FRotator* M_PtrGetTargetRotation();
	void M_SetTargetRotation(const struct FRotator& value);

	//struct FRotator	jumpRotation;		//Offset: 1288	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetjumpRotation() const;
	struct FRotator* M_PtrGetjumpRotation();
	void M_SetjumpRotation(const struct FRotator& value);

	//struct FRotator	lookingRotation;		//Offset: 1300	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlookingRotation() const;
	struct FRotator* M_PtrGetlookingRotation();
	void M_SetlookingRotation(const struct FRotator& value);

	//float	aimYawRate;		//Offset: 1312	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetaimYawRate() const;
	float* M_PtrGetaimYawRate();
	void M_SetaimYawRate(const float& value);

	//float	aimYawDelta;		//Offset: 1316	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetaimYawDelta() const;
	float* M_PtrGetaimYawDelta();
	void M_SetaimYawDelta(const float& value);

	//float	rotationRateMultiplier;		//Offset: 1320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrotationRateMultiplier() const;
	float* M_PtrGetrotationRateMultiplier();
	void M_SetrotationRateMultiplier(const float& value);

	//bool	isRotationManaged;		//Offset: 1324	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisRotationManaged() const;
	bool* M_PtrGetisRotationManaged();
	void M_SetisRotationManaged(const bool& value);

	//float	ragdollSpeedMultiplier;		//Offset: 1328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetragdollSpeedMultiplier() const;
	float* M_PtrGetragdollSpeedMultiplier();
	void M_SetragdollSpeedMultiplier(const float& value);

	//struct FVector	movementInput;		//Offset: 1332	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetmovementInput() const;
	struct FVector* M_PtrGetmovementInput();
	void M_SetmovementInput(const struct FVector& value);

	//bool	hasMovementInput;		//Offset: 1344	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GethasMovementInput() const;
	bool* M_PtrGethasMovementInput();
	void M_SethasMovementInput(const bool& value);

	//struct FRotator	lastMovementInputRotation;		//Offset: 1348	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlastMovementInputRotation() const;
	struct FRotator* M_PtrGetlastMovementInputRotation();
	void M_SetlastMovementInputRotation(const struct FRotator& value);

	//float	movementInputVelocityDifference;		//Offset: 1360	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmovementInputVelocityDifference() const;
	float* M_PtrGetmovementInputVelocityDifference();
	void M_SetmovementInputVelocityDifference(const float& value);

	//class AController*	controllerReference;		//Offset: 1368	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AController* M_GetcontrollerReference() const;
	class AController** M_PtrGetcontrollerReference();
	void M_SetcontrollerReference(const class AController*& value);

	//bool	isDead;		//Offset: 1376	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDead() const;
	bool* M_PtrGetisDead();
	void M_SetisDead(const bool& value);

	//bool	isResting;		//Offset: 1377	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisResting() const;
	bool* M_PtrGetisResting();
	void M_SetisResting(const bool& value);

	//bool	isLayingDown;		//Offset: 1378	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisLayingDown() const;
	bool* M_PtrGetisLayingDown();
	void M_SetisLayingDown(const bool& value);

	//EBirdMovementMode	birdMovementMode;		//Offset: 1379	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EBirdMovementMode M_GetbirdMovementMode() const;
	EBirdMovementMode* M_PtrGetbirdMovementMode();
	void M_SetbirdMovementMode(const EBirdMovementMode& value);

	//struct FRotator	flyingRotator;		//Offset: 1380	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetflyingRotator() const;
	struct FRotator* M_PtrGetflyingRotator();
	void M_SetflyingRotator(const struct FRotator& value);

	//bool	isGliding;		//Offset: 1392	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisGliding() const;
	bool* M_PtrGetisGliding();
	void M_SetisGliding(const bool& value);

	//bool	isLanding;		//Offset: 1393	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisLanding() const;
	bool* M_PtrGetisLanding();
	void M_SetisLanding(const bool& value);

	//bool	isWaterType;		//Offset: 1394	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisWaterType() const;
	bool* M_PtrGetisWaterType();
	void M_SetisWaterType(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimalBase");
		return ptr;
	}

#pragma region Functions
	void CalculateVariables(float DeltaTime);

	void SetRotation(struct FRotator newTargetRotation, bool interpRotation, float interpSpeed);

	void UpdateMovementSettings();

#pragma endregion
};
};