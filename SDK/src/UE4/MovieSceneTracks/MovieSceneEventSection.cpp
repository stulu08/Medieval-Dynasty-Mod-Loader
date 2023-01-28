#include "../SDK.h"
#include "MovieSceneEventSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Events
// Declaration: struct FNameCurve Events
struct FNameCurve UMovieSceneEventSection::M_GetEvents() const {
	return Read<struct FNameCurve>((byte*)this + 232);
}
struct FNameCurve* UMovieSceneEventSection::M_PtrGetEvents() {
	return reinterpret_cast<struct FNameCurve*>((byte*)this + 232);
}
void UMovieSceneEventSection::M_SetEvents(const struct FNameCurve& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of EventData
// Declaration: struct FMovieSceneEventSectionData EventData
struct FMovieSceneEventSectionData UMovieSceneEventSection::M_GetEventData() const {
	return Read<struct FMovieSceneEventSectionData>((byte*)this + 352);
}
struct FMovieSceneEventSectionData* UMovieSceneEventSection::M_PtrGetEventData() {
	return reinterpret_cast<struct FMovieSceneEventSectionData*>((byte*)this + 352);
}
void UMovieSceneEventSection::M_SetEventData(const struct FMovieSceneEventSectionData& value) {
	Write((byte*)this + 352, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}