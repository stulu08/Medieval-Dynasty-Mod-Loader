#include "../SDK.h"
#include "MovieSceneEntitySystem.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Linker
// Declaration: class UMovieSceneEntitySystemLinker* Linker
class UMovieSceneEntitySystemLinker* UMovieSceneEntitySystem::M_GetLinker() const {
	return Read<class UMovieSceneEntitySystemLinker*>((byte*)this + 40);
}
class UMovieSceneEntitySystemLinker** UMovieSceneEntitySystem::M_PtrGetLinker() {
	return reinterpret_cast<class UMovieSceneEntitySystemLinker**>((byte*)this + 40);
}
void UMovieSceneEntitySystem::M_SetLinker(const class UMovieSceneEntitySystemLinker*& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}