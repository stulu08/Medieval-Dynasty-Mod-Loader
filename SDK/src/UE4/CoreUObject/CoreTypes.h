#pragma once
#include "Math/Color.h"
#include "Math/Vector.h"
#include "Math/Box.h"
#include "Math/Quat.h"
#include "Math/Transform.h"
#include "Math/Plane.h"
#include "NamePool.h"
#include "ObjectsArray.h"
#include "Object.h"
#include "Containers/Templates.h"
#include "Containers/Pointers.h"

namespace UE4 {
	class UObject;
	class UPackage;
	class UClass;
	enum class EEnumFlags {
		None,
		Flags = 0x00000001 // Whether the UEnum represents a set of flags
	};
	enum class EFunctionFlags : uint32_t
	{
		// Function flags.
		None = 0x00000000,

		Final = 0x00000001,	// Function is final (prebindable, non-overridable function).
		RequiredAPI = 0x00000002,	// Indicates this function is DLL exported/imported.
		BlueprintAuthorityOnly = 0x00000004,   // Function will only run if the object has network authority
		BlueprintCosmetic = 0x00000008,   // Function is cosmetic in nature and should not be invoked on dedicated servers
		// FUNC_				= 0x00000010,   // unused.
		// FUNC_				= 0x00000020,   // unused.
		Net = 0x00000040,   // Function is network-replicated.
		NetReliable = 0x00000080,   // Function should be sent reliably on the network.
		NetRequest = 0x00000100,	// Function is sent to a net service
		Exec = 0x00000200,	// Executable from command line.
		Native = 0x00000400,	// Native function.
		Event = 0x00000800,   // Event function.
		NetResponse = 0x00001000,   // Function response from a net service
		Static = 0x00002000,   // Static function.
		NetMulticast = 0x00004000,	// Function is networked multicast Server -> All Clients
		UbergraphFunction = 0x00008000,   // Function is used as the merge 'ubergraph' for a blueprint, only assigned when using the persistent 'ubergraph' frame
		MulticastDelegate = 0x00010000,	// Function is a multi-cast delegate signature (also requires Delegate to be set!)
		Public = 0x00020000,	// Function is accessible in all classes (if overridden, parameters must remain unchanged).
		Private = 0x00040000,	// Function is accessible only in the class it is defined in (cannot be overridden, but function name may be reused in subclasses.  IOW: if overridden, parameters don't need to match, and Super.Func() cannot be accessed since it's private.)
		Protected = 0x00080000,	// Function is accessible only in the class it is defined in and subclasses (if overridden, parameters much remain unchanged).
		Delegate = 0x00100000,	// Function is delegate signature (either single-cast or multi-cast, depending on whether MulticastDelegate is set.)
		NetServer = 0x00200000,	// Function is executed on servers (set by replication code if passes check)
		HasOutParms = 0x00400000,	// function has out (pass by reference) parameters
		HasDefaults = 0x00800000,	// function has structs that contain defaults
		NetClient = 0x01000000,	// function is executed on clients
		DLLImport = 0x02000000,	// function is imported from a DLL
		BlueprintCallable = 0x04000000,	// function can be called from blueprint code
		BlueprintEvent = 0x08000000,	// function can be overridden/implemented from a blueprint
		BlueprintPure = 0x10000000,	// function can be called from blueprint code, and is also pure (produces no side effects). If you set this, you should set BlueprintCallable as well.
		EditorOnly = 0x20000000,	// function can only be called from an editor scrippt.
		Const = 0x40000000,	// function can be called from blueprint code, and only reads state (never writes state)
		NetValidate = 0x80000000,	// function must supply a _Validate implementation
	};
	enum class EPropertyFlags : uint64_t
	{
		Edit = 0x0000000000000001,
		ConstParm = 0x0000000000000002,
		BlueprintVisible = 0x0000000000000004,
		ExportObject = 0x0000000000000008,
		BlueprintReadOnly = 0x0000000000000010,
		Net = 0x0000000000000020,
		EditFixedSize = 0x0000000000000040,
		Parm = 0x0000000000000080,
		OutParm = 0x0000000000000100,
		ZeroConstructor = 0x0000000000000200,
		ReturnParm = 0x0000000000000400,
		DisableEditOnTemplate = 0x0000000000000800,
		Transient = 0x0000000000002000,
		Config = 0x0000000000004000,
		DisableEditOnInstance = 0x0000000000010000,
		EditConst = 0x0000000000020000,
		GlobalConfig = 0x0000000000040000,
		InstancedReference = 0x0000000000080000,
		DuplicateTransient = 0x0000000000200000,
		SubobjectReference = 0x0000000000400000,
		SaveGame = 0x0000000001000000,
		NoClear = 0x0000000002000000,
		ReferenceParm = 0x0000000008000000,
		BlueprintAssignable = 0x0000000010000000,
		Deprecated = 0x0000000020000000,
		IsPlainOldData = 0x0000000040000000,
		RepSkip = 0x0000000080000000,
		RepNotify = 0x0000000100000000,
		Interp = 0x0000000200000000,
		NonTransactional = 0x0000000400000000,
		EditorOnly = 0x0000000800000000,
		NoDestructor = 0x0000001000000000,
		AutoWeak = 0x0000004000000000,
		ContainsInstancedReference = 0x0000008000000000,
		AssetRegistrySearchable = 0x0000010000000000,
		SimpleDisplay = 0x0000020000000000,
		AdvancedDisplay = 0x0000040000000000,
		Protected = 0x0000080000000000,
		BlueprintCallable = 0x0000100000000000,
		BlueprintAuthorityOnly = 0x0000200000000000,
		TextExportTransient = 0x0000400000000000,
		NonPIEDuplicateTransient = 0x0000800000000000,
		ExposeOnSpawn = 0x0001000000000000,
		PersistentInstance = 0x0002000000000000,
		UObjectWrapper = 0x0004000000000000,
		HasGetValueTypeHash = 0x0008000000000000,
		NativeAccessSpecifierPublic = 0x0010000000000000,
		NativeAccessSpecifierProtected = 0x0020000000000000,
		NativeAccessSpecifierPrivate = 0x0040000000000000
	};
	enum class EObjectFlags
	{
		// Do not add new flags unless they truly belong here. There are alternatives.
		// if you change any the bit of any of the Load flags, then you will need legacy serialization
		NoFlags = 0x00000000,	///< No flags, used to avoid a cast

		// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
		// The garbage collector also tends to look at these.
		Public = 0x00000001,	///< Object is visible outside its package.
		Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
		MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
		Transactional = 0x00000008,	///< Object is transactional.
		ClassDefaultObject = 0x00000010,	///< This object is its class's default object
		ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
		Transient = 0x00000040,	///< Don't save object.

		// This group of flags is primarily concerned with garbage collection.
		MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
		TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

		// The group of flags tracks the stages of the lifetime of a uobject
		NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
		NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
		KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
		NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
		NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
		NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
		BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
		FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

		// Misc. Flags
		BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport()), as well as UClass objects in the midst of being created
		DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
		WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
		TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
		LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with WasLoaded.
		InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
		DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
		StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
		NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
		Dynamic = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
		WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
		HasExternalPackage = 0x10000000,	///< This object has an external package assigned and should look it up when getting the outermost package
	};

	inline bool operator&(EFunctionFlags lhs, EFunctionFlags rhs) {
		return (static_cast<std::underlying_type_t<EFunctionFlags>>(lhs) & static_cast<std::underlying_type_t<EFunctionFlags>>(rhs)) == static_cast<std::underlying_type_t<EFunctionFlags>>(rhs);
	}
	inline bool operator&(EPropertyFlags lhs, EPropertyFlags rhs) {
		return (static_cast<std::underlying_type_t<EPropertyFlags>>(lhs) & static_cast<std::underlying_type_t<EPropertyFlags>>(rhs)) == static_cast<std::underlying_type_t<EPropertyFlags>>(rhs);
	}
	inline bool operator&(EObjectFlags lhs, EObjectFlags rhs) {
		return (static_cast<std::underlying_type_t<EObjectFlags>>(lhs) & static_cast<std::underlying_type_t<EObjectFlags>>(rhs)) == static_cast<std::underlying_type_t<EObjectFlags>>(rhs);
	}
	std::string StringifyFlags(const EFunctionFlags flags);
	std::string StringifyFlags(const EPropertyFlags flags);
	std::string StringifyFlags(const EObjectFlags flags);

#pragma region Enums
	/////////////////////////////////////////////
	// Enum CoreUObject.EInterpCurveMode
	/////////////////////////////////////////////
	enum class EInterpCurveMode : uint8_t {
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX = 6,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.ERangeBoundTypes
	/////////////////////////////////////////////
	enum class ERangeBoundTypes : uint8_t {
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.ELocalizedTextSourceCategory
	/////////////////////////////////////////////
	enum class ELocalizedTextSourceCategory : uint8_t {
		Game = 0,
		Engine = 1,
		Editor = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EAutomationEventType
	/////////////////////////////////////////////
	enum class EAutomationEventType : uint8_t {
		Info = 0,
		Warning = 1,
		Error = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.ELifetimeCondition
	/////////////////////////////////////////////
	enum class ELifetimeCondition : uint8_t {
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
		COND_Never = 14,
		COND_Max = 15,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EDataValidationResult
	/////////////////////////////////////////////
	enum class EDataValidationResult : uint8_t {
		Invalid = 0,
		Valid = 1,
		NotValidated = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EAppMsgType
	/////////////////////////////////////////////
	enum class EAppMsgType : uint8_t {
		Ok = 0,
		YesNo = 1,
		OkCancel = 2,
		YesNoCancel = 3,
		CancelRetryContinue = 4,
		YesNoYesAllNoAll = 5,
		YesNoYesAllNoAllCancel = 6,
		YesNoYesAll = 7,
		MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EAppReturnType
	/////////////////////////////////////////////
	enum class EAppReturnType : uint8_t {
		No = 0,
		Yes = 1,
		YesAll = 2,
		NoAll = 3,
		Cancel = 4,
		Ok = 5,
		Retry = 6,
		Continue = 7,
		MAX = 8,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EPropertyAccessChangeNotifyMode
	/////////////////////////////////////////////
	enum class EPropertyAccessChangeNotifyMode : uint8_t {
		Default = 0,
		Never = 1,
		Always = 2,
		MAX = 3,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EUnit
	/////////////////////////////////////////////
	enum class EUnit : uint8_t {
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
		MAX = 50,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EMouseCursor
	/////////////////////////////////////////////
	enum class EMouseCursor : uint8_t {
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
		MAX = 14,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EPixelFormat
	/////////////////////////////////////////////
	enum class EPixelFormat : uint8_t {
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
		PF_PLATFORM_HDR_1 = 64,
		PF_PLATFORM_HDR_2 = 65,
		PF_PLATFORM_HDR_3 = 66,
		PF_NV12 = 67,
		PF_R32G32_UINT = 68,
		PF_ETC2_R11_EAC = 69,
		PF_ETC2_RG11_EAC = 70,
		MAX = 71,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.EAxis
	/////////////////////////////////////////////
	enum class EAxis : uint8_t {
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.ELogTimes
	/////////////////////////////////////////////
	enum class ELogTimes : uint8_t {
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		Local = 3,
		MAX = 4,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.ESearchDir
	/////////////////////////////////////////////
	enum class ESearchDir : uint8_t {
		FromStart = 0,
		FromEnd = 1,
		MAX = 2,
	};
	/////////////////////////////////////////////
	// Enum CoreUObject.ESearchCase
	/////////////////////////////////////////////
	enum class ESearchCase : uint8_t {
		CaseSensitive = 0,
		IgnoreCase = 1,
		MAX = 2,
	};
#pragma endregion
#pragma region Structs
	struct FJoinabilitySettings;
	struct FUniqueNetIdWrapper;
	struct FGuid;
	struct FVector;
	struct FVector4;
	struct FVector2D;
	struct FTwoVectors;
	struct FPlane;
	struct FRotator;
	struct FQuat;
	struct FPackedNormal;
	struct FPackedRGB10A2N;
	struct FPackedRGBA16N;
	struct FIntPoint;
	struct FIntVector;
	struct FColor;
	struct FLinearColor;
	struct FBox;
	struct FBox2D;
	struct FBoxSphereBounds;
	struct FOrientedBox;
	struct FMatrix;
	struct FInterpCurvePointFloat;
	struct FInterpCurveFloat;
	struct FInterpCurvePointVector2D;
	struct FInterpCurveVector2D;
	struct FInterpCurvePointVector;
	struct FInterpCurveVector;
	struct FInterpCurvePointQuat;
	struct FInterpCurveQuat;
	struct FInterpCurvePointTwoVectors;
	struct FInterpCurveTwoVectors;
	struct FInterpCurvePointLinearColor;
	struct FInterpCurveLinearColor;
	struct FTransform;
	struct FRandomStream;
	struct FDateTime;
	struct FFrameNumber;
	struct FFrameRate;
	struct FFrameTime;
	struct FQualifiedFrameTime;
	struct FTimecode;
	struct FTimespan;
	struct FSoftObjectPath;
	struct FSoftClassPath;
	struct FPrimaryAssetType;
	struct FPrimaryAssetId;
	struct FFallbackStruct;
	struct FFloatRangeBound;
	struct FFloatRange;
	struct FInt32RangeBound;
	struct FInt32Range;
	struct FFrameNumberRangeBound;
	struct FFrameNumberRange;
	struct FFloatInterval;
	struct FInt32Interval;
	struct FPolyglotTextData;
	struct FAutomationEvent;
	struct FAutomationExecutionEntry;
	struct FARFilter;
	struct FAssetBundleEntry;
	struct FAssetBundleData;
	struct FAssetData;
	struct FTestUninitializedScriptStructMembersTest;
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.JoinabilitySettings
	// Size 20
	/////////////////////////////////////////////
	struct FJoinabilitySettings {
		struct FName	SessionName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bPublicSearchable;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bAllowInvites;		//Offset: 9	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bJoinViaPresence;		//Offset: 10	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bJoinViaPresenceFriendsOnly;		//Offset: 11	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxPlayers;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	MaxPartySize;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.UniqueNetIdWrapper
	// Size 1
	/////////////////////////////////////////////
	struct FUniqueNetIdWrapper {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.TwoVectors
	// Size 24
	/////////////////////////////////////////////
	struct FTwoVectors {
		struct FVector	v1;		//Offset: 0	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	v2;		//Offset: 12	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.PackedNormal
	// Size 4
	/////////////////////////////////////////////
	struct FPackedNormal {
		unsigned char	X;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	Y;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	Z;		//Offset: 2	Size: 1	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char	W;		//Offset: 3	Size: 1	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.PackedRGB10A2N
	// Size 4
	/////////////////////////////////////////////
	struct FPackedRGB10A2N {
		int32_t	Packed;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.PackedRGBA16N
	// Size 8
	/////////////////////////////////////////////
	struct FPackedRGBA16N {
		int32_t	XY;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	ZW;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.IntPoint
	// Size 8
	/////////////////////////////////////////////
	struct FIntPoint {
		int32_t	X;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Y;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.IntVector
	// Size 12
	/////////////////////////////////////////////
	struct FIntVector {
		int32_t	X;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Y;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Z;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.Matrix
	// Size 64
	/////////////////////////////////////////////
	struct FMatrix {
		struct FPlane	XPlane;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane	YPlane;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane	ZPlane;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane	WPlane;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurvePointFloat
	// Size 20
	/////////////////////////////////////////////
	struct FInterpCurvePointFloat {
		float	InVal;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	OutVal;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	ArriveTangent;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	LeaveTangent;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EInterpCurveMode>	InterpMode;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurveFloat
	// Size 24
	/////////////////////////////////////////////
	struct FInterpCurveFloat {
		TArray<struct FInterpCurvePointFloat>	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool	bIsLooped;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	LoopKeyOffset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurvePointVector2D
	// Size 32
	/////////////////////////////////////////////
	struct FInterpCurvePointVector2D {
		float	InVal;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	OutVal;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	ArriveTangent;		//Offset: 12	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D	LeaveTangent;		//Offset: 20	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EInterpCurveMode>	InterpMode;		//Offset: 28	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 29	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurveVector2D
	// Size 24
	/////////////////////////////////////////////
	struct FInterpCurveVector2D {
		TArray<struct FInterpCurvePointVector2D>	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool	bIsLooped;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	LoopKeyOffset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurvePointVector
	// Size 44
	/////////////////////////////////////////////
	struct FInterpCurvePointVector {
		float	InVal;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	OutVal;		//Offset: 4	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	ArriveTangent;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector	LeaveTangent;		//Offset: 28	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EInterpCurveMode>	InterpMode;		//Offset: 40	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 41	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurveVector
	// Size 24
	/////////////////////////////////////////////
	struct FInterpCurveVector {
		TArray<struct FInterpCurvePointVector>	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool	bIsLooped;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	LoopKeyOffset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurvePointQuat
	// Size 80
	/////////////////////////////////////////////
	struct FInterpCurvePointQuat {
		float	InVal;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[12];		//Offset: 4	Size: 12
		struct FQuat	OutVal;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat	ArriveTangent;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat	LeaveTangent;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TEnumAsByte<EInterpCurveMode>	InterpMode;		//Offset: 64	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[15];		//Offset: 65	Size: 15
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurveQuat
	// Size 24
	/////////////////////////////////////////////
	struct FInterpCurveQuat {
		TArray<struct FInterpCurvePointQuat>	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool	bIsLooped;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	LoopKeyOffset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	// Size 80
	/////////////////////////////////////////////
	struct FInterpCurvePointTwoVectors {
		float	InVal;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTwoVectors	OutVal;		//Offset: 4	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoVectors	ArriveTangent;		//Offset: 28	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoVectors	LeaveTangent;		//Offset: 52	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TEnumAsByte<EInterpCurveMode>	InterpMode;		//Offset: 76	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 77	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurveTwoVectors
	// Size 24
	/////////////////////////////////////////////
	struct FInterpCurveTwoVectors {
		TArray<struct FInterpCurvePointTwoVectors>	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool	bIsLooped;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	LoopKeyOffset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurvePointLinearColor
	// Size 56
	/////////////////////////////////////////////
	struct FInterpCurvePointLinearColor {
		float	InVal;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	OutVal;		//Offset: 4	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	ArriveTangent;		//Offset: 20	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor	LeaveTangent;		//Offset: 36	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TEnumAsByte<EInterpCurveMode>	InterpMode;		//Offset: 52	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 53	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.InterpCurveLinearColor
	// Size 24
	/////////////////////////////////////////////
	struct FInterpCurveLinearColor {
		TArray<struct FInterpCurvePointLinearColor>	Points;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool	bIsLooped;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
		float	LoopKeyOffset;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.RandomStream
	// Size 8
	/////////////////////////////////////////////
	struct FRandomStream {
		int32_t	InitialSeed;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Seed;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.DateTime
	// Size 8
	/////////////////////////////////////////////
	struct FDateTime {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FrameNumber
	// Size 4
	/////////////////////////////////////////////
	struct FFrameNumber {
		int32_t	Value;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FrameRate
	// Size 8
	/////////////////////////////////////////////
	struct FFrameRate {
		int32_t	Numerator;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Denominator;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FrameTime
	// Size 8
	/////////////////////////////////////////////
	struct FFrameTime {
		struct FFrameNumber	FrameNumber;		//Offset: 0	Size: 4	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	SubFrame;		//Offset: 4	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.QualifiedFrameTime
	// Size 16
	/////////////////////////////////////////////
	struct FQualifiedFrameTime {
		struct FFrameTime	Time;		//Offset: 0	Size: 8	Flags: BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate	Rate;		//Offset: 8	Size: 8	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.Timecode
	// Size 20
	/////////////////////////////////////////////
	struct FTimecode {
		int32_t	Hours;		//Offset: 0	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Minutes;		//Offset: 4	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Seconds;		//Offset: 8	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Frames;		//Offset: 12	Size: 4	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bDropFrameFormat;		//Offset: 16	Size: 1	Flags: BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.Timespan
	// Size 8
	/////////////////////////////////////////////
	struct FTimespan {
		unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.PrimaryAssetType
	// Size 8
	/////////////////////////////////////////////
	struct FPrimaryAssetType {
		struct FName	Name;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.PrimaryAssetId
	// Size 16
	/////////////////////////////////////////////
	struct FPrimaryAssetId {
		struct FPrimaryAssetType	PrimaryAssetType;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	PrimaryAssetName;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FallbackStruct
	// Size 1
	/////////////////////////////////////////////
	struct FFallbackStruct {
		unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FloatRangeBound
	// Size 8
	/////////////////////////////////////////////
	struct FFloatRangeBound {
		TEnumAsByte<ERangeBoundTypes>	Type;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		float	Value;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FloatRange
	// Size 16
	/////////////////////////////////////////////
	struct FFloatRange {
		struct FFloatRangeBound	LowerBound;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRangeBound	UpperBound;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.Int32RangeBound
	// Size 8
	/////////////////////////////////////////////
	struct FInt32RangeBound {
		TEnumAsByte<ERangeBoundTypes>	Type;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		int32_t	Value;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.Int32Range
	// Size 16
	/////////////////////////////////////////////
	struct FInt32Range {
		struct FInt32RangeBound	LowerBound;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInt32RangeBound	UpperBound;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FrameNumberRangeBound
	// Size 8
	/////////////////////////////////////////////
	struct FFrameNumberRangeBound {
		TEnumAsByte<ERangeBoundTypes>	Type;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char uknownData_0[3];		//Offset: 1	Size: 3
		struct FFrameNumber	Value;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FrameNumberRange
	// Size 16
	/////////////////////////////////////////////
	struct FFrameNumberRange {
		struct FFrameNumberRangeBound	LowerBound;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumberRangeBound	UpperBound;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.FloatInterval
	// Size 8
	/////////////////////////////////////////////
	struct FFloatInterval {
		float	Min;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	Max;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.Int32Interval
	// Size 8
	/////////////////////////////////////////////
	struct FInt32Interval {
		int32_t	Min;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	Max;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.PolyglotTextData
	// Size 184
	/////////////////////////////////////////////
	struct FPolyglotTextData {
		ELocalizedTextSourceCategory	Category;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FString	NativeCulture;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Namespace;		//Offset: 24	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Key;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	NativeString;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FString, struct FString>	LocalizedStrings;		//Offset: 72	Size: 80	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool	bIsMinimalPatch;		//Offset: 152	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_1[7];		//Offset: 153	Size: 7
		struct FText	CachedText;		//Offset: 160	Size: 24	Flags: Transient, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.AutomationEvent
	// Size 56
	/////////////////////////////////////////////
	struct FAutomationEvent {
		EAutomationEventType	Type;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[7];		//Offset: 1	Size: 7
		struct FString	Message;		//Offset: 8	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Context;		//Offset: 24	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid	Artifact;		//Offset: 40	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.AutomationExecutionEntry
	// Size 88
	/////////////////////////////////////////////
	struct FAutomationExecutionEntry {
		struct FAutomationEvent	Event;		//Offset: 0	Size: 56	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FString	Filename;		//Offset: 56	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t	LineNumber;		//Offset: 72	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 76	Size: 4
		struct FDateTime	Timestamp;		//Offset: 80	Size: 8	Flags: ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.ARFilter
	// Size 240
	/////////////////////////////////////////////
	struct FARFilter {
		TArray<struct FName>	PackageNames;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FName>	PackagePaths;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FName>	ObjectPaths;		//Offset: 32	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FName>	ClassNames;		//Offset: 48	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char uknownData_0[80];		//Offset: 64	Size: 80
		unsigned char uknownData_1[80];		//Offset: 144	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool	bRecursivePaths;		//Offset: 224	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bRecursiveClasses;		//Offset: 225	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool	bIncludeOnlyOnDiskAssets;		//Offset: 226	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_2[13];		//Offset: 227	Size: 13
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.AssetBundleEntry
	// Size 24
	/////////////////////////////////////////////
	struct FAssetBundleEntry {
		struct FName	BundleName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>	BundleAssets;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.AssetBundleData
	// Size 16
	/////////////////////////////////////////////
	struct FAssetBundleData {
		TArray<struct FAssetBundleEntry>	Bundles;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.AssetData
	// Size 96
	/////////////////////////////////////////////
	struct FAssetData {
		struct FName	ObjectPath;		//Offset: 0	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	PackageName;		//Offset: 8	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	PackagePath;		//Offset: 16	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	AssetName;		//Offset: 24	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FName	AssetClass;		//Offset: 32	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[56];		//Offset: 40	Size: 56
	};
	/////////////////////////////////////////////
	// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
	// Size 24
	/////////////////////////////////////////////
	struct FTestUninitializedScriptStructMembersTest {
		class UObject* UninitializedObjectReference;		//Offset: 0	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject* InitializedObjectReference;		//Offset: 8	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float	UnusedValue;		//Offset: 16	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	};
#pragma endregion
}
