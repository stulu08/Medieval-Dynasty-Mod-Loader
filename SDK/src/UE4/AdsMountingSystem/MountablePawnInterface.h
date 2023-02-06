#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.MountablePawnInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMountablePawnInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountablePawnInterface");
		return ptr;
	}

#pragma region Functions
	bool CanMountActor(class AActor* newRider)/* const*/;

	bool CanMountAtPosition(struct FVector riderLocation, EMountingDirection desiredMountingPosition)/* const*/;

	bool ClearSeatAtIndex(int32_t seatIndex);

	bool ClearSeatById(int32_t seatId);

	bool FindAvailableMountingPosition(EMountingDirection Position, struct FVector riderLocation, struct FSeatData* outSeatData, int32_t* outSeatIndex)/* const*/;

	int32_t GetCurrentRiderCount()/* const*/;

	class APawn* GetDriver()/* const*/;

	int32_t GetMaxRiders()/* const*/;

	class UMountablePawnComponent* GetMountablePawnComponent()/* const*/;

	class UMeshComponent* GetMountBody(int32_t seatId)/* const*/;

	EMountingDirection GetRelativeDismountDirection(class APawn* rider)/* const*/;

	EMountingDirection GetRelativeMountDirection(class APawn* rider)/* const*/;

	bool GetSeatDataAtIndex(int32_t Index, struct FSeatData* SeatData)/* const*/;

	bool GetSeatDataById(int32_t seatId, struct FSeatData* SeatData)/* const*/;

	bool HasDriver()/* const*/;

	bool HasPassangers()/* const*/;

	bool HasPassengers()/* const*/;

	bool IsDriverReady()/* const*/;

	bool IsDriverSeat(const struct FSeatData& SeatData)/* const*/;

	bool IsMountableActor()/* const*/;

	bool IsMountableByPawn(class APawn* newRider)/* const*/;

	bool IsSeatOccupiedAtIndex(int32_t seatIndex)/* const*/;

	bool IsSeatOccupiedById(int32_t seatId)/* const*/;

	bool MustHaveDriver()/* const*/;

	bool OnRiderFinishedChangingSeats(class AActor* rider, int32_t newSeatId, int32_t oldSeatId);

	bool OnRiderFinishedDismounting(class AActor* dismountedActor, int32_t seatId);

	bool OnRiderFinishedMounting(class AActor* mountedActor, int32_t seatId);

	bool SetSeatOccupiedAtIndex(int32_t seatIndex, class APawn* rider);

	bool SetSeatOccupiedById(int32_t seatId, class APawn* rider);

#pragma endregion
};
};