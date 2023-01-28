#include "../SDK.h"
#include "MovieSceneFadeSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FloatCurve
// Declaration: struct FMovieSceneFloatChannel FloatCurve
struct FMovieSceneFloatChannel UMovieSceneFadeSection::M_GetFloatCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 232);
}
struct FMovieSceneFloatChannel* UMovieSceneFadeSection::M_PtrGetFloatCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 232);
}
void UMovieSceneFadeSection::M_SetFloatCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of FadeColor
// Declaration: struct FLinearColor FadeColor
struct FLinearColor UMovieSceneFadeSection::M_GetFadeColor() const {
	return Read<struct FLinearColor>((byte*)this + 392);
}
struct FLinearColor* UMovieSceneFadeSection::M_PtrGetFadeColor() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 392);
}
void UMovieSceneFadeSection::M_SetFadeColor(const struct FLinearColor& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of bFadeAudio
// Declaration: unsigned char bFadeAudio : 1
unsigned char UMovieSceneFadeSection::M_GetbFadeAudio() const {
	return Read<unsigned char>((byte*)this + 408);
}
unsigned char* UMovieSceneFadeSection::M_PtrGetbFadeAudio() {
	return reinterpret_cast<unsigned char*>((byte*)this + 408);
}
void UMovieSceneFadeSection::M_SetbFadeAudio(const unsigned char& value) {
	Write((byte*)this + 408, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}