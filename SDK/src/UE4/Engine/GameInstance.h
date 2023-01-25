#pragma once
#include "CoreUObject/Class.h"

namespace UE4 {
	class UGameInstance : public UObject
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.GameInstance");
			return ptr;
		}
	};
}