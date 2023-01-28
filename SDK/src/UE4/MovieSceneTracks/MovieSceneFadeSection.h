#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneFadeSection
// Super: Class MovieScene.MovieSceneSection
// Size: 416
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneFadeSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	FloatCurve;		//Offset: 232	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetFloatCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetFloatCurve();
	void M_SetFloatCurve(const struct FMovieSceneFloatChannel& value);

	//struct FLinearColor	FadeColor;		//Offset: 392	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetFadeColor() const;
	struct FLinearColor* M_PtrGetFadeColor();
	void M_SetFadeColor(const struct FLinearColor& value);

	//unsigned char	bFadeAudio : 1;		//Offset: 408	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbFadeAudio() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbFadeAudio();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbFadeAudio(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};