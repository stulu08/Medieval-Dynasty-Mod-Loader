#include "World.h"
#include "EngineAddresses.h"

namespace UE4 {
	UWorld** UWorld::GWorld = nullptr;

	AActor* UWorld::SpawnActor(UClass* uclass, const  FTransform* transform, const FActorSpawnParameters* params)
	{
		if (!mdml::Addresses.SpawnActorFTrans)
			return nullptr;
		return reinterpret_cast<AActor * (*)(UWorld*, UClass*, const FTransform*, const FActorSpawnParameters*)>(mdml::Addresses.SpawnActorFTrans)(this, uclass, transform, params);
	}
}
