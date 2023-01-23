#pragma once
#include "Vector.h"
#include "Quat.h"

namespace UE4 {
	// 0x0030
	struct alignas(16) FTransform
	{
		struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
		struct FVector                                     Translation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
		struct FVector                                     Scale3D;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

		inline FTransform()
			: Rotation(FQuat::FQuat()), Translation(FVector::FVector()), Scale3D(FVector::FVector(1, 1, 1)), UnknownData00(""), UnknownData01("")
		{ }
		inline FTransform(FVector Translation, FQuat quat = FQuat(), FVector Scale3D = FVector(1,1,1))
			: Rotation(quat), Translation(Translation), Scale3D(Scale3D), UnknownData00(""), UnknownData01("")
		{ }

		glm::mat4 BuildMatrix() const {
			return glm::translate(glm::mat4(1.0f), (glm::vec3)Translation) * glm::toMat4((glm::quat)Rotation) * glm::scale(glm::mat4(1.0f), (glm::vec3)Scale3D);
		}
		operator glm::mat4() const { return BuildMatrix(); }
		bool operator==(const glm::mat4& quat) { return BuildMatrix() == quat; }
		bool operator!=(const glm::mat4& quat) { return BuildMatrix() != quat; }
	};
}