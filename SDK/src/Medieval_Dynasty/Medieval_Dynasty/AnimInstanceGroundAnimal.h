#pragma once
#include "Structs.h"
#include "Engine/AnimInstance.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.AnimInstanceGroundAnimal
// Super: Class Engine.AnimInstance
// Size: 1312
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class UAnimInstanceGroundAnimal : public UAnimInstance {
public:
#pragma region Members
	//class AAnimalBase*	AnimalBase;		//Offset: 1008	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class AAnimalBase* M_GetAnimalBase() const;
	class AAnimalBase** M_PtrGetAnimalBase();
	void M_SetAnimalBase(const class AAnimalBase*& value);

	//float	bodyLength;		//Offset: 1016	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetbodyLength() const;
	float* M_PtrGetbodyLength();
	void M_SetbodyLength(const float& value);

	//TArray<class UAnimSequenceBase*>	animationsAttack;		//Offset: 1024	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	TArray<class UAnimSequenceBase*> M_GetanimationsAttack() const;
	TArray<class UAnimSequenceBase*>* M_PtrGetanimationsAttack();
	void M_SetanimationsAttack(const TArray<class UAnimSequenceBase*>& value);

	//float	lastAttackTime;		//Offset: 1040	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetlastAttackTime() const;
	float* M_PtrGetlastAttackTime();
	void M_SetlastAttackTime(const float& value);

	//float	timeSinceLastAttack;		//Offset: 1044	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GettimeSinceLastAttack() const;
	float* M_PtrGettimeSinceLastAttack();
	void M_SettimeSinceLastAttack(const float& value);

	//TArray<class UAnimSequenceBase*>	animationsHit;		//Offset: 1048	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	TArray<class UAnimSequenceBase*> M_GetanimationsHit() const;
	TArray<class UAnimSequenceBase*>* M_PtrGetanimationsHit();
	void M_SetanimationsHit(const TArray<class UAnimSequenceBase*>& value);

	//float	lastHitTime;		//Offset: 1064	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetlastHitTime() const;
	float* M_PtrGetlastHitTime();
	void M_SetlastHitTime(const float& value);

	//float	timeSinceLastHit;		//Offset: 1068	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GettimeSinceLastHit() const;
	float* M_PtrGettimeSinceLastHit();
	void M_SettimeSinceLastHit(const float& value);

	//TArray<float>	movementAnimationSpeeds;		//Offset: 1072	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	TArray<float> M_GetmovementAnimationSpeeds() const;
	TArray<float>* M_PtrGetmovementAnimationSpeeds();
	void M_SetmovementAnimationSpeeds(const TArray<float>& value);

	//float	movementAnimationID;		//Offset: 1088	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmovementAnimationID() const;
	float* M_PtrGetmovementAnimationID();
	void M_SetmovementAnimationID(const float& value);

	//float	movementAnimationPlayRate;		//Offset: 1092	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmovementAnimationPlayRate() const;
	float* M_PtrGetmovementAnimationPlayRate();
	void M_SetmovementAnimationPlayRate(const float& value);

	//class UCurveFloat*	speedCurve;		//Offset: 1096	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UCurveFloat* M_GetspeedCurve() const;
	class UCurveFloat** M_PtrGetspeedCurve();
	void M_SetspeedCurve(const class UCurveFloat*& value);

	//float	evaluatedCurveForwardSpeed;		//Offset: 1104	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetevaluatedCurveForwardSpeed() const;
	float* M_PtrGetevaluatedCurveForwardSpeed();
	void M_SetevaluatedCurveForwardSpeed(const float& value);

	//float	forwardSpeed;		//Offset: 1108	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetforwardSpeed() const;
	float* M_PtrGetforwardSpeed();
	void M_SetforwardSpeed(const float& value);

	//float	verticalSpeed;		//Offset: 1112	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetverticalSpeed() const;
	float* M_PtrGetverticalSpeed();
	void M_SetverticalSpeed(const float& value);

	//float	TurnSpeed;		//Offset: 1116	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetTurnSpeed() const;
	float* M_PtrGetTurnSpeed();
	void M_SetTurnSpeed(const float& value);

	//float	maxTurnSpeed;		//Offset: 1120	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmaxTurnSpeed() const;
	float* M_PtrGetmaxTurnSpeed();
	void M_SetmaxTurnSpeed(const float& value);

	//float	maxTurnAngle;		//Offset: 1124	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetmaxTurnAngle() const;
	float* M_PtrGetmaxTurnAngle();
	void M_SetmaxTurnAngle(const float& value);

	//float	turnAngle;		//Offset: 1128	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetturnAngle() const;
	float* M_PtrGetturnAngle();
	void M_SetturnAngle(const float& value);

	//bool	IsMoving;		//Offset: 1132	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetIsMoving() const;
	bool* M_PtrGetIsMoving();
	void M_SetIsMoving(const bool& value);

	//EAnimalIdleType	currentIdleType;		//Offset: 1133	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	EAnimalIdleType M_GetcurrentIdleType() const;
	EAnimalIdleType* M_PtrGetcurrentIdleType();
	void M_SetcurrentIdleType(const EAnimalIdleType& value);

	//struct FVector	lookFromOffset;		//Offset: 1136	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetlookFromOffset() const;
	struct FVector* M_PtrGetlookFromOffset();
	void M_SetlookFromOffset(const struct FVector& value);

	//float	headAngleHorizontal;		//Offset: 1148	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleHorizontal() const;
	float* M_PtrGetheadAngleHorizontal();
	void M_SetheadAngleHorizontal(const float& value);

	//float	headAngleHorizontalMin;		//Offset: 1152	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleHorizontalMin() const;
	float* M_PtrGetheadAngleHorizontalMin();
	void M_SetheadAngleHorizontalMin(const float& value);

	//float	headAngleHorizontalMax;		//Offset: 1156	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleHorizontalMax() const;
	float* M_PtrGetheadAngleHorizontalMax();
	void M_SetheadAngleHorizontalMax(const float& value);

	//float	headAngleVertical;		//Offset: 1160	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleVertical() const;
	float* M_PtrGetheadAngleVertical();
	void M_SetheadAngleVertical(const float& value);

	//float	headAngleVerticalMin;		//Offset: 1164	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleVerticalMin() const;
	float* M_PtrGetheadAngleVerticalMin();
	void M_SetheadAngleVerticalMin(const float& value);

	//float	headAngleVerticalMax;		//Offset: 1168	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleVerticalMax() const;
	float* M_PtrGetheadAngleVerticalMax();
	void M_SetheadAngleVerticalMax(const float& value);

	//float	headAngleInterpolationSpeed;		//Offset: 1172	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetheadAngleInterpolationSpeed() const;
	float* M_PtrGetheadAngleInterpolationSpeed();
	void M_SetheadAngleInterpolationSpeed(const float& value);

	//struct FVector	frontGroundCheckOffset;		//Offset: 1176	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetfrontGroundCheckOffset() const;
	struct FVector* M_PtrGetfrontGroundCheckOffset();
	void M_SetfrontGroundCheckOffset(const struct FVector& value);

	//struct FVector	rearGroundCheckOffset;		//Offset: 1188	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetrearGroundCheckOffset() const;
	struct FVector* M_PtrGetrearGroundCheckOffset();
	void M_SetrearGroundCheckOffset(const struct FVector& value);

	//float	groundCheckLength;		//Offset: 1200	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetgroundCheckLength() const;
	float* M_PtrGetgroundCheckLength();
	void M_SetgroundCheckLength(const float& value);

	//float	groundAlignStrength;		//Offset: 1204	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetgroundAlignStrength() const;
	float* M_PtrGetgroundAlignStrength();
	void M_SetgroundAlignStrength(const float& value);

	//TArray<TEnumAsByte<EObjectTypeQuery>>	groundObjectTypes;		//Offset: 1208	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	TArray<TEnumAsByte<EObjectTypeQuery>> M_GetgroundObjectTypes() const;
	TArray<TEnumAsByte<EObjectTypeQuery>>* M_PtrGetgroundObjectTypes();
	void M_SetgroundObjectTypes(const TArray<TEnumAsByte<EObjectTypeQuery>>& value);

	//float	groundAlignPitchAngle;		//Offset: 1224	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetgroundAlignPitchAngle() const;
	float* M_PtrGetgroundAlignPitchAngle();
	void M_SetgroundAlignPitchAngle(const float& value);

	//struct FVector	groundAlignLocationOffset;		//Offset: 1228	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetgroundAlignLocationOffset() const;
	struct FVector* M_PtrGetgroundAlignLocationOffset();
	void M_SetgroundAlignLocationOffset(const struct FVector& value);

	//struct FVector	groundAlignPivotOffset;		//Offset: 1240	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FVector M_GetgroundAlignPivotOffset() const;
	struct FVector* M_PtrGetgroundAlignPivotOffset();
	void M_SetgroundAlignPivotOffset(const struct FVector& value);

	//bool	isInverseKinematicsEnabled;		//Offset: 1252	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisInverseKinematicsEnabled() const;
	bool* M_PtrGetisInverseKinematicsEnabled();
	void M_SetisInverseKinematicsEnabled(const bool& value);

	//float	feetAlpha;		//Offset: 1256	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfeetAlpha() const;
	float* M_PtrGetfeetAlpha();
	void M_SetfeetAlpha(const float& value);

	//float	feetAlphaStationary;		//Offset: 1260	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfeetAlphaStationary() const;
	float* M_PtrGetfeetAlphaStationary();
	void M_SetfeetAlphaStationary(const float& value);

	//float	feetAlphaMoving;		//Offset: 1264	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetfeetAlphaMoving() const;
	float* M_PtrGetfeetAlphaMoving();
	void M_SetfeetAlphaMoving(const float& value);

	//float	pelvisOffsetZ;		//Offset: 1268	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpelvisOffsetZ() const;
	float* M_PtrGetpelvisOffsetZ();
	void M_SetpelvisOffsetZ(const float& value);

	//float	pelvisOffsetZStationary;		//Offset: 1272	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpelvisOffsetZStationary() const;
	float* M_PtrGetpelvisOffsetZStationary();
	void M_SetpelvisOffsetZStationary(const float& value);

	//float	pelvisOffsetZMoving;		//Offset: 1276	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetpelvisOffsetZMoving() const;
	float* M_PtrGetpelvisOffsetZMoving();
	void M_SetpelvisOffsetZMoving(const float& value);

	//float	chestDipUpSlopes;		//Offset: 1280	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipUpSlopes() const;
	float* M_PtrGetchestDipUpSlopes();
	void M_SetchestDipUpSlopes(const float& value);

	//float	chestDipUpSlopesStationary;		//Offset: 1284	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipUpSlopesStationary() const;
	float* M_PtrGetchestDipUpSlopesStationary();
	void M_SetchestDipUpSlopesStationary(const float& value);

	//float	chestDipUpSlopesMoving;		//Offset: 1288	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipUpSlopesMoving() const;
	float* M_PtrGetchestDipUpSlopesMoving();
	void M_SetchestDipUpSlopesMoving(const float& value);

	//float	chestDipDownSlopes;		//Offset: 1292	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipDownSlopes() const;
	float* M_PtrGetchestDipDownSlopes();
	void M_SetchestDipDownSlopes(const float& value);

	//float	chestDipDownSlopesStationary;		//Offset: 1296	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipDownSlopesStationary() const;
	float* M_PtrGetchestDipDownSlopesStationary();
	void M_SetchestDipDownSlopesStationary(const float& value);

	//float	chestDipDownSlopesMoving;		//Offset: 1300	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetchestDipDownSlopesMoving() const;
	float* M_PtrGetchestDipDownSlopesMoving();
	void M_SetchestDipDownSlopesMoving(const float& value);

	//bool	isDebugEnabled;		//Offset: 1304	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetisDebugEnabled() const;
	bool* M_PtrGetisDebugEnabled();
	void M_SetisDebugEnabled(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimInstanceGroundAnimal");
		return ptr;
	}

#pragma region Functions
	bool ShouldEnableInverseKinematics();

#pragma endregion
};
};