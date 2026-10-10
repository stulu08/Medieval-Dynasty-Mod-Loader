#pragma once
#include "Vector.h"
#include "UnrealMathUtility.h"

namespace UE4 {
	// 0x000C
	struct FRotator
	{
		float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Yaw;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Roll;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

		inline FRotator()
			: Pitch(0), Yaw(0), Roll(0)
		{ }
		inline FRotator(const glm::vec3& vec) {
			*this = MakeFromEuler(vec);
		}

		inline FRotator(float pitch, float yaw, float roll)
			: Pitch(pitch), Yaw(yaw), Roll(roll)
		{ }

		FVector Vector() const {
			// Remove winding and clamp to [-360, 360]
			
			const float PitchNoWinding = FMath::Fmod(Pitch, 360.0f);
			const float YawNoWinding = FMath::Fmod(Yaw, 360.0f);
			float CP, SP, CY, SY;
			FMath::SinCos(&SP, &CP, glm::radians(PitchNoWinding));
			FMath::SinCos(&SY, &CY, glm::radians(YawNoWinding));
			FVector V = FVector(CP * CY, CP * SY, SP);
			return V;
		}
		glm::quat Quaternion() const {
			const float DEG_TO_RAD = PI / (180.f);
			const float RADS_DIVIDED_BY_2 = DEG_TO_RAD / 2.f;
			float SP, SY, SR;
			float CP, CY, CR;

			const float PitchNoWinding = FMath::Fmod(Pitch, 360.0f);
			const float YawNoWinding = FMath::Fmod(Yaw, 360.0f);
			const float RollNoWinding = FMath::Fmod(Roll, 360.0f);

			FMath::SinCos(&SP, &CP, PitchNoWinding * RADS_DIVIDED_BY_2);
			FMath::SinCos(&SY, &CY, YawNoWinding * RADS_DIVIDED_BY_2);
			FMath::SinCos(&SR, &CR, RollNoWinding * RADS_DIVIDED_BY_2);

			glm::quat RotationQuat;
			RotationQuat.x = CR * SP * SY - SR * CP * CY;
			RotationQuat.y = -CR * SP * CY - SR * CP * SY;
			RotationQuat.z = CR * CP * SY - SR * SP * CY;
			RotationQuat.w = CR * CP * CY + SR * SP * SY;
			return RotationQuat;
		}
		FVector Euler() const {
			return FVector(Roll, Pitch, Yaw);
		}

		static inline FRotator MakeFromEuler(const FVector& Euler) {
			return FRotator(Euler.Y, Euler.Z, Euler.X);
		}
		static inline float FRotator::ClampAxis(float Angle) {
			// returns Angle in the range (-360,360)
			Angle = FMath::Fmod(Angle, 360.f);

			if (Angle < 0.f)
			{
				// shift to [0,360) range
				Angle += 360.f;
			}

			return Angle;
		}
		static inline float FRotator::NormalizeAxis(float Angle) {
			// returns Angle in the range [0,360)
			Angle = ClampAxis(Angle);

			if (Angle > 180.f)
			{
				// shift to (-180,180]
				Angle -= 360.f;
			}

			return Angle;
		}

		operator glm::quat() const { return (glm::quat)Quaternion(); }
		operator glm::vec3() const { return (glm::vec3)Euler(); }
		bool operator==(const glm::vec3& vec) { return (glm::vec3)Euler() == vec; }
		bool operator!=(const glm::vec3& vec) { return (glm::vec3)Euler() != vec; }
		void operator=(const glm::vec3& vec) {
			auto rot = MakeFromEuler(vec);
			this->Pitch = rot.Pitch;
			this->Yaw = rot.Yaw;
			this->Roll = rot.Roll;
		}
	};
}