#include "../SDK.h"
#include "MovieSceneEventRepeaterSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Event
// Declaration: struct FMovieSceneEvent Event
struct FMovieSceneEvent UMovieSceneEventRepeaterSection::M_GetEvent() const {
	return Read<struct FMovieSceneEvent>((byte*)this + 240);
}
struct FMovieSceneEvent* UMovieSceneEventRepeaterSection::M_PtrGetEvent() {
	return reinterpret_cast<struct FMovieSceneEvent*>((byte*)this + 240);
}
void UMovieSceneEventRepeaterSection::M_SetEvent(const struct FMovieSceneEvent& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}