"""Resolve symbols of the game executable from its shipped PDB via dbghelp.

Usage:
    python pdbsym.py <exe> <mask> [<mask> ...]

Masks use dbghelp wildcard syntax, e.g. "StaticLoadObject" or "*FindFileInPakFiles*".
Prints RVA, size and undecorated name for every match.
"""
import ctypes
import ctypes.wintypes as wt
import os
import sys

dbghelp = ctypes.WinDLL("dbghelp.dll")

SYMOPT_UNDNAME = 0x2
SYMOPT_DEFERRED_LOADS = 0x4
SYMOPT_LOAD_LINES = 0x10
SYMOPT_EXACT_SYMBOLS = 0x400
MAX_SYM_NAME = 2000
BASE = 0x140000000


class SYMBOL_INFOW(ctypes.Structure):
    _fields_ = [
        ("SizeOfStruct", wt.ULONG),
        ("TypeIndex", wt.ULONG),
        ("Reserved", ctypes.c_uint64 * 2),
        ("Index", wt.ULONG),
        ("Size", wt.ULONG),
        ("ModBase", ctypes.c_uint64),
        ("Flags", wt.ULONG),
        ("Value", ctypes.c_uint64),
        ("Address", ctypes.c_uint64),
        ("Register", wt.ULONG),
        ("Scope", wt.ULONG),
        ("Tag", wt.ULONG),
        ("NameLen", wt.ULONG),
        ("MaxNameLen", wt.ULONG),
        ("Name", wt.WCHAR * MAX_SYM_NAME),
    ]


ENUM_CB = ctypes.WINFUNCTYPE(wt.BOOL, ctypes.POINTER(SYMBOL_INFOW), wt.ULONG, ctypes.c_void_p)


class Pdb:
    def __init__(self, exe):
        self.proc = wt.HANDLE(0x1337)
        dbghelp.SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_EXACT_SYMBOLS)
        search = os.path.dirname(os.path.abspath(exe))
        if not dbghelp.SymInitializeW(self.proc, ctypes.c_wchar_p(search), False):
            raise OSError(ctypes.get_last_error())
        dbghelp.SymLoadModuleExW.restype = ctypes.c_uint64
        dbghelp.SymLoadModuleExW.argtypes = [wt.HANDLE, wt.HANDLE, wt.LPCWSTR, wt.LPCWSTR,
                                             ctypes.c_uint64, wt.DWORD, ctypes.c_void_p, wt.DWORD]
        self.base = dbghelp.SymLoadModuleExW(self.proc, None, exe, None, BASE, 0, None, 0)
        if not self.base:
            raise OSError("SymLoadModuleExW failed: %d" % ctypes.GetLastError())

    def find(self, mask):
        out = []

        def cb(info, size, _):
            s = info.contents
            out.append((s.Address - self.base, s.Size, s.Tag, s.Name[: s.NameLen]))
            return True

        dbghelp.SymEnumSymbolsW.argtypes = [wt.HANDLE, ctypes.c_uint64, wt.LPCWSTR, ENUM_CB, ctypes.c_void_p]
        dbghelp.SymEnumSymbolsW(self.proc, self.base, mask, ENUM_CB(cb), None)
        return out


if __name__ == "__main__":
    pdb = Pdb(sys.argv[1])
    for m in sys.argv[2:]:
        hits = pdb.find(m)
        print(f"## {m}: {len(hits)} hit(s)")
        for rva, size, tag, name in hits[:20]:
            print(f"  rva=0x{rva:08x} size=0x{size:x} tag={tag} {name}")
