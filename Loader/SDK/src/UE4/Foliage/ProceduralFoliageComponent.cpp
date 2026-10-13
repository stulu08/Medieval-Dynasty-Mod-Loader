#include "../SDK.h"
#include "ProceduralFoliageComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FoliageSpawner
// Declaration: class UProceduralFoliageSpawner* FoliageSpawner
class UProceduralFoliageSpawner* UProceduralFoliageComponent::M_GetFoliageSpawner() const {
	return Read<class UProceduralFoliageSpawner*>((byte*)this + 176);
}
class UProceduralFoliageSpawner** UProceduralFoliageComponent::M_PtrGetFoliageSpawner() {
	return reinterpret_cast<class UProceduralFoliageSpawner**>((byte*)this + 176);
}
void UProceduralFoliageComponent::M_SetFoliageSpawner(const class UProceduralFoliageSpawner*& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of TileOverlap
// Declaration: float TileOverlap
float UProceduralFoliageComponent::M_GetTileOverlap() const {
	return Read<float>((byte*)this + 184);
}
float* UProceduralFoliageComponent::M_PtrGetTileOverlap() {
	return reinterpret_cast<float*>((byte*)this + 184);
}
void UProceduralFoliageComponent::M_SetTileOverlap(const float& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of SpawningVolume
// Declaration: class AVolume* SpawningVolume
class AVolume* UProceduralFoliageComponent::M_GetSpawningVolume() const {
	return Read<class AVolume*>((byte*)this + 192);
}
class AVolume** UProceduralFoliageComponent::M_PtrGetSpawningVolume() {
	return reinterpret_cast<class AVolume**>((byte*)this + 192);
}
void UProceduralFoliageComponent::M_SetSpawningVolume(const class AVolume*& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of ProceduralGuid
// Declaration: struct FGuid ProceduralGuid
struct FGuid UProceduralFoliageComponent::M_GetProceduralGuid() const {
	return Read<struct FGuid>((byte*)this + 200);
}
struct FGuid* UProceduralFoliageComponent::M_PtrGetProceduralGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 200);
}
void UProceduralFoliageComponent::M_SetProceduralGuid(const struct FGuid& value) {
	Write((byte*)this + 200, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}