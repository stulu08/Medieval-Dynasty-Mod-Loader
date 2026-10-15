#include "Core.h"
#include "NamePool.h"
#include "EngineAddresses.h"

#include <cstring>

namespace UE4 {
	namespace {
		// FName::FName(const ANSICHAR*, EFindName) / FName(const TCHAR*, EFindName): member constructors, `this` first.
		using FNameCtorAnsiFn = FName* (*)(FName*, const char*, int);
		using FNameCtorWideFn = FName* (*)(FName*, const wchar_t*, int);

		// Fallback without the engine constructor: exact match over the pool entries (ANSI entries only).
		FName FindByPoolWalk(const char* Text)
		{
			FName Result;
			if (!Text || !FName::GNames)
				return Result;
			const size_t Length = std::strlen(Text);
			FName::GetFNamePool().Allocator.ForEachEntry([&](int32_t Id, const FNamePoolFNameEntry& Entry) {
				if (!Entry.IsWide() && Entry.GetLength() == Length && std::memcmp(Entry.AnsiName, Text, Length) == 0)
				{
					Result.ComparisonIndex = Id;
					return false;
				}
				return true;
			});
			return Result;
		}
	}

	FName::FName(const char* nameToFind)
		: ComparisonIndex(0),
		Number(0)
	{
		if (!nameToFind)
			return;
		if (mdml::Addresses.FNameCtorAnsi)
		{
			reinterpret_cast<FNameCtorAnsiFn>(mdml::Addresses.FNameCtorAnsi)(this, nameToFind, FNAME_Find);
			return;
		}
		*this = FindByPoolWalk(nameToFind);
	}

	FName::FName(const wchar_t* Name, EFindName FindType)
		: ComparisonIndex(0),
		Number(0)
	{
		if (!Name)
			return;
		if (mdml::Addresses.FNameCtorWide)
		{
			reinterpret_cast<FNameCtorWideFn>(mdml::Addresses.FNameCtorWide)(this, Name, FindType);
			return;
		}
		// Fallback: find only, ASCII names only (pool entries of plain names are ANSI).
		std::string Narrow;
		for (const wchar_t* c = Name; *c; ++c)
		{
			if (*c > 0x7F)
				return;
			Narrow.push_back(static_cast<char>(*c));
		}
		*this = FindByPoolWalk(Narrow.c_str());
	}
}
