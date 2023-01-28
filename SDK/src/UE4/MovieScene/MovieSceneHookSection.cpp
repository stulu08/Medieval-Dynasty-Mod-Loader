#include "../SDK.h"
#include "MovieSceneHookSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bRequiresRangedHook
// Declaration: unsigned char bRequiresRangedHook : 1
unsigned char UMovieSceneHookSection::M_GetbRequiresRangedHook() const {
	return Read<unsigned char>((byte*)this + 248);
}
unsigned char* UMovieSceneHookSection::M_PtrGetbRequiresRangedHook() {
	return reinterpret_cast<unsigned char*>((byte*)this + 248);
}
void UMovieSceneHookSection::M_SetbRequiresRangedHook(const unsigned char& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of bRequiresTriggerHooks
// Declaration: unsigned char bRequiresTriggerHooks : 1
unsigned char UMovieSceneHookSection::M_GetbRequiresTriggerHooks() const {
	return Read<unsigned char>((byte*)this + 248);
}
unsigned char* UMovieSceneHookSection::M_PtrGetbRequiresTriggerHooks() {
	return reinterpret_cast<unsigned char*>((byte*)this + 248);
}
void UMovieSceneHookSection::M_SetbRequiresTriggerHooks(const unsigned char& value) {
	Write((byte*)this + 248, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}