#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetTextLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetTextLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FText AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode);

	static struct FText AsCurrency_Integer(int32_t Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode);

	static struct FText AsCurrencyBase(int32_t BaseValue, struct FString CurrencyCode);

	static struct FText AsDate_DateTime(const struct FDateTime& InDateTime);

	static struct FText AsDateTime_DateTime(const struct FDateTime& In);

	static struct FText AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);

	static struct FText AsTime_DateTime(const struct FDateTime& In);

	static struct FText AsTimespan_Timespan(const struct FTimespan& InTimespan);

	static struct FText AsTimeZoneDate_DateTime(const struct FDateTime& InDateTime, struct FString InTimeZone);

	static struct FText AsTimeZoneDateTime_DateTime(const struct FDateTime& InDateTime, struct FString InTimeZone);

	static struct FText AsTimeZoneTime_DateTime(const struct FDateTime& InDateTime, struct FString InTimeZone);

	static struct FText Conv_BoolToText(bool InBool);

	static struct FText Conv_ByteToText(unsigned char Value);

	static struct FText Conv_ColorToText(struct FLinearColor InColor);

	static struct FText Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);

	static struct FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);

	static struct FText Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);

	static struct FText Conv_NameToText(struct FName InName);

	static struct FText Conv_ObjectToText(class UObject* InObj);

	static struct FText Conv_RotatorToText(struct FRotator InRot);

	static struct FText Conv_StringToText(struct FString inString);

	static struct FString Conv_TextToString(const struct FText& InText);

	static struct FText Conv_TransformToText(const struct FTransform& InTrans);

	static struct FText Conv_Vector2dToText(struct FVector2D InVec);

	static struct FText Conv_VectorToText(struct FVector InVec);

	static bool EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);

	static bool EqualEqual_TextText(const struct FText& A, const struct FText& B);

	static bool FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText* OutText);

	static struct FText Format(struct FText InPattern, TArray<struct FFormatArgumentData> InArgs);

	static struct FText GetEmptyText();

	static void IsPolyglotDataValid(const struct FPolyglotTextData& PolyglotData, bool* IsValid, struct FText* ErrorMessage);

	static bool NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);

	static bool NotEqual_TextText(const struct FText& A, const struct FText& B);

	static struct FText PolyglotDataToText(const struct FPolyglotTextData& PolyglotData);

	static bool StringTableIdAndKeyFromText(struct FText Text, struct FName* OutTableId, struct FString* OutKey);

	static struct FText TextFromStringTable(struct FName TableId, struct FString Key);

	static bool TextIsCultureInvariant(const struct FText& InText);

	static bool TextIsEmpty(const struct FText& InText);

	static bool TextIsFromStringTable(const struct FText& Text);

	static bool TextIsTransient(const struct FText& InText);

	static struct FText TextToLower(const struct FText& InText);

	static struct FText TextToUpper(const struct FText& InText);

	static struct FText TextTrimPreceding(const struct FText& InText);

	static struct FText TextTrimPrecedingAndTrailing(const struct FText& InText);

	static struct FText TextTrimTrailing(const struct FText& InText);

#pragma endregion
};
};