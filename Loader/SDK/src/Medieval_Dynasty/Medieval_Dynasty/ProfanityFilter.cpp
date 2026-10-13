#include "../SDK.h"
#include "ProfanityFilter.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.ProfanityFilter.CensorIllegalWords
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: IllegalWord	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UProfanityFilter::CensorIllegalWords(struct FString IllegalWord) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ProfanityFilter.CensorIllegalWords");

	struct UProfanityFilter_CensorIllegalWords_Params {
		struct FString IllegalWord;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UProfanityFilter_CensorIllegalWords_Params params;
	params.IllegalWord = IllegalWord;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ProfanityFilter.CreateFunnyWord
// Flags: Final, Native, Private, BlueprintCallable
// Params:
// Name: IllegalWord	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UProfanityFilter::CreateFunnyWord(struct FString IllegalWord) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ProfanityFilter.CreateFunnyWord");

	struct UProfanityFilter_CreateFunnyWord_Params {
		struct FString IllegalWord;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UProfanityFilter_CreateFunnyWord_Params params;
	params.IllegalWord = IllegalWord;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ProfanityFilter.DoesContainIllegalWords
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: IllegalWord	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UProfanityFilter::DoesContainIllegalWords(struct FString IllegalWord) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ProfanityFilter.DoesContainIllegalWords");

	struct UProfanityFilter_DoesContainIllegalWords_Params {
		struct FString IllegalWord;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UProfanityFilter_DoesContainIllegalWords_Params params;
	params.IllegalWord = IllegalWord;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ProfanityFilter.PrepareCurseSentencesList
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UProfanityFilter::PrepareCurseSentencesList(class UDataTable* Table) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ProfanityFilter.PrepareCurseSentencesList");

	struct UProfanityFilter_PrepareCurseSentencesList_Params {
		class UDataTable* Table;			//Offset: 0 | ElementSize: 8
	};
	UProfanityFilter_PrepareCurseSentencesList_Params params;
	params.Table = Table;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ProfanityFilter.PrepareCurseWordsList
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UProfanityFilter::PrepareCurseWordsList(class UDataTable* Table) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ProfanityFilter.PrepareCurseWordsList");

	struct UProfanityFilter_PrepareCurseWordsList_Params {
		class UDataTable* Table;			//Offset: 0 | ElementSize: 8
	};
	UProfanityFilter_PrepareCurseWordsList_Params params;
	params.Table = Table;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}