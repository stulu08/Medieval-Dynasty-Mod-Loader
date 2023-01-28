#pragma once
#include "Structs.h"
#include "Engine/BlueprintAsyncActionBase.h"
/////////////////////////////////////////////
// Class UMG.AsyncTaskDownloadImage
// Super: Class Engine.BlueprintAsyncActionBase
// Size: 80
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
public:
#pragma region Members
	//TAssetPtr<class FDownloadImageDelegate__DelegateSignature>	OnSuccess;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FDownloadImageDelegate__DelegateSignature> M_GetOnSuccess() const;
	TAssetPtr<class FDownloadImageDelegate__DelegateSignature>* M_PtrGetOnSuccess();
	void M_SetOnSuccess(const TAssetPtr<class FDownloadImageDelegate__DelegateSignature>& value);

	//TAssetPtr<class FDownloadImageDelegate__DelegateSignature>	OnFail;		//Offset: 64	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FDownloadImageDelegate__DelegateSignature> M_GetOnFail() const;
	TAssetPtr<class FDownloadImageDelegate__DelegateSignature>* M_PtrGetOnFail();
	void M_SetOnFail(const TAssetPtr<class FDownloadImageDelegate__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}

#pragma region Functions
	static class UAsyncTaskDownloadImage* DownloadImage(struct FString URL);

#pragma endregion
};
};