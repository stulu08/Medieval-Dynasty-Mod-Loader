#include "../SDK.h"
#include "MovieSceneFloatSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FloatCurve
// Declaration: struct FMovieSceneFloatChannel FloatCurve
struct FMovieSceneFloatChannel UMovieSceneFloatSection::M_GetFloatCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 240);
}
struct FMovieSceneFloatChannel* UMovieSceneFloatSection::M_PtrGetFloatCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 240);
}
void UMovieSceneFloatSection::M_SetFloatCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}