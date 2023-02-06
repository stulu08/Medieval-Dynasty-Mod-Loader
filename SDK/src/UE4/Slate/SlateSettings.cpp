#include "../SDK.h"
#include "SlateSettings.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bExplicitCanvasChildZOrder
// Declaration: bool bExplicitCanvasChildZOrder
bool USlateSettings::M_GetbExplicitCanvasChildZOrder() const {
	return Read<bool>((byte*)this + 40);
}
bool* USlateSettings::M_PtrGetbExplicitCanvasChildZOrder() {
	return reinterpret_cast<bool*>((byte*)this + 40);
}
void USlateSettings::M_SetbExplicitCanvasChildZOrder(const bool& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}