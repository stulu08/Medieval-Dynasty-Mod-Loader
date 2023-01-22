#pragma once
#include "EngineTypes.h"
#include "GameFramework/Actor.h"

namespace UE4 {
	class UWorld : public UObject
	{
	public:
		AActor* SpawnActor(UClass* uclass, const  FTransform* transform, const FActorSpawnParameters* params);

		static UWorld** GWorld;
		static inline UWorld* GetWorld()
		{
			return *GWorld;
		};

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.World");
			return ptr;
		}
	};
}