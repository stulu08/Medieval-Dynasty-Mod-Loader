#pragma once
#include "Ue4.hpp"
#include <algorithm>

namespace Utils {
	inline std::string WStringToString(const std::wstring& wstr) {
		std::string str(wstr.length(), 0);
		std::transform(wstr.begin(), wstr.end(), str.begin(), [](wchar_t c) { return (char)c; });
		return str;
	}
	inline std::string FStringToString(const UE4::FString& fstr) {
		return WStringToString(fstr.c_str());
	}
}