#include "../SDK.h"
#include "TestMovieSceneTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bHighPassFilter
// Declaration: bool bHighPassFilter
bool UTestMovieSceneTrack::M_GetbHighPassFilter() const {
	return Read<bool>((byte*)this + 152);
}
bool* UTestMovieSceneTrack::M_PtrGetbHighPassFilter() {
	return reinterpret_cast<bool*>((byte*)this + 152);
}
void UTestMovieSceneTrack::M_SetbHighPassFilter(const bool& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of SectionArray
// Declaration: TArray<class UMovieSceneSection*> SectionArray
TArray<class UMovieSceneSection*> UTestMovieSceneTrack::M_GetSectionArray() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 160);
}
TArray<class UMovieSceneSection*>* UTestMovieSceneTrack::M_PtrGetSectionArray() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 160);
}
void UTestMovieSceneTrack::M_SetSectionArray(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 160, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}