#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.RiderControllerInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class URiderControllerInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.RiderControllerInterface");
		return ptr;
	}

#pragma region Functions
	bool BeginChangingSeatById(int32_t seatId, struct FMountActionResponse* mountingResponse);

	bool BeginChangingSeatToIndex(int32_t seatIndex, struct FMountActionResponse* mountingResponse);

	bool BeginDismountingActor(struct FMountActionResponse* Response);

	bool BeginMountingActor(class AActor* newMount, class AActor* linkedActor, struct FMountActionResponse* mountingResponse);

	bool BeginMountingActorToSeat(class AActor* newMount, class AActor* linkedActor, int32_t seatId, struct FMountActionResponse* mountingResponse);

	class URiderControllerComponent* GetRiderControllerComponent()/* const*/;

	bool OnChangeSeatActionFailed(struct FMountActionResponse Response);

	bool OnDismountActionFailed(class AActor* currentMount, struct FMountActionResponse Response);

	bool OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, struct FMountActionResponse Response);

	bool OnOtherRiderChangedSeats(class AActor* otherRider, int32_t newSeatId, int32_t oldSeatId);

	bool OnRiderAdded(class AActor* newRider, int32_t seatId);

	bool OnRiderRemoved(class AActor* removedRider, int32_t seatId);

	bool PNMS_PossessPawn(class APawn* pawnToPossess);

	bool PossessCharacter(class APawn* characterToPossess);

#pragma endregion
};
};