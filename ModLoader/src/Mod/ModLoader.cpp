#include "Core.h"
#include "ModLoader.h"
#include <iostream>
#include <windows.h>
#include <filesystem>
#include <fstream>
#include <set>

#include "INI.h"

#include "Globals.h"
#include "Mod.h"
#include "Runtime/LoaderConfig.h"
#include "LoadOrder.h"

std::string Mod::GetModsFolder() {
	static std::string path;
	if (path.empty() || !std::filesystem::exists(path)) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\Mods\\";
	}
	return path;
}
std::string Mod::GetContentFolder() {
	static std::string path;
	if (path.empty() || !std::filesystem::exists(path)) {
		char path_c[MAX_PATH];
		GetModuleFileNameA(NULL, path_c, MAX_PATH);
		path = std::string(path_c);
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path.substr(0, path.find_last_of("/\\"));
		path = path + "\\Content\\";
	}
	return path;
}
namespace ModLoader
{
	// System text for a Win32 error code, e.g. 126 -> "The specified module could not be found."
	static std::string GetErrorMessage(DWORD error) {
		char* buffer = nullptr;
		DWORD length = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			nullptr, error, 0, (LPSTR)&buffer, 0, nullptr);
		std::string message = (length && buffer) ? std::string(buffer, length) : "unknown error";
		if (buffer)
			LocalFree(buffer);
		while (!message.empty() && (message.back() == '\n' || message.back() == '\r' || message.back() == ' ' || message.back() == '.'))
			message.pop_back();
		return message;
	}
	// Loads a core mod DLL on the calling thread (MDML's init thread). The mod constructs itself in its DllMain
	// (CompleteModCreation adds it to Global::CoreMods), so it is complete once LoadLibraryW returns.
	static void LoadModDLL(const std::filesystem::path& path) {
		Log::Info_MDML("Loading mod {0}", MDML::FormatPath(path));
		if (LoadLibraryW(path.c_str())) {
			Log::Info_MDML("Loaded mod {0}", MDML::FormatPath(path));
		}
		else {
			const DWORD error = GetLastError();
			Log::Error_MDML("Could not load mod {0}: error {1} ({2})", MDML::FormatPath(path), error, GetErrorMessage(error));
		}
	}
	static bool LessNoCase(const std::filesystem::path& a, const std::filesystem::path& b) {
		return _wcsicmp(a.c_str(), b.c_str()) < 0;
	}
	static bool EqualNoCase(const std::filesystem::path& a, const std::filesystem::path& b) {
		return _wcsicmp(a.c_str(), b.c_str()) == 0;
	}
	// Config/LoadOrder.ini lives next to NoOverwrite.ini / ModLoaderInfo.ini. Idempotent (CreateSysLinks runs before LoadMods).
	static void ResolveLoadOrder() {
		LoadOrder::Resolve(Mod::GetModsFolder(), std::filesystem::path(mdml::Config.NoOverwriteFile).parent_path() / "LoadOrder.ini");
	}
	void LoadLogicMod(std::string modName, const std::filesystem::path& Actor, const std::string& ActorPath, const std::filesystem::path& PeristentObject, const std::string& PersintentObjectPath) {
		if (!std::filesystem::exists(Actor)) {
			Log::Warn_MDML("Could not find: {0}", Actor.string());
			return;
		}
		
		std::string actorFileName = Actor.filename().string();
		std::string actorName = actorFileName.substr(0, actorFileName.find_last_of("."));
		std::string APath = ActorPath;
		if (ActorPath.empty()) {
			std::filesystem::path relpath = std::filesystem::relative(Actor.parent_path(), Mod::GetModsFolder());
			APath = "/Game/Mods/" + relpath.string() + "/" + actorName + "." + actorName + "_C";
		}
		


		ModInfo CurrentMod = ModInfo();

		CurrentMod.ModName = std::wstring(modName.length(), 0);
		std::transform(modName.begin(), modName.end(), CurrentMod.ModName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

		CurrentMod.ActorName = std::wstring(actorName.length(), 0);
		std::transform(actorName.begin(), actorName.end(), CurrentMod.ActorName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

		CurrentMod.ActorPath = std::wstring(APath.length(), 0);
		std::transform(APath.begin(), APath.end(), CurrentMod.ActorPath.begin(), [](char c) -> wchar_t {
			//when we are here we can also repair the path
			if (c == '\\')
				return L'/';
			return (wchar_t)c; 
			});
		Log::Info_MDML("Registered Mod Actor {1} for {0}", modName, APath);

		if (!PeristentObject.string().empty()) {
			if (!std::filesystem::exists(PeristentObject)) {
				Log::Warn_MDML("Could not find: {0}", PeristentObject.string());
				return;
			}
			std::string persistentFileName = PeristentObject.filename().string();
			std::string persistentName = persistentFileName.substr(0, persistentFileName.find_last_of("."));
			std::string PPath = PersintentObjectPath;
			if (PersintentObjectPath.empty()) {
				std::filesystem::path relpath = std::filesystem::relative(PeristentObject.parent_path(), Mod::GetModsFolder());
				PPath = "/Game/Mods/" + relpath.string() + "/" + persistentName + "." + persistentName + "_C";
			}

			CurrentMod.PersistentObjectName = std::wstring(persistentName.length(), 0);
			std::transform(persistentName.begin(), persistentName.end(), CurrentMod.PersistentObjectName.begin(), [](char c) -> wchar_t { return (wchar_t)c; });

			CurrentMod.PersistentObjectPath = std::wstring(PPath.length(), 0);
			std::transform(PPath.begin(), PPath.end(), CurrentMod.PersistentObjectPath.begin(), [](char c) -> wchar_t {
				//when we are here we can also repair the path
				if (c == '\\')
				return L'/';
			return (wchar_t)c;
				});
			Log::Info_MDML("Registered Persistent Mod Object {1} for {0}", modName, PPath);
		}
		

		CurrentMod.IsEnabled = true;

		Global::GetGlobals()->ModInfoList.push_back(CurrentMod);
	}
	void LoadMods()
	{
		std::string path = Mod::GetModsFolder();
		if (!std::filesystem::exists(path))
		{
			std::filesystem::create_directory(path);
		}
		ResolveLoadOrder();
		//i use std::filesystem::path so every path looks the same here as a string
		std::vector<std::filesystem::path> mods;
		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			//load mods inside folders
			if (entry.is_directory()) {
				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");
				if (!LoadOrder::IsEnabled(dirName))
					continue;
				//load mod from ini
				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);
					if (LoaderInfo.select("Mod")) {
						mods.push_back(std::filesystem::path(dirPath + "/" + LoaderInfo.get("DLLPath", dirName + ".dll")));
					}
					
				}
				//load default mod dll, dirname + .dll
				else {
					std::string altPath = dirPath + "/" + dirName + ".dll";
					if (std::filesystem::exists(altPath)) {
						mods.push_back(std::filesystem::path(altPath).string());
					}
				}
			}
			//load dlls that are inside Content/Mods
			if (entry.path().extension().string() == ".dll")
			{
				if (!LoadOrder::IsEnabled(entry.path().stem().string()))
					continue;
				mods.push_back(entry.path().string());
			}
		}
		//deterministic load order: normalized paths (backslashes, no "\/" or ".."), sorted case-insensitively, no duplicates
		for (auto& mod : mods)
			mod = mod.lexically_normal();
		std::sort(mods.begin(), mods.end(), LessNoCase);
		mods.erase(std::unique(mods.begin(), mods.end(), EqualNoCase), mods.end());

		//order by Config/LoadOrder.ini (BaseMod is always first there); ties (several dlls of one mod) stay alphabetical
		const std::filesystem::path modsRoot = std::filesystem::path(path).lexically_normal();
		auto modNameOf = [&](const std::filesystem::path& mod) {
			auto rel = mod.lexically_relative(modsRoot);
			if (rel.empty() || *rel.begin() == "..")
				return mod.stem().string();
			return rel.has_parent_path() ? rel.begin()->string() : rel.stem().string();
		};
		std::stable_sort(mods.begin(), mods.end(), [&](const std::filesystem::path& a, const std::filesystem::path& b) {
			return LoadOrder::GetPosition(modNameOf(a)) < LoadOrder::GetPosition(modNameOf(b));
		});

		//load all mods one after another on this thread, BaseMod first
		for (const auto& mod : mods) {
			if (!std::filesystem::exists(mod) || mod.extension().string() != ".dll") {
				Log::Warn_MDML("Skipping mod {0}: not an existing .dll file", MDML::FormatPath(mod));
				continue;
			}
			LoadModDLL(mod);
		}
		Log::Info_MDML("Loaded {0} core mod(s)", Global::GetGlobals()->CoreMods.size());


		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			if (entry.is_directory()) {

				auto dirName = entry.path().filename().string();
				auto dirPath = entry.path().string();
				auto iniPath = std::filesystem::path(dirPath + "/mod.ini");

				if (std::filesystem::exists(iniPath)) {

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);

					
					if (LoaderInfo.select("LogicMod")) {
						if (!LoadOrder::IsEnabled(dirName)) {
							Log::Info_MDML("Logic mod {0} is disabled in LoadOrder.ini", dirName);
							continue;
						}

						auto modName = LoaderInfo.get("ModName", dirName);
						auto actorFile = dirPath + "/" + LoaderInfo.get("ActorFile", "");
						auto actorPath = LoaderInfo.get("ActorPath", "");
						auto PeristentObjectFile = dirPath + "/" + LoaderInfo.get("PeristentObjectFile", "");
						auto PersistentObjectPath = LoaderInfo.get("PersistentObjectPath", "");

						if (!actorFile.empty()) {
							LoadLogicMod(modName, actorFile, actorPath, PeristentObjectFile, PersistentObjectPath);
						}
						else
							Log::Info_MDML("No actor found for {0}", modName);
					}
				}
			}
		}
	}
	// BEGIN link-ops (pure filesystem logic; the offline test harness extracts this block, keep it free of other dependencies than Log and MDML::FormatPath)
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
				Log::Error_MDML("Could not open {0} for writing, overwrite links are disabled", MDML::FormatPath(file));
				return false;
			}
			return true;
		}
		bool Add(const std::string& target) {
			stream << target << std::endl;
			if (!stream.good()) {
				Log::Error_MDML("Could not write to ModLinks.bin, skipping {0}", MDML::FormatPath(target));
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
				Log::Error_MDML("{0} is not a link created by MDML, skipping it", MDML::FormatPath(target));
				return false;
			}
			if (duplicate) {
				// Another overwrite mod already linked this file; the later mod wins, the backup stays.
				Log::Warn_MDML("Another mod already overwrites {0}, the later mod wins", MDML::FormatPath(target));
			}
			else if (backupExists) {
				// A genuine original is already backed up, so what sits at target is a stale link of an earlier run (lost record).
				Log::Warn_MDML("Stale link {0} found, keeping the existing backup", MDML::FormatPath(target));
			}
			else {
				Log::Warn_MDML("Stale link {0} found, removing it", MDML::FormatPath(target));
			}
			std::filesystem::remove(target, ec);
			if (ec) {
				Log::Error_MDML("Could not remove stale link {0} ({1}), skipping it", MDML::FormatPath(target), ec.message());
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
				Log::Error_MDML("Could not back up {0} ({1}), skipping it", MDML::FormatPath(target), ec.message());
				return false;
			}
			backedUp = true;
			Log::Warn_MDML("Backed up original file {0}", MDML::FormatPath(target));
		}
		std::filesystem::create_directories(target.parent_path(), ec);
		if (!ec) {
			if (useHardLinks)
				std::filesystem::create_hard_link(source, target, ec);
			else
				std::filesystem::create_symlink(source, target, ec);
		}
		if (ec) {
			Log::Error_MDML("Could not create link {0} ({1}), skipping it", MDML::FormatPath(target), ec.message());
			if (backedUp) {
				std::error_code ec2;
				std::filesystem::rename(backup, target, ec2);
				if (ec2)
					Log::Error_MDML("Could not put back original file {0} ({1}), it stays in {2}", MDML::FormatPath(target), ec2.message(), MDML::FormatPath(backup));
				else
					Log::Info_MDML("Restored original file {0}", MDML::FormatPath(target));
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
				Log::Warn_MDML("Cant delete file link {0}, link does not exist", MDML::FormatPath(target));
		}
		else {
			if (!isOld && !useHardLinks && !IsSymlink(target)) {
				Log::Warn_MDML("Cant delete file link {0}, it is not a symlink", MDML::FormatPath(target));
				return false;
			}
			if (!backupExists && !LooksLikeOurLink(target, nullptr)) {
				// Without a backup this is no link we can prove to be ours (e.g. the original after a failed backup): never delete it.
				// With a backup the target was put there by us (it may be an orphaned hard link whose mod file is gone).
				Log::Warn_MDML("Leaving {0} alone, it is not a link created by MDML", MDML::FormatPath(target));
				return true;
			}
			if (std::filesystem::remove(target, ec) && !ec) {
				if (!isOld)
					Log::Trace_MDML("Deleted file link {0}", MDML::FormatPath(target));
				else
					Log::Warn_MDML("Deleted old file link {0}", MDML::FormatPath(target));
				count++;
			}
			else {
				if (!isOld)
					Log::Error_MDML("Could not deleted file link {0} ({1})", MDML::FormatPath(target), ec.message());
				else
					Log::Error_MDML("Could not deleted old file link {0} ({1})", MDML::FormatPath(target), ec.message());
				return false;
			}
		}
		if (backupExists) {
			ec.clear();
			std::filesystem::rename(backup, target, ec);
			if (ec) {
				Log::Error_MDML("Could not restore original file {0} ({1})", MDML::FormatPath(target), ec.message());
				return false;
			}
			Log::Info_MDML("Restored original file {0}", MDML::FormatPath(target));
		}
		return true;
	}
	// Processes every entry of the record file. Entries that could not be resolved are written back so they are retried on the next start.
	static void CleanupLinks(const std::filesystem::path& recordFile, bool isOld, bool useHardLinks) {
		std::error_code ec;
		if (!PathPresent(recordFile)) {
			if (!isOld)
				Log::Critical_MDML("Cant find Links File at {0}", MDML::FormatPath(recordFile));
			return;
		}
		if (isOld)
			Log::Warn_MDML("Old file links found, maybe the application exited unexpected");
		std::ifstream stream(recordFile, std::ios_base::in);
		if (!stream.is_open()) {
			Log::Error_MDML("Could not read {0}, file links are left as they are", MDML::FormatPath(recordFile));
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
				Log::Error_MDML("Could not delete {0} ({1})", MDML::FormatPath(recordFile), ec.message());
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
				Log::Error_MDML("Could not rewrite {0}, the old entries stay in it", MDML::FormatPath(recordFile));
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
		if (!record.Open(mdml::Config.HardLinksFile))
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

					INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
					INI LoaderInfo(iniPath.string(), true);

					if (LoaderInfo.select("Overwrites") || LoaderInfo.select("Overrides")) {
						if (!LoadOrder::IsEnabled(dirName)) {
							Log::Info_MDML("Overwrite mod {0} is disabled in LoadOrder.ini, no links created", dirName);
							continue;
						}
						std::string enabled = LoaderInfo.get("Enable", "False");
						OverwriteMod oMod;
						oMod.Name = LoaderInfo.get("Name", "Uknown");
						oMod.Author = LoaderInfo.get("Author", "Uknown");
						oMod.Description = LoaderInfo.get("Description", "Uknown");

						std::transform(enabled.begin(), enabled.end(), enabled.begin(), [](char c)->char { return std::tolower(c); });
						if (enabled == "true" || enabled._Starts_with("1")) {
							std::string folderStr = dirPath + "/" + LoaderInfo.get("Folder", "");
							std::filesystem::path folderPath = folderStr;
							if (folderStr.empty() || !std::filesystem::exists(folderPath, ec)) {
								Log::Warn_MDML("Overwrite mod {0} is enabled but its Folder {1} does not exist, skipping it", oMod.Name, MDML::FormatPath(folderPath));
								continue;
							}
							std::filesystem::recursive_directory_iterator fileIt(folderPath, ec);
							for (; !ec && fileIt != std::filesystem::recursive_directory_iterator(); fileIt.increment(ec)) {
								const auto& dirEntry = *fileIt;
								if (dirEntry.is_directory())
									continue;
								auto path = dirEntry.path();
								if (!dirEntry.is_regular_file()) {
									Log::Warn_MDML("Skipping file linking {0}, source it is not a regular file", MDML::FormatPath(path));
									continue;
								}
								auto relPath = std::filesystem::relative(path, folderPath);
								auto target = std::filesystem::path(Mod::GetContentFolder() + "\\" + relPath.string());
								if (LinkFile(path, target, mdml::Config.UseHardLinks, keys, record)) {
									//formating this doesnt work cause it inserts the mod folder, and i dont know why
									Log::Trace_MDML("Created link to {0}", target.string());
									linked.insert(GetPathKey(target));
									oMod.Files.push_back(target.string());
								}
							}
							if (ec)
								Log::Error_MDML("Could not read the files of overwrite mod {0} ({1}), the rest of it is skipped", oMod.Name, ec.message());
							Global::GetGlobals()->OverwriteMods.push_back(oMod);
						}
					}
				}
			}
		}
		Log::Info_MDML("Created {0} {1} links", linked.size(), mdml::Config.UseHardLinks ? "hard" : "sym");
	}
	void DeleteSysLinks(bool isOld) {
		CleanupLinks(mdml::Config.HardLinksFile, isOld, mdml::Config.UseHardLinks);
	}
};
