#include "../SDK.h"
#include "VerticalBox.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.VerticalBox.AddChildToVerticalBox
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Content	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UVerticalBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	struct UVerticalBox_AddChildToVerticalBox_Params {
		class UWidget* Content;			//Offset: 0 | ElementSize: 8
		class UVerticalBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UVerticalBox_AddChildToVerticalBox_Params params;
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