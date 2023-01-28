#pragma once
#include "CoreUObject/Class.h"


namespace UE4 {
	class UUserDefinedEnum : public UEnum {
	public:
		TMap<FName, FText> GetDispalyNames() const;
		std::vector<std::string> GetDisplayNamesParsed() const;

		FText GetDisplayNameTextByIndex(int32_t InIndex) const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
			return ptr;
		}
	};
}