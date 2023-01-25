#include "../SDK.h"
#include "CheckedStateBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.CheckedStateBinding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: ECheckBoxState	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ECheckBoxState UCheckedStateBinding::GetValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	struct UCheckedStateBinding_GetValue_Params {
		ECheckBoxState ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCheckedStateBinding_GetValue_Params params;

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