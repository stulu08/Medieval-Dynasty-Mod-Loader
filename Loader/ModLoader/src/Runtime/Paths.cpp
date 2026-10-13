#include "Core.h"
#include "Paths.h"

#include "Runtime/LoaderConfig.h"

namespace mdml::runtime {
	std::string FormatPath(const std::filesystem::path& path) {
		return std::filesystem::relative(path, Config.rootGameDir).string();
	}

	std::string GetDataFolder() {
		static std::filesystem::path path = L"";
		if (path.empty() || !std::filesystem::exists(path)) {
			PWSTR wpath = nullptr;
			// The returned buffer must always be freed, also on failure (C24).
			const HRESULT hr = SHGetKnownFolderPath(FOLDERID_LocalAppData, 0, nullptr, &wpath);
			if (SUCCEEDED(hr) && wpath)
				path = std::wstring(wpath) + L"\\Medieval_Dynasty\\Saved\\";
			CoTaskMemFree(wpath);
		}
		return path.string();
	}
}
