#include "../SDK.h"
#include "MovieSceneSlomoSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FloatCurve
// Declaration: struct FMovieSceneFloatChannel FloatCurve
struct FMovieSceneFloatChannel UMovieSceneSlomoSection::M_GetFloatCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 232);
}
struct FMovieSceneFloatChannel* UMovieSceneSlomoSection::M_PtrGetFloatCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 232);
}
void UMovieSceneSlomoSection::M_SetFloatCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}