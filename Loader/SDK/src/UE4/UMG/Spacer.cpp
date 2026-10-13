#include "../SDK.h"
#include "Spacer.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Size
// Declaration: struct FVector2D Size
struct FVector2D USpacer::M_GetSize() const {
	return Read<struct FVector2D>((byte*)this + 264);
}
struct FVector2D* USpacer::M_PtrGetSize() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 264);
}
void USpacer::M_SetSize(const struct FVector2D& value) {
	Write((byte*)this + 264, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Spacer.SetSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InSize	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USpacer::SetSize(struct FVector2D InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	struct USpacer_SetSize_Params {
		struct FVector2D InSize;			//Offset: 0 | ElementSize: 8
	};
	USpacer_SetSize_Params params;
	params.InSize = InSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}