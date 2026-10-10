#pragma once
#include "Engine/Structs.h"
#include "Engine/Actor.h"

namespace UE4 {
	class MDML_ENGINE_API UWorld : public UObject
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