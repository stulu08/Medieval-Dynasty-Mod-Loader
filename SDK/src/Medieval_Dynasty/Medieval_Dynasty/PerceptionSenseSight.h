#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/PerceptionSense.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionSenseSight
// Super: Class Medieval_Dynasty.PerceptionSense
// Size: 408
// Size inherited: 168
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionSenseSight : public UPerceptionSense {
public:
#pragma region Members
	//float	Range;		//Offset: 384	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetRange() const;
	float* M_PtrGetRange();
	void M_SetRange(const float& value);

	//float	Angle;		//Offset: 388	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetAngle() const;
	float* M_PtrGetAngle();
	void M_SetAngle(const float& value);

	//bool	isObstructionEnabled;		//Offset: 392	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisObstructionEnabled() const;
	bool* M_PtrGetisObstructionEnabled();
	void M_SetisObstructionEnabled(const bool& value);

	//TEnumAsByte<ECollisionChannel>	obstructionCollisionChannel;		//Offset: 393	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ECollisionChannel> M_GetobstructionCollisionChannel() const;
	TEnumAsByte<ECollisionChannel>* M_PtrGetobstructionCollisionChannel();
	void M_SetobstructionCollisionChannel(const TEnumAsByte<ECollisionChannel>& value);

	//float	obstructionCheckMaxInterval;		//Offset: 396	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetobstructionCheckMaxInterval() const;
	float* M_PtrGetobstructionCheckMaxInterval();
	void M_SetobstructionCheckMaxInterval(const float& value);

	//bool	debugShowSenseArea;		//Offset: 400	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSenseArea() const;
	bool* M_PtrGetdebugShowSenseArea();
	void M_SetdebugShowSenseArea(const bool& value);

	//bool	debugShowSensedCheckLocations;		//Offset: 401	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSensedCheckLocations() const;
	bool* M_PtrGetdebugShowSensedCheckLocations();
	void M_SetdebugShowSensedCheckLocations(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionSenseSight");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};