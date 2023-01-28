#include "../SDK.h"
#include "MovieSceneCameraShakeSourceTriggerTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieSceneCameraShakeSourceTriggerTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneCameraShakeSourceTriggerTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneCameraShakeSourceTriggerTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}