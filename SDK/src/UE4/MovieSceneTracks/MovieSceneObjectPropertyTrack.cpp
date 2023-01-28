#include "../SDK.h"
#include "MovieSceneObjectPropertyTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PropertyClass
// Declaration: class UObject* PropertyClass
class UObject* UMovieSceneObjectPropertyTrack::M_GetPropertyClass() const {
	return Read<class UObject*>((byte*)this + 200);
}
class UObject** UMovieSceneObjectPropertyTrack::M_PtrGetPropertyClass() {
	return reinterpret_cast<class UObject**>((byte*)this + 200);
}
void UMovieSceneObjectPropertyTrack::M_SetPropertyClass(const class UObject*& value) {
	Write((byte*)this + 200, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}