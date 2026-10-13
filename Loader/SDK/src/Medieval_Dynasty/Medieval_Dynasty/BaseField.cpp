#include "../SDK.h"
#include "BaseField.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NumberOfPlants
// Declaration: int32_t NumberOfPlants
int32_t ABaseField::M_GetNumberOfPlants() const {
	return Read<int32_t>((byte*)this + 544);
}
int32_t* ABaseField::M_PtrGetNumberOfPlants() {
	return reinterpret_cast<int32_t*>((byte*)this + 544);
}
void ABaseField::M_SetNumberOfPlants(const int32_t& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of ListOfPlantSlots
// Declaration: struct FST_PlantSlotArray ListOfPlantSlots
struct FST_PlantSlotArray ABaseField::M_GetListOfPlantSlots() const {
	return Read<struct FST_PlantSlotArray>((byte*)this + 552);
}
struct FST_PlantSlotArray* ABaseField::M_PtrGetListOfPlantSlots() {
	return reinterpret_cast<struct FST_PlantSlotArray*>((byte*)this + 552);
}
void ABaseField::M_SetListOfPlantSlots(const struct FST_PlantSlotArray& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of ListOfChunks
// Declaration: struct FST_ChunkDataArray ListOfChunks
struct FST_ChunkDataArray ABaseField::M_GetListOfChunks() const {
	return Read<struct FST_ChunkDataArray>((byte*)this + 832);
}
struct FST_ChunkDataArray* ABaseField::M_PtrGetListOfChunks() {
	return reinterpret_cast<struct FST_ChunkDataArray*>((byte*)this + 832);
}
void ABaseField::M_SetListOfChunks(const struct FST_ChunkDataArray& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of ChunkServerData
// Declaration: TMap<int32_t, struct FChunkServerData> ChunkServerData
TMap<int32_t, struct FChunkServerData> ABaseField::M_GetChunkServerData() const {
	return Read<TMap<int32_t, struct FChunkServerData>>((byte*)this + 1112);
}
TMap<int32_t, struct FChunkServerData>* ABaseField::M_PtrGetChunkServerData() {
	return reinterpret_cast<TMap<int32_t, struct FChunkServerData>*>((byte*)this + 1112);
}
void ABaseField::M_SetChunkServerData(const TMap<int32_t, struct FChunkServerData>& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of bFieldFinishedLoading
// Declaration: bool bFieldFinishedLoading
bool ABaseField::M_GetbFieldFinishedLoading() const {
	return Read<bool>((byte*)this + 1192);
}
bool* ABaseField::M_PtrGetbFieldFinishedLoading() {
	return reinterpret_cast<bool*>((byte*)this + 1192);
}
void ABaseField::M_SetbFieldFinishedLoading(const bool& value) {
	Write((byte*)this + 1192, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.AddChunk
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewChunk	Type: struct FST_ChunkData	Flags: Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ABaseField::AddChunk(struct FST_ChunkData NewChunk) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.AddChunk");

	struct ABaseField_AddChunk_Params {
		struct FST_ChunkData NewChunk;			//Offset: 0 | ElementSize: 112
		int32_t ReturnValue;			//Offset: 112 | ElementSize: 4
	};
	ABaseField_AddChunk_Params params;
	params.NewChunk = NewChunk;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.AddPlantSlot
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPlantSlot	Type: struct FST_PlantSlot	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ABaseField::AddPlantSlot(struct FST_PlantSlot NewPlantSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.AddPlantSlot");

	struct ABaseField_AddPlantSlot_Params {
		struct FST_PlantSlot NewPlantSlot;			//Offset: 0 | ElementSize: 80
		int32_t ReturnValue;			//Offset: 80 | ElementSize: 4
	};
	ABaseField_AddPlantSlot_Params params;
	params.NewPlantSlot = NewPlantSlot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ChangeChunk
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ChunkIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewChunk	Type: struct FST_ChunkData	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::ChangeChunk(int32_t ChunkIndex, struct FST_ChunkData NewChunk) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ChangeChunk");

	struct ABaseField_ChangeChunk_Params {
		int32_t ChunkIndex;			//Offset: 0 | ElementSize: 4
		struct FST_ChunkData NewChunk;			//Offset: 8 | ElementSize: 112
	};
	ABaseField_ChangeChunk_Params params;
	params.ChunkIndex = ChunkIndex;
	params.NewChunk = NewChunk;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ChangePlantSlot
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlantStage	Type: EPlantStage	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChunkID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Transform	Type: struct FTransform	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::ChangePlantSlot(int32_t ItemId, EPlantStage PlantStage, int32_t ChunkID, struct FTransform Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ChangePlantSlot");

	struct ABaseField_ChangePlantSlot_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		EPlantStage PlantStage;			//Offset: 4 | ElementSize: 1
		int32_t ChunkID;			//Offset: 8 | ElementSize: 4
		struct FTransform Transform;			//Offset: 16 | ElementSize: 48
	};
	ABaseField_ChangePlantSlot_Params params;
	params.ItemId = ItemId;
	params.PlantStage = PlantStage;
	params.ChunkID = ChunkID;
	params.Transform = Transform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ChangePlantSlotStage
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewStage	Type: EPlantStage	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::ChangePlantSlotStage(int32_t ItemId, EPlantStage NewStage) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ChangePlantSlotStage");

	struct ABaseField_ChangePlantSlotStage_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		EPlantStage NewStage;			//Offset: 4 | ElementSize: 1
	};
	ABaseField_ChangePlantSlotStage_Params params;
	params.ItemId = ItemId;
	params.NewStage = NewStage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ChangePlantSlotStruct
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewPlantSlot	Type: struct FST_PlantSlot	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::ChangePlantSlotStruct(int32_t ItemId, struct FST_PlantSlot NewPlantSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ChangePlantSlotStruct");

	struct ABaseField_ChangePlantSlotStruct_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_PlantSlot NewPlantSlot;			//Offset: 16 | ElementSize: 80
	};
	ABaseField_ChangePlantSlotStruct_Params params;
	params.ItemId = ItemId;
	params.NewPlantSlot = NewPlantSlot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ChangePlantSlotTransform
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewTransform	Type: struct FTransform	Flags: Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::ChangePlantSlotTransform(int32_t ItemId, struct FTransform NewTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ChangePlantSlotTransform");

	struct ABaseField_ChangePlantSlotTransform_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FTransform NewTransform;			//Offset: 16 | ElementSize: 48
	};
	ABaseField_ChangePlantSlotTransform_Params params;
	params.ItemId = ItemId;
	params.NewTransform = NewTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ClearListOfChunks
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ABaseField::ClearListOfChunks() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ClearListOfChunks");

	struct ABaseField_ClearListOfChunks_Params {
	};
	ABaseField_ClearListOfChunks_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.ClearPlantSlot
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ABaseField::ClearPlantSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.ClearPlantSlot");

	struct ABaseField_ClearPlantSlot_Params {
	};
	ABaseField_ClearPlantSlot_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.FindChunkByID
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: ChunkIDToFind	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FoundChunk	Type: struct FST_ChunkData	Flags: Parm, OutParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ABaseField::FindChunkByID(int32_t ChunkIDToFind, struct FST_ChunkData* FoundChunk) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.FindChunkByID");

	struct ABaseField_FindChunkByID_Params {
		int32_t ChunkIDToFind;			//Offset: 0 | ElementSize: 4
		struct FST_ChunkData FoundChunk;			//Offset: 8 | ElementSize: 112
		int32_t ReturnValue;			//Offset: 120 | ElementSize: 4
	};
	ABaseField_FindChunkByID_Params params;
	params.ChunkIDToFind = ChunkIDToFind;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FoundChunk != nullptr)
		*FoundChunk = params.FoundChunk;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.FindPlantSlotsIDs
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ChunkID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<int32_t> ABaseField::FindPlantSlotsIDs(int32_t ChunkID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.FindPlantSlotsIDs");

	struct ABaseField_FindPlantSlotsIDs_Params {
		int32_t ChunkID;			//Offset: 0 | ElementSize: 4
		TArray<int32_t> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	ABaseField_FindPlantSlotsIDs_Params params;
	params.ChunkID = ChunkID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.OnRep_ListOfChunks
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABaseField::OnRep_ListOfChunks() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.OnRep_ListOfChunks");

	struct ABaseField_OnRep_ListOfChunks_Params {
	};
	ABaseField_OnRep_ListOfChunks_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.OnRep_ListOfPlantSlots
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABaseField::OnRep_ListOfPlantSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.OnRep_ListOfPlantSlots");

	struct ABaseField_OnRep_ListOfPlantSlots_Params {
	};
	ABaseField_OnRep_ListOfPlantSlots_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.RemoveChunk
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ChunkIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::RemoveChunk(int32_t ChunkIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.RemoveChunk");

	struct ABaseField_RemoveChunk_Params {
		int32_t ChunkIndex;			//Offset: 0 | ElementSize: 4
	};
	ABaseField_RemoveChunk_Params params;
	params.ChunkIndex = ChunkIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.RemovePlantSlot
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::RemovePlantSlot(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.RemovePlantSlot");

	struct ABaseField_RemovePlantSlot_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ABaseField_RemovePlantSlot_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.UpdateChunkServerData
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ChunkIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::UpdateChunkServerData(int32_t ChunkIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.UpdateChunkServerData");

	struct ABaseField_UpdateChunkServerData_Params {
		int32_t ChunkIndex;			//Offset: 0 | ElementSize: 4
	};
	ABaseField_UpdateChunkServerData_Params params;
	params.ChunkIndex = ChunkIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BaseField.UpdateChunkServerDataSlots
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ChunkIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotsIDs	Type: TArray<int32_t>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ABaseField::UpdateChunkServerDataSlots(int32_t ChunkIndex, TArray<int32_t> SlotsIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BaseField.UpdateChunkServerDataSlots");

	struct ABaseField_UpdateChunkServerDataSlots_Params {
		int32_t ChunkIndex;			//Offset: 0 | ElementSize: 4
		TArray<int32_t> SlotsIDs;			//Offset: 8 | ElementSize: 16
	};
	ABaseField_UpdateChunkServerDataSlots_Params params;
	params.ChunkIndex = ChunkIndex;
	params.SlotsIDs = SlotsIDs;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}