#include "../SDK.h"
#include "MovieSceneSpawnTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieSceneSpawnTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 144);
}
TArray<class UMovieSceneSection*>* UMovieSceneSpawnTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 144);
}
void UMovieSceneSpawnTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of ObjectGuid
// Declaration: struct FGuid ObjectGuid
struct FGuid UMovieSceneSpawnTrack::M_GetObjectGuid() const {
	return Read<struct FGuid>((byte*)this + 160);
}
struct FGuid* UMovieSceneSpawnTrack::M_PtrGetObjectGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 160);
}
void UMovieSceneSpawnTrack::M_SetObjectGuid(const struct FGuid& value) {
	Write((byte*)this + 160, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}