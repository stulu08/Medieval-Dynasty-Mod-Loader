#include "Util.h"

#include <Windows.h>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <sstream>

namespace mm {
	std::wstring ToWide(const std::string& s) {
		if (s.empty()) return {};
		int n = MultiByteToWideChar(CP_UTF8, 0, s.data(), (int)s.size(), nullptr, 0);
		std::wstring w(n, L'\0');
		MultiByteToWideChar(CP_UTF8, 0, s.data(), (int)s.size(), w.data(), n);
		return w;
	}
	std::string ToUtf8(const std::wstring& w) {
		if (w.empty()) return {};
		int n = WideCharToMultiByte(CP_UTF8, 0, w.data(), (int)w.size(), nullptr, 0, nullptr, nullptr);
		std::string s(n, '\0');
		WideCharToMultiByte(CP_UTF8, 0, w.data(), (int)w.size(), s.data(), n, nullptr, nullptr);
		return s;
	}
	fs::path PathFromUtf8(const std::string& s) { return fs::path(ToWide(s)); }
	std::string PathToUtf8(const fs::path& p) { return ToUtf8(p.wstring()); }

	bool ReadTextFile(const fs::path& path, std::string& out) {
		std::ifstream f(path, std::ios::binary);
		if (!f) return false;
		std::ostringstream ss;
		ss << f.rdbuf();
		out = ss.str();
		return true;
	}

	bool WriteTextFile(const fs::path& path, const std::string& text) {
		std::error_code ec;
		fs::create_directories(path.parent_path(), ec);
		fs::path tmp = path;
		tmp += L".tmp";
		{
			std::ofstream f(tmp, std::ios::binary | std::ios::trunc);
			if (!f) return false;
			f.write(text.data(), (std::streamsize)text.size());
			if (!f) return false;
		}
		fs::rename(tmp, path, ec);
		if (ec) {
			// rename over an existing file can fail on some setups: fall back to remove + rename
			fs::remove(path, ec);
			fs::rename(tmp, path, ec);
		}
		return !ec;
	}

	uint64_t DirectorySize(const fs::path& dir) {
		uint64_t total = 0;
		std::error_code ec;
		for (fs::recursive_directory_iterator it(dir, fs::directory_options::skip_permission_denied, ec), end; !ec && it != end; it.increment(ec)) {
			std::error_code e2;
			if (it->is_regular_file(e2)) total += it->file_size(e2);
		}
		return total;
	}

	static std::mutex s_logMutex;
	static std::vector<Log::Line> s_log;

	void Log::Add(Level level, const std::string& text) {
		std::lock_guard<std::mutex> lock(s_logMutex);
		s_log.push_back({ level, text });
		if (s_log.size() > 2000) s_log.erase(s_log.begin(), s_log.begin() + 500);
		std::cout << (level == Level::Error ? "[error] " : level == Level::Warn ? "[warn] " : "[info] ") << text << std::endl;
	}
	std::vector<Log::Line> Log::Snapshot() {
		std::lock_guard<std::mutex> lock(s_logMutex);
		return s_log;
	}
	void Log::Clear() {
		std::lock_guard<std::mutex> lock(s_logMutex);
		s_log.clear();
	}
}
