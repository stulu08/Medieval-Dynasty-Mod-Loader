#include "Ini.h"

namespace mm {
	bool IniDocument::Load(const fs::path& path) {
		std::string text;
		if (!ReadTextFile(path, text)) {
			m_lines.clear();
			return false;
		}
		LoadFromString(text);
		return true;
	}

	void IniDocument::LoadFromString(const std::string& textIn) {
		m_lines.clear();
		std::string text = textIn;
		m_bom = text.size() >= 3 && (unsigned char)text[0] == 0xEF && (unsigned char)text[1] == 0xBB && (unsigned char)text[2] == 0xBF;
		if (m_bom) text.erase(0, 3);
		m_crlf = text.find("\r\n") != std::string::npos || text.find('\n') == std::string::npos;

		std::string section;
		size_t pos = 0;
		while (pos < text.size()) {
			size_t end = text.find('\n', pos);
			std::string line = text.substr(pos, end == std::string::npos ? std::string::npos : end - pos);
			pos = end == std::string::npos ? text.size() : end + 1;
			if (!line.empty() && line.back() == '\r') line.pop_back();

			Line l;
			std::string t = Trim(line);
			if (t.empty() || t[0] == ';' || t[0] == '#') {
				l.kind = Kind::Raw;
				l.raw = line;
				l.section = section;
			}
			else if (t[0] == '[' && t.find(']') != std::string::npos) {
				section = Trim(t.substr(1, t.find(']') - 1));
				l.kind = Kind::Section;
				l.raw = line;
				l.section = section;
			}
			else if (t.find('=') != std::string::npos) {
				size_t eq = t.find('=');
				l.kind = Kind::KeyValue;
				l.section = section;
				l.key = Trim(t.substr(0, eq));
				l.value = Trim(t.substr(eq + 1));
			}
			else {
				l.kind = Kind::Raw;
				l.raw = line;
				l.section = section;
			}
			m_lines.push_back(std::move(l));
		}
	}

	std::string IniDocument::ToString() const {
		const char* nl = m_crlf ? "\r\n" : "\n";
		std::string out;
		if (m_bom) out += "\xEF\xBB\xBF";
		for (const Line& l : m_lines) {
			if (l.kind == Kind::KeyValue) out += l.key + "=" + l.value;
			else out += l.raw;
			out += nl;
		}
		return out;
	}

	bool IniDocument::Save(const fs::path& path) const {
		return WriteTextFile(path, ToString());
	}

	std::vector<std::string> IniDocument::Sections() const {
		std::vector<std::string> out;
		for (const Line& l : m_lines) {
			if (l.kind == Kind::Section && std::find(out.begin(), out.end(), l.section) == out.end())
				out.push_back(l.section);
		}
		return out;
	}

	std::vector<IniDocument::Item> IniDocument::Items(const std::string& section) const {
		std::vector<Item> out;
		std::string comment;
		for (size_t i = 0; i < m_lines.size(); i++) {
			const Line& l = m_lines[i];
			if (l.kind == Kind::KeyValue) {
				if (SameName(l.section, section))
					out.push_back({ l.key, l.value, comment, i });
				comment.clear();
			}
			else if (l.kind == Kind::Raw) {
				std::string t = Trim(l.raw);
				if (t.empty()) comment.clear();
				else {
					if (!comment.empty()) comment += "\n";
					comment += Trim(t.substr(1));
				}
			}
			else {
				comment.clear();
			}
		}
		return out;
	}

	int IniDocument::FindKey(const std::string& section, const std::string& key) const {
		int ci = -1;
		for (size_t i = 0; i < m_lines.size(); i++) {
			const Line& l = m_lines[i];
			if (l.kind != Kind::KeyValue || !SameName(l.section, section)) continue;
			if (l.key == key) return (int)i;
			if (ci < 0 && IEquals(l.key, key)) ci = (int)i;
		}
		return ci;
	}

	bool IniDocument::Has(const std::string& section, const std::string& key) const {
		return FindKey(section, key) >= 0;
	}

	std::string IniDocument::Get(const std::string& section, const std::string& key, const std::string& def) const {
		int i = FindKey(section, key);
		return i >= 0 ? m_lines[i].value : def;
	}

	bool IniDocument::ParseBool(const std::string& v, bool def) {
		std::string s = Lower(Trim(v));
		if (s == "1" || s == "true" || s == "yes" || s == "on") return true;
		if (s == "0" || s == "false" || s == "no" || s == "off") return false;
		return def;
	}

	bool IniDocument::GetBool(const std::string& section, const std::string& key, bool def) const {
		int i = FindKey(section, key);
		return i >= 0 ? ParseBool(m_lines[i].value, def) : def;
	}

	void IniDocument::Set(const std::string& section, const std::string& key, const std::string& value) {
		int i = FindKey(section, key);
		if (i >= 0) {
			m_lines[i].value = value;
			return;
		}
		Line kv;
		kv.kind = Kind::KeyValue;
		kv.section = section;
		kv.key = key;
		kv.value = value;

		// insert after the last key (or the header) of the section
		int insertAt = -1;
		for (size_t n = 0; n < m_lines.size(); n++) {
			const Line& l = m_lines[n];
			if (!SameName(l.section, section)) continue;
			if (l.kind == Kind::KeyValue || l.kind == Kind::Section) insertAt = (int)n + 1;
		}
		if (insertAt >= 0) {
			m_lines.insert(m_lines.begin() + insertAt, kv);
			return;
		}
		if (!section.empty()) {
			Line blank; blank.raw = ""; blank.section = "";
			if (!m_lines.empty() && !Trim(m_lines.back().raw).empty()) m_lines.push_back(blank);
			Line header;
			header.kind = Kind::Section;
			header.raw = "[" + section + "]";
			header.section = section;
			m_lines.push_back(header);
		}
		m_lines.push_back(kv);
	}

	bool IniDocument::Remove(const std::string& section, const std::string& key) {
		int i = FindKey(section, key);
		if (i < 0) return false;
		m_lines.erase(m_lines.begin() + i);
		return true;
	}
}
