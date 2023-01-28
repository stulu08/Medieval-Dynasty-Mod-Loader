#include "../SDK.h"
#include "MovieSceneSubTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieSceneSubTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 144);
}
TArray<class UMovieSceneSection*>* UMovieSceneSubTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 144);
}
void UMovieSceneSubTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 144, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}