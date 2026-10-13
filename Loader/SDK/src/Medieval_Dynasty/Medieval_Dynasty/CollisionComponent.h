#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CollisionComponent
// Super: Class Engine.ActorComponent
// Size: 440
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UCollisionComponent : public UActorComponent {
public:
#pragma region Members
	//TArray<class AActor*>	replicatedCollisionActorsToIgnore;		//Offset: 176	Size: 16	Flags: Net, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<class AActor*> M_GetreplicatedCollisionActorsToIgnore() const;
	TArray<class AActor*>* M_PtrGetreplicatedCollisionActorsToIgnore();
	void M_SetreplicatedCollisionActorsToIgnore(const TArray<class AActor*>& value);

	//bool	isCollisionDormant;		//Offset: 192	Size: 1	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetisCollisionDormant() const;
	bool* M_PtrGetisCollisionDormant();
	void M_SetisCollisionDormant(const bool& value);

	//bool	isCollisionEnabled;		//Offset: 325	Size: 1	Flags: Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisCollisionEnabled() const;
	bool* M_PtrGetisCollisionEnabled();
	void M_SetisCollisionEnabled(const bool& value);

	//bool	canBePushed;		//Offset: 326	Size: 1	Flags: Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanBePushed() const;
	bool* M_PtrGetcanBePushed();
	void M_SetcanBePushed(const bool& value);

	//bool	canBePushedStationary;		//Offset: 327	Size: 1	Flags: Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanBePushedStationary() const;
	bool* M_PtrGetcanBePushedStationary();
	void M_SetcanBePushedStationary(const bool& value);

	//bool	canPushOthers;		//Offset: 328	Size: 1	Flags: Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanPushOthers() const;
	bool* M_PtrGetcanPushOthers();
	void M_SetcanPushOthers(const bool& value);

	//float	collisionInfluenceSharpness;		//Offset: 332	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionInfluenceSharpness() const;
	float* M_PtrGetcollisionInfluenceSharpness();
	void M_SetcollisionInfluenceSharpness(const float& value);

	//float	collisionBaseInfluenceCoefficient;		//Offset: 336	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionBaseInfluenceCoefficient() const;
	float* M_PtrGetcollisionBaseInfluenceCoefficient();
	void M_SetcollisionBaseInfluenceCoefficient(const float& value);

	//float	collisionVelocityInfluenceCoefficient;		//Offset: 340	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionVelocityInfluenceCoefficient() const;
	float* M_PtrGetcollisionVelocityInfluenceCoefficient();
	void M_SetcollisionVelocityInfluenceCoefficient(const float& value);

	//float	collisionMassInfluenceCoefficient;		//Offset: 344	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcollisionMassInfluenceCoefficient() const;
	float* M_PtrGetcollisionMassInfluenceCoefficient();
	void M_SetcollisionMassInfluenceCoefficient(const float& value);

	//TArray<struct FComponentReference>	collisionShapeComponentReferences;		//Offset: 352	Size: 16	Flags: Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	TArray<struct FComponentReference> M_GetcollisionShapeComponentReferences() const;
	TArray<struct FComponentReference>* M_PtrGetcollisionShapeComponentReferences();
	void M_SetcollisionShapeComponentReferences(const TArray<struct FComponentReference>& value);

	//bool	isDebugEnabled;		//Offset: 368	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

	//TAssetPtr<class FOnPushAttempt__DelegateSignature>	onPushAttempt;		//Offset: 376	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnPushAttempt__DelegateSignature> M_GetonPushAttempt() const;
	TAssetPtr<class FOnPushAttempt__DelegateSignature>* M_PtrGetonPushAttempt();
	void M_SetonPushAttempt(const TAssetPtr<class FOnPushAttempt__DelegateSignature>& value);

	//TAssetPtr<class FOnPush__DelegateSignature>	onPush;		//Offset: 392	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnPush__DelegateSignature> M_GetonPush() const;
	TAssetPtr<class FOnPush__DelegateSignature>* M_PtrGetonPush();
	void M_SetonPush(const TAssetPtr<class FOnPush__DelegateSignature>& value);

	//TAssetPtr<class FOnPushFailed__DelegateSignature>	onPushFailed;		//Offset: 408	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnPushFailed__DelegateSignature> M_GetonPushFailed() const;
	TAssetPtr<class FOnPushFailed__DelegateSignature>* M_PtrGetonPushFailed();
	void M_SetonPushFailed(const TAssetPtr<class FOnPushFailed__DelegateSignature>& value);

	//TAssetPtr<class FOnCollision__DelegateSignature>	onCollision;		//Offset: 424	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnCollision__DelegateSignature> M_GetonCollision() const;
	TAssetPtr<class FOnCollision__DelegateSignature>* M_PtrGetonCollision();
	void M_SetonCollision(const TAssetPtr<class FOnCollision__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CollisionComponent");
		return ptr;
	}

#pragma region Functions
	void AddCollisionIgnoredActor(class AActor* Actor);

	bool GetCanBePushed()/* const*/;

	bool GetCanCollisionBeDormant()/* const*/;

	bool GetCanPushOthers()/* const*/;

	TArray<class AActor*> GetCollisionIgnoredActors()/* const*/;

	bool GetIsCollisionDormant()/* const*/;

	bool GetIsCollisionEnabled()/* const*/;

	void OnRepIsCollisionEnabled();

	void RemoveCollisionIgnoredActor(class AActor* Actor);

	void ReplicateCollisionMove(struct FVector_NetQuantize& moveVelocity, float moveTime);

	void ServerCollisionMove(struct FVector_NetQuantize& moveVelocity, float moveTime);

	void SetCanBePushed(bool newCanBePushed);

	void SetCanCollisionBeDormant(bool newCanCollisionBeDormant);

	void SetCanPushOthers(bool newCanPushOthers);

	void SetIsCollisionEnabled(bool newIsCollisionEnabled);

#pragma endregion
};
};