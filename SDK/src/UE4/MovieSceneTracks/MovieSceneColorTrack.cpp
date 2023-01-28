#include "../SDK.h"
#include "MovieSceneColorTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bIsSlateColor
// Declaration: bool bIsSlateColor
bool UMovieSceneColorTrack::M_GetbIsSlateColor() const {
	return Read<bool>((byte*)this + 192);
}
bool* UMovieSceneColorTrack::M_PtrGetbIsSlateColor() {
	return reinterpret_cast<bool*>((byte*)this + 192);
}
void UMovieSceneColorTrack::M_SetbIsSlateColor(const bool& value) {
	Write((byte*)this + 192, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}