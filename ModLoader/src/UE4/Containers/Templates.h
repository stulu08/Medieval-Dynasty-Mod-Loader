#pragma once
#include <memory>

namespace UE4 {
	template<typename KeyType, typename ValueType>
	class TPair
	{
	public:
		KeyType   Key;
		ValueType Value;
	};

	template<class TEnum>
	class TEnumAsByte
	{
	public:
		inline TEnumAsByte()
		{
		}

		inline TEnumAsByte(TEnum _value)
			: value(static_cast<uint8_t>(_value))
		{
		}

		explicit inline TEnumAsByte(int32_t _value)
			: value(static_cast<uint8_t>(_value))
		{
		}

		explicit inline TEnumAsByte(uint8_t _value)
			: value(_value)
		{
		}

		inline operator TEnum() const
		{
			return (TEnum)value;
		}

		inline TEnum GetValue() const
		{
			return (TEnum)value;
		}

	public:
		uint8_t value;
	};

	template<typename KeyType, typename ValueType>
	class TMap
	{
		//char UnknownData[0x50];
	};
}