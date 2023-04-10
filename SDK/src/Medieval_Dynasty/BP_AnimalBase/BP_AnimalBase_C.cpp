#include "../SDK.h"
#include "BP_AnimalBase_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_AnimalBase_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 1408);
}
struct FPointerToUberGraphFrame* ABP_AnimalBase_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 1408);
}
void ABP_AnimalBase_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of PushDetector
// Declaration: class UBoxComponent* PushDetector
class UBoxComponent* ABP_AnimalBase_C::M_GetPushDetector() const {
	return Read<class UBoxComponent*>((byte*)this + 1416);
}
class UBoxComponent** ABP_AnimalBase_C::M_PtrGetPushDetector() {
	return reinterpret_cast<class UBoxComponent**>((byte*)this + 1416);
}
void ABP_AnimalBase_C::M_SetPushDetector(const class UBoxComponent*& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of BP_AnimalRelationsComponent
// Declaration: class UBP_AnimalRelationsComponent_C* BP_AnimalRelationsComponent
class UBP_AnimalRelationsComponent_C* ABP_AnimalBase_C::M_GetBP_AnimalRelationsComponent() const {
	return Read<class UBP_AnimalRelationsComponent_C*>((byte*)this + 1424);
}
class UBP_AnimalRelationsComponent_C** ABP_AnimalBase_C::M_PtrGetBP_AnimalRelationsComponent() {
	return reinterpret_cast<class UBP_AnimalRelationsComponent_C**>((byte*)this + 1424);
}
void ABP_AnimalBase_C::M_SetBP_AnimalRelationsComponent(const class UBP_AnimalRelationsComponent_C*& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of BP_AnimalStatsComponent
// Declaration: class UBP_AnimalStatsComponent_C* BP_AnimalStatsComponent
class UBP_AnimalStatsComponent_C* ABP_AnimalBase_C::M_GetBP_AnimalStatsComponent() const {
	return Read<class UBP_AnimalStatsComponent_C*>((byte*)this + 1432);
}
class UBP_AnimalStatsComponent_C** ABP_AnimalBase_C::M_PtrGetBP_AnimalStatsComponent() {
	return reinterpret_cast<class UBP_AnimalStatsComponent_C**>((byte*)this + 1432);
}
void ABP_AnimalBase_C::M_SetBP_AnimalStatsComponent(const class UBP_AnimalStatsComponent_C*& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of BP_BoostComponent
// Declaration: class UBP_BoostComponent_C* BP_BoostComponent
class UBP_BoostComponent_C* ABP_AnimalBase_C::M_GetBP_BoostComponent() const {
	return Read<class UBP_BoostComponent_C*>((byte*)this + 1440);
}
class UBP_BoostComponent_C** ABP_AnimalBase_C::M_PtrGetBP_BoostComponent() {
	return reinterpret_cast<class UBP_BoostComponent_C**>((byte*)this + 1440);
}
void ABP_AnimalBase_C::M_SetBP_BoostComponent(const class UBP_BoostComponent_C*& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of BP_AquaticBoyuancy
// Declaration: class UBP_AquaticBuoyancy_C* BP_AquaticBoyuancy
class UBP_AquaticBuoyancy_C* ABP_AnimalBase_C::M_GetBP_AquaticBoyuancy() const {
	return Read<class UBP_AquaticBuoyancy_C*>((byte*)this + 1448);
}
class UBP_AquaticBuoyancy_C** ABP_AnimalBase_C::M_PtrGetBP_AquaticBoyuancy() {
	return reinterpret_cast<class UBP_AquaticBuoyancy_C**>((byte*)this + 1448);
}
void ABP_AnimalBase_C::M_SetBP_AquaticBoyuancy(const class UBP_AquaticBuoyancy_C*& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of Engaged
// Declaration: bool Engaged
bool ABP_AnimalBase_C::M_GetEngaged() const {
	return Read<bool>((byte*)this + 1456);
}
bool* ABP_AnimalBase_C::M_PtrGetEngaged() {
	return reinterpret_cast<bool*>((byte*)this + 1456);
}
void ABP_AnimalBase_C::M_SetEngaged(const bool& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_AnimalBase_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 1464);
}
class ABP_SystemsManager_C** ABP_AnimalBase_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 1464);
}
void ABP_AnimalBase_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of AnimalHandler
// Declaration: struct FDataTableRowHandle AnimalHandler
struct FDataTableRowHandle ABP_AnimalBase_C::M_GetAnimalHandler() const {
	return Read<struct FDataTableRowHandle>((byte*)this + 1472);
}
struct FDataTableRowHandle* ABP_AnimalBase_C::M_PtrGetAnimalHandler() {
	return reinterpret_cast<struct FDataTableRowHandle*>((byte*)this + 1472);
}
void ABP_AnimalBase_C::M_SetAnimalHandler(const struct FDataTableRowHandle& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of Ownership
// Declaration: TEnumAsByte<E_Ownership> Ownership
TEnumAsByte<E_Ownership> ABP_AnimalBase_C::M_GetOwnership() const {
	return Read<TEnumAsByte<E_Ownership>>((byte*)this + 1488);
}
TEnumAsByte<E_Ownership>* ABP_AnimalBase_C::M_PtrGetOwnership() {
	return reinterpret_cast<TEnumAsByte<E_Ownership>*>((byte*)this + 1488);
}
void ABP_AnimalBase_C::M_SetOwnership(const TEnumAsByte<E_Ownership>& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of ActorTags
// Declaration: TArray<struct FName> ActorTags
TArray<struct FName> ABP_AnimalBase_C::M_GetActorTags() const {
	return Read<TArray<struct FName>>((byte*)this + 1496);
}
TArray<struct FName>* ABP_AnimalBase_C::M_PtrGetActorTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1496);
}
void ABP_AnimalBase_C::M_SetActorTags(const TArray<struct FName>& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of Awake
// Declaration: bool Awake
bool ABP_AnimalBase_C::M_GetAwake() const {
	return Read<bool>((byte*)this + 1512);
}
bool* ABP_AnimalBase_C::M_PtrGetAwake() {
	return reinterpret_cast<bool*>((byte*)this + 1512);
}
void ABP_AnimalBase_C::M_SetAwake(const bool& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of AllowDamage
// Declaration: bool AllowDamage
bool ABP_AnimalBase_C::M_GetAllowDamage() const {
	return Read<bool>((byte*)this + 1513);
}
bool* ABP_AnimalBase_C::M_PtrGetAllowDamage() {
	return reinterpret_cast<bool*>((byte*)this + 1513);
}
void ABP_AnimalBase_C::M_SetAllowDamage(const bool& value) {
	Write((byte*)this + 1513, value);
}
// Member Getter and Setter of DamageCauser
// Declaration: class AActor* DamageCauser
class AActor* ABP_AnimalBase_C::M_GetDamageCauser() const {
	return Read<class AActor*>((byte*)this + 1520);
}
class AActor** ABP_AnimalBase_C::M_PtrGetDamageCauser() {
	return reinterpret_cast<class AActor**>((byte*)this + 1520);
}
void ABP_AnimalBase_C::M_SetDamageCauser(const class AActor*& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of AnimalDamage
// Declaration: float AnimalDamage
float ABP_AnimalBase_C::M_GetAnimalDamage() const {
	return Read<float>((byte*)this + 1528);
}
float* ABP_AnimalBase_C::M_PtrGetAnimalDamage() {
	return reinterpret_cast<float*>((byte*)this + 1528);
}
void ABP_AnimalBase_C::M_SetAnimalDamage(const float& value) {
	Write((byte*)this + 1528, value);
}
// Member Getter and Setter of Attacking
// Declaration: bool Attacking
bool ABP_AnimalBase_C::M_GetAttacking() const {
	return Read<bool>((byte*)this + 1532);
}
bool* ABP_AnimalBase_C::M_PtrGetAttacking() {
	return reinterpret_cast<bool*>((byte*)this + 1532);
}
void ABP_AnimalBase_C::M_SetAttacking(const bool& value) {
	Write((byte*)this + 1532, value);
}
// Member Getter and Setter of CanTakeDamage
// Declaration: bool CanTakeDamage
bool ABP_AnimalBase_C::M_GetCanTakeDamage() const {
	return Read<bool>((byte*)this + 1533);
}
bool* ABP_AnimalBase_C::M_PtrGetCanTakeDamage() {
	return reinterpret_cast<bool*>((byte*)this + 1533);
}
void ABP_AnimalBase_C::M_SetCanTakeDamage(const bool& value) {
	Write((byte*)this + 1533, value);
}
// Member Getter and Setter of Breeding
// Declaration: bool Breeding
bool ABP_AnimalBase_C::M_GetBreeding() const {
	return Read<bool>((byte*)this + 1534);
}
bool* ABP_AnimalBase_C::M_PtrGetBreeding() {
	return reinterpret_cast<bool*>((byte*)this + 1534);
}
void ABP_AnimalBase_C::M_SetBreeding(const bool& value) {
	Write((byte*)this + 1534, value);
}
// Member Getter and Setter of DamageAmount
// Declaration: float DamageAmount
float ABP_AnimalBase_C::M_GetDamageAmount() const {
	return Read<float>((byte*)this + 1536);
}
float* ABP_AnimalBase_C::M_PtrGetDamageAmount() {
	return reinterpret_cast<float*>((byte*)this + 1536);
}
void ABP_AnimalBase_C::M_SetDamageAmount(const float& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of InteractableLife
// Declaration: bool InteractableLife
bool ABP_AnimalBase_C::M_GetInteractableLife() const {
	return Read<bool>((byte*)this + 1540);
}
bool* ABP_AnimalBase_C::M_PtrGetInteractableLife() {
	return reinterpret_cast<bool*>((byte*)this + 1540);
}
void ABP_AnimalBase_C::M_SetInteractableLife(const bool& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of InteractActionLifeText
// Declaration: struct FText InteractActionLifeText
struct FText ABP_AnimalBase_C::M_GetInteractActionLifeText() const {
	return Read<struct FText>((byte*)this + 1544);
}
struct FText* ABP_AnimalBase_C::M_PtrGetInteractActionLifeText() {
	return reinterpret_cast<struct FText*>((byte*)this + 1544);
}
void ABP_AnimalBase_C::M_SetInteractActionLifeText(const struct FText& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of InteractableDead
// Declaration: bool InteractableDead
bool ABP_AnimalBase_C::M_GetInteractableDead() const {
	return Read<bool>((byte*)this + 1568);
}
bool* ABP_AnimalBase_C::M_PtrGetInteractableDead() {
	return reinterpret_cast<bool*>((byte*)this + 1568);
}
void ABP_AnimalBase_C::M_SetInteractableDead(const bool& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of InteractActionDeadText
// Declaration: struct FText InteractActionDeadText
struct FText ABP_AnimalBase_C::M_GetInteractActionDeadText() const {
	return Read<struct FText>((byte*)this + 1576);
}
struct FText* ABP_AnimalBase_C::M_PtrGetInteractActionDeadText() {
	return reinterpret_cast<struct FText*>((byte*)this + 1576);
}
void ABP_AnimalBase_C::M_SetInteractActionDeadText(const struct FText& value) {
	Write((byte*)this + 1576, value);
}
// Member Getter and Setter of InteractAnimationMontageLife
// Declaration: class UAnimMontage* InteractAnimationMontageLife
class UAnimMontage* ABP_AnimalBase_C::M_GetInteractAnimationMontageLife() const {
	return Read<class UAnimMontage*>((byte*)this + 1600);
}
class UAnimMontage** ABP_AnimalBase_C::M_PtrGetInteractAnimationMontageLife() {
	return reinterpret_cast<class UAnimMontage**>((byte*)this + 1600);
}
void ABP_AnimalBase_C::M_SetInteractAnimationMontageLife(const class UAnimMontage*& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of InteractAnimationMontageDead
// Declaration: class UAnimMontage* InteractAnimationMontageDead
class UAnimMontage* ABP_AnimalBase_C::M_GetInteractAnimationMontageDead() const {
	return Read<class UAnimMontage*>((byte*)this + 1608);
}
class UAnimMontage** ABP_AnimalBase_C::M_PtrGetInteractAnimationMontageDead() {
	return reinterpret_cast<class UAnimMontage**>((byte*)this + 1608);
}
void ABP_AnimalBase_C::M_SetInteractAnimationMontageDead(const class UAnimMontage*& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of ViewmodeInteractionMontages
// Declaration: TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages> ViewmodeInteractionMontages
TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages> ABP_AnimalBase_C::M_GetViewmodeInteractionMontages() const {
	return Read<TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>>((byte*)this + 1616);
}
TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>* ABP_AnimalBase_C::M_PtrGetViewmodeInteractionMontages() {
	return reinterpret_cast<TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>*>((byte*)this + 1616);
}
void ABP_AnimalBase_C::M_SetViewmodeInteractionMontages(const TMap<TEnumAsByte<E_ViewMode>, struct FST_InteractionMontages>& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of UseInteractTimeLife
// Declaration: bool UseInteractTimeLife
bool ABP_AnimalBase_C::M_GetUseInteractTimeLife() const {
	return Read<bool>((byte*)this + 1696);
}
bool* ABP_AnimalBase_C::M_PtrGetUseInteractTimeLife() {
	return reinterpret_cast<bool*>((byte*)this + 1696);
}
void ABP_AnimalBase_C::M_SetUseInteractTimeLife(const bool& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of TimingTimeLife
// Declaration: float TimingTimeLife
float ABP_AnimalBase_C::M_GetTimingTimeLife() const {
	return Read<float>((byte*)this + 1700);
}
float* ABP_AnimalBase_C::M_PtrGetTimingTimeLife() {
	return reinterpret_cast<float*>((byte*)this + 1700);
}
void ABP_AnimalBase_C::M_SetTimingTimeLife(const float& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of UseInteractTimeDead
// Declaration: bool UseInteractTimeDead
bool ABP_AnimalBase_C::M_GetUseInteractTimeDead() const {
	return Read<bool>((byte*)this + 1704);
}
bool* ABP_AnimalBase_C::M_PtrGetUseInteractTimeDead() {
	return reinterpret_cast<bool*>((byte*)this + 1704);
}
void ABP_AnimalBase_C::M_SetUseInteractTimeDead(const bool& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of TimingTimeDead
// Declaration: float TimingTimeDead
float ABP_AnimalBase_C::M_GetTimingTimeDead() const {
	return Read<float>((byte*)this + 1708);
}
float* ABP_AnimalBase_C::M_PtrGetTimingTimeDead() {
	return reinterpret_cast<float*>((byte*)this + 1708);
}
void ABP_AnimalBase_C::M_SetTimingTimeDead(const float& value) {
	Write((byte*)this + 1708, value);
}
// Member Getter and Setter of CheckToolInInventoryLife
// Declaration: bool CheckToolInInventoryLife
bool ABP_AnimalBase_C::M_GetCheckToolInInventoryLife() const {
	return Read<bool>((byte*)this + 1712);
}
bool* ABP_AnimalBase_C::M_PtrGetCheckToolInInventoryLife() {
	return reinterpret_cast<bool*>((byte*)this + 1712);
}
void ABP_AnimalBase_C::M_SetCheckToolInInventoryLife(const bool& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of InteractToolTypeLife
// Declaration: TEnumAsByte<E_Tools> InteractToolTypeLife
TEnumAsByte<E_Tools> ABP_AnimalBase_C::M_GetInteractToolTypeLife() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 1713);
}
TEnumAsByte<E_Tools>* ABP_AnimalBase_C::M_PtrGetInteractToolTypeLife() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 1713);
}
void ABP_AnimalBase_C::M_SetInteractToolTypeLife(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 1713, value);
}
// Member Getter and Setter of SpawnLocation
// Declaration: class ABP_SpawnPointWildAnimal_C* SpawnLocation
class ABP_SpawnPointWildAnimal_C* ABP_AnimalBase_C::M_GetSpawnLocation() const {
	return Read<class ABP_SpawnPointWildAnimal_C*>((byte*)this + 1720);
}
class ABP_SpawnPointWildAnimal_C** ABP_AnimalBase_C::M_PtrGetSpawnLocation() {
	return reinterpret_cast<class ABP_SpawnPointWildAnimal_C**>((byte*)this + 1720);
}
void ABP_AnimalBase_C::M_SetSpawnLocation(const class ABP_SpawnPointWildAnimal_C*& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of CheckToolInInventoryDead
// Declaration: bool CheckToolInInventoryDead
bool ABP_AnimalBase_C::M_GetCheckToolInInventoryDead() const {
	return Read<bool>((byte*)this + 1728);
}
bool* ABP_AnimalBase_C::M_PtrGetCheckToolInInventoryDead() {
	return reinterpret_cast<bool*>((byte*)this + 1728);
}
void ABP_AnimalBase_C::M_SetCheckToolInInventoryDead(const bool& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of InteractToolTypeDead
// Declaration: TEnumAsByte<E_Tools> InteractToolTypeDead
TEnumAsByte<E_Tools> ABP_AnimalBase_C::M_GetInteractToolTypeDead() const {
	return Read<TEnumAsByte<E_Tools>>((byte*)this + 1729);
}
TEnumAsByte<E_Tools>* ABP_AnimalBase_C::M_PtrGetInteractToolTypeDead() {
	return reinterpret_cast<TEnumAsByte<E_Tools>*>((byte*)this + 1729);
}
void ABP_AnimalBase_C::M_SetInteractToolTypeDead(const TEnumAsByte<E_Tools>& value) {
	Write((byte*)this + 1729, value);
}
// Member Getter and Setter of SpawnDead
// Declaration: bool SpawnDead
bool ABP_AnimalBase_C::M_GetSpawnDead() const {
	return Read<bool>((byte*)this + 1730);
}
bool* ABP_AnimalBase_C::M_PtrGetSpawnDead() {
	return reinterpret_cast<bool*>((byte*)this + 1730);
}
void ABP_AnimalBase_C::M_SetSpawnDead(const bool& value) {
	Write((byte*)this + 1730, value);
}
// Member Getter and Setter of SkillForKillValue
// Declaration: float SkillForKillValue
float ABP_AnimalBase_C::M_GetSkillForKillValue() const {
	return Read<float>((byte*)this + 1732);
}
float* ABP_AnimalBase_C::M_PtrGetSkillForKillValue() {
	return reinterpret_cast<float*>((byte*)this + 1732);
}
void ABP_AnimalBase_C::M_SetSkillForKillValue(const float& value) {
	Write((byte*)this + 1732, value);
}
// Member Getter and Setter of SkillForSkinningValue
// Declaration: float SkillForSkinningValue
float ABP_AnimalBase_C::M_GetSkillForSkinningValue() const {
	return Read<float>((byte*)this + 1736);
}
float* ABP_AnimalBase_C::M_PtrGetSkillForSkinningValue() {
	return reinterpret_cast<float*>((byte*)this + 1736);
}
void ABP_AnimalBase_C::M_SetSkillForSkinningValue(const float& value) {
	Write((byte*)this + 1736, value);
}
// Member Getter and Setter of SkillForHusbandryValue
// Declaration: float SkillForHusbandryValue
float ABP_AnimalBase_C::M_GetSkillForHusbandryValue() const {
	return Read<float>((byte*)this + 1740);
}
float* ABP_AnimalBase_C::M_PtrGetSkillForHusbandryValue() {
	return reinterpret_cast<float*>((byte*)this + 1740);
}
void ABP_AnimalBase_C::M_SetSkillForHusbandryValue(const float& value) {
	Write((byte*)this + 1740, value);
}
// Member Getter and Setter of InteractedCharacter
// Declaration: class ABP_BaseCharacter_C* InteractedCharacter
class ABP_BaseCharacter_C* ABP_AnimalBase_C::M_GetInteractedCharacter() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 1744);
}
class ABP_BaseCharacter_C** ABP_AnimalBase_C::M_PtrGetInteractedCharacter() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 1744);
}
void ABP_AnimalBase_C::M_SetInteractedCharacter(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 1744, value);
}
// Member Getter and Setter of FearFactor
// Declaration: int32_t FearFactor
int32_t ABP_AnimalBase_C::M_GetFearFactor() const {
	return Read<int32_t>((byte*)this + 1752);
}
int32_t* ABP_AnimalBase_C::M_PtrGetFearFactor() {
	return reinterpret_cast<int32_t*>((byte*)this + 1752);
}
void ABP_AnimalBase_C::M_SetFearFactor(const int32_t& value) {
	Write((byte*)this + 1752, value);
}
// Member Getter and Setter of IsFear
// Declaration: bool IsFear
bool ABP_AnimalBase_C::M_GetIsFear() const {
	return Read<bool>((byte*)this + 1756);
}
bool* ABP_AnimalBase_C::M_PtrGetIsFear() {
	return reinterpret_cast<bool*>((byte*)this + 1756);
}
void ABP_AnimalBase_C::M_SetIsFear(const bool& value) {
	Write((byte*)this + 1756, value);
}
// Member Getter and Setter of FleeingTimer
// Declaration: struct FTimerHandle FleeingTimer
struct FTimerHandle ABP_AnimalBase_C::M_GetFleeingTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1760);
}
struct FTimerHandle* ABP_AnimalBase_C::M_PtrGetFleeingTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1760);
}
void ABP_AnimalBase_C::M_SetFleeingTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of FearFactorIncreaser
// Declaration: int32_t FearFactorIncreaser
int32_t ABP_AnimalBase_C::M_GetFearFactorIncreaser() const {
	return Read<int32_t>((byte*)this + 1768);
}
int32_t* ABP_AnimalBase_C::M_PtrGetFearFactorIncreaser() {
	return reinterpret_cast<int32_t*>((byte*)this + 1768);
}
void ABP_AnimalBase_C::M_SetFearFactorIncreaser(const int32_t& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of SpawnPosition
// Declaration: struct FVector SpawnPosition
struct FVector ABP_AnimalBase_C::M_GetSpawnPosition() const {
	return Read<struct FVector>((byte*)this + 1772);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetSpawnPosition() {
	return reinterpret_cast<struct FVector*>((byte*)this + 1772);
}
void ABP_AnimalBase_C::M_SetSpawnPosition(const struct FVector& value) {
	Write((byte*)this + 1772, value);
}
// Member Getter and Setter of cardinalDirection
// Declaration: TEnumAsByte<E_CardinalDirection> cardinalDirection
TEnumAsByte<E_CardinalDirection> ABP_AnimalBase_C::M_GetcardinalDirection() const {
	return Read<TEnumAsByte<E_CardinalDirection>>((byte*)this + 1784);
}
TEnumAsByte<E_CardinalDirection>* ABP_AnimalBase_C::M_PtrGetcardinalDirection() {
	return reinterpret_cast<TEnumAsByte<E_CardinalDirection>*>((byte*)this + 1784);
}
void ABP_AnimalBase_C::M_SetcardinalDirection(const TEnumAsByte<E_CardinalDirection>& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of GaitType
// Declaration: TEnumAsByte<E_Gait> GaitType
TEnumAsByte<E_Gait> ABP_AnimalBase_C::M_GetGaitType() const {
	return Read<TEnumAsByte<E_Gait>>((byte*)this + 1785);
}
TEnumAsByte<E_Gait>* ABP_AnimalBase_C::M_PtrGetGaitType() {
	return reinterpret_cast<TEnumAsByte<E_Gait>*>((byte*)this + 1785);
}
void ABP_AnimalBase_C::M_SetGaitType(const TEnumAsByte<E_Gait>& value) {
	Write((byte*)this + 1785, value);
}
// Member Getter and Setter of RotationOffset
// Declaration: float RotationOffset
float ABP_AnimalBase_C::M_GetRotationOffset() const {
	return Read<float>((byte*)this + 1788);
}
float* ABP_AnimalBase_C::M_PtrGetRotationOffset() {
	return reinterpret_cast<float*>((byte*)this + 1788);
}
void ABP_AnimalBase_C::M_SetRotationOffset(const float& value) {
	Write((byte*)this + 1788, value);
}
// Member Getter and Setter of Target_CharacterRotationDifference
// Declaration: float Target_CharacterRotationDifference
float ABP_AnimalBase_C::M_GetTarget_CharacterRotationDifference() const {
	return Read<float>((byte*)this + 1792);
}
float* ABP_AnimalBase_C::M_PtrGetTarget_CharacterRotationDifference() {
	return reinterpret_cast<float*>((byte*)this + 1792);
}
void ABP_AnimalBase_C::M_SetTarget_CharacterRotationDifference(const float& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of BleedTimerHandle
// Declaration: struct FTimerHandle BleedTimerHandle
struct FTimerHandle ABP_AnimalBase_C::M_GetBleedTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 1800);
}
struct FTimerHandle* ABP_AnimalBase_C::M_PtrGetBleedTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1800);
}
void ABP_AnimalBase_C::M_SetBleedTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of Technology_ForKill
// Declaration: TEnumAsByte<E_TechnologyTypes> Technology_ForKill
TEnumAsByte<E_TechnologyTypes> ABP_AnimalBase_C::M_GetTechnology_ForKill() const {
	return Read<TEnumAsByte<E_TechnologyTypes>>((byte*)this + 1808);
}
TEnumAsByte<E_TechnologyTypes>* ABP_AnimalBase_C::M_PtrGetTechnology_ForKill() {
	return reinterpret_cast<TEnumAsByte<E_TechnologyTypes>*>((byte*)this + 1808);
}
void ABP_AnimalBase_C::M_SetTechnology_ForKill(const TEnumAsByte<E_TechnologyTypes>& value) {
	Write((byte*)this + 1808, value);
}
// Member Getter and Setter of ValueTechnology_ForKill
// Declaration: float ValueTechnology_ForKill
float ABP_AnimalBase_C::M_GetValueTechnology_ForKill() const {
	return Read<float>((byte*)this + 1812);
}
float* ABP_AnimalBase_C::M_PtrGetValueTechnology_ForKill() {
	return reinterpret_cast<float*>((byte*)this + 1812);
}
void ABP_AnimalBase_C::M_SetValueTechnology_ForKill(const float& value) {
	Write((byte*)this + 1812, value);
}
// Member Getter and Setter of Technology_ForSkinning
// Declaration: TEnumAsByte<E_TechnologyTypes> Technology_ForSkinning
TEnumAsByte<E_TechnologyTypes> ABP_AnimalBase_C::M_GetTechnology_ForSkinning() const {
	return Read<TEnumAsByte<E_TechnologyTypes>>((byte*)this + 1816);
}
TEnumAsByte<E_TechnologyTypes>* ABP_AnimalBase_C::M_PtrGetTechnology_ForSkinning() {
	return reinterpret_cast<TEnumAsByte<E_TechnologyTypes>*>((byte*)this + 1816);
}
void ABP_AnimalBase_C::M_SetTechnology_ForSkinning(const TEnumAsByte<E_TechnologyTypes>& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of ValueTechnology_ForSkinning
// Declaration: float ValueTechnology_ForSkinning
float ABP_AnimalBase_C::M_GetValueTechnology_ForSkinning() const {
	return Read<float>((byte*)this + 1820);
}
float* ABP_AnimalBase_C::M_PtrGetValueTechnology_ForSkinning() {
	return reinterpret_cast<float*>((byte*)this + 1820);
}
void ABP_AnimalBase_C::M_SetValueTechnology_ForSkinning(const float& value) {
	Write((byte*)this + 1820, value);
}
// Member Getter and Setter of Technology_ForMilkingAndSheering
// Declaration: TEnumAsByte<E_TechnologyTypes> Technology_ForMilkingAndSheering
TEnumAsByte<E_TechnologyTypes> ABP_AnimalBase_C::M_GetTechnology_ForMilkingAndSheering() const {
	return Read<TEnumAsByte<E_TechnologyTypes>>((byte*)this + 1824);
}
TEnumAsByte<E_TechnologyTypes>* ABP_AnimalBase_C::M_PtrGetTechnology_ForMilkingAndSheering() {
	return reinterpret_cast<TEnumAsByte<E_TechnologyTypes>*>((byte*)this + 1824);
}
void ABP_AnimalBase_C::M_SetTechnology_ForMilkingAndSheering(const TEnumAsByte<E_TechnologyTypes>& value) {
	Write((byte*)this + 1824, value);
}
// Member Getter and Setter of ValueTechnology_ForMilkingAndSheering
// Declaration: float ValueTechnology_ForMilkingAndSheering
float ABP_AnimalBase_C::M_GetValueTechnology_ForMilkingAndSheering() const {
	return Read<float>((byte*)this + 1828);
}
float* ABP_AnimalBase_C::M_PtrGetValueTechnology_ForMilkingAndSheering() {
	return reinterpret_cast<float*>((byte*)this + 1828);
}
void ABP_AnimalBase_C::M_SetValueTechnology_ForMilkingAndSheering(const float& value) {
	Write((byte*)this + 1828, value);
}
// Member Getter and Setter of ImpaledItems
// Declaration: TArray<class AActor*> ImpaledItems
TArray<class AActor*> ABP_AnimalBase_C::M_GetImpaledItems() const {
	return Read<TArray<class AActor*>>((byte*)this + 1832);
}
TArray<class AActor*>* ABP_AnimalBase_C::M_PtrGetImpaledItems() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 1832);
}
void ABP_AnimalBase_C::M_SetImpaledItems(const TArray<class AActor*>& value) {
	Write((byte*)this + 1832, value);
}
// Member Getter and Setter of BleedTimerCancel
// Declaration: struct FTimerHandle BleedTimerCancel
struct FTimerHandle ABP_AnimalBase_C::M_GetBleedTimerCancel() const {
	return Read<struct FTimerHandle>((byte*)this + 1848);
}
struct FTimerHandle* ABP_AnimalBase_C::M_PtrGetBleedTimerCancel() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1848);
}
void ABP_AnimalBase_C::M_SetBleedTimerCancel(const struct FTimerHandle& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of BleedDamage
// Declaration: float BleedDamage
float ABP_AnimalBase_C::M_GetBleedDamage() const {
	return Read<float>((byte*)this + 1856);
}
float* ABP_AnimalBase_C::M_PtrGetBleedDamage() {
	return reinterpret_cast<float*>((byte*)this + 1856);
}
void ABP_AnimalBase_C::M_SetBleedDamage(const float& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of StuckCounter
// Declaration: int32_t StuckCounter
int32_t ABP_AnimalBase_C::M_GetStuckCounter() const {
	return Read<int32_t>((byte*)this + 1860);
}
int32_t* ABP_AnimalBase_C::M_PtrGetStuckCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 1860);
}
void ABP_AnimalBase_C::M_SetStuckCounter(const int32_t& value) {
	Write((byte*)this + 1860, value);
}
// Member Getter and Setter of ReputationPunishmentForKill
// Declaration: int32_t ReputationPunishmentForKill
int32_t ABP_AnimalBase_C::M_GetReputationPunishmentForKill() const {
	return Read<int32_t>((byte*)this + 1864);
}
int32_t* ABP_AnimalBase_C::M_PtrGetReputationPunishmentForKill() {
	return reinterpret_cast<int32_t*>((byte*)this + 1864);
}
void ABP_AnimalBase_C::M_SetReputationPunishmentForKill(const int32_t& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of DamageCausers
// Declaration: TMap<class AActor*, struct FST_CauserTimer> DamageCausers
TMap<class AActor*, struct FST_CauserTimer> ABP_AnimalBase_C::M_GetDamageCausers() const {
	return Read<TMap<class AActor*, struct FST_CauserTimer>>((byte*)this + 1872);
}
TMap<class AActor*, struct FST_CauserTimer>* ABP_AnimalBase_C::M_PtrGetDamageCausers() {
	return reinterpret_cast<TMap<class AActor*, struct FST_CauserTimer>*>((byte*)this + 1872);
}
void ABP_AnimalBase_C::M_SetDamageCausers(const TMap<class AActor*, struct FST_CauserTimer>& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of DamageCausersHandle
// Declaration: struct FTimerHandle DamageCausersHandle
struct FTimerHandle ABP_AnimalBase_C::M_GetDamageCausersHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 1952);
}
struct FTimerHandle* ABP_AnimalBase_C::M_PtrGetDamageCausersHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1952);
}
void ABP_AnimalBase_C::M_SetDamageCausersHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 1952, value);
}
// Member Getter and Setter of SpawnedBlood
// Declaration: bool SpawnedBlood
bool ABP_AnimalBase_C::M_GetSpawnedBlood() const {
	return Read<bool>((byte*)this + 1960);
}
bool* ABP_AnimalBase_C::M_PtrGetSpawnedBlood() {
	return reinterpret_cast<bool*>((byte*)this + 1960);
}
void ABP_AnimalBase_C::M_SetSpawnedBlood(const bool& value) {
	Write((byte*)this + 1960, value);
}
// Member Getter and Setter of IKFPSLimit
// Declaration: float IKFPSLimit
float ABP_AnimalBase_C::M_GetIKFPSLimit() const {
	return Read<float>((byte*)this + 1964);
}
float* ABP_AnimalBase_C::M_PtrGetIKFPSLimit() {
	return reinterpret_cast<float*>((byte*)this + 1964);
}
void ABP_AnimalBase_C::M_SetIKFPSLimit(const float& value) {
	Write((byte*)this + 1964, value);
}
// Member Getter and Setter of IKFPSRestore
// Declaration: float IKFPSRestore
float ABP_AnimalBase_C::M_GetIKFPSRestore() const {
	return Read<float>((byte*)this + 1968);
}
float* ABP_AnimalBase_C::M_PtrGetIKFPSRestore() {
	return reinterpret_cast<float*>((byte*)this + 1968);
}
void ABP_AnimalBase_C::M_SetIKFPSRestore(const float& value) {
	Write((byte*)this + 1968, value);
}
// Member Getter and Setter of AdrenalineRush
// Declaration: bool AdrenalineRush
bool ABP_AnimalBase_C::M_GetAdrenalineRush() const {
	return Read<bool>((byte*)this + 1972);
}
bool* ABP_AnimalBase_C::M_PtrGetAdrenalineRush() {
	return reinterpret_cast<bool*>((byte*)this + 1972);
}
void ABP_AnimalBase_C::M_SetAdrenalineRush(const bool& value) {
	Write((byte*)this + 1972, value);
}
// Member Getter and Setter of GameInstanceReference
// Declaration: class UGI_MedievalDynasty_C* GameInstanceReference
class UGI_MedievalDynasty_C* ABP_AnimalBase_C::M_GetGameInstanceReference() const {
	return Read<class UGI_MedievalDynasty_C*>((byte*)this + 1976);
}
class UGI_MedievalDynasty_C** ABP_AnimalBase_C::M_PtrGetGameInstanceReference() {
	return reinterpret_cast<class UGI_MedievalDynasty_C**>((byte*)this + 1976);
}
void ABP_AnimalBase_C::M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value) {
	Write((byte*)this + 1976, value);
}
// Member Getter and Setter of AIControllerRef
// Declaration: class AController* AIControllerRef
class AController* ABP_AnimalBase_C::M_GetAIControllerRef() const {
	return Read<class AController*>((byte*)this + 1984);
}
class AController** ABP_AnimalBase_C::M_PtrGetAIControllerRef() {
	return reinterpret_cast<class AController**>((byte*)this + 1984);
}
void ABP_AnimalBase_C::M_SetAIControllerRef(const class AController*& value) {
	Write((byte*)this + 1984, value);
}
// Member Getter and Setter of AnimalData
// Declaration: struct FST_Animal AnimalData
struct FST_Animal ABP_AnimalBase_C::M_GetAnimalData() const {
	return Read<struct FST_Animal>((byte*)this + 1992);
}
struct FST_Animal* ABP_AnimalBase_C::M_PtrGetAnimalData() {
	return reinterpret_cast<struct FST_Animal*>((byte*)this + 1992);
}
void ABP_AnimalBase_C::M_SetAnimalData(const struct FST_Animal& value) {
	Write((byte*)this + 1992, value);
}
// Member Getter and Setter of Ragdoll
// Declaration: bool Ragdoll
bool ABP_AnimalBase_C::M_GetRagdoll() const {
	return Read<bool>((byte*)this + 2176);
}
bool* ABP_AnimalBase_C::M_PtrGetRagdoll() {
	return reinterpret_cast<bool*>((byte*)this + 2176);
}
void ABP_AnimalBase_C::M_SetRagdoll(const bool& value) {
	Write((byte*)this + 2176, value);
}
// Member Getter and Setter of Dead
// Declaration: bool Dead
bool ABP_AnimalBase_C::M_GetDead() const {
	return Read<bool>((byte*)this + 2177);
}
bool* ABP_AnimalBase_C::M_PtrGetDead() {
	return reinterpret_cast<bool*>((byte*)this + 2177);
}
void ABP_AnimalBase_C::M_SetDead(const bool& value) {
	Write((byte*)this + 2177, value);
}
// Member Getter and Setter of Variation
// Declaration: int32_t Variation
int32_t ABP_AnimalBase_C::M_GetVariation() const {
	return Read<int32_t>((byte*)this + 2180);
}
int32_t* ABP_AnimalBase_C::M_PtrGetVariation() {
	return reinterpret_cast<int32_t*>((byte*)this + 2180);
}
void ABP_AnimalBase_C::M_SetVariation(const int32_t& value) {
	Write((byte*)this + 2180, value);
}
// Member Getter and Setter of FallingTimerHandle
// Declaration: struct FTimerHandle FallingTimerHandle
struct FTimerHandle ABP_AnimalBase_C::M_GetFallingTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 2184);
}
struct FTimerHandle* ABP_AnimalBase_C::M_PtrGetFallingTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2184);
}
void ABP_AnimalBase_C::M_SetFallingTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 2184, value);
}
// Member Getter and Setter of HasLanded
// Declaration: bool HasLanded
bool ABP_AnimalBase_C::M_GetHasLanded() const {
	return Read<bool>((byte*)this + 2192);
}
bool* ABP_AnimalBase_C::M_PtrGetHasLanded() {
	return reinterpret_cast<bool*>((byte*)this + 2192);
}
void ABP_AnimalBase_C::M_SetHasLanded(const bool& value) {
	Write((byte*)this + 2192, value);
}
// Member Getter and Setter of FallZVelocity
// Declaration: float FallZVelocity
float ABP_AnimalBase_C::M_GetFallZVelocity() const {
	return Read<float>((byte*)this + 2196);
}
float* ABP_AnimalBase_C::M_PtrGetFallZVelocity() {
	return reinterpret_cast<float*>((byte*)this + 2196);
}
void ABP_AnimalBase_C::M_SetFallZVelocity(const float& value) {
	Write((byte*)this + 2196, value);
}
// Member Getter and Setter of ShouldTakeFallDamage
// Declaration: bool ShouldTakeFallDamage
bool ABP_AnimalBase_C::M_GetShouldTakeFallDamage() const {
	return Read<bool>((byte*)this + 2200);
}
bool* ABP_AnimalBase_C::M_PtrGetShouldTakeFallDamage() {
	return reinterpret_cast<bool*>((byte*)this + 2200);
}
void ABP_AnimalBase_C::M_SetShouldTakeFallDamage(const bool& value) {
	Write((byte*)this + 2200, value);
}
// Member Getter and Setter of FallVelocityThreshold
// Declaration: float FallVelocityThreshold
float ABP_AnimalBase_C::M_GetFallVelocityThreshold() const {
	return Read<float>((byte*)this + 2204);
}
float* ABP_AnimalBase_C::M_PtrGetFallVelocityThreshold() {
	return reinterpret_cast<float*>((byte*)this + 2204);
}
void ABP_AnimalBase_C::M_SetFallVelocityThreshold(const float& value) {
	Write((byte*)this + 2204, value);
}
// Member Getter and Setter of FallDamageToApply
// Declaration: float FallDamageToApply
float ABP_AnimalBase_C::M_GetFallDamageToApply() const {
	return Read<float>((byte*)this + 2208);
}
float* ABP_AnimalBase_C::M_PtrGetFallDamageToApply() {
	return reinterpret_cast<float*>((byte*)this + 2208);
}
void ABP_AnimalBase_C::M_SetFallDamageToApply(const float& value) {
	Write((byte*)this + 2208, value);
}
// Member Getter and Setter of CanTakeFallDamage
// Declaration: bool CanTakeFallDamage
bool ABP_AnimalBase_C::M_GetCanTakeFallDamage() const {
	return Read<bool>((byte*)this + 2212);
}
bool* ABP_AnimalBase_C::M_PtrGetCanTakeFallDamage() {
	return reinterpret_cast<bool*>((byte*)this + 2212);
}
void ABP_AnimalBase_C::M_SetCanTakeFallDamage(const bool& value) {
	Write((byte*)this + 2212, value);
}
// Member Getter and Setter of VoiceSocket
// Declaration: struct FName VoiceSocket
struct FName ABP_AnimalBase_C::M_GetVoiceSocket() const {
	return Read<struct FName>((byte*)this + 2216);
}
struct FName* ABP_AnimalBase_C::M_PtrGetVoiceSocket() {
	return reinterpret_cast<struct FName*>((byte*)this + 2216);
}
void ABP_AnimalBase_C::M_SetVoiceSocket(const struct FName& value) {
	Write((byte*)this + 2216, value);
}
// Member Getter and Setter of MountedWalkSpeed
// Declaration: float MountedWalkSpeed
float ABP_AnimalBase_C::M_GetMountedWalkSpeed() const {
	return Read<float>((byte*)this + 2224);
}
float* ABP_AnimalBase_C::M_PtrGetMountedWalkSpeed() {
	return reinterpret_cast<float*>((byte*)this + 2224);
}
void ABP_AnimalBase_C::M_SetMountedWalkSpeed(const float& value) {
	Write((byte*)this + 2224, value);
}
// Member Getter and Setter of MountedRunningSpeed
// Declaration: float MountedRunningSpeed
float ABP_AnimalBase_C::M_GetMountedRunningSpeed() const {
	return Read<float>((byte*)this + 2228);
}
float* ABP_AnimalBase_C::M_PtrGetMountedRunningSpeed() {
	return reinterpret_cast<float*>((byte*)this + 2228);
}
void ABP_AnimalBase_C::M_SetMountedRunningSpeed(const float& value) {
	Write((byte*)this + 2228, value);
}
// Member Getter and Setter of MountedSprintingSpeed
// Declaration: float MountedSprintingSpeed
float ABP_AnimalBase_C::M_GetMountedSprintingSpeed() const {
	return Read<float>((byte*)this + 2232);
}
float* ABP_AnimalBase_C::M_PtrGetMountedSprintingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 2232);
}
void ABP_AnimalBase_C::M_SetMountedSprintingSpeed(const float& value) {
	Write((byte*)this + 2232, value);
}
// Member Getter and Setter of isInWater
// Declaration: bool isInWater
bool ABP_AnimalBase_C::M_GetisInWater() const {
	return Read<bool>((byte*)this + 2236);
}
bool* ABP_AnimalBase_C::M_PtrGetisInWater() {
	return reinterpret_cast<bool*>((byte*)this + 2236);
}
void ABP_AnimalBase_C::M_SetisInWater(const bool& value) {
	Write((byte*)this + 2236, value);
}
// Member Getter and Setter of InWaterSpeedReduction
// Declaration: float InWaterSpeedReduction
float ABP_AnimalBase_C::M_GetInWaterSpeedReduction() const {
	return Read<float>((byte*)this + 2240);
}
float* ABP_AnimalBase_C::M_PtrGetInWaterSpeedReduction() {
	return reinterpret_cast<float*>((byte*)this + 2240);
}
void ABP_AnimalBase_C::M_SetInWaterSpeedReduction(const float& value) {
	Write((byte*)this + 2240, value);
}
// Member Getter and Setter of EncumberedSpeedMultiplier
// Declaration: float EncumberedSpeedMultiplier
float ABP_AnimalBase_C::M_GetEncumberedSpeedMultiplier() const {
	return Read<float>((byte*)this + 2244);
}
float* ABP_AnimalBase_C::M_PtrGetEncumberedSpeedMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2244);
}
void ABP_AnimalBase_C::M_SetEncumberedSpeedMultiplier(const float& value) {
	Write((byte*)this + 2244, value);
}
// Member Getter and Setter of NightRiderTalentValue
// Declaration: float NightRiderTalentValue
float ABP_AnimalBase_C::M_GetNightRiderTalentValue() const {
	return Read<float>((byte*)this + 2248);
}
float* ABP_AnimalBase_C::M_PtrGetNightRiderTalentValue() {
	return reinterpret_cast<float*>((byte*)this + 2248);
}
void ABP_AnimalBase_C::M_SetNightRiderTalentValue(const float& value) {
	Write((byte*)this + 2248, value);
}
// Member Getter and Setter of MountBehaviorTree
// Declaration: class UBehaviorTree* MountBehaviorTree
class UBehaviorTree* ABP_AnimalBase_C::M_GetMountBehaviorTree() const {
	return Read<class UBehaviorTree*>((byte*)this + 2256);
}
class UBehaviorTree** ABP_AnimalBase_C::M_PtrGetMountBehaviorTree() {
	return reinterpret_cast<class UBehaviorTree**>((byte*)this + 2256);
}
void ABP_AnimalBase_C::M_SetMountBehaviorTree(const class UBehaviorTree*& value) {
	Write((byte*)this + 2256, value);
}
// Member Getter and Setter of Waypoints
// Declaration: TArray<struct FVector> Waypoints
TArray<struct FVector> ABP_AnimalBase_C::M_GetWaypoints() const {
	return Read<TArray<struct FVector>>((byte*)this + 2264);
}
TArray<struct FVector>* ABP_AnimalBase_C::M_PtrGetWaypoints() {
	return reinterpret_cast<TArray<struct FVector>*>((byte*)this + 2264);
}
void ABP_AnimalBase_C::M_SetWaypoints(const TArray<struct FVector>& value) {
	Write((byte*)this + 2264, value);
}
// Member Getter and Setter of ImpaledItemsBleedTimerHandle
// Declaration: struct FTimerHandle ImpaledItemsBleedTimerHandle
struct FTimerHandle ABP_AnimalBase_C::M_GetImpaledItemsBleedTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 2280);
}
struct FTimerHandle* ABP_AnimalBase_C::M_PtrGetImpaledItemsBleedTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2280);
}
void ABP_AnimalBase_C::M_SetImpaledItemsBleedTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 2280, value);
}
// Member Getter and Setter of DieCue
// Declaration: class USoundBase* DieCue
class USoundBase* ABP_AnimalBase_C::M_GetDieCue() const {
	return Read<class USoundBase*>((byte*)this + 2288);
}
class USoundBase** ABP_AnimalBase_C::M_PtrGetDieCue() {
	return reinterpret_cast<class USoundBase**>((byte*)this + 2288);
}
void ABP_AnimalBase_C::M_SetDieCue(const class USoundBase*& value) {
	Write((byte*)this + 2288, value);
}
// Member Getter and Setter of Animal_Audio
// Declaration: int32_t Animal_Audio
int32_t ABP_AnimalBase_C::M_GetAnimal_Audio() const {
	return Read<int32_t>((byte*)this + 2296);
}
int32_t* ABP_AnimalBase_C::M_PtrGetAnimal_Audio() {
	return reinterpret_cast<int32_t*>((byte*)this + 2296);
}
void ABP_AnimalBase_C::M_SetAnimal_Audio(const int32_t& value) {
	Write((byte*)this + 2296, value);
}
// Member Getter and Setter of Animal
// Declaration: struct FName Animal
struct FName ABP_AnimalBase_C::M_GetAnimal() const {
	return Read<struct FName>((byte*)this + 2300);
}
struct FName* ABP_AnimalBase_C::M_PtrGetAnimal() {
	return reinterpret_cast<struct FName*>((byte*)this + 2300);
}
void ABP_AnimalBase_C::M_SetAnimal(const struct FName& value) {
	Write((byte*)this + 2300, value);
}
// Member Getter and Setter of DieCuePitch
// Declaration: float DieCuePitch
float ABP_AnimalBase_C::M_GetDieCuePitch() const {
	return Read<float>((byte*)this + 2308);
}
float* ABP_AnimalBase_C::M_PtrGetDieCuePitch() {
	return reinterpret_cast<float*>((byte*)this + 2308);
}
void ABP_AnimalBase_C::M_SetDieCuePitch(const float& value) {
	Write((byte*)this + 2308, value);
}
// Member Getter and Setter of AllowMountedInteraction
// Declaration: bool AllowMountedInteraction
bool ABP_AnimalBase_C::M_GetAllowMountedInteraction() const {
	return Read<bool>((byte*)this + 2312);
}
bool* ABP_AnimalBase_C::M_PtrGetAllowMountedInteraction() {
	return reinterpret_cast<bool*>((byte*)this + 2312);
}
void ABP_AnimalBase_C::M_SetAllowMountedInteraction(const bool& value) {
	Write((byte*)this + 2312, value);
}
// Member Getter and Setter of IsTeleported
// Declaration: bool IsTeleported
bool ABP_AnimalBase_C::M_GetIsTeleported() const {
	return Read<bool>((byte*)this + 2313);
}
bool* ABP_AnimalBase_C::M_PtrGetIsTeleported() {
	return reinterpret_cast<bool*>((byte*)this + 2313);
}
void ABP_AnimalBase_C::M_SetIsTeleported(const bool& value) {
	Write((byte*)this + 2313, value);
}
// Member Getter and Setter of OccupyByNPC
// Declaration: bool OccupyByNPC
bool ABP_AnimalBase_C::M_GetOccupyByNPC() const {
	return Read<bool>((byte*)this + 2314);
}
bool* ABP_AnimalBase_C::M_PtrGetOccupyByNPC() {
	return reinterpret_cast<bool*>((byte*)this + 2314);
}
void ABP_AnimalBase_C::M_SetOccupyByNPC(const bool& value) {
	Write((byte*)this + 2314, value);
}
// Member Getter and Setter of Save
// Declaration: bool Save
bool ABP_AnimalBase_C::M_GetSave() const {
	return Read<bool>((byte*)this + 2315);
}
bool* ABP_AnimalBase_C::M_PtrGetSave() {
	return reinterpret_cast<bool*>((byte*)this + 2315);
}
void ABP_AnimalBase_C::M_SetSave(const bool& value) {
	Write((byte*)this + 2315, value);
}
// Member Getter and Setter of IsLeftRightAxisInput
// Declaration: bool IsLeftRightAxisInput
bool ABP_AnimalBase_C::M_GetIsLeftRightAxisInput() const {
	return Read<bool>((byte*)this + 2316);
}
bool* ABP_AnimalBase_C::M_PtrGetIsLeftRightAxisInput() {
	return reinterpret_cast<bool*>((byte*)this + 2316);
}
void ABP_AnimalBase_C::M_SetIsLeftRightAxisInput(const bool& value) {
	Write((byte*)this + 2316, value);
}
// Member Getter and Setter of TicksDelayToUpdatePush
// Declaration: int32_t TicksDelayToUpdatePush
int32_t ABP_AnimalBase_C::M_GetTicksDelayToUpdatePush() const {
	return Read<int32_t>((byte*)this + 2320);
}
int32_t* ABP_AnimalBase_C::M_PtrGetTicksDelayToUpdatePush() {
	return reinterpret_cast<int32_t*>((byte*)this + 2320);
}
void ABP_AnimalBase_C::M_SetTicksDelayToUpdatePush(const int32_t& value) {
	Write((byte*)this + 2320, value);
}
// Member Getter and Setter of TicksLeftToUpdatePush
// Declaration: int32_t TicksLeftToUpdatePush
int32_t ABP_AnimalBase_C::M_GetTicksLeftToUpdatePush() const {
	return Read<int32_t>((byte*)this + 2324);
}
int32_t* ABP_AnimalBase_C::M_PtrGetTicksLeftToUpdatePush() {
	return reinterpret_cast<int32_t*>((byte*)this + 2324);
}
void ABP_AnimalBase_C::M_SetTicksLeftToUpdatePush(const int32_t& value) {
	Write((byte*)this + 2324, value);
}
// Member Getter and Setter of IsRagdollActivationLocked
// Declaration: bool IsRagdollActivationLocked
bool ABP_AnimalBase_C::M_GetIsRagdollActivationLocked() const {
	return Read<bool>((byte*)this + 2328);
}
bool* ABP_AnimalBase_C::M_PtrGetIsRagdollActivationLocked() {
	return reinterpret_cast<bool*>((byte*)this + 2328);
}
void ABP_AnimalBase_C::M_SetIsRagdollActivationLocked(const bool& value) {
	Write((byte*)this + 2328, value);
}
// Member Getter and Setter of InitialRagdollVelocity
// Declaration: struct FVector InitialRagdollVelocity
struct FVector ABP_AnimalBase_C::M_GetInitialRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 2332);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetInitialRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2332);
}
void ABP_AnimalBase_C::M_SetInitialRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 2332, value);
}
// Member Getter and Setter of TargetRagdollVelocity
// Declaration: struct FVector TargetRagdollVelocity
struct FVector ABP_AnimalBase_C::M_GetTargetRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 2344);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetTargetRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2344);
}
void ABP_AnimalBase_C::M_SetTargetRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 2344, value);
}
// Member Getter and Setter of RagdollStartTime
// Declaration: float RagdollStartTime
float ABP_AnimalBase_C::M_GetRagdollStartTime() const {
	return Read<float>((byte*)this + 2356);
}
float* ABP_AnimalBase_C::M_PtrGetRagdollStartTime() {
	return reinterpret_cast<float*>((byte*)this + 2356);
}
void ABP_AnimalBase_C::M_SetRagdollStartTime(const float& value) {
	Write((byte*)this + 2356, value);
}
// Member Getter and Setter of ShouldUpdateRateOptimizationsBeEnabled
// Declaration: bool ShouldUpdateRateOptimizationsBeEnabled
bool ABP_AnimalBase_C::M_GetShouldUpdateRateOptimizationsBeEnabled() const {
	return Read<bool>((byte*)this + 2360);
}
bool* ABP_AnimalBase_C::M_PtrGetShouldUpdateRateOptimizationsBeEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 2360);
}
void ABP_AnimalBase_C::M_SetShouldUpdateRateOptimizationsBeEnabled(const bool& value) {
	Write((byte*)this + 2360, value);
}
// Member Getter and Setter of RagdollPoseSnapshot
// Declaration: struct FName RagdollPoseSnapshot
struct FName ABP_AnimalBase_C::M_GetRagdollPoseSnapshot() const {
	return Read<struct FName>((byte*)this + 2364);
}
struct FName* ABP_AnimalBase_C::M_PtrGetRagdollPoseSnapshot() {
	return reinterpret_cast<struct FName*>((byte*)this + 2364);
}
void ABP_AnimalBase_C::M_SetRagdollPoseSnapshot(const struct FName& value) {
	Write((byte*)this + 2364, value);
}
// Member Getter and Setter of RagdollLocation
// Declaration: struct FVector RagdollLocation
struct FVector ABP_AnimalBase_C::M_GetRagdollLocation() const {
	return Read<struct FVector>((byte*)this + 2372);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetRagdollLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2372);
}
void ABP_AnimalBase_C::M_SetRagdollLocation(const struct FVector& value) {
	Write((byte*)this + 2372, value);
}
// Member Getter and Setter of RagdollBaseBone
// Declaration: struct FName RagdollBaseBone
struct FName ABP_AnimalBase_C::M_GetRagdollBaseBone() const {
	return Read<struct FName>((byte*)this + 2384);
}
struct FName* ABP_AnimalBase_C::M_PtrGetRagdollBaseBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 2384);
}
void ABP_AnimalBase_C::M_SetRagdollBaseBone(const struct FName& value) {
	Write((byte*)this + 2384, value);
}
// Member Getter and Setter of RagdollVelocity
// Declaration: struct FVector RagdollVelocity
struct FVector ABP_AnimalBase_C::M_GetRagdollVelocity() const {
	return Read<struct FVector>((byte*)this + 2392);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetRagdollVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2392);
}
void ABP_AnimalBase_C::M_SetRagdollVelocity(const struct FVector& value) {
	Write((byte*)this + 2392, value);
}
// Member Getter and Setter of RagdollOnGround
// Declaration: bool RagdollOnGround
bool ABP_AnimalBase_C::M_GetRagdollOnGround() const {
	return Read<bool>((byte*)this + 2404);
}
bool* ABP_AnimalBase_C::M_PtrGetRagdollOnGround() {
	return reinterpret_cast<bool*>((byte*)this + 2404);
}
void ABP_AnimalBase_C::M_SetRagdollOnGround(const bool& value) {
	Write((byte*)this + 2404, value);
}
// Member Getter and Setter of RagdollStartMinHitSpeed
// Declaration: float RagdollStartMinHitSpeed
float ABP_AnimalBase_C::M_GetRagdollStartMinHitSpeed() const {
	return Read<float>((byte*)this + 2408);
}
float* ABP_AnimalBase_C::M_PtrGetRagdollStartMinHitSpeed() {
	return reinterpret_cast<float*>((byte*)this + 2408);
}
void ABP_AnimalBase_C::M_SetRagdollStartMinHitSpeed(const float& value) {
	Write((byte*)this + 2408, value);
}
// Member Getter and Setter of RagdollStartMinHitAcceleration
// Declaration: float RagdollStartMinHitAcceleration
float ABP_AnimalBase_C::M_GetRagdollStartMinHitAcceleration() const {
	return Read<float>((byte*)this + 2412);
}
float* ABP_AnimalBase_C::M_PtrGetRagdollStartMinHitAcceleration() {
	return reinterpret_cast<float*>((byte*)this + 2412);
}
void ABP_AnimalBase_C::M_SetRagdollStartMinHitAcceleration(const float& value) {
	Write((byte*)this + 2412, value);
}
// Member Getter and Setter of UnragdollTargetBone
// Declaration: struct FName UnragdollTargetBone
struct FName ABP_AnimalBase_C::M_GetUnragdollTargetBone() const {
	return Read<struct FName>((byte*)this + 2416);
}
struct FName* ABP_AnimalBase_C::M_PtrGetUnragdollTargetBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 2416);
}
void ABP_AnimalBase_C::M_SetUnragdollTargetBone(const struct FName& value) {
	Write((byte*)this + 2416, value);
}
// Member Getter and Setter of RagdollRootBone
// Declaration: struct FName RagdollRootBone
struct FName ABP_AnimalBase_C::M_GetRagdollRootBone() const {
	return Read<struct FName>((byte*)this + 2424);
}
struct FName* ABP_AnimalBase_C::M_PtrGetRagdollRootBone() {
	return reinterpret_cast<struct FName*>((byte*)this + 2424);
}
void ABP_AnimalBase_C::M_SetRagdollRootBone(const struct FName& value) {
	Write((byte*)this + 2424, value);
}
// Member Getter and Setter of RagdollCounter
// Declaration: int32_t RagdollCounter
int32_t ABP_AnimalBase_C::M_GetRagdollCounter() const {
	return Read<int32_t>((byte*)this + 2432);
}
int32_t* ABP_AnimalBase_C::M_PtrGetRagdollCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 2432);
}
void ABP_AnimalBase_C::M_SetRagdollCounter(const int32_t& value) {
	Write((byte*)this + 2432, value);
}
// Member Getter and Setter of RagdollStoppedCounter
// Declaration: int32_t RagdollStoppedCounter
int32_t ABP_AnimalBase_C::M_GetRagdollStoppedCounter() const {
	return Read<int32_t>((byte*)this + 2436);
}
int32_t* ABP_AnimalBase_C::M_PtrGetRagdollStoppedCounter() {
	return reinterpret_cast<int32_t*>((byte*)this + 2436);
}
void ABP_AnimalBase_C::M_SetRagdollStoppedCounter(const int32_t& value) {
	Write((byte*)this + 2436, value);
}
// Member Getter and Setter of Push
// Declaration: struct FVector Push
struct FVector ABP_AnimalBase_C::M_GetPush() const {
	return Read<struct FVector>((byte*)this + 2440);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetPush() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2440);
}
void ABP_AnimalBase_C::M_SetPush(const struct FVector& value) {
	Write((byte*)this + 2440, value);
}
// Member Getter and Setter of CanPush
// Declaration: bool CanPush
bool ABP_AnimalBase_C::M_GetCanPush() const {
	return Read<bool>((byte*)this + 2452);
}
bool* ABP_AnimalBase_C::M_PtrGetCanPush() {
	return reinterpret_cast<bool*>((byte*)this + 2452);
}
void ABP_AnimalBase_C::M_SetCanPush(const bool& value) {
	Write((byte*)this + 2452, value);
}
// Member Getter and Setter of CanBePushed
// Declaration: bool CanBePushed
bool ABP_AnimalBase_C::M_GetCanBePushed() const {
	return Read<bool>((byte*)this + 2453);
}
bool* ABP_AnimalBase_C::M_PtrGetCanBePushed() {
	return reinterpret_cast<bool*>((byte*)this + 2453);
}
void ABP_AnimalBase_C::M_SetCanBePushed(const bool& value) {
	Write((byte*)this + 2453, value);
}
// Member Getter and Setter of L_PushDetectorSensedActorClosestLocation
// Declaration: struct FVector L_PushDetectorSensedActorClosestLocation
struct FVector ABP_AnimalBase_C::M_GetL_PushDetectorSensedActorClosestLocation() const {
	return Read<struct FVector>((byte*)this + 2456);
}
struct FVector* ABP_AnimalBase_C::M_PtrGetL_PushDetectorSensedActorClosestLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2456);
}
void ABP_AnimalBase_C::M_SetL_PushDetectorSensedActorClosestLocation(const struct FVector& value) {
	Write((byte*)this + 2456, value);
}
// Member Getter and Setter of L_PushDetectorSensedActorSmallestDistance
// Declaration: float L_PushDetectorSensedActorSmallestDistance
float ABP_AnimalBase_C::M_GetL_PushDetectorSensedActorSmallestDistance() const {
	return Read<float>((byte*)this + 2468);
}
float* ABP_AnimalBase_C::M_PtrGetL_PushDetectorSensedActorSmallestDistance() {
	return reinterpret_cast<float*>((byte*)this + 2468);
}
void ABP_AnimalBase_C::M_SetL_PushDetectorSensedActorSmallestDistance(const float& value) {
	Write((byte*)this + 2468, value);
}
// Member Getter and Setter of SimulatedBodiesBeforeRagdoll
// Declaration: TArray<bool> SimulatedBodiesBeforeRagdoll
TArray<bool> ABP_AnimalBase_C::M_GetSimulatedBodiesBeforeRagdoll() const {
	return Read<TArray<bool>>((byte*)this + 2472);
}
TArray<bool>* ABP_AnimalBase_C::M_PtrGetSimulatedBodiesBeforeRagdoll() {
	return reinterpret_cast<TArray<bool>*>((byte*)this + 2472);
}
void ABP_AnimalBase_C::M_SetSimulatedBodiesBeforeRagdoll(const TArray<bool>& value) {
	Write((byte*)this + 2472, value);
}
// Member Getter and Setter of IsRagdollOnHitEnabled
// Declaration: bool IsRagdollOnHitEnabled
bool ABP_AnimalBase_C::M_GetIsRagdollOnHitEnabled() const {
	return Read<bool>((byte*)this + 2488);
}
bool* ABP_AnimalBase_C::M_PtrGetIsRagdollOnHitEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 2488);
}
void ABP_AnimalBase_C::M_SetIsRagdollOnHitEnabled(const bool& value) {
	Write((byte*)this + 2488, value);
}
// Member Getter and Setter of DamageTooSmall
// Declaration: bool DamageTooSmall
bool ABP_AnimalBase_C::M_GetDamageTooSmall() const {
	return Read<bool>((byte*)this + 2489);
}
bool* ABP_AnimalBase_C::M_PtrGetDamageTooSmall() {
	return reinterpret_cast<bool*>((byte*)this + 2489);
}
void ABP_AnimalBase_C::M_SetDamageTooSmall(const bool& value) {
	Write((byte*)this + 2489, value);
}
// Member Getter and Setter of DamageParticles
// Declaration: class UParticleSystem* DamageParticles
class UParticleSystem* ABP_AnimalBase_C::M_GetDamageParticles() const {
	return Read<class UParticleSystem*>((byte*)this + 2496);
}
class UParticleSystem** ABP_AnimalBase_C::M_PtrGetDamageParticles() {
	return reinterpret_cast<class UParticleSystem**>((byte*)this + 2496);
}
void ABP_AnimalBase_C::M_SetDamageParticles(const class UParticleSystem*& value) {
	Write((byte*)this + 2496, value);
}
// Member Getter and Setter of IsRagdollOnFallEnabled
// Declaration: bool IsRagdollOnFallEnabled
bool ABP_AnimalBase_C::M_GetIsRagdollOnFallEnabled() const {
	return Read<bool>((byte*)this + 2504);
}
bool* ABP_AnimalBase_C::M_PtrGetIsRagdollOnFallEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 2504);
}
void ABP_AnimalBase_C::M_SetIsRagdollOnFallEnabled(const bool& value) {
	Write((byte*)this + 2504, value);
}
// Member Getter and Setter of RagdollMinFallDamage
// Declaration: float RagdollMinFallDamage
float ABP_AnimalBase_C::M_GetRagdollMinFallDamage() const {
	return Read<float>((byte*)this + 2508);
}
float* ABP_AnimalBase_C::M_PtrGetRagdollMinFallDamage() {
	return reinterpret_cast<float*>((byte*)this + 2508);
}
void ABP_AnimalBase_C::M_SetRagdollMinFallDamage(const float& value) {
	Write((byte*)this + 2508, value);
}
// Member Getter and Setter of InactivePhysicsAsset
// Declaration: class UPhysicsAsset* InactivePhysicsAsset
class UPhysicsAsset* ABP_AnimalBase_C::M_GetInactivePhysicsAsset() const {
	return Read<class UPhysicsAsset*>((byte*)this + 2512);
}
class UPhysicsAsset** ABP_AnimalBase_C::M_PtrGetInactivePhysicsAsset() {
	return reinterpret_cast<class UPhysicsAsset**>((byte*)this + 2512);
}
void ABP_AnimalBase_C::M_SetInactivePhysicsAsset(const class UPhysicsAsset*& value) {
	Write((byte*)this + 2512, value);
}
// Member Getter and Setter of meshCollisionDisableTime
// Declaration: float meshCollisionDisableTime
float ABP_AnimalBase_C::M_GetmeshCollisionDisableTime() const {
	return Read<float>((byte*)this + 2520);
}
float* ABP_AnimalBase_C::M_PtrGetmeshCollisionDisableTime() {
	return reinterpret_cast<float*>((byte*)this + 2520);
}
void ABP_AnimalBase_C::M_SetmeshCollisionDisableTime(const float& value) {
	Write((byte*)this + 2520, value);
}
// Member Getter and Setter of targetMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> targetMeshCollisionType
TEnumAsByte<ECollisionEnabled> ABP_AnimalBase_C::M_GettargetMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 2524);
}
TEnumAsByte<ECollisionEnabled>* ABP_AnimalBase_C::M_PtrGettargetMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 2524);
}
void ABP_AnimalBase_C::M_SettargetMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 2524, value);
}
// Member Getter and Setter of previousMeshCollisionType
// Declaration: TEnumAsByte<ECollisionEnabled> previousMeshCollisionType
TEnumAsByte<ECollisionEnabled> ABP_AnimalBase_C::M_GetpreviousMeshCollisionType() const {
	return Read<TEnumAsByte<ECollisionEnabled>>((byte*)this + 2525);
}
TEnumAsByte<ECollisionEnabled>* ABP_AnimalBase_C::M_PtrGetpreviousMeshCollisionType() {
	return reinterpret_cast<TEnumAsByte<ECollisionEnabled>*>((byte*)this + 2525);
}
void ABP_AnimalBase_C::M_SetpreviousMeshCollisionType(const TEnumAsByte<ECollisionEnabled>& value) {
	Write((byte*)this + 2525, value);
}
// Member Getter and Setter of isPhysicsAssetSwitchingEnabled
// Declaration: bool isPhysicsAssetSwitchingEnabled
bool ABP_AnimalBase_C::M_GetisPhysicsAssetSwitchingEnabled() const {
	return Read<bool>((byte*)this + 2526);
}
bool* ABP_AnimalBase_C::M_PtrGetisPhysicsAssetSwitchingEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 2526);
}
void ABP_AnimalBase_C::M_SetisPhysicsAssetSwitchingEnabled(const bool& value) {
	Write((byte*)this + 2526, value);
}
// Member Getter and Setter of isDistanceMeshCollisionOptimizationEnabled
// Declaration: bool isDistanceMeshCollisionOptimizationEnabled
bool ABP_AnimalBase_C::M_GetisDistanceMeshCollisionOptimizationEnabled() const {
	return Read<bool>((byte*)this + 2527);
}
bool* ABP_AnimalBase_C::M_PtrGetisDistanceMeshCollisionOptimizationEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 2527);
}
void ABP_AnimalBase_C::M_SetisDistanceMeshCollisionOptimizationEnabled(const bool& value) {
	Write((byte*)this + 2527, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ExecuteUbergraph_BP_AnimalBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase");

	struct ABP_AnimalBase_C_ExecuteUbergraph_BP_AnimalBase_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_ExecuteUbergraph_BP_AnimalBase_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_MovementMode Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_MovementMode	Type: EAnimalMovementMode	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Set_Animal_MovementMode_Event(EAnimalMovementMode New_ALS_MovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_MovementMode Event");

	struct ABP_AnimalBase_C_Set_Animal_MovementMode_Event_Params {
		EAnimalMovementMode New_ALS_MovementMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_Set_Animal_MovementMode_Event_Params params;
	params.New_ALS_MovementMode = New_ALS_MovementMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.K2_OnMovementModeChanged
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: PrevMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PrevCustomMode	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewCustomMode	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.K2_OnMovementModeChanged");

	struct ABP_AnimalBase_C_K2_OnMovementModeChanged_Params {
		TEnumAsByte<EMovementMode> PrevMovementMode;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<EMovementMode> NewMovementMode;			//Offset: 1 | ElementSize: 1
		unsigned char PrevCustomMode;			//Offset: 2 | ElementSize: 1
		unsigned char NewCustomMode;			//Offset: 3 | ElementSize: 1
	};
	ABP_AnimalBase_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_Gait Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_Gait	Type: TEnumAsByte<E_Gait>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Set_Animal_Gait_Event(TEnumAsByte<E_Gait> New_ALS_Gait) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Set Animal_Gait Event");

	struct ABP_AnimalBase_C_Set_Animal_Gait_Event_Params {
		TEnumAsByte<E_Gait> New_ALS_Gait;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_Set_Animal_Gait_Event_Params params;
	params.New_ALS_Gait = New_ALS_Gait;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Set ALS_RotationMode Event
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: New_ALS_RotationMode	Type: EAnimalRotationMode	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Set_ALS_RotationMode_Event(EAnimalRotationMode New_ALS_RotationMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Set ALS_RotationMode Event");

	struct ABP_AnimalBase_C_Set_ALS_RotationMode_Event_Params {
		EAnimalRotationMode New_ALS_RotationMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_Set_ALS_RotationMode_Event_Params params;
	params.New_ALS_RotationMode = New_ALS_RotationMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.FallingEvent
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::FallingEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.FallingEvent");

	struct ABP_AnimalBase_C_FallingEvent_Params {
	};
	ABP_AnimalBase_C_FallingEvent_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.StartFalling
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::StartFalling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StartFalling");

	struct ABP_AnimalBase_C_StartFalling_Params {
	};
	ABP_AnimalBase_C_StartFalling_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.EndFalling
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::EndFalling() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EndFalling");

	struct ABP_AnimalBase_C_EndFalling_Params {
	};
	ABP_AnimalBase_C_EndFalling_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveAnyDamage
// Flags: BlueprintAuthorityOnly, Event, Public, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveAnyDamage");

	struct ABP_AnimalBase_C_ReceiveAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	ABP_AnimalBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CauseBleeding
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BleedDamage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BleedDuration	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::CauseBleeding(float BleedDamage, float BleedDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CauseBleeding");

	struct ABP_AnimalBase_C_CauseBleeding_Params {
		float BleedDamage;			//Offset: 0 | ElementSize: 4
		float BleedDuration;			//Offset: 4 | ElementSize: 4
	};
	ABP_AnimalBase_C_CauseBleeding_Params params;
	params.BleedDamage = BleedDamage;
	params.BleedDuration = BleedDuration;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.BleedCancel
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::BleedCancel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.BleedCancel");

	struct ABP_AnimalBase_C_BleedCancel_Params {
	};
	ABP_AnimalBase_C_BleedCancel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Splat
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: EventName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EmitterTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ParticleTime	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Velocity	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Normal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PhysMat	Type: class UPhysicalMaterial*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Splat(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, class UPhysicalMaterial* PhysMat) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Splat");

	struct ABP_AnimalBase_C_Splat_Params {
		struct FName EventName;			//Offset: 0 | ElementSize: 8
		float EmitterTime;			//Offset: 8 | ElementSize: 4
		int32_t ParticleTime;			//Offset: 12 | ElementSize: 4
		struct FVector Location;			//Offset: 16 | ElementSize: 12
		struct FVector Velocity;			//Offset: 28 | ElementSize: 12
		struct FVector Direction;			//Offset: 40 | ElementSize: 12
		struct FVector Normal;			//Offset: 52 | ElementSize: 12
		struct FName BoneName;			//Offset: 64 | ElementSize: 8
		class UPhysicalMaterial* PhysMat;			//Offset: 72 | ElementSize: 8
	};
	ABP_AnimalBase_C_Splat_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ReceivePointDamage
// Flags: BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitNormal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShotFromDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitInfo	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_AnimalBase_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceivePointDamage");

	struct ABP_AnimalBase_C_ReceivePointDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		struct FVector HitLocation;			//Offset: 16 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 28 | ElementSize: 12
		class UPrimitiveComponent* HitComponent;			//Offset: 40 | ElementSize: 8
		struct FName BoneName;			//Offset: 48 | ElementSize: 8
		struct FVector ShotFromDirection;			//Offset: 56 | ElementSize: 12
		class AController* InstigatedBy;			//Offset: 72 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 80 | ElementSize: 8
		struct FHitResult HitInfo;			//Offset: 88 | ElementSize: 136
	};
	ABP_AnimalBase_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.DealtDamage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::DealtDamage(class AActor* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DealtDamage");

	struct ABP_AnimalBase_C_DealtDamage_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_DealtDamage_Params params;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ParticleFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PSystem	Type: class UParticleSystemComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ParticleFinished(class UParticleSystemComponent* PSystem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ParticleFinished");

	struct ABP_AnimalBase_C_ParticleFinished_Params {
		class UParticleSystemComponent* PSystem;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_ParticleFinished_Params params;
	params.PSystem = PSystem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.EventDead
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::EventDead() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EventDead");

	struct ABP_AnimalBase_C_EventDead_Params {
	};
	ABP_AnimalBase_C_EventDead_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMovementSettings
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateMovementSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateMovementSettings");

	struct ABP_AnimalBase_C_UpdateMovementSettings_Params {
	};
	ABP_AnimalBase_C_UpdateMovementSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetMeshCollisionKeepTime_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Keep_Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetMeshCollisionKeepTime_BPI(float Keep_Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetMeshCollisionKeepTime_BPI");

	struct ABP_AnimalBase_C_SetMeshCollisionKeepTime_BPI_Params {
		float Keep_Time;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetMeshCollisionKeepTime_BPI_Params params;
	params.Keep_Time = Keep_Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetMeshCollision_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Collision_Type	Type: TEnumAsByte<ECollisionEnabled>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetMeshCollision_BPI");

	struct ABP_AnimalBase_C_SetMeshCollision_BPI_Params {
		TEnumAsByte<ECollisionEnabled> Collision_Type;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetMeshCollision_BPI_Params params;
	params.Collision_Type = Collision_Type;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnCapsuleComponentHit
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NormalImpulse	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnCapsuleComponentHit");

	struct ABP_AnimalBase_C_OnCapsuleComponentHit_Params {
		class UPrimitiveComponent* HitComponent;			//Offset: 0 | ElementSize: 8
		class AActor* OtherActor;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		struct FVector NormalImpulse;			//Offset: 24 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 36 | ElementSize: 136
	};
	ABP_AnimalBase_C_OnCapsuleComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.RagdollTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::RagdollTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.RagdollTimer");

	struct ABP_AnimalBase_C_RagdollTimer_Params {
	};
	ABP_AnimalBase_C_RagdollTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.StopRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: SkipAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::StopRagdoll(bool SkipAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StopRagdoll");

	struct ABP_AnimalBase_C_StopRagdoll_Params {
		bool SkipAnim;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_StopRagdoll_Params params;
	params.SkipAnim = SkipAnim;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.StartRagdoll
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::StartRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StartRagdoll");

	struct ABP_AnimalBase_C_StartRagdoll_Params {
	};
	ABP_AnimalBase_C_StartRagdoll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetOccupyByNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: OccupyByNPC	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetOccupyByNPC(bool OccupyByNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetOccupyByNPC");

	struct ABP_AnimalBase_C_SetOccupyByNPC_Params {
		bool OccupyByNPC;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetOccupyByNPC_Params params;
	params.OccupyByNPC = OccupyByNPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.PoisonAnimal
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::PoisonAnimal(float Poison) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PoisonAnimal");

	struct ABP_AnimalBase_C_PoisonAnimal_Params {
		float Poison;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_PoisonAnimal_Params params;
	params.Poison = Poison;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.BleedFromImpaledItems
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::BleedFromImpaledItems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.BleedFromImpaledItems");

	struct ABP_AnimalBase_C_BleedFromImpaledItems_Params {
	};
	ABP_AnimalBase_C_BleedFromImpaledItems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetIsInWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InWater	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetIsInWater(bool InWater, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetIsInWater");

	struct ABP_AnimalBase_C_SetIsInWater_Params {
		bool InWater;			//Offset: 0 | ElementSize: 1
		float Intensity;			//Offset: 4 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.FarOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::FarOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.FarOptimization");

	struct ABP_AnimalBase_C_FarOptimization_Params {
	};
	ABP_AnimalBase_C_FarOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.MediumOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::MediumOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MediumOptimization");

	struct ABP_AnimalBase_C_MediumOptimization_Params {
	};
	ABP_AnimalBase_C_MediumOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CloseOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::CloseOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CloseOptimization");

	struct ABP_AnimalBase_C_CloseOptimization_Params {
	};
	ABP_AnimalBase_C_CloseOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.NoneOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::NoneOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.NoneOptimization");

	struct ABP_AnimalBase_C_NoneOptimization_Params {
	};
	ABP_AnimalBase_C_NoneOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.DisableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::DisableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DisableNPC");

	struct ABP_AnimalBase_C_DisableNPC_Params {
	};
	ABP_AnimalBase_C_DisableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.EnableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::EnableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EnableNPC");

	struct ABP_AnimalBase_C_EnableNPC_Params {
	};
	ABP_AnimalBase_C_EnableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.RemoveImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::RemoveImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.RemoveImpaledItem");

	struct ABP_AnimalBase_C_RemoveImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_RemoveImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.AddImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ImpaledItem	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::AddImpaledItem(class AActor* ImpaledItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddImpaledItem");

	struct ABP_AnimalBase_C_AddImpaledItem_Params {
		class AActor* ImpaledItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_AddImpaledItem_Params params;
	params.ImpaledItem = ImpaledItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.PerformActorInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::PerformActorInteraction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PerformActorInteraction");

	struct ABP_AnimalBase_C_PerformActorInteraction_Params {
	};
	ABP_AnimalBase_C_PerformActorInteraction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.InteractInput
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KeyDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::InteractInput(bool KeyDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractInput");

	struct ABP_AnimalBase_C_InteractInput_Params {
		bool KeyDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_InteractInput_Params params;
	params.KeyDown = KeyDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnMoveForSkinningFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnMoveForSkinningFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnMoveForSkinningFinished");

	struct ABP_AnimalBase_C_OnMoveForSkinningFinished_Params {
	};
	ABP_AnimalBase_C_OnMoveForSkinningFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.PauseBrain
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::PauseBrain() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PauseBrain");

	struct ABP_AnimalBase_C_PauseBrain_Params {
	};
	ABP_AnimalBase_C_PauseBrain_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UnpauseBrain
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::UnpauseBrain() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UnpauseBrain");

	struct ABP_AnimalBase_C_UnpauseBrain_Params {
	};
	ABP_AnimalBase_C_UnpauseBrain_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveDestroyed
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveDestroyed");

	struct ABP_AnimalBase_C_ReceiveDestroyed_Params {
	};
	ABP_AnimalBase_C_ReceiveDestroyed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.InteractCancel
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractCancel");

	struct ABP_AnimalBase_C_InteractCancel_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.InteractStart
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::InteractStart(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractStart");

	struct ABP_AnimalBase_C_InteractStart_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_InteractStart_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Interact
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Interact");

	struct ABP_AnimalBase_C_Interact_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool Timer;			//Offset: 144 | ElementSize: 1
	};
	ABP_AnimalBase_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveTick");

	struct ABP_AnimalBase_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay");

	struct ABP_AnimalBase_C_ReceiveBeginPlay_Params {
	};
	ABP_AnimalBase_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnSummonFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnSummonFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSummonFinished");

	struct ABP_AnimalBase_C_OnSummonFinished_Params {
	};
	ABP_AnimalBase_C_OnSummonFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Far
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnSummoned_Far() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Far");

	struct ABP_AnimalBase_C_OnSummoned_Far_Params {
	};
	ABP_AnimalBase_C_OnSummoned_Far_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Close
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnSummoned_Close() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnSummoned_Close");

	struct ABP_AnimalBase_C_OnSummoned_Close_Params {
	};
	ABP_AnimalBase_C_OnSummoned_Close_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ReceivePossessed
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: NewController	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ReceivePossessed(class AController* NewController) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ReceivePossessed");

	struct ABP_AnimalBase_C_ReceivePossessed_Params {
		class AController* NewController;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetSleepSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SleepSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetSleepSlotIndex(int32_t SleepSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSleepSlotIndex");

	struct ABP_AnimalBase_C_SetSleepSlotIndex_Params {
		int32_t SleepSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetSleepSlotIndex_Params params;
	params.SleepSlotIndex = SleepSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetSleepValues
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetSleepValues() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSleepValues");

	struct ABP_AnimalBase_C_SetSleepValues_Params {
	};
	ABP_AnimalBase_C_SetSleepValues_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SavePoseSnapshot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PoseNameToSave	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SavePoseSnapshot_BPI(struct FName PoseNameToSave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SavePoseSnapshot_BPI");

	struct ABP_AnimalBase_C_SavePoseSnapshot_BPI_Params {
		struct FName PoseNameToSave;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_SavePoseSnapshot_BPI_Params params;
	params.PoseNameToSave = PoseNameToSave;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Play_GetUp_Anim BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FromLeftSide	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::Play_GetUp_Anim_BPI(bool FromLeftSide) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Play_GetUp_Anim BPI");

	struct ABP_AnimalBase_C_Play_GetUp_Anim_BPI_Params {
		bool FromLeftSide;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_Play_GetUp_Anim_BPI_Params params;
	params.FromLeftSide = FromLeftSide;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetBirdTypeBPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: isWaterType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetBirdTypeBPI(bool isWaterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetBirdTypeBPI");

	struct ABP_AnimalBase_C_SetBirdTypeBPI_Params {
		bool isWaterType;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetBirdTypeBPI_Params params;
	params.isWaterType = isWaterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryAnimalCapacity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Capacity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetHusbandryAnimalCapacity(float Capacity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryAnimalCapacity");

	struct ABP_AnimalBase_C_SetHusbandryAnimalCapacity_Params {
		float Capacity;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetHusbandryAnimalCapacity_Params params;
	params.Capacity = Capacity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalCustomName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetAnimalCustomName(struct FString CustomName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalCustomName");

	struct ABP_AnimalBase_C_SetAnimalCustomName_Params {
		struct FString CustomName;			//Offset: 0 | ElementSize: 16
	};
	ABP_AnimalBase_C_SetAnimalCustomName_Params params;
	params.CustomName = CustomName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountEquipment
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Unequip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ItemData	Type: struct FST_ItemOutfit	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateMountEquipment(bool Unequip, struct FST_ItemOutfit ItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountEquipment");

	struct ABP_AnimalBase_C_UpdateMountEquipment_Params {
		bool Unequip;			//Offset: 0 | ElementSize: 1
		struct FST_ItemOutfit ItemData;			//Offset: 8 | ElementSize: 240
	};
	ABP_AnimalBase_C_UpdateMountEquipment_Params params;
	params.Unequip = Unequip;
	params.ItemData = ItemData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetForSale
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ForSale	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetForSale(bool ForSale) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetForSale");

	struct ABP_AnimalBase_C_SetForSale_Params {
		bool ForSale;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetForSale_Params params;
	params.ForSale = ForSale;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalMovementMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementMode	Type: EAnimalMovementMode	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetAnimalMovementMode_BPI(EAnimalMovementMode MovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetAnimalMovementMode BPI");

	struct ABP_AnimalBase_C_SetAnimalMovementMode_BPI_Params {
		EAnimalMovementMode MovementMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetAnimalMovementMode_BPI_Params params;
	params.MovementMode = MovementMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetEngageTargetBPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Causer	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetEngageTargetBPI(class AActor* Causer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetEngageTargetBPI");

	struct ABP_AnimalBase_C_SetEngageTargetBPI_Params {
		class AActor* Causer;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_SetEngageTargetBPI_Params params;
	params.Causer = Causer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetFear
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Fear	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetFear(int32_t Fear) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetFear");

	struct ABP_AnimalBase_C_SetFear_Params {
		int32_t Fear;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetFear_Params params;
	params.Fear = Fear;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.AddItemToHouse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::AddItemToHouse() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddItemToHouse");

	struct ABP_AnimalBase_C_AddItemToHouse_Params {
	};
	ABP_AnimalBase_C_AddItemToHouse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.RotateYaw
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::RotateYaw(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.RotateYaw");

	struct ABP_AnimalBase_C_RotateYaw_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_RotateYaw_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.RotatePitch
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::RotatePitch(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.RotatePitch");

	struct ABP_AnimalBase_C_RotatePitch_Params {
		float Angle;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_RotatePitch_Params params;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.DetachItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::DetachItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DetachItem");

	struct ABP_AnimalBase_C_DetachItem_Params {
	};
	ABP_AnimalBase_C_DetachItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetRotateMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RotateLeft	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RotateRight	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetRotateMode(bool RotateLeft, bool RotateRight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetRotateMode");

	struct ABP_AnimalBase_C_SetRotateMode_Params {
		bool RotateLeft;			//Offset: 0 | ElementSize: 1
		bool RotateRight;			//Offset: 1 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetRotateMode_Params params;
	params.RotateLeft = RotateLeft;
	params.RotateRight = RotateRight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.StopAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::StopAttackFunction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StopAttackFunction");

	struct ABP_AnimalBase_C_StopAttackFunction_Params {
	};
	ABP_AnimalBase_C_StopAttackFunction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.StartAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Socket	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::StartAttackFunction(bool Timer, struct FName Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StartAttackFunction");

	struct ABP_AnimalBase_C_StartAttackFunction_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
		struct FName Socket;			//Offset: 4 | ElementSize: 8
	};
	ABP_AnimalBase_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.InteractWithImpaledItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.InteractWithImpaledItem");

	struct ABP_AnimalBase_C_InteractWithImpaledItem_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_InteractWithImpaledItem_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ShowInspectorUI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ShowInspectorUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ShowInspectorUI");

	struct ABP_AnimalBase_C_ShowInspectorUI_Params {
	};
	ABP_AnimalBase_C_ShowInspectorUI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsLookedAt
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Active	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsLookedAt(bool Active) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsLookedAt");

	struct ABP_AnimalBase_C_IsLookedAt_Params {
		bool Active;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsLookedAt_Params params;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ToolInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: UseChunkData	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ChunkData	Type: struct FST_Chunks	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool UseChunkData, struct FST_Chunks ChunkData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ToolInteract");

	struct ABP_AnimalBase_C_ToolInteract_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		bool UseChunkData;			//Offset: 144 | ElementSize: 1
		struct FST_Chunks ChunkData;			//Offset: 152 | ElementSize: 520
	};
	ABP_AnimalBase_C_ToolInteract_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetOccupied
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Character	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetOccupied(class APawn* Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetOccupied");

	struct ABP_AnimalBase_C_SetOccupied_Params {
		class APawn* Character;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_SetOccupied_Params params;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.MouseWheel_Axis
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::MouseWheel_Axis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MouseWheel_Axis");

	struct ABP_AnimalBase_C_MouseWheel_Axis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_MouseWheel_Axis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CameraActionReleased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::CameraActionReleased(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CameraActionReleased");

	struct ABP_AnimalBase_C_CameraActionReleased_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_CameraActionReleased_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CameraActionPressed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::CameraActionPressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CameraActionPressed");

	struct ABP_AnimalBase_C_CameraActionPressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_CameraActionPressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.LookAtOnMount
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::LookAtOnMount(struct FRotator Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LookAtOnMount");

	struct ABP_AnimalBase_C_LookAtOnMount_Params {
		struct FRotator Rotation;			//Offset: 0 | ElementSize: 12
	};
	ABP_AnimalBase_C_LookAtOnMount_Params params;
	params.Rotation = Rotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetShouldSprint
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldSprint	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetShouldSprint(bool ShouldSprint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetShouldSprint");

	struct ABP_AnimalBase_C_SetShouldSprint_Params {
		bool ShouldSprint;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetShouldSprint_Params params;
	params.ShouldSprint = ShouldSprint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.WalkReleased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::WalkReleased(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.WalkReleased");

	struct ABP_AnimalBase_C_WalkReleased_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_WalkReleased_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.WalkPressed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::WalkPressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.WalkPressed");

	struct ABP_AnimalBase_C_WalkPressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_WalkPressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.MountStop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::MountStop() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MountStop");

	struct ABP_AnimalBase_C_MountStop_Params {
	};
	ABP_AnimalBase_C_MountStop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.DismountReleased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::DismountReleased(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DismountReleased");

	struct ABP_AnimalBase_C_DismountReleased_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_DismountReleased_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.DismountPressed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::DismountPressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.DismountPressed");

	struct ABP_AnimalBase_C_DismountPressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_DismountPressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Down_Axis
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Down_Axis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Down_Axis");

	struct ABP_AnimalBase_C_Down_Axis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_Down_Axis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Right_Axis
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Right_Axis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Right_Axis");

	struct ABP_AnimalBase_C_Right_Axis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SprintReleased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SprintReleased(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SprintReleased");

	struct ABP_AnimalBase_C_SprintReleased_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_SprintReleased_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SprintPressed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SprintPressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SprintPressed");

	struct ABP_AnimalBase_C_SprintPressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_SprintPressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.MountSpecial
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::MountSpecial() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MountSpecial");

	struct ABP_AnimalBase_C_MountSpecial_Params {
	};
	ABP_AnimalBase_C_MountSpecial_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.JumpReleased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::JumpReleased(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.JumpReleased");

	struct ABP_AnimalBase_C_JumpReleased_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_JumpReleased_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.JumpPressed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Key	Type: struct FKey	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::JumpPressed(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.JumpPressed");

	struct ABP_AnimalBase_C_JumpPressed_Params {
		struct FKey Key;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_JumpPressed_Params params;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Left_Axis
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Left_Axis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Left_Axis");

	struct ABP_AnimalBase_C_Left_Axis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_Left_Axis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.Backwards_Axis
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Axis_Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::Backwards_Axis(float Axis_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.Backwards_Axis");

	struct ABP_AnimalBase_C_Backwards_Axis_Params {
		float Axis_Value;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_Backwards_Axis_Params params;
	params.Axis_Value = Axis_Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountCameraFoV
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FieldOfView	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateMountCameraFoV(float FieldOfView) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateMountCameraFoV");

	struct ABP_AnimalBase_C_UpdateMountCameraFoV_Params {
		float FieldOfView;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_UpdateMountCameraFoV_Params params;
	params.FieldOfView = FieldOfView;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript
// Flags: Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript");

	struct ABP_AnimalBase_C_UserConstructionScript_Params {
	};
	ABP_AnimalBase_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.fnGetAuthority
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: HasAuthority	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::fnGetAuthority(bool* HasAuthority) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.fnGetAuthority");

	struct ABP_AnimalBase_C_fnGetAuthority_Params {
		bool HasAuthority;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_fnGetAuthority_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HasAuthority != nullptr)
		*HasAuthority = params.HasAuthority;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalMovementModeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnAnimalMovementModeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalMovementModeChanged");

	struct ABP_AnimalBase_C_OnAnimalMovementModeChanged_Params {
	};
	ABP_AnimalBase_C_OnAnimalMovementModeChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimInstance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UAnimInstance* ABP_AnimalBase_C::GetAnimInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimInstance");

	struct ABP_AnimalBase_C_GetAnimInstance_Params {
		class UAnimInstance* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetAnimInstance_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalPawnMovementModeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Selection	Type: TEnumAsByte<EMovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnAnimalPawnMovementModeChanged(TEnumAsByte<EMovementMode> Selection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalPawnMovementModeChanged");

	struct ABP_AnimalBase_C_OnAnimalPawnMovementModeChanged_Params {
		TEnumAsByte<EMovementMode> Selection;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_OnAnimalPawnMovementModeChanged_Params params;
	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CalculateAnimalRotationRate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: SlowSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlowSpeedRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FastSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FastSpeedRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float ABP_AnimalBase_C::CalculateAnimalRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateAnimalRotationRate");

	struct ABP_AnimalBase_C_CalculateAnimalRotationRate_Params {
		float SlowSpeed;			//Offset: 0 | ElementSize: 4
		float SlowSpeedRate;			//Offset: 4 | ElementSize: 4
		float FastSpeed;			//Offset: 8 | ElementSize: 4
		float FastSpeedRate;			//Offset: 12 | ElementSize: 4
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	ABP_AnimalBase_C_CalculateAnimalRotationRate_Params params;
	params.SlowSpeed = SlowSpeed;
	params.SlowSpeedRate = SlowSpeedRate;
	params.FastSpeed = FastSpeed;
	params.FastSpeedRate = FastSpeedRate;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.LookingDirectionWithOffset
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OffsetInterpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NE_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NW_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SE_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SW_Angle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Buffer	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LookingDirectionWithOffset");

	struct ABP_AnimalBase_C_LookingDirectionWithOffset_Params {
		float OffsetInterpSpeed;			//Offset: 0 | ElementSize: 4
		float NE_Angle;			//Offset: 4 | ElementSize: 4
		float NW_Angle;			//Offset: 8 | ElementSize: 4
		float SE_Angle;			//Offset: 12 | ElementSize: 4
		float SW_Angle;			//Offset: 16 | ElementSize: 4
		float Buffer;			//Offset: 20 | ElementSize: 4
		struct FRotator TargetRotation;			//Offset: 24 | ElementSize: 12
	};
	ABP_AnimalBase_C_LookingDirectionWithOffset_Params params;
	params.OffsetInterpSpeed = OffsetInterpSpeed;
	params.NE_Angle = NE_Angle;
	params.NW_Angle = NW_Angle;
	params.SE_Angle = SE_Angle;
	params.SW_Angle = SW_Angle;
	params.Buffer = Buffer;

	UObject::ProcessEvent(fn, &params);
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalGaitModeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnAnimalGaitModeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalGaitModeChanged");

	struct ABP_AnimalBase_C_OnAnimalGaitModeChanged_Params {
	};
	ABP_AnimalBase_C_OnAnimalGaitModeChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalRotationModeChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnAnimalRotationModeChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnAnimalRotationModeChanged");

	struct ABP_AnimalBase_C_OnAnimalRotationModeChanged_Params {
	};
	ABP_AnimalBase_C_OnAnimalRotationModeChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.LimitRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AimYawLimit	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::LimitRotation(float AimYawLimit, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LimitRotation");

	struct ABP_AnimalBase_C_LimitRotation_Params {
		float AimYawLimit;			//Offset: 0 | ElementSize: 4
		float interpSpeed;			//Offset: 4 | ElementSize: 4
	};
	ABP_AnimalBase_C_LimitRotation_Params params;
	params.AimYawLimit = AimYawLimit;
	params.interpSpeed = interpSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetCurrentHP
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetCurrentHP(float CurrentHP) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetCurrentHP");

	struct ABP_AnimalBase_C_SetCurrentHP_Params {
		float CurrentHP;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetCurrentHP_Params params;
	params.CurrentHP = CurrentHP;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.AnimalBleed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::AnimalBleed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AnimalBleed");

	struct ABP_AnimalBase_C_AnimalBleed_Params {
	};
	ABP_AnimalBase_C_AnimalBleed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetMaxWalkSpeed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetMaxWalkSpeed(float MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetMaxWalkSpeed");

	struct ABP_AnimalBase_C_SetMaxWalkSpeed_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_SetMaxWalkSpeed_Params params;
	params.MaxWalkSpeed = MaxWalkSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CalculateMaxWalkSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: WalkSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateMaxWalkSpeed");

	struct ABP_AnimalBase_C_CalculateMaxWalkSpeed_Params {
		float WalkSpeed;			//Offset: 0 | ElementSize: 4
		float MaxWalkSpeed;			//Offset: 4 | ElementSize: 4
	};
	ABP_AnimalBase_C_CalculateMaxWalkSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	UObject::ProcessEvent(fn, &params);
	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnOwnershipSwap
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewOwnership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnOwnershipSwap(TEnumAsByte<E_Ownership> NewOwnership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnOwnershipSwap");

	struct ABP_AnimalBase_C_OnOwnershipSwap_Params {
		TEnumAsByte<E_Ownership> NewOwnership;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.LootImpaledItems
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::LootImpaledItems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.LootImpaledItems");

	struct ABP_AnimalBase_C_LootImpaledItems_Params {
	};
	ABP_AnimalBase_C_LootImpaledItems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IncreaseStuckCounter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Goal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::IncreaseStuckCounter(struct FVector Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IncreaseStuckCounter");

	struct ABP_AnimalBase_C_IncreaseStuckCounter_Params {
		struct FVector Goal;			//Offset: 0 | ElementSize: 12
	};
	ABP_AnimalBase_C_IncreaseStuckCounter_Params params;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ResetStuckCounter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ResetStuckCounter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ResetStuckCounter");

	struct ABP_AnimalBase_C_ResetStuckCounter_Params {
	};
	ABP_AnimalBase_C_ResetStuckCounter_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.TeleportTowardMoveLocation
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Goal	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::TeleportTowardMoveLocation(struct FVector Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.TeleportTowardMoveLocation");

	struct ABP_AnimalBase_C_TeleportTowardMoveLocation_Params {
		struct FVector Goal;			//Offset: 0 | ElementSize: 12
	};
	ABP_AnimalBase_C_TeleportTowardMoveLocation_Params params;
	params.Goal = Goal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetHusbandryDataToSave
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: HusbandryData	Type: struct FST_SAVE_HusbandryAnimals	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetHusbandryDataToSave(struct FST_SAVE_HusbandryAnimals* HusbandryData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetHusbandryDataToSave");

	struct ABP_AnimalBase_C_GetHusbandryDataToSave_Params {
		struct FST_SAVE_HusbandryAnimals HusbandryData;			//Offset: 0 | ElementSize: 112
	};
	ABP_AnimalBase_C_GetHusbandryDataToSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HusbandryData != nullptr)
		*HusbandryData = params.HusbandryData;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryDataFromSave
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HusbandryData	Type: struct FST_SAVE_HusbandryAnimals	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetHusbandryDataFromSave(struct FST_SAVE_HusbandryAnimals HusbandryData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetHusbandryDataFromSave");

	struct ABP_AnimalBase_C_SetHusbandryDataFromSave_Params {
		struct FST_SAVE_HusbandryAnimals HusbandryData;			//Offset: 0 | ElementSize: 112
	};
	ABP_AnimalBase_C_SetHusbandryDataFromSave_Params params;
	params.HusbandryData = HusbandryData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateCausers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausers");

	struct ABP_AnimalBase_C_UpdateCausers_Params {
	};
	ABP_AnimalBase_C_UpdateCausers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersStatus
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateCausersStatus() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersStatus");

	struct ABP_AnimalBase_C_UpdateCausersStatus_Params {
	};
	ABP_AnimalBase_C_UpdateCausersStatus_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetDamageCauserTag
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tag	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetDamageCauserTag(class AActor* Actor, struct FName* Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDamageCauserTag");

	struct ABP_AnimalBase_C_GetDamageCauserTag_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		struct FName Tag;			//Offset: 8 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetDamageCauserTag_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
	if (Tag != nullptr)
		*Tag = params.Tag;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.AddDamageCauser
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::AddDamageCauser(class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddDamageCauser");

	struct ABP_AnimalBase_C_AddDamageCauser_Params {
		class AActor* DamageCauser;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_AddDamageCauser_Params params;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.AddItems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::AddItems(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.AddItems");

	struct ABP_AnimalBase_C_AddItems_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_AddItems_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CalculateEncumberedSpeed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::CalculateEncumberedSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateEncumberedSpeed");

	struct ABP_AnimalBase_C_CalculateEncumberedSpeed_Params {
	};
	ABP_AnimalBase_C_CalculateEncumberedSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ChooseMaxWalkSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::ChooseMaxWalkSpeed(float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChooseMaxWalkSpeed");

	struct ABP_AnimalBase_C_ChooseMaxWalkSpeed_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_ChooseMaxWalkSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnIsMount
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnIsMount() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnIsMount");

	struct ABP_AnimalBase_C_OnIsMount_Params {
	};
	ABP_AnimalBase_C_OnIsMount_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnIsMounted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::OnIsMounted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnIsMounted");

	struct ABP_AnimalBase_C_OnIsMounted_Params {
	};
	ABP_AnimalBase_C_OnIsMounted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToMount
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ChangeBehaviorTreeToMount() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToMount");

	struct ABP_AnimalBase_C_ChangeBehaviorTreeToMount_Params {
	};
	ABP_AnimalBase_C_ChangeBehaviorTreeToMount_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToHusbandry
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ChangeBehaviorTreeToHusbandry() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ChangeBehaviorTreeToHusbandry");

	struct ABP_AnimalBase_C_ChangeBehaviorTreeToHusbandry_Params {
	};
	ABP_AnimalBase_C_ChangeBehaviorTreeToHusbandry_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CheckHedgehog
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::CheckHedgehog() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckHedgehog");

	struct ABP_AnimalBase_C_CheckHedgehog_Params {
	};
	ABP_AnimalBase_C_CheckHedgehog_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.EndCombatCausers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::EndCombatCausers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.EndCombatCausers");

	struct ABP_AnimalBase_C_EndCombatCausers_Params {
	};
	ABP_AnimalBase_C_EndCombatCausers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersCombat
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateCausersCombat() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateCausersCombat");

	struct ABP_AnimalBase_C_UpdateCausersCombat_Params {
	};
	ABP_AnimalBase_C_UpdateCausersCombat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ClearCausers
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ClearCausers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ClearCausers");

	struct ABP_AnimalBase_C_ClearCausers_Params {
	};
	ABP_AnimalBase_C_ClearCausers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.StartCombatForCauser
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Causer	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::StartCombatForCauser(class AActor* Causer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.StartCombatForCauser");

	struct ABP_AnimalBase_C_StartCombatForCauser_Params {
		class AActor* Causer;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_StartCombatForCauser_Params params;
	params.Causer = Causer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CheckMountedInteraction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::CheckMountedInteraction(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckMountedInteraction");

	struct ABP_AnimalBase_C_CheckMountedInteraction_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_CheckMountedInteraction_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ResetCausersTime
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::ResetCausersTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ResetCausersTime");

	struct ABP_AnimalBase_C_ResetCausersTime_Params {
	};
	ABP_AnimalBase_C_ResetCausersTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractAnimationMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractAnimation(class UAnimMontage** InteractAnimationMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAnimation");

	struct ABP_AnimalBase_C_GetInteractAnimation_Params {
		class UAnimMontage* InteractAnimationMontage;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetInteractAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractAnimationMontage != nullptr)
		*InteractAnimationMontage = params.InteractAnimationMontage;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.BoostComponentDebug
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::BoostComponentDebug() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.BoostComponentDebug");

	struct ABP_AnimalBase_C_BoostComponentDebug_Params {
	};
	ABP_AnimalBase_C_BoostComponentDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetMaterialVariation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::SetMaterialVariation() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetMaterialVariation");

	struct ABP_AnimalBase_C_SetMaterialVariation_Params {
	};
	ABP_AnimalBase_C_SetMaterialVariation_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CheckIsUnderMap
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalBase_C::CheckIsUnderMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckIsUnderMap");

	struct ABP_AnimalBase_C_CheckIsUnderMap_Params {
	};
	ABP_AnimalBase_C_CheckIsUnderMap_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.UpdateReputationOnHit
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SubtractedHealth	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::UpdateReputationOnHit(float SubtractedHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.UpdateReputationOnHit");

	struct ABP_AnimalBase_C_UpdateReputationOnHit_Params {
		float SubtractedHealth;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_UpdateReputationOnHit_Params params;
	params.SubtractedHealth = SubtractedHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CalculateActorLocationAndRotationInRagdoll
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RagdollRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RagdollLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ActorRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: actorLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::CalculateActorLocationAndRotationInRagdoll(struct FRotator RagdollRotation, struct FVector RagdollLocation, struct FRotator* ActorRotation, struct FVector* actorLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CalculateActorLocationAndRotationInRagdoll");

	struct ABP_AnimalBase_C_CalculateActorLocationAndRotationInRagdoll_Params {
		struct FRotator RagdollRotation;			//Offset: 0 | ElementSize: 12
		struct FVector RagdollLocation;			//Offset: 12 | ElementSize: 12
		struct FRotator ActorRotation;			//Offset: 24 | ElementSize: 12
		struct FVector actorLocation;			//Offset: 36 | ElementSize: 12
	};
	ABP_AnimalBase_C_CalculateActorLocationAndRotationInRagdoll_Params params;
	params.RagdollRotation = RagdollRotation;
	params.RagdollLocation = RagdollLocation;

	UObject::ProcessEvent(fn, &params);
	if (ActorRotation != nullptr)
		*ActorRotation = params.ActorRotation;
	if (actorLocation != nullptr)
		*actorLocation = params.actorLocation;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetFear
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FearFactor	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetFear(int32_t* FearFactor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFear");

	struct ABP_AnimalBase_C_GetFear_Params {
		int32_t FearFactor;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetFear_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FearFactor != nullptr)
		*FearFactor = params.FearFactor;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetFleeingTimer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FleeingTimer	Type: struct FTimerHandle	Flags: Parm, OutParm, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetFleeingTimer(struct FTimerHandle* FleeingTimer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFleeingTimer");

	struct ABP_AnimalBase_C_GetFleeingTimer_Params {
		struct FTimerHandle FleeingTimer;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetFleeingTimer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FleeingTimer != nullptr)
		*FleeingTimer = params.FleeingTimer;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInventoryComponent_AnimalBPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InventoryComponent	Type: class UActorComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInventoryComponent_AnimalBPI(class UActorComponent** InventoryComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInventoryComponent_AnimalBPI");

	struct ABP_AnimalBase_C_GetInventoryComponent_AnimalBPI_Params {
		class UActorComponent* InventoryComponent;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetInventoryComponent_AnimalBPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetForSale
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ForSale	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetForSale(bool* ForSale) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetForSale");

	struct ABP_AnimalBase_C_GetForSale_Params {
		bool ForSale;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetForSale_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ForSale != nullptr)
		*ForSale = params.ForSale;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Buy
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Price	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetPrice_Buy(int32_t* Price) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Buy");

	struct ABP_AnimalBase_C_GetPrice_Buy_Params {
		int32_t Price;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetPrice_Buy_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Price != nullptr)
		*Price = params.Price;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Sell
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Price	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetPrice_Sell(int32_t* Price) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetPrice_Sell");

	struct ABP_AnimalBase_C_GetPrice_Sell_Params {
		int32_t Price;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetPrice_Sell_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Price != nullptr)
		*Price = params.Price;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalWorldLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetAnimalWorldLocation(struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalWorldLocation");

	struct ABP_AnimalBase_C_GetAnimalWorldLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	ABP_AnimalBase_C_GetAnimalWorldLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Height	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetAnimalHeight(float* Height) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalHeight");

	struct ABP_AnimalBase_C_GetAnimalHeight_Params {
		float Height;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetAnimalHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Height != nullptr)
		*Height = params.Height;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRowName BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SwitchAnimals_RowName	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRowName BPI");

	struct ABP_AnimalBase_C_GetAnimalRowName_BPI_Params {
		struct FName SwitchAnimals_RowName;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetAnimalRowName_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SwitchAnimals_RowName != nullptr)
		*SwitchAnimals_RowName = params.SwitchAnimals_RowName;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetDead
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetDead(bool* Dead) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDead");

	struct ABP_AnimalBase_C_GetDead_Params {
		bool Dead;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetDead_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Dead != nullptr)
		*Dead = params.Dead;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.WarnAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EngageActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::WarnAnimal(class AActor* EngageActor, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.WarnAnimal");

	struct ABP_AnimalBase_C_WarnAnimal_Params {
		class AActor* EngageActor;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_WarnAnimal_Params params;
	params.EngageActor = EngageActor;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalCustomName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetAnimalCustomName(struct FString* CustomName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalCustomName");

	struct ABP_AnimalBase_C_GetAnimalCustomName_Params {
		struct FString CustomName;			//Offset: 0 | ElementSize: 16
	};
	ABP_AnimalBase_C_GetAnimalCustomName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CustomName != nullptr)
		*CustomName = params.CustomName;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetOccupyByNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OccupyByNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetOccupyByNPC(bool* OccupyByNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOccupyByNPC");

	struct ABP_AnimalBase_C_GetOccupyByNPC_Params {
		bool OccupyByNPC;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetOccupyByNPC_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OccupyByNPC != nullptr)
		*OccupyByNPC = params.OccupyByNPC;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetSkinningSocketLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkinningSocketLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetSkinningSocketLocation(struct FVector* SkinningSocketLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSkinningSocketLocation");

	struct ABP_AnimalBase_C_GetSkinningSocketLocation_Params {
		struct FVector SkinningSocketLocation;			//Offset: 0 | ElementSize: 12
	};
	ABP_AnimalBase_C_GetSkinningSocketLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SkinningSocketLocation != nullptr)
		*SkinningSocketLocation = params.SkinningSocketLocation;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetAnimalType(TEnumAsByte<E_AnimalType>* AnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalType");

	struct ABP_AnimalBase_C_GetAnimalType_Params {
		TEnumAsByte<E_AnimalType> AnimalType;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetAnimalType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AnimalType != nullptr)
		*AnimalType = params.AnimalType;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMass
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mass	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetMass(float* Mass) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMass");

	struct ABP_AnimalBase_C_GetMass_Params {
		float Mass;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetMass_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mass != nullptr)
		*Mass = params.Mass;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CanPushOthers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPushOthers	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::CanPushOthers(bool* CanPushOthers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CanPushOthers");

	struct ABP_AnimalBase_C_CanPushOthers_Params {
		bool CanPushOthers;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_CanPushOthers_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanPushOthers != nullptr)
		*CanPushOthers = params.CanPushOthers;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMesh_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetMesh_BPI(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMesh_BPI");

	struct ABP_AnimalBase_C_GetMesh_BPI_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetMesh_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetSleepSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SleepSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetSleepSlotIndex(int32_t* SleepSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSleepSlotIndex");

	struct ABP_AnimalBase_C_GetSleepSlotIndex_Params {
		int32_t SleepSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetSleepSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SleepSlotIndex != nullptr)
		*SleepSlotIndex = params.SleepSlotIndex;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsMoving_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsMoving	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsMoving_BPI(bool* IsMoving) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMoving_BPI");

	struct ABP_AnimalBase_C_IsMoving_BPI_Params {
		bool IsMoving;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsMoving_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsMoving != nullptr)
		*IsMoving = params.IsMoving;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IAnimal_CalculateEncumberedSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IAnimal_CalculateEncumberedSpeed(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IAnimal_CalculateEncumberedSpeed");

	struct ABP_AnimalBase_C_IAnimal_CalculateEncumberedSpeed_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IAnimal_CalculateEncumberedSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IAnimal_GetTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::IAnimal_GetTime(struct FST_Time* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IAnimal_GetTime");

	struct ABP_AnimalBase_C_IAnimal_GetTime_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	ABP_AnimalBase_C_IAnimal_GetTime_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetOwnership_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetOwnership_BPI(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOwnership_BPI");

	struct ABP_AnimalBase_C_GetOwnership_BPI_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetOwnership_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetVoiceComponent
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Voice	Type: class UAudioComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetVoiceComponent(class UAudioComponent** Voice) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetVoiceComponent");

	struct ABP_AnimalBase_C_GetVoiceComponent_Params {
		class UAudioComponent* Voice;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetVoiceComponent_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Voice != nullptr)
		*Voice = params.Voice;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetHalfAnimalHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HalfHeight	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetHalfAnimalHeight(float* HalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetHalfAnimalHeight");

	struct ABP_AnimalBase_C_GetHalfAnimalHeight_Params {
		float HalfHeight;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetHalfAnimalHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HalfHeight != nullptr)
		*HalfHeight = params.HalfHeight;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRadius
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Radius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetAnimalRadius(float* Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetAnimalRadius");

	struct ABP_AnimalBase_C_GetAnimalRadius_Params {
		float Radius;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetAnimalRadius_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Radius != nullptr)
		*Radius = params.Radius;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowPressUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowTimerUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ShowOnlyName	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsInteractable");

	struct ABP_AnimalBase_C_IsInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
		bool ShowPressUI;			//Offset: 10 | ElementSize: 1
		bool ShowTimerUI;			//Offset: 11 | ElementSize: 1
		bool ShowOnlyName;			//Offset: 12 | ElementSize: 1
		float Time;			//Offset: 16 | ElementSize: 4
		float Distance;			//Offset: 20 | ElementSize: 4
	};
	ABP_AnimalBase_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractActionText	Type: struct FText	Flags: Parm, OutParm
// Name: InteractSecondActionText	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAction");

	struct ABP_AnimalBase_C_GetInteractAction_Params {
		struct FText InteractActionText;			//Offset: 0 | ElementSize: 24
		struct FText InteractSecondActionText;			//Offset: 24 | ElementSize: 24
	};
	ABP_AnimalBase_C_GetInteractAction_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractActionText != nullptr)
		*InteractActionText = params.InteractActionText;
	if (InteractSecondActionText != nullptr)
		*InteractSecondActionText = params.InteractSecondActionText;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InteractName	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractName");

	struct ABP_AnimalBase_C_GetInteractName_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FText InteractName;			//Offset: 8 | ElementSize: 24
	};
	ABP_AnimalBase_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (InteractName != nullptr)
		*InteractName = params.InteractName;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool");

	struct ABP_AnimalBase_C_GetInteractTool_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> Tool;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Tool != nullptr)
		*Tool = params.Tool;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCount
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Count	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractCount(int32_t* Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCount");

	struct ABP_AnimalBase_C_GetInteractCount_Params {
		int32_t Count;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetInteractCount_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Count != nullptr)
		*Count = params.Count;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetHeldItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeldItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetHeldItem");

	struct ABP_AnimalBase_C_GetHeldItem_Params {
		class ABP_MasterHoldableItem_C* HeldItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetHeldItem_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HeldItem != nullptr)
		*HeldItem = params.HeldItem;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetResourceType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResourceType	Type: TEnumAsByte<E_Resources>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetResourceType(TEnumAsByte<E_Resources>* ResourceType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetResourceType");

	struct ABP_AnimalBase_C_GetResourceType_Params {
		TEnumAsByte<E_Resources> ResourceType;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetResourceType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CheckOccupied
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Character	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::CheckOccupied(class APawn** Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CheckOccupied");

	struct ABP_AnimalBase_C_CheckOccupied_Params {
		class APawn* Character;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_CheckOccupied_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Character != nullptr)
		*Character = params.Character;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable");

	struct ABP_AnimalBase_C_IsToolInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetNPCInteractTime(float* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetNPCInteractTime");

	struct ABP_AnimalBase_C_GetNPCInteractTime_Params {
		float Time;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetNPCInteractTime_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable_UI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsToolInteractable_UI");

	struct ABP_AnimalBase_C_IsToolInteractable_UI_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool_UI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BagMode	Type: TEnumAsByte<E_BagMode>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingMode	Type: TEnumAsByte<E_BuildingModifications>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools>* Tool, TEnumAsByte<E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications>* BuildingMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTool_UI");

	struct ABP_AnimalBase_C_GetInteractTool_UI_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Tools> Tool;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_BagMode> BagMode;			//Offset: 9 | ElementSize: 1
		TEnumAsByte<E_BuildingModifications> BuildingMode;			//Offset: 10 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetInteractTool_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Tool != nullptr)
		*Tool = params.Tool;
	if (BagMode != nullptr)
		*BagMode = params.BagMode;
	if (BuildingMode != nullptr)
		*BuildingMode = params.BuildingMode;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetFluidType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FluidType	Type: TEnumAsByte<E_Fluids>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetFluidType(TEnumAsByte<E_Fluids>* FluidType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFluidType");

	struct ABP_AnimalBase_C_GetFluidType_Params {
		TEnumAsByte<E_Fluids> FluidType;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetFluidType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FluidType != nullptr)
		*FluidType = params.FluidType;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractResources
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Show	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Resources	Type: TArray<struct FST_ItemResource>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractResources");

	struct ABP_AnimalBase_C_GetInteractResources_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Show;			//Offset: 8 | ElementSize: 1
		TArray<struct FST_ItemResource> Resources;			//Offset: 16 | ElementSize: 16
	};
	ABP_AnimalBase_C_GetInteractResources_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Show != nullptr)
		*Show = params.Show;
	if (Resources != nullptr)
		*Resources = params.Resources;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTitle
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Show	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Title	Type: struct FText	Flags: Parm, OutParm
// Name: ShowAdditionalTitle1	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalTitleText1	Type: struct FText	Flags: Parm, OutParm
// Name: ShowAdditionalTitle2	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalTitleText2	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractTitle");

	struct ABP_AnimalBase_C_GetInteractTitle_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Show;			//Offset: 8 | ElementSize: 1
		struct FText Title;			//Offset: 16 | ElementSize: 24
		bool ShowAdditionalTitle1;			//Offset: 40 | ElementSize: 1
		struct FText AdditionalTitleText1;			//Offset: 48 | ElementSize: 24
		bool ShowAdditionalTitle2;			//Offset: 72 | ElementSize: 1
		struct FText AdditionalTitleText2;			//Offset: 80 | ElementSize: 24
	};
	ABP_AnimalBase_C_GetInteractTitle_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Show != nullptr)
		*Show = params.Show;
	if (Title != nullptr)
		*Title = params.Title;
	if (ShowAdditionalTitle1 != nullptr)
		*ShowAdditionalTitle1 = params.ShowAdditionalTitle1;
	if (AdditionalTitleText1 != nullptr)
		*AdditionalTitleText1 = params.AdditionalTitleText1;
	if (ShowAdditionalTitle2 != nullptr)
		*ShowAdditionalTitle2 = params.ShowAdditionalTitle2;
	if (AdditionalTitleText2 != nullptr)
		*AdditionalTitleText2 = params.AdditionalTitleText2;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetOwnershipType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetOwnershipType(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOwnershipType");

	struct ABP_AnimalBase_C_GetOwnershipType_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetOwnershipType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsToolNeeded
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckTools	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsToolNeeded");

	struct ABP_AnimalBase_C_IsToolNeeded_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckTools;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractCondition
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckCondition	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsInteractCondition");

	struct ABP_AnimalBase_C_IsInteractCondition_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckCondition;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CheckCondition != nullptr)
		*CheckCondition = params.CheckCondition;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCondition
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Condition	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomText	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Text	Type: struct FText	Flags: Parm, OutParm
// Name: CustomColor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractCondition");

	struct ABP_AnimalBase_C_GetInteractCondition_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FHitResult Hit;			//Offset: 8 | ElementSize: 136
		float Condition;			//Offset: 144 | ElementSize: 4
		bool CustomText;			//Offset: 148 | ElementSize: 1
		struct FText Text;			//Offset: 152 | ElementSize: 24
		bool CustomColor;			//Offset: 176 | ElementSize: 1
		struct FLinearColor Color;			//Offset: 180 | ElementSize: 16
	};
	ABP_AnimalBase_C_GetInteractCondition_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
	if (Condition != nullptr)
		*Condition = params.Condition;
	if (CustomText != nullptr)
		*CustomText = params.CustomText;
	if (Text != nullptr)
		*Text = params.Text;
	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetOff-HandItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Off_HandItem	Type: class ABP_MasterHoldableItem_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOff-HandItem");

	struct ABP_AnimalBase_C_GetOff_HandItem_Params {
		class ABP_MasterHoldableItem_C* Off_HandItem;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetOff_HandItem_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Off_HandItem != nullptr)
		*Off_HandItem = params.Off_HandItem;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractionDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractionDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractionDistance");

	struct ABP_AnimalBase_C_GetInteractionDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetInteractionDistance_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetID(struct FName* ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetID");

	struct ABP_AnimalBase_C_GetID_Params {
		struct FName ID;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ID != nullptr)
		*ID = params.ID;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetFishData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: struct FST_ItemResource	Flags: Parm, OutParm, NoDestructor, HasGetValueTypeHash
// Name: Transform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetFishData");

	struct ABP_AnimalBase_C_GetFishData_Params {
		struct FST_ItemResource Item;			//Offset: 0 | ElementSize: 24
		struct FTransform Transform;			//Offset: 32 | ElementSize: 48
	};
	ABP_AnimalBase_C_GetFishData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Item != nullptr)
		*Item = params.Item;
	if (Transform != nullptr)
		*Transform = params.Transform;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsInteractAdditionalStatus
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShowStatus	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsInteractAdditionalStatus");

	struct ABP_AnimalBase_C_IsInteractAdditionalStatus_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool ShowStatus;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAdditionalStatus
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CustomColor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Color	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Status	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractAdditionalStatus");

	struct ABP_AnimalBase_C_GetInteractAdditionalStatus_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CustomColor;			//Offset: 8 | ElementSize: 1
		struct FLinearColor Color;			//Offset: 12 | ElementSize: 16
		struct FText Status;			//Offset: 32 | ElementSize: 24
	};
	ABP_AnimalBase_C_GetInteractAdditionalStatus_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CustomColor != nullptr)
		*CustomColor = params.CustomColor;
	if (Color != nullptr)
		*Color = params.Color;
	if (Status != nullptr)
		*Status = params.Status;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsItemInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Possibility	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsItemInteractable");

	struct ABP_AnimalBase_C_IsItemInteractable_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool Interactable;			//Offset: 8 | ElementSize: 1
		bool Possibility;			//Offset: 9 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsItemInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetInteractItem
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ItemHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetInteractItem");

	struct ABP_AnimalBase_C_GetInteractItem_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		struct FDataTableRowHandle ItemHandler;			//Offset: 8 | ElementSize: 16
	};
	ABP_AnimalBase_C_GetInteractItem_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (ItemHandler != nullptr)
		*ItemHandler = params.ItemHandler;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsItemNeeded
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckItems	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsItemNeeded");

	struct ABP_AnimalBase_C_IsItemNeeded_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
		bool CheckItems;			//Offset: 8 | ElementSize: 1
		bool Success;			//Offset: 9 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsItemNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
	if (CheckItems != nullptr)
		*CheckItems = params.CheckItems;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsGrabbable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Grabbable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::IsGrabbable(bool* Grabbable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsGrabbable");

	struct ABP_AnimalBase_C_IsGrabbable_Params {
		bool Grabbable;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsGrabbable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Grabbable != nullptr)
		*Grabbable = params.Grabbable;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetToolType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolActivityType	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetToolType(TEnumAsByte<E_Tools>* ToolType, TEnumAsByte<E_Tools_Activity>* ToolActivityType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetToolType");

	struct ABP_AnimalBase_C_GetToolType_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> ToolActivityType;			//Offset: 1 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetToolType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToolType != nullptr)
		*ToolType = params.ToolType;
	if (ToolActivityType != nullptr)
		*ToolActivityType = params.ToolActivityType;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetNPC_Interactable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Interactable	Type: TArray<bool>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetNPC_Interactable(TArray<bool>* NPC_Interactable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetNPC_Interactable");

	struct ABP_AnimalBase_C_GetNPC_Interactable_Params {
		TArray<bool> NPC_Interactable;			//Offset: 0 | ElementSize: 16
	};
	ABP_AnimalBase_C_GetNPC_Interactable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_Interactable != nullptr)
		*NPC_Interactable = params.NPC_Interactable;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.PrepareToMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: linkedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PrepareToMount");

	struct ABP_AnimalBase_C_PrepareToMount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		class AActor* linkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	ABP_AnimalBase_C_PrepareToMount_Params params;
	params.mountOrRider = mountOrRider;
	params.linkedActor = linkedActor;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.PrepareToDismount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountOrRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.PrepareToDismount");

	struct ABP_AnimalBase_C_PrepareToDismount_Params {
		class AActor* mountOrRider;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	ABP_AnimalBase_C_PrepareToDismount_Params params;
	params.mountOrRider = mountOrRider;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsMounted
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMounted");

	struct ABP_AnimalBase_C_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsMounted_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterPawn
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class APawn* ABP_AnimalBase_C::GetCharacterPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterPawn");

	struct ABP_AnimalBase_C_GetCharacterPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetCharacterPawn_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterMount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AActor* ABP_AnimalBase_C::GetCharacterMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterMount");

	struct ABP_AnimalBase_C_GetCharacterMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetCharacterMount_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterController
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class AController* ABP_AnimalBase_C::GetCharacterController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCharacterController");

	struct ABP_AnimalBase_C_GetCharacterController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetCharacterController_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedById
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: rider	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::SetSeatOccupiedById(int32_t seatId, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedById");

	struct ABP_AnimalBase_C_SetSeatOccupiedById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetSeatOccupiedById_Params params;
	params.seatId = seatId;
	params.rider = rider;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedAtIndex
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: rider	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::SetSeatOccupiedAtIndex(int32_t seatIndex, class APawn* rider) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.SetSeatOccupiedAtIndex");

	struct ABP_AnimalBase_C_SetSeatOccupiedAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		class APawn* rider;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	ABP_AnimalBase_C_SetSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;
	params.rider = rider;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedMounting
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: mountedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::OnRiderFinishedMounting(class AActor* mountedActor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedMounting");

	struct ABP_AnimalBase_C_OnRiderFinishedMounting_Params {
		class AActor* mountedActor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	ABP_AnimalBase_C_OnRiderFinishedMounting_Params params;
	params.mountedActor = mountedActor;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedDismounting
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: dismountedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::OnRiderFinishedDismounting(class AActor* dismountedActor, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedDismounting");

	struct ABP_AnimalBase_C_OnRiderFinishedDismounting_Params {
		class AActor* dismountedActor;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
		bool ReturnValue;			//Offset: 12 | ElementSize: 1
	};
	ABP_AnimalBase_C_OnRiderFinishedDismounting_Params params;
	params.dismountedActor = dismountedActor;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedChangingSeats
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: rider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: newSeatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: oldSeatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::OnRiderFinishedChangingSeats(class AActor* rider, int32_t newSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.OnRiderFinishedChangingSeats");

	struct ABP_AnimalBase_C_OnRiderFinishedChangingSeats_Params {
		class AActor* rider;			//Offset: 0 | ElementSize: 8
		int32_t newSeatId;			//Offset: 8 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 12 | ElementSize: 4
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	ABP_AnimalBase_C_OnRiderFinishedChangingSeats_Params params;
	params.rider = rider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.MustHaveDriver
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::MustHaveDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.MustHaveDriver");

	struct ABP_AnimalBase_C_MustHaveDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_MustHaveDriver_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedById
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsSeatOccupiedById(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedById");

	struct ABP_AnimalBase_C_IsSeatOccupiedById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsSeatOccupiedById_Params params;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedAtIndex
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsSeatOccupiedAtIndex(int32_t seatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsSeatOccupiedAtIndex");

	struct ABP_AnimalBase_C_IsSeatOccupiedAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsSeatOccupiedAtIndex_Params params;
	params.seatIndex = seatIndex;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsMountableByPawn
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: newRider	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsMountableByPawn(class APawn* newRider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMountableByPawn");

	struct ABP_AnimalBase_C_IsMountableByPawn_Params {
		class APawn* newRider;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsMountableByPawn_Params params;
	params.newRider = newRider;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsMountableActor
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsMountableActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsMountableActor");

	struct ABP_AnimalBase_C_IsMountableActor_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsMountableActor_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsDriverSeat
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: SeatData	Type: struct FSeatData	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsDriverSeat(const struct FSeatData& SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsDriverSeat");

	struct ABP_AnimalBase_C_IsDriverSeat_Params {
		struct FSeatData SeatData;			//Offset: 0 | ElementSize: 48
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsDriverSeat_Params params;
	params.SeatData = SeatData;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.IsDriverReady
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::IsDriverReady()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.IsDriverReady");

	struct ABP_AnimalBase_C_IsDriverReady_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_IsDriverReady_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.HasPassangers
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::HasPassangers()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.HasPassangers");

	struct ABP_AnimalBase_C_HasPassangers_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_HasPassangers_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.HasDriver
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::HasDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.HasDriver");

	struct ABP_AnimalBase_C_HasDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_HasDriver_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataById
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::GetSeatDataById(int32_t seatId, struct FSeatData* SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataById");

	struct ABP_AnimalBase_C_GetSeatDataById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 8 | ElementSize: 48
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetSeatDataById_Params params;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	if (SeatData != nullptr)
		*SeatData = params.SeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataAtIndex
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeatData	Type: struct FSeatData	Flags: Parm, OutParm
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::GetSeatDataAtIndex(int32_t Index, struct FSeatData* SeatData)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSeatDataAtIndex");

	struct ABP_AnimalBase_C_GetSeatDataAtIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FSeatData SeatData;			//Offset: 8 | ElementSize: 48
		bool ReturnValue;			//Offset: 56 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetSeatDataAtIndex_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SeatData != nullptr)
		*SeatData = params.SeatData;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeMountDirection
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: rider	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
EMountingDirection ABP_AnimalBase_C::GetRelativeMountDirection(class APawn* rider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeMountDirection");

	struct ABP_AnimalBase_C_GetRelativeMountDirection_Params {
		class APawn* rider;			//Offset: 0 | ElementSize: 8
		EMountingDirection ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetRelativeMountDirection_Params params;
	params.rider = rider;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeDismountDirection
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: rider	Type: class APawn*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: EMountingDirection	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
EMountingDirection ABP_AnimalBase_C::GetRelativeDismountDirection(class APawn* rider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetRelativeDismountDirection");

	struct ABP_AnimalBase_C_GetRelativeDismountDirection_Params {
		class APawn* rider;			//Offset: 0 | ElementSize: 8
		EMountingDirection ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetRelativeDismountDirection_Params params;
	params.rider = rider;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMountBody
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: class UMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UMeshComponent* ABP_AnimalBase_C::GetMountBody(int32_t seatId)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountBody");

	struct ABP_AnimalBase_C_GetMountBody_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		class UMeshComponent* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetMountBody_Params params;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMountablePawnComponent
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMountablePawnComponent*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UMountablePawnComponent* ABP_AnimalBase_C::GetMountablePawnComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountablePawnComponent");

	struct ABP_AnimalBase_C_GetMountablePawnComponent_Params {
		class UMountablePawnComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetMountablePawnComponent_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMaxRiders
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_AnimalBase_C::GetMaxRiders()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMaxRiders");

	struct ABP_AnimalBase_C_GetMaxRiders_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetMaxRiders_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetDriver
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class APawn* ABP_AnimalBase_C::GetDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDriver");

	struct ABP_AnimalBase_C_GetDriver_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetDriver_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetCurrentRiderCount
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
int32_t ABP_AnimalBase_C::GetCurrentRiderCount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetCurrentRiderCount");

	struct ABP_AnimalBase_C_GetCurrentRiderCount_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetCurrentRiderCount_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.FindAvailableMountingPosition
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: Position	Type: EMountingDirection	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: riderLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: outSeatData	Type: struct FSeatData	Flags: Parm, OutParm
// Name: outSeatIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::FindAvailableMountingPosition(EMountingDirection Position, struct FVector riderLocation, struct FSeatData* outSeatData, int32_t* outSeatIndex)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.FindAvailableMountingPosition");

	struct ABP_AnimalBase_C_FindAvailableMountingPosition_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		struct FVector riderLocation;			//Offset: 4 | ElementSize: 12
		struct FSeatData outSeatData;			//Offset: 16 | ElementSize: 48
		int32_t outSeatIndex;			//Offset: 64 | ElementSize: 4
		bool ReturnValue;			//Offset: 68 | ElementSize: 1
	};
	ABP_AnimalBase_C_FindAvailableMountingPosition_Params params;
	params.Position = Position;
	params.riderLocation = riderLocation;

	UObject::ProcessEvent(fn, &params);
	if (outSeatData != nullptr)
		*outSeatData = params.outSeatData;
	if (outSeatIndex != nullptr)
		*outSeatIndex = params.outSeatIndex;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatById
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::ClearSeatById(int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatById");

	struct ABP_AnimalBase_C_ClearSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	ABP_AnimalBase_C_ClearSeatById_Params params;
	params.seatId = seatId;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatAtIndex
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: seatIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::ClearSeatAtIndex(int32_t seatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.ClearSeatAtIndex");

	struct ABP_AnimalBase_C_ClearSeatAtIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	ABP_AnimalBase_C_ClearSeatAtIndex_Params params;
	params.seatIndex = seatIndex;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CanMountAtPosition
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: riderLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: desiredMountingPosition	Type: EMountingDirection	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::CanMountAtPosition(struct FVector riderLocation, EMountingDirection desiredMountingPosition)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CanMountAtPosition");

	struct ABP_AnimalBase_C_CanMountAtPosition_Params {
		struct FVector riderLocation;			//Offset: 0 | ElementSize: 12
		EMountingDirection desiredMountingPosition;			//Offset: 12 | ElementSize: 1
		bool ReturnValue;			//Offset: 13 | ElementSize: 1
	};
	ABP_AnimalBase_C_CanMountAtPosition_Params params;
	params.riderLocation = riderLocation;
	params.desiredMountingPosition = desiredMountingPosition;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.CanMountActor
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: newRider	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::CanMountActor(class AActor* newRider)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.CanMountActor");

	struct ABP_AnimalBase_C_CanMountActor_Params {
		class AActor* newRider;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalBase_C_CanMountActor_Params params;
	params.newRider = newRider;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.HasPassengers
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_AnimalBase_C::HasPassengers()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.HasPassengers");

	struct ABP_AnimalBase_C_HasPassengers_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_HasPassengers_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetShouldSprint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShouldSprint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetShouldSprint(bool* ShouldSprint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetShouldSprint");

	struct ABP_AnimalBase_C_GetShouldSprint_Params {
		bool ShouldSprint;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetShouldSprint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ShouldSprint != nullptr)
		*ShouldSprint = params.ShouldSprint;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetSprintKeyDown
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSprintKeyDown	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetSprintKeyDown(bool* IsSprintKeyDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetSprintKeyDown");

	struct ABP_AnimalBase_C_GetSprintKeyDown_Params {
		bool IsSprintKeyDown;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalBase_C_GetSprintKeyDown_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsSprintKeyDown != nullptr)
		*IsSprintKeyDown = params.IsSprintKeyDown;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Rotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetMountCameraRotation(struct FRotator* Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraRotation");

	struct ABP_AnimalBase_C_GetMountCameraRotation_Params {
		struct FRotator Rotation;			//Offset: 0 | ElementSize: 12
	};
	ABP_AnimalBase_C_GetMountCameraRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraAndArm
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Canera	Type: class UCameraComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpringArm	Type: class USpringArmComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetMountCameraAndArm(bool* IsValid, class UCameraComponent** Canera, class USpringArmComponent** SpringArm) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetMountCameraAndArm");

	struct ABP_AnimalBase_C_GetMountCameraAndArm_Params {
		bool IsValid;			//Offset: 0 | ElementSize: 1
		class UCameraComponent* Canera;			//Offset: 8 | ElementSize: 8
		class USpringArmComponent* SpringArm;			//Offset: 16 | ElementSize: 8
	};
	ABP_AnimalBase_C_GetMountCameraAndArm_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Canera != nullptr)
		*Canera = params.Canera;
	if (SpringArm != nullptr)
		*SpringArm = params.SpringArm;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetDistance
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetDistance(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetDistance");

	struct ABP_AnimalBase_C_GetDistance_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetDistance_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_AnimalBase.BP_AnimalBase_C.GetOptimalizationStage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalBase_C::GetOptimalizationStage(int32_t* Stage) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalBase.BP_AnimalBase_C.GetOptimalizationStage");

	struct ABP_AnimalBase_C_GetOptimalizationStage_Params {
		int32_t Stage;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalBase_C_GetOptimalizationStage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Stage != nullptr)
		*Stage = params.Stage;
}

#pragma endregion
}