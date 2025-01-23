#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.BPCppChatter
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPCppChatter : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BPCppChatter");
		return ptr;
	}

#pragma region Functions
	static TArray<struct FChatter> FindChattersByRestrictions(bool* found, class UDataTable* Table, TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions);

	static struct FChatterData FindSoundByIDFromCategory(bool* found, class UDataTable* Table, struct FName ID, EChatterSoundType SoundCategory);

	static struct FChatterData FindSoundByIDFromCategoryAndSubCategory(bool* found, class UDataTable* Table, struct FName ID, EChatterSoundType SoundCategory, struct FName SubCategory);

	static TArray<struct FName> FindSoundIDsByRestrictions(bool* found, class UDataTable* Table, TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions);

	static TArray<struct FChatterSubCatData> GetChatterSubCategoryData(bool* found, class UDataTable* Table, struct FName ID, EChatterSoundType SoundCategory, TArray<struct FName> SubCategories);

	static struct FChatterData GetRandomSoundByRestrictions(bool* found, EChatterSoundType* ChatterCategory, struct FName* ChatterSubCategory, struct FName* ChatterID, class UDataTable* Table, TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions, TArray<struct FName> UsedChatterSubCategories, TArray<struct FName> UsedChatterIDs);

	static struct FChatterData GetRandomSoundFromSubCategory(bool* found, class UDataTable* Table, EChatterSoundType SoundCategory, struct FName SubCategory);

#pragma endregion
};
};