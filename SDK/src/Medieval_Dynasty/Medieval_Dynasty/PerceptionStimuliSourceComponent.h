#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionStimuliSourceComponent
// Super: Class Engine.ActorComponent
// Size: 368
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionStimuliSourceComponent : public UActorComponent {
public:
#pragma region Members
	//bool	shouldHandleStimuliSourceComponentRegistration;		//Offset: 272	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetshouldHandleStimuliSourceComponentRegistration() const;
	bool* M_PtrGetshouldHandleStimuliSourceComponentRegistration();
	void M_SetshouldHandleStimuliSourceComponentRegistration(const bool& value);

	//EPerceptionStimuliSourceType	stimuliSourceType;		//Offset: 273	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EPerceptionStimuliSourceType M_GetstimuliSourceType() const;
	EPerceptionStimuliSourceType* M_PtrGetstimuliSourceType();
	void M_SetstimuliSourceType(const EPerceptionStimuliSourceType& value);

	//struct FName	skinnedMeshComponentName;		//Offset: 276	Size: 8	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetskinnedMeshComponentName() const;
	struct FName* M_PtrGetskinnedMeshComponentName();
	void M_SetskinnedMeshComponentName(const struct FName& value);

	//bool	canBeSensedBySight;		//Offset: 284	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanBeSensedBySight() const;
	bool* M_PtrGetcanBeSensedBySight();
	void M_SetcanBeSensedBySight(const bool& value);

	//float	visibilityBaseCoefficient;		//Offset: 288	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetvisibilityBaseCoefficient() const;
	float* M_PtrGetvisibilityBaseCoefficient();
	void M_SetvisibilityBaseCoefficient(const float& value);

	//TArray<struct FName>	sightCheckBoneNames;		//Offset: 296	Size: 16	Flags: Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	TArray<struct FName> M_GetsightCheckBoneNames() const;
	TArray<struct FName>* M_PtrGetsightCheckBoneNames();
	void M_SetsightCheckBoneNames(const TArray<struct FName>& value);

	//bool	isVisibilityIncreasedBySpeed;		//Offset: 312	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisVisibilityIncreasedBySpeed() const;
	bool* M_PtrGetisVisibilityIncreasedBySpeed();
	void M_SetisVisibilityIncreasedBySpeed(const bool& value);

	//float	maxVisibilityIncreaseSpeed;		//Offset: 316	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmaxVisibilityIncreaseSpeed() const;
	float* M_PtrGetmaxVisibilityIncreaseSpeed();
	void M_SetmaxVisibilityIncreaseSpeed(const float& value);

	//bool	isVisibilityDecreasedByCrouching;		//Offset: 320	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisVisibilityDecreasedByCrouching() const;
	bool* M_PtrGetisVisibilityDecreasedByCrouching();
	void M_SetisVisibilityDecreasedByCrouching(const bool& value);

	//float	crouchingVisibilityMultiplier;		//Offset: 324	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcrouchingVisibilityMultiplier() const;
	float* M_PtrGetcrouchingVisibilityMultiplier();
	void M_SetcrouchingVisibilityMultiplier(const float& value);

	//bool	canBeSensedByHearing;		//Offset: 328	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanBeSensedByHearing() const;
	bool* M_PtrGetcanBeSensedByHearing();
	void M_SetcanBeSensedByHearing(const bool& value);

	//float	loudnessBaseCoefficient;		//Offset: 332	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetloudnessBaseCoefficient() const;
	float* M_PtrGetloudnessBaseCoefficient();
	void M_SetloudnessBaseCoefficient(const float& value);

	//bool	isLoudnessIncreasedBySpeed;		//Offset: 336	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisLoudnessIncreasedBySpeed() const;
	bool* M_PtrGetisLoudnessIncreasedBySpeed();
	void M_SetisLoudnessIncreasedBySpeed(const bool& value);

	//float	maxLoudnessIncreaseSpeed;		//Offset: 340	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmaxLoudnessIncreaseSpeed() const;
	float* M_PtrGetmaxLoudnessIncreaseSpeed();
	void M_SetmaxLoudnessIncreaseSpeed(const float& value);

	//bool	isLoudnessDecreasedByCrouching;		//Offset: 344	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisLoudnessDecreasedByCrouching() const;
	bool* M_PtrGetisLoudnessDecreasedByCrouching();
	void M_SetisLoudnessDecreasedByCrouching(const bool& value);

	//float	crouchingLoudnessMultiplier;		//Offset: 348	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetcrouchingLoudnessMultiplier() const;
	float* M_PtrGetcrouchingLoudnessMultiplier();
	void M_SetcrouchingLoudnessMultiplier(const float& value);

	//bool	isLoudnessIncreasedByDamage;		//Offset: 352	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisLoudnessIncreasedByDamage() const;
	bool* M_PtrGetisLoudnessIncreasedByDamage();
	void M_SetisLoudnessIncreasedByDamage(const bool& value);

	//float	maxLoudnessDamage;		//Offset: 356	Size: 4	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmaxLoudnessDamage() const;
	float* M_PtrGetmaxLoudnessDamage();
	void M_SetmaxLoudnessDamage(const float& value);

	//bool	canBeReported;		//Offset: 360	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanBeReported() const;
	bool* M_PtrGetcanBeReported();
	void M_SetcanBeReported(const bool& value);

	//bool	canBeSensedByDamage;		//Offset: 361	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetcanBeSensedByDamage() const;
	bool* M_PtrGetcanBeSensedByDamage();
	void M_SetcanBeSensedByDamage(const bool& value);

	//bool	isDebugEnabled;		//Offset: 362	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

	//bool	debugShowCheckLocations;		//Offset: 363	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowCheckLocations() const;
	bool* M_PtrGetdebugShowCheckLocations();
	void M_SetdebugShowCheckLocations(const bool& value);

	//bool	debugShowPerceptibilityCoefficients;		//Offset: 364	Size: 1	Flags: Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetdebugShowPerceptibilityCoefficients() const;
	bool* M_PtrGetdebugShowPerceptibilityCoefficients();
	void M_SetdebugShowPerceptibilityCoefficients(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionStimuliSourceComponent");
		return ptr;
	}

#pragma region Functions
	bool CanBeSensed(class UPerceptionSense* perceptionSenseClass)/* const*/;

	float GetPerceptibilityAdditionalTemporaryCoefficient(class UPerceptionSense* perceptionSenseClass)/* const*/;

	float GetPerceptibilityBaseCoefficient(class UPerceptionSense* perceptionSenseClass)/* const*/;

	float GetPerceptibilityCoefficient(class UPerceptionSense* perceptionSenseClass)/* const*/;

	class AActor* GetPerceptibleActor()/* const*/;

	void GetPerceptionCheckLocations(class UPerceptionSense* perceptionSenseClass, TArray<struct FVector>* perceptionCheckLocations, struct FVector* averageLocation)/* const*/;

	EPerceptionStimuliSourceType GetStimuliSourceType()/* const*/;

	void OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);

	void SetCanBeSensed(class UPerceptionSense* perceptionSenseClass, bool newCanBeSensed);

	void SetPerceptibilityAdditionalTemporaryCoefficient(class UPerceptionSense* perceptionSenseClass, float newPerceptibilityAdditionalTemporaryCoefficient);

	void SetPerceptibilityBaseCoefficient(class UPerceptionSense* perceptionSenseClass, float newPerceptibilityBaseCoefficient);

#pragma endregion
};
};