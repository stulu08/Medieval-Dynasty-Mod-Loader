#include "../SDK.h"
#include "BP_NPC_Bandit_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_NPC_Bandit_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 7600);
}
struct FPointerToUberGraphFrame* ABP_NPC_Bandit_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 7600);
}
void ABP_NPC_Bandit_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 7600, value);
}
// Member Getter and Setter of LastDamageInstigator
// Declaration: class AController* LastDamageInstigator
class AController* ABP_NPC_Bandit_C::M_GetLastDamageInstigator() const {
	return Read<class AController*>((byte*)this + 7608);
}
class AController** ABP_NPC_Bandit_C::M_PtrGetLastDamageInstigator() {
	return reinterpret_cast<class AController**>((byte*)this + 7608);
}
void ABP_NPC_Bandit_C::M_SetLastDamageInstigator(const class AController*& value) {
	Write((byte*)this + 7608, value);
}
// Member Getter and Setter of CanAvoidHit
// Declaration: bool CanAvoidHit
bool ABP_NPC_Bandit_C::M_GetCanAvoidHit() const {
	return Read<bool>((byte*)this + 7616);
}
bool* ABP_NPC_Bandit_C::M_PtrGetCanAvoidHit() {
	return reinterpret_cast<bool*>((byte*)this + 7616);
}
void ABP_NPC_Bandit_C::M_SetCanAvoidHit(const bool& value) {
	Write((byte*)this + 7616, value);
}
// Member Getter and Setter of AvoidHitDirection
// Declaration: TEnumAsByte<E_AnimDirection> AvoidHitDirection
TEnumAsByte<E_AnimDirection> ABP_NPC_Bandit_C::M_GetAvoidHitDirection() const {
	return Read<TEnumAsByte<E_AnimDirection>>((byte*)this + 7617);
}
TEnumAsByte<E_AnimDirection>* ABP_NPC_Bandit_C::M_PtrGetAvoidHitDirection() {
	return reinterpret_cast<TEnumAsByte<E_AnimDirection>*>((byte*)this + 7617);
}
void ABP_NPC_Bandit_C::M_SetAvoidHitDirection(const TEnumAsByte<E_AnimDirection>& value) {
	Write((byte*)this + 7617, value);
}
// Member Getter and Setter of AvoidHitMovement
// Declaration: TEnumAsByte<E_AnimMovement> AvoidHitMovement
TEnumAsByte<E_AnimMovement> ABP_NPC_Bandit_C::M_GetAvoidHitMovement() const {
	return Read<TEnumAsByte<E_AnimMovement>>((byte*)this + 7618);
}
TEnumAsByte<E_AnimMovement>* ABP_NPC_Bandit_C::M_PtrGetAvoidHitMovement() {
	return reinterpret_cast<TEnumAsByte<E_AnimMovement>*>((byte*)this + 7618);
}
void ABP_NPC_Bandit_C::M_SetAvoidHitMovement(const TEnumAsByte<E_AnimMovement>& value) {
	Write((byte*)this + 7618, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.ExecuteUbergraph_BP_NPC_Bandit
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::ExecuteUbergraph_BP_NPC_Bandit(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.ExecuteUbergraph_BP_NPC_Bandit");

	struct ABP_NPC_Bandit_C_ExecuteUbergraph_BP_NPC_Bandit_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_ExecuteUbergraph_BP_NPC_Bandit_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetCanAvoid
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAvoid	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_SetCanAvoid(bool CanAvoid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetCanAvoid");

	struct ABP_NPC_Bandit_C_AI_SetCanAvoid_Params {
		bool CanAvoid;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_SetCanAvoid_Params params;
	params.CanAvoid = CanAvoid;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetAvoidDirection&Movement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvoidDirection	Type: TEnumAsByte<E_AnimDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AvoidMovement	Type: TEnumAsByte<E_AnimMovement>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_SetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection> AvoidDirection, TEnumAsByte<E_AnimMovement> AvoidMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_SetAvoidDirection&Movement");

	struct ABP_NPC_Bandit_C_AI_SetAvoidDirection_Movement_Params {
		TEnumAsByte<E_AnimDirection> AvoidDirection;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> AvoidMovement;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_SetAvoidDirection_Movement_Params params;
	params.AvoidDirection = AvoidDirection;
	params.AvoidMovement = AvoidMovement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.UpdateDamageAndHealth
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldResetHealth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::UpdateDamageAndHealth(bool ShouldResetHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.UpdateDamageAndHealth");

	struct ABP_NPC_Bandit_C_UpdateDamageAndHealth_Params {
		bool ShouldResetHealth;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_UpdateDamageAndHealth_Params params;
	params.ShouldResetHealth = ShouldResetHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.TryIncreaseReputation
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::TryIncreaseReputation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.TryIncreaseReputation");

	struct ABP_NPC_Bandit_C_TryIncreaseReputation_Params {
	};
	ABP_NPC_Bandit_C_TryIncreaseReputation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterDeathTick
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AfterDeathTick() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterDeathTick");

	struct ABP_NPC_Bandit_C_AfterDeathTick_Params {
	};
	ABP_NPC_Bandit_C_AfterDeathTick_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetCanAvoid
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAvoid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_GetCanAvoid(bool* CanAvoid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetCanAvoid");

	struct ABP_NPC_Bandit_C_AI_GetCanAvoid_Params {
		bool CanAvoid;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_GetCanAvoid_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanAvoid != nullptr)
		*CanAvoid = params.CanAvoid;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetAvoidDirection&Movement
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvoidDirection	Type: TEnumAsByte<E_AnimDirection>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AvoidMovement	Type: TEnumAsByte<E_AnimMovement>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AI_GetAvoidDirection_Movement(TEnumAsByte<E_AnimDirection>* AvoidDirection, TEnumAsByte<E_AnimMovement>* AvoidMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AI_GetAvoidDirection&Movement");

	struct ABP_NPC_Bandit_C_AI_GetAvoidDirection_Movement_Params {
		TEnumAsByte<E_AnimDirection> AvoidDirection;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> AvoidMovement;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_AI_GetAvoidDirection_Movement_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AvoidDirection != nullptr)
		*AvoidDirection = params.AvoidDirection;
	if (AvoidMovement != nullptr)
		*AvoidMovement = params.AvoidMovement;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.CloseOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::CloseOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.CloseOptimization");

	struct ABP_NPC_Bandit_C_CloseOptimization_Params {
	};
	ABP_NPC_Bandit_C_CloseOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.NoneOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::NoneOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.NoneOptimization");

	struct ABP_NPC_Bandit_C_NoneOptimization_Params {
	};
	ABP_NPC_Bandit_C_NoneOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.DisableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::DisableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.DisableNPC");

	struct ABP_NPC_Bandit_C_DisableNPC_Params {
	};
	ABP_NPC_Bandit_C_DisableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.FarOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::FarOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.FarOptimization");

	struct ABP_NPC_Bandit_C_FarOptimization_Params {
	};
	ABP_NPC_Bandit_C_FarOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.MediumOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::MediumOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.MediumOptimization");

	struct ABP_NPC_Bandit_C_MediumOptimization_Params {
	};
	ABP_NPC_Bandit_C_MediumOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Init_NPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Init_NPC(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Init_NPC");

	struct ABP_NPC_Bandit_C_Init_NPC_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_Init_NPC_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::AfterDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.AfterDeath");

	struct ABP_NPC_Bandit_C_AfterDeath_Params {
	};
	ABP_NPC_Bandit_C_AfterDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.FindChatter
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsChatter	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ChatterCategory	Type: EChatterSoundType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChatterSubCategory	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChatterID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChatterData	Type: struct FChatterData	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::FindChatter(bool* IsChatter, EChatterSoundType* ChatterCategory, struct FName* ChatterSubCategory, struct FName* ChatterID, struct FChatterData* ChatterData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.FindChatter");

	struct ABP_NPC_Bandit_C_FindChatter_Params {
		bool IsChatter;			//Offset: 0 | ElementSize: 1
		EChatterSoundType ChatterCategory;			//Offset: 1 | ElementSize: 1
		struct FName ChatterSubCategory;			//Offset: 4 | ElementSize: 8
		struct FName ChatterID;			//Offset: 12 | ElementSize: 8
		struct FChatterData ChatterData;			//Offset: 24 | ElementSize: 168
	};
	ABP_NPC_Bandit_C_FindChatter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsChatter != nullptr)
		*IsChatter = params.IsChatter;
	if (ChatterCategory != nullptr)
		*ChatterCategory = params.ChatterCategory;
	if (ChatterSubCategory != nullptr)
		*ChatterSubCategory = params.ChatterSubCategory;
	if (ChatterID != nullptr)
		*ChatterID = params.ChatterID;
	if (ChatterData != nullptr)
		*ChatterData = params.ChatterData;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Interact_Client
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Interact_Client(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Interact_Client");

	struct ABP_NPC_Bandit_C_Interact_Client_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 8 | ElementSize: 12
		int32_t HitItem;			//Offset: 20 | ElementSize: 4
		bool Timer;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_Interact_Client_Params params;
	params.BaseCharacter = BaseCharacter;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitItem	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.Interact");

	struct ABP_NPC_Bandit_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 8 | ElementSize: 12
		int32_t HitItem;			//Offset: 20 | ElementSize: 4
		bool Timer;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.HitLocation = HitLocation;
	params.HitItem = HitItem;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnSeasonChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnSeasonChanged");

	struct ABP_NPC_Bandit_C_OnSeasonChanged_Params {
	};
	ABP_NPC_Bandit_C_OnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnDayChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnDayChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnDayChanged");

	struct ABP_NPC_Bandit_C_OnDayChanged_Params {
	};
	ABP_NPC_Bandit_C_OnDayChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnDayChangedByTimeUpdate
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnDayChangedByTimeUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnDayChangedByTimeUpdate");

	struct ABP_NPC_Bandit_C_OnDayChangedByTimeUpdate_Params {
	};
	ABP_NPC_Bandit_C_OnDayChangedByTimeUpdate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetEquippedItemNames
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: EquippedItemNames	Type: TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::GetEquippedItemNames(TMap<TEnumAsByte<E_EquipmentCategories>, struct FName>* EquippedItemNames)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetEquippedItemNames");

	struct ABP_NPC_Bandit_C_GetEquippedItemNames_Params {
		TMap<TEnumAsByte<E_EquipmentCategories>, struct FName> EquippedItemNames;			//Offset: 0 | ElementSize: 80
	};
	ABP_NPC_Bandit_C_GetEquippedItemNames_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EquippedItemNames != nullptr)
		*EquippedItemNames = params.EquippedItemNames;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnAnyDamageReceived
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnAnyDamageReceived(float ReceivedDamage, class AController* EventInstigator, class AActor* DamageCauser, class UDamageType* DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnAnyDamageReceived");

	struct ABP_NPC_Bandit_C_OnAnyDamageReceived_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
		class AController* EventInstigator;			//Offset: 8 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 16 | ElementSize: 8
		class UDamageType* DamageType;			//Offset: 24 | ElementSize: 8
	};
	ABP_NPC_Bandit_C_OnAnyDamageReceived_Params params;
	params.ReceivedDamage = ReceivedDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnBlockBroken
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnBlockBroken(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnBlockBroken");

	struct ABP_NPC_Bandit_C_OnBlockBroken_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_OnBlockBroken_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnHitBlocked
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnHitBlocked(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnHitBlocked");

	struct ABP_NPC_Bandit_C_OnHitBlocked_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_OnHitBlocked_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnHitNotBlocked
// Flags: Protected, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReceivedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnHitNotBlocked(float ReceivedDamage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnHitNotBlocked");

	struct ABP_NPC_Bandit_C_OnHitNotBlocked_Params {
		float ReceivedDamage;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_OnHitNotBlocked_Params params;
	params.ReceivedDamage = ReceivedDamage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnKilled
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::OnKilled() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.OnKilled");

	struct ABP_NPC_Bandit_C_OnKilled_Params {
	};
	ABP_NPC_Bandit_C_OnKilled_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetInteractAction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractActionText	Type: struct FText	Flags: Parm, OutParm
// Name: InteractSecondActionText	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::GetInteractAction(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractActionText, struct FText* InteractSecondActionText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetInteractAction");

	struct ABP_NPC_Bandit_C_GetInteractAction_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FText InteractActionText;			//Offset: 8 | ElementSize: 24
		struct FText InteractSecondActionText;			//Offset: 32 | ElementSize: 24
	};
	ABP_NPC_Bandit_C_GetInteractAction_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.IsInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowPressUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowTimerUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowOnlyName	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.IsInteractable");

	struct ABP_NPC_Bandit_C_IsInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
		bool ShowPressUI;			//Offset: 10 | ElementSize: 1
		bool ShowTimerUI;			//Offset: 11 | ElementSize: 1
		bool ShowOnlyName;			//Offset: 12 | ElementSize: 1
		float Time;			//Offset: 16 | ElementSize: 4
		float Distance;			//Offset: 20 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetReaction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: OtherObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Reaction	Type: TEnumAsByte<E_AIPerceptionReaction>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReactionPriority	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetReaction");

	struct ABP_NPC_Bandit_C_GetReaction_Params {
		class UObject* OtherObject;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_AIPerceptionReaction> Reaction;			//Offset: 8 | ElementSize: 1
		int32_t ReactionPriority;			//Offset: 12 | ElementSize: 4
	};
	ABP_NPC_Bandit_C_GetReaction_Params params;
	params.OtherObject = OtherObject;

	UObject::ProcessEvent(fn, &params);
	if (Reaction != nullptr)
		*Reaction = params.Reaction;
	if (ReactionPriority != nullptr)
		*ReactionPriority = params.ReactionPriority;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetActorType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: ActorType	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::GetActorType(struct FName* ActorType)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.GetActorType");

	struct ABP_NPC_Bandit_C_GetActorType_Params {
		struct FName ActorType;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Bandit_C_GetActorType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorType != nullptr)
		*ActorType = params.ActorType;
}

/////////////////////////////////////////////
// Function BP_NPC_Bandit.BP_NPC_Bandit_C.CanDamage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: EventInstigator	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CanDamage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Bandit_C::CanDamage(struct FHitResult Hit, class AController* EventInstigator, class AActor* DamageCauser, bool* CanDamage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Bandit.BP_NPC_Bandit_C.CanDamage");

	struct ABP_NPC_Bandit_C_CanDamage_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		class AController* EventInstigator;			//Offset: 136 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 144 | ElementSize: 8
		bool CanDamage;			//Offset: 152 | ElementSize: 1
	};
	ABP_NPC_Bandit_C_CanDamage_Params params;
	params.Hit = Hit;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
	if (CanDamage != nullptr)
		*CanDamage = params.CanDamage;
}

#pragma endregion
}