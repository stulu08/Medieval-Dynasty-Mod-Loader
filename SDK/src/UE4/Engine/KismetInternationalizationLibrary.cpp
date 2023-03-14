#include "../SDK.h"
#include "KismetInternationalizationLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.ClearCurrentAssetGroupCulture
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: AssetGroup	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SaveToConfig	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(struct FName AssetGroup, bool SaveToConfig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.ClearCurrentAssetGroupCulture");

	struct UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Params {
		struct FName AssetGroup;			//Offset: 0 | ElementSize: 8
		bool SaveToConfig;			//Offset: 8 | ElementSize: 1
	};
	UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Params params;
	params.AssetGroup = AssetGroup;
	params.SaveToConfig = SaveToConfig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetCultureDisplayName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Culture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Localized	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetCultureDisplayName(struct FString Culture, bool Localized) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetCultureDisplayName");

	struct UKismetInternationalizationLibrary_GetCultureDisplayName_Params {
		struct FString Culture;			//Offset: 0 | ElementSize: 16
		bool Localized;			//Offset: 16 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetCultureDisplayName_Params params;
	params.Culture = Culture;
	params.Localized = Localized;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetCurrentAssetGroupCulture
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AssetGroup	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(struct FName AssetGroup) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetCurrentAssetGroupCulture");

	struct UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Params {
		struct FName AssetGroup;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Params params;
	params.AssetGroup = AssetGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetCurrentCulture
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetCurrentCulture() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetCurrentCulture");

	struct UKismetInternationalizationLibrary_GetCurrentCulture_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetCurrentCulture_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetCurrentLanguage
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetCurrentLanguage() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetCurrentLanguage");

	struct UKismetInternationalizationLibrary_GetCurrentLanguage_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetCurrentLanguage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetCurrentLocale
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetCurrentLocale() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetCurrentLocale");

	struct UKismetInternationalizationLibrary_GetCurrentLocale_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetCurrentLocale_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetLocalizedCultures
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: IncludeGame	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IncludeEngine	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IncludeEditor	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IncludeAdditional	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UKismetInternationalizationLibrary::GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetLocalizedCultures");

	struct UKismetInternationalizationLibrary_GetLocalizedCultures_Params {
		bool IncludeGame;			//Offset: 0 | ElementSize: 1
		bool IncludeEngine;			//Offset: 1 | ElementSize: 1
		bool IncludeEditor;			//Offset: 2 | ElementSize: 1
		bool IncludeAdditional;			//Offset: 3 | ElementSize: 1
		TArray<struct FString> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetLocalizedCultures_Params params;
	params.IncludeGame = IncludeGame;
	params.IncludeEngine = IncludeEngine;
	params.IncludeEditor = IncludeEditor;
	params.IncludeAdditional = IncludeAdditional;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetNativeCulture
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: TextCategory	Type: ELocalizedTextSourceCategory	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetNativeCulture(ELocalizedTextSourceCategory TextCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetNativeCulture");

	struct UKismetInternationalizationLibrary_GetNativeCulture_Params {
		ELocalizedTextSourceCategory TextCategory;			//Offset: 0 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetNativeCulture_Params params;
	params.TextCategory = TextCategory;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.GetSuitableCulture
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: AvailableCultures	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: CultureToMatch	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FallbackCulture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UKismetInternationalizationLibrary::GetSuitableCulture(const TArray<struct FString>& AvailableCultures, struct FString CultureToMatch, struct FString FallbackCulture) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.GetSuitableCulture");

	struct UKismetInternationalizationLibrary_GetSuitableCulture_Params {
		TArray<struct FString> AvailableCultures;			//Offset: 0 | ElementSize: 16
		struct FString CultureToMatch;			//Offset: 16 | ElementSize: 16
		struct FString FallbackCulture;			//Offset: 32 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 48 | ElementSize: 16
	};
	UKismetInternationalizationLibrary_GetSuitableCulture_Params params;
	params.AvailableCultures = AvailableCultures;
	params.CultureToMatch = CultureToMatch;
	params.FallbackCulture = FallbackCulture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.SetCurrentAssetGroupCulture
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: AssetGroup	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Culture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SaveToConfig	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(struct FName AssetGroup, struct FString Culture, bool SaveToConfig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.SetCurrentAssetGroupCulture");

	struct UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Params {
		struct FName AssetGroup;			//Offset: 0 | ElementSize: 8
		struct FString Culture;			//Offset: 8 | ElementSize: 16
		bool SaveToConfig;			//Offset: 24 | ElementSize: 1
		bool ReturnValue;			//Offset: 25 | ElementSize: 1
	};
	UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Params params;
	params.AssetGroup = AssetGroup;
	params.Culture = Culture;
	params.SaveToConfig = SaveToConfig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.SetCurrentCulture
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Culture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SaveToConfig	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInternationalizationLibrary::SetCurrentCulture(struct FString Culture, bool SaveToConfig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.SetCurrentCulture");

	struct UKismetInternationalizationLibrary_SetCurrentCulture_Params {
		struct FString Culture;			//Offset: 0 | ElementSize: 16
		bool SaveToConfig;			//Offset: 16 | ElementSize: 1
		bool ReturnValue;			//Offset: 17 | ElementSize: 1
	};
	UKismetInternationalizationLibrary_SetCurrentCulture_Params params;
	params.Culture = Culture;
	params.SaveToConfig = SaveToConfig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.SetCurrentLanguage
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Culture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SaveToConfig	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInternationalizationLibrary::SetCurrentLanguage(struct FString Culture, bool SaveToConfig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.SetCurrentLanguage");

	struct UKismetInternationalizationLibrary_SetCurrentLanguage_Params {
		struct FString Culture;			//Offset: 0 | ElementSize: 16
		bool SaveToConfig;			//Offset: 16 | ElementSize: 1
		bool ReturnValue;			//Offset: 17 | ElementSize: 1
	};
	UKismetInternationalizationLibrary_SetCurrentLanguage_Params params;
	params.Culture = Culture;
	params.SaveToConfig = SaveToConfig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.SetCurrentLanguageAndLocale
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Culture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SaveToConfig	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(struct FString Culture, bool SaveToConfig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.SetCurrentLanguageAndLocale");

	struct UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Params {
		struct FString Culture;			//Offset: 0 | ElementSize: 16
		bool SaveToConfig;			//Offset: 16 | ElementSize: 1
		bool ReturnValue;			//Offset: 17 | ElementSize: 1
	};
	UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Params params;
	params.Culture = Culture;
	params.SaveToConfig = SaveToConfig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetInternationalizationLibrary.SetCurrentLocale
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Culture	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SaveToConfig	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetInternationalizationLibrary::SetCurrentLocale(struct FString Culture, bool SaveToConfig) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetInternationalizationLibrary.SetCurrentLocale");

	struct UKismetInternationalizationLibrary_SetCurrentLocale_Params {
		struct FString Culture;			//Offset: 0 | ElementSize: 16
		bool SaveToConfig;			//Offset: 16 | ElementSize: 1
		bool ReturnValue;			//Offset: 17 | ElementSize: 1
	};
	UKismetInternationalizationLibrary_SetCurrentLocale_Params params;
	params.Culture = Culture;
	params.SaveToConfig = SaveToConfig;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}