#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.StaticMeshActor
// Super: Class Engine.Actor
// Size: 560
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AStaticMeshActor : public AActor {
public:
#pragma region Members
	//class UStaticMeshComponent*	StaticMeshComponent;		//Offset: 544	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UStaticMeshComponent* M_GetStaticMeshComponent() const;
	class UStaticMeshComponent** M_PtrGetStaticMeshComponent();
	void M_SetStaticMeshComponent(const class UStaticMeshComponent*& value);

	//bool	bStaticMeshReplicateMovement;		//Offset: 552	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbStaticMeshReplicateMovement() const;
	bool* M_PtrGetbStaticMeshReplicateMovement();
	void M_SetbStaticMeshReplicateMovement(const bool& value);

	//ENavDataGatheringMode	NavigationGeometryGatheringMode;		//Offset: 553	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ENavDataGatheringMode M_GetNavigationGeometryGatheringMode() const;
	ENavDataGatheringMode* M_PtrGetNavigationGeometryGatheringMode();
	void M_SetNavigationGeometryGatheringMode(const ENavDataGatheringMode& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}

#pragma region Functions
	void SetMobility(TEnumAsByte<EComponentMobility> InMobility);

#pragma endregion
};
};