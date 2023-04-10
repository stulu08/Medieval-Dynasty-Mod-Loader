#include "../SDK.h"
#include "BP_FlyingAnimalBase_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_FlyingAnimalBase_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 2528);
}
struct FPointerToUberGraphFrame* ABP_FlyingAnimalBase_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 2528);
}
void ABP_FlyingAnimalBase_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 2528, value);
}
// Member Getter and Setter of BP_AquaticInteraction_Chest
// Declaration: class UBP_AquaticInteraction_C* BP_AquaticInteraction_Chest
class UBP_AquaticInteraction_C* ABP_FlyingAnimalBase_C::M_GetBP_AquaticInteraction_Chest() const {
	return Read<class UBP_AquaticInteraction_C*>((byte*)this + 2536);
}
class UBP_AquaticInteraction_C** ABP_FlyingAnimalBase_C::M_PtrGetBP_AquaticInteraction_Chest() {
	return reinterpret_cast<class UBP_AquaticInteraction_C**>((byte*)this + 2536);
}
void ABP_FlyingAnimalBase_C::M_SetBP_AquaticInteraction_Chest(const class UBP_AquaticInteraction_C*& value) {
	Write((byte*)this + 2536, value);
}
// Member Getter and Setter of NavigationInvoker
// Declaration: class UNavigationInvokerComponent* NavigationInvoker
class UNavigationInvokerComponent* ABP_FlyingAnimalBase_C::M_GetNavigationInvoker() const {
	return Read<class UNavigationInvokerComponent*>((byte*)this + 2544);
}
class UNavigationInvokerComponent** ABP_FlyingAnimalBase_C::M_PtrGetNavigationInvoker() {
	return reinterpret_cast<class UNavigationInvokerComponent**>((byte*)this + 2544);
}
void ABP_FlyingAnimalBase_C::M_SetNavigationInvoker(const class UNavigationInvokerComponent*& value) {
	Write((byte*)this + 2544, value);
}
// Member Getter and Setter of AIPerceptionStimuliSource
// Declaration: class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource
class UAIPerceptionStimuliSourceComponent* ABP_FlyingAnimalBase_C::M_GetAIPerceptionStimuliSource() const {
	return Read<class UAIPerceptionStimuliSourceComponent*>((byte*)this + 2552);
}
class UAIPerceptionStimuliSourceComponent** ABP_FlyingAnimalBase_C::M_PtrGetAIPerceptionStimuliSource() {
	return reinterpret_cast<class UAIPerceptionStimuliSourceComponent**>((byte*)this + 2552);
}
void ABP_FlyingAnimalBase_C::M_SetAIPerceptionStimuliSource(const class UAIPerceptionStimuliSourceComponent*& value) {
	Write((byte*)this + 2552, value);
}
// Member Getter and Setter of AIPerception
// Declaration: class UAIPerceptionComponent* AIPerception
class UAIPerceptionComponent* ABP_FlyingAnimalBase_C::M_GetAIPerception() const {
	return Read<class UAIPerceptionComponent*>((byte*)this + 2560);
}
class UAIPerceptionComponent** ABP_FlyingAnimalBase_C::M_PtrGetAIPerception() {
	return reinterpret_cast<class UAIPerceptionComponent**>((byte*)this + 2560);
}
void ABP_FlyingAnimalBase_C::M_SetAIPerception(const class UAIPerceptionComponent*& value) {
	Write((byte*)this + 2560, value);
}
// Member Getter and Setter of AnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159
// Declaration: float AnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159
float ABP_FlyingAnimalBase_C::M_GetAnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159() const {
	return Read<float>((byte*)this + 2568);
}
float* ABP_FlyingAnimalBase_C::M_PtrGetAnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159() {
	return reinterpret_cast<float*>((byte*)this + 2568);
}
void ABP_FlyingAnimalBase_C::M_SetAnimPhysicsBlend_Alpha_15A04225443DB36EEEE57E857E113159(const float& value) {
	Write((byte*)this + 2568, value);
}
// Member Getter and Setter of AnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159
// Declaration: TEnumAsByte<ETimelineDirection> AnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159
TEnumAsByte<ETimelineDirection> ABP_FlyingAnimalBase_C::M_GetAnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159() const {
	return Read<TEnumAsByte<ETimelineDirection>>((byte*)this + 2572);
}
TEnumAsByte<ETimelineDirection>* ABP_FlyingAnimalBase_C::M_PtrGetAnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159() {
	return reinterpret_cast<TEnumAsByte<ETimelineDirection>*>((byte*)this + 2572);
}
void ABP_FlyingAnimalBase_C::M_SetAnimPhysicsBlend__Direction_15A04225443DB36EEEE57E857E113159(const TEnumAsByte<ETimelineDirection>& value) {
	Write((byte*)this + 2572, value);
}
// Member Getter and Setter of AnimPhysicsBlend
// Declaration: class UTimelineComponent* AnimPhysicsBlend
class UTimelineComponent* ABP_FlyingAnimalBase_C::M_GetAnimPhysicsBlend() const {
	return Read<class UTimelineComponent*>((byte*)this + 2576);
}
class UTimelineComponent** ABP_FlyingAnimalBase_C::M_PtrGetAnimPhysicsBlend() {
	return reinterpret_cast<class UTimelineComponent**>((byte*)this + 2576);
}
void ABP_FlyingAnimalBase_C::M_SetAnimPhysicsBlend(const class UTimelineComponent*& value) {
	Write((byte*)this + 2576, value);
}
// Member Getter and Setter of BTReference
// Declaration: class UBehaviorTree* BTReference
class UBehaviorTree* ABP_FlyingAnimalBase_C::M_GetBTReference() const {
	return Read<class UBehaviorTree*>((byte*)this + 2584);
}
class UBehaviorTree** ABP_FlyingAnimalBase_C::M_PtrGetBTReference() {
	return reinterpret_cast<class UBehaviorTree**>((byte*)this + 2584);
}
void ABP_FlyingAnimalBase_C::M_SetBTReference(const class UBehaviorTree*& value) {
	Write((byte*)this + 2584, value);
}
// Member Getter and Setter of RoamMode
// Declaration: TEnumAsByte<EBP_Enum_RoamMode> RoamMode
TEnumAsByte<EBP_Enum_RoamMode> ABP_FlyingAnimalBase_C::M_GetRoamMode() const {
	return Read<TEnumAsByte<EBP_Enum_RoamMode>>((byte*)this + 2592);
}
TEnumAsByte<EBP_Enum_RoamMode>* ABP_FlyingAnimalBase_C::M_PtrGetRoamMode() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_RoamMode>*>((byte*)this + 2592);
}
void ABP_FlyingAnimalBase_C::M_SetRoamMode(const TEnumAsByte<EBP_Enum_RoamMode>& value) {
	Write((byte*)this + 2592, value);
}
// Member Getter and Setter of RoamBehavior
// Declaration: TEnumAsByte<EBP_Enum_AIRoamBehavior> RoamBehavior
TEnumAsByte<EBP_Enum_AIRoamBehavior> ABP_FlyingAnimalBase_C::M_GetRoamBehavior() const {
	return Read<TEnumAsByte<EBP_Enum_AIRoamBehavior>>((byte*)this + 2593);
}
TEnumAsByte<EBP_Enum_AIRoamBehavior>* ABP_FlyingAnimalBase_C::M_PtrGetRoamBehavior() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_AIRoamBehavior>*>((byte*)this + 2593);
}
void ABP_FlyingAnimalBase_C::M_SetRoamBehavior(const TEnumAsByte<EBP_Enum_AIRoamBehavior>& value) {
	Write((byte*)this + 2593, value);
}
// Member Getter and Setter of SensedActor
// Declaration: class AActor* SensedActor
class AActor* ABP_FlyingAnimalBase_C::M_GetSensedActor() const {
	return Read<class AActor*>((byte*)this + 2600);
}
class AActor** ABP_FlyingAnimalBase_C::M_PtrGetSensedActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 2600);
}
void ABP_FlyingAnimalBase_C::M_SetSensedActor(const class AActor*& value) {
	Write((byte*)this + 2600, value);
}
// Member Getter and Setter of RegisteredStimulus
// Declaration: struct FAIStimulus RegisteredStimulus
struct FAIStimulus ABP_FlyingAnimalBase_C::M_GetRegisteredStimulus() const {
	return Read<struct FAIStimulus>((byte*)this + 2608);
}
struct FAIStimulus* ABP_FlyingAnimalBase_C::M_PtrGetRegisteredStimulus() {
	return reinterpret_cast<struct FAIStimulus*>((byte*)this + 2608);
}
void ABP_FlyingAnimalBase_C::M_SetRegisteredStimulus(const struct FAIStimulus& value) {
	Write((byte*)this + 2608, value);
}
// Member Getter and Setter of Sight
// Declaration: bool Sight
bool ABP_FlyingAnimalBase_C::M_GetSight() const {
	return Read<bool>((byte*)this + 2668);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetSight() {
	return reinterpret_cast<bool*>((byte*)this + 2668);
}
void ABP_FlyingAnimalBase_C::M_SetSight(const bool& value) {
	Write((byte*)this + 2668, value);
}
// Member Getter and Setter of Sound
// Declaration: bool Sound
bool ABP_FlyingAnimalBase_C::M_GetSound() const {
	return Read<bool>((byte*)this + 2669);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetSound() {
	return reinterpret_cast<bool*>((byte*)this + 2669);
}
void ABP_FlyingAnimalBase_C::M_SetSound(const bool& value) {
	Write((byte*)this + 2669, value);
}
// Member Getter and Setter of Touch
// Declaration: bool Touch
bool ABP_FlyingAnimalBase_C::M_GetTouch() const {
	return Read<bool>((byte*)this + 2670);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetTouch() {
	return reinterpret_cast<bool*>((byte*)this + 2670);
}
void ABP_FlyingAnimalBase_C::M_SetTouch(const bool& value) {
	Write((byte*)this + 2670, value);
}
// Member Getter and Setter of Damage
// Declaration: bool Damage
bool ABP_FlyingAnimalBase_C::M_GetDamage() const {
	return Read<bool>((byte*)this + 2671);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetDamage() {
	return reinterpret_cast<bool*>((byte*)this + 2671);
}
void ABP_FlyingAnimalBase_C::M_SetDamage(const bool& value) {
	Write((byte*)this + 2671, value);
}
// Member Getter and Setter of StimulusLocation
// Declaration: struct FVector StimulusLocation
struct FVector ABP_FlyingAnimalBase_C::M_GetStimulusLocation() const {
	return Read<struct FVector>((byte*)this + 2672);
}
struct FVector* ABP_FlyingAnimalBase_C::M_PtrGetStimulusLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2672);
}
void ABP_FlyingAnimalBase_C::M_SetStimulusLocation(const struct FVector& value) {
	Write((byte*)this + 2672, value);
}
// Member Getter and Setter of StimulusDetected
// Declaration: TEnumAsByte<EBP_Enum_StimulusDetected> StimulusDetected
TEnumAsByte<EBP_Enum_StimulusDetected> ABP_FlyingAnimalBase_C::M_GetStimulusDetected() const {
	return Read<TEnumAsByte<EBP_Enum_StimulusDetected>>((byte*)this + 2684);
}
TEnumAsByte<EBP_Enum_StimulusDetected>* ABP_FlyingAnimalBase_C::M_PtrGetStimulusDetected() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_StimulusDetected>*>((byte*)this + 2684);
}
void ABP_FlyingAnimalBase_C::M_SetStimulusDetected(const TEnumAsByte<EBP_Enum_StimulusDetected>& value) {
	Write((byte*)this + 2684, value);
}
// Member Getter and Setter of EngageActorKey
// Declaration: struct FName EngageActorKey
struct FName ABP_FlyingAnimalBase_C::M_GetEngageActorKey() const {
	return Read<struct FName>((byte*)this + 2688);
}
struct FName* ABP_FlyingAnimalBase_C::M_PtrGetEngageActorKey() {
	return reinterpret_cast<struct FName*>((byte*)this + 2688);
}
void ABP_FlyingAnimalBase_C::M_SetEngageActorKey(const struct FName& value) {
	Write((byte*)this + 2688, value);
}
// Member Getter and Setter of EngageBehavior
// Declaration: TEnumAsByte<EBP_Enum_GroundEngageBehavior> EngageBehavior
TEnumAsByte<EBP_Enum_GroundEngageBehavior> ABP_FlyingAnimalBase_C::M_GetEngageBehavior() const {
	return Read<TEnumAsByte<EBP_Enum_GroundEngageBehavior>>((byte*)this + 2696);
}
TEnumAsByte<EBP_Enum_GroundEngageBehavior>* ABP_FlyingAnimalBase_C::M_PtrGetEngageBehavior() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_GroundEngageBehavior>*>((byte*)this + 2696);
}
void ABP_FlyingAnimalBase_C::M_SetEngageBehavior(const TEnumAsByte<EBP_Enum_GroundEngageBehavior>& value) {
	Write((byte*)this + 2696, value);
}
// Member Getter and Setter of FoundBaitKey
// Declaration: struct FName FoundBaitKey
struct FName ABP_FlyingAnimalBase_C::M_GetFoundBaitKey() const {
	return Read<struct FName>((byte*)this + 2700);
}
struct FName* ABP_FlyingAnimalBase_C::M_PtrGetFoundBaitKey() {
	return reinterpret_cast<struct FName*>((byte*)this + 2700);
}
void ABP_FlyingAnimalBase_C::M_SetFoundBaitKey(const struct FName& value) {
	Write((byte*)this + 2700, value);
}
// Member Getter and Setter of EngageTags
// Declaration: TArray<struct FName> EngageTags
TArray<struct FName> ABP_FlyingAnimalBase_C::M_GetEngageTags() const {
	return Read<TArray<struct FName>>((byte*)this + 2712);
}
TArray<struct FName>* ABP_FlyingAnimalBase_C::M_PtrGetEngageTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 2712);
}
void ABP_FlyingAnimalBase_C::M_SetEngageTags(const TArray<struct FName>& value) {
	Write((byte*)this + 2712, value);
}
// Member Getter and Setter of EngageTagFound
// Declaration: bool EngageTagFound
bool ABP_FlyingAnimalBase_C::M_GetEngageTagFound() const {
	return Read<bool>((byte*)this + 2728);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetEngageTagFound() {
	return reinterpret_cast<bool*>((byte*)this + 2728);
}
void ABP_FlyingAnimalBase_C::M_SetEngageTagFound(const bool& value) {
	Write((byte*)this + 2728, value);
}
// Member Getter and Setter of EngageTargetBehavior
// Declaration: TEnumAsByte<EBP_Enum_EngageTargetBehavior> EngageTargetBehavior
TEnumAsByte<EBP_Enum_EngageTargetBehavior> ABP_FlyingAnimalBase_C::M_GetEngageTargetBehavior() const {
	return Read<TEnumAsByte<EBP_Enum_EngageTargetBehavior>>((byte*)this + 2729);
}
TEnumAsByte<EBP_Enum_EngageTargetBehavior>* ABP_FlyingAnimalBase_C::M_PtrGetEngageTargetBehavior() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_EngageTargetBehavior>*>((byte*)this + 2729);
}
void ABP_FlyingAnimalBase_C::M_SetEngageTargetBehavior(const TEnumAsByte<EBP_Enum_EngageTargetBehavior>& value) {
	Write((byte*)this + 2729, value);
}
// Member Getter and Setter of MaxEngageDistance
// Declaration: float MaxEngageDistance
float ABP_FlyingAnimalBase_C::M_GetMaxEngageDistance() const {
	return Read<float>((byte*)this + 2732);
}
float* ABP_FlyingAnimalBase_C::M_PtrGetMaxEngageDistance() {
	return reinterpret_cast<float*>((byte*)this + 2732);
}
void ABP_FlyingAnimalBase_C::M_SetMaxEngageDistance(const float& value) {
	Write((byte*)this + 2732, value);
}
// Member Getter and Setter of MovementAcceptanceRadius
// Declaration: float MovementAcceptanceRadius
float ABP_FlyingAnimalBase_C::M_GetMovementAcceptanceRadius() const {
	return Read<float>((byte*)this + 2736);
}
float* ABP_FlyingAnimalBase_C::M_PtrGetMovementAcceptanceRadius() {
	return reinterpret_cast<float*>((byte*)this + 2736);
}
void ABP_FlyingAnimalBase_C::M_SetMovementAcceptanceRadius(const float& value) {
	Write((byte*)this + 2736, value);
}
// Member Getter and Setter of EngagedActor
// Declaration: class AActor* EngagedActor
class AActor* ABP_FlyingAnimalBase_C::M_GetEngagedActor() const {
	return Read<class AActor*>((byte*)this + 2744);
}
class AActor** ABP_FlyingAnimalBase_C::M_PtrGetEngagedActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 2744);
}
void ABP_FlyingAnimalBase_C::M_SetEngagedActor(const class AActor*& value) {
	Write((byte*)this + 2744, value);
}
// Member Getter and Setter of AggroCounter
// Declaration: float AggroCounter
float ABP_FlyingAnimalBase_C::M_GetAggroCounter() const {
	return Read<float>((byte*)this + 2752);
}
float* ABP_FlyingAnimalBase_C::M_PtrGetAggroCounter() {
	return reinterpret_cast<float*>((byte*)this + 2752);
}
void ABP_FlyingAnimalBase_C::M_SetAggroCounter(const float& value) {
	Write((byte*)this + 2752, value);
}
// Member Getter and Setter of AggroTimerHandle
// Declaration: struct FTimerHandle AggroTimerHandle
struct FTimerHandle ABP_FlyingAnimalBase_C::M_GetAggroTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 2760);
}
struct FTimerHandle* ABP_FlyingAnimalBase_C::M_PtrGetAggroTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2760);
}
void ABP_FlyingAnimalBase_C::M_SetAggroTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 2760, value);
}
// Member Getter and Setter of CanEngage
// Declaration: bool CanEngage
bool ABP_FlyingAnimalBase_C::M_GetCanEngage() const {
	return Read<bool>((byte*)this + 2768);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetCanEngage() {
	return reinterpret_cast<bool*>((byte*)this + 2768);
}
void ABP_FlyingAnimalBase_C::M_SetCanEngage(const bool& value) {
	Write((byte*)this + 2768, value);
}
// Member Getter and Setter of OriginalEngageBehavior
// Declaration: TEnumAsByte<EBP_Enum_GroundEngageBehavior> OriginalEngageBehavior
TEnumAsByte<EBP_Enum_GroundEngageBehavior> ABP_FlyingAnimalBase_C::M_GetOriginalEngageBehavior() const {
	return Read<TEnumAsByte<EBP_Enum_GroundEngageBehavior>>((byte*)this + 2769);
}
TEnumAsByte<EBP_Enum_GroundEngageBehavior>* ABP_FlyingAnimalBase_C::M_PtrGetOriginalEngageBehavior() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_GroundEngageBehavior>*>((byte*)this + 2769);
}
void ABP_FlyingAnimalBase_C::M_SetOriginalEngageBehavior(const TEnumAsByte<EBP_Enum_GroundEngageBehavior>& value) {
	Write((byte*)this + 2769, value);
}
// Member Getter and Setter of AnimIndex
// Declaration: int32_t AnimIndex
int32_t ABP_FlyingAnimalBase_C::M_GetAnimIndex() const {
	return Read<int32_t>((byte*)this + 2772);
}
int32_t* ABP_FlyingAnimalBase_C::M_PtrGetAnimIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 2772);
}
void ABP_FlyingAnimalBase_C::M_SetAnimIndex(const int32_t& value) {
	Write((byte*)this + 2772, value);
}
// Member Getter and Setter of WantsToBreed
// Declaration: bool WantsToBreed
bool ABP_FlyingAnimalBase_C::M_GetWantsToBreed() const {
	return Read<bool>((byte*)this + 2776);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetWantsToBreed() {
	return reinterpret_cast<bool*>((byte*)this + 2776);
}
void ABP_FlyingAnimalBase_C::M_SetWantsToBreed(const bool& value) {
	Write((byte*)this + 2776, value);
}
// Member Getter and Setter of NearbyPartner
// Declaration: class AActor* NearbyPartner
class AActor* ABP_FlyingAnimalBase_C::M_GetNearbyPartner() const {
	return Read<class AActor*>((byte*)this + 2784);
}
class AActor** ABP_FlyingAnimalBase_C::M_PtrGetNearbyPartner() {
	return reinterpret_cast<class AActor**>((byte*)this + 2784);
}
void ABP_FlyingAnimalBase_C::M_SetNearbyPartner(const class AActor*& value) {
	Write((byte*)this + 2784, value);
}
// Member Getter and Setter of Behavior_Details
// Declaration: struct FBP_Struct_GroundAnimalBehavior_AnimalDetails Behavior_Details
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails ABP_FlyingAnimalBase_C::M_GetBehavior_Details() const {
	return Read<struct FBP_Struct_GroundAnimalBehavior_AnimalDetails>((byte*)this + 2792);
}
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails* ABP_FlyingAnimalBase_C::M_PtrGetBehavior_Details() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimalBehavior_AnimalDetails*>((byte*)this + 2792);
}
void ABP_FlyingAnimalBase_C::M_SetBehavior_Details(const struct FBP_Struct_GroundAnimalBehavior_AnimalDetails& value) {
	Write((byte*)this + 2792, value);
}
// Member Getter and Setter of Behavior_Details_Attack
// Declaration: struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack Behavior_Details_Attack
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack ABP_FlyingAnimalBase_C::M_GetBehavior_Details_Attack() const {
	return Read<struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack>((byte*)this + 2828);
}
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack* ABP_FlyingAnimalBase_C::M_PtrGetBehavior_Details_Attack() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack*>((byte*)this + 2828);
}
void ABP_FlyingAnimalBase_C::M_SetBehavior_Details_Attack(const struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack& value) {
	Write((byte*)this + 2828, value);
}
// Member Getter and Setter of Behavior_Defend
// Declaration: struct FBP_Struct_GroundAnimaBehavior_Defend Behavior_Defend
struct FBP_Struct_GroundAnimaBehavior_Defend ABP_FlyingAnimalBase_C::M_GetBehavior_Defend() const {
	return Read<struct FBP_Struct_GroundAnimaBehavior_Defend>((byte*)this + 2856);
}
struct FBP_Struct_GroundAnimaBehavior_Defend* ABP_FlyingAnimalBase_C::M_PtrGetBehavior_Defend() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimaBehavior_Defend*>((byte*)this + 2856);
}
void ABP_FlyingAnimalBase_C::M_SetBehavior_Defend(const struct FBP_Struct_GroundAnimaBehavior_Defend& value) {
	Write((byte*)this + 2856, value);
}
// Member Getter and Setter of DefenseLocation
// Declaration: struct FVector DefenseLocation
struct FVector ABP_FlyingAnimalBase_C::M_GetDefenseLocation() const {
	return Read<struct FVector>((byte*)this + 2880);
}
struct FVector* ABP_FlyingAnimalBase_C::M_PtrGetDefenseLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 2880);
}
void ABP_FlyingAnimalBase_C::M_SetDefenseLocation(const struct FVector& value) {
	Write((byte*)this + 2880, value);
}
// Member Getter and Setter of DefenseStateKey
// Declaration: struct FName DefenseStateKey
struct FName ABP_FlyingAnimalBase_C::M_GetDefenseStateKey() const {
	return Read<struct FName>((byte*)this + 2892);
}
struct FName* ABP_FlyingAnimalBase_C::M_PtrGetDefenseStateKey() {
	return reinterpret_cast<struct FName*>((byte*)this + 2892);
}
void ABP_FlyingAnimalBase_C::M_SetDefenseStateKey(const struct FName& value) {
	Write((byte*)this + 2892, value);
}
// Member Getter and Setter of DefenseState
// Declaration: TEnumAsByte<EBP_Enum_DefenseState> DefenseState
TEnumAsByte<EBP_Enum_DefenseState> ABP_FlyingAnimalBase_C::M_GetDefenseState() const {
	return Read<TEnumAsByte<EBP_Enum_DefenseState>>((byte*)this + 2900);
}
TEnumAsByte<EBP_Enum_DefenseState>* ABP_FlyingAnimalBase_C::M_PtrGetDefenseState() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_DefenseState>*>((byte*)this + 2900);
}
void ABP_FlyingAnimalBase_C::M_SetDefenseState(const TEnumAsByte<EBP_Enum_DefenseState>& value) {
	Write((byte*)this + 2900, value);
}
// Member Getter and Setter of IdleAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations IdleAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetIdleAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 2904);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetIdleAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 2904);
}
void ABP_FlyingAnimalBase_C::M_SetIdleAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 2904, value);
}
// Member Getter and Setter of EngageAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations EngageAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetEngageAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 2928);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetEngageAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 2928);
}
void ABP_FlyingAnimalBase_C::M_SetEngageAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 2928, value);
}
// Member Getter and Setter of StopForEngageAnimation
// Declaration: bool StopForEngageAnimation
bool ABP_FlyingAnimalBase_C::M_GetStopForEngageAnimation() const {
	return Read<bool>((byte*)this + 2952);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetStopForEngageAnimation() {
	return reinterpret_cast<bool*>((byte*)this + 2952);
}
void ABP_FlyingAnimalBase_C::M_SetStopForEngageAnimation(const bool& value) {
	Write((byte*)this + 2952, value);
}
// Member Getter and Setter of AttackAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations AttackAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetAttackAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 2960);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetAttackAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 2960);
}
void ABP_FlyingAnimalBase_C::M_SetAttackAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 2960, value);
}
// Member Getter and Setter of DeathAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations DeathAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetDeathAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 2984);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetDeathAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 2984);
}
void ABP_FlyingAnimalBase_C::M_SetDeathAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 2984, value);
}
// Member Getter and Setter of HitAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations HitAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetHitAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 3008);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetHitAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 3008);
}
void ABP_FlyingAnimalBase_C::M_SetHitAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 3008, value);
}
// Member Getter and Setter of EatAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations EatAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetEatAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 3032);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetEatAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 3032);
}
void ABP_FlyingAnimalBase_C::M_SetEatAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 3032, value);
}
// Member Getter and Setter of DrinkAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations DrinkAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetDrinkAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 3056);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetDrinkAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 3056);
}
void ABP_FlyingAnimalBase_C::M_SetDrinkAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 3056, value);
}
// Member Getter and Setter of RestAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations RestAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetRestAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 3080);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetRestAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 3080);
}
void ABP_FlyingAnimalBase_C::M_SetRestAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 3080, value);
}
// Member Getter and Setter of Debug_Animal
// Declaration: struct FBP_Struct_GroundAnimal_Debug Debug_Animal
struct FBP_Struct_GroundAnimal_Debug ABP_FlyingAnimalBase_C::M_GetDebug_Animal() const {
	return Read<struct FBP_Struct_GroundAnimal_Debug>((byte*)this + 3104);
}
struct FBP_Struct_GroundAnimal_Debug* ABP_FlyingAnimalBase_C::M_PtrGetDebug_Animal() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Debug*>((byte*)this + 3104);
}
void ABP_FlyingAnimalBase_C::M_SetDebug_Animal(const struct FBP_Struct_GroundAnimal_Debug& value) {
	Write((byte*)this + 3104, value);
}
// Member Getter and Setter of RandomAnimation
// Declaration: int32_t RandomAnimation
int32_t ABP_FlyingAnimalBase_C::M_GetRandomAnimation() const {
	return Read<int32_t>((byte*)this + 3108);
}
int32_t* ABP_FlyingAnimalBase_C::M_PtrGetRandomAnimation() {
	return reinterpret_cast<int32_t*>((byte*)this + 3108);
}
void ABP_FlyingAnimalBase_C::M_SetRandomAnimation(const int32_t& value) {
	Write((byte*)this + 3108, value);
}
// Member Getter and Setter of SetTextToEngaged
// Declaration: bool SetTextToEngaged
bool ABP_FlyingAnimalBase_C::M_GetSetTextToEngaged() const {
	return Read<bool>((byte*)this + 3112);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetSetTextToEngaged() {
	return reinterpret_cast<bool*>((byte*)this + 3112);
}
void ABP_FlyingAnimalBase_C::M_SetSetTextToEngaged(const bool& value) {
	Write((byte*)this + 3112, value);
}
// Member Getter and Setter of SetTextToActive
// Declaration: bool SetTextToActive
bool ABP_FlyingAnimalBase_C::M_GetSetTextToActive() const {
	return Read<bool>((byte*)this + 3113);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetSetTextToActive() {
	return reinterpret_cast<bool*>((byte*)this + 3113);
}
void ABP_FlyingAnimalBase_C::M_SetSetTextToActive(const bool& value) {
	Write((byte*)this + 3113, value);
}
// Member Getter and Setter of CurrentAnimation
// Declaration: struct FBP_Struct_GroundAnimal_CurrentMontage CurrentAnimation
struct FBP_Struct_GroundAnimal_CurrentMontage ABP_FlyingAnimalBase_C::M_GetCurrentAnimation() const {
	return Read<struct FBP_Struct_GroundAnimal_CurrentMontage>((byte*)this + 3120);
}
struct FBP_Struct_GroundAnimal_CurrentMontage* ABP_FlyingAnimalBase_C::M_PtrGetCurrentAnimation() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_CurrentMontage*>((byte*)this + 3120);
}
void ABP_FlyingAnimalBase_C::M_SetCurrentAnimation(const struct FBP_Struct_GroundAnimal_CurrentMontage& value) {
	Write((byte*)this + 3120, value);
}
// Member Getter and Setter of SpecificAnimIndex
// Declaration: int32_t SpecificAnimIndex
int32_t ABP_FlyingAnimalBase_C::M_GetSpecificAnimIndex() const {
	return Read<int32_t>((byte*)this + 3144);
}
int32_t* ABP_FlyingAnimalBase_C::M_PtrGetSpecificAnimIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 3144);
}
void ABP_FlyingAnimalBase_C::M_SetSpecificAnimIndex(const int32_t& value) {
	Write((byte*)this + 3144, value);
}
// Member Getter and Setter of AlreadyDead
// Declaration: bool AlreadyDead
bool ABP_FlyingAnimalBase_C::M_GetAlreadyDead() const {
	return Read<bool>((byte*)this + 3148);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetAlreadyDead() {
	return reinterpret_cast<bool*>((byte*)this + 3148);
}
void ABP_FlyingAnimalBase_C::M_SetAlreadyDead(const bool& value) {
	Write((byte*)this + 3148, value);
}
// Member Getter and Setter of LayingAnimations
// Declaration: struct FBP_Struct_GroundAnimal_Animations LayingAnimations
struct FBP_Struct_GroundAnimal_Animations ABP_FlyingAnimalBase_C::M_GetLayingAnimations() const {
	return Read<struct FBP_Struct_GroundAnimal_Animations>((byte*)this + 3152);
}
struct FBP_Struct_GroundAnimal_Animations* ABP_FlyingAnimalBase_C::M_PtrGetLayingAnimations() {
	return reinterpret_cast<struct FBP_Struct_GroundAnimal_Animations*>((byte*)this + 3152);
}
void ABP_FlyingAnimalBase_C::M_SetLayingAnimations(const struct FBP_Struct_GroundAnimal_Animations& value) {
	Write((byte*)this + 3152, value);
}
// Member Getter and Setter of LayingEndAnimations
// Declaration: TArray<struct FBP_Struct_GroundAnimal_AnimationDetails> LayingEndAnimations
TArray<struct FBP_Struct_GroundAnimal_AnimationDetails> ABP_FlyingAnimalBase_C::M_GetLayingEndAnimations() const {
	return Read<TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>>((byte*)this + 3176);
}
TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>* ABP_FlyingAnimalBase_C::M_PtrGetLayingEndAnimations() {
	return reinterpret_cast<TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>*>((byte*)this + 3176);
}
void ABP_FlyingAnimalBase_C::M_SetLayingEndAnimations(const TArray<struct FBP_Struct_GroundAnimal_AnimationDetails>& value) {
	Write((byte*)this + 3176, value);
}
// Member Getter and Setter of AttackTraceSocket
// Declaration: struct FName AttackTraceSocket
struct FName ABP_FlyingAnimalBase_C::M_GetAttackTraceSocket() const {
	return Read<struct FName>((byte*)this + 3192);
}
struct FName* ABP_FlyingAnimalBase_C::M_PtrGetAttackTraceSocket() {
	return reinterpret_cast<struct FName*>((byte*)this + 3192);
}
void ABP_FlyingAnimalBase_C::M_SetAttackTraceSocket(const struct FName& value) {
	Write((byte*)this + 3192, value);
}
// Member Getter and Setter of AttackTimer
// Declaration: struct FTimerHandle AttackTimer
struct FTimerHandle ABP_FlyingAnimalBase_C::M_GetAttackTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 3200);
}
struct FTimerHandle* ABP_FlyingAnimalBase_C::M_PtrGetAttackTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 3200);
}
void ABP_FlyingAnimalBase_C::M_SetAttackTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 3200, value);
}
// Member Getter and Setter of AttackedActors
// Declaration: TArray<class AActor*> AttackedActors
TArray<class AActor*> ABP_FlyingAnimalBase_C::M_GetAttackedActors() const {
	return Read<TArray<class AActor*>>((byte*)this + 3208);
}
TArray<class AActor*>* ABP_FlyingAnimalBase_C::M_PtrGetAttackedActors() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 3208);
}
void ABP_FlyingAnimalBase_C::M_SetAttackedActors(const TArray<class AActor*>& value) {
	Write((byte*)this + 3208, value);
}
// Member Getter and Setter of SpeedLocked
// Declaration: bool SpeedLocked
bool ABP_FlyingAnimalBase_C::M_GetSpeedLocked() const {
	return Read<bool>((byte*)this + 3224);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetSpeedLocked() {
	return reinterpret_cast<bool*>((byte*)this + 3224);
}
void ABP_FlyingAnimalBase_C::M_SetSpeedLocked(const bool& value) {
	Write((byte*)this + 3224, value);
}
// Member Getter and Setter of IsCaveAnimal
// Declaration: bool IsCaveAnimal
bool ABP_FlyingAnimalBase_C::M_GetIsCaveAnimal() const {
	return Read<bool>((byte*)this + 3225);
}
bool* ABP_FlyingAnimalBase_C::M_PtrGetIsCaveAnimal() {
	return reinterpret_cast<bool*>((byte*)this + 3225);
}
void ABP_FlyingAnimalBase_C::M_SetIsCaveAnimal(const bool& value) {
	Write((byte*)this + 3225, value);
}
// Member Getter and Setter of AIState
// Declaration: TEnumAsByte<EBP_Enum_AIState> AIState
TEnumAsByte<EBP_Enum_AIState> ABP_FlyingAnimalBase_C::M_GetAIState() const {
	return Read<TEnumAsByte<EBP_Enum_AIState>>((byte*)this + 3226);
}
TEnumAsByte<EBP_Enum_AIState>* ABP_FlyingAnimalBase_C::M_PtrGetAIState() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_AIState>*>((byte*)this + 3226);
}
void ABP_FlyingAnimalBase_C::M_SetAIState(const TEnumAsByte<EBP_Enum_AIState>& value) {
	Write((byte*)this + 3226, value);
}
// Member Getter and Setter of BiggestNeed
// Declaration: TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> BiggestNeed
TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> ABP_FlyingAnimalBase_C::M_GetBiggestNeed() const {
	return Read<TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>>((byte*)this + 3227);
}
TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>* ABP_FlyingAnimalBase_C::M_PtrGetBiggestNeed() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>*>((byte*)this + 3227);
}
void ABP_FlyingAnimalBase_C::M_SetBiggestNeed(const TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>& value) {
	Write((byte*)this + 3227, value);
}
// Member Getter and Setter of OriginalRoamBehavior
// Declaration: TEnumAsByte<EBP_Enum_AIRoamBehavior> OriginalRoamBehavior
TEnumAsByte<EBP_Enum_AIRoamBehavior> ABP_FlyingAnimalBase_C::M_GetOriginalRoamBehavior() const {
	return Read<TEnumAsByte<EBP_Enum_AIRoamBehavior>>((byte*)this + 3228);
}
TEnumAsByte<EBP_Enum_AIRoamBehavior>* ABP_FlyingAnimalBase_C::M_PtrGetOriginalRoamBehavior() {
	return reinterpret_cast<TEnumAsByte<EBP_Enum_AIRoamBehavior>*>((byte*)this + 3228);
}
void ABP_FlyingAnimalBase_C::M_SetOriginalRoamBehavior(const TEnumAsByte<EBP_Enum_AIRoamBehavior>& value) {
	Write((byte*)this + 3228, value);
}
// Member Getter and Setter of FlyingSpeed
// Declaration: float FlyingSpeed
float ABP_FlyingAnimalBase_C::M_GetFlyingSpeed() const {
	return Read<float>((byte*)this + 3232);
}
float* ABP_FlyingAnimalBase_C::M_PtrGetFlyingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 3232);
}
void ABP_FlyingAnimalBase_C::M_SetFlyingSpeed(const float& value) {
	Write((byte*)this + 3232, value);
}
// Member Getter and Setter of SwimmingSpeed
// Declaration: float SwimmingSpeed
float ABP_FlyingAnimalBase_C::M_GetSwimmingSpeed() const {
	return Read<float>((byte*)this + 3236);
}
float* ABP_FlyingAnimalBase_C::M_PtrGetSwimmingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 3236);
}
void ABP_FlyingAnimalBase_C::M_SetSwimmingSpeed(const float& value) {
	Write((byte*)this + 3236, value);
}
// Member Getter and Setter of PerceptionCheckHandler
// Declaration: struct FTimerHandle PerceptionCheckHandler
struct FTimerHandle ABP_FlyingAnimalBase_C::M_GetPerceptionCheckHandler() const {
	return Read<struct FTimerHandle>((byte*)this + 3240);
}
struct FTimerHandle* ABP_FlyingAnimalBase_C::M_PtrGetPerceptionCheckHandler() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 3240);
}
void ABP_FlyingAnimalBase_C::M_SetPerceptionCheckHandler(const struct FTimerHandle& value) {
	Write((byte*)this + 3240, value);
}
// Member Getter and Setter of NaturalNeedTimerHandle
// Declaration: struct FTimerHandle NaturalNeedTimerHandle
struct FTimerHandle ABP_FlyingAnimalBase_C::M_GetNaturalNeedTimerHandle() const {
	return Read<struct FTimerHandle>((byte*)this + 3248);
}
struct FTimerHandle* ABP_FlyingAnimalBase_C::M_PtrGetNaturalNeedTimerHandle() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 3248);
}
void ABP_FlyingAnimalBase_C::M_SetNaturalNeedTimerHandle(const struct FTimerHandle& value) {
	Write((byte*)this + 3248, value);
}
// Member Getter and Setter of mcValidActor
// Declaration: class AActor* mcValidActor
class AActor* ABP_FlyingAnimalBase_C::M_GetmcValidActor() const {
	return Read<class AActor*>((byte*)this + 3256);
}
class AActor** ABP_FlyingAnimalBase_C::M_PtrGetmcValidActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 3256);
}
void ABP_FlyingAnimalBase_C::M_SetmcValidActor(const class AActor*& value) {
	Write((byte*)this + 3256, value);
}
// Member Getter and Setter of OverlappedActor
// Declaration: class AActor* OverlappedActor
class AActor* ABP_FlyingAnimalBase_C::M_GetOverlappedActor() const {
	return Read<class AActor*>((byte*)this + 3264);
}
class AActor** ABP_FlyingAnimalBase_C::M_PtrGetOverlappedActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 3264);
}
void ABP_FlyingAnimalBase_C::M_SetOverlappedActor(const class AActor*& value) {
	Write((byte*)this + 3264, value);
}
// Member Getter and Setter of LandingFinished
// Declaration: TAssetPtr<class FLandingFinished__DelegateSignature> LandingFinished
TAssetPtr<class FLandingFinished__DelegateSignature> ABP_FlyingAnimalBase_C::M_GetLandingFinished() const {
	return Read<TAssetPtr<class FLandingFinished__DelegateSignature>>((byte*)this + 3272);
}
TAssetPtr<class FLandingFinished__DelegateSignature>* ABP_FlyingAnimalBase_C::M_PtrGetLandingFinished() {
	return reinterpret_cast<TAssetPtr<class FLandingFinished__DelegateSignature>*>((byte*)this + 3272);
}
void ABP_FlyingAnimalBase_C::M_SetLandingFinished(const TAssetPtr<class FLandingFinished__DelegateSignature>& value) {
	Write((byte*)this + 3272, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.LandingFinished__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::LandingFinished__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.LandingFinished__DelegateSignature");

	struct ABP_FlyingAnimalBase_C_LandingFinished__DelegateSignature_Params {
	};
	ABP_FlyingAnimalBase_C_LandingFinished__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ExecuteUbergraph_BP_FlyingAnimalBase
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::ExecuteUbergraph_BP_FlyingAnimalBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ExecuteUbergraph_BP_FlyingAnimalBase");

	struct ABP_FlyingAnimalBase_C_ExecuteUbergraph_BP_FlyingAnimalBase_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_ExecuteUbergraph_BP_FlyingAnimalBase_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DayCycle_RestStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::DayCycle_RestStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DayCycle_RestStart");

	struct ABP_FlyingAnimalBase_C_DayCycle_RestStart_Params {
	};
	ABP_FlyingAnimalBase_C_DayCycle_RestStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DayCycle_RestEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::DayCycle_RestEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DayCycle_RestEnd");

	struct ABP_FlyingAnimalBase_C_DayCycle_RestEnd_Params {
	};
	ABP_FlyingAnimalBase_C_DayCycle_RestEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DayCycle_GoingToRest
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::DayCycle_GoingToRest() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DayCycle_GoingToRest");

	struct ABP_FlyingAnimalBase_C_DayCycle_GoingToRest_Params {
	};
	ABP_FlyingAnimalBase_C_DayCycle_GoingToRest_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.Laydown_Start
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::Laydown_Start() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.Laydown_Start");

	struct ABP_FlyingAnimalBase_C_Laydown_Start_Params {
	};
	ABP_FlyingAnimalBase_C_Laydown_Start_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.Laydown_End
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::Laydown_End() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.Laydown_End");

	struct ABP_FlyingAnimalBase_C_Laydown_End_Params {
	};
	ABP_FlyingAnimalBase_C_Laydown_End_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AIDir_ReachedTarget
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AIDir_ReachedTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AIDir_ReachedTarget");

	struct ABP_FlyingAnimalBase_C_AIDir_ReachedTarget_Params {
	};
	ABP_FlyingAnimalBase_C_AIDir_ReachedTarget_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimalHideEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimalHideEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimalHideEnd");

	struct ABP_FlyingAnimalBase_C_AnimalHideEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimalHideEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimalTookDamage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimalTookDamage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimalTookDamage");

	struct ABP_FlyingAnimalBase_C_AnimalTookDamage_Params {
	};
	ABP_FlyingAnimalBase_C_AnimalTookDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BreedingStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawning_Offspring	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::BreedingStart(bool Spawning_Offspring) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BreedingStart");

	struct ABP_FlyingAnimalBase_C_BreedingStart_Params {
		bool Spawning_Offspring;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_BreedingStart_Params params;
	params.Spawning_Offspring = Spawning_Offspring;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BreedingEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawning_Offspring	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::BreedingEnd(bool Spawning_Offspring) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BreedingEnd");

	struct ABP_FlyingAnimalBase_C_BreedingEnd_Params {
		bool Spawning_Offspring;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_BreedingEnd_Params params;
	params.Spawning_Offspring = Spawning_Offspring;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventEngagementStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventEngagementStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventEngagementStart");

	struct ABP_FlyingAnimalBase_C_EventEngagementStart_Params {
	};
	ABP_FlyingAnimalBase_C_EventEngagementStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventEngagementEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventEngagementEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventEngagementEnd");

	struct ABP_FlyingAnimalBase_C_EventEngagementEnd_Params {
	};
	ABP_FlyingAnimalBase_C_EventEngagementEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_IdleStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_IdleStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_IdleStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_IdleStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_IdleStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_IdleEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_IdleEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_IdleEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_IdleEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_IdleEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EngageStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_EngageStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EngageStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_EngageStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_EngageStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EngageEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_EngageEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EngageEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_EngageEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_EngageEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_AttackStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_AttackStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_AttackStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_AttackStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_AttackStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_AttackEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_AttackEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_AttackEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_AttackEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_AttackEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DeathStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_DeathStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DeathStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_DeathStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_DeathStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DeathEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_DeathEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DeathEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_DeathEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_DeathEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_HitStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_HitStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_HitStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_HitStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_HitStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_HitEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_HitEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_HitEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_HitEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_HitEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EatStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_EatStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EatStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_EatStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_EatStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EatEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_EatEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_EatEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_EatEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_EatEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DrinkStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_DrinkStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DrinkStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_DrinkStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_DrinkStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DrinkEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_DrinkEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_DrinkEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_DrinkEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_DrinkEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_RestStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_RestStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_RestStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_RestStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_RestStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_RestEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_RestEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_RestEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_RestEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_RestEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_LayStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_LayStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_LayStart");

	struct ABP_FlyingAnimalBase_C_AnimNotify_LayStart_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_LayStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_LayEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimNotify_LayEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimNotify_LayEnd");

	struct ABP_FlyingAnimalBase_C_AnimNotify_LayEnd_Params {
	};
	ABP_FlyingAnimalBase_C_AnimNotify_LayEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AttackTrace
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AttackTrace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AttackTrace");

	struct ABP_FlyingAnimalBase_C_AttackTrace_Params {
	};
	ABP_FlyingAnimalBase_C_AttackTrace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BlendPhysics
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::BlendPhysics() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BlendPhysics");

	struct ABP_FlyingAnimalBase_C_BlendPhysics_Params {
	};
	ABP_FlyingAnimalBase_C_BlendPhysics_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.StartAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Socket	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::StartAttackFunction(bool Timer, struct FName Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.StartAttackFunction");

	struct ABP_FlyingAnimalBase_C_StartAttackFunction_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
		struct FName Socket;			//Offset: 4 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_StartAttackFunction_Params params;
	params.Timer = Timer;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.StopAttackFunction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::StopAttackFunction() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.StopAttackFunction");

	struct ABP_FlyingAnimalBase_C_StopAttackFunction_Params {
	};
	ABP_FlyingAnimalBase_C_StopAttackFunction_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.CheckPhysicsState
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::CheckPhysicsState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.CheckPhysicsState");

	struct ABP_FlyingAnimalBase_C_CheckPhysicsState_Params {
	};
	ABP_FlyingAnimalBase_C_CheckPhysicsState_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventPlaySound
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound_Cue	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Volume_Multiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Pitch_Multiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Start_Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Attenuation_Settings	Type: class USoundAttenuation*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Concurrency_Settings	Type: class USoundConcurrency*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventPlaySound(class USoundBase* Sound_Cue, float Volume_Multiplier, float Pitch_Multiplier, float Start_Time, class USoundAttenuation* Attenuation_Settings, class USoundConcurrency* Concurrency_Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventPlaySound");

	struct ABP_FlyingAnimalBase_C_EventPlaySound_Params {
		class USoundBase* Sound_Cue;			//Offset: 0 | ElementSize: 8
		float Volume_Multiplier;			//Offset: 8 | ElementSize: 4
		float Pitch_Multiplier;			//Offset: 12 | ElementSize: 4
		float Start_Time;			//Offset: 16 | ElementSize: 4
		class USoundAttenuation* Attenuation_Settings;			//Offset: 24 | ElementSize: 8
		class USoundConcurrency* Concurrency_Settings;			//Offset: 32 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_EventPlaySound_Params params;
	params.Sound_Cue = Sound_Cue;
	params.Volume_Multiplier = Volume_Multiplier;
	params.Pitch_Multiplier = Pitch_Multiplier;
	params.Start_Time = Start_Time;
	params.Attenuation_Settings = Attenuation_Settings;
	params.Concurrency_Settings = Concurrency_Settings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventCheckAggro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventCheckAggro(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventCheckAggro");

	struct ABP_FlyingAnimalBase_C_EventCheckAggro_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_EventCheckAggro_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventAggroTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventAggroTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventAggroTimer");

	struct ABP_FlyingAnimalBase_C_EventAggroTimer_Params {
	};
	ABP_FlyingAnimalBase_C_EventAggroTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventTookDamage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Damage	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InstigatedBy	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventTookDamage");

	struct ABP_FlyingAnimalBase_C_EventTookDamage_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float Damage;			//Offset: 8 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 16 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 24 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 32 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_EventTookDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventDead
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventDead() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventDead");

	struct ABP_FlyingAnimalBase_C_EventDead_Params {
	};
	ABP_FlyingAnimalBase_C_EventDead_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ReceiveBeginPlay");

	struct ABP_FlyingAnimalBase_C_ReceiveBeginPlay_Params {
	};
	ABP_FlyingAnimalBase_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ReceiveTick");

	struct ABP_FlyingAnimalBase_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EnableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EnableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EnableNPC");

	struct ABP_FlyingAnimalBase_C_EnableNPC_Params {
	};
	ABP_FlyingAnimalBase_C_EnableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DisableNPC
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::DisableNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.DisableNPC");

	struct ABP_FlyingAnimalBase_C_DisableNPC_Params {
	};
	ABP_FlyingAnimalBase_C_DisableNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.CloseOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::CloseOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.CloseOptimization");

	struct ABP_FlyingAnimalBase_C_CloseOptimization_Params {
	};
	ABP_FlyingAnimalBase_C_CloseOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.MediumOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::MediumOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.MediumOptimization");

	struct ABP_FlyingAnimalBase_C_MediumOptimization_Params {
	};
	ABP_FlyingAnimalBase_C_MediumOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.NoneOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::NoneOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.NoneOptimization");

	struct ABP_FlyingAnimalBase_C_NoneOptimization_Params {
	};
	ABP_FlyingAnimalBase_C_NoneOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.FarOptimization
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::FarOptimization() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.FarOptimization");

	struct ABP_FlyingAnimalBase_C_FarOptimization_Params {
	};
	ABP_FlyingAnimalBase_C_FarOptimization_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventPlayAnimation
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimationType	Type: TEnumAsByte<EBP_Enum_AnimType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventPlayAnimation(TEnumAsByte<EBP_Enum_AnimType> AnimationType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventPlayAnimation");

	struct ABP_FlyingAnimalBase_C_EventPlayAnimation_Params {
		TEnumAsByte<EBP_Enum_AnimType> AnimationType;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_EventPlayAnimation_Params params;
	params.AnimationType = AnimationType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// Flags: BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Stimulus	Type: struct FAIStimulus	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, struct FAIStimulus Stimulus) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	struct ABP_FlyingAnimalBase_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		struct FAIStimulus Stimulus;			//Offset: 8 | ElementSize: 60
	};
	ABP_FlyingAnimalBase_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventCheckPerception
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::EventCheckPerception() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.EventCheckPerception");

	struct ABP_FlyingAnimalBase_C_EventCheckPerception_Params {
	};
	ABP_FlyingAnimalBase_C_EventCheckPerception_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.OnLandingFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::OnLandingFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.OnLandingFinished");

	struct ABP_FlyingAnimalBase_C_OnLandingFinished_Params {
	};
	ABP_FlyingAnimalBase_C_OnLandingFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimPhysicsBlend__UpdateFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimPhysicsBlend__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimPhysicsBlend__UpdateFunc");

	struct ABP_FlyingAnimalBase_C_AnimPhysicsBlend__UpdateFunc_Params {
	};
	ABP_FlyingAnimalBase_C_AnimPhysicsBlend__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimPhysicsBlend__FinishedFunc
// Flags: BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimPhysicsBlend__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimPhysicsBlend__FinishedFunc");

	struct ABP_FlyingAnimalBase_C_AnimPhysicsBlend__FinishedFunc_Params {
	};
	ABP_FlyingAnimalBase_C_AnimPhysicsBlend__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnCheckForStimulus
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stimuli	Type: TArray<struct FAIStimulus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Detected_Something	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnCheckForStimulus(TArray<struct FAIStimulus>* Stimuli, bool* Detected_Something) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnCheckForStimulus");

	struct ABP_FlyingAnimalBase_C_fnCheckForStimulus_Params {
		TArray<struct FAIStimulus> Stimuli;			//Offset: 0 | ElementSize: 16
		bool Detected_Something;			//Offset: 16 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_fnCheckForStimulus_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Stimuli != nullptr)
		*Stimuli = params.Stimuli;
	if (Detected_Something != nullptr)
		*Detected_Something = params.Detected_Something;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnSetRoamBehavior
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChanceToStay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewRoamBehavior	Type: TEnumAsByte<EBP_Enum_AIRoamBehavior>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnSetRoamBehavior(float ChanceToStay, TEnumAsByte<EBP_Enum_AIRoamBehavior>* NewRoamBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnSetRoamBehavior");

	struct ABP_FlyingAnimalBase_C_fnSetRoamBehavior_Params {
		float ChanceToStay;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<EBP_Enum_AIRoamBehavior> NewRoamBehavior;			//Offset: 4 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_fnSetRoamBehavior_Params params;
	params.ChanceToStay = ChanceToStay;

	UObject::ProcessEvent(fn, &params);
	if (NewRoamBehavior != nullptr)
		*NewRoamBehavior = params.NewRoamBehavior;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnDoMeleeDamage
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Socket	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnDoMeleeDamage(struct FName Socket) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnDoMeleeDamage");

	struct ABP_FlyingAnimalBase_C_fnDoMeleeDamage_Params {
		struct FName Socket;			//Offset: 0 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_fnDoMeleeDamage_Params params;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnSetEngageTarget
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SensedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnSetEngageTarget(class AActor* SensedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnSetEngageTarget");

	struct ABP_FlyingAnimalBase_C_fnSetEngageTarget_Params {
		class AActor* SensedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_fnSetEngageTarget_Params params;
	params.SensedActor = SensedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnFlee
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpeedMuliplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnFlee(float SpeedMuliplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnFlee");

	struct ABP_FlyingAnimalBase_C_fnFlee_Params {
		float SpeedMuliplier;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnFlee_Params params;
	params.SpeedMuliplier = SpeedMuliplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnDisengage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnDisengage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnDisengage");

	struct ABP_FlyingAnimalBase_C_fnDisengage_Params {
	};
	ABP_FlyingAnimalBase_C_fnDisengage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnSetEngageParams
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnSetEngageParams() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnSetEngageParams");

	struct ABP_FlyingAnimalBase_C_fnSetEngageParams_Params {
	};
	ABP_FlyingAnimalBase_C_fnSetEngageParams_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnCheckForActorInMelee
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor_Found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnCheckForActorInMelee(bool* Actor_Found) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnCheckForActorInMelee");

	struct ABP_FlyingAnimalBase_C_fnCheckForActorInMelee_Params {
		bool Actor_Found;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_fnCheckForActorInMelee_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Actor_Found != nullptr)
		*Actor_Found = params.Actor_Found;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimIdle_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimIdle_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimIdle_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimIdle_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimIdle_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimEngage_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimEngage_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimEngage_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimEngage_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimEngage_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimAttack_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimAttack_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimAttack_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimAttack_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimAttack_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimDeath_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimDeath_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimDeath_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimDeath_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimDeath_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimHit_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimHit_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimHit_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimHit_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimHit_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimEat_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimEat_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimEat_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimEat_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimEat_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimDrink_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimDrink_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimDrink_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimDrink_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimDrink_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimRest_ChooseIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animation_Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::fnAnimRest_ChooseIndex(int32_t* Animation_Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.fnAnimRest_ChooseIndex");

	struct ABP_FlyingAnimalBase_C_fnAnimRest_ChooseIndex_Params {
		int32_t Animation_Index;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_fnAnimRest_ChooseIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Animation_Index != nullptr)
		*Animation_Index = params.Animation_Index;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Object
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardObject	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Object	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_Object(TEnumAsByte<EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject* Object) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Object");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_Object_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardObject> BlackboardObject;			//Offset: 0 | ElementSize: 1
		class UObject* Object;			//Offset: 8 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_Object_Params params;
	params.BlackboardObject = BlackboardObject;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Boolean
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardBoolean	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_Boolean(TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Boolean");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_Boolean_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean;			//Offset: 0 | ElementSize: 1
		bool Value;			//Offset: 1 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Object
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardObject	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ObjectValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_Object(TEnumAsByte<EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject** ObjectValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Object");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_Object_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardObject> BlackboardObject;			//Offset: 0 | ElementSize: 1
		class UObject* ObjectValue;			//Offset: 8 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_Object_Params params;
	params.BlackboardObject = BlackboardObject;

	UObject::ProcessEvent(fn, &params);
	if (ObjectValue != nullptr)
		*ObjectValue = params.ObjectValue;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Boolean
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardBoolean	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BooleanValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_Boolean(TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Boolean");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_Boolean_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean;			//Offset: 0 | ElementSize: 1
		bool BooleanValue;			//Offset: 1 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_Boolean_Params params;
	params.BlackboardBoolean = BlackboardBoolean;

	UObject::ProcessEvent(fn, &params);
	if (BooleanValue != nullptr)
		*BooleanValue = params.BooleanValue;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Vector
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardVector	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardVector>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_Vector(TEnumAsByte<EBP_Enum_Animal_BlackboardVector> BlackboardVector, struct FVector Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Vector");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_Vector_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardVector> BlackboardVector;			//Offset: 0 | ElementSize: 1
		struct FVector Value;			//Offset: 4 | ElementSize: 12
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_Vector_Params params;
	params.BlackboardVector = BlackboardVector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Float
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardFloat	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardFloat>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_Float(TEnumAsByte<EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Float");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_Float_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardFloat> BlackboardFloat;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_Float_Params params;
	params.BlackboardFloat = BlackboardFloat;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Int
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlackboardInt	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardInt>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_Int(TEnumAsByte<EBP_Enum_Animal_BlackboardInt> BlackboardInt, int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Int");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_Int_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardInt> BlackboardInt;			//Offset: 0 | ElementSize: 1
		int32_t Value;			//Offset: 4 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_Int_Params params;
	params.BlackboardInt = BlackboardInt;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Vector
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardVector	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardVector>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: VectorValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_Vector(TEnumAsByte<EBP_Enum_Animal_BlackboardVector> BlackboardVector, struct FVector* VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Vector");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_Vector_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardVector> BlackboardVector;			//Offset: 0 | ElementSize: 1
		struct FVector VectorValue;			//Offset: 4 | ElementSize: 12
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_Vector_Params params;
	params.BlackboardVector = BlackboardVector;

	UObject::ProcessEvent(fn, &params);
	if (VectorValue != nullptr)
		*VectorValue = params.VectorValue;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Float
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardFloat	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardFloat>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FloatValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_Float(TEnumAsByte<EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float* FloatValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Float");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_Float_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardFloat> BlackboardFloat;			//Offset: 0 | ElementSize: 1
		float FloatValue;			//Offset: 4 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_Float_Params params;
	params.BlackboardFloat = BlackboardFloat;

	UObject::ProcessEvent(fn, &params);
	if (FloatValue != nullptr)
		*FloatValue = params.FloatValue;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Int
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BlackboardInt	Type: TEnumAsByte<EBP_Enum_Animal_BlackboardInt>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IntValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_Int(TEnumAsByte<EBP_Enum_Animal_BlackboardInt> BlackboardInt, int32_t* IntValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Int");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_Int_Params {
		TEnumAsByte<EBP_Enum_Animal_BlackboardInt> BlackboardInt;			//Offset: 0 | ElementSize: 1
		int32_t IntValue;			//Offset: 4 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_Int_Params params;
	params.BlackboardInt = BlackboardInt;

	UObject::ProcessEvent(fn, &params);
	if (IntValue != nullptr)
		*IntValue = params.IntValue;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_RunMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RunMode	Type: TEnumAsByte<EBP_Enum_AI_RunMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_RunMode(TEnumAsByte<EBP_Enum_AI_RunMode> RunMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_RunMode");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_RunMode_Params {
		TEnumAsByte<EBP_Enum_AI_RunMode> RunMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_RunMode_Params params;
	params.RunMode = RunMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_RunMode
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: RunMode	Type: TEnumAsByte<EBP_Enum_AI_RunMode>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_RunMode(TEnumAsByte<EBP_Enum_AI_RunMode>* RunMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_RunMode");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_RunMode_Params {
		TEnumAsByte<EBP_Enum_AI_RunMode> RunMode;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_RunMode_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RunMode != nullptr)
		*RunMode = params.RunMode;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_AIState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AIState	Type: TEnumAsByte<EBP_Enum_AIState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_AIState(TEnumAsByte<EBP_Enum_AIState> AIState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_AIState");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_AIState_Params {
		TEnumAsByte<EBP_Enum_AIState> AIState;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_AIState_Params params;
	params.AIState = AIState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_RoamBehavior
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RoamBehavior	Type: TEnumAsByte<EBP_Enum_AIRoamBehavior>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_RoamBehavior(TEnumAsByte<EBP_Enum_AIRoamBehavior> RoamBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_RoamBehavior");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_RoamBehavior_Params {
		TEnumAsByte<EBP_Enum_AIRoamBehavior> RoamBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_RoamBehavior_Params params;
	params.RoamBehavior = RoamBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_BiggestNeed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BiggestNeed	Type: TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_BiggestNeed(TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> BiggestNeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_BiggestNeed");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_BiggestNeed_Params {
		TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> BiggestNeed;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_BiggestNeed_Params params;
	params.BiggestNeed = BiggestNeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_EngageBehavior
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EngageBehavior	Type: TEnumAsByte<EBP_Enum_GroundEngageBehavior>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_EngageBehavior(TEnumAsByte<EBP_Enum_GroundEngageBehavior> EngageBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_EngageBehavior");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_EngageBehavior_Params {
		TEnumAsByte<EBP_Enum_GroundEngageBehavior> EngageBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_EngageBehavior_Params params;
	params.EngageBehavior = EngageBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_FeedingBehavior
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FeedingBehavior	Type: TEnumAsByte<EBP_Enum_FeedingBehavior>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_FeedingBehavior(TEnumAsByte<EBP_Enum_FeedingBehavior> FeedingBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_FeedingBehavior");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_FeedingBehavior_Params {
		TEnumAsByte<EBP_Enum_FeedingBehavior> FeedingBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_FeedingBehavior_Params params;
	params.FeedingBehavior = FeedingBehavior;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_DefenseState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DefenseState	Type: TEnumAsByte<EBP_Enum_DefenseState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_DefenseState(TEnumAsByte<EBP_Enum_DefenseState> DefenseState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_DefenseState");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_DefenseState_Params {
		TEnumAsByte<EBP_Enum_DefenseState> DefenseState;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_DefenseState_Params params;
	params.DefenseState = DefenseState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Action
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Action	Type: TEnumAsByte<E_Husbandry_Action>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action> Action) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_Action");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_Action_Params {
		TEnumAsByte<E_Husbandry_Action> Action;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_Action_Params params;
	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_RestState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RestState	Type: TEnumAsByte<EBP_Enum_RestState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetBlackboardValues_RestState(TEnumAsByte<EBP_Enum_RestState> RestState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetBlackboardValues_RestState");

	struct ABP_FlyingAnimalBase_C_SetBlackboardValues_RestState_Params {
		TEnumAsByte<EBP_Enum_RestState> RestState;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_SetBlackboardValues_RestState_Params params;
	params.RestState = RestState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_AIState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: AIState	Type: TEnumAsByte<EBP_Enum_AIState>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_AIState(TEnumAsByte<EBP_Enum_AIState>* AIState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_AIState");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_AIState_Params {
		TEnumAsByte<EBP_Enum_AIState> AIState;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_AIState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AIState != nullptr)
		*AIState = params.AIState;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_RoamBehavior
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: RoamBehavior	Type: TEnumAsByte<EBP_Enum_AIRoamBehavior>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_RoamBehavior(TEnumAsByte<EBP_Enum_AIRoamBehavior>* RoamBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_RoamBehavior");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_RoamBehavior_Params {
		TEnumAsByte<EBP_Enum_AIRoamBehavior> RoamBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_RoamBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RoamBehavior != nullptr)
		*RoamBehavior = params.RoamBehavior;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_BiggestNeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BiggestNeed	Type: TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_BiggestNeed(TEnumAsByte<EBP_Enum_GroundNaturalBehaviors>* BiggestNeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_BiggestNeed");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_BiggestNeed_Params {
		TEnumAsByte<EBP_Enum_GroundNaturalBehaviors> BiggestNeed;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_BiggestNeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BiggestNeed != nullptr)
		*BiggestNeed = params.BiggestNeed;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_EngageBehavior
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: EngageBehavior	Type: TEnumAsByte<EBP_Enum_GroundEngageBehavior>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_EngageBehavior(TEnumAsByte<EBP_Enum_GroundEngageBehavior>* EngageBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_EngageBehavior");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_EngageBehavior_Params {
		TEnumAsByte<EBP_Enum_GroundEngageBehavior> EngageBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_EngageBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EngageBehavior != nullptr)
		*EngageBehavior = params.EngageBehavior;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_FeedingBehavior
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: FeedingBehavior	Type: TEnumAsByte<EBP_Enum_FeedingBehavior>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_FeedingBehavior(TEnumAsByte<EBP_Enum_FeedingBehavior>* FeedingBehavior) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_FeedingBehavior");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_FeedingBehavior_Params {
		TEnumAsByte<EBP_Enum_FeedingBehavior> FeedingBehavior;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_FeedingBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FeedingBehavior != nullptr)
		*FeedingBehavior = params.FeedingBehavior;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_DefenseState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: DefenseState	Type: TEnumAsByte<EBP_Enum_DefenseState>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_DefenseState(TEnumAsByte<EBP_Enum_DefenseState>* DefenseState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_DefenseState");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_DefenseState_Params {
		TEnumAsByte<EBP_Enum_DefenseState> DefenseState;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_DefenseState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DefenseState != nullptr)
		*DefenseState = params.DefenseState;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Action
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Action	Type: TEnumAsByte<E_Husbandry_Action>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action>* Action) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_Action");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_Action_Params {
		TEnumAsByte<E_Husbandry_Action> Action;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_Action_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Action != nullptr)
		*Action = params.Action;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_RestState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: RestState	Type: TEnumAsByte<EBP_Enum_RestState>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::GetBlackboardValues_RestState(TEnumAsByte<EBP_Enum_RestState>* RestState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.GetBlackboardValues_RestState");

	struct ABP_FlyingAnimalBase_C_GetBlackboardValues_RestState_Params {
		TEnumAsByte<EBP_Enum_RestState> RestState;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_GetBlackboardValues_RestState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (RestState != nullptr)
		*RestState = params.RestState;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.InitiateCombat
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::InitiateCombat() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.InitiateCombat");

	struct ABP_FlyingAnimalBase_C_InitiateCombat_Params {
	};
	ABP_FlyingAnimalBase_C_InitiateCombat_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.FledToSafePlace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool ABP_FlyingAnimalBase_C::FledToSafePlace() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.FledToSafePlace");

	struct ABP_FlyingAnimalBase_C_FledToSafePlace_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_FledToSafePlace_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.RunFromCampfire
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Campfire	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::RunFromCampfire(class AActor* Campfire) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.RunFromCampfire");

	struct ABP_FlyingAnimalBase_C_RunFromCampfire_Params {
		class AActor* Campfire;			//Offset: 0 | ElementSize: 8
	};
	ABP_FlyingAnimalBase_C_RunFromCampfire_Params params;
	params.Campfire = Campfire;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ChangeIsWaterType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: isWaterType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::ChangeIsWaterType(bool isWaterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ChangeIsWaterType");

	struct ABP_FlyingAnimalBase_C_ChangeIsWaterType_Params {
		bool isWaterType;			//Offset: 0 | ElementSize: 1
	};
	ABP_FlyingAnimalBase_C_ChangeIsWaterType_Params params;
	params.isWaterType = isWaterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// InheritableComponentHandler BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.InheritableComponentHandler
// Flags: Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic
// Params:
// Name: null	Type: TAssetPtr<class FNone_1210075531>	Flags: Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference, NoClear, BlueprintAssignable, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient
/////////////////////////////////////////////
TAssetPtr<class FNone_1210075531> ABP_FlyingAnimalBase_C::InheritableComponentHandler() {
	static auto fn = UObject::FindObject<UFunction>("InheritableComponentHandler BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.InheritableComponentHandler");

	struct ABP_FlyingAnimalBase_C_InheritableComponentHandler_Params {
		TAssetPtr<class FNone_1210075531> null;			//Offset: 32759 | ElementSize: 32759
	};
	ABP_FlyingAnimalBase_C_InheritableComponentHandler_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.null;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.UserConstructionScript");

	struct ABP_FlyingAnimalBase_C_UserConstructionScript_Params {
	};
	ABP_FlyingAnimalBase_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetCurrentHP
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::SetCurrentHP(float CurrentHP) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.SetCurrentHP");

	struct ABP_FlyingAnimalBase_C_SetCurrentHP_Params {
		float CurrentHP;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_SetCurrentHP_Params params;
	params.CurrentHP = CurrentHP;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimalBleed
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::AnimalBleed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.AnimalBleed");

	struct ABP_FlyingAnimalBase_C_AnimalBleed_Params {
	};
	ABP_FlyingAnimalBase_C_AnimalBleed_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.CalculateMaxWalkSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: WalkSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.CalculateMaxWalkSpeed");

	struct ABP_FlyingAnimalBase_C_CalculateMaxWalkSpeed_Params {
		float WalkSpeed;			//Offset: 0 | ElementSize: 4
		float MaxWalkSpeed;			//Offset: 4 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_CalculateMaxWalkSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	UObject::ProcessEvent(fn, &params);
	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

/////////////////////////////////////////////
// Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ChooseMaxWalkSpeed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxWalkSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_FlyingAnimalBase_C::ChooseMaxWalkSpeed(float* MaxWalkSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlyingAnimalBase.BP_FlyingAnimalBase_C.ChooseMaxWalkSpeed");

	struct ABP_FlyingAnimalBase_C_ChooseMaxWalkSpeed_Params {
		float MaxWalkSpeed;			//Offset: 0 | ElementSize: 4
	};
	ABP_FlyingAnimalBase_C_ChooseMaxWalkSpeed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MaxWalkSpeed != nullptr)
		*MaxWalkSpeed = params.MaxWalkSpeed;
}

#pragma endregion
}