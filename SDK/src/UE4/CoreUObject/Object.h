#pragma once
#include "ObjectsArray.h"
#include "NamePool.h"
#include "CoreTypes.h"

namespace UE4 {
	class UPackage;
	class UClass;
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

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Object");
			return ptr;
		}

		bool DoesObjectContainFunction(std::string Function);

		class UFunction* GetFunction(std::string Function);

		void ProcessEvent(class UFunction* function, void* parms);

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