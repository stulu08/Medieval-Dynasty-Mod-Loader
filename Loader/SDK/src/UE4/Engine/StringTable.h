#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
#include "Engine/BlueprintFunctionLibrary.h"

namespace UE4 {
	class FStringTable { };
	typedef TSharedRef<const FStringTable, ESPMode::ThreadSafe> FStringTableConstRef;
	typedef TSharedRef<FStringTable, ESPMode::ThreadSafe> FStringTableRef;
	typedef TSharedPtr<FStringTable, ESPMode::ThreadSafe> FStringTablePtr;

	/////////////////////////////////////////////
	// Class Engine.StringTable
	// Super: Class CoreUObject.Object
	// Size: 64
	// Size inherited: 40
	/////////////////////////////////////////////
	class UStringTable : public UObject {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.StringTable");
			return ptr;
		}

		FName GetStringTableId() const;
		FStringTablePtr GetStringTablePtr() const;
	private:
		//layout:
		//	UObject(40 bytes)
		//  -----------------
		//	void** vTable; (8 bytes, 40)
		//	FStringTablePtr StringTable; (8 bytes, 48)
		//	FName StringTableId; (8 bytes, 56)
		//  -----------------
	};


	/////////////////////////////////////////////
	// Class Engine.KismetStringTableLibrary
	// Super: Class Engine.BlueprintFunctionLibrary
	// Size: 40
	// Size inherited: 40
	/////////////////////////////////////////////
	class UKismetStringTableLibrary : public UBlueprintFunctionLibrary {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.KismetStringTableLibrary");
			return ptr;
		}

		static TArray<struct FString> GetKeysFromStringTable(struct FName TableId);

		static TArray<struct FName> GetMetaDataIdsFromStringTableEntry(struct FName TableId, struct FString Key);

		static TArray<struct FName> GetRegisteredStringTables();

		static struct FString GetTableEntryMetaData(struct FName TableId, struct FString Key, struct FName MetaDataId);

		static struct FString GetTableEntrySourceString(struct FName TableId, struct FString Key);

		static struct FString GetTableNamespace(struct FName TableId);

		static bool IsRegisteredTableEntry(struct FName TableId, struct FString Key);

		static bool IsRegisteredTableId(struct FName TableId);
	};
};