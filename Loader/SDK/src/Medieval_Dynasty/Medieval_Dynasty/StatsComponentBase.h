#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.StatsComponentBase
// Super: Class Engine.ActorComponent
// Size: 944
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UStatsComponentBase : public UActorComponent {
public:
#pragma region Members
	//struct FST_Skills	CraftingSkill;		//Offset: 176	Size: 128	Flags: Edit, BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_Skills M_GetCraftingSkill() const;
	struct FST_Skills* M_PtrGetCraftingSkill();
	void M_SetCraftingSkill(const struct FST_Skills& value);

	//struct FST_Skills	DiplomacySkill;		//Offset: 304	Size: 128	Flags: Edit, BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_Skills M_GetDiplomacySkill() const;
	struct FST_Skills* M_PtrGetDiplomacySkill();
	void M_SetDiplomacySkill(const struct FST_Skills& value);

	//struct FST_Skills	ExtractionSkill;		//Offset: 432	Size: 128	Flags: Edit, BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_Skills M_GetExtractionSkill() const;
	struct FST_Skills* M_PtrGetExtractionSkill();
	void M_SetExtractionSkill(const struct FST_Skills& value);

	//struct FST_Skills	FarmingSkill;		//Offset: 560	Size: 128	Flags: Edit, BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_Skills M_GetFarmingSkill() const;
	struct FST_Skills* M_PtrGetFarmingSkill();
	void M_SetFarmingSkill(const struct FST_Skills& value);

	//struct FST_Skills	HuntingSkill;		//Offset: 688	Size: 128	Flags: Edit, BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_Skills M_GetHuntingSkill() const;
	struct FST_Skills* M_PtrGetHuntingSkill();
	void M_SetHuntingSkill(const struct FST_Skills& value);

	//struct FST_Skills	SurvivalSkill;		//Offset: 816	Size: 128	Flags: Edit, BlueprintVisible, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_Skills M_GetSurvivalSkill() const;
	struct FST_Skills* M_PtrGetSurvivalSkill();
	void M_SetSurvivalSkill(const struct FST_Skills& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.StatsComponentBase");
		return ptr;
	}

#pragma region Functions
	void OnRep_CraftingSkill();

	void OnRep_DiplomacySkill();

	void OnRep_ExtractionSkill();

	void OnRep_FarmingSkill();

	void OnRep_HuntingSkill();

	void OnRep_SurvivalSkill();

	void SetSkillActualLevel(ESkills SkillToUpdate, unsigned char NewLevel);

	void SetSkillActualProgress(ESkills SkillToUpdate, float NewProgress);

	void SetSkillSkillPointsToSpend(ESkills SkillToUpdate, unsigned char NewSkillPoints);

#pragma endregion
};
};