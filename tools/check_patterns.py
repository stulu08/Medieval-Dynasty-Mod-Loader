"""Check MDML AOB patterns against the game executable (offline).

Usage:
    python check_patterns.py [--exe PATH] [--ini PATH ...] [--gen] [--maxlen 64]

* Parses [GInfo] / [FunctionInfo] / [PakOverwrite] of every ini given (default: repo Config ini,
  repo-root ini, deployed ini) plus the hardcoded patterns of ModLoader/src/MDML.cpp.
* Scans the whole mapped image the same way Pattern::Find does (first hit wins in the loader, so
  anything but exactly 1 hit is suspicious) and reports hits, section of the hit, the resolved
  target (same maths as MDML.cpp) and whether the target equals the expected PDB symbol RVA.
* With --gen, creates a replacement pattern (capstone-wildcarded, grown until unique, <= maxlen
  bytes) for every function whose pattern failed, starting at the PDB function RVA.
  For globals (FPool/GObject/GWorld) it searches rip-relative references to the global that
  fit the loader's fixed offsets and builds a unique pattern around them.

PDB RVAs below come from tools/pdbsym.py for build 25776186.
"""
import argparse
import os
import re
import sys

import capstone
import pefile

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
DEFAULT_EXE = r"E:\SteamLibrary\steamapps\common\Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\Medieval_Dynasty-Win64-Shipping.exe"
DEFAULT_INIS = [
    os.path.join(REPO, "Config", "ModLoaderInfo.ini"),
    os.path.join(REPO, "ModLoaderInfo.ini"),
    os.path.join(os.path.dirname(DEFAULT_EXE), "Config", "ModLoaderInfo.ini"),
]
MDML_CPP = "ModLoader/src/MDML.cpp"

# name -> (PDB symbol, RVA)  (ImageBase 0x140000000)
EXPECTED = {
    "GameStateInit": ("AGameModeBase::InitGameState", 0x02a86250),
    "BeginPlay": ("AActor::BeginPlay", 0x027cdcc0),
    "Tick": ("UWorld::Tick", 0x02b55550),
    "StaticLoadObject": ("StaticLoadObject", 0x012a4800),
    "StaticFindObject": ("StaticFindObject", 0x012a3c30),
    "SpawnActorFTrans": ("UWorld::SpawnActor(UClass*,FTransform const*,params) [big overload]", 0x02b53a30),
    "CallFunctionByNameWithArguments": ("UObject::CallFunctionByNameWithArguments", 0x0128b470),
    "ProcessEvent": ("UObject::ProcessEvent", 0x0129ae40),
    "CreateDefaultObject": ("UClass::CreateDefaultObject", 0x01108290),
    "GetDisplayNameTextByIndex": ("UEnum::GetDisplayNameTextByIndex", 0x0112f940),
    "IsNonPakFilenameAllowed": ("FPakPlatformFile::IsNonPakFilenameAllowed", 0x027303c0),
    # member overload (this, Filename, OutPakFile, OutEntry) = what HooksManager.cpp:125 hooks.
    # Verified by disassembly: locks this+0x38, walks PakFiles TArray at this+0x10, calls the static
    # overload 0x0272b260 (Paks&, Filename, ...) at 0x0272b1f5.
    "FindFileInPakFiles": ("FPakPlatformFile::FindFileInPakFiles [member overload]", 0x0272b130),
    "FPool": ("NamePoolData (loader stores it as GName)", 0x04ba2b80),
    "GName": ("NamePoolData (unused when UsesFNamePool=1)", 0x04ba2b80),
    "GObject": ("GUObjectArray", 0x04bdf190),
    "GWorld": ("GWorld", 0x04d24ac8),
    # pattern sits inside UObject::ProcessInternal (0x0129b1f0); its E8 call target is what the loader hooks
    "ProcessInternals": ("ProcessLocalScriptFunction (call target inside UObject::ProcessInternal)", 0x0129b300),
    "StaticConstructObject_Internal": ("StaticConstructObject_Internal", 0x012a2c20),
}
# Accept alternates for names that have two PDB overloads.
ALT_OK = {}

# Loader address maths for the [GInfo] patterns: (disp offset, instruction end offset)
RIP_RULES = {"FPool": (5, 9), "GName": (11, 15), "GObject": (14, 18), "GWorld": (8, 12)}

# Hardcoded patterns (MDML.cpp). (name, pattern, line, match_adjust, kind, disp_off, end_off)
#   kind "fn_call": target = (match+adjust)+1+rel32+5  (MEM::GetAddressPTR(p,1,5))
#   kind "rip": target = match + end_off + rel32@disp_off
HARDCODED = [
    ("ProcessInternals", "41 F6 C7 02 74 ? 4C 8B C7 48 8B ? ? 8B ? E8", 633, 0, "rip", 16, 20),
    ("StaticConstructObject_Internal", "48 8B 84 24 ?? ?? 00 00 48 89 44 24 ?? C7 44 24 ?? 00 00 00 00 E8", 653, 0x15, "fn_call", 0, 0),
    ("StaticConstructObject_Internal", "48 8B C8 89 7C 24 ?? E8", 660, 0x7, "fn_call", 0, 0),
    ("StaticConstructObject_Internal", "E8 ? ? ? ? 45 8B 47 70", 668, 0, "fn_call", 0, 0),
    ("StaticConstructObject_Internal", "89 6C 24 38 48 89 74 24 ? E8", 671, 0x9, "fn_call", 0, 0),
]

SECTIONS_OF_INTEREST = {"GInfo", "FunctionInfo", "PakOverwrite"}


# ----------------------------------------------------------------------------- PE image
class Image:
    def __init__(self, path):
        self.pe = pefile.PE(path, fast_load=True)
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        size = self.pe.OPTIONAL_HEADER.SizeOfImage
        self.data = bytearray(size)  # RVA indexed, like the loaded module
        self.secs = []
        for s in self.pe.sections:
            raw = s.get_data()
            va = s.VirtualAddress
            self.data[va:va + len(raw)] = raw[: max(s.Misc_VirtualSize, 0) or len(raw)]
            self.secs.append((s.Name.rstrip(b"\0").decode(), va, max(s.Misc_VirtualSize, len(raw)),
                              bool(s.Characteristics & 0x20000000)))
        self.data = bytes(self.data)

    def section_of(self, rva):
        for n, va, sz, ex in self.secs:
            if va <= rva < va + sz:
                return n + ("" if ex else "(data)")
        return "?"

    def u32(self, rva):
        return int.from_bytes(self.data[rva:rva + 4], "little")

    def s32(self, rva):
        return int.from_bytes(self.data[rva:rva + 4], "little", signed=True)


def compile_pat(pat):
    toks = pat.split()
    out = b""
    for t in toks:
        out += b"." if "?" in t else re.escape(bytes([int(t, 16)]))
    return re.compile(out, re.DOTALL)


def scan(img, pat, limit=50):
    rx = compile_pat(pat)
    hits, pos = [], 0
    while len(hits) < limit:
        m = rx.search(img.data, pos)
        if not m:
            break
        hits.append(m.start())
        pos = m.start() + 1
    return hits


# ----------------------------------------------------------------------------- ini
def parse_ini(path):
    """returns {section: {key: (value, lineno)}}; same comment rules as the INI lib (; # //)."""
    res, sec = {}, None
    with open(path, encoding="utf-8", errors="replace") as f:
        for no, line in enumerate(f, 1):
            s = line.strip()
            if not s or s[0] in ";#" or s.startswith("//"):
                continue
            if s.startswith("["):
                sec = s[1:s.index("]")]
                res.setdefault(sec, {})
            elif "=" in s and sec is not None:
                k, v = s.split("=", 1)
                res[sec][k.strip()] = (v.strip(), no)
    return res


# ----------------------------------------------------------------------------- evaluation
def resolve(img, name, hit, kind, disp_off=0, end_off=0, adjust=0):
    """returns target RVA or None"""
    if kind == "func":
        return hit
    if kind == "rip":
        return (hit + end_off + img.s32(hit + disp_off)) & 0xFFFFFFFF
    if kind == "fn_call":
        p = hit + adjust
        return (p + img.s32(p + 1) + 5) & 0xFFFFFFFF
    raise ValueError(kind)


def evaluate(img, name, pat, kind, disp_off=0, end_off=0, adjust=0):
    hits = scan(img, pat)
    res = {"hits": hits, "targets": [], "ok": False}
    for h in hits:
        res["targets"].append(resolve(img, name, h, kind, disp_off, end_off, adjust))
    exp = EXPECTED.get(name)
    if exp:
        good = ALT_OK.get(name, {exp[1]})
        # loader takes the FIRST hit
        res["ok"] = bool(hits) and res["targets"][0] in good
        res["unique"] = len(hits) == 1
    return res


def short_label(path):
    p = os.path.abspath(path)
    if p.startswith(os.path.join(REPO, "Config")):
        return "repo/Config/ModLoaderInfo.ini"
    if p.startswith(REPO):
        return "repo/ModLoaderInfo.ini"
    return "deployed/Config/ModLoaderInfo.ini"


def is_pattern(v):
    toks = v.split()
    return len(toks) >= 4 and all(re.fullmatch(r"[0-9A-Fa-f]{2}|\?\??", t) for t in toks)


def collect(inis):
    entries = []  # (label, name, pattern, srcdesc, kind, disp, end, adjust)
    for path in inis:
        if not os.path.exists(path):
            print(f"[skip] {path} not found")
            continue
        ini = parse_ini(path)
        for sec in ("GInfo", "FunctionInfo", "PakOverwrite"):
            for k, (v, no) in ini.get(sec, {}).items():
                if not is_pattern(v):
                    continue
                src = f"{short_label(path)}:{no} [{sec}]"
                if sec == "GInfo":
                    if k in RIP_RULES:
                        d, e = RIP_RULES[k]
                        entries.append((path, k, v, src, "rip", d, e, 0))
                else:
                    entries.append((path, k, v, src, "func", 0, 0, 0))
    for name, pat, line, adj, kind, d, e in HARDCODED:
        entries.append(("hardcoded", name, pat, f"{MDML_CPP}:{line}", kind, d, e, adj))
    return entries


# ----------------------------------------------------------------------------- generator
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
md.detail = True


def wildcard_mask(insn):
    """per-byte flags: True = wildcard (rip-relative disp, rel32 call/jmp/jcc, imm64 absolute)."""
    mask = [False] * insn.size
    for op in insn.operands:
        if op.type == capstone.x86.X86_OP_MEM and op.mem.base == capstone.x86.X86_REG_RIP:
            for i in range(insn.disp_size):
                mask[insn.disp_offset + i] = True
    isz, ioff = insn.imm_size, insn.imm_offset
    is_branch = insn.mnemonic in ("call", "jmp") or insn.mnemonic.startswith("j")
    if is_branch and insn.operands and insn.operands[0].type == capstone.x86.X86_OP_IMM and isz == 4:
        for i in range(4):
            mask[ioff + i] = True
    elif isz == 8:  # movabs absolute immediate
        for i in range(8):
            mask[ioff + i] = True
    return mask


def build_pattern(img, start_rva, nbytes, wild_disp32=False):
    """tokens for whole instructions covering >= nbytes bytes from start.
    wild_disp32 additionally wildcards non-rip disp32 (stack frame sizes / struct offsets)."""
    tokens, pos = [], 0
    code = img.data[start_rva:start_rva + nbytes + 32]
    for insn in md.disasm(code, start_rva):
        if pos >= nbytes:
            break
        m = wildcard_mask(insn)
        if wild_disp32 and insn.disp_size == 4:
            for op in insn.operands:
                if op.type == capstone.x86.X86_OP_MEM and op.mem.base != capstone.x86.X86_REG_RIP:
                    for i in range(4):
                        m[insn.disp_offset + i] = True
        tokens += ["?" if m[i] else "%02X" % b for i, b in enumerate(insn.bytes)]
        pos += insn.size
    return tokens


def gen_function(img, rva, maxlen=64, minlen=12):
    """grow a pattern from the function start until it is unique (hit only at rva)."""
    best = None
    for wd in (False, True):
        for n in range(minlen, maxlen + 1):
            toks = build_pattern(img, rva, n, wd)
            if len(toks) > maxlen:
                break
            pat = " ".join(toks)
            hits = scan(img, pat, limit=3)
            if best is None or len(hits) < best[1]:
                best = (pat, len(hits), hits, wd)
            if hits == [rva]:
                return pat, 1, hits, wd
    return best


def gen_global(img, target_rva, name, maxlen=64, want=4):
    """find rip-relative refs to the global whose disp lies at the loader's fixed offset and build a
    unique pattern around each. Returns [(pattern, start_rva)]."""
    d_off, e_off = RIP_RULES[name]
    starts = []
    # [REX] opcode(lea/mov/cmp/...) modrm(mod=00, rm=101 -> [rip+disp32])
    rx = re.compile(rb"(?:[\x40-\x4f][\x8b\x8d\x89\x3b\x39\x03\x2b\x33\x85]|[\x8b\x8d\x89\x3b\x39\x85])"
                    rb"[\x05\x0d\x15\x1d\x25\x2d\x35\x3d]", re.DOTALL)
    for n, va, sz, ex in img.secs:
        if not ex:
            continue
        buf = img.data[va:va + sz]
        for m in rx.finditer(buf):
            dpos = m.end()  # disp starts right after modrm
            if dpos + 4 > sz:
                continue
            disp = int.from_bytes(buf[dpos:dpos + 4], "little", signed=True)
            if va + dpos + 4 + disp == target_rva:
                starts.append(va + dpos - d_off)
    out = []
    for st in starts:
        for n in range(max(e_off, 12), maxlen + 1):
            toks = build_pattern(img, st, n)
            if len(toks) > maxlen:
                break
            if not all(t == "?" for t in toks[d_off:d_off + 4]):
                break
            pat = " ".join(toks)
            if len(scan(img, pat, limit=3)) == 1:
                out.append((pat, st))
                break
    out.sort(key=lambda t: (t[0].count("?") / len(t[0].split()), len(t[0].split())))
    return out[:want]


# ----------------------------------------------------------------------------- main
def fmt_hits(img, hits):
    return ", ".join("0x%08x[%s]" % (h, img.section_of(h)) for h in hits[:4]) + (" ..." if len(hits) > 4 else "")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--exe", default=DEFAULT_EXE)
    ap.add_argument("--ini", action="append")
    ap.add_argument("--gen", action="store_true", help="generate replacement patterns for failures")
    ap.add_argument("--maxlen", type=int, default=64)
    a = ap.parse_args()
    img = Image(a.exe)
    print(f"image {a.exe}\n  base=0x{img.base:x} size=0x{len(img.data):x} sections=" +
          ", ".join(f"{n}{'*' if ex else ''}" for n, _, _, ex in img.secs))
    entries = collect(a.ini or DEFAULT_INIS)
    failures = {}
    for label, name, pat, src, kind, d, e, adj in entries:
        r = evaluate(img, name, pat, kind, d, e, adj)
        exp = EXPECTED.get(name)
        status = "OK" if (r["ok"] and r.get("unique")) else ("OK-NONUNIQUE" if r["ok"] else "FAIL")
        note = "  (unused by loader: UsesFNamePool=1 uses FPool)" if name == "GName" else ""
        tg = ", ".join("0x%08x" % t for t in r["targets"][:4]) if r["targets"] else "-"
        print(f"\n{name:32s} {status:12s} {src}{note}")
        print(f"   hits={len(r['hits'])}: {fmt_hits(img, r['hits'])}")
        print(f"   target(s): {tg}   expected: " + (f"0x{exp[1]:08x} {exp[0]}" if exp else "?"))
        if status != "OK" and name != "GName":
            failures.setdefault(name, src)
    if not a.gen:
        return
    print("\n================ generated replacements (PDB-derived) ================")
    for name, src in failures.items():
        exp = EXPECTED.get(name)
        if not exp:
            continue
        print(f"\n{name}  (PDB {exp[0]} rva=0x{exp[1]:08x})")
        if name in RIP_RULES:
            r = gen_global(img, exp[1], name, a.maxlen)
            if not r:
                print("   no unique candidate found")
            for pat, start in r:
                print(f"   start=0x{start:08x} fn+0x{start:x}: {pat}")
        elif name == "ProcessInternals":
            print("   (hardcoded sig; see rip target above)")
        else:
            rva = exp[1]
            pat, n, hits, wd = gen_function(img, rva, a.maxlen)
            print(f"   {pat}")
            print(f"   bytes={len(pat.split())} hits={n} {fmt_hits(img, hits)} unique_at_func_start={hits == [rva]}")


if __name__ == "__main__":
    main()
