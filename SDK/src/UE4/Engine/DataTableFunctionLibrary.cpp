#include "../SDK.h"
#include "DataTableFunctionLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.DataTableFunctionLibrary.DoesDataTableRowExist
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RowName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UDataTableFunctionLibrary::DoesDataTableRowExist(class UDataTable* Table, struct FName RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DataTableFunctionLibrary.DoesDataTableRowExist");

	struct UDataTableFunctionLibrary_DoesDataTableRowExist_Params {
		class UDataTable* Table;			//Offset: 0 | ElementSize: 8
		struct FName RowName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UDataTableFunctionLibrary_DoesDataTableRowExist_Params params;
	params.Table = Table;
	params.RowName = RowName;

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
// Function Engine.DataTableFunctionLibrary.EvaluateCurveTableRow
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: CurveTable	Type: class UCurveTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RowName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InXY	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutResult	Type: TEnumAsByte<EEvaluateCurveTableResult>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutXY	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ContextString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDataTableFunctionLibrary::EvaluateCurveTableRow(class UCurveTable* CurveTable, struct FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY, struct FString ContextString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DataTableFunctionLibrary.EvaluateCurveTableRow");

	struct UDataTableFunctionLibrary_EvaluateCurveTableRow_Params {
		class UCurveTable* CurveTable;			//Offset: 0 | ElementSize: 8
		struct FName RowName;			//Offset: 8 | ElementSize: 8
		float InXY;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<EEvaluateCurveTableResult> OutResult;			//Offset: 20 | ElementSize: 1
		float OutXY;			//Offset: 24 | ElementSize: 4
		struct FString ContextString;			//Offset: 32 | ElementSize: 16
	};
	UDataTableFunctionLibrary_EvaluateCurveTableRow_Params params;
	params.CurveTable = CurveTable;
	params.RowName = RowName;
	params.InXY = InXY;
	params.ContextString = ContextString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutXY != nullptr)
		*OutXY = params.OutXY;
}

/////////////////////////////////////////////
// Function Engine.DataTableFunctionLibrary.GetDataTableColumnAsString
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: DataTable	Type: class UDataTable*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PropertyName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UDataTableFunctionLibrary::GetDataTableColumnAsString(class UDataTable* DataTable, struct FName PropertyName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DataTableFunctionLibrary.GetDataTableColumnAsString");

	struct UDataTableFunctionLibrary_GetDataTableColumnAsString_Params {
		class UDataTable* DataTable;			//Offset: 0 | ElementSize: 8
		struct FName PropertyName;			//Offset: 8 | ElementSize: 8
		TArray<struct FString> ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UDataTableFunctionLibrary_GetDataTableColumnAsString_Params params;
	params.DataTable = DataTable;
	params.PropertyName = PropertyName;

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
// Function Engine.DataTableFunctionLibrary.GetDataTableRowFromName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RowName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRow	Type: struct FTableRowBase	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UDataTableFunctionLibrary::GetDataTableRowFromName(class UDataTable* Table, struct FName RowName, struct FTableRowBase* OutRow) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DataTableFunctionLibrary.GetDataTableRowFromName");

	struct UDataTableFunctionLibrary_GetDataTableRowFromName_Params {
		class UDataTable* Table;			//Offset: 0 | ElementSize: 8
		struct FName RowName;			//Offset: 8 | ElementSize: 8
		struct FTableRowBase OutRow;			//Offset: 16 | ElementSize: 8
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	UDataTableFunctionLibrary_GetDataTableRowFromName_Params params;
	params.Table = Table;
	params.RowName = RowName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutRow != nullptr)
		*OutRow = params.OutRow;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.DataTableFunctionLibrary.GetDataTableRowNames
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Table	Type: class UDataTable*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRowNames	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDataTableFunctionLibrary::GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.DataTableFunctionLibrary.GetDataTableRowNames");

	struct UDataTableFunctionLibrary_GetDataTableRowNames_Params {
		class UDataTable* Table;			//Offset: 0 | ElementSize: 8
		TArray<struct FName> OutRowNames;			//Offset: 8 | ElementSize: 16
	};
	UDataTableFunctionLibrary_GetDataTableRowNames_Params params;
	params.Table = Table;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutRowNames != nullptr)
		*OutRowNames = params.OutRowNames;
}

#pragma endregion
}