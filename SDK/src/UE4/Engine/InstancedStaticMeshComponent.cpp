#include "../SDK.h"
#include "InstancedStaticMeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PerInstanceSMData
// Declaration: TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData
TArray<struct FInstancedStaticMeshInstanceData> UInstancedStaticMeshComponent::M_GetPerInstanceSMData() const {
	return Read<TArray<struct FInstancedStaticMeshInstanceData>>((byte*)this + 1248);
}
TArray<struct FInstancedStaticMeshInstanceData>* UInstancedStaticMeshComponent::M_PtrGetPerInstanceSMData() {
	return reinterpret_cast<TArray<struct FInstancedStaticMeshInstanceData>*>((byte*)this + 1248);
}
void UInstancedStaticMeshComponent::M_SetPerInstanceSMData(const TArray<struct FInstancedStaticMeshInstanceData>& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of NumCustomDataFloats
// Declaration: int32_t NumCustomDataFloats
int32_t UInstancedStaticMeshComponent::M_GetNumCustomDataFloats() const {
	return Read<int32_t>((byte*)this + 1264);
}
int32_t* UInstancedStaticMeshComponent::M_PtrGetNumCustomDataFloats() {
	return reinterpret_cast<int32_t*>((byte*)this + 1264);
}
void UInstancedStaticMeshComponent::M_SetNumCustomDataFloats(const int32_t& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of PerInstanceSMCustomData
// Declaration: TArray<float> PerInstanceSMCustomData
TArray<float> UInstancedStaticMeshComponent::M_GetPerInstanceSMCustomData() const {
	return Read<TArray<float>>((byte*)this + 1272);
}
TArray<float>* UInstancedStaticMeshComponent::M_PtrGetPerInstanceSMCustomData() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1272);
}
void UInstancedStaticMeshComponent::M_SetPerInstanceSMCustomData(const TArray<float>& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of InstancingRandomSeed
// Declaration: int32_t InstancingRandomSeed
int32_t UInstancedStaticMeshComponent::M_GetInstancingRandomSeed() const {
	return Read<int32_t>((byte*)this + 1288);
}
int32_t* UInstancedStaticMeshComponent::M_PtrGetInstancingRandomSeed() {
	return reinterpret_cast<int32_t*>((byte*)this + 1288);
}
void UInstancedStaticMeshComponent::M_SetInstancingRandomSeed(const int32_t& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of InstanceStartCullDistance
// Declaration: int32_t InstanceStartCullDistance
int32_t UInstancedStaticMeshComponent::M_GetInstanceStartCullDistance() const {
	return Read<int32_t>((byte*)this + 1292);
}
int32_t* UInstancedStaticMeshComponent::M_PtrGetInstanceStartCullDistance() {
	return reinterpret_cast<int32_t*>((byte*)this + 1292);
}
void UInstancedStaticMeshComponent::M_SetInstanceStartCullDistance(const int32_t& value) {
	Write((byte*)this + 1292, value);
}
// Member Getter and Setter of InstanceEndCullDistance
// Declaration: int32_t InstanceEndCullDistance
int32_t UInstancedStaticMeshComponent::M_GetInstanceEndCullDistance() const {
	return Read<int32_t>((byte*)this + 1296);
}
int32_t* UInstancedStaticMeshComponent::M_PtrGetInstanceEndCullDistance() {
	return reinterpret_cast<int32_t*>((byte*)this + 1296);
}
void UInstancedStaticMeshComponent::M_SetInstanceEndCullDistance(const int32_t& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of InstanceReorderTable
// Declaration: TArray<int32_t> InstanceReorderTable
TArray<int32_t> UInstancedStaticMeshComponent::M_GetInstanceReorderTable() const {
	return Read<TArray<int32_t>>((byte*)this + 1304);
}
TArray<int32_t>* UInstancedStaticMeshComponent::M_PtrGetInstanceReorderTable() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1304);
}
void UInstancedStaticMeshComponent::M_SetInstanceReorderTable(const TArray<int32_t>& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of NumPendingLightmaps
// Declaration: int32_t NumPendingLightmaps
int32_t UInstancedStaticMeshComponent::M_GetNumPendingLightmaps() const {
	return Read<int32_t>((byte*)this + 1392);
}
int32_t* UInstancedStaticMeshComponent::M_PtrGetNumPendingLightmaps() {
	return reinterpret_cast<int32_t*>((byte*)this + 1392);
}
void UInstancedStaticMeshComponent::M_SetNumPendingLightmaps(const int32_t& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of CachedMappings
// Declaration: TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings
TArray<struct FInstancedStaticMeshMappingInfo> UInstancedStaticMeshComponent::M_GetCachedMappings() const {
	return Read<TArray<struct FInstancedStaticMeshMappingInfo>>((byte*)this + 1400);
}
TArray<struct FInstancedStaticMeshMappingInfo>* UInstancedStaticMeshComponent::M_PtrGetCachedMappings() {
	return reinterpret_cast<TArray<struct FInstancedStaticMeshMappingInfo>*>((byte*)this + 1400);
}
void UInstancedStaticMeshComponent::M_SetCachedMappings(const TArray<struct FInstancedStaticMeshMappingInfo>& value) {
	Write((byte*)this + 1400, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.AddInstance
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InstanceTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UInstancedStaticMeshComponent::AddInstance(const struct FTransform& InstanceTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.AddInstance");

	struct UInstancedStaticMeshComponent_AddInstance_Params {
		struct FTransform InstanceTransform;			//Offset: 0 | ElementSize: 48
		int32_t ReturnValue;			//Offset: 48 | ElementSize: 4
	};
	UInstancedStaticMeshComponent_AddInstance_Params params;
	params.InstanceTransform = InstanceTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.AddInstances
// Flags: Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InstanceTransforms	Type: TArray<struct FTransform>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bShouldReturnIndices	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<int32_t> UInstancedStaticMeshComponent::AddInstances(const TArray<struct FTransform>& InstanceTransforms, bool bShouldReturnIndices) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.AddInstances");

	struct UInstancedStaticMeshComponent_AddInstances_Params {
		TArray<struct FTransform> InstanceTransforms;			//Offset: 0 | ElementSize: 16
		bool bShouldReturnIndices;			//Offset: 16 | ElementSize: 1
		TArray<int32_t> ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UInstancedStaticMeshComponent_AddInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UInstancedStaticMeshComponent::AddInstanceWorldSpace(const struct FTransform& WorldTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace");

	struct UInstancedStaticMeshComponent_AddInstanceWorldSpace_Params {
		struct FTransform WorldTransform;			//Offset: 0 | ElementSize: 48
		int32_t ReturnValue;			//Offset: 48 | ElementSize: 4
	};
	UInstancedStaticMeshComponent_AddInstanceWorldSpace_Params params;
	params.WorldTransform = WorldTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: StartInstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NumInstances	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewInstancesTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bWorldSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMarkRenderStateDirty	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, const struct FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform");

	struct UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Params {
		int32_t StartInstanceIndex;			//Offset: 0 | ElementSize: 4
		int32_t NumInstances;			//Offset: 4 | ElementSize: 4
		struct FTransform NewInstancesTransform;			//Offset: 16 | ElementSize: 48
		bool bWorldSpace;			//Offset: 64 | ElementSize: 1
		bool bMarkRenderStateDirty;			//Offset: 65 | ElementSize: 1
		bool bTeleport;			//Offset: 66 | ElementSize: 1
		bool ReturnValue;			//Offset: 67 | ElementSize: 1
	};
	UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Params params;
	params.StartInstanceIndex = StartInstanceIndex;
	params.NumInstances = NumInstances;
	params.NewInstancesTransform = NewInstancesTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms
// Flags: Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: StartInstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewInstancesTransforms	Type: TArray<struct FTransform>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: bWorldSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMarkRenderStateDirty	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, const TArray<struct FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms");

	struct UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Params {
		int32_t StartInstanceIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FTransform> NewInstancesTransforms;			//Offset: 8 | ElementSize: 16
		bool bWorldSpace;			//Offset: 24 | ElementSize: 1
		bool bMarkRenderStateDirty;			//Offset: 25 | ElementSize: 1
		bool bTeleport;			//Offset: 26 | ElementSize: 1
		bool ReturnValue;			//Offset: 27 | ElementSize: 1
	};
	UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Params params;
	params.StartInstanceIndex = StartInstanceIndex;
	params.NewInstancesTransforms = NewInstancesTransforms;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.ClearInstances
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UInstancedStaticMeshComponent::ClearInstances() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.ClearInstances");

	struct UInstancedStaticMeshComponent_ClearInstances_Params {
	};
	UInstancedStaticMeshComponent_ClearInstances_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.GetInstanceCount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UInstancedStaticMeshComponent::GetInstanceCount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.GetInstanceCount");

	struct UInstancedStaticMeshComponent_GetInstanceCount_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UInstancedStaticMeshComponent_GetInstanceCount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Box	Type: struct FBox	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bBoxInWorldSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<int32_t> UInstancedStaticMeshComponent::GetInstancesOverlappingBox(const struct FBox& Box, bool bBoxInWorldSpace)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox");

	struct UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Params {
		struct FBox Box;			//Offset: 0 | ElementSize: 28
		bool bBoxInWorldSpace;			//Offset: 28 | ElementSize: 1
		TArray<int32_t> ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Params params;
	params.Box = Box;
	params.bBoxInWorldSpace = bBoxInWorldSpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Center	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSphereInWorldSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<int32_t> UInstancedStaticMeshComponent::GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere");

	struct UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Params {
		struct FVector Center;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		bool bSphereInWorldSpace;			//Offset: 16 | ElementSize: 1
		TArray<int32_t> ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.bSphereInWorldSpace = bSphereInWorldSpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.GetInstanceTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutInstanceTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bWorldSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInstancedStaticMeshComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.GetInstanceTransform");

	struct UInstancedStaticMeshComponent_GetInstanceTransform_Params {
		int32_t InstanceIndex;			//Offset: 0 | ElementSize: 4
		struct FTransform OutInstanceTransform;			//Offset: 16 | ElementSize: 48
		bool bWorldSpace;			//Offset: 64 | ElementSize: 1
		bool ReturnValue;			//Offset: 65 | ElementSize: 1
	};
	UInstancedStaticMeshComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.RemoveInstance
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInstancedStaticMeshComponent::RemoveInstance(int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.RemoveInstance");

	struct UInstancedStaticMeshComponent_RemoveInstance_Params {
		int32_t InstanceIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	UInstancedStaticMeshComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.SetCullDistances
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: StartCullDistance	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndCullDistance	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UInstancedStaticMeshComponent::SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.SetCullDistances");

	struct UInstancedStaticMeshComponent_SetCullDistances_Params {
		int32_t StartCullDistance;			//Offset: 0 | ElementSize: 4
		int32_t EndCullDistance;			//Offset: 4 | ElementSize: 4
	};
	UInstancedStaticMeshComponent_SetCullDistances_Params params;
	params.StartCullDistance = StartCullDistance;
	params.EndCullDistance = EndCullDistance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.SetCustomDataValue
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CustomDataIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CustomDataValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMarkRenderStateDirty	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInstancedStaticMeshComponent::SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.SetCustomDataValue");

	struct UInstancedStaticMeshComponent_SetCustomDataValue_Params {
		int32_t InstanceIndex;			//Offset: 0 | ElementSize: 4
		int32_t CustomDataIndex;			//Offset: 4 | ElementSize: 4
		float CustomDataValue;			//Offset: 8 | ElementSize: 4
		bool bMarkRenderStateDirty;			//Offset: 12 | ElementSize: 1
		bool ReturnValue;			//Offset: 13 | ElementSize: 1
	};
	UInstancedStaticMeshComponent_SetCustomDataValue_Params params;
	params.InstanceIndex = InstanceIndex;
	params.CustomDataIndex = CustomDataIndex;
	params.CustomDataValue = CustomDataValue;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: InstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewInstanceTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bWorldSpace	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMarkRenderStateDirty	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UInstancedStaticMeshComponent::UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform");

	struct UInstancedStaticMeshComponent_UpdateInstanceTransform_Params {
		int32_t InstanceIndex;			//Offset: 0 | ElementSize: 4
		struct FTransform NewInstanceTransform;			//Offset: 16 | ElementSize: 48
		bool bWorldSpace;			//Offset: 64 | ElementSize: 1
		bool bMarkRenderStateDirty;			//Offset: 65 | ElementSize: 1
		bool bTeleport;			//Offset: 66 | ElementSize: 1
		bool ReturnValue;			//Offset: 67 | ElementSize: 1
	};
	UInstancedStaticMeshComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

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