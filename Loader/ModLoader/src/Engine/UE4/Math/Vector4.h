#pragma once

namespace UE4 {
	// 0x0010
	struct alignas(16) FVector4
	{
		float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		inline FVector4()
			: X(0), Y(0), Z(0), W(0)
		{ }
		inline FVector4(glm::vec4 vec)
			: X(vec.x), Y(vec.y), Z(vec.z), W(vec.w)
		{ }
		inline FVector4(float x, float y, float z, float w)
			: X(x), Y(y), Z(z), W(w)
		{ }

		operator glm::vec4() const { return glm::vec4(X, Y, Z, W); }
		bool operator==(const glm::vec4& vec) { return glm::vec4(X, Y, Z, W) == vec; }
		bool operator!=(const glm::vec4& vec) { return glm::vec4(X, Y, Z, W) != vec; }
		void operator=(const glm::vec4& vec) {
			this->W = vec.w;
			this->X = vec.x;
			this->Y = vec.y;
			this->Z = vec.z;
		}
	};
}