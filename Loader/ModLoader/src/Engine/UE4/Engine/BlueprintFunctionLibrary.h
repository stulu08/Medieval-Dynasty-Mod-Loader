#pragma once
#include "CoreUObject/Class.h"

namespace UE4 {
	class ACustomClass : public UObject
	{
	public:
		static UClass* StaticClass(std::string Class)
		{
			static auto ptr = UObject::FindClass(Class);
			return ptr;
		}
	};
	class UBlueprintFunctionLibrary : public UObject
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
			return ptr;
		}
	};
}