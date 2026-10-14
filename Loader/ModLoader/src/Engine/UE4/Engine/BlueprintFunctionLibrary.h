#pragma once
#include "CoreUObject/Class.h"

namespace UE4 {
	// (ACustomClass, the UML helper for the [GameInfo] BeginPlayOverwrite class, was removed in Wave 3E.)
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