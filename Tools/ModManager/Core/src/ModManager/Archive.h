#pragma once
// Zip handling through the Windows built-in bsdtar (%SystemRoot%\System32\tar.exe, Windows 10 1803+): no extra library.
// tar already refuses entries which escape the destination directory ("..").
#include "Util.h"

namespace mm {
	bool ExtractArchive(const fs::path& archive, const fs::path& destDir, std::string& error);
	// zip the *contents* of srcDir (no wrapper folder) into zipFile
	bool CreateZip(const fs::path& srcDir, const fs::path& zipFile, std::string& error);
	// fresh, empty directory below %TEMP%/MDMM
	fs::path MakeTempDir(const std::string& hint);
}
