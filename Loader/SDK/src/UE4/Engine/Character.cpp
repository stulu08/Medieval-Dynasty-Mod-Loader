#include "../SDK.h"
#include "Character.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Mesh
// Declaration: class USkeletalMeshComponent* Mesh
class USkeletalMeshComponent* ACharacter::M_GetMesh() const {
	return Read<class USkeletalMeshComponent*>((byte*)this + 640);
}
class USkeletalMeshComponent** ACharacter::M_PtrGetMesh() {
	return reinterpret_cast<class USkeletalMeshComponent**>((byte*)this + 640);
}
void ACharacter::M_SetMesh(const class USkeletalMeshComponent*& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of CharacterMovement
// Declaration: class UCharacterMovementComponent* CharacterMovement
class UCharacterMovementComponent* ACharacter::M_GetCharacterMovement() const {
	return Read<class UCharacterMovementComponent*>((byte*)this + 648);
}
class UCharacterMovementComponent** ACharacter::M_PtrGetCharacterMovement() {
	return reinterpret_cast<class UCharacterMovementComponent**>((byte*)this + 648);
}
void ACharacter::M_SetCharacterMovement(const class UCharacterMovementComponent*& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of CapsuleComponent
// Declaration: class UCapsuleComponent* CapsuleComponent
class UCapsuleComponent* ACharacter::M_GetCapsuleComponent() const {
	return Read<class UCapsuleComponent*>((byte*)this + 656);
}
class UCapsuleComponent** ACharacter::M_PtrGetCapsuleComponent() {
	return reinterpret_cast<class UCapsuleComponent**>((byte*)this + 656);
}
void ACharacter::M_SetCapsuleComponent(const class UCapsuleComponent*& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of BasedMovement
// Declaration: struct FBasedMovementInfo BasedMovement
struct FBasedMovementInfo ACharacter::M_GetBasedMovement() const {
	return Read<struct FBasedMovementInfo>((byte*)this + 664);
}
struct FBasedMovementInfo* ACharacter::M_PtrGetBasedMovement() {
	return reinterpret_cast<struct FBasedMovementInfo*>((byte*)this + 664);
}
void ACharacter::M_SetBasedMovement(const struct FBasedMovementInfo& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of ReplicatedBasedMovement
// Declaration: struct FBasedMovementInfo ReplicatedBasedMovement
struct FBasedMovementInfo ACharacter::M_GetReplicatedBasedMovement() const {
	return Read<struct FBasedMovementInfo>((byte*)this + 712);
}
struct FBasedMovementInfo* ACharacter::M_PtrGetReplicatedBasedMovement() {
	return reinterpret_cast<struct FBasedMovementInfo*>((byte*)this + 712);
}
void ACharacter::M_SetReplicatedBasedMovement(const struct FBasedMovementInfo& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of AnimRootMotionTranslationScale
// Declaration: float AnimRootMotionTranslationScale
float ACharacter::M_GetAnimRootMotionTranslationScale() const {
	return Read<float>((byte*)this + 760);
}
float* ACharacter::M_PtrGetAnimRootMotionTranslationScale() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void ACharacter::M_SetAnimRootMotionTranslationScale(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of BaseTranslationOffset
// Declaration: struct FVector BaseTranslationOffset
struct FVector ACharacter::M_GetBaseTranslationOffset() const {
	return Read<struct FVector>((byte*)this + 764);
}
struct FVector* ACharacter::M_PtrGetBaseTranslationOffset() {
	return reinterpret_cast<struct FVector*>((byte*)this + 764);
}
void ACharacter::M_SetBaseTranslationOffset(const struct FVector& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of BaseRotationOffset
// Declaration: struct FQuat BaseRotationOffset
struct FQuat ACharacter::M_GetBaseRotationOffset() const {
	return Read<struct FQuat>((byte*)this + 784);
}
struct FQuat* ACharacter::M_PtrGetBaseRotationOffset() {
	return reinterpret_cast<struct FQuat*>((byte*)this + 784);
}
void ACharacter::M_SetBaseRotationOffset(const struct FQuat& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of ReplicatedServerLastTransformUpdateTimeStamp
// Declaration: float ReplicatedServerLastTransformUpdateTimeStamp
float ACharacter::M_GetReplicatedServerLastTransformUpdateTimeStamp() const {
	return Read<float>((byte*)this + 800);
}
float* ACharacter::M_PtrGetReplicatedServerLastTransformUpdateTimeStamp() {
	return reinterpret_cast<float*>((byte*)this + 800);
}
void ACharacter::M_SetReplicatedServerLastTransformUpdateTimeStamp(const float& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of ReplayLastTransformUpdateTimeStamp
// Declaration: float ReplayLastTransformUpdateTimeStamp
float ACharacter::M_GetReplayLastTransformUpdateTimeStamp() const {
	return Read<float>((byte*)this + 804);
}
float* ACharacter::M_PtrGetReplayLastTransformUpdateTimeStamp() {
	return reinterpret_cast<float*>((byte*)this + 804);
}
void ACharacter::M_SetReplayLastTransformUpdateTimeStamp(const float& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of ReplicatedMovementMode
// Declaration: unsigned char ReplicatedMovementMode
unsigned char ACharacter::M_GetReplicatedMovementMode() const {
	return Read<unsigned char>((byte*)this + 808);
}
unsigned char* ACharacter::M_PtrGetReplicatedMovementMode() {
	return reinterpret_cast<unsigned char*>((byte*)this + 808);
}
void ACharacter::M_SetReplicatedMovementMode(const unsigned char& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of bInBaseReplication
// Declaration: bool bInBaseReplication
bool ACharacter::M_GetbInBaseReplication() const {
	return Read<bool>((byte*)this + 809);
}
bool* ACharacter::M_PtrGetbInBaseReplication() {
	return reinterpret_cast<bool*>((byte*)this + 809);
}
void ACharacter::M_SetbInBaseReplication(const bool& value) {
	Write((byte*)this + 809, value);
}
// Member Getter and Setter of CrouchedEyeHeight
// Declaration: float CrouchedEyeHeight
float ACharacter::M_GetCrouchedEyeHeight() const {
	return Read<float>((byte*)this + 812);
}
float* ACharacter::M_PtrGetCrouchedEyeHeight() {
	return reinterpret_cast<float*>((byte*)this + 812);
}
void ACharacter::M_SetCrouchedEyeHeight(const float& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of bIsCrouched
// Declaration: unsigned char bIsCrouched : 1
unsigned char ACharacter::M_GetbIsCrouched() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbIsCrouched() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbIsCrouched(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bProxyIsJumpForceApplied
// Declaration: unsigned char bProxyIsJumpForceApplied : 1
unsigned char ACharacter::M_GetbProxyIsJumpForceApplied() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbProxyIsJumpForceApplied() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbProxyIsJumpForceApplied(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bPressedJump
// Declaration: unsigned char bPressedJump : 1
unsigned char ACharacter::M_GetbPressedJump() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbPressedJump() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbPressedJump(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bClientUpdating
// Declaration: unsigned char bClientUpdating : 1
unsigned char ACharacter::M_GetbClientUpdating() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbClientUpdating() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbClientUpdating(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bClientWasFalling
// Declaration: unsigned char bClientWasFalling : 1
unsigned char ACharacter::M_GetbClientWasFalling() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbClientWasFalling() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbClientWasFalling(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bClientResimulateRootMotion
// Declaration: unsigned char bClientResimulateRootMotion : 1
unsigned char ACharacter::M_GetbClientResimulateRootMotion() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbClientResimulateRootMotion() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbClientResimulateRootMotion(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bClientResimulateRootMotionSources
// Declaration: unsigned char bClientResimulateRootMotionSources : 1
unsigned char ACharacter::M_GetbClientResimulateRootMotionSources() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbClientResimulateRootMotionSources() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbClientResimulateRootMotionSources(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bSimGravityDisabled
// Declaration: unsigned char bSimGravityDisabled : 1
unsigned char ACharacter::M_GetbSimGravityDisabled() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* ACharacter::M_PtrGetbSimGravityDisabled() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void ACharacter::M_SetbSimGravityDisabled(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of bClientCheckEncroachmentOnNetUpdate
// Declaration: unsigned char bClientCheckEncroachmentOnNetUpdate : 1
unsigned char ACharacter::M_GetbClientCheckEncroachmentOnNetUpdate() const {
	return Read<unsigned char>((byte*)this + 817);
}
unsigned char* ACharacter::M_PtrGetbClientCheckEncroachmentOnNetUpdate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 817);
}
void ACharacter::M_SetbClientCheckEncroachmentOnNetUpdate(const unsigned char& value) {
	Write((byte*)this + 817, value);
}
// Member Getter and Setter of bServerMoveIgnoreRootMotion
// Declaration: unsigned char bServerMoveIgnoreRootMotion : 1
unsigned char ACharacter::M_GetbServerMoveIgnoreRootMotion() const {
	return Read<unsigned char>((byte*)this + 817);
}
unsigned char* ACharacter::M_PtrGetbServerMoveIgnoreRootMotion() {
	return reinterpret_cast<unsigned char*>((byte*)this + 817);
}
void ACharacter::M_SetbServerMoveIgnoreRootMotion(const unsigned char& value) {
	Write((byte*)this + 817, value);
}
// Member Getter and Setter of bWasJumping
// Declaration: unsigned char bWasJumping : 1
unsigned char ACharacter::M_GetbWasJumping() const {
	return Read<unsigned char>((byte*)this + 817);
}
unsigned char* ACharacter::M_PtrGetbWasJumping() {
	return reinterpret_cast<unsigned char*>((byte*)this + 817);
}
void ACharacter::M_SetbWasJumping(const unsigned char& value) {
	Write((byte*)this + 817, value);
}
// Member Getter and Setter of JumpKeyHoldTime
// Declaration: float JumpKeyHoldTime
float ACharacter::M_GetJumpKeyHoldTime() const {
	return Read<float>((byte*)this + 820);
}
float* ACharacter::M_PtrGetJumpKeyHoldTime() {
	return reinterpret_cast<float*>((byte*)this + 820);
}
void ACharacter::M_SetJumpKeyHoldTime(const float& value) {
	Write((byte*)this + 820, value);
}
// Member Getter and Setter of JumpForceTimeRemaining
// Declaration: float JumpForceTimeRemaining
float ACharacter::M_GetJumpForceTimeRemaining() const {
	return Read<float>((byte*)this + 824);
}
float* ACharacter::M_PtrGetJumpForceTimeRemaining() {
	return reinterpret_cast<float*>((byte*)this + 824);
}
void ACharacter::M_SetJumpForceTimeRemaining(const float& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of ProxyJumpForceStartedTime
// Declaration: float ProxyJumpForceStartedTime
float ACharacter::M_GetProxyJumpForceStartedTime() const {
	return Read<float>((byte*)this + 828);
}
float* ACharacter::M_PtrGetProxyJumpForceStartedTime() {
	return reinterpret_cast<float*>((byte*)this + 828);
}
void ACharacter::M_SetProxyJumpForceStartedTime(const float& value) {
	Write((byte*)this + 828, value);
}
// Member Getter and Setter of JumpMaxHoldTime
// Declaration: float JumpMaxHoldTime
float ACharacter::M_GetJumpMaxHoldTime() const {
	return Read<float>((byte*)this + 832);
}
float* ACharacter::M_PtrGetJumpMaxHoldTime() {
	return reinterpret_cast<float*>((byte*)this + 832);
}
void ACharacter::M_SetJumpMaxHoldTime(const float& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of JumpMaxCount
// Declaration: int32_t JumpMaxCount
int32_t ACharacter::M_GetJumpMaxCount() const {
	return Read<int32_t>((byte*)this + 836);
}
int32_t* ACharacter::M_PtrGetJumpMaxCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 836);
}
void ACharacter::M_SetJumpMaxCount(const int32_t& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of JumpCurrentCount
// Declaration: int32_t JumpCurrentCount
int32_t ACharacter::M_GetJumpCurrentCount() const {
	return Read<int32_t>((byte*)this + 840);
}
int32_t* ACharacter::M_PtrGetJumpCurrentCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 840);
}
void ACharacter::M_SetJumpCurrentCount(const int32_t& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of JumpCurrentCountPreJump
// Declaration: int32_t JumpCurrentCountPreJump
int32_t ACharacter::M_GetJumpCurrentCountPreJump() const {
	return Read<int32_t>((byte*)this + 844);
}
int32_t* ACharacter::M_PtrGetJumpCurrentCountPreJump() {
	return reinterpret_cast<int32_t*>((byte*)this + 844);
}
void ACharacter::M_SetJumpCurrentCountPreJump(const int32_t& value) {
	Write((byte*)this + 844, value);
}
// Member Getter and Setter of OnReachedJumpApex
// Declaration: TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature> OnReachedJumpApex
TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature> ACharacter::M_GetOnReachedJumpApex() const {
	return Read<TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>>((byte*)this + 856);
}
TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>* ACharacter::M_PtrGetOnReachedJumpApex() {
	return reinterpret_cast<TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>*>((byte*)this + 856);
}
void ACharacter::M_SetOnReachedJumpApex(const TAssetPtr<class FCharacterReachedApexSignature__DelegateSignature>& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of MovementModeChangedDelegate
// Declaration: TAssetPtr<class FMovementModeChangedSignature__DelegateSignature> MovementModeChangedDelegate
TAssetPtr<class FMovementModeChangedSignature__DelegateSignature> ACharacter::M_GetMovementModeChangedDelegate() const {
	return Read<TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>>((byte*)this + 888);
}
TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>* ACharacter::M_PtrGetMovementModeChangedDelegate() {
	return reinterpret_cast<TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>*>((byte*)this + 888);
}
void ACharacter::M_SetMovementModeChangedDelegate(const TAssetPtr<class FMovementModeChangedSignature__DelegateSignature>& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of OnCharacterMovementUpdated
// Declaration: TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature> OnCharacterMovementUpdated
TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature> ACharacter::M_GetOnCharacterMovementUpdated() const {
	return Read<TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>>((byte*)this + 904);
}
TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>* ACharacter::M_PtrGetOnCharacterMovementUpdated() {
	return reinterpret_cast<TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>*>((byte*)this + 904);
}
void ACharacter::M_SetOnCharacterMovementUpdated(const TAssetPtr<class FCharacterMovementUpdatedSignature__DelegateSignature>& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of SavedRootMotion
// Declaration: struct FRootMotionSourceGroup SavedRootMotion
struct FRootMotionSourceGroup ACharacter::M_GetSavedRootMotion() const {
	return Read<struct FRootMotionSourceGroup>((byte*)this + 920);
}
struct FRootMotionSourceGroup* ACharacter::M_PtrGetSavedRootMotion() {
	return reinterpret_cast<struct FRootMotionSourceGroup*>((byte*)this + 920);
}
void ACharacter::M_SetSavedRootMotion(const struct FRootMotionSourceGroup& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of ClientRootMotionParams
// Declaration: struct FRootMotionMovementParams ClientRootMotionParams
struct FRootMotionMovementParams ACharacter::M_GetClientRootMotionParams() const {
	return Read<struct FRootMotionMovementParams>((byte*)this + 976);
}
struct FRootMotionMovementParams* ACharacter::M_PtrGetClientRootMotionParams() {
	return reinterpret_cast<struct FRootMotionMovementParams*>((byte*)this + 976);
}
void ACharacter::M_SetClientRootMotionParams(const struct FRootMotionMovementParams& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of RootMotionRepMoves
// Declaration: TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves
TArray<struct FSimulatedRootMotionReplicatedMove> ACharacter::M_GetRootMotionRepMoves() const {
	return Read<TArray<struct FSimulatedRootMotionReplicatedMove>>((byte*)this + 1040);
}
TArray<struct FSimulatedRootMotionReplicatedMove>* ACharacter::M_PtrGetRootMotionRepMoves() {
	return reinterpret_cast<TArray<struct FSimulatedRootMotionReplicatedMove>*>((byte*)this + 1040);
}
void ACharacter::M_SetRootMotionRepMoves(const TArray<struct FSimulatedRootMotionReplicatedMove>& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of RepRootMotion
// Declaration: struct FRepRootMotionMontage RepRootMotion
struct FRepRootMotionMontage ACharacter::M_GetRepRootMotion() const {
	return Read<struct FRepRootMotionMontage>((byte*)this + 1056);
}
struct FRepRootMotionMontage* ACharacter::M_PtrGetRepRootMotion() {
	return reinterpret_cast<struct FRepRootMotionMontage*>((byte*)this + 1056);
}
void ACharacter::M_SetRepRootMotion(const struct FRepRootMotionMontage& value) {
	Write((byte*)this + 1056, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.Character.CacheInitialMeshOffset
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: MeshRelativeLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MeshRelativeRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.CacheInitialMeshOffset");

	struct ACharacter_CacheInitialMeshOffset_Params {
		struct FVector MeshRelativeLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator MeshRelativeRotation;			//Offset: 12 | ElementSize: 12
	};
	ACharacter_CacheInitialMeshOffset_Params params;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.CanCrouch
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::CanCrouch()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.CanCrouch");

	struct ACharacter_CanCrouch_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_CanCrouch_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.CanJump
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::CanJump()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.CanJump");

	struct ACharacter_CanJump_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_CanJump_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.CanJumpInternal
// Flags: Native, Event, Protected, BlueprintEvent, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::CanJumpInternal()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.CanJumpInternal");

	struct ACharacter_CanJumpInternal_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_CanJumpInternal_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.ClientAckGoodMove
// Flags: Net, Native, Event, Public, NetClient
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ClientAckGoodMove(float Timestamp) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientAckGoodMove");

	struct ACharacter_ClientAckGoodMove_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
	};
	ACharacter_ClientAckGoodMove_Params params;
	params.Timestamp = Timestamp;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientAdjustPosition
// Flags: Net, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewLoc	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewVel	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewBaseBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHasBase	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bBaseRelativePosition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, class UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientAdjustPosition");

	struct ACharacter_ClientAdjustPosition_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
		struct FVector NewLoc;			//Offset: 4 | ElementSize: 12
		struct FVector NewVel;			//Offset: 16 | ElementSize: 12
		class UPrimitiveComponent* NewBase;			//Offset: 32 | ElementSize: 8
		struct FName NewBaseBoneName;			//Offset: 40 | ElementSize: 8
		bool bHasBase;			//Offset: 48 | ElementSize: 1
		bool bBaseRelativePosition;			//Offset: 49 | ElementSize: 1
		unsigned char ServerMovementMode;			//Offset: 50 | ElementSize: 1
	};
	ACharacter_ClientAdjustPosition_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientAdjustRootMotionPosition
// Flags: Net, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerMontageTrackPosition	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerLoc	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerRotation	Type: struct FVector_NetQuantizeNormal	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerVelZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHasBase	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bBaseRelativePosition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientAdjustRootMotionPosition");

	struct ACharacter_ClientAdjustRootMotionPosition_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
		float ServerMontageTrackPosition;			//Offset: 4 | ElementSize: 4
		struct FVector ServerLoc;			//Offset: 8 | ElementSize: 12
		struct FVector_NetQuantizeNormal ServerRotation;			//Offset: 20 | ElementSize: 12
		float ServerVelZ;			//Offset: 32 | ElementSize: 4
		class UPrimitiveComponent* ServerBase;			//Offset: 40 | ElementSize: 8
		struct FName ServerBoneName;			//Offset: 48 | ElementSize: 8
		bool bHasBase;			//Offset: 56 | ElementSize: 1
		bool bBaseRelativePosition;			//Offset: 57 | ElementSize: 1
		unsigned char ServerMovementMode;			//Offset: 58 | ElementSize: 1
	};
	ACharacter_ClientAdjustRootMotionPosition_Params params;
	params.Timestamp = Timestamp;
	params.ServerMontageTrackPosition = ServerMontageTrackPosition;
	params.ServerLoc = ServerLoc;
	params.ServerRotation = ServerRotation;
	params.ServerVelZ = ServerVelZ;
	params.ServerBase = ServerBase;
	params.ServerBoneName = ServerBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientAdjustRootMotionSourcePosition
// Flags: Net, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerRootMotion	Type: struct FRootMotionSourceGroup	Flags: Parm, NativeAccessSpecifierPublic
// Name: bHasAnimRootMotion	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerMontageTrackPosition	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerLoc	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerRotation	Type: struct FVector_NetQuantizeNormal	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerVelZ	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHasBase	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bBaseRelativePosition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ClientAdjustRootMotionSourcePosition(float Timestamp, struct FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientAdjustRootMotionSourcePosition");

	struct ACharacter_ClientAdjustRootMotionSourcePosition_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
		struct FRootMotionSourceGroup ServerRootMotion;			//Offset: 8 | ElementSize: 56
		bool bHasAnimRootMotion;			//Offset: 64 | ElementSize: 1
		float ServerMontageTrackPosition;			//Offset: 68 | ElementSize: 4
		struct FVector ServerLoc;			//Offset: 72 | ElementSize: 12
		struct FVector_NetQuantizeNormal ServerRotation;			//Offset: 84 | ElementSize: 12
		float ServerVelZ;			//Offset: 96 | ElementSize: 4
		class UPrimitiveComponent* ServerBase;			//Offset: 104 | ElementSize: 8
		struct FName ServerBoneName;			//Offset: 112 | ElementSize: 8
		bool bHasBase;			//Offset: 120 | ElementSize: 1
		bool bBaseRelativePosition;			//Offset: 121 | ElementSize: 1
		unsigned char ServerMovementMode;			//Offset: 122 | ElementSize: 1
	};
	ACharacter_ClientAdjustRootMotionSourcePosition_Params params;
	params.Timestamp = Timestamp;
	params.ServerRootMotion = ServerRootMotion;
	params.bHasAnimRootMotion = bHasAnimRootMotion;
	params.ServerMontageTrackPosition = ServerMontageTrackPosition;
	params.ServerLoc = ServerLoc;
	params.ServerRotation = ServerRotation;
	params.ServerVelZ = ServerVelZ;
	params.ServerBase = ServerBase;
	params.ServerBoneName = ServerBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientCheatFly
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void ACharacter::ClientCheatFly() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientCheatFly");

	struct ACharacter_ClientCheatFly_Params {
	};
	ACharacter_ClientCheatFly_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientCheatGhost
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void ACharacter::ClientCheatGhost() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientCheatGhost");

	struct ACharacter_ClientCheatGhost_Params {
	};
	ACharacter_ClientCheatGhost_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientCheatWalk
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
/////////////////////////////////////////////
void ACharacter::ClientCheatWalk() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientCheatWalk");

	struct ACharacter_ClientCheatWalk_Params {
	};
	ACharacter_ClientCheatWalk_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientMoveResponsePacked
// Flags: Net, Native, Event, Public, NetClient, NetValidate
// Params:
// Name: PackedBits	Type: struct FCharacterMoveResponsePackedBits	Flags: ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ClientMoveResponsePacked(struct FCharacterMoveResponsePackedBits& PackedBits) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientMoveResponsePacked");

	struct ACharacter_ClientMoveResponsePacked_Params {
		struct FCharacterMoveResponsePackedBits PackedBits;			//Offset: 0 | ElementSize: 152
	};
	ACharacter_ClientMoveResponsePacked_Params params;
	params.PackedBits = PackedBits;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ClientVeryShortAdjustPosition
// Flags: Net, Native, Event, Public, HasDefaults, NetClient
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewLoc	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewBaseBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHasBase	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bBaseRelativePosition	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ServerMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, class UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ClientVeryShortAdjustPosition");

	struct ACharacter_ClientVeryShortAdjustPosition_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
		struct FVector NewLoc;			//Offset: 4 | ElementSize: 12
		class UPrimitiveComponent* NewBase;			//Offset: 16 | ElementSize: 8
		struct FName NewBaseBoneName;			//Offset: 24 | ElementSize: 8
		bool bHasBase;			//Offset: 32 | ElementSize: 1
		bool bBaseRelativePosition;			//Offset: 33 | ElementSize: 1
		unsigned char ServerMovementMode;			//Offset: 34 | ElementSize: 1
	};
	ACharacter_ClientVeryShortAdjustPosition_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.Crouch
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bClientSimulation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::Crouch(bool bClientSimulation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.Crouch");

	struct ACharacter_Crouch_Params {
		bool bClientSimulation;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_Crouch_Params params;
	params.bClientSimulation = bClientSimulation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.GetAnimRootMotionTranslationScale
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float ACharacter::GetAnimRootMotionTranslationScale()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.GetAnimRootMotionTranslationScale");

	struct ACharacter_GetAnimRootMotionTranslationScale_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	ACharacter_GetAnimRootMotionTranslationScale_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.GetBaseRotationOffsetRotator
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator ACharacter::GetBaseRotationOffsetRotator()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.GetBaseRotationOffsetRotator");

	struct ACharacter_GetBaseRotationOffsetRotator_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacter_GetBaseRotationOffsetRotator_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.GetBaseTranslationOffset
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector ACharacter::GetBaseTranslationOffset()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.GetBaseTranslationOffset");

	struct ACharacter_GetBaseTranslationOffset_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	ACharacter_GetBaseTranslationOffset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.GetCurrentMontage
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMontage* ACharacter::GetCurrentMontage()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.GetCurrentMontage");

	struct ACharacter_GetCurrentMontage_Params {
		class UAnimMontage* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	ACharacter_GetCurrentMontage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.HasAnyRootMotion
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::HasAnyRootMotion()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.HasAnyRootMotion");

	struct ACharacter_HasAnyRootMotion_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_HasAnyRootMotion_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.IsJumpProvidingForce
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::IsJumpProvidingForce()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.IsJumpProvidingForce");

	struct ACharacter_IsJumpProvidingForce_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_IsJumpProvidingForce_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.IsPlayingNetworkedRootMotionMontage
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::IsPlayingNetworkedRootMotionMontage()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.IsPlayingNetworkedRootMotionMontage");

	struct ACharacter_IsPlayingNetworkedRootMotionMontage_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_IsPlayingNetworkedRootMotionMontage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.IsPlayingRootMotion
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool ACharacter::IsPlayingRootMotion()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.IsPlayingRootMotion");

	struct ACharacter_IsPlayingRootMotion_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_IsPlayingRootMotion_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.Jump
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ACharacter::Jump() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.Jump");

	struct ACharacter_Jump_Params {
	};
	ACharacter_Jump_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.K2_OnEndCrouch
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: HalfHeightAdjust	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaledHalfHeightAdjust	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.K2_OnEndCrouch");

	struct ACharacter_K2_OnEndCrouch_Params {
		float HalfHeightAdjust;			//Offset: 0 | ElementSize: 4
		float ScaledHalfHeightAdjust;			//Offset: 4 | ElementSize: 4
	};
	ACharacter_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.K2_OnMovementModeChanged
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: PrevMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewMovementMode	Type: TEnumAsByte<EMovementMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PrevCustomMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewCustomMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.K2_OnMovementModeChanged");

	struct ACharacter_K2_OnMovementModeChanged_Params {
		TEnumAsByte<EMovementMode> PrevMovementMode;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<EMovementMode> NewMovementMode;			//Offset: 1 | ElementSize: 1
		unsigned char PrevCustomMode;			//Offset: 2 | ElementSize: 1
		unsigned char NewCustomMode;			//Offset: 3 | ElementSize: 1
	};
	ACharacter_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.K2_OnStartCrouch
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: HalfHeightAdjust	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScaledHalfHeightAdjust	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.K2_OnStartCrouch");

	struct ACharacter_K2_OnStartCrouch_Params {
		float HalfHeightAdjust;			//Offset: 0 | ElementSize: 4
		float ScaledHalfHeightAdjust;			//Offset: 4 | ElementSize: 4
	};
	ACharacter_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.K2_UpdateCustomMovement
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::K2_UpdateCustomMovement(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.K2_UpdateCustomMovement");

	struct ACharacter_K2_UpdateCustomMovement_Params {
		float DeltaTime;			//Offset: 0 | ElementSize: 4
	};
	ACharacter_K2_UpdateCustomMovement_Params params;
	params.DeltaTime = DeltaTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.LaunchCharacter
// Flags: Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: LaunchVelocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bXYOverride	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bZOverride	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.LaunchCharacter");

	struct ACharacter_LaunchCharacter_Params {
		struct FVector LaunchVelocity;			//Offset: 0 | ElementSize: 12
		bool bXYOverride;			//Offset: 12 | ElementSize: 1
		bool bZOverride;			//Offset: 13 | ElementSize: 1
	};
	ACharacter_LaunchCharacter_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnJumped
// Flags: Native, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ACharacter::OnJumped() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnJumped");

	struct ACharacter_OnJumped_Params {
	};
	ACharacter_OnJumped_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnLanded
// Flags: Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: Hit	Type: struct FHitResult	Flags: ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::OnLanded(const struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnLanded");

	struct ACharacter_OnLanded_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
	};
	ACharacter_OnLanded_Params params;
	params.Hit = Hit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnLaunched
// Flags: Event, Public, HasDefaults, BlueprintEvent
// Params:
// Name: LaunchVelocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bXYOverride	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bZOverride	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnLaunched");

	struct ACharacter_OnLaunched_Params {
		struct FVector LaunchVelocity;			//Offset: 0 | ElementSize: 12
		bool bXYOverride;			//Offset: 12 | ElementSize: 1
		bool bZOverride;			//Offset: 13 | ElementSize: 1
	};
	ACharacter_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnRep_IsCrouched
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void ACharacter::OnRep_IsCrouched() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnRep_IsCrouched");

	struct ACharacter_OnRep_IsCrouched_Params {
	};
	ACharacter_OnRep_IsCrouched_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp
// Flags: Final, Native, Public
// Params:
/////////////////////////////////////////////
void ACharacter::OnRep_ReplayLastTransformUpdateTimeStamp() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp");

	struct ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Params {
	};
	ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnRep_ReplicatedBasedMovement
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void ACharacter::OnRep_ReplicatedBasedMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnRep_ReplicatedBasedMovement");

	struct ACharacter_OnRep_ReplicatedBasedMovement_Params {
	};
	ACharacter_OnRep_ReplicatedBasedMovement_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnRep_RootMotion
// Flags: Final, Native, Public
// Params:
/////////////////////////////////////////////
void ACharacter::OnRep_RootMotion() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnRep_RootMotion");

	struct ACharacter_OnRep_RootMotion_Params {
	};
	ACharacter_OnRep_RootMotion_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.OnWalkingOffLedge
// Flags: Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent
// Params:
// Name: PreviousFloorImpactNormal	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PreviousFloorContactNormal	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PreviousLocation	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TimeDelta	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.OnWalkingOffLedge");

	struct ACharacter_OnWalkingOffLedge_Params {
		struct FVector PreviousFloorImpactNormal;			//Offset: 0 | ElementSize: 12
		struct FVector PreviousFloorContactNormal;			//Offset: 12 | ElementSize: 12
		struct FVector PreviousLocation;			//Offset: 24 | ElementSize: 12
		float TimeDelta;			//Offset: 36 | ElementSize: 4
	};
	ACharacter_OnWalkingOffLedge_Params params;
	params.PreviousFloorImpactNormal = PreviousFloorImpactNormal;
	params.PreviousFloorContactNormal = PreviousFloorContactNormal;
	params.PreviousLocation = PreviousLocation;
	params.TimeDelta = TimeDelta;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.PlayAnimMontage
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: AnimMontage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartSectionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float ACharacter::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.PlayAnimMontage");

	struct ACharacter_PlayAnimMontage_Params {
		class UAnimMontage* AnimMontage;			//Offset: 0 | ElementSize: 8
		float InPlayRate;			//Offset: 8 | ElementSize: 4
		struct FName StartSectionName;			//Offset: 12 | ElementSize: 8
		float ReturnValue;			//Offset: 20 | ElementSize: 4
	};
	ACharacter_PlayAnimMontage_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Character.RootMotionDebugClientPrintOnScreen
// Flags: Net, NetReliable, Native, Event, Public, NetClient
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::RootMotionDebugClientPrintOnScreen(struct FString inString) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.RootMotionDebugClientPrintOnScreen");

	struct ACharacter_RootMotionDebugClientPrintOnScreen_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
	};
	ACharacter_RootMotionDebugClientPrintOnScreen_Params params;
	params.inString = inString;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMove
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientLoc	Type: struct FVector_NetQuantize100	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CompressedMoveFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientRoll	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientBaseBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, unsigned char ClientMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMove");

	struct ACharacter_ServerMove_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel;			//Offset: 4 | ElementSize: 12
		struct FVector_NetQuantize100 ClientLoc;			//Offset: 16 | ElementSize: 12
		unsigned char CompressedMoveFlags;			//Offset: 28 | ElementSize: 1
		unsigned char ClientRoll;			//Offset: 29 | ElementSize: 1
		uint32_t View;			//Offset: 32 | ElementSize: 4
		class UPrimitiveComponent* ClientMovementBase;			//Offset: 40 | ElementSize: 8
		struct FName ClientBaseBoneName;			//Offset: 48 | ElementSize: 8
		unsigned char ClientMovementMode;			//Offset: 56 | ElementSize: 1
	};
	ACharacter_ServerMove_Params params;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMoveDual
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: TimeStamp0	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel0	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PendingFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View0	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientLoc	Type: struct FVector_NetQuantize100	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientRoll	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientBaseBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, unsigned char ClientMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMoveDual");

	struct ACharacter_ServerMoveDual_Params {
		float TimeStamp0;			//Offset: 0 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel0;			//Offset: 4 | ElementSize: 12
		unsigned char PendingFlags;			//Offset: 16 | ElementSize: 1
		uint32_t View0;			//Offset: 20 | ElementSize: 4
		float Timestamp;			//Offset: 24 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel;			//Offset: 28 | ElementSize: 12
		struct FVector_NetQuantize100 ClientLoc;			//Offset: 40 | ElementSize: 12
		unsigned char NewFlags;			//Offset: 52 | ElementSize: 1
		unsigned char ClientRoll;			//Offset: 53 | ElementSize: 1
		uint32_t View;			//Offset: 56 | ElementSize: 4
		class UPrimitiveComponent* ClientMovementBase;			//Offset: 64 | ElementSize: 8
		struct FName ClientBaseBoneName;			//Offset: 72 | ElementSize: 8
		unsigned char ClientMovementMode;			//Offset: 80 | ElementSize: 1
	};
	ACharacter_ServerMoveDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMoveDualHybridRootMotion
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: TimeStamp0	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel0	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PendingFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View0	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientLoc	Type: struct FVector_NetQuantize100	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientRoll	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementBase	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientBaseBoneName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, unsigned char ClientMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMoveDualHybridRootMotion");

	struct ACharacter_ServerMoveDualHybridRootMotion_Params {
		float TimeStamp0;			//Offset: 0 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel0;			//Offset: 4 | ElementSize: 12
		unsigned char PendingFlags;			//Offset: 16 | ElementSize: 1
		uint32_t View0;			//Offset: 20 | ElementSize: 4
		float Timestamp;			//Offset: 24 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel;			//Offset: 28 | ElementSize: 12
		struct FVector_NetQuantize100 ClientLoc;			//Offset: 40 | ElementSize: 12
		unsigned char NewFlags;			//Offset: 52 | ElementSize: 1
		unsigned char ClientRoll;			//Offset: 53 | ElementSize: 1
		uint32_t View;			//Offset: 56 | ElementSize: 4
		class UPrimitiveComponent* ClientMovementBase;			//Offset: 64 | ElementSize: 8
		struct FName ClientBaseBoneName;			//Offset: 72 | ElementSize: 8
		unsigned char ClientMovementMode;			//Offset: 80 | ElementSize: 1
	};
	ACharacter_ServerMoveDualHybridRootMotion_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMoveDualNoBase
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: TimeStamp0	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel0	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PendingFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View0	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientLoc	Type: struct FVector_NetQuantize100	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientRoll	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMoveDualNoBase(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMoveDualNoBase");

	struct ACharacter_ServerMoveDualNoBase_Params {
		float TimeStamp0;			//Offset: 0 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel0;			//Offset: 4 | ElementSize: 12
		unsigned char PendingFlags;			//Offset: 16 | ElementSize: 1
		uint32_t View0;			//Offset: 20 | ElementSize: 4
		float Timestamp;			//Offset: 24 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel;			//Offset: 28 | ElementSize: 12
		struct FVector_NetQuantize100 ClientLoc;			//Offset: 40 | ElementSize: 12
		unsigned char NewFlags;			//Offset: 52 | ElementSize: 1
		unsigned char ClientRoll;			//Offset: 53 | ElementSize: 1
		uint32_t View;			//Offset: 56 | ElementSize: 4
		unsigned char ClientMovementMode;			//Offset: 60 | ElementSize: 1
	};
	ACharacter_ServerMoveDualNoBase_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementMode = ClientMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMoveNoBase
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: Timestamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InAccel	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientLoc	Type: struct FVector_NetQuantize100	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CompressedMoveFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientRoll	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: View	Type: uint32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClientMovementMode	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMoveNoBase(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMoveNoBase");

	struct ACharacter_ServerMoveNoBase_Params {
		float Timestamp;			//Offset: 0 | ElementSize: 4
		struct FVector_NetQuantize10 InAccel;			//Offset: 4 | ElementSize: 12
		struct FVector_NetQuantize100 ClientLoc;			//Offset: 16 | ElementSize: 12
		unsigned char CompressedMoveFlags;			//Offset: 28 | ElementSize: 1
		unsigned char ClientRoll;			//Offset: 29 | ElementSize: 1
		uint32_t View;			//Offset: 32 | ElementSize: 4
		unsigned char ClientMovementMode;			//Offset: 36 | ElementSize: 1
	};
	ACharacter_ServerMoveNoBase_Params params;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementMode = ClientMovementMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMoveOld
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: OldTimeStamp	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OldAccel	Type: struct FVector_NetQuantize10	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OldMoveFlags	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, unsigned char OldMoveFlags) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMoveOld");

	struct ACharacter_ServerMoveOld_Params {
		float OldTimeStamp;			//Offset: 0 | ElementSize: 4
		struct FVector_NetQuantize10 OldAccel;			//Offset: 4 | ElementSize: 12
		unsigned char OldMoveFlags;			//Offset: 16 | ElementSize: 1
	};
	ACharacter_ServerMoveOld_Params params;
	params.OldTimeStamp = OldTimeStamp;
	params.OldAccel = OldAccel;
	params.OldMoveFlags = OldMoveFlags;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.ServerMovePacked
// Flags: Net, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: PackedBits	Type: struct FCharacterServerMovePackedBits	Flags: ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::ServerMovePacked(struct FCharacterServerMovePackedBits& PackedBits) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMovePacked");

	struct ACharacter_ServerMovePacked_Params {
		struct FCharacterServerMovePackedBits PackedBits;			//Offset: 0 | ElementSize: 152
	};
	ACharacter_ServerMovePacked_Params params;
	params.PackedBits = PackedBits;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.StopAnimMontage
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: AnimMontage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::StopAnimMontage(class UAnimMontage* AnimMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.StopAnimMontage");

	struct ACharacter_StopAnimMontage_Params {
		class UAnimMontage* AnimMontage;			//Offset: 0 | ElementSize: 8
	};
	ACharacter_StopAnimMontage_Params params;
	params.AnimMontage = AnimMontage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.StopJumping
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ACharacter::StopJumping() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.StopJumping");

	struct ACharacter_StopJumping_Params {
	};
	ACharacter_StopJumping_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Character.UnCrouch
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bClientSimulation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ACharacter::UnCrouch(bool bClientSimulation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Character.UnCrouch");

	struct ACharacter_UnCrouch_Params {
		bool bClientSimulation;			//Offset: 0 | ElementSize: 1
	};
	ACharacter_UnCrouch_Params params;
	params.bClientSimulation = bClientSimulation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}