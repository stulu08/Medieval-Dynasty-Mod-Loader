#include "../SDK.h"
#include "ColorBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.ColorBinding.GetLinearValue
// Flags: Final, Native, Public, HasDefaults, Const
// Params:
// Name: ReturnValue	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FLinearColor UColorBinding::GetLinearValue()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	struct UColorBinding_GetLinearValue_Params {
		struct FLinearColor ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UColorBinding_GetLinearValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.ColorBinding.GetSlateValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: struct FSlateColor	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateColor UColorBinding::GetSlateValue()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	struct UColorBinding_GetSlateValue_Params {
		struct FSlateColor ReturnValue;			//Offset: 0 | ElementSize: 40
	};
	UColorBinding_GetSlateValue_Params params;

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