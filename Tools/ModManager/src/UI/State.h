#pragma once
// Everything the UI shows and the actions behind the buttons. No ImGui in here; long operations run on a worker thread
// and hand their result back through Post() so that the state is only ever modified on the UI thread.
#include <ModManager/GameInstall.h>
#include <ModManager/Http.h>
#include <ModManager/Ini.h>
#include <ModManager/Installer.h>
#include <ModManager/LoadOrder.h>
#include <ModManager/ModScanner.h>
#include <ModManager/Settings.h>

#include <atomic>
#include <mutex>
#include <thread>

namespace mmui {
	enum class LoaderSource { LocalBuild, ZipFile, GitHub };

	struct PendingModInstall {
		std::vector<mm::ModCandidate> candidates;
		std::vector<bool> selected;
		std::vector<bool> exists;
		mm::fs::path tempDir; // extracted archive, removed when the dialog closes
	};

	class State {
	public:
		State();
		~State();

		// ---- called every frame on the UI thread
		void Update();

		// ---- game
		void SetGamePath(const std::string& path);
		void DetectGame();
		void Launch();

		// ---- mods + load order
		void RefreshMods();
		void SaveLoadOrder();
		void RemoveMod(const std::string& name);
		void RequestModInstall(const mm::fs::path& source); // zip / folder / dll
		void ConfirmModInstall();
		void CancelModInstall();

		// ---- loader
		void RefreshLocalBuild();
		void PrepareLoaderFromZip(const mm::fs::path& zip);
		void CheckGitHub();
		void DownloadGitHubRelease();
		void InstallLoader();
		void CreateReleaseZip(const mm::fs::path& zipFile);

		// ---- background work
		bool Busy() const { return m_busy.load(); }
		std::string StatusText() const;
		float Progress() const { return m_progress.load(); } // < 0: unknown
		void Cancel() { m_cancel = true; }

		// ---- data shown by the UI (UI thread only)
		mm::Settings settings;
		mm::GameInstall game;
		std::vector<mm::ModInfo> mods;
		mm::LoadOrder order;
		bool orderFileExists = false;

		LoaderSource source = LoaderSource::LocalBuild;
		mm::LoaderPackage localBuild;
		bool localBuildFound = false;
		mm::LoaderPackage prepared; // what InstallLoader installs
		bool preparedValid = false;
		std::string preparedLabel;
		std::vector<bool> preparedModSelected;
		mm::ReleaseInfo release;
		bool releaseKnown = false;

		PendingModInstall pending;
		bool hasPending = false;

	private:
		void RunAsync(const std::string& title, std::function<void()> work);
		void Post(std::function<void()> fn);
		void SetStatus(const std::string& s);
		void SetPreparedFrom(const mm::LoaderPackage& pkg, const std::string& label);

		std::thread m_worker;
		std::atomic<bool> m_busy{ false };
		std::atomic<bool> m_cancel{ false };
		std::atomic<float> m_progress{ -1.0f };
		mutable std::mutex m_mutex;
		std::string m_status;
		std::vector<std::function<void()>> m_post;
		mm::fs::path m_downloadedZip;
	};
}
