#include "../SDK.h"
#include "BlueprintSetLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_Add
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: NewItem	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_Add(const TAssetPtr<class FNone_67>& TargetSet, const int32_t& NewItem) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Add");

	struct UBlueprintSetLibrary_Set_Add_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
		int32_t NewItem;			//Offset: 80 | ElementSize: 4
	};
	UBlueprintSetLibrary_Set_Add_Params params;
	params.TargetSet = TargetSet;
	params.NewItem = NewItem;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_AddItems
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: NewItems	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_AddItems(const TAssetPtr<class FNone_67>& TargetSet, const TArray<int32_t>& NewItems) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_AddItems");

	struct UBlueprintSetLibrary_Set_AddItems_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
		TArray<int32_t> NewItems;			//Offset: 80 | ElementSize: 16
	};
	UBlueprintSetLibrary_Set_AddItems_Params params;
	params.TargetSet = TargetSet;
	params.NewItems = NewItems;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_Clear
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_Clear(const TAssetPtr<class FNone_67>& TargetSet) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Clear");

	struct UBlueprintSetLibrary_Set_Clear_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
	};
	UBlueprintSetLibrary_Set_Clear_Params params;
	params.TargetSet = TargetSet;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_Contains
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ItemToFind	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintSetLibrary::Set_Contains(const TAssetPtr<class FNone_67>& TargetSet, const int32_t& ItemToFind) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Contains");

	struct UBlueprintSetLibrary_Set_Contains_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
		int32_t ItemToFind;			//Offset: 80 | ElementSize: 4
		bool ReturnValue;			//Offset: 84 | ElementSize: 1
	};
	UBlueprintSetLibrary_Set_Contains_Params params;
	params.TargetSet = TargetSet;
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
// Function Engine.BlueprintSetLibrary.Set_Difference
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: A	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Result	Type: TAssetPtr<class FNone_67>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_Difference(const TAssetPtr<class FNone_67>& A, const TAssetPtr<class FNone_67>& B, TAssetPtr<class FNone_67>* Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Difference");

	struct UBlueprintSetLibrary_Set_Difference_Params {
		TAssetPtr<class FNone_67> A;			//Offset: 0 | ElementSize: 80
		TAssetPtr<class FNone_67> B;			//Offset: 80 | ElementSize: 80
		TAssetPtr<class FNone_67> Result;			//Offset: 160 | ElementSize: 80
	};
	UBlueprintSetLibrary_Set_Difference_Params params;
	params.A = A;
	params.B = B;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_Intersection
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: A	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Result	Type: TAssetPtr<class FNone_67>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_Intersection(const TAssetPtr<class FNone_67>& A, const TAssetPtr<class FNone_67>& B, TAssetPtr<class FNone_67>* Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Intersection");

	struct UBlueprintSetLibrary_Set_Intersection_Params {
		TAssetPtr<class FNone_67> A;			//Offset: 0 | ElementSize: 80
		TAssetPtr<class FNone_67> B;			//Offset: 80 | ElementSize: 80
		TAssetPtr<class FNone_67> Result;			//Offset: 160 | ElementSize: 80
	};
	UBlueprintSetLibrary_Set_Intersection_Params params;
	params.A = A;
	params.B = B;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_Length
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBlueprintSetLibrary::Set_Length(const TAssetPtr<class FNone_67>& TargetSet) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Length");

	struct UBlueprintSetLibrary_Set_Length_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
		int32_t ReturnValue;			//Offset: 80 | ElementSize: 4
	};
	UBlueprintSetLibrary_Set_Length_Params params;
	params.TargetSet = TargetSet;

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
// Function Engine.BlueprintSetLibrary.Set_Remove
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Item	Type: int32_t	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintSetLibrary::Set_Remove(const TAssetPtr<class FNone_67>& TargetSet, const int32_t& Item) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Remove");

	struct UBlueprintSetLibrary_Set_Remove_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
		int32_t Item;			//Offset: 80 | ElementSize: 4
		bool ReturnValue;			//Offset: 84 | ElementSize: 1
	};
	UBlueprintSetLibrary_Set_Remove_Params params;
	params.TargetSet = TargetSet;
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
// Function Engine.BlueprintSetLibrary.Set_RemoveItems
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: TargetSet	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Items	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_RemoveItems(const TAssetPtr<class FNone_67>& TargetSet, const TArray<int32_t>& Items) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_RemoveItems");

	struct UBlueprintSetLibrary_Set_RemoveItems_Params {
		TAssetPtr<class FNone_67> TargetSet;			//Offset: 0 | ElementSize: 80
		TArray<int32_t> Items;			//Offset: 80 | ElementSize: 16
	};
	UBlueprintSetLibrary_Set_RemoveItems_Params params;
	params.TargetSet = TargetSet;
	params.Items = Items;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_ToArray
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: A	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Result	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_ToArray(const TAssetPtr<class FNone_67>& A, TArray<int32_t>* Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_ToArray");

	struct UBlueprintSetLibrary_Set_ToArray_Params {
		TAssetPtr<class FNone_67> A;			//Offset: 0 | ElementSize: 80
		TArray<int32_t> Result;			//Offset: 80 | ElementSize: 16
	};
	UBlueprintSetLibrary_Set_ToArray_Params params;
	params.A = A;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.Set_Union
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: A	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: B	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Result	Type: TAssetPtr<class FNone_67>	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::Set_Union(const TAssetPtr<class FNone_67>& A, const TAssetPtr<class FNone_67>& B, TAssetPtr<class FNone_67>* Result) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.Set_Union");

	struct UBlueprintSetLibrary_Set_Union_Params {
		TAssetPtr<class FNone_67> A;			//Offset: 0 | ElementSize: 80
		TAssetPtr<class FNone_67> B;			//Offset: 80 | ElementSize: 80
		TAssetPtr<class FNone_67> Result;			//Offset: 160 | ElementSize: 80
	};
	UBlueprintSetLibrary_Set_Union_Params params;
	params.A = A;
	params.B = B;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Result != nullptr)
		*Result = params.Result;
}

/////////////////////////////////////////////
// Function Engine.BlueprintSetLibrary.SetSetPropertyByName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: TAssetPtr<class FNone_67>	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintSetLibrary::SetSetPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class FNone_67>& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintSetLibrary.SetSetPropertyByName");

	struct UBlueprintSetLibrary_SetSetPropertyByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TAssetPtr<class FNone_67> Value;			//Offset: 16 | ElementSize: 80
	};
	UBlueprintSetLibrary_SetSetPropertyByName_Params params;
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