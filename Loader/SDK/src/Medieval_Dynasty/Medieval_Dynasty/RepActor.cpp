#include "../SDK.h"
#include "RepActor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bUseCustomMovementGather
// Declaration: bool bUseCustomMovementGather
bool ARepActor::M_GetbUseCustomMovementGather() const {
	return Read<bool>((byte*)this + 544);
}
bool* ARepActor::M_PtrGetbUseCustomMovementGather() {
	return reinterpret_cast<bool*>((byte*)this + 544);
}
void ARepActor::M_SetbUseCustomMovementGather(const bool& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of InterpolationComponent
// Declaration: class UInterpComp* InterpolationComponent
class UInterpComp* ARepActor::M_GetInterpolationComponent() const {
	return Read<class UInterpComp*>((byte*)this + 552);
}
class UInterpComp** ARepActor::M_PtrGetInterpolationComponent() {
	return reinterpret_cast<class UInterpComp**>((byte*)this + 552);
}
void ARepActor::M_SetInterpolationComponent(const class UInterpComp*& value) {
	Write((byte*)this + 552, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.RepActor.AfterAttachmentReplication
// Flags: Event, Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ARepActor::AfterAttachmentReplication() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RepActor.AfterAttachmentReplication");

	struct ARepActor_AfterAttachmentReplication_Params {
	};
	ARepActor_AfterAttachmentReplication_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RepActor.BeforeAttachmentReplication
// Flags: Event, Protected, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ARepActor::BeforeAttachmentReplication() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RepActor.BeforeAttachmentReplication");

	struct ARepActor_BeforeAttachmentReplication_Params {
	};
	ARepActor_BeforeAttachmentReplication_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}