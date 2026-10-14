#include "Core.h"
#include "LoadOrder.h"
#include "MDML/Log.h"
#include <algorithm>
#include <fstream>
#include <sstream>
#include <mutex>

namespace mdml::mods::LoadOrder
{
	static std::string Trim(const std::string& s) {
		size_t b = s.find_first_not_of(" \t\r\n");
		if (b == std::string::npos)
			return "";
		size_t e = s.find_last_not_of(" \t\r\n");
		return s.substr(b, e - b + 1);
	}
	static std::string Lower(std::string s) {
		for (auto& c : s)
			c = (char)tolower((unsigned char)c);
		return s;
	}
	static bool IsComment(const std::string& trimmed) {
		return trimmed.empty() || trimmed[0] == ';' || trimmed[0] == '#';
	}
	static const char* Header =
		"; MDML load order (top = first)\n"
		"; Name = 1 (enabled) / 0 (disabled), Name = mod folder under Content/Mods\n"
		"; New mods are appended automatically. BaseMod is always loaded first.\n";

	std::string Merge(const std::string& existingText, const std::vector<std::string>& found, std::vector<Entry>& order, bool& changed, std::vector<std::string>& messages) {
		order.clear();
		messages.clear();
		std::string text = existingText;
		std::vector<std::string> keys; // lowercase names in file order
		std::istringstream stream(existingText);
		for (std::string line; std::getline(stream, line); ) {
			std::string t = Trim(line);
			if (IsComment(t))
				continue;
			size_t eq = t.find('=');
			if (eq == std::string::npos) {
				messages.push_back("W:LoadOrder.ini: ignoring line without '=': " + t);
				continue;
			}
			std::string name = Trim(t.substr(0, eq));
			std::string value = t.substr(eq + 1);
			size_t cm = value.find_first_of(";#");
			if (cm != std::string::npos)
				value = value.substr(0, cm);
			value = Lower(Trim(value));
			bool enabled = true;
			if (value == "0" || value == "false" || value == "no" || value == "off")
				enabled = false;
			else if (!(value == "1" || value == "true" || value == "yes" || value == "on"))
				messages.push_back("W:LoadOrder.ini: invalid value for " + name + " (use 1 or 0), treating it as enabled");
			if (name.empty())
				continue;
			if (std::find(keys.begin(), keys.end(), Lower(name)) != keys.end()) {
				messages.push_back("W:LoadOrder.ini: duplicate entry " + name + ", the first one wins");
				continue;
			}
			keys.push_back(Lower(name));
			order.push_back({ name, enabled });
		}

		// new mods: BaseMod first, then alphabetical (case-insensitive); appended to the end of the file
		std::vector<std::string> added;
		for (const auto& name : found)
			if (std::find(keys.begin(), keys.end(), Lower(name)) == keys.end() && std::find_if(added.begin(), added.end(), [&](const std::string& a) { return Lower(a) == Lower(name); }) == added.end())
				added.push_back(name);
		std::sort(added.begin(), added.end(), [](const std::string& a, const std::string& b) {
			bool ba = Lower(a) == "basemod", bb = Lower(b) == "basemod";
			if (ba != bb)
				return ba;
			return Lower(a) < Lower(b);
		});
		if (!added.empty()) {
			if (text.empty())
				text = Header;
			else if (text.back() != '\n')
				text += "\n";
			for (const auto& name : added) {
				text += name + " = 1\n";
				order.push_back({ name, true });
				messages.push_back("I:LoadOrder.ini: added new mod " + name);
			}
		}
		changed = text != existingText;

		// mods in the file that are not installed any more: kept in the file, only reported
		for (const auto& e : order)
			if (std::find_if(found.begin(), found.end(), [&](const std::string& f) { return Lower(f) == Lower(e.Name); }) == found.end())
				messages.push_back("I:LoadOrder.ini: " + e.Name + " is not installed, keeping its entry");

		// BaseMod is always loaded first
		auto base = std::find_if(order.begin(), order.end(), [](const Entry& e) { return Lower(e.Name) == "basemod"; });
		if (base != order.end() && base != order.begin()) {
			messages.push_back("W:LoadOrder.ini: BaseMod is not the first entry, it is loaded first anyway");
			std::rotate(order.begin(), base, base + 1);
		}
		if (base != order.end() && !base->Enabled)
			messages.push_back("W:LoadOrder.ini: BaseMod is disabled, mods that need it will not work");
		return text;
	}

	static std::mutex s_mutex;
	static bool s_resolved = false;
	static std::vector<Entry> s_order;

	static std::string ReadFile(const std::filesystem::path& file) {
		std::ifstream in(file, std::ios::binary);
		if (!in.is_open())
			return "";
		std::stringstream ss;
		ss << in.rdbuf();
		return ss.str();
	}

	// A folder is a mod if it has a mod.ini or the default <folder>/<folder>.dll; loose dlls in Content/Mods are named by their file stem.
	static std::vector<std::string> ScanMods(const std::filesystem::path& modsFolder) {
		std::vector<std::string> found;
		std::error_code ec;
		for (std::filesystem::directory_iterator it(modsFolder, ec); !ec && it != std::filesystem::directory_iterator(); it.increment(ec)) {
			const auto& entry = *it;
			std::error_code ec2;
			if (entry.is_directory(ec2)) {
				auto dirName = entry.path().filename().string();
				if (std::filesystem::exists(entry.path() / "mod.ini", ec2) || std::filesystem::exists(entry.path() / (dirName + ".dll"), ec2))
					found.push_back(dirName);
			}
			else if (entry.path().extension() == ".dll") {
				found.push_back(entry.path().stem().string());
			}
		}
		return found;
	}

	void Resolve(const std::filesystem::path& modsFolder, const std::filesystem::path& iniFile) {
		std::lock_guard<std::mutex> lock(s_mutex);
		if (s_resolved)
			return;
		s_resolved = true;
		std::vector<std::string> messages;
		bool changed = false;
		std::string existing = ReadFile(iniFile);
		std::string text = Merge(existing, ScanMods(modsFolder), s_order, changed, messages);
		for (const auto& m : messages) {
			if (m[0] == 'W')
				Log::Warn_MDML("{0}", m.substr(2));
			else
				Log::Info_MDML("{0}", m.substr(2));
		}
		if (changed) {
			std::error_code ec;
			std::filesystem::create_directories(iniFile.parent_path(), ec);
			const std::filesystem::path tmp = iniFile.string() + ".tmp";
			bool ok = false;
			{
				std::ofstream out(tmp, std::ios::binary | std::ios::trunc);
				out << text;
				ok = out.good();
			}
			if (ok)
				std::filesystem::rename(tmp, iniFile, ec);
			if (!ok || ec)
				Log::Error_MDML("Could not write {0}, the load order is used in memory only", iniFile.string());
			else
				Log::Info_MDML("Wrote {0}", iniFile.string());
		}
		for (const auto& e : s_order)
			if (!e.Enabled)
				Log::Info_MDML("Mod {0} is disabled in LoadOrder.ini", e.Name);
	}

	bool IsEnabled(const std::string& name) {
		std::lock_guard<std::mutex> lock(s_mutex);
		for (const auto& e : s_order)
			if (Lower(e.Name) == Lower(name))
				return e.Enabled;
		return true;
	}
	size_t GetPosition(const std::string& name) {
		std::lock_guard<std::mutex> lock(s_mutex);
		for (size_t i = 0; i < s_order.size(); i++)
			if (Lower(s_order[i].Name) == Lower(name))
				return i;
		return s_order.size();
	}
}
