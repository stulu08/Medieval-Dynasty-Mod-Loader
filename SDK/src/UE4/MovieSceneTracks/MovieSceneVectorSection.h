#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneVectorSection
// Super: Class MovieScene.MovieSceneSection
// Size: 888
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneVectorSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	Curves[4];		//Offset: 240	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetCurves() const;
	struct FMovieSceneFloatChannel* M_PtrGetCurves();
	void M_SetCurves(const struct FMovieSceneFloatChannel& value);

	//int32_t	ChannelsUsed;		//Offset: 880	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t M_GetChannelsUsed() const;
	int32_t* M_PtrGetChannelsUsed();
	void M_SetChannelsUsed(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};