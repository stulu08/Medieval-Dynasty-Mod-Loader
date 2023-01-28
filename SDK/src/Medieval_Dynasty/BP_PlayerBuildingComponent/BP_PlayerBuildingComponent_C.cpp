#include "../SDK.h"
#include "BP_PlayerBuildingComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_PlayerBuildingComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UBP_PlayerBuildingComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UBP_PlayerBuildingComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of PlayerCharacterReference
// Declaration: class ABP_PlayerCharacter_C* PlayerCharacterReference
class ABP_PlayerCharacter_C* UBP_PlayerBuildingComponent_C::M_GetPlayerCharacterReference() const {
	return Read<class ABP_PlayerCharacter_C*>((byte*)this + 184);
}
class ABP_PlayerCharacter_C** UBP_PlayerBuildingComponent_C::M_PtrGetPlayerCharacterReference() {
	return reinterpret_cast<class ABP_PlayerCharacter_C**>((byte*)this + 184);
}
void UBP_PlayerBuildingComponent_C::M_SetPlayerCharacterReference(const class ABP_PlayerCharacter_C*& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of BuildingLocation
// Declaration: struct FVector BuildingLocation
struct FVector UBP_PlayerBuildingComponent_C::M_GetBuildingLocation() const {
	return Read<struct FVector>((byte*)this + 192);
}
struct FVector* UBP_PlayerBuildingComponent_C::M_PtrGetBuildingLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 192);
}
void UBP_PlayerBuildingComponent_C::M_SetBuildingLocation(const struct FVector& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of BuildingDistance
// Declaration: float BuildingDistance
float UBP_PlayerBuildingComponent_C::M_GetBuildingDistance() const {
	return Read<float>((byte*)this + 204);
}
float* UBP_PlayerBuildingComponent_C::M_PtrGetBuildingDistance() {
	return reinterpret_cast<float*>((byte*)this + 204);
}
void UBP_PlayerBuildingComponent_C::M_SetBuildingDistance(const float& value) {
	Write((byte*)this + 204, value);
}
// Member Getter and Setter of Ghost_Building
// Declaration: class ABP_MasterBuilding_C* Ghost_Building
class ABP_MasterBuilding_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Building() const {
	return Read<class ABP_MasterBuilding_C*>((byte*)this + 208);
}
class ABP_MasterBuilding_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Building() {
	return reinterpret_cast<class ABP_MasterBuilding_C**>((byte*)this + 208);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Building(const class ABP_MasterBuilding_C*& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of Target_Building
// Declaration: class ABP_MasterBuilding_C* Target_Building
class ABP_MasterBuilding_C* UBP_PlayerBuildingComponent_C::M_GetTarget_Building() const {
	return Read<class ABP_MasterBuilding_C*>((byte*)this + 216);
}
class ABP_MasterBuilding_C** UBP_PlayerBuildingComponent_C::M_PtrGetTarget_Building() {
	return reinterpret_cast<class ABP_MasterBuilding_C**>((byte*)this + 216);
}
void UBP_PlayerBuildingComponent_C::M_SetTarget_Building(const class ABP_MasterBuilding_C*& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of Ghost_Field
// Declaration: class ABP_MasterField_C* Ghost_Field
class ABP_MasterField_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Field() const {
	return Read<class ABP_MasterField_C*>((byte*)this + 224);
}
class ABP_MasterField_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Field() {
	return reinterpret_cast<class ABP_MasterField_C**>((byte*)this + 224);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Field(const class ABP_MasterField_C*& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of Ghost_Spline
// Declaration: class ABP_MasterSplineStructure_C* Ghost_Spline
class ABP_MasterSplineStructure_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Spline() const {
	return Read<class ABP_MasterSplineStructure_C*>((byte*)this + 232);
}
class ABP_MasterSplineStructure_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Spline() {
	return reinterpret_cast<class ABP_MasterSplineStructure_C**>((byte*)this + 232);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Spline(const class ABP_MasterSplineStructure_C*& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of Ghost_Furniture
// Declaration: class ABP_MasterFurniture_C* Ghost_Furniture
class ABP_MasterFurniture_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Furniture() const {
	return Read<class ABP_MasterFurniture_C*>((byte*)this + 240);
}
class ABP_MasterFurniture_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Furniture() {
	return reinterpret_cast<class ABP_MasterFurniture_C**>((byte*)this + 240);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Furniture(const class ABP_MasterFurniture_C*& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of Ghost_Road
// Declaration: class ABP_MasterRoadSpline_C* Ghost_Road
class ABP_MasterRoadSpline_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Road() const {
	return Read<class ABP_MasterRoadSpline_C*>((byte*)this + 248);
}
class ABP_MasterRoadSpline_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Road() {
	return reinterpret_cast<class ABP_MasterRoadSpline_C**>((byte*)this + 248);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Road(const class ABP_MasterRoadSpline_C*& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of Ghost_Gate
// Declaration: class ABP_MasterGate_C* Ghost_Gate
class ABP_MasterGate_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Gate() const {
	return Read<class ABP_MasterGate_C*>((byte*)this + 256);
}
class ABP_MasterGate_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Gate() {
	return reinterpret_cast<class ABP_MasterGate_C**>((byte*)this + 256);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Gate(const class ABP_MasterGate_C*& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of Ghost_Bridge
// Declaration: class ABP_MasterBridge_C* Ghost_Bridge
class ABP_MasterBridge_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Bridge() const {
	return Read<class ABP_MasterBridge_C*>((byte*)this + 264);
}
class ABP_MasterBridge_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Bridge() {
	return reinterpret_cast<class ABP_MasterBridge_C**>((byte*)this + 264);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Bridge(const class ABP_MasterBridge_C*& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of TempRotation
// Declaration: float TempRotation
float UBP_PlayerBuildingComponent_C::M_GetTempRotation() const {
	return Read<float>((byte*)this + 272);
}
float* UBP_PlayerBuildingComponent_C::M_PtrGetTempRotation() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UBP_PlayerBuildingComponent_C::M_SetTempRotation(const float& value) {
	Write((byte*)this + 272, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::ExecuteUbergraph_BP_PlayerBuildingComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent");

	struct UBP_PlayerBuildingComponent_C_ExecuteUbergraph_BP_PlayerBuildingComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UBP_PlayerBuildingComponent_C_ExecuteUbergraph_BP_PlayerBuildingComponent_Params params;
	params.EntryPoint = EntryPoint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBridgeGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BridgeType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnBridgeGhost(struct FDataTableRowHandle BridgeType, bool Continue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBridgeGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnBridgeGhost_Params {
		struct FDataTableRowHandle BridgeType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnBridgeGhost_Params params;
	params.BridgeType = BridgeType;
	params.Continue = Continue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnGateGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: GateType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnGateGhost(struct FDataTableRowHandle GateType, bool Continue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnGateGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnGateGhost_Params {
		struct FDataTableRowHandle GateType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnGateGhost_Params params;
	params.GateType = GateType;
	params.Continue = Continue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: RoadType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnRoadGhost(struct FDataTableRowHandle RoadType, bool Continue, struct FVector StartPoint, struct FVector EndPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnRoadGhost_Params {
		struct FDataTableRowHandle RoadType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
		struct FVector StartPoint;			//Offset: 20 | ElementSize: 12
		struct FVector EndPoint;			//Offset: 32 | ElementSize: 12
	};
	UBP_PlayerBuildingComponent_C_SpawnRoadGhost_Params params;
	params.RoadType = RoadType;
	params.Continue = Continue;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhost
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureType	Type: struct FDataTableRowHandle	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnFurnitureGhost(const struct FDataTableRowHandle& FurnitureType, bool Continue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnFurnitureGhost_Params {
		struct FDataTableRowHandle FurnitureType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnFurnitureGhost_Params params;
	params.FurnitureType = FurnitureType;
	params.Continue = Continue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FenceType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Invert	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnSplineGhost(struct FDataTableRowHandle FenceType, bool Continue, struct FVector StartPoint, struct FVector EndPoint, bool Invert) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnSplineGhost_Params {
		struct FDataTableRowHandle FenceType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
		struct FVector StartPoint;			//Offset: 20 | ElementSize: 12
		struct FVector EndPoint;			//Offset: 32 | ElementSize: 12
		bool Invert;			//Offset: 44 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnSplineGhost_Params params;
	params.FenceType = FenceType;
	params.Continue = Continue;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;
	params.Invert = Invert;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldType	Type: TEnumAsByte<E_FieldCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnMasterFieldGhost(TEnumAsByte<E_FieldCategories> FieldType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnMasterFieldGhost_Params {
		TEnumAsByte<E_FieldCategories> FieldType;			//Offset: 0 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnMasterFieldGhost_Params params;
	params.FieldType = FieldType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnBuildingGhost(struct FDataTableRowHandle BuildingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhost");

	struct UBP_PlayerBuildingComponent_C_SpawnBuildingGhost_Params {
		struct FDataTableRowHandle BuildingType;			//Offset: 0 | ElementSize: 16
	};
	UBP_PlayerBuildingComponent_C_SpawnBuildingGhost_Params params;
	params.BuildingType = BuildingType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ReceiveBeginPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ReceiveBeginPlay");

	struct UBP_PlayerBuildingComponent_C_ReceiveBeginPlay_Params {
	};
	UBP_PlayerBuildingComponent_C_ReceiveBeginPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingLocation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewBuildingLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::UpdateBuildingLocation(struct FVector NewBuildingLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingLocation");

	struct UBP_PlayerBuildingComponent_C_UpdateBuildingLocation_Params {
		struct FVector NewBuildingLocation;			//Offset: 0 | ElementSize: 12
	};
	UBP_PlayerBuildingComponent_C_UpdateBuildingLocation_Params params;
	params.NewBuildingLocation = NewBuildingLocation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingDistance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::UpdateBuildingDistance(float Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingDistance");

	struct UBP_PlayerBuildingComponent_C_UpdateBuildingDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	UBP_PlayerBuildingComponent_C_UpdateBuildingDistance_Params params;
	params.Distance = Distance;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.GetBuildingDistanceFromPlayer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::GetBuildingDistanceFromPlayer(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.GetBuildingDistanceFromPlayer");

	struct UBP_PlayerBuildingComponent_C_GetBuildingDistanceFromPlayer_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	UBP_PlayerBuildingComponent_C_GetBuildingDistanceFromPlayer_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Distance != nullptr)
		*Distance = params.Distance;
}

#pragma endregion
}