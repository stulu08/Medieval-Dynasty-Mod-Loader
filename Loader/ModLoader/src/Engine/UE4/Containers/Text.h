#pragma once
#include "String.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"

namespace UE4 {
	// Old guess of ITextData's layout: wchar_t* at +0x28. For TTextData<FTextHistory_Base> (plain, non-generated
	// texts) that is History.SourceString.Data, the source string; for other history types it is something else
	// (code inventory C22). Only used as the fallback of FText::ToWideString().
	class FTextData {
	public:
		char UnknownData[0x28];
		wchar_t* Name;
		__int32 Length;
	};

	// Mirror of FText (TSharedRef<ITextData> + Flags, 0x18 bytes). A bitwise view: copies do not touch the reference
	// count, so an FText the engine returned by value (one reference) must be released once with Release().
	struct FText {
		FTextData* Data;
		char UnknownData[0x10];

		// Old accessor, see FTextData. Prefer ToWideString()/ToString().
		wchar_t* Get() const {
			if (Data)
				return Data->Name;

			return nullptr;
		}

		// The display string via the engine's FText::ToString() (resolved by PDB name, mdml::Addresses.FTextToString),
		// valid while the text lives. Falls back to Get() without the PDB. Game thread (FText::ToString may rebuild
		// the text for the current culture).
		const wchar_t* ToWideString() const {
			if (!Data)
				return nullptr;
			if (mdml::Addresses.FTextToString) {
				const FString* Display = reinterpret_cast<const FString* (*)(const FText*)>(mdml::Addresses.FTextToString)(this);
				return Display ? Display->c_str() : nullptr;
			}
			return Get();
		}

		// UTF-8 display string ("" for an empty text).
		std::string ToString() const {
			const wchar_t* Text = ToWideString();
			if (!Text)
				return std::string();
			FString View(Text);
			return View.ToString();
		}

		// Drops this FText's reference through the engine destructor (FText::~FText, mdml::Addresses.FTextDestructor)
		// and empties it. Only for an FText that holds its own reference (returned by value from the engine). Without
		// the PDB the reference is leaked, as before Wave 3D.
		void Release() {
			if (Data && mdml::Addresses.FTextDestructor)
				reinterpret_cast<void (*)(FText*)>(mdml::Addresses.FTextDestructor)(this);
			Data = nullptr;
		}
	};
}
