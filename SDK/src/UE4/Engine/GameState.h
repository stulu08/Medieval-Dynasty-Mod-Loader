#pragma once

namespace UE4 {
	class AGameState : public AActor
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.GameState");
			return ptr;
		}
	};
}