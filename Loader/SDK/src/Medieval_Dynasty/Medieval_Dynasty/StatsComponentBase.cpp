#include "../SDK.h"
#include "StatsComponentBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CraftingSkill
// Declaration: struct FST_Skills CraftingSkill
struct FST_Skills UStatsComponentBase::M_GetCraftingSkill() const {
	return Read<struct FST_Skills>((byte*)this + 176);
}
struct FST_Skills* UStatsComponentBase::M_PtrGetCraftingSkill() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 176);
}
void UStatsComponentBase::M_SetCraftingSkill(const struct FST_Skills& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of DiplomacySkill
// Declaration: struct FST_Skills DiplomacySkill
struct FST_Skills UStatsComponentBase::M_GetDiplomacySkill() const {
	return Read<struct FST_Skills>((byte*)this + 304);
}
struct FST_Skills* UStatsComponentBase::M_PtrGetDiplomacySkill() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 304);
}
void UStatsComponentBase::M_SetDiplomacySkill(const struct FST_Skills& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of ExtractionSkill
// Declaration: struct FST_Skills ExtractionSkill
struct FST_Skills UStatsComponentBase::M_GetExtractionSkill() const {
	return Read<struct FST_Skills>((byte*)this + 432);
}
struct FST_Skills* UStatsComponentBase::M_PtrGetExtractionSkill() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 432);
}
void UStatsComponentBase::M_SetExtractionSkill(const struct FST_Skills& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of FarmingSkill
// Declaration: struct FST_Skills FarmingSkill
struct FST_Skills UStatsComponentBase::M_GetFarmingSkill() const {
	return Read<struct FST_Skills>((byte*)this + 560);
}
struct FST_Skills* UStatsComponentBase::M_PtrGetFarmingSkill() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 560);
}
void UStatsComponentBase::M_SetFarmingSkill(const struct FST_Skills& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of HuntingSkill
// Declaration: struct FST_Skills HuntingSkill
struct FST_Skills UStatsComponentBase::M_GetHuntingSkill() const {
	return Read<struct FST_Skills>((byte*)this + 688);
}
struct FST_Skills* UStatsComponentBase::M_PtrGetHuntingSkill() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 688);
}
void UStatsComponentBase::M_SetHuntingSkill(const struct FST_Skills& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of SurvivalSkill
// Declaration: struct FST_Skills SurvivalSkill
struct FST_Skills UStatsComponentBase::M_GetSurvivalSkill() const {
	return Read<struct FST_Skills>((byte*)this + 816);
}
struct FST_Skills* UStatsComponentBase::M_PtrGetSurvivalSkill() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 816);
}
void UStatsComponentBase::M_SetSurvivalSkill(const struct FST_Skills& value) {
	Write((byte*)this + 816, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.OnRep_CraftingSkill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UStatsComponentBase::OnRep_CraftingSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.OnRep_CraftingSkill");

	struct UStatsComponentBase_OnRep_CraftingSkill_Params {
	};
	UStatsComponentBase_OnRep_CraftingSkill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.OnRep_DiplomacySkill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UStatsComponentBase::OnRep_DiplomacySkill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.OnRep_DiplomacySkill");

	struct UStatsComponentBase_OnRep_DiplomacySkill_Params {
	};
	UStatsComponentBase_OnRep_DiplomacySkill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.OnRep_ExtractionSkill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UStatsComponentBase::OnRep_ExtractionSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.OnRep_ExtractionSkill");

	struct UStatsComponentBase_OnRep_ExtractionSkill_Params {
	};
	UStatsComponentBase_OnRep_ExtractionSkill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.OnRep_FarmingSkill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UStatsComponentBase::OnRep_FarmingSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.OnRep_FarmingSkill");

	struct UStatsComponentBase_OnRep_FarmingSkill_Params {
	};
	UStatsComponentBase_OnRep_FarmingSkill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.OnRep_HuntingSkill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UStatsComponentBase::OnRep_HuntingSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.OnRep_HuntingSkill");

	struct UStatsComponentBase_OnRep_HuntingSkill_Params {
	};
	UStatsComponentBase_OnRep_HuntingSkill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.OnRep_SurvivalSkill
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UStatsComponentBase::OnRep_SurvivalSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.OnRep_SurvivalSkill");

	struct UStatsComponentBase_OnRep_SurvivalSkill_Params {
	};
	UStatsComponentBase_OnRep_SurvivalSkill_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.SetSkillActualLevel
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: SkillToUpdate	Type: ESkills	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewLevel	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStatsComponentBase::SetSkillActualLevel(ESkills SkillToUpdate, unsigned char NewLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.SetSkillActualLevel");

	struct UStatsComponentBase_SetSkillActualLevel_Params {
		ESkills SkillToUpdate;			//Offset: 0 | ElementSize: 1
		unsigned char NewLevel;			//Offset: 1 | ElementSize: 1
	};
	UStatsComponentBase_SetSkillActualLevel_Params params;
	params.SkillToUpdate = SkillToUpdate;
	params.NewLevel = NewLevel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.SetSkillActualProgress
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: SkillToUpdate	Type: ESkills	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewProgress	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStatsComponentBase::SetSkillActualProgress(ESkills SkillToUpdate, float NewProgress) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.SetSkillActualProgress");

	struct UStatsComponentBase_SetSkillActualProgress_Params {
		ESkills SkillToUpdate;			//Offset: 0 | ElementSize: 1
		float NewProgress;			//Offset: 4 | ElementSize: 4
	};
	UStatsComponentBase_SetSkillActualProgress_Params params;
	params.SkillToUpdate = SkillToUpdate;
	params.NewProgress = NewProgress;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.StatsComponentBase.SetSkillSkillPointsToSpend
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: SkillToUpdate	Type: ESkills	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewSkillPoints	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStatsComponentBase::SetSkillSkillPointsToSpend(ESkills SkillToUpdate, unsigned char NewSkillPoints) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.StatsComponentBase.SetSkillSkillPointsToSpend");

	struct UStatsComponentBase_SetSkillSkillPointsToSpend_Params {
		ESkills SkillToUpdate;			//Offset: 0 | ElementSize: 1
		unsigned char NewSkillPoints;			//Offset: 1 | ElementSize: 1
	};
	UStatsComponentBase_SetSkillSkillPointsToSpend_Params params;
	params.SkillToUpdate = SkillToUpdate;
	params.NewSkillPoints = NewSkillPoints;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}