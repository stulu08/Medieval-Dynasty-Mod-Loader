#!/usr/bin/env python3
"""Read-only state report for the OverwriteBackupTest fixture. Never modifies anything.

Usage: python check.py "E:\\SteamLibrary\\steamapps\\common\\Medieval Dynasty"
       (the folder containing Medieval_Dynasty\\, or the Medieval_Dynasty folder itself)
Exit code: 0 = state is one of the two consistent states (ORIGINAL / LINKED), 1 = anything else.
"""
import hashlib
import os
import sys

REL = os.path.join("ChromaSDK", "Animations", "Cold_Hit_Keyboard.chroma")
ORIGINAL_SHA256 = "6eae822a0204435f5b661640f42269d23eea3fe83aa77edab9feaa73dce0b159"
ORIGINAL_SIZE = 10118
MOD_SHA256 = "c739bec5d253027e619cc47e7997c6d140d3a634331e87134bec7ea1a79b2907"
MOD_SIZE = 122
MOD_NAME = "OverwriteBackupTest"


def sha256(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def describe(path, label):
    """Returns (exists, sha or None) and prints details."""
    if not os.path.lexists(path):
        print(f"  {label}: MISSING  ({path})")
        return False, None
    kind = []
    if os.path.islink(path):
        kind.append("SYMLINK -> " + os.readlink(path))
    try:
        st = os.stat(path)
    except OSError as e:
        print(f"  {label}: present but unreadable (dangling link?): {e}")
        return True, None
    if st.st_nlink > 1:
        kind.append(f"hard link (nlink={st.st_nlink})")
    digest = sha256(path)
    tag = "original" if digest == ORIGINAL_SHA256 else "mod file" if digest == MOD_SHA256 else "UNKNOWN content"
    print(f"  {label}: exists, size={st.st_size}, sha256={digest[:16]}.. [{tag}]"
          + (", " + ", ".join(kind) if kind else ", plain file"))
    return True, digest


def read_links(path):
    print(f"ModLinks.bin: {path}")
    if not os.path.exists(path):
        print("  absent")
        return None
    raw = open(path, "rb").read()
    print(f"  {len(raw)} bytes, CRLF={b'\\r\\n' in raw}")
    try:
        lines = [l for l in raw.decode("utf-8").splitlines() if l]
    except UnicodeDecodeError:
        print("  not UTF-8, cannot decode")
        return []
    for l in lines:
        print("  entry:", l)
    return lines


def tail_log(path, n=25):
    print(f"MDML log: {path}")
    if not os.path.exists(path):
        print("  absent")
        return
    keys = ("link", "Backed up", "Restored", "Could not", "Cant", "Shutting", "Old file", "Overwrite", "overwrites")
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        lines = [l.rstrip() for l in f if any(k in l for k in keys)]
    for l in lines[-n:]:
        print("  " + l)
    if not lines:
        print("  (no relevant lines)")


def main():
    if len(sys.argv) != 2:
        print(__doc__)
        return 2
    root = os.path.abspath(sys.argv[1])
    game = os.path.join(root, "Medieval_Dynasty")
    if not os.path.isdir(game):
        game = root
    content = os.path.join(game, "Content")
    if not os.path.isdir(content):
        print("Content folder not found under", root)
        return 2
    cfg = os.path.join(game, "Binaries", "Win64", "Config")
    target = os.path.join(content, REL)
    backup = target + ".mdml-backup"
    mod_dir = os.path.join(content, "Mods", MOD_NAME)

    print(f"Target : {target}")
    print(f"Mod dir: {mod_dir} ({'present' if os.path.isdir(mod_dir) else 'NOT deployed'})")
    t_exists, t_hash = describe(target, "target")
    b_exists, b_hash = describe(backup, "backup")
    src = os.path.join(mod_dir, "OverrideContent", REL)
    if os.path.exists(src) and t_exists:
        try:
            print("  target is same file as mod source:", os.path.samefile(src, target))
        except OSError:
            pass
    links = read_links(os.path.join(cfg, "ModLinks.bin"))
    if links is not None:
        norm = [os.path.normcase(os.path.normpath(l)) for l in links]
        print("  target listed in ModLinks.bin:", os.path.normcase(os.path.normpath(target)) in norm)
    tail_log(os.path.join(game, "Binaries", "Win64", "Logs", "MDML-log.txt"))

    print()
    if t_hash == ORIGINAL_SHA256 and not b_exists and links is None:
        state, ok = "ORIGINAL (clean, nothing linked, no backup, no ModLinks.bin)", True
    elif t_hash == MOD_SHA256 and b_hash == ORIGINAL_SHA256 and links is not None:
        state, ok = "LINKED (mod file active, original safe in .mdml-backup, ModLinks.bin present)", True
    elif t_hash == MOD_SHA256 and not b_exists:
        state, ok = "BROKEN: mod file active but NO backup (original lost! restore with Steam 'Verify integrity')", False
    elif not t_exists and b_hash == ORIGINAL_SHA256:
        state, ok = "BROKEN/CRASHED: target missing, original only in .mdml-backup (needs restore)", False
    elif t_hash == ORIGINAL_SHA256 and b_exists:
        state, ok = "INCONSISTENT: original in place AND a backup file still exists (stale backup)", False
    elif t_hash == ORIGINAL_SHA256 and links is not None:
        state, ok = "INCONSISTENT: original in place but ModLinks.bin still exists", False
    else:
        state, ok = "UNEXPECTED combination, inspect the lines above", False
    print("STATE:", state)
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
