#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetRenderingLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}

#pragma region Functions
	static void BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* Size, struct FDrawToRenderTargetContext* Context);

	static void BreakSkinWeightInfo(struct FSkelMeshSkinWeightInfo InWeight, int32_t* Bone0, unsigned char* Weight0, int32_t* Bone1, unsigned char* Weight1, int32_t* Bone2, unsigned char* Weight2, int32_t* Bone3, unsigned char* Weight3);

	static void ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, struct FLinearColor ClearColor);

	static void ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture);

	static class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject* WorldContextObject, int32_t Width, int32_t Height, TEnumAsByte<ETextureRenderTargetFormat> Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps);

	static class UTextureRenderTarget2DArray* CreateRenderTarget2DArray(class UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Slices, TEnumAsByte<ETextureRenderTargetFormat> Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps);

	static class UTextureRenderTargetVolume* CreateRenderTargetVolume(class UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Depth, TEnumAsByte<ETextureRenderTargetFormat> Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps);

	static void DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material);

	static void EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context);

	static void ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, struct FString FilePath, struct FString Filename);

	static void ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, struct FString FilePath, struct FString Filename);

	static class UTexture2D* ImportBufferAsTexture2D(class UObject* WorldContextObject, const TArray<unsigned char>& Buffer);

	static class UTexture2D* ImportFileAsTexture2D(class UObject* WorldContextObject, struct FString Filename);

	static struct FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32_t Bone0, unsigned char Weight0, int32_t Bone1, unsigned char Weight1, int32_t Bone2, unsigned char Weight2, int32_t Bone3, unsigned char Weight3);

	static struct FColor ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);

	static struct FLinearColor ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);

	static struct FLinearColor ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);

	static struct FColor ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);

	static void ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget);

	static class UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, struct FString Name, TEnumAsByte<ETextureCompressionSettings> CompressionSettings, TEnumAsByte<ETextureMipGenSettings> MipSettings);

	static void SetCastInsetShadowForAllAttachments(class UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);

#pragma endregion
};
};