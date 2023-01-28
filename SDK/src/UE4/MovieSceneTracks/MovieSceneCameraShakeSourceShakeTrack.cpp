#include "../SDK.h"
#include "MovieSceneCameraShakeSourceShakeTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CameraShakeSections
// Declaration: TArray<class UMovieSceneSection*> CameraShakeSections
TArray<class UMovieSceneSection*> UMovieSceneCameraShakeSourceShakeTrack::M_GetCameraShakeSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneCameraShakeSourceShakeTrack::M_PtrGetCameraShakeSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneCameraShakeSourceShakeTrack::M_SetCameraShakeSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}