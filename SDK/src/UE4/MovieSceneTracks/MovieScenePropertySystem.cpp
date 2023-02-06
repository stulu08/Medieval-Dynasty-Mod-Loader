#include "../SDK.h"
#include "MovieScenePropertySystem.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of InstantiatorSystem
// Declaration: class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem
class UMovieScenePropertyInstantiatorSystem* UMovieScenePropertySystem::M_GetInstantiatorSystem() const {
	return Read<class UMovieScenePropertyInstantiatorSystem*>((byte*)this + 72);
}
class UMovieScenePropertyInstantiatorSystem** UMovieScenePropertySystem::M_PtrGetInstantiatorSystem() {
	return reinterpret_cast<class UMovieScenePropertyInstantiatorSystem**>((byte*)this + 72);
}
void UMovieScenePropertySystem::M_SetInstantiatorSystem(const class UMovieScenePropertyInstantiatorSystem*& value) {
	Write((byte*)this + 72, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}