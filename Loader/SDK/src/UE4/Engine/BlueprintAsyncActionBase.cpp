#include "../SDK.h"
#include "BlueprintAsyncActionBase.h"
namespace UE4 {
	/////////////////////////////////////////////
	// Function Engine.BlueprintAsyncActionBase.Activate
	// Flags: Native, Public, BlueprintCallable
	// Params:
	/////////////////////////////////////////////
	void UBlueprintAsyncActionBase::Activate() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintAsyncActionBase.Activate");

		struct UBlueprintAsyncActionBase_Activate_Params {
		};
		UBlueprintAsyncActionBase_Activate_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}
}