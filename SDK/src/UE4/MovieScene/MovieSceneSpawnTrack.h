#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrack.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSpawnTrack
// Super: Class MovieScene.MovieSceneTrack
// Size: 176
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSpawnTrack : public UMovieSceneTrack {
public:
#pragma region Members
	//TArray<class UMovieSceneSection*>	Sections;		//Offset: 144	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
	TArray<class UMovieSceneSection*> M_GetSections() const;
	TArray<class UMovieSceneSection*>* M_PtrGetSections();
	void M_SetSections(const TArray<class UMovieSceneSection*>& value);

	//struct FGuid	ObjectGuid;		//Offset: 160	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FGuid M_GetObjectGuid() const;
	struct FGuid* M_PtrGetObjectGuid();
	void M_SetObjectGuid(const struct FGuid& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};