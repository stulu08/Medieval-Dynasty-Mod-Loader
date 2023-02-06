#include "../SDK.h"
#include "MD_SpringArmComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of LocationConstraints
// Declaration: struct FLagContraint LocationConstraints
struct FLagContraint UMD_SpringArmComponent::M_GetLocationConstraints() const {
	return Read<struct FLagContraint>((byte*)this + 640);
}
struct FLagContraint* UMD_SpringArmComponent::M_PtrGetLocationConstraints() {
	return reinterpret_cast<struct FLagContraint*>((byte*)this + 640);
}
void UMD_SpringArmComponent::M_SetLocationConstraints(const struct FLagContraint& value) {
	Write((byte*)this + 640, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}