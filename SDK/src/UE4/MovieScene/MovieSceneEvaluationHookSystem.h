#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneEvaluationHookSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 144
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
	//TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>	PendingEventsByRootInstance;		//Offset: 64	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> M_GetPendingEventsByRootInstance() const;
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>* M_PtrGetPendingEventsByRootInstance();
	void M_SetPendingEventsByRootInstance(const TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEvaluationHookSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};