#include "../SDK.h"
#include "MovieSceneTrackInstanceSystem.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Instantiator
// Declaration: class UMovieSceneTrackInstanceInstantiator* Instantiator
class UMovieSceneTrackInstanceInstantiator* UMovieSceneTrackInstanceSystem::M_GetInstantiator() const {
	return Read<class UMovieSceneTrackInstanceInstantiator*>((byte*)this + 64);
}
class UMovieSceneTrackInstanceInstantiator** UMovieSceneTrackInstanceSystem::M_PtrGetInstantiator() {
	return reinterpret_cast<class UMovieSceneTrackInstanceInstantiator**>((byte*)this + 64);
}
void UMovieSceneTrackInstanceSystem::M_SetInstantiator(const class UMovieSceneTrackInstanceInstantiator*& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}