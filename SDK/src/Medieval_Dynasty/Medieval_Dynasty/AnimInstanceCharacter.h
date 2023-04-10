#pragma once
#include "Structs.h"
#include "Engine/AnimInstance.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.AnimInstanceCharacter
// Super: Class Engine.AnimInstance
// Size: 800
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class UAnimInstanceCharacter : public UAnimInstance {
public:
#pragma region Members
	//class ACharacterBase*	CharacterBase;		//Offset: 696	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class ACharacterBase* M_GetCharacterBase() const;
	class ACharacterBase** M_PtrGetCharacterBase();
	void M_SetCharacterBase(const class ACharacterBase*& value);

	//struct FVector	Velocity;		//Offset: 704	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetVelocity() const;
	struct FVector* M_PtrGetVelocity();
	void M_SetVelocity(const struct FVector& value);

	//bool	IsMoving;		//Offset: 716	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//struct FRotator	lastVelocityRotation;		//Offset: 720	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlastVelocityRotation() const;
	struct FRotator* M_PtrGetlastVelocityRotation();
	void M_SetlastVelocityRotation(const struct FRotator& value);

	//struct FRotator	Rotation;		//Offset: 732	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetRotation() const;
	struct FRotator* M_PtrGetRotation();
	void M_SetRotation(const struct FRotator& value);

	//struct FRotator	lookingRotation;		//Offset: 744	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlookingRotation() const;
	struct FRotator* M_PtrGetlookingRotation();
	void M_SetlookingRotation(const struct FRotator& value);

	//float	aimYawRate;		//Offset: 756	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetaimYawRate() const;
	float* M_PtrGetaimYawRate();
	void M_SetaimYawRate(const float& value);

	//float	aimYawDelta;		//Offset: 760	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetaimYawDelta() const;
	float* M_PtrGetaimYawDelta();
	void M_SetaimYawDelta(const float& value);

	//float	rotationYawDelta;		//Offset: 764	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrotationYawDelta() const;
	float* M_PtrGetrotationYawDelta();
	void M_SetrotationYawDelta(const float& value);

	//bool	hasMovementInput;		//Offset: 768	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GethasMovementInput() const;
	bool* M_PtrGethasMovementInput();
	void M_SethasMovementInput(const bool& value);

	//struct FRotator	lastMovementInputRotation;		//Offset: 772	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetlastMovementInputRotation() const;
	struct FRotator* M_PtrGetlastMovementInputRotation();
	void M_SetlastMovementInputRotation(const struct FRotator& value);

	//float	movementInputVelocityDifference;		//Offset: 784	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmovementInputVelocityDifference() const;
	float* M_PtrGetmovementInputVelocityDifference();
	void M_SetmovementInputVelocityDifference(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimInstanceCharacter");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};