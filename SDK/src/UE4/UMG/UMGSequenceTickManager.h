#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.UMGSequenceTickManager
// Super: Class CoreUObject.Object
// Size: 288
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UUMGSequenceTickManager : public UObject {
public:
#pragma region Members
	//TAssetPtr<class FNone_32758>	WeakUserWidgets;		//Offset: 40	Size: 80	Flags: ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
	TAssetPtr<class FNone_32758> M_GetWeakUserWidgets() const;
	TAssetPtr<class FNone_32758>* M_PtrGetWeakUserWidgets();
	void M_SetWeakUserWidgets(const TAssetPtr<class FNone_32758>& value);

	//class UMovieSceneEntitySystemLinker*	Linker;		//Offset: 120	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneEntitySystemLinker* M_GetLinker() const;
	class UMovieSceneEntitySystemLinker** M_PtrGetLinker();
	void M_SetLinker(const class UMovieSceneEntitySystemLinker*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UMGSequenceTickManager");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};