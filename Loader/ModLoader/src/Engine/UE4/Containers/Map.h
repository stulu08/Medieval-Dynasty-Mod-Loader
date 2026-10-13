#pragma once
#include "Set.h"
#include <cstring>

namespace UE4 {
	template<typename KeyType, typename ValueType>
	class TMapBase
	{
	public:
		typedef TPair<KeyType, ValueType> ElementType;
		typedef TSet<ElementType/*, KeyFuncs, SetAllocator*/> ElementSetType;
		ElementSetType Pairs;

		// Number of elements (not counting removed slots).
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
		// Slot access by sparse index (0 .. GetMaxIndex()). Removed slots are holes: check IsValidIndex(index) first,
		// or use ForEach/Find. Iterating 0..Num() (as before Wave 3D) misses elements after a hole (code inventory C21).
		FORCEINLINE ElementType GetPair(int index) {
			return GetValueAsTSetElement(index)->Value;
		}
		FORCEINLINE KeyType GetKey(int index) {
			return GetPair(index).Key;
		}
		FORCEINLINE ValueType GetValue(int index) {
			return GetPair(index).Value;
		}

		// Highest sparse index + 1 (including holes).
		inline int32 GetMaxIndex() const { return Pairs.Elements.GetMaxIndex(); }
		// Whether the sparse slot holds an element (allocation bit set).
		inline bool IsValidIndex(int32 index) const { return Pairs.Elements.IsAllocated(index); }

		// Calls Fn(ElementType& Pair) for every element; if Fn returns bool, false stops the loop.
		template<typename Fn>
		void ForEach(Fn&& Callback) {
			for (int32 i = 0; i < GetMaxIndex(); ++i) {
				if (!IsValidIndex(i))
					continue;
				ElementType& Pair = GetValueAsTSetElement(i)->Value;
				if constexpr (std::is_same_v<std::invoke_result_t<Fn, ElementType&>, bool>) {
					if (!Callback(Pair))
						return;
				}
				else {
					Callback(Pair);
				}
			}
		}

		// Linear key lookup (KeyType::operator==; for FName that compares ComparisonIndex). nullptr if not found.
		ValueType* Find(const KeyType& Key) {
			ValueType* Result = nullptr;
			ForEach([&](ElementType& Pair) {
				if (Pair.Key == Key) {
					Result = &Pair.Value;
					return false;
				}
				return true;
			});
			return Result;
		}
	};
	template<typename KeyType, typename ValueType>
	class TSortableMapBase : public TMapBase<KeyType, ValueType/*, SetAllocator, KeyFuncs*/>
	{};
	template<typename KeyType, typename ValueType>
	class NativeTMap;

	// Opaque TMap of the engine (0x50 bytes, align 8). Copy it into a NativeTMap to look inside. The typed variant is
	// not used directly because member types of generated structs may be incomplete where the map is declared.
	// (The USE_ONLY_UE4_TMAP alternative was removed in Wave 3D.)
	template<typename KeyType, typename ValueType>
	class TMap
	{
	public:
		TMap() {
			// An empty, valid sparse array: FirstFreeIndex = -1 (INDEX_NONE).
			const int32_t FirstFree = -1;
			std::memcpy(data + mdml::layout::TSparseArray::FirstFreeIndex, &FirstFree, sizeof(FirstFree));
		}
		TMap(NativeTMap<KeyType, ValueType>* src) {
			std::memcpy(data, src, sizeof(data));
		}
		TMap(NativeTMap<KeyType, ValueType> src) {
			std::memcpy(data, &src, sizeof(data));
		}

		alignas(8) unsigned char data[sizeof(TSortableMapBase<int, int>)] = "";
	};

	template<typename KeyType, typename ValueType>
	class NativeTMap : public TSortableMapBase<KeyType, ValueType>
	{
	public:
		NativeTMap() = default;
		NativeTMap(TMap<KeyType, ValueType>* src) {
			std::memcpy(static_cast<void*>(this), src, sizeof(TMap<KeyType, ValueType>));
		}
		NativeTMap(TMap<KeyType, ValueType> src) {
			std::memcpy(static_cast<void*>(this), &src, sizeof(TMap<KeyType, ValueType>));
		}
		template<typename NewValueType>
		NativeTMap(TMap<KeyType, NewValueType> src) {
			static_assert(sizeof(ValueType) == sizeof(NewValueType), "NativeTMap NewValueType must be same size as ValueType");
			std::memcpy(static_cast<void*>(this), &src, sizeof(TMap<KeyType, ValueType>));
		}

		operator TMap<KeyType, ValueType>*() {
			return reinterpret_cast<TMap<KeyType, ValueType>*>(this);
		}
	};
}
