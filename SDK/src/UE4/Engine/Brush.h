#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Engine.Brush
// Super: Class Engine.Actor
// Size: 600
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABrush : public AActor {
public:
#pragma region Members
	//TEnumAsByte<EBrushType>	BrushType;		//Offset: 544	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBrushType> M_GetBrushType() const;
	TEnumAsByte<EBrushType>* M_PtrGetBrushType();
	void M_SetBrushType(const TEnumAsByte<EBrushType>& value);

	//struct FColor	BrushColor;		//Offset: 548	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FColor M_GetBrushColor() const;
	struct FColor* M_PtrGetBrushColor();
	void M_SetBrushColor(const struct FColor& value);

	//int32_t	PolyFlags;		//Offset: 552	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetPolyFlags() const;
	int32_t* M_PtrGetPolyFlags();
	void M_SetPolyFlags(const int32_t& value);

	//unsigned char	bColored : 1;		//Offset: 556	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbColored() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbColored();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbColored(const unsigned char& value);

	//unsigned char	bSolidWhenSelected : 1;		//Offset: 556	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSolidWhenSelected() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSolidWhenSelected();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSolidWhenSelected(const unsigned char& value);

	//unsigned char	bPlaceableFromClassBrowser : 1;		//Offset: 556	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbPlaceableFromClassBrowser() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbPlaceableFromClassBrowser();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbPlaceableFromClassBrowser(const unsigned char& value);

	//unsigned char	bNotForClientOrServer : 1;		//Offset: 556	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbNotForClientOrServer() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbNotForClientOrServer();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbNotForClientOrServer(const unsigned char& value);

	//class UModel*	Brush;		//Offset: 560	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UModel* M_GetBrush() const;
	class UModel** M_PtrGetBrush();
	void M_SetBrush(const class UModel*& value);

	//class UBrushComponent*	BrushComponent;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UBrushComponent* M_GetBrushComponent() const;
	class UBrushComponent** M_PtrGetBrushComponent();
	void M_SetBrushComponent(const class UBrushComponent*& value);

	//unsigned char	bInManipulation : 1;		//Offset: 576	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbInManipulation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbInManipulation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbInManipulation(const unsigned char& value);

	//TArray<struct FGeomSelection>	SavedSelections;		//Offset: 584	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FGeomSelection> M_GetSavedSelections() const;
	TArray<struct FGeomSelection>* M_PtrGetSavedSelections();
	void M_SetSavedSelections(const TArray<struct FGeomSelection>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};