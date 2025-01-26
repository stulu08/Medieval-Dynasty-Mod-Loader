#pragma once
#include "Core.h"
namespace spdlog {
	class logger;
}
struct Offsets {
	struct {
		uint16_t Index = 0x0;
		uint16_t Class = 0x0;
		uint16_t Name = 0x0;
		uint16_t Outer = 0x0;
	} UObject;
	struct {
		uint16_t Next = 0x0;
	} UField;
	struct {
		uint16_t CppType = 0x0;
		uint16_t Names = 0x0;
		uint16_t CppForm = 0x0;
		uint16_t Flags = 0x0;
		uint16_t DisplayNameFn = 0x0;
		uint16_t UserDefDisplayNameMap = 0x0;
	} UEnum;
	struct {
		uint16_t SuperStruct = 0x0;
		uint16_t Children = 0x0;
		uint16_t PropertiesSize = 0x0;
		uint16_t OverallUStructSize = 0x0;
	} UStruct;
	struct {
		uint16_t FunctionFlags = 0x0;
		uint16_t NumParams = 0x0;
		uint16_t ParamsSize = 0x0;
		uint16_t ReturnValueOffset = 0x0;
		uint16_t Func = 0x0;
	} UFunction;
	struct {
		uint16_t Next = 0x0;
		uint16_t Name = 0x0;
		uint16_t ClassPrivate = 0x0;
	} FField;
	struct {
		uint16_t Name;
		uint16_t ID;
		uint16_t CastFlags;
		uint16_t SuperClass;
	} FFieldClass;
	struct {
		uint16_t ArrayDim = 0x0;
		uint16_t ElementSize = 0x0;
		uint16_t Offset = 0x0;
		uint16_t Flags = 0x0;
	} Property;
#pragma region Properties 
	struct {
		uint16_t Enum = 0x0;
	} ByteProperty;
	struct {
		uint16_t FieldSize = 0x0;
		uint16_t ByteOffset = 0x0;
		uint16_t ByteMask = 0x0;
		uint16_t FieldMask = 0x0;
	} BoolProperty;
	struct {
		uint16_t PropertyClass = 0x0;
	} ObjectPropertyBase;
	struct {
		uint16_t MetaClass = 0x0;
	} ClassProperty;
	struct {
		uint16_t InterfaceClass = 0x0;
	} InterfaceProperty;
	struct {
		uint16_t MetaClass = 0x0;
	} AssetClassProperty;
	struct {
		uint16_t Struct = 0x0;
	} StructProperty;
	struct {
		uint16_t Inner = 0x0;
	} ArrayProperty;
	struct {
		uint16_t Key = 0x0;
		uint16_t Value = 0x0;
	} MapProperty;
	struct {
		uint16_t SignatureFunction = 0x0;
	} DelegateProperty;
	struct {
		uint16_t SignatureFunction = 0x0;
	} MulticastDelegateProperty;
	struct {
		uint16_t Enum = 0x0;
		uint16_t UnderlyingProp = 0x0;
	} EnumProperty;
#pragma endregion
};
class GameProfile
{
public:
	std::string LogDir;
	std::string ImGuiFile;
	std::string NoOverwriteFile;
	std::string HardLinksFile;
	bool bEnableGUI = false;

	int UsesFNamePool = 0;
	std::string BeginPlayOverwrite = "Class Engine.PlayerController";

	bool IsGInfoPatterns = false;
	DWORD64 GName = 0x0;
	DWORD64 GObject = 0x0;
	DWORD64 GWorld = 0x0;
	bool IsUsingDeferedSpawn = false;
	bool IsUsingFChunkedFixedUObjectArray = false;
	bool IsUsing4_22 = false;

	bool IsFunctionPatterns = false;
	DWORD64 ProcessEvent = 0x0;
	DWORD64 CreateDefaultObject = 0x0;
	DWORD64 GameStateInit = 0x0;
	DWORD64 BeginPlay = 0x0;
	DWORD64 Tick = 0x0;
	DWORD64 StaticLoadObject = 0x0;
	DWORD64 StaticFindObject = 0x0;
	DWORD64 SpawnActorFTrans = 0x0;
	DWORD64 GetDisplayNameTextByIndex = 0x0;

	DWORD64 ProcessInternals = 0x0;
	DWORD64 StaticConstructObject_Internal = 0x0;
	bool IsUsingUpdatedStaticConstruct = false;

	bool ModOverwritesEnabled = false;
	bool UseHardLinks = false;

	DWORD64 CallFunctionByNameWithArguments = 0x0;

	//bool FPakPlatformFile::IsNonPakFilenameAllowed(const FString & InFilename)
	//Need to return true
	DWORD64 IsNonPakFilenameAllowed = 0x0;
	//static bool FPakPlatformFile::FindFileInPakFiles(TArray<FPakListEntry>& Paks, const TCHAR * Filename, TRefCountPtr<FPakFile>* OutPakFile, FPakEntry * OutEntry = nullptr)
	//Need to return false is file exists
	DWORD64 FindFileInPakFiles = 0x0;

	bool IsUObjectMissing = true;
	bool IsUFieldMissing = true;
	bool IsUEnumMissing = true;
	bool IsUStructMissing = true;
	bool IsUFunctionMissing = true;

	bool IsPropertyMissing = false;

	bool bIsFProperty = false;

	bool bIsDefaultObjectArrayed = false;

	bool bDelayGUISpawn = false;

	bool bPakOverride = false;

	Offsets defs;

	//yes if we dont want to override it and false if we want to
	std::unordered_map<std::string, bool> disableOverwriteFiles;
	//where the Engine and Game folder is located with the Manifest_NonUFSFiles_Win64.txt
	std::string rootGameDir = "";

	Ref<class spdlog::logger> UnrealLogger = nullptr;
};
#ifdef DEFINE_SDK_PROFILE_EXPORT
class __declspec(dllexport) SDK {
#else
class __declspec(dllimport) SDK {
#endif
public:
	static GameProfile SelectedGameProfile;
};