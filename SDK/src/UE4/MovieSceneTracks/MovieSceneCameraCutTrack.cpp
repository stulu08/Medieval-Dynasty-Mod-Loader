#include "../SDK.h"
#include "MovieSceneCameraCutTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bCanBlend
// Declaration: bool bCanBlend
bool UMovieSceneCameraCutTrack::M_GetbCanBlend() const {
	return Read<bool>((byte*)this + 144);
}
bool* UMovieSceneCameraCutTrack::M_PtrGetbCanBlend() {
	return reinterpret_cast<bool*>((byte*)this + 144);
}
void UMovieSceneCameraCutTrack::M_SetbCanBlend(const bool& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieSceneCameraCutTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneCameraCutTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneCameraCutTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}