#include "../SDK.h"
#include "MovieSceneByteTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Enum
// Declaration: class UEnum* Enum
class UEnum* UMovieSceneByteTrack::M_GetEnum() const {
	return Read<class UEnum*>((byte*)this + 192);
}
class UEnum** UMovieSceneByteTrack::M_PtrGetEnum() {
	return reinterpret_cast<class UEnum**>((byte*)this + 192);
}
void UMovieSceneByteTrack::M_SetEnum(const class UEnum*& value) {
	Write((byte*)this + 192, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}