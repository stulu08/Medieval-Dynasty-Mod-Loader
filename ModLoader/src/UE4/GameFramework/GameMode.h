#pragma once

namespace UE4 {
	class AGameModeBase : public AActor
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
			return ptr;
		}
	};
	class AGameMode : public AActor
	{
	public:

	};
}