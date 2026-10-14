#include "Installer.h"
#include "Archive.h"

#include <Windows.h>
#include <shellapi.h>
#include <ShlObj.h>
#include <ctime>

namespace mm {
	namespace {
		bool IsJunkFile(const fs::path& p) {
			std::string ext = Lower(PathToUtf8(p.extension()));
			return ext == ".pdb" || ext == ".exp" || ext == ".lib" || ext == ".ilk" || ext == ".obj";
		}

		std::string Timestamp() {
			std::time_t t = std::time(nullptr);
			std::tm tm{};
			localtime_s(&tm, &t);
			char buf[32];
			std::strftime(buf, sizeof(buf), "%Y-%m-%d_%H-%M-%S", &tm);
			return buf;
		}

		// copies a directory tree; junk (pdb/exp/lib) is skipped. Existing files are replaced, after being saved in backupDir.
		bool CopyTree(const fs::path& src, const fs::path& dst, const fs::path& backupDir, std::string& error) {
			std::error_code ec;
			fs::create_directories(dst, ec);
			for (fs::recursive_directory_iterator it(src, ec), end; it != end; it.increment(ec)) {
				if (ec) { error = ec.message(); return false; }
				fs::path rel = fs::relative(it->path(), src, ec);
				fs::path target = dst / rel;
				if (it->is_directory(ec)) {
					fs::create_directories(target, ec);
					continue;
				}
				if (IsJunkFile(it->path())) continue;
				if (fs::exists(target, ec) && !backupDir.empty()) {
					fs::path b = backupDir / rel;
					fs::create_directories(b.parent_path(), ec);
					fs::copy_file(target, b, fs::copy_options::overwrite_existing, ec);
				}
				fs::create_directories(target.parent_path(), ec);
				fs::copy_file(it->path(), target, fs::copy_options::overwrite_existing, ec);
				if (ec) {
					error = "cannot copy " + PathToUtf8(rel) + ": " + ec.message();
					return false;
				}
			}
			return true;
		}

		bool HasModIni(const fs::path& dir) {
			std::error_code ec;
			return fs::exists(dir / "mod.ini", ec);
		}

		bool FindFileBelow(const fs::path& dir, const wchar_t* name, int depth, fs::path& found) {
			std::error_code ec;
			if (fs::exists(dir / name, ec)) { found = dir; return true; }
			if (depth == 0) return false;
			for (const auto& e : fs::directory_iterator(dir, ec)) {
				if (e.is_directory(ec) && FindFileBelow(e.path(), name, depth - 1, found)) return true;
			}
			return false;
		}
	}

	bool DetectLoaderPackage(const fs::path& dir, LoaderPackage& out) {
		fs::path root;
		if (!FindFileBelow(dir, L"MDML.dll", 2, root)) return false;
		out = {};
		out.root = root;
		std::error_code ec;
		out.hasProxy = fs::exists(root / "xinput1_3.dll", ec);

		// mods: <root>/Mods/<name> (build output) or <root>/<name> with a mod.ini (release zip)
		fs::path modsDir = root / "Mods";
		for (const auto& e : fs::directory_iterator(fs::is_directory(modsDir, ec) ? modsDir : root, ec)) {
			if (!e.is_directory(ec)) continue;
			std::string n = PathToUtf8(e.path().filename());
			if (!fs::is_directory(modsDir, ec) && !HasModIni(e.path()) && !fs::exists(e.path() / (n + ".dll"), ec)) continue;
			if (HasModIni(e.path()) || fs::exists(e.path() / (n + ".dll"), ec)) out.mods.push_back(n);
		}
		std::sort(out.mods.begin(), out.mods.end(), [](const std::string& a, const std::string& b) {
			if (IEquals(a, "BaseMod") != IEquals(b, "BaseMod")) return IEquals(a, "BaseMod");
			return Lower(a) < Lower(b);
		});

		DWORD h = 0;
		std::wstring f = (root / "MDML.dll").wstring();
		DWORD size = GetFileVersionInfoSizeW(f.c_str(), &h);
		if (size) {
			std::vector<char> data(size);
			VS_FIXEDFILEINFO* info = nullptr;
			UINT len = 0;
			if (GetFileVersionInfoW(f.c_str(), 0, size, data.data()) && VerQueryValueW(data.data(), L"\\", (LPVOID*)&info, &len) && info) {
				char buf[64];
				snprintf(buf, sizeof(buf), "%u.%u.%u.%u", HIWORD(info->dwFileVersionMS), LOWORD(info->dwFileVersionMS),
					HIWORD(info->dwFileVersionLS), LOWORD(info->dwFileVersionLS));
				out.version = buf;
			}
		}
		return true;
	}

	bool FindLocalBuild(LoaderPackage& out) {
		wchar_t exe[MAX_PATH];
		GetModuleFileNameW(nullptr, exe, MAX_PATH);
		fs::path p = fs::path(exe).parent_path();
		std::error_code ec;
		for (int i = 0; i < 8 && !p.empty(); i++, p = p.parent_path()) {
			fs::path cand = p / "Output" / "ModLoader";
			if (fs::exists(cand / "MDML.dll", ec) && DetectLoaderPackage(cand, out)) return true;
			if (p == p.parent_path()) break;
		}
		return false;
	}

	InstallReport InstallLoader(const LoaderPackage& pkg, const GameInstall& game, const std::vector<std::string>& modsToInstall,
		const fs::path& backupRoot) {
		InstallReport rep;
		if (!game.Valid()) { rep.error = "game folder is not valid"; return rep; }
		if (GameInstall::IsGameRunning()) { rep.error = "close Medieval Dynasty first"; return rep; }

		std::error_code ec;
		fs::path backup = backupRoot / Timestamp();
		fs::create_directories(game.Binaries(), ec);
		std::string err;

		for (const char* f : { "MDML.dll", "xinput1_3.dll" }) {
			fs::path src = pkg.root / f;
			if (!fs::exists(src, ec)) {
				if (std::string(f) == "MDML.dll") { rep.error = "package has no MDML.dll"; return rep; }
				continue;
			}
			fs::path dst = game.Binaries() / f;
			if (fs::exists(dst, ec)) {
				fs::create_directories(backup / "Binaries", ec);
				fs::copy_file(dst, backup / "Binaries" / f, fs::copy_options::overwrite_existing, ec);
			}
			fs::copy_file(src, dst, fs::copy_options::overwrite_existing, ec);
			if (ec) { rep.error = std::string("cannot write ") + f + ": " + ec.message(); return rep; }
			rep.installed.push_back(f);
		}

		// Config: only files which do not exist yet, so user edits (LoadOrder.ini, ModLoaderInfo.ini, ...) survive updates
		fs::path cfg = pkg.root / "Config";
		if (fs::is_directory(cfg, ec)) {
			fs::create_directories(game.ConfigDir(), ec);
			for (const auto& e : fs::directory_iterator(cfg, ec)) {
				if (!e.is_regular_file(ec) || IsJunkFile(e.path())) continue;
				fs::path dst = game.ConfigDir() / e.path().filename();
				if (!fs::exists(dst, ec)) {
					fs::copy_file(e.path(), dst, ec);
					rep.installed.push_back("Config/" + PathToUtf8(e.path().filename()));
				}
			}
		}

		fs::path modsSrc = fs::is_directory(pkg.root / "Mods", ec) ? pkg.root / "Mods" : pkg.root;
		fs::create_directories(game.ModsDir(), ec);
		for (const auto& name : modsToInstall) {
			if (!CopyTree(modsSrc / PathFromUtf8(name), game.ModsDir() / PathFromUtf8(name), backup / "Mods" / PathFromUtf8(name), err)) {
				rep.error = "mod " + name + ": " + err;
				return rep;
			}
			rep.installed.push_back("Mods/" + name);
		}
		rep.ok = true;
		return rep;
	}

	std::vector<ModCandidate> FindModCandidates(const fs::path& dir, const std::string& fallbackName) {
		std::vector<ModCandidate> out;
		std::error_code ec;

		// <x>/Content/Mods/<mod> layout (what a mod author's UE project exports)
		std::vector<fs::path> contentMods;
		for (fs::recursive_directory_iterator it(dir, ec), end; it != end && !ec; it.increment(ec)) {
			if (it.depth() > 4) { it.disable_recursion_pending(); continue; }
			if (it->is_directory(ec) && it->path().filename() == "Mods" && it->path().parent_path().filename() == "Content")
				contentMods.push_back(it->path());
		}
		for (const auto& cm : contentMods)
			for (const auto& e : fs::directory_iterator(cm, ec))
				if (e.is_directory(ec)) out.push_back({ PathToUtf8(e.path().filename()), e.path() });
		if (!out.empty()) return out;

		// folders with a mod.ini (the root itself counts)
		if (HasModIni(dir)) {
			out.push_back({ fallbackName, dir });
			return out;
		}
		for (fs::recursive_directory_iterator it(dir, ec), end; it != end && !ec; it.increment(ec)) {
			if (it.depth() > 3) { it.disable_recursion_pending(); continue; }
			if (it->is_directory(ec) && HasModIni(it->path())) {
				out.push_back({ PathToUtf8(it->path().filename()), it->path() });
				it.disable_recursion_pending();
			}
		}
		if (!out.empty()) return out;

		// a bare DLL package: becomes a folder mod named like the archive
		for (const auto& e : fs::directory_iterator(dir, ec))
			if (e.is_regular_file(ec) && Lower(PathToUtf8(e.path().extension())) == ".dll") {
				out.push_back({ fallbackName, dir });
				break;
			}
		return out;
	}

	bool PrepareModSource(const fs::path& source, std::vector<ModCandidate>& out, fs::path& tempDir, std::string& error) {
		std::error_code ec;
		fs::path dir = source;
		std::string name = PathToUtf8(source.stem());
		if (fs::is_regular_file(source, ec)) {
			std::string ext = Lower(PathToUtf8(source.extension()));
			if (ext == ".dll") {
				// single DLL: wrap it in a temp folder named like the file
				tempDir = MakeTempDir("mod");
				fs::path d = tempDir / PathFromUtf8(name);
				fs::create_directories(d, ec);
				fs::copy_file(source, d / source.filename(), ec);
				out.push_back({ name, d });
				return true;
			}
			if (ext != ".zip") { error = "unsupported file type (zip, folder or dll)"; return false; }
			tempDir = MakeTempDir("mod");
			if (!ExtractArchive(source, tempDir, error)) return false;
			dir = tempDir;
		}
		else if (!fs::is_directory(source, ec)) {
			error = "not found";
			return false;
		}
		out = FindModCandidates(dir, name);
		if (out.empty()) {
			error = "no mod found (expected a folder with mod.ini, Content/Mods/<name>, or a DLL)";
			return false;
		}
		return true;
	}

	bool InstallMod(const ModCandidate& mod, const GameInstall& game, const fs::path& backupRoot, std::string& error) {
		if (!game.Valid()) { error = "game folder is not valid"; return false; }
		if (mod.name.empty() || mod.name.find_first_of("\\/:*?\"<>|") != std::string::npos) {
			error = "invalid mod name '" + mod.name + "'";
			return false;
		}
		fs::path dst = game.ModsDir() / PathFromUtf8(mod.name);
		std::error_code ec;
		fs::path backup = backupRoot / Timestamp() / "Mods" / PathFromUtf8(mod.name);
		bool existed = fs::exists(dst, ec);
		if (existed) {
			// replace cleanly: stale files of the old version must not stay (backup first)
			if (!CopyTree(dst, backup, {}, error)) return false;
			fs::remove_all(dst, ec);
		}
		return CopyTree(mod.path, dst, {}, error);
	}

	bool RemoveMod(const fs::path& modPath, std::string& error) {
		std::wstring p = modPath.wstring();
		p.push_back(L'\0'); // SHFileOperation wants a double terminated list
		SHFILEOPSTRUCTW op{};
		op.wFunc = FO_DELETE;
		op.pFrom = p.c_str();
		op.fFlags = FOF_ALLOWUNDO | FOF_NOCONFIRMATION | FOF_NOERRORUI | FOF_SILENT;
		int r = SHFileOperationW(&op);
		if (r != 0 || op.fAnyOperationsAborted) {
			error = "recycle bin operation failed (" + std::to_string(r) + ")";
			return false;
		}
		return true;
	}

	bool CreateReleaseZip(const LoaderPackage& pkg, const std::vector<std::string>& mods, const fs::path& zipFile, std::string& error) {
		std::error_code ec;
		fs::path stage = MakeTempDir("release");
		for (const char* f : { "MDML.dll", "xinput1_3.dll" }) {
			if (fs::exists(pkg.root / f, ec)) fs::copy_file(pkg.root / f, stage / f, ec);
		}
		fs::path cfg = pkg.root / "Config";
		if (fs::is_directory(cfg, ec)) {
			fs::create_directories(stage / "Config", ec);
			for (const auto& e : fs::directory_iterator(cfg, ec))
				if (e.is_regular_file(ec) && !IsJunkFile(e.path())) {
					std::string n = Lower(PathToUtf8(e.path().filename()));
					// state files created by the loader must not ship
					if (n == "loadorder.ini" || n == "symbolcache.txt" || n == "windowconfig.ini") continue;
					fs::copy_file(e.path(), stage / "Config" / e.path().filename(), ec);
				}
		}
		fs::path modsSrc = fs::is_directory(pkg.root / "Mods", ec) ? pkg.root / "Mods" : pkg.root;
		for (const auto& m : mods)
			if (!CopyTree(modsSrc / PathFromUtf8(m), stage / "Mods" / PathFromUtf8(m), {}, error)) return false;
		bool ok = CreateZip(stage, zipFile, error);
		fs::remove_all(stage, ec);
		return ok;
	}
}
