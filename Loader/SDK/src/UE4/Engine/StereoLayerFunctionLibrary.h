#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.StereoLayerFunctionLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerFunctionLibrary");
		return ptr;
	}

#pragma region Functions
	static void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);

	static void HideSplashScreen();

	static void SetSplashScreen(class UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);

	static void ShowSplashScreen();

#pragma endregion
};
};