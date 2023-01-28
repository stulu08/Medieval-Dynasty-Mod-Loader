#include "../SDK.h"
#include "MovieSceneEnumSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EnumCurve
// Declaration: struct FMovieSceneByteChannel EnumCurve
struct FMovieSceneByteChannel UMovieSceneEnumSection::M_GetEnumCurve() const {
	return Read<struct FMovieSceneByteChannel>((byte*)this + 240);
}
struct FMovieSceneByteChannel* UMovieSceneEnumSection::M_PtrGetEnumCurve() {
	return reinterpret_cast<struct FMovieSceneByteChannel*>((byte*)this + 240);
}
void UMovieSceneEnumSection::M_SetEnumCurve(const struct FMovieSceneByteChannel& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}