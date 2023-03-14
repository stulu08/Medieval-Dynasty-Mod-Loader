#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.DataTable
// Super: Class CoreUObject.Object
// Size: 176
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
	class UDataTable : public UObject {
	public:
		//class UScriptStruct*	RowStruct;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScriptStruct* M_GetRowStruct() const;
		class UScriptStruct** M_PtrGetRowStruct();
		void M_SetRowStruct(const class UScriptStruct*& value);

		//TMap<FName, uint8*> RowMap; //48
		TMap<FName, uint8*> GetRowMap() const;

		//struct FString	ImportKeyField;		//Offset: 136	Size: 16	Flags: Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString M_GetImportKeyField() const;
		struct FString* M_PtrGetImportKeyField();
		void M_SetImportKeyField(const struct FString& value);

		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.DataTable");
			return ptr;
		}

	};
};