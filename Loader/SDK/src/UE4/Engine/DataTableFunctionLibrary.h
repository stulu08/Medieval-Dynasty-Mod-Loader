#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.DataTableFunctionLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}

#pragma region Functions
	static bool DoesDataTableRowExist(class UDataTable* Table, struct FName RowName);

	static void EvaluateCurveTableRow(class UCurveTable* CurveTable, struct FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY, struct FString ContextString);

	static TArray<struct FString> GetDataTableColumnAsString(class UDataTable* DataTable, struct FName PropertyName);

	static bool GetDataTableRowFromName(class UDataTable* Table, struct FName RowName, struct FTableRowBase* OutRow);

	static void GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames);

#pragma endregion
};
};