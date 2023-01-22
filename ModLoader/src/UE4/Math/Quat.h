#pragma once
#include "Vector.h"
#include "Rotator.h"

namespace UE4 {
	// ScriptStruct CoreUObject.Quat
	// 0x0010
	struct alignas(16) FQuat
	{
		float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

		inline FQuat()
			: X(0), Y(0), Z(0), W(0)
		{ }
		inline FQuat(glm::quat q)
			: X(q.x), Y(q.y), Z(q.z), W(q.w)
		{ }
		inline FQuat(float X, float Y, float Z, float W)
			: X(X), Y(Y), Z(Z), W(W)
		{ }
		FRotator FQuat::Rotator() const
		{
			const float SingularityTest = Z * X - W * Y;
			const float YawY = 2.f * (W * Z + X * Y);
			const float YawX = (1.f - 2.f * (glm::sqrt(Y) + glm::sqrt(Z)));

			// reference 
			// http://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
			// http://www.euclideanspace.com/maths/geometry/rotations/conversions/quaternionToEuler/

			// this value was found from experience, the above websites recommend different values
			// but that isn't the case for us, so I went through different testing, and finally found the case 
			// where both of world lives happily. 
			const float SINGULARITY_THRESHOLD = 0.4999995f;
			const float RAD_TO_DEG = (180.f) / PI;
			FRotator RotatorFromQuat;

			if (SingularityTest < -SINGULARITY_THRESHOLD)
			{
				RotatorFromQuat.Pitch = -90.f;
				RotatorFromQuat.Yaw = FMath::Atan2(YawY, YawX) * RAD_TO_DEG;
				RotatorFromQuat.Roll = FRotator::NormalizeAxis(-RotatorFromQuat.Yaw - (2.f * FMath::Atan2(X, W) * RAD_TO_DEG));
			}
			else if (SingularityTest > SINGULARITY_THRESHOLD)
			{
				RotatorFromQuat.Pitch = 90.f;
				RotatorFromQuat.Yaw = FMath::Atan2(YawY, YawX) * RAD_TO_DEG;
				RotatorFromQuat.Roll = FRotator::NormalizeAxis(RotatorFromQuat.Yaw - (2.f * FMath::Atan2(X, W) * RAD_TO_DEG));
			}
			else
			{
				RotatorFromQuat.Pitch = FMath::FastAsin(2.f * (SingularityTest)) * RAD_TO_DEG;
				RotatorFromQuat.Yaw = FMath::Atan2(YawY, YawX) * RAD_TO_DEG;
				RotatorFromQuat.Roll = FMath::Atan2(-2.f * (W * X + Y * Z), (1.f - 2.f * (glm::sqrt(X) + glm::sqrt(Y)))) * RAD_TO_DEG;
			}

			return RotatorFromQuat;
		}

		operator glm::quat() const { return glm::quat(W, X, Y, Z); }
		operator glm::vec4() const { return glm::vec4(X, Y, Z, W); }
		bool operator==(const glm::quat& quat) { return glm::quat(W, X, Y, Z) == quat; }
		bool operator!=(const glm::quat& quat) { return glm::quat(W, X, Y, Z) != quat; }
		void operator=(const glm::quat& quat) {
			this->W = quat.w;
			this->X = quat.x;
			this->Y = quat.y;
			this->Z = quat.z;
		}
	};
}