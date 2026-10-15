#include "ExportList.h"

#include <algorithm>
#include <fstream>
#include <sstream>
#include <system_error>
#include <unordered_set>

namespace devtools {
	std::vector<std::string> ParseExportList(const std::string& Text) {
		std::vector<std::string> Packages;
		std::unordered_set<std::string> Seen;
		std::istringstream Lines(Text);
		std::string Line;
		while (std::getline(Lines, Line)) {
			const size_t Comment = Line.find_first_of(";#");
			if (Comment != std::string::npos)
				Line.erase(Comment);
			std::string Token;
			auto Flush = [&]() {
				if (!Token.empty() && Seen.insert(Token).second)
					Packages.push_back(Token);
				Token.clear();
			};
			for (char c : Line) {
				if (c == ' ' || c == '\t' || c == ',' || c == '\r')
					Flush();
				else
					Token.push_back(c);
			}
			Flush();
		}
		return Packages;
	}

	ExportList LoadExportList(const std::filesystem::path& File) {
		ExportList List;
		List.File = File;
		List.ModName = File.parent_path().filename().string();
		std::ifstream Stream(File, std::ios::binary);
		if (!Stream) {
			List.Error = "cannot open file";
			return List;
		}
		std::stringstream Buffer;
		Buffer << Stream.rdbuf();
		List.Packages = ParseExportList(Buffer.str());
		return List;
	}

	std::vector<ExportList> FindExportLists(const std::filesystem::path& ModsFolder) {
		std::vector<ExportList> Lists;
		std::error_code Ec;
		if (!std::filesystem::is_directory(ModsFolder, Ec))
			return Lists;
		for (const auto& ModDir : std::filesystem::directory_iterator(ModsFolder, Ec)) {
			if (!ModDir.is_directory(Ec))
				continue;
			for (const auto& Entry : std::filesystem::directory_iterator(ModDir.path(), Ec)) {
				if (Entry.is_regular_file(Ec) && Entry.path().extension() == ".export")
					Lists.push_back(LoadExportList(Entry.path()));
			}
		}
		std::sort(Lists.begin(), Lists.end(), [](const ExportList& A, const ExportList& B) { return A.File < B.File; });
		return Lists;
	}

	bool SaveExportList(const std::filesystem::path& File, const std::vector<std::string>& Packages, std::string& OutError) {
		std::ofstream Stream(File, std::ios::binary | std::ios::trunc);
		if (!Stream) {
			OutError = "cannot write " + File.string();
			return false;
		}
		Stream << "; MDML SDK export list (DevTools). One package per line; ';' or '#' start a comment.\r\n";
		Stream << "; Dependencies are added automatically by the generator.\r\n";
		for (const std::string& Package : Packages)
			Stream << Package << "\r\n";
		return true;
	}
}
