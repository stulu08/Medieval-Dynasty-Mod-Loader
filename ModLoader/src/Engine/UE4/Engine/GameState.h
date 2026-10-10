#pragma once
#include "GameStateBase.h"

namespace UE4 {
	class AGameState : public AGameStateBase
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.GameState");
			return ptr;
		}
	};
}