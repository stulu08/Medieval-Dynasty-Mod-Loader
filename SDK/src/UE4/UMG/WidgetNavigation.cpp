#include "../SDK.h"
#include "WidgetNavigation.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Up
// Declaration: struct FWidgetNavigationData Up
struct FWidgetNavigationData UWidgetNavigation::M_GetUp() const {
	return Read<struct FWidgetNavigationData>((byte*)this + 40);
}
struct FWidgetNavigationData* UWidgetNavigation::M_PtrGetUp() {
	return reinterpret_cast<struct FWidgetNavigationData*>((byte*)this + 40);
}
void UWidgetNavigation::M_SetUp(const struct FWidgetNavigationData& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Down
// Declaration: struct FWidgetNavigationData Down
struct FWidgetNavigationData UWidgetNavigation::M_GetDown() const {
	return Read<struct FWidgetNavigationData>((byte*)this + 76);
}
struct FWidgetNavigationData* UWidgetNavigation::M_PtrGetDown() {
	return reinterpret_cast<struct FWidgetNavigationData*>((byte*)this + 76);
}
void UWidgetNavigation::M_SetDown(const struct FWidgetNavigationData& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of Left
// Declaration: struct FWidgetNavigationData Left
struct FWidgetNavigationData UWidgetNavigation::M_GetLeft() const {
	return Read<struct FWidgetNavigationData>((byte*)this + 112);
}
struct FWidgetNavigationData* UWidgetNavigation::M_PtrGetLeft() {
	return reinterpret_cast<struct FWidgetNavigationData*>((byte*)this + 112);
}
void UWidgetNavigation::M_SetLeft(const struct FWidgetNavigationData& value) {
	Write((byte*)this + 112, value);
}
// Member Getter and Setter of Right
// Declaration: struct FWidgetNavigationData Right
struct FWidgetNavigationData UWidgetNavigation::M_GetRight() const {
	return Read<struct FWidgetNavigationData>((byte*)this + 148);
}
struct FWidgetNavigationData* UWidgetNavigation::M_PtrGetRight() {
	return reinterpret_cast<struct FWidgetNavigationData*>((byte*)this + 148);
}
void UWidgetNavigation::M_SetRight(const struct FWidgetNavigationData& value) {
	Write((byte*)this + 148, value);
}
// Member Getter and Setter of Next
// Declaration: struct FWidgetNavigationData Next
struct FWidgetNavigationData UWidgetNavigation::M_GetNext() const {
	return Read<struct FWidgetNavigationData>((byte*)this + 184);
}
struct FWidgetNavigationData* UWidgetNavigation::M_PtrGetNext() {
	return reinterpret_cast<struct FWidgetNavigationData*>((byte*)this + 184);
}
void UWidgetNavigation::M_SetNext(const struct FWidgetNavigationData& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of Previous
// Declaration: struct FWidgetNavigationData Previous
struct FWidgetNavigationData UWidgetNavigation::M_GetPrevious() const {
	return Read<struct FWidgetNavigationData>((byte*)this + 220);
}
struct FWidgetNavigationData* UWidgetNavigation::M_PtrGetPrevious() {
	return reinterpret_cast<struct FWidgetNavigationData*>((byte*)this + 220);
}
void UWidgetNavigation::M_SetPrevious(const struct FWidgetNavigationData& value) {
	Write((byte*)this + 220, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}