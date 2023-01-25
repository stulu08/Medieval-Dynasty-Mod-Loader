#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "MovieScene/MovieSceneSequence.h"
/////////////////////////////////////////////
// Class UMG.WidgetAnimation
// Super: Class MovieScene.MovieSceneSequence
// Size: 144
// Size inherited: 96
/////////////////////////////////////////////
namespace UE4 {
class UWidgetAnimation : public UMovieSceneSequence {
public:
#pragma region Members
	//class UMovieScene*	MovieScene;		//Offset: 96	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMovieScene* M_GetMovieScene() const;
	class UMovieScene** M_PtrGetMovieScene();
	void M_SetMovieScene(const class UMovieScene*& value);

	//TArray<struct FWidgetAnimationBinding>	AnimationBindings;		//Offset: 104	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FWidgetAnimationBinding> M_GetAnimationBindings() const;
	TArray<struct FWidgetAnimationBinding>* M_PtrGetAnimationBindings();
	void M_SetAnimationBindings(const TArray<struct FWidgetAnimationBinding>& value);

	//bool	bLegacyFinishOnStop;		//Offset: 120	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbLegacyFinishOnStop() const;
	bool* M_PtrGetbLegacyFinishOnStop();
	void M_SetbLegacyFinishOnStop(const bool& value);

	//struct FString	DisplayLabel;		//Offset: 128	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FString M_GetDisplayLabel() const;
	struct FString* M_PtrGetDisplayLabel();
	void M_SetDisplayLabel(const struct FString& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}

#pragma region Functions
	void BindToAnimationFinished(class UUserWidget* Widget, struct FScriptDelegate Delegate);

	void BindToAnimationStarted(class UUserWidget* Widget, struct FScriptDelegate Delegate);

	float GetEndTime() const;

	float GetStartTime() const;

	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);

	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);

	void UnbindFromAnimationFinished(class UUserWidget* Widget, struct FScriptDelegate Delegate);

	void UnbindFromAnimationStarted(class UUserWidget* Widget, struct FScriptDelegate Delegate);

#pragma endregion
};
};