#include "Class.h"
#include "UE4.h"
#include "EngineLayout.h"

namespace UE4 {
	//---------------------------------------------------------------------------
	//UField Functions
	//---------------------------------------------------------------------------

	UField* UField::GetNext() const
	{
		return Read<UField*>((byte*)this + mdml::Layout.UField.Next);
	};

	//---------------------------------------------------------------------------
	//UClass Functions
	//---------------------------------------------------------------------------

	UClass* UClass::LoadClassFromString(const wchar_t* InName, bool bAllowObjectReconciliation)
	{
		return (UClass*)UObject::StaticLoadObject(UClass::StaticClass(), nullptr, InName, nullptr, ELoadFlags::None, nullptr, bAllowObjectReconciliation);
	}

	//---------------------------------------------------------------------------
	//UEnum Functions
	//---------------------------------------------------------------------------

	FString UEnum::GetCppType() const {
		return Read<FString>((byte*)this + mdml::Layout.UEnum.CppType);
	}

	TArray<TPair<FName, uint64_t>> UEnum::GetNames() const {
		return Read<TArray<TPair<FName, uint64_t>>>((byte*)this + mdml::Layout.UEnum.Names);
	}

	UEnum::ECppForm UEnum::GetCppForm() const {
		return Read<UEnum::ECppForm>((byte*)this + mdml::Layout.UEnum.CppForm);
	}

	EEnumFlags UEnum::GetEnumFlags() const {
		return Read<EEnumFlags>((byte*)this + mdml::Layout.UEnum.Flags);
	}

	FEnumDisplayNameFn UEnum::GetEnumDisplayNameFn() const {
		return Read<FEnumDisplayNameFn>((byte*)this + mdml::Layout.UEnum.DisplayNameFn);
	}

	std::vector<std::string> UEnum::GetNamesParsed() const {
		std::vector<std::string> buffer;
		auto& names = GetNames();
		for (auto i = 0; i < names.Num(); ++i) {
			buffer.push_back(FName(names[i].Key.ComparisonIndex).GetName());
		}
		return buffer;
	}

	//---------------------------------------------------------------------------
	//UStruct Functions
	//---------------------------------------------------------------------------

	UStruct* UStruct::GetSuperField() const
	{
		return Read<UStruct*>((byte*)this + mdml::Layout.UStruct.SuperStruct);
	};

	UField* UStruct::GetChildren() const
	{
		return Read<UField*>((byte*)this + mdml::Layout.UStruct.Children);
	};

	int32_t UStruct::GetPropertySize() const
	{
		return Read<int32_t>((byte*)this + mdml::Layout.UStruct.PropertiesSize);
	};

	//---------------------------------------------------------------------------
	//UFunction Functions
	//---------------------------------------------------------------------------

	EFunctionFlags UFunction::GetFunctionFlags() const {
		return Read<EFunctionFlags>((byte*)this + mdml::Layout.UFunction.FunctionFlags);
	}
	void UFunction::SetFunctionFlags(EFunctionFlags flags) {
		Write((byte*)this + mdml::Layout.UFunction.FunctionFlags, flags);
	}
	uint8_t UFunction::GetNumParms() const {
		return Read<uint8_t>((byte*)this + mdml::Layout.UFunction.NumParams);
	}
	uint16_t UFunction::GetParamsSize() const {
		return Read<uint16_t>((byte*)this + mdml::Layout.UFunction.ParamsSize);
	}
	uint16_t UFunction::GetReturnValueOffset() const {
		return Read<uint16_t>((byte*)this + mdml::Layout.UFunction.ReturnValueOffset);
	}
	;
	void* UFunction::GetFunction() const { return Read<void*>((byte*)this + mdml::Layout.UFunction.Func); }
	void UFunction::SetFunction(DWORD64 value) const {
		Write((byte*)this + mdml::Layout.UFunction.Func, value);
	};
}