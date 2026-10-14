#include "Core.h"
#include "Paths.h"

#include "Runtime/LoaderConfig.h"

namespace mdml::runtime {
	std::string FormatPath(const std::filesystem::path& path) {
		return std::filesystem::relative(path, Config.rootGameDir).string();
	}

	std::filesystem::path GetLoaderFolder() {
		static const std::filesystem::path folder = []() {
			HMODULE self = nullptr;
			if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
				reinterpret_cast<LPCWSTR>(&GetLoaderFolder), &self))
				return std::filesystem::path();
			std::wstring buffer(MAX_PATH, L'\0');
			for (;;) {
				const DWORD length = GetModuleFileNameW(self, buffer.data(), (DWORD)buffer.size());
				if (length == 0)
					return std::filesystem::path();
				if (length < buffer.size()) {
					buffer.resize(length);
					break;
				}
				buffer.resize(buffer.size() * 2); // truncated: retry with a larger buffer
			}
			return std::filesystem::path(buffer).parent_path();
		}();
		return folder;
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
