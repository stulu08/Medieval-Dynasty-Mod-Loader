#include "GameInstall.h"

#include <Windows.h>
#include <TlHelp32.h>

namespace mm {
	bool GameInstall::Valid() const {
		std::error_code ec;
		return !root.empty() && fs::exists(GameDir() / "Binaries", ec);
	}

	bool GameInstall::LoaderInstalled() const {
		std::error_code ec;
		return fs::exists(Binaries() / "MDML.dll", ec) && fs::exists(Binaries() / "xinput1_3.dll", ec);
	}

	std::string GameInstall::LoaderFileVersion() const {
		std::wstring file = (Binaries() / "MDML.dll").wstring();
		DWORD handle = 0;
		DWORD size = GetFileVersionInfoSizeW(file.c_str(), &handle);
		if (!size) return {};
		std::vector<char> data(size);
		if (!GetFileVersionInfoW(file.c_str(), 0, size, data.data())) return {};
		VS_FIXEDFILEINFO* info = nullptr;
		UINT len = 0;
		if (!VerQueryValueW(data.data(), L"\\", (LPVOID*)&info, &len) || !info) return {};
		char buf[64];
		snprintf(buf, sizeof(buf), "%u.%u.%u.%u", HIWORD(info->dwFileVersionMS), LOWORD(info->dwFileVersionMS),
			HIWORD(info->dwFileVersionLS), LOWORD(info->dwFileVersionLS));
		return buf;
	}

	bool GameInstall::IsGameRunning() {
		HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (snap == INVALID_HANDLE_VALUE) return false;
		PROCESSENTRY32W pe{};
		pe.dwSize = sizeof(pe);
		bool found = false;
		if (Process32FirstW(snap, &pe)) {
			do {
				if (_wcsicmp(pe.szExeFile, L"Medieval_Dynasty-Win64-Shipping.exe") == 0 ||
					_wcsicmp(pe.szExeFile, L"Medieval_Dynasty.exe") == 0) {
					found = true;
					break;
				}
			} while (Process32NextW(snap, &pe));
		}
		CloseHandle(snap);
		return found;
	}

	static std::string ReadRegString(HKEY root, const wchar_t* key, const wchar_t* value) {
		wchar_t buf[1024];
		DWORD size = sizeof(buf);
		if (RegGetValueW(root, key, value, RRF_RT_REG_SZ, nullptr, buf, &size) != ERROR_SUCCESS) return {};
		return ToUtf8(buf);
	}

	// "key"   "value" pairs; only "path" keys are needed
	static void ParseLibraryFolders(const fs::path& vdf, std::vector<fs::path>& libs) {
		std::string text;
		if (!ReadTextFile(vdf, text)) return;
		size_t pos = 0;
		while ((pos = text.find("\"path\"", pos)) != std::string::npos) {
			pos += 6;
			size_t a = text.find('"', pos);
			if (a == std::string::npos) break;
			size_t b = a + 1;
			std::string value;
			while (b < text.size() && text[b] != '"') {
				if (text[b] == '\\' && b + 1 < text.size()) b++;
				value += text[b++];
			}
			pos = b;
			if (!value.empty()) libs.push_back(PathFromUtf8(value));
		}
	}

	std::vector<fs::path> FindGameCandidates() {
		std::vector<fs::path> steamRoots;
		std::string s = ReadRegString(HKEY_CURRENT_USER, L"Software\\Valve\\Steam", L"SteamPath");
		if (!s.empty()) steamRoots.push_back(PathFromUtf8(s));
		s = ReadRegString(HKEY_LOCAL_MACHINE, L"SOFTWARE\\WOW6432Node\\Valve\\Steam", L"InstallPath");
		if (!s.empty()) steamRoots.push_back(PathFromUtf8(s));

		std::vector<fs::path> libs;
		for (const auto& r : steamRoots) {
			libs.push_back(r);
			ParseLibraryFolders(r / "steamapps" / "libraryfolders.vdf", libs);
		}

		std::vector<fs::path> found;
		std::error_code ec;
		for (const auto& lib : libs) {
			fs::path game = lib / "steamapps" / "common" / "Medieval Dynasty";
			if (!fs::exists(game / "Medieval_Dynasty.exe", ec)) continue;
			bool dup = false;
			for (const auto& f : found) {
				if (fs::equivalent(f, game, ec)) dup = true;
			}
			if (!dup) found.push_back(game);
		}
		return found;
	}
}
