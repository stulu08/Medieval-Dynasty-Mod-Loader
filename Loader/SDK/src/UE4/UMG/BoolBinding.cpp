#include "../SDK.h"
#include "BoolBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.BoolBinding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBoolBinding::GetValue()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	struct UBoolBinding_GetValue_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBoolBinding_GetValue_Params params;

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