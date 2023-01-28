#include "../SDK.h"
#include "MovieScene3DConstraintTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ConstraintSections
// Declaration: TArray<class UMovieSceneSection*> ConstraintSections
TArray<class UMovieSceneSection*> UMovieScene3DConstraintTrack::M_GetConstraintSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 144);
}
TArray<class UMovieSceneSection*>* UMovieScene3DConstraintTrack::M_PtrGetConstraintSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 144);
}
void UMovieScene3DConstraintTrack::M_SetConstraintSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 144, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}