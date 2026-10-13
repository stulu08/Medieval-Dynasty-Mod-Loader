#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.ChromaWrapper
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UChromaWrapper : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.ChromaWrapper");
		return ptr;
	}

#pragma region Functions
	static void CloseAnimationName(struct FString animationName);

	static void CopyKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<int32_t> KeyIDs);

	static void CopyNonZeroKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<int32_t> KeyIDs);

	static int32_t GetAnimationId(struct FString animationName);

	static int32_t GetChromaAnimation(struct FString animationName);

	static int32_t GetFrameCount(int32_t animationId);

	static int32_t InitChromaSDK();

	static bool IsChromaAnimationPlaying(struct FString animationName);

	static bool IsInitialized();

	static void LoadAnimationName(struct FString animationName);

	static void MultiplyIntensity(int32_t animationId, int32_t frameId, float Intensity);

	static void PlayChromaAnimation(struct FString animationName, bool Loop);

	static void SetKeyColorAllFrames(int32_t animationId, int32_t Key, const struct FLinearColor& colorParam);

	static void SetKeysColorAllFrames(int32_t animationId, TArray<int32_t> KeyIDs, const struct FLinearColor& colorParam);

	static void TrimEndFrames(int32_t animationId, int32_t lastFrameId);

	static int32_t UnInitChromaSDK();

#pragma endregion
};
};