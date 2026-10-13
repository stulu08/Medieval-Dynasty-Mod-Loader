#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_MasterBuilding.BP_MasterBuilding_C
// Super: Class Engine.Actor
// Size: 2368
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_MasterBuilding_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UInstancedStaticMeshComponent*	PlacementMarker;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UInstancedStaticMeshComponent* M_GetPlacementMarker() const;
	class UInstancedStaticMeshComponent** M_PtrGetPlacementMarker();
	void M_SetPlacementMarker(const class UInstancedStaticMeshComponent*& value);

	//class UBoxComponent*	Draw;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetDraw() const;
	class UBoxComponent** M_PtrGetDraw();
	void M_SetDraw(const class UBoxComponent*& value);

	//class UBoxComponent*	NavExcludeVolume;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetNavExcludeVolume() const;
	class UBoxComponent** M_PtrGetNavExcludeVolume();
	void M_SetNavExcludeVolume(const class UBoxComponent*& value);

	//class UNavModifierComponent*	NavModifier;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UNavModifierComponent* M_GetNavModifier() const;
	class UNavModifierComponent** M_PtrGetNavModifier();
	void M_SetNavModifier(const class UNavModifierComponent*& value);

	//class UArrowComponent*	DetectionTrace_C;		//Offset: 584	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetDetectionTrace_C() const;
	class UArrowComponent** M_PtrGetDetectionTrace_C();
	void M_SetDetectionTrace_C(const class UArrowComponent*& value);

	//class USphereComponent*	InspectorPoint;		//Offset: 592	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USphereComponent* M_GetInspectorPoint() const;
	class USphereComponent** M_PtrGetInspectorPoint();
	void M_SetInspectorPoint(const class USphereComponent*& value);

	//class UBoxComponent*	AnimalVolume;		//Offset: 600	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetAnimalVolume() const;
	class UBoxComponent** M_PtrGetAnimalVolume();
	void M_SetAnimalVolume(const class UBoxComponent*& value);

	//class UBoxComponent*	InteriorVolume;		//Offset: 608	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetInteriorVolume() const;
	class UBoxComponent** M_PtrGetInteriorVolume();
	void M_SetInteriorVolume(const class UBoxComponent*& value);

	//class UWidgetComponent*	UI_Inspector;		//Offset: 616	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UWidgetComponent* M_GetUI_Inspector() const;
	class UWidgetComponent** M_PtrGetUI_Inspector();
	void M_SetUI_Inspector(const class UWidgetComponent*& value);

	//class UBoxComponent*	AllowedToBuild;		//Offset: 624	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetAllowedToBuild() const;
	class UBoxComponent** M_PtrGetAllowedToBuild();
	void M_SetAllowedToBuild(const class UBoxComponent*& value);

	//class UArrowComponent*	TeleportPoint;		//Offset: 632	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetTeleportPoint() const;
	class UArrowComponent** M_PtrGetTeleportPoint();
	void M_SetTeleportPoint(const class UArrowComponent*& value);

	//class USceneComponent*	BuildingParent;		//Offset: 640	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetBuildingParent() const;
	class USceneComponent** M_PtrGetBuildingParent();
	void M_SetBuildingParent(const class USceneComponent*& value);

	//class UArrowComponent*	DetectionTrace_UR;		//Offset: 648	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetDetectionTrace_UR() const;
	class UArrowComponent** M_PtrGetDetectionTrace_UR();
	void M_SetDetectionTrace_UR(const class UArrowComponent*& value);

	//class UArrowComponent*	DetectionTrace_DL;		//Offset: 656	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetDetectionTrace_DL() const;
	class UArrowComponent** M_PtrGetDetectionTrace_DL();
	void M_SetDetectionTrace_DL(const class UArrowComponent*& value);

	//class UArrowComponent*	DetectionTrace_DR;		//Offset: 664	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetDetectionTrace_DR() const;
	class UArrowComponent** M_PtrGetDetectionTrace_DR();
	void M_SetDetectionTrace_DR(const class UArrowComponent*& value);

	//class UArrowComponent*	DetectionTrace_UL;		//Offset: 672	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UArrowComponent* M_GetDetectionTrace_UL() const;
	class UArrowComponent** M_PtrGetDetectionTrace_UL();
	void M_SetDetectionTrace_UL(const class UArrowComponent*& value);

	//class USceneComponent*	Scene;		//Offset: 680	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetScene() const;
	class USceneComponent** M_PtrGetScene();
	void M_SetScene(const class USceneComponent*& value);

	//TArray<class UArrowComponent*>	BuildingFoundationArrows;		//Offset: 688	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<class UArrowComponent*> M_GetBuildingFoundationArrows() const;
	TArray<class UArrowComponent*>* M_PtrGetBuildingFoundationArrows();
	void M_SetBuildingFoundationArrows(const TArray<class UArrowComponent*>& value);

	//class UMaterialInstanceDynamic*	GhostMaterialReference;		//Offset: 704	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMaterialInstanceDynamic* M_GetGhostMaterialReference() const;
	class UMaterialInstanceDynamic** M_PtrGetGhostMaterialReference();
	void M_SetGhostMaterialReference(const class UMaterialInstanceDynamic*& value);

	//bool	Placeable;		//Offset: 712	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlaceable() const;
	bool* M_PtrGetPlaceable();
	void M_SetPlaceable(const bool& value);

	//bool	RotatingRight;		//Offset: 713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotatingRight() const;
	bool* M_PtrGetRotatingRight();
	void M_SetRotatingRight(const bool& value);

	//bool	RotatingLeft;		//Offset: 714	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRotatingLeft() const;
	bool* M_PtrGetRotatingLeft();
	void M_SetRotatingLeft(const bool& value);

	//float	BuildingRotation;		//Offset: 716	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingRotation() const;
	float* M_PtrGetBuildingRotation();
	void M_SetBuildingRotation(const float& value);

	//struct FString	CustomName;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetCustomName() const;
	struct FString* M_PtrGetCustomName();
	void M_SetCustomName(const struct FString& value);

	//struct FRotator	BaseRotation;		//Offset: 736	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FRotator M_GetBaseRotation() const;
	struct FRotator* M_PtrGetBaseRotation();
	void M_SetBaseRotation(const struct FRotator& value);

	//struct FText	InteractActionText;		//Offset: 752	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	struct FText M_GetInteractActionText() const;
	struct FText* M_PtrGetInteractActionText();
	void M_SetInteractActionText(const struct FText& value);

	//struct FText	InteractSecondActionText;		//Offset: 776	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	struct FText M_GetInteractSecondActionText() const;
	struct FText* M_PtrGetInteractSecondActionText();
	void M_SetInteractSecondActionText(const struct FText& value);

	//float	InteractionTime;		//Offset: 800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetInteractionTime() const;
	float* M_PtrGetInteractionTime();
	void M_SetInteractionTime(const float& value);

	//TEnumAsByte<E_Tools>	InteractToolType;		//Offset: 804	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools> M_GetInteractToolType() const;
	TEnumAsByte<E_Tools>* M_PtrGetInteractToolType();
	void M_SetInteractToolType(const TEnumAsByte<E_Tools>& value);

	//struct FString	ID;		//Offset: 808	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString M_GetID() const;
	struct FString* M_PtrGetID();
	void M_SetID(const struct FString& value);

	//float	DistanceCheck_Stage1;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDistanceCheck_Stage1() const;
	float* M_PtrGetDistanceCheck_Stage1();
	void M_SetDistanceCheck_Stage1(const float& value);

	//float	DistanceCheck_Stage2;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDistanceCheck_Stage2() const;
	float* M_PtrGetDistanceCheck_Stage2();
	void M_SetDistanceCheck_Stage2(const float& value);

	//class ABP_MasterBuildModule_C*	BuildingBaseModule;		//Offset: 832	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterBuildModule_C* M_GetBuildingBaseModule() const;
	class ABP_MasterBuildModule_C** M_PtrGetBuildingBaseModule();
	void M_SetBuildingBaseModule(const class ABP_MasterBuildModule_C*& value);

	//class ABP_MasterBuildModule_C*	BuildingFrameModule;		//Offset: 840	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_MasterBuildModule_C* M_GetBuildingFrameModule() const;
	class ABP_MasterBuildModule_C** M_PtrGetBuildingFrameModule();
	void M_SetBuildingFrameModule(const class ABP_MasterBuildModule_C*& value);

	//TArray<class ABP_MasterBuildModule_C*>	BuildingModules;		//Offset: 848	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_MasterBuildModule_C*> M_GetBuildingModules() const;
	TArray<class ABP_MasterBuildModule_C*>* M_PtrGetBuildingModules();
	void M_SetBuildingModules(const TArray<class ABP_MasterBuildModule_C*>& value);

	//bool	HighBase;		//Offset: 864	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHighBase() const;
	bool* M_PtrGetHighBase();
	void M_SetHighBase(const bool& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 872	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//TArray<class ABP_BaseCharacter_C*>	People;		//Offset: 880	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
	TArray<class ABP_BaseCharacter_C*> M_GetPeople() const;
	TArray<class ABP_BaseCharacter_C*>* M_PtrGetPeople();
	void M_SetPeople(const TArray<class ABP_BaseCharacter_C*>& value);

	//struct FST_Building	CurrentBuildingType;		//Offset: 896	Size: 368	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_Building M_GetCurrentBuildingType() const;
	struct FST_Building* M_PtrGetCurrentBuildingType();
	void M_SetCurrentBuildingType(const struct FST_Building& value);

	//float	BuildingHeight;		//Offset: 1264	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingHeight() const;
	float* M_PtrGetBuildingHeight();
	void M_SetBuildingHeight(const float& value);

	//float	BaseTemperature;		//Offset: 1268	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseTemperature() const;
	float* M_PtrGetBaseTemperature();
	void M_SetBaseTemperature(const float& value);

	//TArray<struct FST_SlotSettings>	SleepSlots;		//Offset: 1272	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_SlotSettings> M_GetSleepSlots() const;
	TArray<struct FST_SlotSettings>* M_PtrGetSleepSlots();
	void M_SetSleepSlots(const TArray<struct FST_SlotSettings>& value);

	//float	TraceHeight;		//Offset: 1288	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTraceHeight() const;
	float* M_PtrGetTraceHeight();
	void M_SetTraceHeight(const float& value);

	//TArray<TEnumAsByte<E_Buildings>>	DependentBuildings;		//Offset: 1296	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_Buildings>> M_GetDependentBuildings() const;
	TArray<TEnumAsByte<E_Buildings>>* M_PtrGetDependentBuildings();
	void M_SetDependentBuildings(const TArray<TEnumAsByte<E_Buildings>>& value);

	//TArray<class ABP_MasterBuilding_C*>	DependentBuildingsReferences;		//Offset: 1312	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_MasterBuilding_C*> M_GetDependentBuildingsReferences() const;
	TArray<class ABP_MasterBuilding_C*>* M_PtrGetDependentBuildingsReferences();
	void M_SetDependentBuildingsReferences(const TArray<class ABP_MasterBuilding_C*>& value);

	//bool	DependentFields;		//Offset: 1328	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDependentFields() const;
	bool* M_PtrGetDependentFields();
	void M_SetDependentFields(const bool& value);

	//TArray<class ABP_MasterField_C*>	DependentFieldsReferences;		//Offset: 1336	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_MasterField_C*> M_GetDependentFieldsReferences() const;
	TArray<class ABP_MasterField_C*>* M_PtrGetDependentFieldsReferences();
	void M_SetDependentFieldsReferences(const TArray<class ABP_MasterField_C*>& value);

	//bool	BaseConstructed;		//Offset: 1352	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetBaseConstructed() const;
	bool* M_PtrGetBaseConstructed();
	void M_SetBaseConstructed(const bool& value);

	//bool	FrameConstructed;		//Offset: 1353	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetFrameConstructed() const;
	bool* M_PtrGetFrameConstructed();
	void M_SetFrameConstructed(const bool& value);

	//bool	BuildingConstructed;		//Offset: 1354	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetBuildingConstructed() const;
	bool* M_PtrGetBuildingConstructed();
	void M_SetBuildingConstructed(const bool& value);

	//bool	Destructed;		//Offset: 1355	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDestructed() const;
	bool* M_PtrGetDestructed();
	void M_SetDestructed(const bool& value);

	//TArray<class ABP_AnimalBase_C*>	ListOfAnimals;		//Offset: 1360	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
	TArray<class ABP_AnimalBase_C*> M_GetListOfAnimals() const;
	TArray<class ABP_AnimalBase_C*>* M_PtrGetListOfAnimals();
	void M_SetListOfAnimals(const TArray<class ABP_AnimalBase_C*>& value);

	//TArray<struct FST_FurnitureCategory>	ListOfFurniture;		//Offset: 1376	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance
	TArray<struct FST_FurnitureCategory> M_GetListOfFurniture() const;
	TArray<struct FST_FurnitureCategory>* M_PtrGetListOfFurniture();
	void M_SetListOfFurniture(const TArray<struct FST_FurnitureCategory>& value);

	//float	DistanceFromPlayer;		//Offset: 1392	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDistanceFromPlayer() const;
	float* M_PtrGetDistanceFromPlayer();
	void M_SetDistanceFromPlayer(const float& value);

	//bool	BuildAtTheBeginning;		//Offset: 1396	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetBuildAtTheBeginning() const;
	bool* M_PtrGetBuildAtTheBeginning();
	void M_SetBuildAtTheBeginning(const bool& value);

	//bool	UpgradeAtTheBeginning;		//Offset: 1397	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetUpgradeAtTheBeginning() const;
	bool* M_PtrGetUpgradeAtTheBeginning();
	void M_SetUpgradeAtTheBeginning(const bool& value);

	//bool	DestroyedAtTheBeginning;		//Offset: 1398	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDestroyedAtTheBeginning() const;
	bool* M_PtrGetDestroyedAtTheBeginning();
	void M_SetDestroyedAtTheBeginning(const bool& value);

	//bool	HideStairs;		//Offset: 1399	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetHideStairs() const;
	bool* M_PtrGetHideStairs();
	void M_SetHideStairs(const bool& value);

	//bool	IgnoreFoliageRemoval;		//Offset: 1400	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIgnoreFoliageRemoval() const;
	bool* M_PtrGetIgnoreFoliageRemoval();
	void M_SetIgnoreFoliageRemoval(const bool& value);

	//bool	ShowSlots;		//Offset: 1401	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetShowSlots() const;
	bool* M_PtrGetShowSlots();
	void M_SetShowSlots(const bool& value);

	//TEnumAsByte<E_Ownership>	Ownership;		//Offset: 1402	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOwnership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOwnership();
	void M_SetOwnership(const TEnumAsByte<E_Ownership>& value);

	//float	LevelOfWarming;		//Offset: 1404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLevelOfWarming() const;
	float* M_PtrGetLevelOfWarming();
	void M_SetLevelOfWarming(const float& value);

	//TArray<TEnumAsByte<E_Resources>>	ExtractedResources;		//Offset: 1408	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_Resources>> M_GetExtractedResources() const;
	TArray<TEnumAsByte<E_Resources>>* M_PtrGetExtractedResources();
	void M_SetExtractedResources(const TArray<TEnumAsByte<E_Resources>>& value);

	//TArray<struct FST_FoliageTargetsData>	FoliageTargets;		//Offset: 1424	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_FoliageTargetsData> M_GetFoliageTargets() const;
	TArray<struct FST_FoliageTargetsData>* M_PtrGetFoliageTargets();
	void M_SetFoliageTargets(const TArray<struct FST_FoliageTargetsData>& value);

	//bool	Destroyable;		//Offset: 1440	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDestroyable() const;
	bool* M_PtrGetDestroyable();
	void M_SetDestroyable(const bool& value);

	//class UUI_Inspector_Building_C*	UI_InspectorReference;		//Offset: 1448	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Inspector_Building_C* M_GetUI_InspectorReference() const;
	class UUI_Inspector_Building_C** M_PtrGetUI_InspectorReference();
	void M_SetUI_InspectorReference(const class UUI_Inspector_Building_C*& value);

	//bool	PlayerInInterior;		//Offset: 1456	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlayerInInterior() const;
	bool* M_PtrGetPlayerInInterior();
	void M_SetPlayerInInterior(const bool& value);

	//TArray<struct FDataTableRowHandle>	BuildingHandlers;		//Offset: 1464	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FDataTableRowHandle> M_GetBuildingHandlers() const;
	TArray<struct FDataTableRowHandle>* M_PtrGetBuildingHandlers();
	void M_SetBuildingHandlers(const TArray<struct FDataTableRowHandle>& value);

	//int32_t	CurrentBuildingLevel;		//Offset: 1480	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetCurrentBuildingLevel() const;
	int32_t* M_PtrGetCurrentBuildingLevel();
	void M_SetCurrentBuildingLevel(const int32_t& value);

	//int32_t	LastBuildingLevel;		//Offset: 1484	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GetLastBuildingLevel() const;
	int32_t* M_PtrGetLastBuildingLevel();
	void M_SetLastBuildingLevel(const int32_t& value);

	//int32_t	OverrideInitialModulesLevel;		//Offset: 1488	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetOverrideInitialModulesLevel() const;
	int32_t* M_PtrGetOverrideInitialModulesLevel();
	void M_SetOverrideInitialModulesLevel(const int32_t& value);

	//int32_t	OverrideInitialFurnitureVariant;		//Offset: 1492	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetOverrideInitialFurnitureVariant() const;
	int32_t* M_PtrGetOverrideInitialFurnitureVariant();
	void M_SetOverrideInitialFurnitureVariant(const int32_t& value);

	//bool	OverrideHighBase;		//Offset: 1496	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetOverrideHighBase() const;
	bool* M_PtrGetOverrideHighBase();
	void M_SetOverrideHighBase(const bool& value);

	//TEnumAsByte<E_ShopType>	ShopType;		//Offset: 1497	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_ShopType> M_GetShopType() const;
	TEnumAsByte<E_ShopType>* M_PtrGetShopType();
	void M_SetShopType(const TEnumAsByte<E_ShopType>& value);

	//float	Condition;		//Offset: 1500	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCondition() const;
	float* M_PtrGetCondition();
	void M_SetCondition(const float& value);

	//class UChildActorComponent*	BaseModuleComponent;		//Offset: 1504	Size: 8	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UChildActorComponent* M_GetBaseModuleComponent() const;
	class UChildActorComponent** M_PtrGetBaseModuleComponent();
	void M_SetBaseModuleComponent(const class UChildActorComponent*& value);

	//class UChildActorComponent*	FrameModuleComponent;		//Offset: 1512	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UChildActorComponent* M_GetFrameModuleComponent() const;
	class UChildActorComponent** M_PtrGetFrameModuleComponent();
	void M_SetFrameModuleComponent(const class UChildActorComponent*& value);

	//TArray<class UChildActorComponent*>	ModuleComponents;		//Offset: 1520	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<class UChildActorComponent*> M_GetModuleComponents() const;
	TArray<class UChildActorComponent*>* M_PtrGetModuleComponents();
	void M_SetModuleComponents(const TArray<class UChildActorComponent*>& value);

	//int32_t	NumberOfConstructedModules;		//Offset: 1536	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfConstructedModules() const;
	int32_t* M_PtrGetNumberOfConstructedModules();
	void M_SetNumberOfConstructedModules(const int32_t& value);

	//int32_t	NumberOfUnconstructedModules;		//Offset: 1540	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfUnconstructedModules() const;
	int32_t* M_PtrGetNumberOfUnconstructedModules();
	void M_SetNumberOfUnconstructedModules(const int32_t& value);

	//bool	SeasonalManagement;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetSeasonalManagement() const;
	bool* M_PtrGetSeasonalManagement();
	void M_SetSeasonalManagement(const bool& value);

	//bool	IsWorking;		//Offset: 1545	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsWorking() const;
	bool* M_PtrGetIsWorking();
	void M_SetIsWorking(const bool& value);

	//struct FST_Hour	StartWorkingTime;		//Offset: 1548	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetStartWorkingTime() const;
	struct FST_Hour* M_PtrGetStartWorkingTime();
	void M_SetStartWorkingTime(const struct FST_Hour& value);

	//struct FST_Hour	StopWorkingTime;		//Offset: 1560	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetStopWorkingTime() const;
	struct FST_Hour* M_PtrGetStopWorkingTime();
	void M_SetStopWorkingTime(const struct FST_Hour& value);

	//TArray<struct FST_Production_Progress>	CurrentWorkersProduction;		//Offset: 1576	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_Production_Progress> M_GetCurrentWorkersProduction() const;
	TArray<struct FST_Production_Progress>* M_PtrGetCurrentWorkersProduction();
	void M_SetCurrentWorkersProduction(const TArray<struct FST_Production_Progress>& value);

	//bool	PlaceableOnWater;		//Offset: 1592	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlaceableOnWater() const;
	bool* M_PtrGetPlaceableOnWater();
	void M_SetPlaceableOnWater(const bool& value);

	//bool	PlaceableOnlyOnWater;		//Offset: 1593	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPlaceableOnlyOnWater() const;
	bool* M_PtrGetPlaceableOnlyOnWater();
	void M_SetPlaceableOnlyOnWater(const bool& value);

	//struct FVector	AnimalVolumeLocation;		//Offset: 1596	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetAnimalVolumeLocation() const;
	struct FVector* M_PtrGetAnimalVolumeLocation();
	void M_SetAnimalVolumeLocation(const struct FVector& value);

	//struct FRotator	AnimalVolumeRotation;		//Offset: 1608	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	struct FRotator M_GetAnimalVolumeRotation() const;
	struct FRotator* M_PtrGetAnimalVolumeRotation();
	void M_SetAnimalVolumeRotation(const struct FRotator& value);

	//struct FVector	AnimalVolumeSize;		//Offset: 1620	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetAnimalVolumeSize() const;
	struct FVector* M_PtrGetAnimalVolumeSize();
	void M_SetAnimalVolumeSize(const struct FVector& value);

	//int32_t	NumberOfDestructedModules;		//Offset: 1632	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfDestructedModules() const;
	int32_t* M_PtrGetNumberOfDestructedModules();
	void M_SetNumberOfDestructedModules(const int32_t& value);

	//TEnumAsByte<E_BuildingWarningType>	BuildingWarningType;		//Offset: 1636	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BuildingWarningType> M_GetBuildingWarningType() const;
	TEnumAsByte<E_BuildingWarningType>* M_PtrGetBuildingWarningType();
	void M_SetBuildingWarningType(const TEnumAsByte<E_BuildingWarningType>& value);

	//TArray<struct FST_AnimalProduction_Progress>	CurrentAnimalsProduction;		//Offset: 1640	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_AnimalProduction_Progress> M_GetCurrentAnimalsProduction() const;
	TArray<struct FST_AnimalProduction_Progress>* M_PtrGetCurrentAnimalsProduction();
	void M_SetCurrentAnimalsProduction(const TArray<struct FST_AnimalProduction_Progress>& value);

	//TArray<struct FST_Trading_Progress>	CurrentTrade;		//Offset: 1656	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_Trading_Progress> M_GetCurrentTrade() const;
	TArray<struct FST_Trading_Progress>* M_PtrGetCurrentTrade();
	void M_SetCurrentTrade(const TArray<struct FST_Trading_Progress>& value);

	//TArray<int32_t>	SeasonalProductionPower;		//Offset: 1672	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetSeasonalProductionPower() const;
	TArray<int32_t>* M_PtrGetSeasonalProductionPower();
	void M_SetSeasonalProductionPower(const TArray<int32_t>& value);

	//TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	ToolsBuffer;		//Offset: 1688	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> M_GetToolsBuffer() const;
	TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>* M_PtrGetToolsBuffer();
	void M_SetToolsBuffer(const TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>& value);

	//float	FoodBuffer;		//Offset: 1768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFoodBuffer() const;
	float* M_PtrGetFoodBuffer();
	void M_SetFoodBuffer(const float& value);

	//float	WaterBuffer;		//Offset: 1772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterBuffer() const;
	float* M_PtrGetWaterBuffer();
	void M_SetWaterBuffer(const float& value);

	//float	WoodBuffer;		//Offset: 1776	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWoodBuffer() const;
	float* M_PtrGetWoodBuffer();
	void M_SetWoodBuffer(const float& value);

	//class UNavArea*	AreaClass;		//Offset: 1784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UNavArea* M_GetAreaClass() const;
	class UNavArea** M_PtrGetAreaClass();
	void M_SetAreaClass(const class UNavArea*& value);

	//bool	Ghost;		//Offset: 1792	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGhost() const;
	bool* M_PtrGetGhost();
	void M_SetGhost(const bool& value);

	//bool	FurnitureCreated;		//Offset: 1793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFurnitureCreated() const;
	bool* M_PtrGetFurnitureCreated();
	void M_SetFurnitureCreated(const bool& value);

	//struct FST_Event_BuildingMultipliers	EventMultipliers;		//Offset: 1796	Size: 4	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Event_BuildingMultipliers M_GetEventMultipliers() const;
	struct FST_Event_BuildingMultipliers* M_PtrGetEventMultipliers();
	void M_SetEventMultipliers(const struct FST_Event_BuildingMultipliers& value);

	//TArray<class ABP_SpawnPointWildAnimal_C*>	WildAnimalsPoints;		//Offset: 1800	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_SpawnPointWildAnimal_C*> M_GetWildAnimalsPoints() const;
	TArray<class ABP_SpawnPointWildAnimal_C*>* M_PtrGetWildAnimalsPoints();
	void M_SetWildAnimalsPoints(const TArray<class ABP_SpawnPointWildAnimal_C*>& value);

	//TArray<class ABP_Flock_Fish_C*>	FishesPoints;		//Offset: 1816	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_Flock_Fish_C*> M_GetFishesPoints() const;
	TArray<class ABP_Flock_Fish_C*>* M_PtrGetFishesPoints();
	void M_SetFishesPoints(const TArray<class ABP_Flock_Fish_C*>& value);

	//bool	OverwriteRemoveGrass;		//Offset: 1832	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetOverwriteRemoveGrass() const;
	bool* M_PtrGetOverwriteRemoveGrass();
	void M_SetOverwriteRemoveGrass(const bool& value);

	//bool	RemoveGrass;		//Offset: 1833	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRemoveGrass() const;
	bool* M_PtrGetRemoveGrass();
	void M_SetRemoveGrass(const bool& value);

	//class ABP_BuildSocket_C*	Socket;		//Offset: 1840	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BuildSocket_C* M_GetSocket() const;
	class ABP_BuildSocket_C** M_PtrGetSocket();
	void M_SetSocket(const class ABP_BuildSocket_C*& value);

	//TArray<class ABP_BaseCharacter_C*>	AdditionalPeople;		//Offset: 1848	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
	TArray<class ABP_BaseCharacter_C*> M_GetAdditionalPeople() const;
	TArray<class ABP_BaseCharacter_C*>* M_PtrGetAdditionalPeople();
	void M_SetAdditionalPeople(const TArray<class ABP_BaseCharacter_C*>& value);

	//TArray<struct FST_SlotSettings>	WorkSlots;		//Offset: 1864	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_SlotSettings> M_GetWorkSlots() const;
	TArray<struct FST_SlotSettings>* M_PtrGetWorkSlots();
	void M_SetWorkSlots(const TArray<struct FST_SlotSettings>& value);

	//float	FoodDemandValue;		//Offset: 1880	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFoodDemandValue() const;
	float* M_PtrGetFoodDemandValue();
	void M_SetFoodDemandValue(const float& value);

	//float	WaterDemandValue;		//Offset: 1884	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterDemandValue() const;
	float* M_PtrGetWaterDemandValue();
	void M_SetWaterDemandValue(const float& value);

	//float	WoodDemandValue;		//Offset: 1888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWoodDemandValue() const;
	float* M_PtrGetWoodDemandValue();
	void M_SetWoodDemandValue(const float& value);

	//TArray<TEnumAsByte<E_Tools_Activity>>	AdditionalTools;		//Offset: 1896	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<TEnumAsByte<E_Tools_Activity>> M_GetAdditionalTools() const;
	TArray<TEnumAsByte<E_Tools_Activity>>* M_PtrGetAdditionalTools();
	void M_SetAdditionalTools(const TArray<TEnumAsByte<E_Tools_Activity>>& value);

	//bool	BuildingVisible;		//Offset: 1912	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBuildingVisible() const;
	bool* M_PtrGetBuildingVisible();
	void M_SetBuildingVisible(const bool& value);

	//bool	UnderRepair;		//Offset: 1913	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnderRepair() const;
	bool* M_PtrGetUnderRepair();
	void M_SetUnderRepair(const bool& value);

	//bool	UnderConstruction;		//Offset: 1914	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnderConstruction() const;
	bool* M_PtrGetUnderConstruction();
	void M_SetUnderConstruction(const bool& value);

	//struct FST_Repairing_Progress	RepairingProgress;		//Offset: 1920	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_Repairing_Progress M_GetRepairingProgress() const;
	struct FST_Repairing_Progress* M_PtrGetRepairingProgress();
	void M_SetRepairingProgress(const struct FST_Repairing_Progress& value);

	//TArray<struct FST_ItemResource>	BuildingRequiredResources;		//Offset: 1944	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_ItemResource> M_GetBuildingRequiredResources() const;
	TArray<struct FST_ItemResource>* M_PtrGetBuildingRequiredResources();
	void M_SetBuildingRequiredResources(const TArray<struct FST_ItemResource>& value);

	//float	BuildingStepProgress;		//Offset: 1960	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingStepProgress() const;
	float* M_PtrGetBuildingStepProgress();
	void M_SetBuildingStepProgress(const float& value);

	//struct FST_DecorationPreset	BaseDecorationsSettings;		//Offset: 1968	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_DecorationPreset M_GetBaseDecorationsSettings() const;
	struct FST_DecorationPreset* M_PtrGetBaseDecorationsSettings();
	void M_SetBaseDecorationsSettings(const struct FST_DecorationPreset& value);

	//struct FST_DecorationPreset	FrameDecorationsSettings;		//Offset: 2000	Size: 32	Flags: Edit, BlueprintVisible, HasGetValueTypeHash
	struct FST_DecorationPreset M_GetFrameDecorationsSettings() const;
	struct FST_DecorationPreset* M_PtrGetFrameDecorationsSettings();
	void M_SetFrameDecorationsSettings(const struct FST_DecorationPreset& value);

	//TArray<struct FST_DecorationPreset>	ModulesDecorationsSettings;		//Offset: 2032	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_DecorationPreset> M_GetModulesDecorationsSettings() const;
	TArray<struct FST_DecorationPreset>* M_PtrGetModulesDecorationsSettings();
	void M_SetModulesDecorationsSettings(const TArray<struct FST_DecorationPreset>& value);

	//TAssetPtr<class UStaticMesh>	Mesh;		//Offset: 2048	Size: 40	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	TAssetPtr<class UStaticMesh> M_GetMesh() const;
	TAssetPtr<class UStaticMesh>* M_PtrGetMesh();
	void M_SetMesh(const TAssetPtr<class UStaticMesh>& value);

	//struct FTransform	MeshTransform;		//Offset: 2096	Size: 48	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FTransform M_GetMeshTransform() const;
	struct FTransform* M_PtrGetMeshTransform();
	void M_SetMeshTransform(const struct FTransform& value);

	//TArray<class AActor*>	FurnitureActors;		//Offset: 2144	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetFurnitureActors() const;
	TArray<class AActor*>* M_PtrGetFurnitureActors();
	void M_SetFurnitureActors(const TArray<class AActor*>& value);

	//class UBoxComponent*	NavCollider;		//Offset: 2160	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBoxComponent* M_GetNavCollider() const;
	class UBoxComponent** M_PtrGetNavCollider();
	void M_SetNavCollider(const class UBoxComponent*& value);

	//int32_t	CurrentNumberOfDecorations;		//Offset: 2168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetCurrentNumberOfDecorations() const;
	int32_t* M_PtrGetCurrentNumberOfDecorations();
	void M_SetCurrentNumberOfDecorations(const int32_t& value);

	//float	SoundAttenuationIntensity_Walls;		//Offset: 2172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSoundAttenuationIntensity_Walls() const;
	float* M_PtrGetSoundAttenuationIntensity_Walls();
	void M_SetSoundAttenuationIntensity_Walls(const float& value);

	//float	SoundAttenuationIntensity_Roofs;		//Offset: 2176	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSoundAttenuationIntensity_Roofs() const;
	float* M_PtrGetSoundAttenuationIntensity_Roofs();
	void M_SetSoundAttenuationIntensity_Roofs(const float& value);

	//TArray<class USoundMix*>	WallsSoundMix;		//Offset: 2184	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class USoundMix*> M_GetWallsSoundMix() const;
	TArray<class USoundMix*>* M_PtrGetWallsSoundMix();
	void M_SetWallsSoundMix(const TArray<class USoundMix*>& value);

	//TArray<class USoundMix*>	RoofsSoundMix;		//Offset: 2200	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class USoundMix*> M_GetRoofsSoundMix() const;
	TArray<class USoundMix*>* M_PtrGetRoofsSoundMix();
	void M_SetRoofsSoundMix(const TArray<class USoundMix*>& value);

	//TArray<class USoundEffectSubmixPreset*>	ReverbEffect;		//Offset: 2216	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class USoundEffectSubmixPreset*> M_GetReverbEffect() const;
	TArray<class USoundEffectSubmixPreset*>* M_PtrGetReverbEffect();
	void M_SetReverbEffect(const TArray<class USoundEffectSubmixPreset*>& value);

	//class UNiagaraComponent*	Interior_FX;		//Offset: 2232	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UNiagaraComponent* M_GetInterior_FX() const;
	class UNiagaraComponent** M_PtrGetInterior_FX();
	void M_SetInterior_FX(const class UNiagaraComponent*& value);

	//float	FX_Intensity;		//Offset: 2240	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFX_Intensity() const;
	float* M_PtrGetFX_Intensity();
	void M_SetFX_Intensity(const float& value);

	//TMap<int32_t, int32_t>	ModulesInitialIndex;		//Offset: 2248	Size: 80	Flags: Edit, BlueprintVisible
	TMap<int32_t, int32_t> M_GetModulesInitialIndex() const;
	TMap<int32_t, int32_t>* M_PtrGetModulesInitialIndex();
	void M_SetModulesInitialIndex(const TMap<int32_t, int32_t>& value);

	//bool	HasProductionIntensity;		//Offset: 2328	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasProductionIntensity() const;
	bool* M_PtrGetHasProductionIntensity();
	void M_SetHasProductionIntensity(const bool& value);

	//bool	NoTools;		//Offset: 2329	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNoTools() const;
	bool* M_PtrGetNoTools();
	void M_SetNoTools(const bool& value);

	//bool	NoResources;		//Offset: 2330	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNoResources() const;
	bool* M_PtrGetNoResources();
	void M_SetNoResources(const bool& value);

	//bool	NoWorkersForProduction;		//Offset: 2331	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNoWorkersForProduction() const;
	bool* M_PtrGetNoWorkersForProduction();
	void M_SetNoWorkersForProduction(const bool& value);

	//struct FString	CustomName_PlayerNickname;		//Offset: 2336	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetCustomName_PlayerNickname() const;
	struct FString* M_PtrGetCustomName_PlayerNickname();
	void M_SetCustomName_PlayerNickname(const struct FString& value);

	//struct FString	CustomName_PlayerNetID;		//Offset: 2352	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetCustomName_PlayerNetID() const;
	struct FString* M_PtrGetCustomName_PlayerNetID();
	void M_SetCustomName_PlayerNetID(const struct FString& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterBuilding.BP_MasterBuilding_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_MasterBuilding(int32_t EntryPoint);

	void OnBuildingConstructed();

	void RemoveDebugFurniture();

	void ShowDebugFurniture();

	void ReceiveDestroyed();

	void SetNavigationCollider();

	void DecreaseToolBuffer(const TEnumAsByte<E_Tools_Activity>& ToolActivity, float Value);

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void ShowBuildingInspectorUI();

	void FrameNoFinished();

	void BaseNotFinished();

	void ExecuteFinishFrameVisuals(bool load);

	void ExecuteFinishBaseVisuals(bool load);

	void SeasonalUpdate();

	void CreateFurnitures(bool load);

	void UpdateGhost(bool CheckPlacement);

	void ExecuteFinishLogic(bool load);

	void ExecuteFinishOthersVisuals(bool load);

	void BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	void BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

	void ReceiveBeginPlay();

	void DestroyBuilding(bool Cheat);

	void UpdateFurnituresTransformMulticast(int32_t FurnitureIndex, struct FTransform Transform);

	void ExecuteInitialGhostLogicMulticast(bool load);

	void ExecuteInitialGhostVisualsMulticast();

	void ExecuteInitialGhostLogic(bool load);

	void ExecuteInitialGhostVisuals();

	void CreateBuildingGhostServer(bool load);

	void OnBuildingInventoryChanged();

	void UserConstructionScript();

	void CheckBasementPlaceability(bool* PlacementPossible, float* Min);

	void UpdateBaseRotation(struct FRotator NewBaseRotation);

	void GenerateDestruction(float Intensity);

	void AddPeople(class ABP_BaseCharacter_C* Person);

	void RemovePeople(class ABP_BaseCharacter_C* Person);

	void RemoveAllPeople();

	void GetPeopleID(TArray<struct FString>* ID);

	void CheckIsMaxPeople(bool* IsFull);

	void CheckIsMaxAddtionalPeople(bool* IsFull);

	void CheckObstruction(bool* CanBePlaced_);

	void CheckIsMaxAnimal(bool* IsFull);

	void AddAnimal(class ABP_AnimalBase_C*& Animal);

	void RemoveAnimal(class ABP_AnimalBase_C*& Animal);

	void AddFurniture(class ABP_MasterFurniture_C* Furniture, class ABP_MasterBuildModule_C* ModuleReference);

	void GetTaskFromDependentFields(TEnumAsByte<E_NPCStatus>* Status, TEnumAsByte<E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem, struct FST_FieldTasksLists* Task);

	void RemoveFurniture(class ABP_MasterFurniture_C* Furniture);

	void GetFurniture(TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture);

	void UpdateBaseModule(bool load);

	void GenerateBuildingBase(bool Init, bool Upgrade, bool load, TArray<struct FST_SAVE_Modules>* LoadModulesData);

	void GenerateBuildingFrame(bool Init, bool Upgrade, bool load, TArray<struct FST_SAVE_Modules>* LoadModulesData);

	void GenerateBuildingModules(bool Init, bool Upgrade, bool load, TArray<struct FST_SAVE_Modules>* LoadModulesData);

	void OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership);

	void ChangeBuildingLevel(int32_t NewLevel);

	void GetBuildingModuleDataFromSlot(int32_t ModuleID, struct FST_BuildingModuleSocket SocketData, bool* Success, struct FST_Module* ModuleData, struct FDataTableRowHandle* ModuleDataHandler);

	void GetBuildingModulesDataFromSlot(int32_t SocketID, bool* Success, TArray<struct FST_Module>* ModulesData, TArray<struct FDataTableRowHandle>* ModulesDataHandlers);

	void ChangeModule(int32_t SocketID, int32_t Module_ID, class UInventoryComponent_C* Inventory);

	void UpdateInteriorVolume(bool UpdateOverlaps);

	void CheckIfBuildingIsConstructed(bool load);

	void AutoAssigningPeople();

	void CheckIfBuildingIsRepaired(bool load);

	void SetID();

	void InitAfterLoad(struct FString ID, struct FString CustomName, float ZLocation, TArray<struct FST_SAVE_Modules>* BaseModulesData, TArray<struct FST_SAVE_Modules>* FrameModulesData, TArray<struct FST_SAVE_Modules>* ModulesData, TArray<struct FST_SAVE_Containers>* Containers, TArray<struct FST_SAVE_Furnitures>* DecorativeFurnitures, TArray<struct FST_SAVE_ActivityFurnitures>* ActivityFurnitures, TArray<struct FST_SAVE_RefillableContainers>* RefillableContainers, TArray<struct FST_SAVE_Campfires>* Campfires, TArray<struct FST_SAVE_SeasonalProduction_Progress>* WorkersProductionData, TArray<struct FST_SAVE_AnimalProduction_Progress>* AnimalsProductionData, TArray<struct FST_SAVE_SourceOfResources>* SourceOfResources, TArray<struct FST_SAVE_SeasonalTrade_Progress>* TradeData, TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile, bool FurnitureCreatedFromFile, struct FST_Event_BuildingMultipliers EventMultipliersFromFile, struct FString SaveGameVersion, TEnumAsByte<E_ShopType> ShopTypeFromFile, bool BaseStage2FromFile, bool UnderRepairFromFile, bool UnderConstructionFromFile, struct FST_SAVE_Repairing_Progress RepairingProgressFromFile, int32_t LastLevel, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID, bool SeasonalManagementFromFile);

	void GetDataToSave(struct FST_SAVE_Buildings* BuildingData);

	void UpdateBuildingCondition();

	void SeasonalDecreaseBuildingCondition();

	void InitEconomy(bool load, TArray<struct FST_SAVE_SeasonalProduction_Progress>* WorkersProductionDataFromFile, TArray<struct FST_SAVE_AnimalProduction_Progress>* AnimalsProductionDataFromFile, TArray<struct FST_SAVE_SeasonalTrade_Progress>* TradeDataFromFile, const TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>& ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile, struct FST_SAVE_Repairing_Progress RepairingProgressFromFile, bool SeasonalManagementFromFile);

	void CheckSocketPlacement(bool* OverrideTransform, struct FTransform* Transform);

	void UpdatePlacement(float DeltaTime);

	void TeleportPeople(bool PlayerIncluded);

	void GetAnimalRange(struct FTransform* VolumeTransform, struct FVector* BoxExtent);

	void GetNumberOfDoors(bool OnlyConstructed, int32_t* NumberOfDoors, int32_t* DoorModuleID);

	void GetUnoccupiedSleepSlot(int32_t* SleepSlotIndex, bool* Success);

	void OccupySleepSlot(int32_t Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform);

	void UnoccupySleepSlots();

	void UnoccupySleepSlot(int32_t Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint);

	void ChangeSeasonalProductionPower(bool Deacrease_Increase, TArray<int32_t>* Powers, TArray<int32_t>* ChangedValues);

	void IncreaseSeasonalProductionPower(int32_t SeasonIndex, int32_t Value, int32_t* ChangedValue);

	void DecreaseSeasonalProductionPower(int32_t SeasonIndex, int32_t Value, int32_t* ChangedValue);

	void UpdateProductionOnBuildingChangeLevel();

	void CheckSleepSlotIsOccupied(int32_t Index, bool* Success);

	void RemoveAllAnimals();

	void IsDamaged(bool* Damaged);

	void UpdateProductionOnSeasonalManagementChanged(bool SeasonalManagement);

	void FindProductionItem(struct FST_Production_Recipe Recipe, TArray<struct FST_Production_Progress>* OldProduction, bool* Success, struct FST_Production_Progress* RecipeProgress);

	void GetNumberOfFurnitures(int32_t* Value);

	void GetNPCDataToSave(struct FST_SAVE_NPC_Building* BuildingData);

	void InitNPCBuildingAfterLoad(TArray<struct FST_SAVE_Containers>* Containers, struct FString SaveGameVersion);

	void GetWorkersProductionDataForReplication(TArray<bool>* Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, TArray<int32_t>* Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, TArray<int32_t>* SeasonalPower, TArray<float>* Progresses, TArray<float>* NumbersPerHour_Spring, TArray<float>* NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter);

	void GetTradeDataForReplication(TArray<bool>* Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, TArray<int32_t>* Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, TArray<int32_t>* SeasonalPower, TArray<float>* Progresses, TArray<float>* NumbersPerHour_Spring, TArray<float>* NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter);

	void Production_HasWorkers(bool* Workers);

	void Production_HasAnimals(bool* Animals);

	void Production_HasFood(bool* Food);

	void Production_HasWater(bool* water);

	void Production_HasWood(bool* wood);

	void CanBeDestroyed_(bool* CanBeDestroyed_);

	void GetNumbersOfAnimals(TEnumAsByte<E_AnimalType> AnimalType, int32_t* YoungFemaleCount, int32_t* YoungMaleCount, int32_t* FemaleCount, int32_t* MaleCount);

	void GetTax(float* Value);

	void SetSocket();

	void UnoccupyWorkSlots();

	void Production_HasTools(bool* Tools);

	void Production_HasResouces(bool* Resources);

	void Production_HasProductionIntensity(bool* Production);

	void FoodDemand(float* Demand);

	void WaterDemand(float* Demand);

	void WoodDemand(float* Demand);

	void OnPeopleOrAnimalsListChanged();

	void SetShopType(TEnumAsByte<E_ShopType> Type, bool InitTradingData);

	void CheckPointOnTheMap(struct FVector Location, bool* OnMap);

	void SetModulesVisibility(bool Visible);

	void GetTotalCostOfRepair(TArray<struct FST_ItemResource>* Items);

	void GetTotalCostOfConstruction(TArray<struct FST_ItemResource>* Items);

	void RepairModule();

	void AddBuildingToBuildersList(bool RepairOrBuild);

	void RemoveBuildingFromBuildersList(bool RepairOrBuild);

	void ClearPreset();

	void GenerateEmptyPreset();

	void IsLastUnconstructedModule(bool* Last);

	void SetMarkers();

	void SetFurniture(int32_t ID, const struct FTransform& RelativeTransform, TAssetPtr<class UClass> Actor, bool OverriteSlotsSettings, TArray<bool>* SlotAvailable, bool HasTable, bool HasInventoryLimit, bool OverriteOwnership, TEnumAsByte<E_Ownership> Ownership, bool BlockCustomisation, class AActor** ActorSpawned, bool* OnlyTransformUpdated);

	void UpdateStairs();

	void SetLoadedModuleData(class ABP_MasterBuildModule_C* Module, struct FST_SAVE_Modules Data);

	void IsChestEmpty(bool* IsEmpty);

	void GetChestLimit(float* Limit);

	void UpdateModuleNames();

	void UpdateNumberOfDecorations();

	void SetAudioInside(bool bInside, float Walls_Wind, float Roofs_Rain);

	void PlaySoundAtLocation_BlockingLoad(TAssetPtr<class USoundBase> Sound, struct FVector Location);

	void OnRep_FrameConstructed();

	void OnRep_BaseConstructed();

	void OnRep_NumberOfConstructedModules();

	void OnRep_CurrentBuildingLevel();

	void FixPreset();

	void OnRep_ShopType();

	void UpdateShopTypeClient();

	void OnRep_People();

	void OnRep_ListOfAnimals();

	void OnRep_AdditionalPeople();

	void OnRep_BuildingConstructed();

	void IsAnyInteractedPlayer(bool* Valid);

	void OnRep_SeasonalManagement();

	int32_t GetAvailablePeopleSlots();

	void GetBuildingType(TEnumAsByte<E_Buildings>* GetBuildingType);

	void GetEntrances(TArray<struct FVector>* Entrances);

	void GetBuildingReference_BPI(class AActor** MasterBuilding);

	void UnoccupyWorkSlot(int32_t WorkSlotIndex, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint);

	void CheckTool(TEnumAsByte<E_Tools_Activity> ToolActivity, float Value, bool* Success, TEnumAsByte<E_Tools>* ToolForAnimation, TAssetPtr<class UClass>* HoldableClass);

	void GetFoliageTargetsData(TArray<struct FST_FoliageTargetsData>* FoliageTargetsData);

	void CheckWorkIntensity(TEnumAsByte<E_Profession> Profession, bool* Success);

	void FindClosestAnimalFromSpawner(TArray<TEnumAsByte<E_AnimalType>>* AnimalType, bool* Success, class AActor** Animal);

	void CheckIsBuildingConstructed(bool* IsConstructed);

	void GetFurnitures_BPI(TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class AActor*>* Furnitures);

	void GetRandomFishPointNear(bool* Success, class AActor** FishPoint);

	void CheckItemInChest(bool RemoveItem, struct FName ItemName, bool* Success);

	void FindRandomHusbandryAnimal(bool* Success, struct FVector* Destination);

	void GetTeleportPointLocation(struct FVector* Location);

	void GetRandomUnoccupiedWorkSlot(TEnumAsByte<E_BuildingSlotType> SlotType, int32_t WorkSlotIndexToIgnore, class AActor* actorToIgnore, int32_t* WorkSlotIndex, bool* Success);

	void OccupyWorkSlot(int32_t WorkSlotIndex, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform);

	void CheckIsProductionSettings(bool* Success);

	void GetWorkSlotWorldTransforms(int32_t WorkSlotIndex, bool* Success, struct FTransform* SlotTransform, struct FTransform* StartPointTransform);

	void GetWorkRadius(float* WorkRadius);

	void SetHousePeopleRelations(bool* Success);

	void GetRandomAnimID_FromWorkSlot(int32_t WorkSlotIndex, TEnumAsByte<E_BuildingSlotType> SlotType, bool* Success, unsigned char* AnimID);

	void GetSleepSlotWorldTransforms(int32_t SleepSlotIndex, bool* Success, struct FTransform* SlotTransform, struct FTransform* StartPointTransform);

	void GetTeleportPointOffsetedByRightVector(float Offset, struct FVector* Location);

	void ChangeInfantsBed(bool IsInfant, bool InBed, bool* Success);

	void GetBuildingIcon_BPI(TAssetPtr<class UTexture2D>* Icon);

	void CheckIfThereAreWorkingHours(bool* Success);

	void GetDecorationData(TArray<struct FName>* DecorationData);

	void GetModuleType(TEnumAsByte<E_ModuleType>* ModuleType);

	void GetBuildingHandlers(struct FDataTableRowHandle HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility);

	void GetSocketLocation(struct FTransform* Transform);

	void CheckSocketCompatibility(struct FDataTableRowHandle BuildingHandler, bool* Success);

#pragma endregion
};
};