#include "../SDK.h"
#include "PerceptionStimuliSourceComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of shouldHandleStimuliSourceComponentRegistration
// Declaration: bool shouldHandleStimuliSourceComponentRegistration
bool UPerceptionStimuliSourceComponent::M_GetshouldHandleStimuliSourceComponentRegistration() const {
	return Read<bool>((byte*)this + 272);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetshouldHandleStimuliSourceComponentRegistration() {
	return reinterpret_cast<bool*>((byte*)this + 272);
}
void UPerceptionStimuliSourceComponent::M_SetshouldHandleStimuliSourceComponentRegistration(const bool& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of stimuliSourceType
// Declaration: EPerceptionStimuliSourceType stimuliSourceType
EPerceptionStimuliSourceType UPerceptionStimuliSourceComponent::M_GetstimuliSourceType() const {
	return Read<EPerceptionStimuliSourceType>((byte*)this + 273);
}
EPerceptionStimuliSourceType* UPerceptionStimuliSourceComponent::M_PtrGetstimuliSourceType() {
	return reinterpret_cast<EPerceptionStimuliSourceType*>((byte*)this + 273);
}
void UPerceptionStimuliSourceComponent::M_SetstimuliSourceType(const EPerceptionStimuliSourceType& value) {
	Write((byte*)this + 273, value);
}
// Member Getter and Setter of skinnedMeshComponentName
// Declaration: struct FName skinnedMeshComponentName
struct FName UPerceptionStimuliSourceComponent::M_GetskinnedMeshComponentName() const {
	return Read<struct FName>((byte*)this + 276);
}
struct FName* UPerceptionStimuliSourceComponent::M_PtrGetskinnedMeshComponentName() {
	return reinterpret_cast<struct FName*>((byte*)this + 276);
}
void UPerceptionStimuliSourceComponent::M_SetskinnedMeshComponentName(const struct FName& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of canBeSensedBySight
// Declaration: bool canBeSensedBySight
bool UPerceptionStimuliSourceComponent::M_GetcanBeSensedBySight() const {
	return Read<bool>((byte*)this + 284);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetcanBeSensedBySight() {
	return reinterpret_cast<bool*>((byte*)this + 284);
}
void UPerceptionStimuliSourceComponent::M_SetcanBeSensedBySight(const bool& value) {
	Write((byte*)this + 284, value);
}
// Member Getter and Setter of visibilityBaseCoefficient
// Declaration: float visibilityBaseCoefficient
float UPerceptionStimuliSourceComponent::M_GetvisibilityBaseCoefficient() const {
	return Read<float>((byte*)this + 288);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetvisibilityBaseCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 288);
}
void UPerceptionStimuliSourceComponent::M_SetvisibilityBaseCoefficient(const float& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of sightCheckBoneNames
// Declaration: TArray<struct FName> sightCheckBoneNames
TArray<struct FName> UPerceptionStimuliSourceComponent::M_GetsightCheckBoneNames() const {
	return Read<TArray<struct FName>>((byte*)this + 296);
}
TArray<struct FName>* UPerceptionStimuliSourceComponent::M_PtrGetsightCheckBoneNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 296);
}
void UPerceptionStimuliSourceComponent::M_SetsightCheckBoneNames(const TArray<struct FName>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of isVisibilityIncreasedBySpeed
// Declaration: bool isVisibilityIncreasedBySpeed
bool UPerceptionStimuliSourceComponent::M_GetisVisibilityIncreasedBySpeed() const {
	return Read<bool>((byte*)this + 312);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetisVisibilityIncreasedBySpeed() {
	return reinterpret_cast<bool*>((byte*)this + 312);
}
void UPerceptionStimuliSourceComponent::M_SetisVisibilityIncreasedBySpeed(const bool& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of maxVisibilityIncreaseSpeed
// Declaration: float maxVisibilityIncreaseSpeed
float UPerceptionStimuliSourceComponent::M_GetmaxVisibilityIncreaseSpeed() const {
	return Read<float>((byte*)this + 316);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetmaxVisibilityIncreaseSpeed() {
	return reinterpret_cast<float*>((byte*)this + 316);
}
void UPerceptionStimuliSourceComponent::M_SetmaxVisibilityIncreaseSpeed(const float& value) {
	Write((byte*)this + 316, value);
}
// Member Getter and Setter of isVisibilityDecreasedByCrouching
// Declaration: bool isVisibilityDecreasedByCrouching
bool UPerceptionStimuliSourceComponent::M_GetisVisibilityDecreasedByCrouching() const {
	return Read<bool>((byte*)this + 320);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetisVisibilityDecreasedByCrouching() {
	return reinterpret_cast<bool*>((byte*)this + 320);
}
void UPerceptionStimuliSourceComponent::M_SetisVisibilityDecreasedByCrouching(const bool& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of crouchingVisibilityMultiplier
// Declaration: float crouchingVisibilityMultiplier
float UPerceptionStimuliSourceComponent::M_GetcrouchingVisibilityMultiplier() const {
	return Read<float>((byte*)this + 324);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetcrouchingVisibilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 324);
}
void UPerceptionStimuliSourceComponent::M_SetcrouchingVisibilityMultiplier(const float& value) {
	Write((byte*)this + 324, value);
}
// Member Getter and Setter of canBeSensedByHearing
// Declaration: bool canBeSensedByHearing
bool UPerceptionStimuliSourceComponent::M_GetcanBeSensedByHearing() const {
	return Read<bool>((byte*)this + 328);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetcanBeSensedByHearing() {
	return reinterpret_cast<bool*>((byte*)this + 328);
}
void UPerceptionStimuliSourceComponent::M_SetcanBeSensedByHearing(const bool& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of loudnessBaseCoefficient
// Declaration: float loudnessBaseCoefficient
float UPerceptionStimuliSourceComponent::M_GetloudnessBaseCoefficient() const {
	return Read<float>((byte*)this + 332);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetloudnessBaseCoefficient() {
	return reinterpret_cast<float*>((byte*)this + 332);
}
void UPerceptionStimuliSourceComponent::M_SetloudnessBaseCoefficient(const float& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of isLoudnessIncreasedBySpeed
// Declaration: bool isLoudnessIncreasedBySpeed
bool UPerceptionStimuliSourceComponent::M_GetisLoudnessIncreasedBySpeed() const {
	return Read<bool>((byte*)this + 336);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetisLoudnessIncreasedBySpeed() {
	return reinterpret_cast<bool*>((byte*)this + 336);
}
void UPerceptionStimuliSourceComponent::M_SetisLoudnessIncreasedBySpeed(const bool& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of maxLoudnessIncreaseSpeed
// Declaration: float maxLoudnessIncreaseSpeed
float UPerceptionStimuliSourceComponent::M_GetmaxLoudnessIncreaseSpeed() const {
	return Read<float>((byte*)this + 340);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetmaxLoudnessIncreaseSpeed() {
	return reinterpret_cast<float*>((byte*)this + 340);
}
void UPerceptionStimuliSourceComponent::M_SetmaxLoudnessIncreaseSpeed(const float& value) {
	Write((byte*)this + 340, value);
}
// Member Getter and Setter of isLoudnessDecreasedByCrouching
// Declaration: bool isLoudnessDecreasedByCrouching
bool UPerceptionStimuliSourceComponent::M_GetisLoudnessDecreasedByCrouching() const {
	return Read<bool>((byte*)this + 344);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetisLoudnessDecreasedByCrouching() {
	return reinterpret_cast<bool*>((byte*)this + 344);
}
void UPerceptionStimuliSourceComponent::M_SetisLoudnessDecreasedByCrouching(const bool& value) {
	Write((byte*)this + 344, value);
}
// Member Getter and Setter of crouchingLoudnessMultiplier
// Declaration: float crouchingLoudnessMultiplier
float UPerceptionStimuliSourceComponent::M_GetcrouchingLoudnessMultiplier() const {
	return Read<float>((byte*)this + 348);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetcrouchingLoudnessMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 348);
}
void UPerceptionStimuliSourceComponent::M_SetcrouchingLoudnessMultiplier(const float& value) {
	Write((byte*)this + 348, value);
}
// Member Getter and Setter of isLoudnessIncreasedByDamage
// Declaration: bool isLoudnessIncreasedByDamage
bool UPerceptionStimuliSourceComponent::M_GetisLoudnessIncreasedByDamage() const {
	return Read<bool>((byte*)this + 352);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetisLoudnessIncreasedByDamage() {
	return reinterpret_cast<bool*>((byte*)this + 352);
}
void UPerceptionStimuliSourceComponent::M_SetisLoudnessIncreasedByDamage(const bool& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of maxLoudnessDamage
// Declaration: float maxLoudnessDamage
float UPerceptionStimuliSourceComponent::M_GetmaxLoudnessDamage() const {
	return Read<float>((byte*)this + 356);
}
float* UPerceptionStimuliSourceComponent::M_PtrGetmaxLoudnessDamage() {
	return reinterpret_cast<float*>((byte*)this + 356);
}
void UPerceptionStimuliSourceComponent::M_SetmaxLoudnessDamage(const float& value) {
	Write((byte*)this + 356, value);
}
// Member Getter and Setter of canBeReported
// Declaration: bool canBeReported
bool UPerceptionStimuliSourceComponent::M_GetcanBeReported() const {
	return Read<bool>((byte*)this + 360);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetcanBeReported() {
	return reinterpret_cast<bool*>((byte*)this + 360);
}
void UPerceptionStimuliSourceComponent::M_SetcanBeReported(const bool& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of canBeSensedByDamage
// Declaration: bool canBeSensedByDamage
bool UPerceptionStimuliSourceComponent::M_GetcanBeSensedByDamage() const {
	return Read<bool>((byte*)this + 361);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetcanBeSensedByDamage() {
	return reinterpret_cast<bool*>((byte*)this + 361);
}
void UPerceptionStimuliSourceComponent::M_SetcanBeSensedByDamage(const bool& value) {
	Write((byte*)this + 361, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UPerceptionStimuliSourceComponent::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 362);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 362);
}
void UPerceptionStimuliSourceComponent::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 362, value);
}
// Member Getter and Setter of debugShowCheckLocations
// Declaration: bool debugShowCheckLocations
bool UPerceptionStimuliSourceComponent::M_GetdebugShowCheckLocations() const {
	return Read<bool>((byte*)this + 363);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetdebugShowCheckLocations() {
	return reinterpret_cast<bool*>((byte*)this + 363);
}
void UPerceptionStimuliSourceComponent::M_SetdebugShowCheckLocations(const bool& value) {
	Write((byte*)this + 363, value);
}
// Member Getter and Setter of debugShowPerceptibilityCoefficients
// Declaration: bool debugShowPerceptibilityCoefficients
bool UPerceptionStimuliSourceComponent::M_GetdebugShowPerceptibilityCoefficients() const {
	return Read<bool>((byte*)this + 364);
}
bool* UPerceptionStimuliSourceComponent::M_PtrGetdebugShowPerceptibilityCoefficients() {
	return reinterpret_cast<bool*>((byte*)this + 364);
}
void UPerceptionStimuliSourceComponent::M_SetdebugShowPerceptibilityCoefficients(const bool& value) {
	Write((byte*)this + 364, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.CanBeSensed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UPerceptionStimuliSourceComponent::CanBeSensed(class UPerceptionSense* perceptionSenseClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.CanBeSensed");

	struct UPerceptionStimuliSourceComponent_CanBeSensed_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UPerceptionStimuliSourceComponent_CanBeSensed_Params params;
	params.perceptionSenseClass = perceptionSenseClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibilityAdditionalTemporaryCoefficient
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPerceptionStimuliSourceComponent::GetPerceptibilityAdditionalTemporaryCoefficient(class UPerceptionSense* perceptionSenseClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibilityAdditionalTemporaryCoefficient");

	struct UPerceptionStimuliSourceComponent_GetPerceptibilityAdditionalTemporaryCoefficient_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UPerceptionStimuliSourceComponent_GetPerceptibilityAdditionalTemporaryCoefficient_Params params;
	params.perceptionSenseClass = perceptionSenseClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibilityBaseCoefficient
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPerceptionStimuliSourceComponent::GetPerceptibilityBaseCoefficient(class UPerceptionSense* perceptionSenseClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibilityBaseCoefficient");

	struct UPerceptionStimuliSourceComponent_GetPerceptibilityBaseCoefficient_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UPerceptionStimuliSourceComponent_GetPerceptibilityBaseCoefficient_Params params;
	params.perceptionSenseClass = perceptionSenseClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibilityCoefficient
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UPerceptionStimuliSourceComponent::GetPerceptibilityCoefficient(class UPerceptionSense* perceptionSenseClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibilityCoefficient");

	struct UPerceptionStimuliSourceComponent_GetPerceptibilityCoefficient_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UPerceptionStimuliSourceComponent_GetPerceptibilityCoefficient_Params params;
	params.perceptionSenseClass = perceptionSenseClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibleActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UPerceptionStimuliSourceComponent::GetPerceptibleActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptibleActor");

	struct UPerceptionStimuliSourceComponent_GetPerceptibleActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UPerceptionStimuliSourceComponent_GetPerceptibleActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptionCheckLocations
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: perceptionCheckLocations	Type: TArray<struct FVector>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: averageLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionStimuliSourceComponent::GetPerceptionCheckLocations(class UPerceptionSense* perceptionSenseClass, TArray<struct FVector>* perceptionCheckLocations, struct FVector* averageLocation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetPerceptionCheckLocations");

	struct UPerceptionStimuliSourceComponent_GetPerceptionCheckLocations_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		TArray<struct FVector> perceptionCheckLocations;			//Offset: 8 | ElementSize: 16
		struct FVector averageLocation;			//Offset: 24 | ElementSize: 12
	};
	UPerceptionStimuliSourceComponent_GetPerceptionCheckLocations_Params params;
	params.perceptionSenseClass = perceptionSenseClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (perceptionCheckLocations != nullptr)
		*perceptionCheckLocations = params.perceptionCheckLocations;
	if (averageLocation != nullptr)
		*averageLocation = params.averageLocation;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetStimuliSourceType
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EPerceptionStimuliSourceType	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EPerceptionStimuliSourceType UPerceptionStimuliSourceComponent::GetStimuliSourceType()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.GetStimuliSourceType");

	struct UPerceptionStimuliSourceComponent_GetStimuliSourceType_Params {
		EPerceptionStimuliSourceType ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UPerceptionStimuliSourceComponent_GetStimuliSourceType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.OnTakeAnyDamage
// Flags: Final, Native, Protected
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Damage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InstigatedBy	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionStimuliSourceComponent::OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.OnTakeAnyDamage");

	struct UPerceptionStimuliSourceComponent_OnTakeAnyDamage_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float Damage;			//Offset: 8 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 16 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 24 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 32 | ElementSize: 8
	};
	UPerceptionStimuliSourceComponent_OnTakeAnyDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.SetCanBeSensed
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newCanBeSensed	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionStimuliSourceComponent::SetCanBeSensed(class UPerceptionSense* perceptionSenseClass, bool newCanBeSensed) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.SetCanBeSensed");

	struct UPerceptionStimuliSourceComponent_SetCanBeSensed_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		bool newCanBeSensed;			//Offset: 8 | ElementSize: 1
	};
	UPerceptionStimuliSourceComponent_SetCanBeSensed_Params params;
	params.perceptionSenseClass = perceptionSenseClass;
	params.newCanBeSensed = newCanBeSensed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.SetPerceptibilityAdditionalTemporaryCoefficient
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newPerceptibilityAdditionalTemporaryCoefficient	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionStimuliSourceComponent::SetPerceptibilityAdditionalTemporaryCoefficient(class UPerceptionSense* perceptionSenseClass, float newPerceptibilityAdditionalTemporaryCoefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.SetPerceptibilityAdditionalTemporaryCoefficient");

	struct UPerceptionStimuliSourceComponent_SetPerceptibilityAdditionalTemporaryCoefficient_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		float newPerceptibilityAdditionalTemporaryCoefficient;			//Offset: 8 | ElementSize: 4
	};
	UPerceptionStimuliSourceComponent_SetPerceptibilityAdditionalTemporaryCoefficient_Params params;
	params.perceptionSenseClass = perceptionSenseClass;
	params.newPerceptibilityAdditionalTemporaryCoefficient = newPerceptibilityAdditionalTemporaryCoefficient;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionStimuliSourceComponent.SetPerceptibilityBaseCoefficient
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: perceptionSenseClass	Type: class UPerceptionSense*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newPerceptibilityBaseCoefficient	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionStimuliSourceComponent::SetPerceptibilityBaseCoefficient(class UPerceptionSense* perceptionSenseClass, float newPerceptibilityBaseCoefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionStimuliSourceComponent.SetPerceptibilityBaseCoefficient");

	struct UPerceptionStimuliSourceComponent_SetPerceptibilityBaseCoefficient_Params {
		class UPerceptionSense* perceptionSenseClass;			//Offset: 0 | ElementSize: 8
		float newPerceptibilityBaseCoefficient;			//Offset: 8 | ElementSize: 4
	};
	UPerceptionStimuliSourceComponent_SetPerceptibilityBaseCoefficient_Params params;
	params.perceptionSenseClass = perceptionSenseClass;
	params.newPerceptibilityBaseCoefficient = newPerceptibilityBaseCoefficient;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}