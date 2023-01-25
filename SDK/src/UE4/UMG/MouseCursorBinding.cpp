#include "../SDK.h"
#include "MouseCursorBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.MouseCursorBinding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<EMouseCursor>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EMouseCursor> UMouseCursorBinding::GetValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	struct UMouseCursorBinding_GetValue_Params {
		TEnumAsByte<EMouseCursor> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMouseCursorBinding_GetValue_Params params;

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