#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CustomEvent
// Super: Class CoreUObject.Object
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UCustomEvent : public UObject {
public:
#pragma region Members
	//float	tickIntervalForEvent;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GettickIntervalForEvent() const;
	float* M_PtrGettickIntervalForEvent();
	void M_SettickIntervalForEvent(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomEvent");
		return ptr;
	}

#pragma region Functions
	void EventTrigger(class AActor* Instigator);

#pragma endregion
};
};