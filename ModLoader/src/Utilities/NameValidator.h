#pragma once
#include <string>

namespace UE4 {
	class UEnum;
	class UStruct;
}

class LOADER_API NameValidator {
public:


	/// <summary>
	/// Makes valid C++ name from the given name.
	/// </summary>
	/// <param name="name">The name to process.</param>
	/// <returns>A valid C++ name.</returns>
	static std::string MakeValidName(std::string&& name);
	static std::string SimplifyEnumName(std::string&& name);
	static std::string MakeUniqueCppName(const UE4::UEnum* e);
	static std::string MakeUniqueCppName(const UE4::UStruct* ss);
};