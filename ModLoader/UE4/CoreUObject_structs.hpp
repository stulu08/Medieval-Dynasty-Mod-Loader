#pragma once
#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "UnrealMathUtility.h"

namespace UE4
{
	//---------------------------------------------------------------------------
	//Enums
	//---------------------------------------------------------------------------
	//
	// Enum EFunctionFlags
	enum class EFunctionFlags : uint32
	{
		// Function flags.
		FUNC_None = 0x00000000,

		FUNC_Final = 0x00000001,	// Function is final (prebindable, non-overridable function).
		FUNC_RequiredAPI = 0x00000002,	// Indicates this function is DLL exported/imported.
		FUNC_BlueprintAuthorityOnly = 0x00000004,   // Function will only run if the object has network authority
		FUNC_BlueprintCosmetic = 0x00000008,   // Function is cosmetic in nature and should not be invoked on dedicated servers
		// FUNC_				= 0x00000010,   // unused.
		// FUNC_				= 0x00000020,   // unused.
		FUNC_Net = 0x00000040,   // Function is network-replicated.
		FUNC_NetReliable = 0x00000080,   // Function should be sent reliably on the network.
		FUNC_NetRequest = 0x00000100,	// Function is sent to a net service
		FUNC_Exec = 0x00000200,	// Executable from command line.
		FUNC_Native = 0x00000400,	// Native function.
		FUNC_Event = 0x00000800,   // Event function.
		FUNC_NetResponse = 0x00001000,   // Function response from a net service
		FUNC_Static = 0x00002000,   // Static function.
		FUNC_NetMulticast = 0x00004000,	// Function is networked multicast Server -> All Clients
		FUNC_UbergraphFunction = 0x00008000,   // Function is used as the merge 'ubergraph' for a blueprint, only assigned when using the persistent 'ubergraph' frame
		FUNC_MulticastDelegate = 0x00010000,	// Function is a multi-cast delegate signature (also requires FUNC_Delegate to be set!)
		FUNC_Public = 0x00020000,	// Function is accessible in all classes (if overridden, parameters must remain unchanged).
		FUNC_Private = 0x00040000,	// Function is accessible only in the class it is defined in (cannot be overridden, but function name may be reused in subclasses.  IOW: if overridden, parameters don't need to match, and Super.Func() cannot be accessed since it's private.)
		FUNC_Protected = 0x00080000,	// Function is accessible only in the class it is defined in and subclasses (if overridden, parameters much remain unchanged).
		FUNC_Delegate = 0x00100000,	// Function is delegate signature (either single-cast or multi-cast, depending on whether FUNC_MulticastDelegate is set.)
		FUNC_NetServer = 0x00200000,	// Function is executed on servers (set by replication code if passes check)
		FUNC_HasOutParms = 0x00400000,	// function has out (pass by reference) parameters
		FUNC_HasDefaults = 0x00800000,	// function has structs that contain defaults
		FUNC_NetClient = 0x01000000,	// function is executed on clients
		FUNC_DLLImport = 0x02000000,	// function is imported from a DLL
		FUNC_BlueprintCallable = 0x04000000,	// function can be called from blueprint code
		FUNC_BlueprintEvent = 0x08000000,	// function can be overridden/implemented from a blueprint
		FUNC_BlueprintPure = 0x10000000,	// function can be called from blueprint code, and is also pure (produces no side effects). If you set this, you should set FUNC_BlueprintCallable as well.
		FUNC_EditorOnly = 0x20000000,	// function can only be called from an editor scrippt.
		FUNC_Const = 0x40000000,	// function can be called from blueprint code, and only reads state (never writes state)
		FUNC_NetValidate = 0x80000000,	// function must supply a _Validate implementation

		FUNC_AllFlags = 0xFFFFFFFF,
	};
	// Enum CoreUObject.ETeleportType
	enum class ETeleportType
	{
		None = 0,
		TeleportPhysics = 1,
		ResetPhysics = 2,
	};

	// Enum CoreUObject.EInterpCurveMode
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX = 6
	};


	// Enum CoreUObject.ERangeBoundTypes
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		ERangeBoundTypes_MAX = 3
	};


	// Enum CoreUObject.ELocalizedTextSourceCategory
	enum class ELocalizedTextSourceCategory : uint8_t
	{
		Game = 0,
		Engine = 1,
		Editor = 2,
		ELocalizedTextSourceCategory_MAX = 3
	};


	// Enum CoreUObject.EAutomationEventType
	enum class EAutomationEventType : uint8_t
	{
		Info = 0,
		Warning = 1,
		Error = 2,
		EAutomationEventType_MAX = 3
	};


	// Enum CoreUObject.ELifetimeCondition
	enum class ELifetimeCondition : uint8_t
	{
		COND_None = 0,
		COND_InitialOnly = 1,
		COND_OwnerOnly = 2,
		COND_SkipOwner = 3,
		COND_SimulatedOnly = 4,
		COND_AutonomousOnly = 5,
		COND_SimulatedOrPhysics = 6,
		COND_InitialOrOwner = 7,
		COND_Custom = 8,
		COND_ReplayOrOwner = 9,
		COND_ReplayOnly = 10,
		COND_SimulatedOnlyNoReplay = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay = 13,
		COND_Max = 14
	};


	// Enum CoreUObject.EUnit
	enum class EUnit : uint8_t
	{
		Micrometers = 0,
		Millimeters = 1,
		Centimeters = 2,
		Meters = 3,
		Kilometers = 4,
		Inches = 5,
		Feet = 6,
		Yards = 7,
		Miles = 8,
		Lightyears = 9,
		Degrees = 10,
		Radians = 11,
		MetersPerSecond = 12,
		KilometersPerHour = 13,
		MilesPerHour = 14,
		Celsius = 15,
		Farenheit = 16,
		Kelvin = 17,
		Micrograms = 18,
		Milligrams = 19,
		Grams = 20,
		Kilograms = 21,
		MetricTons = 22,
		Ounces = 23,
		Pounds = 24,
		Stones = 25,
		Newtons = 26,
		PoundsForce = 27,
		KilogramsForce = 28,
		Hertz = 29,
		Kilohertz = 30,
		Megahertz = 31,
		Gigahertz = 32,
		RevolutionsPerMinute = 33,
		Bytes = 34,
		Kilobytes = 35,
		Megabytes = 36,
		Gigabytes = 37,
		Terabytes = 38,
		Lumens = 39,
		Milliseconds = 40,
		Seconds = 41,
		Minutes = 42,
		Hours = 43,
		Days = 44,
		Months = 45,
		Years = 46,
		Multiplier = 47,
		Percentage = 48,
		Unspecified = 49,
		EUnit_MAX = 50
	};


	// Enum CoreUObject.EMouseCursor
	enum class EMouseCursor : uint8_t
	{
		None = 0,
		Default = 1,
		TextEditBeam = 2,
		ResizeLeftRight = 3,
		ResizeUpDown = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross = 7,
		Crosshairs = 8,
		Hand = 9,
		GrabHand = 10,
		GrabHandClosed = 11,
		SlashedCircle = 12,
		EyeDropper = 13,
		EMouseCursor_MAX = 14
	};


	// Enum CoreUObject.EPixelFormat
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = 10,
		PF_DepthStencil = 11,
		PF_ShadowDepth = 12,
		PF_R32_FLOAT = 13,
		PF_G16R16 = 14,
		PF_G16R16F = 15,
		PF_G16R16F_FILTER = 16,
		PF_G32R32F = 17,
		PF_A2B10G10R10 = 18,
		PF_A16B16G16R16 = 19,
		PF_D24 = 20,
		PF_R16F = 21,
		PF_R16F_FILTER = 22,
		PF_BC5 = 23,
		PF_V8U8 = 24,
		PF_A1 = 25,
		PF_FloatR11G11B10 = 26,
		PF_A8 = 27,
		PF_R32_UINT = 28,
		PF_R32_SINT = 29,
		PF_PVRTC2 = 30,
		PF_PVRTC4 = 31,
		PF_R16_UINT = 32,
		PF_R16_SINT = 33,
		PF_R16G16B16A16_UINT = 34,
		PF_R16G16B16A16_SINT = 35,
		PF_R5G6B5_UNORM = 36,
		PF_R8G8B8A8 = 37,
		PF_A8R8G8B8 = 38,
		PF_BC4 = 39,
		PF_R8G8 = 40,
		PF_ATC_RGB = 41,
		PF_ATC_RGBA_E = 42,
		PF_ATC_RGBA_I = 43,
		PF_X24_G8 = 44,
		PF_ETC1 = 45,
		PF_ETC2_RGB = 46,
		PF_ETC2_RGBA = 47,
		PF_R32G32B32A32_UINT = 48,
		PF_R16G16_UINT = 49,
		PF_ASTC_4x4 = 50,
		PF_ASTC_6x6 = 51,
		PF_ASTC_8x8 = 52,
		PF_ASTC_10x10 = 53,
		PF_ASTC_12x12 = 54,
		PF_BC6H = 55,
		PF_BC7 = 56,
		PF_R8_UINT = 57,
		PF_L8 = 58,
		PF_XGXR8 = 59,
		PF_R8G8B8A8_UINT = 60,
		PF_R8G8B8A8_SNORM = 61,
		PF_R16G16B16A16_UNORM = 62,
		PF_R16G16B16A16_SNORM = 63,
		//	PF_MAX                         = 64
	};


	// Enum CoreUObject.EAxis
	enum class EAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		EAxis_MAX = 4
	};


	// Enum CoreUObject.ELogTimes
	enum class ELogTimes : uint8_t
	{
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		Local = 3,
		ELogTimes_MAX = 4
	};


	// Enum CoreUObject.ESearchDir
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd = 1,
		ESearchDir_MAX = 2
	};


	// Enum CoreUObject.ESearchCase
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCase_MAX = 2
	};

	// Enum Engine.ESpawnActorCollisionHandlingMethod
	enum class ESpawnActorCollisionHandlingMethod : uint8_t
	{
		Undefined = 0,
		AlwaysSpawn = 1,
		AdjustIfPossibleButAlwaysSpawn = 2,
		AdjustIfPossibleButDontSpawnIfColliding = 3,
		DontSpawnIfColliding = 4,
		ESpawnActorCollisionHandlingMethod_MAX = 5
	};


	//---------------------------------------------------------------------------
	//Script Structs
	//---------------------------------------------------------------------------

	// ScriptStruct CoreUObject.JoinabilitySettings
	// 0x0018
	struct FJoinabilitySettings
	{
		class FName                                       SessionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
		bool                                               bPublicSearchable;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
		bool                                               bAllowInvites;                                            // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
		bool                                               bJoinViaPresence;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
		bool                                               bJoinViaPresenceFriendsOnly;                              // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
		int                                                MaxPlayers;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
		int                                                MaxPartySize;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.UniqueNetIdWrapper
	// 0x0001
	struct FUniqueNetIdWrapper
	{
		unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.Guid
	// 0x0010
	struct FGuid
	{
		int                                                A;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                B;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                C;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                D;                                                        // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Vector
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

	// ScriptStruct CoreUObject.Vector4
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

	// ScriptStruct CoreUObject.Vector2D
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

	// ScriptStruct CoreUObject.TwoVectors
	// 0x0018
	struct FTwoVectors
	{
		struct FVector                                     v1;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     v2;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Plane
	// 0x0004 (0x0010 - 0x000C)
	struct alignas(16) FPlane : public FVector
	{
		float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.Rotator
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
			FMath::SinCos(&SP, &CP, FMath::DegreesToRadians(PitchNoWinding));
			FMath::SinCos(&SY, &CY, FMath::DegreesToRadians(YawNoWinding));
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
		static inline float FRotator::ClampAxis(float Angle)
		{
			// returns Angle in the range (-360,360)
			Angle = FMath::Fmod(Angle, 360.f);

			if (Angle < 0.f)
			{
				// shift to [0,360) range
				Angle += 360.f;
			}

			return Angle;
		}
		static inline float FRotator::NormalizeAxis(float Angle)
		{
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
			const float YawX = (1.f - 2.f * (FMath::Square(Y) + FMath::Square(Z)));

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
				RotatorFromQuat.Roll = FMath::Atan2(-2.f * (W * X + Y * Z), (1.f - 2.f * (FMath::Square(X) + FMath::Square(Y)))) * RAD_TO_DEG;
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

	// ScriptStruct CoreUObject.PackedNormal
	// 0x0004
	struct FPackedNormal
	{
		unsigned char                                      X;                                                        // 0x0000(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      Y;                                                        // 0x0001(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      Z;                                                        // 0x0002(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      W;                                                        // 0x0003(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PackedRGB10A2N
	// 0x0004
	struct FPackedRGB10A2N
	{
		int                                                Packed;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PackedRGBA16N
	// 0x0008
	struct FPackedRGBA16N
	{
		int                                                XY;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                ZW;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.IntPoint
	// 0x0008
	struct FIntPoint
	{
		int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.IntVector
	// 0x000C
	struct FIntVector
	{
		int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Color
	// 0x0004
	struct FColor
	{
		unsigned char                                      B;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      G;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      R;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      A;                                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.LinearColor
	// 0x0010
	struct FLinearColor
	{
		float                                              R;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              G;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              B;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              A;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

		inline FLinearColor()
			: R(0), G(0), B(0), A(0)
		{ }

		inline FLinearColor(float r, float g, float b, float a)
			: R(r),
			G(g),
			B(b),
			A(a)
		{ }

	};

	// ScriptStruct CoreUObject.Box
	// 0x001C
	struct FBox
	{
		struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.Box2D
	// 0x0014
	struct FBox2D
	{
		struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		unsigned char                                      bIsValid;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.BoxSphereBounds
	// 0x001C
	struct FBoxSphereBounds
	{
		struct FVector                                     origin;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.OrientedBox
	// 0x003C
	struct FOrientedBox
	{
		struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              ExtentX;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              ExtentY;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		float                                              ExtentZ;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Matrix
	// 0x0040
	struct FMatrix
	{
		struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointFloat
	// 0x0014
	struct FInterpCurvePointFloat
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		float                                              OutVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		float                                              ArriveTangent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		float                                              LeaveTangent;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveFloat
	// 0x0018
	struct FInterpCurveFloat
	{
		TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointVector2D
	// 0x0020
	struct FInterpCurvePointVector2D
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveVector2D
	// 0x0018
	struct FInterpCurveVector2D
	{
		TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointVector
	// 0x002C
	struct FInterpCurvePointVector
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveVector
	// 0x0018
	struct FInterpCurveVector
	{
		TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointQuat
	// 0x0050
	struct FInterpCurvePointQuat
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
		struct FQuat                                       OutVal;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
		struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
		struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveQuat
	// 0x0018
	struct FInterpCurveQuat
	{
		TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	// 0x0050
	struct FInterpCurvePointTwoVectors
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveTwoVectors
	// 0x0018
	struct FInterpCurveTwoVectors
	{
		TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.InterpCurvePointLinearColor
	// 0x0038
	struct FInterpCurvePointLinearColor
	{
		float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.InterpCurveLinearColor
	// 0x0018
	struct FInterpCurveLinearColor
	{
		TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
		float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Transform
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
	};

	// ScriptStruct CoreUObject.RandomStream
	// 0x0008
	struct FRandomStream
	{
		int                                                InitialSeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.DateTime
	// 0x0008
	struct FDateTime
	{
		unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.FrameNumber
	// 0x0004
	struct FFrameNumber
	{
		int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FrameRate
	// 0x0008
	struct FFrameRate
	{
		int                                                Numerator;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Denominator;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FrameTime
	// 0x0008
	struct FFrameTime
	{
		struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (BlueprintVisible)
		float                                              SubFrame;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.QualifiedFrameTime
	// 0x0010
	struct FQualifiedFrameTime
	{
		struct FFrameTime                                  Time;                                                     // 0x0000(0x0008) (BlueprintVisible)
		struct FFrameRate                                  Rate;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Timecode
	// 0x0014
	struct FTimecode
	{
		int                                                Hours;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Minutes;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Seconds;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Frames;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		bool                                               bDropFrameFormat;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.Timespan
	// 0x0008
	struct FTimespan
	{
		unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.SoftObjectPath
	// 0x0018
	/*
	struct FSoftObjectPath
	{
		class FName                                       AssetPathName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
		class FString                                      SubPathString;                                            // 0x0008(0x0010) (ZeroConstructor)
	};
	*/
	// ScriptStruct CoreUObject.SoftClassPath
	// 0x0000 (0x0018 - 0x0018)
	struct FSoftClassPath //: public FSoftObjectPath
	{

	};

	// ScriptStruct CoreUObject.PrimaryAssetType
	// 0x0008
	struct FPrimaryAssetType
	{
		class FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PrimaryAssetId
	// 0x0010
	struct FPrimaryAssetId
	{
		struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
		class FName                                       PrimaryAssetName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FallbackStruct
	// 0x0001
	struct FFallbackStruct
	{
		unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	};

	// ScriptStruct CoreUObject.FloatRangeBound
	// 0x0008
	struct FFloatRangeBound
	{
		TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
		float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FloatRange
	// 0x0010
	struct FFloatRange
	{
		struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Int32RangeBound
	// 0x0008
	struct FInt32RangeBound
	{
		TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
		int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Int32Range
	// 0x0010
	struct FInt32Range
	{
		struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.FloatInterval
	// 0x0008
	struct FFloatInterval
	{
		float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
		float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.Int32Interval
	// 0x0008
	struct FInt32Interval
	{
		int                                                Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
		int                                                Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.PolyglotTextData
	// 0x00B0
	struct FPolyglotTextData
	{
		ELocalizedTextSourceCategory                       Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
		class FString                                      NativeCulture;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		class FString                                      Namespace;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		class FString                                      Key;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		class FString                                      NativeString;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		TMap<class FString, class FString>                 LocalizedStrings;                                         // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
		struct FText                                       CachedText;                                               // 0x0098(0x0028) (Transient)
	};

	// ScriptStruct CoreUObject.AutomationEvent
	// 0x0038
	struct FAutomationEvent
	{
		EAutomationEventType                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
		class FString                                      Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
		class FString                                      Context;                                                  // 0x0018(0x0010) (ZeroConstructor)
		struct FGuid                                       Artifact;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	};

	// ScriptStruct CoreUObject.AutomationExecutionEntry
	// 0x0058
	struct FAutomationExecutionEntry
	{
		struct FAutomationEvent                            Event;                                                    // 0x0000(0x0038) (ZeroConstructor)
		class FString                                      Filename;                                                 // 0x0038(0x0010) (ZeroConstructor)
		int                                                LineNumber;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
		struct FDateTime                                   Timestamp;                                                // 0x0050(0x0008) (ZeroConstructor)
	};
	// ScriptStruct CoreUObject.FWeakObjectPtr
	// 0x0008
	struct FWeakObjectPtr {
		int32_t		ObjectIndex;																					 // 0x0000(0x0004)
		int32_t		ObjectSerialNumber;																				 // 0x0004(0x0004)
	};
	// ScriptStruct Core.TWeakObjectPtr 
	// 0x0008
	template<class T>
	struct TWeakObjectPtr : private FWeakObjectPtr {
		
	};
	// ScriptStruct Engine.FHitResult | UE: 4.27.2
	// FHitResult size: 136
	struct FHitResult {																								 
		int32_t FaceIndex;																							 //offset: 0   | size: 4
		float Time;																									 //offset: 4   | size: 4
		float Distance;																								 //offset: 8   | size: 4
		FVector Location;																							 //offset: 12  | size: 12
		FVector ImpactPoint;																						 //offset: 24  | size: 12
		FVector Normal;																								 //offset: 36  | size: 12
		FVector ImpactNormal;																						 //offset: 48  | size: 12
		FVector TraceStart;																							 //offset: 60  | size: 12
		FVector TraceEnd;																							 //offset: 72  | size: 12
		float PenetrationDepth;																						 //offset: 84  | size: 4
		int32_t Item;																								 //offset: 88  | size: 4
		uint8_t ElementIndex;																						 //offset: 92  | size: 1
		uint8_t bBlockingHit : 1;																					 //offset:     | size:
		uint8_t bStartPenetrating : 1;																				 //offset:     | size:
		TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;														 //offset: 96  | size: 8
		TWeakObjectPtr<class AActor> Actor;																			 //offset: 104 | size: 8
		TWeakObjectPtr<class UPrimitiveComponent> Component;														 //offset: 112 | size: 8
		FName BoneName;																								 //offset: 120 | size: 8
		FName MyBoneName;																							 //offset: 128 | size: 8
	};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
