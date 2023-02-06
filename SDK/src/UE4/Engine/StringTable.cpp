#include "../SDK.h"
#include "StringTable.h"


namespace UE4 {
	/////////////////////////////////////////////
// Function Engine.KismetStringTableLibrary.GetKeysFromStringTable
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
	TArray<struct FString> UKismetStringTableLibrary::GetKeysFromStringTable(struct FName TableId) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.GetKeysFromStringTable");

		struct UKismetStringTableLibrary_GetKeysFromStringTable_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			TArray<struct FString> ReturnValue;			//Offset: 8 | ElementSize: 16
		};
		UKismetStringTableLibrary_GetKeysFromStringTable_Params params;
		params.TableId = TableId;

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
	// Function Engine.KismetStringTableLibrary.GetMetaDataIdsFromStringTableEntry
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	TArray<struct FName> UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(struct FName TableId, struct FString Key) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.GetMetaDataIdsFromStringTableEntry");

		struct UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			struct FString Key;			//Offset: 8 | ElementSize: 16
			TArray<struct FName> ReturnValue;			//Offset: 24 | ElementSize: 16
		};
		UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Params params;
		params.TableId = TableId;
		params.Key = Key;

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
	// Function Engine.KismetStringTableLibrary.GetRegisteredStringTables
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: ReturnValue	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	TArray<struct FName> UKismetStringTableLibrary::GetRegisteredStringTables() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.GetRegisteredStringTables");

		struct UKismetStringTableLibrary_GetRegisteredStringTables_Params {
			TArray<struct FName> ReturnValue;			//Offset: 0 | ElementSize: 16
		};
		UKismetStringTableLibrary_GetRegisteredStringTables_Params params;

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
	// Function Engine.KismetStringTableLibrary.GetTableEntryMetaData
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: MetaDataId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FString UKismetStringTableLibrary::GetTableEntryMetaData(struct FName TableId, struct FString Key, struct FName MetaDataId) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.GetTableEntryMetaData");

		struct UKismetStringTableLibrary_GetTableEntryMetaData_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			struct FString Key;			//Offset: 8 | ElementSize: 16
			struct FName MetaDataId;			//Offset: 24 | ElementSize: 8
			struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
		};
		UKismetStringTableLibrary_GetTableEntryMetaData_Params params;
		params.TableId = TableId;
		params.Key = Key;
		params.MetaDataId = MetaDataId;

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
	// Function Engine.KismetStringTableLibrary.GetTableEntrySourceString
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FString UKismetStringTableLibrary::GetTableEntrySourceString(struct FName TableId, struct FString Key) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.GetTableEntrySourceString");

		struct UKismetStringTableLibrary_GetTableEntrySourceString_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			struct FString Key;			//Offset: 8 | ElementSize: 16
			struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
		};
		UKismetStringTableLibrary_GetTableEntrySourceString_Params params;
		params.TableId = TableId;
		params.Key = Key;

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
	// Function Engine.KismetStringTableLibrary.GetTableNamespace
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FString UKismetStringTableLibrary::GetTableNamespace(struct FName TableId) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.GetTableNamespace");

		struct UKismetStringTableLibrary_GetTableNamespace_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
		};
		UKismetStringTableLibrary_GetTableNamespace_Params params;
		params.TableId = TableId;

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
	// Function Engine.KismetStringTableLibrary.IsRegisteredTableEntry
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: Key	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UKismetStringTableLibrary::IsRegisteredTableEntry(struct FName TableId, struct FString Key) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.IsRegisteredTableEntry");

		struct UKismetStringTableLibrary_IsRegisteredTableEntry_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			struct FString Key;			//Offset: 8 | ElementSize: 16
			bool ReturnValue;			//Offset: 24 | ElementSize: 1
		};
		UKismetStringTableLibrary_IsRegisteredTableEntry_Params params;
		params.TableId = TableId;
		params.Key = Key;

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
	// Function Engine.KismetStringTableLibrary.IsRegisteredTableId
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: TableId	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool UKismetStringTableLibrary::IsRegisteredTableId(struct FName TableId) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetStringTableLibrary.IsRegisteredTableId");

		struct UKismetStringTableLibrary_IsRegisteredTableId_Params {
			struct FName TableId;			//Offset: 0 | ElementSize: 8
			bool ReturnValue;			//Offset: 8 | ElementSize: 1
		};
		UKismetStringTableLibrary_IsRegisteredTableId_Params params;
		params.TableId = TableId;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}
	FName UStringTable::GetStringTableId() const {
		return Read<FName>((byte*)this + 56);
	}
	FStringTablePtr UStringTable::GetStringTablePtr() const {
		return Read<FStringTablePtr>((byte*)this + 40);
	}
}