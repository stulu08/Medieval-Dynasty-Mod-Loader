#pragma once
#include "CoreUObject/Class.h"

namespace UE4 {
	class UUserDefinedStruct : public UScriptStruct
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
			return ptr;
		}
	};
}