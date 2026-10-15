#include "Core.h"
#include "MDML/IniFile.h"

#include "MDML/Log.h"

#include <charconv>
#include <cstring>
#include <mutex>
#include <set>

// The wrapper does its own case handling (exact match first, then case-insensitive), so mINI keeps names as written.
// This define must only be seen by this file: ini.h is never included anywhere else.
#define MINI_CASE_SENSITIVE
#include "mini/ini.h"

namespace mdml::platform {
	namespace {
		using Section = mINI::INIMap<std::string>;

		// Logging must work before Log::Init (ModLoaderInfo.ini is read before the log folder is known).
		void Warn(const std::string& message) {
			if (Log::getMDMLLogger())
				Log::Warn_MDML("{0}", message);
			else
				OutputDebugStringA(("MDML: " + message + "\r\n").c_str());
		}
		void Error(const std::string& message) {
			if (Log::getMDMLLogger())
				Log::Error_MDML("{0}", message);
			else
				OutputDebugStringA(("MDML: " + message + "\r\n").c_str());
		}
		// path::string() throws for characters outside the ANSI code page.
		std::string PathText(const std::filesystem::path& path) {
			try {
				return path.string();
			}
			catch (...) {
				return "<path not representable in the ANSI code page>";
			}
		}

		std::string Trim(std::string text) {
			mINI::INIStringUtil::trim(text);
			return text;
		}
		bool EqualNoCase(const std::string& a, const std::string& b) {
			return a.size() == b.size() && _stricmp(a.c_str(), b.c_str()) == 0;
		}

		// Name lookup in a section list or a section: exact match first, then the first case-insensitive match.
		template <typename TMap>
		const std::string* FindName(const TMap& map, const std::string& name) {
			const std::string wanted = Trim(name);
			for (const auto& item : map)
				if (item.first == wanted)
					return &item.first;
			for (const auto& item : map)
				if (EqualNoCase(item.first, wanted))
					return &item.first;
			return nullptr;
		}
		template <typename TMap>
		auto FindItem(const TMap& map, const std::string& name) -> decltype(&*map.begin()) {
			const std::string* found = FindName(map, name);
			if (!found)
				return nullptr;
			for (const auto& item : map)
				if (&item.first == found)
					return &item;
			return nullptr;
		}

		// Get() returns the whole value, so a "Key = Value ; comment" line (a comment in the old parser) silently becomes
		// part of the value (owner decision 2026-10-14). Warn once per file/section/key and process, not on every read.
		bool FirstTimeSeen(const std::string& id) {
			static std::mutex s_mutex;
			static std::set<std::string> s_seen;
			std::lock_guard<std::mutex> lock(s_mutex);
			return s_seen.insert(id).second;
		}
		bool LooksLikeTrailingComment(const std::string& value) {
			return value.find(" ;") != std::string::npos || value.find("\t;") != std::string::npos;
		}

		// First word of a value (up to whitespace or ';'); `rest` is set if more text follows.
		std::string FirstWord(const std::string& value, bool& rest) {
			const size_t end = value.find_first_of(" \t;");
			if (end == std::string::npos) {
				rest = false;
				return value;
			}
			rest = true;
			return value.substr(0, end);
		}
	}

	struct IniFile::Impl {
		mINI::INIStructure data;
		std::filesystem::path path;
		bool loaded = false;

		const Section* FindSection(const std::string& section) const {
			auto item = FindItem(data, section);
			return item ? &item->second : nullptr;
		}
		const std::string* FindValue(const std::string& section, const std::string& key) const {
			const Section* found = FindSection(section);
			if (!found)
				return nullptr;
			auto item = FindItem(*found, key);
			return item ? &item->second : nullptr;
		}
		// Section/key names to write to: the existing spelling if there is one, otherwise the given name.
		std::string SectionName(const std::string& section) const {
			const std::string* name = FindName(data, section);
			return name ? *name : Trim(section);
		}
		std::string KeyName(const std::string& section, const std::string& key) const {
			const Section* found = FindSection(section);
			const std::string* name = found ? FindName(*found, key) : nullptr;
			return name ? *name : Trim(key);
		}
		void WarnValue(const std::string& section, const std::string& key, const std::string& value, const char* what) const {
			Warn(PathText(path) + ": [" + section + "] " + key + " = '" + value + "' " + what);
		}
		// The first word of the value, or nullopt if the key is missing.
		std::optional<std::string> Word(const std::string& section, const std::string& key) const {
			const std::string* value = FindValue(section, key);
			if (!value)
				return std::nullopt;
			bool rest = false;
			std::string word = FirstWord(*value, rest);
			if (rest)
				WarnValue(section, key, *value, "has text after the value, it is ignored");
			return word;
		}
	};

	IniFile::IniFile() : m_impl(std::make_unique<Impl>()) {}
	IniFile::IniFile(const std::filesystem::path& file) : IniFile() {
		Load(file);
	}
	IniFile::~IniFile() = default;
	IniFile::IniFile(IniFile&& other) noexcept = default;
	IniFile& IniFile::operator=(IniFile&& other) noexcept = default;

	bool IniFile::Load(const std::filesystem::path& file) {
		m_impl->data.clear();
		m_impl->path = file;
		m_impl->loaded = false;
		try {
			std::error_code ec;
			if (!std::filesystem::exists(file, ec))
				return false;
			mINI::INIFile reader(file);
			if (!reader.read(m_impl->data)) {
				m_impl->data.clear();
				Error("Could not read " + PathText(file));
				return false;
			}
			m_impl->loaded = true;
			return true;
		}
		catch (const std::exception& ex) {
			m_impl->data.clear();
			Error("Could not read " + PathText(file) + ": " + ex.what());
		}
		catch (...) {
			m_impl->data.clear();
			Error("Could not read " + PathText(file));
		}
		return false;
	}

	bool IniFile::Save() {
		if (m_impl->path.empty()) {
			Error("IniFile::Save: no file name (use Load or SaveAs first)");
			return false;
		}
		try {
			mINI::INIFile writer(m_impl->path);
			if (writer.write(m_impl->data))
				return true;
			Error("Could not write " + PathText(m_impl->path));
		}
		catch (const std::exception& ex) {
			Error("Could not write " + PathText(m_impl->path) + ": " + ex.what());
		}
		catch (...) {
			Error("Could not write " + PathText(m_impl->path));
		}
		return false;
	}
	bool IniFile::SaveAs(const std::filesystem::path& file) {
		m_impl->path = file;
		return Save();
	}
	bool IniFile::IsLoaded() const {
		return m_impl->loaded;
	}
	const std::filesystem::path& IniFile::GetPath() const {
		return m_impl->path;
	}

	bool IniFile::HasSection(const std::string& section) const {
		return m_impl->FindSection(section) != nullptr;
	}
	bool IniFile::Has(const std::string& section, const std::string& key) const {
		return m_impl->FindValue(section, key) != nullptr;
	}
	std::vector<std::string> IniFile::Sections() const {
		std::vector<std::string> names;
		for (const auto& item : m_impl->data)
			names.push_back(item.first);
		return names;
	}
	std::vector<std::string> IniFile::Keys(const std::string& section) const {
		std::vector<std::string> names;
		if (const Section* found = m_impl->FindSection(section))
			for (const auto& item : *found)
				names.push_back(item.first);
		return names;
	}

	std::string IniFile::Get(const std::string& section, const std::string& key, const std::string& defaultValue) const {
		const std::string* value = m_impl->FindValue(section, key);
		if (!value)
			return defaultValue;
		if (LooksLikeTrailingComment(*value) && FirstTimeSeen(PathText(m_impl->path) + "|" + section + "|" + key))
			m_impl->WarnValue(section, key, *value, "contains ' ;': a ';' after a value is part of the value (comments must be on their own line)");
		return *value;
	}
	int IniFile::GetInt(const std::string& section, const std::string& key, int defaultValue) const {
		auto word = m_impl->Word(section, key);
		if (!word)
			return defaultValue;
		const char* begin = word->c_str();
		const char* end = begin + word->size();
		if (begin != end && *begin == '+')
			++begin;
		int value = 0;
		auto result = std::from_chars(begin, end, value);
		if (result.ec != std::errc() || result.ptr != end || begin == end) {
			m_impl->WarnValue(section, key, *word, "is not an integer, using the default");
			return defaultValue;
		}
		return value;
	}
	bool IniFile::GetBool(const std::string& section, const std::string& key, bool defaultValue) const {
		auto word = m_impl->Word(section, key);
		if (!word)
			return defaultValue;
		const std::string& w = *word;
		if (EqualNoCase(w, "true") || EqualNoCase(w, "yes") || EqualNoCase(w, "on"))
			return true;
		if (EqualNoCase(w, "false") || EqualNoCase(w, "no") || EqualNoCase(w, "off"))
			return false;
		const char* begin = w.c_str();
		const char* end = begin + w.size();
		if (begin != end && *begin == '+')
			++begin;
		long long number = 0;
		auto result = std::from_chars(begin, end, number);
		if (result.ec == std::errc() && result.ptr == end && begin != end)
			return number != 0;
		m_impl->WarnValue(section, key, w, "is not a boolean (1/0, true/false, yes/no, on/off), using the default");
		return defaultValue;
	}
	float IniFile::GetFloat(const std::string& section, const std::string& key, float defaultValue) const {
		auto word = m_impl->Word(section, key);
		if (!word)
			return defaultValue;
		const char* begin = word->c_str();
		const char* end = begin + word->size();
		if (begin != end && *begin == '+')
			++begin;
		float value = 0.0f;
		auto result = std::from_chars(begin, end, value);
		if (result.ec != std::errc() || result.ptr != end || begin == end) {
			m_impl->WarnValue(section, key, *word, "is not a number, using the default");
			return defaultValue;
		}
		return value;
	}

	void IniFile::Set(const std::string& section, const std::string& key, const std::string& value) {
		try {
			const std::string sectionName = m_impl->SectionName(section);
			const std::string keyName = m_impl->KeyName(section, key);
			m_impl->data[sectionName][keyName] = value;
		}
		catch (const std::exception& ex) {
			Error("IniFile::Set [" + section + "] " + key + " failed: " + ex.what());
		}
	}
	void IniFile::SetInt(const std::string& section, const std::string& key, int value) {
		Set(section, key, std::to_string(value));
	}
	void IniFile::SetBool(const std::string& section, const std::string& key, bool value) {
		Set(section, key, value ? "1" : "0");
	}
	void IniFile::SetFloat(const std::string& section, const std::string& key, float value) {
		char buffer[64];
		auto result = std::to_chars(buffer, buffer + sizeof(buffer), value);
		Set(section, key, result.ec == std::errc() ? std::string(buffer, result.ptr) : std::to_string(value));
	}
	bool IniFile::Remove(const std::string& section, const std::string& key) {
		const std::string* sectionName = FindName(m_impl->data, section);
		if (!sectionName)
			return false;
		const std::string name = *sectionName;
		const std::string keyName = m_impl->KeyName(section, key);
		return m_impl->data[name].remove(keyName);
	}
	bool IniFile::RemoveSection(const std::string& section) {
		const std::string* sectionName = FindName(m_impl->data, section);
		if (!sectionName)
			return false;
		const std::string name = *sectionName;
		return m_impl->data.remove(name);
	}
}
