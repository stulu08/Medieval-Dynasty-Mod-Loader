#pragma once
// Export lists: which SDK packages a mod needs (decision 2026-10-10, docs/SDK_GENERATOR.md "Export lists").
//
// A mod ships "<anything>.export" files next to its mod.ini (Content/Mods/<Mod>/). Format, modelled on BaseMod's old
// ".export" profiles (one package name per line, as written by its "Save selected to file" button):
//   ; comment            (# works too; also at the end of a line)
//   BP_BaseCharacter     package names as in the DevTools package list (= UPackage short name)
//   Engine, CoreUObject  several names per line, separated by spaces/tabs/commas, are accepted as well
// Dependencies do not need to be listed; the generator adds every package the listed ones include.

#include <filesystem>
#include <string>
#include <vector>

namespace devtools {
	struct ExportList {
		std::filesystem::path File;
		std::string ModName;               // folder name under Content/Mods
		std::vector<std::string> Packages; // in file order, without duplicates
		std::string Error;                 // set when the file could not be read
	};

	// Parses the text of an export list (see format above).
	std::vector<std::string> ParseExportList(const std::string& Text);

	ExportList LoadExportList(const std::filesystem::path& File);

	// All "*.export" files directly inside the sub folders of ModsFolder, sorted by path.
	std::vector<ExportList> FindExportLists(const std::filesystem::path& ModsFolder);

	// Writes Packages in the format above (with a header comment). Returns false and sets OutError on failure.
	bool SaveExportList(const std::filesystem::path& File, const std::vector<std::string>& Packages, std::string& OutError);
}
