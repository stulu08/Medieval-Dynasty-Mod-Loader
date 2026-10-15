#include "LoadOrder.h"
#include "Ini.h"

#include <sstream>

namespace mm {
	const char* LoadOrder::DefaultHeader() {
		return "; MDML load order (top = first)\n"
			"; Name = 1 (enabled) / 0 (disabled), Name = mod folder under Content/Mods\n"
			"; New mods are appended automatically (alphabetically).\n";
	}

	bool LoadOrder::Load(const fs::path& path) {
		m_header.clear();
		m_footer.clear();
		m_entries.clear();

		std::string text;
		if (!ReadTextFile(path, text)) {
			std::istringstream ss(DefaultHeader());
			std::string l;
			while (std::getline(ss, l)) m_header.push_back(l);
			return false;
		}
		if (text.size() >= 3 && (unsigned char)text[0] == 0xEF && (unsigned char)text[1] == 0xBB && (unsigned char)text[2] == 0xBF)
			text.erase(0, 3);

		std::istringstream ss(text);
		std::string line;
		while (std::getline(ss, line)) {
			if (!line.empty() && line.back() == '\r') line.pop_back();
			std::string t = Trim(line);
			size_t eq = t.find('=');
			bool isEntry = !t.empty() && t[0] != ';' && t[0] != '#' && eq != std::string::npos && eq > 0;
			if (!isEntry) {
				(m_entries.empty() ? m_header : m_footer).push_back(line);
				continue;
			}
			LoadOrderEntry e;
			e.name = Trim(t.substr(0, eq));
			std::string value = t.substr(eq + 1);
			size_t sc = value.find(';');
			if (sc != std::string::npos) {
				e.comment = Trim(value.substr(sc + 1));
				value = value.substr(0, sc);
			}
			e.enabled = IniDocument::ParseBool(value, true);
			if (IndexOf(e.name) >= 0) {
				Log::Warn("LoadOrder.ini: duplicate entry '" + e.name + "' ignored");
				continue;
			}
			m_entries.push_back(std::move(e));
		}
		// trailing blank lines are not worth keeping
		while (!m_footer.empty() && Trim(m_footer.back()).empty()) m_footer.pop_back();
		return true;
	}

	bool LoadOrder::Save(const fs::path& path) const {
		std::string out;
		for (const auto& l : m_header) out += l + "\r\n";
		for (const auto& e : m_entries) {
			out += e.name + " = " + (e.enabled ? "1" : "0");
			if (!e.comment.empty()) out += " ; " + e.comment;
			out += "\r\n";
		}
		for (const auto& l : m_footer) out += l + "\r\n";
		return WriteTextFile(path, out);
	}

	int LoadOrder::IndexOf(const std::string& name) const {
		for (size_t i = 0; i < m_entries.size(); i++)
			if (IEquals(m_entries[i].name, name)) return (int)i;
		return -1;
	}

	int LoadOrder::Merge(const std::vector<std::string>& installed) {
		std::vector<std::string> missing;
		for (const auto& n : installed)
			if (IndexOf(n) < 0) missing.push_back(n);
		std::sort(missing.begin(), missing.end(), [](const std::string& a, const std::string& b) {
			return Lower(a) < Lower(b);
		});
		for (const auto& n : missing) {
			LoadOrderEntry e;
			e.name = n;
			m_entries.push_back(e);
		}
		if (m_header.empty() && m_entries.size() == missing.size()) {
			std::istringstream ss(DefaultHeader());
			std::string l;
			while (std::getline(ss, l)) m_header.push_back(l);
		}
		return (int)missing.size();
	}

	void LoadOrder::Remove(const std::string& name) {
		int i = IndexOf(name);
		if (i >= 0) m_entries.erase(m_entries.begin() + i);
	}

	void LoadOrder::Move(int from, int to) {
		int n = (int)m_entries.size();
		if (from < 0 || from >= n || to < 0 || to >= n || from == to) return;
		LoadOrderEntry e = std::move(m_entries[from]);
		m_entries.erase(m_entries.begin() + from);
		m_entries.insert(m_entries.begin() + to, std::move(e));
	}
}
