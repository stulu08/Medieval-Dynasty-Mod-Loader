#include "Core.h"
#include "LoaderConfig.h"

#include "Platform/IniFile.h"
#include "Platform/Logger.h"
#include "Platform/SymbolResolver.h"
#include "Runtime/Paths.h"
#include "UE_LOG.h"

namespace mdml::runtime {
	LoaderConfig Config;

	namespace {
		// Owner of the UE_LOG logger (mdml::UnrealLogger only holds the spdlog logger).
		Ref<Logger> s_unrealEngineLogger = nullptr;

		// The game's renderer setting (GameUserSettings.ini in %LocalAppData%), not the loader's.
		bool IsDirectX11() {
			std::filesystem::path path = GetDataFolder() + "Config\\WindowsNoEditor\\GameUserSettings.ini";
			if (std::filesystem::exists(path)) {
				platform::IniFile settings(path);
				if (settings.HasSection("D3DRHIPreference")) {
					auto v = settings.Get("D3DRHIPreference", "bUseD3D12InGame", "True");
					return (v == "False" || v == "false" || v == "0");
				}
			}
			return false;
		}
	}

	void LoadLoaderConfig(const std::string& mdmlDir, const platform::IniFile& loaderInfo) {
		Config.ImGuiFile = mdmlDir + "/Config/WindowConfig.ini";
		Config.NoOverwriteFile = mdmlDir + "/Config/NoOverwrite.ini";
		Config.HardLinksFile = mdmlDir + "/Config/ModLinks.bin";

#pragma region Logs and Debug features
		//log dir detection
		if (loaderInfo.HasSection("General")) {
			// The default is relative to the MDML folder like the ini value (it was an absolute path that got the
			// MDML folder prepended a second time, code inventory B8).
			std::string logDir = mdmlDir + "/" + loaderInfo.Get("General", "LogDir", DEFAULT_LOG_DIR);
			auto logFileDir = (std::filesystem::path(logDir));

			if (!std::filesystem::exists(logFileDir))
				std::filesystem::create_directories(logFileDir);

			Config.LogDir = logFileDir.string();
		}
		//Output File Initialization
		if (loaderInfo.GetInt("DEBUG", "UseConsole", 0) == 1) {
			ShowWindow(GetConsoleWindow(), SW_SHOW);

			AllocConsole();
			static FILE* newstdin = nullptr;
			static FILE* newstdout = nullptr;
			static FILE* newstderr = nullptr;

			freopen_s(&newstdin, "CONIN$", "r", stdin);
			freopen_s(&newstdout, "CONOUT$", "w", stdout);
			freopen_s(&newstderr, "CONOUT$", "w", stderr);
		}
		Log::Init(Config.LogDir);
		Log::Info_UML("Loader Created by ~Russell.J Release V {0}", UML_VERSION);
		Log::Info_MDML("Optimized and edited for Medieval Dynasty by Stulu");
		Log::Info_MDML("Medieval Dynasty Mod Loader Version {0}", MODLOADER_VERSION);
		Log::Info_MDML("Medieval Dynasty Version {0}", MEDIEVAL_VERSION);
		Log::Info_MDML("Game executable build {0}", platform::SymbolResolver::GetBuildId());

		s_unrealEngineLogger = Logger::Create("UE_LOG", Log::getLogFile("UE_LOG-log.txt"));
		mdml::UnrealLogger = s_unrealEngineLogger->getLogger();

		Config.bEnableGUI = loaderInfo.GetInt("DEBUG", "UseDebugUI", 0) != 0;

		if (Config.bEnableGUI) {
			Config.bEnableGUI = IsDirectX11();
			if (!Config.bEnableGUI)
				Log::Warn_MDML("Gui was disabled, maybe switch rendering mode to directx11 to enable");
		}
#pragma endregion

		// Game root (where Engine/ and Medieval_Dynasty/ live) from MDML.dll's location: <root>/Medieval_Dynasty/Binaries/Win64.
		// Not from the working directory: the engine switches it to Binaries/Win64 early, and since Wave 2.2 the setup runs
		// on the init thread after that, which broke the NoOverwrite lookup (loose game files were treated as mod overwrites).
		const std::filesystem::path rootGameDir = std::filesystem::weakly_canonical(std::filesystem::path(mdmlDir) / "../../..");
		Config.rootGameDir = rootGameDir.string();
	}

	void LoadFeatureConfig(const platform::IniFile& loaderInfo) {
		// [Overwrites], or the older name [Overrides] if there is no [Overwrites] section.
		const char* overwrites = loaderInfo.HasSection("Overwrites") ? "Overwrites" : (loaderInfo.HasSection("Overrides") ? "Overrides" : nullptr);
		if (overwrites) {
			Config.ModOverwritesEnabled = loaderInfo.GetInt(overwrites, "Enabled", 0) != 0;
			Config.UseHardLinks = loaderInfo.GetInt(overwrites, "UseHardLinks", 0) != 0;
		}
		if (Config.ModOverwritesEnabled) {
			Log::Info_MDML("Enabled Mod overwrites using {0} links", Config.UseHardLinks ? "Hard" : "Sym");
		}

		Config.bDelayGUISpawn = loaderInfo.GetInt("GameInfo", "DelayGUISpawn", 0) != 0;

		if (loaderInfo.HasSection("PakOverwrite"))
			Config.bPakOverride = loaderInfo.GetInt("PakOverwrite", "bPakOverwrite", 0) != 0;
	}
}
