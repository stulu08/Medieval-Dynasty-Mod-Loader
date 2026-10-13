#include "../SDK.h"
#include "DataTable.h"
namespace UE4 {
	// Member Getter and Setter of RowStruct
	// Declaration: class UScriptStruct* RowStruct
	class UScriptStruct* UDataTable::M_GetRowStruct() const {
		return Read<class UScriptStruct*>((byte*)this + 40);
	}
	class UScriptStruct** UDataTable::M_PtrGetRowStruct() {
		return reinterpret_cast<class UScriptStruct**>((byte*)this + 40);
	}
	void UDataTable::M_SetRowStruct(const class UScriptStruct*& value) {
		Write((byte*)this + 40, value);
	}
	// Member Getter and Setter of ImportKeyField
	// Declaration: struct FString ImportKeyField
	struct FString UDataTable::M_GetImportKeyField() const {
		return Read<struct FString>((byte*)this + 136);
	}
	struct FString* UDataTable::M_PtrGetImportKeyField() {
		return reinterpret_cast<struct FString*>((byte*)this + 136);
	}
	void UDataTable::M_SetImportKeyField(const struct FString& value) {
		Write((byte*)this + 136, value);
	}

	TMap<FName, uint8*> UDataTable::GetRowMap() const {
		return Read<TMap<FName, uint8*>>((byte*)this + 48);
	}
}