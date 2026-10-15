#pragma once
#include <string>
#include <vector>
#include <filesystem>

// Central mod load order, Config/LoadOrder.ini (next to ModLoaderInfo.ini). One line per mod folder under Content/Mods:
//   Name = 1   (enabled)      Name = 0   (disabled: DLL, logic-mod registration and overwrite links are all skipped)
// Top = loaded first. New mods are appended (enabled) and the file is rewritten; unknown/missing entries are kept as they are.
// Lines starting with ';' or '#' and blank lines are comments and are preserved. See docs/reports/loadorder-and-dump-notices.md.
namespace mdml::mods::LoadOrder
{
	struct Entry {
		std::string Name;
		bool Enabled = true;
	};

	// Pure logic (no filesystem, no logging; unit-testable). existingText: content of LoadOrder.ini ("" if missing).
	// found: mod names discovered on disk. Returns the text to write; order = effective order (file order, then new
	// mods); changed = text differs from existingText; messages = warn/info lines for the log ("W:" / "I:" prefix).
	std::string Merge(const std::string& existingText, const std::vector<std::string>& found, std::vector<Entry>& order, bool& changed, std::vector<std::string>& messages);

	// Scans modsFolder for mod folders / loose dlls, merges them into iniFile (creating/rewriting it) and caches the result.
	// Safe to call repeatedly; only the first call does the work.
	void Resolve(const std::filesystem::path& modsFolder, const std::filesystem::path& iniFile);

	// Queries on the cached result (case-insensitive). Unknown names count as enabled and sort last.
	bool IsEnabled(const std::string& name);
	size_t GetPosition(const std::string& name);
}
