#pragma once
#include "Array.h"
#include <string>
#include <memory>
#include <cwchar>

namespace UE4 {
	// Mirror of FString (TArray<TCHAR>, null-terminated, Num() includes the terminator). A view like TArray: copies are
	// shallow, nothing is freed.
	class FString : public TArray<wchar_t>
	{
	public:
		inline FString()
		{
		};

		// Wraps `other` WITHOUT copying (the FString points into the caller's buffer, which must outlive it). Fine for
		// passing literals/std::wstring::c_str() to engine functions that take `const FString&`; never hand such an
		// FString to the engine as an out-parameter or let the engine grow/free it. nullptr gives an empty string.
		// (An owning FString on the engine allocator is an open design question, see the Wave 3D report.)
		FString(const wchar_t* other)
		{
			if (other && *other)
			{
				Max = Count = static_cast<int32_t>(std::wcslen(other)) + 1;
				Data = const_cast<wchar_t*>(other);
			}
		};

		inline bool IsValid() const
		{
			return Data != nullptr;
		}

		inline const wchar_t* c_str() const
		{
			return Data; // nullptr for an invalid string, like before
		}

		// UTF-8 (before Wave 3D: every non-ASCII character became '?'). Empty for an invalid string.
		std::string ToString() const
		{
			if (!Data || Count <= 0)
				return std::string();
			const int length = static_cast<int>(std::wcslen(Data));
			if (length == 0)
				return std::string();
			const int bytes = WideCharToMultiByte(CP_UTF8, 0, Data, length, nullptr, 0, nullptr, nullptr);
			std::string str(bytes > 0 ? bytes : 0, '\0');
			if (bytes > 0)
				WideCharToMultiByte(CP_UTF8, 0, Data, length, &str[0], bytes, nullptr, nullptr);
			return str;
		}
	};
}
