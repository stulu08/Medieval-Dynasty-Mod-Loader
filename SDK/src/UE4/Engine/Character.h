#pragma once
#include "Structs.h"
#include "Engine/Pawn.h"
/////////////////////////////////////////////
// Class Engine.Character
// Super: Class Engine.Pawn
// Size: 1216
// Size inherited: 640
/////////////////////////////////////////////
namespace UE4 {
class ACharacter : public APawn {
public:
#pragma region Members
	//class USkeletalMeshComponent*	Mesh;		//Offset: 640	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USkeletalMeshComponent* M_GetMesh() const;
	class USkeletalMeshComponent** M_PtrGetMesh();
	void M_SetMesh(const class USkeletalMeshComponent*& value);

	//class UCharacterMovementComponent*	CharacterMovement;		//Offset: 648	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UCharacterMovementComponent* M_GetCharacterMovement() const;
	class UCharacterMovementComponent** M_PtrGetCharacterMovement();
	void M_SetCharacterMovement(const class UCharacterMovementComponent*& value);

	//class UCapsuleComponent*	CapsuleComponent;		//Offset: 656	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UCapsuleComponent* M_GetCapsuleComponent() const;
	class UCapsuleComponent** M_PtrGetCapsuleComponent();
	void M_SetCapsuleComponent(const class UCapsuleComponent*& value);

	//struct FBasedMovementInfo	BasedMovement;		//Offset: 664	Size: 48	Flags: NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	struct FBasedMovementInfo M_GetBasedMovement() const;
	struct FBasedMovementInfo* M_PtrGetBasedMovement();
	void M_SetBasedMovement(const struct FBasedMovementInfo& value);

	//struct FBasedMovementInfo	ReplicatedBasedMovement;		//Offset: 712	Size: 48	Flags: Net, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	struct FBasedMovementInfo M_GetReplicatedBasedMovement() const;
	struct FBasedMovementInfo* M_PtrGetReplicatedBasedMovement();
	void M_SetReplicatedBasedMovement(const struct FBasedMovementInfo& value);

	//float	AnimRootMotionTranslationScale;		//Offset: 760	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetAnimRootMotionTranslationScale() const;
	float* M_PtrGetAnimRootMotionTranslationScale();
	void M_SetAnimRootMotionTranslationScale(const float& value);

	//struct FVector	BaseTranslationOffset;		//Offset: 764	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetBaseTranslationOffset() const;
	struct FVector* M_PtrGetBaseTranslationOffset();
	void M_SetBaseTranslationOffset(const struct FVector& value);

	//struct FQuat	BaseRotationOffset;		//Offset: 784	Size: 16	Flags: IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FQuat M_GetBaseRotationOffset() const;
	struct FQuat* M_PtrGetBaseRotationOffset();
	void M_SetBaseRotationOffset(const struct FQuat& value);

	//float	ReplicatedServerLastTransformUpdateTimeStamp;		//Offset: 800	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetReplicatedServerLastTransformUpdateTimeStamp() const;
	float* M_PtrGetReplicatedServerLastTransformUpdateTimeStamp();
	void M_SetReplicatedServerLastTransformUpdateTimeStamp(const float& value);

	//float	ReplayLastTransformUpdateTimeStamp;		//Offset: 804	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetReplayLastTransformUpdateTimeStamp() const;
	float* M_PtrGetReplayLastTransformUpdateTimeStamp();
	void M_SetReplayLastTransformUpdateTimeStamp(const float& value);

	//unsigned char	ReplicatedMovementMode;		//Offset: 808	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char M_GetReplicatedMovementMode() const;
	unsigned char* M_PtrGetReplicatedMovementMode();
	void M_SetReplicatedMovementMode(const unsigned char& value);

	//bool	bInBaseReplication;		//Offset: 809	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbInBaseReplication() const;
	bool* M_PtrGetbInBaseReplication();
	void M_SetbInBaseReplication(const bool& value);

	//float	CrouchedEyeHeight;		//Offset: 812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCrouchedEyeHeight() const;
	float* M_PtrGetCrouchedEyeHeight();
	void M_SetCrouchedEyeHeight(const float& value);

	//unsigned char	bIsCrouched : 1;		//Offset: 816	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsCrouched() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsCrouched();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsCrouched(const unsigned char& value);

	//unsigned char	bProxyIsJumpForceApplied : 1;		//Offset: 816	Size: 1	Flags: Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbProxyIsJumpForceApplied() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbProxyIsJumpForceApplied();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbProxyIsJumpForceApplied(const unsigned char& value);

	//unsigned char	bPressedJump : 1;		//Offset: 816	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPressedJump() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPressedJump();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPressedJump(const unsigned char& value);

	//unsigned char	bClientUpdating : 1;		//Offset: 816	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClientUpdating() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClientUpdating();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClientUpdating(const unsigned char& value);

	//unsigned char	bClientWasFalling : 1;		//Offset: 816	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClientWasFalling() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClientWasFalling();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClientWasFalling(const unsigned char& value);

	//unsigned char	bClientResimulateRootMotion : 1;		//Offset: 816	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClientResimulateRootMotion() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClientResimulateRootMotion();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClientResimulateRootMotion(const unsigned char& value);

	//unsigned char	bClientResimulateRootMotionSources : 1;		//Offset: 816	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClientResimulateRootMotionSources() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClientResimulateRootMotionSources();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClientResimulateRootMotionSources(const unsigned char& value);

	//unsigned char	bSimGravityDisabled : 1;		//Offset: 816	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSimGravityDisabled() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSimGravityDisabled();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSimGravityDisabled(const unsigned char& value);

	//unsigned char	bClientCheckEncroachmentOnNetUpdate : 1;		//Offset: 817	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClientCheckEncroachmentOnNetUpdate() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClientCheckEncroachmentOnNetUpdate();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClientCheckEncroachmentOnNetUpdate(const unsigned char& value);

	//unsigned char	bServerMoveIgnoreRootMotion : 1;		//Offset: 817	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbServerMoveIgnoreRootMotion() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbServerMoveIgnoreRootMotion();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbServerMoveIgnoreRootMotion(const unsigned char& value);

	//unsigned char	bWasJumping : 1;		//Offset: 817	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbWasJumping() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbWasJumping();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbWasJumping(const unsigned char& value);

	//float	JumpKeyHoldTime;		//Offset: 820	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetJumpKeyHoldTime() const;
	float* M_PtrGetJumpKeyHoldTime();
	void M_SetJumpKeyHoldTime(const float& value);

	//float	JumpForceTimeRemaining;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetJumpForceTimeRemaining() const;
	float* M_PtrGetJumpForceTimeRemaining();
	void M_SetJumpForceTimeRemaining(const float& value);

	//float	ProxyJumpForceStartedTime;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetProxyJumpForceStartedTime() const;
	float* M_PtrGetProxyJumpForceStartedTime();
	void M_SetProxyJumpForceStartedTime(const float& value);

	//float	JumpMaxHoldTime;		//Offset: 832	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetJumpMaxHoldTime() const;
	float* M_PtrGetJumpMaxHoldTime();
	void M_SetJumpMaxHoldTime(const float& value);

	//int32_t	JumpMaxCount;		//Offset: 836	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetJumpMaxCount() const;
	int32_t* M_PtrGetJumpMaxCount();
	void M_SetJumpMaxCount(const int32_t& value);

	//int32_t	JumpCurrentCount;		//Offset: 840	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetJumpCurrentCount() const;
	int32_t* M_PtrGetJumpCurrentCount();
	void M_SetJumpCurrentCount(const int32_t& value);

	//int32_t	JumpCurrentCountPreJump;		//Offset: 844	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetJumpCurrentCountPreJump() const;
	int32_t* M_PtrGetJumpCurrentCountPreJump();
	void M_SetJumpCurrentCountPreJump(const int32_t& value);

	//TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>	OnReachedJumpApex;		//Offset: 856	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature> M_GetOnReachedJumpApex() const;
	TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>* M_PtrGetOnReachedJumpApex();
	void M_SetOnReachedJumpApex(const TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>& value);

	//TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>	MovementModeChangedDelegate;		//Offset: 888	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FMovementModeChangedSignature__DelegateSignature> M_GetMovementModeChangedDelegate() const;
	TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>* M_PtrGetMovementModeChangedDelegate();
	void M_SetMovementModeChangedDelegate(const TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>& value);

	//TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>	OnCharacterMovementUpdated;		//Offset: 904	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature> M_GetOnCharacterMovementUpdated() const;
	TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>* M_PtrGetOnCharacterMovementUpdated();
	void M_SetOnCharacterMovementUpdated(const TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>& value);

	//struct FRootMotionSourceGroup	SavedRootMotion;		//Offset: 920	Size: 56	Flags: Transient, NativeAccessSpecifierPublic
	struct FRootMotionSourceGroup M_GetSavedRootMotion() const;
	struct FRootMotionSourceGroup* M_PtrGetSavedRootMotion();
	void M_SetSavedRootMotion(const struct FRootMotionSourceGroup& value);

	//struct FRootMotionMovementParams	ClientRootMotionParams;		//Offset: 976	Size: 64	Flags: Transient, NoDestructor, NativeAccessSpecifierPublic
	struct FRootMotionMovementParams M_GetClientRootMotionParams() const;
	struct FRootMotionMovementParams* M_PtrGetClientRootMotionParams();
	void M_SetClientRootMotionParams(const struct FRootMotionMovementParams& value);

	//TArray<struct FSimulatedRootMotionReplicatedMove>	RootMotionRepMoves;		//Offset: 1040	Size: 16	Flags: ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<struct FSimulatedRootMotionReplicatedMove> M_GetRootMotionRepMoves() const;
	TArray<struct FSimulatedRootMotionReplicatedMove>* M_PtrGetRootMotionRepMoves();
	void M_SetRootMotionRepMoves(const TArray<struct FSimulatedRootMotionReplicatedMove>& value);

	//struct FRepRootMotionMontage	RepRootMotion;		//Offset: 1056	Size: 152	Flags: Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FRepRootMotionMontage M_GetRepRootMotion() const;
	struct FRepRootMotionMontage* M_PtrGetRepRootMotion();
	void M_SetRepRootMotion(const struct FRepRootMotionMontage& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}

#pragma region Functions
	void CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation);

	bool CanCrouch()/* const*/;

	bool CanJump()/* const*/;

	bool CanJumpInternal()/* const*/;

	void ClientAckGoodMove(float Timestamp);

	void ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, class UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);

	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);

	void ClientAdjustRootMotionSourcePosition(float Timestamp, struct FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);

	void ClientCheatFly();

	void ClientCheatGhost();

	void ClientCheatWalk();

	void ClientMoveResponsePacked(struct FCharacterMoveResponsePackedBits& PackedBits);

	void ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, class UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);

	void Crouch(bool bClientSimulation);

	float GetAnimRootMotionTranslationScale()/* const*/;

	struct FRotator GetBaseRotationOffsetRotator()/* const*/;

	struct FVector GetBaseTranslationOffset()/* const*/;

	class UAnimMontage* GetCurrentMontage()/* const*/;

	bool HasAnyRootMotion()/* const*/;

	bool IsJumpProvidingForce()/* const*/;

	bool IsPlayingNetworkedRootMotionMontage()/* const*/;

	bool IsPlayingRootMotion()/* const*/;

	void Jump();

	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);

	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);

	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);

	void K2_UpdateCustomMovement(float DeltaTime);

	void LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride);

	void OnJumped();

	void OnLanded(const struct FHitResult& Hit);

	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride);

	void OnRep_IsCrouched();

	void OnRep_ReplayLastTransformUpdateTimeStamp();

	void OnRep_ReplicatedBasedMovement();

	void OnRep_RootMotion();

	void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);

	float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName);

	void RootMotionDebugClientPrintOnScreen(struct FString inString);

	void ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, unsigned char ClientMovementMode);

	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, unsigned char ClientMovementMode);

	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, unsigned char ClientMovementMode);

	void ServerMoveDualNoBase(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode);

	void ServerMoveNoBase(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode);

	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, unsigned char OldMoveFlags);

	void ServerMovePacked(struct FCharacterServerMovePackedBits& PackedBits);

	void StopAnimMontage(class UAnimMontage* AnimMontage);

	void StopJumping();

	void UnCrouch(bool bClientSimulation);

#pragma endregion
};
};