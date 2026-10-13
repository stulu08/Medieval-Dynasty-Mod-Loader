#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class PhysicsCore.PhysicalMaterial
// Super: Class CoreUObject.Object
// Size: 128
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UPhysicalMaterial : public UObject {
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

	//TEnumAsByte<EFrictionCombineMode>	FrictionCombineMode;		//Offset: 48	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EFrictionCombineMode> M_GetFrictionCombineMode() const;
	TEnumAsByte<EFrictionCombineMode>* M_PtrGetFrictionCombineMode();
	void M_SetFrictionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value);

	//bool	bOverrideFrictionCombineMode;		//Offset: 49	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbOverrideFrictionCombineMode() const;
	bool* M_PtrGetbOverrideFrictionCombineMode();
	void M_SetbOverrideFrictionCombineMode(const bool& value);

	//float	Restitution;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRestitution() const;
	float* M_PtrGetRestitution();
	void M_SetRestitution(const float& value);

	//TEnumAsByte<EFrictionCombineMode>	RestitutionCombineMode;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EFrictionCombineMode> M_GetRestitutionCombineMode() const;
	TEnumAsByte<EFrictionCombineMode>* M_PtrGetRestitutionCombineMode();
	void M_SetRestitutionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value);

	//bool	bOverrideRestitutionCombineMode;		//Offset: 57	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbOverrideRestitutionCombineMode() const;
	bool* M_PtrGetbOverrideRestitutionCombineMode();
	void M_SetbOverrideRestitutionCombineMode(const bool& value);

	//float	Density;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDensity() const;
	float* M_PtrGetDensity();
	void M_SetDensity(const float& value);

	//float	SleepLinearVelocityThreshold;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSleepLinearVelocityThreshold() const;
	float* M_PtrGetSleepLinearVelocityThreshold();
	void M_SetSleepLinearVelocityThreshold(const float& value);

	//float	SleepAngularVelocityThreshold;		//Offset: 68	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetSleepAngularVelocityThreshold() const;
	float* M_PtrGetSleepAngularVelocityThreshold();
	void M_SetSleepAngularVelocityThreshold(const float& value);

	//int32_t	SleepCounterThreshold;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetSleepCounterThreshold() const;
	int32_t* M_PtrGetSleepCounterThreshold();
	void M_SetSleepCounterThreshold(const int32_t& value);

	//float	RaiseMassToPower;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRaiseMassToPower() const;
	float* M_PtrGetRaiseMassToPower();
	void M_SetRaiseMassToPower(const float& value);

	//float	DestructibleDamageThresholdScale;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDestructibleDamageThresholdScale() const;
	float* M_PtrGetDestructibleDamageThresholdScale();
	void M_SetDestructibleDamageThresholdScale(const float& value);

	//class UPhysicalMaterialPropertyBase*	PhysicalMaterialProperty;		//Offset: 88	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPhysicalMaterialPropertyBase* M_GetPhysicalMaterialProperty() const;
	class UPhysicalMaterialPropertyBase** M_PtrGetPhysicalMaterialProperty();
	void M_SetPhysicalMaterialProperty(const class UPhysicalMaterialPropertyBase*& value);

	//TEnumAsByte<EPhysicalSurface>	SurfaceType;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EPhysicalSurface> M_GetSurfaceType() const;
	TEnumAsByte<EPhysicalSurface>* M_PtrGetSurfaceType();
	void M_SetSurfaceType(const TEnumAsByte<EPhysicalSurface>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class PhysicsCore.PhysicalMaterial");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};