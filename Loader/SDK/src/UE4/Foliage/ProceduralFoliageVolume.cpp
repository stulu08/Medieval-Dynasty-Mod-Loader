#include "../SDK.h"
#include "ProceduralFoliageVolume.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ProceduralComponent
// Declaration: class UProceduralFoliageComponent* ProceduralComponent
class UProceduralFoliageComponent* AProceduralFoliageVolume::M_GetProceduralComponent() const {
	return Read<class UProceduralFoliageComponent*>((byte*)this + 600);
}
class UProceduralFoliageComponent** AProceduralFoliageVolume::M_PtrGetProceduralComponent() {
	return reinterpret_cast<class UProceduralFoliageComponent**>((byte*)this + 600);
}
void AProceduralFoliageVolume::M_SetProceduralComponent(const class UProceduralFoliageComponent*& value) {
	Write((byte*)this + 600, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}