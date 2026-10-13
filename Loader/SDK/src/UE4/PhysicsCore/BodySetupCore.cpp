#include "../SDK.h"
#include "BodySetupCore.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BoneName
// Declaration: struct FName BoneName
struct FName UBodySetupCore::M_GetBoneName() const {
	return Read<struct FName>((byte*)this + 40);
}
struct FName* UBodySetupCore::M_PtrGetBoneName() {
	return reinterpret_cast<struct FName*>((byte*)this + 40);
}
void UBodySetupCore::M_SetBoneName(const struct FName& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of PhysicsType
// Declaration: TEnumAsByte<EPhysicsType> PhysicsType
TEnumAsByte<EPhysicsType> UBodySetupCore::M_GetPhysicsType() const {
	return Read<TEnumAsByte<EPhysicsType>>((byte*)this + 48);
}
TEnumAsByte<EPhysicsType>* UBodySetupCore::M_PtrGetPhysicsType() {
	return reinterpret_cast<TEnumAsByte<EPhysicsType>*>((byte*)this + 48);
}
void UBodySetupCore::M_SetPhysicsType(const TEnumAsByte<EPhysicsType>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of CollisionTraceFlag
// Declaration: TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag
TEnumAsByte<ECollisionTraceFlag> UBodySetupCore::M_GetCollisionTraceFlag() const {
	return Read<TEnumAsByte<ECollisionTraceFlag>>((byte*)this + 49);
}
TEnumAsByte<ECollisionTraceFlag>* UBodySetupCore::M_PtrGetCollisionTraceFlag() {
	return reinterpret_cast<TEnumAsByte<ECollisionTraceFlag>*>((byte*)this + 49);
}
void UBodySetupCore::M_SetCollisionTraceFlag(const TEnumAsByte<ECollisionTraceFlag>& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of CollisionReponse
// Declaration: TEnumAsByte<EBodyCollisionResponse> CollisionReponse
TEnumAsByte<EBodyCollisionResponse> UBodySetupCore::M_GetCollisionReponse() const {
	return Read<TEnumAsByte<EBodyCollisionResponse>>((byte*)this + 50);
}
TEnumAsByte<EBodyCollisionResponse>* UBodySetupCore::M_PtrGetCollisionReponse() {
	return reinterpret_cast<TEnumAsByte<EBodyCollisionResponse>*>((byte*)this + 50);
}
void UBodySetupCore::M_SetCollisionReponse(const TEnumAsByte<EBodyCollisionResponse>& value) {
	Write((byte*)this + 50, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}