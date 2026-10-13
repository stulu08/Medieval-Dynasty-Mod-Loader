#include "../SDK.h"
#include "AnimNotify_PlayMontageNotify.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NotifyName
// Declaration: struct FName NotifyName
struct FName UAnimNotify_PlayMontageNotify::M_GetNotifyName() const {
	return Read<struct FName>((byte*)this + 56);
}
struct FName* UAnimNotify_PlayMontageNotify::M_PtrGetNotifyName() {
	return reinterpret_cast<struct FName*>((byte*)this + 56);
}
void UAnimNotify_PlayMontageNotify::M_SetNotifyName(const struct FName& value) {
	Write((byte*)this + 56, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}