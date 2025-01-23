#include "../SDK.h"
#include "FoliageInstancedStaticMeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnInstanceTakePointDamage
// Declaration: TAssetPtr<class FInstancePointDamageSignature__DelegateSignature> OnInstanceTakePointDamage
TAssetPtr<class FInstancePointDamageSignature__DelegateSignature> UFoliageInstancedStaticMeshComponent::M_GetOnInstanceTakePointDamage() const {
	return Read<TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>>((byte*)this + 1656);
}
TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>* UFoliageInstancedStaticMeshComponent::M_PtrGetOnInstanceTakePointDamage() {
	return reinterpret_cast<TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>*>((byte*)this + 1656);
}
void UFoliageInstancedStaticMeshComponent::M_SetOnInstanceTakePointDamage(const TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>& value) {
	Write((byte*)this + 1656, value);
}
// Member Getter and Setter of OnInstanceTakeRadialDamage
// Declaration: TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature> OnInstanceTakeRadialDamage
TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature> UFoliageInstancedStaticMeshComponent::M_GetOnInstanceTakeRadialDamage() const {
	return Read<TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>>((byte*)this + 1672);
}
TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>* UFoliageInstancedStaticMeshComponent::M_PtrGetOnInstanceTakeRadialDamage() {
	return reinterpret_cast<TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>*>((byte*)this + 1672);
}
void UFoliageInstancedStaticMeshComponent::M_SetOnInstanceTakeRadialDamage(const TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of GenerationGuid
// Declaration: struct FGuid GenerationGuid
struct FGuid UFoliageInstancedStaticMeshComponent::M_GetGenerationGuid() const {
	return Read<struct FGuid>((byte*)this + 1688);
}
struct FGuid* UFoliageInstancedStaticMeshComponent::M_PtrGetGenerationGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 1688);
}
void UFoliageInstancedStaticMeshComponent::M_SetGenerationGuid(const struct FGuid& value) {
	Write((byte*)this + 1688, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}