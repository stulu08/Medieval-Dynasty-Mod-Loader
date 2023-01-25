#include "../SDK.h"
#include "InvalidationBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bCanCache
// Declaration: bool bCanCache
bool UInvalidationBox::M_GetbCanCache() const {
	return Read<bool>((byte*)this + 288);
}
bool* UInvalidationBox::M_PtrGetbCanCache() {
	return reinterpret_cast<bool*>((byte*)this + 288);
}
void UInvalidationBox::M_SetbCanCache(const bool& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of CacheRelativeTransforms
// Declaration: bool CacheRelativeTransforms
bool UInvalidationBox::M_GetCacheRelativeTransforms() const {
	return Read<bool>((byte*)this + 289);
}
bool* UInvalidationBox::M_PtrGetCacheRelativeTransforms() {
	return reinterpret_cast<bool*>((byte*)this + 289);
}
void UInvalidationBox::M_SetCacheRelativeTransforms(const bool& value) {
	Write((byte*)this + 289, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.InvalidationBox.GetCanCache
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInvalidationBox::GetCanCache() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	struct UInvalidationBox_GetCanCache_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UInvalidationBox_GetCanCache_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.InvalidationBox.InvalidateCache
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UInvalidationBox::InvalidateCache() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	struct UInvalidationBox_InvalidateCache_Params {
	};
	UInvalidationBox_InvalidateCache_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.InvalidationBox.SetCanCache
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: CanCache	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInvalidationBox::SetCanCache(bool CanCache) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	struct UInvalidationBox_SetCanCache_Params {
		bool CanCache;			//Offset: 0 | ElementSize: 1
	};
	UInvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}