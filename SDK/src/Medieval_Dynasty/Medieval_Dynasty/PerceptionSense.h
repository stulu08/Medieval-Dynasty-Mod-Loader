#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionSense
// Super: Class CoreUObject.Object
// Size: 168
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionSense : public UObject {
public:
#pragma region Members
	//bool	IsEnabled;		//Offset: 128	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsEnabled() const;
	bool* M_PtrGetIsEnabled();
	void M_SetIsEnabled(const bool& value);

	//bool	isDebugEnabled;		//Offset: 129	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionSense");
		return ptr;
	}

#pragma region Functions
	bool IsEnabled()/* const*/;

	void SetIsEnabled(bool newIsEnabled);

#pragma endregion
};
};