#include "../SDK.h"
#include "BP_MasterBuilding_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_MasterBuilding_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_MasterBuilding_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_MasterBuilding_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of PlacementMarker
// Declaration: class UInstancedStaticMeshComponent* PlacementMarker
class UInstancedStaticMeshComponent* ABP_MasterBuilding_C::M_GetPlacementMarker() const {
	return Read<class UInstancedStaticMeshComponent*>((byte*)this + 552);
}
class UInstancedStaticMeshComponent** ABP_MasterBuilding_C::M_PtrGetPlacementMarker() {
	return reinterpret_cast<class UInstancedStaticMeshComponent**>((byte*)this + 552);
}
void ABP_MasterBuilding_C::M_SetPlacementMarker(const class UInstancedStaticMeshComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of Draw
// Declaration: class UBoxComponent* Draw
class UBoxComponent* ABP_MasterBuilding_C::M_GetDraw() const {
	return Read<class UBoxComponent*>((byte*)this + 560);
}
class UBoxComponent** ABP_MasterBuilding_C::M_PtrGetDraw() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 560);
}
void ABP_MasterBuilding_C::M_SetDraw(const class UBoxComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of NavExcludeVolume
// Declaration: class UBoxComponent* NavExcludeVolume
class UBoxComponent* ABP_MasterBuilding_C::M_GetNavExcludeVolume() const {
	return Read<class UBoxComponent*>((byte*)this + 568);
}
class UBoxComponent** ABP_MasterBuilding_C::M_PtrGetNavExcludeVolume() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 568);
}
void ABP_MasterBuilding_C::M_SetNavExcludeVolume(const class UBoxComponent*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of NavModifier
// Declaration: class UNavModifierComponent* NavModifier
class UNavModifierComponent* ABP_MasterBuilding_C::M_GetNavModifier() const {
	return Read<class UNavModifierComponent*>((byte*)this + 576);
}
class UNavModifierComponent** ABP_MasterBuilding_C::M_PtrGetNavModifier() {
	return reinterpret_cast<class UNavModifierComponent**>((byte*)this + 576);
}
void ABP_MasterBuilding_C::M_SetNavModifier(const class UNavModifierComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of DetectionTrace_C
// Declaration: class UArrowComponent* DetectionTrace_C
class UArrowComponent* ABP_MasterBuilding_C::M_GetDetectionTrace_C() const {
	return Read<class UArrowComponent*>((byte*)this + 584);
}
class UArrowComponent** ABP_MasterBuilding_C::M_PtrGetDetectionTrace_C() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 584);
}
void ABP_MasterBuilding_C::M_SetDetectionTrace_C(const class UArrowComponent*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of InspectorPoint
// Declaration: class USphereComponent* InspectorPoint
class USphereComponent* ABP_MasterBuilding_C::M_GetInspectorPoint() const {
	return Read<class USphereComponent*>((byte*)this + 592);
}
class USphereComponent** ABP_MasterBuilding_C::M_PtrGetInspectorPoint() {
	return reinterpret_cast<class USphereComponent**>((byte*)this + 592);
}
void ABP_MasterBuilding_C::M_SetInspectorPoint(const class USphereComponent*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of AnimalVolume
// Declaration: class UBoxComponent* AnimalVolume
class UBoxComponent* ABP_MasterBuilding_C::M_GetAnimalVolume() const {
	return Read<class UBoxComponent*>((byte*)this + 600);
}
class UBoxComponent** ABP_MasterBuilding_C::M_PtrGetAnimalVolume() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 600);
}
void ABP_MasterBuilding_C::M_SetAnimalVolume(const class UBoxComponent*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of InteriorVolume
// Declaration: class UBoxComponent* InteriorVolume
class UBoxComponent* ABP_MasterBuilding_C::M_GetInteriorVolume() const {
	return Read<class UBoxComponent*>((byte*)this + 608);
}
class UBoxComponent** ABP_MasterBuilding_C::M_PtrGetInteriorVolume() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 608);
}
void ABP_MasterBuilding_C::M_SetInteriorVolume(const class UBoxComponent*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of UI_Inspector
// Declaration: class UWidgetComponent* UI_Inspector
class UWidgetComponent* ABP_MasterBuilding_C::M_GetUI_Inspector() const {
	return Read<class UWidgetComponent*>((byte*)this + 616);
}
class UWidgetComponent** ABP_MasterBuilding_C::M_PtrGetUI_Inspector() {
	return reinterpret_cast<class UWidgetComponent**>((byte*)this + 616);
}
void ABP_MasterBuilding_C::M_SetUI_Inspector(const class UWidgetComponent*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of AllowedToBuild
// Declaration: class UBoxComponent* AllowedToBuild
class UBoxComponent* ABP_MasterBuilding_C::M_GetAllowedToBuild() const {
	return Read<class UBoxComponent*>((byte*)this + 624);
}
class UBoxComponent** ABP_MasterBuilding_C::M_PtrGetAllowedToBuild() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 624);
}
void ABP_MasterBuilding_C::M_SetAllowedToBuild(const class UBoxComponent*& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of TeleportPoint
// Declaration: class UArrowComponent* TeleportPoint
class UArrowComponent* ABP_MasterBuilding_C::M_GetTeleportPoint() const {
	return Read<class UArrowComponent*>((byte*)this + 632);
}
class UArrowComponent** ABP_MasterBuilding_C::M_PtrGetTeleportPoint() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 632);
}
void ABP_MasterBuilding_C::M_SetTeleportPoint(const class UArrowComponent*& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of BuildingParent
// Declaration: class USceneComponent* BuildingParent
class USceneComponent* ABP_MasterBuilding_C::M_GetBuildingParent() const {
	return Read<class USceneComponent*>((byte*)this + 640);
}
class USceneComponent** ABP_MasterBuilding_C::M_PtrGetBuildingParent() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 640);
}
void ABP_MasterBuilding_C::M_SetBuildingParent(const class USceneComponent*& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of DetectionTrace_UR
// Declaration: class UArrowComponent* DetectionTrace_UR
class UArrowComponent* ABP_MasterBuilding_C::M_GetDetectionTrace_UR() const {
	return Read<class UArrowComponent*>((byte*)this + 648);
}
class UArrowComponent** ABP_MasterBuilding_C::M_PtrGetDetectionTrace_UR() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 648);
}
void ABP_MasterBuilding_C::M_SetDetectionTrace_UR(const class UArrowComponent*& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of DetectionTrace_DL
// Declaration: class UArrowComponent* DetectionTrace_DL
class UArrowComponent* ABP_MasterBuilding_C::M_GetDetectionTrace_DL() const {
	return Read<class UArrowComponent*>((byte*)this + 656);
}
class UArrowComponent** ABP_MasterBuilding_C::M_PtrGetDetectionTrace_DL() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 656);
}
void ABP_MasterBuilding_C::M_SetDetectionTrace_DL(const class UArrowComponent*& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of DetectionTrace_DR
// Declaration: class UArrowComponent* DetectionTrace_DR
class UArrowComponent* ABP_MasterBuilding_C::M_GetDetectionTrace_DR() const {
	return Read<class UArrowComponent*>((byte*)this + 664);
}
class UArrowComponent** ABP_MasterBuilding_C::M_PtrGetDetectionTrace_DR() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 664);
}
void ABP_MasterBuilding_C::M_SetDetectionTrace_DR(const class UArrowComponent*& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of DetectionTrace_UL
// Declaration: class UArrowComponent* DetectionTrace_UL
class UArrowComponent* ABP_MasterBuilding_C::M_GetDetectionTrace_UL() const {
	return Read<class UArrowComponent*>((byte*)this + 672);
}
class UArrowComponent** ABP_MasterBuilding_C::M_PtrGetDetectionTrace_UL() {
	return reinterpret_cast<class UArrowComponent**>((byte*)this + 672);
}
void ABP_MasterBuilding_C::M_SetDetectionTrace_UL(const class UArrowComponent*& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of Scene
// Declaration: class USceneComponent* Scene
class USceneComponent* ABP_MasterBuilding_C::M_GetScene() const {
	return Read<class USceneComponent*>((byte*)this + 680);
}
class USceneComponent** ABP_MasterBuilding_C::M_PtrGetScene() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 680);
}
void ABP_MasterBuilding_C::M_SetScene(const class USceneComponent*& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of BuildingFoundationArrows
// Declaration: TArray<class UArrowComponent*> BuildingFoundationArrows
TArray<class UArrowComponent*> ABP_MasterBuilding_C::M_GetBuildingFoundationArrows() const {
	return Read<TArray<class UArrowComponent*>>((byte*)this + 688);
}
TArray<class UArrowComponent*>* ABP_MasterBuilding_C::M_PtrGetBuildingFoundationArrows() {
	return reinterpret_cast<TArray<class UArrowComponent*>*>((byte*)this + 688);
}
void ABP_MasterBuilding_C::M_SetBuildingFoundationArrows(const TArray<class UArrowComponent*>& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of GhostMaterialReference
// Declaration: class UMaterialInstanceDynamic* GhostMaterialReference
class UMaterialInstanceDynamic* ABP_MasterBuilding_C::M_GetGhostMaterialReference() const {
	return Read<class UMaterialInstanceDynamic*>((byte*)this + 704);
}
class UMaterialInstanceDynamic** ABP_MasterBuilding_C::M_PtrGetGhostMaterialReference() {
	return reinterpret_cast<class UMaterialInstanceDynamic**>((byte*)this + 704);
}
void ABP_MasterBuilding_C::M_SetGhostMaterialReference(const class UMaterialInstanceDynamic*& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of Placeable
// Declaration: bool Placeable
bool ABP_MasterBuilding_C::M_GetPlaceable() const {
	return Read<bool>((byte*)this + 712);
}
bool* ABP_MasterBuilding_C::M_PtrGetPlaceable() {
	return reinterpret_cast<bool*>((byte*)this + 712);
}
void ABP_MasterBuilding_C::M_SetPlaceable(const bool& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of RotatingRight
// Declaration: bool RotatingRight
bool ABP_MasterBuilding_C::M_GetRotatingRight() const {
	return Read<bool>((byte*)this + 713);
}
bool* ABP_MasterBuilding_C::M_PtrGetRotatingRight() {
	return reinterpret_cast<bool*>((byte*)this + 713);
}
void ABP_MasterBuilding_C::M_SetRotatingRight(const bool& value) {
	Write((byte*)this + 713, value);
}
// Member Getter and Setter of RotatingLeft
// Declaration: bool RotatingLeft
bool ABP_MasterBuilding_C::M_GetRotatingLeft() const {
	return Read<bool>((byte*)this + 714);
}
bool* ABP_MasterBuilding_C::M_PtrGetRotatingLeft() {
	return reinterpret_cast<bool*>((byte*)this + 714);
}
void ABP_MasterBuilding_C::M_SetRotatingLeft(const bool& value) {
	Write((byte*)this + 714, value);
}
// Member Getter and Setter of BuildingRotation
// Declaration: float BuildingRotation
float ABP_MasterBuilding_C::M_GetBuildingRotation() const {
	return Read<float>((byte*)this + 716);
}
float* ABP_MasterBuilding_C::M_PtrGetBuildingRotation() {
	return reinterpret_cast<float*>((byte*)this + 716);
}
void ABP_MasterBuilding_C::M_SetBuildingRotation(const float& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of CustomName
// Declaration: struct FString CustomName
struct FString ABP_MasterBuilding_C::M_GetCustomName() const {
	return Read<struct FString>((byte*)this + 720);
}
struct FString* ABP_MasterBuilding_C::M_PtrGetCustomName() {
	return reinterpret_cast<struct FString*>((byte*)this + 720);
}
void ABP_MasterBuilding_C::M_SetCustomName(const struct FString& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of BaseRotation
// Declaration: struct FRotator BaseRotation
struct FRotator ABP_MasterBuilding_C::M_GetBaseRotation() const {
	return Read<struct FRotator>((byte*)this + 736);
}
struct FRotator* ABP_MasterBuilding_C::M_PtrGetBaseRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 736);
}
void ABP_MasterBuilding_C::M_SetBaseRotation(const struct FRotator& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of InteractActionText
// Declaration: struct FText InteractActionText
struct FText ABP_MasterBuilding_C::M_GetInteractActionText() const {
	return Read<struct FText>((byte*)this + 752);
}
struct FText* ABP_MasterBuilding_C::M_PtrGetInteractActionText() {
	return reinterpret_cast<struct FText*>((byte*)this + 752);
}
void ABP_MasterBuilding_C::M_SetInteractActionText(const struct FText& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of InteractSecondActionText
// Declaration: struct FText InteractSecondActionText
struct FText ABP_MasterBuilding_C::M_GetInteractSecondActionText() const {
	return Read<struct FText>((byte*)this + 776);
}
struct FText* ABP_MasterBuilding_C::M_PtrGetInteractSecondActionText() {
	return reinterpret_cast<struct FText*>((byte*)this + 776);
}
void ABP_MasterBuilding_C::M_SetInteractSecondActionText(const struct FText& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of InteractionTime
// Declaration: float InteractionTime
float ABP_MasterBuilding_C::M_GetInteractionTime() const {
	return Read<float>((byte*)this + 800);
}
float* ABP_MasterBuilding_C::M_PtrGetInteractionTime() {
	return reinterpret_cast<float*>((byte*)this + 800);
}
void ABP_MasterBuilding_C::M_SetInteractionTime(const float& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of InteractToolType
// Declaration: TEnumAsByte<E_Tools> InteractToolType
TEnumAsByte<E_Tools> ABP_MasterBuilding_C::M_GetInteractToolType() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 804);
}
TEnumAsByte<E_Tools>* ABP_MasterBuilding_C::M_PtrGetInteractToolType() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 804);
}
void ABP_MasterBuilding_C::M_SetInteractToolType(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of ID
// Declaration: struct FString ID
struct FString ABP_MasterBuilding_C::M_GetID() const {
	return Read<struct FString>((byte*)this + 808);
}
struct FString* ABP_MasterBuilding_C::M_PtrGetID() {
	return reinterpret_cast<struct FString*>((byte*)this + 808);
}
void ABP_MasterBuilding_C::M_SetID(const struct FString& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of DistanceCheck_Stage1
// Declaration: float DistanceCheck_Stage1
float ABP_MasterBuilding_C::M_GetDistanceCheck_Stage1() const {
	return Read<float>((byte*)this + 824);
}
float* ABP_MasterBuilding_C::M_PtrGetDistanceCheck_Stage1() {
	return reinterpret_cast<float*>((byte*)this + 824);
}
void ABP_MasterBuilding_C::M_SetDistanceCheck_Stage1(const float& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of DistanceCheck_Stage2
// Declaration: float DistanceCheck_Stage2
float ABP_MasterBuilding_C::M_GetDistanceCheck_Stage2() const {
	return Read<float>((byte*)this + 828);
}
float* ABP_MasterBuilding_C::M_PtrGetDistanceCheck_Stage2() {
	return reinterpret_cast<float*>((byte*)this + 828);
}
void ABP_MasterBuilding_C::M_SetDistanceCheck_Stage2(const float& value) {
	Write((byte*)this + 828, value);
}
// Member Getter and Setter of BuildingBaseModule
// Declaration: class ABP_MasterBuildModule_C* BuildingBaseModule
class ABP_MasterBuildModule_C* ABP_MasterBuilding_C::M_GetBuildingBaseModule() const {
	return Read<class ABP_MasterBuildModule_C*>((byte*)this + 832);
}
class ABP_MasterBuildModule_C** ABP_MasterBuilding_C::M_PtrGetBuildingBaseModule() {
	return reinterpret_cast<class ABP_MasterBuildModule_C**>((byte*)this + 832);
}
void ABP_MasterBuilding_C::M_SetBuildingBaseModule(const class ABP_MasterBuildModule_C*& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of BuildingFrameModule
// Declaration: class ABP_MasterBuildModule_C* BuildingFrameModule
class ABP_MasterBuildModule_C* ABP_MasterBuilding_C::M_GetBuildingFrameModule() const {
	return Read<class ABP_MasterBuildModule_C*>((byte*)this + 840);
}
class ABP_MasterBuildModule_C** ABP_MasterBuilding_C::M_PtrGetBuildingFrameModule() {
	return reinterpret_cast<class ABP_MasterBuildModule_C**>((byte*)this + 840);
}
void ABP_MasterBuilding_C::M_SetBuildingFrameModule(const class ABP_MasterBuildModule_C*& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of BuildingModules
// Declaration: TArray<class ABP_MasterBuildModule_C*> BuildingModules
TArray<class ABP_MasterBuildModule_C*> ABP_MasterBuilding_C::M_GetBuildingModules() const {
	return Read<TArray<class ABP_MasterBuildModule_C*>>((byte*)this + 848);
}
TArray<class ABP_MasterBuildModule_C*>* ABP_MasterBuilding_C::M_PtrGetBuildingModules() {
	return reinterpret_cast<TArray<class ABP_MasterBuildModule_C*>*>((byte*)this + 848);
}
void ABP_MasterBuilding_C::M_SetBuildingModules(const TArray<class ABP_MasterBuildModule_C*>& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of HighBase
// Declaration: bool HighBase
bool ABP_MasterBuilding_C::M_GetHighBase() const {
	return Read<bool>((byte*)this + 864);
}
bool* ABP_MasterBuilding_C::M_PtrGetHighBase() {
	return reinterpret_cast<bool*>((byte*)this + 864);
}
void ABP_MasterBuilding_C::M_SetHighBase(const bool& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_MasterBuilding_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 872);
}
class ABP_SystemsManager_C** ABP_MasterBuilding_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 872);
}
void ABP_MasterBuilding_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of People
// Declaration: TArray<class ABP_BaseCharacter_C*> People
TArray<class ABP_BaseCharacter_C*> ABP_MasterBuilding_C::M_GetPeople() const {
	return Read<TArray<class ABP_BaseCharacter_C*>>((byte*)this + 880);
}
TArray<class ABP_BaseCharacter_C*>* ABP_MasterBuilding_C::M_PtrGetPeople() {
	return reinterpret_cast<TArray<class ABP_BaseCharacter_C*>*>((byte*)this + 880);
}
void ABP_MasterBuilding_C::M_SetPeople(const TArray<class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of CurrentBuildingType
// Declaration: struct FST_Building CurrentBuildingType
struct FST_Building ABP_MasterBuilding_C::M_GetCurrentBuildingType() const {
	return Read<struct FST_Building>((byte*)this + 896);
}
struct FST_Building* ABP_MasterBuilding_C::M_PtrGetCurrentBuildingType() {
	return reinterpret_cast<struct FST_Building*>((byte*)this + 896);
}
void ABP_MasterBuilding_C::M_SetCurrentBuildingType(const struct FST_Building& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of BuildingHeight
// Declaration: float BuildingHeight
float ABP_MasterBuilding_C::M_GetBuildingHeight() const {
	return Read<float>((byte*)this + 1264);
}
float* ABP_MasterBuilding_C::M_PtrGetBuildingHeight() {
	return reinterpret_cast<float*>((byte*)this + 1264);
}
void ABP_MasterBuilding_C::M_SetBuildingHeight(const float& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of BaseTemperature
// Declaration: float BaseTemperature
float ABP_MasterBuilding_C::M_GetBaseTemperature() const {
	return Read<float>((byte*)this + 1268);
}
float* ABP_MasterBuilding_C::M_PtrGetBaseTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1268);
}
void ABP_MasterBuilding_C::M_SetBaseTemperature(const float& value) {
	Write((byte*)this + 1268, value);
}
// Member Getter and Setter of SleepSlots
// Declaration: TArray<struct FST_SlotSettings> SleepSlots
TArray<struct FST_SlotSettings> ABP_MasterBuilding_C::M_GetSleepSlots() const {
	return Read<TArray<struct FST_SlotSettings>>((byte*)this + 1272);
}
TArray<struct FST_SlotSettings>* ABP_MasterBuilding_C::M_PtrGetSleepSlots() {
	return reinterpret_cast<TArray<struct FST_SlotSettings>*>((byte*)this + 1272);
}
void ABP_MasterBuilding_C::M_SetSleepSlots(const TArray<struct FST_SlotSettings>& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of TraceHeight
// Declaration: float TraceHeight
float ABP_MasterBuilding_C::M_GetTraceHeight() const {
	return Read<float>((byte*)this + 1288);
}
float* ABP_MasterBuilding_C::M_PtrGetTraceHeight() {
	return reinterpret_cast<float*>((byte*)this + 1288);
}
void ABP_MasterBuilding_C::M_SetTraceHeight(const float& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of DependentBuildings
// Declaration: TArray<TEnumAsByte<E_Buildings>> DependentBuildings
TArray<TEnumAsByte<E_Buildings>> ABP_MasterBuilding_C::M_GetDependentBuildings() const {
	return Read<TArray<TEnumAsByte<E_Buildings>>>((byte*)this + 1296);
}
TArray<TEnumAsByte<E_Buildings>>* ABP_MasterBuilding_C::M_PtrGetDependentBuildings() {
	return reinterpret_cast<TArray<TEnumAsByte<E_Buildings>>*>((byte*)this + 1296);
}
void ABP_MasterBuilding_C::M_SetDependentBuildings(const TArray<TEnumAsByte<E_Buildings>>& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of DependentBuildingsReferences
// Declaration: TArray<class ABP_MasterBuilding_C*> DependentBuildingsReferences
TArray<class ABP_MasterBuilding_C*> ABP_MasterBuilding_C::M_GetDependentBuildingsReferences() const {
	return Read<TArray<class ABP_MasterBuilding_C*>>((byte*)this + 1312);
}
TArray<class ABP_MasterBuilding_C*>* ABP_MasterBuilding_C::M_PtrGetDependentBuildingsReferences() {
	return reinterpret_cast<TArray<class ABP_MasterBuilding_C*>*>((byte*)this + 1312);
}
void ABP_MasterBuilding_C::M_SetDependentBuildingsReferences(const TArray<class ABP_MasterBuilding_C*>& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of DependentFields
// Declaration: bool DependentFields
bool ABP_MasterBuilding_C::M_GetDependentFields() const {
	return Read<bool>((byte*)this + 1328);
}
bool* ABP_MasterBuilding_C::M_PtrGetDependentFields() {
	return reinterpret_cast<bool*>((byte*)this + 1328);
}
void ABP_MasterBuilding_C::M_SetDependentFields(const bool& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of DependentFieldsReferences
// Declaration: TArray<class ABP_MasterField_C*> DependentFieldsReferences
TArray<class ABP_MasterField_C*> ABP_MasterBuilding_C::M_GetDependentFieldsReferences() const {
	return Read<TArray<class ABP_MasterField_C*>>((byte*)this + 1336);
}
TArray<class ABP_MasterField_C*>* ABP_MasterBuilding_C::M_PtrGetDependentFieldsReferences() {
	return reinterpret_cast<TArray<class ABP_MasterField_C*>*>((byte*)this + 1336);
}
void ABP_MasterBuilding_C::M_SetDependentFieldsReferences(const TArray<class ABP_MasterField_C*>& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of BaseConstructed
// Declaration: bool BaseConstructed
bool ABP_MasterBuilding_C::M_GetBaseConstructed() const {
	return Read<bool>((byte*)this + 1352);
}
bool* ABP_MasterBuilding_C::M_PtrGetBaseConstructed() {
	return reinterpret_cast<bool*>((byte*)this + 1352);
}
void ABP_MasterBuilding_C::M_SetBaseConstructed(const bool& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of FrameConstructed
// Declaration: bool FrameConstructed
bool ABP_MasterBuilding_C::M_GetFrameConstructed() const {
	return Read<bool>((byte*)this + 1353);
}
bool* ABP_MasterBuilding_C::M_PtrGetFrameConstructed() {
	return reinterpret_cast<bool*>((byte*)this + 1353);
}
void ABP_MasterBuilding_C::M_SetFrameConstructed(const bool& value) {
	Write((byte*)this + 1353, value);
}
// Member Getter and Setter of BuildingConstructed
// Declaration: bool BuildingConstructed
bool ABP_MasterBuilding_C::M_GetBuildingConstructed() const {
	return Read<bool>((byte*)this + 1354);
}
bool* ABP_MasterBuilding_C::M_PtrGetBuildingConstructed() {
	return reinterpret_cast<bool*>((byte*)this + 1354);
}
void ABP_MasterBuilding_C::M_SetBuildingConstructed(const bool& value) {
	Write((byte*)this + 1354, value);
}
// Member Getter and Setter of Destructed
// Declaration: bool Destructed
bool ABP_MasterBuilding_C::M_GetDestructed() const {
	return Read<bool>((byte*)this + 1355);
}
bool* ABP_MasterBuilding_C::M_PtrGetDestructed() {
	return reinterpret_cast<bool*>((byte*)this + 1355);
}
void ABP_MasterBuilding_C::M_SetDestructed(const bool& value) {
	Write((byte*)this + 1355, value);
}
// Member Getter and Setter of ListOfAnimals
// Declaration: TArray<class ABP_AnimalBase_C*> ListOfAnimals
TArray<class ABP_AnimalBase_C*> ABP_MasterBuilding_C::M_GetListOfAnimals() const {
	return Read<TArray<class ABP_AnimalBase_C*>>((byte*)this + 1360);
}
TArray<class ABP_AnimalBase_C*>* ABP_MasterBuilding_C::M_PtrGetListOfAnimals() {
	return reinterpret_cast<TArray<class ABP_AnimalBase_C*>*>((byte*)this + 1360);
}
void ABP_MasterBuilding_C::M_SetListOfAnimals(const TArray<class ABP_AnimalBase_C*>& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of ListOfFurniture
// Declaration: TArray<struct FST_FurnitureCategory> ListOfFurniture
TArray<struct FST_FurnitureCategory> ABP_MasterBuilding_C::M_GetListOfFurniture() const {
	return Read<TArray<struct FST_FurnitureCategory>>((byte*)this + 1376);
}
TArray<struct FST_FurnitureCategory>* ABP_MasterBuilding_C::M_PtrGetListOfFurniture() {
	return reinterpret_cast<TArray<struct FST_FurnitureCategory>*>((byte*)this + 1376);
}
void ABP_MasterBuilding_C::M_SetListOfFurniture(const TArray<struct FST_FurnitureCategory>& value) {
	Write((byte*)this + 1376, value);
}
// Member Getter and Setter of DistanceFromPlayer
// Declaration: float DistanceFromPlayer
float ABP_MasterBuilding_C::M_GetDistanceFromPlayer() const {
	return Read<float>((byte*)this + 1392);
}
float* ABP_MasterBuilding_C::M_PtrGetDistanceFromPlayer() {
	return reinterpret_cast<float*>((byte*)this + 1392);
}
void ABP_MasterBuilding_C::M_SetDistanceFromPlayer(const float& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of BuildAtTheBeginning
// Declaration: bool BuildAtTheBeginning
bool ABP_MasterBuilding_C::M_GetBuildAtTheBeginning() const {
	return Read<bool>((byte*)this + 1396);
}
bool* ABP_MasterBuilding_C::M_PtrGetBuildAtTheBeginning() {
	return reinterpret_cast<bool*>((byte*)this + 1396);
}
void ABP_MasterBuilding_C::M_SetBuildAtTheBeginning(const bool& value) {
	Write((byte*)this + 1396, value);
}
// Member Getter and Setter of UpgradeAtTheBeginning
// Declaration: bool UpgradeAtTheBeginning
bool ABP_MasterBuilding_C::M_GetUpgradeAtTheBeginning() const {
	return Read<bool>((byte*)this + 1397);
}
bool* ABP_MasterBuilding_C::M_PtrGetUpgradeAtTheBeginning() {
	return reinterpret_cast<bool*>((byte*)this + 1397);
}
void ABP_MasterBuilding_C::M_SetUpgradeAtTheBeginning(const bool& value) {
	Write((byte*)this + 1397, value);
}
// Member Getter and Setter of DestroyedAtTheBeginning
// Declaration: bool DestroyedAtTheBeginning
bool ABP_MasterBuilding_C::M_GetDestroyedAtTheBeginning() const {
	return Read<bool>((byte*)this + 1398);
}
bool* ABP_MasterBuilding_C::M_PtrGetDestroyedAtTheBeginning() {
	return reinterpret_cast<bool*>((byte*)this + 1398);
}
void ABP_MasterBuilding_C::M_SetDestroyedAtTheBeginning(const bool& value) {
	Write((byte*)this + 1398, value);
}
// Member Getter and Setter of HideStairs
// Declaration: bool HideStairs
bool ABP_MasterBuilding_C::M_GetHideStairs() const {
	return Read<bool>((byte*)this + 1399);
}
bool* ABP_MasterBuilding_C::M_PtrGetHideStairs() {
	return reinterpret_cast<bool*>((byte*)this + 1399);
}
void ABP_MasterBuilding_C::M_SetHideStairs(const bool& value) {
	Write((byte*)this + 1399, value);
}
// Member Getter and Setter of IgnoreFoliageRemoval
// Declaration: bool IgnoreFoliageRemoval
bool ABP_MasterBuilding_C::M_GetIgnoreFoliageRemoval() const {
	return Read<bool>((byte*)this + 1400);
}
bool* ABP_MasterBuilding_C::M_PtrGetIgnoreFoliageRemoval() {
	return reinterpret_cast<bool*>((byte*)this + 1400);
}
void ABP_MasterBuilding_C::M_SetIgnoreFoliageRemoval(const bool& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of ShowSlots
// Declaration: bool ShowSlots
bool ABP_MasterBuilding_C::M_GetShowSlots() const {
	return Read<bool>((byte*)this + 1401);
}
bool* ABP_MasterBuilding_C::M_PtrGetShowSlots() {
	return reinterpret_cast<bool*>((byte*)this + 1401);
}
void ABP_MasterBuilding_C::M_SetShowSlots(const bool& value) {
	Write((byte*)this + 1401, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_MasterBuilding_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 1402);
}
TEnumAsByte<E_Ownership>* ABP_MasterBuilding_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 1402);
}
void ABP_MasterBuilding_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 1402, value);
}
// Member Getter and Setter of LevelOfWarming
// Declaration: float LevelOfWarming
float ABP_MasterBuilding_C::M_GetLevelOfWarming() const {
	return Read<float>((byte*)this + 1404);
}
float* ABP_MasterBuilding_C::M_PtrGetLevelOfWarming() {
	return reinterpret_cast<float*>((byte*)this + 1404);
}
void ABP_MasterBuilding_C::M_SetLevelOfWarming(const float& value) {
	Write((byte*)this + 1404, value);
}
// Member Getter and Setter of ExtractedResources
// Declaration: TArray<TEnumAsByte<E_Resources>> ExtractedResources
TArray<TEnumAsByte<E_Resources>> ABP_MasterBuilding_C::M_GetExtractedResources() const {
	return Read<TArray<TEnumAsByte<E_Resources>>>((byte*)this + 1408);
}
TArray<TEnumAsByte<E_Resources>>* ABP_MasterBuilding_C::M_PtrGetExtractedResources() {
	return reinterpret_cast<TArray<TEnumAsByte<E_Resources>>*>((byte*)this + 1408);
}
void ABP_MasterBuilding_C::M_SetExtractedResources(const TArray<TEnumAsByte<E_Resources>>& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of FoliageTargets
// Declaration: TArray<struct FST_FoliageTargetsData> FoliageTargets
TArray<struct FST_FoliageTargetsData> ABP_MasterBuilding_C::M_GetFoliageTargets() const {
	return Read<TArray<struct FST_FoliageTargetsData>>((byte*)this + 1424);
}
TArray<struct FST_FoliageTargetsData>* ABP_MasterBuilding_C::M_PtrGetFoliageTargets() {
	return reinterpret_cast<TArray<struct FST_FoliageTargetsData>*>((byte*)this + 1424);
}
void ABP_MasterBuilding_C::M_SetFoliageTargets(const TArray<struct FST_FoliageTargetsData>& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of Destroyable
// Declaration: bool Destroyable
bool ABP_MasterBuilding_C::M_GetDestroyable() const {
	return Read<bool>((byte*)this + 1440);
}
bool* ABP_MasterBuilding_C::M_PtrGetDestroyable() {
	return reinterpret_cast<bool*>((byte*)this + 1440);
}
void ABP_MasterBuilding_C::M_SetDestroyable(const bool& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of UI_InspectorReference
// Declaration: class UUI_Inspector_Building_C* UI_InspectorReference
class UUI_Inspector_Building_C* ABP_MasterBuilding_C::M_GetUI_InspectorReference() const {
	return Read<class UUI_Inspector_Building_C*>((byte*)this + 1448);
}
class UUI_Inspector_Building_C** ABP_MasterBuilding_C::M_PtrGetUI_InspectorReference() {
	return reinterpret_cast<class UUI_Inspector_Building_C**>((byte*)this + 1448);
}
void ABP_MasterBuilding_C::M_SetUI_InspectorReference(const class UUI_Inspector_Building_C*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of PlayerInInterior
// Declaration: bool PlayerInInterior
bool ABP_MasterBuilding_C::M_GetPlayerInInterior() const {
	return Read<bool>((byte*)this + 1456);
}
bool* ABP_MasterBuilding_C::M_PtrGetPlayerInInterior() {
	return reinterpret_cast<bool*>((byte*)this + 1456);
}
void ABP_MasterBuilding_C::M_SetPlayerInInterior(const bool& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of BuildingHandlers
// Declaration: TArray<struct FDataTableRowHandle> BuildingHandlers
TArray<struct FDataTableRowHandle> ABP_MasterBuilding_C::M_GetBuildingHandlers() const {
	return Read<TArray<struct FDataTableRowHandle>>((byte*)this + 1464);
}
TArray<struct FDataTableRowHandle>* ABP_MasterBuilding_C::M_PtrGetBuildingHandlers() {
	return reinterpret_cast<TArray<struct FDataTableRowHandle>*>((byte*)this + 1464);
}
void ABP_MasterBuilding_C::M_SetBuildingHandlers(const TArray<struct FDataTableRowHandle>& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of CurrentBuildingLevel
// Declaration: int32_t CurrentBuildingLevel
int32_t ABP_MasterBuilding_C::M_GetCurrentBuildingLevel() const {
	return Read<int32_t>((byte*)this + 1480);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetCurrentBuildingLevel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1480);
}
void ABP_MasterBuilding_C::M_SetCurrentBuildingLevel(const int32_t& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of LastBuildingLevel
// Declaration: int32_t LastBuildingLevel
int32_t ABP_MasterBuilding_C::M_GetLastBuildingLevel() const {
	return Read<int32_t>((byte*)this + 1484);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetLastBuildingLevel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1484);
}
void ABP_MasterBuilding_C::M_SetLastBuildingLevel(const int32_t& value) {
	Write((byte*)this + 1484, value);
}
// Member Getter and Setter of OverrideInitialModulesLevel
// Declaration: int32_t OverrideInitialModulesLevel
int32_t ABP_MasterBuilding_C::M_GetOverrideInitialModulesLevel() const {
	return Read<int32_t>((byte*)this + 1488);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetOverrideInitialModulesLevel() {
	return reinterpret_cast<int32_t*>((byte*)this + 1488);
}
void ABP_MasterBuilding_C::M_SetOverrideInitialModulesLevel(const int32_t& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of OverrideInitialFurnitureVariant
// Declaration: int32_t OverrideInitialFurnitureVariant
int32_t ABP_MasterBuilding_C::M_GetOverrideInitialFurnitureVariant() const {
	return Read<int32_t>((byte*)this + 1492);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetOverrideInitialFurnitureVariant() {
	return reinterpret_cast<int32_t*>((byte*)this + 1492);
}
void ABP_MasterBuilding_C::M_SetOverrideInitialFurnitureVariant(const int32_t& value) {
	Write((byte*)this + 1492, value);
}
// Member Getter and Setter of OverrideHighBase
// Declaration: bool OverrideHighBase
bool ABP_MasterBuilding_C::M_GetOverrideHighBase() const {
	return Read<bool>((byte*)this + 1496);
}
bool* ABP_MasterBuilding_C::M_PtrGetOverrideHighBase() {
	return reinterpret_cast<bool*>((byte*)this + 1496);
}
void ABP_MasterBuilding_C::M_SetOverrideHighBase(const bool& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of ShopType
// Declaration: TEnumAsByte<E_ShopType> ShopType
TEnumAsByte<E_ShopType> ABP_MasterBuilding_C::M_GetShopType() const {
	return Read<TEnumAsByte<E_ShopType>>((byte*)this + 1497);
}
TEnumAsByte<E_ShopType>* ABP_MasterBuilding_C::M_PtrGetShopType() {
	return reinterpret_cast<TEnumAsByte<E_ShopType>*>((byte*)this + 1497);
}
void ABP_MasterBuilding_C::M_SetShopType(const TEnumAsByte<E_ShopType>& value) {
	Write((byte*)this + 1497, value);
}
// Member Getter and Setter of Condition
// Declaration: float Condition
float ABP_MasterBuilding_C::M_GetCondition() const {
	return Read<float>((byte*)this + 1500);
}
float* ABP_MasterBuilding_C::M_PtrGetCondition() {
	return reinterpret_cast<float*>((byte*)this + 1500);
}
void ABP_MasterBuilding_C::M_SetCondition(const float& value) {
	Write((byte*)this + 1500, value);
}
// Member Getter and Setter of BaseModuleComponent
// Declaration: class UChildActorComponent* BaseModuleComponent
class UChildActorComponent* ABP_MasterBuilding_C::M_GetBaseModuleComponent() const {
	return Read<class UChildActorComponent*>((byte*)this + 1504);
}
class UChildActorComponent** ABP_MasterBuilding_C::M_PtrGetBaseModuleComponent() {
	return reinterpret_cast<class UChildActorComponent**>((byte*)this + 1504);
}
void ABP_MasterBuilding_C::M_SetBaseModuleComponent(const class UChildActorComponent*& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of FrameModuleComponent
// Declaration: class UChildActorComponent* FrameModuleComponent
class UChildActorComponent* ABP_MasterBuilding_C::M_GetFrameModuleComponent() const {
	return Read<class UChildActorComponent*>((byte*)this + 1512);
}
class UChildActorComponent** ABP_MasterBuilding_C::M_PtrGetFrameModuleComponent() {
	return reinterpret_cast<class UChildActorComponent**>((byte*)this + 1512);
}
void ABP_MasterBuilding_C::M_SetFrameModuleComponent(const class UChildActorComponent*& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of ModuleComponents
// Declaration: TArray<class UChildActorComponent*> ModuleComponents
TArray<class UChildActorComponent*> ABP_MasterBuilding_C::M_GetModuleComponents() const {
	return Read<TArray<class UChildActorComponent*>>((byte*)this + 1520);
}
TArray<class UChildActorComponent*>* ABP_MasterBuilding_C::M_PtrGetModuleComponents() {
	return reinterpret_cast<TArray<class UChildActorComponent*>*>((byte*)this + 1520);
}
void ABP_MasterBuilding_C::M_SetModuleComponents(const TArray<class UChildActorComponent*>& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of NumberOfConstructedModules
// Declaration: int32_t NumberOfConstructedModules
int32_t ABP_MasterBuilding_C::M_GetNumberOfConstructedModules() const {
	return Read<int32_t>((byte*)this + 1536);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetNumberOfConstructedModules() {
	return reinterpret_cast<int32_t*>((byte*)this + 1536);
}
void ABP_MasterBuilding_C::M_SetNumberOfConstructedModules(const int32_t& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of NumberOfUnconstructedModules
// Declaration: int32_t NumberOfUnconstructedModules
int32_t ABP_MasterBuilding_C::M_GetNumberOfUnconstructedModules() const {
	return Read<int32_t>((byte*)this + 1540);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetNumberOfUnconstructedModules() {
	return reinterpret_cast<int32_t*>((byte*)this + 1540);
}
void ABP_MasterBuilding_C::M_SetNumberOfUnconstructedModules(const int32_t& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of SeasonalManagement
// Declaration: bool SeasonalManagement
bool ABP_MasterBuilding_C::M_GetSeasonalManagement() const {
	return Read<bool>((byte*)this + 1544);
}
bool* ABP_MasterBuilding_C::M_PtrGetSeasonalManagement() {
	return reinterpret_cast<bool*>((byte*)this + 1544);
}
void ABP_MasterBuilding_C::M_SetSeasonalManagement(const bool& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of IsWorking
// Declaration: bool IsWorking
bool ABP_MasterBuilding_C::M_GetIsWorking() const {
	return Read<bool>((byte*)this + 1545);
}
bool* ABP_MasterBuilding_C::M_PtrGetIsWorking() {
	return reinterpret_cast<bool*>((byte*)this + 1545);
}
void ABP_MasterBuilding_C::M_SetIsWorking(const bool& value) {
	Write((byte*)this + 1545, value);
}
// Member Getter and Setter of StartWorkingTime
// Declaration: struct FST_Hour StartWorkingTime
struct FST_Hour ABP_MasterBuilding_C::M_GetStartWorkingTime() const {
	return Read<struct FST_Hour>((byte*)this + 1548);
}
struct FST_Hour* ABP_MasterBuilding_C::M_PtrGetStartWorkingTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 1548);
}
void ABP_MasterBuilding_C::M_SetStartWorkingTime(const struct FST_Hour& value) {
	Write((byte*)this + 1548, value);
}
// Member Getter and Setter of StopWorkingTime
// Declaration: struct FST_Hour StopWorkingTime
struct FST_Hour ABP_MasterBuilding_C::M_GetStopWorkingTime() const {
	return Read<struct FST_Hour>((byte*)this + 1560);
}
struct FST_Hour* ABP_MasterBuilding_C::M_PtrGetStopWorkingTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 1560);
}
void ABP_MasterBuilding_C::M_SetStopWorkingTime(const struct FST_Hour& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of CurrentWorkersProduction
// Declaration: TArray<struct FST_Production_Progress> CurrentWorkersProduction
TArray<struct FST_Production_Progress> ABP_MasterBuilding_C::M_GetCurrentWorkersProduction() const {
	return Read<TArray<struct FST_Production_Progress>>((byte*)this + 1576);
}
TArray<struct FST_Production_Progress>* ABP_MasterBuilding_C::M_PtrGetCurrentWorkersProduction() {
	return reinterpret_cast<TArray<struct FST_Production_Progress>*>((byte*)this + 1576);
}
void ABP_MasterBuilding_C::M_SetCurrentWorkersProduction(const TArray<struct FST_Production_Progress>& value) {
	Write((byte*)this + 1576, value);
}
// Member Getter and Setter of PlaceableOnWater
// Declaration: bool PlaceableOnWater
bool ABP_MasterBuilding_C::M_GetPlaceableOnWater() const {
	return Read<bool>((byte*)this + 1592);
}
bool* ABP_MasterBuilding_C::M_PtrGetPlaceableOnWater() {
	return reinterpret_cast<bool*>((byte*)this + 1592);
}
void ABP_MasterBuilding_C::M_SetPlaceableOnWater(const bool& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of PlaceableOnlyOnWater
// Declaration: bool PlaceableOnlyOnWater
bool ABP_MasterBuilding_C::M_GetPlaceableOnlyOnWater() const {
	return Read<bool>((byte*)this + 1593);
}
bool* ABP_MasterBuilding_C::M_PtrGetPlaceableOnlyOnWater() {
	return reinterpret_cast<bool*>((byte*)this + 1593);
}
void ABP_MasterBuilding_C::M_SetPlaceableOnlyOnWater(const bool& value) {
	Write((byte*)this + 1593, value);
}
// Member Getter and Setter of AnimalVolumeLocation
// Declaration: struct FVector AnimalVolumeLocation
struct FVector ABP_MasterBuilding_C::M_GetAnimalVolumeLocation() const {
	return Read<struct FVector>((byte*)this + 1596);
}
struct FVector* ABP_MasterBuilding_C::M_PtrGetAnimalVolumeLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1596);
}
void ABP_MasterBuilding_C::M_SetAnimalVolumeLocation(const struct FVector& value) {
	Write((byte*)this + 1596, value);
}
// Member Getter and Setter of AnimalVolumeRotation
// Declaration: struct FRotator AnimalVolumeRotation
struct FRotator ABP_MasterBuilding_C::M_GetAnimalVolumeRotation() const {
	return Read<struct FRotator>((byte*)this + 1608);
}
struct FRotator* ABP_MasterBuilding_C::M_PtrGetAnimalVolumeRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 1608);
}
void ABP_MasterBuilding_C::M_SetAnimalVolumeRotation(const struct FRotator& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of AnimalVolumeSize
// Declaration: struct FVector AnimalVolumeSize
struct FVector ABP_MasterBuilding_C::M_GetAnimalVolumeSize() const {
	return Read<struct FVector>((byte*)this + 1620);
}
struct FVector* ABP_MasterBuilding_C::M_PtrGetAnimalVolumeSize() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1620);
}
void ABP_MasterBuilding_C::M_SetAnimalVolumeSize(const struct FVector& value) {
	Write((byte*)this + 1620, value);
}
// Member Getter and Setter of NumberOfDestructedModules
// Declaration: int32_t NumberOfDestructedModules
int32_t ABP_MasterBuilding_C::M_GetNumberOfDestructedModules() const {
	return Read<int32_t>((byte*)this + 1632);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetNumberOfDestructedModules() {
	return reinterpret_cast<int32_t*>((byte*)this + 1632);
}
void ABP_MasterBuilding_C::M_SetNumberOfDestructedModules(const int32_t& value) {
	Write((byte*)this + 1632, value);
}
// Member Getter and Setter of BuildingWarningType
// Declaration: TEnumAsByte<E_BuildingWarningType> BuildingWarningType
TEnumAsByte<E_BuildingWarningType> ABP_MasterBuilding_C::M_GetBuildingWarningType() const {
	return Read<TEnumAsByte<E_BuildingWarningType>>((byte*)this + 1636);
}
TEnumAsByte<E_BuildingWarningType>* ABP_MasterBuilding_C::M_PtrGetBuildingWarningType() {
	return reinterpret_cast<TEnumAsByte<E_BuildingWarningType>*>((byte*)this + 1636);
}
void ABP_MasterBuilding_C::M_SetBuildingWarningType(const TEnumAsByte<E_BuildingWarningType>& value) {
	Write((byte*)this + 1636, value);
}
// Member Getter and Setter of CurrentAnimalsProduction
// Declaration: TArray<struct FST_AnimalProduction_Progress> CurrentAnimalsProduction
TArray<struct FST_AnimalProduction_Progress> ABP_MasterBuilding_C::M_GetCurrentAnimalsProduction() const {
	return Read<TArray<struct FST_AnimalProduction_Progress>>((byte*)this + 1640);
}
TArray<struct FST_AnimalProduction_Progress>* ABP_MasterBuilding_C::M_PtrGetCurrentAnimalsProduction() {
	return reinterpret_cast<TArray<struct FST_AnimalProduction_Progress>*>((byte*)this + 1640);
}
void ABP_MasterBuilding_C::M_SetCurrentAnimalsProduction(const TArray<struct FST_AnimalProduction_Progress>& value) {
	Write((byte*)this + 1640, value);
}
// Member Getter and Setter of CurrentTrade
// Declaration: TArray<struct FST_Trading_Progress> CurrentTrade
TArray<struct FST_Trading_Progress> ABP_MasterBuilding_C::M_GetCurrentTrade() const {
	return Read<TArray<struct FST_Trading_Progress>>((byte*)this + 1656);
}
TArray<struct FST_Trading_Progress>* ABP_MasterBuilding_C::M_PtrGetCurrentTrade() {
	return reinterpret_cast<TArray<struct FST_Trading_Progress>*>((byte*)this + 1656);
}
void ABP_MasterBuilding_C::M_SetCurrentTrade(const TArray<struct FST_Trading_Progress>& value) {
	Write((byte*)this + 1656, value);
}
// Member Getter and Setter of SeasonalProductionPower
// Declaration: TArray<int32_t> SeasonalProductionPower
TArray<int32_t> ABP_MasterBuilding_C::M_GetSeasonalProductionPower() const {
	return Read<TArray<int32_t>>((byte*)this + 1672);
}
TArray<int32_t>* ABP_MasterBuilding_C::M_PtrGetSeasonalProductionPower() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1672);
}
void ABP_MasterBuilding_C::M_SetSeasonalProductionPower(const TArray<int32_t>& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of ToolsBuffer
// Declaration: TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ToolsBuffer
TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ABP_MasterBuilding_C::M_GetToolsBuffer() const {
	return Read<TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>>((byte*)this + 1688);
}
TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>* ABP_MasterBuilding_C::M_PtrGetToolsBuffer() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>*>((byte*)this + 1688);
}
void ABP_MasterBuilding_C::M_SetToolsBuffer(const TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>& value) {
	Write((byte*)this + 1688, value);
}
// Member Getter and Setter of FoodBuffer
// Declaration: float FoodBuffer
float ABP_MasterBuilding_C::M_GetFoodBuffer() const {
	return Read<float>((byte*)this + 1768);
}
float* ABP_MasterBuilding_C::M_PtrGetFoodBuffer() {
	return reinterpret_cast<float*>((byte*)this + 1768);
}
void ABP_MasterBuilding_C::M_SetFoodBuffer(const float& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of WaterBuffer
// Declaration: float WaterBuffer
float ABP_MasterBuilding_C::M_GetWaterBuffer() const {
	return Read<float>((byte*)this + 1772);
}
float* ABP_MasterBuilding_C::M_PtrGetWaterBuffer() {
	return reinterpret_cast<float*>((byte*)this + 1772);
}
void ABP_MasterBuilding_C::M_SetWaterBuffer(const float& value) {
	Write((byte*)this + 1772, value);
}
// Member Getter and Setter of WoodBuffer
// Declaration: float WoodBuffer
float ABP_MasterBuilding_C::M_GetWoodBuffer() const {
	return Read<float>((byte*)this + 1776);
}
float* ABP_MasterBuilding_C::M_PtrGetWoodBuffer() {
	return reinterpret_cast<float*>((byte*)this + 1776);
}
void ABP_MasterBuilding_C::M_SetWoodBuffer(const float& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of AreaClass
// Declaration: class UNavArea* AreaClass
class UNavArea* ABP_MasterBuilding_C::M_GetAreaClass() const {
	return Read<class UNavArea*>((byte*)this + 1784);
}
class UNavArea** ABP_MasterBuilding_C::M_PtrGetAreaClass() {
	return reinterpret_cast<class UNavArea**>((byte*)this + 1784);
}
void ABP_MasterBuilding_C::M_SetAreaClass(const class UNavArea*& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of Ghost
// Declaration: bool Ghost
bool ABP_MasterBuilding_C::M_GetGhost() const {
	return Read<bool>((byte*)this + 1792);
}
bool* ABP_MasterBuilding_C::M_PtrGetGhost() {
	return reinterpret_cast<bool*>((byte*)this + 1792);
}
void ABP_MasterBuilding_C::M_SetGhost(const bool& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of FurnitureCreated
// Declaration: bool FurnitureCreated
bool ABP_MasterBuilding_C::M_GetFurnitureCreated() const {
	return Read<bool>((byte*)this + 1793);
}
bool* ABP_MasterBuilding_C::M_PtrGetFurnitureCreated() {
	return reinterpret_cast<bool*>((byte*)this + 1793);
}
void ABP_MasterBuilding_C::M_SetFurnitureCreated(const bool& value) {
	Write((byte*)this + 1793, value);
}
// Member Getter and Setter of EventMultipliers
// Declaration: struct FST_Event_BuildingMultipliers EventMultipliers
struct FST_Event_BuildingMultipliers ABP_MasterBuilding_C::M_GetEventMultipliers() const {
	return Read<struct FST_Event_BuildingMultipliers>((byte*)this + 1796);
}
struct FST_Event_BuildingMultipliers* ABP_MasterBuilding_C::M_PtrGetEventMultipliers() {
	return reinterpret_cast<struct FST_Event_BuildingMultipliers*>((byte*)this + 1796);
}
void ABP_MasterBuilding_C::M_SetEventMultipliers(const struct FST_Event_BuildingMultipliers& value) {
	Write((byte*)this + 1796, value);
}
// Member Getter and Setter of WildAnimalsPoints
// Declaration: TArray<class ABP_SpawnPointWildAnimal_C*> WildAnimalsPoints
TArray<class ABP_SpawnPointWildAnimal_C*> ABP_MasterBuilding_C::M_GetWildAnimalsPoints() const {
	return Read<TArray<class ABP_SpawnPointWildAnimal_C*>>((byte*)this + 1800);
}
TArray<class ABP_SpawnPointWildAnimal_C*>* ABP_MasterBuilding_C::M_PtrGetWildAnimalsPoints() {
	return reinterpret_cast<TArray<class ABP_SpawnPointWildAnimal_C*>*>((byte*)this + 1800);
}
void ABP_MasterBuilding_C::M_SetWildAnimalsPoints(const TArray<class ABP_SpawnPointWildAnimal_C*>& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of FishesPoints
// Declaration: TArray<class ABP_Flock_Fish_C*> FishesPoints
TArray<class ABP_Flock_Fish_C*> ABP_MasterBuilding_C::M_GetFishesPoints() const {
	return Read<TArray<class ABP_Flock_Fish_C*>>((byte*)this + 1816);
}
TArray<class ABP_Flock_Fish_C*>* ABP_MasterBuilding_C::M_PtrGetFishesPoints() {
	return reinterpret_cast<TArray<class ABP_Flock_Fish_C*>*>((byte*)this + 1816);
}
void ABP_MasterBuilding_C::M_SetFishesPoints(const TArray<class ABP_Flock_Fish_C*>& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of OverwriteRemoveGrass
// Declaration: bool OverwriteRemoveGrass
bool ABP_MasterBuilding_C::M_GetOverwriteRemoveGrass() const {
	return Read<bool>((byte*)this + 1832);
}
bool* ABP_MasterBuilding_C::M_PtrGetOverwriteRemoveGrass() {
	return reinterpret_cast<bool*>((byte*)this + 1832);
}
void ABP_MasterBuilding_C::M_SetOverwriteRemoveGrass(const bool& value) {
	Write((byte*)this + 1832, value);
}
// Member Getter and Setter of RemoveGrass
// Declaration: bool RemoveGrass
bool ABP_MasterBuilding_C::M_GetRemoveGrass() const {
	return Read<bool>((byte*)this + 1833);
}
bool* ABP_MasterBuilding_C::M_PtrGetRemoveGrass() {
	return reinterpret_cast<bool*>((byte*)this + 1833);
}
void ABP_MasterBuilding_C::M_SetRemoveGrass(const bool& value) {
	Write((byte*)this + 1833, value);
}
// Member Getter and Setter of Socket
// Declaration: class ABP_BuildSocket_C* Socket
class ABP_BuildSocket_C* ABP_MasterBuilding_C::M_GetSocket() const {
	return Read<class ABP_BuildSocket_C*>((byte*)this + 1840);
}
class ABP_BuildSocket_C** ABP_MasterBuilding_C::M_PtrGetSocket() {
	return reinterpret_cast<class ABP_BuildSocket_C**>((byte*)this + 1840);
}
void ABP_MasterBuilding_C::M_SetSocket(const class ABP_BuildSocket_C*& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of AdditionalPeople
// Declaration: TArray<class ABP_BaseCharacter_C*> AdditionalPeople
TArray<class ABP_BaseCharacter_C*> ABP_MasterBuilding_C::M_GetAdditionalPeople() const {
	return Read<TArray<class ABP_BaseCharacter_C*>>((byte*)this + 1848);
}
TArray<class ABP_BaseCharacter_C*>* ABP_MasterBuilding_C::M_PtrGetAdditionalPeople() {
	return reinterpret_cast<TArray<class ABP_BaseCharacter_C*>*>((byte*)this + 1848);
}
void ABP_MasterBuilding_C::M_SetAdditionalPeople(const TArray<class ABP_BaseCharacter_C*>& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of WorkSlots
// Declaration: TArray<struct FST_SlotSettings> WorkSlots
TArray<struct FST_SlotSettings> ABP_MasterBuilding_C::M_GetWorkSlots() const {
	return Read<TArray<struct FST_SlotSettings>>((byte*)this + 1864);
}
TArray<struct FST_SlotSettings>* ABP_MasterBuilding_C::M_PtrGetWorkSlots() {
	return reinterpret_cast<TArray<struct FST_SlotSettings>*>((byte*)this + 1864);
}
void ABP_MasterBuilding_C::M_SetWorkSlots(const TArray<struct FST_SlotSettings>& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of FoodDemandValue
// Declaration: float FoodDemandValue
float ABP_MasterBuilding_C::M_GetFoodDemandValue() const {
	return Read<float>((byte*)this + 1880);
}
float* ABP_MasterBuilding_C::M_PtrGetFoodDemandValue() {
	return reinterpret_cast<float*>((byte*)this + 1880);
}
void ABP_MasterBuilding_C::M_SetFoodDemandValue(const float& value) {
	Write((byte*)this + 1880, value);
}
// Member Getter and Setter of WaterDemandValue
// Declaration: float WaterDemandValue
float ABP_MasterBuilding_C::M_GetWaterDemandValue() const {
	return Read<float>((byte*)this + 1884);
}
float* ABP_MasterBuilding_C::M_PtrGetWaterDemandValue() {
	return reinterpret_cast<float*>((byte*)this + 1884);
}
void ABP_MasterBuilding_C::M_SetWaterDemandValue(const float& value) {
	Write((byte*)this + 1884, value);
}
// Member Getter and Setter of WoodDemandValue
// Declaration: float WoodDemandValue
float ABP_MasterBuilding_C::M_GetWoodDemandValue() const {
	return Read<float>((byte*)this + 1888);
}
float* ABP_MasterBuilding_C::M_PtrGetWoodDemandValue() {
	return reinterpret_cast<float*>((byte*)this + 1888);
}
void ABP_MasterBuilding_C::M_SetWoodDemandValue(const float& value) {
	Write((byte*)this + 1888, value);
}
// Member Getter and Setter of AdditionalTools
// Declaration: TArray<TEnumAsByte<E_Tools_Activity>> AdditionalTools
TArray<TEnumAsByte<E_Tools_Activity>> ABP_MasterBuilding_C::M_GetAdditionalTools() const {
	return Read<TArray<TEnumAsByte<E_Tools_Activity>>>((byte*)this + 1896);
}
TArray<TEnumAsByte<E_Tools_Activity>>* ABP_MasterBuilding_C::M_PtrGetAdditionalTools() {
	return reinterpret_cast<TArray<TEnumAsByte<E_Tools_Activity>>*>((byte*)this + 1896);
}
void ABP_MasterBuilding_C::M_SetAdditionalTools(const TArray<TEnumAsByte<E_Tools_Activity>>& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of BuildingVisible
// Declaration: bool BuildingVisible
bool ABP_MasterBuilding_C::M_GetBuildingVisible() const {
	return Read<bool>((byte*)this + 1912);
}
bool* ABP_MasterBuilding_C::M_PtrGetBuildingVisible() {
	return reinterpret_cast<bool*>((byte*)this + 1912);
}
void ABP_MasterBuilding_C::M_SetBuildingVisible(const bool& value) {
	Write((byte*)this + 1912, value);
}
// Member Getter and Setter of UnderRepair
// Declaration: bool UnderRepair
bool ABP_MasterBuilding_C::M_GetUnderRepair() const {
	return Read<bool>((byte*)this + 1913);
}
bool* ABP_MasterBuilding_C::M_PtrGetUnderRepair() {
	return reinterpret_cast<bool*>((byte*)this + 1913);
}
void ABP_MasterBuilding_C::M_SetUnderRepair(const bool& value) {
	Write((byte*)this + 1913, value);
}
// Member Getter and Setter of UnderConstruction
// Declaration: bool UnderConstruction
bool ABP_MasterBuilding_C::M_GetUnderConstruction() const {
	return Read<bool>((byte*)this + 1914);
}
bool* ABP_MasterBuilding_C::M_PtrGetUnderConstruction() {
	return reinterpret_cast<bool*>((byte*)this + 1914);
}
void ABP_MasterBuilding_C::M_SetUnderConstruction(const bool& value) {
	Write((byte*)this + 1914, value);
}
// Member Getter and Setter of RepairingProgress
// Declaration: struct FST_Repairing_Progress RepairingProgress
struct FST_Repairing_Progress ABP_MasterBuilding_C::M_GetRepairingProgress() const {
	return Read<struct FST_Repairing_Progress>((byte*)this + 1920);
}
struct FST_Repairing_Progress* ABP_MasterBuilding_C::M_PtrGetRepairingProgress() {
	return reinterpret_cast<struct FST_Repairing_Progress*>((byte*)this + 1920);
}
void ABP_MasterBuilding_C::M_SetRepairingProgress(const struct FST_Repairing_Progress& value) {
	Write((byte*)this + 1920, value);
}
// Member Getter and Setter of BuildingRequiredResources
// Declaration: TArray<struct FST_ItemResource> BuildingRequiredResources
TArray<struct FST_ItemResource> ABP_MasterBuilding_C::M_GetBuildingRequiredResources() const {
	return Read<TArray<struct FST_ItemResource>>((byte*)this + 1944);
}
TArray<struct FST_ItemResource>* ABP_MasterBuilding_C::M_PtrGetBuildingRequiredResources() {
	return reinterpret_cast<TArray<struct FST_ItemResource>*>((byte*)this + 1944);
}
void ABP_MasterBuilding_C::M_SetBuildingRequiredResources(const TArray<struct FST_ItemResource>& value) {
	Write((byte*)this + 1944, value);
}
// Member Getter and Setter of BuildingStepProgress
// Declaration: float BuildingStepProgress
float ABP_MasterBuilding_C::M_GetBuildingStepProgress() const {
	return Read<float>((byte*)this + 1960);
}
float* ABP_MasterBuilding_C::M_PtrGetBuildingStepProgress() {
	return reinterpret_cast<float*>((byte*)this + 1960);
}
void ABP_MasterBuilding_C::M_SetBuildingStepProgress(const float& value) {
	Write((byte*)this + 1960, value);
}
// Member Getter and Setter of BaseDecorationsSettings
// Declaration: struct FST_DecorationPreset BaseDecorationsSettings
struct FST_DecorationPreset ABP_MasterBuilding_C::M_GetBaseDecorationsSettings() const {
	return Read<struct FST_DecorationPreset>((byte*)this + 1968);
}
struct FST_DecorationPreset* ABP_MasterBuilding_C::M_PtrGetBaseDecorationsSettings() {
	return reinterpret_cast<struct FST_DecorationPreset*>((byte*)this + 1968);
}
void ABP_MasterBuilding_C::M_SetBaseDecorationsSettings(const struct FST_DecorationPreset& value) {
	Write((byte*)this + 1968, value);
}
// Member Getter and Setter of FrameDecorationsSettings
// Declaration: struct FST_DecorationPreset FrameDecorationsSettings
struct FST_DecorationPreset ABP_MasterBuilding_C::M_GetFrameDecorationsSettings() const {
	return Read<struct FST_DecorationPreset>((byte*)this + 2000);
}
struct FST_DecorationPreset* ABP_MasterBuilding_C::M_PtrGetFrameDecorationsSettings() {
	return reinterpret_cast<struct FST_DecorationPreset*>((byte*)this + 2000);
}
void ABP_MasterBuilding_C::M_SetFrameDecorationsSettings(const struct FST_DecorationPreset& value) {
	Write((byte*)this + 2000, value);
}
// Member Getter and Setter of ModulesDecorationsSettings
// Declaration: TArray<struct FST_DecorationPreset> ModulesDecorationsSettings
TArray<struct FST_DecorationPreset> ABP_MasterBuilding_C::M_GetModulesDecorationsSettings() const {
	return Read<TArray<struct FST_DecorationPreset>>((byte*)this + 2032);
}
TArray<struct FST_DecorationPreset>* ABP_MasterBuilding_C::M_PtrGetModulesDecorationsSettings() {
	return reinterpret_cast<TArray<struct FST_DecorationPreset>*>((byte*)this + 2032);
}
void ABP_MasterBuilding_C::M_SetModulesDecorationsSettings(const TArray<struct FST_DecorationPreset>& value) {
	Write((byte*)this + 2032, value);
}
// Member Getter and Setter of Mesh
// Declaration: TAssetPtr<class UStaticMesh> Mesh
TAssetPtr<class UStaticMesh> ABP_MasterBuilding_C::M_GetMesh() const {
	return Read<TAssetPtr<class UStaticMesh>>((byte*)this + 2048);
}
TAssetPtr<class UStaticMesh>* ABP_MasterBuilding_C::M_PtrGetMesh() {
	return reinterpret_cast<TAssetPtr<class UStaticMesh>*>((byte*)this + 2048);
}
void ABP_MasterBuilding_C::M_SetMesh(const TAssetPtr<class UStaticMesh>& value) {
	Write((byte*)this + 2048, value);
}
// Member Getter and Setter of MeshTransform
// Declaration: struct FTransform MeshTransform
struct FTransform ABP_MasterBuilding_C::M_GetMeshTransform() const {
	return Read<struct FTransform>((byte*)this + 2096);
}
struct FTransform* ABP_MasterBuilding_C::M_PtrGetMeshTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 2096);
}
void ABP_MasterBuilding_C::M_SetMeshTransform(const struct FTransform& value) {
	Write((byte*)this + 2096, value);
}
// Member Getter and Setter of FurnitureActors
// Declaration: TArray<class AActor*> FurnitureActors
TArray<class AActor*> ABP_MasterBuilding_C::M_GetFurnitureActors() const {
	return Read<TArray<class AActor*>>((byte*)this + 2144);
}
TArray<class AActor*>* ABP_MasterBuilding_C::M_PtrGetFurnitureActors() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 2144);
}
void ABP_MasterBuilding_C::M_SetFurnitureActors(const TArray<class AActor*>& value) {
	Write((byte*)this + 2144, value);
}
// Member Getter and Setter of NavCollider
// Declaration: class UBoxComponent* NavCollider
class UBoxComponent* ABP_MasterBuilding_C::M_GetNavCollider() const {
	return Read<class UBoxComponent*>((byte*)this + 2160);
}
class UBoxComponent** ABP_MasterBuilding_C::M_PtrGetNavCollider() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 2160);
}
void ABP_MasterBuilding_C::M_SetNavCollider(const class UBoxComponent*& value) {
	Write((byte*)this + 2160, value);
}
// Member Getter and Setter of CurrentNumberOfDecorations
// Declaration: int32_t CurrentNumberOfDecorations
int32_t ABP_MasterBuilding_C::M_GetCurrentNumberOfDecorations() const {
	return Read<int32_t>((byte*)this + 2168);
}
int32_t* ABP_MasterBuilding_C::M_PtrGetCurrentNumberOfDecorations() {
	return reinterpret_cast<int32_t*>((byte*)this + 2168);
}
void ABP_MasterBuilding_C::M_SetCurrentNumberOfDecorations(const int32_t& value) {
	Write((byte*)this + 2168, value);
}
// Member Getter and Setter of SoundAttenuationIntensity_Walls
// Declaration: float SoundAttenuationIntensity_Walls
float ABP_MasterBuilding_C::M_GetSoundAttenuationIntensity_Walls() const {
	return Read<float>((byte*)this + 2172);
}
float* ABP_MasterBuilding_C::M_PtrGetSoundAttenuationIntensity_Walls() {
	return reinterpret_cast<float*>((byte*)this + 2172);
}
void ABP_MasterBuilding_C::M_SetSoundAttenuationIntensity_Walls(const float& value) {
	Write((byte*)this + 2172, value);
}
// Member Getter and Setter of SoundAttenuationIntensity_Roofs
// Declaration: float SoundAttenuationIntensity_Roofs
float ABP_MasterBuilding_C::M_GetSoundAttenuationIntensity_Roofs() const {
	return Read<float>((byte*)this + 2176);
}
float* ABP_MasterBuilding_C::M_PtrGetSoundAttenuationIntensity_Roofs() {
	return reinterpret_cast<float*>((byte*)this + 2176);
}
void ABP_MasterBuilding_C::M_SetSoundAttenuationIntensity_Roofs(const float& value) {
	Write((byte*)this + 2176, value);
}
// Member Getter and Setter of WallsSoundMix
// Declaration: TArray<class USoundMix*> WallsSoundMix
TArray<class USoundMix*> ABP_MasterBuilding_C::M_GetWallsSoundMix() const {
	return Read<TArray<class USoundMix*>>((byte*)this + 2184);
}
TArray<class USoundMix*>* ABP_MasterBuilding_C::M_PtrGetWallsSoundMix() {
	return reinterpret_cast<TArray<class USoundMix*>*>((byte*)this + 2184);
}
void ABP_MasterBuilding_C::M_SetWallsSoundMix(const TArray<class USoundMix*>& value) {
	Write((byte*)this + 2184, value);
}
// Member Getter and Setter of RoofsSoundMix
// Declaration: TArray<class USoundMix*> RoofsSoundMix
TArray<class USoundMix*> ABP_MasterBuilding_C::M_GetRoofsSoundMix() const {
	return Read<TArray<class USoundMix*>>((byte*)this + 2200);
}
TArray<class USoundMix*>* ABP_MasterBuilding_C::M_PtrGetRoofsSoundMix() {
	return reinterpret_cast<TArray<class USoundMix*>*>((byte*)this + 2200);
}
void ABP_MasterBuilding_C::M_SetRoofsSoundMix(const TArray<class USoundMix*>& value) {
	Write((byte*)this + 2200, value);
}
// Member Getter and Setter of ReverbEffect
// Declaration: TArray<class USoundEffectSubmixPreset*> ReverbEffect
TArray<class USoundEffectSubmixPreset*> ABP_MasterBuilding_C::M_GetReverbEffect() const {
	return Read<TArray<class USoundEffectSubmixPreset*>>((byte*)this + 2216);
}
TArray<class USoundEffectSubmixPreset*>* ABP_MasterBuilding_C::M_PtrGetReverbEffect() {
	return reinterpret_cast<TArray<class USoundEffectSubmixPreset*>*>((byte*)this + 2216);
}
void ABP_MasterBuilding_C::M_SetReverbEffect(const TArray<class USoundEffectSubmixPreset*>& value) {
	Write((byte*)this + 2216, value);
}
// Member Getter and Setter of Interior_FX
// Declaration: class UNiagaraComponent* Interior_FX
class UNiagaraComponent* ABP_MasterBuilding_C::M_GetInterior_FX() const {
	return Read<class UNiagaraComponent*>((byte*)this + 2232);
}
class UNiagaraComponent** ABP_MasterBuilding_C::M_PtrGetInterior_FX() {
	return reinterpret_cast<class UNiagaraComponent**>((byte*)this + 2232);
}
void ABP_MasterBuilding_C::M_SetInterior_FX(const class UNiagaraComponent*& value) {
	Write((byte*)this + 2232, value);
}
// Member Getter and Setter of FX_Intensity
// Declaration: float FX_Intensity
float ABP_MasterBuilding_C::M_GetFX_Intensity() const {
	return Read<float>((byte*)this + 2240);
}
float* ABP_MasterBuilding_C::M_PtrGetFX_Intensity() {
	return reinterpret_cast<float*>((byte*)this + 2240);
}
void ABP_MasterBuilding_C::M_SetFX_Intensity(const float& value) {
	Write((byte*)this + 2240, value);
}
// Member Getter and Setter of ModulesInitialIndex
// Declaration: TMap<int32_t, int32_t> ModulesInitialIndex
TMap<int32_t, int32_t> ABP_MasterBuilding_C::M_GetModulesInitialIndex() const {
	return Read<TMap<int32_t, int32_t>>((byte*)this + 2248);
}
TMap<int32_t, int32_t>* ABP_MasterBuilding_C::M_PtrGetModulesInitialIndex() {
	return reinterpret_cast<TMap<int32_t, int32_t>*>((byte*)this + 2248);
}
void ABP_MasterBuilding_C::M_SetModulesInitialIndex(const TMap<int32_t, int32_t>& value) {
	Write((byte*)this + 2248, value);
}
// Member Getter and Setter of HasProductionIntensity
// Declaration: bool HasProductionIntensity
bool ABP_MasterBuilding_C::M_GetHasProductionIntensity() const {
	return Read<bool>((byte*)this + 2328);
}
bool* ABP_MasterBuilding_C::M_PtrGetHasProductionIntensity() {
	return reinterpret_cast<bool*>((byte*)this + 2328);
}
void ABP_MasterBuilding_C::M_SetHasProductionIntensity(const bool& value) {
	Write((byte*)this + 2328, value);
}
// Member Getter and Setter of NoTools
// Declaration: bool NoTools
bool ABP_MasterBuilding_C::M_GetNoTools() const {
	return Read<bool>((byte*)this + 2329);
}
bool* ABP_MasterBuilding_C::M_PtrGetNoTools() {
	return reinterpret_cast<bool*>((byte*)this + 2329);
}
void ABP_MasterBuilding_C::M_SetNoTools(const bool& value) {
	Write((byte*)this + 2329, value);
}
// Member Getter and Setter of NoResources
// Declaration: bool NoResources
bool ABP_MasterBuilding_C::M_GetNoResources() const {
	return Read<bool>((byte*)this + 2330);
}
bool* ABP_MasterBuilding_C::M_PtrGetNoResources() {
	return reinterpret_cast<bool*>((byte*)this + 2330);
}
void ABP_MasterBuilding_C::M_SetNoResources(const bool& value) {
	Write((byte*)this + 2330, value);
}
// Member Getter and Setter of NoWorkersForProduction
// Declaration: bool NoWorkersForProduction
bool ABP_MasterBuilding_C::M_GetNoWorkersForProduction() const {
	return Read<bool>((byte*)this + 2331);
}
bool* ABP_MasterBuilding_C::M_PtrGetNoWorkersForProduction() {
	return reinterpret_cast<bool*>((byte*)this + 2331);
}
void ABP_MasterBuilding_C::M_SetNoWorkersForProduction(const bool& value) {
	Write((byte*)this + 2331, value);
}
// Member Getter and Setter of CustomName_PlayerNickname
// Declaration: struct FString CustomName_PlayerNickname
struct FString ABP_MasterBuilding_C::M_GetCustomName_PlayerNickname() const {
	return Read<struct FString>((byte*)this + 2336);
}
struct FString* ABP_MasterBuilding_C::M_PtrGetCustomName_PlayerNickname() {
	return reinterpret_cast<struct FString*>((byte*)this + 2336);
}
void ABP_MasterBuilding_C::M_SetCustomName_PlayerNickname(const struct FString& value) {
	Write((byte*)this + 2336, value);
}
// Member Getter and Setter of CustomName_PlayerNetID
// Declaration: struct FString CustomName_PlayerNetID
struct FString ABP_MasterBuilding_C::M_GetCustomName_PlayerNetID() const {
	return Read<struct FString>((byte*)this + 2352);
}
struct FString* ABP_MasterBuilding_C::M_PtrGetCustomName_PlayerNetID() {
	return reinterpret_cast<struct FString*>((byte*)this + 2352);
}
void ABP_MasterBuilding_C::M_SetCustomName_PlayerNetID(const struct FString& value) {
	Write((byte*)this + 2352, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteUbergraph_BP_MasterBuilding
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteUbergraph_BP_MasterBuilding(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteUbergraph_BP_MasterBuilding");

	struct ABP_MasterBuilding_C_ExecuteUbergraph_BP_MasterBuilding_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_ExecuteUbergraph_BP_MasterBuilding_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnBuildingConstructed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnBuildingConstructed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnBuildingConstructed");

	struct ABP_MasterBuilding_C_OnBuildingConstructed_Params {
	};
	ABP_MasterBuilding_C_OnBuildingConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveDebugFurniture
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemoveDebugFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveDebugFurniture");

	struct ABP_MasterBuilding_C_RemoveDebugFurniture_Params {
	};
	ABP_MasterBuilding_C_RemoveDebugFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ShowDebugFurniture
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ShowDebugFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ShowDebugFurniture");

	struct ABP_MasterBuilding_C_ShowDebugFurniture_Params {
	};
	ABP_MasterBuilding_C_ShowDebugFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveDestroyed
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveDestroyed");

	struct ABP_MasterBuilding_C_ReceiveDestroyed_Params {
	};
	ABP_MasterBuilding_C_ReceiveDestroyed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetNavigationCollider
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetNavigationCollider() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetNavigationCollider");

	struct ABP_MasterBuilding_C_SetNavigationCollider_Params {
	};
	ABP_MasterBuilding_C_SetNavigationCollider_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseToolBuffer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolActivity	Type: TEnumAsByte<E_Tools_Activity>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::DecreaseToolBuffer(const TEnumAsByte<E_Tools_Activity>& ToolActivity, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseToolBuffer");

	struct ABP_MasterBuilding_C_DecreaseToolBuffer_Params {
		TEnumAsByte<E_Tools_Activity> ToolActivity;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	ABP_MasterBuilding_C_DecreaseToolBuffer_Params params;
	params.ToolActivity = ToolActivity;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveEndPlay");

	struct ABP_MasterBuilding_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ShowBuildingInspectorUI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ShowBuildingInspectorUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ShowBuildingInspectorUI");

	struct ABP_MasterBuilding_C_ShowBuildingInspectorUI_Params {
	};
	ABP_MasterBuilding_C_ShowBuildingInspectorUI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.FrameNoFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::FrameNoFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FrameNoFinished");

	struct ABP_MasterBuilding_C_FrameNoFinished_Params {
	};
	ABP_MasterBuilding_C_FrameNoFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.BaseNotFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::BaseNotFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.BaseNotFinished");

	struct ABP_MasterBuilding_C_BaseNotFinished_Params {
	};
	ABP_MasterBuilding_C_BaseNotFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishFrameVisuals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteFinishFrameVisuals(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishFrameVisuals");

	struct ABP_MasterBuilding_C_ExecuteFinishFrameVisuals_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ExecuteFinishFrameVisuals_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishBaseVisuals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteFinishBaseVisuals(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishBaseVisuals");

	struct ABP_MasterBuilding_C_ExecuteFinishBaseVisuals_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ExecuteFinishBaseVisuals_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalUpdate
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SeasonalUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalUpdate");

	struct ABP_MasterBuilding_C_SeasonalUpdate_Params {
	};
	ABP_MasterBuilding_C_SeasonalUpdate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CreateFurnitures
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CreateFurnitures(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CreateFurnitures");

	struct ABP_MasterBuilding_C_CreateFurnitures_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CreateFurnitures_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateGhost
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckPlacement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateGhost(bool CheckPlacement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateGhost");

	struct ABP_MasterBuilding_C_UpdateGhost_Params {
		bool CheckPlacement;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_UpdateGhost_Params params;
	params.CheckPlacement = CheckPlacement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishLogic
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteFinishLogic(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishLogic");

	struct ABP_MasterBuilding_C_ExecuteFinishLogic_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ExecuteFinishLogic_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishOthersVisuals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteFinishOthersVisuals(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishOthersVisuals");

	struct ABP_MasterBuilding_C_ExecuteFinishOthersVisuals_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ExecuteFinishOthersVisuals_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// Flags: BlueprintEvent
// Params:
// Name: OverlappedComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherBodyIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	struct ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params {
		class UPrimitiveComponent* OverlappedComponent;			//Offset: 0 | ElementSize: 8
		class AActor* OtherActor;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		int32_t OtherBodyIndex;			//Offset: 24 | ElementSize: 4
	};
	ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// Flags: HasOutParms, BlueprintEvent
// Params:
// Name: OverlappedComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherBodyIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bFromSweep	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SweepResult	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_MasterBuilding_C::BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	struct ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params {
		class UPrimitiveComponent* OverlappedComponent;			//Offset: 0 | ElementSize: 8
		class AActor* OtherActor;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		int32_t OtherBodyIndex;			//Offset: 24 | ElementSize: 4
		bool bFromSweep;			//Offset: 28 | ElementSize: 1
		struct FHitResult SweepResult;			//Offset: 32 | ElementSize: 136
	};
	ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveBeginPlay");

	struct ABP_MasterBuilding_C_ReceiveBeginPlay_Params {
	};
	ABP_MasterBuilding_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.DestroyBuilding
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Cheat	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::DestroyBuilding(bool Cheat) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.DestroyBuilding");

	struct ABP_MasterBuilding_C_DestroyBuilding_Params {
		bool Cheat;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_DestroyBuilding_Params params;
	params.Cheat = Cheat;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateFurnituresTransformMulticast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Transform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateFurnituresTransformMulticast(int32_t FurnitureIndex, struct FTransform Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateFurnituresTransformMulticast");

	struct ABP_MasterBuilding_C_UpdateFurnituresTransformMulticast_Params {
		int32_t FurnitureIndex;			//Offset: 0 | ElementSize: 4
		struct FTransform Transform;			//Offset: 16 | ElementSize: 48
	};
	ABP_MasterBuilding_C_UpdateFurnituresTransformMulticast_Params params;
	params.FurnitureIndex = FurnitureIndex;
	params.Transform = Transform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostLogicMulticast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteInitialGhostLogicMulticast(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostLogicMulticast");

	struct ABP_MasterBuilding_C_ExecuteInitialGhostLogicMulticast_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ExecuteInitialGhostLogicMulticast_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostVisualsMulticast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteInitialGhostVisualsMulticast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostVisualsMulticast");

	struct ABP_MasterBuilding_C_ExecuteInitialGhostVisualsMulticast_Params {
	};
	ABP_MasterBuilding_C_ExecuteInitialGhostVisualsMulticast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostLogic
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteInitialGhostLogic(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostLogic");

	struct ABP_MasterBuilding_C_ExecuteInitialGhostLogic_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ExecuteInitialGhostLogic_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostVisuals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ExecuteInitialGhostVisuals() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialGhostVisuals");

	struct ABP_MasterBuilding_C_ExecuteInitialGhostVisuals_Params {
	};
	ABP_MasterBuilding_C_ExecuteInitialGhostVisuals_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CreateBuildingGhostServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CreateBuildingGhostServer(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CreateBuildingGhostServer");

	struct ABP_MasterBuilding_C_CreateBuildingGhostServer_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CreateBuildingGhostServer_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnBuildingInventoryChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnBuildingInventoryChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnBuildingInventoryChanged");

	struct ABP_MasterBuilding_C_OnBuildingInventoryChanged_Params {
	};
	ABP_MasterBuilding_C_OnBuildingInventoryChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UserConstructionScript
// Flags: Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UserConstructionScript");

	struct ABP_MasterBuilding_C_UserConstructionScript_Params {
	};
	ABP_MasterBuilding_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckBasementPlaceability
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlacementPossible	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Min	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckBasementPlaceability(bool* PlacementPossible, float* Min) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckBasementPlaceability");

	struct ABP_MasterBuilding_C_CheckBasementPlaceability_Params {
		bool PlacementPossible;			//Offset: 0 | ElementSize: 1
		float Min;			//Offset: 4 | ElementSize: 4
	};
	ABP_MasterBuilding_C_CheckBasementPlaceability_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PlacementPossible != nullptr)
		*PlacementPossible = params.PlacementPossible;
	if (Min != nullptr)
		*Min = params.Min;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewBaseRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateBaseRotation(struct FRotator NewBaseRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseRotation");

	struct ABP_MasterBuilding_C_UpdateBaseRotation_Params {
		struct FRotator NewBaseRotation;			//Offset: 0 | ElementSize: 12
	};
	ABP_MasterBuilding_C_UpdateBaseRotation_Params params;
	params.NewBaseRotation = NewBaseRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateDestruction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GenerateDestruction(float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateDestruction");

	struct ABP_MasterBuilding_C_GenerateDestruction_Params {
		float Intensity;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GenerateDestruction_Params params;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.AddPeople
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Person	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::AddPeople(class ABP_BaseCharacter_C* Person) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddPeople");

	struct ABP_MasterBuilding_C_AddPeople_Params {
		class ABP_BaseCharacter_C* Person;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterBuilding_C_AddPeople_Params params;
	params.Person = Person;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemovePeople
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Person	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemovePeople(class ABP_BaseCharacter_C* Person) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemovePeople");

	struct ABP_MasterBuilding_C_RemovePeople_Params {
		class ABP_BaseCharacter_C* Person;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterBuilding_C_RemovePeople_Params params;
	params.Person = Person;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllPeople
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemoveAllPeople() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllPeople");

	struct ABP_MasterBuilding_C_RemoveAllPeople_Params {
	};
	ABP_MasterBuilding_C_RemoveAllPeople_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetPeopleID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: TArray<struct FString>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetPeopleID(TArray<struct FString>* ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetPeopleID");

	struct ABP_MasterBuilding_C_GetPeopleID_Params {
		TArray<struct FString> ID;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetPeopleID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ID != nullptr)
		*ID = params.ID;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxPeople
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: IsFull	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIsMaxPeople(bool* IsFull) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxPeople");

	struct ABP_MasterBuilding_C_CheckIsMaxPeople_Params {
		bool IsFull;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIsMaxPeople_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsFull != nullptr)
		*IsFull = params.IsFull;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAddtionalPeople
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: IsFull	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIsMaxAddtionalPeople(bool* IsFull) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAddtionalPeople");

	struct ABP_MasterBuilding_C_CheckIsMaxAddtionalPeople_Params {
		bool IsFull;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIsMaxAddtionalPeople_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsFull != nullptr)
		*IsFull = params.IsFull;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckObstruction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CanBePlaced_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckObstruction(bool* CanBePlaced_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckObstruction");

	struct ABP_MasterBuilding_C_CheckObstruction_Params {
		bool CanBePlaced_;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckObstruction_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: IsFull	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIsMaxAnimal(bool* IsFull) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAnimal");

	struct ABP_MasterBuilding_C_CheckIsMaxAnimal_Params {
		bool IsFull;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIsMaxAnimal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsFull != nullptr)
		*IsFull = params.IsFull;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.AddAnimal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::AddAnimal(class ABP_AnimalBase_C*& Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddAnimal");

	struct ABP_MasterBuilding_C_AddAnimal_Params {
		class ABP_AnimalBase_C* Animal;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterBuilding_C_AddAnimal_Params params;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAnimal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemoveAnimal(class ABP_AnimalBase_C*& Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAnimal");

	struct ABP_MasterBuilding_C_RemoveAnimal_Params {
		class ABP_AnimalBase_C* Animal;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterBuilding_C_RemoveAnimal_Params params;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.AddFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ModuleReference	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::AddFurniture(class ABP_MasterFurniture_C* Furniture, class ABP_MasterBuildModule_C* ModuleReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddFurniture");

	struct ABP_MasterBuilding_C_AddFurniture_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
		class ABP_MasterBuildModule_C* ModuleReference;			//Offset: 8 | ElementSize: 8
	};
	ABP_MasterBuilding_C_AddFurniture_Params params;
	params.Furniture = Furniture;
	params.ModuleReference = ModuleReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTaskFromDependentFields
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Status	Type: TEnumAsByte<E_NPCStatus>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedToolActivity	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: struct FST_FieldTasksLists	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTaskFromDependentFields(TEnumAsByte<E_NPCStatus>* Status, TEnumAsByte<E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem, struct FST_FieldTasksLists* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTaskFromDependentFields");

	struct ABP_MasterBuilding_C_GetTaskFromDependentFields_Params {
		TEnumAsByte<E_NPCStatus> Status;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> NeedToolActivity;			//Offset: 1 | ElementSize: 1
		struct FName NeedItem;			//Offset: 4 | ElementSize: 8
		struct FST_FieldTasksLists Task;			//Offset: 16 | ElementSize: 56
	};
	ABP_MasterBuilding_C_GetTaskFromDependentFields_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Status != nullptr)
		*Status = params.Status;
	if (NeedToolActivity != nullptr)
		*NeedToolActivity = params.NeedToolActivity;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
	if (Task != nullptr)
		*Task = params.Task;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemoveFurniture(class ABP_MasterFurniture_C* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveFurniture");

	struct ABP_MasterBuilding_C_RemoveFurniture_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterBuilding_C_RemoveFurniture_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Furniture	Type: TArray<class ABP_MasterFurniture_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetFurniture(TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurniture");

	struct ABP_MasterBuilding_C_GetFurniture_Params {
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
		TArray<class ABP_MasterFurniture_C*> Furniture;			//Offset: 8 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetFurniture_Params params;
	params.FurnitureCategory = FurnitureCategory;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseModule
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateBaseModule(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseModule");

	struct ABP_MasterBuilding_C_UpdateBaseModule_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_UpdateBaseModule_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuildingBase
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Init	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Upgrade	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadModulesData	Type: TArray<struct FST_SAVE_Modules>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GenerateBuildingBase(bool Init, bool Upgrade, bool load, TArray<struct FST_SAVE_Modules>* LoadModulesData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuildingBase");

	struct ABP_MasterBuilding_C_GenerateBuildingBase_Params {
		bool Init;			//Offset: 0 | ElementSize: 1
		bool Upgrade;			//Offset: 1 | ElementSize: 1
		bool load;			//Offset: 2 | ElementSize: 1
		TArray<struct FST_SAVE_Modules> LoadModulesData;			//Offset: 8 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GenerateBuildingBase_Params params;
	params.Init = Init;
	params.Upgrade = Upgrade;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
	if (LoadModulesData != nullptr)
		*LoadModulesData = params.LoadModulesData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuildingFrame
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Init	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Upgrade	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadModulesData	Type: TArray<struct FST_SAVE_Modules>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GenerateBuildingFrame(bool Init, bool Upgrade, bool load, TArray<struct FST_SAVE_Modules>* LoadModulesData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuildingFrame");

	struct ABP_MasterBuilding_C_GenerateBuildingFrame_Params {
		bool Init;			//Offset: 0 | ElementSize: 1
		bool Upgrade;			//Offset: 1 | ElementSize: 1
		bool load;			//Offset: 2 | ElementSize: 1
		TArray<struct FST_SAVE_Modules> LoadModulesData;			//Offset: 8 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GenerateBuildingFrame_Params params;
	params.Init = Init;
	params.Upgrade = Upgrade;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
	if (LoadModulesData != nullptr)
		*LoadModulesData = params.LoadModulesData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuildingModules
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Init	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Upgrade	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadModulesData	Type: TArray<struct FST_SAVE_Modules>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GenerateBuildingModules(bool Init, bool Upgrade, bool load, TArray<struct FST_SAVE_Modules>* LoadModulesData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuildingModules");

	struct ABP_MasterBuilding_C_GenerateBuildingModules_Params {
		bool Init;			//Offset: 0 | ElementSize: 1
		bool Upgrade;			//Offset: 1 | ElementSize: 1
		bool load;			//Offset: 2 | ElementSize: 1
		TArray<struct FST_SAVE_Modules> LoadModulesData;			//Offset: 8 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GenerateBuildingModules_Params params;
	params.Init = Init;
	params.Upgrade = Upgrade;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
	if (LoadModulesData != nullptr)
		*LoadModulesData = params.LoadModulesData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnOwnershipSwap
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewOwnership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnOwnershipSwap");

	struct ABP_MasterBuilding_C_OnOwnershipSwap_Params {
		TEnumAsByte<E_Ownership> NewOwnership;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeBuildingLevel
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ChangeBuildingLevel(int32_t NewLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeBuildingLevel");

	struct ABP_MasterBuilding_C_ChangeBuildingLevel_Params {
		int32_t NewLevel;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_ChangeBuildingLevel_Params params;
	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModuleDataFromSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ModuleID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SocketData	Type: struct FST_BuildingModuleSocket	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ModuleData	Type: struct FST_Module	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: ModuleDataHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetBuildingModuleDataFromSlot(int32_t ModuleID, struct FST_BuildingModuleSocket SocketData, bool* Success, struct FST_Module* ModuleData, struct FDataTableRowHandle* ModuleDataHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModuleDataFromSlot");

	struct ABP_MasterBuilding_C_GetBuildingModuleDataFromSlot_Params {
		int32_t ModuleID;			//Offset: 0 | ElementSize: 4
		struct FST_BuildingModuleSocket SocketData;			//Offset: 16 | ElementSize: 80
		bool Success;			//Offset: 96 | ElementSize: 1
		struct FST_Module ModuleData;			//Offset: 104 | ElementSize: 256
		struct FDataTableRowHandle ModuleDataHandler;			//Offset: 360 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetBuildingModuleDataFromSlot_Params params;
	params.ModuleID = ModuleID;
	params.SocketData = SocketData;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (ModuleData != nullptr)
		*ModuleData = params.ModuleData;
	if (ModuleDataHandler != nullptr)
		*ModuleDataHandler = params.ModuleDataHandler;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModulesDataFromSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SocketID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ModulesData	Type: TArray<struct FST_Module>	Flags: Parm, OutParm
// Name: ModulesDataHandlers	Type: TArray<struct FDataTableRowHandle>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetBuildingModulesDataFromSlot(int32_t SocketID, bool* Success, TArray<struct FST_Module>* ModulesData, TArray<struct FDataTableRowHandle>* ModulesDataHandlers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModulesDataFromSlot");

	struct ABP_MasterBuilding_C_GetBuildingModulesDataFromSlot_Params {
		int32_t SocketID;			//Offset: 0 | ElementSize: 4
		bool Success;			//Offset: 4 | ElementSize: 1
		TArray<struct FST_Module> ModulesData;			//Offset: 8 | ElementSize: 16
		TArray<struct FDataTableRowHandle> ModulesDataHandlers;			//Offset: 24 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;
	if (ModulesDataHandlers != nullptr)
		*ModulesDataHandlers = params.ModulesDataHandlers;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeModule
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SocketID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Module_ID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Inventory	Type: class UInventoryComponent_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ChangeModule(int32_t SocketID, int32_t Module_ID, class UInventoryComponent_C* Inventory) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeModule");

	struct ABP_MasterBuilding_C_ChangeModule_Params {
		int32_t SocketID;			//Offset: 0 | ElementSize: 4
		int32_t Module_ID;			//Offset: 4 | ElementSize: 4
		class UInventoryComponent_C* Inventory;			//Offset: 8 | ElementSize: 8
	};
	ABP_MasterBuilding_C_ChangeModule_Params params;
	params.SocketID = SocketID;
	params.Module_ID = Module_ID;
	params.Inventory = Inventory;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateInteriorVolume
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: UpdateOverlaps	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateInteriorVolume(bool UpdateOverlaps) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateInteriorVolume");

	struct ABP_MasterBuilding_C_UpdateInteriorVolume_Params {
		bool UpdateOverlaps;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_UpdateInteriorVolume_Params params;
	params.UpdateOverlaps = UpdateOverlaps;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsConstructed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIfBuildingIsConstructed(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsConstructed");

	struct ABP_MasterBuilding_C_CheckIfBuildingIsConstructed_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIfBuildingIsConstructed_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.AutoAssigningPeople
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::AutoAssigningPeople() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AutoAssigningPeople");

	struct ABP_MasterBuilding_C_AutoAssigningPeople_Params {
	};
	ABP_MasterBuilding_C_AutoAssigningPeople_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsRepaired
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIfBuildingIsRepaired(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsRepaired");

	struct ABP_MasterBuilding_C_CheckIfBuildingIsRepaired_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIfBuildingIsRepaired_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetID");

	struct ABP_MasterBuilding_C_SetID_Params {
	};
	ABP_MasterBuilding_C_SetID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.InitAfterLoad
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ZLocation	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BaseModulesData	Type: TArray<struct FST_SAVE_Modules>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: FrameModulesData	Type: TArray<struct FST_SAVE_Modules>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ModulesData	Type: TArray<struct FST_SAVE_Modules>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Containers	Type: TArray<struct FST_SAVE_Containers>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: DecorativeFurnitures	Type: TArray<struct FST_SAVE_Furnitures>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ActivityFurnitures	Type: TArray<struct FST_SAVE_ActivityFurnitures>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: RefillableContainers	Type: TArray<struct FST_SAVE_RefillableContainers>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Campfires	Type: TArray<struct FST_SAVE_Campfires>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: WorkersProductionData	Type: TArray<struct FST_SAVE_SeasonalProduction_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AnimalsProductionData	Type: TArray<struct FST_SAVE_AnimalProduction_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SourceOfResources	Type: TArray<struct FST_SAVE_SourceOfResources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TradeData	Type: TArray<struct FST_SAVE_SeasonalTrade_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ToolsCostsFromFile	Type: TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: WoodBufferFromFile	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoodBufferFromFile	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WaterBufferFromFile	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCreatedFromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: EventMultipliersFromFile	Type: struct FST_Event_BuildingMultipliers	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: ShopTypeFromFile	Type: TEnumAsByte<E_ShopType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BaseStage2FromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UnderRepairFromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UnderConstructionFromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RepairingProgressFromFile	Type: struct FST_SAVE_Repairing_Progress	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: LastLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomName_PlayerNickname	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CustomName_PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SeasonalManagementFromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::InitAfterLoad(struct FString ID, struct FString CustomName, float ZLocation, TArray<struct FST_SAVE_Modules>* BaseModulesData, TArray<struct FST_SAVE_Modules>* FrameModulesData, TArray<struct FST_SAVE_Modules>* ModulesData, TArray<struct FST_SAVE_Containers>* Containers, TArray<struct FST_SAVE_Furnitures>* DecorativeFurnitures, TArray<struct FST_SAVE_ActivityFurnitures>* ActivityFurnitures, TArray<struct FST_SAVE_RefillableContainers>* RefillableContainers, TArray<struct FST_SAVE_Campfires>* Campfires, TArray<struct FST_SAVE_SeasonalProduction_Progress>* WorkersProductionData, TArray<struct FST_SAVE_AnimalProduction_Progress>* AnimalsProductionData, TArray<struct FST_SAVE_SourceOfResources>* SourceOfResources, TArray<struct FST_SAVE_SeasonalTrade_Progress>* TradeData, TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile, bool FurnitureCreatedFromFile, struct FST_Event_BuildingMultipliers EventMultipliersFromFile, struct FString SaveGameVersion, TEnumAsByte<E_ShopType> ShopTypeFromFile, bool BaseStage2FromFile, bool UnderRepairFromFile, bool UnderConstructionFromFile, struct FST_SAVE_Repairing_Progress RepairingProgressFromFile, int32_t LastLevel, struct FString CustomName_PlayerNickname, struct FString CustomName_PlayerNetID, bool SeasonalManagementFromFile) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InitAfterLoad");

	struct ABP_MasterBuilding_C_InitAfterLoad_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		struct FString CustomName;			//Offset: 16 | ElementSize: 16
		float ZLocation;			//Offset: 32 | ElementSize: 4
		TArray<struct FST_SAVE_Modules> BaseModulesData;			//Offset: 40 | ElementSize: 16
		TArray<struct FST_SAVE_Modules> FrameModulesData;			//Offset: 56 | ElementSize: 16
		TArray<struct FST_SAVE_Modules> ModulesData;			//Offset: 72 | ElementSize: 16
		TArray<struct FST_SAVE_Containers> Containers;			//Offset: 88 | ElementSize: 16
		TArray<struct FST_SAVE_Furnitures> DecorativeFurnitures;			//Offset: 104 | ElementSize: 16
		TArray<struct FST_SAVE_ActivityFurnitures> ActivityFurnitures;			//Offset: 120 | ElementSize: 16
		TArray<struct FST_SAVE_RefillableContainers> RefillableContainers;			//Offset: 136 | ElementSize: 16
		TArray<struct FST_SAVE_Campfires> Campfires;			//Offset: 152 | ElementSize: 16
		TArray<struct FST_SAVE_SeasonalProduction_Progress> WorkersProductionData;			//Offset: 168 | ElementSize: 16
		TArray<struct FST_SAVE_AnimalProduction_Progress> AnimalsProductionData;			//Offset: 184 | ElementSize: 16
		TArray<struct FST_SAVE_SourceOfResources> SourceOfResources;			//Offset: 200 | ElementSize: 16
		TArray<struct FST_SAVE_SeasonalTrade_Progress> TradeData;			//Offset: 216 | ElementSize: 16
		TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile;			//Offset: 232 | ElementSize: 80
		float WoodBufferFromFile;			//Offset: 312 | ElementSize: 4
		float FoodBufferFromFile;			//Offset: 316 | ElementSize: 4
		float WaterBufferFromFile;			//Offset: 320 | ElementSize: 4
		bool FurnitureCreatedFromFile;			//Offset: 324 | ElementSize: 1
		struct FST_Event_BuildingMultipliers EventMultipliersFromFile;			//Offset: 328 | ElementSize: 4
		struct FString SaveGameVersion;			//Offset: 336 | ElementSize: 16
		TEnumAsByte<E_ShopType> ShopTypeFromFile;			//Offset: 352 | ElementSize: 1
		bool BaseStage2FromFile;			//Offset: 353 | ElementSize: 1
		bool UnderRepairFromFile;			//Offset: 354 | ElementSize: 1
		bool UnderConstructionFromFile;			//Offset: 355 | ElementSize: 1
		struct FST_SAVE_Repairing_Progress RepairingProgressFromFile;			//Offset: 360 | ElementSize: 24
		int32_t LastLevel;			//Offset: 384 | ElementSize: 4
		struct FString CustomName_PlayerNickname;			//Offset: 392 | ElementSize: 16
		struct FString CustomName_PlayerNetID;			//Offset: 408 | ElementSize: 16
		bool SeasonalManagementFromFile;			//Offset: 424 | ElementSize: 1
	};
	ABP_MasterBuilding_C_InitAfterLoad_Params params;
	params.ID = ID;
	params.CustomName = CustomName;
	params.ZLocation = ZLocation;
	params.ToolsCostsFromFile = ToolsCostsFromFile;
	params.WoodBufferFromFile = WoodBufferFromFile;
	params.FoodBufferFromFile = FoodBufferFromFile;
	params.WaterBufferFromFile = WaterBufferFromFile;
	params.FurnitureCreatedFromFile = FurnitureCreatedFromFile;
	params.EventMultipliersFromFile = EventMultipliersFromFile;
	params.SaveGameVersion = SaveGameVersion;
	params.ShopTypeFromFile = ShopTypeFromFile;
	params.BaseStage2FromFile = BaseStage2FromFile;
	params.UnderRepairFromFile = UnderRepairFromFile;
	params.UnderConstructionFromFile = UnderConstructionFromFile;
	params.RepairingProgressFromFile = RepairingProgressFromFile;
	params.LastLevel = LastLevel;
	params.CustomName_PlayerNickname = CustomName_PlayerNickname;
	params.CustomName_PlayerNetID = CustomName_PlayerNetID;
	params.SeasonalManagementFromFile = SeasonalManagementFromFile;

	UObject::ProcessEvent(fn, &params);
	if (BaseModulesData != nullptr)
		*BaseModulesData = params.BaseModulesData;
	if (FrameModulesData != nullptr)
		*FrameModulesData = params.FrameModulesData;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;
	if (Containers != nullptr)
		*Containers = params.Containers;
	if (DecorativeFurnitures != nullptr)
		*DecorativeFurnitures = params.DecorativeFurnitures;
	if (ActivityFurnitures != nullptr)
		*ActivityFurnitures = params.ActivityFurnitures;
	if (RefillableContainers != nullptr)
		*RefillableContainers = params.RefillableContainers;
	if (Campfires != nullptr)
		*Campfires = params.Campfires;
	if (WorkersProductionData != nullptr)
		*WorkersProductionData = params.WorkersProductionData;
	if (AnimalsProductionData != nullptr)
		*AnimalsProductionData = params.AnimalsProductionData;
	if (SourceOfResources != nullptr)
		*SourceOfResources = params.SourceOfResources;
	if (TradeData != nullptr)
		*TradeData = params.TradeData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDataToSave
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BuildingData	Type: struct FST_SAVE_Buildings	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetDataToSave(struct FST_SAVE_Buildings* BuildingData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetDataToSave");

	struct ABP_MasterBuilding_C_GetDataToSave_Params {
		struct FST_SAVE_Buildings BuildingData;			//Offset: 0 | ElementSize: 480
	};
	ABP_MasterBuilding_C_GetDataToSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BuildingData != nullptr)
		*BuildingData = params.BuildingData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBuildingCondition
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateBuildingCondition() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBuildingCondition");

	struct ABP_MasterBuilding_C_UpdateBuildingCondition_Params {
	};
	ABP_MasterBuilding_C_UpdateBuildingCondition_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalDecreaseBuildingCondition
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SeasonalDecreaseBuildingCondition() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalDecreaseBuildingCondition");

	struct ABP_MasterBuilding_C_SeasonalDecreaseBuildingCondition_Params {
	};
	ABP_MasterBuilding_C_SeasonalDecreaseBuildingCondition_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.InitEconomy
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: WorkersProductionDataFromFile	Type: TArray<struct FST_SAVE_SeasonalProduction_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AnimalsProductionDataFromFile	Type: TArray<struct FST_SAVE_AnimalProduction_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TradeDataFromFile	Type: TArray<struct FST_SAVE_SeasonalTrade_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ToolsCostsFromFile	Type: TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: WoodBufferFromFile	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoodBufferFromFile	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WaterBufferFromFile	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RepairingProgressFromFile	Type: struct FST_SAVE_Repairing_Progress	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: SeasonalManagementFromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::InitEconomy(bool load, TArray<struct FST_SAVE_SeasonalProduction_Progress>* WorkersProductionDataFromFile, TArray<struct FST_SAVE_AnimalProduction_Progress>* AnimalsProductionDataFromFile, TArray<struct FST_SAVE_SeasonalTrade_Progress>* TradeDataFromFile, const TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost>& ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile, struct FST_SAVE_Repairing_Progress RepairingProgressFromFile, bool SeasonalManagementFromFile) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InitEconomy");

	struct ABP_MasterBuilding_C_InitEconomy_Params {
		bool load;			//Offset: 0 | ElementSize: 1
		TArray<struct FST_SAVE_SeasonalProduction_Progress> WorkersProductionDataFromFile;			//Offset: 8 | ElementSize: 16
		TArray<struct FST_SAVE_AnimalProduction_Progress> AnimalsProductionDataFromFile;			//Offset: 24 | ElementSize: 16
		TArray<struct FST_SAVE_SeasonalTrade_Progress> TradeDataFromFile;			//Offset: 40 | ElementSize: 16
		TMap<TEnumAsByte<E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile;			//Offset: 56 | ElementSize: 80
		float WoodBufferFromFile;			//Offset: 136 | ElementSize: 4
		float FoodBufferFromFile;			//Offset: 140 | ElementSize: 4
		float WaterBufferFromFile;			//Offset: 144 | ElementSize: 4
		struct FST_SAVE_Repairing_Progress RepairingProgressFromFile;			//Offset: 152 | ElementSize: 24
		bool SeasonalManagementFromFile;			//Offset: 176 | ElementSize: 1
	};
	ABP_MasterBuilding_C_InitEconomy_Params params;
	params.load = load;
	params.ToolsCostsFromFile = ToolsCostsFromFile;
	params.WoodBufferFromFile = WoodBufferFromFile;
	params.FoodBufferFromFile = FoodBufferFromFile;
	params.WaterBufferFromFile = WaterBufferFromFile;
	params.RepairingProgressFromFile = RepairingProgressFromFile;
	params.SeasonalManagementFromFile = SeasonalManagementFromFile;

	UObject::ProcessEvent(fn, &params);
	if (WorkersProductionDataFromFile != nullptr)
		*WorkersProductionDataFromFile = params.WorkersProductionDataFromFile;
	if (AnimalsProductionDataFromFile != nullptr)
		*AnimalsProductionDataFromFile = params.AnimalsProductionDataFromFile;
	if (TradeDataFromFile != nullptr)
		*TradeDataFromFile = params.TradeDataFromFile;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketPlacement
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: OverrideTransform	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Transform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckSocketPlacement(bool* OverrideTransform, struct FTransform* Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketPlacement");

	struct ABP_MasterBuilding_C_CheckSocketPlacement_Params {
		bool OverrideTransform;			//Offset: 0 | ElementSize: 1
		struct FTransform Transform;			//Offset: 16 | ElementSize: 48
	};
	ABP_MasterBuilding_C_CheckSocketPlacement_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OverrideTransform != nullptr)
		*OverrideTransform = params.OverrideTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdatePlacement
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdatePlacement(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdatePlacement");

	struct ABP_MasterBuilding_C_UpdatePlacement_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_UpdatePlacement_Params params;
	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.TeleportPeople
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerIncluded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::TeleportPeople(bool PlayerIncluded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.TeleportPeople");

	struct ABP_MasterBuilding_C_TeleportPeople_Params {
		bool PlayerIncluded;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_TeleportPeople_Params params;
	params.PlayerIncluded = PlayerIncluded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetAnimalRange
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: VolumeTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: BoxExtent	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetAnimalRange(struct FTransform* VolumeTransform, struct FVector* BoxExtent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetAnimalRange");

	struct ABP_MasterBuilding_C_GetAnimalRange_Params {
		struct FTransform VolumeTransform;			//Offset: 0 | ElementSize: 48
		struct FVector BoxExtent;			//Offset: 48 | ElementSize: 12
	};
	ABP_MasterBuilding_C_GetAnimalRange_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VolumeTransform != nullptr)
		*VolumeTransform = params.VolumeTransform;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfDoors
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OnlyConstructed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NumberOfDoors	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DoorModuleID	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetNumberOfDoors(bool OnlyConstructed, int32_t* NumberOfDoors, int32_t* DoorModuleID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfDoors");

	struct ABP_MasterBuilding_C_GetNumberOfDoors_Params {
		bool OnlyConstructed;			//Offset: 0 | ElementSize: 1
		int32_t NumberOfDoors;			//Offset: 4 | ElementSize: 4
		int32_t DoorModuleID;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetNumberOfDoors_Params params;
	params.OnlyConstructed = OnlyConstructed;

	UObject::ProcessEvent(fn, &params);
	if (NumberOfDoors != nullptr)
		*NumberOfDoors = params.NumberOfDoors;
	if (DoorModuleID != nullptr)
		*DoorModuleID = params.DoorModuleID;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedSleepSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SleepSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetUnoccupiedSleepSlot(int32_t* SleepSlotIndex, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedSleepSlot");

	struct ABP_MasterBuilding_C_GetUnoccupiedSleepSlot_Params {
		int32_t SleepSlotIndex;			//Offset: 0 | ElementSize: 4
		bool Success;			//Offset: 4 | ElementSize: 1
	};
	ABP_MasterBuilding_C_GetUnoccupiedSleepSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SleepSlotIndex != nullptr)
		*SleepSlotIndex = params.SleepSlotIndex;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OccupySleepSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: HaveStartPoint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPointTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OccupySleepSlot(int32_t Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OccupySleepSlot");

	struct ABP_MasterBuilding_C_OccupySleepSlot_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FTransform SlotTransform;			//Offset: 16 | ElementSize: 48
		bool HaveStartPoint;			//Offset: 64 | ElementSize: 1
		struct FTransform StartPointTransform;			//Offset: 80 | ElementSize: 48
	};
	ABP_MasterBuilding_C_OccupySleepSlot_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPointTransform != nullptr)
		*StartPointTransform = params.StartPointTransform;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlots
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UnoccupySleepSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlots");

	struct ABP_MasterBuilding_C_UnoccupySleepSlots_Params {
	};
	ABP_MasterBuilding_C_UnoccupySleepSlots_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: HaveStartPoint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UnoccupySleepSlot(int32_t Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlot");

	struct ABP_MasterBuilding_C_UnoccupySleepSlot_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FTransform SlotTransform;			//Offset: 16 | ElementSize: 48
		bool HaveStartPoint;			//Offset: 64 | ElementSize: 1
		struct FTransform StartPoint;			//Offset: 80 | ElementSize: 48
	};
	ABP_MasterBuilding_C_UnoccupySleepSlot_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeSeasonalProductionPower
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Deacrease_Increase	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Powers	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ChangedValues	Type: TArray<int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ChangeSeasonalProductionPower(bool Deacrease_Increase, TArray<int32_t>* Powers, TArray<int32_t>* ChangedValues) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeSeasonalProductionPower");

	struct ABP_MasterBuilding_C_ChangeSeasonalProductionPower_Params {
		bool Deacrease_Increase;			//Offset: 0 | ElementSize: 1
		TArray<int32_t> Powers;			//Offset: 8 | ElementSize: 16
		TArray<int32_t> ChangedValues;			//Offset: 24 | ElementSize: 16
	};
	ABP_MasterBuilding_C_ChangeSeasonalProductionPower_Params params;
	params.Deacrease_Increase = Deacrease_Increase;

	UObject::ProcessEvent(fn, &params);
	if (Powers != nullptr)
		*Powers = params.Powers;
	if (ChangedValues != nullptr)
		*ChangedValues = params.ChangedValues;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.IncreaseSeasonalProductionPower
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChangedValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::IncreaseSeasonalProductionPower(int32_t SeasonIndex, int32_t Value, int32_t* ChangedValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IncreaseSeasonalProductionPower");

	struct ABP_MasterBuilding_C_IncreaseSeasonalProductionPower_Params {
		int32_t SeasonIndex;			//Offset: 0 | ElementSize: 4
		int32_t Value;			//Offset: 4 | ElementSize: 4
		int32_t ChangedValue;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterBuilding_C_IncreaseSeasonalProductionPower_Params params;
	params.SeasonIndex = SeasonIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (ChangedValue != nullptr)
		*ChangedValue = params.ChangedValue;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseSeasonalProductionPower
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ChangedValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::DecreaseSeasonalProductionPower(int32_t SeasonIndex, int32_t Value, int32_t* ChangedValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseSeasonalProductionPower");

	struct ABP_MasterBuilding_C_DecreaseSeasonalProductionPower_Params {
		int32_t SeasonIndex;			//Offset: 0 | ElementSize: 4
		int32_t Value;			//Offset: 4 | ElementSize: 4
		int32_t ChangedValue;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterBuilding_C_DecreaseSeasonalProductionPower_Params params;
	params.SeasonIndex = SeasonIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (ChangedValue != nullptr)
		*ChangedValue = params.ChangedValue;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnBuildingChangeLevel
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateProductionOnBuildingChangeLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnBuildingChangeLevel");

	struct ABP_MasterBuilding_C_UpdateProductionOnBuildingChangeLevel_Params {
	};
	ABP_MasterBuilding_C_UpdateProductionOnBuildingChangeLevel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSleepSlotIsOccupied
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckSleepSlotIsOccupied(int32_t Index, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSleepSlotIsOccupied");

	struct ABP_MasterBuilding_C_CheckSleepSlotIsOccupied_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		bool Success;			//Offset: 4 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckSleepSlotIsOccupied_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllAnimals
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemoveAllAnimals() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllAnimals");

	struct ABP_MasterBuilding_C_RemoveAllAnimals_Params {
	};
	ABP_MasterBuilding_C_RemoveAllAnimals_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.IsDamaged
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Damaged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::IsDamaged(bool* Damaged) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsDamaged");

	struct ABP_MasterBuilding_C_IsDamaged_Params {
		bool Damaged;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_IsDamaged_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Damaged != nullptr)
		*Damaged = params.Damaged;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnSeasonalManagementChanged
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonalManagement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateProductionOnSeasonalManagementChanged(bool SeasonalManagement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnSeasonalManagementChanged");

	struct ABP_MasterBuilding_C_UpdateProductionOnSeasonalManagementChanged_Params {
		bool SeasonalManagement;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_UpdateProductionOnSeasonalManagementChanged_Params params;
	params.SeasonalManagement = SeasonalManagement;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.FindProductionItem
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Recipe	Type: struct FST_Production_Recipe	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: OldProduction	Type: TArray<struct FST_Production_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RecipeProgress	Type: struct FST_Production_Progress	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::FindProductionItem(struct FST_Production_Recipe Recipe, TArray<struct FST_Production_Progress>* OldProduction, bool* Success, struct FST_Production_Progress* RecipeProgress) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FindProductionItem");

	struct ABP_MasterBuilding_C_FindProductionItem_Params {
		struct FST_Production_Recipe Recipe;			//Offset: 0 | ElementSize: 56
		TArray<struct FST_Production_Progress> OldProduction;			//Offset: 56 | ElementSize: 16
		bool Success;			//Offset: 72 | ElementSize: 1
		struct FST_Production_Progress RecipeProgress;			//Offset: 80 | ElementSize: 152
	};
	ABP_MasterBuilding_C_FindProductionItem_Params params;
	params.Recipe = Recipe;

	UObject::ProcessEvent(fn, &params);
	if (OldProduction != nullptr)
		*OldProduction = params.OldProduction;
	if (Success != nullptr)
		*Success = params.Success;
	if (RecipeProgress != nullptr)
		*RecipeProgress = params.RecipeProgress;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfFurnitures
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetNumberOfFurnitures(int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfFurnitures");

	struct ABP_MasterBuilding_C_GetNumberOfFurnitures_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetNumberOfFurnitures_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCDataToSave
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BuildingData	Type: struct FST_SAVE_NPC_Building	Flags: Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetNPCDataToSave(struct FST_SAVE_NPC_Building* BuildingData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCDataToSave");

	struct ABP_MasterBuilding_C_GetNPCDataToSave_Params {
		struct FST_SAVE_NPC_Building BuildingData;			//Offset: 0 | ElementSize: 32
	};
	ABP_MasterBuilding_C_GetNPCDataToSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BuildingData != nullptr)
		*BuildingData = params.BuildingData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.InitNPCBuildingAfterLoad
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Containers	Type: TArray<struct FST_SAVE_Containers>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::InitNPCBuildingAfterLoad(TArray<struct FST_SAVE_Containers>* Containers, struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.InitNPCBuildingAfterLoad");

	struct ABP_MasterBuilding_C_InitNPCBuildingAfterLoad_Params {
		TArray<struct FST_SAVE_Containers> Containers;			//Offset: 0 | ElementSize: 16
		struct FString SaveGameVersion;			//Offset: 16 | ElementSize: 16
	};
	ABP_MasterBuilding_C_InitNPCBuildingAfterLoad_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
	if (Containers != nullptr)
		*Containers = params.Containers;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetWorkersProductionDataForReplication
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Seasons_Spring	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Seasons_Summer	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Seasons_Autumn	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Seasons_Winter	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Powers_Spring	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Powers_Summer	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Powers_Autumn	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Powers_Winter	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: SeasonalPower	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Progresses	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Spring	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Summer	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Autumn	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Winter	Type: TArray<float>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetWorkersProductionDataForReplication(TArray<bool>* Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, TArray<int32_t>* Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, TArray<int32_t>* SeasonalPower, TArray<float>* Progresses, TArray<float>* NumbersPerHour_Spring, TArray<float>* NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetWorkersProductionDataForReplication");

	struct ABP_MasterBuilding_C_GetWorkersProductionDataForReplication_Params {
		TArray<bool> Seasons_Spring;			//Offset: 0 | ElementSize: 16
		TArray<bool> Seasons_Summer;			//Offset: 16 | ElementSize: 16
		TArray<bool> Seasons_Autumn;			//Offset: 32 | ElementSize: 16
		TArray<bool> Seasons_Winter;			//Offset: 48 | ElementSize: 16
		TArray<int32_t> Powers_Spring;			//Offset: 64 | ElementSize: 16
		TArray<int32_t> Powers_Summer;			//Offset: 80 | ElementSize: 16
		TArray<int32_t> Powers_Autumn;			//Offset: 96 | ElementSize: 16
		TArray<int32_t> Powers_Winter;			//Offset: 112 | ElementSize: 16
		TArray<int32_t> SeasonalPower;			//Offset: 128 | ElementSize: 16
		TArray<float> Progresses;			//Offset: 144 | ElementSize: 16
		TArray<float> NumbersPerHour_Spring;			//Offset: 160 | ElementSize: 16
		TArray<float> NumbersPerHour_Summer;			//Offset: 176 | ElementSize: 16
		TArray<float> NumbersPerHour_Autumn;			//Offset: 192 | ElementSize: 16
		TArray<float> NumbersPerHour_Winter;			//Offset: 208 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetWorkersProductionDataForReplication_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Seasons_Spring != nullptr)
		*Seasons_Spring = params.Seasons_Spring;
	if (Seasons_Summer != nullptr)
		*Seasons_Summer = params.Seasons_Summer;
	if (Seasons_Autumn != nullptr)
		*Seasons_Autumn = params.Seasons_Autumn;
	if (Seasons_Winter != nullptr)
		*Seasons_Winter = params.Seasons_Winter;
	if (Powers_Spring != nullptr)
		*Powers_Spring = params.Powers_Spring;
	if (Powers_Summer != nullptr)
		*Powers_Summer = params.Powers_Summer;
	if (Powers_Autumn != nullptr)
		*Powers_Autumn = params.Powers_Autumn;
	if (Powers_Winter != nullptr)
		*Powers_Winter = params.Powers_Winter;
	if (SeasonalPower != nullptr)
		*SeasonalPower = params.SeasonalPower;
	if (Progresses != nullptr)
		*Progresses = params.Progresses;
	if (NumbersPerHour_Spring != nullptr)
		*NumbersPerHour_Spring = params.NumbersPerHour_Spring;
	if (NumbersPerHour_Summer != nullptr)
		*NumbersPerHour_Summer = params.NumbersPerHour_Summer;
	if (NumbersPerHour_Autumn != nullptr)
		*NumbersPerHour_Autumn = params.NumbersPerHour_Autumn;
	if (NumbersPerHour_Winter != nullptr)
		*NumbersPerHour_Winter = params.NumbersPerHour_Winter;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTradeDataForReplication
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Seasons_Spring	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Seasons_Summer	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Seasons_Autumn	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Seasons_Winter	Type: TArray<bool>	Flags: Parm, OutParm
// Name: Powers_Spring	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Powers_Summer	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Powers_Autumn	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Powers_Winter	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: SeasonalPower	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: Progresses	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Spring	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Summer	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Autumn	Type: TArray<float>	Flags: Parm, OutParm
// Name: NumbersPerHour_Winter	Type: TArray<float>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTradeDataForReplication(TArray<bool>* Seasons_Spring, TArray<bool>* Seasons_Summer, TArray<bool>* Seasons_Autumn, TArray<bool>* Seasons_Winter, TArray<int32_t>* Powers_Spring, TArray<int32_t>* Powers_Summer, TArray<int32_t>* Powers_Autumn, TArray<int32_t>* Powers_Winter, TArray<int32_t>* SeasonalPower, TArray<float>* Progresses, TArray<float>* NumbersPerHour_Spring, TArray<float>* NumbersPerHour_Summer, TArray<float>* NumbersPerHour_Autumn, TArray<float>* NumbersPerHour_Winter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTradeDataForReplication");

	struct ABP_MasterBuilding_C_GetTradeDataForReplication_Params {
		TArray<bool> Seasons_Spring;			//Offset: 0 | ElementSize: 16
		TArray<bool> Seasons_Summer;			//Offset: 16 | ElementSize: 16
		TArray<bool> Seasons_Autumn;			//Offset: 32 | ElementSize: 16
		TArray<bool> Seasons_Winter;			//Offset: 48 | ElementSize: 16
		TArray<int32_t> Powers_Spring;			//Offset: 64 | ElementSize: 16
		TArray<int32_t> Powers_Summer;			//Offset: 80 | ElementSize: 16
		TArray<int32_t> Powers_Autumn;			//Offset: 96 | ElementSize: 16
		TArray<int32_t> Powers_Winter;			//Offset: 112 | ElementSize: 16
		TArray<int32_t> SeasonalPower;			//Offset: 128 | ElementSize: 16
		TArray<float> Progresses;			//Offset: 144 | ElementSize: 16
		TArray<float> NumbersPerHour_Spring;			//Offset: 160 | ElementSize: 16
		TArray<float> NumbersPerHour_Summer;			//Offset: 176 | ElementSize: 16
		TArray<float> NumbersPerHour_Autumn;			//Offset: 192 | ElementSize: 16
		TArray<float> NumbersPerHour_Winter;			//Offset: 208 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetTradeDataForReplication_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Seasons_Spring != nullptr)
		*Seasons_Spring = params.Seasons_Spring;
	if (Seasons_Summer != nullptr)
		*Seasons_Summer = params.Seasons_Summer;
	if (Seasons_Autumn != nullptr)
		*Seasons_Autumn = params.Seasons_Autumn;
	if (Seasons_Winter != nullptr)
		*Seasons_Winter = params.Seasons_Winter;
	if (Powers_Spring != nullptr)
		*Powers_Spring = params.Powers_Spring;
	if (Powers_Summer != nullptr)
		*Powers_Summer = params.Powers_Summer;
	if (Powers_Autumn != nullptr)
		*Powers_Autumn = params.Powers_Autumn;
	if (Powers_Winter != nullptr)
		*Powers_Winter = params.Powers_Winter;
	if (SeasonalPower != nullptr)
		*SeasonalPower = params.SeasonalPower;
	if (Progresses != nullptr)
		*Progresses = params.Progresses;
	if (NumbersPerHour_Spring != nullptr)
		*NumbersPerHour_Spring = params.NumbersPerHour_Spring;
	if (NumbersPerHour_Summer != nullptr)
		*NumbersPerHour_Summer = params.NumbersPerHour_Summer;
	if (NumbersPerHour_Autumn != nullptr)
		*NumbersPerHour_Autumn = params.NumbersPerHour_Autumn;
	if (NumbersPerHour_Winter != nullptr)
		*NumbersPerHour_Winter = params.NumbersPerHour_Winter;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasWorkers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Workers	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasWorkers(bool* Workers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasWorkers");

	struct ABP_MasterBuilding_C_Production_HasWorkers_Params {
		bool Workers;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasWorkers_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Workers != nullptr)
		*Workers = params.Workers;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasAnimals
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Animals	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasAnimals(bool* Animals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasAnimals");

	struct ABP_MasterBuilding_C_Production_HasAnimals_Params {
		bool Animals;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasAnimals_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animals != nullptr)
		*Animals = params.Animals;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasFood
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Food	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasFood(bool* Food) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasFood");

	struct ABP_MasterBuilding_C_Production_HasFood_Params {
		bool Food;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasFood_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Food != nullptr)
		*Food = params.Food;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasWater
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: water	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasWater(bool* water) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasWater");

	struct ABP_MasterBuilding_C_Production_HasWater_Params {
		bool water;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasWater_Params params;

	UObject::ProcessEvent(fn, &params);
	if (water != nullptr)
		*water = params.water;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasWood
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: wood	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasWood(bool* wood) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasWood");

	struct ABP_MasterBuilding_C_Production_HasWood_Params {
		bool wood;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasWood_Params params;

	UObject::ProcessEvent(fn, &params);
	if (wood != nullptr)
		*wood = params.wood;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CanBeDestroyed?
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: CanBeDestroyed_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CanBeDestroyed_(bool* CanBeDestroyed_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CanBeDestroyed?");

	struct ABP_MasterBuilding_C_CanBeDestroyed__Params {
		bool CanBeDestroyed_;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CanBeDestroyed__Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanBeDestroyed_ != nullptr)
		*CanBeDestroyed_ = params.CanBeDestroyed_;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumbersOfAnimals
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YoungFemaleCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YoungMaleCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FemaleCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaleCount	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetNumbersOfAnimals(TEnumAsByte<E_AnimalType> AnimalType, int32_t* YoungFemaleCount, int32_t* YoungMaleCount, int32_t* FemaleCount, int32_t* MaleCount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumbersOfAnimals");

	struct ABP_MasterBuilding_C_GetNumbersOfAnimals_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
		int32_t YoungFemaleCount;			//Offset: 4 | ElementSize: 4
		int32_t YoungMaleCount;			//Offset: 8 | ElementSize: 4
		int32_t FemaleCount;			//Offset: 12 | ElementSize: 4
		int32_t MaleCount;			//Offset: 16 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetNumbersOfAnimals_Params params;
	params.AnimalType = AnimalType;

	UObject::ProcessEvent(fn, &params);
	if (YoungFemaleCount != nullptr)
		*YoungFemaleCount = params.YoungFemaleCount;
	if (YoungMaleCount != nullptr)
		*YoungMaleCount = params.YoungMaleCount;
	if (FemaleCount != nullptr)
		*FemaleCount = params.FemaleCount;
	if (MaleCount != nullptr)
		*MaleCount = params.MaleCount;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTax
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTax(float* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTax");

	struct ABP_MasterBuilding_C_GetTax_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetTax_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetSocket
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetSocket() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetSocket");

	struct ABP_MasterBuilding_C_SetSocket_Params {
	};
	ABP_MasterBuilding_C_SetSocket_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlots
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UnoccupyWorkSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlots");

	struct ABP_MasterBuilding_C_UnoccupyWorkSlots_Params {
	};
	ABP_MasterBuilding_C_UnoccupyWorkSlots_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasTools
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Tools	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasTools(bool* Tools) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasTools");

	struct ABP_MasterBuilding_C_Production_HasTools_Params {
		bool Tools;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasTools_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Tools != nullptr)
		*Tools = params.Tools;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasResouces
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Resources	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasResouces(bool* Resources) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasResouces");

	struct ABP_MasterBuilding_C_Production_HasResouces_Params {
		bool Resources;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasResouces_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Resources != nullptr)
		*Resources = params.Resources;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasProductionIntensity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Production	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::Production_HasProductionIntensity(bool* Production) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.Production_HasProductionIntensity");

	struct ABP_MasterBuilding_C_Production_HasProductionIntensity_Params {
		bool Production;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_Production_HasProductionIntensity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Production != nullptr)
		*Production = params.Production;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.FoodDemand
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Demand	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::FoodDemand(float* Demand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FoodDemand");

	struct ABP_MasterBuilding_C_FoodDemand_Params {
		float Demand;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_FoodDemand_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Demand != nullptr)
		*Demand = params.Demand;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.WaterDemand
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Demand	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::WaterDemand(float* Demand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.WaterDemand");

	struct ABP_MasterBuilding_C_WaterDemand_Params {
		float Demand;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_WaterDemand_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Demand != nullptr)
		*Demand = params.Demand;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.WoodDemand
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Demand	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::WoodDemand(float* Demand) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.WoodDemand");

	struct ABP_MasterBuilding_C_WoodDemand_Params {
		float Demand;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_WoodDemand_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Demand != nullptr)
		*Demand = params.Demand;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnPeopleOrAnimalsListChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnPeopleOrAnimalsListChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnPeopleOrAnimalsListChanged");

	struct ABP_MasterBuilding_C_OnPeopleOrAnimalsListChanged_Params {
	};
	ABP_MasterBuilding_C_OnPeopleOrAnimalsListChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetShopType
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_ShopType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InitTradingData	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetShopType(TEnumAsByte<E_ShopType> Type, bool InitTradingData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetShopType");

	struct ABP_MasterBuilding_C_SetShopType_Params {
		TEnumAsByte<E_ShopType> Type;			//Offset: 0 | ElementSize: 1
		bool InitTradingData;			//Offset: 1 | ElementSize: 1
	};
	ABP_MasterBuilding_C_SetShopType_Params params;
	params.Type = Type;
	params.InitTradingData = InitTradingData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckPointOnTheMap
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OnMap	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckPointOnTheMap(struct FVector Location, bool* OnMap) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckPointOnTheMap");

	struct ABP_MasterBuilding_C_CheckPointOnTheMap_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		bool OnMap;			//Offset: 12 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckPointOnTheMap_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
	if (OnMap != nullptr)
		*OnMap = params.OnMap;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetModulesVisibility
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Visible	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetModulesVisibility(bool Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetModulesVisibility");

	struct ABP_MasterBuilding_C_SetModulesVisibility_Params {
		bool Visible;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_SetModulesVisibility_Params params;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTotalCostOfRepair
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Items	Type: TArray<struct FST_ItemResource>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTotalCostOfRepair(TArray<struct FST_ItemResource>* Items) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTotalCostOfRepair");

	struct ABP_MasterBuilding_C_GetTotalCostOfRepair_Params {
		TArray<struct FST_ItemResource> Items;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetTotalCostOfRepair_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Items != nullptr)
		*Items = params.Items;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTotalCostOfConstruction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Items	Type: TArray<struct FST_ItemResource>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTotalCostOfConstruction(TArray<struct FST_ItemResource>* Items) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTotalCostOfConstruction");

	struct ABP_MasterBuilding_C_GetTotalCostOfConstruction_Params {
		TArray<struct FST_ItemResource> Items;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetTotalCostOfConstruction_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Items != nullptr)
		*Items = params.Items;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RepairModule
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RepairModule() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RepairModule");

	struct ABP_MasterBuilding_C_RepairModule_Params {
	};
	ABP_MasterBuilding_C_RepairModule_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.AddBuildingToBuildersList
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RepairOrBuild	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::AddBuildingToBuildersList(bool RepairOrBuild) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.AddBuildingToBuildersList");

	struct ABP_MasterBuilding_C_AddBuildingToBuildersList_Params {
		bool RepairOrBuild;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_AddBuildingToBuildersList_Params params;
	params.RepairOrBuild = RepairOrBuild;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveBuildingFromBuildersList
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RepairOrBuild	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::RemoveBuildingFromBuildersList(bool RepairOrBuild) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveBuildingFromBuildersList");

	struct ABP_MasterBuilding_C_RemoveBuildingFromBuildersList_Params {
		bool RepairOrBuild;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_RemoveBuildingFromBuildersList_Params params;
	params.RepairOrBuild = RepairOrBuild;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ClearPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ClearPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ClearPreset");

	struct ABP_MasterBuilding_C_ClearPreset_Params {
	};
	ABP_MasterBuilding_C_ClearPreset_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateEmptyPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GenerateEmptyPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateEmptyPreset");

	struct ABP_MasterBuilding_C_GenerateEmptyPreset_Params {
	};
	ABP_MasterBuilding_C_GenerateEmptyPreset_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.IsLastUnconstructedModule
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Last	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::IsLastUnconstructedModule(bool* Last) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsLastUnconstructedModule");

	struct ABP_MasterBuilding_C_IsLastUnconstructedModule_Params {
		bool Last;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_IsLastUnconstructedModule_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Last != nullptr)
		*Last = params.Last;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetMarkers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetMarkers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetMarkers");

	struct ABP_MasterBuilding_C_SetMarkers_Params {
	};
	ABP_MasterBuilding_C_SetMarkers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RelativeTransform	Type: struct FTransform	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor
// Name: Actor	Type: TAssetPtr<class UClass>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: OverriteSlotsSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SlotAvailable	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: HasTable	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: HasInventoryLimit	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OverriteOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BlockCustomisation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ActorSpawned	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OnlyTransformUpdated	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetFurniture(int32_t ID, const struct FTransform& RelativeTransform, TAssetPtr<class UClass> Actor, bool OverriteSlotsSettings, TArray<bool>* SlotAvailable, bool HasTable, bool HasInventoryLimit, bool OverriteOwnership, TEnumAsByte<E_Ownership> Ownership, bool BlockCustomisation, class AActor** ActorSpawned, bool* OnlyTransformUpdated) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetFurniture");

	struct ABP_MasterBuilding_C_SetFurniture_Params {
		int32_t ID;			//Offset: 0 | ElementSize: 4
		struct FTransform RelativeTransform;			//Offset: 16 | ElementSize: 48
		TAssetPtr<class UClass> Actor;			//Offset: 64 | ElementSize: 40
		bool OverriteSlotsSettings;			//Offset: 104 | ElementSize: 1
		TArray<bool> SlotAvailable;			//Offset: 112 | ElementSize: 16
		bool HasTable;			//Offset: 128 | ElementSize: 1
		bool HasInventoryLimit;			//Offset: 129 | ElementSize: 1
		bool OverriteOwnership;			//Offset: 130 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 131 | ElementSize: 1
		bool BlockCustomisation;			//Offset: 132 | ElementSize: 1
		class AActor* ActorSpawned;			//Offset: 136 | ElementSize: 8
		bool OnlyTransformUpdated;			//Offset: 144 | ElementSize: 1
	};
	ABP_MasterBuilding_C_SetFurniture_Params params;
	params.ID = ID;
	params.RelativeTransform = RelativeTransform;
	params.Actor = Actor;
	params.OverriteSlotsSettings = OverriteSlotsSettings;
	params.HasTable = HasTable;
	params.HasInventoryLimit = HasInventoryLimit;
	params.OverriteOwnership = OverriteOwnership;
	params.Ownership = Ownership;
	params.BlockCustomisation = BlockCustomisation;

	UObject::ProcessEvent(fn, &params);
	if (SlotAvailable != nullptr)
		*SlotAvailable = params.SlotAvailable;
	if (ActorSpawned != nullptr)
		*ActorSpawned = params.ActorSpawned;
	if (OnlyTransformUpdated != nullptr)
		*OnlyTransformUpdated = params.OnlyTransformUpdated;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateStairs
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateStairs() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateStairs");

	struct ABP_MasterBuilding_C_UpdateStairs_Params {
	};
	ABP_MasterBuilding_C_UpdateStairs_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetLoadedModuleData
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Module	Type: class ABP_MasterBuildModule_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Data	Type: struct FST_SAVE_Modules	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetLoadedModuleData(class ABP_MasterBuildModule_C* Module, struct FST_SAVE_Modules Data) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetLoadedModuleData");

	struct ABP_MasterBuilding_C_SetLoadedModuleData_Params {
		class ABP_MasterBuildModule_C* Module;			//Offset: 0 | ElementSize: 8
		struct FST_SAVE_Modules Data;			//Offset: 8 | ElementSize: 88
	};
	ABP_MasterBuilding_C_SetLoadedModuleData_Params params;
	params.Module = Module;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.IsChestEmpty
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: IsEmpty	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::IsChestEmpty(bool* IsEmpty) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsChestEmpty");

	struct ABP_MasterBuilding_C_IsChestEmpty_Params {
		bool IsEmpty;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_IsChestEmpty_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetChestLimit
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Limit	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetChestLimit(float* Limit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetChestLimit");

	struct ABP_MasterBuilding_C_GetChestLimit_Params {
		float Limit;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetChestLimit_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Limit != nullptr)
		*Limit = params.Limit;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateModuleNames
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateModuleNames() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateModuleNames");

	struct ABP_MasterBuilding_C_UpdateModuleNames_Params {
	};
	ABP_MasterBuilding_C_UpdateModuleNames_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateNumberOfDecorations
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateNumberOfDecorations() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateNumberOfDecorations");

	struct ABP_MasterBuilding_C_UpdateNumberOfDecorations_Params {
	};
	ABP_MasterBuilding_C_UpdateNumberOfDecorations_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetAudioInside
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: bInside	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Walls_Wind	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Roofs_Rain	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetAudioInside(bool bInside, float Walls_Wind, float Roofs_Rain) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetAudioInside");

	struct ABP_MasterBuilding_C_SetAudioInside_Params {
		bool bInside;			//Offset: 0 | ElementSize: 1
		float Walls_Wind;			//Offset: 4 | ElementSize: 4
		float Roofs_Rain;			//Offset: 8 | ElementSize: 4
	};
	ABP_MasterBuilding_C_SetAudioInside_Params params;
	params.bInside = bInside;
	params.Walls_Wind = Walls_Wind;
	params.Roofs_Rain = Roofs_Rain;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.PlaySoundAtLocation_BlockingLoad
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: TAssetPtr<class USoundBase>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::PlaySoundAtLocation_BlockingLoad(TAssetPtr<class USoundBase> Sound, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.PlaySoundAtLocation_BlockingLoad");

	struct ABP_MasterBuilding_C_PlaySoundAtLocation_BlockingLoad_Params {
		TAssetPtr<class USoundBase> Sound;			//Offset: 0 | ElementSize: 40
		struct FVector Location;			//Offset: 40 | ElementSize: 12
	};
	ABP_MasterBuilding_C_PlaySoundAtLocation_BlockingLoad_Params params;
	params.Sound = Sound;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_FrameConstructed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_FrameConstructed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_FrameConstructed");

	struct ABP_MasterBuilding_C_OnRep_FrameConstructed_Params {
	};
	ABP_MasterBuilding_C_OnRep_FrameConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_BaseConstructed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_BaseConstructed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_BaseConstructed");

	struct ABP_MasterBuilding_C_OnRep_BaseConstructed_Params {
	};
	ABP_MasterBuilding_C_OnRep_BaseConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_NumberOfConstructedModules
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_NumberOfConstructedModules() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_NumberOfConstructedModules");

	struct ABP_MasterBuilding_C_OnRep_NumberOfConstructedModules_Params {
	};
	ABP_MasterBuilding_C_OnRep_NumberOfConstructedModules_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_CurrentBuildingLevel
// Flags: HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_CurrentBuildingLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_CurrentBuildingLevel");

	struct ABP_MasterBuilding_C_OnRep_CurrentBuildingLevel_Params {
	};
	ABP_MasterBuilding_C_OnRep_CurrentBuildingLevel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.FixPreset
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::FixPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FixPreset");

	struct ABP_MasterBuilding_C_FixPreset_Params {
	};
	ABP_MasterBuilding_C_FixPreset_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_ShopType
// Flags: HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_ShopType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_ShopType");

	struct ABP_MasterBuilding_C_OnRep_ShopType_Params {
	};
	ABP_MasterBuilding_C_OnRep_ShopType_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateShopTypeClient
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UpdateShopTypeClient() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateShopTypeClient");

	struct ABP_MasterBuilding_C_UpdateShopTypeClient_Params {
	};
	ABP_MasterBuilding_C_UpdateShopTypeClient_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_People
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_People() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_People");

	struct ABP_MasterBuilding_C_OnRep_People_Params {
	};
	ABP_MasterBuilding_C_OnRep_People_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_ListOfAnimals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_ListOfAnimals() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_ListOfAnimals");

	struct ABP_MasterBuilding_C_OnRep_ListOfAnimals_Params {
	};
	ABP_MasterBuilding_C_OnRep_ListOfAnimals_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_AdditionalPeople
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_AdditionalPeople() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_AdditionalPeople");

	struct ABP_MasterBuilding_C_OnRep_AdditionalPeople_Params {
	};
	ABP_MasterBuilding_C_OnRep_AdditionalPeople_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_BuildingConstructed
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_BuildingConstructed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_BuildingConstructed");

	struct ABP_MasterBuilding_C_OnRep_BuildingConstructed_Params {
	};
	ABP_MasterBuilding_C_OnRep_BuildingConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.IsAnyInteractedPlayer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Valid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::IsAnyInteractedPlayer(bool* Valid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.IsAnyInteractedPlayer");

	struct ABP_MasterBuilding_C_IsAnyInteractedPlayer_Params {
		bool Valid;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_IsAnyInteractedPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Valid != nullptr)
		*Valid = params.Valid;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_SeasonalManagement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OnRep_SeasonalManagement() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OnRep_SeasonalManagement");

	struct ABP_MasterBuilding_C_OnRep_SeasonalManagement_Params {
	};
	ABP_MasterBuilding_C_OnRep_SeasonalManagement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetAvailablePeopleSlots
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_MasterBuilding_C::GetAvailablePeopleSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetAvailablePeopleSlots");

	struct ABP_MasterBuilding_C_GetAvailablePeopleSlots_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetAvailablePeopleSlots_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetBuildingType	Type: TEnumAsByte<E_Buildings>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetBuildingType(TEnumAsByte<E_Buildings>* GetBuildingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingType");

	struct ABP_MasterBuilding_C_GetBuildingType_Params {
		TEnumAsByte<E_Buildings> GetBuildingType;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_GetBuildingType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetBuildingType != nullptr)
		*GetBuildingType = params.GetBuildingType;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetEntrances
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Entrances	Type: TArray<struct FVector>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetEntrances(TArray<struct FVector>* Entrances) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetEntrances");

	struct ABP_MasterBuilding_C_GetEntrances_Params {
		TArray<struct FVector> Entrances;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetEntrances_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Entrances != nullptr)
		*Entrances = params.Entrances;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingReference_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: MasterBuilding	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetBuildingReference_BPI(class AActor** MasterBuilding) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingReference_BPI");

	struct ABP_MasterBuilding_C_GetBuildingReference_BPI_Params {
		class AActor* MasterBuilding;			//Offset: 0 | ElementSize: 8
	};
	ABP_MasterBuilding_C_GetBuildingReference_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MasterBuilding != nullptr)
		*MasterBuilding = params.MasterBuilding;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: HaveStartPoint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::UnoccupyWorkSlot(int32_t WorkSlotIndex, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlot");

	struct ABP_MasterBuilding_C_UnoccupyWorkSlot_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
		struct FTransform SlotTransform;			//Offset: 16 | ElementSize: 48
		bool HaveStartPoint;			//Offset: 64 | ElementSize: 1
		struct FTransform StartPoint;			//Offset: 80 | ElementSize: 48
	};
	ABP_MasterBuilding_C_UnoccupyWorkSlot_Params params;
	params.WorkSlotIndex = WorkSlotIndex;

	UObject::ProcessEvent(fn, &params);
	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckTool
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolActivity	Type: TEnumAsByte<E_Tools_Activity>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ToolForAnimation	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HoldableClass	Type: TAssetPtr<class UClass>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckTool(TEnumAsByte<E_Tools_Activity> ToolActivity, float Value, bool* Success, TEnumAsByte<E_Tools>* ToolForAnimation, TAssetPtr<class UClass>* HoldableClass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckTool");

	struct ABP_MasterBuilding_C_CheckTool_Params {
		TEnumAsByte<E_Tools_Activity> ToolActivity;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		bool Success;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Tools> ToolForAnimation;			//Offset: 9 | ElementSize: 1
		TAssetPtr<class UClass> HoldableClass;			//Offset: 16 | ElementSize: 40
	};
	ABP_MasterBuilding_C_CheckTool_Params params;
	params.ToolActivity = ToolActivity;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (ToolForAnimation != nullptr)
		*ToolForAnimation = params.ToolForAnimation;
	if (HoldableClass != nullptr)
		*HoldableClass = params.HoldableClass;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFoliageTargetsData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FoliageTargetsData	Type: TArray<struct FST_FoliageTargetsData>	Flags: Parm, OutParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetFoliageTargetsData(TArray<struct FST_FoliageTargetsData>* FoliageTargetsData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFoliageTargetsData");

	struct ABP_MasterBuilding_C_GetFoliageTargetsData_Params {
		TArray<struct FST_FoliageTargetsData> FoliageTargetsData;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetFoliageTargetsData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FoliageTargetsData != nullptr)
		*FoliageTargetsData = params.FoliageTargetsData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckWorkIntensity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckWorkIntensity(TEnumAsByte<E_Profession> Profession, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckWorkIntensity");

	struct ABP_MasterBuilding_C_CheckWorkIntensity_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckWorkIntensity_Params params;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.FindClosestAnimalFromSpawner
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TArray<TEnumAsByte<E_AnimalType>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Animal	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::FindClosestAnimalFromSpawner(TArray<TEnumAsByte<E_AnimalType>>* AnimalType, bool* Success, class AActor** Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FindClosestAnimalFromSpawner");

	struct ABP_MasterBuilding_C_FindClosestAnimalFromSpawner_Params {
		TArray<TEnumAsByte<E_AnimalType>> AnimalType;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		class AActor* Animal;			//Offset: 24 | ElementSize: 8
	};
	ABP_MasterBuilding_C_FindClosestAnimalFromSpawner_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AnimalType != nullptr)
		*AnimalType = params.AnimalType;
	if (Success != nullptr)
		*Success = params.Success;
	if (Animal != nullptr)
		*Animal = params.Animal;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsBuildingConstructed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsConstructed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIsBuildingConstructed(bool* IsConstructed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsBuildingConstructed");

	struct ABP_MasterBuilding_C_CheckIsBuildingConstructed_Params {
		bool IsConstructed;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIsBuildingConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsConstructed != nullptr)
		*IsConstructed = params.IsConstructed;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurnitures_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Furnitures	Type: TArray<class AActor*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetFurnitures_BPI(TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class AActor*>* Furnitures) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurnitures_BPI");

	struct ABP_MasterBuilding_C_GetFurnitures_BPI_Params {
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
		TArray<class AActor*> Furnitures;			//Offset: 8 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetFurnitures_BPI_Params params;
	params.FurnitureCategory = FurnitureCategory;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Furnitures != nullptr)
		*Furnitures = params.Furnitures;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomFishPointNear
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FishPoint	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetRandomFishPointNear(bool* Success, class AActor** FishPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomFishPointNear");

	struct ABP_MasterBuilding_C_GetRandomFishPointNear_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		class AActor* FishPoint;			//Offset: 8 | ElementSize: 8
	};
	ABP_MasterBuilding_C_GetRandomFishPointNear_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (FishPoint != nullptr)
		*FishPoint = params.FishPoint;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckItemInChest
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RemoveItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckItemInChest(bool RemoveItem, struct FName ItemName, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckItemInChest");

	struct ABP_MasterBuilding_C_CheckItemInChest_Params {
		bool RemoveItem;			//Offset: 0 | ElementSize: 1
		struct FName ItemName;			//Offset: 4 | ElementSize: 8
		bool Success;			//Offset: 12 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckItemInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.ItemName = ItemName;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.FindRandomHusbandryAnimal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::FindRandomHusbandryAnimal(bool* Success, struct FVector* Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.FindRandomHusbandryAnimal");

	struct ABP_MasterBuilding_C_FindRandomHusbandryAnimal_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
	};
	ABP_MasterBuilding_C_FindRandomHusbandryAnimal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Destination != nullptr)
		*Destination = params.Destination;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTeleportPointLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTeleportPointLocation(struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTeleportPointLocation");

	struct ABP_MasterBuilding_C_GetTeleportPointLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	ABP_MasterBuilding_C_GetTeleportPointLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomUnoccupiedWorkSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SlotType	Type: TEnumAsByte<E_BuildingSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkSlotIndexToIgnore	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: actorToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetRandomUnoccupiedWorkSlot(TEnumAsByte<E_BuildingSlotType> SlotType, int32_t WorkSlotIndexToIgnore, class AActor* actorToIgnore, int32_t* WorkSlotIndex, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomUnoccupiedWorkSlot");

	struct ABP_MasterBuilding_C_GetRandomUnoccupiedWorkSlot_Params {
		TEnumAsByte<E_BuildingSlotType> SlotType;			//Offset: 0 | ElementSize: 1
		int32_t WorkSlotIndexToIgnore;			//Offset: 4 | ElementSize: 4
		class AActor* actorToIgnore;			//Offset: 8 | ElementSize: 8
		int32_t WorkSlotIndex;			//Offset: 16 | ElementSize: 4
		bool Success;			//Offset: 20 | ElementSize: 1
	};
	ABP_MasterBuilding_C_GetRandomUnoccupiedWorkSlot_Params params;
	params.SlotType = SlotType;
	params.WorkSlotIndexToIgnore = WorkSlotIndexToIgnore;
	params.actorToIgnore = actorToIgnore;

	UObject::ProcessEvent(fn, &params);
	if (WorkSlotIndex != nullptr)
		*WorkSlotIndex = params.WorkSlotIndex;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.OccupyWorkSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: HaveStartPoint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartPointTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::OccupyWorkSlot(int32_t WorkSlotIndex, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.OccupyWorkSlot");

	struct ABP_MasterBuilding_C_OccupyWorkSlot_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
		struct FTransform SlotTransform;			//Offset: 16 | ElementSize: 48
		bool HaveStartPoint;			//Offset: 64 | ElementSize: 1
		struct FTransform StartPointTransform;			//Offset: 80 | ElementSize: 48
	};
	ABP_MasterBuilding_C_OccupyWorkSlot_Params params;
	params.WorkSlotIndex = WorkSlotIndex;

	UObject::ProcessEvent(fn, &params);
	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (HaveStartPoint != nullptr)
		*HaveStartPoint = params.HaveStartPoint;
	if (StartPointTransform != nullptr)
		*StartPointTransform = params.StartPointTransform;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsProductionSettings
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIsProductionSettings(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsProductionSettings");

	struct ABP_MasterBuilding_C_CheckIsProductionSettings_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIsProductionSettings_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetWorkSlotWorldTransforms
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SlotTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: StartPointTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetWorkSlotWorldTransforms(int32_t WorkSlotIndex, bool* Success, struct FTransform* SlotTransform, struct FTransform* StartPointTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetWorkSlotWorldTransforms");

	struct ABP_MasterBuilding_C_GetWorkSlotWorldTransforms_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
		bool Success;			//Offset: 4 | ElementSize: 1
		struct FTransform SlotTransform;			//Offset: 16 | ElementSize: 48
		struct FTransform StartPointTransform;			//Offset: 64 | ElementSize: 48
	};
	ABP_MasterBuilding_C_GetWorkSlotWorldTransforms_Params params;
	params.WorkSlotIndex = WorkSlotIndex;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (StartPointTransform != nullptr)
		*StartPointTransform = params.StartPointTransform;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetWorkRadius
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkRadius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetWorkRadius(float* WorkRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetWorkRadius");

	struct ABP_MasterBuilding_C_GetWorkRadius_Params {
		float WorkRadius;			//Offset: 0 | ElementSize: 4
	};
	ABP_MasterBuilding_C_GetWorkRadius_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkRadius != nullptr)
		*WorkRadius = params.WorkRadius;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.SetHousePeopleRelations
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::SetHousePeopleRelations(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.SetHousePeopleRelations");

	struct ABP_MasterBuilding_C_SetHousePeopleRelations_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_SetHousePeopleRelations_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomAnimID_FromWorkSlot
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlotType	Type: TEnumAsByte<E_BuildingSlotType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AnimID	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetRandomAnimID_FromWorkSlot(int32_t WorkSlotIndex, TEnumAsByte<E_BuildingSlotType> SlotType, bool* Success, unsigned char* AnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomAnimID_FromWorkSlot");

	struct ABP_MasterBuilding_C_GetRandomAnimID_FromWorkSlot_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_BuildingSlotType> SlotType;			//Offset: 4 | ElementSize: 1
		bool Success;			//Offset: 5 | ElementSize: 1
		unsigned char AnimID;			//Offset: 6 | ElementSize: 1
	};
	ABP_MasterBuilding_C_GetRandomAnimID_FromWorkSlot_Params params;
	params.WorkSlotIndex = WorkSlotIndex;
	params.SlotType = SlotType;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (AnimID != nullptr)
		*AnimID = params.AnimID;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetSleepSlotWorldTransforms
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SleepSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SlotTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: StartPointTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetSleepSlotWorldTransforms(int32_t SleepSlotIndex, bool* Success, struct FTransform* SlotTransform, struct FTransform* StartPointTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetSleepSlotWorldTransforms");

	struct ABP_MasterBuilding_C_GetSleepSlotWorldTransforms_Params {
		int32_t SleepSlotIndex;			//Offset: 0 | ElementSize: 4
		bool Success;			//Offset: 4 | ElementSize: 1
		struct FTransform SlotTransform;			//Offset: 16 | ElementSize: 48
		struct FTransform StartPointTransform;			//Offset: 64 | ElementSize: 48
	};
	ABP_MasterBuilding_C_GetSleepSlotWorldTransforms_Params params;
	params.SleepSlotIndex = SleepSlotIndex;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (SlotTransform != nullptr)
		*SlotTransform = params.SlotTransform;
	if (StartPointTransform != nullptr)
		*StartPointTransform = params.StartPointTransform;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTeleportPointOffsetedByRightVector
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Offset	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetTeleportPointOffsetedByRightVector(float Offset, struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetTeleportPointOffsetedByRightVector");

	struct ABP_MasterBuilding_C_GetTeleportPointOffsetedByRightVector_Params {
		float Offset;			//Offset: 0 | ElementSize: 4
		struct FVector Location;			//Offset: 4 | ElementSize: 12
	};
	ABP_MasterBuilding_C_GetTeleportPointOffsetedByRightVector_Params params;
	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeInfantsBed
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInfant	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: InBed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::ChangeInfantsBed(bool IsInfant, bool InBed, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeInfantsBed");

	struct ABP_MasterBuilding_C_ChangeInfantsBed_Params {
		bool IsInfant;			//Offset: 0 | ElementSize: 1
		bool InBed;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
	};
	ABP_MasterBuilding_C_ChangeInfantsBed_Params params;
	params.IsInfant = IsInfant;
	params.InBed = InBed;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingIcon_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Icon	Type: TAssetPtr<class UTexture2D>	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetBuildingIcon_BPI(TAssetPtr<class UTexture2D>* Icon) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingIcon_BPI");

	struct ABP_MasterBuilding_C_GetBuildingIcon_BPI_Params {
		TAssetPtr<class UTexture2D> Icon;			//Offset: 0 | ElementSize: 40
	};
	ABP_MasterBuilding_C_GetBuildingIcon_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Icon != nullptr)
		*Icon = params.Icon;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfThereAreWorkingHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckIfThereAreWorkingHours(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfThereAreWorkingHours");

	struct ABP_MasterBuilding_C_CheckIfThereAreWorkingHours_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckIfThereAreWorkingHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDecorationData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DecorationData	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetDecorationData(TArray<struct FName>* DecorationData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetDecorationData");

	struct ABP_MasterBuilding_C_GetDecorationData_Params {
		TArray<struct FName> DecorationData;			//Offset: 0 | ElementSize: 16
	};
	ABP_MasterBuilding_C_GetDecorationData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DecorationData != nullptr)
		*DecorationData = params.DecorationData;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetModuleType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ModuleType	Type: TEnumAsByte<E_ModuleType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetModuleType(TEnumAsByte<E_ModuleType>* ModuleType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetModuleType");

	struct ABP_MasterBuilding_C_GetModuleType_Params {
		TEnumAsByte<E_ModuleType> ModuleType;			//Offset: 0 | ElementSize: 1
	};
	ABP_MasterBuilding_C_GetModuleType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ModuleType != nullptr)
		*ModuleType = params.ModuleType;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingHandlers
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: HandlerToCompare	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: BuildingHandlers	Type: TArray<struct FDataTableRowHandle>	Flags: Parm, OutParm
// Name: Compatibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetBuildingHandlers(struct FDataTableRowHandle HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingHandlers");

	struct ABP_MasterBuilding_C_GetBuildingHandlers_Params {
		struct FDataTableRowHandle HandlerToCompare;			//Offset: 0 | ElementSize: 16
		TArray<struct FDataTableRowHandle> BuildingHandlers;			//Offset: 16 | ElementSize: 16
		bool Compatibility;			//Offset: 32 | ElementSize: 1
	};
	ABP_MasterBuilding_C_GetBuildingHandlers_Params params;
	params.HandlerToCompare = HandlerToCompare;

	UObject::ProcessEvent(fn, &params);
	if (BuildingHandlers != nullptr)
		*BuildingHandlers = params.BuildingHandlers;
	if (Compatibility != nullptr)
		*Compatibility = params.Compatibility;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.GetSocketLocation
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Transform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::GetSocketLocation(struct FTransform* Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.GetSocketLocation");

	struct ABP_MasterBuilding_C_GetSocketLocation_Params {
		struct FTransform Transform;			//Offset: 0 | ElementSize: 48
	};
	ABP_MasterBuilding_C_GetSocketLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Transform != nullptr)
		*Transform = params.Transform;
}

/////////////////////////////////////////////
// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketCompatibility
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingHandler	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterBuilding_C::CheckSocketCompatibility(struct FDataTableRowHandle BuildingHandler, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketCompatibility");

	struct ABP_MasterBuilding_C_CheckSocketCompatibility_Params {
		struct FDataTableRowHandle BuildingHandler;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_MasterBuilding_C_CheckSocketCompatibility_Params params;
	params.BuildingHandler = BuildingHandler;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

#pragma endregion
}