#pragma once

namespace UE4 {
	// 0x0008
	struct FVector2D
	{
		float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

		inline FVector2D()
			: X(0), Y(0)
		{ }
		inline FVector2D(glm::vec2 vec)
			: X(vec.x), Y(vec.y)
		{ }
		inline FVector2D(float x, float y)
			: X(x),
			Y(y)
		{ }
		operator glm::vec2() const { return glm::vec2(X, Y); }
		operator glm::vec3() const { return glm::vec3(X, Y, 0); }
		operator glm::vec4() const { return glm::vec4(X, Y, 0, 0); }
		bool operator==(const glm::vec2& vec) { return glm::vec2(X, Y) == vec; }
		bool operator!=(const glm::vec2& vec) { return glm::vec2(X, Y) != vec; }
		void operator=(const glm::vec2& vec) {
			this->X = vec.x;
			this->Y = vec.y;
		}
	};
}