#pragma once
#include "Templates.h"
#include "UnrealMemory.h"
#include "EngineLayout.h"
#include <cstring>

namespace UE4 {
	// Mirror of TArray<T, FDefaultAllocator>: Data, Num, Max (0x10 bytes). A view: copies are shallow and nothing is
	// freed automatically (memory handed out by the engine stays the engine's).
	template<class T>
	class TArray
	{
		friend class FString;

	public:
		inline TArray()
		{
			Data = nullptr;
			Count = Max = 0;
		};

		inline int Num() const
		{
			return Count;
		};

		inline T& operator[](int i)
		{
			return Data[i];
		};

		inline const T& operator[](int i) const
		{
			return Data[i];
		};

		// Appends a bitwise copy. Grows through the engine allocator (FMemory::Realloc), so arrays that came from the
		// engine can be grown safely and arrays built here can be handed to the engine (before Wave 3D this used the
		// CRT realloc on possibly engine-owned memory, code inventory C19).
		void Add(T InputData)
		{
			if (Count >= Max)
				Reserve(Max > 0 ? Max * 2 : 4);
			std::memcpy(static_cast<void*>(&Data[Count]), static_cast<const void*>(&InputData), sizeof(T));
			++Count;
		};

		// Makes room for at least NewMax elements (never shrinks).
		void Reserve(int NewMax)
		{
			if (NewMax <= Max)
				return;
			Data = static_cast<T*>(FMemory::Realloc(Data, sizeof(T) * static_cast<size_t>(NewMax), alignof(T) > 16 ? static_cast<uint32_t>(alignof(T)) : 0));
			Max = NewMax;
		}

		inline bool IsValidIndex(int i) const
		{
			return i >= 0 && i < Num();
		}

		inline T* begin() { return Data; }
		inline T* end() { return Data + Count; }
		inline const T* begin() const { return Data; }
		inline const T* end() const { return Data + Count; }

	public:
		T* Data;
		int Count;
		int Max;
	};

	struct FSparseArrayAllocationInfo
	{
		int32_t Index;
		void* Pointer;
	};
	template<typename ElementType>
	union TSparseArrayElementOrFreeListLink
	{
		ElementType ElementData;
		struct
		{
			int32_t PrevFreeIndex;
			int32_t NextFreeIndex;
		};
	};

	// TSparseArray<T> with the default allocators: element storage + allocation bit array + free list (0x38 bytes).
	template<typename InElementType>
	class TSparseArray
	{
	public:
		using ElementType = InElementType;
		typedef TSparseArrayElementOrFreeListLink<TAlignedBytes<sizeof(ElementType), alignof(ElementType)>> FElementOrFreeListLink;
		typedef TArray<FElementOrFreeListLink> DataType;
		DataType Data = DataType();
		// TBitArray<FDefaultBitArrayAllocator>: 4 inline dwords, a heap pointer once it outgrows them, NumBits, MaxBits.
		unsigned char AllocationFlags[32] = "";
		int32_t FirstFreeIndex = -1;
		int32_t NumFreeIndices = 0;

		int32 Num() const { return Data.Num() - NumFreeIndices; }

		// Highest index + 1 (including holes); iterate 0..GetMaxIndex() and skip !IsAllocated(i).
		int32 GetMaxIndex() const { return Data.Num(); }

		// Whether slot Index holds an element (false for removed elements on the free list).
		bool IsAllocated(int32 Index) const
		{
			if (Index < 0 || Index >= Data.Num())
				return false;
			const uint32_t* Words = nullptr;
			std::memcpy(&Words, AllocationFlags + mdml::layout::TBitArray::SecondaryData, sizeof(Words)); // heap words, if any
			if (!Words)
				Words = reinterpret_cast<const uint32_t*>(AllocationFlags + mdml::layout::TBitArray::InlineData);
			int32_t NumBits = 0;
			std::memcpy(&NumBits, AllocationFlags + mdml::layout::TBitArray::NumBits, sizeof(NumBits));
			if (Index >= NumBits)
				return false;
			return (Words[Index / 32] & (1u << (Index % 32))) != 0;
		}
	};
}
