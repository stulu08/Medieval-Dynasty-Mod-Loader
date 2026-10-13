#include "Core.h"
#include "UserDefinedEnum.h"
#include "UE4.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "EngineMemory.h"

namespace UE4 {
	TMap<FName, FText> UE4::UUserDefinedEnum::GetDisplayNames() const {
		return mdml::mem::LoadField<TMap<FName, FText>>(this, mdml::Layout.UEnum.UserDefDisplayNameMap);
	}
	FText UUserDefinedEnum::GetDisplayNameTextByIndex(int32_t InIndex) const {
		// virtual FText UUserDefinedEnum::GetDisplayNameTextByIndex(int32 InIndex) const: returned through a hidden
		// result pointer (rdx); the function returns that pointer.
		FText out = FText();
		if (!mdml::Addresses.GetDisplayNameTextByIndex)
			return out;
		out = *reinterpret_cast<FText*(__fastcall*)(__int64, __int64, int32_t)>(mdml::Addresses.GetDisplayNameTextByIndex)((__int64)this, (__int64)(&out), InIndex);
		return out;
	}
	std::vector<std::string> UUserDefinedEnum::GetDisplayNamesParsed() const {
		std::vector<std::string> buffer = UEnum::GetNamesParsed();
		for (int i = 0; i < buffer.size(); i++) {
			FText displayText = GetDisplayNameTextByIndex(i);
			const std::string Text = displayText.ToString();
			if (!Text.empty())
				buffer[i] = Text;
			// The FText returned by value holds one reference; drop it (leaked before Wave 3D, code inventory C23).
			displayText.Release();
		}
		return buffer;
	}
}
