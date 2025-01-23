#include "../SDK.h"
#include "ProceduralFoliageBlockingVolume.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ProceduralFoliageVolume
// Declaration: class AProceduralFoliageVolume* ProceduralFoliageVolume
class AProceduralFoliageVolume* AProceduralFoliageBlockingVolume::M_GetProceduralFoliageVolume() const {
	return Read<class AProceduralFoliageVolume*>((byte*)this + 600);
}
class AProceduralFoliageVolume** AProceduralFoliageBlockingVolume::M_PtrGetProceduralFoliageVolume() {
	return reinterpret_cast<class AProceduralFoliageVolume**>((byte*)this + 600);
}
void AProceduralFoliageBlockingVolume::M_SetProceduralFoliageVolume(const class AProceduralFoliageVolume*& value) {
	Write((byte*)this + 600, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}