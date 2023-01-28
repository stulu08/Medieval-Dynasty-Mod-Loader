#include "../SDK.h"
#include "MovieSceneParticleParameterTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieSceneParticleParameterTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneParticleParameterTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneParticleParameterTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}