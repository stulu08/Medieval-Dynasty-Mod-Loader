#include "../SDK.h"
#include "TestMovieSceneEvalHookTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SectionArray
// Declaration: TArray<class UMovieSceneSection*> SectionArray
TArray<class UMovieSceneSection*> UTestMovieSceneEvalHookTrack::M_GetSectionArray() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 144);
}
TArray<class UMovieSceneSection*>* UTestMovieSceneEvalHookTrack::M_PtrGetSectionArray() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 144);
}
void UTestMovieSceneEvalHookTrack::M_SetSectionArray(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 144, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}