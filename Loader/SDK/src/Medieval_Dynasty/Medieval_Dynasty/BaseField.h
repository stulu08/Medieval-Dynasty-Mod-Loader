#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.BaseField
// Super: Class Engine.Actor
// Size: 1200
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABaseField : public AActor {
public:
#pragma region Members
	//int32_t	NumberOfPlants;		//Offset: 544	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumberOfPlants() const;
	int32_t* M_PtrGetNumberOfPlants();
	void M_SetNumberOfPlants(const int32_t& value);

	//struct FST_PlantSlotArray	ListOfPlantSlots;		//Offset: 552	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_PlantSlotArray M_GetListOfPlantSlots() const;
	struct FST_PlantSlotArray* M_PtrGetListOfPlantSlots();
	void M_SetListOfPlantSlots(const struct FST_PlantSlotArray& value);

	//struct FST_ChunkDataArray	ListOfChunks;		//Offset: 832	Size: 280	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
	struct FST_ChunkDataArray M_GetListOfChunks() const;
	struct FST_ChunkDataArray* M_PtrGetListOfChunks();
	void M_SetListOfChunks(const struct FST_ChunkDataArray& value);

	//TMap<int32_t, struct FChunkServerData>	ChunkServerData;		//Offset: 1112	Size: 80	Flags: BlueprintVisible, NativeAccessSpecifierPublic
	TMap<int32_t, struct FChunkServerData> M_GetChunkServerData() const;
	TMap<int32_t, struct FChunkServerData>* M_PtrGetChunkServerData();
	void M_SetChunkServerData(const TMap<int32_t, struct FChunkServerData>& value);

	//bool	bFieldFinishedLoading;		//Offset: 1192	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFieldFinishedLoading() const;
	bool* M_PtrGetbFieldFinishedLoading();
	void M_SetbFieldFinishedLoading(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BaseField");
		return ptr;
	}

#pragma region Functions
	int32_t AddChunk(struct FST_ChunkData NewChunk);

	int32_t AddPlantSlot(struct FST_PlantSlot NewPlantSlot);

	void ChangeChunk(int32_t ChunkIndex, struct FST_ChunkData NewChunk);

	void ChangePlantSlot(int32_t ItemId, EPlantStage PlantStage, int32_t ChunkID, struct FTransform Transform);

	void ChangePlantSlotStage(int32_t ItemId, EPlantStage NewStage);

	void ChangePlantSlotStruct(int32_t ItemId, struct FST_PlantSlot NewPlantSlot);

	void ChangePlantSlotTransform(int32_t ItemId, struct FTransform NewTransform);

	void ClearListOfChunks();

	void ClearPlantSlot();

	int32_t FindChunkByID(int32_t ChunkIDToFind, struct FST_ChunkData* FoundChunk);

	TArray<int32_t> FindPlantSlotsIDs(int32_t ChunkID);

	void OnRep_ListOfChunks();

	void OnRep_ListOfPlantSlots();

	void RemoveChunk(int32_t ChunkIndex);

	void RemovePlantSlot(int32_t ItemId);

	void UpdateChunkServerData(int32_t ChunkIndex);

	void UpdateChunkServerDataSlots(int32_t ChunkIndex, TArray<int32_t> SlotsIDs);

#pragma endregion
};
};