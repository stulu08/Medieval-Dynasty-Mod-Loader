#include "../SDK.h"
#include "TestMovieSceneSubTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SectionArray
// Declaration: TArray<class UMovieSceneSection*> SectionArray
TArray<class UMovieSceneSection*> UTestMovieSceneSubTrack::M_GetSectionArray() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 160);
}
TArray<class UMovieSceneSection*>* UTestMovieSceneSubTrack::M_PtrGetSectionArray() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 160);
}
void UTestMovieSceneSubTrack::M_SetSectionArray(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 160, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}