#include "../SDK.h"
#include "AnimPhysicsLimitsDataAsset.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SphericalLimits
// Declaration: TArray<struct FSphericalLimit> SphericalLimits
TArray<struct FSphericalLimit> UAnimPhysicsLimitsDataAsset::M_GetSphericalLimits() const {
	return Read<TArray<struct FSphericalLimit>>((byte*)this + 48);
}
TArray<struct FSphericalLimit>* UAnimPhysicsLimitsDataAsset::M_PtrGetSphericalLimits() {
	return reinterpret_cast<TArray<struct FSphericalLimit>*>((byte*)this + 48);
}
void UAnimPhysicsLimitsDataAsset::M_SetSphericalLimits(const TArray<struct FSphericalLimit>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of CapsuleLimits
// Declaration: TArray<struct FCapsuleLimit> CapsuleLimits
TArray<struct FCapsuleLimit> UAnimPhysicsLimitsDataAsset::M_GetCapsuleLimits() const {
	return Read<TArray<struct FCapsuleLimit>>((byte*)this + 64);
}
TArray<struct FCapsuleLimit>* UAnimPhysicsLimitsDataAsset::M_PtrGetCapsuleLimits() {
	return reinterpret_cast<TArray<struct FCapsuleLimit>*>((byte*)this + 64);
}
void UAnimPhysicsLimitsDataAsset::M_SetCapsuleLimits(const TArray<struct FCapsuleLimit>& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of PlanarLimits
// Declaration: TArray<struct FPlanarLimit> PlanarLimits
TArray<struct FPlanarLimit> UAnimPhysicsLimitsDataAsset::M_GetPlanarLimits() const {
	return Read<TArray<struct FPlanarLimit>>((byte*)this + 80);
}
TArray<struct FPlanarLimit>* UAnimPhysicsLimitsDataAsset::M_PtrGetPlanarLimits() {
	return reinterpret_cast<TArray<struct FPlanarLimit>*>((byte*)this + 80);
}
void UAnimPhysicsLimitsDataAsset::M_SetPlanarLimits(const TArray<struct FPlanarLimit>& value) {
	Write((byte*)this + 80, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}