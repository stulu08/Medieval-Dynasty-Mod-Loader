#include "../SDK.h"
#include "MovieSceneSequenceTickManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SequenceActors
// Declaration: TArray<struct FMovieSceneSequenceActorPointers> SequenceActors
TArray<struct FMovieSceneSequenceActorPointers> UMovieSceneSequenceTickManager::M_GetSequenceActors() const {
	return Read<TArray<struct FMovieSceneSequenceActorPointers>>((byte*)this + 40);
}
TArray<struct FMovieSceneSequenceActorPointers>* UMovieSceneSequenceTickManager::M_PtrGetSequenceActors() {
	return reinterpret_cast<TArray<struct FMovieSceneSequenceActorPointers>*>((byte*)this + 40);
}
void UMovieSceneSequenceTickManager::M_SetSequenceActors(const TArray<struct FMovieSceneSequenceActorPointers>& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Linker
// Declaration: class UMovieSceneEntitySystemLinker* Linker
class UMovieSceneEntitySystemLinker* UMovieSceneSequenceTickManager::M_GetLinker() const {
	return Read<class UMovieSceneEntitySystemLinker*>((byte*)this + 56);
}
class UMovieSceneEntitySystemLinker** UMovieSceneSequenceTickManager::M_PtrGetLinker() {
	return reinterpret_cast<class UMovieSceneEntitySystemLinker**>((byte*)this + 56);
}
void UMovieSceneSequenceTickManager::M_SetLinker(const class UMovieSceneEntitySystemLinker*& value) {
	Write((byte*)this + 56, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}