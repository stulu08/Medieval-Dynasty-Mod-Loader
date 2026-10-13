#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePropertySystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 88
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePropertySystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
	//class UMovieScenePropertyInstantiatorSystem*	InstantiatorSystem;		//Offset: 72	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMovieScenePropertyInstantiatorSystem* M_GetInstantiatorSystem() const;
	class UMovieScenePropertyInstantiatorSystem** M_PtrGetInstantiatorSystem();
	void M_SetInstantiatorSystem(const class UMovieScenePropertyInstantiatorSystem*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertySystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};