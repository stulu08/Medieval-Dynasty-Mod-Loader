#include "../SDK.h"
#include "SlateVectorArtData.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of VertexData
// Declaration: TArray<struct FSlateMeshVertex> VertexData
TArray<struct FSlateMeshVertex> USlateVectorArtData::M_GetVertexData() const {
	return Read<TArray<struct FSlateMeshVertex>>((byte*)this + 40);
}
TArray<struct FSlateMeshVertex>* USlateVectorArtData::M_PtrGetVertexData() {
	return reinterpret_cast<TArray<struct FSlateMeshVertex>*>((byte*)this + 40);
}
void USlateVectorArtData::M_SetVertexData(const TArray<struct FSlateMeshVertex>& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of IndexData
// Declaration: TArray<uint32_t> IndexData
TArray<uint32_t> USlateVectorArtData::M_GetIndexData() const {
	return Read<TArray<uint32_t>>((byte*)this + 56);
}
TArray<uint32_t>* USlateVectorArtData::M_PtrGetIndexData() {
	return reinterpret_cast<TArray<uint32_t>*>((byte*)this + 56);
}
void USlateVectorArtData::M_SetIndexData(const TArray<uint32_t>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of Material
// Declaration: class UMaterialInterface* Material
class UMaterialInterface* USlateVectorArtData::M_GetMaterial() const {
	return Read<class UMaterialInterface*>((byte*)this + 72);
}
class UMaterialInterface** USlateVectorArtData::M_PtrGetMaterial() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 72);
}
void USlateVectorArtData::M_SetMaterial(const class UMaterialInterface*& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of ExtentMin
// Declaration: struct FVector2D ExtentMin
struct FVector2D USlateVectorArtData::M_GetExtentMin() const {
	return Read<struct FVector2D>((byte*)this + 80);
}
struct FVector2D* USlateVectorArtData::M_PtrGetExtentMin() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 80);
}
void USlateVectorArtData::M_SetExtentMin(const struct FVector2D& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of ExtentMax
// Declaration: struct FVector2D ExtentMax
struct FVector2D USlateVectorArtData::M_GetExtentMax() const {
	return Read<struct FVector2D>((byte*)this + 88);
}
struct FVector2D* USlateVectorArtData::M_PtrGetExtentMax() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 88);
}
void USlateVectorArtData::M_SetExtentMax(const struct FVector2D& value) {
	Write((byte*)this + 88, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}