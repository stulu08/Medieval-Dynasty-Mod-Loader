#include "../SDK.h"
#include "MovieSceneAudioTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AudioSections
// Declaration: TArray<class UMovieSceneSection*> AudioSections
TArray<class UMovieSceneSection*> UMovieSceneAudioTrack::M_GetAudioSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneAudioTrack::M_PtrGetAudioSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneAudioTrack::M_SetAudioSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}