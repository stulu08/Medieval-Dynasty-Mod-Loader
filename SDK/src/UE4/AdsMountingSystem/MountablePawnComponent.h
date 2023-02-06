#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.MountablePawnComponent
// Super: Class Engine.ActorComponent
// Size: 216
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UMountablePawnComponent : public UActorComponent {
public:
#pragma region Members
	//bool	bIsMountable;		//Offset: 176	Size: 1	Flags: Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbIsMountable() const;
	bool* M_PtrGetbIsMountable();
	void M_SetbIsMountable(const bool& value);

	//struct FSeatManager	SeatManager;		//Offset: 184	Size: 32	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected
	struct FSeatManager M_GetSeatManager() const;
	struct FSeatManager* M_PtrGetSeatManager();
	void M_SetSeatManager(const struct FSeatManager& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.MountablePawnComponent");
		return ptr;
	}

#pragma region Functions
	bool CanMount()/* const*/;

	bool ClearSeatAtIndex(int32_t seatIndex);

	bool ClearSeatById(int32_t seatId);

	bool ClearSeatByIndex(int32_t seatIndex);

	bool FindAvailableMountingPosition(EMountingDirection Position, struct FVector riderLocation, struct FSeatData* outSeatData, int32_t* outSeatIndex)/* const*/;

	EMountingDirection GetDefaultPositionForSeatAtIndex(int32_t seatIndex)/* const*/;

	EMountingDirection GetDefaultPositionForSeatById(int32_t seatId)/* const*/;

	class APawn* GetDriver()/* const*/;

	int32_t GetNumRiders()/* const*/;

	int32_t GetNumSeats()/* const*/;

	class APawn* GetRider(int32_t seatId)/* const*/;

	class APawn* GetRiderAtIndex(int32_t seatIndex)/* const*/;

	class APawn* GetRiderBySeatId(int32_t seatId)/* const*/;

	bool GetSeatDataAtIndex(int32_t Index, struct FSeatData* SeatData)/* const*/;

	bool GetSeatDataById(int32_t seatId, struct FSeatData* SeatData)/* const*/;

	bool HasDriver()/* const*/;

	bool IsDriverSeat(const struct FSeatData& SeatData)/* const*/;

	bool IsDriverSeatId(int32_t seatId)/* const*/;

	bool IsMountable()/* const*/;

	bool IsMounted()/* const*/;

	bool IsPossessableMount()/* const*/;

	bool IsSeatOccupiedAtIndex(int32_t seatIndex)/* const*/;

	bool IsSeatOccupiedById(int32_t seatId)/* const*/;

	bool MustHaveDriver()/* const*/;

	void RiderFinishedChangingSeats(class AActor* rider, int32_t newSeatId, int32_t oldSeatId);

	void RiderFinishedDismounting(class AActor* dismountedActor, int32_t seatId);

	void RiderFinishedMounting(class AActor* Actor, int32_t seatId);

	bool SetIsMountable(bool IsMountable);

	bool SetRider(class APawn* newRider, int32_t seatId);

	bool SetRiderAtSeatIndex(class APawn* newRider, int32_t seatIndex);

	bool SetRiderBySeatId(class APawn* newRider, int32_t seatId);

	bool SetSeatOccupied(int32_t seatIndex, class APawn* rider);

	bool SetSeatOccupiedAtIndex(int32_t seatIndex, class APawn* rider);

	bool SetSeatOccupiedById(int32_t seatId, class APawn* rider);

#pragma endregion
};
};