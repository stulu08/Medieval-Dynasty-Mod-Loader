#pragma once
// Reads/writes <game>/Medieval_Dynasty/Binaries/Win64/Config/LoadOrder.ini (format: docs/reports/loadorder-and-dump-notices.md
// of the MDML repo). "Name = 1/0", top = loaded first, comments are kept. Mirrors MDML's own parser rules.
#include "Util.h"

namespace mm {
	struct LoadOrderEntry {
		std::string name;
		bool enabled = true;
		std::string comment; // trailing "; comment" of the line
	};

	class LoadOrder {
	public:
		bool Load(const fs::path& path);
		bool Save(const fs::path& path) const;

		// Appends mods which are not in the list yet ("Name = 1"), alphabetically. Returns the number of added entries.
		int Merge(const std::vector<std::string>& installedMods);
		void Remove(const std::string& name);
		int IndexOf(const std::string& name) const;
		void Move(int from, int to);

		std::vector<LoadOrderEntry>& Entries() { return m_entries; }
		const std::vector<LoadOrderEntry>& Entries() const { return m_entries; }

		static const char* DefaultHeader();

	private:
		std::vector<std::string> m_header; // everything before the first entry
		std::vector<std::string> m_footer; // comments/other lines after the first entry
		std::vector<LoadOrderEntry> m_entries;
	};
}
