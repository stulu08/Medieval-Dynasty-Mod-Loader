#include "../SDK.h"
#include "MovieSceneBoolSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of DefaultValue
// Declaration: bool DefaultValue
bool UMovieSceneBoolSection::M_GetDefaultValue() const {
	return Read<bool>((byte*)this + 232);
}
bool* UMovieSceneBoolSection::M_PtrGetDefaultValue() {
	return reinterpret_cast<bool*>((byte*)this + 232);
}
void UMovieSceneBoolSection::M_SetDefaultValue(const bool& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of BoolCurve
// Declaration: struct FMovieSceneBoolChannel BoolCurve
struct FMovieSceneBoolChannel UMovieSceneBoolSection::M_GetBoolCurve() const {
	return Read<struct FMovieSceneBoolChannel>((byte*)this + 240);
}
struct FMovieSceneBoolChannel* UMovieSceneBoolSection::M_PtrGetBoolCurve() {
	return reinterpret_cast<struct FMovieSceneBoolChannel*>((byte*)this + 240);
}
void UMovieSceneBoolSection::M_SetBoolCurve(const struct FMovieSceneBoolChannel& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}