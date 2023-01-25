#include "../SDK.h"
#include "TextBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.TextBinding.GetStringValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UTextBinding::GetStringValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	struct UTextBinding_GetStringValue_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UTextBinding_GetStringValue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.TextBinding.GetTextValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: struct FText	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FText UTextBinding::GetTextValue() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	struct UTextBinding_GetTextValue_Params {
		struct FText ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UTextBinding_GetTextValue_Params params;

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