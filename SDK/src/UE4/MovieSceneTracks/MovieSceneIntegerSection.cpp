#include "../SDK.h"
#include "MovieSceneIntegerSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of IntegerCurve
// Declaration: struct FMovieSceneIntegerChannel IntegerCurve
struct FMovieSceneIntegerChannel UMovieSceneIntegerSection::M_GetIntegerCurve() const {
	return Read<struct FMovieSceneIntegerChannel>((byte*)this + 240);
}
struct FMovieSceneIntegerChannel* UMovieSceneIntegerSection::M_PtrGetIntegerCurve() {
	return reinterpret_cast<struct FMovieSceneIntegerChannel*>((byte*)this + 240);
}
void UMovieSceneIntegerSection::M_SetIntegerCurve(const struct FMovieSceneIntegerChannel& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}