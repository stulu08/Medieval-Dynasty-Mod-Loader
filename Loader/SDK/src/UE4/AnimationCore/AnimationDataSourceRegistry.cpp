#include "../SDK.h"
#include "AnimationDataSourceRegistry.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of DataSources
// Declaration: TMap<struct FName, TWeakObjectPtr<class UObject>> DataSources
TMap<struct FName, TWeakObjectPtr<class UObject>> UAnimationDataSourceRegistry::M_GetDataSources() const {
	return Read<TMap<struct FName, TWeakObjectPtr<class UObject>>>((byte*)this + 40);
}
TMap<struct FName, TWeakObjectPtr<class UObject>>* UAnimationDataSourceRegistry::M_PtrGetDataSources() {
	return reinterpret_cast<TMap<struct FName, TWeakObjectPtr<class UObject>>*>((byte*)this + 40);
}
void UAnimationDataSourceRegistry::M_SetDataSources(const TMap<struct FName, TWeakObjectPtr<class UObject>>& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}