#pragma once
#include "UObject/Class.h"

namespace UE4 {
	class UBlueprintGeneratedClass : public UClass {
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
			return ptr;
		}
	};
}