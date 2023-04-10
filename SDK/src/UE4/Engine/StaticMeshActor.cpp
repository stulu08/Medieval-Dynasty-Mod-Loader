#include "../SDK.h"
#include "StaticMeshActor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of StaticMeshComponent
// Declaration: class UStaticMeshComponent* StaticMeshComponent
class UStaticMeshComponent* AStaticMeshActor::M_GetStaticMeshComponent() const {
	return Read<class UStaticMeshComponent*>((byte*)this + 544);
}
class UStaticMeshComponent** AStaticMeshActor::M_PtrGetStaticMeshComponent() {
	return reinterpret_cast<class UStaticMeshComponent**>((byte*)this + 544);
}
void AStaticMeshActor::M_SetStaticMeshComponent(const class UStaticMeshComponent*& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of bStaticMeshReplicateMovement
// Declaration: bool bStaticMeshReplicateMovement
bool AStaticMeshActor::M_GetbStaticMeshReplicateMovement() const {
	return Read<bool>((byte*)this + 552);
}
bool* AStaticMeshActor::M_PtrGetbStaticMeshReplicateMovement() {
	return reinterpret_cast<bool*>((byte*)this + 552);
}
void AStaticMeshActor::M_SetbStaticMeshReplicateMovement(const bool& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of NavigationGeometryGatheringMode
// Declaration: ENavDataGatheringMode NavigationGeometryGatheringMode
ENavDataGatheringMode AStaticMeshActor::M_GetNavigationGeometryGatheringMode() const {
	return Read<ENavDataGatheringMode>((byte*)this + 553);
}
ENavDataGatheringMode* AStaticMeshActor::M_PtrGetNavigationGeometryGatheringMode() {
	return reinterpret_cast<ENavDataGatheringMode*>((byte*)this + 553);
}
void AStaticMeshActor::M_SetNavigationGeometryGatheringMode(const ENavDataGatheringMode& value) {
	Write((byte*)this + 553, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.StaticMeshActor.SetMobility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMobility	Type: TEnumAsByte<EComponentMobility>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AStaticMeshActor::SetMobility(TEnumAsByte<EComponentMobility> InMobility) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshActor.SetMobility");

	struct AStaticMeshActor_SetMobility_Params {
		TEnumAsByte<EComponentMobility> InMobility;			//Offset: 0 | ElementSize: 1
	};
	AStaticMeshActor_SetMobility_Params params;
	params.InMobility = InMobility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}