#pragma once
#include <memory>

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


	class UClass;

	template<class TClass>
	class TSubclassOf
	{
	public:
		TSubclassOf(UClass* Class) {
			this->Class = Class;
		}

		inline UClass* GetClass()
		{
			return Class;
		}
	private:
		UClass* Class;
	};

	struct FWeakObjectPtr {
		int32_t		ObjectIndex;
		int32_t		ObjectSerialNumber;
	};
	template<typename TObjectID>
	class TPersistentObjectPtr
	{
	public:
		FWeakObjectPtr WeakPtr;
		int32_t TagAtLastTest;
		TObjectID ObjectID;
	};
	template<class T>
	struct TWeakObjectPtr : private FWeakObjectPtr {

	};
}
