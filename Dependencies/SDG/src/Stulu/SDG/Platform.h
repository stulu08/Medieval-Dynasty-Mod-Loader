#pragma once
#include "Core.h"
#include "Application.h"

namespace SDG {
#define ST_CONFIG_FILE_NAME(x) (std::string(std::string(".\\") + x))
#define ST_CONFIG_DEFAULT_FILE (ST_CONFIG_FILE_NAME(SDG::Application::get().getApplicationInfo().title + "-config.ini"))
	/// <summary>
	/// in bytes
	/// </summary>
	struct MemoryUsageInfo {
		uint64_t totalVirtual;
		uint64_t virtualUsed;
		uint64_t virtualUsedByProcess;

		uint64_t totalPhysical;
		uint64_t physicalUsed;
		uint64_t physicalUsedByProcess;
	};
	class SDG_API Platform {
	public:
		static float getTime();

		static std::string openFile(const char* filter, const char* initialDir = NULL);
		static std::string saveFile(const char* filter, const char* initialDir = NULL);
		static std::string browseFolder();

		static std::string getConfigString(const std::string& key, const std::string& section = "General", const std::string & defaultValue = "", const std::string & file = ST_CONFIG_DEFAULT_FILE);
		static bool setConfigString(const std::string& key, const std::string& value, const std::string& section = "General", const std::string& file = ST_CONFIG_DEFAULT_FILE);

		static bool createDirectory(const char* directory);

		static int changeWorkingDirectory(const char* dir = NULL);
		static std::string getCurrentWorkingDirectory();

		static MemoryUsageInfo getMemoryUsage();
	};
}