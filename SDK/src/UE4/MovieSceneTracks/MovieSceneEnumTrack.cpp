#include "../SDK.h"
#include "MovieSceneEnumTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Enum
// Declaration: class UEnum* Enum
class UEnum* UMovieSceneEnumTrack::M_GetEnum() const {
	return Read<class UEnum*>((byte*)this + 192);
}
class UEnum** UMovieSceneEnumTrack::M_PtrGetEnum() {
	return reinterpret_cast<class UEnum**>((byte*)this + 192);
}
void UMovieSceneEnumTrack::M_SetEnum(const class UEnum*& value) {
	Write((byte*)this + 192, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}