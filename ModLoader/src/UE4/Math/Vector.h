#pragma once
#include "Utilities/Math.h"

#include "Vector2.h"
#include "Vector4.h"

namespace UE4 {
	// 0x000C
	struct FVector
	{

		float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

		inline FVector()
			: X(0), Y(0), Z(0)
		{ }
		inline FVector(glm::vec3 vec)
			: X(vec.x), Y(vec.y), Z(vec.z)
		{ }
		inline FVector(float x, float y, float z)
			: X(x), Y(y), Z(z)
		{ }

		operator glm::vec3() const { return glm::vec3(X, Y, Z); }
		operator glm::vec4() const { return glm::vec4(X, Y, Z, .0f); }
		bool operator==(const glm::vec3& vec) { return glm::vec3(X, Y, Z) == vec; }
		bool operator!=(const glm::vec3& vec) { return glm::vec3(X, Y, Z) != vec; }
		void operator=(const glm::vec3& vec) {
			this->X = vec.x;
			this->Y = vec.y;
			this->Z = vec.z;
		}
	};

	// 0x0018
	struct FTwoVectors
	{
		struct FVector                                     v1;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     v2;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
	// 0x000C
	struct FIntVector
	{
		int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
}