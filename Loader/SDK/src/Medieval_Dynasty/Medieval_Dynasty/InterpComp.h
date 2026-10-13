#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.InterpComp
// Super: Class Engine.ActorComponent
// Size: 264
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UInterpComp : public UActorComponent {
public:
#pragma region Members
	//bool	bUseInterpolation;		//Offset: 184	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUseInterpolation() const;
	bool* M_PtrGetbUseInterpolation();
	void M_SetbUseInterpolation(const bool& value);

	//bool	bTryToInterpolateDuringPhysics;		//Offset: 185	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbTryToInterpolateDuringPhysics() const;
	bool* M_PtrGetbTryToInterpolateDuringPhysics();
	void M_SetbTryToInterpolateDuringPhysics(const bool& value);

	//float	LocationError;		//Offset: 188	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLocationError() const;
	float* M_PtrGetLocationError();
	void M_SetLocationError(const float& value);

	//float	RotationError;		//Offset: 192	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRotationError() const;
	float* M_PtrGetRotationError();
	void M_SetRotationError(const float& value);

	//float	MinInterpolationDeltaTime;		//Offset: 196	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinInterpolationDeltaTime() const;
	float* M_PtrGetMinInterpolationDeltaTime();
	void M_SetMinInterpolationDeltaTime(const float& value);

	//float	LocationInterpolationSpeed;		//Offset: 200	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetLocationInterpolationSpeed() const;
	float* M_PtrGetLocationInterpolationSpeed();
	void M_SetLocationInterpolationSpeed(const float& value);

	//float	RotationInterpolationSpeed;		//Offset: 204	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRotationInterpolationSpeed() const;
	float* M_PtrGetRotationInterpolationSpeed();
	void M_SetRotationInterpolationSpeed(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.InterpComp");
		return ptr;
	}

#pragma region Functions
	void SyncStateOnClientPhysBodyWake();

	void UpdateInterpolationState();

#pragma endregion
};
};