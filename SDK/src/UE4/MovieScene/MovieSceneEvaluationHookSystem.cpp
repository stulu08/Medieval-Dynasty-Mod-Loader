#include "../SDK.h"
#include "MovieSceneEvaluationHookSystem.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PendingEventsByRootInstance
// Declaration: TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance
TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> UMovieSceneEvaluationHookSystem::M_GetPendingEventsByRootInstance() const {
	return Read<TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>>((byte*)this + 64);
}
TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>* UMovieSceneEvaluationHookSystem::M_PtrGetPendingEventsByRootInstance() {
	return reinterpret_cast<TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>*>((byte*)this + 64);
}
void UMovieSceneEvaluationHookSystem::M_SetPendingEventsByRootInstance(const TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}