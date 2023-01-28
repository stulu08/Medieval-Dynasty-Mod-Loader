#include "../SDK.h"
#include "MovieSceneEventTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bFireEventsWhenForwards
// Declaration: unsigned char bFireEventsWhenForwards : 1
unsigned char UMovieSceneEventTrack::M_GetbFireEventsWhenForwards() const {
	return Read<unsigned char>((byte*)this + 160);
}
unsigned char* UMovieSceneEventTrack::M_PtrGetbFireEventsWhenForwards() {
	return reinterpret_cast<unsigned char*>((byte*)this + 160);
}
void UMovieSceneEventTrack::M_SetbFireEventsWhenForwards(const unsigned char& value) {
	Write((byte*)this + 160, value);
}
// Member Getter and Setter of bFireEventsWhenBackwards
// Declaration: unsigned char bFireEventsWhenBackwards : 1
unsigned char UMovieSceneEventTrack::M_GetbFireEventsWhenBackwards() const {
	return Read<unsigned char>((byte*)this + 160);
}
unsigned char* UMovieSceneEventTrack::M_PtrGetbFireEventsWhenBackwards() {
	return reinterpret_cast<unsigned char*>((byte*)this + 160);
}
void UMovieSceneEventTrack::M_SetbFireEventsWhenBackwards(const unsigned char& value) {
	Write((byte*)this + 160, value);
}
// Member Getter and Setter of EventPosition
// Declaration: EFireEventsAtPosition EventPosition
EFireEventsAtPosition UMovieSceneEventTrack::M_GetEventPosition() const {
	return Read<EFireEventsAtPosition>((byte*)this + 164);
}
EFireEventsAtPosition* UMovieSceneEventTrack::M_PtrGetEventPosition() {
	return reinterpret_cast<EFireEventsAtPosition*>((byte*)this + 164);
}
void UMovieSceneEventTrack::M_SetEventPosition(const EFireEventsAtPosition& value) {
	Write((byte*)this + 164, value);
}
// Member Getter and Setter of Sections
// Declaration: TArray<class UMovieSceneSection*> Sections
TArray<class UMovieSceneSection*> UMovieSceneEventTrack::M_GetSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 168);
}
TArray<class UMovieSceneSection*>* UMovieSceneEventTrack::M_PtrGetSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 168);
}
void UMovieSceneEventTrack::M_SetSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 168, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}