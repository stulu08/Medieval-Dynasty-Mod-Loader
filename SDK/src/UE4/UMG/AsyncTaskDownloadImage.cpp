#include "../SDK.h"
#include "AsyncTaskDownloadImage.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnSuccess
// Declaration: TAssetPtr<class FDownloadImageDelegate__DelegateSignature> OnSuccess
TAssetPtr<class FDownloadImageDelegate__DelegateSignature> UAsyncTaskDownloadImage::M_GetOnSuccess() const {
	return Read<TAssetPtr<class FDownloadImageDelegate__DelegateSignature>>((byte*)this + 48);
}
TAssetPtr<class FDownloadImageDelegate__DelegateSignature>* UAsyncTaskDownloadImage::M_PtrGetOnSuccess() {
	return reinterpret_cast<TAssetPtr<class FDownloadImageDelegate__DelegateSignature>*>((byte*)this + 48);
}
void UAsyncTaskDownloadImage::M_SetOnSuccess(const TAssetPtr<class FDownloadImageDelegate__DelegateSignature>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of OnFail
// Declaration: TAssetPtr<class FDownloadImageDelegate__DelegateSignature> OnFail
TAssetPtr<class FDownloadImageDelegate__DelegateSignature> UAsyncTaskDownloadImage::M_GetOnFail() const {
	return Read<TAssetPtr<class FDownloadImageDelegate__DelegateSignature>>((byte*)this + 64);
}
TAssetPtr<class FDownloadImageDelegate__DelegateSignature>* UAsyncTaskDownloadImage::M_PtrGetOnFail() {
	return reinterpret_cast<TAssetPtr<class FDownloadImageDelegate__DelegateSignature>*>((byte*)this + 64);
}
void UAsyncTaskDownloadImage::M_SetOnFail(const TAssetPtr<class FDownloadImageDelegate__DelegateSignature>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.AsyncTaskDownloadImage.DownloadImage
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: URL	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAsyncTaskDownloadImage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	struct UAsyncTaskDownloadImage_DownloadImage_Params {
		struct FString URL;			//Offset: 0 | ElementSize: 16
		class UAsyncTaskDownloadImage* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}