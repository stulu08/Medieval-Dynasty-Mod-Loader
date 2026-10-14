#include "Archive.h"

#include <Windows.h>
#include <atomic>

namespace mm {
	static bool RunTar(const std::wstring& args, std::string& error) {
		wchar_t sys[MAX_PATH];
		GetSystemDirectoryW(sys, MAX_PATH);
		std::wstring exe = std::wstring(sys) + L"\\tar.exe";
		std::wstring cmd = L"\"" + exe + L"\" " + args;

		STARTUPINFOW si{};
		si.cb = sizeof(si);
		PROCESS_INFORMATION pi{};
		std::vector<wchar_t> buf(cmd.begin(), cmd.end());
		buf.push_back(0);
		if (!CreateProcessW(exe.c_str(), buf.data(), nullptr, nullptr, FALSE, CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi)) {
			error = "tar.exe could not be started (error " + std::to_string(GetLastError()) + ")";
			return false;
		}
		WaitForSingleObject(pi.hProcess, INFINITE);
		DWORD code = 1;
		GetExitCodeProcess(pi.hProcess, &code);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
		if (code != 0) {
			error = "tar.exe exit code " + std::to_string(code);
			return false;
		}
		return true;
	}

	bool ExtractArchive(const fs::path& archive, const fs::path& destDir, std::string& error) {
		std::error_code ec;
		fs::create_directories(destDir, ec);
		return RunTar(L"-xf \"" + archive.wstring() + L"\" -C \"" + destDir.wstring() + L"\"", error);
	}

	bool CreateZip(const fs::path& srcDir, const fs::path& zipFile, std::string& error) {
		std::error_code ec;
		fs::create_directories(zipFile.parent_path(), ec);
		fs::remove(zipFile, ec);
		return RunTar(L"-a -c -f \"" + zipFile.wstring() + L"\" -C \"" + srcDir.wstring() + L"\" .", error);
	}

	fs::path MakeTempDir(const std::string& hint) {
		static std::atomic<int> counter{ 0 };
		wchar_t tmp[MAX_PATH];
		GetTempPathW(MAX_PATH, tmp);
		fs::path dir = fs::path(tmp) / L"MDMM" / (PathFromUtf8(hint).wstring() + L"_" + std::to_wstring(GetCurrentProcessId()) + L"_" + std::to_wstring(counter++));
		std::error_code ec;
		fs::remove_all(dir, ec);
		fs::create_directories(dir, ec);
		return dir;
	}
}
