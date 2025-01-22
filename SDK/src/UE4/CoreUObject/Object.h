#pragma once
#include "ObjectsArray.h"
#include "NamePool.h"

namespace UE4 {
	class UPackage;
	class UClass;
	enum class ELoadFlags : uint32_t
	{
		None = 0x00000000,
		Async = 0x00000001,
		NoWarn = 0x00000002,
		EditorOnly = 0x00000004,
		ResolvingDeferredExports = 0x00000008,
		Verify = 0x00000010,
		AllowDll = 0x00000020,
		NoVerify = 0x00000080,
		IsVerifying = 0x00000100,
		DisableDependencyPreloading = 0x00001000,
		Quiet = 0x00002000,
		FindIfFail = 0x00004000,
		MemoryReader = 0x00008000,
		NoRedirects = 0x00010000,
		ForDiff = 0x00020000,
		PackageForPIE = 0x00080000,
		DeferDependencyLoads = 0x00100000,
		ForFileDiff = 0x00200000,
		DisableCompileOnLoad = 0x00400000,
	};
	enum class EInternalObjectFlags
	{
		None = 0,
		ReachableInCluster = 1 << 23,
		ClusterRoot = 1 << 24,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
		AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet,
	};
	class UObject
	{
	public:
		static FUObjectArray* GObjects;
		int32_t GetIndex() const;
		UClass* GetClass() const;
		UObject* GetOuter() const;
		std::string GetName() const;
		std::string GetFullName() const;
		std::string GetCPPName() const;
		UPackage* GetPackage() const;

		static inline bool IsChunkedArray() { return FUObjectArray::IsChunkedArray(); }
		template<typename T>
		static T* FindObject(const std::string& name)
		{
			if (IsChunkedArray())
			{
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
				{
					auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->GetFullName() == name)
					{
						return static_cast<T*>(object);
					}
				}
				return nullptr;
			}
			else
			{
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
				{
					auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->GetFullName() == name)
					{
						return static_cast<T*>(object);
					}
				}
				return nullptr;
			}
		}
		static UObject* FindObject(const std::string& name) {
			return FindObject<UObject>(name);
		}

		template<typename T>
		static std::vector<T*> GetAllObjectsOfType(UClass* Class, bool filterDefualts)
		{
			if (IsChunkedArray())
			{
				std::vector<T*> ret;
				//auto v = T::StaticClass();
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
				{
					auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->IsA(Class))
					{
						if (filterDefualts)
						{
							if (object->GetName().find("Default__") != std::string::npos) {
								continue;
							}
						}
						ret.push_back(static_cast<T*>(object));
					}
				}
				return ret;
			}
			else
			{
				std::vector<T*> ret;
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
				{
					auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->IsA(Class))
					{
						if (filterDefualts)
						{
							if (object->GetName().find("Default__") != std::string::npos) {
								continue;
							}
						}
						ret.push_back(static_cast<T*>(object));
					}
				}
				return ret;
			}
		}

		template<typename T>
		static size_t CountObjectByTypeAndName(const std::string& name) {
			UClass* Class = T::StaticClass();
			size_t count = 0;
			if (IsChunkedArray())
			{
				//auto v = T::StaticClass();
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
				{
					auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->IsA(Class))
					{
						if (object->GetName() != name) {
							continue;
						}
						count++;
					}
				}
				return count;
			}
			else
			{
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
				{
					auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->IsA(Class))
					{
						if (object->GetName() != name) {
							continue;
						}
						count++;
					}
				}
				return count;
			}
		}

		template<typename T>
		static T* GetDefaultObjectFromArray(UClass* Class)
		{
			if (IsChunkedArray())
			{
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
				{
					auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->IsA(Class))
					{
						if (object->GetName().find("Default__") != std::string::npos)
						{
							return static_cast<T*>(object);
						}
					}
				}
				return nullptr;
			}
			else
			{
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
				{
					auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					if (object->IsA(Class))
					{
						if (object->GetName().find("Default__") != std::string::npos)
						{
							return static_cast<T*>(object);
						}
					}
				}
				return nullptr;
			}
		}

		static UClass* FindClass(const std::string& name);

		bool IsA(UClass* cmp) const;
		bool IsAByName(const std::string& fullName) const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Object");
			return ptr;
		}

		bool DoesObjectContainFunction(std::string Function);

		class UFunction* GetFunction(std::string Function);

#ifdef ALWAYS_PROCESS_EVENT_SAVE
		template<typename Params>
		FORCEINLINE void ProcessEvent(class UFunction* function, Params* parms) {
			if (sizeof(Params) == sizeof(void*))//dont check pointers
				return ProcessEvent_Save_impl(function, parms, true, false, sizeof(Params));
			else
				return ProcessEvent_Save_impl(function, parms, true, true, sizeof(Params));
		}
#else 
		void ProcessEvent(class UFunction* function, void* parms);
#endif

		template<typename Params>
		FORCEINLINE void ProcessEvent_Save(class UFunction* function, Params* parms, bool checkClass = true, bool checkParamSize = true) {
			return ProcessEvent_Save_impl(function, parms, checkClass, checkParamSize, sizeof(Params));
		}

		void ProcessEvent_Save_impl(class UFunction* function, void* parms, bool checkClass = true, bool checkParamSize = true, size_t parmsSize = 0);

/**
 * Find or load an object by string name with optional outer and filename specifications.
 * These are optional because the InName can contain all of the necessary information.
 *
 * @param Class			The class (or a superclass) of the object to be loaded.
 * @param InOuter		An optional object to narrow where to find/load the object from
 * @param Name			String name of the object. If it's not fully qualified, InOuter and/or Filename will be needed
 * @param Filename		An optional file to load from (Deprecated parameter)
 * @param LoadFlags		Flags controlling how to handle loading from disk, from the ELoadFlags enum
 * @param Sandbox		A list of packages to restrict the search for the object (Deprecated parameter)
 * @param bAllowObjectReconciliation	Whether to allow the object to be found via FindObject before forcing a load (Deprecated parameter)
 * @param InstancingContext				InstancingContext used to remap imports when loading a package under a new name
 *
 * @return The object that was loaded or found. nullptr for a failure.
 */
		static UObject* StaticLoadObject(class UClass* uclass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename = nullptr, ELoadFlags LoadFlags = ELoadFlags::None, void* Sandbox = nullptr, bool bAllowObjectReconciliation = true, const void* InstancingContext = nullptr);

		static UObject* StaticFindObject(class UClass* uclass, UObject* InOuter, const wchar_t* Name, bool ExactClass = true);

		static class UObject* StaticConstructObject_Internal(class UClass* Class, class UObject* InOuter, class FName Name, unsigned int SetFlags, EInternalObjectFlags InternalSetFlags, class UObject* Template, bool bCopyTransientsFromClassDefaults, void* InstanceGraph, bool bAssumeTemplateIsArchetype);

		bool CallFunctionByNameWithArguments(const wchar_t* Str, void* Ar, UE4::UObject* Executor, bool bForceCallWithNonExec);

		void ExecuteUbergraph(int EntryPoint);
	};
	class UPackage : public UObject {
	public:
		std::vector<UObject*> GetAllObjectsInPackage(bool filterDefualts) {
			if (IsChunkedArray())
			{
				std::vector<UObject*> ret;
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
				{
					auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}
					auto p = object->GetPackage();
					if (p)
					{
						if (p->GetFullName() != this->GetFullName())
							continue;
						if (filterDefualts)
						{
							if (object->GetName().find("Default__") != std::string::npos) {
								continue;
							}
						}
						ret.push_back((object));
					}
				}
				return ret;
			}
			else
			{
				std::vector<UObject*> ret;
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
				{
					auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

					if (object == nullptr)
					{
						continue;
					}

					auto p = object->GetPackage();
					if (p)
					{
						if (p->GetFullName() != this->GetFullName())
							continue;
						if (filterDefualts)
						{
							if (object->GetName().find("Default__") != std::string::npos) {
								continue;
							}
						}
						ret.push_back((object));
					}
				}
				return ret;
			}
		}

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Package");
			return ptr;
		}
	};
}