#include "../SDK.h"
#include "MovieSceneEventTriggerSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EventChannel
// Declaration: struct FMovieSceneEventChannel EventChannel
struct FMovieSceneEventChannel UMovieSceneEventTriggerSection::M_GetEventChannel() const {
	return Read<struct FMovieSceneEventChannel>((byte*)this + 240);
}
struct FMovieSceneEventChannel* UMovieSceneEventTriggerSection::M_PtrGetEventChannel() {
	return reinterpret_cast<struct FMovieSceneEventChannel*>((byte*)this + 240);
}
void UMovieSceneEventTriggerSection::M_SetEventChannel(const struct FMovieSceneEventChannel& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}