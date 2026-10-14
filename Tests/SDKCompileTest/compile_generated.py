"""Compile-checks MDML SDK headers (generator output or the hand-written Sample/) against the MDML core.

Every "<Package>.hpp" of the folder is compiled in its own translation unit (proves each header is self-contained),
plus one TU for MDML_SDK.hpp if present. Uses MSVC (VS2022, found with vswhere) with the same core include dirs and
C++20 as the mod projects. Compile only (/c): linking is covered by the DevTools.SDKCompileTest project.

Usage (from anywhere):
    python Tests/SDKCompileTest/compile_generated.py <sdk-folder> [--jobs N] [--keep]
    <sdk-folder>  e.g. "...\\Binaries\\Win64\\SDK-Out\\4.27.2-0+++UE4+Release-4.27-Medieval_Dynasty\\MDML-SDK"
                  (copy it out of the game folder first if you prefer) or Tests/SDKCompileTest/Sample
Exit code 0 = all headers compiled; failures are listed with the first error lines, full logs in the work folder.
"""
import argparse
import concurrent.futures
import os
import pathlib
import shutil
import subprocess
import sys
import tempfile

REPO = pathlib.Path(__file__).resolve().parents[2]
INCLUDE_DIRS = [
    REPO / "Dependencies/spdlog",
    REPO / "Loader/ModLoader/src",
    REPO / "Loader/ModLoader/src/Engine",
    REPO / "Loader/ModLoader/src/Engine/UE4",
    REPO / "Dependencies/glm",
]
DEFINES = ["NDEBUG", "UNICODE", "_UNICODE", "_WINDOWS", "_USRDLL", "_CRT_SECURE_NO_WARNINGS"]


def find_vcvars():
    vswhere = pathlib.Path(os.environ.get("ProgramFiles(x86)", r"C:\Program Files (x86)")) / "Microsoft Visual Studio/Installer/vswhere.exe"
    if vswhere.exists():
        out = subprocess.run([str(vswhere), "-latest", "-products", "*", "-requires", "Microsoft.VisualStudio.Component.VC.Tools.x86.x64",
                              "-property", "installationPath"], capture_output=True, text=True).stdout.strip()
        if out:
            candidate = pathlib.Path(out.splitlines()[0]) / "VC/Auxiliary/Build/vcvars64.bat"
            if candidate.exists():
                return candidate
    fallback = pathlib.Path(r"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat")
    return fallback if fallback.exists() else None


def msvc_environment(vcvars):
    out = subprocess.run(f'cmd /s /c ""{vcvars}" >nul && set"', capture_output=True, text=True, shell=True).stdout
    env = {}
    for line in out.splitlines():
        if "=" in line:
            key, _, value = line.partition("=")
            env[key] = value
    return env


def compile_tu(env, sdk_dir, work_dir, header):
    tu = work_dir / (header.stem + ".cpp")
    tu.write_text(f'#include "{header.name}"\n', encoding="utf-8")
    log = work_dir / (header.stem + ".log")
    cl = shutil.which("cl", path=env.get("Path") or env.get("PATH")) or "cl"
    cmd = [cl, "/nologo", "/c", "/std:c++20", "/EHsc", "/MD", "/O1", "/W3", "/utf-8", "/bigobj", "/permissive",
           "/wd4251", "/wd4099", "/wd4006",  # same as the solution-wide disablewarnings
           f"/Fo{work_dir / (header.stem + '.obj')}", f"/I{sdk_dir}"]
    cmd += [f"/I{d}" for d in INCLUDE_DIRS] + [f"/D{d}" for d in DEFINES] + [str(tu)]
    result = subprocess.run(cmd, capture_output=True, text=True, env=env)
    log.write_text(result.stdout + result.stderr, encoding="utf-8")
    errors = [l for l in (result.stdout + result.stderr).splitlines() if ": error" in l or ": fatal error" in l]
    warnings = [l for l in (result.stdout + result.stderr).splitlines() if ": warning" in l]
    return header.name, result.returncode == 0, errors[:5], len(warnings)


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("sdk_dir", type=pathlib.Path)
    parser.add_argument("--jobs", type=int, default=os.cpu_count() or 4)
    parser.add_argument("--keep", action="store_true", help="keep the work folder (logs, objs)")
    args = parser.parse_args()

    sdk_dir = args.sdk_dir.resolve()
    headers = sorted(p for p in sdk_dir.glob("*.hpp") if p.name not in ("NameCollisions.hpp",))
    if not headers:
        print(f"no .hpp files in {sdk_dir}")
        return 2
    vcvars = find_vcvars()
    if not vcvars:
        print("vcvars64.bat not found (Visual Studio with C++ tools required)")
        return 2
    env = msvc_environment(vcvars)

    work = pathlib.Path(tempfile.mkdtemp(prefix="mdml-sdk-compile-"))
    print(f"compiling {len(headers)} header(s) from {sdk_dir} with {args.jobs} job(s); work folder {work}")
    failed = []
    total_warnings = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:
        for name, ok, errors, warnings in pool.map(lambda h: compile_tu(env, sdk_dir, work, h), headers):
            total_warnings += warnings
            if not ok:
                failed.append((name, errors))
                print(f"FAIL {name}")
                for e in errors:
                    print(f"     {e}")
    print(f"{len(headers) - len(failed)}/{len(headers)} compiled, {len(failed)} failed, {total_warnings} warning line(s)")
    if not args.keep and not failed:
        for f in work.iterdir():
            f.unlink()
        work.rmdir()
    elif failed:
        print(f"logs: {work}")
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
