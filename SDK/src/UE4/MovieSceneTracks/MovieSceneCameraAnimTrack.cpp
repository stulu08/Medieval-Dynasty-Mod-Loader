#include "../SDK.h"
#include "MovieSceneCameraAnimTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CameraAnimSections
// Declaration: TArray<class UMovieSceneSection*> CameraAnimSections
TArray<class UMovieSceneSection*> UMovieSceneCameraAnimTrack::M_GetCameraAnimSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneCameraAnimTrack::M_PtrGetCameraAnimSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneCameraAnimTrack::M_SetCameraAnimSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}