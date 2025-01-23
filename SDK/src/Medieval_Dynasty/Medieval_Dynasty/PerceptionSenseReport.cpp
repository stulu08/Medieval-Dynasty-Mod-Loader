#include "../SDK.h"
#include "PerceptionSenseReport.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Range
// Declaration: float Range
float UPerceptionSenseReport::M_GetRange() const {
	return Read<float>((byte*)this + 168);
}
float* UPerceptionSenseReport::M_PtrGetRange() {
	return reinterpret_cast<float*>((byte*)this + 168);
}
void UPerceptionSenseReport::M_SetRange(const float& value) {
	Write((byte*)this + 168, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSenseReport.OnActorSensed
// Flags: Final, Native, Protected, HasOutParms
// Params:
// Name: sensedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: sensedBySenseClass	Type: class UPerceptionSense*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: senseStimulationData	Type: struct FPerceptionSenseStimulationData	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSenseReport::OnActorSensed(class AActor* sensedActor, class UPerceptionSense* sensedBySenseClass, const struct FPerceptionSenseStimulationData& senseStimulationData) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSenseReport.OnActorSensed");

	struct UPerceptionSenseReport_OnActorSensed_Params {
		class AActor* sensedActor;			//Offset: 0 | ElementSize: 8
		class UPerceptionSense* sensedBySenseClass;			//Offset: 8 | ElementSize: 8
		struct FPerceptionSenseStimulationData senseStimulationData;			//Offset: 16 | ElementSize: 56
	};
	UPerceptionSenseReport_OnActorSensed_Params params;
	params.sensedActor = sensedActor;
	params.sensedBySenseClass = sensedBySenseClass;
	params.senseStimulationData = senseStimulationData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}