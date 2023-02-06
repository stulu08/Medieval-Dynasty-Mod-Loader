#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.MountRiderInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMountRiderInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountRiderInterface");
		return ptr;
	}

#pragma region Functions
	TArray<class USkeletalMeshComponent*> GetAllRiderSkeletalMeshes()/* const*/;

	class UMountRiderComponent* GetMountRiderComponent()/* const*/;

	class UMeshComponent* GetRiderMesh()/* const*/;

	int32_t GetSeatId()/* const*/;

	bool IsDriver()/* const*/;

	bool IsSeatedOnMount()/* const*/;

	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);

	bool OnChangeToNewSeatCompleted();

	bool OnDismountingPawnFinished(class AActor* oldPawnMount);

	bool OnMountingPawnFinished(class AActor* newMountActor);

	bool OnMoveToMountingLocationCompleted();

	bool PlayDismountingAnimation(EMountingDirection Position);

	bool PlayMountingAnimation(EMountingDirection Position);

	bool PlayMoveToSeatAnimation(int32_t currentSeatId, int32_t oldSeatId);

	bool SetRiderCollisionEnabled(bool shouldEnable);

	bool StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse);

	bool StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse);

	bool StartPawnMountingToSeat(class AActor* newMountActor, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse);

#pragma endregion
};
};