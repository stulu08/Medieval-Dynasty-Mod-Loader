#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.InvalidationBox
// Super: Class UMG.ContentWidget
// Size: 312
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UInvalidationBox : public UContentWidget {
public:
#pragma region Members
	//bool	bCanCache;		//Offset: 288	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbCanCache() const;
	bool* M_PtrGetbCanCache();
	void M_SetbCanCache(const bool& value);

	//bool	CacheRelativeTransforms;		//Offset: 289	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetCacheRelativeTransforms() const;
	bool* M_PtrGetCacheRelativeTransforms();
	void M_SetCacheRelativeTransforms(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}

#pragma region Functions
	bool GetCanCache() const;

	void InvalidateCache();

	void SetCanCache(bool CanCache);

#pragma endregion
};
};