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
// Member Getter and Setter of Ghost_Platform
// Declaration: class ABP_MasterPlatform_C* Ghost_Platform
class ABP_MasterPlatform_C* UBP_PlayerBuildingComponent_C::M_GetGhost_Platform() const {
	return Read<class ABP_MasterPlatform_C*>((byte*)this + 264);
}
class ABP_MasterPlatform_C** UBP_PlayerBuildingComponent_C::M_PtrGetGhost_Platform() {
	return reinterpret_cast<class ABP_MasterPlatform_C**>((byte*)this + 264);
}
void UBP_PlayerBuildingComponent_C::M_SetGhost_Platform(const class ABP_MasterPlatform_C*& value) {
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
// Member Getter and Setter of TempHeightOffset
// Declaration: float TempHeightOffset
float UBP_PlayerBuildingComponent_C::M_GetTempHeightOffset() const {
	return Read<float>((byte*)this + 276);
}
float* UBP_PlayerBuildingComponent_C::M_PtrGetTempHeightOffset() {
	return reinterpret_cast<float*>((byte*)this + 276);
}
void UBP_PlayerBuildingComponent_C::M_SetTempHeightOffset(const float& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of TempControlMode
// Declaration: bool TempControlMode
bool UBP_PlayerBuildingComponent_C::M_GetTempControlMode() const {
	return Read<bool>((byte*)this + 280);
}
bool* UBP_PlayerBuildingComponent_C::M_PtrGetTempControlMode() {
	return reinterpret_cast<bool*>((byte*)this + 280);
}
void UBP_PlayerBuildingComponent_C::M_SetTempControlMode(const bool& value) {
	Write((byte*)this + 280, value);
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

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnPlatformGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlatformType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnPlatformGhostServer(struct FDataTableRowHandle PlatformType, bool Continue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnPlatformGhostServer");

	struct UBP_PlayerBuildingComponent_C_SpawnPlatformGhostServer_Params {
		struct FDataTableRowHandle PlatformType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnPlatformGhostServer_Params params;
	params.PlatformType = PlatformType;
	params.Continue = Continue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnGateGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: GateType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnGateGhostServer(struct FDataTableRowHandle GateType, bool Continue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnGateGhostServer");

	struct UBP_PlayerBuildingComponent_C_SpawnGateGhostServer_Params {
		struct FDataTableRowHandle GateType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnGateGhostServer_Params params;
	params.GateType = GateType;
	params.Continue = Continue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: RoadType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnRoadGhostServer(struct FDataTableRowHandle RoadType, bool Continue, struct FVector StartPoint, struct FVector EndPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhostServer");

	struct UBP_PlayerBuildingComponent_C_SpawnRoadGhostServer_Params {
		struct FDataTableRowHandle RoadType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
		struct FVector StartPoint;			//Offset: 20 | ElementSize: 12
		struct FVector EndPoint;			//Offset: 32 | ElementSize: 12
	};
	UBP_PlayerBuildingComponent_C_SpawnRoadGhostServer_Params params;
	params.RoadType = RoadType;
	params.Continue = Continue;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhostServer
// Flags: Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureType	Type: struct FDataTableRowHandle	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnFurnitureGhostServer(const struct FDataTableRowHandle& FurnitureType, bool Continue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhostServer");

	struct UBP_PlayerBuildingComponent_C_SpawnFurnitureGhostServer_Params {
		struct FDataTableRowHandle FurnitureType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnFurnitureGhostServer_Params params;
	params.FurnitureType = FurnitureType;
	params.Continue = Continue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FenceType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Continue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Invert	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnSplineGhostServer(struct FDataTableRowHandle FenceType, bool Continue, struct FVector StartPoint, struct FVector EndPoint, bool Invert) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhostServer");

	struct UBP_PlayerBuildingComponent_C_SpawnSplineGhostServer_Params {
		struct FDataTableRowHandle FenceType;			//Offset: 0 | ElementSize: 16
		bool Continue;			//Offset: 16 | ElementSize: 1
		struct FVector StartPoint;			//Offset: 20 | ElementSize: 12
		struct FVector EndPoint;			//Offset: 32 | ElementSize: 12
		bool Invert;			//Offset: 44 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnSplineGhostServer_Params params;
	params.FenceType = FenceType;
	params.Continue = Continue;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;
	params.Invert = Invert;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldType	Type: TEnumAsByte<E_FieldCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnMasterFieldGhost_Server(TEnumAsByte<E_FieldCategories> FieldType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost_Server");

	struct UBP_PlayerBuildingComponent_C_SpawnMasterFieldGhost_Server_Params {
		TEnumAsByte<E_FieldCategories> FieldType;			//Offset: 0 | ElementSize: 1
	};
	UBP_PlayerBuildingComponent_C_SpawnMasterFieldGhost_Server_Params params;
	params.FieldType = FieldType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhostServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingType	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::SpawnBuildingGhostServer(struct FDataTableRowHandle BuildingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhostServer");

	struct UBP_PlayerBuildingComponent_C_SpawnBuildingGhostServer_Params {
		struct FDataTableRowHandle BuildingType;			//Offset: 0 | ElementSize: 16
	};
	UBP_PlayerBuildingComponent_C_SpawnBuildingGhostServer_Params params;
	params.BuildingType = BuildingType;

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
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

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Building
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Building() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Building");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Building_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Building_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Spline
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Spline() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Spline");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Spline_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Spline_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Furniture
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Furniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Furniture");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Furniture_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Furniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Gate
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Gate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Gate");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Gate_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Gate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Road
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Road() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Road");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Road_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Road_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Field
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Field() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Field");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Field_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Field_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Platform
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_PlayerBuildingComponent_C::OnRep_Ghost_Platform() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.OnRep_Ghost_Platform");

	struct UBP_PlayerBuildingComponent_C_OnRep_Ghost_Platform_Params {
	};
	UBP_PlayerBuildingComponent_C_OnRep_Ghost_Platform_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}