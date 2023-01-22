#include "Core.h"
#include "HooksManager.h"
#include "Utilities/MinHook.h"
#include "Utilities/Dumper.h"
#include "Utilities/Memory.h"
#include "UE4/Ue4.hpp"
#include "Mod/ModLoader.h"
#include "UI/LoaderUI.h"
#include "MDML.h"
#include "Globals.h"

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
				if (Frame->Node->GetName() == "PrintToModLoader")
				{
					auto msg = Frame->GetInputParams<PrintStringParams>()->Message;
					if (msg.IsValid())
					{
						Log::Trace_UML("{0}", msg.ToString());
					}
				}
				if (Frame->Node->GetName() == "GetPersistentObject")
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
				for (size_t i = 0; i < Global::GetGlobals()->GetBPFunctionWrappers().size(); i++)
				{
					if (Frame->Node->GetName() == Global::GetGlobals()->GetBPFunctionWrappers()[i].FunctionName)
					{
						reinterpret_cast<void(*)(UE4::UObject*, UE4::FFrame*, void*)> (Global::GetGlobals()->GetBPFunctionWrappers()[i].FuncPtr) (obj, Frame, (void*)Result);
						return nullptr;
					}
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
		//returns true if we can overwrite the file
		bool isPakOverridePathValid(const std::filesystem::path& path) {
			if (!std::filesystem::exists(path))
				return false;
			auto str = MDML::FormatPath(path.string());
			if (str.find("\\Content\\") != str.npos) {
				if (MDML::SelectedGameProfile.disableOverwriteFiles.find(str) != MDML::SelectedGameProfile.disableOverwriteFiles.end()) {
					return !MDML::SelectedGameProfile.disableOverwriteFiles[str];
				}
				return true;
			}
			return false;
		}
		
		// 0000000142505EB0 : UE4Game-Win64-Shipping.exe/pdb
		// 00000001425ED830 : Medieval_Dynasty-Win64-Shipping.exe
		// __int64 __fastcall FPakPlatformFile::FindFileInPakFiles(__int64 a1, _WORD *a2, __int64 *a3, __int64 a4)
		PVOID(*origFindFileInPakFiles)(UE4::TArray<FPakListEntry>&, const TCHAR*, void**,void*);
		bool __fastcall hookFindFileInPakFiles(UE4::TArray<FPakListEntry>& Paks, const TCHAR* Filename, void** OutPakFile, void* OutEntry) {
			if (Filename) {
				std::wstring wstring(&Filename[0]);
				std::filesystem::path file(wstring);
				if (isPakOverridePathValid(file)) {
					if(OutPakFile)
						*OutPakFile = nullptr;
					OutEntry = nullptr;
					Log::Trace_MDML("Accepted FindFileInPakFiles: {0}", MDML::FormatPath(file.string()));
					return 0;
				}
				//Log::Info_MDML("Refused IsNonPakFilenameAllowed: {0}", MDML::FormatPath(file.string()));
			}
			return origFindFileInPakFiles(Paks, Filename, OutPakFile, OutEntry);
		}
		// 000000014250A8D0 : UE4Game-Win64-Shipping.exe/pdb
		// 00000001425F2250 : Medieval_Dynasty-Win64-Shipping.exe
		// __int64 __fastcall FPakPlatformFile::IsNonPakFilenameAllowed(FPakPlatformFile *this, const struct FString *a2)
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

		if(MDML::SelectedGameProfile.ModOverridesEnabled)
			ModLoader::CreateSysLinks();
		else
			ModLoader::DeleteSysLinks(true);//if there are old files delete them

		if (MDML::SelectedGameProfile.bPakOverride) {
			MinHook::Add(MDML::SelectedGameProfile.FindFileInPakFiles, &HookedFunctions::hookFindFileInPakFiles, &HookedFunctions::origFindFileInPakFiles, "FPakPlatformFile::FindFileInPakFiles");
			MinHook::Add(MDML::SelectedGameProfile.IsNonPakFilenameAllowed, &HookedFunctions::hookIsNonPakFilenameAllowed, &HookedFunctions::origIsNonPakFilenameAllowed, "FPakPlatformFile::IsNonPakFilenameAllowed");
			Log::Info_MDML("Pak Overrides loaded");
		}

		ModLoader::LoadMods();

		MinHook::Add(MDML::SelectedGameProfile.GameStateInit, &HookedFunctions::hookInitGameState, &HookedFunctions::origInitGameState, "AGameModeBase::InitGameState");
		MinHook::Add(MDML::SelectedGameProfile.BeginPlay, &HookedFunctions::hookBeginPlay, &HookedFunctions::origBeginPlay, "AActor::BeginPlay");

		LoaderUI::GetUI()->CreateUILogicThread();
		if (!MDML::SelectedGameProfile.bDelayGUISpawn)
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
		MinHook::Add(MDML::SelectedGameProfile.ProcessInternals, &HookedFunctions::hookProcessFunction, &HookedFunctions::origProcessFunction, "ProcessBlueprintFunctions");
	}
	void ShutDown() {
		if (MDML::SelectedGameProfile.ModOverridesEnabled)
			ModLoader::DeleteSysLinks();
		MH_DisableHook(MH_ALL_HOOKS);
		MH_Uninitialize();
	}
};