#pragma once
// Line preserving INI document: loading and saving never loses comments, blank lines or ordering.
// Same dialect as MDML (docs/guides/Modding.md): comments are whole lines starting with ';' (or '#'),
// a ';' after a value belongs to the value. Section/key lookup: exact first, then case-insensitive.
#include "Util.h"

namespace mm {
	class IniDocument {
	public:
		struct Item {
			std::string key;
			std::string value;
			std::string comment; // comment lines directly above the key, joined with '\n' (without the ';')
			size_t line = 0;
		};

		bool Load(const fs::path& path);
		void LoadFromString(const std::string& text);
		bool Save(const fs::path& path) const;
		std::string ToString() const;

		std::vector<std::string> Sections() const;
		std::vector<Item> Items(const std::string& section) const;

		bool Has(const std::string& section, const std::string& key) const;
		std::string Get(const std::string& section, const std::string& key, const std::string& def = "") const;
		bool GetBool(const std::string& section, const std::string& key, bool def) const;
		void Set(const std::string& section, const std::string& key, const std::string& value);
		bool Remove(const std::string& section, const std::string& key);

		static bool ParseBool(const std::string& v, bool def);

	private:
		enum class Kind { Raw, Section, KeyValue };
		struct Line {
			Kind kind = Kind::Raw;
			std::string raw;     // original text for Raw/Section lines
			std::string section; // section the line belongs to
			std::string key;
			std::string value;
		};
		std::vector<Line> m_lines;
		bool m_crlf = true;
		bool m_bom = false;

		int FindKey(const std::string& section, const std::string& key) const;
		static bool SameName(const std::string& a, const std::string& b) { return a == b || IEquals(a, b); }
	};
}
