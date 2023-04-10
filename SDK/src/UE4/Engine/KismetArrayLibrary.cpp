#include "../SDK.h"
#include "KismetArrayLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Add
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: NewItem	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetArrayLibrary::Array_Add(const TArray<int32_t>& TargetArray, const int32_t& NewItem) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Add");

	struct UKismetArrayLibrary_Array_Add_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t NewItem;			//Offset: 16 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Add_Params params;
	params.TargetArray = TargetArray;
	params.NewItem = NewItem;

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
// Function Engine.KismetArrayLibrary.Array_AddUnique
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: NewItem	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetArrayLibrary::Array_AddUnique(const TArray<int32_t>& TargetArray, const int32_t& NewItem) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_AddUnique");

	struct UKismetArrayLibrary_Array_AddUnique_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t NewItem;			//Offset: 16 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_AddUnique_Params params;
	params.TargetArray = TargetArray;
	params.NewItem = NewItem;

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
// Function Engine.KismetArrayLibrary.Array_Append
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: SourceArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Append(const TArray<int32_t>& TargetArray, const TArray<int32_t>& SourceArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Append");

	struct UKismetArrayLibrary_Array_Append_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> SourceArray;			//Offset: 16 | ElementSize: 16
	};
	UKismetArrayLibrary_Array_Append_Params params;
	params.TargetArray = TargetArray;
	params.SourceArray = SourceArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Clear
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Clear(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Clear");

	struct UKismetArrayLibrary_Array_Clear_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
	};
	UKismetArrayLibrary_Array_Clear_Params params;
	params.TargetArray = TargetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Contains
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ItemToFind	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetArrayLibrary::Array_Contains(const TArray<int32_t>& TargetArray, const int32_t& ItemToFind) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Contains");

	struct UKismetArrayLibrary_Array_Contains_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t ItemToFind;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UKismetArrayLibrary_Array_Contains_Params params;
	params.TargetArray = TargetArray;
	params.ItemToFind = ItemToFind;

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
// Function Engine.KismetArrayLibrary.Array_Find
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ItemToFind	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetArrayLibrary::Array_Find(const TArray<int32_t>& TargetArray, const int32_t& ItemToFind) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Find");

	struct UKismetArrayLibrary_Array_Find_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t ItemToFind;			//Offset: 16 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Find_Params params;
	params.TargetArray = TargetArray;
	params.ItemToFind = ItemToFind;

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
// Function Engine.KismetArrayLibrary.Array_Get
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Item	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Get(const TArray<int32_t>& TargetArray, int32_t Index, int32_t* Item) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Get");

	struct UKismetArrayLibrary_Array_Get_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t Index;			//Offset: 16 | ElementSize: 4
		int32_t Item;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Get_Params params;
	params.TargetArray = TargetArray;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Item != nullptr)
		*Item = params.Item;
}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Identical
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: ArrayA	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ArrayB	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetArrayLibrary::Array_Identical(const TArray<int32_t>& ArrayA, const TArray<int32_t>& ArrayB) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Identical");

	struct UKismetArrayLibrary_Array_Identical_Params {
		TArray<int32_t> ArrayA;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> ArrayB;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UKismetArrayLibrary_Array_Identical_Params params;
	params.ArrayA = ArrayA;
	params.ArrayB = ArrayB;

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
// Function Engine.KismetArrayLibrary.Array_Insert
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: NewItem	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Insert(const TArray<int32_t>& TargetArray, const int32_t& NewItem, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Insert");

	struct UKismetArrayLibrary_Array_Insert_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t NewItem;			//Offset: 16 | ElementSize: 4
		int32_t Index;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Insert_Params params;
	params.TargetArray = TargetArray;
	params.NewItem = NewItem;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_IsValidIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: IndexToTest	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetArrayLibrary::Array_IsValidIndex(const TArray<int32_t>& TargetArray, int32_t IndexToTest) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_IsValidIndex");

	struct UKismetArrayLibrary_Array_IsValidIndex_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t IndexToTest;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UKismetArrayLibrary_Array_IsValidIndex_Params params;
	params.TargetArray = TargetArray;
	params.IndexToTest = IndexToTest;

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
// Function Engine.KismetArrayLibrary.Array_LastIndex
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetArrayLibrary::Array_LastIndex(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_LastIndex");

	struct UKismetArrayLibrary_Array_LastIndex_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_LastIndex_Params params;
	params.TargetArray = TargetArray;

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
// Function Engine.KismetArrayLibrary.Array_Length
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UKismetArrayLibrary::Array_Length(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Length");

	struct UKismetArrayLibrary_Array_Length_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Length_Params params;
	params.TargetArray = TargetArray;

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
// Function Engine.KismetArrayLibrary.Array_Random
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: OutItem	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Random(const TArray<int32_t>& TargetArray, int32_t* OutItem, int32_t* OutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Random");

	struct UKismetArrayLibrary_Array_Random_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t OutItem;			//Offset: 16 | ElementSize: 4
		int32_t OutIndex;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Random_Params params;
	params.TargetArray = TargetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_RandomFromStream
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: RandomStream	Type: struct FRandomStream	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
// Name: OutItem	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_RandomFromStream(const TArray<int32_t>& TargetArray, struct FRandomStream* RandomStream, int32_t* OutItem, int32_t* OutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_RandomFromStream");

	struct UKismetArrayLibrary_Array_RandomFromStream_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		struct FRandomStream RandomStream;			//Offset: 16 | ElementSize: 8
		int32_t OutItem;			//Offset: 24 | ElementSize: 4
		int32_t OutIndex;			//Offset: 28 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_RandomFromStream_Params params;
	params.TargetArray = TargetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;
	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Remove
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: IndexToRemove	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Remove(const TArray<int32_t>& TargetArray, int32_t IndexToRemove) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Remove");

	struct UKismetArrayLibrary_Array_Remove_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t IndexToRemove;			//Offset: 16 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Remove_Params params;
	params.TargetArray = TargetArray;
	params.IndexToRemove = IndexToRemove;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_RemoveItem
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Item	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UKismetArrayLibrary::Array_RemoveItem(const TArray<int32_t>& TargetArray, const int32_t& Item) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_RemoveItem");

	struct UKismetArrayLibrary_Array_RemoveItem_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t Item;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UKismetArrayLibrary_Array_RemoveItem_Params params;
	params.TargetArray = TargetArray;
	params.Item = Item;

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
// Function Engine.KismetArrayLibrary.Array_Resize
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Size	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Resize(const TArray<int32_t>& TargetArray, int32_t Size) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Resize");

	struct UKismetArrayLibrary_Array_Resize_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t Size;			//Offset: 16 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Resize_Params params;
	params.TargetArray = TargetArray;
	params.Size = Size;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Reverse
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Reverse(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Reverse");

	struct UKismetArrayLibrary_Array_Reverse_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
	};
	UKismetArrayLibrary_Array_Reverse_Params params;
	params.TargetArray = TargetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Set
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Item	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSizeToFit	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Set(const TArray<int32_t>& TargetArray, int32_t Index, const int32_t& Item, bool bSizeToFit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Set");

	struct UKismetArrayLibrary_Array_Set_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t Index;			//Offset: 16 | ElementSize: 4
		int32_t Item;			//Offset: 20 | ElementSize: 4
		bool bSizeToFit;			//Offset: 24 | ElementSize: 1
	};
	UKismetArrayLibrary_Array_Set_Params params;
	params.TargetArray = TargetArray;
	params.Index = Index;
	params.Item = Item;
	params.bSizeToFit = bSizeToFit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Shuffle
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Shuffle(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Shuffle");

	struct UKismetArrayLibrary_Array_Shuffle_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
	};
	UKismetArrayLibrary_Array_Shuffle_Params params;
	params.TargetArray = TargetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.Array_Swap
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: FirstIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SecondIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::Array_Swap(const TArray<int32_t>& TargetArray, int32_t FirstIndex, int32_t SecondIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.Array_Swap");

	struct UKismetArrayLibrary_Array_Swap_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		int32_t FirstIndex;			//Offset: 16 | ElementSize: 4
		int32_t SecondIndex;			//Offset: 20 | ElementSize: 4
	};
	UKismetArrayLibrary_Array_Swap_Params params;
	params.TargetArray = TargetArray;
	params.FirstIndex = FirstIndex;
	params.SecondIndex = SecondIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.FilterArray
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetArray	Type: TArray<class AActor*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: FilterClass	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FilteredArray	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::FilterArray(const TArray<class AActor*>& TargetArray, class AActor* FilterClass, TArray<class AActor*>* FilteredArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.FilterArray");

	struct UKismetArrayLibrary_FilterArray_Params {
		TArray<class AActor*> TargetArray;			//Offset: 0 | ElementSize: 16
		class AActor* FilterClass;			//Offset: 16 | ElementSize: 8
		TArray<class AActor*> FilteredArray;			//Offset: 24 | ElementSize: 16
	};
	UKismetArrayLibrary_FilterArray_Params params;
	params.TargetArray = TargetArray;
	params.FilterClass = FilterClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FilteredArray != nullptr)
		*FilteredArray = params.FilteredArray;
}

/////////////////////////////////////////////
// Function Engine.KismetArrayLibrary.SetArrayPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetArrayLibrary::SetArrayPropertyByName(class UObject* Object, struct FName PropertyName, const TArray<int32_t>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetArrayLibrary.SetArrayPropertyByName");

	struct UKismetArrayLibrary_SetArrayPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TArray<int32_t> Value;			//Offset: 16 | ElementSize: 16
	};
	UKismetArrayLibrary_SetArrayPropertyByName_Params params;
	params.Object = Object;
	params.PropertyName = PropertyName;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}