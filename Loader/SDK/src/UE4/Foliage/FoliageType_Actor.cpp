#include "../SDK.h"
#include "FoliageType_Actor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ActorClass
// Declaration: class AActor* ActorClass
class AActor* UFoliageType_Actor::M_GetActorClass() const {
	return Read<class AActor*>((byte*)this + 944);
}
class AActor** UFoliageType_Actor::M_PtrGetActorClass() {
	return reinterpret_cast<class AActor**>((byte*)this + 944);
}
void UFoliageType_Actor::M_SetActorClass(const class AActor*& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of bShouldAttachToBaseComponent
// Declaration: bool bShouldAttachToBaseComponent
bool UFoliageType_Actor::M_GetbShouldAttachToBaseComponent() const {
	return Read<bool>((byte*)this + 952);
}
bool* UFoliageType_Actor::M_PtrGetbShouldAttachToBaseComponent() {
	return reinterpret_cast<bool*>((byte*)this + 952);
}
void UFoliageType_Actor::M_SetbShouldAttachToBaseComponent(const bool& value) {
	Write((byte*)this + 952, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}