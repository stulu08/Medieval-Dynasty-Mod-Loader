#include "Core.h"
#include "UserDefinedEnum.h"
#include "UE4.h"

namespace UE4 {
	TMap<FName, FText> UE4::UUserDefinedEnum::GetDispalyNames() const {
		return Read<TMap<FName, FText>>((byte*)this + SDK::SelectedGameProfile.defs.UEnum.UserDefDisplayNameMap);
	}
	FText UUserDefinedEnum::GetDisplayNameTextByIndex(int32_t InIndex) const {
		static DWORD64 fn = 0;
		if (fn == 0) {
			std::cout << fn << std::endl;
			fn = (DWORD64)Pattern::Find("48 89 5C 24 ? 55 56 57 48 83 EC 30 48 8B FA 41 8B E8 48 8D 54 24 ? 48 8B F1 E8 ? ? ? ? 83 78 08 00 74 05");
			UE_LOG(LogTemp, Trace, "Found UUserDefinedEnum::GetDisplayNameTextByIndex at 0x{0:x}", fn);
		}
		//return reinterpret_cast<FText(__fastcall*)(class UUserDefinedEnum*, int32_t)>(fn)((UUserDefinedEnum*)this, InIndex);
		// __int64 __fastcall UUserDefinedEnum::GetDisplayNameTextByIndex(__int64 a1, __int64 a2, unsigned int a3)
		// in ida the function returns always a2 and nothing else while also seting a2 to the required value
		FText out = FText();
		out = *reinterpret_cast<FText*(__fastcall*)(__int64, __int64, int32_t)>(fn)((__int64)this, (__int64)(&out), InIndex);
		return out;
	}
	std::vector<std::string> UUserDefinedEnum::GetDisplayNamesParsed() const {
		std::vector<std::string> buffer = UEnum::GetNamesParsed();
		for (int i = 0; i < buffer.size(); i++) {
			FText wdisplayText = GetDisplayNameTextByIndex(i);
			if (wdisplayText.Get()) {
				std::wstring wText = std::wstring(wdisplayText.Get());
				std::string Text = std::string(wText.length(), 0);
				std::transform(wText.begin(), wText.end(), Text.begin(), [](wchar_t c) -> char {return (char)c; });
				buffer[i] = Text;
			}
		}
		return buffer;
	}
}

