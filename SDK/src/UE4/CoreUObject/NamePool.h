#pragma once
#include "Utilities/Memory.h"
#include "Utilities/Math.h"
#include "Utilities/Pattern.h"
#include "NameValidator.h"
#include "GameInfo.h"
#include "Containers/String.h"
#include "Containers/Text.h"
#ifdef _MSC_VER
#pragma pack(push, 0x8)
#pragma warning( disable : 4200 )
#endif
namespace UE4 {
	//---------------------------------------------------------------------------
	//NamePool
	//---------------------------------------------------------------------------
	class FNamePoolFNameEntry
	{
	public:
		int16_t Key;

		union
		{
			char AnsiName[1024];
			wchar_t WideName[1024];
		};

		uint32_t GetLength() const
		{
			return Key >> 6;
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
			return std::wstring((const wchar_t*)WideName, len);
		}

		std::string GetName() const
		{
			return GetAnsiName();
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
	};
	class FNamePool
	{
	public:
		FNamePoolFNameEntryAllocator Allocator;
		uint32_t AnsiCount;
		uint32_t WideCount;

		FNamePoolFNameEntry* GetNext(uint32_t& lastFNameId)
		{
			// Key		=> NameID
			// Value	=> StringLen
			static std::unordered_map<int, int> namesCache;
			const auto initLastFNameId = lastFNameId;
		RePlay:
			uint16_t block = lastFNameId >> 16;
			uint16_t nameOffset = (uint16_t)lastFNameId;
			uint32_t newOffset = 0;

			// We hit last Name in last Block
			if (block > Allocator.CurrentBlock)
				return nullptr;

			// If found lastId then add 2 to calc offset correct
			auto it = namesCache.find(lastFNameId);
			if (it != namesCache.end())
				newOffset += (nameOffset * 2) + 2 + it->second;

			if (newOffset >= 65535 * 2 || block == Allocator.CurrentBlock && newOffset >= (uint32_t)Allocator.CurrentByteCursor)
			{
				lastFNameId = MAKELONG(0, block + 1);
				goto RePlay;
			}

			lastFNameId = MAKELONG(((unsigned short)(newOffset / 2)), block);

			uintptr_t entryOffset = reinterpret_cast<uintptr_t>(Allocator.Blocks[block]) + newOffset;

			unsigned short nameEntry = *reinterpret_cast<unsigned short*>(entryOffset);

			int nameLength = nameEntry >> 6;

			// if odd number (odd numbers are aligned with 0x00)
			if (nameLength % 2 != 0)
				nameLength += 1;

			// Cache
			namesCache.emplace(lastFNameId, nameLength);

			return Allocator.GetById(lastFNameId);
		}

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
	class FNameEntry
	{
	public:
		inline const char* GetAnsiName() const
		{
			//return (char*)this + (SDK::SelectedGameProfile.IsUsing4_22 ? 0xC : 0x10);
			return (char*)this + 0x10;
		}
	};
	class TNameEntryArray
	{
	public:
		inline int Num() const
		{
			return GetNumElements();
		}

		inline bool IsValidIndex(int Index) const
		{
			return Index < Num() && Index >= 0;
		}

		inline FNameEntry const* const& operator[](int Index) const
		{
			return *GetItemPtr(Index);
		}

	private:
		inline FNameEntry const* const* GetItemPtr(int Index) const
		{
			auto ChunkIndex = Index / 16384;
			auto WithinChunkIndex = Index % 16384;
			auto Chunk = Chunks[ChunkIndex];
			return Chunk + WithinChunkIndex;
		}
		int GetNumElements() const { return Read<int>((byte*)this + 0x8 + 0x4); };
		FNameEntry** Chunks[];
	};
	class FName
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

		FName(const char* nameToFind)
			: ComparisonIndex(0),
			Number(0)
		{
			static std::unordered_set<int> cache;

			for (auto i : cache)
			{
				if (IsUsingNamePool())
				{
					if (!std::strcmp(GetFNamePool()[i]->GetAnsiName().c_str(), nameToFind))
					{
						ComparisonIndex = i;

						return;
					}
				}
				else
				{
					if (!std::strcmp(GetTNameArray()[i]->GetAnsiName(), nameToFind))
					{
						ComparisonIndex = i;

						return;
					}
				}
			}

			if (IsUsingNamePool())
			{
				for (auto i = 0; i < GetFNamePool().Num(); ++i)
				{
					if (GetFNamePool()[i] != nullptr)
					{
						if (!std::strcmp(GetFNamePool()[i]->GetAnsiName().c_str(), nameToFind))
						{
							cache.insert(i);

							ComparisonIndex = i;

							return;
						}
					}
				}
			}
			else
			{
				for (auto i = 0; i < GetTNameArray().Num(); ++i)
				{
					if (GetTNameArray()[i] != nullptr)
					{
						if (!std::strcmp(GetTNameArray()[i]->GetAnsiName(), nameToFind))
						{
							cache.insert(i);

							ComparisonIndex = i;

							return;
						}
					}
				}
			}

		};

		static DWORD* GNames;
		static inline DWORD& GetGlobalNames()
		{
			return *GNames;
		};

		static inline bool IsUsingNamePool()
		{
			return SDK::SelectedGameProfile.UsesFNamePool;
		};

		static inline TNameEntryArray& GetTNameArray()
		{
			return *(TNameEntryArray*)GNames;
		};

		static inline FNamePool& GetFNamePool()
		{
			return *(FNamePool*)GNames;
		};

		inline std::string GetName() const
		{
			if (IsUsingNamePool())
			{
				return GetFNamePool()[ComparisonIndex]->GetAnsiName();
			}
			else
			{
				return GetTNameArray()[ComparisonIndex]->GetAnsiName();
			}
		};

		inline bool operator==(const FName& other) const
		{
			return ComparisonIndex == other.ComparisonIndex;
		};
	};
	struct FKey {
		FName KeyName;
	};
}
#ifdef _MSC_VER
#pragma pack(pop)
#endif