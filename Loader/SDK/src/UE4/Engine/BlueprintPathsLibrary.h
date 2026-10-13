#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.BlueprintPathsLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPathsLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FString AutomationDir();

	static struct FString AutomationLogDir();

	static struct FString AutomationTransientDir();

	static struct FString BugItDir();

	static struct FString ChangeExtension(struct FString InPath, struct FString InNewExtension);

	static struct FString CloudDir();

	static bool CollapseRelativeDirectories(struct FString InPath, struct FString* OutPath);

	static struct FString Combine(const TArray<struct FString>& InPaths);

	static struct FString ConvertFromSandboxPath(struct FString InPath, struct FString InSandboxName);

	static struct FString ConvertRelativePathToFull(struct FString InPath, struct FString InBasePath);

	static struct FString ConvertToSandboxPath(struct FString InPath, struct FString InSandboxName);

	static struct FString CreateTempFilename(struct FString Path, struct FString Prefix, struct FString Extension);

	static struct FString DiffDir();

	static bool DirectoryExists(struct FString InPath);

	static struct FString EngineConfigDir();

	static struct FString EngineContentDir();

	static struct FString EngineDir();

	static struct FString EngineIntermediateDir();

	static struct FString EnginePluginsDir();

	static struct FString EngineSavedDir();

	static struct FString EngineSourceDir();

	static struct FString EngineUserDir();

	static struct FString EngineVersionAgnosticUserDir();

	static struct FString EnterpriseDir();

	static struct FString EnterpriseFeaturePackDir();

	static struct FString EnterprisePluginsDir();

	static struct FString FeaturePackDir();

	static bool FileExists(struct FString InPath);

	static struct FString GameAgnosticSavedDir();

	static struct FString GameDevelopersDir();

	static struct FString GameSourceDir();

	static struct FString GameUserDeveloperDir();

	static struct FString GeneratedConfigDir();

	static struct FString GetBaseFilename(struct FString InPath, bool bRemovePath);

	static struct FString GetCleanFilename(struct FString InPath);

	static TArray<struct FString> GetEditorLocalizationPaths();

	static TArray<struct FString> GetEngineLocalizationPaths();

	static struct FString GetExtension(struct FString InPath, bool bIncludeDot);

	static TArray<struct FString> GetGameLocalizationPaths();

	static struct FString GetInvalidFileSystemChars();

	static struct FString GetPath(struct FString InPath);

	static struct FString GetProjectFilePath();

	static TArray<struct FString> GetPropertyNameLocalizationPaths();

	static struct FString GetRelativePathToRoot();

	static TArray<struct FString> GetRestrictedFolderNames();

	static TArray<struct FString> GetToolTipLocalizationPaths();

	static bool HasProjectPersistentDownloadDir();

	static bool IsDrive(struct FString InPath);

	static bool IsProjectFilePathSet();

	static bool IsRelative(struct FString InPath);

	static bool IsRestrictedPath(struct FString InPath);

	static bool IsSamePath(struct FString PathA, struct FString PathB);

	static struct FString LaunchDir();

	static bool MakePathRelativeTo(struct FString InPath, struct FString InRelativeTo, struct FString* OutPath);

	static void MakePlatformFilename(struct FString InPath, struct FString* OutPath);

	static void MakeStandardFilename(struct FString InPath, struct FString* OutPath);

	static struct FString MakeValidFileName(struct FString inString, struct FString InReplacementChar);

	static void NormalizeDirectoryName(struct FString InPath, struct FString* OutPath);

	static void NormalizeFilename(struct FString InPath, struct FString* OutPath);

	static struct FString ProfilingDir();

	static struct FString ProjectConfigDir();

	static struct FString ProjectContentDir();

	static struct FString ProjectDir();

	static struct FString ProjectIntermediateDir();

	static struct FString ProjectLogDir();

	static struct FString ProjectModsDir();

	static struct FString ProjectPersistentDownloadDir();

	static struct FString ProjectPluginsDir();

	static struct FString ProjectSavedDir();

	static struct FString ProjectUserDir();

	static void RemoveDuplicateSlashes(struct FString InPath, struct FString* OutPath);

	static struct FString RootDir();

	static struct FString SandboxesDir();

	static struct FString ScreenShotDir();

	static struct FString SetExtension(struct FString InPath, struct FString InNewExtension);

	static void SetProjectFilePath(struct FString NewGameProjectFilePath);

	static struct FString ShaderWorkingDir();

	static bool ShouldSaveToUserDir();

	static struct FString SourceConfigDir();

	static void Split(struct FString InPath, struct FString* PathPart, struct FString* FilenamePart, struct FString* ExtensionPart);

	static void ValidatePath(struct FString InPath, bool* bDidSucceed, struct FText* OutReason);

	static struct FString VideoCaptureDir();

#pragma endregion
};
};