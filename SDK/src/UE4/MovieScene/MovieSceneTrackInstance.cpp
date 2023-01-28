#include "../SDK.h"
#include "MovieSceneTrackInstance.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimatedObject
// Declaration: class UObject* AnimatedObject
class UObject* UMovieSceneTrackInstance::M_GetAnimatedObject() const {
	return Read<class UObject*>((byte*)this + 40);
}
class UObject** UMovieSceneTrackInstance::M_PtrGetAnimatedObject() {
	return reinterpret_cast<class UObject**>((byte*)this + 40);
}
void UMovieSceneTrackInstance::M_SetAnimatedObject(const class UObject*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of bIsMasterTrackInstance
// Declaration: bool bIsMasterTrackInstance
bool UMovieSceneTrackInstance::M_GetbIsMasterTrackInstance() const {
	return Read<bool>((byte*)this + 48);
}
bool* UMovieSceneTrackInstance::M_PtrGetbIsMasterTrackInstance() {
	return reinterpret_cast<bool*>((byte*)this + 48);
}
void UMovieSceneTrackInstance::M_SetbIsMasterTrackInstance(const bool& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of Linker
// Declaration: class UMovieSceneEntitySystemLinker* Linker
class UMovieSceneEntitySystemLinker* UMovieSceneTrackInstance::M_GetLinker() const {
	return Read<class UMovieSceneEntitySystemLinker*>((byte*)this + 56);
}
class UMovieSceneEntitySystemLinker** UMovieSceneTrackInstance::M_PtrGetLinker() {
	return reinterpret_cast<class UMovieSceneEntitySystemLinker**>((byte*)this + 56);
}
void UMovieSceneTrackInstance::M_SetLinker(const class UMovieSceneEntitySystemLinker*& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of Inputs
// Declaration: TArray<struct FMovieSceneTrackInstanceInput> Inputs
TArray<struct FMovieSceneTrackInstanceInput> UMovieSceneTrackInstance::M_GetInputs() const {
	return Read<TArray<struct FMovieSceneTrackInstanceInput>>((byte*)this + 64);
}
TArray<struct FMovieSceneTrackInstanceInput>* UMovieSceneTrackInstance::M_PtrGetInputs() {
	return reinterpret_cast<TArray<struct FMovieSceneTrackInstanceInput>*>((byte*)this + 64);
}
void UMovieSceneTrackInstance::M_SetInputs(const TArray<struct FMovieSceneTrackInstanceInput>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}