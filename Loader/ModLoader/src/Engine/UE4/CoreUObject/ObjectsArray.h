#pragma once
#include "EngineLayout.h"
#ifdef _MSC_VER
#pragma pack(push, 0x8)
#pragma warning( disable : 4200 )
#endif
namespace UE4 {
	//---------------------------------------------------------------------------
	//UObject Array (GUObjectArray). UE 4.27 always uses FChunkedFixedUObjectArray; layout checked against the PDB
	//(mdml::layout::FUObjectArray / FChunkedFixedUObjectArray / FUObjectItem, static_asserts below).
	//---------------------------------------------------------------------------
	class UObject;
	class FUObjectItem
	{
	public:
		UObject* Object;
		int Flags;
		int ClusterRootIndex;
		int SerialNumber;
	};
	// Legacy flat array of the pre-4.20 engines (UML multi-game path). UE 4.27 never uses it. Only kept so callers
	// outside the engine core that still have the dead `else` branch (BaseMod) compile in Wave 3 round 1; it aliases
	// the chunked array and must not be used. Remove with those callers (3D report, follow-ups).
	class TUObjectArray
	{
	public:
		inline int Num() const
		{
			return NumElements;
		}

		inline FUObjectItem* GetObjectPtr(int Index) const
		{
			return &Objects[Index];
		}
		inline FUObjectItem const& GetByIndex(int Index) const
		{
			return Objects[Index];
		}

		FUObjectItem* Objects;
		int MaxElements;
		int NumElements;
	};
	class FChunkedFixedUObjectArray
	{
	public:
		static constexpr int NumElementsPerChunk = mdml::layout::FChunkedFixedUObjectArray::NumElementsPerChunk;

		inline int Num() const
		{
			return NumElements;
		}

		inline bool IsValidIndex(int Index) const
		{
			return Index >= 0 && Index < NumElements;
		}

		// nullptr for an index outside [0, Num()) or an unallocated chunk.
		inline FUObjectItem* GetObjectPtr(int Index) const
		{
			if (!IsValidIndex(Index))
				return nullptr;
			const int ChunkIndex = Index / NumElementsPerChunk;
			const int WithinChunkIndex = Index % NumElementsPerChunk;
			if (ChunkIndex >= NumChunks || !Objects[ChunkIndex])
				return nullptr;
			return Objects[ChunkIndex] + WithinChunkIndex;
		}

		// Kept for existing callers: returns a zeroed item for an invalid index instead of reading out of bounds.
		inline FUObjectItem const& GetByIndex(int Index) const
		{
			static const FUObjectItem Empty{};
			const FUObjectItem* Item = GetObjectPtr(Index);
			return Item ? *Item : Empty;
		}

	private:
		FUObjectItem** Objects;
		FUObjectItem* PreAllocatedObjects;
		int MaxElements;
		int NumElements;
		int MaxChunks;
		int NumChunks;
	};
	class FUObjectArray
	{
	public:
		int ObjFirstGCIndex;
		int ObjLastNonGCIndex;
		int MaxObjectsNotConsideredByGC;
		bool OpenForDisregardForGC;
		FChunkedFixedUObjectArray ObjObjects;

		// Always true for UE 4.27. Kept for callers outside the core (BaseMod); new code uses UObject::ForEachObject.
		static constexpr bool IsChunkedArray() { return true; }

		inline const FChunkedFixedUObjectArray& GetObjects() const
		{
			return ObjObjects;
		}

		// Legacy spelling, kept for callers outside the core (BaseMod); returns the array by value like before.
		inline FChunkedFixedUObjectArray GetAsChunckArray() const
		{
			return ObjObjects;
		}

		// Legacy flat-array view (dead UML path), see TUObjectArray.
		inline TUObjectArray GetAsTUArray() const
		{
			return reinterpret_cast<const TUObjectArray&>(ObjObjects);
		}

		// Calls Fn(UObject*) for every live (non-null) object slot in index order. If Fn returns bool, returning false
		// stops the iteration. The one GObjects loop of the core (Wave 3D).
		template<typename Fn>
		inline void ForEachObject(Fn&& Callback) const
		{
			const int Count = ObjObjects.Num();
			for (int i = 0; i < Count; ++i)
			{
				const FUObjectItem* Item = ObjObjects.GetObjectPtr(i);
				if (!Item || !Item->Object)
					continue;
				if constexpr (std::is_same_v<std::invoke_result_t<Fn, UObject*>, bool>)
				{
					if (!Callback(Item->Object))
						return;
				}
				else
				{
					Callback(Item->Object);
				}
			}
		}
	};

	static_assert(sizeof(FUObjectItem) == mdml::layout::FUObjectItem::Size, "FUObjectItem layout");
	static_assert(offsetof(FUObjectItem, SerialNumber) == mdml::layout::FUObjectItem::SerialNumber, "FUObjectItem layout");
	static_assert(sizeof(FChunkedFixedUObjectArray) == mdml::layout::FChunkedFixedUObjectArray::Size, "FChunkedFixedUObjectArray layout");
	static_assert(offsetof(FUObjectArray, ObjObjects) == mdml::layout::FUObjectArray::ObjObjects, "FUObjectArray layout");
}
#ifdef _MSC_VER
#pragma pack(pop)
#endif
