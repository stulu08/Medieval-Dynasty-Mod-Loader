#include "../SDK.h"
#include "MovieSceneParticleSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ParticleKeys
// Declaration: struct FMovieSceneParticleChannel ParticleKeys
struct FMovieSceneParticleChannel UMovieSceneParticleSection::M_GetParticleKeys() const {
	return Read<struct FMovieSceneParticleChannel>((byte*)this + 232);
}
struct FMovieSceneParticleChannel* UMovieSceneParticleSection::M_PtrGetParticleKeys() {
	return reinterpret_cast<struct FMovieSceneParticleChannel*>((byte*)this + 232);
}
void UMovieSceneParticleSection::M_SetParticleKeys(const struct FMovieSceneParticleChannel& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}