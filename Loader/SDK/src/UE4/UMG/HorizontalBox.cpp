#include "../SDK.h"
#include "HorizontalBox.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.HorizontalBox.AddChildToHorizontalBox
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UHorizontalBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	struct UHorizontalBox_AddChildToHorizontalBox_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		class UHorizontalBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

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