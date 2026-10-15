#pragma once
#include "BaseControls.h"
#include <magic_enum/magic_enum.hpp>

namespace SDG {
	namespace Controls {
		inline bool Float(const std::string& label, float& value, float min = -FLT_MAX, float max = FLT_MAX, float speed = 1.0f, const char* format = "%.3f") {
			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);
				bool re = ImGui::DragFloat("##value_float", &value, speed, min, max, format);
				ImGui::PopItemWidth();
				return re;
				});
		}
		inline bool Int(const std::string& label, int32_t& value, int32_t min = -INT32_MAX, int32_t max = INT32_MAX, float speed = 1.0f, const char* format = "%d") {
			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);
				bool re = ImGui::DragInt("##value_int", &value, speed, min, max, format);
				ImGui::PopItemWidth();
				return re;
				});
		}
		inline bool UInt(const std::string& label, uint32_t& value, uint32_t min = 0, uint32_t max = INT32_MAX, float speed = 1.0f, const char* format = "%d") {
			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);
				int32_t tempValue = static_cast<int32_t>(value);
				bool re = ImGui::DragInt("##value_uint", &tempValue, speed, min, max, format);
				value = static_cast<uint32_t>(tempValue);
				ImGui::PopItemWidth();
				return re;
				});
		}
		template<class UIntType, class MinType = UIntType, class MaxType = UIntType>
		inline bool GenericInt(const std::string& label, UIntType& value, MinType min = 0, MaxType max = INT32_MAX, float speed = 1.0f, const char* format = "%d") {
			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);
				int32_t tempValue = static_cast<int32_t>(value);
				bool re = ImGui::DragInt("##value_uint", &tempValue, speed, static_cast<int32_t>(min), static_cast<int32_t>(max), format);
				value = static_cast<UIntType>(tempValue);
				ImGui::PopItemWidth();
				return re;
				});
		}
		inline bool Bool(const std::string& label, bool& value) {
			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);
				bool re = ImGui::Checkbox("##value_bool", &value);
				ImGui::PopItemWidth();
				return re;
				});
		}
		inline bool BitFlag(const std::string& header, uint32_t flag, uint32_t& flagsVar) {
			bool value = (flagsVar & flag);
			if (Bool(header, value))
				if (value)
					flagsVar |= flag;
				else
					flagsVar &= ~flag;
			return value;
		}
		namespace Slider {
			inline bool Float(const std::string& label, float& value, float min = 0, float max = 1.0f, const char* format = "%.3f") {
				return LabeledBaseControl(label, [&]() {
					ImGui::PushItemWidth(-1);
					bool re = ImGui::SliderFloat("##value_slider_float", &value, min, max, format);
					ImGui::PopItemWidth();
					return re;
					});
			}
			inline bool Int(const std::string& label, int32_t& value, int32_t min = -100, int32_t max = 100, const char* format = "%d") {
				return LabeledBaseControl(label, [&]() {
					ImGui::PushItemWidth(-1);
					bool re = ImGui::SliderInt("##value_slider_int", &value, min, max, format);
					ImGui::PopItemWidth();
					return re;
					});
			}
			inline bool UInt(const std::string& label, uint32_t& value, uint32_t min = 0, uint32_t max = 100, const char* format = "%d") {
				return LabeledBaseControl(label, [&]() {
					ImGui::PushItemWidth(-1);
					int32_t tempValue = static_cast<int32_t>(value);
					bool re = ImGui::SliderInt("##value_slider_uint", &tempValue, min, max, format);
					value = static_cast<uint32_t>(tempValue);
					ImGui::PopItemWidth();
					return re;
					});
			}
			template<class UIntType, class MinTYpe = UIntType, class MaxType = UIntType>
			inline bool GenericInt(const std::string& label, UIntType& value, MinTYpe min = 0, MaxType max = 100, const char* format = "%d") {
				return LabeledBaseControl(label, [&]() {
					ImGui::PushItemWidth(-1);
					int32_t tempValue = static_cast<int32_t>(value);
					bool re = ImGui::SliderInt("##value_slider_uint", &tempValue, static_cast<int32_t>(min), static_cast<int32_t>(max), format);
					value = static_cast<UIntType>(tempValue);
					ImGui::PopItemWidth();
					return re;
					});
			}
		}

		template<class EnumTye>
		inline bool Combo(const std::string& label, EnumTye& currentValue, const std::string& optionsString) {
			std::vector<std::string> items = Stulu::SplitString(optionsString);
			std::vector<const char*> itemPointers;
			for (const auto& item : items) {
				itemPointers.push_back(item.c_str());
			}

			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);

				int currentIndex = static_cast<int>(currentValue);
				bool re = ImGui::Combo(("##" + label).c_str(), &currentIndex, itemPointers.data(), (int)items.size());
				if (re) {
					currentValue = static_cast<EnumTye>(currentIndex);
				}

				ImGui::PopItemWidth();
				return re;
				});
		}

		template<class E>
		inline bool Combo(const std::string& label, E& currentValue) {
			static constexpr auto names = magic_enum::enum_names<E>();
			static std::array<const char*, names.size()> items = {};

			// Convert to const char* array
			for (size_t i = 0; i < names.size(); ++i) {
				items[i] = names[i].data();
			}

			return LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);

				int currentIndex = static_cast<int>(currentValue);
				bool re = ImGui::Combo("##value_combo", &currentIndex, items.data(), static_cast<int>(items.size()));
				if (re) {
					currentValue = static_cast<E>(currentIndex);
				}

				ImGui::PopItemWidth();
				return re;
				});
		}
		template<class IntType, uint32_t kMinRes = 128, uint32_t kMaxRes = 8192>
		inline bool ResolutionCombo(const std::string& label, IntType& currentRes) {
			static constexpr int kNumEntries = static_cast<int>(Stulu::Math::log2(kMaxRes / kMinRes));

			static std::array<const char*, kNumEntries> items = []() {
				std::array<const char*, kNumEntries> temp{};
				static std::array<std::string, kNumEntries> labels{};
				for (int i = 0; i < kNumEntries; ++i) {
					uint32_t res = kMinRes << i;
					labels[i] = std::to_string(res);
					temp[i] = labels[i].c_str();
				}
				return temp;
				}();

			int currentIndex = std::clamp<int>((int)std::log2(static_cast<uint32_t>(currentRes) / kMinRes), 0, kNumEntries - 1);

			bool changed = LabeledBaseControl(label, [&]() {
				ImGui::PushItemWidth(-1);
				bool re = ImGui::Combo("##resolution_combo", &currentIndex, items.data(), kNumEntries);
				if (re) {
					uint32_t newRes = kMinRes << currentIndex;
					currentRes = static_cast<IntType>(newRes);
				}
				ImGui::PopItemWidth();
				return re;
				});

			return changed;
		}
	}
}