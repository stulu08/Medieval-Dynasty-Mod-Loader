// SdkGenerator facade (see SdkGenerator.h). C++latest; includes Dumper-7 headers, never MDML headers.
//
// The analysis/driver sequence is adapted from Dumper-7's Dumper/main.cpp (InitEngineCore, InitInternal, game
// name/version through KismetSystemLibrary, Generator::Generate<T>()) - Dumper-7 by Encryqed/Fischsalat and
// contributors, https://github.com/Encryqed/Dumper-7, used with permission for open-source projects (issue #416).
// Differences: runs inside MDML on the game thread instead of its own DLL thread, writes to a caller-given folder,
// forwards Dumper-7's std::cerr/std::cout output to the caller's log, guards against SEH exceptions, and only runs
// our MDMLGenerator.

#include "SdkGenerator.h"

#include <Windows.h>

#include <chrono>
#include <exception>
#include <iostream>
#include <mutex>
#include <streambuf>

#include "Generators/Generator.h"
#include "Unreal/ObjectArray.h"
#include "Settings.h"

#include "MDMLGenerator.h"

namespace devtools::sdkgen {
	namespace {
		enum class EAnalysisState {
			NotRun,
			Done,
			Failed,
		};
		EAnalysisState s_analysisState = EAnalysisState::NotRun;
		std::string s_analysisError;

		// Dumper-7 renames an existing output folder to "<folder>_OLD" before writing (the version folder on the first run
		// of a session, the MDML-SDK folder on later runs). Owner decision 2026-10-14: no _OLD copies - after a
		// successful run both possible backups of *this* output are removed (on failure they stay as the last good SDK).
		void RemoveOldBackups(const std::filesystem::path& SdkFolder, const LogCallback& Log) {
			std::filesystem::path Main = SdkFolder.lexically_normal();
			if (!Main.has_filename())
				Main = Main.parent_path();
			if (Main.empty() || !Main.has_parent_path())
				return;
			for (const std::filesystem::path& Folder : { Main, Main.parent_path() }) {
				std::filesystem::path Old = Folder;
				Old += "_OLD";
				std::error_code Ec;
				if (!std::filesystem::exists(Old, Ec))
					continue;
				std::filesystem::remove_all(Old, Ec);
				if (Ec)
					Log(ELogLevel::Warn, "Could not remove the previous SDK backup " + Old.string() + ": " + Ec.message());
				else
					Log(ELogLevel::Info, "Removed the previous SDK backup " + Old.string());
			}
		}

		// Forwards everything written to std::cerr / std::cout line by line to the caller's log while alive.
		class FLineForwarder : public std::streambuf {
		public:
			FLineForwarder(const LogCallback& InLog)
				: Log(InLog)
				, OldCerr(std::cerr.rdbuf(this))
				, OldCout(std::cout.rdbuf(this)) {
			}
			~FLineForwarder() override {
				Flush();
				std::cerr.rdbuf(OldCerr);
				std::cout.rdbuf(OldCout);
			}

		protected:
			int_type overflow(int_type Ch) override {
				if (Ch == traits_type::eof())
					return traits_type::not_eof(Ch);
				if (Ch == '\n')
					Flush();
				else
					Line.push_back(static_cast<char>(Ch));
				return Ch;
			}
			std::streamsize xsputn(const char* Text, std::streamsize Count) override {
				for (std::streamsize i = 0; i < Count; ++i)
					overflow(traits_type::to_int_type(Text[i]));
				return Count;
			}

		private:
			void Flush() {
				if (Line.empty())
					return;
				if (Log) {
					const bool bError = Line.find("rror") != std::string::npos || Line.find("wrong") != std::string::npos;
					Log(bError ? ELogLevel::Warn : ELogLevel::Info, "[Dumper-7] " + Line);
				}
				Line.clear();
			}

			const LogCallback& Log;
			std::streambuf* OldCerr;
			std::streambuf* OldCout;
			std::string Line;
		};

		// SEH guard: an access violation inside the analysis must not take the game down. No C++ objects with
		// destructors in this function (required for __try).
		bool CallGuarded(void (*Function)(void*), void* Context, unsigned long& OutCode) {
			__try {
				Function(Context);
				return true;
			}
			__except (OutCode = GetExceptionCode(), EXCEPTION_EXECUTE_HANDLER) {
				return false;
			}
		}

		struct FGuardedCall {
			std::function<void()> Body;
			std::string Error;
		};

		void RunGuardedBody(void* Context) {
			auto* Call = static_cast<FGuardedCall*>(Context);
			try {
				Call->Body();
			}
			catch (const std::exception& e) {
				Call->Error = std::string("exception: ") + e.what();
			}
			catch (...) {
				Call->Error = "unknown C++ exception";
			}
		}

		// Returns an empty string on success, else the error.
		std::string RunGuarded(std::function<void()> Body) {
			FGuardedCall Call{ std::move(Body), {} };
			unsigned long Code = 0;
			if (!CallGuarded(&RunGuardedBody, &Call, Code)) {
				char Buffer[64];
				snprintf(Buffer, sizeof(Buffer), "SEH exception 0x%08lX", Code);
				return Buffer;
			}
			return Call.Error;
		}

		void InitGameNameAndVersion() {
			if (!Settings::Generator::GameName.empty() || !Settings::Generator::GameVersion.empty())
				return;
			FString Name;
			FString Version;
			UEClass Kismet = ObjectArray::FindClassFast("KismetSystemLibrary");
			if (Kismet) {
				UEFunction GetGameName = Kismet.GetFunction("KismetSystemLibrary", "GetGameName");
				UEFunction GetEngineVersion = Kismet.GetFunction("KismetSystemLibrary", "GetEngineVersion");
				if (GetGameName && GetEngineVersion) {
					Kismet.ProcessEvent(GetGameName, &Name);
					Kismet.ProcessEvent(GetEngineVersion, &Version);
					Settings::Generator::GameName = Name.ToString();
					Settings::Generator::GameVersion = Version.ToString();
				}
			}
			if (Settings::Generator::GameName.empty())
				Settings::Generator::GameName = "UnknownGame";
			if (Settings::Generator::GameVersion.empty())
				Settings::Generator::GameVersion = "UnknownVersion";
		}
	}

	bool IsAnalysisDone() {
		return s_analysisState == EAnalysisState::Done;
	}

	bool EnsureAnalysis(const LogCallback& Log, std::string& OutError) {
		if (s_analysisState == EAnalysisState::Done)
			return true;
		if (s_analysisState == EAnalysisState::Failed) {
			OutError = "the Dumper-7 analysis failed earlier in this session (" + s_analysisError + "); restart the game to retry";
			return false;
		}

		FLineForwarder Forward(Log);
		if (Log)
			Log(ELogLevel::Info, "Starting Dumper-7 analysis (engine core + packages). The game is paused until it finishes.");
		const auto Start = std::chrono::steady_clock::now();

		const std::string Error = RunGuarded([] {
			Generator::InitEngineCore();
			Generator::InitInternal();
			InitGameNameAndVersion();
		});
		if (!Error.empty()) {
			s_analysisState = EAnalysisState::Failed;
			s_analysisError = Error;
			OutError = "Dumper-7 analysis failed: " + Error;
			return false;
		}

		s_analysisState = EAnalysisState::Done;
		if (Log) {
			const double Seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - Start).count();
			Log(ELogLevel::Info, "Dumper-7 analysis done in " + std::to_string(Seconds) + " s. Game: " + Settings::Generator::GameName + " " + Settings::Generator::GameVersion);
		}
		return true;
	}

	std::vector<std::string> GetPackageNames() {
		if (s_analysisState != EAnalysisState::Done)
			return {};
		std::vector<std::string> Names;
		const std::string Error = RunGuarded([&Names] { Names = MDMLGenerator::GetPackageNames(); });
		return Error.empty() ? Names : std::vector<std::string>{};
	}

	GenerateResult Generate(const GenerateRequest& Request, const LogCallback& Log) {
		GenerateResult Result;
		const auto Start = std::chrono::steady_clock::now();

		if (Request.OutputRoot.empty()) {
			Result.Error = "no output folder given";
			return Result;
		}
		if (!Request.bAllPackages && Request.Packages.empty()) {
			Result.Error = "no packages selected";
			return Result;
		}
		if (!EnsureAnalysis(Log, Result.Error))
			return Result;

		FLineForwarder Forward(Log);
		Settings::Generator::SDKGenerationPath = Request.OutputRoot.generic_string();
		MDMLGenerator::RequestedPackages = Request.Packages;
		MDMLGenerator::bAllPackages = Request.bAllPackages;
		MDMLGenerator::EnumDisplayNames = Request.EnumDisplayNames;
		MDMLGenerator::Stats = {}; // Generator::Generate returns early (without calling us) when the folders fail
		MDMLGenerator::MainFolder.clear();

		const std::string Error = RunGuarded([] { Generator::Generate<MDMLGenerator>(); });

		const MDMLGenerator::FStats& Stats = MDMLGenerator::Stats;
		Result.SdkFolder = MDMLGenerator::MainFolder;
		Result.GeneratedPackages = Stats.GeneratedPackages;
		Result.MissingPackages = Stats.MissingPackages;
		Result.NumClasses = Stats.NumClasses;
		Result.NumStructs = Stats.NumStructs;
		Result.NumEnums = Stats.NumEnums;
		Result.NumFunctions = Stats.NumFunctions;
		Result.NumSkippedFunctions = Stats.NumSkippedFunctions;
		Result.NumOpaqueMembers = Stats.NumOpaqueMembers;
		Result.Seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - Start).count();

		if (!Error.empty()) {
			Result.Error = "generation failed: " + Error;
			return Result;
		}
		if (Result.GeneratedPackages.empty()) {
			Result.Error = "nothing was generated (see the log; output folder could not be created, or no package matched)";
			return Result;
		}
		Result.bSuccess = true;
		RemoveOldBackups(Result.SdkFolder, Log);
		return Result;
	}
}
