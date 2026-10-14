#include "Core.h"
#include "CoreModLoader.h"

#include "Mods/Registry.h"
#include "EngineInit.h"
#include "Mods/LoadOrder.h"
#include "MDML/Mod.h"
#include "MDML/IniFile.h"
#include "Runtime/LoaderConfig.h"
#include "MDML/Paths.h"

#include "EngineAddresses.h"

namespace mdml::mods {
	namespace {
		// System text for a Win32 error code, e.g. 126 -> "The specified module could not be found."
		std::string GetErrorMessage(DWORD error) {
			char* buffer = nullptr;
			DWORD length = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
				nullptr, error, 0, (LPSTR)&buffer, 0, nullptr);
			std::string message = (length && buffer) ? std::string(buffer, length) : "unknown error";
			if (buffer)
				LocalFree(buffer);
			while (!message.empty() && (message.back() == '\n' || message.back() == '\r' || message.back() == ' ' || message.back() == '.'))
				message.pop_back();
			return message;
		}
		// Loads a core mod DLL on the calling thread (MDML's init thread). The mod constructs itself in its DllMain
		// (CompleteModCreation adds it to Registry::CoreMods), so it is complete once LoadLibraryW returns.
		void LoadModDLL(const std::filesystem::path& path) {
			Log::Info_MDML("Loading mod {0}", runtime::FormatPath(path));
			if (LoadLibraryW(path.c_str())) {
				Log::Info_MDML("Loaded mod {0}", runtime::FormatPath(path));
			}
			else {
				const DWORD error = GetLastError();
				Log::Error_MDML("Could not load mod {0}: error {1} ({2})", runtime::FormatPath(path), error, GetErrorMessage(error));
			}
		}
		bool LessNoCase(const std::filesystem::path& a, const std::filesystem::path& b) {
			return _wcsicmp(a.c_str(), b.c_str()) < 0;
		}
		bool EqualNoCase(const std::filesystem::path& a, const std::filesystem::path& b) {
			return _wcsicmp(a.c_str(), b.c_str()) == 0;
		}
	}

	// Config/LoadOrder.ini lives next to NoOverwrite.ini / ModLoaderInfo.ini. Idempotent (CreateSysLinks runs before LoadCoreMods).
	void ResolveLoadOrder() {
		LoadOrder::Resolve(Mod::GetModsFolder(), std::filesystem::path(runtime::Config.NoOverwriteFile).parent_path() / "LoadOrder.ini");
	}

	void LoadCoreMods()
	{
		std::string path = Mod::GetModsFolder();
		if (!std::filesystem::exists(path))
		{
			std::filesystem::create_directory(path);
		}
		ResolveLoadOrder();
		//i use std::filesystem::path so every path looks the same here as a string
		std::vector<std::filesystem::path> mods;
		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			//load mods inside folders
			if (entry.is_directory()) {
				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");
				if (!LoadOrder::IsEnabled(dirName))
					continue;
				//load mod from ini: only folders whose mod.ini has a [Mod] section have a DLL
				if (std::filesystem::exists(iniPath)) {
					platform::IniFile modIni(iniPath);
					if (modIni.HasSection("Mod")) {
						mods.push_back(std::filesystem::path(dirPath + "/" + modIni.Get("Mod", "DLLPath", dirName + ".dll")));
					}
				}
				//load default mod dll, dirname + .dll
				else {
					std::string altPath = dirPath + "/" + dirName + ".dll";
					if (std::filesystem::exists(altPath)) {
						mods.push_back(std::filesystem::path(altPath).string());
					}
				}
			}
			//load dlls that are inside Content/Mods
			if (entry.path().extension().string() == ".dll")
			{
				if (!LoadOrder::IsEnabled(entry.path().stem().string()))
					continue;
				mods.push_back(entry.path().string());
			}
		}
		//deterministic load order: normalized paths (backslashes, no "\/" or ".."), sorted case-insensitively, no duplicates
		for (auto& mod : mods)
			mod = mod.lexically_normal();
		std::sort(mods.begin(), mods.end(), LessNoCase);
		mods.erase(std::unique(mods.begin(), mods.end(), EqualNoCase), mods.end());

		//order by Config/LoadOrder.ini; ties (several dlls of one mod) stay alphabetical
		const std::filesystem::path modsRoot = std::filesystem::path(path).lexically_normal();
		auto modNameOf = [&](const std::filesystem::path& mod) {
			auto rel = mod.lexically_relative(modsRoot);
			if (rel.empty() || *rel.begin() == "..")
				return mod.stem().string();
			return rel.has_parent_path() ? rel.begin()->string() : rel.stem().string();
		};
		std::stable_sort(mods.begin(), mods.end(), [&](const std::filesystem::path& a, const std::filesystem::path& b) {
			return LoadOrder::GetPosition(modNameOf(a)) < LoadOrder::GetPosition(modNameOf(b));
		});

		//load all mods one after another on this thread
		for (const auto& mod : mods) {
			if (!std::filesystem::exists(mod) || mod.extension().string() != ".dll") {
				Log::Warn_MDML("Skipping mod {0}: not an existing .dll file", runtime::FormatPath(mod));
				continue;
			}
			LoadModDLL(mod);
		}
		Log::Info_MDML("Loaded {0} core mod(s)", Registry::Get().CoreMods.size());
	}

	void InitCoreMods() {
		UE4::InitSDK();
		Log::Info_UML("Engine Classes Loaded");
		// InitializeMod usually registers events (SetupHooks) and may reorder the stack (MoveToFront): inside forEach
		// those changes are deferred until the loop is done.
		Registry::Get().CoreMods.forEach([](Mod* CurrentCoreMod) {
			if (CurrentCoreMod->IsFinishedCreating)
			{
				Log::Info_UML("InitializeMod Called For {0}", CurrentCoreMod->ModName.c_str());
				CurrentCoreMod->InitializeMod();
			}
			else
			{
				// The mod name was dropped by a misplaced comma before (code inventory C3).
				Log::Error_UML("Mod {0} wasnt setup in time", CurrentCoreMod->ModName);
			}
		});
		if (mdml::Addresses.StaticLoadObject)
		{
			Log::Info_UML("StaticLoadObject Found");
		}
		else
		{
			Log::Error_UML("StaticLoadObject Not Found");
		}
	}
}
