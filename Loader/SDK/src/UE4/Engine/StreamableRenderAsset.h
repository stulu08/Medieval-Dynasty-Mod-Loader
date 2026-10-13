#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.StreamableRenderAsset
// Super: Class CoreUObject.Object
// Size: 96
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UStreamableRenderAsset : public UObject {
public:
#pragma region Members
	//double	ForceMipLevelsToBeResidentTimestamp;		//Offset: 64	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	double M_GetForceMipLevelsToBeResidentTimestamp() const;
	double* M_PtrGetForceMipLevelsToBeResidentTimestamp();
	void M_SetForceMipLevelsToBeResidentTimestamp(const double& value);

	//int32_t	NumCinematicMipLevels;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumCinematicMipLevels() const;
	int32_t* M_PtrGetNumCinematicMipLevels();
	void M_SetNumCinematicMipLevels(const int32_t& value);

	//int32_t	StreamingIndex;		//Offset: 76	Size: 4	Flags: ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetStreamingIndex() const;
	int32_t* M_PtrGetStreamingIndex();
	void M_SetStreamingIndex(const int32_t& value);

	//int32_t	CachedCombinedLODBias;		//Offset: 80	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetCachedCombinedLODBias() const;
	int32_t* M_PtrGetCachedCombinedLODBias();
	void M_SetCachedCombinedLODBias(const int32_t& value);

	//unsigned char	NeverStream : 1;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetNeverStream() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetNeverStream();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetNeverStream(const unsigned char& value);

	//unsigned char	bGlobalForceMipLevelsToBeResident : 1;		//Offset: 84	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbGlobalForceMipLevelsToBeResident() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbGlobalForceMipLevelsToBeResident();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbGlobalForceMipLevelsToBeResident(const unsigned char& value);

	//unsigned char	bHasStreamingUpdatePending : 1;		//Offset: 84	Size: 1	Flags: Transient, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbHasStreamingUpdatePending() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbHasStreamingUpdatePending();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbHasStreamingUpdatePending(const unsigned char& value);

	//unsigned char	bForceMiplevelsToBeResident : 1;		//Offset: 84	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbForceMiplevelsToBeResident() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbForceMiplevelsToBeResident();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbForceMiplevelsToBeResident(const unsigned char& value);

	//unsigned char	bIgnoreStreamingMipBias : 1;		//Offset: 84	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIgnoreStreamingMipBias() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIgnoreStreamingMipBias();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIgnoreStreamingMipBias(const unsigned char& value);

	//unsigned char	bUseCinematicMipLevels : 1;		//Offset: 84	Size: 1	Flags: Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseCinematicMipLevels() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseCinematicMipLevels();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseCinematicMipLevels(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.StreamableRenderAsset");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};