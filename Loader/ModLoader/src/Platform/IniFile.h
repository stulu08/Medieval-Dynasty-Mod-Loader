#pragma once
#include "Core.h"

#include <filesystem>
#include <memory>
#include <string>
#include <vector>

namespace mdml::platform {
	// INI file access for the loader and for mods (Wave 3A; decision 2026-10-10: mINI behind an own wrapper with an
	// explicit-section API). The backend (Dependencies/mINI) is only included by IniFile.cpp, so mods need no extra
	// include directory and the backend can be swapped without touching callers.
	//
	// File format:
	//   [Section]
	//   Key = Value
	//   ; comment
	// - Comments: only whole lines that start with ';' (after leading whitespace). '#' and '//' are NOT comments, and
	//   a ';' after a value belongs to the value (the old INI parser cut everything after ';', '#' or '//').
	//   A trailing comment is allowed on a section line: "[Section] ; comment".
	// - Leading/trailing whitespace around section names, keys and values is ignored. Values may contain '='.
	// - Lines before the first section are ignored. Duplicate sections are merged; a repeated key keeps the last value.
	// - Section and key names: an exact match wins, otherwise the first case-insensitive (ASCII) match is used.
	//   Set() on an existing name keeps the case written in the file; new names are saved as given.
	// - Every call names its section; there is no "selected section" as in the old parser.
	//
	// Errors never throw: a missing file gives an empty IniFile (IsLoaded() == false, Save() creates it), getters
	// return the default, and problems (unreadable/unwritable file, a value that is not a number) are logged.
	// Not thread-safe per instance; separate instances on different threads are fine.
	class LOADER_API IniFile {
	public:
		IniFile();
		// Same as IniFile() + Load(file).
		explicit IniFile(const std::filesystem::path& file);
		~IniFile();
		IniFile(IniFile&& other) noexcept;
		IniFile& operator=(IniFile&& other) noexcept;
		IniFile(const IniFile&) = delete;
		IniFile& operator=(const IniFile&) = delete;

		// Replaces the content with the file's. Returns false if the file does not exist (silently) or cannot be read
		// (logged); the content is empty then, and the path is kept for Save().
		bool Load(const std::filesystem::path& file);
		// Writes to the loaded path. Existing files are updated in place: comments, blank lines and the order of
		// untouched lines are kept, removed keys/sections disappear, new keys are appended to their section.
		bool Save();
		// Same, to another file (becomes the new path).
		bool SaveAs(const std::filesystem::path& file);
		// True if the last Load() read an existing file.
		bool IsLoaded() const;
		const std::filesystem::path& GetPath() const;

		bool HasSection(const std::string& section) const;
		bool Has(const std::string& section, const std::string& key) const;
		// Names as written in the file, in file order.
		std::vector<std::string> Sections() const;
		std::vector<std::string> Keys(const std::string& section) const;

		// The value (whitespace-trimmed), or defaultValue if the section or key is missing. An empty value is returned
		// as "" (the key exists). A value containing " ;" is returned unchanged but logged once (per file, section and
		// key) as a warning, because "Key = Value ; comment" was a comment in the old parser and is not any more.
		std::string Get(const std::string& section, const std::string& key, const std::string& defaultValue = "") const;
		// Typed getters read the first word of the value (up to whitespace or ';'); more text after it is ignored with
		// a warning. A missing key gives defaultValue silently, a value that does not parse gives it with a warning.
		// GetInt: decimal, optional sign. GetFloat: decimal ("0.015", "1e-3"; no locale).
		// GetBool: 1/0, any other integer (!= 0), true/false, yes/no, on/off (case-insensitive).
		int GetInt(const std::string& section, const std::string& key, int defaultValue = 0) const;
		bool GetBool(const std::string& section, const std::string& key, bool defaultValue = false) const;
		float GetFloat(const std::string& section, const std::string& key, float defaultValue = 0.0f) const;

		// Creates the section/key if needed. Values are trimmed when saved. Nothing is written before Save().
		void Set(const std::string& section, const std::string& key, const std::string& value);
		void SetInt(const std::string& section, const std::string& key, int value);
		// Writes "1" / "0".
		void SetBool(const std::string& section, const std::string& key, bool value);
		void SetFloat(const std::string& section, const std::string& key, float value);
		// Return false if there was nothing to remove.
		bool Remove(const std::string& section, const std::string& key);
		bool RemoveSection(const std::string& section);

	private:
		struct Impl;
		std::unique_ptr<Impl> m_impl;
	};
}
