#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneNameableTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Super: Class MovieScene.MovieSceneNameableTrack
// Size: 232
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	AnimationSections;		//Offset: 152	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<class UMovieSceneSection*> M_GetAnimationSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetAnimationSections();
	void M_SetAnimationSections(const TArray<class UMovieSceneSection*>& value);

	//bool	bUseLegacySectionIndexBlend;		//Offset: 168	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUseLegacySectionIndexBlend() const;
	bool* M_PtrGetbUseLegacySectionIndexBlend();
	void M_SetbUseLegacySectionIndexBlend(const bool& value);

	//struct FMovieSceneSkeletalAnimRootMotionTrackParams	RootMotionParams;		//Offset: 176	Size: 48	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneSkeletalAnimRootMotionTrackParams M_GetRootMotionParams() const;
	struct FMovieSceneSkeletalAnimRootMotionTrackParams* M_PtrGetRootMotionParams();
	void M_SetRootMotionParams(const struct FMovieSceneSkeletalAnimRootMotionTrackParams& value);

	//bool	bBlendFirstChildOfRoot;		//Offset: 224	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbBlendFirstChildOfRoot() const;
	bool* M_PtrGetbBlendFirstChildOfRoot();
	void M_SetbBlendFirstChildOfRoot(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};