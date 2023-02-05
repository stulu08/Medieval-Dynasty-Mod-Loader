#pragma once
#include "Set.h"

namespace UE4 {
	template<typename KeyType, typename ValueType>
	class TMapBase
	{
	public:
		typedef TPair<KeyType, ValueType> ElementType;
		typedef TSet<ElementType/*, KeyFuncs, SetAllocator*/> ElementSetType;
		ElementSetType Pairs;

		inline int32 Num() const { return Pairs.Num(); }

		typedef TSetElement<ElementType> SetElementType;
		typedef TSparseArrayElementOrFreeListLink<TAlignedBytes<sizeof(SetElementType), alignof(SetElementType)>> RawValueType;
		typedef TArray<RawValueType> ArrayType;

		FORCEINLINE ArrayType GetAsArray() {
			return Pairs.Elements.Data;
		}
		FORCEINLINE RawValueType GetRawValue(int index) {
			return Pairs.Elements.Data[index];
		}
		FORCEINLINE SetElementType* GetValueAsTSetElement(int index) {
			return reinterpret_cast<SetElementType*>(&(Pairs.Elements.Data[index].ElementData));
		}
		FORCEINLINE ElementType GetPair(int index) {
			return GetValueAsTSetElement(index)->Value;
		}
		FORCEINLINE KeyType GetKey(int index) {
			return GetPair(index).Key;
		}
		FORCEINLINE ValueType GetValue(int index) {
			return GetPair(index).Value;
		}
	};
	template<typename KeyType, typename ValueType>
	class TSortableMapBase : public TMapBase<KeyType, ValueType/*, SetAllocator, KeyFuncs*/>
	{};
	template<typename KeyType, typename ValueType>
	class NativeTMap;

	//when defining the NativeTMap we get errors for undefined structs and classes since we use the actual type and the compiler needs the size of them
#ifdef USE_ONLY_UE4_TMAP
	template<typename KeyType, typename ValueType>
	class TMap : public TSortableMapBase<KeyType, ValueType>
	{
		TMap() = default;
		TMap(NativeTMap<KeyType, ValueType>* src) {
			Write((byte*)this, (void*)src, sizeof(TMap<int, int>));
}
		TMap(NativeTMap<KeyType, ValueType> src) {
			Write((byte*)this, (void*)&src, sizeof(TMap<int, int>));
		}
	};
#else
	//use NativeTMap<>
	template<typename KeyType, typename ValueType>
	class TMap
	{	
	public:
		TMap() {
			//initilize with valid storage
			Write<int32_t>((byte*)this + OffsetOfClass(&TSparseArray<TSetElement<TPair<int, int>>>::FirstFreeIndex), -1);
		}
		TMap(NativeTMap<KeyType, ValueType>* src) {
			Write((byte*)this, (void*)src, sizeof(TMap<int,int>));
		}
		TMap(NativeTMap<KeyType, ValueType> src) {
			Write((byte*)this, (void*)&src, sizeof(TMap<int, int>));
		}
		
		unsigned char data[sizeof(TSortableMapBase<int, int>)] = "";
	};
#endif

	template<typename KeyType, typename ValueType>
	class NativeTMap : public TSortableMapBase<KeyType, ValueType>
	{
	public:
		NativeTMap() = default;
		NativeTMap(TMap<KeyType, ValueType>* src) {
			Write((byte*)this, (void*)src, sizeof(TMap<KeyType, ValueType>));
		}
		NativeTMap(TMap<KeyType, ValueType> src) {
			Write((byte*)this, (void*)&src, sizeof(TMap<KeyType, ValueType>));
		}

		operator TMap<KeyType, ValueType>*() {
			return reinterpret_cast<TMap<KeyType, ValueType>*>(this);
		}
	};
}