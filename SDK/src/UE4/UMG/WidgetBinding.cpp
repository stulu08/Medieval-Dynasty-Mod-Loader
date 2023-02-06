#include "../SDK.h"
#include "WidgetBinding.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetBinding.GetValue
// Flags: Final, Native, Public, Const
// Params:
// Name: ReturnValue	Type: class UWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidget* UWidgetBinding::GetValue()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	struct UWidgetBinding_GetValue_Params {
		class UWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetBinding_GetValue_Params params;

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