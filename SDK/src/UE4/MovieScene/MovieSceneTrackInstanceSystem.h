#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneTrackInstanceSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 72
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
	//class UMovieSceneTrackInstanceInstantiator*	Instantiator;		//Offset: 64	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneTrackInstanceInstantiator* M_GetInstantiator() const;
	class UMovieSceneTrackInstanceInstantiator** M_PtrGetInstantiator();
	void M_SetInstantiator(const class UMovieSceneTrackInstanceInstantiator*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};