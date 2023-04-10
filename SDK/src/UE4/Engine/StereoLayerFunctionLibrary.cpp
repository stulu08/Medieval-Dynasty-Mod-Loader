#include "../SDK.h"
#include "StereoLayerFunctionLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.StereoLayerFunctionLibrary.EnableAutoLoadingSplashScreen
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: InAutoShowEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(bool InAutoShowEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StereoLayerFunctionLibrary.EnableAutoLoadingSplashScreen");

	struct UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Params {
		bool InAutoShowEnabled;			//Offset: 0 | ElementSize: 1
	};
	UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Params params;
	params.InAutoShowEnabled = InAutoShowEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StereoLayerFunctionLibrary.HideSplashScreen
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UStereoLayerFunctionLibrary::HideSplashScreen() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StereoLayerFunctionLibrary.HideSplashScreen");

	struct UStereoLayerFunctionLibrary_HideSplashScreen_Params {
	};
	UStereoLayerFunctionLibrary_HideSplashScreen_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StereoLayerFunctionLibrary.SetSplashScreen
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Texture	Type: class UTexture*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Scale	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Offset	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowLoadingMovie	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bShowOnSet	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UStereoLayerFunctionLibrary::SetSplashScreen(class UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StereoLayerFunctionLibrary.SetSplashScreen");

	struct UStereoLayerFunctionLibrary_SetSplashScreen_Params {
		class UTexture* Texture;			//Offset: 0 | ElementSize: 8
		struct FVector2D Scale;			//Offset: 8 | ElementSize: 8
		struct FVector Offset;			//Offset: 16 | ElementSize: 12
		bool bShowLoadingMovie;			//Offset: 28 | ElementSize: 1
		bool bShowOnSet;			//Offset: 29 | ElementSize: 1
	};
	UStereoLayerFunctionLibrary_SetSplashScreen_Params params;
	params.Texture = Texture;
	params.Scale = Scale;
	params.Offset = Offset;
	params.bShowLoadingMovie = bShowLoadingMovie;
	params.bShowOnSet = bShowOnSet;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.StereoLayerFunctionLibrary.ShowSplashScreen
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UStereoLayerFunctionLibrary::ShowSplashScreen() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StereoLayerFunctionLibrary.ShowSplashScreen");

	struct UStereoLayerFunctionLibrary_ShowSplashScreen_Params {
	};
	UStereoLayerFunctionLibrary_ShowSplashScreen_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}