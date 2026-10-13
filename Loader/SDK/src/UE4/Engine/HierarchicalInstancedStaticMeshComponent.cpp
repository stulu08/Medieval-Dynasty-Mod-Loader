#include "../SDK.h"
#include "HierarchicalInstancedStaticMeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SortedInstances
// Declaration: TArray<int32_t> SortedInstances
TArray<int32_t> UHierarchicalInstancedStaticMeshComponent::M_GetSortedInstances() const {
	return Read<TArray<int32_t>>((byte*)this + 1432);
}
TArray<int32_t>* UHierarchicalInstancedStaticMeshComponent::M_PtrGetSortedInstances() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1432);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetSortedInstances(const TArray<int32_t>& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of NumBuiltInstances
// Declaration: int32_t NumBuiltInstances
int32_t UHierarchicalInstancedStaticMeshComponent::M_GetNumBuiltInstances() const {
	return Read<int32_t>((byte*)this + 1448);
}
int32_t* UHierarchicalInstancedStaticMeshComponent::M_PtrGetNumBuiltInstances() {
	return reinterpret_cast<int32_t*>((byte*)this + 1448);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetNumBuiltInstances(const int32_t& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of BuiltInstanceBounds
// Declaration: struct FBox BuiltInstanceBounds
struct FBox UHierarchicalInstancedStaticMeshComponent::M_GetBuiltInstanceBounds() const {
	return Read<struct FBox>((byte*)this + 1456);
}
struct FBox* UHierarchicalInstancedStaticMeshComponent::M_PtrGetBuiltInstanceBounds() {
	return reinterpret_cast<struct FBox*>((byte*)this + 1456);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetBuiltInstanceBounds(const struct FBox& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of UnbuiltInstanceBounds
// Declaration: struct FBox UnbuiltInstanceBounds
struct FBox UHierarchicalInstancedStaticMeshComponent::M_GetUnbuiltInstanceBounds() const {
	return Read<struct FBox>((byte*)this + 1484);
}
struct FBox* UHierarchicalInstancedStaticMeshComponent::M_PtrGetUnbuiltInstanceBounds() {
	return reinterpret_cast<struct FBox*>((byte*)this + 1484);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetUnbuiltInstanceBounds(const struct FBox& value) {
	Write((byte*)this + 1484, value);
}
// Member Getter and Setter of UnbuiltInstanceBoundsList
// Declaration: TArray<struct FBox> UnbuiltInstanceBoundsList
TArray<struct FBox> UHierarchicalInstancedStaticMeshComponent::M_GetUnbuiltInstanceBoundsList() const {
	return Read<TArray<struct FBox>>((byte*)this + 1512);
}
TArray<struct FBox>* UHierarchicalInstancedStaticMeshComponent::M_PtrGetUnbuiltInstanceBoundsList() {
	return reinterpret_cast<TArray<struct FBox>*>((byte*)this + 1512);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetUnbuiltInstanceBoundsList(const TArray<struct FBox>& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of bEnableDensityScaling
// Declaration: unsigned char bEnableDensityScaling : 1
unsigned char UHierarchicalInstancedStaticMeshComponent::M_GetbEnableDensityScaling() const {
	return Read<unsigned char>((byte*)this + 1528);
}
unsigned char* UHierarchicalInstancedStaticMeshComponent::M_PtrGetbEnableDensityScaling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1528);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetbEnableDensityScaling(const unsigned char& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of OcclusionLayerNumNodes
// Declaration: int32_t OcclusionLayerNumNodes
int32_t UHierarchicalInstancedStaticMeshComponent::M_GetOcclusionLayerNumNodes() const {
	return Read<int32_t>((byte*)this + 1536);
}
int32_t* UHierarchicalInstancedStaticMeshComponent::M_PtrGetOcclusionLayerNumNodes() {
	return reinterpret_cast<int32_t*>((byte*)this + 1536);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetOcclusionLayerNumNodes(const int32_t& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of CacheMeshExtendedBounds
// Declaration: struct FBoxSphereBounds CacheMeshExtendedBounds
struct FBoxSphereBounds UHierarchicalInstancedStaticMeshComponent::M_GetCacheMeshExtendedBounds() const {
	return Read<struct FBoxSphereBounds>((byte*)this + 1540);
}
struct FBoxSphereBounds* UHierarchicalInstancedStaticMeshComponent::M_PtrGetCacheMeshExtendedBounds() {
	return reinterpret_cast<struct FBoxSphereBounds*>((byte*)this + 1540);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetCacheMeshExtendedBounds(const struct FBoxSphereBounds& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of bDisableCollision
// Declaration: bool bDisableCollision
bool UHierarchicalInstancedStaticMeshComponent::M_GetbDisableCollision() const {
	return Read<bool>((byte*)this + 1568);
}
bool* UHierarchicalInstancedStaticMeshComponent::M_PtrGetbDisableCollision() {
	return reinterpret_cast<bool*>((byte*)this + 1568);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetbDisableCollision(const bool& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of InstanceCountToRender
// Declaration: int32_t InstanceCountToRender
int32_t UHierarchicalInstancedStaticMeshComponent::M_GetInstanceCountToRender() const {
	return Read<int32_t>((byte*)this + 1572);
}
int32_t* UHierarchicalInstancedStaticMeshComponent::M_PtrGetInstanceCountToRender() {
	return reinterpret_cast<int32_t*>((byte*)this + 1572);
}
void UHierarchicalInstancedStaticMeshComponent::M_SetInstanceCountToRender(const int32_t& value) {
	Write((byte*)this + 1572, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InstancesToRemove	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UHierarchicalInstancedStaticMeshComponent::RemoveInstances(const TArray<int32_t>& InstancesToRemove) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances");

	struct UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Params {
		TArray<int32_t> InstancesToRemove;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Params params;
	params.InstancesToRemove = InstancesToRemove;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}