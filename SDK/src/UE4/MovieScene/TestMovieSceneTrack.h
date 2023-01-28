#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrack.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneTrack
// Super: Class MovieScene.MovieSceneTrack
// Size: 176
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneTrack : public UMovieSceneTrack {
public:
#pragma region Members
	//bool	bHighPassFilter;		//Offset: 152	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbHighPassFilter() const;
	bool* M_PtrGetbHighPassFilter();
	void M_SetbHighPassFilter(const bool& value);

	//TArray<class UMovieSceneSection*>	SectionArray;		//Offset: 160	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<class UMovieSceneSection*> M_GetSectionArray() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSectionArray();
	void M_SetSectionArray(const TArray<class UMovieSceneSection*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};