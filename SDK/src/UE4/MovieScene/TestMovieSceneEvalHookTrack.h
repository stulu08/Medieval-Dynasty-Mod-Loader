#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrack.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneEvalHookTrack
// Super: Class MovieScene.MovieSceneTrack
// Size: 160
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	SectionArray;		//Offset: 144	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<class UMovieSceneSection*> M_GetSectionArray() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSectionArray();
	void M_SetSectionArray(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneEvalHookTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};