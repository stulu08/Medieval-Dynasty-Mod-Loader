#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetMathLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetMathLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}

#pragma region Functions
	static float Abs(float A);

	static int32_t Abs_Int(int32_t A);

	static int64_t Abs_Int64(int64_t A);

	static float Acos(float A);

	static unsigned char Add_ByteByte(unsigned char A, unsigned char B);

	static struct FDateTime Add_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static struct FDateTime Add_DateTimeTimespan(struct FDateTime A, struct FTimespan B);

	static float Add_FloatFloat(float A, float B);

	static int64_t Add_Int64Int64(int64_t A, int64_t B);

	static int32_t Add_IntInt(int32_t A, int32_t B);

	static struct FIntPoint Add_IntPointInt(struct FIntPoint A, int32_t B);

	static struct FIntPoint Add_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B);

	static struct FLinearColor Add_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);

	static struct FMatrix Add_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);

	static struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);

	static struct FTimespan Add_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static struct FVector2D Add_Vector2DFloat(struct FVector2D A, float B);

	static struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B);

	static struct FVector4 Add_Vector4Vector4(const struct FVector4& A, const struct FVector4& B);

	static struct FVector Add_VectorFloat(struct FVector A, float B);

	static struct FVector Add_VectorInt(struct FVector A, int32_t B);

	static struct FVector Add_VectorVector(struct FVector A, struct FVector B);

	static int64_t And_Int64Int64(int64_t A, int64_t B);

	static int32_t And_IntInt(int32_t A, int32_t B);

	static float Asin(float A);

	static float Atan(float A);

	static float Atan2(float Y, float X);

	static unsigned char BMax(unsigned char A, unsigned char B);

	static unsigned char BMin(unsigned char A, unsigned char B);

	static bool BooleanAND(bool A, bool B);

	static bool BooleanNAND(bool A, bool B);

	static bool BooleanNOR(bool A, bool B);

	static bool BooleanOR(bool A, bool B);

	static bool BooleanXOR(bool A, bool B);

	static void BreakColor(struct FLinearColor InColor, float* R, float* G, float* B, float* A);

	static void BreakDateTime(struct FDateTime InDateTime, int32_t* Year, int32_t* Month, int32_t* Day, int32_t* Hour, int32_t* Minute, int32_t* Second, int32_t* Millisecond);

	static void BreakFrameRate(const struct FFrameRate& InFrameRate, int32_t* Numerator, int32_t* Denominator);

	static void BreakQualifiedFrameTime(const struct FQualifiedFrameTime& InFrameTime, struct FFrameNumber* Frame, struct FFrameRate* FrameRate, float* SubFrame);

	static void BreakRandomStream(const struct FRandomStream& InRandomStream, int32_t* InitialSeed);

	static void BreakRotator(struct FRotator InRot, float* Roll, float* Pitch, float* Yaw);

	static void BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z);

	static void BreakTimespan(struct FTimespan InTimespan, int32_t* Days, int32_t* Hours, int32_t* Minutes, int32_t* Seconds, int32_t* Milliseconds);

	static void BreakTimespan2(struct FTimespan InTimespan, int32_t* Days, int32_t* Hours, int32_t* Minutes, int32_t* Seconds, int32_t* FractionNano);

	static void BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);

	static void BreakVector(struct FVector InVec, float* X, float* Y, float* Z);

	static void BreakVector2D(struct FVector2D InVec, float* X, float* Y);

	static void BreakVector4(const struct FVector4& InVec, float* X, float* Y, float* Z, float* W);

	static struct FLinearColor CInterpTo(struct FLinearColor Current, struct FLinearColor Target, float DeltaTime, float interpSpeed);

	static int32_t Clamp(int32_t Value, int32_t Min, int32_t Max);

	static float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);

	static struct FVector2D ClampAxes2D(struct FVector2D A, float MinAxisVal, float MaxAxisVal);

	static float ClampAxis(float Angle);

	static int64_t ClampInt64(int64_t Value, int64_t Min, int64_t Max);

	static struct FVector ClampVectorSize(struct FVector A, float Min, float Max);

	static bool ClassIsChildOf(class UObject* TestClass, class UObject* ParentClass);

	static struct FRotator ComposeRotators(struct FRotator A, struct FRotator B);

	static struct FTransform ComposeTransforms(const struct FTransform& A, const struct FTransform& B);

	static unsigned char Conv_BoolToByte(bool InBool);

	static float Conv_BoolToFloat(bool InBool);

	static int32_t Conv_BoolToInt(bool InBool);

	static float Conv_ByteToFloat(unsigned char InByte);

	static int32_t Conv_ByteToInt(unsigned char InByte);

	static struct FLinearColor Conv_ColorToLinearColor(struct FColor InColor);

	static struct FLinearColor Conv_FloatToLinearColor(float InFloat);

	static struct FVector Conv_FloatToVector(float InFloat);

	static unsigned char Conv_Int64ToByte(int64_t inInt);

	static int32_t Conv_Int64ToInt(int64_t inInt);

	static struct FVector2D Conv_IntPointToVector2D(struct FIntPoint InIntPoint);

	static bool Conv_IntToBool(int32_t inInt);

	static unsigned char Conv_IntToByte(int32_t inInt);

	static float Conv_IntToFloat(int32_t inInt);

	static int64_t Conv_IntToInt64(int32_t inInt);

	static struct FIntVector Conv_IntToIntVector(int32_t inInt);

	static struct FVector Conv_IntVectorToVector(const struct FIntVector& InIntVector);

	static struct FColor Conv_LinearColorToColor(struct FLinearColor InLinearColor, bool InUseSRGB);

	static struct FVector Conv_LinearColorToVector(struct FLinearColor InLinearColor);

	static struct FRotator Conv_MatrixToRotator(const struct FMatrix& InMatrix);

	static struct FTransform Conv_MatrixToTransform(const struct FMatrix& InMatrix);

	static struct FTransform Conv_RotatorToTransform(const struct FRotator& InRotator);

	static struct FVector Conv_RotatorToVector(struct FRotator InRot);

	static struct FMatrix Conv_TransformToMatrix(const struct FTransform& Transform);

	static struct FIntPoint Conv_Vector2DToIntPoint(struct FVector2D InVector2D);

	static struct FVector Conv_Vector2DToVector(struct FVector2D InVector2D, float Z);

	static struct FQuat Conv_Vector4ToQuaternion(const struct FVector4& InVec);

	static struct FRotator Conv_Vector4ToRotator(const struct FVector4& InVec);

	static struct FVector Conv_Vector4ToVector(const struct FVector4& InVector4);

	static struct FLinearColor Conv_VectorToLinearColor(struct FVector InVec);

	static struct FQuat Conv_VectorToQuaternion(struct FVector InVec);

	static struct FRotator Conv_VectorToRotator(struct FVector InVec);

	static struct FTransform Conv_VectorToTransform(struct FVector InLocation);

	static struct FVector2D Conv_VectorToVector2D(struct FVector InVector);

	static struct FTransform ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform);

	static float Cos(float A);

	static struct FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);

	static struct FVector Cross_VectorVector(struct FVector A, struct FVector B);

	static float CrossProduct2D(struct FVector2D A, struct FVector2D B);

	static bool DateTimeFromIsoString(struct FString IsoString, struct FDateTime* Result);

	static bool DateTimeFromString(struct FString DateTimeString, struct FDateTime* Result);

	static struct FDateTime DateTimeMaxValue();

	static struct FDateTime DateTimeMinValue();

	static int32_t DaysInMonth(int32_t Year, int32_t Month);

	static int32_t DaysInYear(int32_t Year);

	static float DegAcos(float A);

	static float DegAsin(float A);

	static float DegAtan(float A);

	static float DegAtan2(float Y, float X);

	static float DegCos(float A);

	static float DegreesToRadians(float A);

	static float DegSin(float A);

	static float DegTan(float A);

	static float Distance2D(struct FVector2D v1, struct FVector2D v2);

	static float DistanceSquared2D(struct FVector2D v1, struct FVector2D v2);

	static unsigned char Divide_ByteByte(unsigned char A, unsigned char B);

	static float Divide_FloatFloat(float A, float B);

	static int64_t Divide_Int64Int64(int64_t A, int64_t B);

	static int32_t Divide_IntInt(int32_t A, int32_t B);

	static struct FIntPoint Divide_IntPointInt(struct FIntPoint A, int32_t B);

	static struct FIntPoint Divide_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B);

	static struct FLinearColor Divide_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);

	static struct FTimespan Divide_TimespanFloat(struct FTimespan A, float Scalar);

	static struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B);

	static struct FVector2D Divide_Vector2DVector2D(struct FVector2D A, struct FVector2D B);

	static struct FVector4 Divide_Vector4Vector4(const struct FVector4& A, const struct FVector4& B);

	static struct FVector Divide_VectorFloat(struct FVector A, float B);

	static struct FVector Divide_VectorInt(struct FVector A, int32_t B);

	static struct FVector Divide_VectorVector(struct FVector A, struct FVector B);

	static float Dot_VectorVector(struct FVector A, struct FVector B);

	static float DotProduct2D(struct FVector2D A, struct FVector2D B);

	static float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);

	static struct FRotator DynamicWeightedMovingAverage_FRotator(struct FRotator CurrentSample, struct FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);

	static struct FVector DynamicWeightedMovingAverage_FVector(struct FVector CurrentSample, struct FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);

	static float Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32_t Steps);

	static bool Equal_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B);

	static bool EqualEqual_BoolBool(bool A, bool B);

	static bool EqualEqual_ByteByte(unsigned char A, unsigned char B);

	static bool EqualEqual_ClassClass(class UObject* A, class UObject* B);

	static bool EqualEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static bool EqualEqual_FloatFloat(float A, float B);

	static bool EqualEqual_Int64Int64(int64_t A, int64_t B);

	static bool EqualEqual_IntInt(int32_t A, int32_t B);

	static bool EqualEqual_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);

	static bool EqualEqual_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B, float Tolerance);

	static bool EqualEqual_NameName(struct FName A, struct FName B);

	static bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);

	static bool EqualEqual_QuatQuat(const struct FQuat& A, const struct FQuat& B, float Tolerance);

	static bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance);

	static bool EqualEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static bool EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);

	static bool EqualEqual_Vector2DVector2D(struct FVector2D A, struct FVector2D B, float ErrorTolerance);

	static bool EqualEqual_Vector4Vector4(const struct FVector4& A, const struct FVector4& B, float ErrorTolerance);

	static bool EqualEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance);

	static bool EqualExactly_Vector2DVector2D(struct FVector2D A, struct FVector2D B);

	static bool EqualExactly_Vector4Vector4(const struct FVector4& A, const struct FVector4& B);

	static bool EqualExactly_VectorVector(struct FVector A, struct FVector B);

	static float Exp(float A);

	static int32_t FCeil(float A);

	static int64_t FCeil64(float A);

	static float FClamp(float Value, float Min, float Max);

	static int32_t FFloor(float A);

	static int64_t FFloor64(float A);

	static struct FVector FindClosestPointOnLine(struct FVector Point, struct FVector LineOrigin, struct FVector LineDirection);

	static struct FVector FindClosestPointOnSegment(struct FVector Point, struct FVector SegmentStart, struct FVector SegmentEnd);

	static struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);

	static void FindNearestPointsOnLineSegments(struct FVector Segment1Start, struct FVector Segment1End, struct FVector Segment2Start, struct FVector Segment2End, struct FVector* Segment1Point, struct FVector* Segment2Point);

	static float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);

	static float FInterpTo(float Current, float Target, float DeltaTime, float interpSpeed);

	static float FInterpTo_Constant(float Current, float Target, float DeltaTime, float interpSpeed);

	static float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);

	static float FloatSpringInterp(float Current, float Target, struct FFloatSpringState* SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);

	static float FMax(float A, float B);

	static float FMin(float A, float B);

	static int32_t FMod(float Dividend, float Divisor, float* Remainder);

	static float Fraction(float A);

	static struct FTimespan FromDays(float Days);

	static struct FTimespan FromHours(float Hours);

	static struct FTimespan FromMilliseconds(float Milliseconds);

	static struct FTimespan FromMinutes(float Minutes);

	static struct FTimespan FromSeconds(float Seconds);

	static int32_t FTrunc(float A);

	static int64_t FTrunc64(float A);

	static struct FIntVector FTruncVector(const struct FVector& InVector);

	static float FWrap(float Value, float Min, float Max);

	static struct FVector2D GetAbs2D(struct FVector2D A);

	static float GetAbsMax2D(struct FVector2D A);

	static void GetAxes(struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z);

	static void GetAzimuthAndElevation(struct FVector InDirection, const struct FTransform& ReferenceFrame, float* Azimuth, float* Elevation);

	static struct FDateTime GetDate(struct FDateTime A);

	static int32_t GetDay(struct FDateTime A);

	static int32_t GetDayOfYear(struct FDateTime A);

	static int32_t GetDays(struct FTimespan A);

	static struct FVector GetDirectionUnitVector(struct FVector from, struct FVector to);

	static struct FTimespan GetDuration(struct FTimespan A);

	static struct FVector GetForwardVector(struct FRotator InRot);

	static int32_t GetHour(struct FDateTime A);

	static int32_t GetHour12(struct FDateTime A);

	static int32_t GetHours(struct FTimespan A);

	static float GetMax2D(struct FVector2D A);

	static float GetMaxElement(struct FVector A);

	static int32_t GetMillisecond(struct FDateTime A);

	static int32_t GetMilliseconds(struct FTimespan A);

	static float GetMin2D(struct FVector2D A);

	static float GetMinElement(struct FVector A);

	static int32_t GetMinute(struct FDateTime A);

	static int32_t GetMinutes(struct FTimespan A);

	static int32_t GetMonth(struct FDateTime A);

	static float GetPI();

	static float GetPointDistanceToLine(struct FVector Point, struct FVector LineOrigin, struct FVector LineDirection);

	static float GetPointDistanceToSegment(struct FVector Point, struct FVector SegmentStart, struct FVector SegmentEnd);

	static struct FVector GetReflectionVector(struct FVector Direction, struct FVector SurfaceNormal);

	static struct FVector GetRightVector(struct FRotator InRot);

	static struct FVector2D GetRotated2D(struct FVector2D A, float AngleDeg);

	static int32_t GetSecond(struct FDateTime A);

	static int32_t GetSeconds(struct FTimespan A);

	static void GetSlopeDegreeAngles(const struct FVector& MyRightYAxis, const struct FVector& FloorNormal, const struct FVector& upvector, float* OutSlopePitchDegreeAngle, float* OutSlopeRollDegreeAngle);

	static float GetTAU();

	static struct FTimespan GetTimeOfDay(struct FDateTime A);

	static float GetTotalDays(struct FTimespan A);

	static float GetTotalHours(struct FTimespan A);

	static float GetTotalMilliseconds(struct FTimespan A);

	static float GetTotalMinutes(struct FTimespan A);

	static float GetTotalSeconds(struct FTimespan A);

	static struct FVector GetUpVector(struct FRotator InRot);

	static struct FVector GetVectorArrayAverage(const TArray<struct FVector>& Vectors);

	static void GetYawPitchFromVector(struct FVector InVec, float* Yaw, float* Pitch);

	static int32_t GetYear(struct FDateTime A);

	static bool Greater_ByteByte(unsigned char A, unsigned char B);

	static bool Greater_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static bool Greater_FloatFloat(float A, float B);

	static bool Greater_Int64Int64(int64_t A, int64_t B);

	static bool Greater_IntInt(int32_t A, int32_t B);

	static bool Greater_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static bool GreaterEqual_ByteByte(unsigned char A, unsigned char B);

	static bool GreaterEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static bool GreaterEqual_FloatFloat(float A, float B);

	static bool GreaterEqual_Int64Int64(int64_t A, int64_t B);

	static bool GreaterEqual_IntInt(int32_t A, int32_t B);

	static bool GreaterEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B);

	static float GridSnap_Float(float Location, float GridSize);

	static struct FLinearColor HSVToRGB(float H, float S, float V, float A);

	static void HSVToRGB_Vector(struct FLinearColor HSV, struct FLinearColor* RGB);

	static struct FLinearColor HSVToRGBLinear(struct FLinearColor HSV);

	static float Hypotenuse(float Width, float Height);

	static bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);

	static bool InRange_Int64Int64(int64_t Value, int64_t Min, int64_t Max, bool InclusiveMin, bool InclusiveMax);

	static bool InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax);

	static struct FIntPoint IntPoint_Down();

	static struct FIntPoint IntPoint_Left();

	static struct FIntPoint IntPoint_One();

	static struct FIntPoint IntPoint_Right();

	static struct FIntPoint IntPoint_Up();

	static struct FIntPoint IntPoint_Zero();

	static struct FVector InverseTransformDirection(const struct FTransform& T, struct FVector Direction);

	static struct FVector InverseTransformLocation(const struct FTransform& T, struct FVector Location);

	static struct FRotator InverseTransformRotation(const struct FTransform& T, struct FRotator Rotation);

	static struct FTransform InvertTransform(const struct FTransform& T);

	static bool IsAfternoon(struct FDateTime A);

	static bool IsLeapYear(int32_t Year);

	static bool IsMorning(struct FDateTime A);

	static bool IsNearlyZero2D(const struct FVector2D& A, float Tolerance);

	static bool IsPointInBox(struct FVector Point, struct FVector BoxOrigin, struct FVector BoxExtent);

	static bool IsPointInBoxWithTransform(struct FVector Point, const struct FTransform& BoxWorldTransform, struct FVector BoxExtent);

	static bool IsZero2D(const struct FVector2D& A);

	static float Lerp(float A, float B, float Alpha);

	static bool Less_ByteByte(unsigned char A, unsigned char B);

	static bool Less_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static bool Less_FloatFloat(float A, float B);

	static bool Less_Int64Int64(int64_t A, int64_t B);

	static bool Less_IntInt(int32_t A, int32_t B);

	static bool Less_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static bool LessEqual_ByteByte(unsigned char A, unsigned char B);

	static bool LessEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static bool LessEqual_FloatFloat(float A, float B);

	static bool LessEqual_Int64Int64(int64_t A, int64_t B);

	static bool LessEqual_IntInt(int32_t A, int32_t B);

	static bool LessEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B);

	static struct FLinearColor LinearColor_Black();

	static struct FLinearColor LinearColor_Blue();

	static struct FLinearColor LinearColor_Desaturated(struct FLinearColor InColor, float InDesaturation);

	static float LinearColor_Distance(struct FLinearColor C1, struct FLinearColor C2);

	static float LinearColor_GetLuminance(struct FLinearColor InColor);

	static float LinearColor_GetMax(struct FLinearColor InColor);

	static float LinearColor_GetMin(struct FLinearColor InColor);

	static struct FLinearColor LinearColor_Gray();

	static struct FLinearColor LinearColor_Green();

	static bool LinearColor_IsNearEqual(struct FLinearColor A, struct FLinearColor B, float Tolerance);

	static struct FColor LinearColor_Quantize(struct FLinearColor InColor);

	static struct FColor LinearColor_QuantizeRound(struct FLinearColor InColor);

	static struct FLinearColor LinearColor_Red();

	static void LinearColor_Set(struct FLinearColor* InOutColor, struct FLinearColor InColor);

	static void LinearColor_SetFromHSV(struct FLinearColor* InOutColor, float H, float S, float V, float A);

	static void LinearColor_SetFromPow22(struct FLinearColor* InOutColor, const struct FColor& InColor);

	static void LinearColor_SetFromSRGB(struct FLinearColor* InOutColor, const struct FColor& InSRGB);

	static void LinearColor_SetRandomHue(struct FLinearColor* InOutColor);

	static void LinearColor_SetRGBA(struct FLinearColor* InOutColor, float R, float G, float B, float A);

	static void LinearColor_SetTemperature(struct FLinearColor* InOutColor, float InTemperature);

	static struct FLinearColor LinearColor_ToNewOpacity(struct FLinearColor InColor, float InOpacity);

	static struct FColor LinearColor_ToRGBE(struct FLinearColor InLinearColor);

	static struct FLinearColor LinearColor_Transparent();

	static struct FLinearColor LinearColor_White();

	static struct FLinearColor LinearColor_Yellow();

	static struct FLinearColor LinearColorLerp(struct FLinearColor A, struct FLinearColor B, float Alpha);

	static struct FLinearColor LinearColorLerpUsingHSV(struct FLinearColor A, struct FLinearColor B, float Alpha);

	static bool LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection);

	static bool LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, float* T, struct FVector* Intersection);

	static float Log(float A, float Base);

	static float Loge(float A);

	static struct FBox MakeBox(struct FVector Min, struct FVector Max);

	static struct FBox2D MakeBox2D(struct FVector2D Min, struct FVector2D Max);

	static struct FLinearColor MakeColor(float R, float G, float B, float A);

	static struct FDateTime MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);

	static struct FFrameRate MakeFrameRate(int32_t Numerator, int32_t Denominator);

	static struct FPlane MakePlaneFromPointAndNormal(struct FVector Point, struct FVector Normal);

	static float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);

	static struct FQualifiedFrameTime MakeQualifiedFrameTime(struct FFrameNumber Frame, struct FFrameRate FrameRate, float SubFrame);

	static struct FRandomStream MakeRandomStream(int32_t InitialSeed);

	static struct FTransform MakeRelativeTransform(const struct FTransform& A, const struct FTransform& RelativeTo);

	static struct FRotator MakeRotationFromAxes(struct FVector Forward, struct FVector Right, struct FVector Up);

	static struct FRotator MakeRotator(float Roll, float Pitch, float Yaw);

	static struct FRotator MakeRotFromX(const struct FVector& X);

	static struct FRotator MakeRotFromXY(const struct FVector& X, const struct FVector& Y);

	static struct FRotator MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);

	static struct FRotator MakeRotFromY(const struct FVector& Y);

	static struct FRotator MakeRotFromYX(const struct FVector& Y, const struct FVector& X);

	static struct FRotator MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);

	static struct FRotator MakeRotFromZ(const struct FVector& Z);

	static struct FRotator MakeRotFromZX(const struct FVector& Z, const struct FVector& X);

	static struct FRotator MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);

	static struct FTimespan MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds);

	static struct FTimespan MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano);

	static struct FTransform MakeTransform(struct FVector Location, struct FRotator Rotation, struct FVector Scale);

	static struct FVector MakeVector(float X, float Y, float Z);

	static struct FVector2D MakeVector2D(float X, float Y);

	static struct FVector4 MakeVector4(float X, float Y, float Z, float W);

	static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);

	static float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);

	static struct FMatrix Matrix_ApplyScale(const struct FMatrix& M, float Scale);

	static struct FMatrix Matrix_ConcatenateTranslation(const struct FMatrix& M, struct FVector Translation);

	static bool Matrix_ContainsNaN(const struct FMatrix& M);

	static struct FVector Matrix_GetColumn(const struct FMatrix& M, TEnumAsByte<EMatrixColumns> Column);

	static float Matrix_GetDeterminant(const struct FMatrix& M);

	static bool Matrix_GetFrustumBottomPlane(const struct FMatrix& M, struct FPlane* OutPlane);

	static bool Matrix_GetFrustumFarPlane(const struct FMatrix& M, struct FPlane* OutPlane);

	static bool Matrix_GetFrustumLeftPlane(const struct FMatrix& M, struct FPlane* OutPlane);

	static bool Matrix_GetFrustumNearPlane(const struct FMatrix& M, struct FPlane* OutPlane);

	static bool Matrix_GetFrustumRightPlane(const struct FMatrix& M, struct FPlane* OutPlane);

	static bool Matrix_GetFrustumTopPlane(const struct FMatrix& M, struct FPlane* OutPlane);

	static struct FMatrix Matrix_GetInverse(const struct FMatrix& M);

	static struct FMatrix Matrix_GetMatrixWithoutScale(const struct FMatrix& M, float Tolerance);

	static float Matrix_GetMaximumAxisScale(const struct FMatrix& M);

	static struct FVector Matrix_GetOrigin(const struct FMatrix& InMatrix);

	static struct FRotator Matrix_GetRotator(const struct FMatrix& M);

	static float Matrix_GetRotDeterminant(const struct FMatrix& M);

	static void Matrix_GetScaledAxes(const struct FMatrix& M, struct FVector* X, struct FVector* Y, struct FVector* Z);

	static struct FVector Matrix_GetScaledAxis(const struct FMatrix& M, TEnumAsByte<EAxis> Axis);

	static struct FVector Matrix_GetScaleVector(const struct FMatrix& M, float Tolerance);

	static struct FMatrix Matrix_GetTransposeAdjoint(const struct FMatrix& M);

	static struct FMatrix Matrix_GetTransposed(const struct FMatrix& M);

	static void Matrix_GetUnitAxes(const struct FMatrix& M, struct FVector* X, struct FVector* Y, struct FVector* Z);

	static struct FVector Matrix_GetUnitAxis(const struct FMatrix& M, TEnumAsByte<EAxis> Axis);

	static struct FMatrix Matrix_Identity();

	static struct FVector Matrix_InverseTransformPosition(const struct FMatrix& M, struct FVector V);

	static struct FVector Matrix_InverseTransformVector(const struct FMatrix& M, struct FVector V);

	static struct FMatrix Matrix_Mirror(const struct FMatrix& M, TEnumAsByte<EAxis> MirrorAxis, TEnumAsByte<EAxis> FlipAxis);

	static void Matrix_RemoveScaling(struct FMatrix* M, float Tolerance);

	static struct FMatrix Matrix_RemoveTranslation(const struct FMatrix& M);

	static struct FMatrix Matrix_ScaleTranslation(const struct FMatrix& M, struct FVector Scale3D);

	static void Matrix_SetAxis(struct FMatrix* M, TEnumAsByte<EAxis> Axis, struct FVector AxisVector);

	static void Matrix_SetColumn(struct FMatrix* M, TEnumAsByte<EMatrixColumns> Column, struct FVector Value);

	static void Matrix_SetOrigin(struct FMatrix* M, struct FVector NewOrigin);

	static struct FQuat Matrix_ToQuat(const struct FMatrix& M);

	static struct FVector4 Matrix_TransformPosition(const struct FMatrix& M, struct FVector V);

	static struct FVector4 Matrix_TransformVector(const struct FMatrix& M, struct FVector V);

	static struct FVector4 Matrix_TransformVector4(const struct FMatrix& M, struct FVector4 V);

	static int32_t Max(int32_t A, int32_t B);

	static int64_t MaxInt64(int64_t A, int64_t B);

	static void MaxOfByteArray(const TArray<unsigned char>& ByteArray, int32_t* IndexOfMaxValue, unsigned char* MaxValue);

	static void MaxOfFloatArray(const TArray<float>& FloatArray, int32_t* IndexOfMaxValue, float* MaxValue);

	static void MaxOfIntArray(const TArray<int32_t>& IntArray, int32_t* IndexOfMaxValue, int32_t* MaxValue);

	static int32_t Min(int32_t A, int32_t B);

	static void MinimumAreaRectangle(class UObject* WorldContextObject, const TArray<struct FVector>& InVerts, const struct FVector& SampleSurfaceNormal, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY, bool bDebugDraw);

	static int64_t MinInt64(int64_t A, int64_t B);

	static void MinOfByteArray(const TArray<unsigned char>& ByteArray, int32_t* IndexOfMinValue, unsigned char* MinValue);

	static void MinOfFloatArray(const TArray<float>& FloatArray, int32_t* IndexOfMinValue, float* MinValue);

	static void MinOfIntArray(const TArray<int32_t>& IntArray, int32_t* IndexOfMinValue, int32_t* MinValue);

	static struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal);

	static unsigned char Multiply_ByteByte(unsigned char A, unsigned char B);

	static float Multiply_FloatFloat(float A, float B);

	static int64_t Multiply_Int64Int64(int64_t A, int64_t B);

	static float Multiply_IntFloat(int32_t A, float B);

	static int32_t Multiply_IntInt(int32_t A, int32_t B);

	static struct FIntPoint Multiply_IntPointInt(struct FIntPoint A, int32_t B);

	static struct FIntPoint Multiply_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B);

	static struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor A, float B);

	static struct FLinearColor Multiply_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);

	static struct FMatrix Multiply_MatrixFloat(const struct FMatrix& A, float B);

	static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);

	static struct FQuat Multiply_QuatQuat(const struct FQuat& A, const struct FQuat& B);

	static struct FRotator Multiply_RotatorFloat(struct FRotator A, float B);

	static struct FRotator Multiply_RotatorInt(struct FRotator A, int32_t B);

	static struct FTimespan Multiply_TimespanFloat(struct FTimespan A, float Scalar);

	static struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B);

	static struct FVector2D Multiply_Vector2DVector2D(struct FVector2D A, struct FVector2D B);

	static struct FVector4 Multiply_Vector4Vector4(const struct FVector4& A, const struct FVector4& B);

	static struct FVector Multiply_VectorFloat(struct FVector A, float B);

	static struct FVector Multiply_VectorInt(struct FVector A, int32_t B);

	static struct FVector Multiply_VectorVector(struct FVector A, struct FVector B);

	static float MultiplyByPi(float Value);

	static float MultiplyMultiply_FloatFloat(float Base, float Exp);

	static bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);

	static bool NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);

	static struct FVector2D Negated2D(const struct FVector2D& A);

	static struct FRotator NegateRotator(struct FRotator A);

	static struct FVector NegateVector(struct FVector A);

	static struct FVector Normal(struct FVector A, float Tolerance);

	static struct FVector2D Normal2D(struct FVector2D A);

	static void Normalize2D(struct FVector2D* A, float Tolerance);

	static float NormalizeAxis(float Angle);

	static struct FRotator NormalizedDeltaRotator(struct FRotator A, struct FRotator B);

	static float NormalizeToRange(float Value, float RangeMin, float RangeMax);

	static struct FVector2D NormalSafe2D(struct FVector2D A, float Tolerance);

	static int32_t Not_Int(int32_t A);

	static int64_t Not_Int64(int64_t A);

	static bool Not_PreBool(bool A);

	static bool NotEqual_BoolBool(bool A, bool B);

	static bool NotEqual_ByteByte(unsigned char A, unsigned char B);

	static bool NotEqual_ClassClass(class UObject* A, class UObject* B);

	static bool NotEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static bool NotEqual_FloatFloat(float A, float B);

	static bool NotEqual_Int64Int64(int64_t A, int64_t B);

	static bool NotEqual_IntInt(int32_t A, int32_t B);

	static bool NotEqual_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B);

	static bool NotEqual_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);

	static bool NotEqual_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B, float Tolerance);

	static bool NotEqual_NameName(struct FName A, struct FName B);

	static bool NotEqual_ObjectObject(class UObject* A, class UObject* B);

	static bool NotEqual_QuatQuat(const struct FQuat& A, const struct FQuat& B, float ErrorTolerance);

	static bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance);

	static bool NotEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static bool NotEqual_Vector2DVector2D(struct FVector2D A, struct FVector2D B, float ErrorTolerance);

	static bool NotEqual_Vector4Vector4(const struct FVector4& A, const struct FVector4& B, float ErrorTolerance);

	static bool NotEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance);

	static bool NotEqualExactly_Vector2DVector2D(struct FVector2D A, struct FVector2D B);

	static bool NotEqualExactly_Vector4Vector4(const struct FVector4& A, const struct FVector4& B);

	static bool NotEqualExactly_VectorVector(struct FVector A, struct FVector B);

	static struct FDateTime Now();

	static int64_t Or_Int64Int64(int64_t A, int64_t B);

	static int32_t Or_IntInt(int32_t A, int32_t B);

	static unsigned char Percent_ByteByte(unsigned char A, unsigned char B);

	static float Percent_FloatFloat(float A, float B);

	static int32_t Percent_IntInt(int32_t A, int32_t B);

	static float PerlinNoise1D(float Value);

	static bool PointsAreCoplanar(const TArray<struct FVector>& Points, float Tolerance);

	static struct FVector ProjectPointOnToPlane(struct FVector Point, struct FVector PlaneBase, struct FVector PlaneNormal);

	static struct FVector ProjectVectorOnToPlane(struct FVector V, struct FVector PlaneNormal);

	static struct FVector ProjectVectorOnToVector(struct FVector V, struct FVector Target);

	static float Quat_AngularDistance(const struct FQuat& A, const struct FQuat& B);

	static void Quat_EnforceShortestArcWith(struct FQuat* A, const struct FQuat& B);

	static struct FVector Quat_Euler(const struct FQuat& Q);

	static struct FQuat Quat_Exp(const struct FQuat& Q);

	static float Quat_GetAngle(const struct FQuat& Q);

	static struct FVector Quat_GetAxisX(const struct FQuat& Q);

	static struct FVector Quat_GetAxisY(const struct FQuat& Q);

	static struct FVector Quat_GetAxisZ(const struct FQuat& Q);

	static struct FVector Quat_GetRotationAxis(const struct FQuat& Q);

	static struct FQuat Quat_Identity();

	static struct FQuat Quat_Inversed(const struct FQuat& Q);

	static bool Quat_IsFinite(const struct FQuat& Q);

	static bool Quat_IsIdentity(const struct FQuat& Q, float Tolerance);

	static bool Quat_IsNonFinite(const struct FQuat& Q);

	static bool Quat_IsNormalized(const struct FQuat& Q);

	static struct FQuat Quat_Log(const struct FQuat& Q);

	static struct FQuat Quat_MakeFromEuler(const struct FVector& Euler);

	static void Quat_Normalize(struct FQuat* Q, float Tolerance);

	static struct FQuat Quat_Normalized(const struct FQuat& Q, float Tolerance);

	static struct FVector Quat_RotateVector(const struct FQuat& Q, const struct FVector& V);

	static struct FRotator Quat_Rotator(const struct FQuat& Q);

	static void Quat_SetComponents(struct FQuat* Q, float X, float Y, float Z, float W);

	static void Quat_SetFromEuler(struct FQuat* Q, const struct FVector& Euler);

	static float Quat_Size(const struct FQuat& Q);

	static float Quat_SizeSquared(const struct FQuat& Q);

	static struct FVector Quat_UnrotateVector(const struct FQuat& Q, const struct FVector& V);

	static struct FVector Quat_VectorForward(const struct FQuat& Q);

	static struct FVector Quat_VectorRight(const struct FQuat& Q);

	static struct FVector Quat_VectorUp(const struct FQuat& Q);

	static float RadiansToDegrees(float A);

	static bool RandomBool();

	static bool RandomBoolFromStream(const struct FRandomStream& Stream);

	static bool RandomBoolWithWeight(float Weight);

	static bool RandomBoolWithWeightFromStream(float Weight, const struct FRandomStream& RandomStream);

	static float RandomFloat();

	static float RandomFloatFromStream(const struct FRandomStream& Stream);

	static float RandomFloatInRange(float Min, float Max);

	static float RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);

	static int32_t RandomInteger(int32_t Max);

	static int64_t RandomInteger64(int64_t Max);

	static int64_t RandomInteger64InRange(int64_t Min, int64_t Max);

	static int32_t RandomIntegerFromStream(int32_t Max, const struct FRandomStream& Stream);

	static int32_t RandomIntegerInRange(int32_t Min, int32_t Max);

	static int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, const struct FRandomStream& Stream);

	static struct FVector RandomPointInBoundingBox(struct FVector Origin, struct FVector BoxExtent);

	static struct FRotator RandomRotator(bool bRoll);

	static struct FRotator RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream);

	static struct FVector RandomUnitVector();

	static struct FVector RandomUnitVectorFromStream(const struct FRandomStream& Stream);

	static struct FVector RandomUnitVectorInConeInDegrees(struct FVector ConeDir, float ConeHalfAngleInDegrees);

	static struct FVector RandomUnitVectorInConeInDegreesFromStream(const struct FVector& ConeDir, float ConeHalfAngleInDegrees, const struct FRandomStream& Stream);

	static struct FVector RandomUnitVectorInConeInRadians(struct FVector ConeDir, float ConeHalfAngleInRadians);

	static struct FVector RandomUnitVectorInConeInRadiansFromStream(const struct FVector& ConeDir, float ConeHalfAngleInRadians, const struct FRandomStream& Stream);

	static struct FVector RandomUnitVectorInEllipticalConeInDegrees(struct FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);

	static struct FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const struct FRandomStream& Stream);

	static struct FVector RandomUnitVectorInEllipticalConeInRadians(struct FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);

	static struct FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const struct FRandomStream& Stream);

	static struct FRotator REase(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32_t Steps);

	static void ResetFloatSpringState(struct FFloatSpringState* SpringState);

	static void ResetRandomStream(const struct FRandomStream& Stream);

	static void ResetVectorSpringState(struct FVectorSpringState* SpringState);

	static struct FLinearColor RGBLinearToHSV(struct FLinearColor RGB);

	static void RGBToHSV(struct FLinearColor InColor, float* H, float* S, float* V, float* A);

	static void RGBToHSV_Vector(struct FLinearColor RGB, struct FLinearColor* HSV);

	static struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float interpSpeed);

	static struct FRotator RInterpTo_Constant(struct FRotator Current, struct FRotator Target, float DeltaTime, float interpSpeed);

	static struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath);

	static struct FVector RotateAngleAxis(struct FVector InVect, float AngleDeg, struct FVector Axis);

	static struct FRotator RotatorFromAxisAndAngle(struct FVector Axis, float Angle);

	static int32_t Round(float A);

	static int64_t Round64(float A);

	static float SafeDivide(float A, float B);

	static void SeedRandomStream(struct FRandomStream* Stream);

	static class UObject* SelectClass(class UObject* A, class UObject* B, bool bSelectA);

	static struct FLinearColor SelectColor(struct FLinearColor A, struct FLinearColor B, bool bPickA);

	static float SelectFloat(float A, float B, bool bPickA);

	static int32_t SelectInt(int32_t A, int32_t B, bool bPickA);

	static class UObject* SelectObject(class UObject* A, class UObject* B, bool bSelectA);

	static struct FRotator SelectRotator(struct FRotator A, struct FRotator B, bool bPickA);

	static struct FString SelectString(struct FString A, struct FString B, bool bPickA);

	static struct FTransform SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA);

	static struct FVector SelectVector(struct FVector A, struct FVector B, bool bPickA);

	static void Set2D(struct FVector2D* A, float X, float Y);

	static void SetRandomStreamSeed(struct FRandomStream* Stream, int32_t NewSeed);

	static float SignOfFloat(float A);

	static int32_t SignOfInteger(int32_t A);

	static int64_t SignOfInteger64(int64_t A);

	static float Sin(float A);

	static struct FVector Spherical2DToUnitCartesian(struct FVector2D A);

	static float Sqrt(float A);

	static float Square(float A);

	static unsigned char Subtract_ByteByte(unsigned char A, unsigned char B);

	static struct FTimespan Subtract_DateTimeDateTime(struct FDateTime A, struct FDateTime B);

	static struct FDateTime Subtract_DateTimeTimespan(struct FDateTime A, struct FTimespan B);

	static float Subtract_FloatFloat(float A, float B);

	static int64_t Subtract_Int64Int64(int64_t A, int64_t B);

	static int32_t Subtract_IntInt(int32_t A, int32_t B);

	static struct FIntPoint Subtract_IntPointInt(struct FIntPoint A, int32_t B);

	static struct FIntPoint Subtract_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B);

	static struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);

	static struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);

	static struct FTimespan Subtract_TimespanTimespan(struct FTimespan A, struct FTimespan B);

	static struct FVector2D Subtract_Vector2DFloat(struct FVector2D A, float B);

	static struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B);

	static struct FVector4 Subtract_Vector4Vector4(const struct FVector4& A, const struct FVector4& B);

	static struct FVector Subtract_VectorFloat(struct FVector A, float B);

	static struct FVector Subtract_VectorInt(struct FVector A, int32_t B);

	static struct FVector Subtract_VectorVector(struct FVector A, struct FVector B);

	static float Tan(float A);

	static struct FTransform TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32_t Steps);

	static bool TimespanFromString(struct FString TimespanString, struct FTimespan* Result);

	static struct FTimespan TimespanMaxValue();

	static struct FTimespan TimespanMinValue();

	static float TimespanRatio(struct FTimespan A, struct FTimespan B);

	static struct FTimespan TimespanZeroValue();

	static struct FTransform TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float interpSpeed);

	static struct FTransform TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode> InterpMode);

	static struct FDateTime Today();

	static void ToDirectionAndLength2D(struct FVector2D A, struct FVector2D* OutDir, float* OutLength);

	static struct FVector2D ToRounded2D(struct FVector2D A);

	static struct FVector2D ToSign2D(struct FVector2D A);

	static float Transform_Determinant(const struct FTransform& Transform);

	static struct FVector TransformDirection(const struct FTransform& T, struct FVector Direction);

	static struct FVector TransformLocation(const struct FTransform& T, struct FVector Location);

	static struct FRotator TransformRotation(const struct FTransform& T, struct FRotator Rotation);

	static struct FVector4 TransformVector4(const struct FMatrix& Matrix, const struct FVector4& Vec4);

	static struct FDateTime UtcNow();

	static struct FVector VEase(struct FVector A, struct FVector B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32_t Steps);

	static struct FVector2D Vector2D_One();

	static struct FVector2D Vector2D_Unit45Deg();

	static struct FVector2D Vector2D_Zero();

	static struct FVector2D Vector2DInterpTo(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float interpSpeed);

	static struct FVector2D Vector2DInterpTo_Constant(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float interpSpeed);

	static void Vector4_Assign(struct FVector4* A, const struct FVector4& InVector);

	static struct FVector4 Vector4_CrossProduct3(const struct FVector4& A, const struct FVector4& B);

	static float Vector4_DotProduct(const struct FVector4& A, const struct FVector4& B);

	static float Vector4_DotProduct3(const struct FVector4& A, const struct FVector4& B);

	static bool Vector4_IsNAN(const struct FVector4& A);

	static bool Vector4_IsNearlyZero3(const struct FVector4& A, float Tolerance);

	static bool Vector4_IsNormal3(const struct FVector4& A);

	static bool Vector4_IsUnit3(const struct FVector4& A, float SquaredLenthTolerance);

	static bool Vector4_IsZero(const struct FVector4& A);

	static struct FVector4 Vector4_MirrorByVector3(const struct FVector4& Direction, const struct FVector4& SurfaceNormal);

	static struct FVector4 Vector4_Negated(const struct FVector4& A);

	static struct FVector4 Vector4_Normal3(const struct FVector4& A, float Tolerance);

	static void Vector4_Normalize3(struct FVector4* A, float Tolerance);

	static struct FVector4 Vector4_NormalUnsafe3(const struct FVector4& A);

	static void Vector4_Set(struct FVector4* A, float X, float Y, float Z, float W);

	static float Vector4_Size(const struct FVector4& A);

	static float Vector4_Size3(const struct FVector4& A);

	static float Vector4_SizeSquared(const struct FVector4& A);

	static float Vector4_SizeSquared3(const struct FVector4& A);

	static struct FVector4 Vector4_Zero();

	static void Vector_AddBounded(struct FVector* A, struct FVector InAddVect, float InRadius);

	static void Vector_Assign(struct FVector* A, const struct FVector& InVector);

	static struct FVector Vector_Backward();

	static struct FVector Vector_BoundedToBox(struct FVector InVect, struct FVector InBoxMin, struct FVector InBoxMax);

	static struct FVector Vector_BoundedToCube(struct FVector InVect, float InRadius);

	static struct FVector Vector_ClampSize2D(struct FVector A, float Min, float Max);

	static struct FVector Vector_ClampSizeMax(struct FVector A, float Max);

	static struct FVector Vector_ClampSizeMax2D(struct FVector A, float Max);

	static struct FVector Vector_ComponentMax(struct FVector A, struct FVector B);

	static struct FVector Vector_ComponentMin(struct FVector A, struct FVector B);

	static float Vector_CosineAngle2D(struct FVector A, struct FVector B);

	static float Vector_Distance(struct FVector v1, struct FVector v2);

	static float Vector_Distance2D(struct FVector v1, struct FVector v2);

	static float Vector_Distance2DSquared(struct FVector v1, struct FVector v2);

	static float Vector_DistanceSquared(struct FVector v1, struct FVector v2);

	static struct FVector Vector_Down();

	static struct FVector Vector_Forward();

	static struct FVector Vector_GetAbs(struct FVector A);

	static float Vector_GetAbsMax(struct FVector A);

	static float Vector_GetAbsMin(struct FVector A);

	static struct FVector Vector_GetProjection(struct FVector A);

	static struct FVector Vector_GetSignVector(struct FVector A);

	static float Vector_HeadingAngle(struct FVector A);

	static bool Vector_IsNAN(const struct FVector& A);

	static bool Vector_IsNearlyZero(const struct FVector& A, float Tolerance);

	static bool Vector_IsNormal(const struct FVector& A);

	static bool Vector_IsUniform(const struct FVector& A, float Tolerance);

	static bool Vector_IsUnit(const struct FVector& A, float SquaredLenthTolerance);

	static bool Vector_IsZero(const struct FVector& A);

	static struct FVector Vector_Left();

	static struct FVector Vector_MirrorByPlane(struct FVector A, const struct FPlane& InPlane);

	static struct FVector Vector_Normal2D(struct FVector A, float Tolerance);

	static void Vector_Normalize(struct FVector* A, float Tolerance);

	static struct FVector Vector_NormalUnsafe(const struct FVector& A);

	static struct FVector Vector_One();

	static struct FVector Vector_ProjectOnToNormal(struct FVector V, struct FVector InNormal);

	static struct FVector Vector_Reciprocal(const struct FVector& A);

	static struct FVector Vector_Right();

	static void Vector_Set(struct FVector* A, float X, float Y, float Z);

	static struct FVector Vector_SnappedToGrid(struct FVector InVect, float InGridSize);

	static struct FVector Vector_ToDegrees(struct FVector A);

	static struct FVector Vector_ToRadians(struct FVector A);

	static struct FVector2D Vector_UnitCartesianToSpherical(struct FVector A);

	static void Vector_UnwindEuler(struct FVector* A);

	static struct FVector Vector_Up();

	static struct FVector Vector_Zero();

	static struct FVector VectorSpringInterp(struct FVector Current, struct FVector Target, struct FVectorSpringState* SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);

	static struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float interpSpeed);

	static struct FVector VInterpTo_Constant(struct FVector Current, struct FVector Target, float DeltaTime, float interpSpeed);

	static struct FVector VLerp(struct FVector A, struct FVector B, float Alpha);

	static float VSize(struct FVector A);

	static float VSize2D(struct FVector2D A);

	static float VSize2DSquared(struct FVector2D A);

	static float VSizeSquared(struct FVector A);

	static float VSizeXY(struct FVector A);

	static float VSizeXYSquared(struct FVector A);

	static float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight);

	static struct FRotator WeightedMovingAverage_FRotator(struct FRotator CurrentSample, struct FRotator PreviousSample, float Weight);

	static struct FVector WeightedMovingAverage_FVector(struct FVector CurrentSample, struct FVector PreviousSample, float Weight);

	static int32_t Wrap(int32_t Value, int32_t Min, int32_t Max);

	static int64_t Xor_Int64Int64(int64_t A, int64_t B);

	static int32_t Xor_IntInt(int32_t A, int32_t B);

#pragma endregion
};
};