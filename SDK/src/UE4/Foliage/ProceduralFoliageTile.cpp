#include "../SDK.h"
#include "ProceduralFoliageTile.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FoliageSpawner
// Declaration: class UProceduralFoliageSpawner* FoliageSpawner
class UProceduralFoliageSpawner* UProceduralFoliageTile::M_GetFoliageSpawner() const {
	return Read<class UProceduralFoliageSpawner*>((byte*)this + 40);
}
class UProceduralFoliageSpawner** UProceduralFoliageTile::M_PtrGetFoliageSpawner() {
	return reinterpret_cast<class UProceduralFoliageSpawner**>((byte*)this + 40);
}
void UProceduralFoliageTile::M_SetFoliageSpawner(const class UProceduralFoliageSpawner*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of InstancesArray
// Declaration: TArray<struct FProceduralFoliageInstance> InstancesArray
TArray<struct FProceduralFoliageInstance> UProceduralFoliageTile::M_GetInstancesArray() const {
	return Read<TArray<struct FProceduralFoliageInstance>>((byte*)this + 208);
}
TArray<struct FProceduralFoliageInstance>* UProceduralFoliageTile::M_PtrGetInstancesArray() {
	return reinterpret_cast<TArray<struct FProceduralFoliageInstance>*>((byte*)this + 208);
}
void UProceduralFoliageTile::M_SetInstancesArray(const TArray<struct FProceduralFoliageInstance>& value) {
	Write((byte*)this + 208, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}