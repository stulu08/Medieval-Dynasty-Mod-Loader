#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CustomEventCondition
// Super: Class CoreUObject.Object
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UCustomEventCondition : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomEventCondition");
		return ptr;
	}

#pragma region Functions
	bool IsConditionMet(class AActor* Instigator);

	bool IsConditionMet_Internal(class AActor* Instigator);

#pragma endregion
};
};