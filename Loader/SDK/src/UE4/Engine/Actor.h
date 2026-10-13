#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.Actor
// Super: Class CoreUObject.Object
// Size: 544
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class AActor : public UObject {
public:
#pragma region Members
	//struct FActorTickFunction	PrimaryActorTick;		//Offset: 40	Size: 48	Flags: Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	struct FActorTickFunction M_GetPrimaryActorTick() const;
	struct FActorTickFunction* M_PtrGetPrimaryActorTick();
	void M_SetPrimaryActorTick(const struct FActorTickFunction& value);

	//unsigned char	bNetTemporary : 1;		//Offset: 88	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNetTemporary() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNetTemporary();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNetTemporary(const unsigned char& value);

	//unsigned char	bNetStartup : 1;		//Offset: 88	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNetStartup() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNetStartup();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNetStartup(const unsigned char& value);

	//unsigned char	bOnlyRelevantToOwner : 1;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOnlyRelevantToOwner() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOnlyRelevantToOwner();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOnlyRelevantToOwner(const unsigned char& value);

	//unsigned char	bAlwaysRelevant : 1;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAlwaysRelevant() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAlwaysRelevant();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAlwaysRelevant(const unsigned char& value);

	//unsigned char	bReplicateMovement : 1;		//Offset: 88	Size: 1	Flags: Edit, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReplicateMovement() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReplicateMovement();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReplicateMovement(const unsigned char& value);

	//unsigned char	bHidden : 1;		//Offset: 88	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, Net, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHidden() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHidden();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHidden(const unsigned char& value);

	//unsigned char	bTearOff : 1;		//Offset: 88	Size: 1	Flags: Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbTearOff() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbTearOff();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbTearOff(const unsigned char& value);

	//unsigned char	bForceNetAddressable : 1;		//Offset: 88	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceNetAddressable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceNetAddressable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceNetAddressable(const unsigned char& value);

	//unsigned char	bExchangedRoles : 1;		//Offset: 89	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbExchangedRoles() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbExchangedRoles();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbExchangedRoles(const unsigned char& value);

	//unsigned char	bNetLoadOnClient : 1;		//Offset: 89	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNetLoadOnClient() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNetLoadOnClient();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNetLoadOnClient(const unsigned char& value);

	//unsigned char	bNetUseOwnerRelevancy : 1;		//Offset: 89	Size: 1	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNetUseOwnerRelevancy() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNetUseOwnerRelevancy();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNetUseOwnerRelevancy(const unsigned char& value);

	//unsigned char	bRelevantForNetworkReplays : 1;		//Offset: 89	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRelevantForNetworkReplays() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRelevantForNetworkReplays();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRelevantForNetworkReplays(const unsigned char& value);

	//unsigned char	bRelevantForLevelBounds : 1;		//Offset: 89	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbRelevantForLevelBounds() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbRelevantForLevelBounds();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbRelevantForLevelBounds(const unsigned char& value);

	//unsigned char	bReplayRewindable : 1;		//Offset: 89	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReplayRewindable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReplayRewindable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReplayRewindable(const unsigned char& value);

	//unsigned char	bAllowTickBeforeBeginPlay : 1;		//Offset: 89	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowTickBeforeBeginPlay() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowTickBeforeBeginPlay();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowTickBeforeBeginPlay(const unsigned char& value);

	//unsigned char	bAutoDestroyWhenFinished : 1;		//Offset: 89	Size: 1	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAutoDestroyWhenFinished() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAutoDestroyWhenFinished();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAutoDestroyWhenFinished(const unsigned char& value);

	//unsigned char	bCanBeDamaged : 1;		//Offset: 90	Size: 1	Flags: Edit, BlueprintVisible, Net, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCanBeDamaged() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCanBeDamaged();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCanBeDamaged(const unsigned char& value);

	//unsigned char	bBlockInput : 1;		//Offset: 90	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbBlockInput() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbBlockInput();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbBlockInput(const unsigned char& value);

	//unsigned char	bCollideWhenPlacing : 1;		//Offset: 90	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCollideWhenPlacing() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCollideWhenPlacing();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCollideWhenPlacing(const unsigned char& value);

	//unsigned char	bFindCameraComponentWhenViewTarget : 1;		//Offset: 90	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFindCameraComponentWhenViewTarget() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFindCameraComponentWhenViewTarget();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFindCameraComponentWhenViewTarget(const unsigned char& value);

	//unsigned char	bGenerateOverlapEventsDuringLevelStreaming : 1;		//Offset: 90	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbGenerateOverlapEventsDuringLevelStreaming() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbGenerateOverlapEventsDuringLevelStreaming();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbGenerateOverlapEventsDuringLevelStreaming(const unsigned char& value);

	//unsigned char	bIgnoresOriginShifting : 1;		//Offset: 90	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIgnoresOriginShifting() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIgnoresOriginShifting();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIgnoresOriginShifting(const unsigned char& value);

	//unsigned char	bEnableAutoLODGeneration : 1;		//Offset: 90	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableAutoLODGeneration() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableAutoLODGeneration();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableAutoLODGeneration(const unsigned char& value);

	//unsigned char	bIsEditorOnlyActor : 1;		//Offset: 90	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsEditorOnlyActor() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsEditorOnlyActor();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsEditorOnlyActor(const unsigned char& value);

	//unsigned char	bActorSeamlessTraveled : 1;		//Offset: 91	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbActorSeamlessTraveled() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbActorSeamlessTraveled();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbActorSeamlessTraveled(const unsigned char& value);

	//unsigned char	bReplicates : 1;		//Offset: 91	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReplicates() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReplicates();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReplicates(const unsigned char& value);

	//unsigned char	bCanBeInCluster : 1;		//Offset: 91	Size: 1	Flags: Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCanBeInCluster() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCanBeInCluster();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCanBeInCluster(const unsigned char& value);

	//unsigned char	bAllowReceiveTickEventOnDedicatedServer : 1;		//Offset: 91	Size: 1	Flags: NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowReceiveTickEventOnDedicatedServer() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowReceiveTickEventOnDedicatedServer();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowReceiveTickEventOnDedicatedServer(const unsigned char& value);

	//unsigned char	bActorEnableCollision : 1;		//Offset: 92	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbActorEnableCollision() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbActorEnableCollision();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbActorEnableCollision(const unsigned char& value);

	//unsigned char	bActorIsBeingDestroyed : 1;		//Offset: 92	Size: 1	Flags: Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbActorIsBeingDestroyed() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbActorIsBeingDestroyed();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbActorIsBeingDestroyed(const unsigned char& value);

	//EActorUpdateOverlapsMethod	UpdateOverlapsMethodDuringLevelStreaming;		//Offset: 93	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EActorUpdateOverlapsMethod M_GetUpdateOverlapsMethodDuringLevelStreaming() const;
	EActorUpdateOverlapsMethod* M_PtrGetUpdateOverlapsMethodDuringLevelStreaming();
	void M_SetUpdateOverlapsMethodDuringLevelStreaming(const EActorUpdateOverlapsMethod& value);

	//EActorUpdateOverlapsMethod	DefaultUpdateOverlapsMethodDuringLevelStreaming;		//Offset: 94	Size: 1	Flags: Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EActorUpdateOverlapsMethod M_GetDefaultUpdateOverlapsMethodDuringLevelStreaming() const;
	EActorUpdateOverlapsMethod* M_PtrGetDefaultUpdateOverlapsMethodDuringLevelStreaming();
	void M_SetDefaultUpdateOverlapsMethodDuringLevelStreaming(const EActorUpdateOverlapsMethod& value);

	//TEnumAsByte<ENetRole>	RemoteRole;		//Offset: 95	Size: 1	Flags: Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TEnumAsByte<ENetRole> M_GetRemoteRole() const;
	TEnumAsByte<ENetRole>* M_PtrGetRemoteRole();
	void M_SetRemoteRole(const TEnumAsByte<ENetRole>& value);

	//struct FRepMovement	ReplicatedMovement;		//Offset: 96	Size: 52	Flags: Edit, Net, DisableEditOnInstance, RepNotify, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPrivate
	struct FRepMovement M_GetReplicatedMovement() const;
	struct FRepMovement* M_PtrGetReplicatedMovement();
	void M_SetReplicatedMovement(const struct FRepMovement& value);

	//float	InitialLifeSpan;		//Offset: 148	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetInitialLifeSpan() const;
	float* M_PtrGetInitialLifeSpan();
	void M_SetInitialLifeSpan(const float& value);

	//float	CustomTimeDilation;		//Offset: 152	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCustomTimeDilation() const;
	float* M_PtrGetCustomTimeDilation();
	void M_SetCustomTimeDilation(const float& value);

	//struct FRepAttachment	AttachmentReplication;		//Offset: 160	Size: 64	Flags: Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	struct FRepAttachment M_GetAttachmentReplication() const;
	struct FRepAttachment* M_PtrGetAttachmentReplication();
	void M_SetAttachmentReplication(const struct FRepAttachment& value);

	//class AActor*	Owner;		//Offset: 224	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class AActor* M_GetOwner() const;
	class AActor** M_PtrGetOwner();
	void M_SetOwner(const class AActor*& value);

	//struct FName	NetDriverName;		//Offset: 232	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetNetDriverName() const;
	struct FName* M_PtrGetNetDriverName();
	void M_SetNetDriverName(const struct FName& value);

	//TEnumAsByte<ENetRole>	Role;		//Offset: 240	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TEnumAsByte<ENetRole> M_GetRole() const;
	TEnumAsByte<ENetRole>* M_PtrGetRole();
	void M_SetRole(const TEnumAsByte<ENetRole>& value);

	//TEnumAsByte<ENetDormancy>	NetDormancy;		//Offset: 241	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ENetDormancy> M_GetNetDormancy() const;
	TEnumAsByte<ENetDormancy>* M_PtrGetNetDormancy();
	void M_SetNetDormancy(const TEnumAsByte<ENetDormancy>& value);

	//ESpawnActorCollisionHandlingMethod	SpawnCollisionHandlingMethod;		//Offset: 242	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESpawnActorCollisionHandlingMethod M_GetSpawnCollisionHandlingMethod() const;
	ESpawnActorCollisionHandlingMethod* M_PtrGetSpawnCollisionHandlingMethod();
	void M_SetSpawnCollisionHandlingMethod(const ESpawnActorCollisionHandlingMethod& value);

	//TEnumAsByte<EAutoReceiveInput>	AutoReceiveInput;		//Offset: 243	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EAutoReceiveInput> M_GetAutoReceiveInput() const;
	TEnumAsByte<EAutoReceiveInput>* M_PtrGetAutoReceiveInput();
	void M_SetAutoReceiveInput(const TEnumAsByte<EAutoReceiveInput>& value);

	//int32_t	InputPriority;		//Offset: 244	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetInputPriority() const;
	int32_t* M_PtrGetInputPriority();
	void M_SetInputPriority(const int32_t& value);

	//class UInputComponent*	InputComponent;		//Offset: 248	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UInputComponent* M_GetInputComponent() const;
	class UInputComponent** M_PtrGetInputComponent();
	void M_SetInputComponent(const class UInputComponent*& value);

	//float	NetCullDistanceSquared;		//Offset: 256	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetNetCullDistanceSquared() const;
	float* M_PtrGetNetCullDistanceSquared();
	void M_SetNetCullDistanceSquared(const float& value);

	//int32_t	NetTag;		//Offset: 260	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNetTag() const;
	int32_t* M_PtrGetNetTag();
	void M_SetNetTag(const int32_t& value);

	//float	NetUpdateFrequency;		//Offset: 264	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetNetUpdateFrequency() const;
	float* M_PtrGetNetUpdateFrequency();
	void M_SetNetUpdateFrequency(const float& value);

	//float	MinNetUpdateFrequency;		//Offset: 268	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinNetUpdateFrequency() const;
	float* M_PtrGetMinNetUpdateFrequency();
	void M_SetMinNetUpdateFrequency(const float& value);

	//float	NetPriority;		//Offset: 272	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetNetPriority() const;
	float* M_PtrGetNetPriority();
	void M_SetNetPriority(const float& value);

	//class APawn*	Instigator;		//Offset: 280	Size: 8	Flags: BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class APawn* M_GetInstigator() const;
	class APawn** M_PtrGetInstigator();
	void M_SetInstigator(const class APawn*& value);

	//TArray<class AActor*>	Children;		//Offset: 288	Size: 16	Flags: ZeroConstructor, Transient, NativeAccessSpecifierPublic
	TArray<class AActor*> M_GetChildren() const;
	TArray<class AActor*>* M_PtrGetChildren();
	void M_SetChildren(const TArray<class AActor*>& value);

	//class USceneComponent*	RootComponent;		//Offset: 304	Size: 8	Flags: BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class USceneComponent* M_GetRootComponent() const;
	class USceneComponent** M_PtrGetRootComponent();
	void M_SetRootComponent(const class USceneComponent*& value);

	//TArray<class AMatineeActor*>	ControllingMatineeActors;		//Offset: 312	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class AMatineeActor*> M_GetControllingMatineeActors() const;
	TArray<class AMatineeActor*>* M_PtrGetControllingMatineeActors();
	void M_SetControllingMatineeActors(const TArray<class AMatineeActor*>& value);

	//TArray<struct FName>	Layers;		//Offset: 336	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FName> M_GetLayers() const;
	TArray<struct FName>* M_PtrGetLayers();
	void M_SetLayers(const TArray<struct FName>& value);

	//TWeakObjectPtr<class UChildActorComponent>	ParentComponent;		//Offset: 352	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TWeakObjectPtr<class UChildActorComponent> M_GetParentComponent() const;
	TWeakObjectPtr<class UChildActorComponent>* M_PtrGetParentComponent();
	void M_SetParentComponent(const TWeakObjectPtr<class UChildActorComponent>& value);

	//TArray<struct FName>	Tags;		//Offset: 368	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<struct FName> M_GetTags() const;
	TArray<struct FName>* M_PtrGetTags();
	void M_SetTags(const TArray<struct FName>& value);

	//TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>	OnTakeAnyDamage;		//Offset: 384	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature> M_GetOnTakeAnyDamage() const;
	TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>* M_PtrGetOnTakeAnyDamage();
	void M_SetOnTakeAnyDamage(const TAssetPtr<class FTakeAnyDamageSignature__DelegateSignature>& value);

	//TAssetPtr<class FTakePointDamageSignature__DelegateSignature>	OnTakePointDamage;		//Offset: 385	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FTakePointDamageSignature__DelegateSignature> M_GetOnTakePointDamage() const;
	TAssetPtr<class FTakePointDamageSignature__DelegateSignature>* M_PtrGetOnTakePointDamage();
	void M_SetOnTakePointDamage(const TAssetPtr<class FTakePointDamageSignature__DelegateSignature>& value);

	//TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>	OnTakeRadialDamage;		//Offset: 386	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature> M_GetOnTakeRadialDamage() const;
	TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>* M_PtrGetOnTakeRadialDamage();
	void M_SetOnTakeRadialDamage(const TAssetPtr<class FTakeRadialDamageSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>	OnActorBeginOverlap;		//Offset: 387	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature> M_GetOnActorBeginOverlap() const;
	TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>* M_PtrGetOnActorBeginOverlap();
	void M_SetOnActorBeginOverlap(const TAssetPtr<class FActorBeginOverlapSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>	OnActorEndOverlap;		//Offset: 388	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorEndOverlapSignature__DelegateSignature> M_GetOnActorEndOverlap() const;
	TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>* M_PtrGetOnActorEndOverlap();
	void M_SetOnActorEndOverlap(const TAssetPtr<class FActorEndOverlapSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>	OnBeginCursorOver;		//Offset: 389	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature> M_GetOnBeginCursorOver() const;
	TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>* M_PtrGetOnBeginCursorOver();
	void M_SetOnBeginCursorOver(const TAssetPtr<class FActorBeginCursorOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>	OnEndCursorOver;		//Offset: 390	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature> M_GetOnEndCursorOver() const;
	TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>* M_PtrGetOnEndCursorOver();
	void M_SetOnEndCursorOver(const TAssetPtr<class FActorEndCursorOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorOnClickedSignature__DelegateSignature>	OnClicked;		//Offset: 391	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorOnClickedSignature__DelegateSignature> M_GetOnClicked() const;
	TAssetPtr<class FActorOnClickedSignature__DelegateSignature>* M_PtrGetOnClicked();
	void M_SetOnClicked(const TAssetPtr<class FActorOnClickedSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>	OnReleased;		//Offset: 392	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorOnReleasedSignature__DelegateSignature> M_GetOnReleased() const;
	TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>* M_PtrGetOnReleased();
	void M_SetOnReleased(const TAssetPtr<class FActorOnReleasedSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>	OnInputTouchBegin;		//Offset: 393	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature> M_GetOnInputTouchBegin() const;
	TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>* M_PtrGetOnInputTouchBegin();
	void M_SetOnInputTouchBegin(const TAssetPtr<class FActorOnInputTouchBeginSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>	OnInputTouchEnd;		//Offset: 394	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature> M_GetOnInputTouchEnd() const;
	TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>* M_PtrGetOnInputTouchEnd();
	void M_SetOnInputTouchEnd(const TAssetPtr<class FActorOnInputTouchEndSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>	OnInputTouchEnter;		//Offset: 395	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature> M_GetOnInputTouchEnter() const;
	TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>* M_PtrGetOnInputTouchEnter();
	void M_SetOnInputTouchEnter(const TAssetPtr<class FActorBeginTouchOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>	OnInputTouchLeave;		//Offset: 396	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature> M_GetOnInputTouchLeave() const;
	TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>* M_PtrGetOnInputTouchLeave();
	void M_SetOnInputTouchLeave(const TAssetPtr<class FActorEndTouchOverSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorHitSignature__DelegateSignature>	OnActorHit;		//Offset: 397	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorHitSignature__DelegateSignature> M_GetOnActorHit() const;
	TAssetPtr<class FActorHitSignature__DelegateSignature>* M_PtrGetOnActorHit();
	void M_SetOnActorHit(const TAssetPtr<class FActorHitSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorDestroyedSignature__DelegateSignature>	OnDestroyed;		//Offset: 398	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorDestroyedSignature__DelegateSignature> M_GetOnDestroyed() const;
	TAssetPtr<class FActorDestroyedSignature__DelegateSignature>* M_PtrGetOnDestroyed();
	void M_SetOnDestroyed(const TAssetPtr<class FActorDestroyedSignature__DelegateSignature>& value);

	//TAssetPtr<class FActorEndPlaySignature__DelegateSignature>	OnEndPlay;		//Offset: 399	Size: 1	Flags: InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
	TAssetPtr<class FActorEndPlaySignature__DelegateSignature> M_GetOnEndPlay() const;
	TAssetPtr<class FActorEndPlaySignature__DelegateSignature>* M_PtrGetOnEndPlay();
	void M_SetOnEndPlay(const TAssetPtr<class FActorEndPlaySignature__DelegateSignature>& value);

	//TArray<class UActorComponent*>	InstanceComponents;		//Offset: 496	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UActorComponent*> M_GetInstanceComponents() const;
	TArray<class UActorComponent*>* M_PtrGetInstanceComponents();
	void M_SetInstanceComponents(const TArray<class UActorComponent*>& value);

	//TArray<class UActorComponent*>	BlueprintCreatedComponents;		//Offset: 512	Size: 16	Flags: ExportObject, ZeroConstructor, NonTransactional, ContainsInstancedReference, TextExportTransient, NativeAccessSpecifierPublic
	TArray<class UActorComponent*> M_GetBlueprintCreatedComponents() const;
	TArray<class UActorComponent*>* M_PtrGetBlueprintCreatedComponents();
	void M_SetBlueprintCreatedComponents(const TArray<class UActorComponent*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}

#pragma region Functions
	bool ActorHasTag(struct FName Tag)/* const*/;

	class UActorComponent* AddComponent(struct FName TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext, bool bDeferredFinish);

	class UActorComponent* AddComponentByClass(class UActorComponent* Class, bool bManualAttachment, const struct FTransform& RelativeTransform, bool bDeferredFinish);

	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);

	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);

	void DetachRootComponentFromParent(bool bMaintainWorldPosition);

	void DisableInput(class APlayerController* PlayerController);

	void EnableInput(class APlayerController* PlayerController);

	void FinishAddComponent(class UActorComponent* Component, bool bManualAttachment, const struct FTransform& RelativeTransform);

	void FlushNetDormancy();

	void ForceNetUpdate();

	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent, bool bIncludeFromChildActors)/* const*/;

	bool GetActorEnableCollision()/* const*/;

	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)/* const*/;

	struct FVector GetActorForwardVector()/* const*/;

	struct FVector GetActorRelativeScale3D()/* const*/;

	struct FVector GetActorRightVector()/* const*/;

	struct FVector GetActorScale3D()/* const*/;

	float GetActorTickInterval()/* const*/;

	float GetActorTimeDilation()/* const*/;

	struct FVector GetActorUpVector()/* const*/;

	void GetAllChildActors(TArray<class AActor*>* ChildActors, bool bIncludeDescendants)/* const*/;

	void GetAttachedActors(TArray<class AActor*>* OutActors, bool bResetArray)/* const*/;

	class AActor* GetAttachParentActor()/* const*/;

	struct FName GetAttachParentSocketName()/* const*/;

	class UActorComponent* GetComponentByClass(class UActorComponent* ComponentClass)/* const*/;

	TArray<class UActorComponent*> GetComponentsByInterface(class UInterface* Interface)/* const*/;

	TArray<class UActorComponent*> GetComponentsByTag(class UActorComponent* ComponentClass, struct FName Tag)/* const*/;

	float GetDistanceTo(class AActor* OtherActor)/* const*/;

	float GetDotProductTo(class AActor* OtherActor)/* const*/;

	float GetGameTimeSinceCreation()/* const*/;

	float GetHorizontalDistanceTo(class AActor* OtherActor)/* const*/;

	float GetHorizontalDotProductTo(class AActor* OtherActor)/* const*/;

	float GetInputAxisKeyValue(struct FKey InputAxisKey)/* const*/;

	float GetInputAxisValue(struct FName InputAxisName)/* const*/;

	struct FVector GetInputVectorAxisValue(struct FKey InputAxisKey)/* const*/;

	class APawn* GetInstigator()/* const*/;

	class AController* GetInstigatorController()/* const*/;

	float GetLifeSpan()/* const*/;

	TEnumAsByte<ENetRole> GetLocalRole()/* const*/;

	void GetOverlappingActors(TArray<class AActor*>* OverlappingActors, class AActor* ClassFilter)/* const*/;

	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)/* const*/;

	class AActor* GetOwner()/* const*/;

	class AActor* GetParentActor()/* const*/;

	class UChildActorComponent* GetParentComponent()/* const*/;

	TEnumAsByte<ENetRole> GetRemoteRole()/* const*/;

	float GetSquaredDistanceTo(class AActor* OtherActor)/* const*/;

	float GetSquaredHorizontalDistanceTo(class AActor* OtherActor)/* const*/;

	bool GetTickableWhenPaused();

	struct FTransform GetTransform()/* const*/;

	struct FVector GetVelocity()/* const*/;

	float GetVerticalDistanceTo(class AActor* OtherActor)/* const*/;

	bool HasAuthority()/* const*/;

	bool IsActorBeingDestroyed()/* const*/;

	bool IsActorTickEnabled()/* const*/;

	bool IsChildActor()/* const*/;

	bool IsOverlappingActor(class AActor* Other)/* const*/;

	void K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AddActorWorldTransformKeepScale(const struct FTransform& DeltaTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_AttachRootComponentTo(class USceneComponent* InParent, struct FName InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);

	void K2_AttachRootComponentToActor(class AActor* InParentActor, struct FName InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);

	void K2_AttachToActor(class AActor* ParentActor, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);

	void K2_AttachToComponent(class USceneComponent* Parent, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);

	void K2_DestroyActor();

	void K2_DestroyComponent(class UActorComponent* Component);

	void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);

	struct FVector K2_GetActorLocation()/* const*/;

	struct FRotator K2_GetActorRotation()/* const*/;

	TArray<class UActorComponent*> K2_GetComponentsByClass(class UActorComponent* ComponentClass)/* const*/;

	class USceneComponent* K2_GetRootComponent()/* const*/;

	void K2_OnBecomeViewTarget(class APlayerController* PC);

	void K2_OnEndViewTarget(class APlayerController* PC);

	void K2_OnReset();

	bool K2_SetActorLocation(struct FVector NewLocation, bool bSweep = false, struct FHitResult* SweepHitResult = nullptr, bool bTeleport = true);

	bool K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);

	bool K2_SetActorRotation(struct FRotator NewRotation, bool bTeleportPhysics);

	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep = false, struct FHitResult* SweepHitResult = nullptr, bool bTeleport = true);

	bool K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation);

	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);

	void MakeNoise(float Loudness, class APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag);

	void OnRep_AttachmentReplication();

	void OnRep_Instigator();

	void OnRep_Owner();

	void OnRep_ReplicatedMovement();

	void OnRep_ReplicateMovement();

	void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups);

	void ReceiveActorBeginCursorOver();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);

	void ReceiveActorEndCursorOver();

	void ReceiveActorEndOverlap(class AActor* OtherActor);

	void ReceiveActorOnClicked(struct FKey ButtonPressed);

	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);

	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);

	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);

	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);

	void ReceiveActorOnReleased(struct FKey ButtonReleased);

	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void ReceiveBeginPlay();

	void ReceiveDestroyed();

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void ReceivePointDamage(float Damage, class UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, class UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);

	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, struct FVector Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);

	void ReceiveTick(float DeltaSeconds);

	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);

	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);

	void SetActorEnableCollision(bool bNewActorEnableCollision);

	void SetActorHiddenInGame(bool bNewHidden);

	void SetActorRelativeScale3D(struct FVector NewRelativeScale);

	void SetActorScale3D(struct FVector NewScale3D);

	void SetActorTickEnabled(bool bEnabled);

	void SetActorTickInterval(float TickInterval);

	void SetAutoDestroyWhenFinished(bool bVal);

	void SetLifeSpan(float InLifespan);

	void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);

	void SetOwner(class AActor* NewOwner);

	void SetReplicateMovement(bool bInReplicateMovement);

	void SetReplicates(bool bInReplicates);

	void SetTickableWhenPaused(bool bTickableWhenPaused);

	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);

	void SnapRootComponentTo(class AActor* InParentActor, struct FName InSocketName);

	void TearOff();

	void UserConstructionScript();

	bool WasRecentlyRendered(float Tolerance)/* const*/;

#pragma endregion

	FRotator GetActorRotation() { return K2_GetActorRotation(); }
	bool SetActorRotation(const FQuat& NewRotation, ETeleportType Teleport = ETeleportType::None) {
		return K2_SetActorRotation(NewRotation.Rotator(), Teleport == ETeleportType::TeleportPhysics);
	}
	bool SetActorRotation(const FRotator& NewRotation, ETeleportType Teleport = ETeleportType::None) {
		return K2_SetActorRotation(NewRotation, Teleport == ETeleportType::TeleportPhysics);
	}
	FVector GetActorLocation() { return K2_GetActorLocation(); }
};
};