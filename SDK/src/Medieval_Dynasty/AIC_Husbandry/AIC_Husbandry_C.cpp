#include "../SDK.h"
#include "AIC_Husbandry_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame AAIC_Husbandry_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 808);
}
struct FPointerToUberGraphFrame* AAIC_Husbandry_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 808);
}
void AAIC_Husbandry_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 808, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.ExecuteUbergraph_AIC_Husbandry
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::ExecuteUbergraph_AIC_Husbandry(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.ExecuteUbergraph_AIC_Husbandry");

	struct AAIC_Husbandry_C_ExecuteUbergraph_AIC_Husbandry_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_ExecuteUbergraph_AIC_Husbandry_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.UnpauseBrain
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_Husbandry_C::UnpauseBrain() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.UnpauseBrain");

	struct AAIC_Husbandry_C_UnpauseBrain_Params {
	};
	AAIC_Husbandry_C_UnpauseBrain_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.PauseBrain
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_Husbandry_C::PauseBrain() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.PauseBrain");

	struct AAIC_Husbandry_C_PauseBrain_Params {
	};
	AAIC_Husbandry_C_PauseBrain_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_Husbandry_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.ReceiveBeginPlay");

	struct AAIC_Husbandry_C_ReceiveBeginPlay_Params {
	};
	AAIC_Husbandry_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetMeshCollisionKeepTime_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Keep_Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetMeshCollisionKeepTime_BPI(float Keep_Time) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetMeshCollisionKeepTime_BPI");

	struct AAIC_Husbandry_C_SetMeshCollisionKeepTime_BPI_Params {
		float Keep_Time;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_SetMeshCollisionKeepTime_BPI_Params params;
	params.Keep_Time = Keep_Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetMeshCollision_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Collision_Type	Type: TEnumAsByte<ECollisionEnabled>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetMeshCollision_BPI");

	struct AAIC_Husbandry_C_SetMeshCollision_BPI_Params {
		TEnumAsByte<ECollisionEnabled> Collision_Type;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_SetMeshCollision_BPI_Params params;
	params.Collision_Type = Collision_Type;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetSleepSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SleepSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetSleepSlotIndex(int32_t SleepSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetSleepSlotIndex");

	struct AAIC_Husbandry_C_SetSleepSlotIndex_Params {
		int32_t SleepSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_SetSleepSlotIndex_Params params;
	params.SleepSlotIndex = SleepSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetSleepValues
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetSleepValues() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetSleepValues");

	struct AAIC_Husbandry_C_SetSleepValues_Params {
	};
	AAIC_Husbandry_C_SetSleepValues_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SavePoseSnapshot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PoseNameToSave	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SavePoseSnapshot_BPI(struct FName PoseNameToSave) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SavePoseSnapshot_BPI");

	struct AAIC_Husbandry_C_SavePoseSnapshot_BPI_Params {
		struct FName PoseNameToSave;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_SavePoseSnapshot_BPI_Params params;
	params.PoseNameToSave = PoseNameToSave;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.Play_GetUp_Anim BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FromLeftSide	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::Play_GetUp_Anim_BPI(bool FromLeftSide) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.Play_GetUp_Anim BPI");

	struct AAIC_Husbandry_C_Play_GetUp_Anim_BPI_Params {
		bool FromLeftSide;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_Play_GetUp_Anim_BPI_Params params;
	params.FromLeftSide = FromLeftSide;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetOccupyByNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: OccupyByNPC	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetOccupyByNPC(bool OccupyByNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetOccupyByNPC");

	struct AAIC_Husbandry_C_SetOccupyByNPC_Params {
		bool OccupyByNPC;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_SetOccupyByNPC_Params params;
	params.OccupyByNPC = OccupyByNPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetBirdTypeBPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: isWaterType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetBirdTypeBPI(bool isWaterType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetBirdTypeBPI");

	struct AAIC_Husbandry_C_SetBirdTypeBPI_Params {
		bool isWaterType;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_SetBirdTypeBPI_Params params;
	params.isWaterType = isWaterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetHusbandryAnimalCapacity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Capacity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetHusbandryAnimalCapacity(float Capacity) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetHusbandryAnimalCapacity");

	struct AAIC_Husbandry_C_SetHusbandryAnimalCapacity_Params {
		float Capacity;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_SetHusbandryAnimalCapacity_Params params;
	params.Capacity = Capacity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetAnimalCustomName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetAnimalCustomName(struct FString CustomName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetAnimalCustomName");

	struct AAIC_Husbandry_C_SetAnimalCustomName_Params {
		struct FString CustomName;			//Offset: 0 | ElementSize: 16
	};
	AAIC_Husbandry_C_SetAnimalCustomName_Params params;
	params.CustomName = CustomName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.PoisonAnimal
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::PoisonAnimal(float Poison) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.PoisonAnimal");

	struct AAIC_Husbandry_C_PoisonAnimal_Params {
		float Poison;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_PoisonAnimal_Params params;
	params.Poison = Poison;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetIsInWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InWater	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetIsInWater(bool InWater, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetIsInWater");

	struct AAIC_Husbandry_C_SetIsInWater_Params {
		bool InWater;			//Offset: 0 | ElementSize: 1
		float Intensity;			//Offset: 4 | ElementSize: 4
	};
	AAIC_Husbandry_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.UpdateMountEquipment
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Unequip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemData	Type: struct FST_ItemOutfit	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::UpdateMountEquipment(bool Unequip, struct FST_ItemOutfit ItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.UpdateMountEquipment");

	struct AAIC_Husbandry_C_UpdateMountEquipment_Params {
		bool Unequip;			//Offset: 0 | ElementSize: 1
		struct FST_ItemOutfit ItemData;			//Offset: 8 | ElementSize: 240
	};
	AAIC_Husbandry_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetForSale
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ForSale	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetForSale(bool ForSale) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetForSale");

	struct AAIC_Husbandry_C_SetForSale_Params {
		bool ForSale;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_SetForSale_Params params;
	params.ForSale = ForSale;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetAnimalMovementMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementMode	Type: EAnimalMovementMode	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetAnimalMovementMode_BPI(EAnimalMovementMode MovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetAnimalMovementMode BPI");

	struct AAIC_Husbandry_C_SetAnimalMovementMode_BPI_Params {
		EAnimalMovementMode MovementMode;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.CauseBleeding
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BleedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BleedDuration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::CauseBleeding(float BleedDamage, float BleedDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.CauseBleeding");

	struct AAIC_Husbandry_C_CauseBleeding_Params {
		float BleedDamage;			//Offset: 0 | ElementSize: 4
		float BleedDuration;			//Offset: 4 | ElementSize: 4
	};
	AAIC_Husbandry_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetEngageTargetBPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Causer	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetEngageTargetBPI(class AActor* Causer) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetEngageTargetBPI");

	struct AAIC_Husbandry_C_SetEngageTargetBPI_Params {
		class AActor* Causer;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.SetFear
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Fear	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::SetFear(int32_t Fear) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.SetFear");

	struct AAIC_Husbandry_C_SetFear_Params {
		int32_t Fear;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_SetFear_Params params;
	params.Fear = Fear;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.AddItemToHouse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_Husbandry_C::AddItemToHouse() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.AddItemToHouse");

	struct AAIC_Husbandry_C_AddItemToHouse_Params {
	};
	AAIC_Husbandry_C_AddItemToHouse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetFear
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FearFactor	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetFear(int32_t* FearFactor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetFear");

	struct AAIC_Husbandry_C_GetFear_Params {
		int32_t FearFactor;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetFear_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetFleeingTimer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FleeingTimer	Type: struct FTimerHandle	Flags: Parm, OutParm, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetFleeingTimer");

	struct AAIC_Husbandry_C_GetFleeingTimer_Params {
		struct FTimerHandle FleeingTimer;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_GetFleeingTimer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetInventoryComponent_AnimalBPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InventoryComponent	Type: class UActorComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetInventoryComponent_AnimalBPI(class UActorComponent** InventoryComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetInventoryComponent_AnimalBPI");

	struct AAIC_Husbandry_C_GetInventoryComponent_AnimalBPI_Params {
		class UActorComponent* InventoryComponent;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_GetInventoryComponent_AnimalBPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetForSale
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ForSale	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetForSale(bool* ForSale) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetForSale");

	struct AAIC_Husbandry_C_GetForSale_Params {
		bool ForSale;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_GetForSale_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ForSale != nullptr)
		*ForSale = params.ForSale;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetPrice_Buy
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Price	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetPrice_Buy(int32_t* Price) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetPrice_Buy");

	struct AAIC_Husbandry_C_GetPrice_Buy_Params {
		int32_t Price;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetPrice_Buy_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Price != nullptr)
		*Price = params.Price;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetPrice_Sell
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Price	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetPrice_Sell(int32_t* Price) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetPrice_Sell");

	struct AAIC_Husbandry_C_GetPrice_Sell_Params {
		int32_t Price;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetPrice_Sell_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Price != nullptr)
		*Price = params.Price;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalWorldLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetAnimalWorldLocation(struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalWorldLocation");

	struct AAIC_Husbandry_C_GetAnimalWorldLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	AAIC_Husbandry_C_GetAnimalWorldLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Height	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetAnimalHeight(float* Height) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalHeight");

	struct AAIC_Husbandry_C_GetAnimalHeight_Params {
		float Height;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetAnimalHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Height != nullptr)
		*Height = params.Height;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalRowName BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SwitchAnimals_RowName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalRowName BPI");

	struct AAIC_Husbandry_C_GetAnimalRowName_BPI_Params {
		struct FName SwitchAnimals_RowName;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_GetAnimalRowName_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetDead
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetDead(bool* Dead) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetDead");

	struct AAIC_Husbandry_C_GetDead_Params {
		bool Dead;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_GetDead_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Dead != nullptr)
		*Dead = params.Dead;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.WarnAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EngageActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::WarnAnimal(class AActor* EngageActor, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.WarnAnimal");

	struct AAIC_Husbandry_C_WarnAnimal_Params {
		class AActor* EngageActor;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	AAIC_Husbandry_C_WarnAnimal_Params params;
	params.EngageActor = EngageActor;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalCustomName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetAnimalCustomName(struct FString* CustomName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalCustomName");

	struct AAIC_Husbandry_C_GetAnimalCustomName_Params {
		struct FString CustomName;			//Offset: 0 | ElementSize: 16
	};
	AAIC_Husbandry_C_GetAnimalCustomName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CustomName != nullptr)
		*CustomName = params.CustomName;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetOccupyByNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OccupyByNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetOccupyByNPC(bool* OccupyByNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetOccupyByNPC");

	struct AAIC_Husbandry_C_GetOccupyByNPC_Params {
		bool OccupyByNPC;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_GetOccupyByNPC_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OccupyByNPC != nullptr)
		*OccupyByNPC = params.OccupyByNPC;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetSkinningSocketLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkinningSocketLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetSkinningSocketLocation(struct FVector* SkinningSocketLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetSkinningSocketLocation");

	struct AAIC_Husbandry_C_GetSkinningSocketLocation_Params {
		struct FVector SkinningSocketLocation;			//Offset: 0 | ElementSize: 12
	};
	AAIC_Husbandry_C_GetSkinningSocketLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SkinningSocketLocation != nullptr)
		*SkinningSocketLocation = params.SkinningSocketLocation;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetAnimalType(TEnumAsByte<E_AnimalType>* AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalType");

	struct AAIC_Husbandry_C_GetAnimalType_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_GetAnimalType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AnimalType != nullptr)
		*AnimalType = params.AnimalType;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetHalfAnimalHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HalfHeight	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetHalfAnimalHeight(float* HalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetHalfAnimalHeight");

	struct AAIC_Husbandry_C_GetHalfAnimalHeight_Params {
		float HalfHeight;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetHalfAnimalHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HalfHeight != nullptr)
		*HalfHeight = params.HalfHeight;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalRadius
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Radius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetAnimalRadius(float* Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetAnimalRadius");

	struct AAIC_Husbandry_C_GetAnimalRadius_Params {
		float Radius;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetAnimalRadius_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Radius != nullptr)
		*Radius = params.Radius;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetMass
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mass	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetMass(float* Mass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetMass");

	struct AAIC_Husbandry_C_GetMass_Params {
		float Mass;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetMass_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mass != nullptr)
		*Mass = params.Mass;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.CanPushOthers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPushOthers	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::CanPushOthers(bool* CanPushOthers) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.CanPushOthers");

	struct AAIC_Husbandry_C_CanPushOthers_Params {
		bool CanPushOthers;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_CanPushOthers_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanPushOthers != nullptr)
		*CanPushOthers = params.CanPushOthers;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetMesh_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetMesh_BPI(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetMesh_BPI");

	struct AAIC_Husbandry_C_GetMesh_BPI_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_GetMesh_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetSleepSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SleepSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetSleepSlotIndex(int32_t* SleepSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetSleepSlotIndex");

	struct AAIC_Husbandry_C_GetSleepSlotIndex_Params {
		int32_t SleepSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	AAIC_Husbandry_C_GetSleepSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SleepSlotIndex != nullptr)
		*SleepSlotIndex = params.SleepSlotIndex;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.IsMoving_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsMoving	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::IsMoving_BPI(bool* IsMoving) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.IsMoving_BPI");

	struct AAIC_Husbandry_C_IsMoving_BPI_Params {
		bool IsMoving;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_IsMoving_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsMoving != nullptr)
		*IsMoving = params.IsMoving;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.IAnimal_CalculateEncumberedSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_Husbandry_C::IAnimal_CalculateEncumberedSpeed(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.IAnimal_CalculateEncumberedSpeed");

	struct AAIC_Husbandry_C_IAnimal_CalculateEncumberedSpeed_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_IAnimal_CalculateEncumberedSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.IAnimal_GetTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::IAnimal_GetTime(struct FST_Time* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.IAnimal_GetTime");

	struct AAIC_Husbandry_C_IAnimal_GetTime_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	AAIC_Husbandry_C_IAnimal_GetTime_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetOwnership_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetOwnership_BPI(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetOwnership_BPI");

	struct AAIC_Husbandry_C_GetOwnership_BPI_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	AAIC_Husbandry_C_GetOwnership_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function AIC_Husbandry.AIC_Husbandry_C.GetVoiceComponent
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Voice	Type: class UAudioComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_Husbandry_C::GetVoiceComponent(class UAudioComponent** Voice) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Husbandry.AIC_Husbandry_C.GetVoiceComponent");

	struct AAIC_Husbandry_C_GetVoiceComponent_Params {
		class UAudioComponent* Voice;			//Offset: 0 | ElementSize: 8
	};
	AAIC_Husbandry_C_GetVoiceComponent_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Voice != nullptr)
		*Voice = params.Voice;
}

#pragma endregion
}