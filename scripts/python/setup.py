"""Sets up the build environment: downloads premake (if missing) and generates the project files.

Usage: python scripts/python/setup.py [--yes] [vs2022|vs2026|gmake2|nogen]
  --yes   answer all questions with yes (CI)
"""
import os
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from setupPremake import PremakeConfiguration as PremakeRequirements

os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))  # repo root

args = [a for a in sys.argv[1:] if a != "--yes"]
assumeYes = "--yes" in sys.argv[1:]

if sys.version_info < (3, 8):
    sys.exit("Python 3.8 or newer is required.")

if not PremakeRequirements.Validate(assumeYes):
    sys.exit("MDML requires Premake to generate project files.")

actions = {"0": "vs2022", "1": "vs2026", "2": "gmake2"}
action = args[0] if args else None
if action is None:
    print("\nSelect action")
    print("   0: Visual Studio 2022")
    print("   1: Visual Studio 2026")
    print("   2: GNU Makefiles")
    action = actions.get(input().strip())

if action == "nogen":
    sys.exit(0)
if action not in actions.values():
    sys.exit("Could not identify project file type, skipping step")

premake = os.path.abspath(os.path.join(PremakeRequirements.premakeDirectory, "premake5.exe"))
print(f"\nRunning premake {action}")
sys.exit(subprocess.call([premake, action]))
