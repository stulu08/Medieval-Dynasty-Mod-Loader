#pragma once
#include "CoreUObject/Object.h"

namespace UE4 {
	template<class T, class TBASE>
	class TAutoPointer : public TBASE
	{
	public:
		inline operator T* () const
		{
			return TBASE::Get();
		}

		inline operator const T* () const
		{
			return (const T*)TBASE::Get();
		}

		explicit inline operator bool() const
		{
			return TBASE::Get() != nullptr;
		}
	};

	struct FWeakObjectPtr {
		class FUObjectItem* GetObjectItem() const
		{
			if (ObjectSerialNumber == 0)
			{
				return nullptr;
			}
			if (ObjectIndex < 0)
			{
				return nullptr;
			}
			FUObjectItem* ObjectItem;
			if (FUObjectArray::IsChunkedArray())
				ObjectItem = UObject::GObjects->GetAsChunckArray().GetObjectPtr(ObjectIndex);
			else
				ObjectItem = UObject::GObjects->GetAsTUArray().GetObjectPtr(ObjectIndex);
			if (ObjectItem)
			{
				return nullptr;
			}
			return ObjectItem;
		}
		UObject* Get() const
		{
			auto* item = GetObjectItem();
			if (item)
				return item->Object;
			return nullptr;
		}
		int32_t		ObjectIndex;
		int32_t		ObjectSerialNumber;
	};
	template<class T>
	struct TWeakObjectPtr : private FWeakObjectPtr {
		T* Get() const {
			return dynamic_cast<T*>(FWeakObjectPtr::Get());
		}
	};
	struct FSoftObjectPath {
		FName AssetPathName;
		FString SubPathString;
	};
	template<typename TObjectID>
	class TPersistentObjectPtr
	{
	public:
		class UObject* Get() const
		{
			return WeakPtr.Get();
		}

		FWeakObjectPtr WeakPtr;
		int32_t TagAtLastTest;
		TObjectID ObjectID;
	};

	struct FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath>
	{
	public:
		
	};
	template<class T = UObject>
	struct TSoftObjectPtr {
		FSoftObjectPtr SoftObjectPtr;
		T* Get() const {
			return dynamic_cast<T*>(SoftObjectPtr.Get());
		}
	};

	template<class T = class UObject>
	using TAssetPtr = TSoftObjectPtr<T>;

	struct FUniqueObjectGuid {
		FGuid Guid;
	};
	struct FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid> {
	};
	template<class T = UObject>
	struct TLazyObjectPtr : private FLazyObjectPtr {
		T* Get() const
		{
			// there are cases where a TLazyObjectPtr can get an object of the wrong type assigned to it which are difficult to avoid
			// e.g. operator=(const FUniqueObjectGuid& ObjectID)
			// "WARNING: this doesn't check the type of the object is correct..."
			return dynamic_cast<T*>(TPersistentObjectPtr::Get());
		}
	};
}
