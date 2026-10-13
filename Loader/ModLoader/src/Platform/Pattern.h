#pragma once
#include <Windows.h>
#include <cstdint>
#include <vector>

// IDA-style byte pattern scanning ("48 8B ? ?? 05"), restricted to the executable sections of the game module.
namespace Pattern
{
	struct Signature
	{
		std::vector<uint8_t> Bytes;
		std::vector<bool> Mask; // true = byte must match, false = wildcard
	};

	inline int HexValue(char c)
	{
		if (c >= '0' && c <= '9') return c - '0';
		if (c >= 'a' && c <= 'f') return c - 'a' + 10;
		if (c >= 'A' && c <= 'F') return c - 'A' + 10;
		return -1;
	}

	// Returns false on malformed input or an empty pattern.
	inline bool Parse(const char* text, Signature& out)
	{
		out = {};
		for (const char* p = text; p && *p;)
		{
			if (*p == ' ')
			{
				p++;
			}
			else if (*p == '?')
			{
				out.Bytes.push_back(0);
				out.Mask.push_back(false);
				p += (p[1] == '?') ? 2 : 1;
			}
			else
			{
				int hi = HexValue(p[0]);
				int lo = hi >= 0 ? HexValue(p[1]) : -1;
				if (lo < 0)
					return false;
				out.Bytes.push_back((uint8_t)(hi << 4 | lo));
				out.Mask.push_back(true);
				p += 2;
			}
		}
		return !out.Bytes.empty();
	}

	// All matches inside executable sections of the main module.
	inline std::vector<PBYTE> FindAll(const char* pattern)
	{
		std::vector<PBYTE> hits;
		Signature sig;
		if (!Parse(pattern, sig))
			return hits;

		auto base = (PBYTE)GetModuleHandleW(nullptr);
		auto nt = (PIMAGE_NT_HEADERS)(base + ((PIMAGE_DOS_HEADER)base)->e_lfanew);
		auto section = IMAGE_FIRST_SECTION(nt);
		const size_t size = sig.Bytes.size();
		for (WORD s = 0; s < nt->FileHeader.NumberOfSections; s++, section++)
		{
			if (!(section->Characteristics & IMAGE_SCN_MEM_EXECUTE))
				continue;
			PBYTE start = base + section->VirtualAddress;
			size_t length = section->Misc.VirtualSize;
			if (length < size)
				continue;
			for (PBYTE cur = start, end = start + length - size; cur <= end; cur++)
			{
				if (cur[0] != sig.Bytes[0] && sig.Mask[0])
					continue;
				size_t i = 1;
				while (i < size && (!sig.Mask[i] || cur[i] == sig.Bytes[i]))
					i++;
				if (i == size)
					hits.push_back(cur);
			}
		}
		return hits;
	}

	// The match if the pattern is unique, nullptr if it has no or several matches.
	inline PBYTE Find(const char* pattern)
	{
		auto hits = FindAll(pattern);
		return hits.size() == 1 ? hits[0] : nullptr;
	}

	// Resolves a RIP-relative operand: the int32 displacement at hit+dispOffset, relative to hit+instrEnd.
	inline PBYTE ResolveRip(PBYTE hit, size_t dispOffset, size_t instrEnd)
	{
		return hit + instrEnd + *reinterpret_cast<int32_t*>(hit + dispOffset);
	}

	// For patterns that reference a global or call a function: every match must resolve to the same
	// target, otherwise the pattern is considered ambiguous and nullptr is returned.
	inline PBYTE FindRipTarget(const char* pattern, size_t dispOffset, size_t instrEnd)
	{
		PBYTE target = nullptr;
		for (PBYTE hit : FindAll(pattern))
		{
			PBYTE current = ResolveRip(hit, dispOffset, instrEnd);
			if (target && target != current)
				return nullptr;
			target = current;
		}
		return target;
	}
}
