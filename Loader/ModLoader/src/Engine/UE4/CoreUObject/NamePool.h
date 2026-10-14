#pragma once
#include "MDML/Memory.h"
#include "MDML/Math.h"
#include "NameValidator.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "Containers/String.h"
#include "Containers/Text.h"
#ifdef _MSC_VER
#pragma pack(push, 0x8)
#pragma warning( disable : 4200 )
#endif
namespace UE4 {
	//---------------------------------------------------------------------------
	//NamePool (UE 4.23+; the pre-4.23 TNameEntryArray/GNames path was removed in Wave 3D).
	//Layout checked against the PDB: mdml::layout::FNameEntryAllocator / FNameEntry.
	//---------------------------------------------------------------------------
	class FNamePoolFNameEntry
	{
	public:
		// FNameEntryHeader: bIsWide:1, LowercaseProbeHash:5, Len:10 (unsigned; was read as int16_t before 3D).
		uint16_t Key;

		union
		{
			char AnsiName[1024];
			wchar_t WideName[1024];
		};

		uint32_t GetLength() const
		{
			return Key >> mdml::layout::FNameEntry::LenShift;
		}

		bool IsWide() const
		{
			return Key & 1;
		}
		std::string GetAnsiName() const
		{
			auto len = GetLength();
			if (len > 1024) return "[Error: Overflow]";
			return std::string((const char*)AnsiName, len);
		}
		std::wstring GetWideName() const
		{
			auto len = GetLength();
			if (len > 1024) return L"[Error: Overflow]";
			return std::wstring((const wchar_t*)WideName, len);
		}

		// UTF-8 for wide entries (localized names), the bytes as stored for ANSI entries.
		std::string GetName() const
		{
			if (!IsWide())
				return GetAnsiName();
			const std::wstring wide = GetWideName();
			if (wide.empty())
				return std::string();
			const int bytes = WideCharToMultiByte(CP_UTF8, 0, wide.data(), (int)wide.size(), nullptr, 0, nullptr, nullptr);
			std::string out(bytes > 0 ? bytes : 0, '\0');
			if (bytes > 0)
				WideCharToMultiByte(CP_UTF8, 0, wide.data(), (int)wide.size(), &out[0], bytes, nullptr, nullptr);
			return out;
		}

		// Bytes this entry occupies in its block (header + characters, rounded up to the allocator stride).
		uint32_t GetSizeInBlock() const
		{
			const uint32_t bytes = 2 + GetLength() * (IsWide() ? 2 : 1);
			const uint32_t stride = mdml::layout::FNameEntryAllocator::Stride;
			return (bytes + stride - 1) / stride * stride;
		}
	};
	class FNamePoolFNameEntryAllocator
	{
	private:
		char frwLock[0x8];
	public:
		int32_t CurrentBlock;
		int32_t CurrentByteCursor;
		uint8_t* Blocks[8192];

		int32_t NumBlocks() const
		{
			return CurrentBlock + 1;
		}

		FNamePoolFNameEntry* GetById(int32_t key) const
		{
			uint32_t block = key >> 16;
			uint16_t offset = (uint16_t)key;

			if (!IsValidIndex(key, block, offset))
				return reinterpret_cast<FNamePoolFNameEntry*>(Blocks[0] + 0); // "None"

			return reinterpret_cast<FNamePoolFNameEntry*>(Blocks[block] + (offset * 2));
		}

		bool IsValidIndex(int32_t key) const
		{
			uint32_t block = key >> 16;
			uint16_t offset = key;
			return IsValidIndex(key, block, offset);
		}

		bool IsValidIndex(int32_t key, uint32_t block, uint16_t offset) const
		{
			return (key >= 0 && ((int32_t)block) < NumBlocks() && offset * 2 < 0x1FFFE);
		}

		// Walks every entry in allocation order: Fn(int32_t Id, const FNamePoolFNameEntry& Entry); returning false from
		// Fn stops the walk. Ids are (block << 16) | (byte offset / stride), the encoding of FName::ComparisonIndex.
		template<typename Fn>
		void ForEachEntry(Fn&& Callback) const
		{
			using namespace mdml::layout;
			for (int32_t block = 0; block < NumBlocks() && block < FNameEntryAllocator::MaxBlocks; ++block)
			{
				const uint8_t* base = Blocks[block];
				if (!base)
					break;
				const int32_t end = block == CurrentBlock ? CurrentByteCursor : FNameEntryAllocator::BlockSizeBytes;
				int32_t cursor = 0;
				while (cursor + 2 <= end)
				{
					auto entry = reinterpret_cast<const FNamePoolFNameEntry*>(base + cursor);
					if (entry->GetLength() == 0)
						break; // a zero header terminates a full block (FNameEntryAllocator::AllocateNewBlock)
					const int32_t id = (block << FNameEntryAllocator::BlockOffsetBits) | (cursor / FNameEntryAllocator::Stride);
					if (!Callback(id, *entry))
						return;
					cursor += (int32_t)entry->GetSizeInBlock();
				}
			}
		}
	};
	class FNamePool
	{
	public:
		FNamePoolFNameEntryAllocator Allocator;
		uint32_t AnsiCount;
		uint32_t WideCount;

		// Note: not the entry count, see FNamePoolFNameEntryAllocator::ForEachEntry for iterating.
		inline size_t Num() const
		{
			return AnsiCount;
		}

		inline bool IsValidIndex(int32_t id) const
		{
			return Allocator.IsValidIndex(static_cast<int32_t>(id));
		}

		inline FNamePoolFNameEntry* GetById(int32_t key) const
		{
			return Allocator.GetById(key);
		}

		inline FNamePoolFNameEntry* operator[](int32_t id) const
		{
			return Allocator.GetById(static_cast<int32_t>(id));
		}
	};

	// FName::FName(..., EFindName) of the engine.
	enum EFindName
	{
		FNAME_Find = 0, // only look up an existing name; NAME_None if it does not exist
		FNAME_Add = 1,  // add the name to the pool if it does not exist
	};

	class MDML_ENGINE_API FName
	{
	public:
		int ComparisonIndex;
		int Number;

		inline FName()
			: ComparisonIndex(0),
			Number(0)
		{
		};

		inline FName(int i)
			: ComparisonIndex(i),
			Number(0)
		{
		};

		// Looks up an existing name (never adds one; NAME_None if it does not exist), like before Wave 3D.
		// Uses the engine's FName(const ANSICHAR*, FNAME_Find) when resolved: hash lookup, case-insensitive, and a
		// "_N" suffix becomes the Number like everywhere in UE. Fallback (no PDB): exact, case-sensitive walk over the
		// name pool (fixed in 3D: the old loop probed raw indices of block 0 only, code inventory C14).
		FName(const char* nameToFind);
		// Engine FName(const TCHAR*, EFindName); FNAME_Add creates the name. Fallback without the engine function:
		// like FName(const char*) (find only; ASCII names).
		FName(const wchar_t* Name, EFindName FindType);

		// FNamePool (NamePoolData), bound by UE4::InitEngineGlobals.
		static DWORD* GNames;

		static inline FNamePool& GetFNamePool()
		{
			return *(FNamePool*)GNames;
		};

		inline std::string GetName() const
		{
			if (!GNames)
				return std::string();
			return GetFNamePool()[ComparisonIndex]->GetName();
		};

		inline bool operator==(const FName& other) const
		{
			return ComparisonIndex == other.ComparisonIndex;
		};
	};
	static_assert(sizeof(FName) == mdml::layout::FName::Size, "FName layout");
	/////////////////////////////////////////////
	// ScriptStruct InputCore.Key
	// Size 24
	/////////////////////////////////////////////
	struct alignas(8) FKey {
		struct FName	KeyName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char unknownData_0[16];		//Offset: 8	Size: 16
	};
	static_assert(sizeof(FKey) == mdml::layout::Sizes::FKey, "FKey layout");
}
#ifdef _MSC_VER
#pragma pack(pop)
#endif
