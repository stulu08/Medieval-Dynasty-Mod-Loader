import os
import sys
import time
import urllib.request
from zipfile import ZipFile


def DownloadFile(url, filepath):
    filepath = os.path.abspath(filepath)
    os.makedirs(os.path.dirname(filepath), exist_ok=True)
    request = urllib.request.Request(url, headers={"User-Agent": "MDML-setup"})
    with urllib.request.urlopen(request) as response, open(filepath, "wb") as f:
        total = int(response.headers.get("content-length") or 0)
        downloaded = 0
        startTime = time.time()
        while True:
            data = response.read(1024 * 256)
            if not data:
                break
            f.write(data)
            downloaded += len(data)
            if total:
                done = int(50 * downloaded / total)
                speed = (downloaded / 1024) / max(time.time() - startTime, 1e-6)
                sys.stdout.write("\r[{}{}] {:.2f}% ({:.2f} KB/s)     ".format("#" * done, "." * (50 - done), downloaded * 100 / total, speed))
                sys.stdout.flush()
    sys.stdout.write("\n")


def UnzipFile(filepath, deleteZipFile=True):
    zipFilePath = os.path.abspath(filepath)
    with ZipFile(zipFilePath, "r") as zipFile:
        zipFile.extractall(os.path.dirname(zipFilePath))
    if deleteZipFile:
        os.remove(zipFilePath)


def Confirm(question, assumeYes):
    if assumeYes:
        return True
    while True:
        reply = input(f"{question} [Y/N]: ").lower().strip()[:1]
        if reply in ("y", "n"):
            return reply == "y"
