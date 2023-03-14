#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.Controller
// Super: Class Engine.Actor
// Size: 664
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AController : public AActor {
public:
#pragma region Members
	//class APlayerState*	PlayerState;		//Offset: 552	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class APlayerState* M_GetPlayerState() const;
	class APlayerState** M_PtrGetPlayerState();
	void M_SetPlayerState(const class APlayerState*& value);

	//TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>	OnInstigatedAnyDamage;		//Offset: 568	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature> M_GetOnInstigatedAnyDamage() const;
	TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>* M_PtrGetOnInstigatedAnyDamage();
	void M_SetOnInstigatedAnyDamage(const TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>& value);

	//struct FName	StateName;		//Offset: 584	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetStateName() const;
	struct FName* M_PtrGetStateName();
	void M_SetStateName(const struct FName& value);

	//class APawn*	Pawn;		//Offset: 592	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class APawn* M_GetPawn() const;
	class APawn** M_PtrGetPawn();
	void M_SetPawn(const class APawn*& value);

	//class ACharacter*	Character;		//Offset: 608	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class ACharacter* M_GetCharacter() const;
	class ACharacter** M_PtrGetCharacter();
	void M_SetCharacter(const class ACharacter*& value);

	//class USceneComponent*	TransformComponent;		//Offset: 616	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USceneComponent* M_GetTransformComponent() const;
	class USceneComponent** M_PtrGetTransformComponent();
	void M_SetTransformComponent(const class USceneComponent*& value);

	//struct FRotator	ControlRotation;		//Offset: 648	Size: 12	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FRotator M_GetControlRotation() const;
	struct FRotator* M_PtrGetControlRotation();
	void M_SetControlRotation(const struct FRotator& value);

	//unsigned char	bAttachToPawn : 1;		//Offset: 660	Size: 1	Flags: Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAttachToPawn() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAttachToPawn();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAttachToPawn(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}

#pragma region Functions
	class APlayerController* CastToPlayerController();

	void ClientSetLocation(struct FVector NewLocation, struct FRotator NewRotation);

	void ClientSetRotation(struct FRotator NewRotation, bool bResetCamera);

	struct FRotator GetControlRotation()/* const*/;

	struct FRotator GetDesiredRotation()/* const*/;

	class AActor* GetViewTarget()/* const*/;

	bool IsLocalController()/* const*/;

	bool IsLocalPlayerController()/* const*/;

	bool IsLookInputIgnored()/* const*/;

	bool IsMoveInputIgnored()/* const*/;

	bool IsPlayerController()/* const*/;

	class APawn* K2_GetPawn()/* const*/;

	bool LineOfSightTo(class AActor* Other, struct FVector ViewPoint, bool bAlternateChecks)/* const*/;

	void OnRep_Pawn();

	void OnRep_PlayerState();

	void Possess(class APawn* InPawn);

	void ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);

	void ReceivePossess(class APawn* PossessedPawn);

	void ReceiveUnPossess(class APawn* UnpossessedPawn);

	void ResetIgnoreInputFlags();

	void ResetIgnoreLookInput();

	void ResetIgnoreMoveInput();

	void SetControlRotation(const struct FRotator& NewRotation);

	void SetIgnoreLookInput(bool bNewLookInput);

	void SetIgnoreMoveInput(bool bNewMoveInput);

	void SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);

	void StopMovement();

	void UnPossess();

#pragma endregion
};
};