#include "../SDK.h"
#include "Actor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PrimaryActorTick
// Declaration: struct FActorTickFunction PrimaryActorTick
struct FActorTickFunction AActor::M_GetPrimaryActorTick() const {
	return Read<struct FActorTickFunction>((byte*)this + 40);
}
struct FActorTickFunction* AActor::M_PtrGetPrimaryActorTick() {
	return reinterpret_cast<struct FActorTickFunction*>((byte*)this + 40);
}
void AActor::M_SetPrimaryActorTick(const struct FActorTickFunction& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of bNetTemporary
// Declaration: unsigned char bNetTemporary : 1
unsigned char AActor::M_GetbNetTemporary() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbNetTemporary() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbNetTemporary(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bNetStartup
// Declaration: unsigned char bNetStartup : 1
unsigned char AActor::M_GetbNetStartup() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbNetStartup() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbNetStartup(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bOnlyRelevantToOwner
// Declaration: unsigned char bOnlyRelevantToOwner : 1
unsigned char AActor::M_GetbOnlyRelevantToOwner() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbOnlyRelevantToOwner() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbOnlyRelevantToOwner(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bAlwaysRelevant
// Declaration: unsigned char bAlwaysRelevant : 1
unsigned char AActor::M_GetbAlwaysRelevant() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbAlwaysRelevant() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbAlwaysRelevant(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bReplicateMovement
// Declaration: unsigned char bReplicateMovement : 1
unsigned char AActor::M_GetbReplicateMovement() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbReplicateMovement() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbReplicateMovement(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bHidden
// Declaration: unsigned char bHidden : 1
unsigned char AActor::M_GetbHidden() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbHidden() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbHidden(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bTearOff
// Declaration: unsigned char bTearOff : 1
unsigned char AActor::M_GetbTearOff() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbTearOff() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbTearOff(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bForceNetAddressable
// Declaration: unsigned char bForceNetAddressable : 1
unsigned char AActor::M_GetbForceNetAddressable() const {
	return Read<unsigned char>((byte*)this + 88);
}
unsigned char* AActor::M_PtrGetbForceNetAddressable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 88);
}
void AActor::M_SetbForceNetAddressable(const unsigned char& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bExchangedRoles
// Declaration: unsigned char bExchangedRoles : 1
unsigned char AActor::M_GetbExchangedRoles() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbExchangedRoles() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbExchangedRoles(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bNetLoadOnClient
// Declaration: unsigned char bNetLoadOnClient : 1
unsigned char AActor::M_GetbNetLoadOnClient() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbNetLoadOnClient() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbNetLoadOnClient(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bNetUseOwnerRelevancy
// Declaration: unsigned char bNetUseOwnerRelevancy : 1
unsigned char AActor::M_GetbNetUseOwnerRelevancy() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbNetUseOwnerRelevancy() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbNetUseOwnerRelevancy(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bRelevantForNetworkReplays
// Declaration: unsigned char bRelevantForNetworkReplays : 1
unsigned char AActor::M_GetbRelevantForNetworkReplays() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbRelevantForNetworkReplays() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbRelevantForNetworkReplays(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bRelevantForLevelBounds
// Declaration: unsigned char bRelevantForLevelBounds : 1
unsigned char AActor::M_GetbRelevantForLevelBounds() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbRelevantForLevelBounds() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbRelevantForLevelBounds(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bReplayRewindable
// Declaration: unsigned char bReplayRewindable : 1
unsigned char AActor::M_GetbReplayRewindable() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbReplayRewindable() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbReplayRewindable(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bAllowTickBeforeBeginPlay
// Declaration: unsigned char bAllowTickBeforeBeginPlay : 1
unsigned char AActor::M_GetbAllowTickBeforeBeginPlay() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbAllowTickBeforeBeginPlay() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbAllowTickBeforeBeginPlay(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bAutoDestroyWhenFinished
// Declaration: unsigned char bAutoDestroyWhenFinished : 1
unsigned char AActor::M_GetbAutoDestroyWhenFinished() const {
	return Read<unsigned char>((byte*)this + 89);
}
unsigned char* AActor::M_PtrGetbAutoDestroyWhenFinished() {
	return reinterpret_cast<unsigned char*>((byte*)this + 89);
}
void AActor::M_SetbAutoDestroyWhenFinished(const unsigned char& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bCanBeDamaged
// Declaration: unsigned char bCanBeDamaged : 1
unsigned char AActor::M_GetbCanBeDamaged() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbCanBeDamaged() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbCanBeDamaged(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bBlockInput
// Declaration: unsigned char bBlockInput : 1
unsigned char AActor::M_GetbBlockInput() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbBlockInput() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbBlockInput(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bCollideWhenPlacing
// Declaration: unsigned char bCollideWhenPlacing : 1
unsigned char AActor::M_GetbCollideWhenPlacing() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbCollideWhenPlacing() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbCollideWhenPlacing(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bFindCameraComponentWhenViewTarget
// Declaration: unsigned char bFindCameraComponentWhenViewTarget : 1
unsigned char AActor::M_GetbFindCameraComponentWhenViewTarget() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbFindCameraComponentWhenViewTarget() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbFindCameraComponentWhenViewTarget(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bGenerateOverlapEventsDuringLevelStreaming
// Declaration: unsigned char bGenerateOverlapEventsDuringLevelStreaming : 1
unsigned char AActor::M_GetbGenerateOverlapEventsDuringLevelStreaming() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbGenerateOverlapEventsDuringLevelStreaming() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbGenerateOverlapEventsDuringLevelStreaming(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bIgnoresOriginShifting
// Declaration: unsigned char bIgnoresOriginShifting : 1
unsigned char AActor::M_GetbIgnoresOriginShifting() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbIgnoresOriginShifting() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbIgnoresOriginShifting(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bEnableAutoLODGeneration
// Declaration: unsigned char bEnableAutoLODGeneration : 1
unsigned char AActor::M_GetbEnableAutoLODGeneration() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbEnableAutoLODGeneration() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbEnableAutoLODGeneration(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bIsEditorOnlyActor
// Declaration: unsigned char bIsEditorOnlyActor : 1
unsigned char AActor::M_GetbIsEditorOnlyActor() const {
	return Read<unsigned char>((byte*)this + 90);
}
unsigned char* AActor::M_PtrGetbIsEditorOnlyActor() {
	return reinterpret_cast<unsigned char*>((byte*)this + 90);
}
void AActor::M_SetbIsEditorOnlyActor(const unsigned char& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of bActorSeamlessTraveled
// Declaration: unsigned char bActorSeamlessTraveled : 1
unsigned char AActor::M_GetbActorSeamlessTraveled() const {
	return Read<unsigned char>((byte*)this + 91);
}
unsigned char* AActor::M_PtrGetbActorSeamlessTraveled() {
	return reinterpret_cast<unsigned char*>((byte*)this + 91);
}
void AActor::M_SetbActorSeamlessTraveled(const unsigned char& value) {
	Write((byte*)this + 91, value);
}
// Member Getter and Setter of bReplicates
// Declaration: unsigned char bReplicates : 1
unsigned char AActor::M_GetbReplicates() const {
	return Read<unsigned char>((byte*)this + 91);
}
unsigned char* AActor::M_PtrGetbReplicates() {
	return reinterpret_cast<unsigned char*>((byte*)this + 91);
}
void AActor::M_SetbReplicates(const unsigned char& value) {
	Write((byte*)this + 91, value);
}
// Member Getter and Setter of bCanBeInCluster
// Declaration: unsigned char bCanBeInCluster : 1
unsigned char AActor::M_GetbCanBeInCluster() const {
	return Read<unsigned char>((byte*)this + 91);
}
unsigned char* AActor::M_PtrGetbCanBeInCluster() {
	return reinterpret_cast<unsigned char*>((byte*)this + 91);
}
void AActor::M_SetbCanBeInCluster(const unsigned char& value) {
	Write((byte*)this + 91, value);
}
// Member Getter and Setter of bAllowReceiveTickEventOnDedicatedServer
// Declaration: unsigned char bAllowReceiveTickEventOnDedicatedServer : 1
unsigned char AActor::M_GetbAllowReceiveTickEventOnDedicatedServer() const {
	return Read<unsigned char>((byte*)this + 91);
}
unsigned char* AActor::M_PtrGetbAllowReceiveTickEventOnDedicatedServer() {
	return reinterpret_cast<unsigned char*>((byte*)this + 91);
}
void AActor::M_SetbAllowReceiveTickEventOnDedicatedServer(const unsigned char& value) {
	Write((byte*)this + 91, value);
}
// Member Getter and Setter of bActorEnableCollision
// Declaration: unsigned char bActorEnableCollision : 1
unsigned char AActor::M_GetbActorEnableCollision() const {
	return Read<unsigned char>((byte*)this + 92);
}
unsigned char* AActor::M_PtrGetbActorEnableCollision() {
	return reinterpret_cast<unsigned char*>((byte*)this + 92);
}
void AActor::M_SetbActorEnableCollision(const unsigned char& value) {
	Write((byte*)this + 92, value);
}
// Member Getter and Setter of bActorIsBeingDestroyed
// Declaration: unsigned char bActorIsBeingDestroyed : 1
unsigned char AActor::M_GetbActorIsBeingDestroyed() const {
	return Read<unsigned char>((byte*)this + 92);
}
unsigned char* AActor::M_PtrGetbActorIsBeingDestroyed() {
	return reinterpret_cast<unsigned char*>((byte*)this + 92);
}
void AActor::M_SetbActorIsBeingDestroyed(const unsigned char& value) {
	Write((byte*)this + 92, value);
}
// Member Getter and Setter of UpdateOverlapsMethodDuringLevelStreaming
// Declaration: EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming
EActorUpdateOverlapsMethod AActor::M_GetUpdateOverlapsMethodDuringLevelStreaming() const {
	return Read<EActorUpdateOverlapsMethod>((byte*)this + 93);
}
EActorUpdateOverlapsMethod* AActor::M_PtrGetUpdateOverlapsMethodDuringLevelStreaming() {
	return reinterpret_cast<EActorUpdateOverlapsMethod*>((byte*)this + 93);
}
void AActor::M_SetUpdateOverlapsMethodDuringLevelStreaming(const EActorUpdateOverlapsMethod& value) {
	Write((byte*)this + 93, value);
}
// Member Getter and Setter of DefaultUpdateOverlapsMethodDuringLevelStreaming
// Declaration: EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming
EActorUpdateOverlapsMethod AActor::M_GetDefaultUpdateOverlapsMethodDuringLevelStreaming() const {
	return Read<EActorUpdateOverlapsMethod>((byte*)this + 94);
}
EActorUpdateOverlapsMethod* AActor::M_PtrGetDefaultUpdateOverlapsMethodDuringLevelStreaming() {
	return reinterpret_cast<EActorUpdateOverlapsMethod*>((byte*)this + 94);
}
void AActor::M_SetDefaultUpdateOverlapsMethodDuringLevelStreaming(const EActorUpdateOverlapsMethod& value) {
	Write((byte*)this + 94, value);
}
// Member Getter and Setter of RemoteRole
// Declaration: TEnumAsByte<ENetRole> RemoteRole
TEnumAsByte<ENetRole> AActor::M_GetRemoteRole() const {
	return Read<TEnumAsByte<ENetRole>>((byte*)this + 95);
}
TEnumAsByte<ENetRole>* AActor::M_PtrGetRemoteRole() {
	return reinterpret_cast<TEnumAsByte<ENetRole>*>((byte*)this + 95);
}
void AActor::M_SetRemoteRole(const TEnumAsByte<ENetRole>& value) {
	Write((byte*)this + 95, value);
}
// Member Getter and Setter of ReplicatedMovement
// Declaration: struct FRepMovement ReplicatedMovement
struct FRepMovement AActor::M_GetReplicatedMovement() const {
	return Read<struct FRepMovement>((byte*)this + 96);
}
struct FRepMovement* AActor::M_PtrGetReplicatedMovement() {
	return reinterpret_cast<struct FRepMovement*>((byte*)this + 96);
}
void AActor::M_SetReplicatedMovement(const struct FRepMovement& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of InitialLifeSpan
// Declaration: float InitialLifeSpan
float AActor::M_GetInitialLifeSpan() const {
	return Read<float>((byte*)this + 148);
}
float* AActor::M_PtrGetInitialLifeSpan() {
	return reinterpret_cast<float*>((byte*)this + 148);
}
void AActor::M_SetInitialLifeSpan(const float& value) {
	Write((byte*)this + 148, value);
}
// Member Getter and Setter of CustomTimeDilation
// Declaration: float CustomTimeDilation
float AActor::M_GetCustomTimeDilation() const {
	return Read<float>((byte*)this + 152);
}
float* AActor::M_PtrGetCustomTimeDilation() {
	return reinterpret_cast<float*>((byte*)this + 152);
}
void AActor::M_SetCustomTimeDilation(const float& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of AttachmentReplication
// Declaration: struct FRepAttachment AttachmentReplication
struct FRepAttachment AActor::M_GetAttachmentReplication() const {
	return Read<struct FRepAttachment>((byte*)this + 160);
}
struct FRepAttachment* AActor::M_PtrGetAttachmentReplication() {
	return reinterpret_cast<struct FRepAttachment*>((byte*)this + 160);
}
void AActor::M_SetAttachmentReplication(const struct FRepAttachment& value) {
	Write((byte*)this + 160, value);
}
// Member Getter and Setter of Owner
// Declaration: class AActor* Owner
class AActor* AActor::M_GetOwner() const {
	return Read<class AActor*>((byte*)this + 224);
}
class AActor** AActor::M_PtrGetOwner() {
	return reinterpret_cast<class AActor**>((byte*)this + 224);
}
void AActor::M_SetOwner(const class AActor*& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of NetDriverName
// Declaration: struct FName NetDriverName
struct FName AActor::M_GetNetDriverName() const {
	return Read<struct FName>((byte*)this + 232);
}
struct FName* AActor::M_PtrGetNetDriverName() {
	return reinterpret_cast<struct FName*>((byte*)this + 232);
}
void AActor::M_SetNetDriverName(const struct FName& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of Role
// Declaration: TEnumAsByte<ENetRole> Role
TEnumAsByte<ENetRole> AActor::M_GetRole() const {
	return Read<TEnumAsByte<ENetRole>>((byte*)this + 240);
}
TEnumAsByte<ENetRole>* AActor::M_PtrGetRole() {
	return reinterpret_cast<TEnumAsByte<ENetRole>*>((byte*)this + 240);
}
void AActor::M_SetRole(const TEnumAsByte<ENetRole>& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of NetDormancy
// Declaration: TEnumAsByte<ENetDormancy> NetDormancy
TEnumAsByte<ENetDormancy> AActor::M_GetNetDormancy() const {
	return Read<TEnumAsByte<ENetDormancy>>((byte*)this + 241);
}
TEnumAsByte<ENetDormancy>* AActor::M_PtrGetNetDormancy() {
	return reinterpret_cast<TEnumAsByte<ENetDormancy>*>((byte*)this + 241);
}
void AActor::M_SetNetDormancy(const TEnumAsByte<ENetDormancy>& value) {
	Write((byte*)this + 241, value);
}
// Member Getter and Setter of SpawnCollisionHandlingMethod
// Declaration: ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod
ESpawnActorCollisionHandlingMethod AActor::M_GetSpawnCollisionHandlingMethod() const {
	return Read<ESpawnActorCollisionHandlingMethod>((byte*)this + 242);
}
ESpawnActorCollisionHandlingMethod* AActor::M_PtrGetSpawnCollisionHandlingMethod() {
	return reinterpret_cast<ESpawnActorCollisionHandlingMethod*>((byte*)this + 242);
}
void AActor::M_SetSpawnCollisionHandlingMethod(const ESpawnActorCollisionHandlingMethod& value) {
	Write((byte*)this + 242, value);
}
// Member Getter and Setter of AutoReceiveInput
// Declaration: TEnumAsByte<EAutoReceiveInput> AutoReceiveInput
TEnumAsByte<EAutoReceiveInput> AActor::M_GetAutoReceiveInput() const {
	return Read<TEnumAsByte<EAutoReceiveInput>>((byte*)this + 243);
}
TEnumAsByte<EAutoReceiveInput>* AActor::M_PtrGetAutoReceiveInput() {
	return reinterpret_cast<TEnumAsByte<EAutoReceiveInput>*>((byte*)this + 243);
}
void AActor::M_SetAutoReceiveInput(const TEnumAsByte<EAutoReceiveInput>& value) {
	Write((byte*)this + 243, value);
}
// Member Getter and Setter of InputPriority
// Declaration: int32_t InputPriority
int32_t AActor::M_GetInputPriority() const {
	return Read<int32_t>((byte*)this + 244);
}
int32_t* AActor::M_PtrGetInputPriority() {
	return reinterpret_cast<int32_t*>((byte*)this + 244);
}
void AActor::M_SetInputPriority(const int32_t& value) {
	Write((byte*)this + 244, value);
}
// Member Getter and Setter of InputComponent
// Declaration: class UInputComponent* InputComponent
class UInputComponent* AActor::M_GetInputComponent() const {
	return Read<class UInputComponent*>((byte*)this + 248);
}
class UInputComponent** AActor::M_PtrGetInputComponent() {
	return reinterpret_cast<class UInputComponent**>((byte*)this + 248);
}
void AActor::M_SetInputComponent(const class UInputComponent*& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of NetCullDistanceSquared
// Declaration: float NetCullDistanceSquared
float AActor::M_GetNetCullDistanceSquared() const {
	return Read<float>((byte*)this + 256);
}
float* AActor::M_PtrGetNetCullDistanceSquared() {
	return reinterpret_cast<float*>((byte*)this + 256);
}
void AActor::M_SetNetCullDistanceSquared(const float& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of NetTag
// Declaration: int32_t NetTag
int32_t AActor::M_GetNetTag() const {
	return Read<int32_t>((byte*)this + 260);
}
int32_t* AActor::M_PtrGetNetTag() {
	return reinterpret_cast<int32_t*>((byte*)this + 260);
}
void AActor::M_SetNetTag(const int32_t& value) {
	Write((byte*)this + 260, value);
}
// Member Getter and Setter of NetUpdateFrequency
// Declaration: float NetUpdateFrequency
float AActor::M_GetNetUpdateFrequency() const {
	return Read<float>((byte*)this + 264);
}
float* AActor::M_PtrGetNetUpdateFrequency() {
	return reinterpret_cast<float*>((byte*)this + 264);
}
void AActor::M_SetNetUpdateFrequency(const float& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of MinNetUpdateFrequency
// Declaration: float MinNetUpdateFrequency
float AActor::M_GetMinNetUpdateFrequency() const {
	return Read<float>((byte*)this + 268);
}
float* AActor::M_PtrGetMinNetUpdateFrequency() {
	return reinterpret_cast<float*>((byte*)this + 268);
}
void AActor::M_SetMinNetUpdateFrequency(const float& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of NetPriority
// Declaration: float NetPriority
float AActor::M_GetNetPriority() const {
	return Read<float>((byte*)this + 272);
}
float* AActor::M_PtrGetNetPriority() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void AActor::M_SetNetPriority(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of Instigator
// Declaration: class APawn* Instigator
class APawn* AActor::M_GetInstigator() const {
	return Read<class APawn*>((byte*)this + 280);
}
class APawn** AActor::M_PtrGetInstigator() {
	return reinterpret_cast<class APawn**>((byte*)this + 280);
}
void AActor::M_SetInstigator(const class APawn*& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of Children
// Declaration: TArray<class AActor*> Children
TArray<class AActor*> AActor::M_GetChildren() const {
	return Read<TArray<class AActor*>>((byte*)this + 288);
}
TArray<class AActor*>* AActor::M_PtrGetChildren() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 288);
}
void AActor::M_SetChildren(const TArray<class AActor*>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of RootComponent
// Declaration: class USceneComponent* RootComponent
class USceneComponent* AActor::M_GetRootComponent() const {
	return Read<class USceneComponent*>((byte*)this + 304);
}
class USceneComponent** AActor::M_PtrGetRootComponent() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 304);
}
void AActor::M_SetRootComponent(const class USceneComponent*& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of ControllingMatineeActors
// Declaration: TArray<class AMatineeActor*> ControllingMatineeActors
TArray<class AMatineeActor*> AActor::M_GetControllingMatineeActors() const {
	return Read<TArray<class AMatineeActor*>>((byte*)this + 312);
}
TArray<class AMatineeActor*>* AActor::M_PtrGetControllingMatineeActors() {
	return reinterpret_cast<TArray<class AMatineeActor*>*>((byte*)this + 312);
}
void AActor::M_SetControllingMatineeActors(const TArray<class AMatineeActor*>& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Layers
// Declaration: TArray<struct FName> Layers
TArray<struct FName> AActor::M_GetLayers() const {
	return Read<TArray<struct FName>>((byte*)this + 336);
}
TArray<struct FName>* AActor::M_PtrGetLayers() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 336);
}
void AActor::M_SetLayers(const TArray<struct FName>& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of ParentComponent
// Declaration: TWeakObjectPtr<class UChildActorComponent> ParentComponent
TWeakObjectPtr<class UChildActorComponent> AActor::M_GetParentComponent() const {
	return Read<TWeakObjectPtr<class UChildActorComponent>>((byte*)this + 352);
}
TWeakObjectPtr<class UChildActorComponent>* AActor::M_PtrGetParentComponent() {
	return reinterpret_cast<TWeakObjectPtr<class UChildActorComponent>*>((byte*)this + 352);
}
void AActor::M_SetParentComponent(const TWeakObjectPtr<class UChildActorComponent>& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of Tags
// Declaration: TArray<struct FName> Tags
TArray<struct FName> AActor::M_GetTags() const {
	return Read<TArray<struct FName>>((byte*)this + 368);
}
TArray<struct FName>* AActor::M_PtrGetTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 368);
}
void AActor::M_SetTags(const TArray<struct FName>& value) {
	Write((byte*)this + 368, value);
}
// Member Getter and Setter of OnTakeAnyDamage
// Declaration: TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature> OnTakeAnyDamage
TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature> AActor::M_GetOnTakeAnyDamage() const {
	return Read<TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>>((byte*)this + 384);
}
TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>* AActor::M_PtrGetOnTakeAnyDamage() {
	return reinterpret_cast<TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>*>((byte*)this + 384);
}
void AActor::M_SetOnTakeAnyDamage(const TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>& value) {
	Write((byte*)this + 384, value);
}
// Member Getter and Setter of OnTakePointDamage
// Declaration: TAssetPtr<class FTakePointDamageSignature__DelegateSignature> OnTakePointDamage
TAssetPtr<class FTakePointDamageSignature__DelegateSignature> AActor::M_GetOnTakePointDamage() const {
	return Read<TAssetPtr<class FTakePointDamageSignature__DelegateSignature>>((byte*)this + 385);
}
TAssetPtr<class FTakePointDamageSignature__DelegateSignature>* AActor::M_PtrGetOnTakePointDamage() {
	return reinterpret_cast<TAssetPtr<class FTakePointDamageSignature__DelegateSignature>*>((byte*)this + 385);
}
void AActor::M_SetOnTakePointDamage(const TAssetPtr<class FTakePointDamageSignature__DelegateSignature>& value) {
	Write((byte*)this + 385, value);
}
// Member Getter and Setter of OnTakeRadialDamage
// Declaration: TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature> OnTakeRadialDamage
TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature> AActor::M_GetOnTakeRadialDamage() const {
	return Read<TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>>((byte*)this + 386);
}
TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>* AActor::M_PtrGetOnTakeRadialDamage() {
	return reinterpret_cast<TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>*>((byte*)this + 386);
}
void AActor::M_SetOnTakeRadialDamage(const TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>& value) {
	Write((byte*)this + 386, value);
}
// Member Getter and Setter of OnActorBeginOverlap
// Declaration: TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature> OnActorBeginOverlap
TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature> AActor::M_GetOnActorBeginOverlap() const {
	return Read<TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>>((byte*)this + 387);
}
TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>* AActor::M_PtrGetOnActorBeginOverlap() {
	return reinterpret_cast<TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>*>((byte*)this + 387);
}
void AActor::M_SetOnActorBeginOverlap(const TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>& value) {
	Write((byte*)this + 387, value);
}
// Member Getter and Setter of OnActorEndOverlap
// Declaration: TAssetPtr<class FActorEndOverlapSignature__DelegateSignature> OnActorEndOverlap
TAssetPtr<class FActorEndOverlapSignature__DelegateSignature> AActor::M_GetOnActorEndOverlap() const {
	return Read<TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>>((byte*)this + 388);
}
TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>* AActor::M_PtrGetOnActorEndOverlap() {
	return reinterpret_cast<TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>*>((byte*)this + 388);
}
void AActor::M_SetOnActorEndOverlap(const TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>& value) {
	Write((byte*)this + 388, value);
}
// Member Getter and Setter of OnBeginCursorOver
// Declaration: TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature> OnBeginCursorOver
TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature> AActor::M_GetOnBeginCursorOver() const {
	return Read<TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>>((byte*)this + 389);
}
TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>* AActor::M_PtrGetOnBeginCursorOver() {
	return reinterpret_cast<TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>*>((byte*)this + 389);
}
void AActor::M_SetOnBeginCursorOver(const TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 389, value);
}
// Member Getter and Setter of OnEndCursorOver
// Declaration: TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature> OnEndCursorOver
TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature> AActor::M_GetOnEndCursorOver() const {
	return Read<TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>>((byte*)this + 390);
}
TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>* AActor::M_PtrGetOnEndCursorOver() {
	return reinterpret_cast<TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>*>((byte*)this + 390);
}
void AActor::M_SetOnEndCursorOver(const TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 390, value);
}
// Member Getter and Setter of OnClicked
// Declaration: TAssetPtr<class FActorOnClickedSignature__DelegateSignature> OnClicked
TAssetPtr<class FActorOnClickedSignature__DelegateSignature> AActor::M_GetOnClicked() const {
	return Read<TAssetPtr<class FActorOnClickedSignature__DelegateSignature>>((byte*)this + 391);
}
TAssetPtr<class FActorOnClickedSignature__DelegateSignature>* AActor::M_PtrGetOnClicked() {
	return reinterpret_cast<TAssetPtr<class FActorOnClickedSignature__DelegateSignature>*>((byte*)this + 391);
}
void AActor::M_SetOnClicked(const TAssetPtr<class FActorOnClickedSignature__DelegateSignature>& value) {
	Write((byte*)this + 391, value);
}
// Member Getter and Setter of OnReleased
// Declaration: TAssetPtr<class FActorOnReleasedSignature__DelegateSignature> OnReleased
TAssetPtr<class FActorOnReleasedSignature__DelegateSignature> AActor::M_GetOnReleased() const {
	return Read<TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>>((byte*)this + 392);
}
TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>* AActor::M_PtrGetOnReleased() {
	return reinterpret_cast<TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>*>((byte*)this + 392);
}
void AActor::M_SetOnReleased(const TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of OnInputTouchBegin
// Declaration: TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature> OnInputTouchBegin
TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature> AActor::M_GetOnInputTouchBegin() const {
	return Read<TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>>((byte*)this + 393);
}
TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>* AActor::M_PtrGetOnInputTouchBegin() {
	return reinterpret_cast<TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>*>((byte*)this + 393);
}
void AActor::M_SetOnInputTouchBegin(const TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>& value) {
	Write((byte*)this + 393, value);
}
// Member Getter and Setter of OnInputTouchEnd
// Declaration: TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature> OnInputTouchEnd
TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature> AActor::M_GetOnInputTouchEnd() const {
	return Read<TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>>((byte*)this + 394);
}
TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>* AActor::M_PtrGetOnInputTouchEnd() {
	return reinterpret_cast<TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>*>((byte*)this + 394);
}
void AActor::M_SetOnInputTouchEnd(const TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>& value) {
	Write((byte*)this + 394, value);
}
// Member Getter and Setter of OnInputTouchEnter
// Declaration: TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature> OnInputTouchEnter
TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature> AActor::M_GetOnInputTouchEnter() const {
	return Read<TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>>((byte*)this + 395);
}
TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>* AActor::M_PtrGetOnInputTouchEnter() {
	return reinterpret_cast<TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>*>((byte*)this + 395);
}
void AActor::M_SetOnInputTouchEnter(const TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 395, value);
}
// Member Getter and Setter of OnInputTouchLeave
// Declaration: TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature> OnInputTouchLeave
TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature> AActor::M_GetOnInputTouchLeave() const {
	return Read<TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>>((byte*)this + 396);
}
TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>* AActor::M_PtrGetOnInputTouchLeave() {
	return reinterpret_cast<TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>*>((byte*)this + 396);
}
void AActor::M_SetOnInputTouchLeave(const TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>& value) {
	Write((byte*)this + 396, value);
}
// Member Getter and Setter of OnActorHit
// Declaration: TAssetPtr<class FActorHitSignature__DelegateSignature> OnActorHit
TAssetPtr<class FActorHitSignature__DelegateSignature> AActor::M_GetOnActorHit() const {
	return Read<TAssetPtr<class FActorHitSignature__DelegateSignature>>((byte*)this + 397);
}
TAssetPtr<class FActorHitSignature__DelegateSignature>* AActor::M_PtrGetOnActorHit() {
	return reinterpret_cast<TAssetPtr<class FActorHitSignature__DelegateSignature>*>((byte*)this + 397);
}
void AActor::M_SetOnActorHit(const TAssetPtr<class FActorHitSignature__DelegateSignature>& value) {
	Write((byte*)this + 397, value);
}
// Member Getter and Setter of OnDestroyed
// Declaration: TAssetPtr<class FActorDestroyedSignature__DelegateSignature> OnDestroyed
TAssetPtr<class FActorDestroyedSignature__DelegateSignature> AActor::M_GetOnDestroyed() const {
	return Read<TAssetPtr<class FActorDestroyedSignature__DelegateSignature>>((byte*)this + 398);
}
TAssetPtr<class FActorDestroyedSignature__DelegateSignature>* AActor::M_PtrGetOnDestroyed() {
	return reinterpret_cast<TAssetPtr<class FActorDestroyedSignature__DelegateSignature>*>((byte*)this + 398);
}
void AActor::M_SetOnDestroyed(const TAssetPtr<class FActorDestroyedSignature__DelegateSignature>& value) {
	Write((byte*)this + 398, value);
}
// Member Getter and Setter of OnEndPlay
// Declaration: TAssetPtr<class FActorEndPlaySignature__DelegateSignature> OnEndPlay
TAssetPtr<class FActorEndPlaySignature__DelegateSignature> AActor::M_GetOnEndPlay() const {
	return Read<TAssetPtr<class FActorEndPlaySignature__DelegateSignature>>((byte*)this + 399);
}
TAssetPtr<class FActorEndPlaySignature__DelegateSignature>* AActor::M_PtrGetOnEndPlay() {
	return reinterpret_cast<TAssetPtr<class FActorEndPlaySignature__DelegateSignature>*>((byte*)this + 399);
}
void AActor::M_SetOnEndPlay(const TAssetPtr<class FActorEndPlaySignature__DelegateSignature>& value) {
	Write((byte*)this + 399, value);
}
// Member Getter and Setter of InstanceComponents
// Declaration: TArray<class UActorComponent*> InstanceComponents
TArray<class UActorComponent*> AActor::M_GetInstanceComponents() const {
	return Read<TArray<class UActorComponent*>>((byte*)this + 496);
}
TArray<class UActorComponent*>* AActor::M_PtrGetInstanceComponents() {
	return reinterpret_cast<TArray<class UActorComponent*>*>((byte*)this + 496);
}
void AActor::M_SetInstanceComponents(const TArray<class UActorComponent*>& value) {
	Write((byte*)this + 496, value);
}
// Member Getter and Setter of BlueprintCreatedComponents
// Declaration: TArray<class UActorComponent*> BlueprintCreatedComponents
TArray<class UActorComponent*> AActor::M_GetBlueprintCreatedComponents() const {
	return Read<TArray<class UActorComponent*>>((byte*)this + 512);
}
TArray<class UActorComponent*>* AActor::M_PtrGetBlueprintCreatedComponents() {
	return reinterpret_cast<TArray<class UActorComponent*>*>((byte*)this + 512);
}
void AActor::M_SetBlueprintCreatedComponents(const TArray<class UActorComponent*>& value) {
	Write((byte*)this + 512, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.Actor.ActorHasTag
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::ActorHasTag(struct FName Tag)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	struct AActor_ActorHasTag_Params {
		struct FName Tag;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AActor_ActorHasTag_Params params;
	params.Tag = Tag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.AddComponent
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: TemplateName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bManualAttachment	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RelativeTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ComponentTemplateContext	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bDeferredFinish	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UActorComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UActorComponent* AActor::AddComponent(struct FName TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext, bool bDeferredFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	struct AActor_AddComponent_Params {
		struct FName TemplateName;			//Offset: 0 | ElementSize: 8
		bool bManualAttachment;			//Offset: 8 | ElementSize: 1
		struct FTransform RelativeTransform;			//Offset: 16 | ElementSize: 48
		class UObject* ComponentTemplateContext;			//Offset: 64 | ElementSize: 8
		bool bDeferredFinish;			//Offset: 72 | ElementSize: 1
		class UActorComponent* ReturnValue;			//Offset: 80 | ElementSize: 8
	};
	AActor_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;
	params.bDeferredFinish = bDeferredFinish;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.AddComponentByClass
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Class	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bManualAttachment	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RelativeTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bDeferredFinish	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UActorComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UActorComponent* AActor::AddComponentByClass(class UActorComponent* Class, bool bManualAttachment, const struct FTransform& RelativeTransform, bool bDeferredFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponentByClass");

	struct AActor_AddComponentByClass_Params {
		class UActorComponent* Class;			//Offset: 0 | ElementSize: 8
		bool bManualAttachment;			//Offset: 8 | ElementSize: 1
		struct FTransform RelativeTransform;			//Offset: 16 | ElementSize: 48
		bool bDeferredFinish;			//Offset: 64 | ElementSize: 1
		class UActorComponent* ReturnValue;			//Offset: 72 | ElementSize: 8
	};
	AActor_AddComponentByClass_Params params;
	params.Class = Class;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.bDeferredFinish = bDeferredFinish;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.AddTickPrerequisiteActor
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	struct AActor_AddTickPrerequisiteActor_Params {
		class AActor* PrerequisiteActor;			//Offset: 0 | ElementSize: 8
	};
	AActor_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.AddTickPrerequisiteComponent
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteComponent	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	struct AActor_AddTickPrerequisiteComponent_Params {
		class UActorComponent* PrerequisiteComponent;			//Offset: 0 | ElementSize: 8
	};
	AActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.DetachRootComponentFromParent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bMaintainWorldPosition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::DetachRootComponentFromParent(bool bMaintainWorldPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	struct AActor_DetachRootComponentFromParent_Params {
		bool bMaintainWorldPosition;			//Offset: 0 | ElementSize: 1
	};
	AActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.DisableInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::DisableInput(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	struct AActor_DisableInput_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	AActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.EnableInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::EnableInput(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	struct AActor_EnableInput_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	AActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.FinishAddComponent
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Component	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bManualAttachment	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RelativeTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::FinishAddComponent(class UActorComponent* Component, bool bManualAttachment, const struct FTransform& RelativeTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FinishAddComponent");

	struct AActor_FinishAddComponent_Params {
		class UActorComponent* Component;			//Offset: 0 | ElementSize: 8
		bool bManualAttachment;			//Offset: 8 | ElementSize: 1
		struct FTransform RelativeTransform;			//Offset: 16 | ElementSize: 48
	};
	AActor_FinishAddComponent_Params params;
	params.Component = Component;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.FlushNetDormancy
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AActor::FlushNetDormancy() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	struct AActor_FlushNetDormancy_Params {
	};
	AActor_FlushNetDormancy_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ForceNetUpdate
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AActor::ForceNetUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	struct AActor_ForceNetUpdate_Params {
	};
	AActor_ForceNetUpdate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorBounds
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: bOnlyCollidingComponents	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Origin	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoxExtent	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeFromChildActors	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent, bool bIncludeFromChildActors)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	struct AActor_GetActorBounds_Params {
		bool bOnlyCollidingComponents;			//Offset: 0 | ElementSize: 1
		struct FVector Origin;			//Offset: 4 | ElementSize: 12
		struct FVector BoxExtent;			//Offset: 16 | ElementSize: 12
		bool bIncludeFromChildActors;			//Offset: 28 | ElementSize: 1
	};
	AActor_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;
	params.bIncludeFromChildActors = bIncludeFromChildActors;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorEnableCollision
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::GetActorEnableCollision()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	struct AActor_GetActorEnableCollision_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_GetActorEnableCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorEyesViewPoint
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OutLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	struct AActor_GetActorEyesViewPoint_Params {
		struct FVector OutLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator OutRotation;			//Offset: 12 | ElementSize: 12
	};
	AActor_GetActorEyesViewPoint_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorForwardVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetActorForwardVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	struct AActor_GetActorForwardVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_GetActorForwardVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorRelativeScale3D
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetActorRelativeScale3D()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	struct AActor_GetActorRelativeScale3D_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_GetActorRelativeScale3D_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorRightVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetActorRightVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	struct AActor_GetActorRightVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_GetActorRightVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorScale3D
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetActorScale3D()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	struct AActor_GetActorScale3D_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_GetActorScale3D_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorTickInterval
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetActorTickInterval()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	struct AActor_GetActorTickInterval_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AActor_GetActorTickInterval_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorTimeDilation
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetActorTimeDilation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	struct AActor_GetActorTimeDilation_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AActor_GetActorTimeDilation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetActorUpVector
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetActorUpVector()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	struct AActor_GetActorUpVector_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_GetActorUpVector_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetAllChildActors
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ChildActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: bIncludeDescendants	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::GetAllChildActors(TArray<class AActor*>* ChildActors, bool bIncludeDescendants)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	struct AActor_GetAllChildActors_Params {
		TArray<class AActor*> ChildActors;			//Offset: 0 | ElementSize: 16
		bool bIncludeDescendants;			//Offset: 16 | ElementSize: 1
	};
	AActor_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetAttachedActors
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OutActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: bResetArray	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::GetAttachedActors(TArray<class AActor*>* OutActors, bool bResetArray)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	struct AActor_GetAttachedActors_Params {
		TArray<class AActor*> OutActors;			//Offset: 0 | ElementSize: 16
		bool bResetArray;			//Offset: 16 | ElementSize: 1
	};
	AActor_GetAttachedActors_Params params;
	params.bResetArray = bResetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetAttachParentActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AActor::GetAttachParentActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	struct AActor_GetAttachParentActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetAttachParentActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetAttachParentSocketName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName AActor::GetAttachParentSocketName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	struct AActor_GetAttachParentSocketName_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetAttachParentSocketName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetComponentByClass
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ComponentClass	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UActorComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UActorComponent* AActor::GetComponentByClass(class UActorComponent* ComponentClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	struct AActor_GetComponentByClass_Params {
		class UActorComponent* ComponentClass;			//Offset: 0 | ElementSize: 8
		class UActorComponent* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	AActor_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetComponentsByInterface
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Interface	Type: class UInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<class UActorComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UActorComponent*> AActor::GetComponentsByInterface(class UInterface* Interface)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByInterface");

	struct AActor_GetComponentsByInterface_Params {
		class UInterface* Interface;			//Offset: 0 | ElementSize: 8
		TArray<class UActorComponent*> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	AActor_GetComponentsByInterface_Params params;
	params.Interface = Interface;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetComponentsByTag
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ComponentClass	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<class UActorComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UActorComponent*> AActor::GetComponentsByTag(class UActorComponent* ComponentClass, struct FName Tag)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	struct AActor_GetComponentsByTag_Params {
		class UActorComponent* ComponentClass;			//Offset: 0 | ElementSize: 8
		struct FName Tag;			//Offset: 8 | ElementSize: 8
		TArray<class UActorComponent*> ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	AActor_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetDistanceTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetDistanceTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	struct AActor_GetDistanceTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetDotProductTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetDotProductTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	struct AActor_GetDotProductTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetGameTimeSinceCreation
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetGameTimeSinceCreation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	struct AActor_GetGameTimeSinceCreation_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AActor_GetGameTimeSinceCreation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetHorizontalDistanceTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetHorizontalDistanceTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	struct AActor_GetHorizontalDistanceTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetHorizontalDotProductTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetHorizontalDotProductTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	struct AActor_GetHorizontalDotProductTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetInputAxisKeyValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InputAxisKey	Type: struct FKey	Flags: ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetInputAxisKeyValue(struct FKey InputAxisKey)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	struct AActor_GetInputAxisKeyValue_Params {
		struct FKey InputAxisKey;			//Offset: 0 | ElementSize: 24
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	AActor_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetInputAxisValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InputAxisName	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetInputAxisValue(struct FName InputAxisName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	struct AActor_GetInputAxisValue_Params {
		struct FName InputAxisName;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetInputVectorAxisValue
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InputAxisKey	Type: struct FKey	Flags: ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetInputVectorAxisValue(struct FKey InputAxisKey)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	struct AActor_GetInputVectorAxisValue_Params {
		struct FKey InputAxisKey;			//Offset: 0 | ElementSize: 24
		struct FVector ReturnValue;			//Offset: 24 | ElementSize: 12
	};
	AActor_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetInstigator
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* AActor::GetInstigator()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	struct AActor_GetInstigator_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetInstigator_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetInstigatorController
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AController* AActor::GetInstigatorController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	struct AActor_GetInstigatorController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetInstigatorController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetLifeSpan
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetLifeSpan()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	struct AActor_GetLifeSpan_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AActor_GetLifeSpan_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetLocalRole
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<ENetRole>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<ENetRole> AActor::GetLocalRole()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalRole");

	struct AActor_GetLocalRole_Params {
		TEnumAsByte<ENetRole> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_GetLocalRole_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetOverlappingActors
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OverlappingActors	Type: TArray<class AActor*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ClassFilter	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::GetOverlappingActors(TArray<class AActor*>* OverlappingActors, class AActor* ClassFilter)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	struct AActor_GetOverlappingActors_Params {
		TArray<class AActor*> OverlappingActors;			//Offset: 0 | ElementSize: 16
		class AActor* ClassFilter;			//Offset: 16 | ElementSize: 8
	};
	AActor_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetOverlappingComponents
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OverlappingComponents	Type: TArray<class UPrimitiveComponent*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	struct AActor_GetOverlappingComponents_Params {
		TArray<class UPrimitiveComponent*> OverlappingComponents;			//Offset: 0 | ElementSize: 16
	};
	AActor_GetOverlappingComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetOwner
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AActor::GetOwner()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	struct AActor_GetOwner_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetOwner_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetParentActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AActor::GetParentActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	struct AActor_GetParentActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetParentActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetParentComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UChildActorComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UChildActorComponent* AActor::GetParentComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	struct AActor_GetParentComponent_Params {
		class UChildActorComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_GetParentComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetRemoteRole
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<ENetRole>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<ENetRole> AActor::GetRemoteRole()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	struct AActor_GetRemoteRole_Params {
		TEnumAsByte<ENetRole> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_GetRemoteRole_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetSquaredDistanceTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetSquaredDistanceTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	struct AActor_GetSquaredDistanceTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetSquaredHorizontalDistanceTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetSquaredHorizontalDistanceTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredHorizontalDistanceTo");

	struct AActor_GetSquaredHorizontalDistanceTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetSquaredHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetTickableWhenPaused
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::GetTickableWhenPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	struct AActor_GetTickableWhenPaused_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_GetTickableWhenPaused_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetTransform
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FTransform AActor::GetTransform()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	struct AActor_GetTransform_Params {
		struct FTransform ReturnValue;			//Offset: 0 | ElementSize: 48
	};
	AActor_GetTransform_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetVelocity
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::GetVelocity()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	struct AActor_GetVelocity_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_GetVelocity_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.GetVerticalDistanceTo
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OtherActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AActor::GetVerticalDistanceTo(class AActor* OtherActor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	struct AActor_GetVerticalDistanceTo_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	AActor_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.HasAuthority
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::HasAuthority()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	struct AActor_HasAuthority_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_HasAuthority_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.IsActorBeingDestroyed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::IsActorBeingDestroyed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	struct AActor_IsActorBeingDestroyed_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_IsActorBeingDestroyed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.IsActorTickEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::IsActorTickEnabled()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	struct AActor_IsActorTickEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_IsActorTickEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.IsChildActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::IsChildActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	struct AActor_IsChildActor_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AActor_IsChildActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.IsOverlappingActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Other	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::IsOverlappingActor(class AActor* Other)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	struct AActor_IsOverlappingActor_Params {
		class AActor* Other;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AActor_IsOverlappingActor_Params params;
	params.Other = Other;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorLocalOffset
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	struct AActor_K2_AddActorLocalOffset_Params {
		struct FVector DeltaLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	AActor_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorLocalRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	struct AActor_K2_AddActorLocalRotation_Params {
		struct FRotator DeltaRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	AActor_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorLocalTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	struct AActor_K2_AddActorLocalTransform_Params {
		struct FTransform NewTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	AActor_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorWorldOffset
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	struct AActor_K2_AddActorWorldOffset_Params {
		struct FVector DeltaLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	AActor_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorWorldRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	struct AActor_K2_AddActorWorldRotation_Params {
		struct FRotator DeltaRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	AActor_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorWorldTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	struct AActor_K2_AddActorWorldTransform_Params {
		struct FTransform DeltaTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	AActor_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AddActorWorldTransformKeepScale
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: DeltaTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AddActorWorldTransformKeepScale(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransformKeepScale");

	struct AActor_K2_AddActorWorldTransformKeepScale_Params {
		struct FTransform DeltaTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	AActor_K2_AddActorWorldTransformKeepScale_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AttachRootComponentTo
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttachLocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWeldSimulatedBodies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AttachRootComponentTo(class USceneComponent* InParent, struct FName InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	struct AActor_K2_AttachRootComponentTo_Params {
		class USceneComponent* InParent;			//Offset: 0 | ElementSize: 8
		struct FName InSocketName;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<EAttachLocation> AttachLocationType;			//Offset: 16 | ElementSize: 1
		bool bWeldSimulatedBodies;			//Offset: 17 | ElementSize: 1
	};
	AActor_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AttachRootComponentToActor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParentActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AttachLocationType	Type: TEnumAsByte<EAttachLocation>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWeldSimulatedBodies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AttachRootComponentToActor(class AActor* InParentActor, struct FName InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	struct AActor_K2_AttachRootComponentToActor_Params {
		class AActor* InParentActor;			//Offset: 0 | ElementSize: 8
		struct FName InSocketName;			//Offset: 8 | ElementSize: 8
		TEnumAsByte<EAttachLocation> AttachLocationType;			//Offset: 16 | ElementSize: 1
		bool bWeldSimulatedBodies;			//Offset: 17 | ElementSize: 1
	};
	AActor_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AttachToActor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ParentActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaleRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWeldSimulatedBodies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AttachToActor(class AActor* ParentActor, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	struct AActor_K2_AttachToActor_Params {
		class AActor* ParentActor;			//Offset: 0 | ElementSize: 8
		struct FName SocketName;			//Offset: 8 | ElementSize: 8
		EAttachmentRule LocationRule;			//Offset: 16 | ElementSize: 1
		EAttachmentRule RotationRule;			//Offset: 17 | ElementSize: 1
		EAttachmentRule ScaleRule;			//Offset: 18 | ElementSize: 1
		bool bWeldSimulatedBodies;			//Offset: 19 | ElementSize: 1
	};
	AActor_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_AttachToComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Parent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaleRule	Type: EAttachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWeldSimulatedBodies	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_AttachToComponent(class USceneComponent* Parent, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	struct AActor_K2_AttachToComponent_Params {
		class USceneComponent* Parent;			//Offset: 0 | ElementSize: 8
		struct FName SocketName;			//Offset: 8 | ElementSize: 8
		EAttachmentRule LocationRule;			//Offset: 16 | ElementSize: 1
		EAttachmentRule RotationRule;			//Offset: 17 | ElementSize: 1
		EAttachmentRule ScaleRule;			//Offset: 18 | ElementSize: 1
		bool bWeldSimulatedBodies;			//Offset: 19 | ElementSize: 1
	};
	AActor_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_DestroyActor
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AActor::K2_DestroyActor() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	struct AActor_K2_DestroyActor_Params {
	};
	AActor_K2_DestroyActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_DestroyComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Component	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_DestroyComponent(class UActorComponent* Component) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	struct AActor_K2_DestroyComponent_Params {
		class UActorComponent* Component;			//Offset: 0 | ElementSize: 8
	};
	AActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_DetachFromActor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: LocationRule	Type: EDetachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationRule	Type: EDetachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaleRule	Type: EDetachmentRule	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	struct AActor_K2_DetachFromActor_Params {
		EDetachmentRule LocationRule;			//Offset: 0 | ElementSize: 1
		EDetachmentRule RotationRule;			//Offset: 1 | ElementSize: 1
		EDetachmentRule ScaleRule;			//Offset: 2 | ElementSize: 1
	};
	AActor_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_GetActorLocation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AActor::K2_GetActorLocation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	struct AActor_K2_GetActorLocation_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_K2_GetActorLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_GetActorRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator AActor::K2_GetActorRotation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	struct AActor_K2_GetActorRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AActor_K2_GetActorRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_GetComponentsByClass
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ComponentClass	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<class UActorComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UActorComponent*> AActor::K2_GetComponentsByClass(class UActorComponent* ComponentClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetComponentsByClass");

	struct AActor_K2_GetComponentsByClass_Params {
		class UActorComponent* ComponentClass;			//Offset: 0 | ElementSize: 8
		TArray<class UActorComponent*> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	AActor_K2_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_GetRootComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class USceneComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USceneComponent* AActor::K2_GetRootComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	struct AActor_K2_GetRootComponent_Params {
		class USceneComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AActor_K2_GetRootComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_OnBecomeViewTarget
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_OnBecomeViewTarget(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	struct AActor_K2_OnBecomeViewTarget_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
	};
	AActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_OnEndViewTarget
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: PC	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_OnEndViewTarget(class APlayerController* PC) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	struct AActor_K2_OnEndViewTarget_Params {
		class APlayerController* PC;			//Offset: 0 | ElementSize: 8
	};
	AActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_OnReset
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AActor::K2_OnReset() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	struct AActor_K2_OnReset_Params {
	};
	AActor_K2_OnReset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorLocation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	struct AActor_K2_SetActorLocation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
		bool ReturnValue;			//Offset: 153 | ElementSize: 1
	};
	AActor_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorLocationAndRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	struct AActor_K2_SetActorLocationAndRotation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 12 | ElementSize: 12
		bool bSweep;			//Offset: 24 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 28 | ElementSize: 136
		bool bTeleport;			//Offset: 164 | ElementSize: 1
		bool ReturnValue;			//Offset: 165 | ElementSize: 1
	};
	AActor_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorRelativeLocation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRelativeLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	struct AActor_K2_SetActorRelativeLocation_Params {
		struct FVector NewRelativeLocation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	AActor_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorRelativeRotation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRelativeRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	struct AActor_K2_SetActorRelativeRotation_Params {
		struct FRotator NewRelativeRotation;			//Offset: 0 | ElementSize: 12
		bool bSweep;			//Offset: 12 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 16 | ElementSize: 136
		bool bTeleport;			//Offset: 152 | ElementSize: 1
	};
	AActor_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorRelativeTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRelativeTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	struct AActor_K2_SetActorRelativeTransform_Params {
		struct FTransform NewRelativeTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
	};
	AActor_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorRotation
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bTeleportPhysics	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::K2_SetActorRotation(struct FRotator NewRotation, bool bTeleportPhysics) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	struct AActor_K2_SetActorRotation_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
		bool bTeleportPhysics;			//Offset: 12 | ElementSize: 1
		bool ReturnValue;			//Offset: 13 | ElementSize: 1
	};
	AActor_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_SetActorTransform
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewTransform	Type: struct FTransform	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bSweep	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SweepHitResult	Type: struct FHitResult	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: bTeleport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	struct AActor_K2_SetActorTransform_Params {
		struct FTransform NewTransform;			//Offset: 0 | ElementSize: 48
		bool bSweep;			//Offset: 48 | ElementSize: 1
		struct FHitResult SweepHitResult;			//Offset: 52 | ElementSize: 136
		bool bTeleport;			//Offset: 188 | ElementSize: 1
		bool ReturnValue;			//Offset: 189 | ElementSize: 1
	};
	AActor_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.K2_TeleportTo
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DestLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DestRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	struct AActor_K2_TeleportTo_Params {
		struct FVector DestLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator DestRotation;			//Offset: 12 | ElementSize: 12
		bool ReturnValue;			//Offset: 24 | ElementSize: 1
	};
	AActor_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.MakeMIDForMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Parent	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* AActor::MakeMIDForMaterial(class UMaterialInterface* Parent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	struct AActor_MakeMIDForMaterial_Params {
		class UMaterialInterface* Parent;			//Offset: 0 | ElementSize: 8
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	AActor_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Actor.MakeNoise
// Flags: Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Loudness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NoiseInstigator	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NoiseLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MaxRange	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	struct AActor_MakeNoise_Params {
		float Loudness;			//Offset: 0 | ElementSize: 4
		class APawn* NoiseInstigator;			//Offset: 8 | ElementSize: 8
		struct FVector NoiseLocation;			//Offset: 16 | ElementSize: 12
		float MaxRange;			//Offset: 28 | ElementSize: 4
		struct FName Tag;			//Offset: 32 | ElementSize: 8
	};
	AActor_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.OnRep_AttachmentReplication
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void AActor::OnRep_AttachmentReplication() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	struct AActor_OnRep_AttachmentReplication_Params {
	};
	AActor_OnRep_AttachmentReplication_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.OnRep_Instigator
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void AActor::OnRep_Instigator() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	struct AActor_OnRep_Instigator_Params {
	};
	AActor_OnRep_Instigator_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.OnRep_Owner
// Flags: Native, Protected
// Params:
/////////////////////////////////////////////
void AActor::OnRep_Owner() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	struct AActor_OnRep_Owner_Params {
	};
	AActor_OnRep_Owner_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.OnRep_ReplicatedMovement
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void AActor::OnRep_ReplicatedMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	struct AActor_OnRep_ReplicatedMovement_Params {
	};
	AActor_OnRep_ReplicatedMovement_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.OnRep_ReplicateMovement
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void AActor::OnRep_ReplicateMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	struct AActor_OnRep_ReplicateMovement_Params {
	};
	AActor_OnRep_ReplicateMovement_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.PrestreamTextures
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Seconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bEnableStreaming	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CinematicTextureGroups	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PrestreamTextures");

	struct AActor_PrestreamTextures_Params {
		float Seconds;			//Offset: 0 | ElementSize: 4
		bool bEnableStreaming;			//Offset: 4 | ElementSize: 1
		int32_t CinematicTextureGroups;			//Offset: 8 | ElementSize: 4
	};
	AActor_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorBeginCursorOver
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AActor::ReceiveActorBeginCursorOver() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	struct AActor_ReceiveActorBeginCursorOver_Params {
	};
	AActor_ReceiveActorBeginCursorOver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorBeginOverlap
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: OtherActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorBeginOverlap(class AActor* OtherActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	struct AActor_ReceiveActorBeginOverlap_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
	};
	AActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorEndCursorOver
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AActor::ReceiveActorEndCursorOver() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	struct AActor_ReceiveActorEndCursorOver_Params {
	};
	AActor_ReceiveActorEndCursorOver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorEndOverlap
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: OtherActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorEndOverlap(class AActor* OtherActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	struct AActor_ReceiveActorEndOverlap_Params {
		class AActor* OtherActor;			//Offset: 0 | ElementSize: 8
	};
	AActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorOnClicked
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: ButtonPressed	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorOnClicked(struct FKey ButtonPressed) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	struct AActor_ReceiveActorOnClicked_Params {
		struct FKey ButtonPressed;			//Offset: 0 | ElementSize: 24
	};
	AActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	struct AActor_ReceiveActorOnInputTouchBegin_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
	};
	AActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	struct AActor_ReceiveActorOnInputTouchEnd_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
	};
	AActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	struct AActor_ReceiveActorOnInputTouchEnter_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
	};
	AActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: FingerIndex	Type: TEnumAsByte<ETouchIndex>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	struct AActor_ReceiveActorOnInputTouchLeave_Params {
		TEnumAsByte<ETouchIndex> FingerIndex;			//Offset: 0 | ElementSize: 1
	};
	AActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveActorOnReleased
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: ButtonReleased	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveActorOnReleased(struct FKey ButtonReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	struct AActor_ReceiveActorOnReleased_Params {
		struct FKey ButtonReleased;			//Offset: 0 | ElementSize: 24
	};
	AActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveAnyDamage
// Flags: BlueprintAuthorityOnly, Event, Public, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InstigatedBy	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	struct AActor_ReceiveAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	AActor_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AActor::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	struct AActor_ReceiveBeginPlay_Params {
	};
	AActor_ReceiveBeginPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveDestroyed
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AActor::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	struct AActor_ReceiveDestroyed_Params {
	};
	AActor_ReceiveDestroyed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	struct AActor_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	AActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveHit
// Flags: Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: MyComp	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Other	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OtherComp	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bSelfMoved	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitNormal	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NormalImpulse	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	struct AActor_ReceiveHit_Params {
		class UPrimitiveComponent* MyComp;			//Offset: 0 | ElementSize: 8
		class AActor* Other;			//Offset: 8 | ElementSize: 8
		class UPrimitiveComponent* OtherComp;			//Offset: 16 | ElementSize: 8
		bool bSelfMoved;			//Offset: 24 | ElementSize: 1
		struct FVector HitLocation;			//Offset: 28 | ElementSize: 12
		struct FVector HitNormal;			//Offset: 40 | ElementSize: 12
		struct FVector NormalImpulse;			//Offset: 52 | ElementSize: 12
		struct FHitResult Hit;			//Offset: 64 | ElementSize: 136
	};
	AActor_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceivePointDamage
// Flags: BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitNormal	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitComponent	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ShotFromDirection	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InstigatedBy	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitInfo	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	struct AActor_ReceivePointDamage_Params {
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
	AActor_ReceivePointDamage_Params params;
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

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveRadialDamage
// Flags: BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: DamageReceived	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Origin	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HitInfo	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: InstigatedBy	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, struct FVector Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	struct AActor_ReceiveRadialDamage_Params {
		float DamageReceived;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		struct FVector Origin;			//Offset: 16 | ElementSize: 12
		struct FHitResult HitInfo;			//Offset: 28 | ElementSize: 136
		class AController* InstigatedBy;			//Offset: 168 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 176 | ElementSize: 8
	};
	AActor_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	struct AActor_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	AActor_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.RemoveTickPrerequisiteActor
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	struct AActor_RemoveTickPrerequisiteActor_Params {
		class AActor* PrerequisiteActor;			//Offset: 0 | ElementSize: 8
	};
	AActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.RemoveTickPrerequisiteComponent
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: PrerequisiteComponent	Type: class UActorComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	struct AActor_RemoveTickPrerequisiteComponent_Params {
		class UActorComponent* PrerequisiteComponent;			//Offset: 0 | ElementSize: 8
	};
	AActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetActorEnableCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bNewActorEnableCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetActorEnableCollision(bool bNewActorEnableCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	struct AActor_SetActorEnableCollision_Params {
		bool bNewActorEnableCollision;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetActorHiddenInGame
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewHidden	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetActorHiddenInGame(bool bNewHidden) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	struct AActor_SetActorHiddenInGame_Params {
		bool bNewHidden;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetActorRelativeScale3D
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewRelativeScale	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetActorRelativeScale3D(struct FVector NewRelativeScale) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	struct AActor_SetActorRelativeScale3D_Params {
		struct FVector NewRelativeScale;			//Offset: 0 | ElementSize: 12
	};
	AActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetActorScale3D
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: NewScale3D	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetActorScale3D(struct FVector NewScale3D) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	struct AActor_SetActorScale3D_Params {
		struct FVector NewScale3D;			//Offset: 0 | ElementSize: 12
	};
	AActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetActorTickEnabled
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetActorTickEnabled(bool bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	struct AActor_SetActorTickEnabled_Params {
		bool bEnabled;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetActorTickInterval
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TickInterval	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetActorTickInterval(float TickInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	struct AActor_SetActorTickInterval_Params {
		float TickInterval;			//Offset: 0 | ElementSize: 4
	};
	AActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetAutoDestroyWhenFinished
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bVal	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetAutoDestroyWhenFinished(bool bVal) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetAutoDestroyWhenFinished");

	struct AActor_SetAutoDestroyWhenFinished_Params {
		bool bVal;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetAutoDestroyWhenFinished_Params params;
	params.bVal = bVal;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetLifeSpan
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: InLifespan	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetLifeSpan(float InLifespan) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	struct AActor_SetLifeSpan_Params {
		float InLifespan;			//Offset: 0 | ElementSize: 4
	};
	AActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetNetDormancy
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: NewDormancy	Type: TEnumAsByte<ENetDormancy>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetNetDormancy");

	struct AActor_SetNetDormancy_Params {
		TEnumAsByte<ENetDormancy> NewDormancy;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetOwner
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: NewOwner	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetOwner(class AActor* NewOwner) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	struct AActor_SetOwner_Params {
		class AActor* NewOwner;			//Offset: 0 | ElementSize: 8
	};
	AActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetReplicateMovement
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bInReplicateMovement	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetReplicateMovement(bool bInReplicateMovement) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	struct AActor_SetReplicateMovement_Params {
		bool bInReplicateMovement;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetReplicates
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: bInReplicates	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetReplicates(bool bInReplicates) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	struct AActor_SetReplicates_Params {
		bool bInReplicates;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetTickableWhenPaused
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bTickableWhenPaused	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetTickableWhenPaused(bool bTickableWhenPaused) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	struct AActor_SetTickableWhenPaused_Params {
		bool bTickableWhenPaused;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SetTickGroup
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewTickGroup	Type: TEnumAsByte<ETickingGroup>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	struct AActor_SetTickGroup_Params {
		TEnumAsByte<ETickingGroup> NewTickGroup;			//Offset: 0 | ElementSize: 1
	};
	AActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.SnapRootComponentTo
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InParentActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSocketName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AActor::SnapRootComponentTo(class AActor* InParentActor, struct FName InSocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	struct AActor_SnapRootComponentTo_Params {
		class AActor* InParentActor;			//Offset: 0 | ElementSize: 8
		struct FName InSocketName;			//Offset: 8 | ElementSize: 8
	};
	AActor_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.TearOff
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AActor::TearOff() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	struct AActor_TearOff_Params {
	};
	AActor_TearOff_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.UserConstructionScript
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AActor::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	struct AActor_UserConstructionScript_Params {
	};
	AActor_UserConstructionScript_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Actor.WasRecentlyRendered
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Tolerance	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AActor::WasRecentlyRendered(float Tolerance)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	struct AActor_WasRecentlyRendered_Params {
		float Tolerance;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	AActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

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