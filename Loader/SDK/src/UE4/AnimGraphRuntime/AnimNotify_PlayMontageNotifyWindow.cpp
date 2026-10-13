#include "../SDK.h"
#include "AnimNotify_PlayMontageNotifyWindow.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NotifyName
// Declaration: struct FName NotifyName
struct FName UAnimNotify_PlayMontageNotifyWindow::M_GetNotifyName() const {
	return Read<struct FName>((byte*)this + 48);
}
struct FName* UAnimNotify_PlayMontageNotifyWindow::M_PtrGetNotifyName() {
	return reinterpret_cast<struct FName*>((byte*)this + 48);
}
void UAnimNotify_PlayMontageNotifyWindow::M_SetNotifyName(const struct FName& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}