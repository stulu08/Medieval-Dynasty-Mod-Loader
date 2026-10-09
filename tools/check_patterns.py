"""Check the fallback AOB patterns of Config/ModLoaderInfo.ini against the game executable (offline).

Usage:
    python tools/check_patterns.py [--exe PATH] [--ini PATH] [--gen] [--write] [--maxlen 64]

* Expected addresses come from the game PDB, looked up with the same decorated names the loader uses
  (parsed from `namespace Symbols` in ModLoader/src/MDML.cpp), so the script stays valid across game patches.
* Patterns are scanned in executable sections only and judged like the loader does:
  function patterns must match exactly once; global ([GInfo]) and call-target patterns are fine with several
  matches as long as all of them resolve to the same address.
* --gen builds replacement patterns for failures (capstone-wildcarded, grown until unique, <= maxlen bytes),
  --write additionally stores them in the ini (in place, keeping comments and order).

Typical use after a game patch:  python tools/check_patterns.py --gen --write
"""
import argparse
import ctypes
import ctypes.wintypes as wt
import os
import re
import sys

import capstone
import pefile

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
DEFAULT_EXE = r"E:\SteamLibrary\steamapps\common\Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\Medieval_Dynasty-Win64-Shipping.exe"
DEFAULT_INI = os.path.join(REPO, "Config", "ModLoaderInfo.ini")
MDML_CPP = os.path.join(REPO, "ModLoader", "src", "MDML.cpp")

# (ini section, ini key) -> (Symbols:: constant in MDML.cpp, kind, disp offset, instruction end)
#   kind "func": the match is the address; "rip": target = match + end + int32 at match + disp
CHECKS = {
    ("GInfo", "FPool"): ("NamePoolData", "rip", 5, 9),
    ("GInfo", "GObject"): ("GUObjectArray", "rip", 14, 18),
    ("GInfo", "GWorld"): ("GWorld", "rip", 8, 12),
    ("FunctionInfo", "GameStateInit"): ("InitGameState", "func", 0, 0),
    ("FunctionInfo", "BeginPlay"): ("BeginPlay", "func", 0, 0),
    ("FunctionInfo", "Tick"): ("WorldTick", "func", 0, 0),
    ("FunctionInfo", "StaticLoadObject"): ("StaticLoadObject", "func", 0, 0),
    ("FunctionInfo", "StaticFindObject"): ("StaticFindObject", "func", 0, 0),
    ("FunctionInfo", "SpawnActorFTrans"): ("SpawnActorFTrans", "func", 0, 0),
    ("FunctionInfo", "CallFunctionByNameWithArguments"): ("CallFunctionByNameWithArguments", "func", 0, 0),
    ("FunctionInfo", "ProcessEvent"): ("ProcessEvent", "func", 0, 0),
    ("FunctionInfo", "CreateDefaultObject"): ("CreateDefaultObject", "func", 0, 0),
    ("FunctionInfo", "GetDisplayNameTextByIndex"): ("UserDefinedEnumGetDisplayNameTextByIndex", "func", 0, 0),
    ("ProcessInternalFunction", "ProcessInternal"): ("ProcessLocalScriptFunction", "rip", 16, 20),
    ("StaticConstructObject_Internal", "Pattern"): ("StaticConstructObject_Internal", "func", 0, 0),
    ("PakOverwrite", "IsNonPakFilenameAllowed"): ("IsNonPakFilenameAllowed", "func", 0, 0),
    ("PakOverwrite", "FindFileInPakFiles"): ("FindFileInPakFiles", "func", 0, 0),
}
# Built-in default of the loader when the ini has no [ProcessInternalFunction] section.
DEFAULT_PATTERNS = {("ProcessInternalFunction", "ProcessInternal"): "41 F6 C7 02 74 ? 4C 8B C7 48 8B ? ? 8B ? E8"}


# ----------------------------------------------------------------------------- PDB
def read_symbol_table():
    src = open(MDML_CPP, encoding="utf-8").read()
    block = src[src.index("namespace Symbols {"):]
    block = block[:block.index("\n}")]
    return dict(re.findall(r'constexpr const char\* (\w+) = "([^"]+)"', block))


class Pdb:
    """Minimal dbghelp session, same options as ModLoader/src/Utilities/SymbolResolver.cpp."""

    class SYMBOL_INFO(ctypes.Structure):
        _fields_ = [("SizeOfStruct", wt.ULONG), ("TypeIndex", wt.ULONG), ("Reserved", ctypes.c_uint64 * 2),
                    ("Index", wt.ULONG), ("Size", wt.ULONG), ("ModBase", ctypes.c_uint64), ("Flags", wt.ULONG),
                    ("Value", ctypes.c_uint64), ("Address", ctypes.c_uint64), ("Register", wt.ULONG),
                    ("Scope", wt.ULONG), ("Tag", wt.ULONG), ("NameLen", wt.ULONG), ("MaxNameLen", wt.ULONG),
                    ("Name", ctypes.c_char * 2000)]

    def __init__(self, exe, image_base):
        self.dbg = ctypes.WinDLL("dbghelp.dll")
        self.options = 0x400 | 0x200 | 0x2000  # EXACT_SYMBOLS | FAIL_CRITICAL_ERRORS | NO_PROMPTS
        self.dbg.SymSetOptions(self.options)
        self.proc = wt.HANDLE(0x4D444D4C)
        if not self.dbg.SymInitializeW(self.proc, os.path.dirname(exe), False):
            raise OSError("SymInitialize failed")
        self.dbg.SymLoadModuleExW.restype = ctypes.c_uint64
        self.dbg.SymLoadModuleExW.argtypes = [wt.HANDLE, wt.HANDLE, wt.LPCWSTR, wt.LPCWSTR, ctypes.c_uint64,
                                              wt.DWORD, ctypes.c_void_p, wt.DWORD]
        self.base = self.dbg.SymLoadModuleExW(self.proc, None, exe, None, image_base, 0, None, 0)
        if not self.base:
            raise OSError("SymLoadModuleEx failed (no matching PDB?)")
        self.dbg.SymFromName.argtypes = [wt.HANDLE, ctypes.c_char_p, ctypes.c_void_p]
        self.dbg.SymFromAddr.argtypes = [wt.HANDLE, ctypes.c_uint64, ctypes.POINTER(ctypes.c_uint64), ctypes.c_void_p]
        self.dbg.UnDecorateSymbolName.argtypes = [ctypes.c_char_p, ctypes.c_char_p, wt.DWORD, wt.DWORD]

    def _lookup(self, name, options):
        s = self.SYMBOL_INFO()
        s.SizeOfStruct = 88  # sizeof(SYMBOL_INFO) in C
        s.MaxNameLen = 2000
        self.dbg.SymSetOptions(self.options | options)
        return s.Address if self.dbg.SymFromName(self.proc, name.encode(), ctypes.byref(s)) and s.Address else 0

    def _decorated_at(self, address):
        s = self.SYMBOL_INFO()
        s.SizeOfStruct = 88
        s.MaxNameLen = 2000
        disp = ctypes.c_uint64()
        self.dbg.SymSetOptions(self.options | 0x4000)  # PUBLICS_ONLY
        ok = self.dbg.SymFromAddr(self.proc, ctypes.c_uint64(address), ctypes.byref(disp), ctypes.byref(s))
        return s.Name[:s.NameLen].decode() if ok and disp.value == 0 else ""

    def rva(self, name):
        """Same strategy as SymbolResolver::FindOne: fast plain-name lookup verified by the decorated name,
        slow decorated lookup only if the plain name picked another overload."""
        address = 0
        if not name.startswith("?"):
            address = self._lookup(name, 0x2)  # UNDNAME
        else:
            buf = ctypes.create_string_buffer(2000)
            if self.dbg.UnDecorateSymbolName(name.encode(), buf, 2000, 0x1000):  # UNDNAME_NAME_ONLY
                address = self._lookup(buf.value.decode(), 0x2)
                if address and self._decorated_at(address) != name:
                    address = 0
            if not address:
                address = self._lookup(name, 0)
        return address - self.base if address else None


# ----------------------------------------------------------------------------- PE image
class Image:
    def __init__(self, path):
        pe = pefile.PE(path, fast_load=True)
        self.base = pe.OPTIONAL_HEADER.ImageBase
        data = bytearray(pe.OPTIONAL_HEADER.SizeOfImage)
        self.exec = []  # (va, size) of executable sections
        for s in pe.sections:
            raw = s.get_data()
            data[s.VirtualAddress:s.VirtualAddress + len(raw)] = raw
            if s.Characteristics & 0x20000000:
                self.exec.append((s.VirtualAddress, s.Misc_VirtualSize))
        self.data = bytes(data)

    def s32(self, rva):
        return int.from_bytes(self.data[rva:rva + 4], "little", signed=True)

    def scan(self, pat, limit=64):
        rx = re.compile(b"".join(b"." if "?" in t else re.escape(bytes([int(t, 16)])) for t in pat.split()), re.DOTALL)
        hits = []
        for va, size in self.exec:
            pos = va
            while len(hits) < limit:
                m = rx.search(self.data, pos, va + size)
                if not m:
                    break
                hits.append(m.start())
                pos = m.start() + 1
        return hits


def resolve(img, hit, kind, disp, end):
    return hit if kind == "func" else (hit + end + img.s32(hit + disp)) & 0xFFFFFFFF


def judge(img, pat, kind, disp, end, expected):
    """-> (status, hits, targets) mirroring Pattern::Find / Pattern::FindRipTarget in the loader."""
    hits = img.scan(pat)
    targets = [resolve(img, h, kind, disp, end) for h in hits]
    if not hits:
        return "MISSING", hits, targets
    if kind == "func" and len(hits) > 1:
        return "AMBIGUOUS", hits, targets
    if len(set(targets)) > 1:
        return "AMBIGUOUS", hits, targets
    return ("OK" if targets[0] == expected else "WRONG"), hits, targets


# ----------------------------------------------------------------------------- ini
def parse_ini(path):
    res, sec = {}, None
    for line in open(path, encoding="utf-8", errors="replace"):
        s = line.strip()
        if not s or s[0] in ";#" or s.startswith("//"):
            continue
        if s.startswith("["):
            sec = s[1:s.index("]")]
            res.setdefault(sec, {})
        elif "=" in s and sec is not None:
            k, v = s.split("=", 1)
            res[sec][k.strip()] = v.strip()
    return res


def write_ini(path, updates):
    """updates: {(section, key): value}; replaces existing keys in place, appends missing ones/sections."""
    lines = open(path, encoding="utf-8").read().splitlines()
    pending = dict(updates)
    sec, out = None, []

    def flush(section):
        for (s, k), v in list(pending.items()):
            if s == section:
                out.append(f"{k}={v}")
                del pending[(s, k)]

    for line in lines:
        st = line.strip()
        if st.startswith("["):
            flush(sec)
            sec = st[1:st.index("]")]
        elif "=" in st and sec is not None and not st.startswith(";"):
            k = st.split("=", 1)[0].strip()
            if (sec, k) in pending:
                line = f"{k}={pending.pop((sec, k))}"
        out.append(line)
    flush(sec)
    for (s, k), v in pending.items():
        out += ["", f"[{s}]", f"{k}={v}"]
    open(path, "w", encoding="utf-8", newline="\n").write("\n".join(out) + "\n")


# ----------------------------------------------------------------------------- generator
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
md.detail = True


def wildcard_mask(insn):
    """per byte: True = wildcard (rip-relative disp, rel32 branch, imm64)."""
    mask = [False] * insn.size
    for op in insn.operands:
        if op.type == capstone.x86.X86_OP_MEM and op.mem.base == capstone.x86.X86_REG_RIP:
            for i in range(insn.disp_size):
                mask[insn.disp_offset + i] = True
    branch = insn.mnemonic in ("call", "jmp") or insn.mnemonic.startswith("j")
    if branch and insn.operands and insn.operands[0].type == capstone.x86.X86_OP_IMM and insn.imm_size == 4:
        for i in range(4):
            mask[insn.imm_offset + i] = True
    elif insn.imm_size == 8:
        for i in range(8):
            mask[insn.imm_offset + i] = True
    return mask


def build_pattern(img, start, nbytes):
    toks, pos = [], 0
    for insn in md.disasm(img.data[start:start + nbytes + 32], start):
        if pos >= nbytes:
            break
        m = wildcard_mask(insn)
        toks += ["?" if m[i] else "%02X" % b for i, b in enumerate(insn.bytes)]
        pos += insn.size
    return toks


def gen_function(img, rva, maxlen):
    for n in range(12, maxlen + 1):
        toks = build_pattern(img, rva, n)
        if len(toks) > maxlen:
            break
        pat = " ".join(toks)
        if img.scan(pat, limit=2) == [rva]:
            return pat
    return None


def gen_rip(img, target, disp, end, maxlen):
    """unique pattern around a rip-relative reference to target, with the disp at the loader's offset."""
    rx = re.compile(rb"(?:[\x40-\x4f][\x8b\x8d\x89\x3b\x39\x03\x2b\x33\x85]|[\x8b\x8d\x89\x3b\x39\x85])"
                    rb"[\x05\x0d\x15\x1d\x25\x2d\x35\x3d]", re.DOTALL)
    best = None
    for va, size in img.exec:
        for m in rx.finditer(img.data, va, va + size):
            dpos = m.end()
            if dpos + 4 - va > size or dpos + 4 + img.s32(dpos) != target:
                continue
            start = dpos - disp
            if dpos + 4 != start + end:  # instruction must end where the loader expects it
                continue
            for n in range(max(end, 12), maxlen + 1):
                toks = build_pattern(img, start, n)
                if len(toks) > maxlen or not all(t == "?" for t in toks[disp:disp + 4]):
                    break
                pat = " ".join(toks)
                if len(img.scan(pat, limit=2)) == 1:
                    if best is None or len(toks) < len(best.split()):
                        best = pat
                    break
    return best


# ----------------------------------------------------------------------------- main
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--exe", default=DEFAULT_EXE)
    ap.add_argument("--ini", default=DEFAULT_INI)
    ap.add_argument("--gen", action="store_true", help="generate replacement patterns for failures")
    ap.add_argument("--write", action="store_true", help="with --gen: store replacements in the ini")
    ap.add_argument("--maxlen", type=int, default=64)
    a = ap.parse_args()

    img = Image(a.exe)
    pdb = Pdb(a.exe, img.base)
    symbols = read_symbol_table()
    ini = parse_ini(a.ini)
    print(f"exe: {a.exe}\nini: {a.ini}\n")

    updates, failed = {}, 0
    for (sec, key), (sym, kind, disp, end) in CHECKS.items():
        expected = pdb.rva(symbols[sym])
        pat = ini.get(sec, {}).get(key) or DEFAULT_PATTERNS.get((sec, key), "")
        if expected is None:
            print(f"{sec}.{key:32s} PDB symbol {sym} not found!")
            failed += 1
            continue
        if pat:
            status, hits, targets = judge(img, pat, kind, disp, end, expected)
        else:
            status, hits, targets = "EMPTY", [], []
        print(f"{status:9s} [{sec}] {key:32s} expected 0x{expected:08x}  hits={len(hits)}"
              + (f" -> {', '.join('0x%08x' % t for t in sorted(set(targets))[:3])}" if targets else ""))
        if status == "OK":
            continue
        failed += 1
        if a.gen:
            new = gen_function(img, expected, a.maxlen) if kind == "func" else gen_rip(img, expected, disp, end, a.maxlen)
            print(f"          new: {new or 'no unique pattern found'}")
            if new:
                updates[(sec, key)] = new

    print(f"\n{failed} pattern(s) need attention")
    if a.write and updates:
        write_ini(a.ini, updates)
        print(f"wrote {len(updates)} pattern(s) to {a.ini}")
    return 1 if failed and not (a.write and len(updates) == failed) else 0


if __name__ == "__main__":
    sys.exit(main())
