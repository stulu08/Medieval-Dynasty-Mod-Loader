#include "World.h"
#include "GameInfo.h"

namespace UE4 {
	UWorld** UWorld::GWorld = nullptr;

	AActor* UWorld::SpawnActor(UClass* uclass, const  FTransform* transform, const FActorSpawnParameters* params)
	{
		return reinterpret_cast<AActor * (*)(UWorld*, UClass*, const FTransform*, const FActorSpawnParameters*)>(SDK::SelectedGameProfile.SpawnActorFTrans)(this, uclass, transform, params);
	}
}