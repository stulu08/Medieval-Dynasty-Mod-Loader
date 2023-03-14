#include "../SDK.h"
#include "BlueprintPathsLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.AutomationDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::AutomationDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.AutomationDir");

	struct UBlueprintPathsLibrary_AutomationDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_AutomationDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.AutomationLogDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::AutomationLogDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.AutomationLogDir");

	struct UBlueprintPathsLibrary_AutomationLogDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_AutomationLogDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.AutomationTransientDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::AutomationTransientDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.AutomationTransientDir");

	struct UBlueprintPathsLibrary_AutomationTransientDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_AutomationTransientDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.BugItDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::BugItDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.BugItDir");

	struct UBlueprintPathsLibrary_BugItDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_BugItDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ChangeExtension
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InNewExtension	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ChangeExtension(struct FString InPath, struct FString InNewExtension) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ChangeExtension");

	struct UBlueprintPathsLibrary_ChangeExtension_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString InNewExtension;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ChangeExtension_Params params;
	params.InPath = InPath;
	params.InNewExtension = InNewExtension;

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
// Function Engine.BlueprintPathsLibrary.CloudDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::CloudDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.CloudDir");

	struct UBlueprintPathsLibrary_CloudDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_CloudDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.CollapseRelativeDirectories
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::CollapseRelativeDirectories(struct FString InPath, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.CollapseRelativeDirectories");

	struct UBlueprintPathsLibrary_CollapseRelativeDirectories_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString OutPath;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UBlueprintPathsLibrary_CollapseRelativeDirectories_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.Combine
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPaths	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::Combine(const TArray<struct FString>& InPaths) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.Combine");

	struct UBlueprintPathsLibrary_Combine_Params {
		TArray<struct FString> InPaths;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_Combine_Params params;
	params.InPaths = InPaths;

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
// Function Engine.BlueprintPathsLibrary.ConvertFromSandboxPath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSandboxName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ConvertFromSandboxPath(struct FString InPath, struct FString InSandboxName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ConvertFromSandboxPath");

	struct UBlueprintPathsLibrary_ConvertFromSandboxPath_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString InSandboxName;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ConvertFromSandboxPath_Params params;
	params.InPath = InPath;
	params.InSandboxName = InSandboxName;

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
// Function Engine.BlueprintPathsLibrary.ConvertRelativePathToFull
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InBasePath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ConvertRelativePathToFull(struct FString InPath, struct FString InBasePath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ConvertRelativePathToFull");

	struct UBlueprintPathsLibrary_ConvertRelativePathToFull_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString InBasePath;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ConvertRelativePathToFull_Params params;
	params.InPath = InPath;
	params.InBasePath = InBasePath;

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
// Function Engine.BlueprintPathsLibrary.ConvertToSandboxPath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InSandboxName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ConvertToSandboxPath(struct FString InPath, struct FString InSandboxName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ConvertToSandboxPath");

	struct UBlueprintPathsLibrary_ConvertToSandboxPath_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString InSandboxName;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ConvertToSandboxPath_Params params;
	params.InPath = InPath;
	params.InSandboxName = InSandboxName;

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
// Function Engine.BlueprintPathsLibrary.CreateTempFilename
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Path	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Prefix	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Extension	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::CreateTempFilename(struct FString Path, struct FString Prefix, struct FString Extension) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.CreateTempFilename");

	struct UBlueprintPathsLibrary_CreateTempFilename_Params {
		struct FString Path;			//Offset: 0 | ElementSize: 16
		struct FString Prefix;			//Offset: 16 | ElementSize: 16
		struct FString Extension;			//Offset: 32 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 48 | ElementSize: 16
	};
	UBlueprintPathsLibrary_CreateTempFilename_Params params;
	params.Path = Path;
	params.Prefix = Prefix;
	params.Extension = Extension;

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
// Function Engine.BlueprintPathsLibrary.DiffDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::DiffDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.DiffDir");

	struct UBlueprintPathsLibrary_DiffDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_DiffDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.DirectoryExists
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::DirectoryExists(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.DirectoryExists");

	struct UBlueprintPathsLibrary_DirectoryExists_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBlueprintPathsLibrary_DirectoryExists_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.EngineConfigDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineConfigDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineConfigDir");

	struct UBlueprintPathsLibrary_EngineConfigDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineConfigDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineContentDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineContentDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineContentDir");

	struct UBlueprintPathsLibrary_EngineContentDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineContentDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineDir");

	struct UBlueprintPathsLibrary_EngineDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineIntermediateDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineIntermediateDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineIntermediateDir");

	struct UBlueprintPathsLibrary_EngineIntermediateDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineIntermediateDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EnginePluginsDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EnginePluginsDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EnginePluginsDir");

	struct UBlueprintPathsLibrary_EnginePluginsDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EnginePluginsDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineSavedDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineSavedDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineSavedDir");

	struct UBlueprintPathsLibrary_EngineSavedDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineSavedDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineSourceDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineSourceDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineSourceDir");

	struct UBlueprintPathsLibrary_EngineSourceDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineSourceDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineUserDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineUserDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineUserDir");

	struct UBlueprintPathsLibrary_EngineUserDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineUserDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EngineVersionAgnosticUserDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EngineVersionAgnosticUserDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EngineVersionAgnosticUserDir");

	struct UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EngineVersionAgnosticUserDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EnterpriseDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EnterpriseDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EnterpriseDir");

	struct UBlueprintPathsLibrary_EnterpriseDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EnterpriseDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EnterpriseFeaturePackDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EnterpriseFeaturePackDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EnterpriseFeaturePackDir");

	struct UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EnterpriseFeaturePackDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.EnterprisePluginsDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::EnterprisePluginsDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.EnterprisePluginsDir");

	struct UBlueprintPathsLibrary_EnterprisePluginsDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_EnterprisePluginsDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.FeaturePackDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::FeaturePackDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.FeaturePackDir");

	struct UBlueprintPathsLibrary_FeaturePackDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_FeaturePackDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.FileExists
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::FileExists(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.FileExists");

	struct UBlueprintPathsLibrary_FileExists_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBlueprintPathsLibrary_FileExists_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.GameAgnosticSavedDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GameAgnosticSavedDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GameAgnosticSavedDir");

	struct UBlueprintPathsLibrary_GameAgnosticSavedDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GameAgnosticSavedDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.GameDevelopersDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GameDevelopersDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GameDevelopersDir");

	struct UBlueprintPathsLibrary_GameDevelopersDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GameDevelopersDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.GameSourceDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GameSourceDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GameSourceDir");

	struct UBlueprintPathsLibrary_GameSourceDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GameSourceDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.GameUserDeveloperDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GameUserDeveloperDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GameUserDeveloperDir");

	struct UBlueprintPathsLibrary_GameUserDeveloperDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GameUserDeveloperDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.GeneratedConfigDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GeneratedConfigDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GeneratedConfigDir");

	struct UBlueprintPathsLibrary_GeneratedConfigDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GeneratedConfigDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetBaseFilename
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRemovePath	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetBaseFilename(struct FString InPath, bool bRemovePath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetBaseFilename");

	struct UBlueprintPathsLibrary_GetBaseFilename_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool bRemovePath;			//Offset: 16 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetBaseFilename_Params params;
	params.InPath = InPath;
	params.bRemovePath = bRemovePath;

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
// Function Engine.BlueprintPathsLibrary.GetCleanFilename
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetCleanFilename(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetCleanFilename");

	struct UBlueprintPathsLibrary_GetCleanFilename_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetCleanFilename_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.GetEditorLocalizationPaths
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBlueprintPathsLibrary::GetEditorLocalizationPaths() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetEditorLocalizationPaths");

	struct UBlueprintPathsLibrary_GetEditorLocalizationPaths_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetEditorLocalizationPaths_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetEngineLocalizationPaths
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBlueprintPathsLibrary::GetEngineLocalizationPaths() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetEngineLocalizationPaths");

	struct UBlueprintPathsLibrary_GetEngineLocalizationPaths_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetEngineLocalizationPaths_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetExtension
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bIncludeDot	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetExtension(struct FString InPath, bool bIncludeDot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetExtension");

	struct UBlueprintPathsLibrary_GetExtension_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool bIncludeDot;			//Offset: 16 | ElementSize: 1
		struct FString ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetExtension_Params params;
	params.InPath = InPath;
	params.bIncludeDot = bIncludeDot;

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
// Function Engine.BlueprintPathsLibrary.GetGameLocalizationPaths
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBlueprintPathsLibrary::GetGameLocalizationPaths() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetGameLocalizationPaths");

	struct UBlueprintPathsLibrary_GetGameLocalizationPaths_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetGameLocalizationPaths_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetInvalidFileSystemChars
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetInvalidFileSystemChars() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetInvalidFileSystemChars");

	struct UBlueprintPathsLibrary_GetInvalidFileSystemChars_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetInvalidFileSystemChars_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetPath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetPath(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetPath");

	struct UBlueprintPathsLibrary_GetPath_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetPath_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.GetProjectFilePath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetProjectFilePath() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetProjectFilePath");

	struct UBlueprintPathsLibrary_GetProjectFilePath_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetProjectFilePath_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetPropertyNameLocalizationPaths
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetPropertyNameLocalizationPaths");

	struct UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetPropertyNameLocalizationPaths_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetRelativePathToRoot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::GetRelativePathToRoot() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetRelativePathToRoot");

	struct UBlueprintPathsLibrary_GetRelativePathToRoot_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetRelativePathToRoot_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetRestrictedFolderNames
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBlueprintPathsLibrary::GetRestrictedFolderNames() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetRestrictedFolderNames");

	struct UBlueprintPathsLibrary_GetRestrictedFolderNames_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetRestrictedFolderNames_Params params;

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
// Function Engine.BlueprintPathsLibrary.GetToolTipLocalizationPaths
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: TArray<struct FString>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FString> UBlueprintPathsLibrary::GetToolTipLocalizationPaths() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.GetToolTipLocalizationPaths");

	struct UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Params {
		TArray<struct FString> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_GetToolTipLocalizationPaths_Params params;

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
// Function Engine.BlueprintPathsLibrary.HasProjectPersistentDownloadDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::HasProjectPersistentDownloadDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.HasProjectPersistentDownloadDir");

	struct UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBlueprintPathsLibrary_HasProjectPersistentDownloadDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.IsDrive
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::IsDrive(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.IsDrive");

	struct UBlueprintPathsLibrary_IsDrive_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBlueprintPathsLibrary_IsDrive_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.IsProjectFilePathSet
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::IsProjectFilePathSet() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.IsProjectFilePathSet");

	struct UBlueprintPathsLibrary_IsProjectFilePathSet_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBlueprintPathsLibrary_IsProjectFilePathSet_Params params;

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
// Function Engine.BlueprintPathsLibrary.IsRelative
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::IsRelative(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.IsRelative");

	struct UBlueprintPathsLibrary_IsRelative_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBlueprintPathsLibrary_IsRelative_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.IsRestrictedPath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::IsRestrictedPath(struct FString InPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.IsRestrictedPath");

	struct UBlueprintPathsLibrary_IsRestrictedPath_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBlueprintPathsLibrary_IsRestrictedPath_Params params;
	params.InPath = InPath;

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
// Function Engine.BlueprintPathsLibrary.IsSamePath
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: PathA	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PathB	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::IsSamePath(struct FString PathA, struct FString PathB) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.IsSamePath");

	struct UBlueprintPathsLibrary_IsSamePath_Params {
		struct FString PathA;			//Offset: 0 | ElementSize: 16
		struct FString PathB;			//Offset: 16 | ElementSize: 16
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UBlueprintPathsLibrary_IsSamePath_Params params;
	params.PathA = PathA;
	params.PathB = PathB;

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
// Function Engine.BlueprintPathsLibrary.LaunchDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::LaunchDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.LaunchDir");

	struct UBlueprintPathsLibrary_LaunchDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_LaunchDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.MakePathRelativeTo
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InRelativeTo	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::MakePathRelativeTo(struct FString InPath, struct FString InRelativeTo, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.MakePathRelativeTo");

	struct UBlueprintPathsLibrary_MakePathRelativeTo_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString InRelativeTo;			//Offset: 16 | ElementSize: 16
		struct FString OutPath;			//Offset: 32 | ElementSize: 16
		bool ReturnValue;			//Offset: 48 | ElementSize: 1
	};
	UBlueprintPathsLibrary_MakePathRelativeTo_Params params;
	params.InPath = InPath;
	params.InRelativeTo = InRelativeTo;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.MakePlatformFilename
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::MakePlatformFilename(struct FString InPath, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.MakePlatformFilename");

	struct UBlueprintPathsLibrary_MakePlatformFilename_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString OutPath;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_MakePlatformFilename_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.MakeStandardFilename
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::MakeStandardFilename(struct FString InPath, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.MakeStandardFilename");

	struct UBlueprintPathsLibrary_MakeStandardFilename_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString OutPath;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_MakeStandardFilename_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.MakeValidFileName
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InReplacementChar	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::MakeValidFileName(struct FString inString, struct FString InReplacementChar) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.MakeValidFileName");

	struct UBlueprintPathsLibrary_MakeValidFileName_Params {
		struct FString inString;			//Offset: 0 | ElementSize: 16
		struct FString InReplacementChar;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBlueprintPathsLibrary_MakeValidFileName_Params params;
	params.inString = inString;
	params.InReplacementChar = InReplacementChar;

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
// Function Engine.BlueprintPathsLibrary.NormalizeDirectoryName
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::NormalizeDirectoryName(struct FString InPath, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.NormalizeDirectoryName");

	struct UBlueprintPathsLibrary_NormalizeDirectoryName_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString OutPath;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_NormalizeDirectoryName_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.NormalizeFilename
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::NormalizeFilename(struct FString InPath, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.NormalizeFilename");

	struct UBlueprintPathsLibrary_NormalizeFilename_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString OutPath;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_NormalizeFilename_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.ProfilingDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProfilingDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProfilingDir");

	struct UBlueprintPathsLibrary_ProfilingDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProfilingDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectConfigDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectConfigDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectConfigDir");

	struct UBlueprintPathsLibrary_ProjectConfigDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectConfigDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectContentDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectContentDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectContentDir");

	struct UBlueprintPathsLibrary_ProjectContentDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectContentDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectDir");

	struct UBlueprintPathsLibrary_ProjectDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectIntermediateDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectIntermediateDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectIntermediateDir");

	struct UBlueprintPathsLibrary_ProjectIntermediateDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectIntermediateDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectLogDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectLogDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectLogDir");

	struct UBlueprintPathsLibrary_ProjectLogDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectLogDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectModsDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectModsDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectModsDir");

	struct UBlueprintPathsLibrary_ProjectModsDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectModsDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectPersistentDownloadDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectPersistentDownloadDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectPersistentDownloadDir");

	struct UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectPersistentDownloadDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectPluginsDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectPluginsDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectPluginsDir");

	struct UBlueprintPathsLibrary_ProjectPluginsDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectPluginsDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectSavedDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectSavedDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectSavedDir");

	struct UBlueprintPathsLibrary_ProjectSavedDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectSavedDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ProjectUserDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ProjectUserDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ProjectUserDir");

	struct UBlueprintPathsLibrary_ProjectUserDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ProjectUserDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.RemoveDuplicateSlashes
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutPath	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::RemoveDuplicateSlashes(struct FString InPath, struct FString* OutPath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.RemoveDuplicateSlashes");

	struct UBlueprintPathsLibrary_RemoveDuplicateSlashes_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString OutPath;			//Offset: 16 | ElementSize: 16
	};
	UBlueprintPathsLibrary_RemoveDuplicateSlashes_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.RootDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::RootDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.RootDir");

	struct UBlueprintPathsLibrary_RootDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_RootDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.SandboxesDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::SandboxesDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.SandboxesDir");

	struct UBlueprintPathsLibrary_SandboxesDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_SandboxesDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ScreenShotDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ScreenShotDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ScreenShotDir");

	struct UBlueprintPathsLibrary_ScreenShotDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ScreenShotDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.SetExtension
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InNewExtension	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::SetExtension(struct FString InPath, struct FString InNewExtension) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.SetExtension");

	struct UBlueprintPathsLibrary_SetExtension_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString InNewExtension;			//Offset: 16 | ElementSize: 16
		struct FString ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBlueprintPathsLibrary_SetExtension_Params params;
	params.InPath = InPath;
	params.InNewExtension = InNewExtension;

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
// Function Engine.BlueprintPathsLibrary.SetProjectFilePath
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: NewGameProjectFilePath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::SetProjectFilePath(struct FString NewGameProjectFilePath) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.SetProjectFilePath");

	struct UBlueprintPathsLibrary_SetProjectFilePath_Params {
		struct FString NewGameProjectFilePath;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_SetProjectFilePath_Params params;
	params.NewGameProjectFilePath = NewGameProjectFilePath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.ShaderWorkingDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::ShaderWorkingDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ShaderWorkingDir");

	struct UBlueprintPathsLibrary_ShaderWorkingDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_ShaderWorkingDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.ShouldSaveToUserDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBlueprintPathsLibrary::ShouldSaveToUserDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ShouldSaveToUserDir");

	struct UBlueprintPathsLibrary_ShouldSaveToUserDir_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBlueprintPathsLibrary_ShouldSaveToUserDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.SourceConfigDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::SourceConfigDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.SourceConfigDir");

	struct UBlueprintPathsLibrary_SourceConfigDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_SourceConfigDir_Params params;

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
// Function Engine.BlueprintPathsLibrary.Split
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PathPart	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FilenamePart	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ExtensionPart	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::Split(struct FString InPath, struct FString* PathPart, struct FString* FilenamePart, struct FString* ExtensionPart) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.Split");

	struct UBlueprintPathsLibrary_Split_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		struct FString PathPart;			//Offset: 16 | ElementSize: 16
		struct FString FilenamePart;			//Offset: 32 | ElementSize: 16
		struct FString ExtensionPart;			//Offset: 48 | ElementSize: 16
	};
	UBlueprintPathsLibrary_Split_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PathPart != nullptr)
		*PathPart = params.PathPart;
	if (FilenamePart != nullptr)
		*FilenamePart = params.FilenamePart;
	if (ExtensionPart != nullptr)
		*ExtensionPart = params.ExtensionPart;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.ValidatePath
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: InPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bDidSucceed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutReason	Type: struct FText	Flags: Parm, OutParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBlueprintPathsLibrary::ValidatePath(struct FString InPath, bool* bDidSucceed, struct FText* OutReason) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.ValidatePath");

	struct UBlueprintPathsLibrary_ValidatePath_Params {
		struct FString InPath;			//Offset: 0 | ElementSize: 16
		bool bDidSucceed;			//Offset: 16 | ElementSize: 1
		struct FText OutReason;			//Offset: 24 | ElementSize: 24
	};
	UBlueprintPathsLibrary_ValidatePath_Params params;
	params.InPath = InPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (bDidSucceed != nullptr)
		*bDidSucceed = params.bDidSucceed;
	if (OutReason != nullptr)
		*OutReason = params.OutReason;
}

/////////////////////////////////////////////
// Function Engine.BlueprintPathsLibrary.VideoCaptureDir
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBlueprintPathsLibrary::VideoCaptureDir() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.BlueprintPathsLibrary.VideoCaptureDir");

	struct UBlueprintPathsLibrary_VideoCaptureDir_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UBlueprintPathsLibrary_VideoCaptureDir_Params params;

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