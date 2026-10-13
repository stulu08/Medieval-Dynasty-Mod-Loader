#include "../SDK.h"
#include "SafeZone.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PadLeft
// Declaration: bool PadLeft
bool USafeZone::M_GetPadLeft() const {
	return Read<bool>((byte*)this + 288);
}
bool* USafeZone::M_PtrGetPadLeft() {
	return reinterpret_cast<bool*>((byte*)this + 288);
}
void USafeZone::M_SetPadLeft(const bool& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of PadRight
// Declaration: bool PadRight
bool USafeZone::M_GetPadRight() const {
	return Read<bool>((byte*)this + 289);
}
bool* USafeZone::M_PtrGetPadRight() {
	return reinterpret_cast<bool*>((byte*)this + 289);
}
void USafeZone::M_SetPadRight(const bool& value) {
	Write((byte*)this + 289, value);
}
// Member Getter and Setter of PadTop
// Declaration: bool PadTop
bool USafeZone::M_GetPadTop() const {
	return Read<bool>((byte*)this + 290);
}
bool* USafeZone::M_PtrGetPadTop() {
	return reinterpret_cast<bool*>((byte*)this + 290);
}
void USafeZone::M_SetPadTop(const bool& value) {
	Write((byte*)this + 290, value);
}
// Member Getter and Setter of PadBottom
// Declaration: bool PadBottom
bool USafeZone::M_GetPadBottom() const {
	return Read<bool>((byte*)this + 291);
}
bool* USafeZone::M_PtrGetPadBottom() {
	return reinterpret_cast<bool*>((byte*)this + 291);
}
void USafeZone::M_SetPadBottom(const bool& value) {
	Write((byte*)this + 291, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.SafeZone.SetSidesToPad
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPadLeft	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPadRight	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPadTop	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPadBottom	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	struct USafeZone_SetSidesToPad_Params {
		bool InPadLeft;			//Offset: 0 | ElementSize: 1
		bool InPadRight;			//Offset: 1 | ElementSize: 1
		bool InPadTop;			//Offset: 2 | ElementSize: 1
		bool InPadBottom;			//Offset: 3 | ElementSize: 1
	};
	USafeZone_SetSidesToPad_Params params;
	params.InPadLeft = InPadLeft;
	params.InPadRight = InPadRight;
	params.InPadTop = InPadTop;
	params.InPadBottom = InPadBottom;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}