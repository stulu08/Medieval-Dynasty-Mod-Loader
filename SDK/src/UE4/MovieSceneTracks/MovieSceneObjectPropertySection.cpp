#include "../SDK.h"
#include "MovieSceneObjectPropertySection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ObjectChannel
// Declaration: struct FMovieSceneObjectPathChannel ObjectChannel
struct FMovieSceneObjectPathChannel UMovieSceneObjectPropertySection::M_GetObjectChannel() const {
	return Read<struct FMovieSceneObjectPathChannel>((byte*)this + 232);
}
struct FMovieSceneObjectPathChannel* UMovieSceneObjectPropertySection::M_PtrGetObjectChannel() {
	return reinterpret_cast<struct FMovieSceneObjectPathChannel*>((byte*)this + 232);
}
void UMovieSceneObjectPropertySection::M_SetObjectChannel(const struct FMovieSceneObjectPathChannel& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}