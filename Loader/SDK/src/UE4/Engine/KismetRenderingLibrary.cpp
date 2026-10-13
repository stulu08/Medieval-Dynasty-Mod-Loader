#include "../SDK.h"
#include "KismetRenderingLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget
// Flags: Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Canvas	Type: class UCanvas*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Size	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Context	Type: struct FDrawToRenderTargetContext	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* Size, struct FDrawToRenderTargetContext* Context) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget");

	struct UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		class UCanvas* Canvas;			//Offset: 16 | ElementSize: 8
		struct FVector2D Size;			//Offset: 24 | ElementSize: 8
		struct FDrawToRenderTargetContext Context;			//Offset: 32 | ElementSize: 16
	};
	UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Canvas != nullptr)
		*Canvas = params.Canvas;
	if (Size != nullptr)
		*Size = params.Size;
	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo
// Flags: Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InWeight	Type: struct FSkelMeshSkinWeightInfo	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: Bone0	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight0	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Bone1	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight1	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Bone2	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight2	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Bone3	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight3	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::BreakSkinWeightInfo(struct FSkelMeshSkinWeightInfo InWeight, int32_t* Bone0, unsigned char* Weight0, int32_t* Bone1, unsigned char* Weight1, int32_t* Bone2, unsigned char* Weight2, int32_t* Bone3, unsigned char* Weight3) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo");

	struct UKismetRenderingLibrary_BreakSkinWeightInfo_Params {
		struct FSkelMeshSkinWeightInfo InWeight;			//Offset: 0 | ElementSize: 60
		int32_t Bone0;			//Offset: 60 | ElementSize: 4
		unsigned char Weight0;			//Offset: 64 | ElementSize: 1
		int32_t Bone1;			//Offset: 68 | ElementSize: 4
		unsigned char Weight1;			//Offset: 72 | ElementSize: 1
		int32_t Bone2;			//Offset: 76 | ElementSize: 4
		unsigned char Weight2;			//Offset: 80 | ElementSize: 1
		int32_t Bone3;			//Offset: 84 | ElementSize: 4
		unsigned char Weight3;			//Offset: 88 | ElementSize: 1
	};
	UKismetRenderingLibrary_BreakSkinWeightInfo_Params params;
	params.InWeight = InWeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Bone0 != nullptr)
		*Bone0 = params.Bone0;
	if (Weight0 != nullptr)
		*Weight0 = params.Weight0;
	if (Bone1 != nullptr)
		*Bone1 = params.Bone1;
	if (Weight1 != nullptr)
		*Weight1 = params.Weight1;
	if (Bone2 != nullptr)
		*Bone2 = params.Bone2;
	if (Weight2 != nullptr)
		*Weight2 = params.Weight2;
	if (Bone3 != nullptr)
		*Bone3 = params.Bone3;
	if (Weight3 != nullptr)
		*Weight3 = params.Weight3;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ClearRenderTarget2D
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClearColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, struct FLinearColor ClearColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ClearRenderTarget2D");

	struct UKismetRenderingLibrary_ClearRenderTarget2D_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		struct FLinearColor ClearColor;			//Offset: 16 | ElementSize: 16
	};
	UKismetRenderingLibrary_ClearRenderTarget2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.ClearColor = ClearColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ConvertRenderTargetToTexture2DEditorOnly
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Texture	Type: class UTexture2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ConvertRenderTargetToTexture2DEditorOnly");

	struct UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* RenderTarget;			//Offset: 8 | ElementSize: 8
		class UTexture2D* Texture;			//Offset: 16 | ElementSize: 8
	};
	UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RenderTarget = RenderTarget;
	params.Texture = Texture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.CreateRenderTarget2D
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Width	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Height	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Format	Type: TEnumAsByte<ETextureRenderTargetFormat>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClearColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAutoGenerateMipMaps	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTextureRenderTarget2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTextureRenderTarget2D* UKismetRenderingLibrary::CreateRenderTarget2D(class UObject* WorldContextObject, int32_t Width, int32_t Height, TEnumAsByte<ETextureRenderTargetFormat> Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.CreateRenderTarget2D");

	struct UKismetRenderingLibrary_CreateRenderTarget2D_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		int32_t Width;			//Offset: 8 | ElementSize: 4
		int32_t Height;			//Offset: 12 | ElementSize: 4
		TEnumAsByte<ETextureRenderTargetFormat> Format;			//Offset: 16 | ElementSize: 1
		struct FLinearColor ClearColor;			//Offset: 20 | ElementSize: 16
		bool bAutoGenerateMipMaps;			//Offset: 36 | ElementSize: 1
		class UTextureRenderTarget2D* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UKismetRenderingLibrary_CreateRenderTarget2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Width = Width;
	params.Height = Height;
	params.Format = Format;
	params.ClearColor = ClearColor;
	params.bAutoGenerateMipMaps = bAutoGenerateMipMaps;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.CreateRenderTarget2DArray
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Width	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Height	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Slices	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Format	Type: TEnumAsByte<ETextureRenderTargetFormat>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClearColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAutoGenerateMipMaps	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTextureRenderTarget2DArray*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTextureRenderTarget2DArray* UKismetRenderingLibrary::CreateRenderTarget2DArray(class UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Slices, TEnumAsByte<ETextureRenderTargetFormat> Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.CreateRenderTarget2DArray");

	struct UKismetRenderingLibrary_CreateRenderTarget2DArray_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		int32_t Width;			//Offset: 8 | ElementSize: 4
		int32_t Height;			//Offset: 12 | ElementSize: 4
		int32_t Slices;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<ETextureRenderTargetFormat> Format;			//Offset: 20 | ElementSize: 1
		struct FLinearColor ClearColor;			//Offset: 24 | ElementSize: 16
		bool bAutoGenerateMipMaps;			//Offset: 40 | ElementSize: 1
		class UTextureRenderTarget2DArray* ReturnValue;			//Offset: 48 | ElementSize: 8
	};
	UKismetRenderingLibrary_CreateRenderTarget2DArray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Width = Width;
	params.Height = Height;
	params.Slices = Slices;
	params.Format = Format;
	params.ClearColor = ClearColor;
	params.bAutoGenerateMipMaps = bAutoGenerateMipMaps;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.CreateRenderTargetVolume
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Width	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Height	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Depth	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Format	Type: TEnumAsByte<ETextureRenderTargetFormat>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ClearColor	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAutoGenerateMipMaps	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTextureRenderTargetVolume*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTextureRenderTargetVolume* UKismetRenderingLibrary::CreateRenderTargetVolume(class UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Depth, TEnumAsByte<ETextureRenderTargetFormat> Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.CreateRenderTargetVolume");

	struct UKismetRenderingLibrary_CreateRenderTargetVolume_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		int32_t Width;			//Offset: 8 | ElementSize: 4
		int32_t Height;			//Offset: 12 | ElementSize: 4
		int32_t Depth;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<ETextureRenderTargetFormat> Format;			//Offset: 20 | ElementSize: 1
		struct FLinearColor ClearColor;			//Offset: 24 | ElementSize: 16
		bool bAutoGenerateMipMaps;			//Offset: 40 | ElementSize: 1
		class UTextureRenderTargetVolume* ReturnValue;			//Offset: 48 | ElementSize: 8
	};
	UKismetRenderingLibrary_CreateRenderTargetVolume_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Width = Width;
	params.Height = Height;
	params.Depth = Depth;
	params.Format = Format;
	params.ClearColor = ClearColor;
	params.bAutoGenerateMipMaps = bAutoGenerateMipMaps;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget");

	struct UKismetRenderingLibrary_DrawMaterialToRenderTarget_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		class UMaterialInterface* Material;			//Offset: 16 | ElementSize: 8
	};
	UKismetRenderingLibrary_DrawMaterialToRenderTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget
// Flags: Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Context	Type: struct FDrawToRenderTargetContext	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget");

	struct UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FDrawToRenderTargetContext Context;			//Offset: 8 | ElementSize: 16
	};
	UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Context = Context;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ExportRenderTarget
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FilePath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, struct FString FilePath, struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ExportRenderTarget");

	struct UKismetRenderingLibrary_ExportRenderTarget_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		struct FString FilePath;			//Offset: 16 | ElementSize: 16
		struct FString Filename;			//Offset: 32 | ElementSize: 16
	};
	UKismetRenderingLibrary_ExportRenderTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.FilePath = FilePath;
	params.Filename = Filename;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ExportTexture2D
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Texture	Type: class UTexture2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FilePath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, struct FString FilePath, struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ExportTexture2D");

	struct UKismetRenderingLibrary_ExportTexture2D_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTexture2D* Texture;			//Offset: 8 | ElementSize: 8
		struct FString FilePath;			//Offset: 16 | ElementSize: 16
		struct FString Filename;			//Offset: 32 | ElementSize: 16
	};
	UKismetRenderingLibrary_ExportTexture2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Texture = Texture;
	params.FilePath = FilePath;
	params.Filename = Filename;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ImportBufferAsTexture2D
// Flags: Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Buffer	Type: TArray<unsigned char>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTexture2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTexture2D* UKismetRenderingLibrary::ImportBufferAsTexture2D(class UObject* WorldContextObject, const TArray<unsigned char>& Buffer) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ImportBufferAsTexture2D");

	struct UKismetRenderingLibrary_ImportBufferAsTexture2D_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		TArray<unsigned char> Buffer;			//Offset: 8 | ElementSize: 16
		class UTexture2D* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UKismetRenderingLibrary_ImportBufferAsTexture2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ImportFileAsTexture2D
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTexture2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTexture2D* UKismetRenderingLibrary::ImportFileAsTexture2D(class UObject* WorldContextObject, struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ImportFileAsTexture2D");

	struct UKismetRenderingLibrary_ImportFileAsTexture2D_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FString Filename;			//Offset: 8 | ElementSize: 16
		class UTexture2D* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UKismetRenderingLibrary_ImportFileAsTexture2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Bone0	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight0	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Bone1	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight1	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Bone2	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight2	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Bone3	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Weight3	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FSkelMeshSkinWeightInfo	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSkelMeshSkinWeightInfo UKismetRenderingLibrary::MakeSkinWeightInfo(int32_t Bone0, unsigned char Weight0, int32_t Bone1, unsigned char Weight1, int32_t Bone2, unsigned char Weight2, int32_t Bone3, unsigned char Weight3) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo");

	struct UKismetRenderingLibrary_MakeSkinWeightInfo_Params {
		int32_t Bone0;			//Offset: 0 | ElementSize: 4
		unsigned char Weight0;			//Offset: 4 | ElementSize: 1
		int32_t Bone1;			//Offset: 8 | ElementSize: 4
		unsigned char Weight1;			//Offset: 12 | ElementSize: 1
		int32_t Bone2;			//Offset: 16 | ElementSize: 4
		unsigned char Weight2;			//Offset: 20 | ElementSize: 1
		int32_t Bone3;			//Offset: 24 | ElementSize: 4
		unsigned char Weight3;			//Offset: 28 | ElementSize: 1
		struct FSkelMeshSkinWeightInfo ReturnValue;			//Offset: 32 | ElementSize: 60
	};
	UKismetRenderingLibrary_MakeSkinWeightInfo_Params params;
	params.Bone0 = Bone0;
	params.Weight0 = Weight0;
	params.Bone1 = Bone1;
	params.Weight1 = Weight1;
	params.Bone2 = Bone2;
	params.Weight2 = Weight2;
	params.Bone3 = Bone3;
	params.Weight3 = Weight3;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ReadRenderTargetPixel
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: X	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FColor UKismetRenderingLibrary::ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ReadRenderTargetPixel");

	struct UKismetRenderingLibrary_ReadRenderTargetPixel_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		int32_t X;			//Offset: 16 | ElementSize: 4
		int32_t Y;			//Offset: 20 | ElementSize: 4
		struct FColor ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetRenderingLibrary_ReadRenderTargetPixel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.X = X;
	params.Y = Y;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ReadRenderTargetRawPixel
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: X	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Y	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FLinearColor UKismetRenderingLibrary::ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ReadRenderTargetRawPixel");

	struct UKismetRenderingLibrary_ReadRenderTargetRawPixel_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		int32_t X;			//Offset: 16 | ElementSize: 4
		int32_t Y;			//Offset: 20 | ElementSize: 4
		struct FLinearColor ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetRenderingLibrary_ReadRenderTargetRawPixel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.X = X;
	params.Y = Y;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ReadRenderTargetRawUV
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: U	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: V	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FLinearColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FLinearColor UKismetRenderingLibrary::ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ReadRenderTargetRawUV");

	struct UKismetRenderingLibrary_ReadRenderTargetRawUV_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		float U;			//Offset: 16 | ElementSize: 4
		float V;			//Offset: 20 | ElementSize: 4
		struct FLinearColor ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UKismetRenderingLibrary_ReadRenderTargetRawUV_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.U = U;
	params.V = V;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ReadRenderTargetUV
// Flags: Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: U	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: V	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FColor	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FColor UKismetRenderingLibrary::ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ReadRenderTargetUV");

	struct UKismetRenderingLibrary_ReadRenderTargetUV_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 8 | ElementSize: 8
		float U;			//Offset: 16 | ElementSize: 4
		float V;			//Offset: 20 | ElementSize: 4
		struct FColor ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UKismetRenderingLibrary_ReadRenderTargetUV_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextureRenderTarget = TextureRenderTarget;
	params.U = U;
	params.V = V;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.ReleaseRenderTarget2D
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: TextureRenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.ReleaseRenderTarget2D");

	struct UKismetRenderingLibrary_ReleaseRenderTarget2D_Params {
		class UTextureRenderTarget2D* TextureRenderTarget;			//Offset: 0 | ElementSize: 8
	};
	UKismetRenderingLibrary_ReleaseRenderTarget2D_Params params;
	params.TextureRenderTarget = TextureRenderTarget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.RenderTargetCreateStaticTexture2DEditorOnly
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: RenderTarget	Type: class UTextureRenderTarget2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Name	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CompressionSettings	Type: TEnumAsByte<ETextureCompressionSettings>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MipSettings	Type: TEnumAsByte<ETextureMipGenSettings>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTexture2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTexture2D* UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, struct FString Name, TEnumAsByte<ETextureCompressionSettings> CompressionSettings, TEnumAsByte<ETextureMipGenSettings> MipSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.RenderTargetCreateStaticTexture2DEditorOnly");

	struct UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Params {
		class UTextureRenderTarget2D* RenderTarget;			//Offset: 0 | ElementSize: 8
		struct FString Name;			//Offset: 8 | ElementSize: 16
		TEnumAsByte<ETextureCompressionSettings> CompressionSettings;			//Offset: 24 | ElementSize: 1
		TEnumAsByte<ETextureMipGenSettings> MipSettings;			//Offset: 25 | ElementSize: 1
		class UTexture2D* ReturnValue;			//Offset: 32 | ElementSize: 8
	};
	UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Params params;
	params.RenderTarget = RenderTarget;
	params.Name = Name;
	params.CompressionSettings = CompressionSettings;
	params.MipSettings = MipSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.KismetRenderingLibrary.SetCastInsetShadowForAllAttachments
// Flags: Final, RequiredAPI, Native, Static, Public, BlueprintCallable
// Params:
// Name: PrimitiveComponent	Type: class UPrimitiveComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bCastInsetShadow	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLightAttachmentsAsGroup	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UKismetRenderingLibrary::SetCastInsetShadowForAllAttachments(class UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetRenderingLibrary.SetCastInsetShadowForAllAttachments");

	struct UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Params {
		class UPrimitiveComponent* PrimitiveComponent;			//Offset: 0 | ElementSize: 8
		bool bCastInsetShadow;			//Offset: 8 | ElementSize: 1
		bool bLightAttachmentsAsGroup;			//Offset: 9 | ElementSize: 1
	};
	UKismetRenderingLibrary_SetCastInsetShadowForAllAttachments_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.bCastInsetShadow = bCastInsetShadow;
	params.bLightAttachmentsAsGroup = bLightAttachmentsAsGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}