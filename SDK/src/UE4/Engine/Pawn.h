#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.Pawn
// Super: Class Engine.Actor
// Size: 640
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
	class APawn : public AActor {
	public:
#pragma region Members
		//unsigned char	bUseControllerRotationPitch : 1;		//Offset: 552	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char M_GetbUseControllerRotationPitch() const;
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char* M_PtrGetbUseControllerRotationPitch();
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		void M_SetbUseControllerRotationPitch(const unsigned char& value);

		//unsigned char	bUseControllerRotationYaw : 1;		//Offset: 552	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char M_GetbUseControllerRotationYaw() const;
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char* M_PtrGetbUseControllerRotationYaw();
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		void M_SetbUseControllerRotationYaw(const unsigned char& value);

		//unsigned char	bUseControllerRotationRoll : 1;		//Offset: 552	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char M_GetbUseControllerRotationRoll() const;
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char* M_PtrGetbUseControllerRotationRoll();
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		void M_SetbUseControllerRotationRoll(const unsigned char& value);

		//unsigned char	bCanAffectNavigationGeneration : 1;		//Offset: 552	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char M_GetbCanAffectNavigationGeneration() const;
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		unsigned char* M_PtrGetbCanAffectNavigationGeneration();
		[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
		void M_SetbCanAffectNavigationGeneration(const unsigned char& value);

		//float	BaseEyeHeight;		//Offset: 556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float M_GetBaseEyeHeight() const;
		float* M_PtrGetBaseEyeHeight();
		void M_SetBaseEyeHeight(const float& value);

		//TEnumAsByte<EAutoReceiveInput>	AutoPossessPlayer;		//Offset: 560	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EAutoReceiveInput> M_GetAutoPossessPlayer() const;
		TEnumAsByte<EAutoReceiveInput>* M_PtrGetAutoPossessPlayer();
		void M_SetAutoPossessPlayer(const TEnumAsByte<EAutoReceiveInput>& value);

		//EAutoPossessAI	AutoPossessAI;		//Offset: 561	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAutoPossessAI M_GetAutoPossessAI() const;
		EAutoPossessAI* M_PtrGetAutoPossessAI();
		void M_SetAutoPossessAI(const EAutoPossessAI& value);

		//unsigned char	RemoteViewPitch;		//Offset: 562	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char M_GetRemoteViewPitch() const;
		unsigned char* M_PtrGetRemoteViewPitch();
		void M_SetRemoteViewPitch(const unsigned char& value);

		//class AController*	AIControllerClass;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController* M_GetAIControllerClass() const;
		class AController** M_PtrGetAIControllerClass();
		void M_SetAIControllerClass(const class AController*& value);

		//class APlayerState*	PlayerState;		//Offset: 576	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APlayerState* M_GetPlayerState() const;
		class APlayerState** M_PtrGetPlayerState();
		void M_SetPlayerState(const class APlayerState*& value);

		//class AController*	LastHitBy;		//Offset: 592	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController* M_GetLastHitBy() const;
		class AController** M_PtrGetLastHitBy();
		void M_SetLastHitBy(const class AController*& value);

		//class AController*	Controller;		//Offset: 600	Size: 8	Flags: Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController* M_GetController() const;
		class AController** M_PtrGetController();
		void M_SetController(const class AController*& value);

		//struct FVector	ControlInputVector;		//Offset: 612	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector M_GetControlInputVector() const;
		struct FVector* M_PtrGetControlInputVector();
		void M_SetControlInputVector(const struct FVector& value);

		//struct FVector	LastControlInputVector;		//Offset: 624	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector M_GetLastControlInputVector() const;
		struct FVector* M_PtrGetLastControlInputVector();
		void M_SetLastControlInputVector(const struct FVector& value);

#pragma endregion

	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class Engine.Pawn");
			return ptr;
		}

#pragma region Functions
		void AddControllerPitchInput(float Val);

		void AddControllerRollInput(float Val);

		void AddControllerYawInput(float Val);

		void AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce);

		struct FVector ConsumeMovementInputVector();

		void DetachFromControllerPendingDestroy();

		struct FRotator GetBaseAimRotation()/* const*/;

		class AController* GetController()/* const*/;

		struct FRotator GetControlRotation()/* const*/;

		struct FVector GetLastMovementInputVector()/* const*/;

		static class AActor* GetMovementBaseActor(class APawn* Pawn);

		class UPawnMovementComponent* GetMovementComponent()/* const*/;

		struct FVector GetNavAgentLocation()/* const*/;

		struct FVector GetPendingMovementInputVector()/* const*/;

		bool IsBotControlled()/* const*/;

		bool IsControlled()/* const*/;

		bool IsLocallyControlled()/* const*/;

		bool IsMoveInputIgnored()/* const*/;

		bool IsPawnControlled()/* const*/;

		bool IsPlayerControlled()/* const*/;

		struct FVector K2_GetMovementInputVector()/* const*/;

		void LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride);

		void OnRep_Controller();

		void OnRep_PlayerState();

		void PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);

		void ReceivePossessed(class AController* NewController);

		void ReceiveUnpossessed(class AController* OldController);

		void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);

		void SpawnDefaultController();

#pragma endregion
	};
};