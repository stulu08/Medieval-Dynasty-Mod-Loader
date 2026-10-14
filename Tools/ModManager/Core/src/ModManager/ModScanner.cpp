#include "ModScanner.h"
#include "Ini.h"

namespace mm {
	static ModInfo ReadFolderMod(const fs::path& dir) {
		ModInfo m;
		m.name = PathToUtf8(dir.filename());
		m.path = dir;
		std::error_code ec;

		fs::path ini = dir / "mod.ini";
		if (fs::exists(ini, ec)) {
			IniDocument doc;
			if (doc.Load(ini)) {
				m.hasIni = true;
				m.dllPath = doc.Get("Mod", "DLLPath");
				m.coreDll = !m.dllPath.empty();
				m.logic = doc.Has("LogicMod", "ActorFile") || doc.Has("LogicMod", "ModName");
				m.overwrite = doc.Has("Overwrites", "Folder") || doc.Has("Overrides", "Folder") ||
					doc.Has("Overwrites", "Enable") || doc.Has("Overrides", "Enable");
				for (const char* sec : { "Mod", "Info", "Manager" }) {
					if (m.description.empty()) m.description = doc.Get(sec, "Description");
					if (m.author.empty()) m.author = doc.Get(sec, "Author");
					if (m.version.empty()) m.version = doc.Get(sec, "Version");
				}
			}
		}
		if (!m.coreDll && fs::exists(dir / (m.name + ".dll"), ec)) {
			m.coreDll = true;
			m.dllPath = m.name + ".dll";
		}
		m.sizeBytes = DirectorySize(dir);
		return m;
	}

	std::vector<ModInfo> ScanMods(const fs::path& modsDir) {
		std::vector<ModInfo> mods;
		std::error_code ec;
		if (!fs::is_directory(modsDir, ec)) return mods;

		for (const auto& entry : fs::directory_iterator(modsDir, ec)) {
			std::error_code e2;
			if (entry.is_directory(e2)) {
				const fs::path& dir = entry.path();
				std::string name = PathToUtf8(dir.filename());
				if (fs::exists(dir / "mod.ini", e2) || fs::exists(dir / (name + ".dll"), e2))
					mods.push_back(ReadFolderMod(dir));
			}
			else if (entry.is_regular_file(e2) && Lower(PathToUtf8(entry.path().extension())) == ".dll") {
				ModInfo m;
				m.name = PathToUtf8(entry.path().stem());
				m.path = entry.path();
				m.looseDll = true;
				m.coreDll = true;
				m.dllPath = PathToUtf8(entry.path().filename());
				m.sizeBytes = entry.file_size(e2);
				mods.push_back(std::move(m));
			}
		}
		std::sort(mods.begin(), mods.end(), [](const ModInfo& a, const ModInfo& b) {
			if (IEquals(a.name, "BaseMod") != IEquals(b.name, "BaseMod")) return IEquals(a.name, "BaseMod");
			return Lower(a.name) < Lower(b.name);
		});
		return mods;
	}

	std::string DescribeKinds(const ModInfo& m) {
		std::string s;
		auto add = [&](const char* k) { if (!s.empty()) s += ", "; s += k; };
		if (m.coreDll) add("DLL");
		if (m.logic) add("Logic");
		if (m.overwrite) add("Overwrite");
		if (s.empty()) s = "unknown";
		return s;
	}
}
