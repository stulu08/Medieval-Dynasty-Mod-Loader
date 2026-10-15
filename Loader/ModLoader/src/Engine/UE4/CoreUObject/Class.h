#pragma once
#include "CoreTypes.h"
#include "Object.h"
#include "EngineAddresses.h"

namespace UE4 {
	class FField;
	class FProperty;

	class MDML_ENGINE_API UField : public UObject
	{
	public:
		UField* GetNext() const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Field");
			return ptr;
		}
	};
	typedef FText(*FEnumDisplayNameFn)(int32_t);
	class MDML_ENGINE_API UEnum : public UField
	{
	public:
		enum class ECppForm
		{
			Regular,
			Namespaced,
			EnumClass
		};
		FString GetCppType() const;
		TArray<TPair<FName, uint64_t>> GetNames() const;
		ECppForm GetCppForm() const;
		EEnumFlags GetEnumFlags() const;
		FEnumDisplayNameFn GetEnumDisplayNameFn() const;

		std::vector<std::string> GetNamesParsed() const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
			return ptr;
		}
	};

	class MDML_ENGINE_API UStruct : public UField
	{
	public:
		UStruct* GetSuperField() const;
		// UE's ChildProperties (UStruct+0x50): the FField chain of the struct's own properties.
		FField* GetChildProperties() const;
		// UE's Children (UStruct+0x48): the UField chain of the struct's own UFunctions. (Before Wave 3 this name
		// returned ChildProperties; owner decision 2026-10-14: UE naming.)
		UField* GetChildren() const;
		int32_t GetPropertySize() const;
		int32_t GetMinAlignment() const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
			return ptr;
		}

	};
	class MDML_ENGINE_API UScriptStruct : public UStruct
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
			return ptr;
		}
	};

	class MDML_ENGINE_API UClass : public UStruct
	{
	public:
		template<typename T>
		inline T* CreateDefaultObject()
		{
			return static_cast<T*>(CreateDefaultObject());
		}

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Class");
			return ptr;
		}

		// UClass::CreateDefaultObject of the engine: returns the existing CDO or creates it.
		// (The UML CDO-by-GObjects-scan mode, bIsDefaultObjectArrayed, was removed in Wave 3D.)
		inline UObject* CreateDefaultObject()
		{
			if (!mdml::Addresses.CreateDefaultObject)
				return GetDefaultObject();
			return reinterpret_cast<UObject * (*)(UClass*)>(mdml::Addresses.CreateDefaultObject)(this);
		}

		// The ClassDefaultObject field (UClass+0x118); nullptr if the CDO was not created yet.
		UObject* GetDefaultObject() const;
		uint32_t GetClassFlags() const;
		uint64_t GetClassCastFlags() const;

		static UClass* LoadClassFromString(const wchar_t* InName, bool bAllowObjectReconciliation = false);

	};
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
	class FScriptInterface {
		UObject* ObjectPointer;
		void* InterfacePointer;
	};
	template<class InterfaceType>
	class TScriptInterface : public FScriptInterface
	{ };

	class MDML_ENGINE_API UFunction : public UStruct
	{
	public:
		EFunctionFlags GetFunctionFlags() const;
		void SetFunctionFlags(EFunctionFlags flags);
		uint8_t GetNumParms() const;
		uint16_t GetParamsSize() const;
		uint16_t GetReturnValueOffset() const;
		void* GetFunction() const;
		void SetFunction(DWORD64 value) const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Function");
			return ptr;
		}
	};
	class MDML_ENGINE_API UDynamicClass : public UClass {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
			return ptr;
		}

	};
}
