#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class AdsMountingSystem.RiderControllerComponent
// Super: Class Engine.ActorComponent
// Size: 264
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class URiderControllerComponent : public UActorComponent {
public:
#pragma region Members
	//class APawn*	ownedPawn;		//Offset: 176	Size: 8	Flags: Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class APawn* M_GetownedPawn() const;
	class APawn** M_PtrGetownedPawn();
	void M_SetownedPawn(const class APawn*& value);

	//class AActor*	mountActor;		//Offset: 184	Size: 8	Flags: Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AActor* M_GetmountActor() const;
	class AActor** M_PtrGetmountActor();
	void M_SetmountActor(const class AActor*& value);

	//class AActor*	LinkedMountActor;		//Offset: 192	Size: 8	Flags: Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AActor* M_GetLinkedMountActor() const;
	class AActor** M_PtrGetLinkedMountActor();
	void M_SetLinkedMountActor(const class AActor*& value);

	//TWeakObjectPtr<class AController>	ownedController;		//Offset: 200	Size: 8	Flags: Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TWeakObjectPtr<class AController> M_GetownedController() const;
	TWeakObjectPtr<class AController>* M_PtrGetownedController();
	void M_SetownedController(const TWeakObjectPtr<class AController>& value);

	//TAssetPtr<class FMountRidersChanged__DelegateSignature>	OnRiderAdded;		//Offset: 208	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
	TAssetPtr<class FMountRidersChanged__DelegateSignature> M_GetOnRiderAdded() const;
	TAssetPtr<class FMountRidersChanged__DelegateSignature>* M_PtrGetOnRiderAdded();
	void M_SetOnRiderAdded(const TAssetPtr<class FMountRidersChanged__DelegateSignature>& value);

	//TAssetPtr<class FMountRidersChanged__DelegateSignature>	OnRiderRemoved;		//Offset: 224	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
	TAssetPtr<class FMountRidersChanged__DelegateSignature> M_GetOnRiderRemoved() const;
	TAssetPtr<class FMountRidersChanged__DelegateSignature>* M_PtrGetOnRiderRemoved();
	void M_SetOnRiderRemoved(const TAssetPtr<class FMountRidersChanged__DelegateSignature>& value);

	//TAssetPtr<class FRidersChangedSeats__DelegateSignature>	OnOtherRiderChangedSeat;		//Offset: 240	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
	TAssetPtr<class FRidersChangedSeats__DelegateSignature> M_GetOnOtherRiderChangedSeat() const;
	TAssetPtr<class FRidersChangedSeats__DelegateSignature>* M_PtrGetOnOtherRiderChangedSeat();
	void M_SetOnOtherRiderChangedSeat(const TAssetPtr<class FRidersChangedSeats__DelegateSignature>& value);

	//bool	EnableActionRpcs;		//Offset: 256	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetEnableActionRpcs() const;
	bool* M_PtrGetEnableActionRpcs();
	void M_SetEnableActionRpcs(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AdsMountingSystem.RiderControllerComponent");
		return ptr;
	}

#pragma region Functions
	void ClearMount();

	class AActor* GetLinkedMountActor()/* const*/;

	class AActor* GetMountActor()/* const*/;

	class APawn* GetMountPawn()/* const*/;

	class APawn* GetOwnedPawn()/* const*/;

	class AController* GetOwningController()/* const*/;

	bool IsMounted()/* const*/;

	void OtherRiderChangedSeat(class AActor* otherRider, int32_t newSeatId, int32_t oldSeatId);

	bool PerformChangeSeatById(int32_t seatId, struct FMountActionResponse* Response);

	bool PerformChangeSeatToIndex(int32_t seatIndex, struct FMountActionResponse* Response);

	bool PerformDismountActor(class AActor* dismountingActor, struct FMountActionResponse* Response);

	bool PerformDismountPawn(class APawn* dismountingActor, struct FMountActionResponse* Response);

	bool PerformMountActor(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response);

	bool PerformMountActorToSeat(class AActor* newMountActor, class AActor* newLinkedActor, int32_t seatId, struct FMountActionResponse* Response);

	bool PerformMountPawn(class APawn* newMountActor, struct FMountActionResponse* Response);

	bool PossessPawn(class APawn* pawnToPossess);

	void Reset();

	void RiderAdded(class AActor* newRider, int32_t seatId);

	void RiderRemoved(class AActor* removedRider, int32_t seatId);

	void SERVER_PerformChangeSeatById(int32_t seatId, struct FMountActionResponse& Response);

	void SERVER_PerformChangeSeatToIndex(int32_t seatIndex, struct FMountActionResponse& Response);

	void SERVER_PerformDismountActor(class AActor* dismountActor, struct FMountActionResponse& Response);

	void SERVER_PerformMountActor(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse& Response);

	void SERVER_PerformMountActorToSeat(class AActor* newMountActor, class AActor* newLinkedActor, int32_t seatId, struct FMountActionResponse& Response);

	void SERVER_PossessPawn(class APawn* pawnToPossess);

	void SetControlledPawn(class APawn* newControlledPawn);

	class AActor* SetLinkedMountActor(class AActor* newLinkedMountActor);

	void SetMountActor(class AActor* newMountActor);

	void SetMountPawn(class APawn* newMountActor);

	void SetOwnedPawn(class APawn* newOwnedPawn);

#pragma endregion
};
};