#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Super: Class MovieScene.MovieSceneSection
// Size: 424
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneObjectPathChannel	MaterialChannel;		//Offset: 232	Size: 192	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneObjectPathChannel M_GetMaterialChannel() const;
	struct FMovieSceneObjectPathChannel* M_PtrGetMaterialChannel();
	void M_SetMaterialChannel(const struct FMovieSceneObjectPathChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};