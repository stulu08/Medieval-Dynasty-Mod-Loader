#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/RichTextBlockDecorator.h"
/////////////////////////////////////////////
// Class UMG.RichTextBlockImageDecorator
// Super: Class UMG.RichTextBlockDecorator
// Size: 48
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class URichTextBlockImageDecorator : public URichTextBlockDecorator {
public:
#pragma region Members
	//class UDataTable*	ImageSet;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UDataTable* M_GetImageSet() const;
	class UDataTable** M_PtrGetImageSet();
	void M_SetImageSet(const class UDataTable*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};