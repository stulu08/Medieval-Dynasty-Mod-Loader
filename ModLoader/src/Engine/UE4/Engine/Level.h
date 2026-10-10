#pragma once
#include "CoreUObject/Class.h"

namespace UE4 {
	class ULevel : public UObject
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.Level");
			return ptr;
		}
	};
}