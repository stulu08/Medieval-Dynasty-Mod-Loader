#pragma once
#include "Structs.h"
#include "Engine/AnimInstance.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.AnimInstanceAnimal
// Super: Class Engine.AnimInstance
// Size: 816
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class UAnimInstanceAnimal : public UAnimInstance {
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

	//float	rawSpeed;		//Offset: 716	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetrawSpeed() const;
	float* M_PtrGetrawSpeed();
	void M_SetrawSpeed(const float& value);

	//class UCurveFloat*	speedCurve;		//Offset: 720	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UCurveFloat* M_GetspeedCurve() const;
	class UCurveFloat** M_PtrGetspeedCurve();
	void M_SetspeedCurve(const class UCurveFloat*& value);

	//float	Speed;		//Offset: 728	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetSpeed() const;
	float* M_PtrGetSpeed();
	void M_SetSpeed(const float& value);

	//bool	IsMoving;		//Offset: 732	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//float	sidewaysSpeed;		//Offset: 736	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetsidewaysSpeed() const;
	float* M_PtrGetsidewaysSpeed();
	void M_SetsidewaysSpeed(const float& value);

	//float	sidewaysSpeedClamped;		//Offset: 740	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetsidewaysSpeedClamped() const;
	float* M_PtrGetsidewaysSpeedClamped();
	void M_SetsidewaysSpeedClamped(const float& value);

	//float	sidewaysSpeedClampValue;		//Offset: 744	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetsidewaysSpeedClampValue() const;
	float* M_PtrGetsidewaysSpeedClampValue();
	void M_SetsidewaysSpeedClampValue(const float& value);

	//struct FVector	rightDirection;		//Offset: 748	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetrightDirection() const;
	struct FVector* M_PtrGetrightDirection();
	void M_SetrightDirection(const struct FVector& value);

	//bool	isInverseKinematicsEnabled;		//Offset: 760	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisInverseKinematicsEnabled() const;
	bool* M_PtrGetisInverseKinematicsEnabled();
	void M_SetisInverseKinematicsEnabled(const bool& value);

	//float	feetAlpha;		//Offset: 764	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfeetAlpha() const;
	float* M_PtrGetfeetAlpha();
	void M_SetfeetAlpha(const float& value);

	//float	feetAlphaStationary;		//Offset: 768	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfeetAlphaStationary() const;
	float* M_PtrGetfeetAlphaStationary();
	void M_SetfeetAlphaStationary(const float& value);

	//float	feetAlphaMoving;		//Offset: 772	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfeetAlphaMoving() const;
	float* M_PtrGetfeetAlphaMoving();
	void M_SetfeetAlphaMoving(const float& value);

	//float	pelvisOffsetZ;		//Offset: 776	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpelvisOffsetZ() const;
	float* M_PtrGetpelvisOffsetZ();
	void M_SetpelvisOffsetZ(const float& value);

	//float	pelvisOffsetZStationary;		//Offset: 780	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpelvisOffsetZStationary() const;
	float* M_PtrGetpelvisOffsetZStationary();
	void M_SetpelvisOffsetZStationary(const float& value);

	//float	pelvisOffsetZMoving;		//Offset: 784	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpelvisOffsetZMoving() const;
	float* M_PtrGetpelvisOffsetZMoving();
	void M_SetpelvisOffsetZMoving(const float& value);

	//float	chestDipUpSlopes;		//Offset: 788	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipUpSlopes() const;
	float* M_PtrGetchestDipUpSlopes();
	void M_SetchestDipUpSlopes(const float& value);

	//float	chestDipUpSlopesStationary;		//Offset: 792	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipUpSlopesStationary() const;
	float* M_PtrGetchestDipUpSlopesStationary();
	void M_SetchestDipUpSlopesStationary(const float& value);

	//float	chestDipUpSlopesMoving;		//Offset: 796	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipUpSlopesMoving() const;
	float* M_PtrGetchestDipUpSlopesMoving();
	void M_SetchestDipUpSlopesMoving(const float& value);

	//float	chestDipDownSlopes;		//Offset: 800	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipDownSlopes() const;
	float* M_PtrGetchestDipDownSlopes();
	void M_SetchestDipDownSlopes(const float& value);

	//float	chestDipDownSlopesStationary;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipDownSlopesStationary() const;
	float* M_PtrGetchestDipDownSlopesStationary();
	void M_SetchestDipDownSlopesStationary(const float& value);

	//float	chestDipDownSlopesMoving;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipDownSlopesMoving() const;
	float* M_PtrGetchestDipDownSlopesMoving();
	void M_SetchestDipDownSlopesMoving(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimInstanceAnimal");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};