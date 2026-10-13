#pragma once
#include <string>

#pragma comment(lib, "winhttp.lib")
class Downloader {
public:
	bool DownloadFile(const std::string& server, const std::string& path, const std::string& outputPath) const;
	bool DownloadLatestRelease(const std::string& outputPath, const std::string& owner = "stulu08", const std::string& repo = "Medieval-Dynasty-Mod-Loader") const;
};