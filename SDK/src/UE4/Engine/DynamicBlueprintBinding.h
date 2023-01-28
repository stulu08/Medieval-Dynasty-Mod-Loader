#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.DynamicBlueprintBinding
// Super: Class CoreUObject.Object
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
	class UDynamicBlueprintBinding : public UObject {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
			return ptr;
		}
	};
};