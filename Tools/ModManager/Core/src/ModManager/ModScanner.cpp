#include "ModScanner.h"
#include "Ini.h"

namespace mm {
	static bool HasSection(const IniDocument& doc, const char* name) {
		for (const auto& s : doc.Sections())
			if (IEquals(s, name)) return true;
		return false;
	}

	// Reads the mod.ini of a folder; false if it is not a mod (no mod.ini or no component section).
	static bool ReadFolderMod(const fs::path& dir, ModInfo& m) {
		fs::path ini = dir / "mod.ini";
		IniDocument doc;
		if (!doc.Load(ini)) return false;
		m.core = HasSection(doc, "Core");
		m.blueprint = HasSection(doc, "Blueprint");
		m.overwrite = HasSection(doc, "Overwrite");
		if (!m.core && !m.blueprint && !m.overwrite) return false;

		m.name = PathToUtf8(dir.filename());
		m.path = dir;
		if (m.core) {
			m.dllPath = doc.Get("Core", "Dll");
			if (m.dllPath.empty()) m.dllPath = m.name + ".dll";
		}
		m.description = doc.Get("Mod", "Description");
		m.author = doc.Get("Mod", "Author");
		m.version = doc.Get("Mod", "Version");
		m.sizeBytes = DirectorySize(dir);
		return true;
	}

	std::vector<ModInfo> ScanMods(const fs::path& modsDir) {
		std::vector<ModInfo> mods;
		std::error_code ec;
		if (!fs::is_directory(modsDir, ec)) return mods;

		for (const auto& entry : fs::directory_iterator(modsDir, ec)) {
			std::error_code e2;
			if (!entry.is_directory(e2)) continue;
			ModInfo m;
			if (ReadFolderMod(entry.path(), m))
				mods.push_back(std::move(m));
		}
		std::sort(mods.begin(), mods.end(), [](const ModInfo& a, const ModInfo& b) {
			return Lower(a.name) < Lower(b.name);
		});
		return mods;
	}

	std::string DescribeKinds(const ModInfo& m) {
		std::string s;
		auto add = [&](const char* k) { if (!s.empty()) s += ", "; s += k; };
		if (m.core) add("Core");
		if (m.blueprint) add("Blueprint");
		if (m.overwrite) add("Overwrite");
		if (s.empty()) s = "unknown";
		return s;
	}
}
