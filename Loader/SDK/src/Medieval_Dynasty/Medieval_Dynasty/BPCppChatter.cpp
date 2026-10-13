#include "../SDK.h"
#include "BPCppChatter.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.FindChattersByRestrictions
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Restrictions	Type: TMap<EChatterSoundType, struct FChatterRestrictions>	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FChatter>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FChatter> UBPCppChatter::FindChattersByRestrictions(bool* found, class UDataTable* Table, TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.FindChattersByRestrictions");

	struct UBPCppChatter_FindChattersByRestrictions_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		class UDataTable* Table;			//Offset: 8 | ElementSize: 8
		TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions;			//Offset: 16 | ElementSize: 80
		TArray<struct FChatter> ReturnValue;			//Offset: 96 | ElementSize: 16
	};
	UBPCppChatter_FindChattersByRestrictions_Params params;
	params.Table = Table;
	params.Restrictions = Restrictions;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.FindSoundByIDFromCategory
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ID	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SoundCategory	Type: EChatterSoundType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FChatterData	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FChatterData UBPCppChatter::FindSoundByIDFromCategory(bool* found, class UDataTable* Table, struct FName ID, EChatterSoundType SoundCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.FindSoundByIDFromCategory");

	struct UBPCppChatter_FindSoundByIDFromCategory_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		class UDataTable* Table;			//Offset: 8 | ElementSize: 8
		struct FName ID;			//Offset: 16 | ElementSize: 8
		EChatterSoundType SoundCategory;			//Offset: 24 | ElementSize: 1
		struct FChatterData ReturnValue;			//Offset: 32 | ElementSize: 168
	};
	UBPCppChatter_FindSoundByIDFromCategory_Params params;
	params.Table = Table;
	params.ID = ID;
	params.SoundCategory = SoundCategory;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.FindSoundByIDFromCategoryAndSubCategory
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ID	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SoundCategory	Type: EChatterSoundType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SubCategory	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FChatterData	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FChatterData UBPCppChatter::FindSoundByIDFromCategoryAndSubCategory(bool* found, class UDataTable* Table, struct FName ID, EChatterSoundType SoundCategory, struct FName SubCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.FindSoundByIDFromCategoryAndSubCategory");

	struct UBPCppChatter_FindSoundByIDFromCategoryAndSubCategory_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		class UDataTable* Table;			//Offset: 8 | ElementSize: 8
		struct FName ID;			//Offset: 16 | ElementSize: 8
		EChatterSoundType SoundCategory;			//Offset: 24 | ElementSize: 1
		struct FName SubCategory;			//Offset: 28 | ElementSize: 8
		struct FChatterData ReturnValue;			//Offset: 40 | ElementSize: 168
	};
	UBPCppChatter_FindSoundByIDFromCategoryAndSubCategory_Params params;
	params.Table = Table;
	params.ID = ID;
	params.SoundCategory = SoundCategory;
	params.SubCategory = SubCategory;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.FindSoundIDsByRestrictions
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Restrictions	Type: TMap<EChatterSoundType, struct FChatterRestrictions>	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FName> UBPCppChatter::FindSoundIDsByRestrictions(bool* found, class UDataTable* Table, TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.FindSoundIDsByRestrictions");

	struct UBPCppChatter_FindSoundIDsByRestrictions_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		class UDataTable* Table;			//Offset: 8 | ElementSize: 8
		TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions;			//Offset: 16 | ElementSize: 80
		TArray<struct FName> ReturnValue;			//Offset: 96 | ElementSize: 16
	};
	UBPCppChatter_FindSoundIDsByRestrictions_Params params;
	params.Table = Table;
	params.Restrictions = Restrictions;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.GetChatterSubCategoryData
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ID	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SoundCategory	Type: EChatterSoundType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SubCategories	Type: TArray<struct FName>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FChatterSubCatData>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FChatterSubCatData> UBPCppChatter::GetChatterSubCategoryData(bool* found, class UDataTable* Table, struct FName ID, EChatterSoundType SoundCategory, TArray<struct FName> SubCategories) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.GetChatterSubCategoryData");

	struct UBPCppChatter_GetChatterSubCategoryData_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		class UDataTable* Table;			//Offset: 8 | ElementSize: 8
		struct FName ID;			//Offset: 16 | ElementSize: 8
		EChatterSoundType SoundCategory;			//Offset: 24 | ElementSize: 1
		TArray<struct FName> SubCategories;			//Offset: 32 | ElementSize: 16
		TArray<struct FChatterSubCatData> ReturnValue;			//Offset: 48 | ElementSize: 16
	};
	UBPCppChatter_GetChatterSubCategoryData_Params params;
	params.Table = Table;
	params.ID = ID;
	params.SoundCategory = SoundCategory;
	params.SubCategories = SubCategories;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.GetRandomSoundByRestrictions
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChatterCategory	Type: EChatterSoundType	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChatterSubCategory	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChatterID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Restrictions	Type: TMap<EChatterSoundType, struct FChatterRestrictions>	Flags: Parm, NativeAccessSpecifierPublic
// Name: UsedChatterSubCategories	Type: TArray<struct FName>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: UsedChatterIDs	Type: TArray<struct FName>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FChatterData	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FChatterData UBPCppChatter::GetRandomSoundByRestrictions(bool* found, EChatterSoundType* ChatterCategory, struct FName* ChatterSubCategory, struct FName* ChatterID, class UDataTable* Table, TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions, TArray<struct FName> UsedChatterSubCategories, TArray<struct FName> UsedChatterIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.GetRandomSoundByRestrictions");

	struct UBPCppChatter_GetRandomSoundByRestrictions_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		EChatterSoundType ChatterCategory;			//Offset: 1 | ElementSize: 1
		struct FName ChatterSubCategory;			//Offset: 4 | ElementSize: 8
		struct FName ChatterID;			//Offset: 12 | ElementSize: 8
		class UDataTable* Table;			//Offset: 24 | ElementSize: 8
		TMap<EChatterSoundType, struct FChatterRestrictions> Restrictions;			//Offset: 32 | ElementSize: 80
		TArray<struct FName> UsedChatterSubCategories;			//Offset: 112 | ElementSize: 16
		TArray<struct FName> UsedChatterIDs;			//Offset: 128 | ElementSize: 16
		struct FChatterData ReturnValue;			//Offset: 144 | ElementSize: 168
	};
	UBPCppChatter_GetRandomSoundByRestrictions_Params params;
	params.Table = Table;
	params.Restrictions = Restrictions;
	params.UsedChatterSubCategories = UsedChatterSubCategories;
	params.UsedChatterIDs = UsedChatterIDs;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	if (ChatterCategory != nullptr)
		*ChatterCategory = params.ChatterCategory;
	if (ChatterSubCategory != nullptr)
		*ChatterSubCategory = params.ChatterSubCategory;
	if (ChatterID != nullptr)
		*ChatterID = params.ChatterID;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppChatter.GetRandomSoundFromSubCategory
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SoundCategory	Type: EChatterSoundType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SubCategory	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FChatterData	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FChatterData UBPCppChatter::GetRandomSoundFromSubCategory(bool* found, class UDataTable* Table, EChatterSoundType SoundCategory, struct FName SubCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppChatter.GetRandomSoundFromSubCategory");

	struct UBPCppChatter_GetRandomSoundFromSubCategory_Params {
		bool found;			//Offset: 0 | ElementSize: 1
		class UDataTable* Table;			//Offset: 8 | ElementSize: 8
		EChatterSoundType SoundCategory;			//Offset: 16 | ElementSize: 1
		struct FName SubCategory;			//Offset: 20 | ElementSize: 8
		struct FChatterData ReturnValue;			//Offset: 32 | ElementSize: 168
	};
	UBPCppChatter_GetRandomSoundFromSubCategory_Params params;
	params.Table = Table;
	params.SoundCategory = SoundCategory;
	params.SubCategory = SubCategory;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (found != nullptr)
		*found = params.found;
	return params.ReturnValue;
}

#pragma endregion
}