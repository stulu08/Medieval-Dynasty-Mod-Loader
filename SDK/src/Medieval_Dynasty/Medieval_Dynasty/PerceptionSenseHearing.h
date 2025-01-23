#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/PerceptionSense.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionSenseHearing
// Super: Class Medieval_Dynasty.PerceptionSense
// Size: 176
// Size inherited: 168
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionSenseHearing : public UPerceptionSense {
public:
#pragma region Members
	//float	Range;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetRange() const;
	float* M_PtrGetRange();
	void M_SetRange(const float& value);

	//bool	debugShowSenseArea;		//Offset: 172	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSenseArea() const;
	bool* M_PtrGetdebugShowSenseArea();
	void M_SetdebugShowSenseArea(const bool& value);

	//bool	debugShowSensedCheckLocations;		//Offset: 173	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowSensedCheckLocations() const;
	bool* M_PtrGetdebugShowSensedCheckLocations();
	void M_SetdebugShowSensedCheckLocations(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionSenseHearing");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};