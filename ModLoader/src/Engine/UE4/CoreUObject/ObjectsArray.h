#pragma once
#include <GameInfo.h>
#ifdef _MSC_VER
#pragma pack(push, 0x8)
#pragma warning( disable : 4200 )
#endif
namespace UE4 {
	//---------------------------------------------------------------------------
	//UObject Array
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
		inline int Num() const
		{
			return NumElements;
		}

		inline FUObjectItem* GetObjectPtr(int Index) const
		{
			auto ElementsPerChunk = MaxElements / MaxChunks;
			auto ChunkIndex = Index / ElementsPerChunk;
			auto WithinChunkIndex = Index % ElementsPerChunk;
			auto Chunk = Objects[ChunkIndex];
			return Chunk + WithinChunkIndex;
		}

		inline FUObjectItem const& GetByIndex(int Index) const
		{
			return *GetObjectPtr(Index);
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
		DWORD ObjObjects;
		static inline bool IsChunkedArray() { return SDK::SelectedGameProfile.IsUsingFChunkedFixedUObjectArray; }

		inline TUObjectArray GetAsTUArray() const
		{
			return (TUObjectArray&)ObjObjects;
		}

		inline FChunkedFixedUObjectArray GetAsChunckArray() const
		{
			return (FChunkedFixedUObjectArray&)ObjObjects;
		}
	};
}
#ifdef _MSC_VER
#pragma pack(pop)
#endif