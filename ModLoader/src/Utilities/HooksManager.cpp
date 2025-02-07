#include "Core.h"
#include "MDML.h"
#include "Dumper.h"
#include "Memory.h"
#include "Globals.h"
#include "MinHook.h"
#include "HooksManager.h"
#include "Mod/ModLoader.h"
#include "UI/LoaderUI.h"

#include "UE4.h"

namespace HooksManager
{
	namespace HookedFunctions
	{
		struct PrintStringParams
		{
			UE4::FString Message;
		};

		struct GetPersistentObject
		{
			UE4::FString ModName;
		};

		struct FPakListEntry
		{
			uint32_t	ReadOrder;
			void*		PakFile;
		};

		PVOID(*origProcessFunction)(UE4::UObject*, UE4::FFrame*, void* const);
		PVOID hookProcessFunction(UE4::UObject* obj, UE4::FFrame* Frame, void* const Result)
		{
			PVOID ret = nullptr;
			if (!MDML::GameStateClassInitNotRan)
			{
				const std::string NodeName = Frame->Node->GetName();
				if(NodeName.empty())
					return origProcessFunction(obj, Frame, Result);

				if (NodeName == "PrintToModLoader")
				{
					auto msg = Frame->GetInputParams<PrintStringParams>()->Message;
					if (msg.IsValid())
					{
						Log::Trace_UML("{0}", msg.ToString());
					}
				}
				else if (NodeName == "GetPersistentObject")
				{
					auto ModName = Frame->GetInputParams<GetPersistentObject>()->ModName;
					for (size_t i = 0; i < Global::GetGlobals()->ModInfoList.size(); i++)
					{
						auto ModInfo = Global::GetGlobals()->ModInfoList[i];
						if (ModName.c_str() == ModInfo.ModName)
						{
							if (ModInfo.PersistentObject)
							{
								UE4::SetVariable<UE4::UObject*>(obj, "GetPersistentObjectReturnValue", ModInfo.PersistentObject);
							}
						}
					}
				}
				else if (void* funcPtr = Global::GetGlobals()->FindBPfunctionWrapper(NodeName)) {
					reinterpret_cast<void(*)(UE4::UObject*, UE4::FFrame*, void*)> (funcPtr)(obj, Frame, (void*)Result);
					return nullptr;
				}
			}
			return origProcessFunction(obj, Frame, Result);

		}

		PVOID(*origInitGameState)(void*);
		PVOID hookInitGameState(void* Ret)
		{
			MDML::InitGameState(Ret);
			return origInitGameState(Ret);
		}

		PVOID(*origBeginPlay)(UE4::AActor*);
		PVOID hookBeginPlay(UE4::AActor* Actor)
		{
			MDML::BeginPlay(Actor);
			return origBeginPlay(Actor);
		}

		PVOID(*origTick)(__int64, UE4::ELevelTick, float);
		PVOID hookTick(__int64 thisPtr, UE4::ELevelTick tick, float delta)
		{
			MDML::Tick(tick, delta);
			return origTick(thisPtr, tick, delta);
		}

		//returns true if we can overwrite the file
		bool isPakOverridePathValid(const std::filesystem::path& path) {
			if (!std::filesystem::exists(path))
				return false;
			auto str = MDML::FormatPath(path.string());
			if (str.find("\\Content\\") != str.npos) {
				if (SDK::SelectedGameProfile.disableOverwriteFiles.find(str) != SDK::SelectedGameProfile.disableOverwriteFiles.end()) {
					return !SDK::SelectedGameProfile.disableOverwriteFiles[str];
				}
				return true;
			}
			return false;
		}
		
		/* 
		(discord message by me): 
			in the originial ue 4.27.2 there are 2 versions of FindFileInPakFiles, 
			i tried locating this function now for around an hour.
			But the variant i dont need was easy to locate, after looking at the pseudo code 
			i noticed that the two functions were merged together

		static bool FPakPlatformFile::FindFileInPakFiles(
			TArray<FPakListEntry>& Paks, const TCHAR* Filename,
			TRefCountPtr<FPakFile>* OutPakFile, FPakEntry* OutEntry = nullptr)
		
		PVOID(*origFindFileInPakFiles)(UE4::TArray<FPakListEntry>&, const TCHAR*, void**,void*);
		*/


		// bool FPakPlatformFile::FindFileInPakFiles(const TCHAR* Filename, TRefCountPtr<FPakFile>* OutPakFile = nullptr, FPakEntry* OutEntry = nullptr)
		PVOID(*origFindFileInPakFiles)(void* ptrThis, const TCHAR* Filename, void** OutPakFile, struct FPakEntry* OutEntry);
		bool __fastcall hookFindFileInPakFiles(void* ptrThis, const TCHAR* Filename, void** OutPakFile, struct FPakEntry* OutEntry) {
			if (Filename) {
				std::wstring wstring(&Filename[0]);
				std::filesystem::path file(wstring);
				if (isPakOverridePathValid(file)) {
					if (OutPakFile)
						*OutPakFile = nullptr;
					OutEntry = nullptr;
					Log::Trace_MDML("Accepted FindFileInPakFiles: {0}", MDML::FormatPath(file.string()));
					return 0;
				}
				//Log::Info_MDML("Refused IsNonPakFilenameAllowed: {0}", MDML::FormatPath(file.string()));
			}
			//return origFindFileInPakFiles(Paks, Filename, OutPakFile, OutEntry); old
			return origFindFileInPakFiles(ptrThis, Filename, OutPakFile, OutEntry);
		}


		// bool FPakPlatformFile::IsNonPakFilenameAllowed(FPakPlatformFile *this, const struct FString *a2)
		PVOID(*origIsNonPakFilenameAllowed)(void* ptrThis, const struct UE4::FString* InFileName);
		bool __fastcall hookIsNonPakFilenameAllowed(void* ptrThis, const struct UE4::FString* InFileName) {
			//return 1;
			if (InFileName->c_str()) {
				std::filesystem::path file(InFileName->ToString());
				//Log::Info_MDML("Allowed IsNonPakFilenameAllowed: {0}", file.string());
				if (isPakOverridePathValid(file)) {
					Log::Trace_MDML("Accepted IsNonPakFilenameAllowed: {0}", MDML::FormatPath(file.string()));
					return 1;
				}
				//Log::Info_MDML("Refused IsNonPakFilenameAllowed: {0}", MDML::FormatPath(file.string()));
			}
			return origIsNonPakFilenameAllowed(ptrThis, InFileName);
		}
	};
	DWORD __stdcall InitHooks(LPVOID)
	{
		MinHook::Init();
		Log::Info_UML("MinHook Setup");
		Log::Info_UML("Loading Mods");

		if(SDK::SelectedGameProfile.ModOverwritesEnabled)
			ModLoader::CreateSysLinks();
		else
			ModLoader::DeleteSysLinks(true);//if there are old files delete them

		if (SDK::SelectedGameProfile.bPakOverride) {
			MinHook::Add(SDK::SelectedGameProfile.FindFileInPakFiles, &HookedFunctions::hookFindFileInPakFiles, &HookedFunctions::origFindFileInPakFiles, "FPakPlatformFile::FindFileInPakFiles");
			MinHook::Add(SDK::SelectedGameProfile.IsNonPakFilenameAllowed, &HookedFunctions::hookIsNonPakFilenameAllowed, &HookedFunctions::origIsNonPakFilenameAllowed, "FPakPlatformFile::IsNonPakFilenameAllowed");
			Log::Info_MDML("Pak overwrites loaded");
		}

		ModLoader::LoadMods();

		MinHook::Add(SDK::SelectedGameProfile.GameStateInit, &HookedFunctions::hookInitGameState, &HookedFunctions::origInitGameState, "AGameModeBase::InitGameState");
		MinHook::Add(SDK::SelectedGameProfile.BeginPlay, &HookedFunctions::hookBeginPlay, &HookedFunctions::origBeginPlay, "AActor::BeginPlay");
		MinHook::Add(SDK::SelectedGameProfile.Tick, &HookedFunctions::hookTick, &HookedFunctions::origTick, "UWorld::Tick");

		LoaderUI::GetUI()->CreateUILogicThread();
		if (!SDK::SelectedGameProfile.bDelayGUISpawn)
		{
			LoaderUI::HookDX();
		}
		return NULL;
	}

	void SetupHooks()
	{
		Log::Info_UML("Setting Up Loader");
		CreateThread(0, 0, InitHooks, 0, 0, 0);
	}
	void AddProcessInternalHook() {
		MinHook::Add(SDK::SelectedGameProfile.ProcessInternals, &HookedFunctions::hookProcessFunction, &HookedFunctions::origProcessFunction, "ProcessBlueprintFunctions");
	}
	void ShutDown() {
		if (SDK::SelectedGameProfile.ModOverwritesEnabled)
			ModLoader::DeleteSysLinks();
		MH_DisableHook(MH_ALL_HOOKS);
		MH_Uninitialize();
	}
};