#include "Core.h"
#include "MDML.h"
#include "Runtime/Dumper.h"
#include "Memory.h"
#include "Globals.h"
#include "Hooks.h"
#include "HooksManager.h"
#include "Mods/ModLoader.h"
#include "UI/LoaderUI.h"

#include "UE4.h"
#include "EngineAddresses.h"
#include "Runtime/LoaderConfig.h"

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
				if (mdml::runtime::Config.disableOverwriteFiles.find(str) != mdml::runtime::Config.disableOverwriteFiles.end()) {
					return !mdml::runtime::Config.disableOverwriteFiles[str];
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
	// Milliseconds since the game process was created, for the startup timing log lines.
	static unsigned long long MsSinceProcessStart()
	{
		FILETIME creation, exitTime, kernel, user, now;
		if (!GetProcessTimes(GetCurrentProcess(), &creation, &exitTime, &kernel, &user))
			return 0;
		GetSystemTimeAsFileTime(&now);
		ULARGE_INTEGER c, n;
		c.LowPart = creation.dwLowDateTime;
		c.HighPart = creation.dwHighDateTime;
		n.LowPart = now.dwLowDateTime;
		n.HighPart = now.dwHighDateTime;
		return n.QuadPart > c.QuadPart ? (n.QuadPart - c.QuadPart) / 10000 : 0;
	}

	// How many UObjects the engine has created so far: GUObjectArray.ObjObjects.NumElements
	// (FUObjectArray::ObjObjects at 0x10, FChunkedFixedUObjectArray::NumElements at 0x14, PDB-checked for 4.27).
	// Only logged, to see how far the engine got when the pak hooks went live.
	static int GetUObjectCount()
	{
		if (!mdml::Addresses.GObject || !mdml::Addresses.IsUsingFChunkedFixedUObjectArray)
			return -1;
		return *(volatile int*)(mdml::Addresses.GObject + 0x10 + 0x14);
	}

	// Runs on MDML's init thread (see MDML::Start) right after SetupProfile. Mods are loaded synchronously,
	// so every core mod is constructed before the game hooks (InitGameState, BeginPlay, Tick) can fire.
	void SetupHooks()
	{
		Log::Info_UML("Setting Up Loader");
		// The process' only MH_Initialize; mods hook through mdml::platform::Hooks (Platform/Hooks.h).
		mdml::platform::Hooks::Initialize();
		Log::Info_UML("MinHook Setup");
		Log::Info_UML("Loading Mods");

		if(mdml::runtime::Config.ModOverwritesEnabled)
			ModLoader::CreateSysLinks();
		else
			ModLoader::DeleteSysLinks(true);//if there are old files delete them

		if (mdml::runtime::Config.bPakOverride) {
			mdml::platform::Hooks::Add(mdml::Addresses.FindFileInPakFiles, &HookedFunctions::hookFindFileInPakFiles, &HookedFunctions::origFindFileInPakFiles, "FPakPlatformFile::FindFileInPakFiles");
			mdml::platform::Hooks::Add(mdml::Addresses.IsNonPakFilenameAllowed, &HookedFunctions::hookIsNonPakFilenameAllowed, &HookedFunctions::origIsNonPakFilenameAllowed, "FPakPlatformFile::IsNonPakFilenameAllowed");
			Log::Info_MDML("Pak overwrites loaded ({0} ms after process start, {1} UObjects exist)", MsSinceProcessStart(), GetUObjectCount());
		}

		ModLoader::LoadMods();

		mdml::platform::Hooks::Add(mdml::Addresses.GameStateInit, &HookedFunctions::hookInitGameState, &HookedFunctions::origInitGameState, "AGameModeBase::InitGameState");
		mdml::platform::Hooks::Add(mdml::Addresses.BeginPlay, &HookedFunctions::hookBeginPlay, &HookedFunctions::origBeginPlay, "AActor::BeginPlay");
		mdml::platform::Hooks::Add(mdml::Addresses.Tick, &HookedFunctions::hookTick, &HookedFunctions::origTick, "UWorld::Tick");

		LoaderUI::GetUI()->CreateUILogicThread();
		if (!mdml::runtime::Config.bDelayGUISpawn)
		{
			LoaderUI::HookDX();
		}
		Log::Info_MDML("Loader setup finished ({0} ms after process start)", MsSinceProcessStart());
	}
	void AddProcessInternalHook() {
		mdml::platform::Hooks::Add(mdml::Addresses.ProcessInternals, &HookedFunctions::hookProcessFunction, &HookedFunctions::origProcessFunction, "ProcessBlueprintFunctions");
	}
	void ShutDown() {
		if (mdml::runtime::Config.ModOverwritesEnabled)
			ModLoader::DeleteSysLinks();
		mdml::platform::Hooks::Shutdown(); // MH_DisableHook(MH_ALL_HOOKS) + MH_Uninitialize, for the loader's and all mods' hooks
	}
};