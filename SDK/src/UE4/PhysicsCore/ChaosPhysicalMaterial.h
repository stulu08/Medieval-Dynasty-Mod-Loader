#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class PhysicsCore.ChaosPhysicalMaterial
// Super: Class CoreUObject.Object
// Size: 72
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UChaosPhysicalMaterial : public UObject {
public:
#pragma region Members
	//float	Friction;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFriction() const;
	float* M_PtrGetFriction();
	void M_SetFriction(const float& value);

	//float	StaticFriction;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetStaticFriction() const;
	float* M_PtrGetStaticFriction();
	void M_SetStaticFriction(const float& value);

	//float	Restitution;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRestitution() const;
	float* M_PtrGetRestitution();
	void M_SetRestitution(const float& value);

	//float	LinearEtherDrag;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLinearEtherDrag() const;
	float* M_PtrGetLinearEtherDrag();
	void M_SetLinearEtherDrag(const float& value);

	//float	AngularEtherDrag;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetAngularEtherDrag() const;
	float* M_PtrGetAngularEtherDrag();
	void M_SetAngularEtherDrag(const float& value);

	//float	SleepingLinearVelocityThreshold;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSleepingLinearVelocityThreshold() const;
	float* M_PtrGetSleepingLinearVelocityThreshold();
	void M_SetSleepingLinearVelocityThreshold(const float& value);

	//float	SleepingAngularVelocityThreshold;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSleepingAngularVelocityThreshold() const;
	float* M_PtrGetSleepingAngularVelocityThreshold();
	void M_SetSleepingAngularVelocityThreshold(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class PhysicsCore.ChaosPhysicalMaterial");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};