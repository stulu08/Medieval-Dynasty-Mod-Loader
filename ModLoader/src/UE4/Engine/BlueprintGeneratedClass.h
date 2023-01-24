#pragma once
#include "UObject/Class.h"

namespace UE4 {
	class UBlueprintGeneratedClass : public UClass {
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
			return ptr;
		}
	};
}