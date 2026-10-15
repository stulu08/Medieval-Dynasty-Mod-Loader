"""Check the engine layout constants of the MDML core against the game PDB (offline, read-only).

Usage:
    python Tools/RE/check_layout.py [--exe PATH] [--header PATH]
    python Tools/RE/check_layout.py --dump TYPE [TYPE ...]     # print a type's members (offset, size, name)

The constants live in Loader/ModLoader/src/Engine/EngineLayout.h. Every constant that the PDB can verify carries a
trailing comment that names its source, one of:
    constexpr uint16_t NamePrivate = 0x18;      // pdb: UObjectBase::NamePrivate        (member offset)
    constexpr uint16_t Size = 0x28;             // pdb: sizeof(UObjectBase)              (type size)
    constexpr uint16_t NumElements = 0x24;      // pdb: FUObjectArray::ObjObjects.NumElements   (nested member)
Members declared in a base class are found through the base (UClass::NamePrivate works). Type names may use dbghelp
wildcards (`*`, `?`) for templates, e.g. `TSparseArray<TSetElement<TTuple<FName,unsigned char *> >*`; if several types
match, all must agree. Exit code 0 = every constant matches.

The PDB is loaded through dbghelp exactly like Tools/RE/pdbsym.py (SYMOPT_EXACT_SYMBOLS: GUID/age must match the EXE),
nothing is written anywhere. Loading the ~800 MB PDB takes ~30 s.
"""
import argparse
import ctypes
import ctypes.wintypes as wt
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(HERE))
DEFAULT_EXE = r"E:\SteamLibrary\steamapps\common\Medieval Dynasty\Medieval_Dynasty\Binaries\Win64\Medieval_Dynasty-Win64-Shipping.exe"
DEFAULT_HEADER = os.path.join(REPO, "Loader", "ModLoader", "src", "Engine", "EngineLayout.h")
BASE = 0x140000000

SYMOPT_UNDNAME = 0x2
SYMOPT_DEFERRED_LOADS = 0x4
SYMOPT_EXACT_SYMBOLS = 0x400
SYMOPT_FAIL_CRITICAL_ERRORS = 0x200
SYMOPT_NO_PROMPTS = 0x80000

# IMAGEHLP_SYMBOL_TYPE_INFO
TI_GET_SYMTAG = 0
TI_GET_SYMNAME = 1
TI_GET_LENGTH = 2
TI_GET_TYPE = 3
TI_GET_TYPEID = 4
TI_FINDCHILDREN = 7
TI_GET_DATAKIND = 8
TI_GET_OFFSET = 10
TI_GET_CHILDRENCOUNT = 13
TI_GET_BITPOSITION = 14

SYMTAG_DATA = 7
SYMTAG_UDT = 11
SYMTAG_TYPEDEF = 17
SYMTAG_BASECLASS = 18
SYMTAG_VTABLE = 25
DATA_IS_MEMBER = 7


class SYMBOL_INFOW(ctypes.Structure):
    _fields_ = [
        ("SizeOfStruct", wt.ULONG), ("TypeIndex", wt.ULONG), ("Reserved", ctypes.c_uint64 * 2), ("Index", wt.ULONG),
        ("Size", wt.ULONG), ("ModBase", ctypes.c_uint64), ("Flags", wt.ULONG), ("Value", ctypes.c_uint64),
        ("Address", ctypes.c_uint64), ("Register", wt.ULONG), ("Scope", wt.ULONG), ("Tag", wt.ULONG),
        ("NameLen", wt.ULONG), ("MaxNameLen", wt.ULONG), ("Name", wt.WCHAR * 2000),
    ]


ENUM_CB = ctypes.WINFUNCTYPE(wt.BOOL, ctypes.POINTER(SYMBOL_INFOW), wt.ULONG, ctypes.c_void_p)


class Pdb:
    def __init__(self, exe):
        self.dbg = ctypes.WinDLL("dbghelp.dll", use_last_error=True)
        self.kernel = ctypes.WinDLL("kernel32.dll")
        self.proc = wt.HANDLE(0x4D444D4C)
        self.dbg.SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_EXACT_SYMBOLS
                               | SYMOPT_FAIL_CRITICAL_ERRORS | SYMOPT_NO_PROMPTS)
        if not self.dbg.SymInitializeW(self.proc, ctypes.c_wchar_p(os.path.dirname(os.path.abspath(exe))), False):
            raise OSError("SymInitializeW failed: %d" % ctypes.get_last_error())
        self.dbg.SymLoadModuleExW.restype = ctypes.c_uint64
        self.dbg.SymLoadModuleExW.argtypes = [wt.HANDLE, wt.HANDLE, wt.LPCWSTR, wt.LPCWSTR, ctypes.c_uint64, wt.DWORD,
                                              ctypes.c_void_p, wt.DWORD]
        self.base = self.dbg.SymLoadModuleExW(self.proc, None, exe, None, BASE, 0, None, 0)
        if not self.base:
            raise OSError("SymLoadModuleExW failed: %d" % ctypes.get_last_error())
        self.dbg.SymGetTypeInfo.argtypes = [wt.HANDLE, ctypes.c_uint64, wt.ULONG, ctypes.c_int, ctypes.c_void_p]
        self.dbg.SymEnumTypesByNameW.argtypes = [wt.HANDLE, ctypes.c_uint64, wt.LPCWSTR, ENUM_CB, ctypes.c_void_p]
        self._udt_cache = {}
        self._members_cache = {}

    # -- raw type info -------------------------------------------------------------------------------------------
    def _info(self, type_id, kind, ctype):
        value = ctype()
        if not self.dbg.SymGetTypeInfo(self.proc, self.base, type_id, kind, ctypes.byref(value)):
            return None
        return value.value

    def name(self, type_id):
        ptr = ctypes.c_void_p()
        if not self.dbg.SymGetTypeInfo(self.proc, self.base, type_id, TI_GET_SYMNAME, ctypes.byref(ptr)) or not ptr.value:
            return ""
        text = ctypes.wstring_at(ptr.value)
        self.kernel.LocalFree(ptr)
        return text

    def tag(self, type_id):
        return self._info(type_id, TI_GET_SYMTAG, wt.DWORD)

    def length(self, type_id):
        return self._info(type_id, TI_GET_LENGTH, ctypes.c_uint64)

    def children(self, type_id):
        count = self._info(type_id, TI_GET_CHILDRENCOUNT, wt.DWORD) or 0
        if not count:
            return []

        class Params(ctypes.Structure):
            _fields_ = [("Count", wt.ULONG), ("Start", wt.ULONG), ("ChildId", wt.ULONG * count)]

        params = Params(count, 0)
        if not self.dbg.SymGetTypeInfo(self.proc, self.base, type_id, TI_FINDCHILDREN, ctypes.byref(params)):
            return []
        return list(params.ChildId)

    # -- lookups ---------------------------------------------------------------------------------------------------
    def find_udts(self, mask):
        """All complete UDTs (length > 0) whose name matches the dbghelp mask, as {name: type_id} (first id per name)."""
        if mask in self._udt_cache:
            return self._udt_cache[mask]
        found = {}

        def cb(info, size, _):
            s = info.contents
            if s.Tag == SYMTAG_UDT and (self.length(s.TypeIndex) or 0) > 0:
                found.setdefault(s.Name[: s.NameLen], s.TypeIndex)
            return True

        self.dbg.SymEnumTypesByNameW(self.proc, self.base, mask, ENUM_CB(cb), None)
        self._udt_cache[mask] = found
        return found

    def members(self, udt_id):
        """[(name, offset, size, type_id, bitpos or None)] for data members, base classes flattened in (with offset)."""
        if udt_id in self._members_cache:
            return self._members_cache[udt_id]
        out = []
        for child in self.children(udt_id):
            tag = self.tag(child)
            if tag == SYMTAG_BASECLASS:
                base_off = self._info(child, TI_GET_OFFSET, wt.DWORD) or 0
                base_type = self._info(child, TI_GET_TYPEID, wt.DWORD)
                for (n, o, s, t, b) in self.members(base_type):
                    out.append((n, o + base_off, s, t, b))
            elif tag == SYMTAG_VTABLE:
                out.append(("__vftable", self._info(child, TI_GET_OFFSET, wt.DWORD) or 0, 8, None, None))
            elif tag == SYMTAG_DATA and self._info(child, TI_GET_DATAKIND, wt.DWORD) == DATA_IS_MEMBER:
                type_id = self._info(child, TI_GET_TYPEID, wt.DWORD)
                bitpos = self._info(child, TI_GET_BITPOSITION, wt.DWORD)
                out.append((self.name(child), self._info(child, TI_GET_OFFSET, wt.DWORD) or 0,
                            self.length(type_id) or 0, type_id, bitpos))
        self._members_cache[udt_id] = out
        return out

    def resolve_udt(self, type_id):
        """Follows typedefs to the UDT; returns the id or None."""
        for _ in range(8):
            tag = self.tag(type_id)
            if tag == SYMTAG_UDT:
                return type_id
            if tag == SYMTAG_TYPEDEF:
                type_id = self._info(type_id, TI_GET_TYPEID, wt.DWORD)
                continue
            return None
        return None

    def offset_of(self, udt_id, path):
        """Offset of a dotted member path (nested members of by-value UDT members)."""
        offset = 0
        current = udt_id
        for i, part in enumerate(path):
            hit = [m for m in self.members(current) if m[0] == part]
            if not hit:
                raise KeyError(part)
            name, off, size, type_id, _ = hit[0]
            offset += off
            if i + 1 < len(path):
                nested = self.resolve_udt(type_id)
                if nested is None:
                    raise KeyError(part + " is not a struct")
                current = nested
        return offset


# --------------------------------------------------------------------------------------------------------------------
CONSTANT_RE = re.compile(r"constexpr\s+[\w:]+\s+(\w+)\s*=\s*(0x[0-9A-Fa-f]+|\d+)\s*;\s*//\s*pdb:\s*(.+?)\s*$")
NAMESPACE_RE = re.compile(r"^\s*namespace\s+([\w:]+)\s*\{")


def parse_header(path):
    """[(qualified constant name, value, pdb expression, line number)]"""
    out = []
    scope = []
    depth_stack = []
    depth = 0
    with open(path, encoding="utf-8") as f:
        for number, line in enumerate(f, 1):
            code = line.split("//")[0]
            ns = NAMESPACE_RE.match(line)
            if ns:
                scope.append(ns.group(1))
                depth_stack.append(depth)
            m = CONSTANT_RE.search(line)
            if m:
                out.append(("::".join(scope + [m.group(1)]), int(m.group(2), 0), m.group(3), number))
            depth += code.count("{") - code.count("}")
            while depth_stack and depth <= depth_stack[-1]:
                depth_stack.pop()
                scope.pop()
    return out


SIZEOF_RE = re.compile(r"^sizeof\((.+)\)$")


def evaluate(pdb, expression):
    """Returns (value, detail) for a pdb expression; raises LookupError with a message."""
    m = SIZEOF_RE.match(expression)
    if m:
        type_mask, path = m.group(1), None
    else:
        if "::" not in expression:
            raise LookupError("expected Type::member or sizeof(Type)")
        type_mask, _, member = expression.rpartition("::")
        path = member.split(".")
    udts = pdb.find_udts(type_mask)
    if not udts:
        raise LookupError("type not found in the PDB: " + type_mask)
    values = {}
    for name, type_id in udts.items():
        try:
            values[name] = pdb.length(type_id) if path is None else pdb.offset_of(type_id, path)
        except KeyError as e:
            raise LookupError("member %s not found in %s" % (e, name))
    distinct = set(values.values())
    if len(distinct) != 1:
        raise LookupError("ambiguous: " + ", ".join("%s=0x%x" % kv for kv in values.items()))
    return distinct.pop(), (next(iter(values)) if len(values) == 1 else "%d types" % len(values))


def dump(pdb, masks):
    for mask in masks:
        udts = pdb.find_udts(mask)
        if not udts:
            print("## %s: not found" % mask)
            continue
        for name, type_id in list(udts.items())[:5]:
            print("## %s (size 0x%x)" % (name, pdb.length(type_id)))
            for (n, o, s, t, b) in sorted(pdb.members(type_id), key=lambda m: m[1]):
                bit = "" if b is None else " bit %d" % b
                print("  0x%04x  size 0x%-4x %s%s" % (o, s, n, bit))


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--exe", default=DEFAULT_EXE)
    parser.add_argument("--header", default=DEFAULT_HEADER)
    parser.add_argument("--dump", nargs="+", metavar="TYPE", help="print the members of these types and exit")
    args = parser.parse_args()

    print("loading PDB for %s ..." % args.exe, flush=True)
    pdb = Pdb(args.exe)
    if args.dump:
        dump(pdb, args.dump)
        return 0

    constants = parse_header(args.header)
    if not constants:
        print("no '// pdb:' constants found in %s" % args.header)
        return 1
    failed = 0
    for name, value, expression, line in constants:
        try:
            actual, detail = evaluate(pdb, expression)
        except LookupError as e:
            print("ERROR %-55s line %4d  %s: %s" % (name, line, expression, e))
            failed += 1
            continue
        if actual == value:
            print("ok    %-55s 0x%04x  %s" % (name, value, expression))
        else:
            print("FAIL  %-55s 0x%04x, PDB says 0x%04x  (%s, line %d)" % (name, value, actual, expression, line))
            failed += 1
    print("%d constant(s) checked, %d mismatch(es)/error(s)" % (len(constants), failed))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
