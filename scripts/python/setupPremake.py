import os
from pathlib import Path

import Utils


class PremakeConfiguration:
    premakeVersion = "5.0.0-beta7"
    premakeZipUrl = f"https://github.com/premake/premake-core/releases/download/v{premakeVersion}/premake-{premakeVersion}-windows.zip"
    premakeLicenseUrl = "https://raw.githubusercontent.com/premake/premake-core/master/LICENSE.txt"
    # scripts/premake also holds the tracked premake_customization lua files; only the exe is downloaded.
    premakeDirectory = "./scripts/premake"

    @classmethod
    def Validate(cls, assumeYes=False):
        premakeExe = Path(f"{cls.premakeDirectory}/premake5.exe")
        if premakeExe.exists():
            print(f"Premake located at {os.path.abspath(premakeExe)}")
            return True
        if not Utils.Confirm(f"Premake not found. Download Premake {cls.premakeVersion}?", assumeYes):
            return False

        zipPath = f"{cls.premakeDirectory}/premake-{cls.premakeVersion}-windows.zip"
        print(f"Downloading {cls.premakeZipUrl}")
        Utils.DownloadFile(cls.premakeZipUrl, zipPath)
        Utils.UnzipFile(zipPath, deleteZipFile=True)
        Utils.DownloadFile(cls.premakeLicenseUrl, f"{cls.premakeDirectory}/LICENSE.txt")
        print(f"Premake {cls.premakeVersion} has been downloaded to '{cls.premakeDirectory}'")
        return premakeExe.exists()
