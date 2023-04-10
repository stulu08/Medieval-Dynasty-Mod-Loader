#pragma once
#include "Structs.h"
#include "Engine/AnimInstance.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.AnimInstanceFlyingAnimal
// Super: Class Engine.AnimInstance
// Size: 768
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class UAnimInstanceFlyingAnimal : public UAnimInstance {
public:
#pragma region Members
	//class AAnimalBase*	AnimalBase;		//Offset: 696	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AAnimalBase* M_GetAnimalBase() const;
	class AAnimalBase** M_PtrGetAnimalBase();
	void M_SetAnimalBase(const class AAnimalBase*& value);

	//struct FVector	Velocity;		//Offset: 704	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetVelocity() const;
	struct FVector* M_PtrGetVelocity();
	void M_SetVelocity(const struct FVector& value);

	//struct FVector	forwardDirection;		//Offset: 716	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetforwardDirection() const;
	struct FVector* M_PtrGetforwardDirection();
	void M_SetforwardDirection(const struct FVector& value);

	//float	Speed;		//Offset: 728	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetSpeed() const;
	float* M_PtrGetSpeed();
	void M_SetSpeed(const float& value);

	//float	flyingInclinationX;		//Offset: 732	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetflyingInclinationX() const;
	float* M_PtrGetflyingInclinationX();
	void M_SetflyingInclinationX(const float& value);

	//float	flyingInclinationY;		//Offset: 736	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetflyingInclinationY() const;
	float* M_PtrGetflyingInclinationY();
	void M_SetflyingInclinationY(const float& value);

	//float	directionMultiplier;		//Offset: 740	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetdirectionMultiplier() const;
	float* M_PtrGetdirectionMultiplier();
	void M_SetdirectionMultiplier(const float& value);

	//bool	IsMoving;		//Offset: 744	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//bool	isGliding;		//Offset: 745	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisGliding() const;
	bool* M_PtrGetisGliding();
	void M_SetisGliding(const bool& value);

	//bool	isLanding;		//Offset: 746	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisLanding() const;
	bool* M_PtrGetisLanding();
	void M_SetisLanding(const bool& value);

	//bool	rotateBone;		//Offset: 747	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetrotateBone() const;
	bool* M_PtrGetrotateBone();
	void M_SetrotateBone(const bool& value);

	//struct FRotator	flyingRotator;		//Offset: 748	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetflyingRotator() const;
	struct FRotator* M_PtrGetflyingRotator();
	void M_SetflyingRotator(const struct FRotator& value);

	//EBirdMovementMode	MovementMode;		//Offset: 760	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EBirdMovementMode M_GetMovementMode() const;
	EBirdMovementMode* M_PtrGetMovementMode();
	void M_SetMovementMode(const EBirdMovementMode& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimInstanceFlyingAnimal");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};