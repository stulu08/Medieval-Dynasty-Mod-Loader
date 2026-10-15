#include "Core.h"
#include "ModLoading.h"

#include <atomic>

#include "Mods/Registry.h"
#include "EngineInit.h"
#include "Mods/LoadOrder.h"
#include "MDML/CoreMod.h"
#include "MDML/Mod.h"
#include "MDML/IniFile.h"
#include "Runtime/LoaderConfig.h"
#include "MDML/Paths.h"

#include "EngineAddresses.h"

namespace mdml::mods {
	namespace {
		// What phase 0 read from [Core]; the DLL is loaded in phase 1.
		struct CoreSpec {
			Mod* Owner = nullptr;
			std::string Dll;
			std::string Logger = "File";
			bool MenuButton = false;
		};
		std::vector<CoreSpec> s_coreSpecs;

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
		bool LessNoCase(const std::string& a, const std::string& b) {
			return _stricmp(a.c_str(), b.c_str()) < 0;
		}
		std::string ToLower(std::string text) {
			for (auto& c : text)
				c = (char)tolower((unsigned char)c);
			return text;
		}
		std::vector<std::string> Split(const std::string& text) {
			std::vector<std::string> parts;
			std::stringstream stream(text);
			for (std::string item; std::getline(stream, item, ','); ) {
				const size_t first = item.find_first_not_of(" \t");
				if (first == std::string::npos)
					continue;
				parts.push_back(item.substr(first, item.find_last_not_of(" \t") - first + 1));
			}
			return parts;
		}

		// [Overwrite] Folder: every regular file in it goes to the same relative path under Content (was the scan in CreateSysLinks).
		void ScanOverwriteFolder(const Mod& mod, OverwriteMod& overwrite) {
			if (overwrite.Folder.empty())
				return;
			std::error_code ec;
			const std::filesystem::path folderPath = std::filesystem::path(mod.Info().Path) / overwrite.Folder;
			if (!std::filesystem::exists(folderPath, ec)) {
				Log::Warn_MDML("Mod {0}: [Overwrite] Folder {1} does not exist, no files added", mod.Info().Name, runtime::FormatPath(folderPath));
				return;
			}
			std::filesystem::recursive_directory_iterator fileIt(folderPath, ec);
			for (; !ec && fileIt != std::filesystem::recursive_directory_iterator(); fileIt.increment(ec)) {
				const auto& dirEntry = *fileIt;
				if (dirEntry.is_directory())
					continue;
				const auto& path = dirEntry.path();
				if (!dirEntry.is_regular_file()) {
					Log::Warn_MDML("Skipping file linking {0}, source it is not a regular file", runtime::FormatPath(path));
					continue;
				}
				overwrite.Files.push_back({ path, std::filesystem::relative(path, folderPath).make_preferred().string() });
			}
			if (ec)
				Log::Error_MDML("Could not read the files of mod {0} ({1}), the rest of its Folder is skipped", mod.Info().Name, ec.message());
		}

		// Phase 0 for one mod folder. A folder whose mod.ini declares no component is not a mod.
		void ScanMod(const std::string& dirName, const std::filesystem::path& dirPath) {
			platform::IniFile ini(dirPath / "mod.ini");
			const bool hasCore = ini.HasSection("Core");
			const bool hasBlueprint = ini.HasSection("Blueprint");
			const bool hasOverwrite = ini.HasSection("Overwrite");
			if (!hasCore && !hasBlueprint && !hasOverwrite) {
				Log::Info_MDML("Mod folder {0}: mod.ini declares no [Core], [Blueprint] or [Overwrite] section, skipped", dirName);
				return;
			}

			ModInfo info;
			info.Folder = dirName;
			info.Path = dirPath.string();
			info.Name = ini.Get("Mod", "Name", dirName);
			info.Version = ini.Get("Mod", "Version", info.Version);
			info.Author = ini.Get("Mod", "Author", info.Author);
			info.Description = ini.Get("Mod", "Description", "");
			Mod& mod = ModAccess::Create(std::move(info));

			if (hasCore) {
				CoreSpec spec;
				spec.Owner = &mod;
				spec.Dll = ini.Get("Core", "Dll", dirName + ".dll");
				spec.Logger = ini.Get("Core", "Logger", spec.Logger);
				spec.MenuButton = ini.GetBool("Core", "MenuButton", false);
				s_coreSpecs.push_back(std::move(spec));
			}
			if (hasBlueprint) {
				BlueprintMod& blueprint = ModAccess::EnsureBlueprint(mod);
				blueprint.ActorFile = ini.Get("Blueprint", "Actor", "");
				blueprint.SpawnIn = ini.Get("Blueprint", "SpawnIn", blueprint.SpawnIn);
				blueprint.PersistentFile = ini.Get("Blueprint", "Persistent", "");
				blueprint.Events = Split(ini.Get("Blueprint", "Events", ""));
			}
			if (hasOverwrite) {
				OverwriteMod& overwrite = ModAccess::EnsureOverwrite(mod);
				overwrite.Folder = ini.Get("Overwrite", "Folder", "");
				ScanOverwriteFolder(mod, overwrite);
			}
			std::string components;
			if (hasCore)
				components += "Core ";
			if (hasBlueprint)
				components += "Blueprint ";
			if (hasOverwrite)
				components += "Overwrite(" + std::to_string(mod.Overwrite()->Files.size()) + " files)";
			Log::Info_MDML("Mod {0} {1} ({2}): {3}", mod.Info().Name, mod.Info().Version, dirName, components);
		}

		// A failed core drops the WHOLE mod (owner decision 2026-10-15): no Core, Blueprint or Overwrite component of it is
		// registered. The mod stays in the list, marked failed (F1 window).
		void FailMod(Mod& mod, const std::string& reason) {
			const std::string name = mod.Info().Name;
			ModAccess::Fail(mod, reason);
			Log::Error_MDML("Mod {0} FAILED, the whole mod is dropped (no Core, Blueprint or Overwrite component is registered): {1}", name, reason);
		}

		// Loads the DLL of one [Core] section on the calling thread (MDML's init thread), creates the CoreMod and calls OnLoad.
		void LoadCore(const CoreSpec& spec) {
			Mod& mod = *spec.Owner;
			const std::string& name = mod.Info().Name;
			const std::filesystem::path dll = (std::filesystem::path(mod.Info().Path) / spec.Dll).lexically_normal();
			std::error_code ec;
			if (!std::filesystem::is_regular_file(dll, ec) || dll.extension() != ".dll") {
				FailMod(mod, "[Core] Dll " + runtime::FormatPath(dll) + " is not an existing .dll file");
				return;
			}
			Log::Info_MDML("Loading mod {0}", runtime::FormatPath(dll));
			HMODULE module = LoadLibraryW(dll.c_str());
			if (!module) {
				const DWORD error = GetLastError();
				FailMod(mod, "could not load " + runtime::FormatPath(dll) + ": error " + std::to_string(error) + " (" + GetErrorMessage(error) + ")");
				return;
			}
			auto create = reinterpret_cast<CoreMod*(*)()>(GetProcAddress(module, "MDML_CreateMod"));
			if (!create) {
				FreeLibrary(module);
				FailMod(mod, runtime::FormatPath(dll) + " has no MDML_CreateMod export (add MDML_MOD(YourClass), see docs/guides/Modding.md)");
				return;
			}
			const char* loaderVersion = reinterpret_cast<const char*>(GetProcAddress(module, "MDML_ModLoaderVersion"));
			const char* gameVersion = reinterpret_cast<const char*>(GetProcAddress(module, "MDML_MedievalVersion"));
			if (!loaderVersion || std::string(loaderVersion) != MODLOADER_VERSION)
				Log::Warn_MDML("Mod: {0} was created with a different version of the MDML ({1}, this is {2}). This mod may be unstable.", name, loaderVersion ? loaderVersion : "unknown", MODLOADER_VERSION);
			if (!gameVersion || std::string(gameVersion) != MEDIEVAL_VERSION)
				Log::Warn_MDML("Mod: {0} was created for a different version of Medieval Dynasty ({1}, this is {2}). This mod may be unstable.", name, gameVersion ? gameVersion : "unknown", MEDIEVAL_VERSION);

			CoreMod* core = nullptr;
			try {
				core = create();
			}
			catch (const std::exception& ex) {
				Log::Error_MDML("Mod {0}: the constructor threw: {1}", name, ex.what());
			}
			catch (...) {
				Log::Error_MDML("Mod {0}: the constructor threw", name);
			}
			if (!core) {
				FailMod(mod, "MDML_CreateMod gave no CoreMod (its constructor threw or returned null)");
				return;
			}

			ModAccess::SetCore(mod, core, module);
			core->UseMenuButton = spec.MenuButton;
			Ref<Logger> logger;
			const std::string loggerKind = ToLower(spec.Logger);
			if (loggerKind == "file") {
				const std::string logFile = Log::getLogFile(name + "-log.txt");
				logger = Logger::Create(name, logFile);
				logger->Info("Created mod logger({1}): {0}", logger->getName(), runtime::FormatPath(logFile));
			}
			else if (loggerKind == "console") {
				logger = Logger::Create(name);
				logger->Info("Created mod logger: {0}", logger->getName());
			}
			else if (loggerKind != "none") {
				Log::Warn_MDML("Mod {0}: [Core] Logger={1} is not None, Console or File, using no logger", name, spec.Logger);
			}
			ModAccess::SetupCore(*core, std::move(logger));
			Registry::Get().CoreMods.pushMod(core);

			ModContext context = ModAccess::MakeContext(mod);
			std::string failure;
			try {
				core->OnLoad(context);
			}
			catch (const std::exception& ex) {
				failure = std::string("OnLoad threw: ") + ex.what();
			}
			catch (...) {
				failure = "OnLoad threw";
			}
			if (!failure.empty()) {
				// The DLL stays loaded (its code may be referenced by hooks); only the mod's registrations are removed.
				Registry::Get().CoreMods.popMod(core);
				FailMod(mod, failure);
				return;
			}
			Log::Info_MDML("Loaded mod {0}", runtime::FormatPath(dll));
		}
	}

	// Config/LoadOrder.ini lives next to NoOverwrite.ini / ModLoaderInfo.ini. Idempotent.
	void ResolveLoadOrder() {
		LoadOrder::Resolve(CoreMod::GetModsFolder(), std::filesystem::path(runtime::Config.NoOverwriteFile).parent_path() / "LoadOrder.ini");
	}

	void SetPhase(LoadPhase phase) {
		Registry::Get().Phase = phase;
	}

	void ScanMods() {
		SetPhase(LoadPhase::Scan);
		const std::filesystem::path modsFolder = CoreMod::GetModsFolder();
		std::error_code ec;
		if (!std::filesystem::exists(modsFolder, ec))
			std::filesystem::create_directory(modsFolder, ec);
		ResolveLoadOrder();

		// Every folder with a mod.ini is a mod. Deterministic order: alphabetical, then by Config/LoadOrder.ini (ties stay alphabetical).
		std::vector<std::string> folders;
		for (std::filesystem::directory_iterator it(modsFolder, ec); !ec && it != std::filesystem::directory_iterator(); it.increment(ec)) {
			std::error_code ec2;
			if (it->is_directory(ec2) && std::filesystem::exists(it->path() / "mod.ini", ec2))
				folders.push_back(it->path().filename().string());
		}
		std::sort(folders.begin(), folders.end(), LessNoCase);
		std::stable_sort(folders.begin(), folders.end(), [](const std::string& a, const std::string& b) {
			return LoadOrder::GetPosition(a) < LoadOrder::GetPosition(b);
		});
		for (const std::string& folder : folders) {
			if (!LoadOrder::IsEnabled(folder))
				continue; // already logged by LoadOrder::Resolve
			ScanMod(folder, modsFolder / folder);
		}
		Log::Info_MDML("Scanned {0} mod(s)", Registry::Get().Mods.size());
	}

	void LoadCoreMods() {
		SetPhase(LoadPhase::Core);
		for (const CoreSpec& spec : s_coreSpecs)
			LoadCore(spec);
		s_coreSpecs.clear();
		Log::Info_MDML("Loaded {0} core mod(s)", Registry::Get().CoreMods.size());
	}

	void UnloadCoreMods() {
		static std::atomic<bool> s_done{ false };
		if (s_done.exchange(true))
			return;
		auto& mods = Registry::Get().Mods;
		size_t count = 0;
		Log::Info_MDML("Engine exit: calling OnUnload on the core mods (reverse load order)");
		for (auto it = mods.rbegin(); it != mods.rend(); ++it) {
			Mod& mod = **it;
			CoreMod* core = mod.Core();
			if (!core)
				continue;
			Log::Info_MDML("OnUnload: {0}", mod.Info().Name);
			try {
				core->OnUnload();
				count++;
			}
			catch (const std::exception& ex) {
				Log::Error_MDML("Mod {0}: OnUnload threw: {1}", mod.Info().Name, ex.what());
			}
			catch (...) {
				Log::Error_MDML("Mod {0}: OnUnload threw", mod.Info().Name);
			}
		}
		Log::Info_MDML("OnUnload finished for {0} core mod(s)", count);
	}

	void InitCoreMods() {
		UE4::InitSDK();
		Log::Info_UML("Engine Classes Loaded");
		// InitializeMod usually registers events (SetupHooks) and may reorder the stack (MoveToFront): inside forEach
		// those changes are deferred until the loop is done.
		Registry::Get().CoreMods.forEach([](CoreMod* core) {
			Log::Info_UML("InitializeMod Called For {0}", core->GetName());
			core->InitializeMod();
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
