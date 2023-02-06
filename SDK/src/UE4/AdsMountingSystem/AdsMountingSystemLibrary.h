#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.AdsMountingSystemLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UAdsMountingSystemLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.AdsMountingSystemLibrary");
		return ptr;
	}

#pragma region Functions
	static float GetAngleFromForwardBetweenActors(class AActor* mainActor, class AActor* targetActor);

	static float GetAngleFromRightBetweenActors(class AActor* mainActor, class AActor* targetActor);

	static float GetAngleFromUpBetweenActors(class AActor* mainActor, class AActor* targetActor);

	EMountingDirection GetRelativeMountingPosition(class AActor* mountActor, class AActor* riderActor, bool ignoreForwared, bool ignoreRight, bool ignoreUp);

	static float PNMS_BoundAngleTo180(float inAngle);

	static float PNMS_BoundAngleTo360(float inAngle);

	static bool SeatManager_ClearOccupierAtIndex(struct FSeatManager* inSeatManager, int32_t seatIndex);

	static bool SeatManager_ClearOccupierById(struct FSeatManager* inSeatManager, int32_t seatId);

	static bool SeatManager_FindAvailableMountingPosition(const struct FSeatManager& inSeatManager, EMountingDirection Position, struct FVector riderLocation, const struct FTransform& MountPosition, int32_t* outSeatDataIndex);

	static bool SeatManager_GetDriverSeat(const struct FSeatManager& inSeatManager, struct FSeatData* outDriverSeatData);

	static int32_t SeatManager_GetNumRiders(const struct FSeatManager& inSeatManager);

	static int32_t SeatManager_GetNumSeats(const struct FSeatManager& inSeatManager);

	static bool SeatManager_GetSeatDataAtIndex(const struct FSeatManager& inSeatManager, int32_t seatDataIndex, struct FSeatData* SeatData);

	static bool SeatManager_GetSeatDataById(const struct FSeatManager& inSeatManager, int32_t seatId, struct FSeatData* SeatData);

	static bool SeatManager_HasAvailableSeats(const struct FSeatManager& inSeatManager);

	static bool SeatManager_IsDriverSeatId(const struct FSeatManager& inSeatManager, int32_t seatId);

	static bool SeatManager_IsSeatOccupiedAtIndex(const struct FSeatManager& inSeatManager, int32_t seatIndex);

	static bool SeatManager_IsSeatOccupiedById(const struct FSeatManager& inSeatManager, int32_t seatId);

	static bool SeatManager_SetSeatOccupiedAtIndex(struct FSeatManager* inSeatManager, int32_t seatIndex, class APawn* occupyingPawn);

	static bool SeatManager_SetSeatOccupiedById(struct FSeatManager* inSeatManager, int32_t seatId, class APawn* occupyingPawn);

	static void TranslateVectorRelative(const struct FTransform& Transform, struct FVector offsetValue, struct FVector* outVector);

#pragma endregion
};
};