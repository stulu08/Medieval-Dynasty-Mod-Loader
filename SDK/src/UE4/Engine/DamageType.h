#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.DamageType
// Super: Class CoreUObject.Object
// Size: 64
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UDamageType : public UObject {
public:
#pragma region Members
	//unsigned char	bCausedByWorld : 1;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCausedByWorld() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCausedByWorld();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCausedByWorld(const unsigned char& value);

	//unsigned char	bScaleMomentumByMass : 1;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbScaleMomentumByMass() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbScaleMomentumByMass();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbScaleMomentumByMass(const unsigned char& value);

	//unsigned char	bRadialDamageVelChange : 1;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRadialDamageVelChange() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRadialDamageVelChange();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRadialDamageVelChange(const unsigned char& value);

	//float	DamageImpulse;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDamageImpulse() const;
	float* M_PtrGetDamageImpulse();
	void M_SetDamageImpulse(const float& value);

	//float	DestructibleImpulse;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDestructibleImpulse() const;
	float* M_PtrGetDestructibleImpulse();
	void M_SetDestructibleImpulse(const float& value);

	//float	DestructibleDamageSpreadScale;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDestructibleDamageSpreadScale() const;
	float* M_PtrGetDestructibleDamageSpreadScale();
	void M_SetDestructibleDamageSpreadScale(const float& value);

	//float	DamageFalloff;		//Offset: 56	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDamageFalloff() const;
	float* M_PtrGetDamageFalloff();
	void M_SetDamageFalloff(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};