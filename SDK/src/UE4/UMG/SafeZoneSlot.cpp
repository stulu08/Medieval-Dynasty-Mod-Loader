#include "../SDK.h"
#include "SafeZoneSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bIsTitleSafe
// Declaration: bool bIsTitleSafe
bool USafeZoneSlot::M_GetbIsTitleSafe() const {
	return Read<bool>((byte*)this + 56);
}
bool* USafeZoneSlot::M_PtrGetbIsTitleSafe() {
	return reinterpret_cast<bool*>((byte*)this + 56);
}
void USafeZoneSlot::M_SetbIsTitleSafe(const bool& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of SafeAreaScale
// Declaration: struct FMargin SafeAreaScale
struct FMargin USafeZoneSlot::M_GetSafeAreaScale() const {
	return Read<struct FMargin>((byte*)this + 60);
}
struct FMargin* USafeZoneSlot::M_PtrGetSafeAreaScale() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 60);
}
void USafeZoneSlot::M_SetSafeAreaScale(const struct FMargin& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of HAlign
// Declaration: TEnumAsByte<EHorizontalAlignment> HAlign
TEnumAsByte<EHorizontalAlignment> USafeZoneSlot::M_GetHAlign() const {
	return Read<TEnumAsByte<EHorizontalAlignment>>((byte*)this + 76);
}
TEnumAsByte<EHorizontalAlignment>* USafeZoneSlot::M_PtrGetHAlign() {
	return reinterpret_cast<TEnumAsByte<EHorizontalAlignment>*>((byte*)this + 76);
}
void USafeZoneSlot::M_SetHAlign(const TEnumAsByte<EHorizontalAlignment>& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of VAlign
// Declaration: TEnumAsByte<EVerticalAlignment> VAlign
TEnumAsByte<EVerticalAlignment> USafeZoneSlot::M_GetVAlign() const {
	return Read<TEnumAsByte<EVerticalAlignment>>((byte*)this + 77);
}
TEnumAsByte<EVerticalAlignment>* USafeZoneSlot::M_PtrGetVAlign() {
	return reinterpret_cast<TEnumAsByte<EVerticalAlignment>*>((byte*)this + 77);
}
void USafeZoneSlot::M_SetVAlign(const TEnumAsByte<EVerticalAlignment>& value) {
	Write((byte*)this + 77, value);
}
// Member Getter and Setter of Padding
// Declaration: struct FMargin Padding
struct FMargin USafeZoneSlot::M_GetPadding() const {
	return Read<struct FMargin>((byte*)this + 80);
}
struct FMargin* USafeZoneSlot::M_PtrGetPadding() {
	return reinterpret_cast<struct FMargin*>((byte*)this + 80);
}
void USafeZoneSlot::M_SetPadding(const struct FMargin& value) {
	Write((byte*)this + 80, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}