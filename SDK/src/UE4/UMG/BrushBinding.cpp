#include "../SDK.h"
#include "BrushBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.BrushBinding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: struct FSlateBrush	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateBrush UBrushBinding::GetValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	struct UBrushBinding_GetValue_Params {
		struct FSlateBrush ReturnValue;			//Offset: 0 | ElementSize: 136
	};
	UBrushBinding_GetValue_Params params;

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