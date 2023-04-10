#include "../SDK.h"
#include "Boost.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of isActivated
// Declaration: bool isActivated
bool UBoost::M_GetisActivated() const {
	return Read<bool>((byte*)this + 180);
}
bool* UBoost::M_PtrGetisActivated() {
	return reinterpret_cast<bool*>((byte*)this + 180);
}
void UBoost::M_SetisActivated(const bool& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of ignoreRenderVisibility
// Declaration: bool ignoreRenderVisibility
bool UBoost::M_GetignoreRenderVisibility() const {
	return Read<bool>((byte*)this + 181);
}
bool* UBoost::M_PtrGetignoreRenderVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 181);
}
void UBoost::M_SetignoreRenderVisibility(const bool& value) {
	Write((byte*)this + 181, value);
}
// Member Getter and Setter of optimizationStage
// Declaration: int32_t optimizationStage
int32_t UBoost::M_GetoptimizationStage() const {
	return Read<int32_t>((byte*)this + 184);
}
int32_t* UBoost::M_PtrGetoptimizationStage() {
	return reinterpret_cast<int32_t*>((byte*)this + 184);
}
void UBoost::M_SetoptimizationStage(const int32_t& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of activeStage
// Declaration: int32_t activeStage
int32_t UBoost::M_GetactiveStage() const {
	return Read<int32_t>((byte*)this + 188);
}
int32_t* UBoost::M_PtrGetactiveStage() {
	return reinterpret_cast<int32_t*>((byte*)this + 188);
}
void UBoost::M_SetactiveStage(const int32_t& value) {
	Write((byte*)this + 188, value);
}
// Member Getter and Setter of Distance
// Declaration: float Distance
float UBoost::M_GetDistance() const {
	return Read<float>((byte*)this + 192);
}
float* UBoost::M_PtrGetDistance() {
	return reinterpret_cast<float*>((byte*)this + 192);
}
void UBoost::M_SetDistance(const float& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of closeRadiusForDisplay
// Declaration: float closeRadiusForDisplay
float UBoost::M_GetcloseRadiusForDisplay() const {
	return Read<float>((byte*)this + 196);
}
float* UBoost::M_PtrGetcloseRadiusForDisplay() {
	return reinterpret_cast<float*>((byte*)this + 196);
}
void UBoost::M_SetcloseRadiusForDisplay(const float& value) {
	Write((byte*)this + 196, value);
}
// Member Getter and Setter of mediumRadiusForDisplay
// Declaration: float mediumRadiusForDisplay
float UBoost::M_GetmediumRadiusForDisplay() const {
	return Read<float>((byte*)this + 200);
}
float* UBoost::M_PtrGetmediumRadiusForDisplay() {
	return reinterpret_cast<float*>((byte*)this + 200);
}
void UBoost::M_SetmediumRadiusForDisplay(const float& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of farRadiusForDisplay
// Declaration: float farRadiusForDisplay
float UBoost::M_GetfarRadiusForDisplay() const {
	return Read<float>((byte*)this + 204);
}
float* UBoost::M_PtrGetfarRadiusForDisplay() {
	return reinterpret_cast<float*>((byte*)this + 204);
}
void UBoost::M_SetfarRadiusForDisplay(const float& value) {
	Write((byte*)this + 204, value);
}
// Member Getter and Setter of activeRadius
// Declaration: float activeRadius
float UBoost::M_GetactiveRadius() const {
	return Read<float>((byte*)this + 208);
}
float* UBoost::M_PtrGetactiveRadius() {
	return reinterpret_cast<float*>((byte*)this + 208);
}
void UBoost::M_SetactiveRadius(const float& value) {
	Write((byte*)this + 208, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.ActivateStage0
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::ActivateStage0() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.ActivateStage0");

	struct UBoost_ActivateStage0_Params {
	};
	UBoost_ActivateStage0_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.ActivateStage1
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::ActivateStage1() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.ActivateStage1");

	struct UBoost_ActivateStage1_Params {
	};
	UBoost_ActivateStage1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.ActivateStage2
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::ActivateStage2() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.ActivateStage2");

	struct UBoost_ActivateStage2_Params {
	};
	UBoost_ActivateStage2_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.ActivateStage3
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::ActivateStage3() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.ActivateStage3");

	struct UBoost_ActivateStage3_Params {
	};
	UBoost_ActivateStage3_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.ActivateStage4
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::ActivateStage4() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.ActivateStage4");

	struct UBoost_ActivateStage4_Params {
	};
	UBoost_ActivateStage4_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.AfterActivation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::AfterActivation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.AfterActivation");

	struct UBoost_AfterActivation_Params {
	};
	UBoost_AfterActivation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.AfterDeactivation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::AfterDeactivation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.AfterDeactivation");

	struct UBoost_AfterDeactivation_Params {
	};
	UBoost_AfterDeactivation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.AfterInitialActivation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::AfterInitialActivation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.AfterInitialActivation");

	struct UBoost_AfterInitialActivation_Params {
	};
	UBoost_AfterInitialActivation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.AfterInitialDeactivation
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBoost::AfterInitialDeactivation() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.AfterInitialDeactivation");

	struct UBoost_AfterInitialDeactivation_Params {
	};
	UBoost_AfterInitialDeactivation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.CalculateDistanceForDisplay
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBoost::CalculateDistanceForDisplay() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.CalculateDistanceForDisplay");

	struct UBoost_CalculateDistanceForDisplay_Params {
	};
	UBoost_CalculateDistanceForDisplay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.DistanceCheckForDisplayNPC
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBoost::DistanceCheckForDisplayNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.DistanceCheckForDisplayNPC");

	struct UBoost_DistanceCheckForDisplayNPC_Params {
	};
	UBoost_DistanceCheckForDisplayNPC_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.GetCurrentViewDistanceScaleLevel
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UBoost::GetCurrentViewDistanceScaleLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.GetCurrentViewDistanceScaleLevel");

	struct UBoost_GetCurrentViewDistanceScaleLevel_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBoost_GetCurrentViewDistanceScaleLevel_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.Boost.InitialDistanceCheckForDisplayNPC
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBoost::InitialDistanceCheckForDisplayNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.Boost.InitialDistanceCheckForDisplayNPC");

	struct UBoost_InitialDistanceCheckForDisplayNPC_Params {
	};
	UBoost_InitialDistanceCheckForDisplayNPC_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}