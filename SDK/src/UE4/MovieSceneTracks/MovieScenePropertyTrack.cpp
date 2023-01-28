#include "../SDK.h"
#include "MovieScenePropertyTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SectionToKey
// Declaration: class UMovieSceneSection* SectionToKey
class UMovieSceneSection* UMovieScenePropertyTrack::M_GetSectionToKey() const {
	return Read<class UMovieSceneSection*>((byte*)this + 144);
}
class UMovieSceneSection** UMovieScenePropertyTrack::M_PtrGetSectionToKey() {
	return reinterpret_cast<class UMovieSceneSection**>((byte*)this + 144);
}
void UMovieScenePropertyTrack::M_SetSectionToKey(const class UMovieSceneSection*& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of PropertyBinding
// Declaration: struct FMovieScenePropertyBinding PropertyBinding
struct FMovieScenePropertyBinding UMovieScenePropertyTrack::M_GetPropertyBinding() const {
	return Read<struct FMovieScenePropertyBinding>((byte*)this + 152);
}
struct FMovieScenePropertyBinding* UMovieScenePropertyTrack::M_PtrGetPropertyBinding() {
	return reinterpret_cast<struct FMovieScenePropertyBinding*>((byte*)this + 152);
}
void UMovieScenePropertyTrack::M_SetPropertyBinding(const struct FMovieScenePropertyBinding& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieScenePropertyTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 176);
}
TArray<class UMovieSceneSection*>* UMovieScenePropertyTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 176);
}
void UMovieScenePropertyTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 176, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}