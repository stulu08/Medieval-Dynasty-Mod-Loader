#pragma once
#include "CoreUObject/Class.h"

namespace UE4 {
	class UUserDefinedStruct : public UStruct
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
			return ptr;
		}
	};
}