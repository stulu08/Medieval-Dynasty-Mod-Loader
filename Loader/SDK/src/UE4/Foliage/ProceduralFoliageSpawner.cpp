#include "../SDK.h"
#include "ProceduralFoliageSpawner.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of RandomSeed
// Declaration: int32_t RandomSeed
int32_t UProceduralFoliageSpawner::M_GetRandomSeed() const {
	return Read<int32_t>((byte*)this + 40);
}
int32_t* UProceduralFoliageSpawner::M_PtrGetRandomSeed() {
	return reinterpret_cast<int32_t*>((byte*)this + 40);
}
void UProceduralFoliageSpawner::M_SetRandomSeed(const int32_t& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of TileSize
// Declaration: float TileSize
float UProceduralFoliageSpawner::M_GetTileSize() const {
	return Read<float>((byte*)this + 44);
}
float* UProceduralFoliageSpawner::M_PtrGetTileSize() {
	return reinterpret_cast<float*>((byte*)this + 44);
}
void UProceduralFoliageSpawner::M_SetTileSize(const float& value) {
	Write((byte*)this + 44, value);
}
// Member Getter and Setter of NumUniqueTiles
// Declaration: int32_t NumUniqueTiles
int32_t UProceduralFoliageSpawner::M_GetNumUniqueTiles() const {
	return Read<int32_t>((byte*)this + 48);
}
int32_t* UProceduralFoliageSpawner::M_PtrGetNumUniqueTiles() {
	return reinterpret_cast<int32_t*>((byte*)this + 48);
}
void UProceduralFoliageSpawner::M_SetNumUniqueTiles(const int32_t& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of MinimumQuadTreeSize
// Declaration: float MinimumQuadTreeSize
float UProceduralFoliageSpawner::M_GetMinimumQuadTreeSize() const {
	return Read<float>((byte*)this + 52);
}
float* UProceduralFoliageSpawner::M_PtrGetMinimumQuadTreeSize() {
	return reinterpret_cast<float*>((byte*)this + 52);
}
void UProceduralFoliageSpawner::M_SetMinimumQuadTreeSize(const float& value) {
	Write((byte*)this + 52, value);
}
// Member Getter and Setter of FoliageTypes
// Declaration: TArray<struct FFoliageTypeObject> FoliageTypes
TArray<struct FFoliageTypeObject> UProceduralFoliageSpawner::M_GetFoliageTypes() const {
	return Read<TArray<struct FFoliageTypeObject>>((byte*)this + 64);
}
TArray<struct FFoliageTypeObject>* UProceduralFoliageSpawner::M_PtrGetFoliageTypes() {
	return reinterpret_cast<TArray<struct FFoliageTypeObject>*>((byte*)this + 64);
}
void UProceduralFoliageSpawner::M_SetFoliageTypes(const TArray<struct FFoliageTypeObject>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Foliage.ProceduralFoliageSpawner.Simulate
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NumSteps	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	struct UProceduralFoliageSpawner_Simulate_Params {
		int32_t NumSteps;			//Offset: 0 | ElementSize: 4
	};
	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}