#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C
// Super: Class Engine.ActorComponent
// Size: 281
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UBP_PlayerBuildingComponent_C : public UActorComponent {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 176	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class ABP_PlayerCharacter_C*	PlayerCharacterReference;		//Offset: 184	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_PlayerCharacter_C* M_GetPlayerCharacterReference() const;
	class ABP_PlayerCharacter_C** M_PtrGetPlayerCharacterReference();
	void M_SetPlayerCharacterReference(const class ABP_PlayerCharacter_C*& value);

	//struct FVector	BuildingLocation;		//Offset: 192	Size: 12	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetBuildingLocation() const;
	struct FVector* M_PtrGetBuildingLocation();
	void M_SetBuildingLocation(const struct FVector& value);

	//float	BuildingDistance;		//Offset: 204	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingDistance() const;
	float* M_PtrGetBuildingDistance();
	void M_SetBuildingDistance(const float& value);

	//class ABP_MasterBuilding_C*	Ghost_Building;		//Offset: 208	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterBuilding_C* M_GetGhost_Building() const;
	class ABP_MasterBuilding_C** M_PtrGetGhost_Building();
	void M_SetGhost_Building(const class ABP_MasterBuilding_C*& value);

	//class ABP_MasterBuilding_C*	Target_Building;		//Offset: 216	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterBuilding_C* M_GetTarget_Building() const;
	class ABP_MasterBuilding_C** M_PtrGetTarget_Building();
	void M_SetTarget_Building(const class ABP_MasterBuilding_C*& value);

	//class ABP_MasterField_C*	Ghost_Field;		//Offset: 224	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterField_C* M_GetGhost_Field() const;
	class ABP_MasterField_C** M_PtrGetGhost_Field();
	void M_SetGhost_Field(const class ABP_MasterField_C*& value);

	//class ABP_MasterSplineStructure_C*	Ghost_Spline;		//Offset: 232	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterSplineStructure_C* M_GetGhost_Spline() const;
	class ABP_MasterSplineStructure_C** M_PtrGetGhost_Spline();
	void M_SetGhost_Spline(const class ABP_MasterSplineStructure_C*& value);

	//class ABP_MasterFurniture_C*	Ghost_Furniture;		//Offset: 240	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterFurniture_C* M_GetGhost_Furniture() const;
	class ABP_MasterFurniture_C** M_PtrGetGhost_Furniture();
	void M_SetGhost_Furniture(const class ABP_MasterFurniture_C*& value);

	//class ABP_MasterRoadSpline_C*	Ghost_Road;		//Offset: 248	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterRoadSpline_C* M_GetGhost_Road() const;
	class ABP_MasterRoadSpline_C** M_PtrGetGhost_Road();
	void M_SetGhost_Road(const class ABP_MasterRoadSpline_C*& value);

	//class ABP_MasterGate_C*	Ghost_Gate;		//Offset: 256	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterGate_C* M_GetGhost_Gate() const;
	class ABP_MasterGate_C** M_PtrGetGhost_Gate();
	void M_SetGhost_Gate(const class ABP_MasterGate_C*& value);

	//class ABP_MasterPlatform_C*	Ghost_Platform;		//Offset: 264	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	class ABP_MasterPlatform_C* M_GetGhost_Platform() const;
	class ABP_MasterPlatform_C** M_PtrGetGhost_Platform();
	void M_SetGhost_Platform(const class ABP_MasterPlatform_C*& value);

	//float	TempRotation;		//Offset: 272	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTempRotation() const;
	float* M_PtrGetTempRotation();
	void M_SetTempRotation(const float& value);

	//float	TempHeightOffset;		//Offset: 276	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTempHeightOffset() const;
	float* M_PtrGetTempHeightOffset();
	void M_SetTempHeightOffset(const float& value);

	//bool	TempControlMode;		//Offset: 280	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTempControlMode() const;
	bool* M_PtrGetTempControlMode();
	void M_SetTempControlMode(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_PlayerBuildingComponent(int32_t EntryPoint);

	void SpawnPlatformGhostServer(struct FDataTableRowHandle PlatformType, bool Continue);

	void SpawnGateGhostServer(struct FDataTableRowHandle GateType, bool Continue);

	void SpawnRoadGhostServer(struct FDataTableRowHandle RoadType, bool Continue, struct FVector StartPoint, struct FVector EndPoint);

	void SpawnFurnitureGhostServer(const struct FDataTableRowHandle& FurnitureType, bool Continue);

	void SpawnSplineGhostServer(struct FDataTableRowHandle FenceType, bool Continue, struct FVector StartPoint, struct FVector EndPoint, bool Invert);

	void SpawnMasterFieldGhost_Server(TEnumAsByte<E_FieldCategories> FieldType);

	void SpawnBuildingGhostServer(struct FDataTableRowHandle BuildingType);

	void ReceiveBeginPlay();

	void UpdateBuildingLocation(struct FVector NewBuildingLocation);

	void UpdateBuildingDistance(float Distance);

	void GetBuildingDistanceFromPlayer(float* Distance);

	void OnRep_Ghost_Building();

	void OnRep_Ghost_Spline();

	void OnRep_Ghost_Furniture();

	void OnRep_Ghost_Gate();

	void OnRep_Ghost_Road();

	void OnRep_Ghost_Field();

	void OnRep_Ghost_Platform();

#pragma endregion
};
};