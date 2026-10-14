#pragma once
// Small file/string helpers for the DevTools tools (copies of the few BaseMod `Utils` helpers the moved tools need;
// BaseMod cannot be included from here).
#include <filesystem>
#include <fstream>
#include <string>

namespace devtools::util {
	inline void ReplaceString(std::string& originalString, const std::string& stringToReplace, const std::string& replacementString) {
		size_t index = 0;
		while ((index = originalString.find(stringToReplace, index)) != std::string::npos) {
			originalString.replace(index, stringToReplace.length(), replacementString);
			index += replacementString.length();
		}
	}

	inline bool SaveString(const std::string& string, const std::string& file) {
		std::ofstream out(file);
		if (!out.is_open())
			return false;
		out << string;
		return true;
	}

	inline bool AppendStringToFile(const std::string& string, const std::string& file) {
		std::ofstream out(file, std::ios::app);
		if (!out.is_open())
			return false;
		out << string;
		return true;
	}

	// Folder of MDML.dll (= Binaries/Win64 in the game). The engine switches the working directory, so tool output is
	// never written relative to the process working directory.
	std::filesystem::path MdmlFolder();
}
