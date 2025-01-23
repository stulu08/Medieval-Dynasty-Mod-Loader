#include "../SDK.h"
#include "PerceptionSense.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of IsEnabled
// Declaration: bool IsEnabled
bool UPerceptionSense::M_GetIsEnabled() const {
	return Read<bool>((byte*)this + 128);
}
bool* UPerceptionSense::M_PtrGetIsEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 128);
}
void UPerceptionSense::M_SetIsEnabled(const bool& value) {
	Write((byte*)this + 128, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UPerceptionSense::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 129);
}
bool* UPerceptionSense::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 129);
}
void UPerceptionSense::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 129, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSense.IsEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPerceptionSense::IsEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSense.IsEnabled");

	struct UPerceptionSense_IsEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPerceptionSense_IsEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSense.SetIsEnabled
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newIsEnabled	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSense::SetIsEnabled(bool newIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSense.SetIsEnabled");

	struct UPerceptionSense_SetIsEnabled_Params {
		bool newIsEnabled;			//Offset: 0 | ElementSize: 1
	};
	UPerceptionSense_SetIsEnabled_Params params;
	params.newIsEnabled = newIsEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}