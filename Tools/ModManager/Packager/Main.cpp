// Console front end of mm::CreateReleaseZip: builds MDML-<version>.zip and MDML-DevKit-<version>.zip from the repo's
// Output/ModLoader without the UI (scripts/package.bat). Usage: MDMLPackager [outDir] [--build <dir>]
// Default outDir = <repo>/Output/Packages, default build = <repo>/Output/ModLoader (found relative to the exe).
#include <ModManager/Installer.h>
#include <ModManager/Archive.h>

#include <iostream>

using namespace mm;

int main(int argc, char** argv) {
	fs::path outDir, buildDir;
	for (int i = 1; i < argc; i++) {
		std::string a = argv[i];
		if (a == "--build" && i + 1 < argc) buildDir = PathFromUtf8(argv[++i]);
		else outDir = PathFromUtf8(a);
	}
	LoaderPackage pkg;
	bool found = buildDir.empty() ? FindLocalBuild(pkg) : DetectLoaderPackage(buildDir, pkg);
	if (!found) { std::cerr << "no MDML build found (Output/ModLoader with MDML.dll)\n"; return 2; }
	if (outDir.empty()) {
		fs::path repo;
		if (!FindRepoRoot(pkg, repo)) { std::cerr << "give an output folder\n"; return 2; }
		outDir = repo / "Output" / "Packages";
	}
	int failed = 0;
	for (ReleaseKind kind : { ReleaseKind::EndUser, ReleaseKind::DevKit }) {
		fs::path zip = outDir / ReleaseZipName(pkg, kind);
		std::string err;
		if (CreateReleaseZip(pkg, kind, zip, err)) {
			std::cout << "wrote " << PathToUtf8(zip) << "\n";
		}
		else {
			std::cerr << "FAILED " << PathToUtf8(zip) << ": " << err << "\n";
			failed++;
		}
	}
	return failed ? 1 : 0;
}
