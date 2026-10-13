#include "../SDK.h"
#include "ObjectLibrary.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ObjectBaseClass
// Declaration: class UObject* ObjectBaseClass
class UObject* UObjectLibrary::M_GetObjectBaseClass() const {
	return Read<class UObject*>((byte*)this + 40);
}
class UObject** UObjectLibrary::M_PtrGetObjectBaseClass() {
	return reinterpret_cast<class UObject**>((byte*)this + 40);
}
void UObjectLibrary::M_SetObjectBaseClass(const class UObject*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of bHasBlueprintClasses
// Declaration: bool bHasBlueprintClasses
bool UObjectLibrary::M_GetbHasBlueprintClasses() const {
	return Read<bool>((byte*)this + 48);
}
bool* UObjectLibrary::M_PtrGetbHasBlueprintClasses() {
	return reinterpret_cast<bool*>((byte*)this + 48);
}
void UObjectLibrary::M_SetbHasBlueprintClasses(const bool& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of Objects
// Declaration: TArray<class UObject*> Objects
TArray<class UObject*> UObjectLibrary::M_GetObjects() const {
	return Read<TArray<class UObject*>>((byte*)this + 56);
}
TArray<class UObject*>* UObjectLibrary::M_PtrGetObjects() {
	return reinterpret_cast<TArray<class UObject*>*>((byte*)this + 56);
}
void UObjectLibrary::M_SetObjects(const TArray<class UObject*>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of WeakObjects
// Declaration: TArray<TWeakObjectPtr<class UObject>> WeakObjects
TArray<TWeakObjectPtr<class UObject>> UObjectLibrary::M_GetWeakObjects() const {
	return Read<TArray<TWeakObjectPtr<class UObject>>>((byte*)this + 72);
}
TArray<TWeakObjectPtr<class UObject>>* UObjectLibrary::M_PtrGetWeakObjects() {
	return reinterpret_cast<TArray<TWeakObjectPtr<class UObject>>*>((byte*)this + 72);
}
void UObjectLibrary::M_SetWeakObjects(const TArray<TWeakObjectPtr<class UObject>>& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of bUseWeakReferences
// Declaration: bool bUseWeakReferences
bool UObjectLibrary::M_GetbUseWeakReferences() const {
	return Read<bool>((byte*)this + 88);
}
bool* UObjectLibrary::M_PtrGetbUseWeakReferences() {
	return reinterpret_cast<bool*>((byte*)this + 88);
}
void UObjectLibrary::M_SetbUseWeakReferences(const bool& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bIsFullyLoaded
// Declaration: bool bIsFullyLoaded
bool UObjectLibrary::M_GetbIsFullyLoaded() const {
	return Read<bool>((byte*)this + 89);
}
bool* UObjectLibrary::M_PtrGetbIsFullyLoaded() {
	return reinterpret_cast<bool*>((byte*)this + 89);
}
void UObjectLibrary::M_SetbIsFullyLoaded(const bool& value) {
	Write((byte*)this + 89, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}