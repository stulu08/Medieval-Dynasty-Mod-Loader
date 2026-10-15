#include "State.h"

#include <Windows.h>
#include <shellapi.h>
#include <ModManager/Archive.h>

namespace mmui {
	using namespace mm;

	State::State() {
		settings.Load();
		if (settings.gamePath.empty()) {
			auto found = FindGameCandidates();
			if (!found.empty()) {
				settings.gamePath = PathToUtf8(found.front());
				settings.Save();
				Log::Info("Found Medieval Dynasty: " + settings.gamePath);
			}
		}
		game.root = PathFromUtf8(settings.gamePath);
		RefreshLocalBuild();
		RefreshMods();
	}

	State::~State() {
		m_cancel = true;
		if (m_worker.joinable()) m_worker.join();
		if (hasPending) CancelModInstall();
	}

	void State::Update() {
		std::vector<std::function<void()>> post;
		{
			std::lock_guard<std::mutex> lock(m_mutex);
			post.swap(m_post);
		}
		for (auto& f : post) f();
	}

	void State::Post(std::function<void()> fn) {
		std::lock_guard<std::mutex> lock(m_mutex);
		m_post.push_back(std::move(fn));
	}

	void State::SetStatus(const std::string& s) {
		std::lock_guard<std::mutex> lock(m_mutex);
		m_status = s;
	}

	std::string State::StatusText() const {
		std::lock_guard<std::mutex> lock(m_mutex);
		return m_status;
	}

	void State::RunAsync(const std::string& title, std::function<void()> work) {
		if (m_busy.exchange(true)) {
			Log::Warn("Busy: " + title + " was not started");
			return;
		}
		if (m_worker.joinable()) m_worker.join();
		m_cancel = false;
		m_progress = -1.0f;
		SetStatus(title);
		Log::Info(title);
		m_worker = std::thread([this, work = std::move(work)]() {
			work();
			m_progress = -1.0f;
			m_busy = false;
		});
	}

	// ---------------------------------------------------------------- game

	void State::SetGamePath(const std::string& path) {
		settings.gamePath = path;
		settings.Save();
		game.root = PathFromUtf8(path);
		RefreshMods();
	}

	void State::DetectGame() {
		auto found = FindGameCandidates();
		if (found.empty()) {
			Log::Warn("Medieval Dynasty was not found in any Steam library; set the folder manually.");
			return;
		}
		SetGamePath(PathToUtf8(found.front()));
		Log::Info("Game folder: " + settings.gamePath);
	}

	void State::Launch() {
		if (!game.Valid()) return;
		if (GameInstall::IsGameRunning()) {
			Log::Warn("The game is already running.");
			return;
		}
		if (settings.launchViaSteam) {
			ShellExecuteW(nullptr, L"open", (L"steam://rungameid/" + ToWide(kSteamAppId)).c_str(), nullptr, nullptr, SW_SHOWNORMAL);
			Log::Info("Started through Steam");
		}
		else {
			fs::path exe = game.LauncherExe();
			ShellExecuteW(nullptr, L"open", exe.wstring().c_str(), nullptr, game.root.wstring().c_str(), SW_SHOWNORMAL);
			Log::Info("Started " + PathToUtf8(exe));
		}
	}

	// ---------------------------------------------------------------- mods

	void State::RefreshMods() {
		mods.clear();
		order = LoadOrder();
		orderFileExists = false;
		if (!game.Valid()) return;
		mods = ScanMods(game.ModsDir());
		orderFileExists = order.Load(game.LoadOrderFile());
		std::vector<std::string> names;
		for (const auto& m : mods) names.push_back(m.name);
		order.Merge(names); // in memory only; written when the user changes something
	}

	void State::SaveLoadOrder() {
		if (!game.Valid()) return;
		if (GameInstall::IsGameRunning())
			Log::Warn("The game is running: it only reads LoadOrder.ini at startup, changes apply on the next start.");
		if (order.Save(game.LoadOrderFile())) {
			orderFileExists = true;
			Log::Info("Saved " + PathToUtf8(game.LoadOrderFile()));
		}
		else {
			Log::Error("Could not write " + PathToUtf8(game.LoadOrderFile()));
		}
	}

	void State::RemoveMod(const std::string& name) {
		for (const auto& m : mods) {
			if (!IEquals(m.name, name)) continue;
			std::string err;
			if (mm::RemoveMod(m.path, err)) {
				Log::Info("Moved mod '" + name + "' to the recycle bin");
				order.Remove(name);
				if (orderFileExists) SaveLoadOrder();
			}
			else {
				Log::Error("Could not remove '" + name + "': " + err);
			}
			break;
		}
		RefreshMods();
	}

	void State::RequestModInstall(const fs::path& source) {
		if (!game.Valid()) {
			Log::Warn("Set the game folder first.");
			return;
		}
		if (hasPending) CancelModInstall();
		PendingModInstall p;
		std::string err;
		if (!PrepareModSource(source, p.candidates, p.tempDir, err)) {
			Log::Error("Cannot install " + PathToUtf8(source) + ": " + err);
			return;
		}
		for (const auto& c : p.candidates) {
			p.selected.push_back(true);
			std::error_code ec;
			p.exists.push_back(fs::exists(game.ModsDir() / PathFromUtf8(c.name), ec));
		}
		pending = std::move(p);
		hasPending = true;
	}

	void State::ConfirmModInstall() {
		if (!hasPending) return;
		if (GameInstall::IsGameRunning()) {
			Log::Warn("Close the game before installing mods.");
			return;
		}
		for (size_t i = 0; i < pending.candidates.size(); i++) {
			if (!pending.selected[i]) continue;
			std::string err;
			if (mm::InstallMod(pending.candidates[i], game, Settings::BackupDir(), err))
				Log::Info("Installed mod '" + pending.candidates[i].name + "'");
			else
				Log::Error("Installing '" + pending.candidates[i].name + "' failed: " + err);
		}
		CancelModInstall();
		RefreshMods();
		if (orderFileExists) SaveLoadOrder(); // keeps new mods in the file in the same sorted position MDML would use
	}

	void State::CancelModInstall() {
		std::error_code ec;
		if (!pending.tempDir.empty()) fs::remove_all(pending.tempDir, ec);
		pending = PendingModInstall();
		hasPending = false;
	}

	// ---------------------------------------------------------------- loader

	void State::SetPreparedFrom(const LoaderPackage& pkg, const std::string& label) {
		prepared = pkg;
		preparedValid = true;
		preparedLabel = label;
		preparedModSelected.assign(pkg.mods.size(), false);
		// every mod is opt-in (DevTools, examples)
	}

	void State::RefreshLocalBuild() {
		localBuildFound = false;
		if (!settings.localBuildPath.empty()) {
			localBuildFound = DetectLoaderPackage(PathFromUtf8(settings.localBuildPath), localBuild);
		}
		else if (FindLocalBuild(localBuild)) {
			localBuildFound = true;
			settings.localBuildPath = PathToUtf8(localBuild.root);
		}
		if (localBuildFound && source == LoaderSource::LocalBuild)
			SetPreparedFrom(localBuild, "local build " + PathToUtf8(localBuild.root));
		else if (source == LoaderSource::LocalBuild)
			preparedValid = false;
	}

	void State::PrepareLoaderFromZip(const fs::path& zip) {
		fs::path z = zip;
		RunAsync("Reading " + PathToUtf8(z.filename()), [this, z]() {
			fs::path tmp = MakeTempDir("loader");
			std::string err;
			if (!ExtractArchive(z, tmp, err)) {
				Log::Error("Extract failed: " + err);
				return;
			}
			LoaderPackage pkg;
			if (!DetectLoaderPackage(tmp, pkg)) {
				Log::Error("No MDML.dll found in " + PathToUtf8(z.filename()));
				return;
			}
			Post([this, pkg, z]() {
				SetPreparedFrom(pkg, "zip " + PathToUtf8(z.filename()));
				Log::Info("Package ready: " + preparedLabel + (pkg.version.empty() ? "" : " (MDML " + pkg.version + ")"));
			});
		});
	}

	void State::CheckGitHub() {
		std::string owner = settings.githubOwner, repo = settings.githubRepo;
		RunAsync("Asking GitHub for the latest release of " + owner + "/" + repo, [this, owner, repo]() {
			ReleaseInfo info;
			std::string err;
			if (!FetchLatestRelease(owner, repo, info, err)) {
				Log::Error("GitHub: " + err);
				return;
			}
			Post([this, info]() {
				release = info;
				releaseKnown = true;
				Log::Info("Latest release: " + info.tag + " (" + info.published + ")");
			});
		});
	}

	void State::DownloadGitHubRelease() {
		if (!releaseKnown) return;
		ReleaseInfo info = release;
		RunAsync("Downloading " + info.assetName, [this, info]() {
			fs::path zip = MakeTempDir("download") / PathFromUtf8(info.assetName);
			std::string err;
			bool ok = HttpDownload(info.assetUrl, zip, [this](uint64_t d, uint64_t t) {
				if (t) m_progress = (float)((double)d / (double)t);
			}, &m_cancel, err);
			if (!ok) {
				Log::Error("Download failed: " + err);
				return;
			}
			fs::path tmp = MakeTempDir("loader");
			SetStatus("Extracting " + info.assetName);
			if (!ExtractArchive(zip, tmp, err)) {
				Log::Error("Extract failed: " + err);
				return;
			}
			LoaderPackage pkg;
			if (!DetectLoaderPackage(tmp, pkg)) {
				Log::Error("The release does not contain MDML.dll");
				return;
			}
			Post([this, pkg, info]() {
				SetPreparedFrom(pkg, "GitHub " + info.tag);
				Log::Info("Package ready: GitHub " + info.tag);
			});
		});
	}

	void State::InstallLoader() {
		if (!preparedValid || !game.Valid()) return;
		std::vector<std::string> mods_;
		for (size_t i = 0; i < prepared.mods.size(); i++)
			if (preparedModSelected[i]) mods_.push_back(prepared.mods[i]);
		LoaderPackage pkg = prepared;
		GameInstall g = game;
		std::string label = preparedLabel;
		RunAsync("Installing MDML (" + label + ")", [this, pkg, g, mods_, label]() {
			InstallReport rep = mm::InstallLoader(pkg, g, mods_, Settings::BackupDir());
			Post([this, rep, label]() {
				if (rep.ok) {
					for (const auto& s : rep.installed) Log::Info("  installed " + s);
					Log::Info("MDML installed from " + label);
					settings.installedLoaderSource = label;
					settings.Save();
					RefreshMods();
				}
				else {
					Log::Error("Install failed: " + rep.error);
				}
			});
		});
	}

	void State::CreateReleaseZip(const fs::path& zipFile, mm::ReleaseKind kind) {
		if (!localBuildFound) return;
		LoaderPackage pkg = localBuild;
		RunAsync("Creating " + PathToUtf8(zipFile.filename()), [pkg, kind, zipFile]() {
			std::string err;
			if (mm::CreateReleaseZip(pkg, kind, zipFile, err))
				Log::Info("Release zip written: " + PathToUtf8(zipFile));
			else
				Log::Error("Could not create the zip: " + err);
		});
	}
}
