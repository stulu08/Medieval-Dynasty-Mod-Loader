#include "../SDK.h"
#include "CustomEvent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of tickIntervalForEvent
// Declaration: float tickIntervalForEvent
float UCustomEvent::M_GettickIntervalForEvent() const {
	return Read<float>((byte*)this + 40);
}
float* UCustomEvent::M_PtrGettickIntervalForEvent() {
	return reinterpret_cast<float*>((byte*)this + 40);
}
void UCustomEvent::M_SettickIntervalForEvent(const float& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEvent.EventTrigger
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCustomEvent::EventTrigger(class AActor* Instigator) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEvent.EventTrigger");

	struct UCustomEvent_EventTrigger_Params {
		class AActor* Instigator;			//Offset: 0 | ElementSize: 8
	};
	UCustomEvent_EventTrigger_Params params;
	params.Instigator = Instigator;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}