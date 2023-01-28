#include "../SDK.h"
#include "MovieSceneParticleTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ParticleSections
// Declaration: TArray<class UMovieSceneSection*> ParticleSections
TArray<class UMovieSceneSection*> UMovieSceneParticleTrack::M_GetParticleSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneParticleTrack::M_PtrGetParticleSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneParticleTrack::M_SetParticleSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}