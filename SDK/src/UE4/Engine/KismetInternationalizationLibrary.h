#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetInternationalizationLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetInternationalizationLibrary");
		return ptr;
	}

#pragma region Functions
	static void ClearCurrentAssetGroupCulture(struct FName AssetGroup, bool SaveToConfig);

	static struct FString GetCultureDisplayName(struct FString Culture, bool Localized);

	static struct FString GetCurrentAssetGroupCulture(struct FName AssetGroup);

	static struct FString GetCurrentCulture();

	static struct FString GetCurrentLanguage();

	static struct FString GetCurrentLocale();

	static TArray<struct FString> GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional);

	static struct FString GetNativeCulture(ELocalizedTextSourceCategory TextCategory);

	static struct FString GetSuitableCulture(const TArray<struct FString>& AvailableCultures, struct FString CultureToMatch, struct FString FallbackCulture);

	static bool SetCurrentAssetGroupCulture(struct FName AssetGroup, struct FString Culture, bool SaveToConfig);

	static bool SetCurrentCulture(struct FString Culture, bool SaveToConfig);

	static bool SetCurrentLanguage(struct FString Culture, bool SaveToConfig);

	static bool SetCurrentLanguageAndLocale(struct FString Culture, bool SaveToConfig);

	static bool SetCurrentLocale(struct FString Culture, bool SaveToConfig);

#pragma endregion
};
};