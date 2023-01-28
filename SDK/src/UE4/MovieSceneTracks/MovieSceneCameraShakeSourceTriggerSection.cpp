#include "../SDK.h"
#include "MovieSceneCameraShakeSourceTriggerSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Channel
// Declaration: struct FMovieSceneCameraShakeSourceTriggerChannel Channel
struct FMovieSceneCameraShakeSourceTriggerChannel UMovieSceneCameraShakeSourceTriggerSection::M_GetChannel() const {
	return Read<struct FMovieSceneCameraShakeSourceTriggerChannel>((byte*)this + 232);
}
struct FMovieSceneCameraShakeSourceTriggerChannel* UMovieSceneCameraShakeSourceTriggerSection::M_PtrGetChannel() {
	return reinterpret_cast<struct FMovieSceneCameraShakeSourceTriggerChannel*>((byte*)this + 232);
}
void UMovieSceneCameraShakeSourceTriggerSection::M_SetChannel(const struct FMovieSceneCameraShakeSourceTriggerChannel& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}