#include "../SDK.h"
#include "UMGSequenceTickManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WeakUserWidgets
// Declaration: TAssetPtr<class FNone_32759> WeakUserWidgets
TAssetPtr<class FNone_32759> UUMGSequenceTickManager::M_GetWeakUserWidgets() const {
	return Read<TAssetPtr<class FNone_32759>>((byte*)this + 40);
}
TAssetPtr<class FNone_32759>* UUMGSequenceTickManager::M_PtrGetWeakUserWidgets() {
	return reinterpret_cast<TAssetPtr<class FNone_32759>*>((byte*)this + 40);
}
void UUMGSequenceTickManager::M_SetWeakUserWidgets(const TAssetPtr<class FNone_32759>& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Linker
// Declaration: class UMovieSceneEntitySystemLinker* Linker
class UMovieSceneEntitySystemLinker* UUMGSequenceTickManager::M_GetLinker() const {
	return Read<class UMovieSceneEntitySystemLinker*>((byte*)this + 120);
}
class UMovieSceneEntitySystemLinker** UUMGSequenceTickManager::M_PtrGetLinker() {
	return reinterpret_cast<class UMovieSceneEntitySystemLinker**>((byte*)this + 120);
}
void UUMGSequenceTickManager::M_SetLinker(const class UMovieSceneEntitySystemLinker*& value) {
	Write((byte*)this + 120, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}