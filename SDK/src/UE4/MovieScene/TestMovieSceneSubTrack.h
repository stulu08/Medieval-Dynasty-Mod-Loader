#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSubTrack.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneSubTrack
// Super: Class MovieScene.MovieSceneSubTrack
// Size: 176
// Size inherited: 160
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	SectionArray;		//Offset: 160	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<class UMovieSceneSection*> M_GetSectionArray() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSectionArray();
	void M_SetSectionArray(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};