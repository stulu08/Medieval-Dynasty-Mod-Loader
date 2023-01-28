#pragma once
#include "Utilities/EngineDefFinder.h"


namespace UE4 {
	class AActor;
	class UClass;
	struct FTransform;
	struct FActorSpawnParameters;

	enum class ELevelTick
	{
		/** Update the level time only. */
		TimeOnly = 0,
		/** Update time and viewports. */
		ViewportsOnly = 1,
		/** Update all. */
		All = 2,
		/** Delta time is zero, we are paused. Components don't tick. */
		PauseTick = 3,
	};
}
struct ModInfo;
class LOADER_API MDML {
public:
	static void InitGameState(void* Return);
	static void BeginPlay(class UE4::AActor* Actor);
	static void Tick(UE4::ELevelTick tick, float deltaTime);

	static void InitCoreMods();
	static void CreateMod(struct ModInfo& mod);
	static void CleanUpMods();

	static class UE4::AActor* SpawnActor(class UE4::UClass* Class, const struct UE4::FTransform& transform, struct UE4::FActorSpawnParameters spawnParams);

	static void Start();
	static void ShutDown();

	static std::string FormatPath(const std::filesystem::path& path);
	//%LocalAppData%/Medieval_Dynasty/Saved
	static std::string GetDataFolder();

	static inline bool IsProcessInternalsHooked = false;
	static inline bool GameStateClassInitNotRan = true;
};

namespace UE4 {
	static void InitSDK()
	{
		DWORD64 Names_offset = NULL;
		if (!FName::IsUsingNamePool())
		{
			Names_offset = (*(DWORD64*)(SDK::SelectedGameProfile.GName));
			FName::GNames = (DWORD*)Names_offset;
		}
		else
		{
			Names_offset = (DWORD64)(SDK::SelectedGameProfile.GName);
			FName::GNames = (DWORD*)Names_offset;
		}

		DWORD64   GObjObjects_offset = NULL;
		GObjObjects_offset = (DWORD64)(SDK::SelectedGameProfile.GObject);
		UObject::GObjects = (FUObjectArray*)GObjObjects_offset;

		DWORD64   GWorldObjects = NULL;
		GWorldObjects = (DWORD64)(SDK::SelectedGameProfile.GWorld);
		UWorld::GWorld = (UWorld**)GWorldObjects;

#ifdef UNREALENGINEMODLOADER_EXPORTS //Stops dumb errors from the ExampleMod shit
		if (SDK::SelectedGameProfile.IsUObjectMissing)
		{
			Log::Warn_UML("UObject Not Defined. Scanning for def.");
			UE4::UObject* CoreUobjectObject;
			UE4::UObject* UEObject;
			if (SDK::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray)
			{
				CoreUobjectObject = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(1).Object;
				UEObject = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(2).Object;
			}
			else
			{
				CoreUobjectObject = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(1).Object;
				UEObject = UE4::UObject::GObjects->GetAsTUArray().GetByIndex(2).Object;
			}
			ClassDefFinder::FindUObjectDefs(CoreUobjectObject, UEObject);
			SDK::SelectedGameProfile.IsUObjectMissing = false;
		}

		if (SDK::SelectedGameProfile.IsUFieldMissing)
		{
			Log::Warn_UML("UField Not Defined. Scanning for def.");
			ClassDefFinder::FindUFieldDefs();
			SDK::SelectedGameProfile.IsUFieldMissing = false;
		}
		if (SDK::SelectedGameProfile.IsUStructMissing)
		{
			Log::Warn_UML("UStruct Not Defined. Scanning for def.");
			ClassDefFinder::FindUStructDefs();
			SDK::SelectedGameProfile.IsUStructMissing = false;
		}
		if (SDK::SelectedGameProfile.IsUEnumMissing)
		{
			Log::Warn_MDML("UEnum Not Defined. Scanning for def.");
			ClassDefFinder::FindUEnumDefs();
			SDK::SelectedGameProfile.IsUEnumMissing = false;
		}
		if (SDK::SelectedGameProfile.IsUFunctionMissing)
		{
			Log::Warn_UML("UFunction Not Defined. Scanning for def.");
			ClassDefFinder::FindUFunctionDefs();
			SDK::SelectedGameProfile.IsUFunctionMissing = false;
		}

		if (SDK::SelectedGameProfile.IsPropertyMissing)
		{
			ClassDefFinder::FindUEProperty();
		}
		Log::Info_UML("All Engine Classes Found");
#endif
	}
}