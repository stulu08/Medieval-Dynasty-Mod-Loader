#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetStringLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetStringLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FString BuildString_Bool(struct FString AppendTo, struct FString Prefix, bool InBool, struct FString Suffix);

	static struct FString BuildString_Color(struct FString AppendTo, struct FString Prefix, struct FLinearColor InColor, struct FString Suffix);

	static struct FString BuildString_Float(struct FString AppendTo, struct FString Prefix, float InFloat, struct FString Suffix);

	static struct FString BuildString_Int(struct FString AppendTo, struct FString Prefix, int32_t inInt, struct FString Suffix);

	static struct FString BuildString_IntVector(struct FString AppendTo, struct FString Prefix, struct FIntVector InIntVector, struct FString Suffix);

	static struct FString BuildString_Name(struct FString AppendTo, struct FString Prefix, struct FName InName, struct FString Suffix);

	static struct FString BuildString_Object(struct FString AppendTo, struct FString Prefix, class UObject* InObj, struct FString Suffix);

	static struct FString BuildString_Rotator(struct FString AppendTo, struct FString Prefix, struct FRotator InRot, struct FString Suffix);

	static struct FString BuildString_Vector(struct FString AppendTo, struct FString Prefix, struct FVector InVector, struct FString Suffix);

	static struct FString BuildString_Vector2d(struct FString AppendTo, struct FString Prefix, struct FVector2D InVector2D, struct FString Suffix);

	static struct FString Concat_StrStr(struct FString A, struct FString B);

	static bool Contains(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd);

	static struct FString Conv_BoolToString(bool InBool);

	static struct FString Conv_ByteToString(unsigned char InByte);

	static struct FString Conv_ColorToString(struct FLinearColor InColor);

	static struct FString Conv_FloatToString(float InFloat);

	static struct FString Conv_IntPointToString(struct FIntPoint InIntPoint);

	static struct FString Conv_IntToString(int32_t inInt);

	static struct FString Conv_IntVectorToString(struct FIntVector InIntVec);

	static struct FString Conv_MatrixToString(const struct FMatrix& InMatrix);

	static struct FString Conv_NameToString(struct FName InName);

	static struct FString Conv_ObjectToString(class UObject* InObj);

	static struct FString Conv_RotatorToString(struct FRotator InRot);

	static void Conv_StringToColor(struct FString inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid);

	static float Conv_StringToFloat(struct FString inString);

	static int32_t Conv_StringToInt(struct FString inString);

	static struct FName Conv_StringToName(struct FString inString);

	static void Conv_StringToRotator(struct FString inString, struct FRotator* OutConvertedRotator, bool* OutIsValid);

	static void Conv_StringToVector(struct FString inString, struct FVector* OutConvertedVector, bool* OutIsValid);

	static void Conv_StringToVector2D(struct FString inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid);

	static struct FString Conv_TransformToString(const struct FTransform& InTrans);

	static struct FString Conv_Vector2dToString(struct FVector2D InVec);

	static struct FString Conv_VectorToString(struct FVector InVec);

	static int32_t CullArray(struct FString SourceString, TArray<struct FString>* inArray);

	static bool EndsWith(struct FString SourceString, struct FString InSuffix, TEnumAsByte<ESearchCase> SearchCase);

	static bool EqualEqual_StriStri(struct FString A, struct FString B);

	static bool EqualEqual_StrStr(struct FString A, struct FString B);

	static int32_t FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition);

	static TArray<struct FString> GetCharacterArrayFromString(struct FString SourceString);

	static int32_t GetCharacterAsNumber(struct FString SourceString, int32_t Index);

	static struct FString GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length);

	static bool IsEmpty(struct FString inString);

	static bool IsNumeric(struct FString SourceString);

	static struct FString JoinStringArray(const TArray<struct FString>& SourceArray, struct FString Separator);

	static struct FString Left(struct FString SourceString, int32_t Count);

	static struct FString LeftChop(struct FString SourceString, int32_t Count);

	static struct FString LeftPad(struct FString SourceString, int32_t ChCount);

	static int32_t Len(struct FString S);

	static bool MatchesWildcard(struct FString SourceString, struct FString Wildcard, TEnumAsByte<ESearchCase> SearchCase);

	static struct FString Mid(struct FString SourceString, int32_t Start, int32_t Count);

	static bool NotEqual_StriStri(struct FString A, struct FString B);

	static bool NotEqual_StrStr(struct FString A, struct FString B);

	static TArray<struct FString> ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings);

	static struct FString Replace(struct FString SourceString, struct FString from, struct FString to, TEnumAsByte<ESearchCase> SearchCase);

	static int32_t ReplaceInline(struct FString* SourceString, struct FString SearchText, struct FString ReplacementText, TEnumAsByte<ESearchCase> SearchCase);

	static struct FString Reverse(struct FString SourceString);

	static struct FString Right(struct FString SourceString, int32_t Count);

	static struct FString RightChop(struct FString SourceString, int32_t Count);

	static struct FString RightPad(struct FString SourceString, int32_t ChCount);

	static bool Split(struct FString SourceString, struct FString InStr, struct FString* LeftS, struct FString* RightS, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir);

	static bool StartsWith(struct FString SourceString, struct FString InPrefix, TEnumAsByte<ESearchCase> SearchCase);

	static struct FString TimeSecondsToString(float InSeconds);

	static struct FString ToLower(struct FString SourceString);

	static struct FString ToUpper(struct FString SourceString);

	static struct FString Trim(struct FString SourceString);

	static struct FString TrimTrailing(struct FString SourceString);

#pragma endregion
};
};