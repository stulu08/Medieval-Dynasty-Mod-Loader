#include "Core.h"
#include "OverwriteMods.h"

#include "Mods/Registry.h"
#include "Mods/CoreModLoader.h"
#include "Mods/LoadOrder.h"
#include "MDML/Mod.h"
#include "MDML/Hooks.h"
#include "MDML/IniFile.h"
#include "Runtime/LoaderConfig.h"
#include "MDML/Paths.h"

#include "UE4.h"
#include "EngineAddresses.h"

#include <set>

namespace mdml::mods
{
	namespace
	{
			//returns true if we can overwrite the file
			bool isPakOverridePathValid(const std::filesystem::path& path) {
				if (!std::filesystem::exists(path))
					return false;
				auto str = runtime::FormatPath(path.string());
				if (str.find("\\Content\\") != str.npos) {
					if (runtime::Config.disableOverwriteFiles.find(str) != runtime::Config.disableOverwriteFiles.end()) {
						return !runtime::Config.disableOverwriteFiles[str];
					}
					return true;
				}
				return false;
			}
			
			/* 
			(discord message by me): 
				in the originial ue 4.27.2 there are 2 versions of FindFileInPakFiles, 
				i tried locating this function now for around an hour.
				But the variant i dont need was easy to locate, after looking at the pseudo code 
				i noticed that the two functions were merged together

			static bool FPakPlatformFile::FindFileInPakFiles(
				TArray<FPakListEntry>& Paks, const TCHAR* Filename,
				TRefCountPtr<FPakFile>* OutPakFile, FPakEntry* OutEntry = nullptr)
			
			PVOID(*origFindFileInPakFiles)(UE4::TArray<FPakListEntry>&, const TCHAR*, void**,void*);
			*/


			// bool FPakPlatformFile::FindFileInPakFiles(const TCHAR* Filename, TRefCountPtr<FPakFile>* OutPakFile = nullptr, FPakEntry* OutEntry = nullptr)
			PVOID(*origFindFileInPakFiles)(void* ptrThis, const TCHAR* Filename, void** OutPakFile, struct FPakEntry* OutEntry);
			bool __fastcall hookFindFileInPakFiles(void* ptrThis, const TCHAR* Filename, void** OutPakFile, struct FPakEntry* OutEntry) {
				if (Filename) {
					std::wstring wstring(&Filename[0]);
					std::filesystem::path file(wstring);
					if (isPakOverridePathValid(file)) {
						if (OutPakFile)
							*OutPakFile = nullptr;
						OutEntry = nullptr;
						Log::Trace_MDML("Accepted FindFileInPakFiles: {0}", runtime::FormatPath(file.string()));
						return 0;
					}
					//Log::Info_MDML("Refused IsNonPakFilenameAllowed: {0}", runtime::FormatPath(file.string()));
				}
				//return origFindFileInPakFiles(Paks, Filename, OutPakFile, OutEntry); old
				return origFindFileInPakFiles(ptrThis, Filename, OutPakFile, OutEntry);
			}


			// bool FPakPlatformFile::IsNonPakFilenameAllowed(FPakPlatformFile *this, const struct FString *a2)
			PVOID(*origIsNonPakFilenameAllowed)(void* ptrThis, const struct UE4::FString* InFileName);
			bool __fastcall hookIsNonPakFilenameAllowed(void* ptrThis, const struct UE4::FString* InFileName) {
				//return 1;
				if (InFileName->c_str()) {
					std::filesystem::path file(InFileName->ToString());
					//Log::Info_MDML("Allowed IsNonPakFilenameAllowed: {0}", file.string());
					if (isPakOverridePathValid(file)) {
						Log::Trace_MDML("Accepted IsNonPakFilenameAllowed: {0}", runtime::FormatPath(file.string()));
						return 1;
					}
					//Log::Info_MDML("Refused IsNonPakFilenameAllowed: {0}", runtime::FormatPath(file.string()));
				}
				return origIsNonPakFilenameAllowed(ptrThis, InFileName);
			}
	}

	void LoadNoOverwriteList() {
		const std::filesystem::path rootGameDir = runtime::Config.rootGameDir;
		if (!std::filesystem::exists(runtime::Config.NoOverwriteFile)) {
			Log::Warn_MDML("No NoOverwrite file loaded, generating one...");
			if (FILE* file = fopen(runtime::Config.NoOverwriteFile.c_str(), "w")) {
				//dir, files
				std::unordered_map<std::string, std::vector<std::string>> paths;
				for (auto path : std::filesystem::recursive_directory_iterator(rootGameDir / "Medieval_Dynasty/Content")) {
					if (path.is_directory()) {
						continue;
					}
					std::string strPath = std::filesystem::relative(path.path(), rootGameDir).string();
					paths[std::filesystem::relative(path.path().parent_path(), rootGameDir).string()].push_back(strPath);

				}
				fprintf(file, "; This file stores if the mod loader should disable file overwriting for specific files\n");
				fprintf(file, "; The Mod Loader overwrites the ue4 file detection(its the simplest way of saying it even if its wrong)\n");
				fprintf(file, "; But for loose files the game ships with we want to use the default ue4 way of loading files instead of our own, otherwise the game might crash\n");
				fprintf(file, "; \n");
				fprintf(file, "; To enable file overwriting change value to false and to disable overwriting change to true\n");
				fprintf(file, "; The file loader only support true/1/false/0 and not TrUe or FaLs\n");
				fprintf(file, "; The path is relative to the root dir where the Engine and Game folder is located with the Manifest_NonUFSFiles_Win64.txt\n");
				for (auto [dir, pathVec] : paths) {
					fprintf(file, "\n[%s]\n", dir.c_str());
					for (auto strPath : pathVec) {
						//disable for mods
						if (strPath.find("\\LogicMods\\") != strPath.npos || strPath.find("\\Mods\\") != strPath.npos)
							fprintf(file, "%s=false\n", strPath.c_str());
						else
							fprintf(file, "%s=true\n", strPath.c_str());
					}
				}
				fclose(file);
			}
			Log::Warn_MDML("NoOverwrite file generated to {0}, if you have mods installed remove them from the list or change to false", runtime::Config.NoOverwriteFile);
		}
		if (std::filesystem::exists(runtime::Config.NoOverwriteFile)) {
			std::ifstream stream;
			stream.open(runtime::Config.NoOverwriteFile);
			std::string line;
			while (std::getline(stream, line)) {
				if (line.rfind(";", 0) == 0 || line.rfind("[", 0) == 0)
					continue;
				size_t seperatorPos = line.find_last_of("=");
				std::string fileName = line.substr(0, seperatorPos);
				std::string value = line.substr(seperatorPos + 1, line.npos);
				std::transform(value.begin(), value.end(), value.begin(), [](char c) -> char { return std::tolower(c); }); // to lowercase
				if (value == "true" || value == "1")
					runtime::Config.disableOverwriteFiles[fileName] = true;
				else if (value == "false" || value == "0")
					runtime::Config.disableOverwriteFiles[fileName] = false;
			}
		}
		else {
			Log::Error_MDML("Error {0} could not be opened", runtime::Config.NoOverwriteFile);
		}
	}

	void InstallPakHooks() {
		platform::Hooks::Add(mdml::Addresses.FindFileInPakFiles, &hookFindFileInPakFiles, &origFindFileInPakFiles, "FPakPlatformFile::FindFileInPakFiles");
		platform::Hooks::Add(mdml::Addresses.IsNonPakFilenameAllowed, &hookIsNonPakFilenameAllowed, &origIsNonPakFilenameAllowed, "FPakPlatformFile::IsNonPakFilenameAllowed");
	}

	// BEGIN link-ops (pure filesystem logic; the offline test harness extracts this block, keep it free of other dependencies than Log and runtime::FormatPath)
	// Loose game files replaced by an overwrite mod are kept next to the link under this name.
	static std::filesystem::path GetBackupPath(const std::filesystem::path& target) {
		return std::filesystem::path(target.string() + ".mdml-backup");
	}
	// Case-insensitive, normalized key for a path (NTFS is case-insensitive, entries contain a doubled backslash).
	static std::wstring GetPathKey(const std::filesystem::path& path) {
		std::wstring key = path.lexically_normal().wstring();
		for (auto& c : key)
			c = (wchar_t)towlower(c);
		return key;
	}
	// True if something (file, link or dangling symlink) is present at the path. Does not follow symlinks.
	static bool PathPresent(const std::filesystem::path& path) {
		std::error_code ec;
		auto status = std::filesystem::symlink_status(path, ec);
		return !ec && status.type() != std::filesystem::file_type::not_found;
	}
	static bool IsSymlink(const std::filesystem::path& path) {
		std::error_code ec;
		auto status = std::filesystem::symlink_status(path, ec);
		return !ec && status.type() == std::filesystem::file_type::symlink;
	}
	// Does the file at target look like a link we created? (symlink, hard link to the mod source, or any other hard link)
	static bool LooksLikeOurLink(const std::filesystem::path& target, const std::filesystem::path* source) {
		if (IsSymlink(target))
			return true;
		std::error_code ec;
		if (source && std::filesystem::equivalent(target, *source, ec) && !ec)
			return true;
		ec.clear();
		auto count = std::filesystem::hard_link_count(target, ec);
		return !ec && count > 1;
	}
	// ModLinks.bin: plain text, one absolute target path per line. Every target is recorded and flushed BEFORE the
	// original is renamed / the link is created, so a crash in between is repaired on the next start.
	class LinkRecord {
	public:
		bool Open(const std::filesystem::path& file) {
			stream.open(file, std::ios_base::out | std::ios_base::app);
			if (!stream.is_open() || !stream.good()) {
				Log::Error_MDML("Could not open {0} for writing, overwrite links are disabled", runtime::FormatPath(file));
				return false;
			}
			return true;
		}
		bool Add(const std::string& target) {
			stream << target << std::endl;
			if (!stream.good()) {
				Log::Error_MDML("Could not write to ModLinks.bin, skipping {0}", runtime::FormatPath(target));
				stream.clear();
				return false;
			}
			return true;
		}
		void Close() {
			stream.close();
		}
	private:
		std::ofstream stream;
	};
	// Links one mod file into the game folder, backing up an existing loose original. Returns true if the link exists afterwards.
	// keys: normalized targets already handled in this run (a later mod wins over an earlier one).
	static bool LinkFile(const std::filesystem::path& source, const std::filesystem::path& target, bool useHardLinks, std::set<std::wstring>& keys, LinkRecord& record) {
		std::error_code ec;
		const auto backup = GetBackupPath(target);
		const bool backupExists = PathPresent(backup);
		bool backedUp = false;
		const auto key = GetPathKey(target);
		const bool duplicate = keys.count(key) != 0;
		bool staleLink = false;
		if (PathPresent(target) && !duplicate && !backupExists) {
			// A link of an earlier run whose record and backup are both gone is no original either.
			std::error_code ecEq;
			staleLink = IsSymlink(target) || (std::filesystem::equivalent(target, source, ecEq) && !ecEq);
		}
		if (PathPresent(target) && (duplicate || backupExists || staleLink)) {
			if (!LooksLikeOurLink(target, &source)) {
				Log::Error_MDML("{0} is not a link created by MDML, skipping it", runtime::FormatPath(target));
				return false;
			}
			if (duplicate) {
				// Another overwrite mod already linked this file; the later mod wins, the backup stays.
				Log::Warn_MDML("Another mod already overwrites {0}, the later mod wins", runtime::FormatPath(target));
			}
			else if (backupExists) {
				// A genuine original is already backed up, so what sits at target is a stale link of an earlier run (lost record).
				Log::Warn_MDML("Stale link {0} found, keeping the existing backup", runtime::FormatPath(target));
			}
			else {
				Log::Warn_MDML("Stale link {0} found, removing it", runtime::FormatPath(target));
			}
			std::filesystem::remove(target, ec);
			if (ec) {
				Log::Error_MDML("Could not remove stale link {0} ({1}), skipping it", runtime::FormatPath(target), ec.message());
				return false;
			}
		}
		if (!duplicate && !record.Add(target.string()))
			return false;
		keys.insert(key);
		if (PathPresent(target)) {
			// A loose file shipped with the game: keep it and restore it in DeleteSysLinks.
			std::filesystem::rename(target, backup, ec);
			if (ec) {
				Log::Error_MDML("Could not back up {0} ({1}), skipping it", runtime::FormatPath(target), ec.message());
				return false;
			}
			backedUp = true;
			Log::Warn_MDML("Backed up original file {0}", runtime::FormatPath(target));
		}
		std::filesystem::create_directories(target.parent_path(), ec);
		if (!ec) {
			if (useHardLinks)
				std::filesystem::create_hard_link(source, target, ec);
			else
				std::filesystem::create_symlink(source, target, ec);
		}
		if (ec) {
			Log::Error_MDML("Could not create link {0} ({1}), skipping it", runtime::FormatPath(target), ec.message());
			if (backedUp) {
				std::error_code ec2;
				std::filesystem::rename(backup, target, ec2);
				if (ec2)
					Log::Error_MDML("Could not put back original file {0} ({1}), it stays in {2}", runtime::FormatPath(target), ec2.message(), runtime::FormatPath(backup));
				else
					Log::Info_MDML("Restored original file {0}", runtime::FormatPath(target));
			}
			return false;
		}
		return true;
	}
	// Removes the link recorded for target and moves the backup back. Returns false if the entry must be retried on the next start.
	static bool CleanupEntry(const std::filesystem::path& target, bool isOld, bool useHardLinks, size_t& count) {
		std::error_code ec;
		const auto backup = GetBackupPath(target);
		const bool backupExists = PathPresent(backup);
		if (!PathPresent(target)) {
			if (!isOld)
				Log::Warn_MDML("Cant delete file link {0}, link does not exist", runtime::FormatPath(target));
		}
		else {
			if (!isOld && !useHardLinks && !IsSymlink(target)) {
				Log::Warn_MDML("Cant delete file link {0}, it is not a symlink", runtime::FormatPath(target));
				return false;
			}
			if (!backupExists && !LooksLikeOurLink(target, nullptr)) {
				// Without a backup this is no link we can prove to be ours (e.g. the original after a failed backup): never delete it.
				// With a backup the target was put there by us (it may be an orphaned hard link whose mod file is gone).
				Log::Warn_MDML("Leaving {0} alone, it is not a link created by MDML", runtime::FormatPath(target));
				return true;
			}
			if (std::filesystem::remove(target, ec) && !ec) {
				if (!isOld)
					Log::Trace_MDML("Deleted file link {0}", runtime::FormatPath(target));
				else
					Log::Warn_MDML("Deleted old file link {0}", runtime::FormatPath(target));
				count++;
			}
			else {
				if (!isOld)
					Log::Error_MDML("Could not delete file link {0} ({1})", runtime::FormatPath(target), ec.message());
				else
					Log::Error_MDML("Could not delete old file link {0} ({1})", runtime::FormatPath(target), ec.message());
				return false;
			}
		}
		if (backupExists) {
			ec.clear();
			std::filesystem::rename(backup, target, ec);
			if (ec) {
				Log::Error_MDML("Could not restore original file {0} ({1})", runtime::FormatPath(target), ec.message());
				return false;
			}
			Log::Info_MDML("Restored original file {0}", runtime::FormatPath(target));
		}
		return true;
	}
	// Processes every entry of the record file. Entries that could not be resolved are written back so they are retried on the next start.
	static void CleanupLinks(const std::filesystem::path& recordFile, bool isOld, bool useHardLinks) {
		std::error_code ec;
		if (!PathPresent(recordFile)) {
			if (!isOld)
				Log::Critical_MDML("Cant find Links File at {0}", runtime::FormatPath(recordFile));
			return;
		}
		if (isOld)
			Log::Warn_MDML("Old file links found, maybe the application exited unexpected");
		std::ifstream stream(recordFile, std::ios_base::in);
		if (!stream.is_open()) {
			Log::Error_MDML("Could not read {0}, file links are left as they are", runtime::FormatPath(recordFile));
			return;
		}
		size_t count = 0, max = 0;
		std::vector<std::string> remaining;
		for (std::string line; std::getline(stream, line); ) {
			while (!line.empty() && (line.back() == '\r' || line.back() == '\n'))
				line.pop_back();
			if (line.empty())
				continue;
			max++;
			if (!CleanupEntry(std::filesystem::path(line), isOld, useHardLinks, count))
				remaining.push_back(line);
		}
		stream.close();
		if (remaining.empty()) {
			std::filesystem::remove(recordFile, ec);
			if (ec)
				Log::Error_MDML("Could not delete {0} ({1})", runtime::FormatPath(recordFile), ec.message());
		}
		else {
			const std::filesystem::path tmp = recordFile.string() + ".tmp";
			bool written = false;
			{
				std::ofstream out(tmp, std::ios_base::out | std::ios_base::trunc);
				for (const auto& line : remaining)
					out << line << std::endl;
				written = out.good();
			}
			if (written)
				std::filesystem::rename(tmp, recordFile, ec);
			if (!written || ec)
				Log::Error_MDML("Could not rewrite {0}, the old entries stay in it", runtime::FormatPath(recordFile));
			else
				Log::Warn_MDML("{0} file links could not be resolved and are retried on the next start", remaining.size());
		}
		if (!isOld)
			Log::Info_MDML("Deleted {0}/{1} file links", count, max);
		else
			Log::Warn_MDML("Deleted {0}/{1} old file links", count, max);
	}
	// END link-ops
	void CreateSysLinks() {
		DeleteSysLinks(true);
		std::error_code ec;
		std::string ModFolderPath = Mod::GetModsFolder();
		ResolveLoadOrder();
		if (!std::filesystem::exists(ModFolderPath, ec))
		{
			std::filesystem::create_directory(ModFolderPath, ec);
		}
		// Entries that could not be cleaned up above stay in the file, so it is appended to, not truncated.
		LinkRecord record;
		if (!record.Open(runtime::Config.HardLinksFile))
			return;
		std::set<std::wstring> keys;
		std::set<std::wstring> linked;
		std::filesystem::directory_iterator modsIt(ModFolderPath, ec);
		if (ec) {
			Log::Error_MDML("Could not read the mods folder {0} ({1})", ModFolderPath, ec.message());
			return;
		}
		for (const auto& entry : modsIt) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath, ec)) {

					platform::IniFile modIni(iniPath);
					// [Overwrites], or the older name [Overrides] if there is no [Overwrites] section.
					const char* section = modIni.HasSection("Overwrites") ? "Overwrites" : (modIni.HasSection("Overrides") ? "Overrides" : nullptr);

					if (section) {
						if (!LoadOrder::IsEnabled(dirName)) {
							Log::Info_MDML("Overwrite mod {0} is disabled in LoadOrder.ini, no links created", dirName);
							continue;
						}
						std::string enabled = modIni.Get(section, "Enable", "False");
						OverwriteMod oMod;
						oMod.Name = modIni.Get(section, "Name", "Unknown");
						oMod.Author = modIni.Get(section, "Author", "Unknown");
						oMod.Description = modIni.Get(section, "Description", "Unknown");

						std::transform(enabled.begin(), enabled.end(), enabled.begin(), [](char c)->char { return std::tolower(c); });
						if (enabled == "true" || enabled.rfind("1", 0) == 0) {
							// A missing/empty Folder used to resolve to the mod folder itself, so every file of the mod
							// (mod.ini, DLL, ...) was linked into Content.
							const std::string folder = modIni.Get(section, "Folder", "");
							std::filesystem::path folderPath = dirPath + "/" + folder;
							if (folder.empty() || !std::filesystem::exists(folderPath, ec)) {
								Log::Warn_MDML("Overwrite mod {0} is enabled but its Folder {1} does not exist, skipping it", oMod.Name, runtime::FormatPath(folderPath));
								continue;
							}
							std::filesystem::recursive_directory_iterator fileIt(folderPath, ec);
							for (; !ec && fileIt != std::filesystem::recursive_directory_iterator(); fileIt.increment(ec)) {
								const auto& dirEntry = *fileIt;
								if (dirEntry.is_directory())
									continue;
								auto path = dirEntry.path();
								if (!dirEntry.is_regular_file()) {
									Log::Warn_MDML("Skipping file linking {0}, source it is not a regular file", runtime::FormatPath(path));
									continue;
								}
								auto relPath = std::filesystem::relative(path, folderPath);
								auto target = std::filesystem::path(Mod::GetContentFolder() + "\\" + relPath.string());
								if (LinkFile(path, target, runtime::Config.UseHardLinks, keys, record)) {
									//formating this doesnt work cause it inserts the mod folder, and i dont know why
									Log::Trace_MDML("Created link to {0}", target.string());
									linked.insert(GetPathKey(target));
									oMod.Files.push_back(target.string());
								}
							}
							if (ec)
								Log::Error_MDML("Could not read the files of overwrite mod {0} ({1}), the rest of it is skipped", oMod.Name, ec.message());
							mdml::mods::Registry::Get().OverwriteMods.push_back(oMod);
						}
					}
				}
			}
		}
		Log::Info_MDML("Created {0} {1} links", linked.size(), runtime::Config.UseHardLinks ? "hard" : "sym");
	}
	void DeleteSysLinks(bool isOld) {
		CleanupLinks(runtime::Config.HardLinksFile, isOld, runtime::Config.UseHardLinks);
	}
}
