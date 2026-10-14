#pragma once
// Minimal WinHTTP client (https GET): JSON/text and file download with progress. Used for the optional GitHub release source.
#include "Util.h"
#include <atomic>

namespace mm {
	using ProgressFn = std::function<void(uint64_t done, uint64_t total)>;

	bool HttpGetString(const std::string& url, std::string& out, std::string& error);
	bool HttpDownload(const std::string& url, const fs::path& dest, const ProgressFn& progress,
		const std::atomic<bool>* cancel, std::string& error);

	struct ReleaseInfo {
		std::string tag, name, published, assetName, assetUrl;
		uint64_t assetSize = 0;
	};
	// newest non-draft release which has a .zip asset
	bool FetchLatestRelease(const std::string& owner, const std::string& repo, ReleaseInfo& out, std::string& error);
}
