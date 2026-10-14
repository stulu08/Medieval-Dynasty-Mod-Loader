#pragma once
// Small string/path helpers shared by the whole ModManager core. All std::string are UTF-8.
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <functional>
#include <mutex>
#include <string>
#include <vector>

namespace mm {
	namespace fs = std::filesystem;

	std::wstring ToWide(const std::string& utf8);
	std::string ToUtf8(const std::wstring& wide);
	fs::path PathFromUtf8(const std::string& utf8);
	std::string PathToUtf8(const fs::path& path);

	inline std::string Trim(const std::string& s) {
		size_t b = 0, e = s.size();
		while (b < e && std::isspace((unsigned char)s[b])) b++;
		while (e > b && std::isspace((unsigned char)s[e - 1])) e--;
		return s.substr(b, e - b);
	}
	inline std::string Lower(std::string s) {
		std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return (char)std::tolower(c); });
		return s;
	}
	inline bool IEquals(const std::string& a, const std::string& b) { return Lower(a) == Lower(b); }

	bool ReadTextFile(const fs::path& path, std::string& out);
	// writes to <path>.tmp and renames over the target
	bool WriteTextFile(const fs::path& path, const std::string& text);
	uint64_t DirectorySize(const fs::path& dir);

	// Timestamped, thread safe in-memory log which the UI displays (and stdout mirrors).
	class Log {
	public:
		enum class Level { Info, Warn, Error };
		struct Line { Level level; std::string text; };
		static void Add(Level level, const std::string& text);
		static void Info(const std::string& text) { Add(Level::Info, text); }
		static void Warn(const std::string& text) { Add(Level::Warn, text); }
		static void Error(const std::string& text) { Add(Level::Error, text); }
		static std::vector<Line> Snapshot();
		static void Clear();
	};
}
