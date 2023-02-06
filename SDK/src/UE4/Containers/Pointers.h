#pragma once
#include "CoreUObject/Object.h"

namespace UE4 {
	struct FGuid {
		int32_t	A;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	B;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	C;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	D;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	struct FUniqueObjectGuid {
		FGuid Guid;
	};
	struct FSoftObjectPath {
		struct FName	AssetPathName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	SubPathString;		//Offset: 8	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	struct FSoftClassPath : public FSoftObjectPath {
	};

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

	template <typename TWeakPtr = FWeakObjectPtr>
	struct TScriptDelegate {
		UObject* GetUObject()
		{
			// Downcast UObjectBase to UObject
			return static_cast<UObject*>(Object.Get());
		}
		const UObject* GetUObject() const
		{
			// Downcast UObjectBase to UObject
			return static_cast<const UObject*>(Object.Get());
		}

		TWeakPtr Object;
		FName FunctionName;
	};
	struct FScriptDelegate {
		UObject* GetUObject()
		{
			// Downcast UObjectBase to UObject
			return static_cast<UObject*>(Object.Get());
		}
		const UObject* GetUObject() const
		{
			// Downcast UObjectBase to UObject
			return static_cast<const UObject*>(Object.Get());
		}

		FWeakObjectPtr Object;
		FName FunctionName;
	};
	template <typename TWeakPtr = FWeakObjectPtr>
	struct TMulticastScriptDelegate
	{
		typedef TArray<TScriptDelegate<TWeakPtr>> FInvocationList;
		mutable FInvocationList InvocationList;		// Mutable so that we can housekeep list even with 'const' broadcasts
	};

	template<class T = class UObject>
	using TAssetPtr = TSoftObjectPtr<T>;

	//typedef TScriptDelegate<FWeakObjectPtr> FScriptDelegate;
	typedef TMulticastScriptDelegate<> FMulticastScriptDelegate;

	enum class ESPMode {
		NotThreadSafe = 0,
		//Fast = FORCE_THREADSAFE_SHAREDPTRS ? 1 : 0,
		Fast = 0 ? 1 : 0,
		ThreadSafe = 1
	};
	template<class ObjectType, ESPMode Mode = ESPMode::Fast> class TSharedRef;
	template<class ObjectType, ESPMode Mode = ESPMode::Fast> class TSharedPtr;
	template<class ObjectType, ESPMode Mode = ESPMode::Fast> class TWeakPtr;
	template<class ObjectType, ESPMode Mode = ESPMode::Fast> class TSharedFromThis;
	namespace SharedPointerInternals {
		class FReferenceControllerBase {
		public:
			int32 SharedReferenceCount;
			int32 WeakReferenceCount;
		};
		template<ESPMode Mode>
		class FSharedReferencer {
			FReferenceControllerBase* ReferenceController;
		};
	};
	template<class ObjectType, ESPMode Mode>
	class TSharedRef {
	public:
		ObjectType* Object;
		SharedPointerInternals::FSharedReferencer<Mode> SharedReferenceCount;
	};
	template<class ObjectType, ESPMode Mode>
	class TSharedPtr {
	public:
		ObjectType* Object;
		SharedPointerInternals::FSharedReferencer<Mode> SharedReferenceCount;
	};
}
