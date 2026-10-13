#pragma once
#include "Array.h"

namespace UE4 {

	class FSetElementId {
	public:
		int32_t Index = 0;
	};
	template<typename InElementType>
	class TSetElementBase
	{
	public:
		typedef InElementType ElementType;
		ElementType Value = ElementType();
		mutable FSetElementId HashNextId = FSetElementId();
		mutable int32_t HashIndex = 0;
	};
	template <typename InElementType>
	class TSetElement : public TSetElementBase<InElementType>
	{ };
	template<typename InElementType>
	class TSet
	{
	public:
		typedef TSetElement<InElementType> SetElementType;
		typedef TSparseArray<SetElementType> ElementArrayType;
		ElementArrayType Elements;
		mutable unsigned char Hash[16] = "";
		mutable int32_t	 HashSize = 0;

		inline int32 Num() const { return Elements.Num(); }
	};
}