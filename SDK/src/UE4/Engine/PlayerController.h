#pragma once
#include "Actor.h"

namespace UE4 {
	class APlayerController : public AActor
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.PlayerController");
			return ptr;
		}
	};
}