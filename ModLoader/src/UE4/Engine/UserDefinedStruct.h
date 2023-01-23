#pragma once
#include "UObject/Class.h"

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