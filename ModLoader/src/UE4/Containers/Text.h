#pragma once

namespace UE4 {
	class FTextData {
	public:
		char UnknownData[0x28];
		wchar_t* Name;
		__int32 Length;
	};

	struct FText {
		FTextData* Data;
		char UnknownData[0x10];

		wchar_t* Get() const {
			if (Data)
				return Data->Name;

			return nullptr;
		}
	};
}