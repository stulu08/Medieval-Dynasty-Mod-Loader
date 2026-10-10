#pragma once
#include "CoreTypes.h"
#include "Object.h"

namespace UE4 {
	class UField : public UObject
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
	class UEnum : public UField
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

	class UStruct : public UField
	{
	public:
		UStruct* GetSuperField() const;
		UField* GetChildren() const;
		int32_t GetPropertySize() const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
			return ptr;
		}

	};
	class UScriptStruct : public UStruct
	{
	public:
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
			return ptr;
		}
	};

	class UClass : public UStruct
	{
	public:
		template<typename T>
		inline T* CreateDefaultObject()
		{
			if (Profile.bIsDefaultObjectArrayed == true)
			{
				return UE4::UObject::GetDefaultObjectFromArray<T>(this);
			}
			return static_cast<T*>(CreateDefaultObject());
		}

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Class");
			return ptr;
		}

		inline UObject* CreateDefaultObject()
		{

			if (SDK::SelectedGameProfile.bIsDefaultObjectArrayed == true)
			{
				return UE4::UObject::GetDefaultObjectFromArray<UObject>(this);
			}
			else
			{
				return reinterpret_cast<UObject * (*)(UClass*)>(this, SDK::SelectedGameProfile.CreateDefaultObject)(this);
			}
		}

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

	class UFunction : public UStruct
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
	class UDynamicClass : public UClass {
	public:
		static UClass* StaticClass() {
			static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
			return ptr;
		}

	};
}