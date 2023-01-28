#include "../SDK.h"
#include "Int32Binding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Int32Binding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UInt32Binding::GetValue()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	struct UInt32Binding_GetValue_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInt32Binding_GetValue_Params params;

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