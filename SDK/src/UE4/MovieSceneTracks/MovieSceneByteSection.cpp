#include "../SDK.h"
#include "MovieSceneByteSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ByteCurve
// Declaration: struct FMovieSceneByteChannel ByteCurve
struct FMovieSceneByteChannel UMovieSceneByteSection::M_GetByteCurve() const {
	return Read<struct FMovieSceneByteChannel>((byte*)this + 240);
}
struct FMovieSceneByteChannel* UMovieSceneByteSection::M_PtrGetByteCurve() {
	return reinterpret_cast<struct FMovieSceneByteChannel*>((byte*)this + 240);
}
void UMovieSceneByteSection::M_SetByteCurve(const struct FMovieSceneByteChannel& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}