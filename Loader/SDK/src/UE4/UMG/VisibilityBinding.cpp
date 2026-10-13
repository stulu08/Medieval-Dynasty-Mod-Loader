#include "../SDK.h"
#include "VisibilityBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.VisibilityBinding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: ESlateVisibility	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ESlateVisibility UVisibilityBinding::GetValue()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	struct UVisibilityBinding_GetValue_Params {
		ESlateVisibility ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UVisibilityBinding_GetValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}