#include "../SDK.h"
#include "MovieSceneStringSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of StringCurve
// Declaration: struct FMovieSceneStringChannel StringCurve
struct FMovieSceneStringChannel UMovieSceneStringSection::M_GetStringCurve() const {
	return Read<struct FMovieSceneStringChannel>((byte*)this + 232);
}
struct FMovieSceneStringChannel* UMovieSceneStringSection::M_PtrGetStringCurve() {
	return reinterpret_cast<struct FMovieSceneStringChannel*>((byte*)this + 232);
}
void UMovieSceneStringSection::M_SetStringCurve(const struct FMovieSceneStringChannel& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}