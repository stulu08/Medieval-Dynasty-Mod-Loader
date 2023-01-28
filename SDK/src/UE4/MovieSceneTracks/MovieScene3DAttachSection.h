#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScene3DConstraintSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DAttachSection
// Super: Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 304
// Size inherited: 272
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {
public:
#pragma region Members
	//struct FName	AttachSocketName;		//Offset: 280	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetAttachSocketName() const;
	struct FName* M_PtrGetAttachSocketName();
	void M_SetAttachSocketName(const struct FName& value);

	//struct FName	AttachComponentName;		//Offset: 288	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetAttachComponentName() const;
	struct FName* M_PtrGetAttachComponentName();
	void M_SetAttachComponentName(const struct FName& value);

	//EAttachmentRule	AttachmentLocationRule;		//Offset: 296	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAttachmentRule M_GetAttachmentLocationRule() const;
	EAttachmentRule* M_PtrGetAttachmentLocationRule();
	void M_SetAttachmentLocationRule(const EAttachmentRule& value);

	//EAttachmentRule	AttachmentRotationRule;		//Offset: 297	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAttachmentRule M_GetAttachmentRotationRule() const;
	EAttachmentRule* M_PtrGetAttachmentRotationRule();
	void M_SetAttachmentRotationRule(const EAttachmentRule& value);

	//EAttachmentRule	AttachmentScaleRule;		//Offset: 298	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EAttachmentRule M_GetAttachmentScaleRule() const;
	EAttachmentRule* M_PtrGetAttachmentScaleRule();
	void M_SetAttachmentScaleRule(const EAttachmentRule& value);

	//EDetachmentRule	DetachmentLocationRule;		//Offset: 299	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EDetachmentRule M_GetDetachmentLocationRule() const;
	EDetachmentRule* M_PtrGetDetachmentLocationRule();
	void M_SetDetachmentLocationRule(const EDetachmentRule& value);

	//EDetachmentRule	DetachmentRotationRule;		//Offset: 300	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EDetachmentRule M_GetDetachmentRotationRule() const;
	EDetachmentRule* M_PtrGetDetachmentRotationRule();
	void M_SetDetachmentRotationRule(const EDetachmentRule& value);

	//EDetachmentRule	DetachmentScaleRule;		//Offset: 301	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EDetachmentRule M_GetDetachmentScaleRule() const;
	EDetachmentRule* M_PtrGetDetachmentScaleRule();
	void M_SetDetachmentScaleRule(const EDetachmentRule& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};