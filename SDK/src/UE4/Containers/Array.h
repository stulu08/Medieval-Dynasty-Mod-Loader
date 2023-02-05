#pragma once
#include "Templates.h"

namespace UE4 {
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

		void Add(T InputData)
		{
			Data = (T*)realloc(Data, sizeof(T) * (Count + 1));
			Data[Count++] = InputData;
			Max = Count;
		};

		inline bool IsValidIndex(int i) const
		{
			return i < Num();
		}

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

	template<typename InElementType>
	class TSparseArray
	{
	public:
		using ElementType = InElementType;
		typedef TSparseArrayElementOrFreeListLink<TAlignedBytes<sizeof(ElementType), alignof(ElementType)>> FElementOrFreeListLink;
		typedef TArray<FElementOrFreeListLink> DataType;
		//typedef TBitArray<typename Allocator::BitArrayAllocator> AllocationBitArrayType;
		DataType Data = DataType();
		//AllocationBitArrayType AllocationFlags;
		unsigned char AllocationFlags[32] = "";
		int32_t FirstFreeIndex = -1;
		int32_t NumFreeIndices = 0;

		int32 Num() const { return Data.Num() - NumFreeIndices; }
	};
}